// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_suisya/executor.h"

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
extern u8 const data_80CF0518[4];
extern u8 const data_80CF051C[4];

// 
// Declarations:
// 

/* 80CF0000-80CF002C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80CF000C: 80CF0518 (data_80CF0518)
//	80CF0010: 80CF0518 (data_80CF0518)
//	80CF0014: 8026314C (ModuleConstructorsX)
//	80CF0018: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/executor/_prolog.s"
}
#pragma pop


/* 80CF002C-80CF0058 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80CF0038: 8026308C (ModuleEpilog)
//	80CF003C: 80CF051C (data_80CF051C)
//	80CF0040: 80CF051C (data_80CF051C)
//	80CF0044: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/executor/_epilog.s"
}
#pragma pop


/* 80CF0058-80CF0078 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80CF0064: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_suisya/executor/_unresolved.s"
}
#pragma pop


