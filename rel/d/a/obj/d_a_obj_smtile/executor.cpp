// 
// Generated By: dol2asm
// Translation Unit: executor
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_smtile/executor.h"

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
extern void* const data_80CDE348[2];
SECTION_DTORS10 extern void* const __destroy_global_chain_reference;

// 
// Declarations:
// 

/* 80CDD1C0-80CDD1EC 002C+00 s=0 e=0 z=0  None .text      _prolog                                                      */
//	80CDD1CC: 80CDE348 (data_80CDE348)
//	80CDD1D0: 80CDE348 (data_80CDE348)
//	80CDD1D4: 8026314C (ModuleConstructorsX)
//	80CDD1D8: 80263088 (ModuleProlog)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _prolog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/executor/_prolog.s"
}
#pragma pop


/* 80CDD1EC-80CDD218 002C+00 s=0 e=0 z=0  None .text      _epilog                                                      */
//	80CDD1F8: 8026308C (ModuleEpilog)
//	80CDD1FC: 80CDE350 (__destroy_global_chain_reference)
//	80CDD200: 80CDE350 (__destroy_global_chain_reference)
//	80CDD204: 80263190 (ModuleDestructorsX)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _epilog() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/executor/_epilog.s"
}
#pragma pop


/* 80CDD218-80CDD238 0020+00 s=0 e=0 z=0  None .text      _unresolved                                                  */
//	80CDD224: 80263090 (ModuleUnresolved)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void _unresolved() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_smtile/executor/_unresolved.s"
}
#pragma pop


