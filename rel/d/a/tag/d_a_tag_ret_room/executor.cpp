// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_ret_room/executor.h"

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
extern u8 const data_80D5F200[4];
extern u8 const data_80D5F204[4];

// 
// Declarations:
// 

/* 80D5EE20-80D5EE4C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80D5EE2C: 80D5F200 (data_80D5F200)
//	80D5EE30: 80D5F200 (data_80D5F200)
//	80D5EE34: 8026314C (ModuleConstructorsX)
//	80D5EE38: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/executor/_prolog.s"
}
#pragma pop


/* 80D5EE4C-80D5EE78 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80D5EE58: 8026308C (ModuleEpilog)
//	80D5EE5C: 80D5F204 (data_80D5F204)
//	80D5EE60: 80D5F204 (data_80D5F204)
//	80D5EE64: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/executor/_epilog.s"
}
#pragma pop


/* 80D5EE78-80D5EE98 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80D5EE84: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_ret_room/executor/_unresolved.s"
}
#pragma pop


