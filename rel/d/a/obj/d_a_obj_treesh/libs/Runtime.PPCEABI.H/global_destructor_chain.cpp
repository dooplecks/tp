// 
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_treesh/libs/Runtime.PPCEABI.H/global_destructor_chain.h"

// 
// Forward References:
// 


// False False
extern "C" void __register_global_object();
// True False
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_80D1F8C0[2];

// 
// External References:
// 



// 
// Declarations:
// 

/* ############################################################################################## */
/* 80D1F8BC-80D1F8C0 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference                             */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 80D1F8C0-80D1F8C8 0008+00 s=0 e=0 z=0  None .dtors     None                                                         */
void* const pad_80D1F8C0[2] = {
	(void*)__destroy_global_chain,
	(void*)NULL,
};

/* ############################################################################################## */
/* 80D1F988-80D1F990 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain                                    */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 80D1F058-80D1F074 001C+00 s=0 e=1 z=0  None .text      __register_global_object                                     */
//	80D1F058: 80D1F988 (__global_destructor_chain)
//	80D1F05C: 80D1F988 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __register_global_object() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_treesh/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop


/* 80D1F074-80D1F0CC 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain                                       */
//	80D1F084: 80D1F988 (__global_destructor_chain)
//	80D1F088: 80D1F988 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __destroy_global_chain() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_treesh/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop


