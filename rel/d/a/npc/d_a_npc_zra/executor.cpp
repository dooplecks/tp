// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_zra/executor.h"

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
extern void* const data_80B8C444[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80B78420-80B7844C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80B7842C: 80B8C444 (data_80B8C444)
//	80B78430: 80B8C444 (data_80B8C444)
//	80B78434: 8026314C (ModuleConstructorsX)
//	80B78438: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zra/executor/_prolog.s"
}
#pragma pop


/* 80B7844C-80B78478 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80B78458: 8026308C (ModuleEpilog)
//	80B7845C: 80B8C44C (__destroy_global_chain_reference)
//	80B78460: 80B8C44C (__destroy_global_chain_reference)
//	80B78464: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zra/executor/_epilog.s"
}
#pragma pop


/* 80B78478-80B78498 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80B78484: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_zra/executor/_unresolved.s"
}
#pragma pop


