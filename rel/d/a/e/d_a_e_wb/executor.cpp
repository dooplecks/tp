// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_wb/executor.h"

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
extern void* const data_807E2978[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 807D23A0-807D23CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	807D23AC: 807E2978 (data_807E2978)
//	807D23B0: 807E2978 (data_807E2978)
//	807D23B4: 8026314C (ModuleConstructorsX)
//	807D23B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_wb/executor/_prolog.s"
}
#pragma pop


/* 807D23CC-807D23F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	807D23D8: 8026308C (ModuleEpilog)
//	807D23DC: 807E2980 (__destroy_global_chain_reference)
//	807D23E0: 807E2980 (__destroy_global_chain_reference)
//	807D23E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_wb/executor/_epilog.s"
}
#pragma pop


/* 807D23F8-807D2418 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	807D2404: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_wb/executor/_unresolved.s"
}
#pragma pop


