// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv4CandleDemoTag/executor.h"

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
extern void* const data_80C5D204[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80C5C900-80C5C92C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C5C90C: 80C5D204 (data_80C5D204)
//	80C5C910: 80C5D204 (data_80C5D204)
//	80C5C914: 8026314C (ModuleConstructorsX)
//	80C5C918: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleDemoTag/executor/_prolog.s"
}
#pragma pop


/* 80C5C92C-80C5C958 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C5C938: 8026308C (ModuleEpilog)
//	80C5C93C: 80C5D20C (__destroy_global_chain_reference)
//	80C5C940: 80C5D20C (__destroy_global_chain_reference)
//	80C5C944: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleDemoTag/executor/_epilog.s"
}
#pragma pop


/* 80C5C958-80C5C978 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C5C964: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleDemoTag/executor/_unresolved.s"
}
#pragma pop


