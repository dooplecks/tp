// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/d_a_bg/executor.h"

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
extern u8 const data_8045936C[4];
extern u8 const data_80459370[4];

// 
// Declarations:
// 

/* 80457B80-80457BAC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80457B8C: 8045936C (data_8045936C)
//	80457B90: 8045936C (data_8045936C)
//	80457B94: 8026314C (ModuleConstructorsX)
//	80457B98: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/d_a_bg/executor/_prolog.s"
}
#pragma pop


/* 80457BAC-80457BD8 002C+00 s=0 e=0 z=3  None .text      _epilog                                                      */
//	80457BB8: 8026308C (ModuleEpilog)
//	80457BBC: 80459370 (data_80459370)
//	80457BC0: 80459370 (data_80459370)
//	80457BC4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/d_a_bg/executor/_epilog.s"
}
#pragma pop


/* 80457BD8-80457BF8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80457BE4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/d_a_bg/executor/_unresolved.s"
}
#pragma pop


