// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_oc/executor.h"

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
extern void* const data_80735B14[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 8072C4E0-8072C50C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8072C4EC: 80735B14 (data_80735B14)
//	8072C4F0: 80735B14 (data_80735B14)
//	8072C4F4: 8026314C (ModuleConstructorsX)
//	8072C4F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_oc/executor/_prolog.s"
}
#pragma pop


/* 8072C50C-8072C538 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8072C518: 8026308C (ModuleEpilog)
//	8072C51C: 80735B1C (__destroy_global_chain_reference)
//	8072C520: 80735B1C (__destroy_global_chain_reference)
//	8072C524: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_oc/executor/_epilog.s"
}
#pragma pop


/* 8072C538-8072C558 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8072C544: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_oc/executor/_unresolved.s"
}
#pragma pop


