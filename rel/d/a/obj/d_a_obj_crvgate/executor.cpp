// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_crvgate/executor.h"

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
extern u8 const data_80BD30B8[4];
extern u8 const data_80BD30BC[4];

// 
// Declarations:
// 

/* 80BD0320-80BD034C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80BD032C: 80BD30B8 (data_80BD30B8)
//	80BD0330: 80BD30B8 (data_80BD30B8)
//	80BD0334: 8026314C (ModuleConstructorsX)
//	80BD0338: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/executor/_prolog.s"
}
#pragma pop


/* 80BD034C-80BD0378 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80BD0358: 8026308C (ModuleEpilog)
//	80BD035C: 80BD30BC (data_80BD30BC)
//	80BD0360: 80BD30BC (data_80BD30BC)
//	80BD0364: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/executor/_epilog.s"
}
#pragma pop


/* 80BD0378-80BD0398 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80BD0384: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crvgate/executor/_unresolved.s"
}
#pragma pop


