// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_drainSol/executor.h"

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
extern void* const data_809AF990[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 809ADD80-809ADDAC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	809ADD8C: 809AF990 (data_809AF990)
//	809ADD90: 809AF990 (data_809AF990)
//	809ADD94: 8026314C (ModuleConstructorsX)
//	809ADD98: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/executor/_prolog.s"
}
#pragma pop


/* 809ADDAC-809ADDD8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	809ADDB8: 8026308C (ModuleEpilog)
//	809ADDBC: 809AF998 (__destroy_global_chain_reference)
//	809ADDC0: 809AF998 (__destroy_global_chain_reference)
//	809ADDC4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/executor/_epilog.s"
}
#pragma pop


/* 809ADDD8-809ADDF8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	809ADDE4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/executor/_unresolved.s"
}
#pragma pop


