// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_gb/executor.h"

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
extern u8 const data_80BF6DB4[4];
extern u8 const data_80BF6DB8[4];

// 
// Declarations:
// 

/* 80BF62A0-80BF62CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80BF62AC: 80BF6DB4 (data_80BF6DB4)
//	80BF62B0: 80BF6DB4 (data_80BF6DB4)
//	80BF62B4: 8026314C (ModuleConstructorsX)
//	80BF62B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/executor/_prolog.s"
}
#pragma pop


/* 80BF62CC-80BF62F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80BF62D8: 8026308C (ModuleEpilog)
//	80BF62DC: 80BF6DB8 (data_80BF6DB8)
//	80BF62E0: 80BF6DB8 (data_80BF6DB8)
//	80BF62E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/executor/_epilog.s"
}
#pragma pop


/* 80BF62F8-80BF6318 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80BF6304: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_gb/executor/_unresolved.s"
}
#pragma pop


