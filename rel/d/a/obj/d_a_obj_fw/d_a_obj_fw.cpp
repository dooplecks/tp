//
// Generated By: dol2asm
// Translation Unit: d_a_obj_fw
//

#include "rel/d/a/obj/d_a_obj_fw/d_a_obj_fw.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct obj_fw_class {};

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObj_Fw_HIO_c {
    /* 80BF204C */ daObj_Fw_HIO_c();
    /* 80BF2AB0 */ ~daObj_Fw_HIO_c();
};

struct dSv_memBit_c {
    /* 80034934 */ void isDungeonItem(int) const;
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

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS_ObjGndChk_Spl {
    /* 800777B0 */ dBgS_ObjGndChk_Spl();
    /* 80077848 */ ~dBgS_ObjGndChk_Spl();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct csXyz {};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS_PolyInfo {};

struct Vec {};

struct cBgS_GndChk {
    /* 80267D0C */ void SetPos(Vec const*);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDFF8 */ void deleteObject();
};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__14daObj_Fw_HIO_cFv();
extern "C" static void ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void daObj_Fw_Draw__FP12obj_fw_class();
extern "C" static void water_check__FP12obj_fw_class();
extern "C" static void fw_float__FP12obj_fw_class();
extern "C" static void action__FP12obj_fw_class();
extern "C" static void daObj_Fw_Execute__FP12obj_fw_class();
extern "C" static bool daObj_Fw_IsDelete__FP12obj_fw_class();
extern "C" static void daObj_Fw_Delete__FP12obj_fw_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObj_Fw_Create__FP10fopAc_ac_c();
extern "C" void __dt__14daObj_Fw_HIO_cFv();
extern "C" void __sinit_d_a_obj_fw_cpp();
extern "C" extern char const* const d_a_obj_fw__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BF2B48-80BF2B4C 000000 0004+00 5/5 0/0 0/0 .rodata          @3647 */
SECTION_RODATA static u32 const lit_3647 = 0x3F800000;
SECTION_DEAD void* const cg_80BF2B48 = (void*)(&lit_3647);

/* 80BF2BAC-80BF2BB4 000000 0008+00 1/1 0/0 0/0 .data            bmdd$3836 */
SECTION_DATA static u8 bmdd[8] = {
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

/* 80BF2BB4-80BF2BBC 000008 0008+00 1/1 0/0 0/0 .data            dzbd$3837 */
SECTION_DATA static u8 dzbd[8] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x09,
};

/* 80BF2BBC-80BF2BDC -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Fw_Method */
SECTION_DATA static void* l_daObj_Fw_Method[8] = {
    (void*)daObj_Fw_Create__FP10fopAc_ac_c,
    (void*)daObj_Fw_Delete__FP12obj_fw_class,
    (void*)daObj_Fw_Execute__FP12obj_fw_class,
    (void*)daObj_Fw_IsDelete__FP12obj_fw_class,
    (void*)daObj_Fw_Draw__FP12obj_fw_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BF2BDC-80BF2C0C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_FW */
SECTION_DATA extern void* g_profile_OBJ_FW[12] = {
    (void*)0xFFFFFFFD, (void*)0x0008FFFD,
    (void*)0x02F00000, (void*)&g_fpcLf_Method,
    (void*)0x00000628, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x002A0000, (void*)&l_daObj_Fw_Method,
    (void*)0x00044100, (void*)0x000E0000,
};

/* 80BF2C0C-80BF2C18 000060 000C+00 2/2 0/0 0/0 .data            __vt__14daObj_Fw_HIO_c */
SECTION_DATA extern void* __vt__14daObj_Fw_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_Fw_HIO_cFv,
};

/* 80BF204C-80BF2070 0000EC 0024+00 1/1 0/0 0/0 .text            __ct__14daObj_Fw_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Fw_HIO_c::daObj_Fw_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/__ct__14daObj_Fw_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B4C-80BF2B50 000004 0004+00 0/1 0/0 0/0 .rodata          @3667 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3667 = 0xC2480000;
SECTION_DEAD void* const cg_80BF2B4C = (void*)(&lit_3667);
#pragma pop

/* 80BF2B50-80BF2B54 000008 0004+00 0/3 0/0 0/0 .rodata          @3668 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3668[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80BF2B50 = (void*)(&lit_3668);
#pragma pop

/* 80BF2B54-80BF2B58 00000C 0004+00 0/2 0/0 0/0 .rodata          @3669 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3669 = 0x41200000;
SECTION_DEAD void* const cg_80BF2B54 = (void*)(&lit_3669);
#pragma pop

/* 80BF2C20-80BF2C24 000008 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80BF2C20[4];

/* 80BF2C24-80BF2C30 00000C 000C+00 1/1 0/0 0/0 .bss             @3642 */
static u8 lit_3642[12];

/* 80BF2C30-80BF2C3C 000018 000C+00 4/4 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[12];

/* 80BF2070-80BF219C 000110 012C+00 1/1 0/0 0/0 .text
 * ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void ride_call_back(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 80BF219C-80BF2200 00023C 0064+00 1/0 0/0 0/0 .text            daObj_Fw_Draw__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Fw_Draw(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/daObj_Fw_Draw__FP12obj_fw_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B58-80BF2B5C 000010 0004+00 1/1 0/0 0/0 .rodata          @3694 */
SECTION_RODATA static u32 const lit_3694 = 0x43FA0000;
SECTION_DEAD void* const cg_80BF2B58 = (void*)(&lit_3694);

/* 80BF2200-80BF22AC 0002A0 00AC+00 1/1 0/0 0/0 .text            water_check__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void water_check(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/water_check__FP12obj_fw_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B5C-80BF2B60 000014 0004+00 0/1 0/0 0/0 .rodata          @3740 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3740 = 0x3E800000;
SECTION_DEAD void* const cg_80BF2B5C = (void*)(&lit_3740);
#pragma pop

/* 80BF2B60-80BF2B64 000018 0004+00 0/1 0/0 0/0 .rodata          @3741 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3741 = 0x40600000;
SECTION_DEAD void* const cg_80BF2B60 = (void*)(&lit_3741);
#pragma pop

/* 80BF2B64-80BF2B68 00001C 0004+00 0/1 0/0 0/0 .rodata          @3742 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3742 = 0x3D4CCCCD;
SECTION_DEAD void* const cg_80BF2B64 = (void*)(&lit_3742);
#pragma pop

/* 80BF2B68-80BF2B6C 000020 0004+00 0/1 0/0 0/0 .rodata          @3743 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3743 = 0xC3960000;
SECTION_DEAD void* const cg_80BF2B68 = (void*)(&lit_3743);
#pragma pop

/* 80BF2B6C-80BF2B70 000024 0004+00 0/1 0/0 0/0 .rodata          @3744 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3744 = 0x3CF5C28F;
SECTION_DEAD void* const cg_80BF2B6C = (void*)(&lit_3744);
#pragma pop

/* 80BF2B70-80BF2B74 000028 0004+00 0/1 0/0 0/0 .rodata          @3745 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3745 = 0x3DCCCCCD;
SECTION_DEAD void* const cg_80BF2B70 = (void*)(&lit_3745);
#pragma pop

/* 80BF2B74-80BF2B78 00002C 0004+00 0/1 0/0 0/0 .rodata          @3746 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3746 = 0x43960000;
SECTION_DEAD void* const cg_80BF2B74 = (void*)(&lit_3746);
#pragma pop

/* 80BF2B78-80BF2B7C 000030 0004+00 0/1 0/0 0/0 .rodata          @3747 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3747 = 0x40000000;
SECTION_DEAD void* const cg_80BF2B78 = (void*)(&lit_3747);
#pragma pop

/* 80BF2B7C-80BF2B80 000034 0004+00 0/1 0/0 0/0 .rodata          @3748 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3748 = 0x41A00000;
SECTION_DEAD void* const cg_80BF2B7C = (void*)(&lit_3748);
#pragma pop

/* 80BF2B80-80BF2B84 000038 0004+00 0/1 0/0 0/0 .rodata          @3749 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3749 = 0x3E4CCCCD;
SECTION_DEAD void* const cg_80BF2B80 = (void*)(&lit_3749);
#pragma pop

/* 80BF2B84-80BF2B88 00003C 0004+00 0/1 0/0 0/0 .rodata          @3750 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3750 = 0xC1A00000;
SECTION_DEAD void* const cg_80BF2B84 = (void*)(&lit_3750);
#pragma pop

/* 80BF2B88-80BF2B8C 000040 0004+00 0/1 0/0 0/0 .rodata          @3751 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3751 = 0x40400000;
SECTION_DEAD void* const cg_80BF2B88 = (void*)(&lit_3751);
#pragma pop

/* 80BF22AC-80BF24C4 00034C 0218+00 1/1 0/0 0/0 .text            fw_float__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fw_float(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/fw_float__FP12obj_fw_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B8C-80BF2B90 000044 0004+00 0/1 0/0 0/0 .rodata          @3802 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3802 = 0x41700000;
SECTION_DEAD void* const cg_80BF2B8C = (void*)(&lit_3802);
#pragma pop

/* 80BF24C4-80BF2670 000564 01AC+00 1/1 0/0 0/0 .text            action__FP12obj_fw_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void action(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/action__FP12obj_fw_class.s"
}
#pragma pop

/* 80BF2670-80BF2718 000710 00A8+00 2/1 0/0 0/0 .text            daObj_Fw_Execute__FP12obj_fw_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Fw_Execute(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/daObj_Fw_Execute__FP12obj_fw_class.s"
}
#pragma pop

/* 80BF2718-80BF2720 0007B8 0008+00 1/0 0/0 0/0 .text            daObj_Fw_IsDelete__FP12obj_fw_class
 */
static bool daObj_Fw_IsDelete(obj_fw_class* param_0) {
    return true;
}

/* 80BF2720-80BF279C 0007C0 007C+00 1/0 0/0 0/0 .text            daObj_Fw_Delete__FP12obj_fw_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Fw_Delete(obj_fw_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/daObj_Fw_Delete__FP12obj_fw_class.s"
}
#pragma pop

/* 80BF279C-80BF28D0 00083C 0134+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF2B90-80BF2B94 000048 0004+00 0/1 0/0 0/0 .rodata          @3918 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3918 = 0xC47A0000;
SECTION_DEAD void* const cg_80BF2B90 = (void*)(&lit_3918);
#pragma pop

/* 80BF2B94-80BF2B98 00004C 0004+00 0/1 0/0 0/0 .rodata          @3919 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3919 = 0xC4160000;
SECTION_DEAD void* const cg_80BF2B94 = (void*)(&lit_3919);
#pragma pop

/* 80BF2B98-80BF2B9C 000050 0004+00 0/1 0/0 0/0 .rodata          @3920 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3920 = 0x447A0000;
SECTION_DEAD void* const cg_80BF2B98 = (void*)(&lit_3920);
#pragma pop

/* 80BF2B9C-80BF2BA0 000054 0004+00 0/1 0/0 0/0 .rodata          @3921 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3921 = 0x44160000;
SECTION_DEAD void* const cg_80BF2B9C = (void*)(&lit_3921);
#pragma pop

/* 80BF2BA0-80BF2BA4 000058 0004+00 0/1 0/0 0/0 .rodata          @3922 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3922 = 0x47800000;
SECTION_DEAD void* const cg_80BF2BA0 = (void*)(&lit_3922);
#pragma pop

/* 80BF28D0-80BF2AB0 000970 01E0+00 1/0 0/0 0/0 .text            daObj_Fw_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Fw_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/daObj_Fw_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BF2AB0-80BF2AF8 000B50 0048+00 2/1 0/0 0/0 .text            __dt__14daObj_Fw_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daObj_Fw_HIO_c::~daObj_Fw_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/__dt__14daObj_Fw_HIO_cFv.s"
}
#pragma pop

/* 80BF2AF8-80BF2B34 000B98 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_fw_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_fw_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fw/d_a_obj_fw/__sinit_d_a_obj_fw_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80BF2AF8 = (void*)__sinit_d_a_obj_fw_cpp;
#pragma pop

/* 80BF2BA4-80BF2BAB 00005C 0007+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80BF2BA4 = "RYUW00";
#pragma pop
