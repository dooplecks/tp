// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/d_a_peru/executor.h"

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
extern void* const data_80D4C04C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80D46E00-80D46E2C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80D46E0C: 80D4C04C (data_80D4C04C)
//	80D46E10: 80D4C04C (data_80D4C04C)
//	80D46E14: 8026314C (ModuleConstructorsX)
//	80D46E18: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/d_a_peru/executor/_prolog.s"
}
#pragma pop


/* 80D46E2C-80D46E58 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80D46E38: 8026308C (ModuleEpilog)
//	80D46E3C: 80D4C054 (__destroy_global_chain_reference)
//	80D46E40: 80D4C054 (__destroy_global_chain_reference)
//	80D46E44: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/d_a_peru/executor/_epilog.s"
}
#pragma pop


/* 80D46E58-80D46E78 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80D46E64: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/d_a_peru/executor/_unresolved.s"
}
#pragma pop


