//
// Generated By: dol2asm
// Translation Unit: MetroTRK/Portable/mem_TRK
//

#include "TRK_MINNOW_DOLPHIN/MetroTRK/Portable/mem_TRK.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void TRK_fill_mem();

//
// External References:
//

//
// Declarations:
//

/* 8036F580-8036F638 369EC0 00B8+00 0/0 1/1 0/0 .text            TRK_fill_mem */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void TRK_fill_mem() {
    nofralloc
#include "asm/TRK_MINNOW_DOLPHIN/MetroTRK/Portable/mem_TRK/TRK_fill_mem.s"
}
#pragma pop
