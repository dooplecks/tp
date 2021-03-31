// 
// Generated By: dol2asm
// Translation Unit: f_ap/f_ap_game
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_ap/f_ap_game.h"

// 
// Types:
// 

struct fapGm_HIO_c {
	/* 80018944 */ // True False
fapGm_HIO_c();
	/* 80018AE0 */ // True False
~fapGm_HIO_c();
};

// 
// Forward References:
// 

// True False
static void fapGm_After();
// False False
void fapGm_Execute();
// False False
void fapGm_Create();

// True False
extern "C" void __ct__11fapGm_HIO_cFv();
// True False
extern "C" static void fapGm_After__Fv();
// False False
extern "C" void fapGm_Execute__Fv();
// False False
extern "C" void fapGm_Create__Fv();
// True False
extern "C" void __dt__11fapGm_HIO_cFv();
// False False
extern "C" void __sinit_f_ap_game_cpp();
extern "C" extern void* __vt__11fapGm_HIO_c[3 + 1 /* padding */];
extern "C" extern u8 g_HIO[64 + 4 /* padding */];

// 
// External References:
// 

// False False
//  void False
void fopCamM_Management();
// False False
//  void False
void fopCamM_Init();
// False False
void fopOvlpM_Management();
// False False
//  void False
void fopOvlpM_Init();
// False False
void fopScnM_Management();
// False False
//  void False
void fopScnM_Init();
// False False
void fopDwTg_CreateQueue();
// False False
//  void (*)(void) False
// 	 * False
// 		  False
// 	 void False
// 	 void False
//  void (*)(void) False
// 	 * False
// 		  False
// 	 void False
// 	 void False
void fpcM_Management(void (*)(void), void (*)(void));
// False False
void fpcM_Init();
// False False
//  int False
void cCt_Counter(int);
// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
//  void False
extern "C" void fopCamM_Management__Fv();
// False False
//  void False
extern "C" void fopCamM_Init__Fv();
// False False
extern "C" void fopOvlpM_Management__Fv();
// False False
//  void False
extern "C" void fopOvlpM_Init__Fv();
// False False
extern "C" void fopScnM_Management__Fv();
// False False
//  void False
extern "C" void fopScnM_Init__Fv();
// False False
extern "C" void fopDwTg_CreateQueue__Fv();
// False False
//  void (*)(void) False
// 	 * False
// 		  False
// 	 void False
// 	 void False
//  void (*)(void) False
// 	 * False
// 		  False
// 	 void False
// 	 void False
extern "C" void fpcM_Management__FPFv_vPFv_v();
// False False
extern "C" void fpcM_Init__Fv();
// False False
//  int False
extern "C" void cCt_Counter__Fi();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void __register_global_object();
extern "C" extern u32 data_80450580;

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803A35A0-803A35B0 000C+04 s=2 e=0 z=0  None .data      __vt__11fapGm_HIO_c                                          */
SECTION_DATA void* __vt__11fapGm_HIO_c[3 + 1 /* padding */] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__11fapGm_HIO_cFv,
	/* padding */
	NULL,
};

/* 80451BC0-80451BC4 0004+00 s=1 e=0 z=0  None .sdata2    @3689                                                        */
SECTION_SDATA2 static f32 lit_3689 = 9.0f / 10.0f;

/* 80451BC4-80451BC8 0004+00 s=1 e=0 z=0  None .sdata2    @3690                                                        */
SECTION_SDATA2 static f32 lit_3690 = 3.0f / 5.0f;

/* 80018944-80018A44 0100+00 s=1 e=0 z=0  None .text      __ct__11fapGm_HIO_cFv                                        */
//	80018944: 803A35A0 (__vt__11fapGm_HIO_c)
//	80018948: 803A35A0 (__vt__11fapGm_HIO_c)
//	80018970: 80450580 (data_80450580)
//	800189C4: 80451BC0 (lit_3689)
//	800189CC: 80451BC4 (lit_3690)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm fapGm_HIO_c::fapGm_HIO_c() {
	nofralloc
#include "asm/f_ap/f_ap_game/__ct__11fapGm_HIO_cFv.s"
}
#pragma pop


/* 80018A44-80018A6C 0028+00 s=1 e=0 z=0  None .text      fapGm_After__Fv                                              */
//	80018A50: 8001EE10 (fopScnM_Management__Fv)
//	80018A54: 8001E650 (fopOvlpM_Management__Fv)
//	80018A58: 8001E374 (fopCamM_Management__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm static void fapGm_After() {
	nofralloc
#include "asm/f_ap/f_ap_game/fapGm_After__Fv.s"
}
#pragma pop


/* 80018A6C-80018AA0 0034+00 s=0 e=1 z=0  None .text      fapGm_Execute__Fv                                            */
//	80018A7C: 80018A44 (fapGm_After__Fv)
//	80018A80: 80018A44 (fapGm_After__Fv)
//	80018A84: 80022158 (fpcM_Management__FPFv_vPFv_v)
//	80018A8C: 80265E1C (cCt_Counter__Fi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void fapGm_Execute() {
	nofralloc
#include "asm/f_ap/f_ap_game/fapGm_Execute__Fv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803F1BB0-803F1BBC 000C+00 s=1 e=0 z=0  None .bss       @3691                                                        */
static u8 lit_3691[12];

/* 803F1BBC-803F1C00 0040+04 s=2 e=3 z=0  None .bss       g_HIO                                                        */
u8 g_HIO[64 + 4 /* padding */];

/* 80018AA0-80018AE0 0040+00 s=0 e=1 z=0  None .text      fapGm_Create__Fv                                             */
//	80018AAC: 800222B8 (fpcM_Init__Fv)
//	80018AB0: 8001EE30 (fopScnM_Init__Fv)
//	80018AB4: 8001E6E8 (fopOvlpM_Init__Fv)
//	80018AB8: 8001E378 (fopCamM_Init__Fv)
//	80018ABC: 80020518 (fopDwTg_CreateQueue__Fv)
//	80018AC4: 803F1BBC (g_HIO)
//	80018AC8: 803F1BBC (g_HIO)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void fapGm_Create() {
	nofralloc
#include "asm/f_ap/f_ap_game/fapGm_Create__Fv.s"
}
#pragma pop


/* 80018AE0-80018B28 0048+00 s=2 e=0 z=0  None .text      __dt__11fapGm_HIO_cFv                                        */
//	80018AF8: 803A35A0 (__vt__11fapGm_HIO_c)
//	80018AFC: 803A35A0 (__vt__11fapGm_HIO_c)
//	80018B0C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm fapGm_HIO_c::~fapGm_HIO_c() {
	nofralloc
#include "asm/f_ap/f_ap_game/__dt__11fapGm_HIO_cFv.s"
}
#pragma pop


/* 80018B28-80018B64 003C+00 s=0 e=0 z=0  None .text      __sinit_f_ap_game_cpp                                        */
//	80018B34: 803F1BBC (g_HIO)
//	80018B38: 803F1BBC (g_HIO)
//	80018B3C: 80018944 (__ct__11fapGm_HIO_cFv)
//	80018B40: 80018AE0 (__dt__11fapGm_HIO_cFv)
//	80018B44: 80018AE0 (__dt__11fapGm_HIO_cFv)
//	80018B48: 803F1BB0 (lit_3691)
//	80018B4C: 803F1BB0 (lit_3691)
//	80018B50: 80361C24 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_f_ap_game_cpp() {
	nofralloc
#include "asm/f_ap/f_ap_game/__sinit_f_ap_game_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80018B28 = (void*)__sinit_f_ap_game_cpp;
#pragma pop


