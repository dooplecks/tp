// 
// Generated By: dol2asm
// Translation Unit: f_pc/f_pc_draw
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_pc/f_pc_draw.h"

// 
// Types:
// 

struct layer_class {
};

struct base_process_class {
};

// 
// Forward References:
// 

// False False
//  base_process_class* False
// 	 base_process_class False
void fpcDw_Execute(base_process_class*);
// False False
//  int (*)(int (*)(void*, void*)) False
// 	 * False
// 		  False
// 	 int False
// 	 int (*)(void*, void*) False
// 		 * False
// 			  False
// 		 int False
// 		 void* False
// 			 void False
// 		 void* False
// 			 void False
//  int (*)(void*, void*) False
// 	 * False
// 		  False
// 	 int False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
void fpcDw_Handler(int (*)(int (*)(void*, void*)), int (*)(void*, void*));

// False False
//  base_process_class* False
// 	 base_process_class False
extern "C" void fpcDw_Execute__FP18base_process_class();
// False False
//  int (*)(int (*)(void*, void*)) False
// 	 * False
// 		  False
// 	 int False
// 	 int (*)(void*, void*) False
// 		 * False
// 			  False
// 		 int False
// 		 void* False
// 			 void False
// 		 void* False
// 			 void False
//  int (*)(void*, void*) False
// 	 * False
// 		  False
// 	 int False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
extern "C" void fpcDw_Handler__FPFPFPvPv_i_iPFPvPv_i();

// 
// External References:
// 

// False False
//  int False
//  int False
void fpcBs_Is_JustOfType(int, int);
// False False
//  layer_class* False
// 	 layer_class False
void fpcLy_SetCurrentLayer(layer_class*);
// False False
void fpcLy_CurrentLayer();
// False False
//  void* False
// 	 void False
//  u8 False
void fpcPause_IsEnable(void*, u8);
// False False
void cAPIGph_BeforeOfDraw();
// False False
void cAPIGph_AfterOfDraw();

// False False
//  int False
//  int False
extern "C" void fpcBs_Is_JustOfType__Fii();
// False False
//  layer_class* False
// 	 layer_class False
extern "C" void fpcLy_SetCurrentLayer__FP11layer_class();
// False False
extern "C" void fpcLy_CurrentLayer__Fv();
// False False
//  void* False
// 	 void False
//  u8 False
extern "C" void fpcPause_IsEnable__FPvUc();
// False False
extern "C" void cAPIGph_BeforeOfDraw__Fv();
// False False
extern "C" void cAPIGph_AfterOfDraw__Fv();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();
extern "C" extern u8 g_fpcLf_type[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 80023954-800239F4 00A0+00 s=0 e=1 z=0  None .text      fpcDw_Execute__FP18base_process_class                        */
//	80023964: 803621DC (_savegpr_29)
//	80023970: 80023844 (fpcPause_IsEnable__FPvUc)
//	8002397C: 800216F4 (fpcLy_CurrentLayer__Fv)
//	80023984: 80450D30 (g_fpcLf_type)
//	8002398C: 8002064C (fpcBs_Is_JustOfType__Fii)
//	800239B0: 800216EC (fpcLy_SetCurrentLayer__FP11layer_class)
//	800239CC: 800216EC (fpcLy_SetCurrentLayer__FP11layer_class)
//	800239E0: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  base_process_class* False
// 	 base_process_class False
asm void fpcDw_Execute(base_process_class* param_0) {
	nofralloc
#include "asm/f_pc/f_pc_draw/fpcDw_Execute__FP18base_process_class.s"
}
#pragma pop


/* 800239F4-80023A48 0054+00 s=0 e=1 z=0  None .text      fpcDw_Handler__FPFPFPvPv_i_iPFPvPv_i                         */
//	80023A10: 802632F8 (cAPIGph_BeforeOfDraw__Fv)
//	80023A28: 80263328 (cAPIGph_AfterOfDraw__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  int (*)(int (*)(void*, void*)) False
// 	 * False
// 		  False
// 	 int False
// 	 int (*)(void*, void*) False
// 		 * False
// 			  False
// 		 int False
// 		 void* False
// 			 void False
// 		 void* False
// 			 void False
//  int (*)(void*, void*) False
// 	 * False
// 		  False
// 	 int False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
asm void fpcDw_Handler(int (*)(int (*)(void*, void*)), int (*)(void*, void*)) {
	nofralloc
#include "asm/f_pc/f_pc_draw/fpcDw_Handler__FPFPFPvPv_i_iPFPvPv_i.s"
}
#pragma pop


