//
// Generated By: dol2asm
// Translation Unit: d/d_timer
//

#include "d/d_timer.h"
#include "d/com/d_com_inf_game.h"
#include "f_op/f_op_msg_mng.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "m_Do/m_Do_lib.h"


//
// Types:
//

struct dMsgObject_c {
    /* 8023822C */ void getStatus();
};



struct J2DAnmLoaderDataBase {
    /* 80308A6C */ void load(void const*);
};

//
// Forward References:
//

extern "C" void _create__8dTimer_cFv();
extern "C" void _execute__8dTimer_cFv();
extern "C" void _draw__8dTimer_cFv();
extern "C" void _delete__8dTimer_cFv();
extern "C" void deleteCheck__8dTimer_cFv();
extern "C" void start__8dTimer_cFi();
extern "C" void start__8dTimer_cFis();
extern "C" void stock_start__8dTimer_cFv();
extern "C" void stock_start__8dTimer_cFs();
extern "C" void stop__8dTimer_cFUc();
extern "C" void restart__8dTimer_cFUc();
extern "C" void end__8dTimer_cFi();
extern "C" void deleteRequest__8dTimer_cFv();
extern "C" void getTimeMs__8dTimer_cFv();
extern "C" void getLimitTimeMs__8dTimer_cFv();
extern "C" void getRestTimeMs__8dTimer_cFv();
extern "C" void isStart__8dTimer_cFv();
extern "C" void __ct__21dDlst_TimerScrnDraw_cFv();
extern "C" void setHIO__21dDlst_TimerScrnDraw_cFv();
extern "C" void setScreen__21dDlst_TimerScrnDraw_cFlP10JKRArchive();
extern "C" void setScreenBase__21dDlst_TimerScrnDraw_cFv();
extern "C" void setScreenBoatRace__21dDlst_TimerScrnDraw_cFv();
extern "C" void setScreenRider__21dDlst_TimerScrnDraw_cFv();
extern "C" void hideDenominator__21dDlst_TimerScrnDraw_cFv();
extern "C" void deleteScreen__21dDlst_TimerScrnDraw_cFv();
extern "C" void changeNumberTexture__21dDlst_TimerScrnDraw_cFP7J2DPanei();
extern "C" void getNumber__21dDlst_TimerScrnDraw_cFi();
extern "C" void setTimer__21dDlst_TimerScrnDraw_cFi();
extern "C" void setCounter__21dDlst_TimerScrnDraw_cFUcUc();
extern "C" void setParentPos__21dDlst_TimerScrnDraw_cFff();
extern "C" void setTimerPos__21dDlst_TimerScrnDraw_cFff();
extern "C" void setCounterPos__21dDlst_TimerScrnDraw_cFff();
extern "C" void setImagePos__21dDlst_TimerScrnDraw_cFff();
extern "C" void setShowType__21dDlst_TimerScrnDraw_cFUc();
extern "C" void anime__21dDlst_TimerScrnDraw_cFv();
extern "C" void closeAnime__21dDlst_TimerScrnDraw_cFv();
extern "C" void createGetIn__21dDlst_TimerScrnDraw_cF4cXyz();
extern "C" void createStart__21dDlst_TimerScrnDraw_cFUs();
extern "C" void draw__21dDlst_TimerScrnDraw_cFv();
extern "C" void checkStartAnimeEnd__21dDlst_TimerScrnDraw_cFv();
extern "C" void playBckAnimation__21dDlst_TimerScrnDraw_cFf();
extern "C" void drawPikari__21dDlst_TimerScrnDraw_cFi();
extern "C" static void dTimer_Draw__FP8dTimer_c();
extern "C" static void dTimer_Execute__FP8dTimer_c();
extern "C" static bool dTimer_IsDelete__FP8dTimer_c();
extern "C" static void dTimer_Delete__FP8dTimer_c();
extern "C" static void dTimer_Create__FP9msg_class();
extern "C" void dTimer_createTimer__FlUlUcUcffff();
extern "C" void dTimer_createStockTimer__Fv();
extern "C" void dTimer_createGetIn2D__Fl4cXyz();
extern "C" static void dTimer_createStart2D__FlUs();
extern "C" void dTimer_isStart__Fv();
extern "C" void dTimer_getRestTimeMs__Fv();
extern "C" void dTimer_show__Fv();
extern "C" void dTimer_hide__Fv();
extern "C" void dTimer_isReadyFlag__Fv();
extern "C" void __dt__21dDlst_TimerScrnDraw_cFv();
extern "C" void createGetIn__8dTimer_cF4cXyz();
extern "C" extern char const* const d_d_timer__stringBase0;

//
// External References:
//

extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void fopMsgM_GetAppend__FPv();
extern "C" void fopMsgM_Delete__FPv();
extern "C" void fop_Timer_create__FsUcUlUcUcffffPFPv_i();
extern "C" void fopMsgM_createExpHeap__FUlP7JKRHeap();
extern "C" void fopMsgM_destroyExpHeap__FP10JKRExpHeap();
extern "C" void setTimerNowTimeMs__14dComIfG_play_cFi();
extern "C" void getTimerNowTimeMs__14dComIfG_play_cFv();
extern "C" void setTimerLimitTimeMs__14dComIfG_play_cFi();
extern "C" void getTimerLimitTimeMs__14dComIfG_play_cFv();
extern "C" void setTimerMode__14dComIfG_play_cFi();
extern "C" void getTimerMode__14dComIfG_play_cFv();
extern "C" void setTimerType__14dComIfG_play_cFUc();
extern "C" void getTimerType__14dComIfG_play_cFv();
extern "C" void setTimerPtr__14dComIfG_play_cFP8dTimer_c();
extern "C" void getTimerPtr__14dComIfG_play_cFv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getTime__11dLib_time_cFv();
extern "C" void getResInfo__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void
drawPikari__13dMeter2Draw_cFffPffQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorfUc();
extern "C" void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void dMeter2Info_getNumberTextureName__Fi();
extern "C" void getStatus__12dMsgObject_cFv();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void setAlphaRate__13CPaneMgrAlphaFf();
extern "C" void cM_rndFX__Ff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void getParentPane__7J2DPaneFv();
extern "C" void animationTransform__7J2DPaneFv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" void _savefpr_28();
extern "C" void _restfpr_28();
extern "C" void _savegpr_21();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void __div2i();
extern "C" extern void* g_fopMsg_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" extern u8 g_drawHIO[3880];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 8039A3D8-8039A3D8 026A38 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A3D8 = "Timer";
#pragma pop

/* 80454F40-80454F44 003540 0004+00 10/10 0/0 0/0 .sdata2          @3919 */
SECTION_SDATA2 static u8 lit_3919[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454F44-80454F48 003544 0004+00 2/2 0/0 0/0 .sdata2          @3920 */
SECTION_SDATA2 static f32 lit_3920 = 145.0f;

/* 8025CA0C-8025CF04 25734C 04F8+00 1/1 0/0 0/0 .text            _create__8dTimer_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_c::_create() {
    nofralloc
#include "asm/d/d_timer/_create__8dTimer_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454F48-80454F4C 003548 0004+00 3/3 0/0 0/0 .sdata2          @4050 */
SECTION_SDATA2 static f32 lit_4050 = 25.0f;

/* 8025CF04-8025D33C 257844 0438+00 1/1 0/0 0/0 .text            _execute__8dTimer_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_c::_execute() {
    nofralloc
#include "asm/d/d_timer/_execute__8dTimer_cFv.s"
}
#pragma pop

/* 8025D33C-8025D3BC 257C7C 0080+00 1/1 0/0 0/0 .text            _draw__8dTimer_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_c::_draw() {
    nofralloc
#include "asm/d/d_timer/_draw__8dTimer_cFv.s"
}
#pragma pop

/* 8025D3BC-8025D524 257CFC 0168+00 1/1 0/0 0/0 .text            _delete__8dTimer_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_c::_delete() {
    nofralloc
#include "asm/d/d_timer/_delete__8dTimer_cFv.s"
}
#pragma pop

/* 8025D524-8025D538 257E64 0014+00 0/0 1/1 0/0 .text            deleteCheck__8dTimer_cFv */
int dTimer_c::deleteCheck() {
    return mDeleteCheck == 7;
}

/* 8025D538-8025D618 257E78 00E0+00 1/1 1/1 0/0 .text            start__8dTimer_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_c::start(int param_0) {
    nofralloc
#include "asm/d/d_timer/start__8dTimer_cFi.s"
}
#pragma pop

/* 8025D618-8025D708 257F58 00F0+00 0/0 1/1 0/0 .text            start__8dTimer_cFis */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_c::start(int param_0, s16 param_1) {
    nofralloc
#include "asm/d/d_timer/start__8dTimer_cFis.s"
}
#pragma pop

/* 8025D708-8025D7C0 258048 00B8+00 1/1 0/0 0/0 .text            stock_start__8dTimer_cFv */
#ifdef NONMATCHING
bool dTimer_c::stock_start() {
    if (mDeleteCheck == 5) {
        mDeleteCheck = 4;
        OSTime current_time = dLib_time_c::getTime();
        mTime1 = current_time;
        mTime2 = current_time;
        
        int timer_ms = dComIfG_getTimerNowTimeMs();
        OSTime time1 = mTime1;
        u32 timer_clock_ms = OS_TIMER_CLOCK / 1000;

        mTime1 = time1 - timer_clock_ms * timer_ms;

    }
    return mDeleteCheck == 5;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool dTimer_c::stock_start() {
    nofralloc
#include "asm/d/d_timer/stock_start__8dTimer_cFv.s"
}
#pragma pop
#endif

/* 8025D7C0-8025D7E8 258100 0028+00 1/1 0/0 0/0 .text            stock_start__8dTimer_cFs */
int dTimer_c::stock_start(s16 param_0) {
    if (mDeleteCheck == 0) {
        field_0x168 = param_0;
        mDeleteCheck = 5;
        return 1;
    }
    return 0;
}

/* 8025D7E8-8025D86C 258128 0084+00 3/3 1/1 0/0 .text            stop__8dTimer_cFUc */
int dTimer_c::stop(u8 param_0) {
    int ret;

    if (field_0x16A == 1 || field_0x16B != 0) {
        ret = 0;
    } else if (mDeleteCheck != 4) {
        ret = 0;
    } else {
        mTime3 = dLib_time_c::getTime();
        field_0x16A = 1;
        field_0x16B = param_0;
        ret = 1;
    }

    return ret;
}

/* 8025D86C-8025D920 2581AC 00B4+00 1/1 1/1 0/0 .text            restart__8dTimer_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_c::restart(u8 param_0) {
    nofralloc
#include "asm/d/d_timer/restart__8dTimer_cFUc.s"
}
#pragma pop

/* 8025D920-8025D9E0 258260 00C0+00 0/0 1/1 0/0 .text            end__8dTimer_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_c::end(int param_0) {
    nofralloc
#include "asm/d/d_timer/end__8dTimer_cFi.s"
}
#pragma pop

/* 8025D9E0-8025D9F0 258320 0010+00 0/0 1/1 0/0 .text            deleteRequest__8dTimer_cFv */
int dTimer_c::deleteRequest() {
    mDeleteCheck = 8;
    return 1;
}

/* 8025D9F0-8025DA54 258330 0064+00 3/3 0/0 0/0 .text            getTimeMs__8dTimer_cFv */
int dTimer_c::getTimeMs() {
    return (mTime2 - mTime1 - mTime5) / OS_TIMER_CLOCK_MS;
}
/* 8025DA54-8025DA9C 258394 0048+00 3/3 0/0 0/0 .text            getLimitTimeMs__8dTimer_cFv */
int dTimer_c::getLimitTimeMs() {
    return mLimitTime / OS_TIMER_CLOCK_MS;
}

/* 8025DA9C-8025DB10 2583DC 0074+00 2/2 0/0 1/1 .text            getRestTimeMs__8dTimer_cFv */
#ifdef NONMATCHING
// regs swapped
int dTimer_c::getRestTimeMs() {
    OSTime tmpTime2 = mTime2 - mTime1 - mTime5;
    // OSTime tmpTime = (mTime5) - mLimitTime;
    
   return (tmpTime2 - mLimitTime) / OS_TIMER_CLOCK_MS;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dTimer_c::getRestTimeMs() {
    nofralloc
#include "asm/d/d_timer/getRestTimeMs__8dTimer_cFv.s"
}
#pragma pop
#endif

/* 8025DB10-8025DB38 258450 0028+00 1/1 0/0 4/4 .text            isStart__8dTimer_cFv */
int dTimer_c::isStart() {
    if (field_0x16A != 1 && mDeleteCheck == 4) {
        return 1;
    }
    return 0;
}
/* ############################################################################################## */
/* 803C33C0-803C33E4 -00001 0024+00 1/1 0/0 0/0 .data            @5239 */
SECTION_DATA static void* lit_5239[9] = {
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x2B8),
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x250),
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x258),
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x260),
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x268),
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x274),
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x280),
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x288),
    (void*)(((char*)createGetIn__21dDlst_TimerScrnDraw_cF4cXyz) + 0x294),
};

/* 803C33E4-803C33F8 -00001 0014+00 1/0 0/0 0/0 .data            l_dTimer_Method */
SECTION_DATA static void* l_dTimer_Method[5] = {
    (void*)dTimer_Create__FP9msg_class, (void*)dTimer_Delete__FP8dTimer_c,
    (void*)dTimer_Execute__FP8dTimer_c, (void*)dTimer_IsDelete__FP8dTimer_c,
    (void*)dTimer_Draw__FP8dTimer_c,
};

/* 803C33F8-803C3420 -00001 0028+00 0/0 0/0 1/0 .data            g_profile_TIMER */
SECTION_DATA extern void* g_profile_TIMER[10] = {
    (void*)0xFFFFFFFD, (void*)0x000CFFFD,
    (void*)0x03150000, (void*)&g_fpcLf_Method,
    (void*)0x00000170, (void*)NULL,
    (void*)NULL,       (void*)&g_fopMsg_Method,
    (void*)0x03000000, (void*)&l_dTimer_Method,
};

/* 803C3420-803C3430 020540 0010+00 2/2 0/0 0/0 .data            __vt__21dDlst_TimerScrnDraw_c */
SECTION_DATA extern void* __vt__21dDlst_TimerScrnDraw_c[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__21dDlst_TimerScrnDraw_cFv,
    (void*)__dt__21dDlst_TimerScrnDraw_cFv,
};

/* 8025DB38-8025DBE0 258478 00A8+00 1/1 0/0 0/0 .text            __ct__21dDlst_TimerScrnDraw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_TimerScrnDraw_c::dDlst_TimerScrnDraw_c() {
    nofralloc
#include "asm/d/d_timer/__ct__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* 8025DBE0-8025DFBC 258520 03DC+00 1/1 0/0 0/0 .text            setHIO__21dDlst_TimerScrnDraw_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setHIO() {
    nofralloc
#include "asm/d/d_timer/setHIO__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A3D8-8039A3D8 026A38 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A3DE = "zelda_game_image_cow_get_in.blo";
SECTION_DEAD static char const* const stringBase_8039A3FE = "zelda_game_image_cow_get_in.bck";
#pragma pop

/* 8025DFBC-8025E240 2588FC 0284+00 1/1 0/0 0/0 .text
 * setScreen__21dDlst_TimerScrnDraw_cFlP10JKRArchive            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setScreen(s32 param_0, JKRArchive* param_1) {
    nofralloc
#include "asm/d/d_timer/setScreen__21dDlst_TimerScrnDraw_cFlP10JKRArchive.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A3D8-8039A3D8 026A38 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A41E = "zelda_game_image_cow_game.blo";
#pragma pop

/* 8025E240-8025E66C 258B80 042C+00 1/1 0/0 0/0 .text setScreenBase__21dDlst_TimerScrnDraw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setScreenBase() {
    nofralloc
#include "asm/d/d_timer/setScreenBase__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A3D8-8039A3D8 026A38 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A43C = "zelda_game_image_zora_kawakudari.blo";
#pragma pop

/* 8025E66C-8025E8B8 258FAC 024C+00 1/1 0/0 0/0 .text setScreenBoatRace__21dDlst_TimerScrnDraw_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setScreenBoatRace() {
    nofralloc
#include "asm/d/d_timer/setScreenBoatRace__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A3D8-8039A3D8 026A38 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A461 = "zelda_game_image_rider.blo";
#pragma pop

/* 8025E8B8-8025EB20 2591F8 0268+00 1/1 0/0 0/0 .text setScreenRider__21dDlst_TimerScrnDraw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setScreenRider() {
    nofralloc
#include "asm/d/d_timer/setScreenRider__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* 8025EB20-8025EC5C 259460 013C+00 1/1 0/0 0/0 .text hideDenominator__21dDlst_TimerScrnDraw_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::hideDenominator() {
    nofralloc
#include "asm/d/d_timer/hideDenominator__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* 8025EC5C-8025EE24 25959C 01C8+00 1/1 0/0 0/0 .text deleteScreen__21dDlst_TimerScrnDraw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::deleteScreen() {
    nofralloc
#include "asm/d/d_timer/deleteScreen__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* 8025EE24-8025EECC 259764 00A8+00 2/2 0/0 0/0 .text
 * changeNumberTexture__21dDlst_TimerScrnDraw_cFP7J2DPanei      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::changeNumberTexture(J2DPane* param_0, int param_1) {
    nofralloc
#include "asm/d/d_timer/changeNumberTexture__21dDlst_TimerScrnDraw_cFP7J2DPanei.s"
}
#pragma pop

/* 8025EECC-8025EEF0 25980C 0024+00 1/1 0/0 0/0 .text getNumber__21dDlst_TimerScrnDraw_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::getNumber(int param_0) {
    nofralloc
#include "asm/d/d_timer/getNumber__21dDlst_TimerScrnDraw_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454F4C-80454F50 00354C 0004+00 5/5 0/0 0/0 .sdata2          @4124 */
SECTION_SDATA2 static f32 lit_4124 = 1.0f;

/* 80454F50-80454F58 003550 0004+04 3/3 0/0 0/0 .sdata2          @4125 */
SECTION_SDATA2 static f32 lit_4125[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};

/* 80454F58-80454F60 003558 0008+00 7/7 0/0 0/0 .sdata2          @4627 */
SECTION_SDATA2 static f64 lit_4627 = 4503601774854144.0 /* cast s32 to float */;

/* 8025EEF0-8025F180 259830 0290+00 1/1 0/0 0/0 .text            setTimer__21dDlst_TimerScrnDraw_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setTimer(int param_0) {
    nofralloc
#include "asm/d/d_timer/setTimer__21dDlst_TimerScrnDraw_cFi.s"
}
#pragma pop

/* 8025F180-8025FA00 259AC0 0880+00 1/1 0/0 0/0 .text setCounter__21dDlst_TimerScrnDraw_cFUcUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setCounter(u8 param_0, u8 param_1) {
    nofralloc
#include "asm/d/d_timer/setCounter__21dDlst_TimerScrnDraw_cFUcUc.s"
}
#pragma pop

/* 8025FA00-8025FA2C 25A340 002C+00 1/1 0/0 0/0 .text setParentPos__21dDlst_TimerScrnDraw_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setParentPos(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/d_timer/setParentPos__21dDlst_TimerScrnDraw_cFff.s"
}
#pragma pop

/* 8025FA2C-8025FA6C 25A36C 0040+00 4/4 0/0 0/0 .text setTimerPos__21dDlst_TimerScrnDraw_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setTimerPos(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/d_timer/setTimerPos__21dDlst_TimerScrnDraw_cFff.s"
}
#pragma pop

/* 8025FA6C-8025FA98 25A3AC 002C+00 4/4 0/0 0/0 .text setCounterPos__21dDlst_TimerScrnDraw_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setCounterPos(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/d_timer/setCounterPos__21dDlst_TimerScrnDraw_cFff.s"
}
#pragma pop

/* 8025FA98-8025FAC4 25A3D8 002C+00 4/4 0/0 0/0 .text setImagePos__21dDlst_TimerScrnDraw_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setImagePos(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/d/d_timer/setImagePos__21dDlst_TimerScrnDraw_cFff.s"
}
#pragma pop

/* 8025FAC4-8025FB74 25A404 00B0+00 2/2 0/0 0/0 .text setShowType__21dDlst_TimerScrnDraw_cFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::setShowType(u8 param_0) {
    nofralloc
#include "asm/d/d_timer/setShowType__21dDlst_TimerScrnDraw_cFUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454F60-80454F68 003560 0006+02 1/1 0/0 0/0 .sdata2          animeFrame$5017 */
SECTION_SDATA2 static u8 animeFrame[6 + 2 /* padding */] = {
    0x00,
    0x07,
    0x00,
    0x0F,
    0x00,
    0x16,
    /* padding */
    0x00,
    0x00,
};

/* 80454F68-80454F6C 003568 0004+00 3/3 0/0 0/0 .sdata2          @5094 */
SECTION_SDATA2 static f32 lit_5094 = -50.0f;

/* 8025FB74-8025FF98 25A4B4 0424+00 1/1 0/0 0/0 .text            anime__21dDlst_TimerScrnDraw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::anime() {
    nofralloc
#include "asm/d/d_timer/anime__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454F6C-80454F70 00356C 0004+00 1/1 0/0 0/0 .sdata2          @5143 */
SECTION_SDATA2 static f32 lit_5143 = 49.0f;

/* 8025FF98-802601E4 25A8D8 024C+00 1/1 0/0 0/0 .text closeAnime__21dDlst_TimerScrnDraw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::closeAnime() {
    nofralloc
#include "asm/d/d_timer/closeAnime__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454F70-80454F74 003570 0004+00 3/3 0/0 0/0 .sdata2          @5227 */
SECTION_SDATA2 static f32 lit_5227 = 40.0f;

/* 80454F74-80454F78 003574 0004+00 2/2 0/0 0/0 .sdata2          @5228 */
SECTION_SDATA2 static f32 lit_5228 = 60.0f;

/* 80454F78-80454F7C 003578 0004+00 1/1 0/0 0/0 .sdata2          @5229 */
SECTION_SDATA2 static f32 lit_5229 = -100.0f;

/* 80454F7C-80454F80 00357C 0004+00 1/1 0/0 0/0 .sdata2          @5230 */
SECTION_SDATA2 static f32 lit_5230 = 100.0f;

/* 80454F80-80454F84 003580 0004+00 1/1 0/0 0/0 .sdata2          @5231 */
SECTION_SDATA2 static f32 lit_5231 = 75.0f;

/* 80454F84-80454F88 003584 0004+00 1/1 0/0 0/0 .sdata2          @5232 */
SECTION_SDATA2 static f32 lit_5232 = -75.0f;

/* 80454F88-80454F8C 003588 0004+00 1/1 0/0 0/0 .sdata2          @5233 */
SECTION_SDATA2 static f32 lit_5233 = 200.0f;

/* 80454F8C-80454F90 00358C 0004+00 1/1 0/0 0/0 .sdata2          @5234 */
SECTION_SDATA2 static f32 lit_5234 = 150.0f;

/* 80454F90-80454F94 003590 0004+00 1/1 0/0 0/0 .sdata2          @5235 */
SECTION_SDATA2 static f32 lit_5235 = 20.0f;

/* 802601E4-80260574 25AB24 0390+00 2/1 0/0 0/0 .text createGetIn__21dDlst_TimerScrnDraw_cF4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::createGetIn(cXyz param_0) {
    nofralloc
#include "asm/d/d_timer/createGetIn__21dDlst_TimerScrnDraw_cF4cXyz.s"
}
#pragma pop

/* 80260574-80260690 25AEB4 011C+00 3/3 0/0 0/0 .text createStart__21dDlst_TimerScrnDraw_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm s32 dDlst_TimerScrnDraw_c::createStart(u16 param_0) {
    nofralloc
#include "asm/d/d_timer/createStart__21dDlst_TimerScrnDraw_cFUs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454F94-80454F98 003594 0004+00 1/1 0/0 0/0 .sdata2          @5325 */
SECTION_SDATA2 static f32 lit_5325 = 3.0f / 20.0f;

/* 80454F98-80454F9C 003598 0004+00 2/2 0/0 0/0 .sdata2          @5326 */
SECTION_SDATA2 static f32 lit_5326 = 0.5f;

/* 80454F9C-80454FA0 00359C 0004+00 1/1 0/0 0/0 .sdata2          @5327 */
SECTION_SDATA2 static f32 lit_5327 = 18.0f;

/* 80260690-80260AA8 25AFD0 0418+00 1/0 0/0 0/0 .text            draw__21dDlst_TimerScrnDraw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::draw() {
    nofralloc
#include "asm/d/d_timer/draw__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* 80260AA8-80260AD4 25B3E8 002C+00 1/1 0/0 0/0 .text
 * checkStartAnimeEnd__21dDlst_TimerScrnDraw_cFv                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::checkStartAnimeEnd() {
    nofralloc
#include "asm/d/d_timer/checkStartAnimeEnd__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* 80260AD4-80260B54 25B414 0080+00 2/2 0/0 0/0 .text playBckAnimation__21dDlst_TimerScrnDraw_cFf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::playBckAnimation(f32 param_0) {
    nofralloc
#include "asm/d/d_timer/playBckAnimation__21dDlst_TimerScrnDraw_cFf.s"
}
#pragma pop

/* 80260B54-80260F04 25B494 03B0+00 1/1 0/0 0/0 .text drawPikari__21dDlst_TimerScrnDraw_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_TimerScrnDraw_c::drawPikari(int param_0) {
    nofralloc
#include "asm/d/d_timer/drawPikari__21dDlst_TimerScrnDraw_cFi.s"
}
#pragma pop

/* 80260F04-80260F24 25B844 0020+00 1/0 0/0 0/0 .text            dTimer_Draw__FP8dTimer_c */
static void dTimer_Draw(dTimer_c* i_timer) {
    i_timer->_draw();
}

/* 80260F24-80260F44 25B864 0020+00 1/0 0/0 0/0 .text            dTimer_Execute__FP8dTimer_c */
static void dTimer_Execute(dTimer_c* i_timer) {
    i_timer->_execute();
}

/* 80260F44-80260F4C 25B884 0008+00 1/0 0/0 0/0 .text            dTimer_IsDelete__FP8dTimer_c */
static bool dTimer_IsDelete(dTimer_c* i_timer) {
    return true;
}

/* 80260F4C-80260F6C 25B88C 0020+00 1/0 0/0 0/0 .text            dTimer_Delete__FP8dTimer_c */
static void dTimer_Delete(dTimer_c* i_timer) {
    i_timer->_delete();
}

/* 80260F6C-80260F8C 25B8AC 0020+00 1/0 0/0 0/0 .text            dTimer_Create__FP9msg_class */
static void dTimer_Create(msg_class* i_timer) {
    ((dTimer_c*)i_timer)->_create();
}

/* 80260F8C-80261034 25B8CC 00A8+00 0/0 1/1 9/9 .text            dTimer_createTimer__FlUlUcUcffff */
s32 dTimer_createTimer(s32 param_0, u32 param_1, u8 param_2, u8 param_3, f32 param_4,
                            f32 param_5, f32 param_6, f32 param_7) {
    s32 ret;

    if (dComIfG_getTimerMode() == -1) {
        ret = fopMsgM_Timer_create(0x315,param_0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    }
    else {
        ret = -1;
    }
    
    return ret;
}
/* ############################################################################################## */
/* 8039A3D8-8039A3D8 026A38 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A47C = "F_SP115";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039A484 = "\0\0\0";
#pragma pop

/* 80454FA0-80454FA4 0035A0 0004+00 1/1 0/0 0/0 .sdata2          @5544 */
SECTION_SDATA2 static f32 lit_5544 = 221.0f;

/* 80454FA4-80454FA8 0035A4 0004+00 1/1 0/0 0/0 .sdata2          @5545 */
SECTION_SDATA2 static f32 lit_5545 = 439.0f;

/* 80454FA8-80454FAC 0035A8 0004+00 1/1 0/0 0/0 .sdata2          @5546 */
SECTION_SDATA2 static f32 lit_5546 = 32.0f;

/* 80454FAC-80454FB0 0035AC 0004+00 1/1 0/0 0/0 .sdata2          @5547 */
SECTION_SDATA2 static f32 lit_5547 = 419.0f;

/* 80261034-80261100 25B974 00CC+00 0/0 1/1 0/0 .text            dTimer_createStockTimer__Fv */
s32 dTimer_createStockTimer() {
    if (dComIfG_getTimerMode() != -1) {
        if ((dComIfG_getTimerMode() == 3 || dComIfG_getTimerMode() == 4) && strcmp(dComIfGp_getStartStageName(),"F_SP115")) {
            dComIfG_setTimerMode(-1);
            return -1;
        } else {
            u8 timer_type = dComIfG_getTimerType();
            return fopMsgM_Timer_create(0x315,10,0,timer_type,0,FLOAT_LABEL(lit_5544),FLOAT_LABEL(lit_5545),FLOAT_LABEL(lit_5546),FLOAT_LABEL(lit_5547),0);
        }
    } else {
        return -1;
    }
}

/* 80261100-80261188 25BA40 0088+00 0/0 0/0 1/1 .text            dTimer_createGetIn2D__Fl4cXyz */
u32 dTimer_createGetIn2D(s32 param_0, cXyz param_1) {
    if (dComIfG_getTimerPtr()) {
        cXyz tmp;
        mDoLib_project(&param_1,&tmp);
        param_0 = dComIfG_getTimerPtr()->createGetIn(tmp);
    } else {
        param_0 = 0;
    }

    return param_0;
}

/* 80261188-802611F0 25BAC8 0068+00 1/1 0/0 0/0 .text            dTimer_createStart2D__FlUs */
static int dTimer_createStart2D(s32 param_0, u16 param_1) {
    if (dComIfG_getTimerPtr()) {
        param_0 = dComIfG_getTimerPtr()->createStart(param_1);
    } else {
        param_0 = 0;
    }

    return param_0;
}

/* 802611F0-80261244 25BB30 0054+00 0/0 0/0 5/5 .text            dTimer_isStart__Fv */
int dTimer_isStart() {
    int ret;

    if (dComIfG_getTimerPtr()) {
        ret = dComIfG_getTimerPtr()->isStart();
    } else {
        ret = 0;
    }

    return ret;

}
/* 80261244-80261298 25BB84 0054+00 0/0 0/0 2/2 .text            dTimer_getRestTimeMs__Fv */
int dTimer_getRestTimeMs() {
    int ret;

    if (dComIfG_getTimerPtr()) {
        ret = dComIfG_getTimerPtr()->getRestTimeMs();
    } else {
        ret = 0;
    }

    return ret;
}

/* 80261298-802612EC 25BBD8 0054+00 0/0 0/0 2/2 .text            dTimer_show__Fv */
void dTimer_show() {
    if (dComIfG_getTimerPtr()) {
        dComIfG_getTimerPtr()->show();
    }
}

/* 802612EC-80261340 25BC2C 0054+00 0/0 0/0 2/2 .text            dTimer_hide__Fv */
#ifndef NONMATCHING
void dTimer_hide() {
    if (dComIfG_getTimerPtr()) {
        dComIfG_getTimerPtr()->hide();
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_hide() {
    nofralloc
#include "asm/d/d_timer/dTimer_hide__Fv.s"
}
#pragma pop
#endif

/* 80261340-80261394 25BC80 0054+00 0/0 0/0 1/1 .text            dTimer_isReadyFlag__Fv */
#ifdef NONMATCHING
u32 dTimer_isReadyFlag() {
    
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dTimer_isReadyFlag() {
    nofralloc
#include "asm/d/d_timer/dTimer_isReadyFlag__Fv.s"
}
#pragma pop
#endif

/* 80261394-802613DC 25BCD4 0048+00 1/0 0/0 0/0 .text            __dt__21dDlst_TimerScrnDraw_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_TimerScrnDraw_c::~dDlst_TimerScrnDraw_c() {
    nofralloc
#include "asm/d/d_timer/__dt__21dDlst_TimerScrnDraw_cFv.s"
}
#pragma pop

/* 802613DC-8026141C 25BD1C 0040+00 1/1 0/0 0/0 .text            createGetIn__8dTimer_cF4cXyz */
#ifdef NONMATCHING
void dTimer_c::createGetIn(cXyz param_0) {
    
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dTimer_c::createGetIn(cXyz param_0) {
    nofralloc
#include "asm/d/d_timer/createGetIn__8dTimer_cF4cXyz.s"
}
#pragma pop
#endif

/* 8039A3D8-8039A3D8 026A38 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
