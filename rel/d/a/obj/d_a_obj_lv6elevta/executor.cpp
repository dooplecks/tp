// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv6elevta/executor.h"

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
extern u8 const data_80C83808[4];
extern u8 const data_80C8380C[4];

// 
// Declarations:
// 

/* 80C82CC0-80C82CEC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C82CCC: 80C83808 (data_80C83808)
//	80C82CD0: 80C83808 (data_80C83808)
//	80C82CD4: 8026314C (ModuleConstructorsX)
//	80C82CD8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/executor/_prolog.s"
}
#pragma pop


/* 80C82CEC-80C82D18 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C82CF8: 8026308C (ModuleEpilog)
//	80C82CFC: 80C8380C (data_80C8380C)
//	80C82D00: 80C8380C (data_80C8380C)
//	80C82D04: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/executor/_epilog.s"
}
#pragma pop


/* 80C82D18-80C82D38 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C82D24: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv6elevta/executor/_unresolved.s"
}
#pragma pop


