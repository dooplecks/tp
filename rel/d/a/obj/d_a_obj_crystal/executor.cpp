// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_crystal/executor.h"

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
extern u8 const data_80BD68B4[4];
extern u8 const data_80BD68B8[4];

// 
// Declarations:
// 

/* 80BD6320-80BD634C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80BD632C: 80BD68B4 (data_80BD68B4)
//	80BD6330: 80BD68B4 (data_80BD68B4)
//	80BD6334: 8026314C (ModuleConstructorsX)
//	80BD6338: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crystal/executor/_prolog.s"
}
#pragma pop


/* 80BD634C-80BD6378 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80BD6358: 8026308C (ModuleEpilog)
//	80BD635C: 80BD68B8 (data_80BD68B8)
//	80BD6360: 80BD68B8 (data_80BD68B8)
//	80BD6364: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crystal/executor/_epilog.s"
}
#pragma pop


/* 80BD6378-80BD6398 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80BD6384: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_crystal/executor/_unresolved.s"
}
#pragma pop


