// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_scannon_ten/executor.h"

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
extern void* const data_80CCCC2C[2];
extern u8 const data_80CCCC34[4];

// 
// Declarations:
// 

/* 80CCB2A0-80CCB2CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80CCB2AC: 80CCCC2C (data_80CCCC2C)
//	80CCB2B0: 80CCCC2C (data_80CCCC2C)
//	80CCB2B4: 8026314C (ModuleConstructorsX)
//	80CCB2B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_scannon_ten/executor/_prolog.s"
}
#pragma pop


/* 80CCB2CC-80CCB2F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80CCB2D8: 8026308C (ModuleEpilog)
//	80CCB2DC: 80CCCC34 (data_80CCCC34)
//	80CCB2E0: 80CCCC34 (data_80CCCC34)
//	80CCB2E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_scannon_ten/executor/_epilog.s"
}
#pragma pop


/* 80CCB2F8-80CCB318 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80CCB304: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_scannon_ten/executor/_unresolved.s"
}
#pragma pop


