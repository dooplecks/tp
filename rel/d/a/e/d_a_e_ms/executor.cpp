// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_ms/executor.h"

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
extern void* const data_807294F0[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80725AA0-80725ACC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80725AAC: 807294F0 (data_807294F0)
//	80725AB0: 807294F0 (data_807294F0)
//	80725AB4: 8026314C (ModuleConstructorsX)
//	80725AB8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ms/executor/_prolog.s"
}
#pragma pop


/* 80725ACC-80725AF8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80725AD8: 8026308C (ModuleEpilog)
//	80725ADC: 807294F8 (__destroy_global_chain_reference)
//	80725AE0: 807294F8 (__destroy_global_chain_reference)
//	80725AE4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ms/executor/_epilog.s"
}
#pragma pop


/* 80725AF8-80725B18 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80725B04: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ms/executor/_unresolved.s"
}
#pragma pop


