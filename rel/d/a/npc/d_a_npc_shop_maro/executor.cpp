// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/npc/d_a_npc_shop_maro/executor.h"

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
extern u8 const data_80AEC910[4];
extern u8 const data_80AEC914[4];

// 
// Declarations:
// 

/* 80AEBDE0-80AEBE0C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80AEBDEC: 80AEC910 (data_80AEC910)
//	80AEBDF0: 80AEC910 (data_80AEC910)
//	80AEBDF4: 8026314C (ModuleConstructorsX)
//	80AEBDF8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_shop_maro/executor/_prolog.s"
}
#pragma pop


/* 80AEBE0C-80AEBE38 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80AEBE18: 8026308C (ModuleEpilog)
//	80AEBE1C: 80AEC914 (data_80AEC914)
//	80AEBE20: 80AEC914 (data_80AEC914)
//	80AEBE24: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_shop_maro/executor/_epilog.s"
}
#pragma pop


/* 80AEBE38-80AEBE58 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80AEBE44: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/npc/d_a_npc_shop_maro/executor/_unresolved.s"
}
#pragma pop


