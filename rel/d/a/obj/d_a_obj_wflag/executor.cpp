// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_wflag/executor.h"

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
extern u8 const data_80D37884[4];
extern u8 const data_80D37888[4];

// 
// Declarations:
// 

/* 80D36B20-80D36B4C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80D36B2C: 80D37884 (data_80D37884)
//	80D36B30: 80D37884 (data_80D37884)
//	80D36B34: 8026314C (ModuleConstructorsX)
//	80D36B38: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/executor/_prolog.s"
}
#pragma pop


/* 80D36B4C-80D36B78 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80D36B58: 8026308C (ModuleEpilog)
//	80D36B5C: 80D37888 (data_80D37888)
//	80D36B60: 80D37888 (data_80D37888)
//	80D36B64: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/executor/_epilog.s"
}
#pragma pop


/* 80D36B78-80D36B98 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80D36B84: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/executor/_unresolved.s"
}
#pragma pop


