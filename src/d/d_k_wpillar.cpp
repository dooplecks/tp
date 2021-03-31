// 
// Generated By: dol2asm
// Translation Unit: d/d_k_wpillar
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/d_k_wpillar.h"

// 
// Types:
// 

struct J3DAnmTextureSRTKey {
};

struct J3DMaterialTable {
};

struct mDoExt_btkAnm {
	/* 8000D63C */ // False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
	/* 8000D6D8 */ // False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  f32 False
void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTevRegKey {
};

struct mDoExt_brkAnm {
	/* 8000D70C */ // False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
void init(J3DMaterialTable*, J3DAnmTevRegKey*, int, int, f32, s16, s16);
	/* 8000D7A8 */ // False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  f32 False
void entry(J3DMaterialTable*, f32);
};

struct J3DAnmTransform {
};

struct J3DModelData {
};

struct mDoExt_bckAnm {
	/* 8000D7DC */ // False False
//  J3DAnmTransform* False
// 	 J3DAnmTransform False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
//  bool False
void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
	/* 8000D9CC */ // False False
//  J3DModelData* False
// 	 J3DModelData False
//  f32 False
void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
	/* 8000D428 */ // False False
void play();
};

struct kankyo_class {
};

struct cXyz {
};

struct fopAcM_gc_c {
	/* 8001DCBC */ // False False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
void gndCheck(cXyz const*);
};

struct dkWpillar_c {
	/* 80261B54 */ // True False
void create();
	/* 80261F24 */ // True False
~dkWpillar_c();
	/* 80262014 */ // True False
void execute();
	/* 802620C8 */ // True False
void draw();
};

struct dKy_tevstr_c {
};

struct dScnKy_env_light_c {
	/* 801A37C4 */ // False False
//  int False
//  cXyz* False
// 	 cXyz False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
	/* 801A4DA0 */ // False False
//  J3DModelData* False
// 	 J3DModelData False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {
};

struct dRes_control_c {
	/* 8003C2EC */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  s32 False
//  dRes_info_c* False
// 	 dRes_info_c False
//  int False
void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {
};

struct csXyz {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004CA90 */ // False False
//  u8 False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u8 False
//  dPa_levelEcallBack* False
// 	 dPa_levelEcallBack False
//  s8 False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
};

struct cBgS_PolyInfo {
};

struct dBgS {
	/* 80074BE8 */ // False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
void GetPolyColor(cBgS_PolyInfo const&);
	/* 80075100 */ // False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
void GetRoomId(cBgS_PolyInfo const&);
};

struct JKRSolidHeap {
};

struct J3DModel {
};

struct J3DLightObj {
	/* 80018C0C */ // False False
J3DLightObj();
};

struct J3DLightInfo {
	/* 803256C4 */ // False False
//  J3DLightInfo const& False
// 	 J3DLightInfo const False
// 		 J3DLightInfo False
void operator=(J3DLightInfo const&);
};

struct J3DFrameCtrl {
	/* 803283FC */ // False False
//  s16 False
void init(s16);
};

// 
// Forward References:
// 

// True False
//  kankyo_class* False
// 	 kankyo_class False
static void dkWpillar_Create(kankyo_class*);
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
static void dkWpillar_Delete(dkWpillar_c*);
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
static void dkWpillar_Execute(dkWpillar_c*);
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
static void dkWpillar_Draw(dkWpillar_c*);

// True False
extern "C" void create__11dkWpillar_cFv();
// True False
//  kankyo_class* False
// 	 kankyo_class False
extern "C" static void dkWpillar_Create__FP12kankyo_class();
// True False
extern "C" void __dt__11dkWpillar_cFv();
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
extern "C" static void dkWpillar_Delete__FP11dkWpillar_c();
// True False
extern "C" void execute__11dkWpillar_cFv();
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
extern "C" static void dkWpillar_Execute__FP11dkWpillar_c();
// True False
extern "C" void draw__11dkWpillar_cFv();
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
extern "C" static void dkWpillar_Draw__FP11dkWpillar_c();
extern "C" extern void* g_profile_WPILLAR[10 + 1 /* padding */];

// 
// External References:
// 

// False False
//  J3DModel* False
// 	 J3DModel False
void mDoExt_modelUpdateDL(J3DModel*);
// False False
//  u32 False
//  u32 False
void mDoExt_createSolidHeapFromGameToCurrent(u32, u32);
// False False
//  JKRSolidHeap* False
// 	 JKRSolidHeap False
void mDoExt_adjustSolidHeap(JKRSolidHeap*);
// False False
//  JKRSolidHeap* False
// 	 JKRSolidHeap False
void mDoExt_destroySolidHeap(JKRSolidHeap*);
// False False
void mDoExt_restoreCurrentHeap();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  u32 False
//  u32 False
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
// False False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32* False
// 	 f32 False
void fopAcM_getWaterY(cXyz const*, f32*);
// False False
//  void* False
// 	 void False
void fopKyM_Delete(void*);
// False False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
//  s8 False
//  u8 False
void dKy_tevstr_init(dKy_tevstr_c*, s8, u8);
// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
extern "C" void play__14mDoExt_baseAnmFv();
// False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  J3DAnmTextureSRTKey* False
// 	 J3DAnmTextureSRTKey False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
// False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  f32 False
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
// False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  J3DAnmTevRegKey* False
// 	 J3DAnmTevRegKey False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
// False False
//  J3DMaterialTable* False
// 	 J3DMaterialTable False
//  f32 False
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
// False False
//  J3DAnmTransform* False
// 	 J3DAnmTransform False
//  int False
//  int False
//  f32 False
//  s16 False
//  s16 False
//  bool False
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  f32 False
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
// False False
//  J3DModel* False
// 	 J3DModel False
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
// False False
//  u32 False
//  u32 False
extern "C" void mDoExt_createSolidHeapFromGameToCurrent__FUlUl();
// False False
//  JKRSolidHeap* False
// 	 JKRSolidHeap False
extern "C" void mDoExt_adjustSolidHeap__FP12JKRSolidHeap();
// False False
//  JKRSolidHeap* False
// 	 JKRSolidHeap False
extern "C" void mDoExt_destroySolidHeap__FP12JKRSolidHeap();
// False False
extern "C" void mDoExt_restoreCurrentHeap__Fv();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  u32 False
//  u32 False
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
// False False
extern "C" void __ct__11J3DLightObjFv();
// False False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32* False
// 	 f32 False
extern "C" void fopAcM_getWaterY__FPC4cXyzPf();
// False False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
// False False
//  void* False
// 	 void False
extern "C" void fopKyM_Delete__FPv();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  s32 False
//  dRes_info_c* False
// 	 dRes_info_c False
//  int False
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
// False False
//  u8 False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u8 False
//  dPa_levelEcallBack* False
// 	 dPa_levelEcallBack False
//  s8 False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
extern "C" void set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
// False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
// False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
// False False
//  int False
//  cXyz* False
// 	 cXyz False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
// False False
//  J3DModelData* False
// 	 J3DModelData False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
// False False
//  dKy_tevstr_c* False
// 	 dKy_tevstr_c False
//  s8 False
//  u8 False
extern "C" void dKy_tevstr_init__FP12dKy_tevstr_cScUc();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
//  J3DLightInfo const& False
// 	 J3DLightInfo const False
// 		 J3DLightInfo False
extern "C" void __as__12J3DLightInfoFRC12J3DLightInfo();
// False False
//  s16 False
extern "C" void init__12J3DFrameCtrlFs();
// False False
extern "C" void PSMTXCopy();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void __construct_array();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_28();
extern "C" extern u8 const j3dDefaultLightInfo[52];
extern "C" extern void* __vt__12J3DFrameCtrl[3];
extern "C" extern void* g_fopKy_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 mGndCheck__11fopAcM_gc_c[84];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 struct_80450D64[4];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80454FF0-80454FF8 0007+01 s=1 e=0 z=0  None .sdata2    l_arcName                                                    */
SECTION_SDATA2 static u8 l_arcName[7 + 1 /* padding */] = {
	0x41, 0x6C, 0x77, 0x61, 0x79, 0x73, 0x00,
	/* padding */
	0x00,
};

/* 80454FF8-80454FFC 0004+00 s=1 e=0 z=0  None .sdata2    @3838                                                        */
SECTION_SDATA2 static f32 lit_3838 = 1.0f;

/* 80454FFC-80455000 0004+00 s=1 e=0 z=0  None .sdata2    @3839                                                        */
SECTION_SDATA2 static f32 lit_3839 = 0.5f;

/* 80455000-80455004 0004+00 s=1 e=0 z=0  None .sdata2    @3840                                                        */
SECTION_SDATA2 static f32 lit_3840 = 0.25f;

/* 80261B54-80261F04 03B0+00 s=1 e=0 z=0  None .text      create__11dkWpillar_cFv                                      */
//	80261B64: 803621D8 (_savegpr_28)
//	80261B7C: 803A3354 (__vt__12J3DFrameCtrl)
//	80261B80: 803A3354 (__vt__12J3DFrameCtrl)
//	80261B90: 803283FC (init__12J3DFrameCtrlFs)
//	80261BA0: 803A3354 (__vt__12J3DFrameCtrl)
//	80261BA4: 803A3354 (__vt__12J3DFrameCtrl)
//	80261BB4: 803283FC (init__12J3DFrameCtrlFs)
//	80261BC4: 803A3354 (__vt__12J3DFrameCtrl)
//	80261BC8: 803A3354 (__vt__12J3DFrameCtrl)
//	80261BD8: 803283FC (init__12J3DFrameCtrlFs)
//	80261BEC: 803A1EC8 (j3dDefaultLightInfo)
//	80261BF0: 803A1EC8 (j3dDefaultLightInfo)
//	80261BF4: 803256C4 (__as__12J3DLightInfoFRC12J3DLightInfo)
//	80261BFC: 80018C0C (__ct__11J3DLightObjFv)
//	80261C00: 80018C0C (__ct__11J3DLightObjFv)
//	80261C10: 80361D60 (__construct_array)
//	80261C18: 8001DCBC (gndCheck__11fopAcM_gc_cFPC4cXyz)
//	80261C24: 804061C0 (g_dComIfG_gameInfo)
//	80261C28: 804061C0 (g_dComIfG_gameInfo)
//	80261C34: 803F1CC4 (mGndCheck__11fopAcM_gc_c)
//	80261C38: 803F1CC4 (mGndCheck__11fopAcM_gc_c)
//	80261C44: 80075100 (GetRoomId__4dBgSFRC13cBgS_PolyInfo)
//	80261C54: 80074BE8 (GetPolyColor__4dBgSFRC13cBgS_PolyInfo)
//	80261C60: 80450D64 (struct_80450D64)
//	80261C74: 801A88EC (dKy_tevstr_init__FP12dKy_tevstr_cScUc)
//	80261C78: 8042CA54 (g_env_light)
//	80261C7C: 8042CA54 (g_env_light)
//	80261C8C: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	80261C90: 804061C0 (g_dComIfG_gameInfo)
//	80261C94: 804061C0 (g_dComIfG_gameInfo)
//	80261CD4: 80454FF8 (lit_3838)
//	80261CD8: 8004CA90 (set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80261D24: 80454FF8 (lit_3838)
//	80261D28: 8004CA90 (set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80261D48: 8000F044 (mDoExt_createSolidHeapFromGameToCurrent__FUlUl)
//	80261D5C: 80454FF0 (l_arcName)
//	80261D64: 804061C0 (g_dComIfG_gameInfo)
//	80261D68: 804061C0 (g_dComIfG_gameInfo)
//	80261D7C: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80261D90: 80014C54 (mDoExt_J3DModel__create__FP12J3DModelDataUlUl)
//	80261D98: 80454FF0 (l_arcName)
//	80261DA8: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80261DBC: 80454FF8 (lit_3838)
//	80261DCC: 8000D7DC (init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb)
//	80261DD4: 80454FF0 (l_arcName)
//	80261DE4: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80261DFC: 80454FF8 (lit_3838)
//	80261E08: 8000D63C (init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss)
//	80261E10: 80454FF0 (l_arcName)
//	80261E20: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	80261E38: 80454FF8 (lit_3838)
//	80261E44: 8000D70C (init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss)
//	80261E4C: 8000F1F4 (mDoExt_restoreCurrentHeap__Fv)
//	80261E54: 8000F08C (mDoExt_adjustSolidHeap__FP12JKRSolidHeap)
//	80261E8C: 80454FFC (lit_3839)
//	80261E94: 80455000 (lit_3840)
//	80261EBC: 803DD470 (now__14mDoMtx_stack_c)
//	80261EC0: 803DD470 (now__14mDoMtx_stack_c)
//	80261ED0: 803468E8 (PSMTXTrans)
//	80261ED4: 803DD470 (now__14mDoMtx_stack_c)
//	80261ED8: 803DD470 (now__14mDoMtx_stack_c)
//	80261EE4: 803464B0 (PSMTXCopy)
//	80261EF0: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dkWpillar_c::create() {
	nofralloc
#include "asm/d/d_k_wpillar/create__11dkWpillar_cFv.s"
}
#pragma pop


/* 80261F04-80261F24 0020+00 s=1 e=0 z=0  None .text      dkWpillar_Create__FP12kankyo_class                           */
//	80261F10: 80261B54 (create__11dkWpillar_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  kankyo_class* False
// 	 kankyo_class False
asm static void dkWpillar_Create(kankyo_class* param_0) {
	nofralloc
#include "asm/d/d_k_wpillar/dkWpillar_Create__FP12kankyo_class.s"
}
#pragma pop


/* 80261F24-80261FEC 00C8+00 s=1 e=0 z=0  None .text      __dt__11dkWpillar_cFv                                        */
//	80261F50: 8000F18C (mDoExt_destroySolidHeap__FP12JKRSolidHeap)
//	80261F6C: 803A3354 (__vt__12J3DFrameCtrl)
//	80261F70: 803A3354 (__vt__12J3DFrameCtrl)
//	80261F90: 803A3354 (__vt__12J3DFrameCtrl)
//	80261F94: 803A3354 (__vt__12J3DFrameCtrl)
//	80261FB4: 803A3354 (__vt__12J3DFrameCtrl)
//	80261FB8: 803A3354 (__vt__12J3DFrameCtrl)
//	80261FCC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dkWpillar_c::~dkWpillar_c() {
	nofralloc
#include "asm/d/d_k_wpillar/__dt__11dkWpillar_cFv.s"
}
#pragma pop


/* 80261FEC-80262014 0028+00 s=1 e=0 z=0  None .text      dkWpillar_Delete__FP11dkWpillar_c                            */
//	80261FFC: 80261F24 (__dt__11dkWpillar_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
asm static void dkWpillar_Delete(dkWpillar_c* param_0) {
	nofralloc
#include "asm/d/d_k_wpillar/dkWpillar_Delete__FP11dkWpillar_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80455004-80455008 0004+00 s=1 e=0 z=0  None .sdata2    @3946                                                        */
SECTION_SDATA2 static u8 lit_3946[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80262014-802620A8 0094+00 s=1 e=0 z=0  None .text      execute__11dkWpillar_cFv                                     */
//	8026202C: 8000D428 (play__14mDoExt_baseAnmFv)
//	80262040: 80455004 (lit_3946)
//	80262060: 8001F748 (fopKyM_Delete__FPv)
//	80262070: 8001D890 (fopAcM_getWaterY__FPC4cXyzPf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dkWpillar_c::execute() {
	nofralloc
#include "asm/d/d_k_wpillar/execute__11dkWpillar_cFv.s"
}
#pragma pop


/* 802620A8-802620C8 0020+00 s=1 e=0 z=0  None .text      dkWpillar_Execute__FP11dkWpillar_c                           */
//	802620B4: 80262014 (execute__11dkWpillar_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
asm static void dkWpillar_Execute(dkWpillar_c* param_0) {
	nofralloc
#include "asm/d/d_k_wpillar/dkWpillar_Execute__FP11dkWpillar_c.s"
}
#pragma pop


/* 802620C8-802621AC 00E4+00 s=1 e=0 z=0  None .text      draw__11dkWpillar_cFv                                        */
//	802620E0: 8042CA54 (g_env_light)
//	802620E4: 8042CA54 (g_env_light)
//	802620F4: 801A37C4 (settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c)
//	802620F8: 8042CA54 (g_env_light)
//	802620FC: 8042CA54 (g_env_light)
//	8026210C: 801A4DA0 (setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c)
//	80262110: 804061C0 (g_dComIfG_gameInfo)
//	80262114: 804061C0 (g_dComIfG_gameInfo)
//	8026211C: 80434AC8 (j3dSys)
//	80262120: 80434AC8 (j3dSys)
//	8026213C: 8000D9CC (entry__13mDoExt_bckAnmFP12J3DModelDataf)
//	80262154: 8000D6D8 (entry__13mDoExt_btkAnmFP16J3DMaterialTablef)
//	8026216C: 8000D7A8 (entry__13mDoExt_brkAnmFP16J3DMaterialTablef)
//	80262174: 8000DCC4 (mDoExt_modelUpdateDL__FP8J3DModel)
//	80262178: 804061C0 (g_dComIfG_gameInfo)
//	8026217C: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dkWpillar_c::draw() {
	nofralloc
#include "asm/d/d_k_wpillar/draw__11dkWpillar_cFv.s"
}
#pragma pop


/* 802621AC-802621CC 0020+00 s=1 e=0 z=0  None .text      dkWpillar_Draw__FP11dkWpillar_c                              */
//	802621B8: 802620C8 (draw__11dkWpillar_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dkWpillar_c* False
// 	 dkWpillar_c False
asm static void dkWpillar_Draw(dkWpillar_c* param_0) {
	nofralloc
#include "asm/d/d_k_wpillar/dkWpillar_Draw__FP11dkWpillar_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 803C3470-803C3484 0014+00 s=1 e=0 z=0  None .data      l_dkWpillar_Method                                           */
SECTION_DATA static void* l_dkWpillar_Method[5] = {
	(void*)dkWpillar_Create__FP12kankyo_class,
	(void*)dkWpillar_Delete__FP11dkWpillar_c,
	(void*)dkWpillar_Execute__FP11dkWpillar_c,
	(void*)NULL,
	(void*)dkWpillar_Draw__FP11dkWpillar_c,
};

/* 803C3484-803C34B0 0028+04 s=0 e=0 z=1  None .data      g_profile_WPILLAR                                            */
SECTION_DATA void* g_profile_WPILLAR[10 + 1 /* padding */] = {
	(void*)0xFFFFFFFD,
	(void*)0x0009FFFD,
	(void*)0x03020000,
	(void*)&g_fpcLf_Method,
	(void*)0x000004D4,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopKy_Method,
	(void*)0x02F70000,
	(void*)&l_dkWpillar_Method,
	/* padding */
	NULL,
};

