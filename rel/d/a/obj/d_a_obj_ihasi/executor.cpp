// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_ihasi/executor.h"

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
extern u8 const data_80C26880[4];
extern u8 const data_80C26884[4];

// 
// Declarations:
// 

/* 80C25FA0-80C25FCC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C25FAC: 80C26880 (data_80C26880)
//	80C25FB0: 80C26880 (data_80C26880)
//	80C25FB4: 8026314C (ModuleConstructorsX)
//	80C25FB8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/executor/_prolog.s"
}
#pragma pop


/* 80C25FCC-80C25FF8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C25FD8: 8026308C (ModuleEpilog)
//	80C25FDC: 80C26884 (data_80C26884)
//	80C25FE0: 80C26884 (data_80C26884)
//	80C25FE4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/executor/_epilog.s"
}
#pragma pop


/* 80C25FF8-80C26018 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C26004: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ihasi/executor/_unresolved.s"
}
#pragma pop


