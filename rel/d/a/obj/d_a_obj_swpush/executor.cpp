// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_swpush/executor.h"

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
extern u8 const data_80484D00[4];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80482C60-80482C8C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80482C6C: 80484D00 (data_80484D00)
//	80482C70: 80484D00 (data_80484D00)
//	80482C74: 8026314C (ModuleConstructorsX)
//	80482C78: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush/executor/_prolog.s"
}
#pragma pop


/* 80482C8C-80482CB8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80482C98: 8026308C (ModuleEpilog)
//	80482C9C: 80484D04 (__destroy_global_chain_reference)
//	80482CA0: 80484D04 (__destroy_global_chain_reference)
//	80482CA4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush/executor/_epilog.s"
}
#pragma pop


/* 80482CB8-80482CD8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80482CC4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush/executor/_unresolved.s"
}
#pragma pop


