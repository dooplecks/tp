// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_swpush5/executor.h"

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
extern u8 const data_8059C694[4];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 8059B400-8059B42C 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	8059B40C: 8059C694 (data_8059C694)
//	8059B410: 8059C694 (data_8059C694)
//	8059B414: 8026314C (ModuleConstructorsX)
//	8059B418: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/executor/_prolog.s"
}
#pragma pop


/* 8059B42C-8059B458 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	8059B438: 8026308C (ModuleEpilog)
//	8059B43C: 8059C698 (__destroy_global_chain_reference)
//	8059B440: 8059C698 (__destroy_global_chain_reference)
//	8059B444: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/executor/_epilog.s"
}
#pragma pop


/* 8059B458-8059B478 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	8059B464: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_swpush5/executor/_unresolved.s"
}
#pragma pop


