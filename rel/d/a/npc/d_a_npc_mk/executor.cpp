// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_mk/executor.h"

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
extern u8 const data_80A73E00[4];
extern u8 const data_80A73E04[4];

// 
// Declarations:
// 

/* 80A73D60-80A73D8C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80A73D6C: 80A73E00 (data_80A73E00)
//	80A73D70: 80A73E00 (data_80A73E00)
//	80A73D74: 8026314C (ModuleConstructorsX)
//	80A73D78: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_mk/executor/_prolog.s"
}
#pragma pop


/* 80A73D8C-80A73DB8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80A73D98: 8026308C (ModuleEpilog)
//	80A73D9C: 80A73E04 (data_80A73E04)
//	80A73DA0: 80A73E04 (data_80A73E04)
//	80A73DA4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_mk/executor/_epilog.s"
}
#pragma pop


/* 80A73DB8-80A73DD8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80A73DC4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_mk/executor/_unresolved.s"
}
#pragma pop


