// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/e/d_a_e_nest/executor.h"

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
extern void* const data_805046C8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80500EA0-80500ECC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80500EAC: 805046C8 (data_805046C8)
//	80500EB0: 805046C8 (data_805046C8)
//	80500EB4: 8026314C (ModuleConstructorsX)
//	80500EB8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_nest/executor/_prolog.s"
}
#pragma pop


/* 80500ECC-80500EF8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80500ED8: 8026308C (ModuleEpilog)
//	80500EDC: 805046D0 (__destroy_global_chain_reference)
//	80500EE0: 805046D0 (__destroy_global_chain_reference)
//	80500EE4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_nest/executor/_epilog.s"
}
#pragma pop


/* 80500EF8-80500F18 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80500F04: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/e/d_a_e_nest/executor/_unresolved.s"
}
#pragma pop


