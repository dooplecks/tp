// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/b/d_a_b_ob/executor.h"

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
extern void* const data_8061AD70[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80610480-806104AC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8061048C: 8061AD70 (data_8061AD70)
//	80610490: 8061AD70 (data_8061AD70)
//	80610494: 8026314C (ModuleConstructorsX)
//	80610498: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/executor/_prolog.s"
}
#pragma pop


/* 806104AC-806104D8 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	806104B8: 8026308C (ModuleEpilog)
//	806104BC: 8061AD78 (__destroy_global_chain_reference)
//	806104C0: 8061AD78 (__destroy_global_chain_reference)
//	806104C4: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/executor/_epilog.s"
}
#pragma pop


/* 806104D8-806104F8 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	806104E4: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/b/d_a_b_ob/executor/_unresolved.s"
}
#pragma pop


