// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_kago_fall/executor.h"

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
extern u8 const data_80D5A6E4[4];
extern u8 const data_80D5A6E8[4];

// 
// Declarations:
// 

/* 80D59BE0-80D59C0C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80D59BEC: 80D5A6E4 (data_80D5A6E4)
//	80D59BF0: 80D5A6E4 (data_80D5A6E4)
//	80D59BF4: 8026314C (ModuleConstructorsX)
//	80D59BF8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/executor/_prolog.s"
}
#pragma pop


/* 80D59C0C-80D59C38 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80D59C18: 8026308C (ModuleEpilog)
//	80D59C1C: 80D5A6E8 (data_80D5A6E8)
//	80D59C20: 80D5A6E8 (data_80D5A6E8)
//	80D59C24: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/executor/_epilog.s"
}
#pragma pop


/* 80D59C38-80D59C58 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80D59C44: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_kago_fall/executor/_unresolved.s"
}
#pragma pop


