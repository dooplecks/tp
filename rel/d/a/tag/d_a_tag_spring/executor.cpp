// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/tag/d_a_tag_spring/executor.h"

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
extern u8 const data_805A6E64[4];
extern u8 const data_805A6E68[4];

// 
// Declarations:
// 

/* 805A69E0-805A6A0C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	805A69EC: 805A6E64 (data_805A6E64)
//	805A69F0: 805A6E64 (data_805A6E64)
//	805A69F4: 8026314C (ModuleConstructorsX)
//	805A69F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/executor/_prolog.s"
}
#pragma pop


/* 805A6A0C-805A6A38 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	805A6A18: 8026308C (ModuleEpilog)
//	805A6A1C: 805A6E68 (data_805A6E68)
//	805A6A20: 805A6E68 (data_805A6E68)
//	805A6A24: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/executor/_epilog.s"
}
#pragma pop


/* 805A6A38-805A6A58 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	805A6A44: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/tag/d_a_tag_spring/executor/_unresolved.s"
}
#pragma pop


