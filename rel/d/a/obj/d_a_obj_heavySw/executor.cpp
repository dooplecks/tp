// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_heavySw/executor.h"

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
extern void* const data_80C1DA80[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80C1CA00-80C1CA2C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C1CA0C: 80C1DA80 (data_80C1DA80)
//	80C1CA10: 80C1DA80 (data_80C1DA80)
//	80C1CA14: 8026314C (ModuleConstructorsX)
//	80C1CA18: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_heavySw/executor/_prolog.s"
}
#pragma pop


/* 80C1CA2C-80C1CA58 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C1CA38: 8026308C (ModuleEpilog)
//	80C1CA3C: 80C1DA88 (__destroy_global_chain_reference)
//	80C1CA40: 80C1DA88 (__destroy_global_chain_reference)
//	80C1CA44: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_heavySw/executor/_epilog.s"
}
#pragma pop


/* 80C1CA58-80C1CA78 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C1CA64: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_heavySw/executor/_unresolved.s"
}
#pragma pop


