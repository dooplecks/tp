// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_inobone/executor.h"

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
extern u8 const data_80C28118[4];
extern u8 const data_80C2811C[4];

// 
// Declarations:
// 

/* 80C27640-80C2766C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80C2764C: 80C28118 (data_80C28118)
//	80C27650: 80C28118 (data_80C28118)
//	80C27654: 8026314C (ModuleConstructorsX)
//	80C27658: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_inobone/executor/_prolog.s"
}
#pragma pop


/* 80C2766C-80C27698 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80C27678: 8026308C (ModuleEpilog)
//	80C2767C: 80C2811C (data_80C2811C)
//	80C27680: 80C2811C (data_80C2811C)
//	80C27684: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_inobone/executor/_epilog.s"
}
#pragma pop


/* 80C27698-80C276B8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80C276A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_inobone/executor/_unresolved.s"
}
#pragma pop


