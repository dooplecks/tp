//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/strtoul
//

#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/strtoul.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void strtol();
extern "C" void strtoul();
extern "C" void __strtoul();

//
// External References:
//

extern "C" void __StringRead();
extern "C" extern u8 __ctype_map[256];
extern "C" extern u8 __upper_map[256];
extern "C" extern u8 errno[4 + 4 /* padding */];

//
// Declarations:
//

/* 80368C00-80368CF0 363540 00F0+00 0/0 3/3 0/0 .text            strtol */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void strtol() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/strtoul/strtol.s"
}
#pragma pop

/* 80368CF0-80368D9C 363630 00AC+00 0/0 2/2 0/0 .text            strtoul */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void strtoul() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/strtoul/strtoul.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D3148-803D3190 -00001 0044+04 1/1 0/0 0/0 .data            @431 */
SECTION_DATA static void* lit_431[17 + 1 /* padding */] = {
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0xC4),
    (void*)(((char*)__strtoul) + 0x164),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x1AC),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x1FC),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x310),
    (void*)(((char*)__strtoul) + 0x1FC),
    /* padding */
    NULL,
};

/* 80368D9C-80369114 3636DC 0378+00 3/2 0/0 0/0 .text            __strtoul */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __strtoul() {
    nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/MSL_Common/Src/strtoul/__strtoul.s"
}
#pragma pop
