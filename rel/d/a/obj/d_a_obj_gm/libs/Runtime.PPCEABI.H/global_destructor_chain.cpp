// 
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_gm/libs/Runtime.PPCEABI.H/global_destructor_chain.h"

// 
// Forward References:
// 


// False False
extern "C" void __register_global_object();
// True False
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_80BFD324[2];

// 
// External References:
// 



// 
// Declarations:
// 

/* ############################################################################################## */
/* 80BFD320-80BFD324 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference                             */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 80BFD324-80BFD32C 0008+00 s=0 e=0 z=0  None .dtors     None                                                         */
void* const pad_80BFD324[2] = {
	(void*)__destroy_global_chain,
	(void*)NULL,
};

/* ############################################################################################## */
/* 80BFD590-80BFD598 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain                                    */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 80BFB0D8-80BFB0F4 001C+00 s=0 e=1 z=0  None .text      __register_global_object                                     */
//	80BFB0D8: 80BFD590 (__global_destructor_chain)
//	80BFB0DC: 80BFD590 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __register_global_object() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gm/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop


/* 80BFB0F4-80BFB14C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain                                       */
//	80BFB104: 80BFD590 (__global_destructor_chain)
//	80BFB108: 80BFD590 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __destroy_global_chain() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gm/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop


