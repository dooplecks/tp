//
// Generated By: dol2asm
// Translation Unit: MSL_Common/Src/float
//

#include "MSL_C.PPCEABI.bare.H/MSL_Common/Src/float.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" extern u32 __float_nan;
extern "C" extern u32 __float_huge;
extern "C" extern u32 __float_max;
extern "C" extern u32 __float_epsilon;
extern "C" extern u32 data_80450AF0;

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80450AE0-80450AE4 000560 0004+00 0/0 204/204 1060/1060 .sdata           __float_nan */
SECTION_SDATA extern u32 __float_nan = 0x7FFFFFFF;

/* 80450AE4-80450AE8 000564 0004+00 0/0 1/1 0/0 .sdata           __float_huge */
SECTION_SDATA extern u32 __float_huge = 0x7F800000;

/* 80450AE8-80450AEC 000568 0004+00 0/0 18/18 14/14 .sdata           __float_max */
SECTION_SDATA extern u32 __float_max = 0x7F7FFFFF;

/* 80450AEC-80450AF0 00056C 0004+00 0/0 28/28 0/0 .sdata           __float_epsilon */
SECTION_SDATA extern u32 __float_epsilon = 0x34000000;

/* 80450AF0-80450AF4 000570 0004+00 0/0 1/1 0/0 .sdata           None */
SECTION_SDATA extern u32 data_80450AF0 = 0x80000000;
