// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_wljump/executor.h"

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
extern u8 const data_80D658C4[4];
extern u8 const data_80D658C8[4];

// 
// Declarations:
// 

/* 80D64E40-80D64E6C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80D64E4C: 80D658C4 (data_80D658C4)
//	80D64E50: 80D658C4 (data_80D658C4)
//	80D64E54: 8026314C (ModuleConstructorsX)
//	80D64E58: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_wljump/executor/_prolog.s"
}
#pragma pop


/* 80D64E6C-80D64E98 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80D64E78: 8026308C (ModuleEpilog)
//	80D64E7C: 80D658C8 (data_80D658C8)
//	80D64E80: 80D658C8 (data_80D658C8)
//	80D64E84: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_wljump/executor/_epilog.s"
}
#pragma pop


/* 80D64E98-80D64EB8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80D64EA4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_wljump/executor/_unresolved.s"
}
#pragma pop


