// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_gob/executor.h"

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
extern void* const data_806DEE24[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 806D7FA0-806D7FCC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	806D7FAC: 806DEE24 (data_806DEE24)
//	806D7FB0: 806DEE24 (data_806DEE24)
//	806D7FB4: 8026314C (ModuleConstructorsX)
//	806D7FB8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_gob/executor/_prolog.s"
}
#pragma pop


/* 806D7FCC-806D7FF8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	806D7FD8: 8026308C (ModuleEpilog)
//	806D7FDC: 806DEE2C (__destroy_global_chain_reference)
//	806D7FE0: 806DEE2C (__destroy_global_chain_reference)
//	806D7FE4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_gob/executor/_epilog.s"
}
#pragma pop


/* 806D7FF8-806D8018 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	806D8004: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_gob/executor/_unresolved.s"
}
#pragma pop


