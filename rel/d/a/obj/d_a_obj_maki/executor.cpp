// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_maki/executor.h"

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
extern void* const data_80C90920[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80C8FD20-80C8FD4C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C8FD2C: 80C90920 (data_80C90920)
//	80C8FD30: 80C90920 (data_80C90920)
//	80C8FD34: 8026314C (ModuleConstructorsX)
//	80C8FD38: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/executor/_prolog.s"
}
#pragma pop


/* 80C8FD4C-80C8FD78 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C8FD58: 8026308C (ModuleEpilog)
//	80C8FD5C: 80C90928 (__destroy_global_chain_reference)
//	80C8FD60: 80C90928 (__destroy_global_chain_reference)
//	80C8FD64: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/executor/_epilog.s"
}
#pragma pop


/* 80C8FD78-80C8FD98 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C8FD84: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_maki/executor/_unresolved.s"
}
#pragma pop


