// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_key/executor.h"

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
extern void* const data_80C40FD8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80C3F320-80C3F34C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C3F32C: 80C40FD8 (data_80C40FD8)
//	80C3F330: 80C40FD8 (data_80C40FD8)
//	80C3F334: 8026314C (ModuleConstructorsX)
//	80C3F338: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_key/executor/_prolog.s"
}
#pragma pop


/* 80C3F34C-80C3F378 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C3F358: 8026308C (ModuleEpilog)
//	80C3F35C: 80C40FE0 (__destroy_global_chain_reference)
//	80C3F360: 80C40FE0 (__destroy_global_chain_reference)
//	80C3F364: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_key/executor/_epilog.s"
}
#pragma pop


/* 80C3F378-80C3F398 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C3F384: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_key/executor/_unresolved.s"
}
#pragma pop


