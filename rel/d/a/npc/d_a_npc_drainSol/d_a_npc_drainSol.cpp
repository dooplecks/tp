//
// Generated By: dol2asm
// Translation Unit: d_a_npc_drainSol
//

#include "rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoExt_McaMorfCallBack1_c {};

struct J3DModelData {};

struct J3DAnmTransform {};

struct Vec {};

struct Z2Creature {
    /* 802C03C8 */ Z2Creature();
    /* 802C0420 */ ~Z2Creature();
    /* 802C0530 */ void init(Vec*, Vec*, u8, u8);
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfSO {
    /* 800107D0 */ mDoExt_McaMorfSO(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                    mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int,
                                    int, Z2Creature*, u32, u32);
    /* 80011310 */ void stopZelAnime();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daPy_py_c {
    /* 8015F424 */ void checkNowWolfEyeUp();
};

struct J3DAnmTransformKey {};

struct _GXColorS10 {};

struct daNpcF_c {
    struct daNpcF_anmPlayData {};

    /* 80152014 */ void execute();
    /* 801522AC */ void draw(int, int, f32, _GXColorS10*, int);
    /* 8015276C */ void setMtx();
    /* 801527FC */ void setMtx2();
    /* 801528C8 */ void initialize();
    /* 80152B2C */ void getTrnsfrmKeyAnmP(char*, int);
    /* 80152C1C */ void setMcaMorfAnm(J3DAnmTransformKey*, f32, f32, int, int, int);
    /* 80152D84 */ void setEnvTevColor();
    /* 80152DE0 */ void setRoomNo();
    /* 80153264 */ void playMotionAnm(daNpcF_c::daNpcF_anmPlayData***);
    /* 80153718 */ void ctrlMsgAnm(int&, int&, fopAc_ac_c*, int);
    /* 8015387C */ void orderEvent(int, char*, u16, u16, u8, u16);
    /* 80153D1C */ void initTalk(int, fopAc_ac_c**);
    /* 80153D84 */ void talkProc(int*, int, fopAc_ac_c**);
    /* 80154278 */ void getDistTableIdx(int, int);
    /* 809AF204 */ ~daNpcF_c();
    /* 809AF4D4 */ daNpcF_c();
    /* 809AF88C */ bool ctrlBtk();
    /* 809AF894 */ void setCollisions();
    /* 809AF898 */ bool setExpressionAnm(int, bool);
    /* 809AF8A0 */ bool setExpressionBtp(int);
    /* 809AF8A8 */ void setExpression(int, f32);
};

struct daNpcF_ActorMngr_c {
    /* 801506B0 */ void initialize();
    /* 809AF450 */ ~daNpcF_ActorMngr_c();
    /* 809AF6CC */ daNpcF_ActorMngr_c();
};

struct daNpcDrSol_c {
    /* 809ADE6C */ daNpcDrSol_c();
    /* 809ADFE4 */ ~daNpcDrSol_c();
    /* 809AE10C */ void Create();
    /* 809AE354 */ void CreateHeap();
    /* 809AE51C */ void Delete();
    /* 809AE550 */ void Execute();
    /* 809AE5CC */ void Draw();
    /* 809AE60C */ void drawOtherMdls();
    /* 809AE69C */ void createHeapCallBack(fopAc_ac_c*);
    /* 809AE6BC */ void reset();
    /* 809AE844 */ void setAction(bool (daNpcDrSol_c::*)(void*));
    /* 809AE8EC */ void chkFindPlayer();
    /* 809AE994 */ void wait(void*);
    /* 809AEB18 */ void setMotion(int, f32, int);
    /* 809AEB94 */ void talk(void*);
    /* 809AEDA8 */ void setParam();
    /* 809AEE24 */ void main();
    /* 809AEFDC */ void setAttnPos();
    /* 809AF12C */ void setMotionAnm(int, f32);
    /* 809AF1FC */ bool drawDbgInfo();
    /* 809AF934 */ void adjustShapeAngle();
};

struct daNpcDrSol_Param_c {
    /* 809AF938 */ ~daNpcDrSol_Param_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F48 */ ~dMsgFlow_c();
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 800487F0 */ void ChkPresentEnd();
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 809AF778 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 809AF7D4 */ ~dBgS_ObjAcch();
};

struct cXyz {
    /* 809ADFA8 */ ~cXyz();
    /* 809AF6C8 */ cXyz();
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

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 809AF708 */ ~dBgS_AcchCir();
};

struct csXyz {
    /* 809AF498 */ ~csXyz();
    /* 809AF6C4 */ csXyz();
};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 809ADF18 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 809ADF60 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 809AF8AC */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS_LinChk {};

struct cBgS_GndChk {
    /* 80267C1C */ cBgS_GndChk();
    /* 80267C94 */ ~cBgS_GndChk();
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 809AF844 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" void __ct__12daNpcDrSol_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__12daNpcDrSol_cFv();
extern "C" void Create__12daNpcDrSol_cFv();
extern "C" void CreateHeap__12daNpcDrSol_cFv();
extern "C" void Delete__12daNpcDrSol_cFv();
extern "C" void Execute__12daNpcDrSol_cFv();
extern "C" void Draw__12daNpcDrSol_cFv();
extern "C" void drawOtherMdls__12daNpcDrSol_cFv();
extern "C" void createHeapCallBack__12daNpcDrSol_cFP10fopAc_ac_c();
extern "C" void reset__12daNpcDrSol_cFv();
extern "C" void setAction__12daNpcDrSol_cFM12daNpcDrSol_cFPCvPvPv_b();
extern "C" void chkFindPlayer__12daNpcDrSol_cFv();
extern "C" void wait__12daNpcDrSol_cFPv();
extern "C" void setMotion__12daNpcDrSol_cFifi();
extern "C" void talk__12daNpcDrSol_cFPv();
extern "C" static void daNpcDrSol_Create__FPv();
extern "C" static void daNpcDrSol_Delete__FPv();
extern "C" static void daNpcDrSol_Execute__FPv();
extern "C" static void daNpcDrSol_Draw__FPv();
extern "C" static bool daNpcDrSol_IsDelete__FPv();
extern "C" void setParam__12daNpcDrSol_cFv();
extern "C" void main__12daNpcDrSol_cFv();
extern "C" void setAttnPos__12daNpcDrSol_cFv();
extern "C" void setMotionAnm__12daNpcDrSol_cFif();
extern "C" bool drawDbgInfo__12daNpcDrSol_cFv();
extern "C" void __dt__8daNpcF_cFv();
extern "C" void __dt__18daNpcF_ActorMngr_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__8daNpcF_cFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __ct__18daNpcF_ActorMngr_cFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" bool ctrlBtk__8daNpcF_cFv();
extern "C" void setCollisions__8daNpcF_cFv();
extern "C" bool setExpressionAnm__8daNpcF_cFib();
extern "C" bool setExpressionBtp__8daNpcF_cFi();
extern "C" void setExpression__8daNpcF_cFif();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __sinit_d_a_npc_drainSol_cpp();
extern "C" void adjustShapeAngle__12daNpcDrSol_cFv();
extern "C" void __dt__18daNpcDrSol_Param_cFv();
extern "C" static void func_809AF980();
extern "C" static void func_809AF988();
extern "C" extern char const* const d_a_npc_drainSol__stringBase0;

//
// External References:
//

extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGs_wolfeye_effect_check__Fv();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void ChkPresentEnd__16dEvent_manager_cFv();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void initialize__18daNpcF_ActorMngr_cFv();
extern "C" void execute__8daNpcF_cFv();
extern "C" void draw__8daNpcF_cFiifP11_GXColorS10i();
extern "C" void setMtx__8daNpcF_cFv();
extern "C" void setMtx2__8daNpcF_cFv();
extern "C" void initialize__8daNpcF_cFv();
extern "C" void getTrnsfrmKeyAnmP__8daNpcF_cFPci();
extern "C" void setMcaMorfAnm__8daNpcF_cFP18J3DAnmTransformKeyffiii();
extern "C" void setEnvTevColor__8daNpcF_cFv();
extern "C" void setRoomNo__8daNpcF_cFv();
extern "C" void playMotionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData();
extern "C" void ctrlMsgAnm__8daNpcF_cFRiRiP10fopAc_ac_ci();
extern "C" void orderEvent__8daNpcF_cFiPcUsUsUcUs();
extern "C" void initTalk__8daNpcF_cFiPP10fopAc_ac_c();
extern "C" void talkProc__8daNpcF_cFPiiPP10fopAc_ac_c();
extern "C" void getDistTableIdx__8daNpcF_cFii();
extern "C" void checkNowWolfEyeUp__9daPy_py_cFv();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXMultVec();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern u8 mCcDCyl__8daNpcF_c[68];
extern "C" extern void* __vt__8daNpcF_c[18];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 809AFACC-809AFAD4 000000 0008+00 1/1 0/0 0/0 .data            l_bmdGetParamList */
SECTION_DATA static u8 l_bmdGetParamList[8] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x07,
};

/* 809AFAD4-809AFAEC 000008 0018+00 1/1 0/0 0/0 .data            l_bckGetParamList */
SECTION_DATA static u8 l_bckGetParamList[24] = {
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
};

/* 809AFAEC-809AFAF4 -00001 0008+00 4/4 0/0 0/0 .data            l_arcNames */
SECTION_DATA static void* l_arcNames[2] = {
    (void*)&d_a_npc_drainSol__stringBase0,
    (void*)(((char*)&d_a_npc_drainSol__stringBase0) + 0xA),
};

/* 809AFAF4-809AFB00 -00001 000C+00 1/1 0/0 0/0 .data            @4286 */
SECTION_DATA static void* lit_4286[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__12daNpcDrSol_cFPv,
};

/* 809AFB00-809AFB0C -00001 000C+00 1/1 0/0 0/0 .data            @4352 */
SECTION_DATA static void* lit_4352[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__12daNpcDrSol_cFPv,
};

/* 809AFB0C-809AFB18 -00001 000C+00 1/1 0/0 0/0 .data            @4385 */
SECTION_DATA static void* lit_4385[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__12daNpcDrSol_cFPv,
};

/* 809AFB18-809AFB38 -00001 0020+00 1/0 0/0 0/0 .data            daNpcDrSol_MethodTable */
SECTION_DATA static void* daNpcDrSol_MethodTable[8] = {
    (void*)daNpcDrSol_Create__FPv,
    (void*)daNpcDrSol_Delete__FPv,
    (void*)daNpcDrSol_Execute__FPv,
    (void*)daNpcDrSol_IsDelete__FPv,
    (void*)daNpcDrSol_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 809AFB38-809AFB68 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_DRSOL */
SECTION_DATA extern void* g_profile_NPC_DRSOL[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02A40000, (void*)&g_fpcLf_Method,
    (void*)0x00000D3C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01A70000, (void*)&daNpcDrSol_MethodTable,
    (void*)0x00044187, (void*)0x040E0000,
};

/* 809AFB68-809AFBB0 00009C 0048+00 2/2 0/0 0/0 .data            __vt__12daNpcDrSol_c */
SECTION_DATA extern void* __vt__12daNpcDrSol_c[18] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12daNpcDrSol_cFv,
    (void*)setParam__12daNpcDrSol_cFv,
    (void*)main__12daNpcDrSol_cFv,
    (void*)ctrlBtk__8daNpcF_cFv,
    (void*)adjustShapeAngle__12daNpcDrSol_cFv,
    (void*)setMtx__8daNpcF_cFv,
    (void*)setMtx2__8daNpcF_cFv,
    (void*)setAttnPos__12daNpcDrSol_cFv,
    (void*)setCollisions__8daNpcF_cFv,
    (void*)setExpressionAnm__8daNpcF_cFib,
    (void*)setExpressionBtp__8daNpcF_cFi,
    (void*)setExpression__8daNpcF_cFif,
    (void*)setMotionAnm__12daNpcDrSol_cFif,
    (void*)setMotion__12daNpcDrSol_cFifi,
    (void*)drawDbgInfo__12daNpcDrSol_cFv,
    (void*)drawOtherMdls__12daNpcDrSol_cFv,
};

/* 809AFBB0-809AFBBC 0000E4 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 809AFBBC-809AFBE0 0000F0 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809AF988,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809AF980,
};

/* 809AFBE0-809AFBEC 000114 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 809AFBEC-809AFBF8 000120 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 809AFBF8-809AFC04 00012C 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 809AFC04-809AFC10 000138 000C+00 4/4 0/0 0/0 .data            __vt__18daNpcF_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcF_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcF_ActorMngr_cFv,
};

/* 809AFC10-809AFC1C 000144 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 809AFC1C-809AFC28 000150 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 809ADE6C-809ADF18 0000EC 00AC+00 1/1 0/0 0/0 .text            __ct__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcDrSol_c::daNpcDrSol_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__ct__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809ADF18-809ADF60 000198 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 809ADF60-809ADFA8 0001E0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 809ADFA8-809ADFE4 000228 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__4cXyzFv.s"
}
#pragma pop

/* 809ADFE4-809AE10C 000264 0128+00 1/0 0/0 0/0 .text            __dt__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcDrSol_c::~daNpcDrSol_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__12daNpcDrSol_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809AF9A4-809AFA10 000000 006C+00 5/5 0/0 0/0 .rodata          m__18daNpcDrSol_Param_c */
SECTION_RODATA static u8 const m__18daNpcDrSol_Param_c[108] = {
    0x42, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
    0x43, 0x7F, 0x00, 0x00, 0x43, 0x20, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00, 0xC2, 0x34, 0x00, 0x00,
    0x3F, 0x19, 0x99, 0x9A, 0x41, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00, 0x04, 0x00, 0x06,
    0x42, 0x70, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00, 0xC3, 0x96, 0x00, 0x00,
    0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809AF9A4 = (void*)(&m__18daNpcDrSol_Param_c);

/* 809AFA10-809AFA14 00006C 0004+00 0/1 0/0 0/0 .rodata          @4140 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4140 = 0xC2700000;
SECTION_DEAD void* const cg_809AFA10 = (void*)(&lit_4140);
#pragma pop

/* 809AFA14-809AFA18 000070 0004+00 0/1 0/0 0/0 .rodata          @4141 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4141 = 0xC1200000;
SECTION_DEAD void* const cg_809AFA14 = (void*)(&lit_4141);
#pragma pop

/* 809AFA18-809AFA1C 000074 0004+00 0/1 0/0 0/0 .rodata          @4142 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4142 = 0x42700000;
SECTION_DEAD void* const cg_809AFA18 = (void*)(&lit_4142);
#pragma pop

/* 809AFA1C-809AFA20 000078 0004+00 0/2 0/0 0/0 .rodata          @4143 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4143 = 0x43480000;
SECTION_DEAD void* const cg_809AFA1C = (void*)(&lit_4143);
#pragma pop

/* 809AE10C-809AE354 00038C 0248+00 1/1 0/0 0/0 .text            Create__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::Create() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/Create__12daNpcDrSol_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809AFA20-809AFA38 00007C 0018+00 1/1 0/0 0/0 .rodata          @4153 */
SECTION_RODATA static u8 const lit_4153[24] = {
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x99, 0x63, 0x54, 0x40, 0x0B, 0x18, 0x48,
};
SECTION_DEAD void* const cg_809AFA20 = (void*)(&lit_4153);

/* 809AFA38-809AFA3C 000094 0004+00 2/2 0/0 0/0 .rodata          @4190 */
SECTION_RODATA static u32 const lit_4190 = 0x3F800000;
SECTION_DEAD void* const cg_809AFA38 = (void*)(&lit_4190);

/* 809AE354-809AE51C 0005D4 01C8+00 1/1 0/0 0/0 .text            CreateHeap__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/CreateHeap__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809AE51C-809AE550 00079C 0034+00 1/1 0/0 0/0 .text            Delete__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::Delete() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/Delete__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809AE550-809AE5CC 0007D0 007C+00 2/2 0/0 0/0 .text            Execute__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::Execute() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/Execute__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809AE5CC-809AE60C 00084C 0040+00 1/1 0/0 0/0 .text            Draw__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::Draw() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/Draw__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809AE60C-809AE69C 00088C 0090+00 1/0 0/0 0/0 .text            drawOtherMdls__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::drawOtherMdls() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/drawOtherMdls__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809AE69C-809AE6BC 00091C 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__12daNpcDrSol_cFP10fopAc_ac_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/createHeapCallBack__12daNpcDrSol_cFP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 809AFA3C-809AFA48 000098 000C+00 0/1 0/0 0/0 .rodata          @4273 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4273[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809AFA3C = (void*)(&lit_4273);
#pragma pop

/* 809AFA48-809AFA4C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4274 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4274[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_809AFA48 = (void*)(&lit_4274);
#pragma pop

/* 809AFA4C-809AFA58 0000A8 000C+00 0/1 0/0 0/0 .rodata          @4275 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4275[12] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809AFA4C = (void*)(&lit_4275);
#pragma pop

/* 809AFA58-809AFA5C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4276 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4276[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_809AFA58 = (void*)(&lit_4276);
#pragma pop

/* 809AFA5C-809AFA68 0000B8 000C+00 0/1 0/0 0/0 .rodata          @4277 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4277[12] = {
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};
SECTION_DEAD void* const cg_809AFA5C = (void*)(&lit_4277);
#pragma pop

/* 809AFA68-809AFA74 0000C4 000C+00 0/1 0/0 0/0 .rodata          @4278 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4278[12] = {
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809AFA68 = (void*)(&lit_4278);
#pragma pop

/* 809AFA74-809AFA7C 0000D0 0008+00 0/1 0/0 0/0 .rodata          @4279 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4279[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809AFA74 = (void*)(&lit_4279);
#pragma pop

/* 809AFA7C-809AFA88 0000D8 000C+00 0/1 0/0 0/0 .rodata          @4280 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4280[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809AFA7C = (void*)(&lit_4280);
#pragma pop

/* 809AFA88-809AFA8C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4281 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4281[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_809AFA88 = (void*)(&lit_4281);
#pragma pop

/* 809AFA8C-809AFAA0 0000E8 0014+00 0/0 0/0 0/0 .rodata          @4282 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4282[20] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809AFA8C = (void*)(&lit_4282);
#pragma pop

/* 809AFAA0-809AFAA4 0000FC 0004+00 1/2 0/0 0/0 .rodata          @4309 */
SECTION_RODATA static u8 const lit_4309[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_809AFAA0 = (void*)(&lit_4309);

/* 809AE6BC-809AE844 00093C 0188+00 1/1 0/0 0/0 .text            reset__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::reset() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/reset__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809AE844-809AE8EC 000AC4 00A8+00 1/1 0/0 0/0 .text
 * setAction__12daNpcDrSol_cFM12daNpcDrSol_cFPCvPvPv_b          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::setAction(bool (daNpcDrSol_c::*)(void*)) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/setAction__12daNpcDrSol_cFM12daNpcDrSol_cFPCvPvPv_b.s"
}
#pragma pop

/* 809AE8EC-809AE994 000B6C 00A8+00 1/1 0/0 0/0 .text            chkFindPlayer__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::chkFindPlayer() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/chkFindPlayer__12daNpcDrSol_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809AFAA4-809AFAA8 000100 0004+00 2/2 0/0 0/0 .rodata          @4369 */
SECTION_RODATA static u32 const lit_4369 = 0xBF800000;
SECTION_DEAD void* const cg_809AFAA4 = (void*)(&lit_4369);

/* 809AE994-809AEB18 000C14 0184+00 2/0 0/0 0/0 .text            wait__12daNpcDrSol_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::wait(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/wait__12daNpcDrSol_cFPv.s"
}
#pragma pop

/* 809AEB18-809AEB94 000D98 007C+00 1/0 0/0 0/0 .text            setMotion__12daNpcDrSol_cFifi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::setMotion(int param_0, f32 param_1, int param_2) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/setMotion__12daNpcDrSol_cFifi.s"
}
#pragma pop

/* 809AEB94-809AED20 000E14 018C+00 1/0 0/0 0/0 .text            talk__12daNpcDrSol_cFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::talk(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/talk__12daNpcDrSol_cFPv.s"
}
#pragma pop

/* 809AED20-809AED40 000FA0 0020+00 1/0 0/0 0/0 .text            daNpcDrSol_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpcDrSol_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/daNpcDrSol_Create__FPv.s"
}
#pragma pop

/* 809AED40-809AED60 000FC0 0020+00 1/0 0/0 0/0 .text            daNpcDrSol_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpcDrSol_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/daNpcDrSol_Delete__FPv.s"
}
#pragma pop

/* 809AED60-809AED80 000FE0 0020+00 1/0 0/0 0/0 .text            daNpcDrSol_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpcDrSol_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/daNpcDrSol_Execute__FPv.s"
}
#pragma pop

/* 809AED80-809AEDA0 001000 0020+00 1/0 0/0 0/0 .text            daNpcDrSol_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpcDrSol_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/daNpcDrSol_Draw__FPv.s"
}
#pragma pop

/* 809AEDA0-809AEDA8 001020 0008+00 1/0 0/0 0/0 .text            daNpcDrSol_IsDelete__FPv */
static bool daNpcDrSol_IsDelete(void* param_0) {
    return true;
}

/* 809AEDA8-809AEE24 001028 007C+00 1/0 0/0 0/0 .text            setParam__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::setParam() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/setParam__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809AEE24-809AEFDC 0010A4 01B8+00 1/0 0/0 0/0 .text            main__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::main() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/main__12daNpcDrSol_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809AFAA8-809AFAAC 000104 0004+00 0/1 0/0 0/0 .rodata          @4499 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4499 = 0x41200000;
SECTION_DEAD void* const cg_809AFAA8 = (void*)(&lit_4499);
#pragma pop

/* 809AFAAC-809AFAB0 000108 0004+00 0/1 0/0 0/0 .rodata          @4500 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4500 = 0x41700000;
SECTION_DEAD void* const cg_809AFAAC = (void*)(&lit_4500);
#pragma pop

/* 809AEFDC-809AF12C 00125C 0150+00 1/0 0/0 0/0 .text            setAttnPos__12daNpcDrSol_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::setAttnPos() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/setAttnPos__12daNpcDrSol_cFv.s"
}
#pragma pop

/* 809AF12C-809AF1FC 0013AC 00D0+00 1/0 0/0 0/0 .text            setMotionAnm__12daNpcDrSol_cFif */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcDrSol_c::setMotionAnm(int param_0, f32 param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/setMotionAnm__12daNpcDrSol_cFif.s"
}
#pragma pop

/* 809AF1FC-809AF204 00147C 0008+00 1/0 0/0 0/0 .text            drawDbgInfo__12daNpcDrSol_cFv */
bool daNpcDrSol_c::drawDbgInfo() {
    return false;
}

/* 809AF204-809AF450 001484 024C+00 1/1 0/0 0/0 .text            __dt__8daNpcF_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcF_c::~daNpcF_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__8daNpcF_cFv.s"
}
#pragma pop

/* 809AF450-809AF498 0016D0 0048+00 3/2 0/0 0/0 .text            __dt__18daNpcF_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcF_ActorMngr_c::~daNpcF_ActorMngr_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__18daNpcF_ActorMngr_cFv.s"
}
#pragma pop

/* 809AF498-809AF4D4 001718 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__5csXyzFv.s"
}
#pragma pop

/* 809AF4D4-809AF6C4 001754 01F0+00 1/1 0/0 0/0 .text            __ct__8daNpcF_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcF_c::daNpcF_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__ct__8daNpcF_cFv.s"
}
#pragma pop

/* 809AF6C4-809AF6C8 001944 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
csXyz::csXyz() {
    /* empty function */
}

/* 809AF6C8-809AF6CC 001948 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 809AF6CC-809AF708 00194C 003C+00 1/1 0/0 0/0 .text            __ct__18daNpcF_ActorMngr_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcF_ActorMngr_c::daNpcF_ActorMngr_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__ct__18daNpcF_ActorMngr_cFv.s"
}
#pragma pop

/* 809AF708-809AF778 001988 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 809AF778-809AF7D4 0019F8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 809AF7D4-809AF844 001A54 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* 809AF844-809AF88C 001AC4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 809AF88C-809AF894 001B0C 0008+00 1/0 0/0 0/0 .text            ctrlBtk__8daNpcF_cFv */
bool daNpcF_c::ctrlBtk() {
    return false;
}

/* 809AF894-809AF898 001B14 0004+00 1/0 0/0 0/0 .text            setCollisions__8daNpcF_cFv */
void daNpcF_c::setCollisions() {
    /* empty function */
}

/* 809AF898-809AF8A0 001B18 0008+00 1/0 0/0 0/0 .text            setExpressionAnm__8daNpcF_cFib */
bool daNpcF_c::setExpressionAnm(int param_0, bool param_1) {
    return true;
}

/* 809AF8A0-809AF8A8 001B20 0008+00 1/0 0/0 0/0 .text            setExpressionBtp__8daNpcF_cFi */
bool daNpcF_c::setExpressionBtp(int param_0) {
    return true;
}

/* 809AF8A8-809AF8AC 001B28 0004+00 1/0 0/0 0/0 .text            setExpression__8daNpcF_cFif */
void daNpcF_c::setExpression(int param_0, f32 param_1) {
    /* empty function */
}

/* 809AF8AC-809AF8F4 001B2C 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 809AFC28-809AFC34 00015C 000C+00 2/2 0/0 0/0 .data            __vt__18daNpcDrSol_Param_c */
SECTION_DATA extern void* __vt__18daNpcDrSol_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcDrSol_Param_cFv,
};

/* 809AFC40-809AFC4C 000008 000C+00 1/1 0/0 0/0 .bss             @3801 */
static u8 lit_3801[12];

/* 809AFC4C-809AFC50 000014 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 809AF8F4-809AF934 001B74 0040+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_drainSol_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_npc_drainSol_cpp() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__sinit_d_a_npc_drainSol_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_809AF8F4 = (void*)__sinit_d_a_npc_drainSol_cpp;
#pragma pop

/* 809AF934-809AF938 001BB4 0004+00 1/0 0/0 0/0 .text            adjustShapeAngle__12daNpcDrSol_cFv
 */
void daNpcDrSol_c::adjustShapeAngle() {
    /* empty function */
}

/* 809AF938-809AF980 001BB8 0048+00 2/1 0/0 0/0 .text            __dt__18daNpcDrSol_Param_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daNpcDrSol_Param_c::~daNpcDrSol_Param_c() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/__dt__18daNpcDrSol_Param_cFv.s"
}
#pragma pop

/* 809AF980-809AF988 001C00 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_809AF980() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/func_809AF980.s"
}
#pragma pop

/* 809AF988-809AF990 001C08 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_809AF988() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_drainSol/d_a_npc_drainSol/func_809AF988.s"
}
#pragma pop

/* 809AFAB0-809AFAC9 00010C 0019+00 1/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_809AFAB0 = "DrainSol1";
SECTION_DEAD static char const* const stringBase_809AFABA = "DrainSol2";
SECTION_DEAD static char const* const stringBase_809AFAC4 = "Shoe";
#pragma pop
