// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/kytag/d_a_kytag11/executor.h"

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
extern u8 const data_8052988C[4];
extern u8 const data_80529890[4];

// 
// Declarations:
// 

/* 805294A0-805294CC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	805294AC: 8052988C (data_8052988C)
//	805294B0: 8052988C (data_8052988C)
//	805294B4: 8026314C (ModuleConstructorsX)
//	805294B8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag11/executor/_prolog.s"
}
#pragma pop


/* 805294CC-805294F8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	805294D8: 8026308C (ModuleEpilog)
//	805294DC: 80529890 (data_80529890)
//	805294E0: 80529890 (data_80529890)
//	805294E4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag11/executor/_epilog.s"
}
#pragma pop


/* 805294F8-80529518 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80529504: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag11/executor/_unresolved.s"
}
#pragma pop


