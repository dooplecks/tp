// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_aru/executor.h"

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
extern void* const data_809576BC[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 809516A0-809516CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	809516AC: 809576BC (data_809576BC)
//	809516B0: 809576BC (data_809576BC)
//	809516B4: 8026314C (ModuleConstructorsX)
//	809516B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_aru/executor/_prolog.s"
}
#pragma pop


/* 809516CC-809516F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	809516D8: 8026308C (ModuleEpilog)
//	809516DC: 809576C4 (__destroy_global_chain_reference)
//	809516E0: 809576C4 (__destroy_global_chain_reference)
//	809516E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_aru/executor/_epilog.s"
}
#pragma pop


/* 809516F8-80951718 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80951704: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_aru/executor/_unresolved.s"
}
#pragma pop


