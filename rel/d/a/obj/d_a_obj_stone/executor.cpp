// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_stone/executor.h"

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
extern u8 const data_80CECAAC[4];
extern u8 const data_80CECAB0[4];

// 
// Declarations:
// 

/* 80CE9000-80CE902C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80CE900C: 80CECAAC (data_80CECAAC)
//	80CE9010: 80CECAAC (data_80CECAAC)
//	80CE9014: 8026314C (ModuleConstructorsX)
//	80CE9018: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stone/executor/_prolog.s"
}
#pragma pop


/* 80CE902C-80CE9058 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80CE9038: 8026308C (ModuleEpilog)
//	80CE903C: 80CECAB0 (data_80CECAB0)
//	80CE9040: 80CECAB0 (data_80CECAB0)
//	80CE9044: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stone/executor/_epilog.s"
}
#pragma pop


/* 80CE9058-80CE9078 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80CE9064: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stone/executor/_unresolved.s"
}
#pragma pop


