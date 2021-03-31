// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv4CandleTag
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag.h"

// 
// Types:
// 

struct mDoHIO_entry_c {
	/* 80C5D470 */ // True False
~mDoHIO_entry_c();
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct dalv4CandleTag_c {
	/* 80C5D4B8 */ // True False
void setBaseMtx();
	/* 80C5D4F0 */ // True False
void create();
	/* 80C5D5D4 */ // True False
void Execute();
	/* 80C5D618 */ // True False
void procMain();
	/* 80C5D6D4 */ // True False
void init_modeWatch();
	/* 80C5D6E0 */ // True False
void modeWatch();
	/* 80C5D78C */ // True False
void init_modeNG();
	/* 80C5D814 */ // True False
void modeNG();
	/* 80C5D8A0 */ // True False
void init_modeNGWait();
	/* 80C5D8AC */ // True False
void modeNGWait();
	/* 80C5D8FC */ // True False
void init_modeEnd();
	/* 80C5D908 */ // True False
//  void False
void modeEnd();
	/* 80C5D90C */ // True False
void eventStart();
	/* 80C5D930 */ // True False
//  bool False
bool Draw();
	/* 80C5D938 */ // True False
//  bool False
bool Delete();
	/* 80C5DAC8 */ // True False
~dalv4CandleTag_c();
};

struct dalv4CandleTag_HIO_c {
	/* 80C5D44C */ // True False
dalv4CandleTag_HIO_c();
	/* 80C5D9C0 */ // True False
~dalv4CandleTag_HIO_c();
};

struct dSv_info_c {
	/* 800352B0 */ // False False
//  int False
//  int False
void offSwitch(int, int);
	/* 80035360 */ // False False
//  int False
//  int False
void isSwitch(int, int) const;
};

struct dEvLib_callback_c {
	/* 8004886C */ // False False
void eventUpdate();
	/* 80048940 */ // False False
//  int False
//  int False
//  int False
void orderEvent(int, int, int);
	/* 80C5DA68 */ // True False
~dEvLib_callback_c();
	/* 80C5DAB0 */ // True False
//  bool False
bool eventRun();
	/* 80C5DAB8 */ // True False
//  bool False
bool eventEnd();
	/* 80C5DAC0 */ // True False
//  bool False
bool eventStart();
};

struct Vec {
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AB984 */ // False False
//  JAISoundID False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  u32 False
//  s8 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  u8 False
void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

// 
// Forward References:
// 

// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
static void dalv4CandleTag_Draw(dalv4CandleTag_c*);
// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
static void dalv4CandleTag_Execute(dalv4CandleTag_c*);
// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
static void dalv4CandleTag_Delete(dalv4CandleTag_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void dalv4CandleTag_Create(fopAc_ac_c*);

// True False
extern "C" void __ct__20dalv4CandleTag_HIO_cFv();
// True False
extern "C" void __dt__14mDoHIO_entry_cFv();
// True False
extern "C" void setBaseMtx__16dalv4CandleTag_cFv();
// True False
extern "C" void create__16dalv4CandleTag_cFv();
// True False
extern "C" void Execute__16dalv4CandleTag_cFv();
// True False
extern "C" void procMain__16dalv4CandleTag_cFv();
// True False
extern "C" void init_modeWatch__16dalv4CandleTag_cFv();
// True False
extern "C" void modeWatch__16dalv4CandleTag_cFv();
// True False
extern "C" void init_modeNG__16dalv4CandleTag_cFv();
// True False
extern "C" void modeNG__16dalv4CandleTag_cFv();
// True False
extern "C" void init_modeNGWait__16dalv4CandleTag_cFv();
// True False
extern "C" void modeNGWait__16dalv4CandleTag_cFv();
// True False
extern "C" void init_modeEnd__16dalv4CandleTag_cFv();
// True False
//  void False
extern "C" void modeEnd__16dalv4CandleTag_cFv();
// True False
extern "C" void eventStart__16dalv4CandleTag_cFv();
// True False
//  bool False
extern "C" bool Draw__16dalv4CandleTag_cFv();
// True False
//  bool False
extern "C" bool Delete__16dalv4CandleTag_cFv();
// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
extern "C" static void dalv4CandleTag_Draw__FP16dalv4CandleTag_c();
// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
extern "C" static void dalv4CandleTag_Execute__FP16dalv4CandleTag_c();
// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
extern "C" static void dalv4CandleTag_Delete__FP16dalv4CandleTag_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void dalv4CandleTag_Create__FP10fopAc_ac_c();
// True False
extern "C" void __dt__20dalv4CandleTag_HIO_cFv();
// False False
extern "C" void __sinit_d_a_obj_lv4CandleTag_cpp();
// True False
extern "C" static void func_80C5DA58();
// True False
extern "C" static void func_80C5DA60();
// True False
extern "C" void __dt__17dEvLib_callback_cFv();
// True False
//  bool False
extern "C" bool eventRun__17dEvLib_callback_cFv();
// True False
//  bool False
extern "C" bool eventEnd__17dEvLib_callback_cFv();
// True False
//  bool False
extern "C" bool eventStart__17dEvLib_callback_cFv();
// True False
extern "C" void __dt__16dalv4CandleTag_cFv();
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* lit_3686[3];
extern "C" extern void* lit_3687[3];
extern "C" extern void* lit_3688[3];
extern "C" extern void* lit_3689[3];
extern "C" extern u8 data_80C5DBB4[48];
extern "C" extern void* g_profile_Tag_Lv4Candle[12];
extern "C" extern void* __vt__16dalv4CandleTag_c[10];
extern "C" extern void* __vt__17dEvLib_callback_c[6];
extern "C" extern void* __vt__20dalv4CandleTag_HIO_c[3];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];

// 
// External References:
// 

// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
extern "C" void __dt__10fopAc_ac_cFv();
// False False
//  int False
//  int False
extern "C" void offSwitch__10dSv_info_cFii();
// False False
//  int False
//  int False
extern "C" void isSwitch__10dSv_info_cCFii();
// False False
extern "C" void eventUpdate__17dEvLib_callback_cFv();
// False False
//  int False
//  int False
//  int False
extern "C" void orderEvent__17dEvLib_callback_cFiii();
// False False
//  JAISoundID False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  u32 False
//  s8 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  u8 False
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void __ptmf_scall();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
// False False
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C5DB64-80C5DB70 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc                                            */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C5DB70-80C5DB84 0004+10 s=0 e=0 z=0  None .data      @1787                                                        */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
	0x02000201,
	/* padding */
	0x40080000, 0x00000000, 0x3FE00000, 0x00000000,
};

/* 80C5DB84-80C5DB90 000C+00 s=0 e=0 z=0  None .data      @3686                                                        */
SECTION_DATA void* lit_3686[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeWatch__16dalv4CandleTag_cFv,
};

/* 80C5DB90-80C5DB9C 000C+00 s=0 e=0 z=0  None .data      @3687                                                        */
SECTION_DATA void* lit_3687[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeNG__16dalv4CandleTag_cFv,
};

/* 80C5DB9C-80C5DBA8 000C+00 s=0 e=0 z=0  None .data      @3688                                                        */
SECTION_DATA void* lit_3688[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeNGWait__16dalv4CandleTag_cFv,
};

/* 80C5DBA8-80C5DBB4 000C+00 s=0 e=0 z=0  None .data      @3689                                                        */
SECTION_DATA void* lit_3689[3] = {
	(void*)NULL,
	(void*)0xFFFFFFFF,
	(void*)modeEnd__16dalv4CandleTag_cFv,
};

/* 80C5DBB4-80C5DBE4 0030+00 s=0 e=0 z=0  None .data      mode_proc$3685                                               */
SECTION_DATA u8 data_80C5DBB4[48] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C5DBE4-80C5DC04 0020+00 s=1 e=0 z=0  None .data      l_dalv4CandleTag_Method                                      */
SECTION_DATA static void* l_dalv4CandleTag_Method[8] = {
	(void*)dalv4CandleTag_Create__FP10fopAc_ac_c,
	(void*)dalv4CandleTag_Delete__FP16dalv4CandleTag_c,
	(void*)dalv4CandleTag_Execute__FP16dalv4CandleTag_c,
	(void*)NULL,
	(void*)dalv4CandleTag_Draw__FP16dalv4CandleTag_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C5DC04-80C5DC34 0030+00 s=0 e=0 z=1  None .data      g_profile_Tag_Lv4Candle                                      */
SECTION_DATA void* g_profile_Tag_Lv4Candle[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01730000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000058C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x021C0000,
	(void*)&l_dalv4CandleTag_Method,
	(void*)0x00044000,
	(void*)0x000E0000,
};

/* 80C5DC34-80C5DC5C 0028+00 s=2 e=0 z=0  None .data      __vt__16dalv4CandleTag_c                                     */
SECTION_DATA void* __vt__16dalv4CandleTag_c[10] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)func_80C5DA60,
	(void*)func_80C5DA58,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
	(void*)__dt__16dalv4CandleTag_cFv,
	(void*)eventStart__16dalv4CandleTag_cFv,
};

/* 80C5DC5C-80C5DC74 0018+00 s=3 e=0 z=0  None .data      __vt__17dEvLib_callback_c                                    */
SECTION_DATA void* __vt__17dEvLib_callback_c[6] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__17dEvLib_callback_cFv,
	(void*)eventStart__17dEvLib_callback_cFv,
	(void*)eventRun__17dEvLib_callback_cFv,
	(void*)eventEnd__17dEvLib_callback_cFv,
};

/* 80C5DC74-80C5DC80 000C+00 s=2 e=0 z=0  None .data      __vt__20dalv4CandleTag_HIO_c                                 */
SECTION_DATA void* __vt__20dalv4CandleTag_HIO_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__20dalv4CandleTag_HIO_cFv,
};

/* 80C5DC80-80C5DC8C 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C5D44C-80C5D470 0024+00 s=1 e=0 z=0  None .text      __ct__20dalv4CandleTag_HIO_cFv                               */
//	80C5D44C: 80C5DC80 (__vt__14mDoHIO_entry_c)
//	80C5D450: 80C5DC80 (__vt__14mDoHIO_entry_c)
//	80C5D458: 80C5DC74 (__vt__20dalv4CandleTag_HIO_c)
//	80C5D45C: 80C5DC74 (__vt__20dalv4CandleTag_HIO_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dalv4CandleTag_HIO_c::dalv4CandleTag_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/__ct__20dalv4CandleTag_HIO_cFv.s"
}
#pragma pop


/* 80C5D470-80C5D4B8 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
//	80C5D488: 80C5DC80 (__vt__14mDoHIO_entry_c)
//	80C5D48C: 80C5DC80 (__vt__14mDoHIO_entry_c)
//	80C5D49C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* 80C5D4B8-80C5D4F0 0038+00 s=2 e=0 z=0  None .text      setBaseMtx__16dalv4CandleTag_cFv                             */
//	80C5D4C8: 803DD470 (now__14mDoMtx_stack_c)
//	80C5D4CC: 803DD470 (now__14mDoMtx_stack_c)
//	80C5D4DC: 803468E8 (PSMTXTrans)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/setBaseMtx__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D4F0-80C5D5D4 00E4+00 s=1 e=0 z=0  None .text      create__16dalv4CandleTag_cFv                                 */
//	80C5D518: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C5D51C: 80C5DC5C (__vt__17dEvLib_callback_c)
//	80C5D520: 80C5DC5C (__vt__17dEvLib_callback_c)
//	80C5D534: 80C5DC34 (__vt__16dalv4CandleTag_c)
//	80C5D538: 80C5DC34 (__vt__16dalv4CandleTag_c)
//	80C5D558: 80C5D4B8 (setBaseMtx__16dalv4CandleTag_cFv)
//	80C5D588: 804061C0 (g_dComIfG_gameInfo)
//	80C5D58C: 804061C0 (g_dComIfG_gameInfo)
//	80C5D59C: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C5D5AC: 80C5D8FC (init_modeEnd__16dalv4CandleTag_cFv)
//	80C5D5B8: 80C5D6D4 (init_modeWatch__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/create__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D5D4-80C5D618 0044+00 s=1 e=0 z=0  None .text      Execute__16dalv4CandleTag_cFv                                */
//	80C5D5EC: 8004886C (eventUpdate__17dEvLib_callback_cFv)
//	80C5D5F4: 80C5D618 (procMain__16dalv4CandleTag_cFv)
//	80C5D5FC: 80C5D4B8 (setBaseMtx__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::Execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/Execute__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C5DC98-80C5DCA4 000C+00 s=1 e=0 z=0  None .bss       @3624                                                        */
static u8 lit_3624[12];

/* 80C5DCA4-80C5DCAC 0008+00 s=2 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[8];

/* 80C5DCAC-80C5DCB0 0004+00 s=1 e=0 z=0  None .bss       None                                                         */
static u8 data_80C5DCAC[4];

/* 80C5D618-80C5D6D4 00BC+00 s=1 e=0 z=0  None .text      procMain__16dalv4CandleTag_cFv                               */
//	80C5D624: 80C5DB64 (cNullVec__6Z2Calc)
//	80C5D628: 80C5DB64 (cNullVec__6Z2Calc)
//	80C5D62C: 80C5DCAC (data_80C5DCAC)
//	80C5D630: 80C5DCAC (data_80C5DCAC)
//	80C5D6BC: 80362084 (__ptmf_scall)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::procMain() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/procMain__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D6D4-80C5D6E0 000C+00 s=2 e=0 z=0  None .text      init_modeWatch__16dalv4CandleTag_cFv                         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::init_modeWatch() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/init_modeWatch__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D6E0-80C5D78C 00AC+00 s=1 e=0 z=0  None .text      modeWatch__16dalv4CandleTag_cFv                              */
//	80C5D6F4: 804061C0 (g_dComIfG_gameInfo)
//	80C5D6F8: 804061C0 (g_dComIfG_gameInfo)
//	80C5D708: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C5D718: 80C5D8FC (init_modeEnd__16dalv4CandleTag_cFv)
//	80C5D720: 804061C0 (g_dComIfG_gameInfo)
//	80C5D724: 804061C0 (g_dComIfG_gameInfo)
//	80C5D734: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C5D75C: 80048940 (orderEvent__17dEvLib_callback_cFiii)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::modeWatch() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/modeWatch__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C5DB5C-80C5DB60 0004+00 s=1 e=0 z=0  None .rodata    @3727                                                        */
SECTION_RODATA static u32 const lit_3727 = 0x3F800000;

/* 80C5DB60-80C5DB64 0004+00 s=1 e=0 z=0  None .rodata    @3728                                                        */
SECTION_RODATA static u32 const lit_3728 = 0xBF800000;

/* 80C5D78C-80C5D814 0088+00 s=1 e=0 z=0  None .text      init_modeNG__16dalv4CandleTag_cFv                            */
//	80C5D7A0: 80C5DCA4 (l_HIO)
//	80C5D7A4: 80C5DCA4 (l_HIO)
//	80C5D7BC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C5D7C0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C5D7D8: 80C5DB5C (lit_3727)
//	80C5D7DC: 80C5DB5C (lit_3727)
//	80C5D7E4: 80C5DB60 (lit_3728)
//	80C5D7E8: 80C5DB60 (lit_3728)
//	80C5D7F4: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::init_modeNG() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/init_modeNG__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D814-80C5D8A0 008C+00 s=1 e=0 z=0  None .text      modeNG__16dalv4CandleTag_cFv                                 */
//	80C5D824: 803621D8 (_savegpr_28)
//	80C5D84C: 804061C0 (g_dComIfG_gameInfo)
//	80C5D850: 804061C0 (g_dComIfG_gameInfo)
//	80C5D868: 800352B0 (offSwitch__10dSv_info_cFii)
//	80C5D884: 80C5D8A0 (init_modeNGWait__16dalv4CandleTag_cFv)
//	80C5D88C: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::modeNG() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/modeNG__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D8A0-80C5D8AC 000C+00 s=1 e=0 z=0  None .text      init_modeNGWait__16dalv4CandleTag_cFv                        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::init_modeNGWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/init_modeNGWait__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D8AC-80C5D8FC 0050+00 s=1 e=0 z=0  None .text      modeNGWait__16dalv4CandleTag_cFv                             */
//	80C5D8C0: 804061C0 (g_dComIfG_gameInfo)
//	80C5D8C4: 804061C0 (g_dComIfG_gameInfo)
//	80C5D8D4: 80035360 (isSwitch__10dSv_info_cCFii)
//	80C5D8E4: 80C5D6D4 (init_modeWatch__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::modeNGWait() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/modeNGWait__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D8FC-80C5D908 000C+00 s=2 e=0 z=0  None .text      init_modeEnd__16dalv4CandleTag_cFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::init_modeEnd() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/init_modeEnd__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D908-80C5D90C 0004+00 s=1 e=0 z=0  None .text      modeEnd__16dalv4CandleTag_cFv                                */
// True False
//  void False
void dalv4CandleTag_c::modeEnd() {
	/* empty function */
}


/* 80C5D90C-80C5D930 0024+00 s=2 e=0 z=0  None .text      eventStart__16dalv4CandleTag_cFv                             */
//	80C5D918: 80C5D78C (init_modeNG__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dalv4CandleTag_c::eventStart() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/eventStart__16dalv4CandleTag_cFv.s"
}
#pragma pop


/* 80C5D930-80C5D938 0008+00 s=1 e=0 z=0  None .text      Draw__16dalv4CandleTag_cFv                                   */
// True False
//  bool False
bool dalv4CandleTag_c::Draw() {
	return true;
}


/* 80C5D938-80C5D940 0008+00 s=1 e=0 z=0  None .text      Delete__16dalv4CandleTag_cFv                                 */
// True False
//  bool False
bool dalv4CandleTag_c::Delete() {
	return true;
}


/* 80C5D940-80C5D960 0020+00 s=1 e=0 z=0  None .text      dalv4CandleTag_Draw__FP16dalv4CandleTag_c                    */
//	80C5D94C: 80C5D930 (Draw__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
asm static void dalv4CandleTag_Draw(dalv4CandleTag_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/dalv4CandleTag_Draw__FP16dalv4CandleTag_c.s"
}
#pragma pop


/* 80C5D960-80C5D980 0020+00 s=1 e=0 z=0  None .text      dalv4CandleTag_Execute__FP16dalv4CandleTag_c                 */
//	80C5D96C: 80C5D5D4 (Execute__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
asm static void dalv4CandleTag_Execute(dalv4CandleTag_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/dalv4CandleTag_Execute__FP16dalv4CandleTag_c.s"
}
#pragma pop


/* 80C5D980-80C5D9A0 0020+00 s=1 e=0 z=0  None .text      dalv4CandleTag_Delete__FP16dalv4CandleTag_c                  */
//	80C5D98C: 80C5D938 (Delete__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dalv4CandleTag_c* False
// 	 dalv4CandleTag_c False
asm static void dalv4CandleTag_Delete(dalv4CandleTag_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/dalv4CandleTag_Delete__FP16dalv4CandleTag_c.s"
}
#pragma pop


/* 80C5D9A0-80C5D9C0 0020+00 s=1 e=0 z=0  None .text      dalv4CandleTag_Create__FP10fopAc_ac_c                        */
//	80C5D9AC: 80C5D4F0 (create__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void dalv4CandleTag_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/dalv4CandleTag_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C5D9C0-80C5DA1C 005C+00 s=2 e=0 z=0  None .text      __dt__20dalv4CandleTag_HIO_cFv                               */
//	80C5D9D8: 80C5DC74 (__vt__20dalv4CandleTag_HIO_c)
//	80C5D9DC: 80C5DC74 (__vt__20dalv4CandleTag_HIO_c)
//	80C5D9E8: 80C5DC80 (__vt__14mDoHIO_entry_c)
//	80C5D9EC: 80C5DC80 (__vt__14mDoHIO_entry_c)
//	80C5DA00: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dalv4CandleTag_HIO_c::~dalv4CandleTag_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/__dt__20dalv4CandleTag_HIO_cFv.s"
}
#pragma pop


/* 80C5DA1C-80C5DA58 003C+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_lv4CandleTag_cpp                             */
//	80C5DA28: 80C5DCA4 (l_HIO)
//	80C5DA2C: 80C5DCA4 (l_HIO)
//	80C5DA30: 80C5D44C (__ct__20dalv4CandleTag_HIO_cFv)
//	80C5DA34: 80C5D9C0 (__dt__20dalv4CandleTag_HIO_cFv)
//	80C5DA38: 80C5D9C0 (__dt__20dalv4CandleTag_HIO_cFv)
//	80C5DA3C: 80C5DC98 (lit_3624)
//	80C5DA40: 80C5DC98 (lit_3624)
//	80C5DA44: 80C5D3D8 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_a_obj_lv4CandleTag_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/__sinit_d_a_obj_lv4CandleTag_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80C5DA1C = (void*)__sinit_d_a_obj_lv4CandleTag_cpp;
#pragma pop


/* 80C5DA58-80C5DA60 0008+00 s=1 e=0 z=0  None .text      @1392@eventStart__16dalv4CandleTag_cFv                       */
//	80C5DA5C: 80C5D90C (eventStart__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void func_80C5DA58() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/func_80C5DA58.s"
}
#pragma pop


/* 80C5DA60-80C5DA68 0008+00 s=1 e=0 z=0  None .text      @1392@__dt__16dalv4CandleTag_cFv                             */
//	80C5DA64: 80C5DAC8 (__dt__16dalv4CandleTag_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void func_80C5DA60() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/func_80C5DA60.s"
}
#pragma pop


/* 80C5DA68-80C5DAB0 0048+00 s=1 e=0 z=0  None .text      __dt__17dEvLib_callback_cFv                                  */
//	80C5DA80: 80C5DC5C (__vt__17dEvLib_callback_c)
//	80C5DA84: 80C5DC5C (__vt__17dEvLib_callback_c)
//	80C5DA94: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dEvLib_callback_c::~dEvLib_callback_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/__dt__17dEvLib_callback_cFv.s"
}
#pragma pop


/* 80C5DAB0-80C5DAB8 0008+00 s=2 e=0 z=0  None .text      eventRun__17dEvLib_callback_cFv                              */
// True False
//  bool False
bool dEvLib_callback_c::eventRun() {
	return true;
}


/* 80C5DAB8-80C5DAC0 0008+00 s=2 e=0 z=0  None .text      eventEnd__17dEvLib_callback_cFv                              */
// True False
//  bool False
bool dEvLib_callback_c::eventEnd() {
	return true;
}


/* 80C5DAC0-80C5DAC8 0008+00 s=1 e=0 z=0  None .text      eventStart__17dEvLib_callback_cFv                            */
// True False
//  bool False
bool dEvLib_callback_c::eventStart() {
	return true;
}


/* 80C5DAC8-80C5DB48 0080+00 s=2 e=0 z=0  None .text      __dt__16dalv4CandleTag_cFv                                   */
//	80C5DAE8: 80C5DC34 (__vt__16dalv4CandleTag_c)
//	80C5DAEC: 80C5DC34 (__vt__16dalv4CandleTag_c)
//	80C5DB04: 80C5DC5C (__vt__17dEvLib_callback_c)
//	80C5DB08: 80C5DC5C (__vt__17dEvLib_callback_c)
//	80C5DB18: 80018C8C (__dt__10fopAc_ac_cFv)
//	80C5DB28: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dalv4CandleTag_c::~dalv4CandleTag_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv4CandleTag/d_a_obj_lv4CandleTag/__dt__16dalv4CandleTag_cFv.s"
}
#pragma pop


