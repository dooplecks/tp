// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_blue_ns/executor.h"

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
extern void* const data_8096C90C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80968880-809688AC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8096888C: 8096C90C (data_8096C90C)
//	80968890: 8096C90C (data_8096C90C)
//	80968894: 8026314C (ModuleConstructorsX)
//	80968898: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_blue_ns/executor/_prolog.s"
}
#pragma pop


/* 809688AC-809688D8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	809688B8: 8026308C (ModuleEpilog)
//	809688BC: 8096C914 (__destroy_global_chain_reference)
//	809688C0: 8096C914 (__destroy_global_chain_reference)
//	809688C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_blue_ns/executor/_epilog.s"
}
#pragma pop


/* 809688D8-809688F8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	809688E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_blue_ns/executor/_unresolved.s"
}
#pragma pop


