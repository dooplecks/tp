// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_nz/executor.h"

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
extern void* const data_8072C16C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80729900-8072992C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8072990C: 8072C16C (data_8072C16C)
//	80729910: 8072C16C (data_8072C16C)
//	80729914: 8026314C (ModuleConstructorsX)
//	80729918: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_nz/executor/_prolog.s"
}
#pragma pop


/* 8072992C-80729958 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80729938: 8026308C (ModuleEpilog)
//	8072993C: 8072C174 (__destroy_global_chain_reference)
//	80729940: 8072C174 (__destroy_global_chain_reference)
//	80729944: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_nz/executor/_epilog.s"
}
#pragma pop


/* 80729958-80729978 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80729964: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_nz/executor/_unresolved.s"
}
#pragma pop


