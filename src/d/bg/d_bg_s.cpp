//
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s
//

#include "d/bg/d_bg_s.h"
#include "dol2asm.h"
#include "dolphin/mtx/mtxvec.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void Init__11cBgS_ChkElmFv();
extern "C" void Regist2__11cBgS_ChkElmFP9dBgW_BaseUiPv();
extern "C" void Release__11cBgS_ChkElmFv();
extern "C" void Regist__4cBgSFP9dBgW_BaseUiPv();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Ct__4cBgSFv();
extern "C" void Dt__4cBgSFv();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void ConvDzb__4cBgSFPv();
extern "C" void GetActorPointer__4cBgSCFi();
extern "C" void GetBgWBasePointer__4cBgSCFRC13cBgS_PolyInfo();
extern "C" void ChkPolySafe__4cBgSFRC13cBgS_PolyInfo();
extern "C" void GetGrpRoomId__4cBgSCFRC13cBgS_PolyInfo();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetTriPnt__4cBgSCFRC13cBgS_PolyInfoP4cXyzP4cXyzP4cXyz();
extern "C" void ShdwDraw__4cBgSFP13cBgS_ShdwDraw();
extern "C" void GetGrpInf__4cBgSCFRC13cBgS_PolyInfo();
extern "C" void Ct__4dBgSFv();
extern "C" void Dt__4dBgSFv();
extern "C" void ClrMoveFlag__4dBgSFv();
extern "C" void Move__4dBgSFv();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void SetOldShapeAngleY__9dBgW_BaseFs();
extern "C" void ChkMoveBG__4dBgSFRC13cBgS_PolyInfo();
extern "C" void ChkMoveBG_NoDABg__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetExitId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetHorseNoEntry__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetSpecialCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetMagnetCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetMonkeyBarsCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetUnderwaterRoofCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetWallCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetPolyAtt1__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetGroundCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetCamMoveBG__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomCamId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomPathId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomPathPntNo__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetGrpSoundId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void ChkGrpInf__4dBgSFRC13cBgS_PolyInfoUl();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetPolyAttackThrough__4dBgSFRC13cBgS_PolyInfo();
extern "C" void ChkPolyHSStick__4dBgSFRC13cBgS_PolyInfo();
extern "C" void WallCorrect__4dBgSFP9dBgS_Acch();
extern "C" void WallCorrectSort__4dBgSFP9dBgS_Acch();
extern "C" void RoofChk__4dBgSFP12dBgS_RoofChk();
extern "C" void SplGrpChk__4dBgSFP14dBgS_SplGrpChk();
extern "C" void SphChk__4dBgSFP11dBgS_SphChkPv();
extern "C" void MoveBgCrrPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyzbb();
extern "C" void MoveBgTransPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void MoveBgMatrixCrrPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" static void dBgS_MoveBGProc_RotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void dBgS_MoveBGProc_Trans__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void RideCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_c();
extern "C" void ArrowStickCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_cR4cXyz();
extern "C" void
PushPullCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_csQ29dBgW_Base13PushPullLabel();
extern "C" void dBgS_CheckBWallPoly__FRC13cBgS_PolyInfo();
extern "C" void dBgS_CheckBGroundPoly__FRC13cBgS_PolyInfo();
extern "C" void dBgS_CheckBRoofPoly__FRC13cBgS_PolyInfo();
extern "C" void dBgS_GetNY__FRC13cBgS_PolyInfo();
extern "C" extern void* __vt__4dBgS[5];
extern "C" extern void* __vt__4cBgS[5];
extern "C" extern void* __vt__11cBgS_ChkElm[4];
extern "C" extern u8 data_80450F68[8];

//
// External References:
//

extern "C" void __dt__11cBgS_ChkElmFv();
extern "C" void __dt__4dBgSFv();
extern "C" void __dt__4cBgSFv();
extern "C" void SetNowActorInfo__9dBgS_AcchFiPvUi();
extern "C" void CalcMovePosWork__9dBgS_AcchFv();
extern "C" void CalcWallRR__9dBgS_AcchFv();
extern "C" void Init__14dBgS_SplGrpChkFv();
extern "C" void Init__12dBgS_RoofChkFv();
extern "C" void GetTrans__4cBgWCFP4cXyz();
extern "C" void CalcDiffShapeAngleY__9dBgW_BaseFs();
extern "C" void ChkSameActorPid__8cBgS_ChkCFUi();
extern "C" void PreCheck__11cBgS_GndChkFv();
extern "C" void PreCalc__11cBgS_LinChkFv();
extern "C" void ChkSetInfo__13cBgS_PolyInfoCFv();
extern "C" void ClearPi__13cBgS_PolyInfoFv();
extern "C" void SetActorInfo__13cBgS_PolyInfoFiPvUi();
extern "C" void ChkSafe__13cBgS_PolyInfoCFPCvUi();
extern "C" void ChkBgIndex__13cBgS_PolyInfoCFv();
extern "C" void Regist__9cBgW_BgIdFi();
extern "C" void Release__9cBgW_BgIdFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cBgW_CheckBGround__Ff();
extern "C" void cBgW_CheckBRoof__Ff();
extern "C" void cBgW_CheckBWall__Ff();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8cM3dGPla[3];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* 800740F4-80074110 06EA34 001C+00 2/2 1/1 0/0 .text            Init__11cBgS_ChkElmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_ChkElm::Init() {
    nofralloc
#include "asm/d/bg/d_bg_s/Init__11cBgS_ChkElmFv.s"
}
#pragma pop

/* 80074110-80074128 06EA50 0018+00 1/0 0/0 0/0 .text Regist2__11cBgS_ChkElmFP9dBgW_BaseUiPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_ChkElm::Regist2(dBgW_Base* param_0, unsigned int param_1, void* param_2) {
    nofralloc
#include "asm/d/bg/d_bg_s/Regist2__11cBgS_ChkElmFP9dBgW_BaseUiPv.s"
}
#pragma pop

/* 80074128-80074144 06EA68 001C+00 2/2 0/0 0/0 .text            Release__11cBgS_ChkElmFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS_ChkElm::Release() {
    nofralloc
#include "asm/d/bg/d_bg_s/Release__11cBgS_ChkElmFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450F60-80450F68 000460 0004+04 2/2 0/0 0/0 .sbss            l_SetCounter */
static u8 l_SetCounter[4 + 4 /* padding */];

/* 80074144-80074250 06EA84 010C+00 1/1 0/0 0/0 .text            Regist__4cBgSFP9dBgW_BaseUiPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::Regist(dBgW_Base* param_0, unsigned int param_1, void* param_2) {
    nofralloc
#include "asm/d/bg/d_bg_s/Regist__4cBgSFP9dBgW_BaseUiPv.s"
}
#pragma pop

/* 80074250-800742E4 06EB90 0094+00 0/0 2/2 187/187 .text            Release__4cBgSFP9dBgW_Base */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::Release(dBgW_Base* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/Release__4cBgSFP9dBgW_Base.s"
}
#pragma pop

/* 800742E4-80074338 06EC24 0054+00 2/1 0/0 0/0 .text            Ct__4cBgSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::Ct() {
    nofralloc
#include "asm/d/bg/d_bg_s/Ct__4cBgSFv.s"
}
#pragma pop

/* 80074338-800743B4 06EC78 007C+00 2/1 0/0 0/0 .text            Dt__4cBgSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::Dt() {
    nofralloc
#include "asm/d/bg/d_bg_s/Dt__4cBgSFv.s"
}
#pragma pop

/* 800743B4-800744A0 06ECF4 00EC+00 0/0 16/16 305/305 .text LineCross__4cBgSFP11cBgS_LinChk */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::LineCross(cBgS_LinChk* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/LineCross__4cBgSFP11cBgS_LinChk.s"
}
#pragma pop

/* ############################################################################################## */
/* 804526B8-804526C0 000CB8 0004+04 1/1 0/0 0/0 .sdata2          @3738 */
SECTION_SDATA2 static f32 lit_3738[1 + 1 /* padding */] = {
    -1000000000.0f,
    /* padding */
    0.0f,
};

/* 800744A0-80074578 06EDE0 00D8+00 0/0 51/51 231/231 .text GroundCross__4cBgSFP11cBgS_GndChk */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::GroundCross(cBgS_GndChk* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GroundCross__4cBgSFP11cBgS_GndChk.s"
}
#pragma pop

/* 80074578-80074618 06EEB8 00A0+00 0/0 1/1 0/0 .text            ConvDzb__4cBgSFPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::ConvDzb(void* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/ConvDzb__4cBgSFPv.s"
}
#pragma pop

/* 80074618-80074628 06EF58 0010+00 0/0 9/9 13/13 .text            GetActorPointer__4cBgSCFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::GetActorPointer(int param_0) const {
    nofralloc
#include "asm/d/bg/d_bg_s/GetActorPointer__4cBgSCFi.s"
}
#pragma pop

/* 80074628-80074660 06EF68 0038+00 2/2 3/3 0/0 .text GetBgWBasePointer__4cBgSCFRC13cBgS_PolyInfo
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::GetBgWBasePointer(cBgS_PolyInfo const& param_0) const {
    nofralloc
#include "asm/d/bg/d_bg_s/GetBgWBasePointer__4cBgSCFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074660-800746F4 06EFA0 0094+00 3/3 35/35 9/9 .text ChkPolySafe__4cBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::ChkPolySafe(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/ChkPolySafe__4cBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 800746F4-80074744 06F034 0050+00 1/1 0/0 0/0 .text GetGrpRoomId__4cBgSCFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::GetGrpRoomId(cBgS_PolyInfo const& param_0) const {
    nofralloc
#include "asm/d/bg/d_bg_s/GetGrpRoomId__4cBgSCFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074744-800747F0 06F084 00AC+00 4/4 62/62 142/142 .text
 * GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::GetTriPla(cBgS_PolyInfo const& param_0, cM3dGPla* param_1) const {
    nofralloc
#include "asm/d/bg/d_bg_s/GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla.s"
}
#pragma pop

/* 800747F0-80074840 06F130 0050+00 0/0 1/1 0/0 .text
 * GetTriPnt__4cBgSCFRC13cBgS_PolyInfoP4cXyzP4cXyzP4cXyz        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::GetTriPnt(cBgS_PolyInfo const& param_0, cXyz* param_1, cXyz* param_2,
                         cXyz* param_3) const {
    nofralloc
#include "asm/d/bg/d_bg_s/GetTriPnt__4cBgSCFRC13cBgS_PolyInfoP4cXyzP4cXyzP4cXyz.s"
}
#pragma pop

/* 80074840-800748AC 06F180 006C+00 0/0 1/1 0/0 .text            ShdwDraw__4cBgSFP13cBgS_ShdwDraw */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::ShdwDraw(cBgS_ShdwDraw* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/ShdwDraw__4cBgSFP13cBgS_ShdwDraw.s"
}
#pragma pop

/* 800748AC-800748FC 06F1EC 0050+00 1/1 0/0 0/0 .text            GetGrpInf__4cBgSCFRC13cBgS_PolyInfo
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void cBgS::GetGrpInf(cBgS_PolyInfo const& param_0) const {
    nofralloc
#include "asm/d/bg/d_bg_s/GetGrpInf__4cBgSCFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 800748FC-8007491C 06F23C 0020+00 1/0 0/0 0/0 .text            Ct__4dBgSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::Ct() {
    nofralloc
#include "asm/d/bg/d_bg_s/Ct__4dBgSFv.s"
}
#pragma pop

/* 8007491C-8007493C 06F25C 0020+00 1/0 0/0 0/0 .text            Dt__4dBgSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::Dt() {
    nofralloc
#include "asm/d/bg/d_bg_s/Dt__4dBgSFv.s"
}
#pragma pop

/* 8007493C-800749A8 06F27C 006C+00 0/0 1/1 0/0 .text            ClrMoveFlag__4dBgSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::ClrMoveFlag() {
    nofralloc
#include "asm/d/bg/d_bg_s/ClrMoveFlag__4dBgSFv.s"
}
#pragma pop

/* 800749A8-80074A08 06F2E8 0060+00 0/0 1/1 0/0 .text            Move__4dBgSFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::Move() {
    nofralloc
#include "asm/d/bg/d_bg_s/Move__4dBgSFv.s"
}
#pragma pop

/* 80074A08-80074AB4 06F348 00AC+00 0/0 2/2 127/127 .text Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::Regist(dBgW_Base* param_0, fopAc_ac_c* param_1) {
    nofralloc
#include "asm/d/bg/d_bg_s/Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c.s"
}
#pragma pop

/* 80074AB4-80074ABC -00001 0008+00 0/0 0/0 0/0 .text            SetOldShapeAngleY__9dBgW_BaseFs */
void dBgW_Base::SetOldShapeAngleY(s16 param_0) {
    *(u16*)(((u8*)this) + 12) /* this->field_0xc */ = (u16)(param_0);
}

/* 80074ABC-80074B40 06F3FC 0084+00 0/0 11/11 5/5 .text ChkMoveBG__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::ChkMoveBG(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/ChkMoveBG__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074B40-80074B98 06F480 0058+00 0/0 4/4 4/4 .text ChkMoveBG_NoDABg__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::ChkMoveBG_NoDABg(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/ChkMoveBG_NoDABg__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074B98-80074BE8 06F4D8 0050+00 0/0 4/4 1/1 .text            GetExitId__4dBgSFRC13cBgS_PolyInfo
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetExitId(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetExitId__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074BE8-80074C6C 06F528 0084+00 0/0 7/7 35/35 .text GetPolyColor__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetPolyColor(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetPolyColor__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074C6C-80074CBC 06F5AC 0050+00 0/0 1/1 2/2 .text GetHorseNoEntry__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetHorseNoEntry(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetHorseNoEntry__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074CBC-80074D0C 06F5FC 0050+00 0/0 4/4 9/9 .text GetSpecialCode__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetSpecialCode(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetSpecialCode__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074D0C-80074D5C 06F64C 0050+00 0/0 2/2 2/2 .text GetMagnetCode__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetMagnetCode(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetMagnetCode__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074D5C-80074DAC 06F69C 0050+00 0/0 5/5 0/0 .text GetMonkeyBarsCode__4dBgSFRC13cBgS_PolyInfo
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetMonkeyBarsCode(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetMonkeyBarsCode__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074DAC-80074E00 06F6EC 0054+00 0/0 0/0 1/1 .text
 * GetUnderwaterRoofCode__4dBgSFRC13cBgS_PolyInfo               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetUnderwaterRoofCode(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetUnderwaterRoofCode__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074E00-80074E50 06F740 0050+00 0/0 13/13 5/5 .text GetWallCode__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetWallCode(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetWallCode__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074E50-80074EA0 06F790 0050+00 0/0 29/29 28/28 .text GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetPolyAtt0(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074EA0-80074EF0 06F7E0 0050+00 0/0 13/13 0/0 .text GetPolyAtt1__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetPolyAtt1(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetPolyAtt1__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074EF0-80074F40 06F830 0050+00 0/0 7/7 8/8 .text GetGroundCode__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetGroundCode(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetGroundCode__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074F40-80074F90 06F880 0050+00 0/0 1/1 0/0 .text GetCamMoveBG__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetCamMoveBG(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetCamMoveBG__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074F90-80074FE0 06F8D0 0050+00 0/0 1/1 0/0 .text GetRoomCamId__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetRoomCamId(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetRoomCamId__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80074FE0-80075030 06F920 0050+00 0/0 2/2 0/0 .text GetRoomPathId__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetRoomPathId(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetRoomPathId__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80075030-80075080 06F970 0050+00 0/0 1/1 0/0 .text GetRoomPathPntNo__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetRoomPathPntNo(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetRoomPathPntNo__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80075080-800750D0 06F9C0 0050+00 0/0 2/2 0/0 .text GetGrpSoundId__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetGrpSoundId(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetGrpSoundId__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 800750D0-80075100 06FA10 0030+00 0/0 1/1 0/0 .text ChkGrpInf__4dBgSFRC13cBgS_PolyInfoUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::ChkGrpInf(cBgS_PolyInfo const& param_0, u32 param_1) {
    nofralloc
#include "asm/d/bg/d_bg_s/ChkGrpInf__4dBgSFRC13cBgS_PolyInfoUl.s"
}
#pragma pop

/* 80075100-8007519C 06FA40 009C+00 0/0 16/16 60/60 .text GetRoomId__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetRoomId(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetRoomId__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 8007519C-800751F8 06FADC 005C+00 0/0 3/3 0/0 .text
 * GetPolyAttackThrough__4dBgSFRC13cBgS_PolyInfo                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::GetPolyAttackThrough(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/GetPolyAttackThrough__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 800751F8-8007524C 06FB38 0054+00 0/0 1/1 0/0 .text ChkPolyHSStick__4dBgSFRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::ChkPolyHSStick(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/ChkPolyHSStick__4dBgSFRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 8007524C-80075374 06FB8C 0128+00 0/0 1/1 0/0 .text            WallCorrect__4dBgSFP9dBgS_Acch */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::WallCorrect(dBgS_Acch* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/WallCorrect__4dBgSFP9dBgS_Acch.s"
}
#pragma pop

/* 80075374-8007549C 06FCB4 0128+00 0/0 1/1 0/0 .text            WallCorrectSort__4dBgSFP9dBgS_Acch
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::WallCorrectSort(dBgS_Acch* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/WallCorrectSort__4dBgSFP9dBgS_Acch.s"
}
#pragma pop

/* 8007549C-80075564 06FDDC 00C8+00 0/0 17/17 1/1 .text            RoofChk__4dBgSFP12dBgS_RoofChk */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::RoofChk(dBgS_RoofChk* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/RoofChk__4dBgSFP12dBgS_RoofChk.s"
}
#pragma pop

/* 80075564-80075688 06FEA4 0124+00 0/0 2/2 3/3 .text            SplGrpChk__4dBgSFP14dBgS_SplGrpChk
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::SplGrpChk(dBgS_SplGrpChk* param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/SplGrpChk__4dBgSFP14dBgS_SplGrpChk.s"
}
#pragma pop

/* 80075688-80075774 06FFC8 00EC+00 0/0 1/1 1/1 .text            SphChk__4dBgSFP11dBgS_SphChkPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::SphChk(dBgS_SphChk* param_0, void* param_1) {
    nofralloc
#include "asm/d/bg/d_bg_s/SphChk__4dBgSFP11dBgS_SphChkPv.s"
}
#pragma pop

/* 80075774-80075880 0700B4 010C+00 0/0 3/3 0/0 .text
 * MoveBgCrrPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyzbb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::MoveBgCrrPos(cBgS_PolyInfo const& param_0, bool param_1, cXyz* param_2,
                            csXyz* param_3, csXyz* param_4, bool param_5, bool param_6) {
    nofralloc
#include "asm/d/bg/d_bg_s/MoveBgCrrPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyzbb.s"
}
#pragma pop

/* 80075880-8007595C 0701C0 00DC+00 0/0 7/7 2/2 .text
 * MoveBgTransPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::MoveBgTransPos(cBgS_PolyInfo const& param_0, bool param_1, cXyz* param_2,
                              csXyz* param_3, csXyz* param_4) {
    nofralloc
#include "asm/d/bg/d_bg_s/MoveBgTransPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz.s"
}
#pragma pop

/* 8007595C-80075A24 07029C 00C8+00 0/0 6/6 0/0 .text
 * MoveBgMatrixCrrPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::MoveBgMatrixCrrPos(cBgS_PolyInfo const& param_0, bool param_1, cXyz* param_2,
                                  csXyz* param_3, csXyz* param_4) {
    nofralloc
#include "asm/d/bg/d_bg_s/MoveBgMatrixCrrPos__4dBgSFRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz.s"
}
#pragma pop

/* 80075A24-80075AA4 070364 0080+00 1/1 0/0 46/46 .text
 * dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_MoveBGProc_Typical(dBgW* param_0, void* param_1, cBgS_PolyInfo const& param_2,
                                 bool param_3, cXyz* param_4, csXyz* param_5, csXyz* param_6) {
    nofralloc
#include "asm/d/bg/d_bg_s/dBgS_MoveBGProc_Typical__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz.s"
}
#pragma pop

/* 80075AA4-80075AD8 0703E4 0034+00 1/1 0/0 0/0 .text
 * dBgS_MoveBGProc_RotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dBgS_MoveBGProc_RotY(dBgW* param_0, void* param_1, cBgS_PolyInfo const& param_2,
                                     bool param_3, cXyz* param_4, csXyz* param_5, csXyz* param_6) {
    nofralloc
#include "asm/d/bg/d_bg_s/dBgS_MoveBGProc_RotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz.s"
}
#pragma pop

/* 80075AD8-80075B44 070418 006C+00 0/0 0/0 124/124 .text
 * dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_MoveBGProc_TypicalRotY(dBgW* param_0, void* param_1, cBgS_PolyInfo const& param_2,
                                     bool param_3, cXyz* param_4, csXyz* param_5, csXyz* param_6) {
    nofralloc
#include "asm/d/bg/d_bg_s/dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz.s"
}
#pragma pop

/* 80075B44-80075B84 070484 0040+00 0/0 0/0 10/10 .text
 * dBgS_MoveBGProc_Trans__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_MoveBGProc_Trans(dBgW* param_0, void* param_1, cBgS_PolyInfo const& param_2,
                               bool param_3, cXyz* param_4, csXyz* param_5, csXyz* param_6) {
    nofralloc
#include "asm/d/bg/d_bg_s/dBgS_MoveBGProc_Trans__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz.s"
}
#pragma pop

/* 80075B84-80075BF4 0704C4 0070+00 0/0 1/1 2/2 .text
 * RideCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::RideCallBack(cBgS_PolyInfo const& param_0, fopAc_ac_c* param_1) {
    nofralloc
#include "asm/d/bg/d_bg_s/RideCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_c.s"
}
#pragma pop

/* 80075BF4-80075C6C 070534 0078+00 0/0 0/0 2/2 .text
 * ArrowStickCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_cR4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::ArrowStickCallBack(cBgS_PolyInfo const& param_0, fopAc_ac_c* param_1,
                                  cXyz& param_2) {
    nofralloc
#include "asm/d/bg/d_bg_s/ArrowStickCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_cR4cXyz.s"
}
#pragma pop

/* 80075C6C-80075D0C 0705AC 00A0+00 0/0 1/1 0/0 .text
 * PushPullCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_csQ29dBgW_Base13PushPullLabel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS::PushPullCallBack(cBgS_PolyInfo const& param_0, fopAc_ac_c* param_1, s16 param_2,
                                dBgW_Base::PushPullLabel param_3) {
    nofralloc
#include "asm/d/bg/d_bg_s/PushPullCallBack__4dBgSFRC13cBgS_PolyInfoP10fopAc_ac_csQ29dBgW_Base13PushPullLabel.s"
}
#pragma pop

/* 80075D0C-80075D7C 07064C 0070+00 0/0 8/8 1/1 .text dBgS_CheckBWallPoly__FRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_CheckBWallPoly(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/dBgS_CheckBWallPoly__FRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80075D7C-80075DEC 0706BC 0070+00 0/0 3/3 1/1 .text dBgS_CheckBGroundPoly__FRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_CheckBGroundPoly(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/dBgS_CheckBGroundPoly__FRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80075DEC-80075E5C 07072C 0070+00 0/0 0/0 1/1 .text dBgS_CheckBRoofPoly__FRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_CheckBRoofPoly(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/dBgS_CheckBRoofPoly__FRC13cBgS_PolyInfo.s"
}
#pragma pop

/* 80075E5C-80075EAC 07079C 0050+00 0/0 1/1 0/0 .text            dBgS_GetNY__FRC13cBgS_PolyInfo */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBgS_GetNY(cBgS_PolyInfo const& param_0) {
    nofralloc
#include "asm/d/bg/d_bg_s/dBgS_GetNY__FRC13cBgS_PolyInfo.s"
}
#pragma pop

/* ############################################################################################## */
/* 803AB608-803AB61C 008728 0014+00 0/0 3/3 0/0 .data            __vt__4dBgS */
SECTION_DATA extern void* __vt__4dBgS[5] = {
    (void*)NULL /* RTTI */, (void*)NULL,        (void*)__dt__4dBgSFv,
    (void*)Ct__4dBgSFv,     (void*)Dt__4dBgSFv,
};

/* 803AB61C-803AB630 00873C 0014+00 0/0 4/4 0/0 .data            __vt__4cBgS */
SECTION_DATA extern void* __vt__4cBgS[5] = {
    (void*)NULL /* RTTI */, (void*)NULL,        (void*)__dt__4cBgSFv,
    (void*)Ct__4cBgSFv,     (void*)Dt__4cBgSFv,
};

/* 803AB630-803AB640 008750 0010+00 0/0 2/2 0/0 .data            __vt__11cBgS_ChkElm */
SECTION_DATA extern void* __vt__11cBgS_ChkElm[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11cBgS_ChkElmFv,
    (void*)Regist2__11cBgS_ChkElmFP9dBgW_BaseUiPv,
};

/* 80450F68-80450F70 000468 0008+00 0/0 1/1 0/0 .sbss            None */
extern u8 data_80450F68[8];
u8 data_80450F68[8];