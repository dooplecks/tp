// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_ym/executor.h"

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
extern void* const data_80815980[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80808040-8080806C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8080804C: 80815980 (data_80815980)
//	80808050: 80815980 (data_80815980)
//	80808054: 8026314C (ModuleConstructorsX)
//	80808058: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ym/executor/_prolog.s"
}
#pragma pop


/* 8080806C-80808098 002C+00 s=0 e=0 z=2  None .text      _epilog                                                      */
//	80808078: 8026308C (ModuleEpilog)
//	8080807C: 80815988 (__destroy_global_chain_reference)
//	80808080: 80815988 (__destroy_global_chain_reference)
//	80808084: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ym/executor/_epilog.s"
}
#pragma pop


/* 80808098-808080B8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	808080A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ym/executor/_unresolved.s"
}
#pragma pop


