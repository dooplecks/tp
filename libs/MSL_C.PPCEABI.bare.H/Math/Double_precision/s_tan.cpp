// 
// Generated By: dol2asm
// Translation Unit: Math/Double_precision/s_tan
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "MSL_C.PPCEABI.bare.H/Math/Double_precision/s_tan.h"

// 
// Forward References:
// 


// False False
extern "C" void tan();

// 
// External References:
// 


// False False
extern "C" void __ieee754_rem_pio2();
// False False
extern "C" void __kernel_tan();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80456B40-80456B48 0008+00 s=1 e=0 z=0  None .sdata2    @58                                                          */
SECTION_SDATA2 static u8 lit_58[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8036C668-8036C6E0 0078+00 s=0 e=7 z=4  None .text      tan                                                          */
//	8036C690: 80456B40 (lit_58)
//	8036C698: 8036BA90 (__kernel_tan)
//	8036C6B8: 8036A708 (__ieee754_rem_pio2)
//	8036C6CC: 8036BA90 (__kernel_tan)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void tan() {
	nofralloc
#include "asm/MSL_C.PPCEABI.bare.H/Math/Double_precision/s_tan/tan.s"
}
#pragma pop


