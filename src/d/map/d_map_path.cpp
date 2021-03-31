// 
// Generated By: dol2asm
// Translation Unit: d/map/d_map_path
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/map/d_map_path.h"

// 
// Types:
// 

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

struct ResTIMG {
};

struct dRenderingMap_c {
	/* 8003CD38 */ // False False
//  ResTIMG* False
// 	 ResTIMG False
//  u16 False
//  u16 False
//  u8* False
// 	 u8 False
//  u8* False
// 	 u8 False
//  u16 False
void makeResTIMG(ResTIMG*, u16, u16, u8*, u8*, u16) const;
	/* 8003CDAC */ // False False
void renderingMap();
};

struct dDrawPath_c {
	struct line_class {
	};

	struct poly_class {
	};

	struct group_class {
	};

	struct floor_class {
	};

	struct room_class {
	};

	/* 8002ABF0 */ // False False
//  bool False
//  int False
bool isDrawType(int);
	/* 8002AD3C */ // False False
~dDrawPath_c();
	/* 8002AD84 */ // False False
//  int False
//  int False
void getLineColor(int, int);
	/* 8003CA40 */ // False False
//  dDrawPath_c::poly_class const* False
// 	 dDrawPath_c::poly_class const False
// 		 dDrawPath_c::poly_class False
void rendering(dDrawPath_c::poly_class const*);
	/* 8003CB00 */ // True False
//  dDrawPath_c::group_class const* False
// 	 dDrawPath_c::group_class const False
// 		 dDrawPath_c::group_class False
void rendering(dDrawPath_c::group_class const*);
	/* 8003CC24 */ // False False
//  dDrawPath_c::room_class const* False
// 	 dDrawPath_c::room_class const False
// 		 dDrawPath_c::room_class False
void rendering(dDrawPath_c::room_class const*);
	/* 8003C94C */ // False False
//  dDrawPath_c::line_class const* False
// 	 dDrawPath_c::line_class const False
// 		 dDrawPath_c::line_class False
void rendering(dDrawPath_c::line_class const*);
	/* 8003CBBC */ // True False
//  dDrawPath_c::floor_class const* False
// 	 dDrawPath_c::floor_class const False
// 		 dDrawPath_c::floor_class False
void rendering(dDrawPath_c::floor_class const*);
	/* 8003CCC4 */ // False False
void drawPath();
};

struct dRenderingFDAmap_c {
	/* 8002ABF8 */ // False False
~dRenderingFDAmap_c();
	/* 8003CE78 */ // False False
void setTevSettingNonTextureDirectColor() const;
	/* 8003CF40 */ // False False
void setTevSettingIntensityTextureToCI() const;
	/* 8003D0AC */ // True False
void drawBack() const;
	/* 8003D188 */ // False False
void preRenderingMap();
	/* 8003D320 */ // False False
void postRenderingMap();
	/* 8003D3C0 */ // False False
//  dDrawPath_c::line_class const* False
// 	 dDrawPath_c::line_class const False
// 		 dDrawPath_c::line_class False
void renderingDecoration(dDrawPath_c::line_class const*);
	/* 8003D68C */ // False False
//  int False
//  int False
void getDecoLineColor(int, int);
	/* 8003D6B8 */ // False False
//  int False
void getDecorationLineWidth(int);
};

struct dMpath_n {
	struct dTexObjAggregate_c {
		/* 8003C85C */ // False False
void create();
		/* 8003C8F4 */ // False False
void remove();
		/* 8003D740 */ // True False
~dTexObjAggregate_c();
	};

};

struct dDlst_base_c {
	/* 8002ABEC */ // False False
//  void False
void draw();
};

struct _GXTlutObj {
};

struct _GXTexObj {
};

// 
// Forward References:
// 


// False False
extern "C" void create__Q28dMpath_n18dTexObjAggregate_cFv();
// False False
extern "C" void remove__Q28dMpath_n18dTexObjAggregate_cFv();
// False False
//  dDrawPath_c::line_class const* False
// 	 dDrawPath_c::line_class const False
// 		 dDrawPath_c::line_class False
extern "C" void rendering__11dDrawPath_cFPCQ211dDrawPath_c10line_class();
// False False
//  dDrawPath_c::poly_class const* False
// 	 dDrawPath_c::poly_class const False
// 		 dDrawPath_c::poly_class False
extern "C" void rendering__11dDrawPath_cFPCQ211dDrawPath_c10poly_class();
// True False
//  dDrawPath_c::group_class const* False
// 	 dDrawPath_c::group_class const False
// 		 dDrawPath_c::group_class False
extern "C" void rendering__11dDrawPath_cFPCQ211dDrawPath_c11group_class();
// True False
//  dDrawPath_c::floor_class const* False
// 	 dDrawPath_c::floor_class const False
// 		 dDrawPath_c::floor_class False
extern "C" void rendering__11dDrawPath_cFPCQ211dDrawPath_c11floor_class();
// False False
//  dDrawPath_c::room_class const* False
// 	 dDrawPath_c::room_class const False
// 		 dDrawPath_c::room_class False
extern "C" void rendering__11dDrawPath_cFPCQ211dDrawPath_c10room_class();
// False False
extern "C" void drawPath__11dDrawPath_cFv();
// False False
//  ResTIMG* False
// 	 ResTIMG False
//  u16 False
//  u16 False
//  u8* False
// 	 u8 False
//  u8* False
// 	 u8 False
//  u16 False
extern "C" void makeResTIMG__15dRenderingMap_cCFP7ResTIMGUsUsPUcPUcUs();
// False False
extern "C" void renderingMap__15dRenderingMap_cFv();
// False False
extern "C" void setTevSettingNonTextureDirectColor__18dRenderingFDAmap_cCFv();
// False False
extern "C" void setTevSettingIntensityTextureToCI__18dRenderingFDAmap_cCFv();
// True False
extern "C" void drawBack__18dRenderingFDAmap_cCFv();
// False False
extern "C" void preRenderingMap__18dRenderingFDAmap_cFv();
// False False
extern "C" void postRenderingMap__18dRenderingFDAmap_cFv();
// False False
//  dDrawPath_c::line_class const* False
// 	 dDrawPath_c::line_class const False
// 		 dDrawPath_c::line_class False
extern "C" void renderingDecoration__18dRenderingFDAmap_cFPCQ211dDrawPath_c10line_class();
// False False
//  int False
//  int False
extern "C" void getDecoLineColor__18dRenderingFDAmap_cFii();
// False False
//  int False
extern "C" void getDecorationLineWidth__18dRenderingFDAmap_cFi();
// False False
extern "C" void __sinit_d_map_path_cpp();
// True False
extern "C" void __dt__Q28dMpath_n18dTexObjAggregate_cFv();
extern "C" extern char const* const d_map_d_map_path__stringBase0;
extern "C" extern void* __vt__18dRenderingFDAmap_c[26];
extern "C" extern void* __vt__11dDrawPath_c[16];
extern "C" extern u8 m_texObjAgg__8dMpath_n[28];

// 
// External References:
// 

// False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  _GXTexObj* False
// 	 _GXTexObj False
//  u32 False
//  _GXTlutObj* False
// 	 _GXTlutObj False
void mDoLib_setResTimgObj(ResTIMG const*, _GXTexObj*, u32, _GXTlutObj*);
// False False
//  void* False
// 	 void False
//  u32 False
void* operator new(u32);
// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
//  _GXTexObj* False
// 	 _GXTexObj False
//  u32 False
//  _GXTlutObj* False
// 	 _GXTlutObj False
extern "C" void mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj();
// False False
//  void False
extern "C" void draw__12dDlst_base_cFv();
// False False
//  bool False
//  int False
extern "C" bool isDrawType__11dDrawPath_cFi();
// False False
extern "C" void __dt__18dRenderingFDAmap_cFv();
// False False
extern "C" void __dt__11dDrawPath_cFv();
// False False
//  int False
//  int False
extern "C" void getLineColor__11dDrawPath_cFii();
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
//  void* False
// 	 void False
//  u32 False
extern "C" void* __nw__FUl();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void C_MTXOrtho();
// False False
extern "C" void GXSetVtxDesc();
// False False
extern "C" void GXClearVtxDesc();
// False False
extern "C" void GXSetVtxAttrFmt();
// False False
extern "C" void GXSetArray();
// False False
extern "C" void GXSetTexCoordGen2();
// False False
extern "C" void GXSetNumTexGens();
// False False
extern "C" void GXPixModeSync();
// False False
extern "C" void GXBegin();
// False False
extern "C" void GXSetLineWidth();
// False False
extern "C" void GXSetPointSize();
// False False
extern "C" void GXSetCullMode();
// False False
extern "C" void GXSetTexCopySrc();
// False False
extern "C" void GXSetTexCopyDst();
// False False
extern "C" void GXSetCopyFilter();
// False False
extern "C" void GXCopyTex();
// False False
extern "C" void GXSetNumChans();
// False False
extern "C" void GXSetChanCtrl();
// False False
extern "C" void GXLoadTexObj();
// False False
extern "C" void GXSetNumIndStages();
// False False
extern "C" void GXSetTevColorIn();
// False False
extern "C" void GXSetTevAlphaIn();
// False False
extern "C" void GXSetTevColorOp();
// False False
extern "C" void GXSetTevAlphaOp();
// False False
extern "C" void GXSetTevColor();
// False False
extern "C" void GXSetTevKColorSel();
// False False
extern "C" void GXSetAlphaCompare();
// False False
extern "C" void GXSetTevOrder();
// False False
extern "C" void GXSetNumTevStages();
// False False
extern "C" void GXSetFog();
// False False
extern "C" void GXSetBlendMode();
// False False
extern "C" void GXSetZMode();
// False False
extern "C" void GXSetZCompLoc();
// False False
extern "C" void GXSetDither();
// False False
extern "C" void GXSetProjection();
// False False
extern "C" void GXLoadPosMtxImm();
// False False
extern "C" void GXSetCurrentMtx();
// False False
extern "C" void GXSetViewport();
// False False
extern "C" void GXSetScissor();
// False False
extern "C" void GXSetClipMode();
// False False
extern "C" void __register_global_object();
// False False
extern "C" void _savegpr_26();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_26();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
extern "C" extern u8 g_mDoMtx_identity[48 + 24 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_clearColor[4];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80379C30-80379C4C 001C+00 s=1 e=0 z=0  None .rodata    data$3644                                                    */
SECTION_RODATA static u8 const data[28] = {
	0x00, 0x00, 0x00, 0x4F, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x4D, 0x00, 0x00, 0x00, 0x4E,
	0x00, 0x00, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x52,
};

/* 80379C4C-80379C58 0007+05 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80379C4C = "Always";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80379C53 = "\0\0\0\0";
#pragma pop

/* 8003C85C-8003C8F4 0098+00 s=0 e=1 z=0  None .text      create__Q28dMpath_n18dTexObjAggregate_cFv                    */
//	8003C86C: 803621D0 (_savegpr_26)
//	8003C87C: 804061C0 (g_dComIfG_gameInfo)
//	8003C880: 804061C0 (g_dComIfG_gameInfo)
//	8003C888: 80379C4C (d_map_d_map_path__stringBase0)
//	8003C88C: 80379C4C (d_map_d_map_path__stringBase0)
//	8003C890: 80379C30 (data)
//	8003C894: 80379C30 (data)
//	8003C8A0: 802CEC4C (__nw__FUl)
//	8003C8B8: 8003C2EC (getRes__14dRes_control_cFPCclP11dRes_info_ci)
//	8003C8C8: 8001513C (mDoLib_setResTimgObj__FPC7ResTIMGP9_GXTexObjUlP10_GXTlutObj)
//	8003C8E0: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMpath_n::dTexObjAggregate_c::create() {
	nofralloc
#include "asm/d/map/d_map_path/create__Q28dMpath_n18dTexObjAggregate_cFv.s"
}
#pragma pop


/* 8003C8F4-8003C94C 0058+00 s=1 e=1 z=0  None .text      remove__Q28dMpath_n18dTexObjAggregate_cFv                    */
//	8003C904: 803621D8 (_savegpr_28)
//	8003C91C: 802CED3C (__dl__FPv)
//	8003C938: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMpath_n::dTexObjAggregate_c::remove() {
	nofralloc
#include "asm/d/map/d_map_path/remove__Q28dMpath_n18dTexObjAggregate_cFv.s"
}
#pragma pop


/* 8003C94C-8003CA40 00F4+00 s=2 e=9 z=0  None .text      rendering__11dDrawPath_cFPCQ211dDrawPath_c10line_class       */
//	8003C9B8: 8035C8BC (GXSetLineWidth)
//	8003C9EC: 8035F37C (GXSetTevColor)
//	8003C9FC: 8035C764 (GXBegin)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  dDrawPath_c::line_class const* False
// 	 dDrawPath_c::line_class const False
// 		 dDrawPath_c::line_class False
asm void dDrawPath_c::rendering(dDrawPath_c::line_class const* param_0) {
	nofralloc
#include "asm/d/map/d_map_path/rendering__11dDrawPath_cFPCQ211dDrawPath_c10line_class.s"
}
#pragma pop


/* 8003CA40-8003CB00 00C0+00 s=2 e=9 z=0  None .text      rendering__11dDrawPath_cFPCQ211dDrawPath_c10poly_class       */
//	8003CAA4: 8035F37C (GXSetTevColor)
//	8003CABC: 8035C764 (GXBegin)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  dDrawPath_c::poly_class const* False
// 	 dDrawPath_c::poly_class const False
// 		 dDrawPath_c::poly_class False
asm void dDrawPath_c::rendering(dDrawPath_c::poly_class const* param_0) {
	nofralloc
#include "asm/d/map/d_map_path/rendering__11dDrawPath_cFPCQ211dDrawPath_c10poly_class.s"
}
#pragma pop


/* 8003CB00-8003CBBC 00BC+00 s=1 e=0 z=0  None .text      rendering__11dDrawPath_cFPCQ211dDrawPath_c11group_class      */
//	8003CB10: 803621D4 (_savegpr_27)
//	8003CBA8: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dDrawPath_c::group_class const* False
// 	 dDrawPath_c::group_class const False
// 		 dDrawPath_c::group_class False
asm void dDrawPath_c::rendering(dDrawPath_c::group_class const* param_0) {
	nofralloc
#include "asm/d/map/d_map_path/rendering__11dDrawPath_cFPCQ211dDrawPath_c11group_class.s"
}
#pragma pop


/* 8003CBBC-8003CC24 0068+00 s=1 e=0 z=0  None .text      rendering__11dDrawPath_cFPCQ211dDrawPath_c11floor_class      */
//	8003CBCC: 803621D8 (_savegpr_28)
//	8003CBF8: 8003CB00 (rendering__11dDrawPath_cFPCQ211dDrawPath_c11group_class)
//	8003CC10: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  dDrawPath_c::floor_class const* False
// 	 dDrawPath_c::floor_class const False
// 		 dDrawPath_c::floor_class False
asm void dDrawPath_c::rendering(dDrawPath_c::floor_class const* param_0) {
	nofralloc
#include "asm/d/map/d_map_path/rendering__11dDrawPath_cFPCQ211dDrawPath_c11floor_class.s"
}
#pragma pop


/* 8003CC24-8003CCC4 00A0+00 s=2 e=9 z=0  None .text      rendering__11dDrawPath_cFPCQ211dDrawPath_c10room_class       */
//	8003CC34: 803621D8 (_savegpr_28)
//	8003CC50: 8035BB28 (GXSetArray)
//	8003CC94: 8003CBBC (rendering__11dDrawPath_cFPCQ211dDrawPath_c11floor_class)
//	8003CCB0: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  dDrawPath_c::room_class const* False
// 	 dDrawPath_c::room_class const False
// 		 dDrawPath_c::room_class False
asm void dDrawPath_c::rendering(dDrawPath_c::room_class const* param_0) {
	nofralloc
#include "asm/d/map/d_map_path/rendering__11dDrawPath_cFPCQ211dDrawPath_c10room_class.s"
}
#pragma pop


/* 8003CCC4-8003CD38 0074+00 s=2 e=9 z=0  None .text      drawPath__11dDrawPath_cFv                                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dDrawPath_c::drawPath() {
	nofralloc
#include "asm/d/map/d_map_path/drawPath__11dDrawPath_cFv.s"
}
#pragma pop


/* 8003CD38-8003CDAC 0074+00 s=0 e=3 z=0  None .text      makeResTIMG__15dRenderingMap_cCFP7ResTIMGUsUsPUcPUcUs        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  ResTIMG* False
// 	 ResTIMG False
//  u16 False
//  u16 False
//  u8* False
// 	 u8 False
//  u8* False
// 	 u8 False
//  u16 False
asm void dRenderingMap_c::makeResTIMG(ResTIMG* param_0, u16 param_1, u16 param_2, u8* param_3, u8* param_4, u16 param_5) const {
	nofralloc
#include "asm/d/map/d_map_path/makeResTIMG__15dRenderingMap_cCFP7ResTIMGUsUsPUcPUcUs.s"
}
#pragma pop


/* 8003CDAC-8003CE78 00CC+00 s=0 e=2 z=0  None .text      renderingMap__15dRenderingMap_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dRenderingMap_c::renderingMap() {
	nofralloc
#include "asm/d/map/d_map_path/renderingMap__15dRenderingMap_cFv.s"
}
#pragma pop


/* 8003CE78-8003CF40 00C8+00 s=2 e=3 z=0  None .text      setTevSettingNonTextureDirectColor__18dRenderingFDAmap_cCFv  */
//	8003CE88: 8035F890 (GXSetNumTevStages)
//	8003CE90: 8035DB30 (GXSetNumChans)
//	8003CE98: 8035BDFC (GXSetNumTexGens)
//	8003CEAC: 8035F6F4 (GXSetTevOrder)
//	8003CEC4: 8035F224 (GXSetTevColorIn)
//	8003CEE0: 8035F2AC (GXSetTevColorOp)
//	8003CEF8: 8035F268 (GXSetTevAlphaIn)
//	8003CF14: 8035F314 (GXSetTevAlphaOp)
//	8003CF2C: 8035F624 (GXSetAlphaCompare)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dRenderingFDAmap_c::setTevSettingNonTextureDirectColor() const {
	nofralloc
#include "asm/d/map/d_map_path/setTevSettingNonTextureDirectColor__18dRenderingFDAmap_cCFv.s"
}
#pragma pop


/* 8003CF40-8003D0AC 016C+00 s=1 e=3 z=0  None .text      setTevSettingIntensityTextureToCI__18dRenderingFDAmap_cCFv   */
//	8003CF50: 8035F890 (GXSetNumTevStages)
//	8003CF58: 8035DB30 (GXSetNumChans)
//	8003CF60: 8035BDFC (GXSetNumTexGens)
//	8003CF7C: 8035BB7C (GXSetTexCoordGen2)
//	8003CF90: 8035F6F4 (GXSetTevOrder)
//	8003CFA4: 8035F6F4 (GXSetTevOrder)
//	8003CFBC: 8035F224 (GXSetTevColorIn)
//	8003CFD8: 8035F2AC (GXSetTevColorOp)
//	8003CFF0: 8035F224 (GXSetTevColorIn)
//	8003D00C: 8035F2AC (GXSetTevColorOp)
//	8003D024: 8035F268 (GXSetTevAlphaIn)
//	8003D040: 8035F314 (GXSetTevAlphaOp)
//	8003D058: 8035F268 (GXSetTevAlphaIn)
//	8003D074: 8035F314 (GXSetTevAlphaOp)
//	8003D08C: 8035F624 (GXSetAlphaCompare)
//	8003D098: 8035F4A4 (GXSetTevKColorSel)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dRenderingFDAmap_c::setTevSettingIntensityTextureToCI() const {
	nofralloc
#include "asm/d/map/d_map_path/setTevSettingIntensityTextureToCI__18dRenderingFDAmap_cCFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451E08-80451E0C 0004+00 s=3 e=0 z=0  None .sdata2    @3836                                                        */
SECTION_SDATA2 static u8 lit_3836[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 8003D0AC-8003D188 00DC+00 s=1 e=0 z=0  None .text      drawBack__18dRenderingFDAmap_cCFv                            */
//	8003D0C0: 8035B58C (GXClearVtxDesc)
//	8003D0CC: 8035AEB8 (GXSetVtxDesc)
//	8003D0E4: 8035B5C4 (GXSetVtxAttrFmt)
//	8003D10C: 8035F37C (GXSetTevColor)
//	8003D11C: 8035C764 (GXBegin)
//	8003D13C: 80451E08 (lit_3836)
//	8003D14C: 80451E08 (lit_3836)
//	8003D15C: 80451E08 (lit_3836)
//	8003D16C: 80451E08 (lit_3836)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dRenderingFDAmap_c::drawBack() const {
	nofralloc
#include "asm/d/map/d_map_path/drawBack__18dRenderingFDAmap_cCFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451E0C-80451E10 0004+00 s=1 e=0 z=0  None .sdata2    @3846                                                        */
SECTION_SDATA2 static f32 lit_3846 = 1.0f;

/* 80451E10-80451E14 0004+00 s=1 e=0 z=0  None .sdata2    @3847                                                        */
SECTION_SDATA2 static f32 lit_3847 = 0.5f;

/* 80451E14-80451E18 0004+00 s=1 e=0 z=0  None .sdata2    @3848                                                        */
SECTION_SDATA2 static f32 lit_3848 = 10000.0f;

/* 80451E18-80451E20 0008+00 s=1 e=0 z=0  None .sdata2    @3850                                                        */
SECTION_SDATA2 static f64 lit_3850 = 4503599627370496.0 /* cast u32 to float */;

/* 8003D188-8003D320 0198+00 s=1 e=8 z=0  None .text      preRenderingMap__18dRenderingFDAmap_cFv                      */
//	8003D19C: 80451E08 (lit_3836)
//	8003D1A8: 80451E18 (lit_3850)
//	8003D1D8: 80451E0C (lit_3846)
//	8003D1DC: 80360464 (GXSetViewport)
//	8003D1F0: 803604D0 (GXSetScissor)
//	8003D1F8: 8035DB30 (GXSetNumChans)
//	8003D200: 8035F890 (GXSetNumTevStages)
//	8003D220: 8035DB6C (GXSetChanCtrl)
//	8003D238: 8035F624 (GXSetAlphaCompare)
//	8003D240: 8035FCD0 (GXSetZCompLoc)
//	8003D250: 8035FC9C (GXSetZMode)
//	8003D264: 8035FBF0 (GXSetBlendMode)
//	8003D268: 80450600 (g_clearColor)
//	8003D274: 80451E08 (lit_3836)
//	8003D288: 8035F8B8 (GXSetFog)
//	8003D290: 8035C984 (GXSetCullMode)
//	8003D298: 8035FDD8 (GXSetDither)
//	8003D2A0: 8035F0D4 (GXSetNumIndStages)
//	8003D2A8: 803605D0 (GXSetClipMode)
//	8003D2B0: 8003CE78 (setTevSettingNonTextureDirectColor__18dRenderingFDAmap_cCFv)
//	8003D2B4: 80451E10 (lit_3847)
//	8003D2D4: 80451E08 (lit_3836)
//	8003D2D8: 80451E14 (lit_3848)
//	8003D2DC: 80346FF8 (C_MTXOrtho)
//	8003D2E8: 803600D4 (GXSetProjection)
//	8003D2EC: 803A2FD8 (g_mDoMtx_identity)
//	8003D2F0: 803A2FD8 (g_mDoMtx_identity)
//	8003D2F8: 8036024C (GXLoadPosMtxImm)
//	8003D300: 803602EC (GXSetCurrentMtx)
//	8003D308: 8003D0AC (drawBack__18dRenderingFDAmap_cCFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dRenderingFDAmap_c::preRenderingMap() {
	nofralloc
#include "asm/d/map/d_map_path/preRenderingMap__18dRenderingFDAmap_cFv.s"
}
#pragma pop


/* 8003D320-8003D3C0 00A0+00 s=1 e=7 z=0  None .text      postRenderingMap__18dRenderingFDAmap_cFv                     */
//	8003D344: 8035D0E8 (GXSetCopyFilter)
//	8003D358: 8035CA80 (GXSetTexCopySrc)
//	8003D36C: 8035CB30 (GXSetTexCopyDst)
//	8003D378: 8035D46C (GXCopyTex)
//	8003D37C: 8035C374 (GXPixModeSync)
//	8003D384: 803605D0 (GXSetClipMode)
//	8003D38C: 8035FDD8 (GXSetDither)
//	8003D390: 804061C0 (g_dComIfG_gameInfo)
//	8003D394: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dRenderingFDAmap_c::postRenderingMap() {
	nofralloc
#include "asm/d/map/d_map_path/postRenderingMap__18dRenderingFDAmap_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80424678-80424684 000C+00 s=1 e=0 z=0  None .bss       @3639                                                        */
static u8 lit_3639[12];

/* 80424684-804246A0 001C+00 s=2 e=5 z=0  None .bss       m_texObjAgg__8dMpath_n                                       */
u8 m_texObjAgg__8dMpath_n[28];

/* 8003D3C0-8003D68C 02CC+00 s=0 e=2 z=0  None .text      renderingDecoration__18dRenderingFDAmap_cFPCQ211dDrawPath_c10line_class */
//	8003D3D0: 803621D0 (_savegpr_26)
//	8003D3FC: 8003CF40 (setTevSettingIntensityTextureToCI__18dRenderingFDAmap_cCFv)
//	8003D400: 8035B58C (GXClearVtxDesc)
//	8003D40C: 8035AEB8 (GXSetVtxDesc)
//	8003D418: 8035AEB8 (GXSetVtxDesc)
//	8003D430: 8035B5C4 (GXSetVtxAttrFmt)
//	8003D448: 8035B5C4 (GXSetVtxAttrFmt)
//	8003D450: 8035F890 (GXSetNumTevStages)
//	8003D454: 80424684 (m_texObjAgg__8dMpath_n)
//	8003D458: 80424684 (m_texObjAgg__8dMpath_n)
//	8003D464: 8035E414 (GXLoadTexObj)
//	8003D478: 8035C8BC (GXSetLineWidth)
//	8003D484: 8035C8FC (GXSetPointSize)
//	8003D4BC: 8035F37C (GXSetTevColor)
//	8003D4DC: 8035F37C (GXSetTevColor)
//	8003D50C: 8035F224 (GXSetTevColorIn)
//	8003D528: 8035F2AC (GXSetTevColorOp)
//	8003D540: 8035F268 (GXSetTevAlphaIn)
//	8003D55C: 8035F314 (GXSetTevAlphaOp)
//	8003D56C: 8035C764 (GXBegin)
//	8003D57C: 80451E08 (lit_3836)
//	8003D584: 80451E08 (lit_3836)
//	8003D594: 80451E08 (lit_3836)
//	8003D59C: 80451E08 (lit_3836)
//	8003D5B8: 8035F224 (GXSetTevColorIn)
//	8003D5D4: 8035F2AC (GXSetTevColorOp)
//	8003D5EC: 8035F268 (GXSetTevAlphaIn)
//	8003D608: 8035F314 (GXSetTevAlphaOp)
//	8003D618: 8035C764 (GXBegin)
//	8003D624: 80451E08 (lit_3836)
//	8003D62C: 80451E08 (lit_3836)
//	8003D648: 8003CE78 (setTevSettingNonTextureDirectColor__18dRenderingFDAmap_cCFv)
//	8003D64C: 8035B58C (GXClearVtxDesc)
//	8003D658: 8035AEB8 (GXSetVtxDesc)
//	8003D670: 8035B5C4 (GXSetVtxAttrFmt)
//	8003D678: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  dDrawPath_c::line_class const* False
// 	 dDrawPath_c::line_class const False
// 		 dDrawPath_c::line_class False
asm void dRenderingFDAmap_c::renderingDecoration(dDrawPath_c::line_class const* param_0) {
	nofralloc
#include "asm/d/map/d_map_path/renderingDecoration__18dRenderingFDAmap_cFPCQ211dDrawPath_c10line_class.s"
}
#pragma pop


/* 8003D68C-8003D6B8 002C+00 s=1 e=6 z=0  None .text      getDecoLineColor__18dRenderingFDAmap_cFii                    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  int False
//  int False
asm void dRenderingFDAmap_c::getDecoLineColor(int param_0, int param_1) {
	nofralloc
#include "asm/d/map/d_map_path/getDecoLineColor__18dRenderingFDAmap_cFii.s"
}
#pragma pop


/* 8003D6B8-8003D6E4 002C+00 s=1 e=6 z=0  None .text      getDecorationLineWidth__18dRenderingFDAmap_cFi               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  int False
asm void dRenderingFDAmap_c::getDecorationLineWidth(int param_0) {
	nofralloc
#include "asm/d/map/d_map_path/getDecorationLineWidth__18dRenderingFDAmap_cFi.s"
}
#pragma pop


/* 8003D6E4-8003D740 005C+00 s=0 e=0 z=0  None .text      __sinit_d_map_path_cpp                                       */
//	8003D6F8: 80424684 (m_texObjAgg__8dMpath_n)
//	8003D6FC: 80424684 (m_texObjAgg__8dMpath_n)
//	8003D714: 80424684 (m_texObjAgg__8dMpath_n)
//	8003D718: 80424684 (m_texObjAgg__8dMpath_n)
//	8003D71C: 8003D740 (__dt__Q28dMpath_n18dTexObjAggregate_cFv)
//	8003D720: 8003D740 (__dt__Q28dMpath_n18dTexObjAggregate_cFv)
//	8003D724: 80424678 (lit_3639)
//	8003D728: 80424678 (lit_3639)
//	8003D72C: 80361C24 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_map_path_cpp() {
	nofralloc
#include "asm/d/map/d_map_path/__sinit_d_map_path_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_8003D6E4 = (void*)__sinit_d_map_path_cpp;
#pragma pop


/* 8003D740-8003D790 0050+00 s=1 e=0 z=0  None .text      __dt__Q28dMpath_n18dTexObjAggregate_cFv                      */
//	8003D760: 8003C8F4 (remove__Q28dMpath_n18dTexObjAggregate_cFv)
//	8003D770: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dMpath_n::dTexObjAggregate_c::~dTexObjAggregate_c() {
	nofralloc
#include "asm/d/map/d_map_path/__dt__Q28dMpath_n18dTexObjAggregate_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A7C90-803A7CF8 0068+00 s=0 e=12 z=0  None .data      __vt__18dRenderingFDAmap_c                                   */
SECTION_DATA void* __vt__18dRenderingFDAmap_c[26] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)draw__12dDlst_base_cFv,
	(void*)__dt__18dRenderingFDAmap_cFv,
	(void*)isDrawType__11dDrawPath_cFi,
	(void*)NULL,
	(void*)getLineColor__11dDrawPath_cFii,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)drawPath__11dDrawPath_cFv,
	(void*)rendering__11dDrawPath_cFPCQ211dDrawPath_c10line_class,
	(void*)rendering__11dDrawPath_cFPCQ211dDrawPath_c10poly_class,
	(void*)rendering__11dDrawPath_cFPCQ211dDrawPath_c10room_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)preRenderingMap__18dRenderingFDAmap_cFv,
	(void*)postRenderingMap__18dRenderingFDAmap_cFv,
	(void*)NULL,
	(void*)getDecoLineColor__18dRenderingFDAmap_cFii,
	(void*)getDecorationLineWidth__18dRenderingFDAmap_cFi,
};

/* 803A7CF8-803A7D38 0040+00 s=0 e=15 z=0  None .data      __vt__11dDrawPath_c                                          */
SECTION_DATA void* __vt__11dDrawPath_c[16] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)draw__12dDlst_base_cFv,
	(void*)__dt__11dDrawPath_cFv,
	(void*)isDrawType__11dDrawPath_cFi,
	(void*)NULL,
	(void*)getLineColor__11dDrawPath_cFii,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)drawPath__11dDrawPath_cFv,
	(void*)rendering__11dDrawPath_cFPCQ211dDrawPath_c10line_class,
	(void*)rendering__11dDrawPath_cFPCQ211dDrawPath_c10poly_class,
	(void*)rendering__11dDrawPath_cFPCQ211dDrawPath_c10room_class,
};

