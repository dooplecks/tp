// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_tornado2/executor.h"

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
extern u8 const data_80D1D3CC[4];
extern u8 const data_80D1D3D0[4];

// 
// Declarations:
// 

/* 80D1C460-80D1C48C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80D1C46C: 80D1D3CC (data_80D1D3CC)
//	80D1C470: 80D1D3CC (data_80D1D3CC)
//	80D1C474: 8026314C (ModuleConstructorsX)
//	80D1C478: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/executor/_prolog.s"
}
#pragma pop


/* 80D1C48C-80D1C4B8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80D1C498: 8026308C (ModuleEpilog)
//	80D1C49C: 80D1D3D0 (data_80D1D3D0)
//	80D1C4A0: 80D1D3D0 (data_80D1D3D0)
//	80D1C4A4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/executor/_epilog.s"
}
#pragma pop


/* 80D1C4B8-80D1C4D8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80D1C4C4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tornado2/executor/_unresolved.s"
}
#pragma pop


