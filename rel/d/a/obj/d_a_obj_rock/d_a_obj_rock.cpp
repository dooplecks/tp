//
// Generated By: dol2asm
// Translation Unit: d_a_obj_rock
//

#include "rel/d/a/obj/d_a_obj_rock/d_a_obj_rock.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct rock_ss {
    /* 80CBE5A4 */ ~rock_ss();
    /* 80CBE678 */ rock_ss();
};

struct request_of_phase_process_class {};

struct obj_rock_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct J3DModel {};

struct J3DModelData {};

struct dComIfG_play_c {
    /* 8002CAF0 */ void addSimpleModel(J3DModelData*, int, u8);
    /* 8002CB30 */ void removeSimpleModel(J3DModelData*, int);
    /* 8002CB68 */ void entrySimpleModel(J3DModel*, int);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dBgS_ObjGndChk_Spl {
    /* 800777B0 */ dBgS_ObjGndChk_Spl();
    /* 80077848 */ ~dBgS_ObjGndChk_Spl();
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 8026F708 */ void SetR(f32);
    /* 80CBE70C */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80CBE754 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cBgS_GndChk {
    /* 80267D0C */ void SetPos(Vec const*);
};

struct cBgS {
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

//
// Forward References:
//

extern "C" static void daObj_Rock_Draw__FP14obj_rock_class();
extern "C" static void daObj_Rock_Execute__FP14obj_rock_class();
extern "C" static bool daObj_Rock_IsDelete__FP14obj_rock_class();
extern "C" static void daObj_Rock_Delete__FP14obj_rock_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void set_pos_check__FP14obj_rock_classi();
extern "C" static void daObj_Rock_Create__FP10fopAc_ac_c();
extern "C" void __dt__7rock_ssFv();
extern "C" void __ct__7rock_ssFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" extern char const* const d_a_obj_rock__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_initRnd2__Fiii();
extern "C" void cM_rndF2__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* 80CBDC98-80CBDD20 000078 0088+00 1/0 0/0 0/0 .text            daObj_Rock_Draw__FP14obj_rock_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Rock_Draw(obj_rock_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/daObj_Rock_Draw__FP14obj_rock_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CBE7A4-80CBE7A8 000000 0004+00 3/3 0/0 0/0 .rodata          @3814 */
SECTION_RODATA static u32 const lit_3814 = 0x42C80000;
SECTION_DEAD void* const cg_80CBE7A4 = (void*)(&lit_3814);

/* 80CBDD20-80CBDE48 000100 0128+00 2/1 0/0 0/0 .text daObj_Rock_Execute__FP14obj_rock_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Rock_Execute(obj_rock_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/daObj_Rock_Execute__FP14obj_rock_class.s"
}
#pragma pop

/* 80CBDE48-80CBDE50 000228 0008+00 1/0 0/0 0/0 .text daObj_Rock_IsDelete__FP14obj_rock_class */
static bool daObj_Rock_IsDelete(obj_rock_class* param_0) {
    return true;
}

/* 80CBDE50-80CBDED8 000230 0088+00 1/0 0/0 0/0 .text daObj_Rock_Delete__FP14obj_rock_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Rock_Delete(obj_rock_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/daObj_Rock_Delete__FP14obj_rock_class.s"
}
#pragma pop

/* 80CBDED8-80CBDF84 0002B8 00AC+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CBE7A8-80CBE7AC 000004 0004+00 0/2 0/0 0/0 .rodata          @3894 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3894[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80CBE7A8 = (void*)(&lit_3894);
#pragma pop

/* 80CBE7AC-80CBE7B4 000008 0008+00 0/1 0/0 0/0 .rodata          @3895 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3895[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80CBE7AC = (void*)(&lit_3895);
#pragma pop

/* 80CBE7B4-80CBE7BC 000010 0008+00 0/1 0/0 0/0 .rodata          @3896 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3896[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80CBE7B4 = (void*)(&lit_3896);
#pragma pop

/* 80CBE7BC-80CBE7C4 000018 0008+00 0/1 0/0 0/0 .rodata          @3897 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3897[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80CBE7BC = (void*)(&lit_3897);
#pragma pop

/* 80CBE7C4-80CBE7C8 000020 0004+00 0/1 0/0 0/0 .rodata          @3898 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3898 = 0x43480000;
SECTION_DEAD void* const cg_80CBE7C4 = (void*)(&lit_3898);
#pragma pop

/* 80CBDF84-80CBE138 000364 01B4+00 1/1 0/0 0/0 .text            set_pos_check__FP14obj_rock_classi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void set_pos_check(obj_rock_class* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/set_pos_check__FP14obj_rock_classi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CBE7C8-80CBE7CC 000024 0004+00 0/1 0/0 0/0 .rodata          @4012 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4012 = 0x47800000;
SECTION_DEAD void* const cg_80CBE7C8 = (void*)(&lit_4012);
#pragma pop

/* 80CBE7CC-80CBE7D0 000028 0004+00 0/1 0/0 0/0 .rodata          @4013 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4013 = 0x3F000000;
SECTION_DEAD void* const cg_80CBE7CC = (void*)(&lit_4013);
#pragma pop

/* 80CBE7D0-80CBE7D4 00002C 0004+00 0/1 0/0 0/0 .rodata          @4014 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4014 = 0x3ECCCCCD;
SECTION_DEAD void* const cg_80CBE7D0 = (void*)(&lit_4014);
#pragma pop

/* 80CBE7D4-80CBE7D8 000030 0004+00 0/1 0/0 0/0 .rodata          @4015 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4015 = 0x428C0000;
SECTION_DEAD void* const cg_80CBE7D4 = (void*)(&lit_4015);
#pragma pop

/* 80CBE7D8-80CBE7DC 000034 0004+00 0/1 0/0 0/0 .rodata          @4016 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4016 = 0x3F800000;
SECTION_DEAD void* const cg_80CBE7D8 = (void*)(&lit_4016);
#pragma pop

/* 80CBE7DC-80CBE7E4 000038 0008+00 0/1 0/0 0/0 .rodata          @4018 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4018[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80CBE7DC = (void*)(&lit_4018);
#pragma pop

/* 80CBE7F0-80CBE830 000000 0040+00 1/1 0/0 0/0 .data            cc_sph_src$3926 */
SECTION_DATA static u8 cc_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};

/* 80CBE138-80CBE5A4 000518 046C+00 1/0 0/0 0/0 .text            daObj_Rock_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Rock_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/daObj_Rock_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CBE830-80CBE850 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Rock_Method */
SECTION_DATA static void* l_daObj_Rock_Method[8] = {
    (void*)daObj_Rock_Create__FP10fopAc_ac_c,
    (void*)daObj_Rock_Delete__FP14obj_rock_class,
    (void*)daObj_Rock_Execute__FP14obj_rock_class,
    (void*)daObj_Rock_IsDelete__FP14obj_rock_class,
    (void*)daObj_Rock_Draw__FP14obj_rock_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CBE850-80CBE880 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_ROCK */
SECTION_DATA extern void* g_profile_OBJ_ROCK[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01180000, (void*)&g_fpcLf_Method,
    (void*)0x00001BBC, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02C60000, (void*)&l_daObj_Rock_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80CBE880-80CBE88C 000090 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CBE88C-80CBE898 00009C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80CBE5A4-80CBE678 000984 00D4+00 1/1 0/0 0/0 .text            __dt__7rock_ssFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm rock_ss::~rock_ss() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/__dt__7rock_ssFv.s"
}
#pragma pop

/* 80CBE678-80CBE70C 000A58 0094+00 1/1 0/0 0/0 .text            __ct__7rock_ssFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm rock_ss::rock_ss() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/__ct__7rock_ssFv.s"
}
#pragma pop

/* 80CBE70C-80CBE754 000AEC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80CBE754-80CBE79C 000B34 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_rock/d_a_obj_rock/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CBE7E4-80CBE7ED 000040 0009+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80CBE7E4 = "Obj_rock";
#pragma pop
