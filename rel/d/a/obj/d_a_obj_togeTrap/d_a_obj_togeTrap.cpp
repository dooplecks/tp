//
// Generated By: dol2asm
// Translation Unit: d_a_obj_togeTrap
//

#include "rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoHIO_entry_c {
    /* 80D17C2C */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct fOpAcm_HIO_entry_c {
    /* 80D17BD0 */ ~fOpAcm_HIO_entry_c();
};

struct dBgW {};

struct daTogeTrap_c {
    /* 80D17C74 */ void setBaseMtx();
    /* 80D17D5C */ void CreateHeap();
    /* 80D17E14 */ void create();
    /* 80D18244 */ void rideCallBack(dBgW*, fopAc_ac_c*, fopAc_ac_c*);
    /* 80D1825C */ void Execute(f32 (**)[3][4]);
    /* 80D182C8 */ void moveMain();
    /* 80D185DC */ void playerAreaCheck();
    /* 80D186B0 */ void init_modeWait();
    /* 80D186BC */ void modeWait();
    /* 80D186C0 */ void init_modeMoveUp();
    /* 80D18784 */ void modeMoveUp();
    /* 80D188C0 */ void init_modeMoveDown();
    /* 80D188DC */ void modeMoveDown();
    /* 80D18994 */ void init_modeBreak();
    /* 80D18A5C */ void modeBreak();
    /* 80D18BEC */ void Draw();
    /* 80D18CA4 */ void Delete();
};

struct daTogeTrap_HIO_c {
    /* 80D17B6C */ daTogeTrap_HIO_c();
    /* 80D18DA8 */ ~daTogeTrap_HIO_c();
};

struct daPy_py_c {
    /* 8015F7C8 */ void getSpinnerRideSpeed() const;
    /* 8015F814 */ void checkSpinnerReflectEffect();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct J3DModelData {};

struct dKy_tevstr_c {};

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

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80D181E8 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
    /* 80D18008 */ ~dCcD_Cyl();
    /* 80D180D4 */ dCcD_Cyl();
};

struct dBgW_Base {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 80078690 */ bool Create();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80D18158 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80D181A0 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80D18D60 */ ~cCcD_GStts();
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__16daTogeTrap_HIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daTogeTrap_cFv();
extern "C" void CreateHeap__12daTogeTrap_cFv();
extern "C" void create__12daTogeTrap_cFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void rideCallBack__12daTogeTrap_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void Execute__12daTogeTrap_cFPPA3_A4_f();
extern "C" void moveMain__12daTogeTrap_cFv();
extern "C" void playerAreaCheck__12daTogeTrap_cFv();
extern "C" void init_modeWait__12daTogeTrap_cFv();
extern "C" void modeWait__12daTogeTrap_cFv();
extern "C" void init_modeMoveUp__12daTogeTrap_cFv();
extern "C" void modeMoveUp__12daTogeTrap_cFv();
extern "C" void init_modeMoveDown__12daTogeTrap_cFv();
extern "C" void modeMoveDown__12daTogeTrap_cFv();
extern "C" void init_modeBreak__12daTogeTrap_cFv();
extern "C" void modeBreak__12daTogeTrap_cFv();
extern "C" void Draw__12daTogeTrap_cFv();
extern "C" void Delete__12daTogeTrap_cFv();
extern "C" static void daTogeTrap_Draw__FP12daTogeTrap_c();
extern "C" static void daTogeTrap_Execute__FP12daTogeTrap_c();
extern "C" static void daTogeTrap_Delete__FP12daTogeTrap_c();
extern "C" static void daTogeTrap_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__16daTogeTrap_HIO_cFv();
extern "C" void __sinit_d_a_obj_togeTrap_cpp();
extern "C" extern char const* const d_a_obj_togeTrap__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_wolfeye_effect_check__Fv();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void getSpinnerRideSpeed__9daPy_py_cCFv();
extern "C" void checkSpinnerReflectEffect__9daPy_py_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D18E98-80D18E9C 000000 0004+00 4/4 0/0 0/0 .rodata          @3655 */
SECTION_RODATA static u8 const lit_3655[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80D18E98 = (void*)(&lit_3655);

/* 80D18E9C-80D18EA0 000004 0004+00 0/1 0/0 0/0 .rodata          @3656 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3656 = 0x437A0000;
SECTION_DEAD void* const cg_80D18E9C = (void*)(&lit_3656);
#pragma pop

/* 80D18EA0-80D18EA4 000008 0004+00 0/1 0/0 0/0 .rodata          @3657 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3657 = 0x41200000;
SECTION_DEAD void* const cg_80D18EA0 = (void*)(&lit_3657);
#pragma pop

/* 80D18EA4-80D18EA8 00000C 0004+00 0/1 0/0 0/0 .rodata          @3658 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3658 = 0x41A00000;
SECTION_DEAD void* const cg_80D18EA4 = (void*)(&lit_3658);
#pragma pop

/* 80D18EA8-80D18EAC 000010 0004+00 0/2 0/0 0/0 .rodata          @3659 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3659 = 0x43FA0000;
SECTION_DEAD void* const cg_80D18EA8 = (void*)(&lit_3659);
#pragma pop

/* 80D18F10-80D18F1C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D18F1C-80D18F30 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80D18F30-80D18F74 000020 0044+00 2/2 0/0 0/0 .data            mCcDCyl__12daTogeTrap_c */
SECTION_DATA static u8 mCcDCyl__12daTogeTrap_c[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D18F74-80D18F80 -00001 000C+00 0/1 0/0 0/0 .data            @3883 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3883[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12daTogeTrap_cFv,
};
#pragma pop

/* 80D18F80-80D18F8C -00001 000C+00 0/1 0/0 0/0 .data            @3884 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3884[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveUp__12daTogeTrap_cFv,
};
#pragma pop

/* 80D18F8C-80D18F98 -00001 000C+00 0/1 0/0 0/0 .data            @3885 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3885[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveDown__12daTogeTrap_cFv,
};
#pragma pop

/* 80D18F98-80D18FA4 -00001 000C+00 0/1 0/0 0/0 .data            @3886 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3886[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBreak__12daTogeTrap_cFv,
};
#pragma pop

/* 80D18FA4-80D18FD4 000094 0030+00 0/1 0/0 0/0 .data            mode_proc$3882 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D18FD4-80D18FF4 -00001 0020+00 1/0 0/0 0/0 .data            l_daTogeTrap_Method */
SECTION_DATA static void* l_daTogeTrap_Method[8] = {
    (void*)daTogeTrap_Create__FP10fopAc_ac_c,
    (void*)daTogeTrap_Delete__FP12daTogeTrap_c,
    (void*)daTogeTrap_Execute__FP12daTogeTrap_c,
    (void*)NULL,
    (void*)daTogeTrap_Draw__FP12daTogeTrap_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D18FF4-80D19024 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_TogeTrap */
SECTION_DATA extern void* g_profile_Obj_TogeTrap[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x004A0000, (void*)&g_fpcLf_Method,
    (void*)0x00000AE4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x020C0000, (void*)&l_daTogeTrap_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80D19024-80D19030 000114 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80D19030-80D1903C 000120 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80D1903C-80D19048 00012C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D19048-80D19054 000138 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D19054-80D1907C 000144 0028+00 1/1 0/0 0/0 .data            __vt__12daTogeTrap_c */
SECTION_DATA extern void* __vt__12daTogeTrap_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daTogeTrap_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daTogeTrap_cFPPA3_A4_f,
    (void*)Draw__12daTogeTrap_cFv,
    (void*)Delete__12daTogeTrap_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D1907C-80D19088 00016C 000C+00 2/2 0/0 0/0 .data            __vt__16daTogeTrap_HIO_c */
SECTION_DATA extern void* __vt__16daTogeTrap_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daTogeTrap_HIO_cFv,
};

/* 80D19088-80D19094 000178 000C+00 3/3 0/0 0/0 .data            __vt__18fOpAcm_HIO_entry_c */
SECTION_DATA extern void* __vt__18fOpAcm_HIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80D19094-80D190A0 000184 000C+00 4/4 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80D17B6C-80D17BD0 0000EC 0064+00 1/1 0/0 0/0 .text            __ct__16daTogeTrap_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTogeTrap_HIO_c::daTogeTrap_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__ct__16daTogeTrap_HIO_cFv.s"
}
#pragma pop

/* 80D17BD0-80D17C2C 000150 005C+00 1/0 0/0 0/0 .text            __dt__18fOpAcm_HIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__dt__18fOpAcm_HIO_entry_cFv.s"
}
#pragma pop

/* 80D17C2C-80D17C74 0001AC 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80D17C74-80D17D5C 0001F4 00E8+00 2/2 0/0 0/0 .text            setBaseMtx__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/setBaseMtx__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D17D5C-80D17E14 0002DC 00B8+00 1/0 0/0 0/0 .text            CreateHeap__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/CreateHeap__12daTogeTrap_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D18EAC-80D18EDC 000014 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__12daTogeTrap_c */
SECTION_RODATA static u8 const mCcDObjInfo__12daTogeTrap_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D,
    0x00, 0x48, 0x00, 0x28, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D18EAC = (void*)(&mCcDObjInfo__12daTogeTrap_c);

/* 80D18EDC-80D18EE0 000044 0004+00 1/2 0/0 0/0 .rodata          @3780 */
SECTION_RODATA static u32 const lit_3780 = 0x43960000;
SECTION_DEAD void* const cg_80D18EDC = (void*)(&lit_3780);

/* 80D17E14-80D18008 000394 01F4+00 1/1 0/0 0/0 .text            create__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/create__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D18008-80D180D4 000588 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::~dCcD_Cyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__dt__8dCcD_CylFv.s"
}
#pragma pop

/* 80D180D4-80D18158 000654 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Cyl::dCcD_Cyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__ct__8dCcD_CylFv.s"
}
#pragma pop

/* 80D18158-80D181A0 0006D8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80D181A0-80D181E8 000720 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80D181E8-80D18244 000768 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80D18244-80D1825C 0007C4 0018+00 1/1 0/0 0/0 .text
 * rideCallBack__12daTogeTrap_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/rideCallBack__12daTogeTrap_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80D1825C-80D182C8 0007DC 006C+00 1/0 0/0 0/0 .text            Execute__12daTogeTrap_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/Execute__12daTogeTrap_cFPPA3_A4_f.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D18EE0-80D18EE4 000048 0004+00 0/1 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3940 = 0x42700000;
SECTION_DEAD void* const cg_80D18EE0 = (void*)(&lit_3940);
#pragma pop

/* 80D18EE4-80D18EE8 00004C 0004+00 0/1 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3941 = 0x43910000;
SECTION_DEAD void* const cg_80D18EE4 = (void*)(&lit_3941);
#pragma pop

/* 80D18EE8-80D18EEC 000050 0004+00 0/1 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3942 = 0x42C80000;
SECTION_DEAD void* const cg_80D18EE8 = (void*)(&lit_3942);
#pragma pop

/* 80D18EEC-80D18EF0 000054 0004+00 0/1 0/0 0/0 .rodata          @3943 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3943 = 0x43160000;
SECTION_DEAD void* const cg_80D18EEC = (void*)(&lit_3943);
#pragma pop

/* 80D18EF0-80D18EF8 000058 0008+00 0/1 0/0 0/0 .rodata          @3945 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3945[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80D18EF0 = (void*)(&lit_3945);
#pragma pop

/* 80D190A8-80D190B4 000008 000C+00 1/1 0/0 0/0 .bss             @3647 */
static u8 lit_3647[12];

/* 80D190B4-80D190D4 000014 0020+00 8/8 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[32];

/* 80D190D4-80D190D8 000034 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80D190D4[4];

/* 80D182C8-80D185DC 000848 0314+00 1/1 0/0 0/0 .text            moveMain__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::moveMain() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/moveMain__12daTogeTrap_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D18EF8-80D18EFC 000060 0004+00 1/1 0/0 0/0 .rodata          @3975 */
SECTION_RODATA static u32 const lit_3975 = 0x43610000;
SECTION_DEAD void* const cg_80D18EF8 = (void*)(&lit_3975);

/* 80D185DC-80D186B0 000B5C 00D4+00 2/2 0/0 0/0 .text            playerAreaCheck__12daTogeTrap_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::playerAreaCheck() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/playerAreaCheck__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D186B0-80D186BC 000C30 000C+00 3/3 0/0 0/0 .text            init_modeWait__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::init_modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/init_modeWait__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D186BC-80D186C0 000C3C 0004+00 1/0 0/0 0/0 .text            modeWait__12daTogeTrap_cFv */
void daTogeTrap_c::modeWait() {
    /* empty function */
}

/* ############################################################################################## */
/* 80D18EFC-80D18F00 000064 0004+00 3/5 0/0 0/0 .rodata          @4006 */
SECTION_RODATA static u32 const lit_4006 = 0x3F800000;
SECTION_DEAD void* const cg_80D18EFC = (void*)(&lit_4006);

/* 80D18F00-80D18F04 000068 0004+00 2/2 0/0 0/0 .rodata          @4007 */
SECTION_RODATA static u32 const lit_4007 = 0xBF800000;
SECTION_DEAD void* const cg_80D18F00 = (void*)(&lit_4007);

/* 80D186C0-80D18784 000C40 00C4+00 1/1 0/0 0/0 .text            init_modeMoveUp__12daTogeTrap_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::init_modeMoveUp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/init_modeMoveUp__12daTogeTrap_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D18F04-80D18F08 00006C 0004+00 0/2 0/0 0/0 .rodata          @4036 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4036 = 0x41F00000;
SECTION_DEAD void* const cg_80D18F04 = (void*)(&lit_4036);
#pragma pop

/* 80D18784-80D188C0 000D04 013C+00 1/0 0/0 0/0 .text            modeMoveUp__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::modeMoveUp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/modeMoveUp__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D188C0-80D188DC 000E40 001C+00 1/1 0/0 0/0 .text            init_modeMoveDown__12daTogeTrap_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::init_modeMoveDown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/init_modeMoveDown__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D188DC-80D18994 000E5C 00B8+00 1/0 0/0 0/0 .text            modeMoveDown__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::modeMoveDown() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/modeMoveDown__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D18994-80D18A5C 000F14 00C8+00 1/1 0/0 0/0 .text            init_modeBreak__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::init_modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/init_modeBreak__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D18A5C-80D18BEC 000FDC 0190+00 1/0 0/0 0/0 .text            modeBreak__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::modeBreak() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/modeBreak__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D18BEC-80D18CA4 00116C 00B8+00 1/0 0/0 0/0 .text            Draw__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/Draw__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D18CA4-80D18CD4 001224 0030+00 1/0 0/0 0/0 .text            Delete__12daTogeTrap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTogeTrap_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/Delete__12daTogeTrap_cFv.s"
}
#pragma pop

/* 80D18CD4-80D18D00 001254 002C+00 1/0 0/0 0/0 .text            daTogeTrap_Draw__FP12daTogeTrap_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTogeTrap_Draw(daTogeTrap_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/daTogeTrap_Draw__FP12daTogeTrap_c.s"
}
#pragma pop

/* 80D18D00-80D18D20 001280 0020+00 1/0 0/0 0/0 .text daTogeTrap_Execute__FP12daTogeTrap_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTogeTrap_Execute(daTogeTrap_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/daTogeTrap_Execute__FP12daTogeTrap_c.s"
}
#pragma pop

/* 80D18D20-80D18D40 0012A0 0020+00 1/0 0/0 0/0 .text            daTogeTrap_Delete__FP12daTogeTrap_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTogeTrap_Delete(daTogeTrap_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/daTogeTrap_Delete__FP12daTogeTrap_c.s"
}
#pragma pop

/* 80D18D40-80D18D60 0012C0 0020+00 1/0 0/0 0/0 .text            daTogeTrap_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTogeTrap_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/daTogeTrap_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D18D60-80D18DA8 0012E0 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80D18DA8-80D18E14 001328 006C+00 2/1 0/0 0/0 .text            __dt__16daTogeTrap_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTogeTrap_HIO_c::~daTogeTrap_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__dt__16daTogeTrap_HIO_cFv.s"
}
#pragma pop

/* 80D18E14-80D18E84 001394 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_togeTrap_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_togeTrap_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_togeTrap/d_a_obj_togeTrap/__sinit_d_a_obj_togeTrap_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80D18E14 = (void*)__sinit_d_a_obj_togeTrap_cpp;
#pragma pop

/* 80D18F08-80D18F0F 000070 0007+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80D18F08 = "P_Toge";
#pragma pop
