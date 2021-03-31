// 
// Generated By: dol2asm
// Translation Unit: d/meter/d_meter_map
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/meter/d_meter_map.h"

// 
// Types:
// 

struct dSv_memBit_c {
	/* 80034934 */ // False False
//  int False
void isDungeonItem(int) const;
};

struct dSv_event_c {
	/* 8003498C */ // False False
//  u16 False
void onEventBit(u16);
	/* 800349BC */ // False False
//  u16 False
void isEventBit(u16) const;
};

struct dStage_roomControl_c {
	/* 80024384 */ // False False
//  int False
void getStatusRoomDt(int);
};

struct dMsgObject_c {
	/* 8023822C */ // False False
void getStatus();
};

struct dMpath_c {
	/* 8003F758 */ // False False
void isExistMapPathData();
};

struct J2DScreen {
};

struct dMeterMap_c {
	/* 8020D49C */ // True False
void isEnableDispMap();
	/* 8020D528 */ // True False
void getMapDispSizeTypeNo();
	/* 8020D650 */ // False False
void isEnableDispMapAndMapDispSizeTypeNo();
	/* 8020D690 */ // True False
void getMapDispEdgeBottomY_Layout();
	/* 8020D698 */ // True False
void isEventRunCheck();
	/* 8020D72C */ // True False
void getMapDispEdgeLeftX_Layout();
	/* 8020D75C */ // False False
void getMapDispEdgeTop();
	/* 8020D7E4 */ // True False
//  bool False
bool getDispPosInside_OffsetX();
	/* 8020D7EC */ // True False
void getDispPosOutSide_OffsetX();
	/* 8020D874 */ // False False
void setDispPosInsideFlg_SE_On();
	/* 8020D8BC */ // False False
void setDispPosOutsideFlg_SE_On();
	/* 8020D8F8 */ // False False
//  u8 False
void setMapAlpha(u8);
	/* 8020D900 */ // False False
void isMapOpenCheck();
	/* 8020D948 */ // False False
//  J2DScreen* False
// 	 J2DScreen False
dMeterMap_c(J2DScreen*);
	/* 8020D990 */ // True False
~dMeterMap_c();
	/* 8020D9EC */ // True False
//  J2DScreen* False
// 	 J2DScreen False
void _create(J2DScreen*);
	/* 8020DC50 */ // True False
void _delete();
	/* 8020DCE4 */ // False False
//  u32 False
void _move(u32);
	/* 8020DF1C */ // False False
void _draw();
	/* 8020DF68 */ // True False
void draw();
	/* 8020E070 */ // True False
void ctrlShowMap();
	/* 8020E45C */ // True False
void checkMoveStatus();
	/* 8020E4C8 */ // True False
//  u32 False
void isShow(u32);
	/* 8020E620 */ // True False
void isFmapScreen();
	/* 8020E70C */ // True False
void isDmapScreen();
	/* 8020E754 */ // False False
//  u32 False
void meter_map_move(u32);
	/* 8020E9CC */ // True False
void keyCheck();
};

struct dMap_c {
	/* 80029874 */ // False False
//  int False
//  int False
//  int False
//  int False
dMap_c(int, int, int, int);
	/* 8002A32C */ // False False
//  f32 False
//  f32 False
//  int False
//  f32 False
void _move(f32, f32, int, f32);
	/* 8002AB54 */ // False False
void _draw();
};

struct dMapInfo_n {
	/* 8003EE5C */ // False False
void getMapPlayerPos();
};

struct dDlst_base_c {
};

struct dDlst_list_c {
	/* 80056794 */ // False False
//  dDlst_base_c**& False
// 	 dDlst_base_c** False
// 		 dDlst_base_c* False
// 			 dDlst_base_c False
//  dDlst_base_c**& False
// 	 dDlst_base_c** False
// 		 dDlst_base_c* False
// 			 dDlst_base_c False
//  dDlst_base_c* False
// 	 dDlst_base_c False
void set(dDlst_base_c**&, dDlst_base_c**&, dDlst_base_c*);
};

struct Vec {
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AB984 */ // False False
//  JAISoundID False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  u32 False
//  s8 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  u8 False
void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct ResTIMG {
};

struct J2DPicture {
	/* 802FC708 */ // False False
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
J2DPicture(ResTIMG const*);
};

// 
// Forward References:
// 


// True False
extern "C" void isEnableDispMap__11dMeterMap_cFv();
// True False
extern "C" void getMapDispSizeTypeNo__11dMeterMap_cFv();
// False False
extern "C" void isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv();
// True False
extern "C" void getMapDispEdgeBottomY_Layout__11dMeterMap_cFv();
// True False
extern "C" void isEventRunCheck__11dMeterMap_cFv();
// True False
extern "C" void getMapDispEdgeLeftX_Layout__11dMeterMap_cFv();
// False False
extern "C" void getMapDispEdgeTop__11dMeterMap_cFv();
// True False
//  bool False
extern "C" bool getDispPosInside_OffsetX__11dMeterMap_cFv();
// True False
extern "C" void getDispPosOutSide_OffsetX__11dMeterMap_cFv();
// False False
extern "C" void setDispPosInsideFlg_SE_On__11dMeterMap_cFv();
// False False
extern "C" void setDispPosOutsideFlg_SE_On__11dMeterMap_cFv();
// False False
//  u8 False
extern "C" void setMapAlpha__11dMeterMap_cFUc();
// False False
extern "C" void isMapOpenCheck__11dMeterMap_cFv();
// False False
//  J2DScreen* False
// 	 J2DScreen False
extern "C" void __ct__11dMeterMap_cFP9J2DScreen();
// True False
extern "C" void __dt__11dMeterMap_cFv();
// True False
//  J2DScreen* False
// 	 J2DScreen False
extern "C" void _create__11dMeterMap_cFP9J2DScreen();
// True False
extern "C" void _delete__11dMeterMap_cFv();
// False False
//  u32 False
extern "C" void _move__11dMeterMap_cFUl();
// False False
extern "C" void _draw__11dMeterMap_cFv();
// True False
extern "C" void draw__11dMeterMap_cFv();
// True False
extern "C" void ctrlShowMap__11dMeterMap_cFv();
// True False
extern "C" void checkMoveStatus__11dMeterMap_cFv();
// True False
//  u32 False
extern "C" void isShow__11dMeterMap_cFUl();
// True False
extern "C" void isFmapScreen__11dMeterMap_cFv();
// True False
extern "C" void isDmapScreen__11dMeterMap_cFv();
// False False
//  u32 False
extern "C" void meter_map_move__11dMeterMap_cFUl();
// True False
extern "C" void keyCheck__11dMeterMap_cFv();
extern "C" extern char const* const d_meter_d_meter_map__stringBase0;
extern "C" extern void* __vt__11dMeterMap_c[4];

// 
// External References:
// 

// False False
void fopOvlpM_IsDoingReq();
// False False
void dComIfGp_mapShow();
// False False
void dComIfGp_mapHide();
// False False
void dComIfGp_checkMapShow();
// False False
void dMw_LEFT_TRIGGER();
// False False
void dMw_RIGHT_TRIGGER();
// False False
//  void False
void dMeter2Info_set2DVibration();
// False False
//  s16* False
// 	 s16 False
//  s16 False
//  s16 False
//  s16 False
//  s16 False
void cLib_addCalcAngleS(s16*, s16, s16, s16, s16);
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
extern "C" void fopOvlpM_IsDoingReq__Fv();
// False False
//  int False
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
// False False
//  int False
//  int False
//  int False
//  int False
extern "C" void __ct__6dMap_cFiiii();
// False False
//  f32 False
//  f32 False
//  int False
//  f32 False
extern "C" void _move__6dMap_cFffif();
// False False
extern "C" void _draw__6dMap_cFv();
// False False
extern "C" void dComIfGp_mapShow__Fv();
// False False
extern "C" void dComIfGp_mapHide__Fv();
// False False
extern "C" void dComIfGp_checkMapShow__Fv();
// False False
//  int False
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
// False False
//  u16 False
extern "C" void onEventBit__11dSv_event_cFUs();
// False False
//  u16 False
extern "C" void isEventBit__11dSv_event_cCFUs();
// False False
extern "C" void getMapPlayerPos__10dMapInfo_nFv();
// False False
extern "C" void isExistMapPathData__8dMpath_cFv();
// False False
//  dDlst_base_c**& False
// 	 dDlst_base_c** False
// 		 dDlst_base_c* False
// 			 dDlst_base_c False
//  dDlst_base_c**& False
// 	 dDlst_base_c** False
// 		 dDlst_base_c* False
// 			 dDlst_base_c False
//  dDlst_base_c* False
// 	 dDlst_base_c False
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
// False False
extern "C" void dMw_LEFT_TRIGGER__Fv();
// False False
extern "C" void dMw_RIGHT_TRIGGER__Fv();
// False False
//  void False
extern "C" void dMeter2Info_set2DVibration__Fv();
// False False
extern "C" void getStatus__12dMsgObject_cFv();
// False False
//  s16* False
// 	 s16 False
//  s16 False
//  s16 False
//  s16 False
//  s16 False
extern "C" void cLib_addCalcAngleS__FPsssss();
// False False
//  JAISoundID False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  u32 False
//  s8 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  u8 False
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
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
//  ResTIMG const* False
// 	 ResTIMG const False
// 		 ResTIMG False
extern "C" void __ct__10J2DPictureFPC7ResTIMG();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
// False False
extern "C" void _restgpr_29();
// False False
extern "C" void strcmp();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 struct_80450D64[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 8020D49C-8020D528 008C+00 s=1 e=0 z=0  None .text      isEnableDispMap__11dMeterMap_cFv                             */
//	8020D4B4: 804061C0 (g_dComIfG_gameInfo)
//	8020D4B8: 804061C0 (g_dComIfG_gameInfo)
//	8020D4D4: 8020D528 (getMapDispSizeTypeNo__11dMeterMap_cFv)
//	8020D4FC: 8003F758 (isExistMapPathData__8dMpath_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::isEnableDispMap() {
	nofralloc
#include "asm/d/meter/d_meter_map/isEnableDispMap__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020D528-8020D650 0128+00 s=3 e=0 z=0  None .text      getMapDispSizeTypeNo__11dMeterMap_cFv                        */
//	8020D538: 803621DC (_savegpr_29)
//	8020D540: 80450D64 (struct_80450D64)
//	8020D548: 804061C0 (g_dComIfG_gameInfo)
//	8020D54C: 804061C0 (g_dComIfG_gameInfo)
//	8020D554: 80024384 (getStatusRoomDt__20dStage_roomControl_cFi)
//	8020D63C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::getMapDispSizeTypeNo() {
	nofralloc
#include "asm/d/meter/d_meter_map/getMapDispSizeTypeNo__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020D650-8020D690 0040+00 s=5 e=3 z=0  None .text      isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv         */
//	8020D65C: 8020D49C (isEnableDispMap__11dMeterMap_cFv)
//	8020D668: 8020D528 (getMapDispSizeTypeNo__11dMeterMap_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMeterMap_c::isEnableDispMapAndMapDispSizeTypeNo() {
	nofralloc
#include "asm/d/meter/d_meter_map/isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80454820-80454828 0004+04 s=1 e=0 z=0  None .sdata2    @4076                                                        */
SECTION_SDATA2 static f32 lit_4076[1 + 1 /* padding */] = {
	421.0f,
	/* padding */
	0.0f,
};

/* 8020D690-8020D698 0008+00 s=2 e=0 z=0  None .text      getMapDispEdgeBottomY_Layout__11dMeterMap_cFv                */
//	8020D690: 80454820 (lit_4076)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::getMapDispEdgeBottomY_Layout() {
	nofralloc
#include "asm/d/meter/d_meter_map/getMapDispEdgeBottomY_Layout__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020D698-8020D72C 0094+00 s=2 e=0 z=0  None .text      isEventRunCheck__11dMeterMap_cFv                             */
//	8020D6AC: 804061C0 (g_dComIfG_gameInfo)
//	8020D6B0: 804061C0 (g_dComIfG_gameInfo)
//	8020D6C8: 8023822C (getStatus__12dMsgObject_cFv)
//	8020D6F0: 804061C0 (g_dComIfG_gameInfo)
//	8020D6F4: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::isEventRunCheck() {
	nofralloc
#include "asm/d/meter/d_meter_map/isEventRunCheck__11dMeterMap_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80454828-80454830 0008+00 s=3 e=0 z=0  None .sdata2    @4100                                                        */
SECTION_SDATA2 static f64 lit_4100 = 4503601774854144.0 /* cast s32 to float */;

/* 8020D72C-8020D75C 0030+00 s=2 e=0 z=0  None .text      getMapDispEdgeLeftX_Layout__11dMeterMap_cFv                  */
//	8020D738: 80454828 (lit_4100)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::getMapDispEdgeLeftX_Layout() {
	nofralloc
#include "asm/d/meter/d_meter_map/getMapDispEdgeLeftX_Layout__11dMeterMap_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80454830-80454834 0004+00 s=2 e=0 z=0  None .sdata2    @4128                                                        */
SECTION_SDATA2 static u8 lit_4128[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80454834-80454838 0004+00 s=5 e=0 z=0  None .sdata2    @4129                                                        */
SECTION_SDATA2 static f32 lit_4129 = 1.0f;

/* 80454838-80454840 0008+00 s=1 e=0 z=0  None .sdata2    @4131                                                        */
SECTION_SDATA2 static f64 lit_4131 = 4503599627370496.0 /* cast u32 to float */;

/* 8020D75C-8020D7E4 0088+00 s=0 e=1 z=0  None .text      getMapDispEdgeTop__11dMeterMap_cFv                           */
//	8020D770: 80454830 (lit_4128)
//	8020D788: 80454834 (lit_4129)
//	8020D79C: 80454838 (lit_4131)
//	8020D7C4: 8020D690 (getMapDispEdgeBottomY_Layout__11dMeterMap_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMeterMap_c::getMapDispEdgeTop() {
	nofralloc
#include "asm/d/meter/d_meter_map/getMapDispEdgeTop__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020D7E4-8020D7EC 0008+00 s=2 e=0 z=0  None .text      getDispPosInside_OffsetX__11dMeterMap_cFv                    */
// True False
//  bool False
bool dMeterMap_c::getDispPosInside_OffsetX() {
	return false;
}


/* ############################################################################################## */
/* 80454840-80454844 0004+00 s=1 e=0 z=0  None .sdata2    @4159                                                        */
SECTION_SDATA2 static f32 lit_4159 = -36.0f;

/* 8020D7EC-8020D874 0088+00 s=2 e=0 z=0  None .text      getDispPosOutSide_OffsetX__11dMeterMap_cFv                   */
//	8020D800: 80454840 (lit_4159)
//	8020D80C: 80454830 (lit_4128)
//	8020D820: 80454834 (lit_4129)
//	8020D848: 8020D72C (getMapDispEdgeLeftX_Layout__11dMeterMap_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::getDispPosOutSide_OffsetX() {
	nofralloc
#include "asm/d/meter/d_meter_map/getDispPosOutSide_OffsetX__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020D874-8020D8BC 0048+00 s=2 e=2 z=0  None .text      setDispPosInsideFlg_SE_On__11dMeterMap_cFv                   */
//	8020D888: 8020D650 (isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv)
//	8020D894: 8002E048 (dComIfGp_mapShow__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMeterMap_c::setDispPosInsideFlg_SE_On() {
	nofralloc
#include "asm/d/meter/d_meter_map/setDispPosInsideFlg_SE_On__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020D8BC-8020D8F8 003C+00 s=1 e=2 z=0  None .text      setDispPosOutsideFlg_SE_On__11dMeterMap_cFv                  */
//	8020D8D0: 8002E078 (dComIfGp_mapHide__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMeterMap_c::setDispPosOutsideFlg_SE_On() {
	nofralloc
#include "asm/d/meter/d_meter_map/setDispPosOutsideFlg_SE_On__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020D8F8-8020D900 0008+00 s=0 e=1 z=0  None .text      setMapAlpha__11dMeterMap_cFUc                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u8 False
asm void dMeterMap_c::setMapAlpha(u8 param_0) {
	nofralloc
#include "asm/d/meter/d_meter_map/setMapAlpha__11dMeterMap_cFUc.s"
}
#pragma pop


/* 8020D900-8020D948 0048+00 s=3 e=1 z=0  None .text      isMapOpenCheck__11dMeterMap_cFv                              */
//	8020D90C: 804061C0 (g_dComIfG_gameInfo)
//	8020D910: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMeterMap_c::isMapOpenCheck() {
	nofralloc
#include "asm/d/meter/d_meter_map/isMapOpenCheck__11dMeterMap_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803BF2D8-803BF2F8 0020+00 s=1 e=0 z=0  None .data      @4516                                                        */
SECTION_DATA static void* lit_4516[8] = {
	(void*)(((char*)ctrlShowMap__11dMeterMap_cFv)+0x1C8),
	(void*)(((char*)ctrlShowMap__11dMeterMap_cFv)+0x184),
	(void*)(((char*)ctrlShowMap__11dMeterMap_cFv)+0x1B4),
	(void*)(((char*)ctrlShowMap__11dMeterMap_cFv)+0x19C),
	(void*)(((char*)ctrlShowMap__11dMeterMap_cFv)+0x1C8),
	(void*)(((char*)ctrlShowMap__11dMeterMap_cFv)+0x1A8),
	(void*)(((char*)ctrlShowMap__11dMeterMap_cFv)+0x1C0),
	(void*)(((char*)ctrlShowMap__11dMeterMap_cFv)+0x190),
};

/* 803BF2F8-803BF308 0010+00 s=2 e=0 z=0  None .data      __vt__11dMeterMap_c                                          */
SECTION_DATA void* __vt__11dMeterMap_c[4] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)draw__11dMeterMap_cFv,
	(void*)__dt__11dMeterMap_cFv,
};

/* 8020D948-8020D990 0048+00 s=0 e=1 z=0  None .text      __ct__11dMeterMap_cFP9J2DScreen                              */
//	8020D95C: 803A6F88 (__vt__12dDlst_base_c)
//	8020D960: 803A6F88 (__vt__12dDlst_base_c)
//	8020D968: 803BF2F8 (__vt__11dMeterMap_c)
//	8020D96C: 803BF2F8 (__vt__11dMeterMap_c)
//	8020D974: 8020D9EC (_create__11dMeterMap_cFP9J2DScreen)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  J2DScreen* False
// 	 J2DScreen False
asm dMeterMap_c::dMeterMap_c(J2DScreen* param_0) {
	nofralloc
#include "asm/d/meter/d_meter_map/__ct__11dMeterMap_cFP9J2DScreen.s"
}
#pragma pop


/* 8020D990-8020D9EC 005C+00 s=1 e=0 z=0  None .text      __dt__11dMeterMap_cFv                                        */
//	8020D9B0: 803BF2F8 (__vt__11dMeterMap_c)
//	8020D9B4: 803BF2F8 (__vt__11dMeterMap_c)
//	8020D9BC: 8020DC50 (_delete__11dMeterMap_cFv)
//	8020D9CC: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm dMeterMap_c::~dMeterMap_c() {
	nofralloc
#include "asm/d/meter/d_meter_map/__dt__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020D9EC-8020DC50 0264+00 s=1 e=0 z=0  None .text      _create__11dMeterMap_cFP9J2DScreen                           */
//	8020D9FC: 803621D4 (_savegpr_27)
//	8020DA04: 8020D528 (getMapDispSizeTypeNo__11dMeterMap_cFv)
//	8020DA08: 8020D528 (getMapDispSizeTypeNo__11dMeterMap_cFv)
//	8020DAA4: 80454828 (lit_4100)
//	8020DAE4: 802CEC4C (__nw__FUl)
//	8020DB00: 80029874 (__ct__6dMap_cFiiii)
//	8020DB10: 802CEC4C (__nw__FUl)
//	8020DB24: 802FC708 (__ct__10J2DPictureFPC7ResTIMG)
//	8020DB30: 804061C0 (g_dComIfG_gameInfo)
//	8020DB34: 804061C0 (g_dComIfG_gameInfo)
//	8020DB44: 80034934 (isDungeonItem__12dSv_memBit_cCFi)
//	8020DB54: 80034934 (isDungeonItem__12dSv_memBit_cCFi)
//	8020DB68: 8002E0A8 (dComIfGp_checkMapShow__Fv)
//	8020DB7C: 8020D650 (isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv)
//	8020DB90: 8020D900 (isMapOpenCheck__11dMeterMap_cFv)
//	8020DBC8: 8020D7E4 (getDispPosInside_OffsetX__11dMeterMap_cFv)
//	8020DBD4: 80430188 (g_meter2_info)
//	8020DBD8: 80430188 (g_meter2_info)
//	8020DBF0: 8020D7EC (getDispPosOutSide_OffsetX__11dMeterMap_cFv)
//	8020DBFC: 80430188 (g_meter2_info)
//	8020DC00: 80430188 (g_meter2_info)
//	8020DC18: 804061C0 (g_dComIfG_gameInfo)
//	8020DC1C: 804061C0 (g_dComIfG_gameInfo)
//	8020DC24: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	8020DC28: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	8020DC30: 800349BC (isEventBit__11dSv_event_cCFUs)
//	8020DC3C: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  J2DScreen* False
// 	 J2DScreen False
asm void dMeterMap_c::_create(J2DScreen* param_0) {
	nofralloc
#include "asm/d/meter/d_meter_map/_create__11dMeterMap_cFP9J2DScreen.s"
}
#pragma pop


/* 8020DC50-8020DCE4 0094+00 s=1 e=0 z=0  None .text      _delete__11dMeterMap_cFv                                     */
//	8020DCAC: 8020D650 (isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv)
//	8020DCC4: 8002E048 (dComIfGp_mapShow__Fv)
//	8020DCCC: 8002E078 (dComIfGp_mapHide__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::_delete() {
	nofralloc
#include "asm/d/meter/d_meter_map/_delete__11dMeterMap_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80398208-80398210 0008+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80398208 = "F_SP115";
#pragma pop

/* 8020DCE4-8020DF1C 0238+00 s=0 e=1 z=0  None .text      _move__11dMeterMap_cFUl                                      */
//	8020DCF4: 803621D8 (_savegpr_28)
//	8020DD0C: 804061C0 (g_dComIfG_gameInfo)
//	8020DD10: 804061C0 (g_dComIfG_gameInfo)
//	8020DD1C: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	8020DD20: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	8020DD28: 800349BC (isEventBit__11dSv_event_cCFUs)
//	8020DD34: 804061C0 (g_dComIfG_gameInfo)
//	8020DD38: 804061C0 (g_dComIfG_gameInfo)
//	8020DD40: 80398208 (d_meter_d_meter_map__stringBase0)
//	8020DD44: 80398208 (d_meter_d_meter_map__stringBase0)
//	8020DD48: 80368994 (strcmp)
//	8020DD58: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	8020DD5C: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	8020DD64: 8003498C (onEventBit__11dSv_event_cFUs)
//	8020DD74: 800349BC (isEventBit__11dSv_event_cCFUs)
//	8020DD80: 80430188 (g_meter2_info)
//	8020DD84: 80430188 (g_meter2_info)
//	8020DD8C: 80450D64 (struct_80450D64)
//	8020DD9C: 8020E45C (checkMoveStatus__11dMeterMap_cFv)
//	8020DDC0: 80430188 (g_meter2_info)
//	8020DDC4: 80430188 (g_meter2_info)
//	8020DE00: 8020E070 (ctrlShowMap__11dMeterMap_cFv)
//	8020DE14: 8020D7E4 (getDispPosInside_OffsetX__11dMeterMap_cFv)
//	8020DE2C: 8020D7E4 (getDispPosInside_OffsetX__11dMeterMap_cFv)
//	8020DE44: 80270540 (cLib_addCalcAngleS__FPsssss)
//	8020DE50: 8020D7EC (getDispPosOutSide_OffsetX__11dMeterMap_cFv)
//	8020DE68: 80270540 (cLib_addCalcAngleS__FPsssss)
//	8020DE70: 8003EE5C (getMapPlayerPos__10dMapInfo_nFv)
//	8020DE90: 8020D72C (getMapDispEdgeLeftX_Layout__11dMeterMap_cFv)
//	8020DE98: 80454828 (lit_4100)
//	8020DEC0: 8020D690 (getMapDispEdgeBottomY_Layout__11dMeterMap_cFv)
//	8020DEE4: 8002A32C (_move__6dMap_cFffif)
//	8020DEE8: 804061C0 (g_dComIfG_gameInfo)
//	8020DEEC: 804061C0 (g_dComIfG_gameInfo)
//	8020DF08: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u32 False
asm void dMeterMap_c::_move(u32 param_0) {
	nofralloc
#include "asm/d/meter/d_meter_map/_move__11dMeterMap_cFUl.s"
}
#pragma pop


/* 8020DF1C-8020DF68 004C+00 s=0 e=1 z=0  None .text      _draw__11dMeterMap_cFv                                       */
//	8020DF34: 8002AB54 (_draw__6dMap_cFv)
//	8020DF38: 804061C0 (g_dComIfG_gameInfo)
//	8020DF3C: 804061C0 (g_dComIfG_gameInfo)
//	8020DF50: 80056794 (set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dMeterMap_c::_draw() {
	nofralloc
#include "asm/d/meter/d_meter_map/_draw__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020DF68-8020E070 0108+00 s=1 e=0 z=0  None .text      draw__11dMeterMap_cFv                                        */
//	8020DFB4: 804061C0 (g_dComIfG_gameInfo)
//	8020DFB8: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::draw() {
	nofralloc
#include "asm/d/meter/d_meter_map/draw__11dMeterMap_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80454844-80454848 0004+00 s=3 e=0 z=0  None .sdata2    @4515                                                        */
SECTION_SDATA2 static f32 lit_4515 = -1.0f;

/* 8020E070-8020E45C 03EC+00 s=2 e=0 z=0  None .text      ctrlShowMap__11dMeterMap_cFv                                 */
//	8020E080: 803621DC (_savegpr_29)
//	8020E088: 80430188 (g_meter2_info)
//	8020E08C: 80430188 (g_meter2_info)
//	8020E09C: 8020D900 (isMapOpenCheck__11dMeterMap_cFv)
//	8020E0AC: 8020D698 (isEventRunCheck__11dMeterMap_cFv)
//	8020E0B8: 801F9FAC (dMw_LEFT_TRIGGER__Fv)
//	8020E0C4: 801F9FF4 (dMw_RIGHT_TRIGGER__Fv)
//	8020E0D8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020E0EC: 80454834 (lit_4129)
//	8020E0F4: 80454844 (lit_4515)
//	8020E100: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020E108: 80430188 (g_meter2_info)
//	8020E10C: 80430188 (g_meter2_info)
//	8020E144: 80430188 (g_meter2_info)
//	8020E148: 80430188 (g_meter2_info)
//	8020E168: 8020D874 (setDispPosInsideFlg_SE_On__11dMeterMap_cFv)
//	8020E174: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020E188: 80454834 (lit_4129)
//	8020E190: 80454844 (lit_4515)
//	8020E19C: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020E1A0: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020E1C4: 8020E620 (isFmapScreen__11dMeterMap_cFv)
//	8020E1DC: 803BF2D8 (lit_4516)
//	8020E1E0: 803BF2D8 (lit_4516)
//	8020E23C: 80430188 (g_meter2_info)
//	8020E240: 80430188 (g_meter2_info)
//	8020E250: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020E264: 80454834 (lit_4129)
//	8020E26C: 80454844 (lit_4515)
//	8020E278: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020E27C: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020E29C: 8020E70C (isDmapScreen__11dMeterMap_cFv)
//	8020E2A8: 80430188 (g_meter2_info)
//	8020E2AC: 80430188 (g_meter2_info)
//	8020E2CC: 8020D874 (setDispPosInsideFlg_SE_On__11dMeterMap_cFv)
//	8020E2D8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020E2EC: 80454834 (lit_4129)
//	8020E2F4: 80454844 (lit_4515)
//	8020E300: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020E304: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020E334: 80430188 (g_meter2_info)
//	8020E338: 80430188 (g_meter2_info)
//	8020E348: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020E35C: 80454834 (lit_4129)
//	8020E364: 80454844 (lit_4515)
//	8020E370: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020E374: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020E37C: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	8020E380: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	8020E39C: 8020E9CC (keyCheck__11dMeterMap_cFv)
//	8020E3A0: 804061C0 (g_dComIfG_gameInfo)
//	8020E3A4: 804061C0 (g_dComIfG_gameInfo)
//	8020E3B4: 80034934 (isDungeonItem__12dSv_memBit_cCFi)
//	8020E3D4: 8020D874 (setDispPosInsideFlg_SE_On__11dMeterMap_cFv)
//	8020E3DC: 80430188 (g_meter2_info)
//	8020E3E0: 80430188 (g_meter2_info)
//	8020E3F0: 80034934 (isDungeonItem__12dSv_memBit_cCFi)
//	8020E400: 80034934 (isDungeonItem__12dSv_memBit_cCFi)
//	8020E420: 8020D874 (setDispPosInsideFlg_SE_On__11dMeterMap_cFv)
//	8020E428: 80430188 (g_meter2_info)
//	8020E42C: 80430188 (g_meter2_info)
//	8020E43C: 80034934 (isDungeonItem__12dSv_memBit_cCFi)
//	8020E448: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::ctrlShowMap() {
	nofralloc
#include "asm/d/meter/d_meter_map/ctrlShowMap__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020E45C-8020E4C8 006C+00 s=1 e=0 z=0  None .text      checkMoveStatus__11dMeterMap_cFv                             */
//	8020E474: 8020E4C8 (isShow__11dMeterMap_cFUl)
//	8020E480: 8020D650 (isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::checkMoveStatus() {
	nofralloc
#include "asm/d/meter/d_meter_map/checkMoveStatus__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020E4C8-8020E620 0158+00 s=2 e=0 z=0  None .text      isShow__11dMeterMap_cFUl                                     */
//	8020E4E4: 8001E5A8 (fopOvlpM_IsDoingReq__Fv)
//	8020E4F8: 804061C0 (g_dComIfG_gameInfo)
//	8020E4FC: 804061C0 (g_dComIfG_gameInfo)
//	8020E530: 804061C0 (g_dComIfG_gameInfo)
//	8020E534: 804061C0 (g_dComIfG_gameInfo)
//	8020E5EC: 80430188 (g_meter2_info)
//	8020E5F0: 80430188 (g_meter2_info)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  u32 False
asm void dMeterMap_c::isShow(u32 param_0) {
	nofralloc
#include "asm/d/meter/d_meter_map/isShow__11dMeterMap_cFUl.s"
}
#pragma pop


/* 8020E620-8020E70C 00EC+00 s=3 e=0 z=0  None .text      isFmapScreen__11dMeterMap_cFv                                */
//	8020E630: 804061C0 (g_dComIfG_gameInfo)
//	8020E634: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::isFmapScreen() {
	nofralloc
#include "asm/d/meter/d_meter_map/isFmapScreen__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020E70C-8020E754 0048+00 s=3 e=0 z=0  None .text      isDmapScreen__11dMeterMap_cFv                                */
//	8020E718: 804061C0 (g_dComIfG_gameInfo)
//	8020E71C: 804061C0 (g_dComIfG_gameInfo)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::isDmapScreen() {
	nofralloc
#include "asm/d/meter/d_meter_map/isDmapScreen__11dMeterMap_cFv.s"
}
#pragma pop


/* 8020E754-8020E9CC 0278+00 s=0 e=1 z=0  None .text      meter_map_move__11dMeterMap_cFUl                             */
//	8020E764: 8020E4C8 (isShow__11dMeterMap_cFUl)
//	8020E770: 8020D900 (isMapOpenCheck__11dMeterMap_cFv)
//	8020E77C: 80430188 (g_meter2_info)
//	8020E780: 80430188 (g_meter2_info)
//	8020E79C: 8020E620 (isFmapScreen__11dMeterMap_cFv)
//	8020E7AC: 80430188 (g_meter2_info)
//	8020E7B0: 80430188 (g_meter2_info)
//	8020E7C8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020E7DC: 80454834 (lit_4129)
//	8020E7E4: 80454844 (lit_4515)
//	8020E7F0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020E7F4: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020E804: 801F9FAC (dMw_LEFT_TRIGGER__Fv)
//	8020E810: 804061C0 (g_dComIfG_gameInfo)
//	8020E814: 804061C0 (g_dComIfG_gameInfo)
//	8020E824: 8023822C (getStatus__12dMsgObject_cFv)
//	8020E840: 80430188 (g_meter2_info)
//	8020E844: 80430188 (g_meter2_info)
//	8020E864: 80430188 (g_meter2_info)
//	8020E868: 80430188 (g_meter2_info)
//	8020E878: 8020E620 (isFmapScreen__11dMeterMap_cFv)
//	8020E884: 8020E70C (isDmapScreen__11dMeterMap_cFv)
//	8020E89C: 80430188 (g_meter2_info)
//	8020E8A0: 80430188 (g_meter2_info)
//	8020E8B0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020E8C4: 80454834 (lit_4129)
//	8020E8CC: 80454844 (lit_4515)
//	8020E8D8: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020E8DC: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020E8E4: 801F9FF4 (dMw_RIGHT_TRIGGER__Fv)
//	8020E8F0: 804061C0 (g_dComIfG_gameInfo)
//	8020E8F4: 804061C0 (g_dComIfG_gameInfo)
//	8020E904: 8023822C (getStatus__12dMsgObject_cFv)
//	8020E920: 80430188 (g_meter2_info)
//	8020E924: 80430188 (g_meter2_info)
//	8020E93C: 80430188 (g_meter2_info)
//	8020E940: 80430188 (g_meter2_info)
//	8020E950: 8020E620 (isFmapScreen__11dMeterMap_cFv)
//	8020E95C: 8020E70C (isDmapScreen__11dMeterMap_cFv)
//	8020E974: 80430188 (g_meter2_info)
//	8020E978: 80430188 (g_meter2_info)
//	8020E988: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020E99C: 80454834 (lit_4129)
//	8020E9A4: 80454844 (lit_4515)
//	8020E9B0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020E9B4: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u32 False
asm void dMeterMap_c::meter_map_move(u32 param_0) {
	nofralloc
#include "asm/d/meter/d_meter_map/meter_map_move__11dMeterMap_cFUl.s"
}
#pragma pop


/* 8020E9CC-8020ED60 0394+00 s=1 e=0 z=0  None .text      keyCheck__11dMeterMap_cFv                                    */
//	8020E9E4: 801F9FAC (dMw_LEFT_TRIGGER__Fv)
//	8020E9F4: 8020D698 (isEventRunCheck__11dMeterMap_cFv)
//	8020EA00: 80430188 (g_meter2_info)
//	8020EA04: 80430188 (g_meter2_info)
//	8020EA34: 8020D8BC (setDispPosOutsideFlg_SE_On__11dMeterMap_cFv)
//	8020EA40: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020EA54: 80454834 (lit_4129)
//	8020EA5C: 80454844 (lit_4515)
//	8020EA68: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020EA80: 80430188 (g_meter2_info)
//	8020EA84: 80430188 (g_meter2_info)
//	8020EA94: 8020E620 (isFmapScreen__11dMeterMap_cFv)
//	8020EAA0: 8020E70C (isDmapScreen__11dMeterMap_cFv)
//	8020EAB8: 80430188 (g_meter2_info)
//	8020EABC: 80430188 (g_meter2_info)
//	8020EACC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020EAE0: 80454834 (lit_4129)
//	8020EAE8: 80454844 (lit_4515)
//	8020EAF4: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020EAF8: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020EB04: 8020D874 (setDispPosInsideFlg_SE_On__11dMeterMap_cFv)
//	8020EB10: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020EB24: 80454834 (lit_4129)
//	8020EB2C: 80454844 (lit_4515)
//	8020EB38: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020EB3C: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020EB4C: 801F9FF4 (dMw_RIGHT_TRIGGER__Fv)
//	8020EB5C: 8020D698 (isEventRunCheck__11dMeterMap_cFv)
//	8020EB68: 80430188 (g_meter2_info)
//	8020EB6C: 80430188 (g_meter2_info)
//	8020EB8C: 8020D650 (isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv)
//	8020EBA8: 8020D874 (setDispPosInsideFlg_SE_On__11dMeterMap_cFv)
//	8020EBB4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020EBC8: 80454834 (lit_4129)
//	8020EBD0: 80454844 (lit_4515)
//	8020EBDC: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020EBE0: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020EBF0: 80430188 (g_meter2_info)
//	8020EBF4: 80430188 (g_meter2_info)
//	8020EC04: 8020E620 (isFmapScreen__11dMeterMap_cFv)
//	8020EC10: 8020E70C (isDmapScreen__11dMeterMap_cFv)
//	8020EC28: 80430188 (g_meter2_info)
//	8020EC2C: 80430188 (g_meter2_info)
//	8020EC3C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020EC50: 80454834 (lit_4129)
//	8020EC58: 80454844 (lit_4515)
//	8020EC64: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020EC68: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020EC84: 80430188 (g_meter2_info)
//	8020EC88: 80430188 (g_meter2_info)
//	8020EC98: 8020E620 (isFmapScreen__11dMeterMap_cFv)
//	8020ECA4: 8020E70C (isDmapScreen__11dMeterMap_cFv)
//	8020ECBC: 80430188 (g_meter2_info)
//	8020ECC0: 80430188 (g_meter2_info)
//	8020ECD0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020ECE4: 80454834 (lit_4129)
//	8020ECEC: 80454844 (lit_4515)
//	8020ECF8: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	8020ECFC: 8021E9D0 (dMeter2Info_set2DVibration__Fv)
//	8020ED08: 8020D8BC (setDispPosOutsideFlg_SE_On__11dMeterMap_cFv)
//	8020ED14: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	8020ED28: 80454834 (lit_4129)
//	8020ED30: 80454844 (lit_4515)
//	8020ED3C: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void dMeterMap_c::keyCheck() {
	nofralloc
#include "asm/d/meter/d_meter_map/keyCheck__11dMeterMap_cFv.s"
}
#pragma pop


