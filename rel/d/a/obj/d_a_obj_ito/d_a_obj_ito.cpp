//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ito
//

#include "rel/d/a/obj/d_a_obj_ito/d_a_obj_ito.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_ito_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct mDoExt_3DlineMat_c {};

struct mDoExt_3DlineMatSortPacket {
    /* 80014738 */ void setMat(mDoExt_3DlineMat_c*);
};

struct _GXColor {};

struct dKy_tevstr_c {};

struct mDoExt_3DlineMat0_c {
    /* 800125E0 */ void init(u16, u16, int);
    /* 80012E3C */ void update(int, _GXColor&, dKy_tevstr_c*);
};

struct ito_s {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Ito_HIO_c {
    /* 8047B2EC */ daObj_Ito_HIO_c();
    /* 8047D778 */ ~daObj_Ito_HIO_c();
};

struct J3DModelData {};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
    /* 8047B9A4 */ ~cXyz();
    /* 8047D594 */ cXyz();
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

struct dPa_control_c {
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dCcU_AtInfo {};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 8047D598 */ ~dCcD_Sph();
    /* 8047D664 */ dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084548 */ void GetTgHitGObj();
    /* 80084658 */ void ChkCoHit();
    /* 800846F0 */ void GetCoHitObj();
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 8047D6E8 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 8047D730 */ ~cM3dGAab();
};

struct cCcD_Obj {
    /* 80263A48 */ void GetAc();
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_LinChk {};

struct cBgS_GndChk {
    /* 80267D0C */ void SetPos(Vec const*);
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__15daObj_Ito_HIO_cFv();
extern "C" static void daObj_Ito_Draw__FP13obj_ito_class();
extern "C" static void cut_line_calc__FP13obj_ito_classP5ito_si();
extern "C" void __dt__4cXyzFv();
extern "C" static void cut_line__FP13obj_ito_class();
extern "C" static void cut_set__FP13obj_ito_classi();
extern "C" static void ito_end__FP5ito_s();
extern "C" static void action__FP13obj_ito_class();
extern "C" static void daObj_Ito_Execute__FP13obj_ito_class();
extern "C" static bool daObj_Ito_IsDelete__FP13obj_ito_class();
extern "C" static void daObj_Ito_Delete__FP13obj_ito_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Ito_Create__FP10fopAc_ac_c();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__15daObj_Ito_HIO_cFv();
extern "C" void __sinit_d_a_obj_ito_cpp();
extern "C" extern char const* const d_a_obj_ito__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void init__19mDoExt_3DlineMat0_cFUsUsi();
extern "C" void update__19mDoExt_3DlineMat0_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c();
extern "C" void at_power_check__FP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void __save_gpr();
extern "C" void _savegpr_16();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void __restore_gpr();
extern "C" void _restgpr_16();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19mDoExt_3DlineMat0_c[5];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 8047D810-8047D814 000000 0004+00 7/7 0/0 0/0 .rodata          @3770 */
SECTION_RODATA static u32 const lit_3770 = 0x40900000;
SECTION_DEAD void* const cg_8047D810 = (void*)(&lit_3770);

/* 8047D814-8047D818 000004 0004+00 1/1 0/0 0/0 .rodata          @3771 */
SECTION_RODATA static u32 const lit_3771 = 0x41700000;
SECTION_DEAD void* const cg_8047D814 = (void*)(&lit_3771);

/* 8047D8DC-8047D91C 000000 0040+00 1/1 0/0 0/0 .data            cc_sph_src$4829 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 8047D91C-8047D938 000040 001C+00 1/1 0/0 0/0 .data            obj_size$4835 */
SECTION_DATA static u8 obj_size[28] = {
    0x3F, 0x2A, 0x7E, 0xFA, 0x3F, 0x4C, 0xCC, 0xCD, 0x3F, 0x33, 0x33, 0x33, 0x3F, 0x99,
    0x99, 0x9A, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x33, 0x33, 0x33, 0x3F, 0x99, 0x99, 0x9A,
};

/* 8047D938-8047D958 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Ito_Method */
SECTION_DATA static void* l_daObj_Ito_Method[8] = {
    (void*)daObj_Ito_Create__FP10fopAc_ac_c,
    (void*)daObj_Ito_Delete__FP13obj_ito_class,
    (void*)daObj_Ito_Execute__FP13obj_ito_class,
    (void*)daObj_Ito_IsDelete__FP13obj_ito_class,
    (void*)daObj_Ito_Draw__FP13obj_ito_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 8047D958-8047D988 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_ITO */
SECTION_DATA extern void* g_profile_OBJ_ITO[12] = {
    (void*)0xFFFFFFFD, (void*)0x0004FFFD,
    (void*)0x00F00000, (void*)&g_fpcLf_Method,
    (void*)0x0000150C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x003D0000, (void*)&l_daObj_Ito_Method,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 8047D988-8047D994 0000AC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 8047D994-8047D9A0 0000B8 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 8047D9A0-8047D9B4 0000C4 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 8047D9B4-8047D9C0 0000D8 000C+00 2/2 0/0 0/0 .data            __vt__15daObj_Ito_HIO_c */
SECTION_DATA extern void* __vt__15daObj_Ito_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daObj_Ito_HIO_cFv,
};

/* 8047B2EC-8047B324 0000EC 0038+00 1/1 0/0 0/0 .text            __ct__15daObj_Ito_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Ito_HIO_c::daObj_Ito_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/__ct__15daObj_Ito_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047D818-8047D81C 000008 0004+00 0/1 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3794 = 0x000000FF;
SECTION_DEAD void* const cg_8047D818 = (void*)(&lit_3794);
#pragma pop

/* 8047D81C-8047D820 00000C 0004+00 0/1 0/0 0/0 .rodata          @3800 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3800 = 0x000000FF;
SECTION_DEAD void* const cg_8047D81C = (void*)(&lit_3800);
#pragma pop

/* 8047D820-8047D824 000010 0004+00 1/4 0/0 0/0 .rodata          @3820 */
SECTION_RODATA static u32 const lit_3820 = 0x3C23D70A;
SECTION_DEAD void* const cg_8047D820 = (void*)(&lit_3820);

/* 8047D9C8-8047D9CC 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_8047D9C8[4];

/* 8047D9CC-8047D9D8 00000C 000C+00 1/1 0/0 0/0 .bss             @3765 */
static u8 lit_3765[12];

/* 8047D9D8-8047D9EC 000018 0014+00 5/5 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[20];

/* 8047B324-8047B504 000124 01E0+00 1/0 0/0 0/0 .text            daObj_Ito_Draw__FP13obj_ito_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Ito_Draw(obj_ito_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/daObj_Ito_Draw__FP13obj_ito_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047D824-8047D828 000014 0004+00 0/2 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3940 = 0x41F00000;
SECTION_DEAD void* const cg_8047D824 = (void*)(&lit_3940);
#pragma pop

/* 8047D828-8047D82C 000018 0004+00 0/4 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3941[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_8047D828 = (void*)(&lit_3941);
#pragma pop

/* 8047D82C-8047D830 00001C 0004+00 0/1 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3942 = 0x3AEBEDFA;
SECTION_DEAD void* const cg_8047D82C = (void*)(&lit_3942);
#pragma pop

/* 8047D830-8047D834 000020 0004+00 0/2 0/0 0/0 .rodata          @3943 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3943 = 0x3DCCCCCD;
SECTION_DEAD void* const cg_8047D830 = (void*)(&lit_3943);
#pragma pop

/* 8047D834-8047D838 000024 0004+00 0/2 0/0 0/0 .rodata          @3944 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3944 = 0x3F000000;
SECTION_DEAD void* const cg_8047D834 = (void*)(&lit_3944);
#pragma pop

/* 8047D838-8047D83C 000028 0004+00 0/1 0/0 0/0 .rodata          @3945 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3945 = 0x40000000;
SECTION_DEAD void* const cg_8047D838 = (void*)(&lit_3945);
#pragma pop

/* 8047D83C-8047D840 00002C 0004+00 2/4 0/0 0/0 .rodata          @3946 */
SECTION_RODATA static u32 const lit_3946 = 0x3F800000;
SECTION_DEAD void* const cg_8047D83C = (void*)(&lit_3946);

/* 8047D840-8047D844 000030 0004+00 0/1 0/0 0/0 .rodata          @3947 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3947 = 0x3CF5C28F;
SECTION_DEAD void* const cg_8047D840 = (void*)(&lit_3947);
#pragma pop

/* 8047D844-8047D848 000034 0004+00 0/1 0/0 0/0 .rodata          @3948 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3948 = 0x43480000;
SECTION_DEAD void* const cg_8047D844 = (void*)(&lit_3948);
#pragma pop

/* 8047D848-8047D850 000038 0004+04 0/1 0/0 0/0 .rodata          @3949 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3949[1 + 1 /* padding */] = {
    0x40A00000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_8047D848 = (void*)(&lit_3949);
#pragma pop

/* 8047D850-8047D858 000040 0008+00 0/3 0/0 0/0 .rodata          @3951 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3951[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8047D850 = (void*)(&lit_3951);
#pragma pop

/* 8047B504-8047B9A4 000304 04A0+00 1/1 0/0 0/0 .text cut_line_calc__FP13obj_ito_classP5ito_si */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void cut_line_calc(obj_ito_class* param_0, ito_s* param_1, int param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/cut_line_calc__FP13obj_ito_classP5ito_si.s"
}
#pragma pop

/* 8047B9A4-8047B9E0 0007A4 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/__dt__4cXyzFv.s"
}
#pragma pop

/* 8047B9E0-8047BAF8 0007E0 0118+00 1/1 0/0 0/0 .text            cut_line__FP13obj_ito_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void cut_line(obj_ito_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/cut_line__FP13obj_ito_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047D858-8047D860 000048 0004+04 0/1 0/0 0/0 .rodata          @4124 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4124[1 + 1 /* padding */] = {
    0x3D4CCCCD,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_8047D858 = (void*)(&lit_4124);
#pragma pop

/* 8047D860-8047D868 000050 0008+00 0/2 0/0 0/0 .rodata          @4125 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4125[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8047D860 = (void*)(&lit_4125);
#pragma pop

/* 8047D868-8047D870 000058 0008+00 0/2 0/0 0/0 .rodata          @4126 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4126[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8047D868 = (void*)(&lit_4126);
#pragma pop

/* 8047D870-8047D878 000060 0008+00 0/2 0/0 0/0 .rodata          @4127 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4127[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8047D870 = (void*)(&lit_4127);
#pragma pop

/* 8047D878-8047D87C 000068 0004+00 0/1 0/0 0/0 .rodata          @4128 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4128 = 0x3D6147AE;
SECTION_DEAD void* const cg_8047D878 = (void*)(&lit_4128);
#pragma pop

/* 8047D87C-8047D880 00006C 0004+00 0/1 0/0 0/0 .rodata          @4129 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4129 = 0x3D577319;
SECTION_DEAD void* const cg_8047D87C = (void*)(&lit_4129);
#pragma pop

/* 8047D880-8047D884 000070 0004+00 0/2 0/0 0/0 .rodata          @4130 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4130 = 0x41A00000;
SECTION_DEAD void* const cg_8047D880 = (void*)(&lit_4130);
#pragma pop

/* 8047BAF8-8047BF8C 0008F8 0494+00 1/1 0/0 0/0 .text            cut_set__FP13obj_ito_classi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void cut_set(obj_ito_class* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/cut_set__FP13obj_ito_classi.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047D884-8047D888 000074 0004+00 1/1 0/0 0/0 .rodata          @4150 */
SECTION_RODATA static u32 const lit_4150 = 0x41200000;
SECTION_DEAD void* const cg_8047D884 = (void*)(&lit_4150);

/* 8047BF8C-8047C034 000D8C 00A8+00 1/1 0/0 0/0 .text            ito_end__FP5ito_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ito_end(ito_s* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/ito_end__FP5ito_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047D888-8047D88C 000078 0004+00 0/1 0/0 0/0 .rodata          @4723 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4723 = 0x3E800000;
SECTION_DEAD void* const cg_8047D888 = (void*)(&lit_4723);
#pragma pop

/* 8047D88C-8047D890 00007C 0004+00 0/1 0/0 0/0 .rodata          @4724 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4724 = 0x3A83126F;
SECTION_DEAD void* const cg_8047D88C = (void*)(&lit_4724);
#pragma pop

/* 8047D890-8047D894 000080 0004+00 0/1 0/0 0/0 .rodata          @4725 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4725 = 0x3DE147AE;
SECTION_DEAD void* const cg_8047D890 = (void*)(&lit_4725);
#pragma pop

/* 8047D894-8047D898 000084 0004+00 0/1 0/0 0/0 .rodata          @4726 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4726 = 0xBF800000;
SECTION_DEAD void* const cg_8047D894 = (void*)(&lit_4726);
#pragma pop

/* 8047D898-8047D89C 000088 0004+00 0/1 0/0 0/0 .rodata          @4727 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4727 = 0x46403000;
SECTION_DEAD void* const cg_8047D898 = (void*)(&lit_4727);
#pragma pop

/* 8047D89C-8047D8A0 00008C 0004+00 0/2 0/0 0/0 .rodata          @4728 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4728 = 0x459C4000;
SECTION_DEAD void* const cg_8047D89C = (void*)(&lit_4728);
#pragma pop

/* 8047D8A0-8047D8A4 000090 0004+00 0/2 0/0 0/0 .rodata          @4729 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4729 = 0xC59C4000;
SECTION_DEAD void* const cg_8047D8A0 = (void*)(&lit_4729);
#pragma pop

/* 8047D8A4-8047D8A8 000094 0004+00 0/1 0/0 0/0 .rodata          @4730 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4730 = 0x3D579436;
SECTION_DEAD void* const cg_8047D8A4 = (void*)(&lit_4730);
#pragma pop

/* 8047D8A8-8047D8AC 000098 0004+00 0/1 0/0 0/0 .rodata          @4731 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4731 = 0x3DD79436;
SECTION_DEAD void* const cg_8047D8A8 = (void*)(&lit_4731);
#pragma pop

/* 8047D8AC-8047D8B0 00009C 0004+00 0/1 0/0 0/0 .rodata          @4732 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4732 = 0x45098000;
SECTION_DEAD void* const cg_8047D8AC = (void*)(&lit_4732);
#pragma pop

/* 8047D8B0-8047D8B4 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4733 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4733 = 0x44BB8000;
SECTION_DEAD void* const cg_8047D8B0 = (void*)(&lit_4733);
#pragma pop

/* 8047C034-8047CEE4 000E34 0EB0+00 1/1 0/0 0/0 .text            action__FP13obj_ito_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(obj_ito_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/action__FP13obj_ito_class.s"
}
#pragma pop

/* 8047CEE4-8047CFA8 001CE4 00C4+00 1/0 0/0 0/0 .text daObj_Ito_Execute__FP13obj_ito_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Ito_Execute(obj_ito_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/daObj_Ito_Execute__FP13obj_ito_class.s"
}
#pragma pop

/* 8047CFA8-8047CFB0 001DA8 0008+00 1/0 0/0 0/0 .text daObj_Ito_IsDelete__FP13obj_ito_class */
static bool daObj_Ito_IsDelete(obj_ito_class* param_0) {
    return true;
}

/* 8047CFB0-8047D024 001DB0 0074+00 1/0 0/0 0/0 .text            daObj_Ito_Delete__FP13obj_ito_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Ito_Delete(obj_ito_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/daObj_Ito_Delete__FP13obj_ito_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047D8B4-8047D8B8 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4812 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4812 = 0x3ECCCCCD;
SECTION_DEAD void* const cg_8047D8B4 = (void*)(&lit_4812);
#pragma pop

/* 8047D8B8-8047D8BC 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4813 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4813 = 0x3E99999A;
SECTION_DEAD void* const cg_8047D8B8 = (void*)(&lit_4813);
#pragma pop

/* 8047D8BC-8047D8C0 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4814 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4814 = 0x477FFF00;
SECTION_DEAD void* const cg_8047D8BC = (void*)(&lit_4814);
#pragma pop

/* 8047D024-8047D1D8 001E24 01B4+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8047D8C0-8047D8C4 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4930 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4930 = 0xC53B8000;
SECTION_DEAD void* const cg_8047D8C0 = (void*)(&lit_4930);
#pragma pop

/* 8047D8C4-8047D8C8 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4931 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4931 = 0x453B8000;
SECTION_DEAD void* const cg_8047D8C4 = (void*)(&lit_4931);
#pragma pop

/* 8047D8C8-8047D8CC 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4932 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4932 = 0xC5A7F000;
SECTION_DEAD void* const cg_8047D8C8 = (void*)(&lit_4932);
#pragma pop

/* 8047D8CC-8047D8D0 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4933 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4933 = 0x4599C000;
SECTION_DEAD void* const cg_8047D8CC = (void*)(&lit_4933);
#pragma pop

/* 8047D8D0-8047D8D4 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4934 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4934 = 0xC5126000;
SECTION_DEAD void* const cg_8047D8D0 = (void*)(&lit_4934);
#pragma pop

/* 8047D1D8-8047D594 001FD8 03BC+00 1/0 0/0 0/0 .text            daObj_Ito_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Ito_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/daObj_Ito_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 8047D594-8047D598 002394 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 8047D598-8047D664 002398 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 8047D664-8047D6E8 002464 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 8047D6E8-8047D730 0024E8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 8047D730-8047D778 002530 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 8047D778-8047D7C0 002578 0048+00 2/1 0/0 0/0 .text            __dt__15daObj_Ito_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Ito_HIO_c::~daObj_Ito_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/__dt__15daObj_Ito_HIO_cFv.s"
}
#pragma pop

/* 8047D7C0-8047D7FC 0025C0 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_ito_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_ito_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ito/d_a_obj_ito/__sinit_d_a_obj_ito_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_8047D7C0 = (void*)__sinit_d_a_obj_ito_cpp;
#pragma pop

/* 8047D8D4-8047D8DC 0000C4 0008+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_8047D8D4 = "OBJ_ITO";
#pragma pop
