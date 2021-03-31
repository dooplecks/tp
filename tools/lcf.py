
"""

lcf.py

Generates the .lcf file used for the linker. This will auto force actives missing functions and data
and apply some fixes with makes it easier to decompile.

"""

VERSION = "1.0"

import os
import sys
import click
import io
from pathlib import Path

class PathPath(click.Path):
    def convert(self, value, param, ctx):
        return Path(super().convert(value, param, ctx))

# laod the symbol definition file for main.dol
sys.path.append('defs')
import module0
import libar
import libelf

@click.command()
@click.version_option(VERSION)
@click.option('--output', '-o', 'output_path', required=False, type=PathPath(file_okay=True, dir_okay=False), default="ldscript.lcf")
def lcf(output_path):
    """ Script for generating .lcf files """
    
    # load symbols from compiled files
    symbols = []
    for archive in ARCHIVES:
        symbols.extend(load_archive(archive))

    # load object files from the 'build/o_files', this way we need no list of 
    # object files in the python code.
    with open("build/o_files", 'r') as content_file:
        o_files = content_file.read().strip().split(" ")

    for o_file in o_files:
        with open(o_file, 'rb') as file:
            obj = libelf.load_object_from_file(None, o_file, file)
            symbols.extend(get_symbols_from_object_file(obj))

    # write the file
    with output_path.open("w") as file:
        file.write("MEMORY {\n")
        file.write("\ttext: origin = 0x80003100\n")
        file.write("}\n")
        file.write("\n")

        file.write("SECTIONS {\n")
        file.write("\tGROUP:{\n")

        for name, align in SECTIONS:
            file.write("\t\t%s ALIGN(0x%X):{}\n" % (name, align))

        file.write("\t\t/DISCARD/ : { *(.dead) }\n")

        file.write("\t} > text\n")
        file.write("\t_stack_addr = (_f_sbss2 + SIZEOF(.sbss2) + 65536 + 0x7) & ~0x7;\n")
        file.write("\t_stack_end = _f_sbss2 + SIZEOF(.sbss2);\n")
        file.write("\t_db_stack_addr = (_stack_addr + 0x2000);\n")
        file.write("\t_db_stack_end = _stack_addr;\n")
        file.write("\t__ArenaLo = (_db_stack_addr + 0x1f) & ~0x1f;\n")
        file.write("\t__ArenaHi = 0x81700000;\n")
        file.write("\n")
        file.write("\t/* Below are functions that are not matching the original mangled name */\n")

        file.write("\n")
        file.write("\t/* missing symbols */\n")

        # improve decompilation workflow by making so that function 
        # which, for what ever reason, cannot be named the same as
        # the expected name to work. This will happen for all symbols 
        # with weird characters. 
        base_names = set(module0.SYMBOL_NAMES.keys())
        main_names = set([sym.name for sym in symbols])
        names = base_names - main_names
        for name in names:
            symbol = module0.SYMBOLS[module0.SYMBOL_NAMES[name]]
            if symbol['type'] == "StringBase": # @stringBase0 is handled below
                continue
            if symbol['type'] == "LinkerGenerated": # linker handles these symbols
                continue

            file.write(f"\t\"{symbol['label']}\" = 0x{symbol['addr']:08X};\n")
        file.write("\n")

        # @stringBase0 is generated by the compiler. The dol2asm is using a trick to 
        # simulate the stringBase0 by creating another symbol (at the same location)
        # that is used instead, as it is impossible to reference the "@stringBase0" (because of the @).
        # So all references will be to the new symbol, thus the linker will think
        # that the @stringBase0 symbol is never used and strip it. 
        file.write("\t/* @stringBase0 */\n")
        for x in module0.SYMBOLS:
            if x['type'] == "StringBase":
                file.write("\t\"%s\" = 0x%08X;\n" % (x['label'], x['addr']))

        file.write("}\n")
        file.write("\n")

        file.write("FORCEACTIVE {\n")
        for f in FORCE_ACTIVE:
            file.write("\t\"%s\"\n" % f)
        file.write("\n")

        file.write("\t/* unreferenced symbols */\n")
        for x in module0.SYMBOLS:
            k = x['label']
            if x['type'] == "StringBase":
                continue

            require_force_active = False
            """
            rc = x['r']

            # the static reference count is unchanged as the linker seems not to strip
            # static variables and functions. i.e., if the static reference count is
            # non-zero then the symbol does not need force active.
            static_rc = rc[0]
            extern_rc = rc[1]
            rels_rc = rc[2]

            # the symbol is only referenced by rels and is required to be forceactive.
            # I assume the process of generating rels will generate a list of forceactive
            # symbols that we can later use instead.
            if static_rc == 0 and extern_rc == 0 and rels_rc > 0:
                require_force_active = True

            # symbol has no references! this indicates that there is a problem with
            # dol2asm. as symbols without references should have been remove by the linker
            # when Nintendo did the first compile. Most be reference which we currently cannot
            # determine.
            if static_rc == 0 and extern_rc == 0 and rels_rc == 0:
                require_force_active = True

            if rels_rc > 0:
                require_force_active = True

            if k.startswith("__sinit_"):
                require_force_active = True

            if k.startswith("__vt__"):
                require_force_active = True
            """

            if not x['is_reachable']:
                require_force_active = True

            # generate the force active.
            # the linker 
            if require_force_active:
                file.write(f"\t\"{x['label']}\"\n")
                if not x['label'] in main_names:
                    file.write(f"\t\"{x['name']}\"\n")
                file.write(f"\t/* {x['label'] in main_names} */ \n")

        for x in module0.SYMBOLS:
            if x['type'] == "StringBase":
                continue

            if x['is_reachable']:
                if x['label'] !=  x['name']:
                    file.write(f"\t\"{x['name']}\"\n")

        for symbol in symbols:
            if not symbol.name:
                continue

            if "__template" in symbol.name:
                file.write("\t\"%s\"\n" % (symbol.name))

        file.write("\n")
        file.write("}\n")
        file.write("\n")

def get_symbols_from_object_file(obj):
    symbols = []
    for sym in obj.symbols:
        if not isinstance(sym, libelf.OffsetSymbol):
            continue
        symbols.append(sym)
    return symbols

def load_archive(path):
    symbols = []
    
    archive = libar.read(path)
    for path, data in archive.files:
        data_io = io.BytesIO(data)
        obj = libelf.load_object_from_file(None, path, data_io)
        symbols.extend(get_symbols_from_object_file(obj))

    return symbols

SECTIONS = [
    (".init", 0x20),
    ("extab_", 0x20),
    ("extabindex_", 0x20),
    (".text", 0x20),
    (".ctors", 0x20),
    (".dtors", 0x20),
    (".rodata", 0x20),
    (".data", 0x20),
    (".bss", 0x20),
    (".sdata", 0x20),
    (".sbss", 0x20),
    (".sdata2", 0x20),
    (".sbss2", 0x20),
    (".stack", 0x100),
    #(".dead", 0x100),
]

# custom force actives
FORCE_ACTIVE = []

ARCHIVES = [
    "build/dolzel2/libSComponent.a",
    "build/dolzel2/libSStandard.a",
    "build/dolzel2/libJFramework.a",
    "build/dolzel2/libJ3DU.a",
    "build/dolzel2/libJParticle.a",
    "build/dolzel2/libJStage.a",
    "build/dolzel2/libJStudio.a",
    "build/dolzel2/libJStudio_JStage.a",
    "build/dolzel2/libJStudio_JAudio2.a",
    "build/dolzel2/libJStudio_JParticle.a",
    "build/dolzel2/libJAudio2.a",
    "build/dolzel2/libJMessage.a",
    "build/dolzel2/libZ2AudioLib.a",
    "build/dolzel2/libgf.a",
    "build/dolzel2/libJKernel.a",
    "build/dolzel2/libJSupport.a",
    "build/dolzel2/libJGadget.a",
    "build/dolzel2/libJUtility.a",
    "build/dolzel2/libJ2DGraph.a",
    "build/dolzel2/libJ3DGraphBase.a",
    "build/dolzel2/libJ3DGraphAnimator.a",
    "build/dolzel2/libJ3DGraphLoader.a",
    "build/dolzel2/libJMath.a",
    "build/dolzel2/libbase.a",
    "build/dolzel2/libos.a",
    "build/dolzel2/libexi.a",
    "build/dolzel2/libsi.a",
    "build/dolzel2/libdb.a",
    "build/dolzel2/libmtx.a",
    "build/dolzel2/libdvd.a",
    "build/dolzel2/libvi.a",
    "build/dolzel2/libpad.a",
    "build/dolzel2/libai.a",
    "build/dolzel2/libar.a",
    "build/dolzel2/libdsp.a",
    "build/dolzel2/libcard.a",
    "build/dolzel2/libgx.a",
    "build/dolzel2/libgd.a",
    "build/dolzel2/libRuntime.PPCEABI.H.a",
    "build/dolzel2/libMSL_C.PPCEABI.bare.H.a",
    "build/dolzel2/libTRK_MINNOW_DOLPHIN.a",
    "build/dolzel2/libamcstubs.a",
    "build/dolzel2/libodemuexi2.a",
    "build/dolzel2/libodenotstub.a",
]

if __name__ == "__main__":
    lcf()
