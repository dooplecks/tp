// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_gnd/executor.h"

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
extern void* const data_809BE48C[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 809BB520-809BB54C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	809BB52C: 809BE48C (data_809BE48C)
//	809BB530: 809BE48C (data_809BE48C)
//	809BB534: 8026314C (ModuleConstructorsX)
//	809BB538: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_gnd/executor/_prolog.s"
}
#pragma pop


/* 809BB54C-809BB578 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	809BB558: 8026308C (ModuleEpilog)
//	809BB55C: 809BE494 (__destroy_global_chain_reference)
//	809BB560: 809BE494 (__destroy_global_chain_reference)
//	809BB564: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_gnd/executor/_epilog.s"
}
#pragma pop


/* 809BB578-809BB598 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	809BB584: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_gnd/executor/_unresolved.s"
}
#pragma pop


