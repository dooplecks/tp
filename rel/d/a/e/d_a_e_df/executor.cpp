// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_df/executor.h"

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
extern void* const data_806A9F1C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 806A7600-806A762C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	806A760C: 806A9F1C (data_806A9F1C)
//	806A7610: 806A9F1C (data_806A9F1C)
//	806A7614: 8026314C (ModuleConstructorsX)
//	806A7618: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_df/executor/_prolog.s"
}
#pragma pop


/* 806A762C-806A7658 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	806A7638: 8026308C (ModuleEpilog)
//	806A763C: 806A9F24 (__destroy_global_chain_reference)
//	806A7640: 806A9F24 (__destroy_global_chain_reference)
//	806A7644: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_df/executor/_epilog.s"
}
#pragma pop


/* 806A7658-806A7678 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	806A7664: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_df/executor/_unresolved.s"
}
#pragma pop


