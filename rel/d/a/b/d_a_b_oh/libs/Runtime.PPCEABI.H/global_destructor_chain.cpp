// 
// Generated By: dol2asm
// Translation Unit: global_destructor_chain
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/b/d_a_b_oh/libs/Runtime.PPCEABI.H/global_destructor_chain.h"

// 
// Forward References:
// 


// False False
extern "C" void __register_global_object();
// True False
extern "C" static void __destroy_global_chain();
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;
extern void* const pad_8061D9CC[2];

// 
// External References:
// 



// 
// Declarations:
// 

/* ############################################################################################## */
/* 8061D9C8-8061D9CC 0004+00 s=0 e=1 z=0  None .dtors     __destroy_global_chain_reference                             */
SECTION_DTORS10 void* const __destroy_global_chain_reference = (void*)__destroy_global_chain;

/* 8061D9CC-8061D9D4 0008+00 s=0 e=0 z=0  None .dtors     None                                                         */
void* const pad_8061D9CC[2] = {
	(void*)__destroy_global_chain,
	(void*)NULL,
};

/* ############################################################################################## */
/* 8061DB70-8061DB78 0004+04 s=2 e=0 z=0  None .bss       __global_destructor_chain                                    */
static u8 __global_destructor_chain[4 + 4 /* padding */];

/* 8061B6B8-8061B6D4 001C+00 s=0 e=1 z=0  None .text      __register_global_object                                     */
//	8061B6B8: 8061DB70 (__global_destructor_chain)
//	8061B6BC: 8061DB70 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __register_global_object() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/libs/Runtime.PPCEABI.H/global_destructor_chain/__register_global_object.s"
}
#pragma pop


/* 8061B6D4-8061B72C 0058+00 s=2 e=0 z=0  None .text      __destroy_global_chain                                       */
//	8061B6E4: 8061DB70 (__global_destructor_chain)
//	8061B6E8: 8061DB70 (__global_destructor_chain)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void __destroy_global_chain() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_oh/libs/Runtime.PPCEABI.H/global_destructor_chain/__destroy_global_chain.s"
}
#pragma pop


