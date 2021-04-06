//
// Generated By: dol2asm
// Translation Unit: d/meter/d_meter2
//

#include "d/meter/d_meter2.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct msg_class {};

struct dSv_player_status_a_c {
    /* 80032A5C */ void getSelectItemIndex(int) const;
    /* 80032AA8 */ void getRupeeMax() const;
};

struct dSv_player_item_record_c {
    /* 80033F6C */ void setBombNum(u8, u8);
    /* 80033F7C */ void getBombNum(u8) const;
    /* 80034030 */ void getBottleNum(u8) const;
};

struct dSv_player_item_max_c {
    /* 800340F8 */ void getBombNum(u8) const;
};

struct dSv_player_item_c {
    /* 80032FB8 */ void setItem(int, u8);
    /* 80033030 */ void getItem(int, bool) const;
};

struct dSv_player_collect_c {
    /* 8003422C */ void onCollectCrystal(u8);
    /* 8003424C */ void isCollectCrystal(u8) const;
    /* 80034270 */ void onCollectMirror(u8);
    /* 80034290 */ void isCollectMirror(u8) const;
};

struct dSv_light_drop_c {
    /* 80034340 */ void getLightDropNum(u8) const;
    /* 8003439C */ void isLightDropGetFlag(u8) const;
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dScope_c {
    /* 80193690 */ dScope_c(u8);
};

struct dMw_HIO_c {
    /* 801F9E14 */ bool getBombFlag();
    /* 801F9E1C */ bool getArrowFlag();
    /* 801F9E24 */ bool getPachinkoFlag();
};

struct dMsgObject_c {
    /* 802371E4 */ void isPlaceMessage();
    /* 8023822C */ void getStatus();
};

struct dMeterString_c {
    /* 8020ED60 */ dMeterString_c(int);
    /* 8020F5A4 */ void createString(int);
};

struct J2DScreen {};

struct dMeterMap_c {
    /* 8020D650 */ void isEnableDispMapAndMapDispSizeTypeNo();
    /* 8020D75C */ void getMapDispEdgeTop();
    /* 8020D8F8 */ void setMapAlpha(u8);
    /* 8020D948 */ dMeterMap_c(J2DScreen*);
    /* 8020DCE4 */ void _move(u32);
    /* 8020DF1C */ void _draw();
    /* 8020E754 */ void meter_map_move(u32);
};

struct dMeterHakusha_c {
    /* 8020C320 */ dMeterHakusha_c(void*);
};

struct dMeterHaihai_c {
    /* 8020AE8C */ dMeterHaihai_c(u8);
};

struct dMeterButton_c {
    /* 80201328 */ dMeterButton_c();
    /* 80201404 */ void _execute(u32, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool,
                                 bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool,
                                 bool);
    /* 80209474 */ void isClose();
    /* 802095C0 */ void setString(char*, u8, u8, u8);
    /* 80209CEC */ void hideAll();
};

struct dMeter2_c {
    /* 8021EA14 */ void _create();
    /* 8021F128 */ void _execute();
    /* 8021F370 */ void _draw();
    /* 8021F49C */ void _delete();
    /* 8021F6EC */ void emphasisButtonDelete();
    /* 8021F780 */ void setLifeZero();
    /* 8021F7B0 */ void checkStatus();
    /* 8021FD60 */ void moveLife();
    /* 80220180 */ void moveKantera();
    /* 8022051C */ void moveOxygen();
    /* 80220888 */ void moveLightDrop();
    /* 80220C30 */ void moveRupee();
    /* 802210AC */ void moveKey();
    /* 80221244 */ void moveButtonA();
    /* 802217F4 */ void moveButtonB();
    /* 80221EC8 */ void moveButtonR();
    /* 80222000 */ void moveButtonZ();
    /* 802222A0 */ void moveButton3D();
    /* 80222364 */ void moveButtonC();
    /* 80222494 */ void moveButtonS();
    /* 80222518 */ void moveButtonXY();
    /* 80222E88 */ void moveButtonCross();
    /* 802230F8 */ void moveTouchSubMenu();
    /* 802230FC */ void moveSubContents();
    /* 802231C8 */ void move2DContents();
    /* 802237D4 */ void checkSubContents();
    /* 80223BC4 */ void check2DContents();
    /* 80223E00 */ void moveBombNum();
    /* 80224258 */ void moveBottleNum();
    /* 80224354 */ void moveArrowNum();
    /* 80224680 */ void movePachinkoNum();
    /* 802248E4 */ void alphaAnimeLife();
    /* 80224A04 */ void alphaAnimeKantera();
    /* 80224BAC */ void alphaAnimeOxygen();
    /* 80224D6C */ void alphaAnimeLightDrop();
    /* 80224DC0 */ void alphaAnimeRupee();
    /* 80224F70 */ void alphaAnimeKey();
    /* 802250F4 */ void alphaAnimeButton();
    /* 802254C0 */ void alphaAnimeButtonCross();
    /* 802256DC */ void isShowLightDrop();
    /* 802258A0 */ void killSubContents(u8);
    /* 80225960 */ void isKeyVisible();
    /* 802259F8 */ void isArrowEquip();
    /* 80225A64 */ void isPachinkoEquip();
};

struct dMeter2Info_c {
    /* 8021C1DC */ void isFloatingMessageVisible();
    /* 8021C950 */ void isDirectUseItem(int);
    /* 8021DCE0 */ void decHotSpringTimer();
};

struct JKRExpHeap {};

struct dMeter2Draw_c {
    /* 8020FAB4 */ dMeter2Draw_c(JKRExpHeap*);
    /* 8021135C */ void exec(u32);
    /* 802149F4 */ void drawLife(s16, s16, f32, f32);
    /* 80214C20 */ void setAlphaLifeChange(bool);
    /* 80214DF4 */ void setAlphaLifeAnimeMin();
    /* 80214E54 */ void setAlphaLifeAnimeMax();
    /* 802154A8 */ void drawKantera(s32, s32, f32, f32);
    /* 802155B8 */ void setAlphaKanteraChange(bool);
    /* 802156E0 */ void setAlphaKanteraAnimeMin();
    /* 8021575C */ void setAlphaKanteraAnimeMax();
    /* 802157E0 */ void drawOxygen(s32, s32, f32, f32);
    /* 802158F0 */ void setAlphaOxygenChange(bool);
    /* 80215A18 */ void setAlphaOxygenAnimeMin();
    /* 80215A94 */ void setAlphaOxygenAnimeMax();
    /* 80215B18 */ void drawLightDrop(u8, u8, f32, f32, f32, f32, u8);
    /* 80215DA4 */ void setAlphaLightDropChange(bool);
    /* 80215DA8 */ void getNowLightDropRateCalc();
    /* 80215E40 */ void setAlphaLightDropAnimeMin();
    /* 80215F88 */ void setAlphaLightDropAnimeMax();
    /* 8021632C */ void drawRupee(s16);
    /* 80216684 */ void setAlphaRupeeChange(bool);
    /* 802168D0 */ void setAlphaRupeeAnimeMin();
    /* 80216990 */ void setAlphaRupeeAnimeMax();
    /* 80216A40 */ void drawKey(s16);
    /* 80216B28 */ void setAlphaKeyChange(bool);
    /* 80216CA8 */ void setAlphaKeyAnimeMin();
    /* 80216D2C */ void setAlphaKeyAnimeMax();
    /* 80216DAC */ void drawButtonA(u8, f32, f32, f32, f32, f32, bool, bool);
    /* 802170E4 */ void drawButtonB(u8, bool, f32, f32, f32, f32, f32, bool);
    /* 8021764C */ void drawButtonR(u8, u8, bool, bool);
    /* 802176EC */ void drawButtonZ(u8);
    /* 80217904 */ void drawButton3D(u8);
    /* 80217954 */ void drawButtonC(u8, bool);
    /* 802179C0 */ void drawButtonS(u8);
    /* 80217A10 */ void drawButtonBin(u8);
    /* 80217AB4 */ void drawButtonXY(int, u8, u8, bool, bool);
    /* 80218238 */ void getButtonCrossParentInitTransY();
    /* 80218254 */ void drawButtonCross(f32, f32);
    /* 80218338 */ void setAlphaButtonCrossAnimeMin();
    /* 802183A8 */ void setAlphaButtonCrossAnimeMax();
    /* 80218788 */ void setAlphaButtonChange(bool);
    /* 8021901C */ void setAlphaButtonAnimeMin();
    /* 802190A8 */ void setAlphaButtonAnimeMax();
    /* 80219174 */ void setAlphaButtonAAnimeMin();
    /* 80219258 */ void setAlphaButtonAAnimeMax();
    /* 80219324 */ void setAlphaButtonBAnimeMin();
    /* 80219474 */ void setAlphaButtonBAnimeMax();
    /* 802195A4 */ void setButtonIconAAlpha(u8, u32, bool);
    /* 80219788 */ void setButtonIconBAlpha(u8, u32, bool);
    /* 80219A84 */ void setButtonIconMidonaAlpha(u32);
    /* 80219E98 */ void setButtonIconAlpha(int, u8, u32, bool);
    /* 8021A2F4 */ void getActionString(u8, u8, u8*);
    /* 8021AB84 */ void setItemNum(u8, u8, u8);
    /* 8021AEC8 */ void drawItemNum(u8, f32);
    /* 8021AF78 */ void drawKanteraMeter(u8, f32);
    /* 8021B0C8 */ void isButtonVisible();
    /* 8021BC24 */ void getCameraSubject();
    /* 8021BC54 */ void getItemSubject();
    /* 8021BCAC */ void getPlayerSubject();
    /* 8021BCC0 */ void isBButtonShow(bool);
    /* 8021BDD0 */ void getButtonTimer();
};

struct dDlst_base_c {};

struct dDlst_list_c {
    /* 80056794 */ void set(dDlst_base_c**&, dDlst_base_c**&, dDlst_base_c*);
};

struct dComIfG_play_c {
    /* 8002B36C */ void setItemBombNumCount(u8, s16);
    /* 8002B384 */ void getItemBombNumCount(u8);
    /* 8002B394 */ void clearItemBombNumCount(u8);
    /* 8002C97C */ void getLayerNo(int);
    /* 8002CBBC */ void getTimerMode();
};

struct dCamera_c {
    /* 80174EA4 */ bool CalcSubjectAngle(s16*, s16*);
};

struct Z2StatusMgr {
    /* 802B5F70 */ void heartGaugeOn();
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct JKRHeap {
    /* 802CE5CC */ void freeAll();
    /* 802CE784 */ void getTotalFreeSize();
};

//
// Forward References:
//

extern "C" void _create__9dMeter2_cFv();
extern "C" void _execute__9dMeter2_cFv();
extern "C" void _draw__9dMeter2_cFv();
extern "C" void _delete__9dMeter2_cFv();
extern "C" void emphasisButtonDelete__9dMeter2_cFv();
extern "C" void setLifeZero__9dMeter2_cFv();
extern "C" void checkStatus__9dMeter2_cFv();
extern "C" void moveLife__9dMeter2_cFv();
extern "C" void moveKantera__9dMeter2_cFv();
extern "C" void moveOxygen__9dMeter2_cFv();
extern "C" void moveLightDrop__9dMeter2_cFv();
extern "C" void moveRupee__9dMeter2_cFv();
extern "C" void moveKey__9dMeter2_cFv();
extern "C" void moveButtonA__9dMeter2_cFv();
extern "C" void moveButtonB__9dMeter2_cFv();
extern "C" void moveButtonR__9dMeter2_cFv();
extern "C" void moveButtonZ__9dMeter2_cFv();
extern "C" void moveButton3D__9dMeter2_cFv();
extern "C" void moveButtonC__9dMeter2_cFv();
extern "C" void moveButtonS__9dMeter2_cFv();
extern "C" void moveButtonXY__9dMeter2_cFv();
extern "C" void moveButtonCross__9dMeter2_cFv();
extern "C" void moveTouchSubMenu__9dMeter2_cFv();
extern "C" void moveSubContents__9dMeter2_cFv();
extern "C" void move2DContents__9dMeter2_cFv();
extern "C" void checkSubContents__9dMeter2_cFv();
extern "C" void check2DContents__9dMeter2_cFv();
extern "C" void moveBombNum__9dMeter2_cFv();
extern "C" void moveBottleNum__9dMeter2_cFv();
extern "C" void moveArrowNum__9dMeter2_cFv();
extern "C" void movePachinkoNum__9dMeter2_cFv();
extern "C" void alphaAnimeLife__9dMeter2_cFv();
extern "C" void alphaAnimeKantera__9dMeter2_cFv();
extern "C" void alphaAnimeOxygen__9dMeter2_cFv();
extern "C" void alphaAnimeLightDrop__9dMeter2_cFv();
extern "C" void alphaAnimeRupee__9dMeter2_cFv();
extern "C" void alphaAnimeKey__9dMeter2_cFv();
extern "C" void alphaAnimeButton__9dMeter2_cFv();
extern "C" void alphaAnimeButtonCross__9dMeter2_cFv();
extern "C" void isShowLightDrop__9dMeter2_cFv();
extern "C" void killSubContents__9dMeter2_cFUc();
extern "C" void isKeyVisible__9dMeter2_cFv();
extern "C" void isArrowEquip__9dMeter2_cFv();
extern "C" void isPachinkoEquip__9dMeter2_cFv();
extern "C" static void dMeter2_Draw__FP9dMeter2_c();
extern "C" static void dMeter2_Execute__FP9dMeter2_c();
extern "C" static bool dMeter2_IsDelete__FP9dMeter2_c();
extern "C" static void dMeter2_Delete__FP9dMeter2_c();
extern "C" static void dMeter2_Create__FP9msg_class();
extern "C" extern char const* const d_meter_d_meter2__stringBase0;
extern "C" extern void* g_profile_METER2[10];

//
// External References:
//

extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void fopMsgM_setStageLayer__FPv();
extern "C" void fopMsgM_setMessageID__FUi();
extern "C" void fopMsgM_Create__FsPFPv_iPv();
extern "C" void fopMsgM_createExpHeap__FUlP7JKRHeap();
extern "C" void fopMsgM_destroyExpHeap__FP10JKRExpHeap();
extern "C" void setItemBombNumCount__14dComIfG_play_cFUcs();
extern "C" void getItemBombNumCount__14dComIfG_play_cFUc();
extern "C" void clearItemBombNumCount__14dComIfG_play_cFUc();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void getTimerMode__14dComIfG_play_cFv();
extern "C" void dComIfGs_setSelectItemIndex__FiUc();
extern "C" void dComIfGs_setMixItemIndex__FiUc();
extern "C" void dComIfGs_getSelectMixItemNoArrowIndex__Fi();
extern "C" void dComIfGs_getMixItemIndex__Fi();
extern "C" void dComIfGp_setSelectItem__Fi();
extern "C" void dComIfGp_getSelectItem__Fi();
extern "C" void dComIfGp_setHeapLockFlag__FUc();
extern "C" void dComIfGp_offHeapLockFlag__Fi();
extern "C" void dComIfGp_getSubHeap2D__Fi();
extern "C" void dComIfGp_getSelectItemNum__Fi();
extern "C" void dComIfGp_getSelectItemMaxNum__Fi();
extern "C" void getSelectItemIndex__21dSv_player_status_a_cCFi();
extern "C" void getRupeeMax__21dSv_player_status_a_cCFv();
extern "C" void setItem__17dSv_player_item_cFiUc();
extern "C" void getItem__17dSv_player_item_cCFib();
extern "C" void setBombNum__24dSv_player_item_record_cFUcUc();
extern "C" void getBombNum__24dSv_player_item_record_cCFUc();
extern "C" void getBottleNum__24dSv_player_item_record_cCFUc();
extern "C" void getBombNum__21dSv_player_item_max_cCFUc();
extern "C" void onCollectCrystal__20dSv_player_collect_cFUc();
extern "C" void isCollectCrystal__20dSv_player_collect_cCFUc();
extern "C" void onCollectMirror__20dSv_player_collect_cFUc();
extern "C" void isCollectMirror__20dSv_player_collect_cCFUc();
extern "C" void getLightDropNum__16dSv_light_drop_cCFUc();
extern "C" void isLightDropGetFlag__16dSv_light_drop_cCFUc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" bool CalcSubjectAngle__9dCamera_cFPsPs();
extern "C" void dCam_getBody__Fv();
extern "C" void __ct__8dScope_cFUc();
extern "C" void dKy_darkworld_check__Fv();
extern "C" bool getBombFlag__9dMw_HIO_cFv();
extern "C" bool getArrowFlag__9dMw_HIO_cFv();
extern "C" bool getPachinkoFlag__9dMw_HIO_cFv();
extern "C" void __ct__14dMeterButton_cFv();
extern "C" void _execute__14dMeterButton_cFUlbbbbbbbbbbbbbbbbbbbbbb();
extern "C" void isClose__14dMeterButton_cFv();
extern "C" void setString__14dMeterButton_cFPcUcUcUc();
extern "C" void hideAll__14dMeterButton_cFv();
extern "C" void __ct__14dMeterHaihai_cFUc();
extern "C" void __ct__15dMeterHakusha_cFPv();
extern "C" void isEnableDispMapAndMapDispSizeTypeNo__11dMeterMap_cFv();
extern "C" void getMapDispEdgeTop__11dMeterMap_cFv();
extern "C" void setMapAlpha__11dMeterMap_cFUc();
extern "C" void __ct__11dMeterMap_cFP9J2DScreen();
extern "C" void _move__11dMeterMap_cFUl();
extern "C" void _draw__11dMeterMap_cFv();
extern "C" void meter_map_move__11dMeterMap_cFUl();
extern "C" void __ct__14dMeterString_cFi();
extern "C" void createString__14dMeterString_cFi();
extern "C" void __ct__13dMeter2Draw_cFP10JKRExpHeap();
extern "C" void exec__13dMeter2Draw_cFUl();
extern "C" void drawLife__13dMeter2Draw_cFssff();
extern "C" void setAlphaLifeChange__13dMeter2Draw_cFb();
extern "C" void setAlphaLifeAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaLifeAnimeMax__13dMeter2Draw_cFv();
extern "C" void drawKantera__13dMeter2Draw_cFllff();
extern "C" void setAlphaKanteraChange__13dMeter2Draw_cFb();
extern "C" void setAlphaKanteraAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaKanteraAnimeMax__13dMeter2Draw_cFv();
extern "C" void drawOxygen__13dMeter2Draw_cFllff();
extern "C" void setAlphaOxygenChange__13dMeter2Draw_cFb();
extern "C" void setAlphaOxygenAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaOxygenAnimeMax__13dMeter2Draw_cFv();
extern "C" void drawLightDrop__13dMeter2Draw_cFUcUcffffUc();
extern "C" void setAlphaLightDropChange__13dMeter2Draw_cFb();
extern "C" void getNowLightDropRateCalc__13dMeter2Draw_cFv();
extern "C" void setAlphaLightDropAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaLightDropAnimeMax__13dMeter2Draw_cFv();
extern "C" void drawRupee__13dMeter2Draw_cFs();
extern "C" void setAlphaRupeeChange__13dMeter2Draw_cFb();
extern "C" void setAlphaRupeeAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaRupeeAnimeMax__13dMeter2Draw_cFv();
extern "C" void drawKey__13dMeter2Draw_cFs();
extern "C" void setAlphaKeyChange__13dMeter2Draw_cFb();
extern "C" void setAlphaKeyAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaKeyAnimeMax__13dMeter2Draw_cFv();
extern "C" void drawButtonA__13dMeter2Draw_cFUcfffffbb();
extern "C" void drawButtonB__13dMeter2Draw_cFUcbfffffb();
extern "C" void drawButtonR__13dMeter2Draw_cFUcUcbb();
extern "C" void drawButtonZ__13dMeter2Draw_cFUc();
extern "C" void drawButton3D__13dMeter2Draw_cFUc();
extern "C" void drawButtonC__13dMeter2Draw_cFUcb();
extern "C" void drawButtonS__13dMeter2Draw_cFUc();
extern "C" void drawButtonBin__13dMeter2Draw_cFUc();
extern "C" void drawButtonXY__13dMeter2Draw_cFiUcUcbb();
extern "C" void getButtonCrossParentInitTransY__13dMeter2Draw_cFv();
extern "C" void drawButtonCross__13dMeter2Draw_cFff();
extern "C" void setAlphaButtonCrossAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaButtonCrossAnimeMax__13dMeter2Draw_cFv();
extern "C" void setAlphaButtonChange__13dMeter2Draw_cFb();
extern "C" void setAlphaButtonAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaButtonAnimeMax__13dMeter2Draw_cFv();
extern "C" void setAlphaButtonAAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaButtonAAnimeMax__13dMeter2Draw_cFv();
extern "C" void setAlphaButtonBAnimeMin__13dMeter2Draw_cFv();
extern "C" void setAlphaButtonBAnimeMax__13dMeter2Draw_cFv();
extern "C" void setButtonIconAAlpha__13dMeter2Draw_cFUcUlb();
extern "C" void setButtonIconBAlpha__13dMeter2Draw_cFUcUlb();
extern "C" void setButtonIconMidonaAlpha__13dMeter2Draw_cFUl();
extern "C" void setButtonIconAlpha__13dMeter2Draw_cFiUcUlb();
extern "C" void getActionString__13dMeter2Draw_cFUcUcPUc();
extern "C" void setItemNum__13dMeter2Draw_cFUcUcUc();
extern "C" void drawItemNum__13dMeter2Draw_cFUcf();
extern "C" void drawKanteraMeter__13dMeter2Draw_cFUcf();
extern "C" void isButtonVisible__13dMeter2Draw_cFv();
extern "C" void getCameraSubject__13dMeter2Draw_cFv();
extern "C" void getItemSubject__13dMeter2Draw_cFv();
extern "C" void getPlayerSubject__13dMeter2Draw_cFv();
extern "C" void isBButtonShow__13dMeter2Draw_cFb();
extern "C" void getButtonTimer__13dMeter2Draw_cFv();
extern "C" void isFloatingMessageVisible__13dMeter2Info_cFv();
extern "C" void isDirectUseItem__13dMeter2Info_cFi();
extern "C" void decHotSpringTimer__13dMeter2Info_cFv();
extern "C" bool dMeter2Info_is2DActiveTouchArea__Fv();
extern "C" void isPlaceMessage__12dMsgObject_cFv();
extern "C" void getStatus__12dMsgObject_cFv();
extern "C" void dTimer_createStockTimer__Fv();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void heartGaugeOn__11Z2StatusMgrFv();
extern "C" void freeAll__7JKRHeapFv();
extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void _savegpr_18();
extern "C" void _savegpr_19();
extern "C" void _savegpr_21();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_18();
extern "C" void _restgpr_19();
extern "C" void _restgpr_21();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopMsg_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_mwHIO[304];
extern "C" extern u8 g_drawHIO[3880];
extern "C" extern u8 g_ringHIO[344];
extern "C" extern u8 g_fmapHIO[1188];
extern "C" extern u8 g_cursorHIO[68 + 4 /* padding */];
extern "C" extern u8 g_meter2_info[248];
extern "C" extern u8 m_mode__7dDemo_c[4];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 804549C8-804549CC 002FC8 0004+00 9/9 0/0 0/0 .sdata2          @4662 */
SECTION_SDATA2 static u8 lit_4662[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804549CC-804549D0 002FCC 0004+00 13/13 0/0 0/0 .sdata2          @4663 */
SECTION_SDATA2 static f32 lit_4663 = 1.0f;

/* 8021EA14-8021F128 219354 0714+00 1/1 0/0 0/0 .text            _create__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::_create() {
    nofralloc
#include "asm/d/meter/d_meter2/_create__9dMeter2_cFv.s"
}
#pragma pop

/* 8021F128-8021F370 219A68 0248+00 1/1 0/0 0/0 .text            _execute__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::_execute() {
    nofralloc
#include "asm/d/meter/d_meter2/_execute__9dMeter2_cFv.s"
}
#pragma pop

/* 8021F370-8021F49C 219CB0 012C+00 1/1 0/0 0/0 .text            _draw__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::_draw() {
    nofralloc
#include "asm/d/meter/d_meter2/_draw__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804549D0-804549D8 002FD0 0004+04 10/10 0/0 0/0 .sdata2          @4837 */
SECTION_SDATA2 static f32 lit_4837[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};

/* 8021F49C-8021F6EC 219DDC 0250+00 1/1 0/0 0/0 .text            _delete__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::_delete() {
    nofralloc
#include "asm/d/meter/d_meter2/_delete__9dMeter2_cFv.s"
}
#pragma pop

/* 8021F6EC-8021F780 21A02C 0094+00 1/1 5/5 0/0 .text            emphasisButtonDelete__9dMeter2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::emphasisButtonDelete() {
    nofralloc
#include "asm/d/meter/d_meter2/emphasisButtonDelete__9dMeter2_cFv.s"
}
#pragma pop

/* 8021F780-8021F7B0 21A0C0 0030+00 0/0 0/0 1/1 .text            setLifeZero__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::setLifeZero() {
    nofralloc
#include "asm/d/meter/d_meter2/setLifeZero__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803BFA28-803BFA54 -00001 002C+00 1/1 0/0 0/0 .data            @5038 */
SECTION_DATA static void* lit_5038[11] = {
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x530),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x3FC),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x41C),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x40C),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x454),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x48C),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x454),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x4C4),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x500),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x530),
    (void*)(((char*)checkStatus__9dMeter2_cFv) + 0x40C),
};

/* 8021F7B0-8021FD60 21A0F0 05B0+00 2/1 0/0 0/0 .text            checkStatus__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::checkStatus() {
    nofralloc
#include "asm/d/meter/d_meter2/checkStatus__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804549D8-804549E0 002FD8 0008+00 4/4 0/0 0/0 .sdata2          @5267 */
SECTION_SDATA2 static f64 lit_5267 = 4503601774854144.0 /* cast s32 to float */;

/* 804549E0-804549E8 002FE0 0008+00 2/2 0/0 0/0 .sdata2          @5268 */
SECTION_SDATA2 static f64 lit_5268 = 4503599627370496.0 /* cast u32 to float */;

/* 8021FD60-80220180 21A6A0 0420+00 1/1 0/0 0/0 .text            moveLife__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveLife() {
    nofralloc
#include "asm/d/meter/d_meter2/moveLife__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804549E8-804549EC 002FE8 0004+00 4/4 0/0 0/0 .sdata2          @5791 */
SECTION_SDATA2 static f32 lit_5791 = 1.0f / 10.0f;

/* 80220180-8022051C 21AAC0 039C+00 1/1 0/0 0/0 .text            moveKantera__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveKantera() {
    nofralloc
#include "asm/d/meter/d_meter2/moveKantera__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804549EC-804549F0 002FEC 0004+00 2/2 0/0 0/0 .sdata2          @5933 */
SECTION_SDATA2 static f32 lit_5933 = 0.5f;

/* 8022051C-80220888 21AE5C 036C+00 1/1 0/0 0/0 .text            moveOxygen__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveOxygen() {
    nofralloc
#include "asm/d/meter/d_meter2/moveOxygen__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804549F0-804549F4 002FF0 0004+00 3/3 0/0 0/0 .sdata2          @6051 */
SECTION_SDATA2 static f32 lit_6051 = 10.0f;

/* 804549F4-804549F8 002FF4 0004+00 1/1 0/0 0/0 .sdata2          @6052 */
SECTION_SDATA2 static f32 lit_6052 = 1.0f / 5.0f;

/* 80220888-80220C30 21B1C8 03A8+00 1/1 0/0 0/0 .text            moveLightDrop__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveLightDrop() {
    nofralloc
#include "asm/d/meter/d_meter2/moveLightDrop__9dMeter2_cFv.s"
}
#pragma pop

/* 80220C30-802210AC 21B570 047C+00 1/1 0/0 0/0 .text            moveRupee__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveRupee() {
    nofralloc
#include "asm/d/meter/d_meter2/moveRupee__9dMeter2_cFv.s"
}
#pragma pop

/* 802210AC-80221244 21B9EC 0198+00 1/1 0/0 0/0 .text            moveKey__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveKey() {
    nofralloc
#include "asm/d/meter/d_meter2/moveKey__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804549F8-804549FC 002FF8 0004+00 2/2 0/0 0/0 .sdata2          @6564 */
SECTION_SDATA2 static f32 lit_6564 = 1.0f / 100.0f;

/* 80221244-802217F4 21BB84 05B0+00 1/1 0/0 0/0 .text            moveButtonA__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButtonA() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButtonA__9dMeter2_cFv.s"
}
#pragma pop

/* 802217F4-80221EC8 21C134 06D4+00 1/1 0/0 0/0 .text            moveButtonB__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButtonB() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButtonB__9dMeter2_cFv.s"
}
#pragma pop

/* 80221EC8-80222000 21C808 0138+00 1/1 0/0 0/0 .text            moveButtonR__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButtonR() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButtonR__9dMeter2_cFv.s"
}
#pragma pop

/* 80222000-802222A0 21C940 02A0+00 1/1 0/0 0/0 .text            moveButtonZ__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButtonZ() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButtonZ__9dMeter2_cFv.s"
}
#pragma pop

/* 802222A0-80222364 21CBE0 00C4+00 1/1 0/0 0/0 .text            moveButton3D__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButton3D() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButton3D__9dMeter2_cFv.s"
}
#pragma pop

/* 80222364-80222494 21CCA4 0130+00 1/1 0/0 0/0 .text            moveButtonC__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButtonC() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButtonC__9dMeter2_cFv.s"
}
#pragma pop

/* 80222494-80222518 21CDD4 0084+00 1/1 0/0 0/0 .text            moveButtonS__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButtonS() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButtonS__9dMeter2_cFv.s"
}
#pragma pop

/* 80222518-80222E88 21CE58 0970+00 1/1 0/0 0/0 .text            moveButtonXY__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButtonXY() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButtonXY__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804549FC-80454A00 002FFC 0004+00 1/1 0/0 0/0 .sdata2          @7509 */
SECTION_SDATA2 static f32 lit_7509 = 15.0f;

/* 80454A00-80454A04 003000 0004+00 1/1 0/0 0/0 .sdata2          @7510 */
SECTION_SDATA2 static f32 lit_7510 = 50.0f;

/* 80222E88-802230F8 21D7C8 0270+00 1/1 0/0 0/0 .text            moveButtonCross__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveButtonCross() {
    nofralloc
#include "asm/d/meter/d_meter2/moveButtonCross__9dMeter2_cFv.s"
}
#pragma pop

/* 802230F8-802230FC 21DA38 0004+00 1/1 0/0 0/0 .text            moveTouchSubMenu__9dMeter2_cFv */
void dMeter2_c::moveTouchSubMenu() {
    /* empty function */
}

/* 802230FC-802231C8 21DA3C 00CC+00 1/1 0/0 0/0 .text            moveSubContents__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveSubContents() {
    nofralloc
#include "asm/d/meter/d_meter2/moveSubContents__9dMeter2_cFv.s"
}
#pragma pop

/* 802231C8-802237D4 21DB08 060C+00 1/1 0/0 0/0 .text            move2DContents__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::move2DContents() {
    nofralloc
#include "asm/d/meter/d_meter2/move2DContents__9dMeter2_cFv.s"
}
#pragma pop

/* 802237D4-80223BC4 21E114 03F0+00 1/1 0/0 0/0 .text            checkSubContents__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::checkSubContents() {
    nofralloc
#include "asm/d/meter/d_meter2/checkSubContents__9dMeter2_cFv.s"
}
#pragma pop

/* 80223BC4-80223E00 21E504 023C+00 1/1 0/0 0/0 .text            check2DContents__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::check2DContents() {
    nofralloc
#include "asm/d/meter/d_meter2/check2DContents__9dMeter2_cFv.s"
}
#pragma pop

/* 80223E00-80224258 21E740 0458+00 1/1 0/0 0/0 .text            moveBombNum__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveBombNum() {
    nofralloc
#include "asm/d/meter/d_meter2/moveBombNum__9dMeter2_cFv.s"
}
#pragma pop

/* 80224258-80224354 21EB98 00FC+00 1/1 0/0 0/0 .text            moveBottleNum__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveBottleNum() {
    nofralloc
#include "asm/d/meter/d_meter2/moveBottleNum__9dMeter2_cFv.s"
}
#pragma pop

/* 80224354-80224680 21EC94 032C+00 1/1 0/0 0/0 .text            moveArrowNum__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::moveArrowNum() {
    nofralloc
#include "asm/d/meter/d_meter2/moveArrowNum__9dMeter2_cFv.s"
}
#pragma pop

/* 80224680-802248E4 21EFC0 0264+00 1/1 0/0 0/0 .text            movePachinkoNum__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::movePachinkoNum() {
    nofralloc
#include "asm/d/meter/d_meter2/movePachinkoNum__9dMeter2_cFv.s"
}
#pragma pop

/* 802248E4-80224A04 21F224 0120+00 1/1 0/0 0/0 .text            alphaAnimeLife__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::alphaAnimeLife() {
    nofralloc
#include "asm/d/meter/d_meter2/alphaAnimeLife__9dMeter2_cFv.s"
}
#pragma pop

/* 80224A04-80224BAC 21F344 01A8+00 1/1 0/0 0/0 .text            alphaAnimeKantera__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::alphaAnimeKantera() {
    nofralloc
#include "asm/d/meter/d_meter2/alphaAnimeKantera__9dMeter2_cFv.s"
}
#pragma pop

/* 80224BAC-80224D6C 21F4EC 01C0+00 1/1 0/0 0/0 .text            alphaAnimeOxygen__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::alphaAnimeOxygen() {
    nofralloc
#include "asm/d/meter/d_meter2/alphaAnimeOxygen__9dMeter2_cFv.s"
}
#pragma pop

/* 80224D6C-80224DC0 21F6AC 0054+00 1/1 0/0 0/0 .text            alphaAnimeLightDrop__9dMeter2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::alphaAnimeLightDrop() {
    nofralloc
#include "asm/d/meter/d_meter2/alphaAnimeLightDrop__9dMeter2_cFv.s"
}
#pragma pop

/* 80224DC0-80224F70 21F700 01B0+00 1/1 0/0 0/0 .text            alphaAnimeRupee__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::alphaAnimeRupee() {
    nofralloc
#include "asm/d/meter/d_meter2/alphaAnimeRupee__9dMeter2_cFv.s"
}
#pragma pop

/* 80224F70-802250F4 21F8B0 0184+00 1/1 0/0 0/0 .text            alphaAnimeKey__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::alphaAnimeKey() {
    nofralloc
#include "asm/d/meter/d_meter2/alphaAnimeKey__9dMeter2_cFv.s"
}
#pragma pop

/* 802250F4-802254C0 21FA34 03CC+00 1/1 0/0 0/0 .text            alphaAnimeButton__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::alphaAnimeButton() {
    nofralloc
#include "asm/d/meter/d_meter2/alphaAnimeButton__9dMeter2_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454A04-80454A08 003004 0004+00 1/1 0/0 0/0 .sdata2          @9090 */
SECTION_SDATA2 static f32 lit_9090 = 255.0f;

/* 80454A08-80454A10 003008 0004+04 1/1 0/0 0/0 .sdata2          @9091 */
SECTION_SDATA2 static f32 lit_9091[1 + 1 /* padding */] = {
    5.0f,
    /* padding */
    0.0f,
};

/* 802254C0-802256DC 21FE00 021C+00 1/1 0/0 0/0 .text            alphaAnimeButtonCross__9dMeter2_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::alphaAnimeButtonCross() {
    nofralloc
#include "asm/d/meter/d_meter2/alphaAnimeButtonCross__9dMeter2_cFv.s"
}
#pragma pop

/* 802256DC-802258A0 22001C 01C4+00 3/3 0/0 0/0 .text            isShowLightDrop__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::isShowLightDrop() {
    nofralloc
#include "asm/d/meter/d_meter2/isShowLightDrop__9dMeter2_cFv.s"
}
#pragma pop

/* 802258A0-80225960 2201E0 00C0+00 1/1 0/0 0/0 .text            killSubContents__9dMeter2_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::killSubContents(u8 param_0) {
    nofralloc
#include "asm/d/meter/d_meter2/killSubContents__9dMeter2_cFUc.s"
}
#pragma pop

/* 80225960-802259F8 2202A0 0098+00 1/1 0/0 0/0 .text            isKeyVisible__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::isKeyVisible() {
    nofralloc
#include "asm/d/meter/d_meter2/isKeyVisible__9dMeter2_cFv.s"
}
#pragma pop

/* 802259F8-80225A64 220338 006C+00 2/2 0/0 0/0 .text            isArrowEquip__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::isArrowEquip() {
    nofralloc
#include "asm/d/meter/d_meter2/isArrowEquip__9dMeter2_cFv.s"
}
#pragma pop

/* 80225A64-80225AA0 2203A4 003C+00 2/2 0/0 0/0 .text            isPachinkoEquip__9dMeter2_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMeter2_c::isPachinkoEquip() {
    nofralloc
#include "asm/d/meter/d_meter2/isPachinkoEquip__9dMeter2_cFv.s"
}
#pragma pop

/* 80225AA0-80225AC0 2203E0 0020+00 1/0 0/0 0/0 .text            dMeter2_Draw__FP9dMeter2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dMeter2_Draw(dMeter2_c* param_0) {
    nofralloc
#include "asm/d/meter/d_meter2/dMeter2_Draw__FP9dMeter2_c.s"
}
#pragma pop

/* 80225AC0-80225AE0 220400 0020+00 1/0 0/0 0/0 .text            dMeter2_Execute__FP9dMeter2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dMeter2_Execute(dMeter2_c* param_0) {
    nofralloc
#include "asm/d/meter/d_meter2/dMeter2_Execute__FP9dMeter2_c.s"
}
#pragma pop

/* 80225AE0-80225AE8 220420 0008+00 1/0 0/0 0/0 .text            dMeter2_IsDelete__FP9dMeter2_c */
static bool dMeter2_IsDelete(dMeter2_c* param_0) {
    return true;
}

/* 80225AE8-80225B08 220428 0020+00 1/0 0/0 0/0 .text            dMeter2_Delete__FP9dMeter2_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dMeter2_Delete(dMeter2_c* param_0) {
    nofralloc
#include "asm/d/meter/d_meter2/dMeter2_Delete__FP9dMeter2_c.s"
}
#pragma pop

/* 80225B08-80225BB8 220448 00B0+00 1/0 0/0 0/0 .text            dMeter2_Create__FP9msg_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dMeter2_Create(msg_class* param_0) {
    nofralloc
#include "asm/d/meter/d_meter2/dMeter2_Create__FP9msg_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 803BFA54-803BFA68 -00001 0014+00 1/0 0/0 0/0 .data            l_dMeter2_Method */
SECTION_DATA static void* l_dMeter2_Method[5] = {
    (void*)dMeter2_Create__FP9msg_class,  (void*)dMeter2_Delete__FP9dMeter2_c,
    (void*)dMeter2_Execute__FP9dMeter2_c, (void*)dMeter2_IsDelete__FP9dMeter2_c,
    (void*)dMeter2_Draw__FP9dMeter2_c,
};

/* 803BFA68-803BFA90 -00001 0028+00 0/0 0/0 1/0 .data            g_profile_METER2 */
SECTION_DATA extern void* g_profile_METER2[10] = {
    (void*)0xFFFFFFFD, (void*)0x000CFFFD,
    (void*)0x03160000, (void*)&g_fpcLf_Method,
    (void*)0x000004C0, (void*)NULL,
    (void*)NULL,       (void*)&g_fopMsg_Method,
    (void*)0x03010000, (void*)&l_dMeter2_Method,
};

/* 80399338-80399350 025998 0017+01 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80399338 = "F_SP00";
SECTION_DEAD static char const* const stringBase_8039933F = "F_SP103";
SECTION_DEAD static char const* const stringBase_80399347 = "R_SP127";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039934F = "";
#pragma pop
