// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/d_a_hitobj/executor.h"

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
extern u8 const data_8046B5CC[4];
extern u8 const data_8046B5D0[4];

// 
// Declarations:
// 

/* 8046B2E0-8046B30C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8046B2EC: 8046B5CC (data_8046B5CC)
//	8046B2F0: 8046B5CC (data_8046B5CC)
//	8046B2F4: 8026314C (ModuleConstructorsX)
//	8046B2F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/d_a_hitobj/executor/_prolog.s"
}
#pragma pop


/* 8046B30C-8046B338 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8046B318: 8026308C (ModuleEpilog)
//	8046B31C: 8046B5D0 (data_8046B5D0)
//	8046B320: 8046B5D0 (data_8046B5D0)
//	8046B324: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/d_a_hitobj/executor/_epilog.s"
}
#pragma pop


/* 8046B338-8046B358 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8046B344: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/d_a_hitobj/executor/_unresolved.s"
}
#pragma pop


