//
// Generated By: dol2asm
// Translation Unit: d_a_obj_hakai_brl
//

#include "rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjHBarrel_c {
    /* 80C16758 */ daObjHBarrel_c();
    /* 80C16918 */ ~daObjHBarrel_c();
    /* 80C16A98 */ void createHeap();
    /* 80C16B08 */ void create();
    /* 80C16BF8 */ void Delete();
    /* 80C16C44 */ void draw();
    /* 80C16CA8 */ void execute();
    /* 80C16D50 */ void init();
    /* 80C16DEC */ void setModelMtx();
    /* 80C16E50 */ void hitAction();
    /* 80C17090 */ void callEmt();

    static u8 const s_CcDCyl[68];
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct JPABaseEmitter {};

struct dPa_modelEcallBack {
    /* 8004AC00 */ void setModel(JPABaseEmitter*, J3DModelData*, dKy_tevstr_c const&, u8, void*, u8,
                                 u8);

    static u8 mEcallback[4];
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct csXyz {};

struct dPa_control_c {
    /* 8004C218 */ void setHitMark(u16, fopAc_ac_c*, cXyz const*, csXyz const*, cXyz const*, u32);
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
    /* 80C168BC */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 8008457C */ void GetTgHitObjSe();
    /* 800845B0 */ void getHitSeID(u8, int);
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80C1682C */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80C16874 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80C172AC */ ~cCcD_GStts();
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDF48 */ ~Z2SoundObjBase();
    /* 802BDFF8 */ void deleteObject();
    /* 802BE4A4 */ void startCollisionSE(u32, u32, Z2SoundObjBase*);
};

struct Vec {};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct J3DModel {};

//
// Forward References:
//

extern "C" static void daObjHBarrel_c_createHeap__FP10fopAc_ac_c();
extern "C" void __ct__14daObjHBarrel_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__14daObjHBarrel_cFv();
extern "C" void createHeap__14daObjHBarrel_cFv();
extern "C" void create__14daObjHBarrel_cFv();
extern "C" void Delete__14daObjHBarrel_cFv();
extern "C" void draw__14daObjHBarrel_cFv();
extern "C" void execute__14daObjHBarrel_cFv();
extern "C" void init__14daObjHBarrel_cFv();
extern "C" void setModelMtx__14daObjHBarrel_cFv();
extern "C" void hitAction__14daObjHBarrel_cFv();
extern "C" void callEmt__14daObjHBarrel_cFv();
extern "C" static void daObjHBarrel_create__FP14daObjHBarrel_c();
extern "C" static void daObjHBarrel_Delete__FP14daObjHBarrel_c();
extern "C" static void daObjHBarrel_execute__FP14daObjHBarrel_c();
extern "C" static void daObjHBarrel_draw__FP14daObjHBarrel_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" u8 const s_CcDCyl__14daObjHBarrel_c[68];
extern "C" extern char const* const d_a_obj_hakai_brl__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdate__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_createItemFromTable__FPC4cXyziiiPC5csXyziPC4cXyzPfPfb();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void
setModel__18dPa_modelEcallBackFP14JPABaseEmitterP12J3DModelDataRC12dKy_tevstr_cUcPvUcUc();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dt__14Z2SoundObjBaseFv();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_27();
extern "C" void _restgpr_27();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__16Z2SoundObjSimple[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" u8 mEcallback__18dPa_modelEcallBack[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* 80C16738-80C16758 000078 0020+00 1/1 0/0 0/0 .text daObjHBarrel_c_createHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHBarrel_c_createHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_c_createHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C1737C-80C17380 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_hakai_brl__stringBase0;

/* 80C17380-80C173A0 -00001 0020+00 1/0 0/0 0/0 .data            daObjHBarrel_METHODS */
SECTION_DATA static void* daObjHBarrel_METHODS[8] = {
    (void*)daObjHBarrel_create__FP14daObjHBarrel_c,
    (void*)daObjHBarrel_Delete__FP14daObjHBarrel_c,
    (void*)daObjHBarrel_execute__FP14daObjHBarrel_c,
    (void*)NULL,
    (void*)daObjHBarrel_draw__FP14daObjHBarrel_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C173A0-80C173D0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_HBarrel */
SECTION_DATA extern void* g_profile_Obj_HBarrel[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01A30000, (void*)&g_fpcLf_Method,
    (void*)0x00000710, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02E90000, (void*)&daObjHBarrel_METHODS,
    (void*)0x00040180, (void*)0x030E0000,
};

/* 80C173D0-80C173DC 000054 000C+00 2/2 0/0 0/0 .data            __vt__14daObjHBarrel_c */
SECTION_DATA extern void* __vt__14daObjHBarrel_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObjHBarrel_cFv,
};

/* 80C173DC-80C173E8 000060 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C173E8-80C173F4 00006C 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C173F4-80C17400 000078 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C17400-80C1740C 000084 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C16758-80C1682C 000098 00D4+00 2/2 0/0 0/0 .text            __ct__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjHBarrel_c::daObjHBarrel_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__ct__14daObjHBarrel_cFv.s"
}
#pragma pop

/* 80C1682C-80C16874 00016C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C16874-80C168BC 0001B4 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C168BC-80C16918 0001FC 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80C16918-80C16A98 000258 0180+00 1/0 0/0 0/0 .text            __dt__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObjHBarrel_c::~daObjHBarrel_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__14daObjHBarrel_cFv.s"
}
#pragma pop

/* 80C16A98-80C16B08 0003D8 0070+00 1/1 0/0 0/0 .text            createHeap__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/createHeap__14daObjHBarrel_cFv.s"
}
#pragma pop

/* 80C16B08-80C16BF8 000448 00F0+00 1/1 0/0 0/0 .text            create__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/create__14daObjHBarrel_cFv.s"
}
#pragma pop

/* 80C16BF8-80C16C44 000538 004C+00 1/1 0/0 0/0 .text            Delete__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/Delete__14daObjHBarrel_cFv.s"
}
#pragma pop

/* 80C16C44-80C16CA8 000584 0064+00 1/1 0/0 0/0 .text            draw__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/draw__14daObjHBarrel_cFv.s"
}
#pragma pop

/* 80C16CA8-80C16D50 0005E8 00A8+00 1/1 0/0 0/0 .text            execute__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/execute__14daObjHBarrel_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C172FC-80C17340 000000 0044+00 2/2 0/0 0/0 .rodata          s_CcDCyl__14daObjHBarrel_c */
SECTION_RODATA u8 const daObjHBarrel_c::s_CcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0D, 0xD8, 0xFA, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(80C172FC, &daObjHBarrel_c::s_CcDCyl);

/* 80C17340-80C17344 000044 0004+00 0/1 0/0 0/0 .rodata          @3826 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3826 = 170.0f;
COMPILER_STRIP_GATE(80C17340, &lit_3826);
#pragma pop

/* 80C17344-80C17348 000048 0004+00 0/1 0/0 0/0 .rodata          @3827 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3827 = 90.0f;
COMPILER_STRIP_GATE(80C17344, &lit_3827);
#pragma pop

/* 80C16D50-80C16DEC 000690 009C+00 1/1 0/0 0/0 .text            init__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/init__14daObjHBarrel_cFv.s"
}
#pragma pop

/* 80C16DEC-80C16E50 00072C 0064+00 2/2 0/0 0/0 .text            setModelMtx__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::setModelMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/setModelMtx__14daObjHBarrel_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C17348-80C1734C 00004C 0004+00 1/2 0/0 0/0 .rodata          @3916 */
SECTION_RODATA static f32 const lit_3916 = 1.0f;
COMPILER_STRIP_GATE(80C17348, &lit_3916);

/* 80C1734C-80C17350 000050 0004+00 1/1 0/0 0/0 .rodata          @3917 */
SECTION_RODATA static f32 const lit_3917 = -1.0f;
COMPILER_STRIP_GATE(80C1734C, &lit_3917);

/* 80C16E50-80C17090 000790 0240+00 1/1 0/0 0/0 .text            hitAction__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::hitAction() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/hitAction__14daObjHBarrel_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C17350-80C17358 000054 0006+02 0/1 0/0 0/0 .rodata          PARTICLE_NAME$3924 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const PARTICLE_NAME[6 + 2 /* padding */] = {
    0x82,
    0xAB,
    0x82,
    0xAC,
    0x82,
    0xAD,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(80C17350, &PARTICLE_NAME);
#pragma pop

/* 80C17358-80C1735C 00005C 0004+00 0/1 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953 = 1.125f;
COMPILER_STRIP_GATE(80C17358, &lit_3953);
#pragma pop

/* 80C17090-80C171F8 0009D0 0168+00 1/1 0/0 0/0 .text            callEmt__14daObjHBarrel_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjHBarrel_c::callEmt() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/callEmt__14daObjHBarrel_cFv.s"
}
#pragma pop

/* 80C171F8-80C1724C 000B38 0054+00 1/0 0/0 0/0 .text daObjHBarrel_create__FP14daObjHBarrel_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHBarrel_create(daObjHBarrel_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_create__FP14daObjHBarrel_c.s"
}
#pragma pop

/* 80C1724C-80C1726C 000B8C 0020+00 1/0 0/0 0/0 .text daObjHBarrel_Delete__FP14daObjHBarrel_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHBarrel_Delete(daObjHBarrel_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_Delete__FP14daObjHBarrel_c.s"
}
#pragma pop

/* 80C1726C-80C1728C 000BAC 0020+00 1/0 0/0 0/0 .text daObjHBarrel_execute__FP14daObjHBarrel_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHBarrel_execute(daObjHBarrel_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_execute__FP14daObjHBarrel_c.s"
}
#pragma pop

/* 80C1728C-80C172AC 000BCC 0020+00 1/0 0/0 0/0 .text daObjHBarrel_draw__FP14daObjHBarrel_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjHBarrel_draw(daObjHBarrel_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/daObjHBarrel_draw__FP14daObjHBarrel_c.s"
}
#pragma pop

/* 80C172AC-80C172F4 000BEC 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_hakai_brl/d_a_obj_hakai_brl/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80C1735C-80C1737C 000060 0020+00 2/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80C1735C = "HBarrel";
SECTION_DEAD static char const* const stringBase_80C17364 = "Always";
SECTION_DEAD static char const* const stringBase_80C1736B = "BreakWoodBox.bmd";
#pragma pop
