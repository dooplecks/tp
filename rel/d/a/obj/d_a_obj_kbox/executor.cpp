// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_kbox/executor.h"

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
extern void* const data_80C3F044[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80C3D520-80C3D54C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C3D52C: 80C3F044 (data_80C3F044)
//	80C3D530: 80C3F044 (data_80C3F044)
//	80C3D534: 8026314C (ModuleConstructorsX)
//	80C3D538: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kbox/executor/_prolog.s"
}
#pragma pop


/* 80C3D54C-80C3D578 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C3D558: 8026308C (ModuleEpilog)
//	80C3D55C: 80C3F04C (__destroy_global_chain_reference)
//	80C3D560: 80C3F04C (__destroy_global_chain_reference)
//	80C3D564: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kbox/executor/_epilog.s"
}
#pragma pop


/* 80C3D578-80C3D598 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C3D584: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_kbox/executor/_unresolved.s"
}
#pragma pop


