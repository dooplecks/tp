// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_ot/executor.h"

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
extern void* const data_8073CE94[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 8073A1E0-8073A20C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8073A1EC: 8073CE94 (data_8073CE94)
//	8073A1F0: 8073CE94 (data_8073CE94)
//	8073A1F4: 8026314C (ModuleConstructorsX)
//	8073A1F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ot/executor/_prolog.s"
}
#pragma pop


/* 8073A20C-8073A238 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8073A218: 8026308C (ModuleEpilog)
//	8073A21C: 8073CE9C (__destroy_global_chain_reference)
//	8073A220: 8073CE9C (__destroy_global_chain_reference)
//	8073A224: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ot/executor/_epilog.s"
}
#pragma pop


/* 8073A238-8073A258 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8073A244: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_ot/executor/_unresolved.s"
}
#pragma pop


