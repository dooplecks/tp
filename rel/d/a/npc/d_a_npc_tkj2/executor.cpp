// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_tkj2/executor.h"

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
extern void* const data_80B142C8[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80B10D00-80B10D2C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80B10D0C: 80B142C8 (data_80B142C8)
//	80B10D10: 80B142C8 (data_80B142C8)
//	80B10D14: 8026314C (ModuleConstructorsX)
//	80B10D18: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tkj2/executor/_prolog.s"
}
#pragma pop


/* 80B10D2C-80B10D58 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80B10D38: 8026308C (ModuleEpilog)
//	80B10D3C: 80B142D0 (__destroy_global_chain_reference)
//	80B10D40: 80B142D0 (__destroy_global_chain_reference)
//	80B10D44: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tkj2/executor/_epilog.s"
}
#pragma pop


/* 80B10D58-80B10D78 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80B10D64: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_tkj2/executor/_unresolved.s"
}
#pragma pop


