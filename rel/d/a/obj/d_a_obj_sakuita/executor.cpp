// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_sakuita/executor.h"

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
extern u8 const data_80CC50AC[4];
extern u8 const data_80CC50B0[4];

// 
// Declarations:
// 

/* 80CC4680-80CC46AC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80CC468C: 80CC50AC (data_80CC50AC)
//	80CC4690: 80CC50AC (data_80CC50AC)
//	80CC4694: 8026314C (ModuleConstructorsX)
//	80CC4698: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/executor/_prolog.s"
}
#pragma pop


/* 80CC46AC-80CC46D8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80CC46B8: 8026308C (ModuleEpilog)
//	80CC46BC: 80CC50B0 (data_80CC50B0)
//	80CC46C0: 80CC50B0 (data_80CC50B0)
//	80CC46C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/executor/_epilog.s"
}
#pragma pop


/* 80CC46D8-80CC46F8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80CC46E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_sakuita/executor/_unresolved.s"
}
#pragma pop


