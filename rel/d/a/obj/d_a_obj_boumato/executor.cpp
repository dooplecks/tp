// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_boumato/executor.h"

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
extern void* const data_80BBC45C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80BBAF00-80BBAF2C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80BBAF0C: 80BBC45C (data_80BBC45C)
//	80BBAF10: 80BBC45C (data_80BBC45C)
//	80BBAF14: 8026314C (ModuleConstructorsX)
//	80BBAF18: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_boumato/executor/_prolog.s"
}
#pragma pop


/* 80BBAF2C-80BBAF58 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80BBAF38: 8026308C (ModuleEpilog)
//	80BBAF3C: 80BBC464 (__destroy_global_chain_reference)
//	80BBAF40: 80BBC464 (__destroy_global_chain_reference)
//	80BBAF44: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_boumato/executor/_epilog.s"
}
#pragma pop


/* 80BBAF58-80BBAF78 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80BBAF64: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_boumato/executor/_unresolved.s"
}
#pragma pop


