// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_yamit/executor.h"

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
extern void* const data_80B4CD90[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80B49B00-80B49B2C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80B49B0C: 80B4CD90 (data_80B4CD90)
//	80B49B10: 80B4CD90 (data_80B4CD90)
//	80B49B14: 8026314C (ModuleConstructorsX)
//	80B49B18: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_yamit/executor/_prolog.s"
}
#pragma pop


/* 80B49B2C-80B49B58 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80B49B38: 8026308C (ModuleEpilog)
//	80B49B3C: 80B4CD98 (__destroy_global_chain_reference)
//	80B49B40: 80B4CD98 (__destroy_global_chain_reference)
//	80B49B44: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_yamit/executor/_epilog.s"
}
#pragma pop


/* 80B49B58-80B49B78 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80B49B64: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_yamit/executor/_unresolved.s"
}
#pragma pop


