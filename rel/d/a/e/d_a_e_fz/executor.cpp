// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_fz/executor.h"

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
extern void* const data_806C1924[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 806BE860-806BE88C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	806BE86C: 806C1924 (data_806C1924)
//	806BE870: 806C1924 (data_806C1924)
//	806BE874: 8026314C (ModuleConstructorsX)
//	806BE878: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_fz/executor/_prolog.s"
}
#pragma pop


/* 806BE88C-806BE8B8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	806BE898: 8026308C (ModuleEpilog)
//	806BE89C: 806C192C (__destroy_global_chain_reference)
//	806BE8A0: 806C192C (__destroy_global_chain_reference)
//	806BE8A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_fz/executor/_epilog.s"
}
#pragma pop


/* 806BE8B8-806BE8D8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	806BE8C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_fz/executor/_unresolved.s"
}
#pragma pop


