// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/kytag/d_a_kytag03/executor.h"

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
extern u8 const data_80857648[4];
extern u8 const data_8085764C[4];

// 
// Declarations:
// 

/* 80855E60-80855E8C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80855E6C: 80857648 (data_80857648)
//	80855E70: 80857648 (data_80857648)
//	80855E74: 8026314C (ModuleConstructorsX)
//	80855E78: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/executor/_prolog.s"
}
#pragma pop


/* 80855E8C-80855EB8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80855E98: 8026308C (ModuleEpilog)
//	80855E9C: 8085764C (data_8085764C)
//	80855EA0: 8085764C (data_8085764C)
//	80855EA4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/executor/_epilog.s"
}
#pragma pop


/* 80855EB8-80855ED8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80855EC4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag03/executor/_unresolved.s"
}
#pragma pop


