// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_fireWood2/executor.h"

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
extern void* const data_80BE8F20[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80BE8160-80BE818C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80BE816C: 80BE8F20 (data_80BE8F20)
//	80BE8170: 80BE8F20 (data_80BE8F20)
//	80BE8174: 8026314C (ModuleConstructorsX)
//	80BE8178: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/executor/_prolog.s"
}
#pragma pop


/* 80BE818C-80BE81B8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80BE8198: 8026308C (ModuleEpilog)
//	80BE819C: 80BE8F28 (__destroy_global_chain_reference)
//	80BE81A0: 80BE8F28 (__destroy_global_chain_reference)
//	80BE81A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/executor/_epilog.s"
}
#pragma pop


/* 80BE81B8-80BE81D8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80BE81C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood2/executor/_unresolved.s"
}
#pragma pop


