//
// Generated By: dol2asm
// Translation Unit: d_a_obj_ornament_cloth
//

#include "rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
    /* 80266F48 */ void normalizeZP();
};

struct mDoMtx_stack_c {
    /* 8000CCC8 */ void push();
    /* 8000CD14 */ void pop();
    /* 8000CD64 */ void transS(cXyz const&);
    /* 8000CD9C */ void transM(f32, f32, f32);
};

struct J3DMaterialTable {};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daObjOnCloth_c {
    /* 80595038 */ void create_init();
    /* 80595158 */ void initBaseMtx();
    /* 80595178 */ void setBaseMtx();
    /* 805951DC */ void setNormalClothPos();
    /* 805954B0 */ void calcJointAngle();
    /* 80595638 */ void checkPlayerMove();
};

struct J3DModelData {};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
};

struct J3DModel {};

struct J3DJoint {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 805959E8 */ ~J3DFrameCtrl();
};

struct ClothJoint_c {
    /* 80595B9C */ ~ClothJoint_c();
    /* 80595CA8 */ ClothJoint_c();
};

//
// Forward References:
//

extern "C" void create_init__14daObjOnCloth_cFv();
extern "C" void initBaseMtx__14daObjOnCloth_cFv();
extern "C" void setBaseMtx__14daObjOnCloth_cFv();
extern "C" void setNormalClothPos__14daObjOnCloth_cFv();
extern "C" void calcJointAngle__14daObjOnCloth_cFv();
extern "C" void checkPlayerMove__14daObjOnCloth_cFv();
extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObjOnCloth_Draw__FP14daObjOnCloth_c();
extern "C" static void daObjOnCloth_Execute__FP14daObjOnCloth_c();
extern "C" static bool daObjOnCloth_IsDelete__FP14daObjOnCloth_c();
extern "C" static void daObjOnCloth_Delete__FP14daObjOnCloth_c();
extern "C" void __dt__12ClothJoint_cFv();
extern "C" static void daObjOnCloth_Create__FP10fopAc_ac_c();
extern "C" void __ct__12ClothJoint_cFv();
extern "C" extern char const* const d_a_obj_ornament_cloth__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void push__14mDoMtx_stack_cFv();
extern "C" void pop__14mDoMtx_stack_cFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void dKyw_get_AllWind_vecpow__FP4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXInverse();
extern "C" void PSMTXMultVec();
extern "C" void PSVECAdd();
extern "C" void PSVECScale();
extern "C" void PSVECSquareMag();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mCurrentMtx__6J3DSys[48];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;

//
// Declarations:
//

/* ############################################################################################## */
/* 80595CB4-80595CE4 000000 0030+00 4/4 0/0 0/0 .rodata          M_attr__14daObjOnCloth_c */
SECTION_RODATA static u8 const M_attr__14daObjOnCloth_c[48] = {
    0x41, 0x00, 0x00, 0x00, 0xC2, 0x20, 0x00, 0x00, 0x3E, 0x99, 0x99, 0x9A, 0x3E, 0xF0, 0xA3, 0xD7,
    0x3E, 0x99, 0x99, 0x9A, 0x43, 0x16, 0x00, 0x00, 0x41, 0x60, 0x00, 0x00, 0x3D, 0xA3, 0xD7, 0x0A,
    0x3F, 0x4C, 0xCC, 0xCD, 0x00, 0x40, 0x04, 0x31, 0x04, 0x31, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80595CB4 = (void*)(&M_attr__14daObjOnCloth_c);

/* 80595CE4-80595CE8 000030 0004+00 0/1 0/0 0/0 .rodata          @3671 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3671 = 0xC2480000;
SECTION_DEAD void* const cg_80595CE4 = (void*)(&lit_3671);
#pragma pop

/* 80595CE8-80595CEC 000034 0004+00 0/1 0/0 0/0 .rodata          @3672 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3672 = 0xC32A0000;
SECTION_DEAD void* const cg_80595CE8 = (void*)(&lit_3672);
#pragma pop

/* 80595CEC-80595CF0 000038 0004+00 0/1 0/0 0/0 .rodata          @3673 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3673 = 0x42480000;
SECTION_DEAD void* const cg_80595CEC = (void*)(&lit_3673);
#pragma pop

/* 80595CF0-80595CF4 00003C 0004+00 0/1 0/0 0/0 .rodata          @3674 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3674 = 0x41A00000;
SECTION_DEAD void* const cg_80595CF0 = (void*)(&lit_3674);
#pragma pop

/* 80595CF4-80595CF8 000040 0004+00 0/2 0/0 0/0 .rodata          @3675 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3675 = 0xBF800000;
SECTION_DEAD void* const cg_80595CF4 = (void*)(&lit_3675);
#pragma pop

/* 80595CF8-80595CFC 000044 0004+00 1/4 0/0 0/0 .rodata          @3676 */
SECTION_RODATA static u8 const lit_3676[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80595CF8 = (void*)(&lit_3676);

/* 80595CFC-80595D04 000048 0008+00 0/1 0/0 0/0 .rodata          @3678 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3678[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80595CFC = (void*)(&lit_3678);
#pragma pop

/* 80595038-80595158 000078 0120+00 1/1 0/0 0/0 .text            create_init__14daObjOnCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOnCloth_c::create_init() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/create_init__14daObjOnCloth_cFv.s"
}
#pragma pop

/* 80595158-80595178 000198 0020+00 1/1 0/0 0/0 .text            initBaseMtx__14daObjOnCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOnCloth_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/initBaseMtx__14daObjOnCloth_cFv.s"
}
#pragma pop

/* 80595178-805951DC 0001B8 0064+00 1/1 0/0 0/0 .text            setBaseMtx__14daObjOnCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOnCloth_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/setBaseMtx__14daObjOnCloth_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80595D04-80595D0C 000050 0008+00 0/1 0/0 0/0 .rodata          @3785 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3785[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80595D04 = (void*)(&lit_3785);
#pragma pop

/* 80595D0C-80595D14 000058 0008+00 0/1 0/0 0/0 .rodata          @3786 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3786[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80595D0C = (void*)(&lit_3786);
#pragma pop

/* 80595D14-80595D1C 000060 0008+00 0/1 0/0 0/0 .rodata          @3787 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3787[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80595D14 = (void*)(&lit_3787);
#pragma pop

/* 80595D1C-80595D20 000068 0004+00 0/1 0/0 0/0 .rodata          @3788 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3788 = 0x3F19999A;
SECTION_DEAD void* const cg_80595D1C = (void*)(&lit_3788);
#pragma pop

/* 80595D20-80595D24 00006C 0004+00 0/1 0/0 0/0 .rodata          @3789 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3789 = 0x3DCCCCCD;
SECTION_DEAD void* const cg_80595D20 = (void*)(&lit_3789);
#pragma pop

/* 805951DC-805954B0 00021C 02D4+00 1/1 0/0 0/0 .text setNormalClothPos__14daObjOnCloth_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOnCloth_c::setNormalClothPos() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/setNormalClothPos__14daObjOnCloth_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80595D24-80595D2C 000070 0004+04 0/1 0/0 0/0 .rodata          @3832 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3832[1 + 1 /* padding */] = {
    0x40800000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_80595D24 = (void*)(&lit_3832);
#pragma pop

/* 80595D2C-80595D34 000078 0008+00 1/2 0/0 0/0 .rodata          @3834 */
SECTION_RODATA static u8 const lit_3834[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80595D2C = (void*)(&lit_3834);

/* 805954B0-80595638 0004F0 0188+00 1/1 0/0 0/0 .text            calcJointAngle__14daObjOnCloth_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOnCloth_c::calcJointAngle() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/calcJointAngle__14daObjOnCloth_cFv.s"
}
#pragma pop

/* 80595638-80595784 000678 014C+00 1/1 0/0 0/0 .text            checkPlayerMove__14daObjOnCloth_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjOnCloth_c::checkPlayerMove() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/checkPlayerMove__14daObjOnCloth_cFv.s"
}
#pragma pop

/* 80595784-80595850 0007C4 00CC+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nodeCallBack(J3DJoint* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/nodeCallBack__FP8J3DJointi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80595D34-80595D38 000080 0004+00 1/1 0/0 0/0 .rodata          @3973 */
SECTION_RODATA static u32 const lit_3973 = 0x3F800000;
SECTION_DEAD void* const cg_80595D34 = (void*)(&lit_3973);

/* 80595D60-80595D64 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_ornament_cloth__stringBase0;

/* 80595D64-80595D84 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjOnCloth_Method */
SECTION_DATA static void* l_daObjOnCloth_Method[8] = {
    (void*)daObjOnCloth_Create__FP10fopAc_ac_c,
    (void*)daObjOnCloth_Delete__FP14daObjOnCloth_c,
    (void*)daObjOnCloth_Execute__FP14daObjOnCloth_c,
    (void*)daObjOnCloth_IsDelete__FP14daObjOnCloth_c,
    (void*)daObjOnCloth_Draw__FP14daObjOnCloth_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80595D84-80595DB4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_OnCloth */
SECTION_DATA extern void* g_profile_Obj_OnCloth[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01510000, (void*)&g_fpcLf_Method,
    (void*)0x000006C8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00210000, (void*)&l_daObjOnCloth_Method,
    (void*)0x00040180, (void*)0x000E0000,
};

/* 80595DB4-80595DC0 000054 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80595850-805959E8 000890 0198+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createSolidHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/createSolidHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 805959E8-80595A30 000A28 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80595A30-80595AEC 000A70 00BC+00 1/0 0/0 0/0 .text daObjOnCloth_Draw__FP14daObjOnCloth_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjOnCloth_Draw(daObjOnCloth_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/daObjOnCloth_Draw__FP14daObjOnCloth_c.s"
}
#pragma pop

/* 80595AEC-80595B2C 000B2C 0040+00 1/0 0/0 0/0 .text daObjOnCloth_Execute__FP14daObjOnCloth_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjOnCloth_Execute(daObjOnCloth_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/daObjOnCloth_Execute__FP14daObjOnCloth_c.s"
}
#pragma pop

/* 80595B2C-80595B34 000B6C 0008+00 1/0 0/0 0/0 .text daObjOnCloth_IsDelete__FP14daObjOnCloth_c */
static bool daObjOnCloth_IsDelete(daObjOnCloth_c* param_0) {
    return true;
}

/* 80595B34-80595B9C 000B74 0068+00 1/0 0/0 0/0 .text daObjOnCloth_Delete__FP14daObjOnCloth_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjOnCloth_Delete(daObjOnCloth_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/daObjOnCloth_Delete__FP14daObjOnCloth_c.s"
}
#pragma pop

/* 80595B9C-80595BD8 000BDC 003C+00 2/2 0/0 0/0 .text            __dt__12ClothJoint_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm ClothJoint_c::~ClothJoint_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/__dt__12ClothJoint_cFv.s"
}
#pragma pop

/* 80595BD8-80595CA8 000C18 00D0+00 1/0 0/0 0/0 .text            daObjOnCloth_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjOnCloth_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ornament_cloth/d_a_obj_ornament_cloth/daObjOnCloth_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80595CA8-80595CAC 000CE8 0004+00 1/1 0/0 0/0 .text            __ct__12ClothJoint_cFv */
ClothJoint_c::ClothJoint_c() {
    /* empty function */
}

/* 80595D38-80595D5E 000084 0026+00 2/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80595D38 = "J_Necktie";
SECTION_DEAD static char const* const stringBase_80595D42 = "J_Necktie.bmd";
SECTION_DEAD static char const* const stringBase_80595D50 = "J_Necktie.btk";
#pragma pop
