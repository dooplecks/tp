//
// Generated By: dol2asm
// Translation Unit: d_a_obj_bubblePilar
//

#include "rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct mDoHIO_entry_c {
    /* 80BC3418 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {};

struct daBubbPilar_c {
    /* 80BC3460 */ void setBaseMtx();
    /* 80BC3518 */ void CreateHeap();
    /* 80BC35D0 */ void create();
    /* 80BC3934 */ void Execute(f32 (**)[3][4]);
    /* 80BC3AB8 */ void initModeWait();
    /* 80BC3AC4 */ void modeWait();
    /* 80BC3C74 */ void initModeEffOn();
    /* 80BC3C98 */ void modeEffOn();
    /* 80BC3DB0 */ void Draw();
    /* 80BC3E8C */ void Delete();
};

struct daBubbPilar_HIO_c {
    /* 80BC33EC */ daBubbPilar_HIO_c();
    /* 80BC3F90 */ ~daBubbPilar_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct J3DModelData {};

struct dKy_tevstr_c {};

struct cXyz {};

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
    struct level_c {
        /* 8004B918 */ void getEmitter(u32);
    };

    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80BC38D8 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 80084548 */ void GetTgHitGObj();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgW_Base {};

struct dBgW {};

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
    /* 80BC3848 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80BC3890 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80BC3F48 */ ~cCcD_GStts();
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__17daBubbPilar_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__13daBubbPilar_cFv();
extern "C" void CreateHeap__13daBubbPilar_cFv();
extern "C" void create__13daBubbPilar_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void Execute__13daBubbPilar_cFPPA3_A4_f();
extern "C" void initModeWait__13daBubbPilar_cFv();
extern "C" void modeWait__13daBubbPilar_cFv();
extern "C" void initModeEffOn__13daBubbPilar_cFv();
extern "C" void modeEffOn__13daBubbPilar_cFv();
extern "C" void Draw__13daBubbPilar_cFv();
extern "C" void Delete__13daBubbPilar_cFv();
extern "C" static void daBubbPilar_Draw__FP13daBubbPilar_c();
extern "C" static void daBubbPilar_Execute__FP13daBubbPilar_c();
extern "C" static void daBubbPilar_Delete__FP13daBubbPilar_c();
extern "C" static void daBubbPilar_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__17daBubbPilar_HIO_cFv();
extern "C" void __sinit_d_a_obj_bubblePilar_cpp();
extern "C" extern char const* const d_a_obj_bubblePilar__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
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
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_camera_water_in_status_check__Fv();
extern "C" void dKy_bg_MAxx_proc__FPv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_24();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
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
/* 80BC40BC-80BC40C8 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC40C8-80BC40DC 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80BC40DC-80BC4120 000020 0044+00 2/2 0/0 0/0 .data            mCcDCyl__13daBubbPilar_c */
SECTION_DATA static u8 mCcDCyl__13daBubbPilar_c[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BC4120-80BC412C -00001 000C+00 0/1 0/0 0/0 .data            @3843 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3843[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__13daBubbPilar_cFv,
};
#pragma pop

/* 80BC412C-80BC4138 -00001 000C+00 0/1 0/0 0/0 .data            @3844 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3844[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeEffOn__13daBubbPilar_cFv,
};
#pragma pop

/* 80BC4138-80BC4150 00007C 0018+00 0/1 0/0 0/0 .data            mode_proc$3842 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80BC4150-80BC4170 -00001 0020+00 1/0 0/0 0/0 .data            l_daBubbPilar_Method */
SECTION_DATA static void* l_daBubbPilar_Method[8] = {
    (void*)daBubbPilar_Create__FP10fopAc_ac_c,
    (void*)daBubbPilar_Delete__FP13daBubbPilar_c,
    (void*)daBubbPilar_Execute__FP13daBubbPilar_c,
    (void*)NULL,
    (void*)daBubbPilar_Draw__FP13daBubbPilar_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BC4170-80BC41A0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_awaPlar */
SECTION_DATA extern void* g_profile_Obj_awaPlar[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01920000, (void*)&g_fpcLf_Method,
    (void*)0x00000750, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02930000, (void*)&l_daBubbPilar_Method,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80BC41A0-80BC41AC 0000E4 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BC41AC-80BC41B8 0000F0 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BC41B8-80BC41C4 0000FC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BC41C4-80BC41D0 000108 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BC41D0-80BC41F8 000114 0028+00 1/1 0/0 0/0 .data            __vt__13daBubbPilar_c */
SECTION_DATA extern void* __vt__13daBubbPilar_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__13daBubbPilar_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__13daBubbPilar_cFPPA3_A4_f,
    (void*)Draw__13daBubbPilar_cFv,
    (void*)Delete__13daBubbPilar_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BC41F8-80BC4204 00013C 000C+00 2/2 0/0 0/0 .data            __vt__17daBubbPilar_HIO_c */
SECTION_DATA extern void* __vt__17daBubbPilar_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daBubbPilar_HIO_cFv,
};

/* 80BC4204-80BC4210 000148 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BC33EC-80BC3418 0000EC 002C+00 1/1 0/0 0/0 .text            __ct__17daBubbPilar_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBubbPilar_HIO_c::daBubbPilar_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/__ct__17daBubbPilar_HIO_cFv.s"
}
#pragma pop

/* 80BC3418-80BC3460 000118 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC4070-80BC40A0 000000 0030+00 3/3 0/0 0/0 .rodata          mCcDObjInfo__13daBubbPilar_c */
SECTION_RODATA static u8 const mCcDObjInfo__13daBubbPilar_c[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80BC4070 = (void*)(&mCcDObjInfo__13daBubbPilar_c);

/* 80BC40A0-80BC40A4 000030 0004+00 1/3 0/0 0/0 .rodata          @3654 */
SECTION_RODATA static u32 const lit_3654 = 0x3F800000;
SECTION_DEAD void* const cg_80BC40A0 = (void*)(&lit_3654);

/* 80BC3460-80BC3518 000160 00B8+00 2/2 0/0 0/0 .text            setBaseMtx__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/setBaseMtx__13daBubbPilar_cFv.s"
}
#pragma pop

/* 80BC3518-80BC35D0 000218 00B8+00 1/0 0/0 0/0 .text            CreateHeap__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/CreateHeap__13daBubbPilar_cFv.s"
}
#pragma pop

/* 80BC35D0-80BC3848 0002D0 0278+00 1/1 0/0 0/0 .text            create__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/create__13daBubbPilar_cFv.s"
}
#pragma pop

/* 80BC3848-80BC3890 000548 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BC3890-80BC38D8 000590 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80BC38D8-80BC3934 0005D8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC4218-80BC4224 000008 000C+00 1/1 0/0 0/0 .bss             @3623 */
static u8 lit_3623[12];

/* 80BC4224-80BC422C 000014 0008+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 80BC422C-80BC4230 00001C 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80BC422C[4];

/* 80BC3934-80BC3AB8 000634 0184+00 1/0 0/0 0/0 .text            Execute__13daBubbPilar_cFPPA3_A4_f
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/Execute__13daBubbPilar_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BC3AB8-80BC3AC4 0007B8 000C+00 2/2 0/0 0/0 .text            initModeWait__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::initModeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/initModeWait__13daBubbPilar_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC40A4-80BC40A8 000034 0004+00 0/2 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3939 = 0xBF800000;
SECTION_DEAD void* const cg_80BC40A4 = (void*)(&lit_3939);
#pragma pop

/* 80BC40A8-80BC40AC 000038 0004+00 0/1 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3940 = 0x42C80000;
SECTION_DEAD void* const cg_80BC40A8 = (void*)(&lit_3940);
#pragma pop

/* 80BC3AC4-80BC3C74 0007C4 01B0+00 1/0 0/0 0/0 .text            modeWait__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::modeWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/modeWait__13daBubbPilar_cFv.s"
}
#pragma pop

/* 80BC3C74-80BC3C98 000974 0024+00 2/2 0/0 0/0 .text            initModeEffOn__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::initModeEffOn() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/initModeEffOn__13daBubbPilar_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BC40AC-80BC40B4 00003C 0006+02 0/1 0/0 0/0 .rodata          particle_id$3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const particle_id[6 + 2 /* padding */] = {
    0x88,
    0xBE,
    0x88,
    0xBF,
    0x88,
    0xC0,
    /* padding */
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80BC40AC = (void*)(&particle_id);
#pragma pop

/* 80BC3C98-80BC3DB0 000998 0118+00 1/0 0/0 0/0 .text            modeEffOn__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::modeEffOn() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/modeEffOn__13daBubbPilar_cFv.s"
}
#pragma pop

/* 80BC3DB0-80BC3E8C 000AB0 00DC+00 1/0 0/0 0/0 .text            Draw__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/Draw__13daBubbPilar_cFv.s"
}
#pragma pop

/* 80BC3E8C-80BC3EBC 000B8C 0030+00 1/0 0/0 0/0 .text            Delete__13daBubbPilar_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBubbPilar_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/Delete__13daBubbPilar_cFv.s"
}
#pragma pop

/* 80BC3EBC-80BC3EE8 000BBC 002C+00 1/0 0/0 0/0 .text            daBubbPilar_Draw__FP13daBubbPilar_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBubbPilar_Draw(daBubbPilar_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/daBubbPilar_Draw__FP13daBubbPilar_c.s"
}
#pragma pop

/* 80BC3EE8-80BC3F08 000BE8 0020+00 1/0 0/0 0/0 .text daBubbPilar_Execute__FP13daBubbPilar_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBubbPilar_Execute(daBubbPilar_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/daBubbPilar_Execute__FP13daBubbPilar_c.s"
}
#pragma pop

/* 80BC3F08-80BC3F28 000C08 0020+00 1/0 0/0 0/0 .text daBubbPilar_Delete__FP13daBubbPilar_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBubbPilar_Delete(daBubbPilar_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/daBubbPilar_Delete__FP13daBubbPilar_c.s"
}
#pragma pop

/* 80BC3F28-80BC3F48 000C28 0020+00 1/0 0/0 0/0 .text            daBubbPilar_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBubbPilar_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/daBubbPilar_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BC3F48-80BC3F90 000C48 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80BC3F90-80BC3FEC 000C90 005C+00 2/1 0/0 0/0 .text            __dt__17daBubbPilar_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daBubbPilar_HIO_c::~daBubbPilar_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/__dt__17daBubbPilar_HIO_cFv.s"
}
#pragma pop

/* 80BC3FEC-80BC405C 000CEC 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_bubblePilar_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_bubblePilar_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_bubblePilar/d_a_obj_bubblePilar/__sinit_d_a_obj_bubblePilar_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80BC3FEC = (void*)__sinit_d_a_obj_bubblePilar_cpp;
#pragma pop

/* 80BC40B4-80BC40BC 000044 0008+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80BC40B4 = "M_Crack";
#pragma pop
