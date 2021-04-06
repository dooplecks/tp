//
// Generated By: dol2asm
// Translation Unit: d_a_door_bossL5
//

#include "rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);
};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct door_param2_c {
    /* 8003A1D0 */ void getSwbit(fopAc_ac_c*);
    /* 8003A224 */ void getExitNo(fopAc_ac_c*);
};

struct daBdoorL5_c {
    /* 80670C38 */ void getArcName();
    /* 80670C44 */ void getAlwaysArcName();
    /* 80670C54 */ void getBmd();
    /* 80670C64 */ void getDzb();
    /* 80670C74 */ void getAnmArcName();
    /* 80670C84 */ s32 getOpenAnm();
    /* 80670C8C */ s32 getCloseAnm();
    /* 80670C94 */ void getDoorModelData();
    /* 80670D10 */ void CreateHeap();
    /* 80670F08 */ void calcMtx();
    /* 80670F5C */ void CreateInit();
    /* 8067106C */ void create();
    /* 806712DC */ void getDemoAction();
    /* 80671324 */ void demoProc();
    /* 806715D0 */ void openInit();
    /* 80671670 */ void openProc();
    /* 80671718 */ bool openEnd();
    /* 80671720 */ void closeInit();
    /* 806717FC */ void closeProc();
    /* 80671820 */ void closeEnd();
    /* 80671878 */ void unlockInit();
    /* 80671954 */ void calcGoal(cXyz*, int);
    /* 80671A7C */ void smokeInit();
    /* 80671B14 */ void createKey();
    /* 80671C14 */ void checkArea();
    /* 80671D44 */ void checkFront();
    /* 80671DE4 */ void checkOpen();
    /* 80671E70 */ bool actionWait();
    /* 80671E78 */ void actionCloseWait();
    /* 80671F58 */ void actionOpen();
    /* 80672004 */ void actionEnd();
    /* 80672164 */ void execute();
    /* 8067228C */ void draw();
    /* 80672374 */ void Delete();
};

struct dVibration_c {
    /* 8006FA24 */ void StartShock(int, int, cXyz);
};

struct dSv_restart_c {
    /* 80034F80 */ void setRoom(cXyz const&, s16, s8);
};

struct dSv_memBit_c {
    /* 80034934 */ void isDungeonItem(int) const;
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C37C */ void getRes(char const*, char const*, dRes_info_c*, int);
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct csXyz {};

struct dPa_control_c {
    /* 8004D068 */ void setPoly(u16, cBgS_PolyInfo&, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                                cXyz const*, int, dPa_levelEcallBack*, s8, cXyz const*);
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 8004817C */ void cutEnd(int);
    /* 800483C4 */ void setGoal(cXyz*);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 8067126C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 806711FC */ ~dBgS_AcchCir();
};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80670EC0 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void getArcName__11daBdoorL5_cFv();
extern "C" void getAlwaysArcName__11daBdoorL5_cFv();
extern "C" void getBmd__11daBdoorL5_cFv();
extern "C" void getDzb__11daBdoorL5_cFv();
extern "C" void getAnmArcName__11daBdoorL5_cFv();
extern "C" s32 getOpenAnm__11daBdoorL5_cFv();
extern "C" s32 getCloseAnm__11daBdoorL5_cFv();
extern "C" void getDoorModelData__11daBdoorL5_cFv();
extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void CreateHeap__11daBdoorL5_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void calcMtx__11daBdoorL5_cFv();
extern "C" void CreateInit__11daBdoorL5_cFv();
extern "C" void create__11daBdoorL5_cFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void getDemoAction__11daBdoorL5_cFv();
extern "C" void demoProc__11daBdoorL5_cFv();
extern "C" void openInit__11daBdoorL5_cFv();
extern "C" void openProc__11daBdoorL5_cFv();
extern "C" bool openEnd__11daBdoorL5_cFv();
extern "C" void closeInit__11daBdoorL5_cFv();
extern "C" void closeProc__11daBdoorL5_cFv();
extern "C" void closeEnd__11daBdoorL5_cFv();
extern "C" void unlockInit__11daBdoorL5_cFv();
extern "C" void calcGoal__11daBdoorL5_cFP4cXyzi();
extern "C" void smokeInit__11daBdoorL5_cFv();
extern "C" void createKey__11daBdoorL5_cFv();
extern "C" void checkArea__11daBdoorL5_cFv();
extern "C" void checkFront__11daBdoorL5_cFv();
extern "C" void checkOpen__11daBdoorL5_cFv();
extern "C" bool actionWait__11daBdoorL5_cFv();
extern "C" void actionCloseWait__11daBdoorL5_cFv();
extern "C" void actionOpen__11daBdoorL5_cFv();
extern "C" void actionEnd__11daBdoorL5_cFv();
extern "C" void execute__11daBdoorL5_cFv();
extern "C" void draw__11daBdoorL5_cFv();
extern "C" void Delete__11daBdoorL5_cFv();
extern "C" static void daBdoorL5_Draw__FP11daBdoorL5_c();
extern "C" static void daBdoorL5_Execute__FP11daBdoorL5_c();
extern "C" static void daBdoorL5_Delete__FP11daBdoorL5_c();
extern "C" static void daBdoorL5_Create__FP10fopAc_ac_c();
extern "C" void func_80672494(u8*);
extern "C" static void func_806724B0();
extern "C" static void func_806724B8();
extern "C" extern char const* const d_a_door_bossL5__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FUi();
extern "C" void fopAcM_createChildFromOffset__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fpcM_IsCreating__FUi();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void setRoom__13dSv_restart_cFRC4cXyzsSc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getSwbit__13door_param2_cFP10fopAc_ac_c();
extern "C" void getExitNo__13door_param2_cFP10fopAc_ac_c();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void setGoal__16dEvent_manager_cFP4cXyz();
extern "C" void
setPoly__13dPa_control_cFUsR13cBgS_PolyInfoPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyziP18dPa_levelEcallBackScPC4cXyz();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_806727A0[4];

//
// Declarations:
//

/* 80670C38-80670C44 000078 000C+00 4/4 0/0 0/0 .text            getArcName__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::getArcName() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/getArcName__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80670C44-80670C54 000084 0010+00 3/3 0/0 0/0 .text            getAlwaysArcName__11daBdoorL5_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::getAlwaysArcName() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/getAlwaysArcName__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80670C54-80670C64 000094 0010+00 1/1 0/0 0/0 .text            getBmd__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::getBmd() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/getBmd__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80670C64-80670C74 0000A4 0010+00 1/1 0/0 0/0 .text            getDzb__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::getDzb() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/getDzb__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80670C74-80670C84 0000B4 0010+00 5/5 0/0 0/0 .text            getAnmArcName__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::getAnmArcName() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/getAnmArcName__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80670C84-80670C8C 0000C4 0008+00 2/2 0/0 0/0 .text            getOpenAnm__11daBdoorL5_cFv */
s32 daBdoorL5_c::getOpenAnm() {
    return 5;
}

/* 80670C8C-80670C94 0000CC 0008+00 1/1 0/0 0/0 .text            getCloseAnm__11daBdoorL5_cFv */
s32 daBdoorL5_c::getCloseAnm() {
    return 4;
}

/* 80670C94-80670CF0 0000D4 005C+00 1/1 0/0 0/0 .text            getDoorModelData__11daBdoorL5_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::getDoorModelData() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/getDoorModelData__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80670CF0-80670D10 000130 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 806724C8-806724E0 000000 0016+02 4/4 0/0 0/0 .rodata          l_door_open_demo */
SECTION_RODATA static u8 const l_door_open_demo[22 + 2 /* padding */] = {
    0x44,
    0x45,
    0x46,
    0x41,
    0x55,
    0x4C,
    0x54,
    0x5F,
    0x42,
    0x53,
    0x5F,
    0x53,
    0x48,
    0x55,
    0x54,
    0x54,
    0x45,
    0x52,
    0x5F,
    0x4C,
    0x35,
    0x00,
    /* padding */
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_806724C8 = (void*)(&l_door_open_demo);

/* 806724E0-806724FC 000018 001A+02 0/1 0/0 0/0 .rodata          l_door_open_demo_1st */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_door_open_demo_1st[26 + 2 /* padding */] = {
    0x44,
    0x45,
    0x46,
    0x41,
    0x55,
    0x4C,
    0x54,
    0x5F,
    0x42,
    0x53,
    0x5F,
    0x53,
    0x48,
    0x55,
    0x54,
    0x54,
    0x45,
    0x52,
    0x5F,
    0x4C,
    0x35,
    0x5F,
    0x31,
    0x53,
    0x54,
    0x00,
    /* padding */
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_806724E0 = (void*)(&l_door_open_demo_1st);
#pragma pop

/* 806724FC-8067250C 000034 000D+03 3/3 0/0 0/0 .rodata          l_staff_name */
SECTION_RODATA static u8 const l_staff_name[13 + 3 /* padding */] = {
    0x53,
    0x48,
    0x55,
    0x54,
    0x54,
    0x45,
    0x52,
    0x5F,
    0x44,
    0x4F,
    0x4F,
    0x52,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_806724FC = (void*)(&l_staff_name);

/* 8067250C-80672510 000044 0004+00 5/6 0/0 0/0 .rodata          @3757 */
SECTION_RODATA static u32 const lit_3757 = 0x3F800000;
SECTION_DEAD void* const cg_8067250C = (void*)(&lit_3757);

/* 806725F4-80672600 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80672600-80672614 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80672614-8067264C -00001 0038+00 1/1 0/0 0/0 .data            action_table$3861 */
SECTION_DATA static void* action_table[14] = {
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x3C),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x41),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x48),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x4D),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x55),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x5E),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x64),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x6A),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x74),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x78),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x82),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x8C),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0x96),
    (void*)(((char*)&d_a_door_bossL5__stringBase0) + 0xA1),
};

/* 8067264C-80672678 -00001 002C+00 1/1 0/0 0/0 .data            @3952 */
SECTION_DATA static void* lit_3952[11] = {
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x288),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x18C),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x1D8),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x288),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x288),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x200),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x288),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x288),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x294),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x270),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x228),
};

/* 80672678-806726B0 -00001 0038+00 1/1 0/0 0/0 .data            @3951 */
SECTION_DATA static void* lit_3951[14] = {
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x16C),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x6C),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0xBC),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0xC8),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0xE8),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x108),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x114),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x16C),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x16C),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x16C),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x120),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x12C),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x138),
    (void*)(((char*)demoProc__11daBdoorL5_cFv) + 0x154),
};

/* 806726B0-806726BC -00001 000C+00 0/1 0/0 0/0 .data            @4295 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4295[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__11daBdoorL5_cFv,
};
#pragma pop

/* 806726BC-806726C8 -00001 000C+00 0/1 0/0 0/0 .data            @4296 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4296[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionCloseWait__11daBdoorL5_cFv,
};
#pragma pop

/* 806726C8-806726D4 -00001 000C+00 0/1 0/0 0/0 .data            @4297 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4297[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOpen__11daBdoorL5_cFv,
};
#pragma pop

/* 806726D4-806726E0 -00001 000C+00 0/1 0/0 0/0 .data            @4298 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4298[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEnd__11daBdoorL5_cFv,
};
#pragma pop

/* 806726E0-80672710 0000EC 0030+00 0/1 0/0 0/0 .data            l_action$4294 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_action[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80672710-80672730 -00001 0020+00 1/0 0/0 0/0 .data            l_daBdoorL5_Method */
SECTION_DATA static void* l_daBdoorL5_Method[8] = {
    (void*)daBdoorL5_Create__FP10fopAc_ac_c,
    (void*)daBdoorL5_Delete__FP11daBdoorL5_c,
    (void*)daBdoorL5_Execute__FP11daBdoorL5_c,
    (void*)NULL,
    (void*)daBdoorL5_Draw__FP11daBdoorL5_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80672730-80672760 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_L5BOSS_DOOR */
SECTION_DATA extern void* g_profile_L5BOSS_DOOR[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x022B0000, (void*)&g_fpcLf_Method,
    (void*)0x000007D0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x012C0000, (void*)&l_daBdoorL5_Method,
    (void*)0x00044000, (void*)0x00060000,
};

/* 80672760-8067276C 00016C 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 8067276C-80672790 000178 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806724B8,
    (void*)NULL,
    (void*)NULL,
    (void*)func_806724B0,
};

/* 80672790-8067279C 00019C 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80670D10-80670EC0 000150 01B0+00 1/1 0/0 0/0 .text            CreateHeap__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/CreateHeap__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80670EC0-80670F08 000300 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80670F08-80670F5C 000348 0054+00 2/2 0/0 0/0 .text            calcMtx__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::calcMtx() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/calcMtx__11daBdoorL5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80672510-80672514 000048 0004+00 0/1 0/0 0/0 .rodata          @3787 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3787 = 0x437A0000;
SECTION_DEAD void* const cg_80672510 = (void*)(&lit_3787);
#pragma pop

/* 80670F5C-8067106C 00039C 0110+00 1/1 0/0 0/0 .text            CreateInit__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::CreateInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/CreateInit__11daBdoorL5_cFv.s"
}
#pragma pop

/* 8067106C-806711FC 0004AC 0190+00 1/1 0/0 0/0 .text            create__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::create() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/create__11daBdoorL5_cFv.s"
}
#pragma pop

/* 806711FC-8067126C 00063C 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 8067126C-806712DC 0006AC 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 806712DC-80671324 00071C 0048+00 1/1 0/0 0/0 .text            getDemoAction__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::getDemoAction() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/getDemoAction__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80671324-806715D0 000764 02AC+00 5/3 0/0 0/0 .text            demoProc__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/demoProc__11daBdoorL5_cFv.s"
}
#pragma pop

/* 806715D0-80671670 000A10 00A0+00 1/1 0/0 0/0 .text            openInit__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::openInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/openInit__11daBdoorL5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80672514-80672518 00004C 0004+00 0/1 0/0 0/0 .rodata          @3980 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3980 = 0x41900000;
SECTION_DEAD void* const cg_80672514 = (void*)(&lit_3980);
#pragma pop

/* 80672518-8067251C 000050 0004+00 2/3 0/0 0/0 .rodata          @3981 */
SECTION_RODATA static u32 const lit_3981 = 0xBF800000;
SECTION_DEAD void* const cg_80672518 = (void*)(&lit_3981);

/* 80671670-80671718 000AB0 00A8+00 1/1 0/0 0/0 .text            openProc__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::openProc() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/openProc__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80671718-80671720 000B58 0008+00 1/1 0/0 0/0 .text            openEnd__11daBdoorL5_cFv */
bool daBdoorL5_c::openEnd() {
    return true;
}

/* 80671720-806717FC 000B60 00DC+00 1/1 0/0 0/0 .text            closeInit__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::closeInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/closeInit__11daBdoorL5_cFv.s"
}
#pragma pop

/* 806717FC-80671820 000C3C 0024+00 1/1 0/0 0/0 .text            closeProc__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::closeProc() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/closeProc__11daBdoorL5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8067251C-80672520 000054 0004+00 3/5 0/0 0/0 .rodata          @4015 */
SECTION_RODATA static u8 const lit_4015[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_8067251C = (void*)(&lit_4015);

/* 80671820-80671878 000C60 0058+00 1/1 0/0 0/0 .text            closeEnd__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::closeEnd() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/closeEnd__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80671878-80671954 000CB8 00DC+00 1/1 0/0 0/0 .text            unlockInit__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::unlockInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/unlockInit__11daBdoorL5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80672520-80672524 000058 0004+00 0/1 0/0 0/0 .rodata          @4063 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4063 = 0x3F000000;
SECTION_DEAD void* const cg_80672520 = (void*)(&lit_4063);
#pragma pop

/* 80672524-80672528 00005C 0004+00 0/1 0/0 0/0 .rodata          @4064 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4064 = 0xC47A0000;
SECTION_DEAD void* const cg_80672524 = (void*)(&lit_4064);
#pragma pop

/* 80672528-8067252C 000060 0004+00 0/1 0/0 0/0 .rodata          @4065 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4065 = 0xC3700000;
SECTION_DEAD void* const cg_80672528 = (void*)(&lit_4065);
#pragma pop

/* 80671954-80671A7C 000D94 0128+00 1/1 0/0 0/0 .text            calcGoal__11daBdoorL5_cFP4cXyzi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::calcGoal(cXyz* param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/calcGoal__11daBdoorL5_cFP4cXyzi.s"
}
#pragma pop

/* 80671A7C-80671B14 000EBC 0098+00 1/1 0/0 0/0 .text            smokeInit__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::smokeInit() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/smokeInit__11daBdoorL5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8067252C-80672530 000064 0004+00 1/1 0/0 0/0 .rodata          @4110 */
SECTION_RODATA static u32 const lit_4110 = 0x42480000;
SECTION_DEAD void* const cg_8067252C = (void*)(&lit_4110);

/* 80671B14-80671C14 000F54 0100+00 1/1 0/0 0/0 .text            createKey__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::createKey() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/createKey__11daBdoorL5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80672530-80672534 000068 0004+00 1/1 0/0 0/0 .rodata          @4154 */
SECTION_RODATA static u32 const lit_4154 = 0x43480000;
SECTION_DEAD void* const cg_80672530 = (void*)(&lit_4154);

/* 80672534-80672538 00006C 0004+00 1/1 0/0 0/0 .rodata          @4155 */
SECTION_RODATA static u32 const lit_4155 = 0x42C80000;
SECTION_DEAD void* const cg_80672534 = (void*)(&lit_4155);

/* 80672538-80672540 000070 0008+00 1/1 0/0 0/0 .rodata          @4157 */
SECTION_RODATA static u8 const lit_4157[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_80672538 = (void*)(&lit_4157);

/* 80671C14-80671D44 001054 0130+00 1/1 0/0 0/0 .text            checkArea__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::checkArea() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/checkArea__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80671D44-80671DE4 001184 00A0+00 1/1 0/0 0/0 .text            checkFront__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::checkFront() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/checkFront__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80671DE4-80671E70 001224 008C+00 1/1 0/0 0/0 .text            checkOpen__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::checkOpen() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/checkOpen__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80671E70-80671E78 0012B0 0008+00 1/0 0/0 0/0 .text            actionWait__11daBdoorL5_cFv */
bool daBdoorL5_c::actionWait() {
    return true;
}

/* 80671E78-80671F58 0012B8 00E0+00 1/0 0/0 0/0 .text            actionCloseWait__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::actionCloseWait() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/actionCloseWait__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80671F58-80672004 001398 00AC+00 1/0 0/0 0/0 .text            actionOpen__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::actionOpen() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/actionOpen__11daBdoorL5_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80672540-80672544 000078 0004+00 0/1 0/0 0/0 .rodata          @4289 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4289 = 0x43340000;
SECTION_DEAD void* const cg_80672540 = (void*)(&lit_4289);
#pragma pop

/* 80672544-80672548 00007C 0004+00 0/1 0/0 0/0 .rodata          @4290 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4290 = 0xC3340000;
SECTION_DEAD void* const cg_80672544 = (void*)(&lit_4290);
#pragma pop

/* 80672004-80672164 001444 0160+00 1/0 0/0 0/0 .text            actionEnd__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::actionEnd() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/actionEnd__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80672164-8067228C 0015A4 0128+00 1/1 0/0 0/0 .text            execute__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::execute() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/execute__11daBdoorL5_cFv.s"
}
#pragma pop

/* 8067228C-80672374 0016CC 00E8+00 1/1 0/0 0/0 .text            draw__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::draw() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/draw__11daBdoorL5_cFv.s"
}
#pragma pop

/* 80672374-8067240C 0017B4 0098+00 1/1 0/0 0/0 .text            Delete__11daBdoorL5_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daBdoorL5_c::Delete() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/Delete__11daBdoorL5_cFv.s"
}
#pragma pop

/* 8067240C-8067242C 00184C 0020+00 1/0 0/0 0/0 .text            daBdoorL5_Draw__FP11daBdoorL5_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBdoorL5_Draw(daBdoorL5_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/daBdoorL5_Draw__FP11daBdoorL5_c.s"
}
#pragma pop

/* 8067242C-80672450 00186C 0024+00 1/0 0/0 0/0 .text            daBdoorL5_Execute__FP11daBdoorL5_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBdoorL5_Execute(daBdoorL5_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/daBdoorL5_Execute__FP11daBdoorL5_c.s"
}
#pragma pop

/* 80672450-80672474 001890 0024+00 1/0 0/0 0/0 .text            daBdoorL5_Delete__FP11daBdoorL5_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBdoorL5_Delete(daBdoorL5_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/daBdoorL5_Delete__FP11daBdoorL5_c.s"
}
#pragma pop

/* 80672474-80672494 0018B4 0020+00 1/0 0/0 0/0 .text            daBdoorL5_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daBdoorL5_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/daBdoorL5_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80672494-806724B0 0018D4 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80672494(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/func_80672494.s"
}
#pragma pop

/* 806724B0-806724B8 0018F0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_806724B0() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/func_806724B0.s"
}
#pragma pop

/* 806724B8-806724C0 0018F8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_806724B8() {
    nofralloc
#include "asm/rel/d/a/door/d_a_door_bossL5/d_a_door_bossL5/func_806724B8.s"
}
#pragma pop

/* 80672548-806725F2 000080 00AA+00 6/5 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80672548 = "Z_bdor00";
SECTION_DEAD static char const* const stringBase_80672551 = "static";
SECTION_DEAD static char const* const stringBase_80672558 = "Z_bdor00.bmd";
SECTION_DEAD static char const* const stringBase_80672565 = "door-shutterBoss.dzb";
SECTION_DEAD static char const* const stringBase_8067257A = "BDoorTAnm";
SECTION_DEAD static char const* const stringBase_80672584 = "WAIT";
SECTION_DEAD static char const* const stringBase_80672589 = "UNLOCK";
SECTION_DEAD static char const* const stringBase_80672590 = "OPEN";
SECTION_DEAD static char const* const stringBase_80672595 = "SETGOAL";
SECTION_DEAD static char const* const stringBase_8067259D = "SETGOAL2";
SECTION_DEAD static char const* const stringBase_806725A6 = "CLOSE";
SECTION_DEAD static char const* const stringBase_806725AC = "SMOKE";
SECTION_DEAD static char const* const stringBase_806725B2 = "SMOKE_END";
SECTION_DEAD static char const* const stringBase_806725BC = "END";
SECTION_DEAD static char const* const stringBase_806725C0 = "END_CHECK";
SECTION_DEAD static char const* const stringBase_806725CA = "CHG_SCENE";
SECTION_DEAD static char const* const stringBase_806725D4 = "KEYDELETE";
SECTION_DEAD static char const* const stringBase_806725DE = "PLY_NODISP";
SECTION_DEAD static char const* const stringBase_806725E9 = "PLY_DISP";
#pragma pop
