// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_howl/executor.h"

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
extern u8 const data_8048DD5C[4];
extern u8 const data_8048DD60[4];

// 
// Declarations:
// 

/* 8048D8E0-8048D90C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8048D8EC: 8048DD5C (data_8048DD5C)
//	8048D8F0: 8048DD5C (data_8048DD5C)
//	8048D8F4: 8026314C (ModuleConstructorsX)
//	8048D8F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/executor/_prolog.s"
}
#pragma pop


/* 8048D90C-8048D938 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8048D918: 8026308C (ModuleEpilog)
//	8048D91C: 8048DD60 (data_8048DD60)
//	8048D920: 8048DD60 (data_8048DD60)
//	8048D924: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/executor/_epilog.s"
}
#pragma pop


/* 8048D938-8048D958 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8048D944: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_howl/executor/_unresolved.s"
}
#pragma pop


