//
// Generated By: dol2asm
// Translation Unit: d_a_obj_msima
//

#include "rel/d/a/obj/d_a_obj_msima/d_a_obj_msima.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_msima_class {};

struct ms_chain_s {
    /* 80C9CA60 */ ~ms_chain_s();
    /* 80C9CA9C */ ms_chain_s();
};

struct mDoMtx_stack_c {
    /* 8000CCC8 */ void push();
    /* 8000CD14 */ void pop();
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {};

struct mDoExt_brkAnm {
    /* 8000D70C */ void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
    /* 8000D7A8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Msima_HIO_c {
    /* 80C9B40C */ daObj_Msima_HIO_c();
    /* 80C9CAA0 */ ~daObj_Msima_HIO_c();
};

struct dSv_memBit_c {
    /* 80034934 */ void isDungeonItem(int) const;
};

struct J3DModelData {};

struct dKy_tevstr_c {};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
    /* 80C9B890 */ ~cXyz();
};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS_PolyInfo {};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDFF8 */ void deleteObject();
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80C9C720 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__17daObj_Msima_HIO_cFv();
extern "C" static void ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void daObj_Msima_Draw__FP15obj_msima_class();
extern "C" static void msima_start__FP15obj_msima_class();
extern "C" static void msima_drop__FP15obj_msima_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void msima_float__FP15obj_msima_class();
extern "C" static void action__FP15obj_msima_class();
extern "C" static void chain_move__FP15obj_msima_classP10ms_chain_si();
extern "C" static void chain_move2__FP15obj_msima_classP10ms_chain_si();
extern "C" static void daObj_Msima_Execute__FP15obj_msima_class();
extern "C" static bool daObj_Msima_IsDelete__FP15obj_msima_class();
extern "C" static void daObj_Msima_Delete__FP15obj_msima_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObj_Msima_Create__FP10fopAc_ac_c();
extern "C" void __dt__10ms_chain_sFv();
extern "C" void __ct__10ms_chain_sFv();
extern "C" void __dt__17daObj_Msima_HIO_cFv();
extern "C" void __sinit_d_a_obj_msima_cpp();
extern "C" extern char const* const d_a_obj_msima__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_getTalkEventPartner__FPC10fopAc_ac_c();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_isZoneSwitch__Fii();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_initRnd2__Fiii();
extern "C" void cM_rndFX2__Ff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __construct_array();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 struct_80450C98[4];
extern "C" extern u8 m_midnaActor__9daPy_py_c[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C9CD4C-80C9CD50 000000 0004+00 9/9 0/0 0/0 .rodata          @3863 */
SECTION_RODATA static u32 const lit_3863 = 0x3F800000;
SECTION_DEAD void* const cg_80C9CD4C = (void*)(&lit_3863);

/* 80C9CD50-80C9CD54 000004 0004+00 1/1 0/0 0/0 .rodata          @3864 */
SECTION_RODATA static u32 const lit_3864 = 0x44480000;
SECTION_DEAD void* const cg_80C9CD50 = (void*)(&lit_3864);

/* 80C9CDF8-80C9CE18 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Msima_Method */
SECTION_DATA static void* l_daObj_Msima_Method[8] = {
    (void*)daObj_Msima_Create__FP10fopAc_ac_c,
    (void*)daObj_Msima_Delete__FP15obj_msima_class,
    (void*)daObj_Msima_Execute__FP15obj_msima_class,
    (void*)daObj_Msima_IsDelete__FP15obj_msima_class,
    (void*)daObj_Msima_Draw__FP15obj_msima_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C9CE18-80C9CE48 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_MSIMA */
SECTION_DATA extern void* g_profile_OBJ_MSIMA[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x007B0000, (void*)&g_fpcLf_Method,
    (void*)0x000008A4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00330000, (void*)&l_daObj_Msima_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80C9CE48-80C9CE54 000050 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C9CE54-80C9CE60 00005C 000C+00 2/2 0/0 0/0 .data            __vt__17daObj_Msima_HIO_c */
SECTION_DATA extern void* __vt__17daObj_Msima_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daObj_Msima_HIO_cFv,
};

/* 80C9B40C-80C9B44C 0000EC 0040+00 1/1 0/0 0/0 .text            __ct__17daObj_Msima_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Msima_HIO_c::daObj_Msima_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/__ct__17daObj_Msima_HIO_cFv.s"
}
#pragma pop

/* 80C9B44C-80C9B4A8 00012C 005C+00 1/1 0/0 0/0 .text
 * ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ride_call_back(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80C9B4A8-80C9B5F8 000188 0150+00 1/0 0/0 0/0 .text daObj_Msima_Draw__FP15obj_msima_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Msima_Draw(obj_msima_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/daObj_Msima_Draw__FP15obj_msima_class.s"
}
#pragma pop

/* 80C9B5F8-80C9B60C 0002D8 0014+00 1/1 0/0 0/0 .text            msima_start__FP15obj_msima_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void msima_start(obj_msima_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/msima_start__FP15obj_msima_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9CD54-80C9CD58 000008 0004+00 0/2 0/0 0/0 .rodata          @4013 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4013 = 0x43960000;
SECTION_DEAD void* const cg_80C9CD54 = (void*)(&lit_4013);
#pragma pop

/* 80C9CD58-80C9CD5C 00000C 0004+00 0/2 0/0 0/0 .rodata          @4014 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4014 = 0x3DCCCCCD;
SECTION_DEAD void* const cg_80C9CD58 = (void*)(&lit_4014);
#pragma pop

/* 80C9CD5C-80C9CD60 000010 0004+00 0/3 0/0 0/0 .rodata          @4015 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4015 = 0x41F00000;
SECTION_DEAD void* const cg_80C9CD5C = (void*)(&lit_4015);
#pragma pop

/* 80C9CD60-80C9CD64 000014 0004+00 0/2 0/0 0/0 .rodata          @4016 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4016 = 0x40A00000;
SECTION_DEAD void* const cg_80C9CD60 = (void*)(&lit_4016);
#pragma pop

/* 80C9CD64-80C9CD68 000018 0004+00 0/1 0/0 0/0 .rodata          @4017 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4017 = 0xC2A00000;
SECTION_DEAD void* const cg_80C9CD64 = (void*)(&lit_4017);
#pragma pop

/* 80C9CD68-80C9CD6C 00001C 0004+00 0/1 0/0 0/0 .rodata          @4018 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4018 = 0x44FA0000;
SECTION_DEAD void* const cg_80C9CD68 = (void*)(&lit_4018);
#pragma pop

/* 80C9CD6C-80C9CD70 000020 0004+00 0/7 0/0 0/0 .rodata          @4019 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4019[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80C9CD6C = (void*)(&lit_4019);
#pragma pop

/* 80C9CD70-80C9CD74 000024 0004+00 0/1 0/0 0/0 .rodata          @4020 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4020 = 0xBF800000;
SECTION_DEAD void* const cg_80C9CD70 = (void*)(&lit_4020);
#pragma pop

/* 80C9CE68-80C9CE6C 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80C9CE6C-80C9CE70 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80C9CE70-80C9CE74 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80C9CE74-80C9CE78 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80C9CE78-80C9CE7C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80C9CE7C-80C9CE80 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80C9CE80-80C9CE84 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80C9CE84-80C9CE88 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80C9CE88-80C9CE8C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80C9CE8C-80C9CE90 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80C9CE90-80C9CE94 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80C9CE94-80C9CE98 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80C9CE98-80C9CE9C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80C9CE9C-80C9CEA0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80C9CEA0-80C9CEA4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80C9CEA4-80C9CEA8 -00001 0004+00 2/2 0/0 0/0 .bss             None */
/* 80C9CEA4 0001+00 data_80C9CEA4 @1009 */
/* 80C9CEA5 0003+00 data_80C9CEA5 None */
static u8 struct_80C9CEA4[4];

/* 80C9CEA8-80C9CEB4 000048 000C+00 0/1 0/0 0/0 .bss             @3858 */
#pragma push
#pragma force_active on
static u8 lit_3858[12];
#pragma pop

/* 80C9CEB4-80C9CEC8 000054 0014+00 4/5 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[20];

/* 80C9CEC8-80C9CED4 000068 000C+00 0/1 0/0 0/0 .bss             @3958 */
#pragma push
#pragma force_active on
static u8 lit_3958[12];
#pragma pop

/* 80C9CED4-80C9CEE0 000074 000C+00 1/2 0/0 0/0 .bss             c_pos */
static u8 c_pos[12];

/* 80C9B60C-80C9B890 0002EC 0284+00 1/1 0/0 0/0 .text            msima_drop__FP15obj_msima_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void msima_drop(obj_msima_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/msima_drop__FP15obj_msima_class.s"
}
#pragma pop

/* 80C9B890-80C9B8CC 000570 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/__dt__4cXyzFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9CD74-80C9CD78 000028 0004+00 0/1 0/0 0/0 .rodata          @4043 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4043 = 0x3B83126F;
SECTION_DEAD void* const cg_80C9CD74 = (void*)(&lit_4043);
#pragma pop

/* 80C9CD78-80C9CD7C 00002C 0004+00 0/1 0/0 0/0 .rodata          @4044 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4044 = 0x3E4CCCCD;
SECTION_DEAD void* const cg_80C9CD78 = (void*)(&lit_4044);
#pragma pop

/* 80C9CD7C-80C9CD80 000030 0004+00 0/2 0/0 0/0 .rodata          @4045 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4045 = 0x41A00000;
SECTION_DEAD void* const cg_80C9CD7C = (void*)(&lit_4045);
#pragma pop

/* 80C9CD80-80C9CD84 000034 0004+00 0/1 0/0 0/0 .rodata          @4046 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4046 = 0xC1A00000;
SECTION_DEAD void* const cg_80C9CD80 = (void*)(&lit_4046);
#pragma pop

/* 80C9B8CC-80C9BA30 0005AC 0164+00 1/1 0/0 0/0 .text            msima_float__FP15obj_msima_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void msima_float(obj_msima_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/msima_float__FP15obj_msima_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9CD84-80C9CD88 000038 0004+00 0/1 0/0 0/0 .rodata          @4168 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4168 = 0xC1F00000;
SECTION_DEAD void* const cg_80C9CD84 = (void*)(&lit_4168);
#pragma pop

/* 80C9CD88-80C9CD8C 00003C 0004+00 0/1 0/0 0/0 .rodata          @4169 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4169 = 0x41700000;
SECTION_DEAD void* const cg_80C9CD88 = (void*)(&lit_4169);
#pragma pop

/* 80C9CD8C-80C9CD90 000040 0004+00 0/1 0/0 0/0 .rodata          @4170 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4170 = 0xC2480000;
SECTION_DEAD void* const cg_80C9CD8C = (void*)(&lit_4170);
#pragma pop

/* 80C9CD90-80C9CD94 000044 0004+00 0/1 0/0 0/0 .rodata          @4171 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4171 = 0x3F000000;
SECTION_DEAD void* const cg_80C9CD90 = (void*)(&lit_4171);
#pragma pop

/* 80C9CD94-80C9CD98 000048 0004+00 0/1 0/0 0/0 .rodata          @4172 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4172 = 0x43C80000;
SECTION_DEAD void* const cg_80C9CD94 = (void*)(&lit_4172);
#pragma pop

/* 80C9CD98-80C9CD9C 00004C 0004+00 0/1 0/0 0/0 .rodata          @4173 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4173 = 0x3FC00000;
SECTION_DEAD void* const cg_80C9CD98 = (void*)(&lit_4173);
#pragma pop

/* 80C9CD9C-80C9CDA4 000050 0004+04 0/1 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4174[1 + 1 /* padding */] = {
    0x40200000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80C9CD9C = (void*)(&lit_4174);
#pragma pop

/* 80C9CDA4-80C9CDAC 000058 0008+00 0/2 0/0 0/0 .rodata          @4177 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4177[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80C9CDA4 = (void*)(&lit_4177);
#pragma pop

/* 80C9BA30-80C9BEB0 000710 0480+00 1/1 0/0 0/0 .text            action__FP15obj_msima_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(obj_msima_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/action__FP15obj_msima_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9CDAC-80C9CDB0 000060 0004+00 0/2 0/0 0/0 .rodata          @4214 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4214 = 0x453B8000;
SECTION_DEAD void* const cg_80C9CDAC = (void*)(&lit_4214);
#pragma pop

/* 80C9CDB0-80C9CDB4 000064 0004+00 0/2 0/0 0/0 .rodata          @4215 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4215 = 0x403CCCCD;
SECTION_DEAD void* const cg_80C9CDB0 = (void*)(&lit_4215);
#pragma pop

/* 80C9CDB4-80C9CDB8 000068 0004+00 0/1 0/0 0/0 .rodata          @4216 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4216 = 0x425C0000;
SECTION_DEAD void* const cg_80C9CDB4 = (void*)(&lit_4216);
#pragma pop

/* 80C9CEE0-80C9CEEC 000080 000C+00 0/1 0/0 0/0 .bss             @4179 */
#pragma push
#pragma force_active on
static u8 lit_4179[12];
#pragma pop

/* 80C9CEEC-80C9CEF8 00008C 000C+00 0/1 0/0 0/0 .bss             @4180 */
#pragma push
#pragma force_active on
static u8 lit_4180[12];
#pragma pop

/* 80C9CEF8-80C9CF04 000098 000C+00 0/1 0/0 0/0 .bss             @4181 */
#pragma push
#pragma force_active on
static u8 lit_4181[12];
#pragma pop

/* 80C9CF04-80C9CF10 0000A4 000C+00 0/1 0/0 0/0 .bss             @4182 */
#pragma push
#pragma force_active on
static u8 lit_4182[12];
#pragma pop

/* 80C9CF10-80C9CF40 0000B0 0030+00 1/2 0/0 0/0 .bss             chain_p */
static u8 chain_p[48];

/* 80C9BEB0-80C9C00C 000B90 015C+00 1/1 0/0 0/0 .text
 * chain_move__FP15obj_msima_classP10ms_chain_si                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void chain_move(obj_msima_class* param_0, ms_chain_s* param_1, int param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/chain_move__FP15obj_msima_classP10ms_chain_si.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9CDB8-80C9CDBC 00006C 0004+00 0/1 0/0 0/0 .rodata          @4265 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4265 = 0x437A0000;
SECTION_DEAD void* const cg_80C9CDB8 = (void*)(&lit_4265);
#pragma pop

/* 80C9CDBC-80C9CDC0 000070 0004+00 0/1 0/0 0/0 .rodata          @4266 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4266 = 0x3F4CCCCD;
SECTION_DEAD void* const cg_80C9CDBC = (void*)(&lit_4266);
#pragma pop

/* 80C9CDC0-80C9CDC4 000074 0004+00 0/1 0/0 0/0 .rodata          @4267 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4267 = 0x3E99999A;
SECTION_DEAD void* const cg_80C9CDC0 = (void*)(&lit_4267);
#pragma pop

/* 80C9CDC4-80C9CDC8 000078 0004+00 0/1 0/0 0/0 .rodata          @4268 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4268 = 0xC25C0000;
SECTION_DEAD void* const cg_80C9CDC4 = (void*)(&lit_4268);
#pragma pop

/* 80C9CDC8-80C9CDCC 00007C 0004+00 0/1 0/0 0/0 .rodata          @4269 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4269 = 0x3CF5C28F;
SECTION_DEAD void* const cg_80C9CDC8 = (void*)(&lit_4269);
#pragma pop

/* 80C9CF40-80C9CF4C 0000E0 000C+00 0/1 0/0 0/0 .bss             @4218 */
#pragma push
#pragma force_active on
static u8 lit_4218[12];
#pragma pop

/* 80C9CF4C-80C9CF58 0000EC 000C+00 0/1 0/0 0/0 .bss             @4219 */
#pragma push
#pragma force_active on
static u8 lit_4219[12];
#pragma pop

/* 80C9CF58-80C9CF64 0000F8 000C+00 0/1 0/0 0/0 .bss             @4220 */
#pragma push
#pragma force_active on
static u8 lit_4220[12];
#pragma pop

/* 80C9CF64-80C9CF70 000104 000C+00 0/1 0/0 0/0 .bss             @4221 */
#pragma push
#pragma force_active on
static u8 lit_4221[12];
#pragma pop

/* 80C9CF70-80C9CFA0 000110 0030+00 1/2 0/0 0/0 .bss             chain_p2 */
static u8 chain_p2[48];

/* 80C9C00C-80C9C25C 000CEC 0250+00 1/1 0/0 0/0 .text
 * chain_move2__FP15obj_msima_classP10ms_chain_si               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void chain_move2(obj_msima_class* param_0, ms_chain_s* param_1, int param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/chain_move2__FP15obj_msima_classP10ms_chain_si.s"
}
#pragma pop

/* 80C9C25C-80C9C3A8 000F3C 014C+00 2/1 0/0 0/0 .text daObj_Msima_Execute__FP15obj_msima_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Msima_Execute(obj_msima_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/daObj_Msima_Execute__FP15obj_msima_class.s"
}
#pragma pop

/* 80C9C3A8-80C9C3B0 001088 0008+00 1/0 0/0 0/0 .text daObj_Msima_IsDelete__FP15obj_msima_class */
static bool daObj_Msima_IsDelete(obj_msima_class* param_0) {
    return true;
}

/* 80C9C3B0-80C9C42C 001090 007C+00 1/0 0/0 0/0 .text daObj_Msima_Delete__FP15obj_msima_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Msima_Delete(obj_msima_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/daObj_Msima_Delete__FP15obj_msima_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9CDCC-80C9CDD0 000080 0004+00 1/2 0/0 0/0 .rodata          @4412 */
SECTION_RODATA static u32 const lit_4412 = 0x47800000;
SECTION_DEAD void* const cg_80C9CDCC = (void*)(&lit_4412);

/* 80C9C42C-80C9C720 00110C 02F4+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C9C720-80C9C768 001400 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9CDD0-80C9CDD4 000084 0004+00 0/1 0/0 0/0 .rodata          @4524 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4524 = 0x448FC000;
SECTION_DEAD void* const cg_80C9CDD0 = (void*)(&lit_4524);
#pragma pop

/* 80C9CDD4-80C9CDD8 000088 0004+00 0/1 0/0 0/0 .rodata          @4525 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4525 = 0x44484000;
SECTION_DEAD void* const cg_80C9CDD4 = (void*)(&lit_4525);
#pragma pop

/* 80C9CDD8-80C9CDDC 00008C 0004+00 0/1 0/0 0/0 .rodata          @4526 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4526 = 0x44ED8000;
SECTION_DEAD void* const cg_80C9CDD8 = (void*)(&lit_4526);
#pragma pop

/* 80C9C768-80C9CA60 001448 02F8+00 1/0 0/0 0/0 .text            daObj_Msima_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Msima_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/daObj_Msima_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C9CA60-80C9CA9C 001740 003C+00 1/1 0/0 0/0 .text            __dt__10ms_chain_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm ms_chain_s::~ms_chain_s() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/__dt__10ms_chain_sFv.s"
}
#pragma pop

/* 80C9CA9C-80C9CAA0 00177C 0004+00 1/1 0/0 0/0 .text            __ct__10ms_chain_sFv */
ms_chain_s::ms_chain_s() {
    /* empty function */
}

/* 80C9CAA0-80C9CAE8 001780 0048+00 2/1 0/0 0/0 .text            __dt__17daObj_Msima_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Msima_HIO_c::~daObj_Msima_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/__dt__17daObj_Msima_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C9CDDC-80C9CDE0 000090 0004+00 0/1 0/0 0/0 .rodata          @4602 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4602 = 0x43480000;
SECTION_DEAD void* const cg_80C9CDDC = (void*)(&lit_4602);
#pragma pop

/* 80C9CDE0-80C9CDE4 000094 0004+00 0/1 0/0 0/0 .rodata          @4603 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4603 = 0x44898000;
SECTION_DEAD void* const cg_80C9CDE0 = (void*)(&lit_4603);
#pragma pop

/* 80C9CDE4-80C9CDE8 000098 0004+00 0/1 0/0 0/0 .rodata          @4604 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4604 = 0xC4898000;
SECTION_DEAD void* const cg_80C9CDE4 = (void*)(&lit_4604);
#pragma pop

/* 80C9CDE8-80C9CDEC 00009C 0004+00 0/1 0/0 0/0 .rodata          @4605 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4605 = 0x457A0000;
SECTION_DEAD void* const cg_80C9CDE8 = (void*)(&lit_4605);
#pragma pop

/* 80C9CAE8-80C9CD38 0017C8 0250+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_msima_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_msima_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_msima/d_a_obj_msima/__sinit_d_a_obj_msima_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80C9CAE8 = (void*)__sinit_d_a_obj_msima_cpp;
#pragma pop

/* ############################################################################################## */
/* 80C9CFA0-80C9CFA4 000140 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80C9CFA0[4];
#pragma pop

/* 80C9CFA4-80C9CFA8 000144 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80C9CFA4[4];
#pragma pop

/* 80C9CFA8-80C9CFAC 000148 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80C9CFA8[4];
#pragma pop

/* 80C9CFAC-80C9CFB0 00014C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80C9CFAC[4];
#pragma pop

/* 80C9CFB0-80C9CFB4 000150 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFB0[4];
#pragma pop

/* 80C9CFB4-80C9CFB8 000154 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFB4[4];
#pragma pop

/* 80C9CFB8-80C9CFBC 000158 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFB8[4];
#pragma pop

/* 80C9CFBC-80C9CFC0 00015C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80C9CFBC[4];
#pragma pop

/* 80C9CFC0-80C9CFC4 000160 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80C9CFC0[4];
#pragma pop

/* 80C9CFC4-80C9CFC8 000164 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80C9CFC4[4];
#pragma pop

/* 80C9CFC8-80C9CFCC 000168 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80C9CFC8[4];
#pragma pop

/* 80C9CFCC-80C9CFD0 00016C 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80C9CFCC[4];
#pragma pop

/* 80C9CFD0-80C9CFD4 000170 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80C9CFD0[4];
#pragma pop

/* 80C9CFD4-80C9CFD8 000174 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFD4[4];
#pragma pop

/* 80C9CFD8-80C9CFDC 000178 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80C9CFD8[4];
#pragma pop

/* 80C9CFDC-80C9CFE0 00017C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80C9CFDC[4];
#pragma pop

/* 80C9CFE0-80C9CFE4 000180 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80C9CFE0[4];
#pragma pop

/* 80C9CFE4-80C9CFE8 000184 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80C9CFE4[4];
#pragma pop

/* 80C9CFE8-80C9CFEC 000188 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFE8[4];
#pragma pop

/* 80C9CFEC-80C9CFF0 00018C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80C9CFEC[4];
#pragma pop

/* 80C9CFF0-80C9CFF4 000190 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFF0[4];
#pragma pop

/* 80C9CFF4-80C9CFF8 000194 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFF4[4];
#pragma pop

/* 80C9CFF8-80C9CFFC 000198 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFF8[4];
#pragma pop

/* 80C9CFFC-80C9D000 00019C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80C9CFFC[4];
#pragma pop

/* 80C9D000-80C9D004 0001A0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80C9D000[4];
#pragma pop

/* 80C9CDEC-80C9CDF6 0000A0 000A+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C9CDEC = "MAGNESIMA";
#pragma pop
