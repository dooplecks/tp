// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_fmobj/executor.h"

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
extern u8 const data_8057CF60[4];
extern u8 const data_8057CF64[4];

// 
// Declarations:
// 

/* 8057CB60-8057CB8C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8057CB6C: 8057CF60 (data_8057CF60)
//	8057CB70: 8057CF60 (data_8057CF60)
//	8057CB74: 8026314C (ModuleConstructorsX)
//	8057CB78: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fmobj/executor/_prolog.s"
}
#pragma pop


/* 8057CB8C-8057CBB8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8057CB98: 8026308C (ModuleEpilog)
//	8057CB9C: 8057CF64 (data_8057CF64)
//	8057CBA0: 8057CF64 (data_8057CF64)
//	8057CBA4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fmobj/executor/_epilog.s"
}
#pragma pop


/* 8057CBB8-8057CBD8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8057CBC4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fmobj/executor/_unresolved.s"
}
#pragma pop


