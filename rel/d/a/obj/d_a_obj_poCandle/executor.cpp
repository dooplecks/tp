// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_poCandle/executor.h"

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
extern void* const data_80CB26A4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80CB1980-80CB19AC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80CB198C: 80CB26A4 (data_80CB26A4)
//	80CB1990: 80CB26A4 (data_80CB26A4)
//	80CB1994: 8026314C (ModuleConstructorsX)
//	80CB1998: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poCandle/executor/_prolog.s"
}
#pragma pop


/* 80CB19AC-80CB19D8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80CB19B8: 8026308C (ModuleEpilog)
//	80CB19BC: 80CB26AC (__destroy_global_chain_reference)
//	80CB19C0: 80CB26AC (__destroy_global_chain_reference)
//	80CB19C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poCandle/executor/_epilog.s"
}
#pragma pop


/* 80CB19D8-80CB19F8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80CB19E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_poCandle/executor/_unresolved.s"
}
#pragma pop


