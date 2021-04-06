//
// Generated By: dol2asm
// Translation Unit: d_a_obj_stopper2
//

#include "rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjStopper2_c {
    /* 80CEF368 */ void getStopModelData();
    /* 80CEF38C */ void initBaseMtx();
    /* 80CEF3C8 */ void setBaseMtx();
    /* 80CEF434 */ void getMaxOffsetY();
    /* 80CEF44C */ void Create();
    /* 80CEF57C */ void CreateHeap();
    /* 80CEF5C8 */ void create();
    /* 80CEF66C */ void execute();
    /* 80CEF6A4 */ void event_proc_call();
    /* 80CEF760 */ void actionWait();
    /* 80CEF98C */ void actionOrderEvent();
    /* 80CEFA60 */ void actionEvent();
    /* 80CEFAD4 */ void actionDead();
    /* 80CEFAD8 */ void demoProc();
    /* 80CEFD40 */ void draw();
    /* 80CEFDB8 */ void _delete();
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct J3DModelData {};

struct dKy_tevstr_c {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
    /* 800434D8 */ void searchMapEventData(u8);
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047698 */ void getEventIdx(fopAc_ac_c*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 8004817C */ void cutEnd(int);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" static void getStopName__Fv();
extern "C" void getStopModelData__15daObjStopper2_cFv();
extern "C" void initBaseMtx__15daObjStopper2_cFv();
extern "C" void setBaseMtx__15daObjStopper2_cFv();
extern "C" void getMaxOffsetY__15daObjStopper2_cFv();
extern "C" void Create__15daObjStopper2_cFv();
extern "C" void CreateHeap__15daObjStopper2_cFv();
extern "C" void create__15daObjStopper2_cFv();
extern "C" void execute__15daObjStopper2_cFv();
extern "C" void event_proc_call__15daObjStopper2_cFv();
extern "C" void actionWait__15daObjStopper2_cFv();
extern "C" void actionOrderEvent__15daObjStopper2_cFv();
extern "C" void actionEvent__15daObjStopper2_cFv();
extern "C" void actionDead__15daObjStopper2_cFv();
extern "C" void demoProc__15daObjStopper2_cFv();
extern "C" void draw__15daObjStopper2_cFv();
extern "C" void _delete__15daObjStopper2_cFv();
extern "C" static void daObjStopper2_Draw__FP15daObjStopper2_c();
extern "C" static void daObjStopper2_Execute__FP15daObjStopper2_c();
extern "C" static void daObjStopper2_Delete__FP15daObjStopper2_c();
extern "C" static void daObjStopper2_Create__FP15daObjStopper2_c();
extern "C" void func_80CEFE6C(u8*);
extern "C" extern char const* const d_a_obj_stopper2__stringBase0;
extern "C" extern void* g_profile_Obj_Stopper2[12];

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_orderMapToolEvent__FP10fopAc_ac_cUcsUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfG_getStageRes__FPCc();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void searchMapEventData__14dEvt_control_cFUc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80CEFFF8[4];

//
// Declarations:
//

/* 80CEF338-80CEF358 000078 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CEF358-80CEF368 000098 0010+00 1/1 0/0 0/0 .text            getStopName__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void getStopName() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/getStopName__Fv.s"
}
#pragma pop

/* 80CEF368-80CEF38C 0000A8 0024+00 1/1 0/0 0/0 .text getStopModelData__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::getStopModelData() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/getStopModelData__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEF38C-80CEF3C8 0000CC 003C+00 1/1 0/0 0/0 .text            initBaseMtx__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/initBaseMtx__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEF3C8-80CEF434 000108 006C+00 2/2 0/0 0/0 .text            setBaseMtx__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/setBaseMtx__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEF434-80CEF44C 000174 0018+00 2/2 0/0 0/0 .text            getMaxOffsetY__15daObjStopper2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::getMaxOffsetY() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/getMaxOffsetY__15daObjStopper2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CEFE90-80CEFE94 000000 0004+00 3/3 0/0 0/0 .rodata          @3722 */
SECTION_RODATA static u8 const lit_3722[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_80CEFE90 = (void*)(&lit_3722);

/* 80CEFE94-80CEFE98 000004 0004+00 1/1 0/0 0/0 .rodata          @3723 */
SECTION_RODATA static u32 const lit_3723 = 0x43160000;
SECTION_DEAD void* const cg_80CEFE94 = (void*)(&lit_3723);

/* 80CEFF04-80CEFF10 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CEFF10-80CEFF24 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80CEFF24-80CEFF28 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_stopper2__stringBase0;

/* 80CEFF28-80CEFF38 -00001 0010+00 1/1 0/0 0/0 .data            l_evName */
SECTION_DATA static void* l_evName[4] = {
    (void*)(((char*)&d_a_obj_stopper2__stringBase0) + 0x7),
    (void*)(((char*)&d_a_obj_stopper2__stringBase0) + 0x11),
    (void*)(((char*)&d_a_obj_stopper2__stringBase0) + 0x1C),
    (void*)(((char*)&d_a_obj_stopper2__stringBase0) + 0x27),
};

/* 80CEF44C-80CEF57C 00018C 0130+00 1/1 0/0 0/0 .text            Create__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/Create__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEF57C-80CEF5C8 0002BC 004C+00 1/1 0/0 0/0 .text            CreateHeap__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/CreateHeap__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEF5C8-80CEF66C 000308 00A4+00 1/1 0/0 0/0 .text            create__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/func_80CEF5C8.s"
}
#pragma pop

/* 80CEF66C-80CEF6A4 0003AC 0038+00 1/1 0/0 0/0 .text            execute__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/execute__15daObjStopper2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CEFF38-80CEFF3C -00001 0004+00 1/1 0/0 0/0 .data            l_staffName */
SECTION_DATA static void* l_staffName = (void*)(((char*)&d_a_obj_stopper2__stringBase0) + 0x33);

/* 80CEFF3C-80CEFF48 -00001 000C+00 0/1 0/0 0/0 .data            @3769 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3769[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__15daObjStopper2_cFv,
};
#pragma pop

/* 80CEFF48-80CEFF54 -00001 000C+00 0/1 0/0 0/0 .data            @3770 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3770[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__15daObjStopper2_cFv,
};
#pragma pop

/* 80CEFF54-80CEFF60 -00001 000C+00 0/1 0/0 0/0 .data            @3771 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3771[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__15daObjStopper2_cFv,
};
#pragma pop

/* 80CEFF60-80CEFF6C -00001 000C+00 0/1 0/0 0/0 .data            @3772 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3772[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__15daObjStopper2_cFv,
};
#pragma pop

/* 80CEFF6C-80CEFF9C 000068 0030+00 0/1 0/0 0/0 .data            l_func$3768 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CEF6A4-80CEF760 0003E4 00BC+00 1/1 0/0 0/0 .text event_proc_call__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/event_proc_call__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEF760-80CEF98C 0004A0 022C+00 1/0 0/0 0/0 .text            actionWait__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/actionWait__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEF98C-80CEFA60 0006CC 00D4+00 1/0 0/0 0/0 .text actionOrderEvent__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::actionOrderEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/actionOrderEvent__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEFA60-80CEFAD4 0007A0 0074+00 1/0 0/0 0/0 .text            actionEvent__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/actionEvent__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEFAD4-80CEFAD8 000814 0004+00 1/0 0/0 0/0 .text            actionDead__15daObjStopper2_cFv */
void daObjStopper2_c::actionDead() {
    /* empty function */
}

/* ############################################################################################## */
/* 80CEFE98-80CEFE9C 000008 0004+00 0/1 0/0 0/0 .rodata          @3921 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3921 = 0x3F800000;
SECTION_DEAD void* const cg_80CEFE98 = (void*)(&lit_3921);
#pragma pop

/* 80CEFE9C-80CEFEA0 00000C 0004+00 0/1 0/0 0/0 .rodata          @3922 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3922 = 0xBF800000;
SECTION_DEAD void* const cg_80CEFE9C = (void*)(&lit_3922);
#pragma pop

/* 80CEFEA0-80CEFEA4 000010 0004+00 0/1 0/0 0/0 .rodata          @3923 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3923 = 0x41F00000;
SECTION_DEAD void* const cg_80CEFEA0 = (void*)(&lit_3923);
#pragma pop

/* 80CEFEA4-80CEFEA8 000014 0004+00 0/1 0/0 0/0 .rodata          @3924 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3924 = 0x40800000;
SECTION_DEAD void* const cg_80CEFEA4 = (void*)(&lit_3924);
#pragma pop

/* 80CEFEA8-80CEFEAC 000018 0004+00 0/1 0/0 0/0 .rodata          @3925 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3925 = 0x42700000;
SECTION_DEAD void* const cg_80CEFEA8 = (void*)(&lit_3925);
#pragma pop

/* 80CEFEAC-80CEFEB0 00001C 0004+00 0/1 0/0 0/0 .rodata          @3926 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3926 = 0x40C00000;
SECTION_DEAD void* const cg_80CEFEAC = (void*)(&lit_3926);
#pragma pop

/* 80CEFF9C-80CEFFA8 -00001 000C+00 1/1 0/0 0/0 .data            action_table$3859 */
SECTION_DATA static void* action_table[3] = {
    (void*)(((char*)&d_a_obj_stopper2__stringBase0) + 0x47),
    (void*)(((char*)&d_a_obj_stopper2__stringBase0) + 0x7),
    (void*)(((char*)&d_a_obj_stopper2__stringBase0) + 0x11),
};

/* 80CEFAD8-80CEFD40 000818 0268+00 2/2 0/0 0/0 .text            demoProc__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/demoProc__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEFD40-80CEFDB8 000A80 0078+00 1/1 0/0 0/0 .text            draw__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/draw__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEFDB8-80CEFDEC 000AF8 0034+00 1/1 0/0 0/0 .text            _delete__15daObjStopper2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjStopper2_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/_delete__15daObjStopper2_cFv.s"
}
#pragma pop

/* 80CEFDEC-80CEFE0C 000B2C 0020+00 1/0 0/0 0/0 .text daObjStopper2_Draw__FP15daObjStopper2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjStopper2_Draw(daObjStopper2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/daObjStopper2_Draw__FP15daObjStopper2_c.s"
}
#pragma pop

/* 80CEFE0C-80CEFE2C 000B4C 0020+00 1/0 0/0 0/0 .text daObjStopper2_Execute__FP15daObjStopper2_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjStopper2_Execute(daObjStopper2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/daObjStopper2_Execute__FP15daObjStopper2_c.s"
}
#pragma pop

/* 80CEFE2C-80CEFE4C 000B6C 0020+00 1/0 0/0 0/0 .text daObjStopper2_Delete__FP15daObjStopper2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjStopper2_Delete(daObjStopper2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/daObjStopper2_Delete__FP15daObjStopper2_c.s"
}
#pragma pop

/* 80CEFE4C-80CEFE6C 000B8C 0020+00 1/0 0/0 0/0 .text daObjStopper2_Create__FP15daObjStopper2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjStopper2_Create(daObjStopper2_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/daObjStopper2_Create__FP15daObjStopper2_c.s"
}
#pragma pop

/* 80CEFE6C-80CEFE88 000BAC 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80CEFE6C(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_stopper2/d_a_obj_stopper2/func_80CEFE6C.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CEFFA8-80CEFFC8 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjStopper2_Method */
SECTION_DATA static void* l_daObjStopper2_Method[8] = {
    (void*)daObjStopper2_Create__FP15daObjStopper2_c,
    (void*)daObjStopper2_Delete__FP15daObjStopper2_c,
    (void*)daObjStopper2_Execute__FP15daObjStopper2_c,
    (void*)NULL,
    (void*)daObjStopper2_Draw__FP15daObjStopper2_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CEFFC8-80CEFFF8 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Stopper2 */
SECTION_DATA extern void* g_profile_Obj_Stopper2[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00E70000, (void*)&g_fpcLf_Method,
    (void*)0x0000058C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x02340000, (void*)&l_daObjStopper2_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80CEFEB0-80CEFF02 000020 0052+00 6/2 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80CEFEB0 = "Stop00";
SECTION_DEAD static char const* const stringBase_80CEFEB7 = "STOP_OPEN";
SECTION_DEAD static char const* const stringBase_80CEFEC1 = "STOP_CLOSE";
SECTION_DEAD static char const* const stringBase_80CEFECC = "STOP_OPEN2";
SECTION_DEAD static char const* const stringBase_80CEFED7 = "STOP_CLOSE2";
SECTION_DEAD static char const* const stringBase_80CEFEE3 = "dstop";
SECTION_DEAD static char const* const stringBase_80CEFEE9 = "door-stop.bmd";
SECTION_DEAD static char const* const stringBase_80CEFEF7 = "WAIT";
SECTION_DEAD static char const* const stringBase_80CEFEFC = "Timer";
#pragma pop
