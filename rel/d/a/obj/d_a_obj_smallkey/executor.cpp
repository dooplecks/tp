// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_smallkey/executor.h"

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
extern u8 const data_80CDB7EC[4];
extern u8 const data_80CDB7F0[4];

// 
// Declarations:
// 

/* 80CD9740-80CD976C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80CD974C: 80CDB7EC (data_80CDB7EC)
//	80CD9750: 80CDB7EC (data_80CDB7EC)
//	80CD9754: 8026314C (ModuleConstructorsX)
//	80CD9758: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smallkey/executor/_prolog.s"
}
#pragma pop


/* 80CD976C-80CD9798 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80CD9778: 8026308C (ModuleEpilog)
//	80CD977C: 80CDB7F0 (data_80CDB7F0)
//	80CD9780: 80CDB7F0 (data_80CDB7F0)
//	80CD9784: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smallkey/executor/_epilog.s"
}
#pragma pop


/* 80CD9798-80CD97B8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80CD97A4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smallkey/executor/_unresolved.s"
}
#pragma pop


