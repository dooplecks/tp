// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_lf/executor.h"

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
extern void* const data_80A6A968[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80A69A80-80A69AAC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80A69A8C: 80A6A968 (data_80A6A968)
//	80A69A90: 80A6A968 (data_80A6A968)
//	80A69A94: 8026314C (ModuleConstructorsX)
//	80A69A98: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/executor/_prolog.s"
}
#pragma pop


/* 80A69AAC-80A69AD8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80A69AB8: 8026308C (ModuleEpilog)
//	80A69ABC: 80A6A970 (__destroy_global_chain_reference)
//	80A69AC0: 80A6A970 (__destroy_global_chain_reference)
//	80A69AC4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/executor/_epilog.s"
}
#pragma pop


/* 80A69AD8-80A69AF8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80A69AE4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_lf/executor/_unresolved.s"
}
#pragma pop


