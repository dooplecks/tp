// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_yg/executor.h"

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
extern void* const data_807FCCA0[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 807F8260-807F828C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	807F826C: 807FCCA0 (data_807FCCA0)
//	807F8270: 807FCCA0 (data_807FCCA0)
//	807F8274: 8026314C (ModuleConstructorsX)
//	807F8278: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_yg/executor/_prolog.s"
}
#pragma pop


/* 807F828C-807F82B8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	807F8298: 8026308C (ModuleEpilog)
//	807F829C: 807FCCA8 (__destroy_global_chain_reference)
//	807F82A0: 807FCCA8 (__destroy_global_chain_reference)
//	807F82A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_yg/executor/_epilog.s"
}
#pragma pop


/* 807F82B8-807F82D8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	807F82C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_yg/executor/_unresolved.s"
}
#pragma pop


