// 
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/e_fmod
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/e_fmod.h"

// 
// Forward References:
// 


// False False
extern "C" void __ieee754_fmod();

// 
// External References:
// 



// 
// Declarations:
// 

/* ############################################################################################## */
/* 803A2370-803A2380 0010+00 s=1 e=0 z=0  None .rodata    Zero                                                         */
SECTION_RODATA static u8 const Zero[16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80369B9C-80369ED8 033C+00 s=0 e=1 z=0  None .text      __ieee754_fmod                                               */
//	80369C24: 803A2370 (Zero)
//	80369C2C: 803A2370 (Zero)
//	80369DBC: 803A2370 (Zero)
//	80369DC4: 803A2370 (Zero)
//	80369E10: 803A2370 (Zero)
//	80369E18: 803A2370 (Zero)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __ieee754_fmod() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/e_fmod/__ieee754_fmod.s"
}
#pragma pop


