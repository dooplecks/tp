// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_syRock/executor.h"

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
extern void* const data_80D03F7C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80D021C0-80D021EC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80D021CC: 80D03F7C (data_80D03F7C)
//	80D021D0: 80D03F7C (data_80D03F7C)
//	80D021D4: 8026314C (ModuleConstructorsX)
//	80D021D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_syRock/executor/_prolog.s"
}
#pragma pop


/* 80D021EC-80D02218 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80D021F8: 8026308C (ModuleEpilog)
//	80D021FC: 80D03F84 (__destroy_global_chain_reference)
//	80D02200: 80D03F84 (__destroy_global_chain_reference)
//	80D02204: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_syRock/executor/_epilog.s"
}
#pragma pop


/* 80D02218-80D02238 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80D02224: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_syRock/executor/_unresolved.s"
}
#pragma pop


