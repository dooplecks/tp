// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_df/executor.h"

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
extern void* const data_809A6890[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 809A52A0-809A52CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	809A52AC: 809A6890 (data_809A6890)
//	809A52B0: 809A6890 (data_809A6890)
//	809A52B4: 8026314C (ModuleConstructorsX)
//	809A52B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/executor/_prolog.s"
}
#pragma pop


/* 809A52CC-809A52F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	809A52D8: 8026308C (ModuleEpilog)
//	809A52DC: 809A6898 (__destroy_global_chain_reference)
//	809A52E0: 809A6898 (__destroy_global_chain_reference)
//	809A52E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/executor/_epilog.s"
}
#pragma pop


/* 809A52F8-809A5318 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	809A5304: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/executor/_unresolved.s"
}
#pragma pop


