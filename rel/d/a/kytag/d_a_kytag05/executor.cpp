// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/kytag/d_a_kytag05/executor.h"

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
extern u8 const data_80528B10[4];
extern u8 const data_80528B14[4];

// 
// Declarations:
// 

/* 805289E0-80528A0C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	805289EC: 80528B10 (data_80528B10)
//	805289F0: 80528B10 (data_80528B10)
//	805289F4: 8026314C (ModuleConstructorsX)
//	805289F8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag05/executor/_prolog.s"
}
#pragma pop


/* 80528A0C-80528A38 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80528A18: 8026308C (ModuleEpilog)
//	80528A1C: 80528B14 (data_80528B14)
//	80528A20: 80528B14 (data_80528B14)
//	80528A24: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag05/executor/_epilog.s"
}
#pragma pop


/* 80528A38-80528A58 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80528A44: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag05/executor/_unresolved.s"
}
#pragma pop


