// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_saru/executor.h"

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
extern void* const data_80AC44E4[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80AC0340-80AC036C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80AC034C: 80AC44E4 (data_80AC44E4)
//	80AC0350: 80AC44E4 (data_80AC44E4)
//	80AC0354: 8026314C (ModuleConstructorsX)
//	80AC0358: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_saru/executor/_prolog.s"
}
#pragma pop


/* 80AC036C-80AC0398 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80AC0378: 8026308C (ModuleEpilog)
//	80AC037C: 80AC44EC (__destroy_global_chain_reference)
//	80AC0380: 80AC44EC (__destroy_global_chain_reference)
//	80AC0384: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_saru/executor/_epilog.s"
}
#pragma pop


/* 80AC0398-80AC03B8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80AC03A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_saru/executor/_unresolved.s"
}
#pragma pop


