// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_firepillar/executor.h"

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
extern u8 const data_80BE9A98[4];
extern u8 const data_80BE9A9C[4];

// 
// Declarations:
// 

/* 80BE90A0-80BE90CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80BE90AC: 80BE9A98 (data_80BE9A98)
//	80BE90B0: 80BE9A98 (data_80BE9A98)
//	80BE90B4: 8026314C (ModuleConstructorsX)
//	80BE90B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar/executor/_prolog.s"
}
#pragma pop


/* 80BE90CC-80BE90F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80BE90D8: 8026308C (ModuleEpilog)
//	80BE90DC: 80BE9A9C (data_80BE9A9C)
//	80BE90E0: 80BE9A9C (data_80BE9A9C)
//	80BE90E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar/executor/_epilog.s"
}
#pragma pop


/* 80BE90F8-80BE9118 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80BE9104: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_firepillar/executor/_unresolved.s"
}
#pragma pop


