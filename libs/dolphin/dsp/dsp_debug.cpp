// 
// Generated By: dol2asm
// Translation Unit: dsp_debug
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "dolphin/dsp/dsp_debug.h"

// 
// Forward References:
// 


// False False
extern "C" void __DSP_debug_printf();

// 
// External References:
// 



// 
// Declarations:
// 

/* 80352580-803525D0 0050+00 s=0 e=2 z=0  None .text      __DSP_debug_printf                                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __DSP_debug_printf() {
	nofralloc
#include "asm/dolphin/dsp/dsp_debug/__DSP_debug_printf.s"
}
#pragma pop


