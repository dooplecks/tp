// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv8Lift/executor.h"

// 
// Forward References:
// 


// False False
extern "C" void _prolog();
// False False
extern "C" void _epilog();
// False False
extern "C" void _unresolved();

// 
// External References:
// 


// False False
//  void False
extern "C" void ModuleProlog();
// False False
//  void False
extern "C" void ModuleEpilog();
// False False
extern "C" void ModuleUnresolved();
// False False
extern "C" void ModuleConstructorsX();
// False False
extern "C" void ModuleDestructorsX();
extern void* const data_80C89F4C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80C88640-80C8866C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C8864C: 80C89F4C (data_80C89F4C)
//	80C88650: 80C89F4C (data_80C89F4C)
//	80C88654: 8026314C (ModuleConstructorsX)
//	80C88658: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8Lift/executor/_prolog.s"
}
#pragma pop


/* 80C8866C-80C88698 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C88678: 8026308C (ModuleEpilog)
//	80C8867C: 80C89F54 (__destroy_global_chain_reference)
//	80C88680: 80C89F54 (__destroy_global_chain_reference)
//	80C88684: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8Lift/executor/_epilog.s"
}
#pragma pop


/* 80C88698-80C886B8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C886A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv8Lift/executor/_unresolved.s"
}
#pragma pop


