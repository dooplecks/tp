// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/b/d_a_b_tn/executor.h"

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
extern void* const data_8062E620[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 8061EB00-8061EB2C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8061EB0C: 8062E620 (data_8062E620)
//	8061EB10: 8062E620 (data_8062E620)
//	8061EB14: 8026314C (ModuleConstructorsX)
//	8061EB18: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_tn/executor/_prolog.s"
}
#pragma pop


/* 8061EB2C-8061EB58 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8061EB38: 8026308C (ModuleEpilog)
//	8061EB3C: 8062E628 (__destroy_global_chain_reference)
//	8061EB40: 8062E628 (__destroy_global_chain_reference)
//	8061EB44: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_tn/executor/_epilog.s"
}
#pragma pop


/* 8061EB58-8061EB78 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8061EB64: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_tn/executor/_unresolved.s"
}
#pragma pop


