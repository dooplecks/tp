// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_fan/executor.h"

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
extern u8 const data_80BE5D78[4];
extern u8 const data_80BE5D7C[4];

// 
// Declarations:
// 

/* 80BE4BC0-80BE4BEC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80BE4BCC: 80BE5D78 (data_80BE5D78)
//	80BE4BD0: 80BE5D78 (data_80BE5D78)
//	80BE4BD4: 8026314C (ModuleConstructorsX)
//	80BE4BD8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fan/executor/_prolog.s"
}
#pragma pop


/* 80BE4BEC-80BE4C18 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80BE4BF8: 8026308C (ModuleEpilog)
//	80BE4BFC: 80BE5D7C (data_80BE5D7C)
//	80BE4C00: 80BE5D7C (data_80BE5D7C)
//	80BE4C04: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fan/executor/_epilog.s"
}
#pragma pop


/* 80BE4C18-80BE4C38 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80BE4C24: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fan/executor/_unresolved.s"
}
#pragma pop


