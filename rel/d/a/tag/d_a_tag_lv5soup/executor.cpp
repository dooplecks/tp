// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_lv5soup/executor.h"

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
extern u8 const data_80D5B154[4];
extern u8 const data_80D5B158[4];

// 
// Declarations:
// 

/* 80D5ACE0-80D5AD0C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80D5ACEC: 80D5B154 (data_80D5B154)
//	80D5ACF0: 80D5B154 (data_80D5B154)
//	80D5ACF4: 8026314C (ModuleConstructorsX)
//	80D5ACF8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/executor/_prolog.s"
}
#pragma pop


/* 80D5AD0C-80D5AD38 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80D5AD18: 8026308C (ModuleEpilog)
//	80D5AD1C: 80D5B158 (data_80D5B158)
//	80D5AD20: 80D5B158 (data_80D5B158)
//	80D5AD24: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/executor/_epilog.s"
}
#pragma pop


/* 80D5AD38-80D5AD58 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80D5AD44: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_lv5soup/executor/_unresolved.s"
}
#pragma pop


