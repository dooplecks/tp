// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/d_a_econt/executor.h"

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
extern u8 const data_80519774[4];
extern u8 const data_80519778[4];

// 
// Declarations:
// 

/* 805194A0-805194CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	805194AC: 80519774 (data_80519774)
//	805194B0: 80519774 (data_80519774)
//	805194B4: 8026314C (ModuleConstructorsX)
//	805194B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/d_a_econt/executor/_prolog.s"
}
#pragma pop


/* 805194CC-805194F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	805194D8: 8026308C (ModuleEpilog)
//	805194DC: 80519778 (data_80519778)
//	805194E0: 80519778 (data_80519778)
//	805194E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/d_a_econt/executor/_epilog.s"
}
#pragma pop


/* 805194F8-80519518 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80519504: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/d_a_econt/executor/_unresolved.s"
}
#pragma pop


