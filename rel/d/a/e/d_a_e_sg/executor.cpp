// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_sg/executor.h"

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
extern void* const data_8078DD90[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 8078A140-8078A16C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8078A14C: 8078DD90 (data_8078DD90)
//	8078A150: 8078DD90 (data_8078DD90)
//	8078A154: 8026314C (ModuleConstructorsX)
//	8078A158: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_sg/executor/_prolog.s"
}
#pragma pop


/* 8078A16C-8078A198 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8078A178: 8026308C (ModuleEpilog)
//	8078A17C: 8078DD98 (__destroy_global_chain_reference)
//	8078A180: 8078DD98 (__destroy_global_chain_reference)
//	8078A184: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_sg/executor/_epilog.s"
}
#pragma pop


/* 8078A198-8078A1B8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8078A1A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_sg/executor/_unresolved.s"
}
#pragma pop


