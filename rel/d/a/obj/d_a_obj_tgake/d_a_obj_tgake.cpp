//
// Generated By: dol2asm
// Translation Unit: d_a_obj_tgake
//

#include "rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
};

struct fopAc_ac_c {};

struct daObjGake_c {
    /* 80D0BC18 */ void initBaseMtx();
    /* 80D0BC54 */ void setBaseMtx();
    /* 80D0BCB8 */ void Create();
    /* 80D0BD30 */ void CreateHeap();
    /* 80D0BDA0 */ void create1st();
    /* 80D0BE24 */ void Execute(f32 (**)[3][4]);
    /* 80D0BF7C */ void Draw();
    /* 80D0C034 */ void Delete();
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
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

struct dBgW_Base {};

struct dBgW {};

struct csXyz {};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
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

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void initBaseMtx__11daObjGake_cFv();
extern "C" void setBaseMtx__11daObjGake_cFv();
extern "C" void Create__11daObjGake_cFv();
extern "C" void CreateHeap__11daObjGake_cFv();
extern "C" void create1st__11daObjGake_cFv();
extern "C" void Execute__11daObjGake_cFPPA3_A4_f();
extern "C" void Draw__11daObjGake_cFv();
extern "C" void Delete__11daObjGake_cFv();
extern "C" static void daObjGake_create1st__FP11daObjGake_c();
extern "C" static void daObjGake_MoveBGDelete__FP11daObjGake_c();
extern "C" static void daObjGake_MoveBGExecute__FP11daObjGake_c();
extern "C" static void daObjGake_MoveBGDraw__FP11daObjGake_c();
extern "C" extern char const* const d_a_obj_tgake__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void PSMTXCopy();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];

//
// Declarations:
//

/* 80D0BC18-80D0BC54 000078 003C+00 1/1 0/0 0/0 .text            initBaseMtx__11daObjGake_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGake_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/initBaseMtx__11daObjGake_cFv.s"
}
#pragma pop

/* 80D0BC54-80D0BCB8 0000B4 0064+00 1/1 0/0 0/0 .text            setBaseMtx__11daObjGake_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGake_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/setBaseMtx__11daObjGake_cFv.s"
}
#pragma pop

/* 80D0BCB8-80D0BD30 000118 0078+00 1/0 0/0 0/0 .text            Create__11daObjGake_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGake_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/Create__11daObjGake_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D0C144-80D0C148 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_tgake__stringBase0;

/* 80D0BD30-80D0BDA0 000190 0070+00 1/0 0/0 0/0 .text            CreateHeap__11daObjGake_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGake_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/CreateHeap__11daObjGake_cFv.s"
}
#pragma pop

/* 80D0BDA0-80D0BE24 000200 0084+00 1/1 0/0 0/0 .text            create1st__11daObjGake_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGake_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/create1st__11daObjGake_cFv.s"
}
#pragma pop

/* 80D0BE24-80D0BF7C 000284 0158+00 1/0 0/0 0/0 .text            Execute__11daObjGake_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGake_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/Execute__11daObjGake_cFPPA3_A4_f.s"
}
#pragma pop

/* 80D0BF7C-80D0C034 0003DC 00B8+00 1/0 0/0 0/0 .text            Draw__11daObjGake_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGake_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/Draw__11daObjGake_cFv.s"
}
#pragma pop

/* 80D0C034-80D0C068 000494 0034+00 1/0 0/0 0/0 .text            Delete__11daObjGake_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGake_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/Delete__11daObjGake_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D0C148-80D0C168 -00001 0020+00 1/0 0/0 0/0 .data            daObjGake_METHODS */
SECTION_DATA static void* daObjGake_METHODS[8] = {
    (void*)daObjGake_create1st__FP11daObjGake_c,
    (void*)daObjGake_MoveBGDelete__FP11daObjGake_c,
    (void*)daObjGake_MoveBGExecute__FP11daObjGake_c,
    (void*)NULL,
    (void*)daObjGake_MoveBGDraw__FP11daObjGake_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D0C168-80D0C198 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Gake */
SECTION_DATA extern void* g_profile_Obj_Gake[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00BA0000, (void*)&g_fpcLf_Method,
    (void*)0x000005B4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02380000, (void*)&daObjGake_METHODS,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D0C198-80D0C1C0 000054 0028+00 1/1 0/0 0/0 .data            __vt__11daObjGake_c */
SECTION_DATA extern void* __vt__11daObjGake_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daObjGake_cFv,
    (void*)Create__11daObjGake_cFv,
    (void*)Execute__11daObjGake_cFPPA3_A4_f,
    (void*)Draw__11daObjGake_cFv,
    (void*)Delete__11daObjGake_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D0C068-80D0C0C8 0004C8 0060+00 1/0 0/0 0/0 .text daObjGake_create1st__FP11daObjGake_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjGake_create1st(daObjGake_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/daObjGake_create1st__FP11daObjGake_c.s"
}
#pragma pop

/* 80D0C0C8-80D0C0E8 000528 0020+00 1/0 0/0 0/0 .text daObjGake_MoveBGDelete__FP11daObjGake_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjGake_MoveBGDelete(daObjGake_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/daObjGake_MoveBGDelete__FP11daObjGake_c.s"
}
#pragma pop

/* 80D0C0E8-80D0C108 000548 0020+00 1/0 0/0 0/0 .text daObjGake_MoveBGExecute__FP11daObjGake_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjGake_MoveBGExecute(daObjGake_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/daObjGake_MoveBGExecute__FP11daObjGake_c.s"
}
#pragma pop

/* 80D0C108-80D0C134 000568 002C+00 1/0 0/0 0/0 .text daObjGake_MoveBGDraw__FP11daObjGake_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjGake_MoveBGDraw(daObjGake_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_tgake/d_a_obj_tgake/daObjGake_MoveBGDraw__FP11daObjGake_c.s"
}
#pragma pop

/* 80D0C13C-80D0C144 000000 0008+00 1/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80D0C13C = "A_TGake";
#pragma pop
