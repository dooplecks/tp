// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_swpropeller/executor.h"

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
extern u8 const data_8059B2C0[4];
extern u8 const data_8059B2C4[4];

// 
// Declarations:
// 

/* 8059A4A0-8059A4CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8059A4AC: 8059B2C0 (data_8059B2C0)
//	8059A4B0: 8059B2C0 (data_8059B2C0)
//	8059A4B4: 8026314C (ModuleConstructorsX)
//	8059A4B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpropeller/executor/_prolog.s"
}
#pragma pop


/* 8059A4CC-8059A4F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8059A4D8: 8026308C (ModuleEpilog)
//	8059A4DC: 8059B2C4 (data_8059B2C4)
//	8059A4E0: 8059B2C4 (data_8059B2C4)
//	8059A4E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpropeller/executor/_epilog.s"
}
#pragma pop


/* 8059A4F8-8059A518 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8059A504: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpropeller/executor/_unresolved.s"
}
#pragma pop


