// 
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_sm2/libs/Runtime.PPCEABI.H/global_destructor_chain.h"

// 
// Forward References:
// 


// False False
extern "C" void __register_global_object();
// True False
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_8079D5A8[2];

// 
// External References:
// 



// 
// Declarations:
// 

/* ############################################################################################## */
/* 8079D5A4-8079D5A8 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference                             */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 8079D5A8-8079D5B0 0008+00 s=0 e=0 z=0  None .dtors     None                                                         */
void* const pad_8079D5A8[2] = {
	(void*)__destroy_global_chain,
	(void*)NULL,
};

/* ############################################################################################## */
/* 8079DB80-8079DB88 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain                                    */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 80798AD8-80798AF4 001C+00 s=0 e=1 z=0  None .text      __register_global_object                                     */
//	80798AD8: 8079DB80 (__global_destructor_chain)
//	80798ADC: 8079DB80 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __register_global_object() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_sm2/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop


/* 80798AF4-80798B4C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain                                       */
//	80798B04: 8079DB80 (__global_destructor_chain)
//	80798B08: 8079DB80 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __destroy_global_chain() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_sm2/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop


