//
// Generated By: dol2asm
// Translation Unit: d/d_gameover
//

#include "d/d_gameover.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_procname.h"
#include "d/menu/d_menu_save.h"
#include "d/meter/d_meter_HIO.h"
#include "dol2asm.h"
#include "f_op/f_op_msg_mng.h"

//
// Types:
//

struct dMsgScrnLight_c {
    /* 80245934 */ dMsgScrnLight_c(u8, u8);
    /* 80245F90 */ void draw(f32*, f32, f32, f32, f32, f32, f32, JUtility::TColor,
                             JUtility::TColor);

    /* 0x00 */ u8 field_0x0[0x24];
};

//
// Forward References:
//

extern "C" void draw__24dDlst_Gameover_CAPTURE_cFv();
extern "C" void __ct__10dGov_HIO_cFv();
extern "C" void _create__11dGameover_cFv();
extern "C" void _execute__11dGameover_cFv();
extern "C" void playerAnmWait_init__11dGameover_cFv();
extern "C" void playerAnmWait_proc__11dGameover_cFv();
extern "C" void dispFadeOut_init__11dGameover_cFv();
extern "C" void dispFadeOut_proc__11dGameover_cFv();
extern "C" void dispWait_init__11dGameover_cFv();
extern "C" void dispWait_proc__11dGameover_cFv();
extern "C" void demoFadeIn_init__11dGameover_cFv();
extern "C" void demoFadeIn_proc__11dGameover_cFv();
extern "C" void demoFadeOut_init__11dGameover_cFv();
extern "C" void demoFadeOut_proc__11dGameover_cFv();
extern "C" void saveOpen_init__11dGameover_cFv();
extern "C" void saveOpen_proc__11dGameover_cFv();
extern "C" void saveMove_init__11dGameover_cFv();
extern "C" void saveMove_proc__11dGameover_cFv();
extern "C" void saveClose_init__11dGameover_cFv();
extern "C" void saveClose_proc__11dGameover_cFv();
extern "C" void deleteWait_init__11dGameover_cFv();
extern "C" void deleteWait_proc__11dGameover_cFv();
extern "C" void _draw__11dGameover_cFv();
extern "C" void _delete__11dGameover_cFv();
extern "C" void __ct__24dDlst_GameOverScrnDraw_cFP10JKRArchive();
extern "C" void __dt__24dDlst_GameOverScrnDraw_cFv();
extern "C" void setBackAlpha__24dDlst_GameOverScrnDraw_cFf();
extern "C" void draw__24dDlst_GameOverScrnDraw_cFv();
extern "C" static void dGameover_Draw__FP11dGameover_c();
extern "C" static void dGameover_Execute__FP11dGameover_c();
extern "C" static bool dGameover_IsDelete__FP11dGameover_c();
extern "C" static void dGameover_Delete__FP11dGameover_c();
extern "C" static void dGameover_Create__FP9msg_class();
extern "C" void d_GameOver_Create__FUc();
extern "C" void d_GameOver_Delete__FRUi();
extern "C" void __dt__10dGov_HIO_cFv();
extern "C" void __sinit_d_gameover_cpp();
extern "C" void __dt__24dDlst_Gameover_CAPTURE_cFv();
extern "C" void __dt__12dMenu_save_cFv();
extern "C" extern char const* const d_d_gameover__stringBase0;

//
// External References:
//

extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void mDoExt_getSubFont__Fv();
extern "C" void fopMsgM_SearchByID__FUi();
extern "C" void fopMsgM_Delete__FPv();
extern "C" void fopMsgM_create__FsP10fopAc_ac_cP4cXyzPUlPUlPFPv_i();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_setHeapLockFlag__FUc();
extern "C" void dComIfGp_offHeapLockFlag__Fi();
extern "C" void setItem__17dSv_player_item_cFiUc();
extern "C" void getItem__17dSv_player_item_cCFib();
extern "C" void isFirstBit__21dSv_player_get_item_cCFUc();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getResInfo__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void __ct__12dMenu_save_cFv();
extern "C" void _create__12dMenu_save_cFv();
extern "C" void _open__12dMenu_save_cFv();
extern "C" void _delete__12dMenu_save_cFv();
extern "C" void _move__12dMenu_save_cFv();
extern "C" void _draw2__12dMenu_save_cFv();
extern "C" void getString__13dMeter2Info_cFUlPcP14JMSMesgEntry_c();
extern "C" void resetMiniGameItem__13dMeter2Info_cFb();
extern "C" void __ct__15dMsgScrnLight_cFUcUc();
extern "C" void draw__15dMsgScrnLight_cFPfffffffQ28JUtility6TColorQ28JUtility6TColor();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void freeAll__7JKRHeapFv();
extern "C" void getTotalFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void func_802FC800();
extern "C" void setString__10J2DTextBoxFPCce();
extern "C" void __register_global_object();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_24();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];
extern "C" extern void* __vt__16dDlst_MenuSave_c[4];
extern "C" extern void* __vt__23dDlst_MenuSaveExplain_c[4 + 18 /* padding */];
extern "C" u8 mFadeColor__13mDoGph_gInf_c[4];
extern "C" u8 mFader__13mDoGph_gInf_c[4];
extern "C" u8 mFrameBufferTimg__13mDoGph_gInf_c[4];
extern "C" u8 mFrameBufferTex__13mDoGph_gInf_c[4];
extern "C" u8 mZbufferTex__13mDoGph_gInf_c[4];
extern "C" f32 mFadeRate__13mDoGph_gInf_c;
extern "C" u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" u8 sManager__10JFWDisplay[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80453B80-80453B84 002180 0004+00 3/3 0/0 0/0 .sdata2          @3868 */
SECTION_SDATA2 static u8 lit_3868[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80453B84-80453B88 002184 0004+00 6/6 0/0 0/0 .sdata2          @3869 */
SECTION_SDATA2 static f32 lit_3869 = 1.0f;

/* 80453B88-80453B8C 002188 0004+00 1/1 0/0 0/0 .sdata2          @3870 */
SECTION_SDATA2 static f32 lit_3870 = 10.0f;

/* 8019ACF8-8019AFE0 195638 02E8+00 1/0 0/0 0/0 .text            draw__24dDlst_Gameover_CAPTURE_cFv
 */
// matches with literals
#ifdef NONMATCHING
void dDlst_Gameover_CAPTURE_c::draw() {
    GXTexObj tex_obj;
    Mtx44 m;

    GXSetTexCopySrc(0, 0, 608, 448);
    GXSetTexCopyDst(304, 224, GX_TF_RGB565, 1);
    GXCopyTex(mDoGph_gInf_c::mZbufferTex, 0);
    GXPixModeSync();
    GXInitTexObj(&tex_obj, mDoGph_gInf_c::mFrameBufferTex, 304, 224,
                 (GXTexFmt)mDoGph_gInf_c::mFrameBufferTimg->format, GX_CLAMP, GX_CLAMP, GX_FALSE);
    GXInitTexObjLOD(&tex_obj, GX_LINEAR, GX_LINEAR, 0.0f, 0.0f, 0.0f, GX_FALSE, GX_FALSE,
                    GX_ANISO_1);
    GXLoadTexObj(&tex_obj, GX_TEXMAP0);
    GXSetNumChans(0);
    GXSetNumTexGens(1);
    GXSetTexCoordGen2(GX_TEXCOORD0, GX_TG_MTX2x4, GX_TG_TEX0, 60, GX_FALSE, 125);
    GXSetNumTevStages(1);
    GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR_NULL);
    GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_ZERO, GX_CC_ZERO, GX_CC_TEXC);
    GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO, GX_CA_ZERO);
    GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
    GXSetZCompLoc(1);
    GXSetZMode(GX_FALSE, GX_ALWAYS, GX_FALSE);
    GXSetBlendMode(GX_BM_NONE, GX_BL_ZERO, GX_BL_ZERO, GX_LO_OR);
    GXSetAlphaCompare(GX_ALWAYS, 0, GX_AOP_OR, GX_ALWAYS, 0);
    GXSetFog(GX_FOG_NONE, 0.0f, 0.0f, 0.0f, 0.0f, g_clearColor);
    GXSetFogRangeAdj(GX_FALSE, 0, NULL);
    GXSetCullMode(GX_CULL_NONE);
    GXSetDither(1);
    C_MTXOrtho(m, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 10.0f);
    GXSetProjection(m, GX_ORTHOGRAPHIC);
    GXLoadPosMtxImm(g_mDoMtx_identity, GX_PNMTX0);
    GXSetCurrentMtx(0);
    GXClearVtxDesc();
    GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
    GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_CLR_RGBA, GX_RGB8, 0);
    GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_CLR_RGBA, GX_RGB8, 0);

    GXBegin(GX_QUADS, GX_VTXFMT0, 4);

    GXPosition3s8(0, 0, -5);
    GXTexCoord2s8(0, 0);

    GXPosition3s8(1, 0, -5);
    GXTexCoord2s8(1, 0);

    GXPosition3s8(1, 1, -5);
    GXTexCoord2s8(1, 1);

    GXPosition3s8(0, 1, -5);
    GXTexCoord2s8(0, 1);

    i_GXEnd();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_Gameover_CAPTURE_c::draw() {
    nofralloc
#include "asm/d/d_gameover/draw__24dDlst_Gameover_CAPTURE_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 803BBB50-803BBB5C 018C70 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BBB5C-803BBB68 -00001 000C+00 0/1 0/0 0/0 .data            @3883 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3883[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)playerAnmWait_init__11dGameover_cFv,
};
#pragma pop

/* 803BBB68-803BBB74 -00001 000C+00 0/1 0/0 0/0 .data            @3884 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3884[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)dispFadeOut_init__11dGameover_cFv,
};
#pragma pop

/* 803BBB74-803BBB80 -00001 000C+00 0/1 0/0 0/0 .data            @3885 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3885[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)dispWait_init__11dGameover_cFv,
};
#pragma pop

/* 803BBB80-803BBB8C -00001 000C+00 0/1 0/0 0/0 .data            @3886 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3886[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)demoFadeIn_init__11dGameover_cFv,
};
#pragma pop

/* 803BBB8C-803BBB98 -00001 000C+00 0/1 0/0 0/0 .data            @3887 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3887[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)demoFadeOut_init__11dGameover_cFv,
};
#pragma pop

/* 803BBB98-803BBBA4 -00001 000C+00 0/1 0/0 0/0 .data            @3888 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3888[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)saveOpen_init__11dGameover_cFv,
};
#pragma pop

/* 803BBBA4-803BBBB0 -00001 000C+00 0/1 0/0 0/0 .data            @3889 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3889[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)saveMove_init__11dGameover_cFv,
};
#pragma pop

/* 803BBBB0-803BBBBC -00001 000C+00 0/1 0/0 0/0 .data            @3890 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3890[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)saveClose_init__11dGameover_cFv,
};
#pragma pop

/* 803BBBBC-803BBBC8 -00001 000C+00 0/1 0/0 0/0 .data            @3891 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3891[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)deleteWait_init__11dGameover_cFv,
};
#pragma pop

/* 803BBBC8-803BBC34 018CE8 006C+00 2/3 0/0 0/0 .data            init_process */
SECTION_DATA static u8 init_process[108] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* typedef void (dGameover_c::*initFunc)();
SECTION_DATA initFunc init_process[] = {
    &dGameover_c::playerAnmWait_init, &dGameover_c::dispFadeOut_init, &dGameover_c::dispWait_init,
    &dGameover_c::demoFadeIn_init,    &dGameover_c::demoFadeOut_init, &dGameover_c::saveOpen_init,
    &dGameover_c::saveMove_init,      &dGameover_c::saveClose_init,   &dGameover_c::deleteWait_init,
}; */

/* 803BBC34-803BBC40 -00001 000C+00 0/1 0/0 0/0 .data            @3892 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3892[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)playerAnmWait_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBC40-803BBC4C -00001 000C+00 0/1 0/0 0/0 .data            @3893 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3893[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)dispFadeOut_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBC4C-803BBC58 -00001 000C+00 0/1 0/0 0/0 .data            @3894 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3894[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)dispWait_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBC58-803BBC64 -00001 000C+00 0/1 0/0 0/0 .data            @3895 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3895[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)demoFadeIn_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBC64-803BBC70 -00001 000C+00 0/1 0/0 0/0 .data            @3896 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3896[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)demoFadeOut_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBC70-803BBC7C -00001 000C+00 0/1 0/0 0/0 .data            @3897 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3897[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)saveOpen_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBC7C-803BBC88 -00001 000C+00 0/1 0/0 0/0 .data            @3898 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3898[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)saveMove_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBC88-803BBC94 -00001 000C+00 0/1 0/0 0/0 .data            @3899 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3899[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)saveClose_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBC94-803BBCA0 -00001 000C+00 0/1 0/0 0/0 .data            @3900 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3900[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)deleteWait_proc__11dGameover_cFv,
};
#pragma pop

/* 803BBCA0-803BBD0C 018DC0 006C+00 1/2 0/0 0/0 .data            move_process */
SECTION_DATA static u8 move_process[108] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* typedef void (dGameover_c::*moveFunc)();
SECTION_DATA moveFunc move_process[] = {
    &dGameover_c::playerAnmWait_proc, &dGameover_c::dispFadeOut_proc, &dGameover_c::dispWait_proc,
    &dGameover_c::demoFadeIn_proc,    &dGameover_c::demoFadeOut_proc, &dGameover_c::saveOpen_proc,
    &dGameover_c::saveMove_proc,      &dGameover_c::saveClose_proc,   &dGameover_c::deleteWait_proc,
}; */

/* 803BBD0C-803BBD2C 018E2C 0020+00 1/1 0/0 0/0 .data            offset$4331 */
SECTION_DATA static f32 offset[8] = {
    -138.0f, -96.0f, -56.0f, -18.0f, 42.0f, 75.0f, 110.0f, 143.0f,
};

/* 803BBD2C-803BBD40 -00001 0014+00 1/0 0/0 0/0 .data            l_dGameover_Method */
SECTION_DATA static void* l_dGameover_Method[5] = {
    (void*)dGameover_Create__FP9msg_class,     (void*)dGameover_Delete__FP11dGameover_c,
    (void*)dGameover_Execute__FP11dGameover_c, (void*)dGameover_IsDelete__FP11dGameover_c,
    (void*)dGameover_Draw__FP11dGameover_c,
};

/* 803BBD40-803BBD68 -00001 0028+00 0/0 0/0 1/0 .data            g_profile_GAMEOVER */
SECTION_DATA extern void* g_profile_GAMEOVER[10] = {
    (void*)0xFFFFFFFD, (void*)0x000CFFFD,
    (void*)0x03170000, (void*)&g_fpcLf_Method,
    (void*)0x0000011C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopMsg_Method,
    (void*)0x03030000, (void*)&l_dGameover_Method,
};

/* 803BBD68-803BBD78 018E88 0010+00 2/2 0/0 0/0 .data            __vt__24dDlst_GameOverScrnDraw_c */
SECTION_DATA extern void* __vt__24dDlst_GameOverScrnDraw_c[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__24dDlst_GameOverScrnDraw_cFv,
    (void*)__dt__24dDlst_GameOverScrnDraw_cFv,
};

/* 803BBD78-803BBD90 018E98 000C+0C 1/1 1/1 0/0 .data            __vt__12dMenu_save_c */
SECTION_DATA extern void* __vt__12dMenu_save_c[3 + 3 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dMenu_save_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
};

/* 803BBD90-803BBDA8 018EB0 000C+0C 2/2 0/0 0/0 .data            __vt__10dGov_HIO_c */
SECTION_DATA extern void* __vt__10dGov_HIO_c[3 + 3 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dGov_HIO_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
};

/* 8019AFE0-8019B044 195920 0064+00 1/1 0/0 0/0 .text            __ct__10dGov_HIO_cFv */
dGov_HIO_c::dGov_HIO_c() {
    mScale = 2.7f;
    mAlpha = lit_3869;
    mAnimSpeed = 0.2f;

    mBlack.r = 0;
    mBlack.g = 0;
    mBlack.b = 0;
    mBlack.a = 0;

    mWhite.r = 255;
    mWhite.g = 220;
    mWhite.b = 125;
    mWhite.a = 255;
}

/* ############################################################################################## */
/* 80394C28-80394C28 021288 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80394C28 = "Gover";
SECTION_DEAD static char const* const stringBase_80394C2E = "D_MN10A";
#pragma pop

/* 803BBDA8-803BBDB8 018EC8 0010+00 2/2 0/0 0/0 .data            __vt__24dDlst_Gameover_CAPTURE_c */
SECTION_DATA extern void* __vt__24dDlst_Gameover_CAPTURE_c[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__24dDlst_Gameover_CAPTURE_cFv,
    (void*)__dt__24dDlst_Gameover_CAPTURE_cFv,
};

/* 8019B044-8019B2F4 195984 02B0+00 1/1 0/0 0/0 .text            _create__11dGameover_cFv */
#ifdef NONMATCHING
int dGameover_c::_create() {
    int phase = dComIfG_resLoad(&mPhase, "Gover");

    if (dComIfGp_isPauseFlag() ||
        (dComIfGp_isHeapLockFlag() != 0 && dComIfGp_isHeapLockFlag() != 6) ||
        dComIfGp_getMesgStatus() != 0)
    {
        return 0;
    }

    if (phase == cPhs_COMPLEATE_e) {
        if (dMeter2Info_getGameOverType() == 0) {
            mDoGph_gInf_c::setFadeColor(*(JUtility::TColor*)&g_blackColor);
            dComIfGs_addDeathCount();
        }

        dRes_info_c* resInfo = dComIfG_getObjectResInfo("Gover");

        mpHeap = dComIfGp_getExpHeap2D();
        dComIfGp_setHeapLockFlag(6);
        JKRHeap* old_heap = mDoExt_setCurrentHeap(mpHeap);
        mpHeap->getTotalFreeSize();

        dgo_screen_c = new dDlst_GameOverScrnDraw_c(resInfo->getArchive());
        dMs_c = new dMenu_save_c();

        if (dMeter2Info_getGameOverType() == 1) {
            if (!strcmp(dComIfGp_getLastPlayStageName(), "D_MN10A")) {
                // Last stage was Stallord Arena
                // Remove Ooccoo from inventory
                dComIfGs_setItem(SLOT_18, NO_ITEM);
                dComIfGs_resetLastWarpAcceptStage();
            }

            dMs_c->setUseType(3);
        } else if (dMeter2Info_getGameOverType() == 2) {
            dMs_c->setUseType(4);
        } else {
            dMs_c->setUseType(2);
        }

        dMs_c->_create();
        dgo_capture_c = new dDlst_Gameover_CAPTURE_c();

        mDoExt_setCurrentHeap(old_heap);
        field_0x116 = g_menuHIO.mGameover;

        if (dMeter2Info_getGameOverType() == 1 || dMeter2Info_getGameOverType() == 2) {
            mIsDemoSave = true;
            mProc = PROC_DEMO_FADE_IN;
            dgo_screen_c->setBackAlpha(1.0f);
        } else {
            mIsDemoSave = false;
            mProc = PROC_PLAYER_ANM_WAIT;
        }

        (this->*init_process[mProc])();
        return cPhs_COMPLEATE_e;
    }

    return phase;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dGameover_c::_create() {
    nofralloc
#include "asm/d/d_gameover/_create__11dGameover_cFv.s"
}
#pragma pop
#endif

/* 8019B2F4-8019B384 195C34 0090+00 1/1 0/0 0/0 .text            _execute__11dGameover_cFv */
// matches with sinit
#ifdef NONMATCHING
int dGameover_c::_execute() {
    JKRHeap* old_heap = mDoExt_setCurrentHeap(mpHeap);
    u8 old_proc = mProc;

    (this->*move_process[mProc])();
    if (mProc != old_proc) {
        (this->*init_process[mProc])();
    }

    mDoExt_setCurrentHeap(old_heap);
    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int dGameover_c::_execute() {
    nofralloc
#include "asm/d/d_gameover/_execute__11dGameover_cFv.s"
}
#pragma pop
#endif

/* 8019B384-8019B388 195CC4 0004+00 1/0 0/0 0/0 .text            playerAnmWait_init__11dGameover_cFv
 */
void dGameover_c::playerAnmWait_init() {}

/* 8019B388-8019B3A0 195CC8 0018+00 1/0 0/0 0/0 .text            playerAnmWait_proc__11dGameover_cFv
 */
void dGameover_c::playerAnmWait_proc() {
    if (mIsDemoSave) {
        mProc = PROC_DISP_FADE_OUT;
    }
}

/* 8019B3A0-8019B3E8 195CE0 0048+00 1/0 0/0 0/0 .text            dispFadeOut_init__11dGameover_cFv
 */
void dGameover_c::dispFadeOut_init() {
    mTimer = 30;
    mDoGph_gInf_c::startFadeOut(15);
}

/* 8019B3E8-8019B40C 195D28 0024+00 1/0 0/0 0/0 .text            dispFadeOut_proc__11dGameover_cFv
 */
void dGameover_c::dispFadeOut_proc() {
    if (mTimer != 0) {
        mTimer--;
    } else {
        mProc = PROC_DISP_WAIT;
    }
}

/* 8019B40C-8019B454 195D4C 0048+00 1/0 0/0 0/0 .text            dispWait_init__11dGameover_cFv */
void dGameover_c::dispWait_init() {
    mTimer = 90;
    mDoGph_gInf_c::startFadeIn(30);
}

/* 8019B454-8019B478 195D94 0024+00 1/0 0/0 0/0 .text            dispWait_proc__11dGameover_cFv */
void dGameover_c::dispWait_proc() {
    if (mTimer != 0) {
        mTimer--;
    } else {
        mProc = PROC_SAVE_OPEN;
    }
}

/* 8019B478-8019B484 195DB8 000C+00 1/0 0/0 0/0 .text            demoFadeIn_init__11dGameover_cFv */
void dGameover_c::demoFadeIn_init() {
    mTimer = 0;
}

/* 8019B484-8019B4D8 195DC4 0054+00 1/0 0/0 0/0 .text            demoFadeIn_proc__11dGameover_cFv */
void dGameover_c::demoFadeIn_proc() {
    mTimer++;
    dgo_screen_c->setBackAlpha(lit_3869);

    if (mTimer >= 30) {
        mProc = PROC_SAVE_OPEN;
    }
}

/* 8019B4D8-8019B4E4 195E18 000C+00 1/0 0/0 0/0 .text            demoFadeOut_init__11dGameover_cFv
 */
void dGameover_c::demoFadeOut_init() {
    mTimer = 30;
}

/* 8019B4E4-8019B560 195E24 007C+00 1/0 0/0 0/0 .text            demoFadeOut_proc__11dGameover_cFv
 */
void dGameover_c::demoFadeOut_proc() {
    mTimer--;
    dgo_screen_c->setBackAlpha((mTimer * mTimer) / 900.0f);

    if (mTimer <= 0) {
        mProc = PROC_DELETE_WAIT;
    }
}

/* 8019B560-8019B564 195EA0 0004+00 1/0 0/0 0/0 .text            saveOpen_init__11dGameover_cFv */
void dGameover_c::saveOpen_init() {}

/* 8019B564-8019B5A4 195EA4 0040+00 1/0 0/0 0/0 .text            saveOpen_proc__11dGameover_cFv */
void dGameover_c::saveOpen_proc() {
    if (dMs_c->_open()) {
        mProc = PROC_SAVE_MOVE;
    }
}

/* 8019B5A4-8019B5A8 195EE4 0004+00 1/0 0/0 0/0 .text            saveMove_init__11dGameover_cFv */
void dGameover_c::saveMove_init() {}

/* 8019B5A8-8019B5F0 195EE8 0048+00 1/0 0/0 0/0 .text            saveMove_proc__11dGameover_cFv */
void dGameover_c::saveMove_proc() {
    dMs_c->_move();

    if (dMs_c->getSaveStatus() == 3) {
        mProc = PROC_SAVE_CLOSE;
    }
}

/* 8019B5F0-8019B5F4 195F30 0004+00 1/0 0/0 0/0 .text            saveClose_init__11dGameover_cFv */
void dGameover_c::saveClose_init() {}

/* 8019B5F4-8019B7BC 195F34 01C8+00 1/0 0/0 0/0 .text            saveClose_proc__11dGameover_cFv */
void dGameover_c::saveClose_proc() {
    if (dMs_c->getEndStatus() == 0) {
        dComIfGp_setGameoverStatus(3);
        dComIfGp_offPauseFlag();
        mDoRst::onReset();
    } else if (dMs_c->getEndStatus() == 1) {
        if (dMeter2Info_getGameOverType() == 1 || dMeter2Info_getGameOverType() == 2) {
            dComIfGp_setGameoverStatus(1);
        } else {
            dComIfGp_setGameoverStatus(2);
        }

        dComIfGp_offPauseFlag();

        // Reset Monkey lantern steal sequence flags if player hasn't regained lantern
        if (!i_dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[226])) {
            dComIfGs_offEventBit(dSv_event_flag_c::saveBitLabels[224]);
            dComIfGs_offEventBit(dSv_event_flag_c::saveBitLabels[225]);
        }

        // Reset Lantern and oil status back into inventory if gameover during monkey steal sequence
        if (i_dComIfGs_isItemFirstBit(KANTERA) && dComIfGs_getItem(SLOT_1, true) == NO_ITEM) {
            dComIfGs_setItem(SLOT_1, KANTERA);
            dComIfGs_setOil(dMeter2Info_getOilGaugeBackUp());
        }

        dMeter2Info_resetMiniGameItem(false);
    }

    if (dMeter2Info_getGameOverType() == 1 && dMeter2Info_getGameOverType() == 2 &&
        dComIfGp_getGameoverStatus() == 1)
    {
        mProc = PROC_DEMO_FADE_OUT;
    } else {
        mProc = PROC_DELETE_WAIT;
    }
}

/* 8019B7BC-8019B7C0 1960FC 0004+00 1/0 0/0 0/0 .text            deleteWait_init__11dGameover_cFv */
void dGameover_c::deleteWait_init() {}

/* 8019B7C0-8019B7C4 196100 0004+00 1/0 0/0 0/0 .text            deleteWait_proc__11dGameover_cFv */
void dGameover_c::deleteWait_proc() {}

/* 8019B7C4-8019B864 196104 00A0+00 1/1 0/0 0/0 .text            _draw__11dGameover_cFv */
int dGameover_c::_draw() {
    if (dgo_capture_c != NULL && dComIfGp_isPauseFlag()) {
        dComIfGd_set2DOpa(dgo_capture_c);
    }

    if (mIsDemoSave && mProc >= PROC_DISP_WAIT) {
        if (dgo_screen_c != NULL) {
            dComIfGd_set2DOpa(dgo_screen_c);
        }
        dMs_c->_draw2();
    }

    return 1;
}

/* 8019B864-8019B940 1961A4 00DC+00 1/1 0/0 0/0 .text            _delete__11dGameover_cFv */
int dGameover_c::_delete() {
    JKRHeap* old_heap = mDoExt_setCurrentHeap(mpHeap);

    if (dgo_screen_c != NULL) {
        delete dgo_screen_c;
        dgo_screen_c = NULL;
    }

    dMs_c->_delete();
    delete dMs_c;
    delete dgo_capture_c;

    mpHeap->freeAll();
    dComIfGp_offHeapLockFlag(0);
    mDoExt_setCurrentHeap(old_heap);

    dComIfG_resDelete(&mPhase, "Gover");
    return 1;
}

/* ############################################################################################## */
/* 80394C28-80394C28 021288 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80394C36 = "zelda_game_over.blo";
SECTION_DEAD static char const* const stringBase_80394C4A = "tt_block8x8.bti";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80394C5A = "\0\0\0\0\0";
#pragma pop

/* 80453BA0-80453BA4 0021A0 0004+00 1/1 0/0 0/0 .sdata2          @4290 */
SECTION_SDATA2 static f32 lit_4290 = 486.0f;

/* 80453BA4-80453BA8 0021A4 0004+00 1/1 0/0 0/0 .sdata2          @4291 */
SECTION_SDATA2 static f32 lit_4291 = 660.0f;

/* 8019B940-8019BBFC 196280 02BC+00 1/1 0/0 0/0 .text
 * __ct__24dDlst_GameOverScrnDraw_cFP10JKRArchive               */
// matches with literals
#ifdef NONMATCHING
dDlst_GameOverScrnDraw_c::dDlst_GameOverScrnDraw_c(JKRArchive* i_archive) {
    mpScreen = new J2DScreen();
    mpScreen->setPriority("zelda_game_over.blo", 0x100000, i_archive);
    dPaneClass_showNullPane(mpScreen);

    mFadeColor.set(0, 0, 0, 0);

    if (dMeter2Info_getGameOverType() != 0) {
        mpScreen->search('n_base')->hide();

        if (mDoGph_gInf_c::getFadeRate() == 1.0f) {
            mFadeColor = mDoGph_gInf_c::getFadeColor();
        }
    }

    mpScreen->search('base_b')->hide();

    JUtility::TColor img_white(mFadeColor);
    JUtility::TColor img_black(mFadeColor);
    img_white.a = 0;
    img_black.a = 255;

    ResTIMG* img = (ResTIMG*)dComIfGp_getMain2DArchive()->getResource('TIMG', "tt_block8x8.bti");
    mpBackImg =
        new J2DPicture('PICT01', JGeometry::TBox2<f32>(0.0f, 486.0f, 0.0f, 660.0f), img, NULL);
    mpBackImg->setBlackWhite(img_white, img_black);

    J2DTextBox* gold_tbox = (J2DTextBox*)mpScreen->search('gold_00');
    gold_tbox->setFont(mDoExt_getSubFont());

    char string[64];
    dMeter2Info_getString(0x381, string, NULL);
    gold_tbox->setString(string);

    mpLight = new dMsgScrnLight_c(6, 0xFF);
    field_0x10 = 0.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_GameOverScrnDraw_c::dDlst_GameOverScrnDraw_c(JKRArchive* param_0) {
    nofralloc
#include "asm/d/d_gameover/__ct__24dDlst_GameOverScrnDraw_cFP10JKRArchive.s"
}
#pragma pop
#endif

/* 8019BBFC-8019BCB0 19653C 00B4+00 1/0 0/0 0/0 .text            __dt__24dDlst_GameOverScrnDraw_cFv
 */
dDlst_GameOverScrnDraw_c::~dDlst_GameOverScrnDraw_c() {
    delete mpBackImg;
    delete mpScreen;
    dComIfGp_getMain2DArchive()->removeResourceAll();
}

/* 8019BCB0-8019BCF4 1965F0 0044+00 3/3 0/0 0/0 .text setBackAlpha__24dDlst_GameOverScrnDraw_cFf
 */
void dDlst_GameOverScrnDraw_c::setBackAlpha(f32 i_alpha) {
    mpBackImg->setAlpha(i_alpha * 255.0f);
}

/* 80453BAC-80453BB0 0021AC 0004+00 1/1 0/0 0/0 .sdata2          @4374 */
SECTION_SDATA2 static f32 lit_4374 = 608.0f;

/* 80453BB0-80453BB4 0021B0 0004+00 1/1 0/0 0/0 .sdata2          @4375 */
SECTION_SDATA2 static f32 lit_4375 = 448.0f;

/* 80453BB4-80453BB8 0021B4 0004+00 1/1 0/0 0/0 .sdata2          @4376 */
SECTION_SDATA2 static f32 lit_4376 = 304.0f;

/* 80453BB8-80453BC0 0021B8 0004+04 1/1 0/0 0/0 .sdata2          @4377 */
SECTION_SDATA2 static f32 lit_4377[1 + 1 /* padding */] = {
    224.0f,
    /* padding */
    0.0f,
};

/* 8019BCF4-8019BF3C 196634 0248+00 1/0 0/0 0/0 .text            draw__24dDlst_GameOverScrnDraw_cFv
 */
// matches with literals / sinit
#ifdef NONMATCHING
/* ############################################################################################## */
/* 8042CA20-8042CA2C 059740 000C+00 1/1 0/0 0/0 .bss             @3882 */
static u8 lit_3882[12];

/* 8042CA2C-8042CA48 05974C 001C+00 2/2 0/0 0/0 .bss             l_HIO */
static dGov_HIO_c l_HIO;

void dDlst_GameOverScrnDraw_c::draw() {
    J2DGrafContext* graf_ctx = dComIfGp_getCurrentGrafPort();
    graf_ctx->setup2D();

    if (dMeter2Info_getGameOverType() == 1 || dMeter2Info_getGameOverType() == 2) {
        if (mDoGph_gInf_c::getFadeRate() == 1.0f) {
            mFadeColor = mDoGph_gInf_c::getFadeColor();
        }

        JUtility::TColor img_black(mFadeColor);
        JUtility::TColor img_white(mFadeColor);
        img_black.a = 0;
        img_white.a = 255;

        mpBackImg->setBlackWhite(img_black, img_white);
        mpBackImg->draw(0.0f, 0.0f, 608.0f, 448.0f, false, false, false);
    } else {
        JUtility::TColor img_black;
        JUtility::TColor img_white;

        img_black.r = l_HIO.mBlack.r;
        img_black.g = l_HIO.mBlack.g;
        img_black.b = l_HIO.mBlack.b;
        img_black.a = l_HIO.mBlack.a;

        img_white.r = l_HIO.mWhite.r;
        img_white.g = l_HIO.mWhite.g;
        img_white.b = l_HIO.mWhite.b;
        img_white.a = l_HIO.mWhite.a;

        mpBackImg->draw(0.0f, 0.0f, 608.0f, 448.0f, false, false, false);

        for (int i = 0; i < 8; i++) {
            mpLight->draw(&field_0x10, offset[i] + 304.0f, 224.0f, l_HIO.mScale, l_HIO.mScale,
                          l_HIO.mAlpha, l_HIO.mAnimSpeed, img_black, img_white);
        }
    }

    mpScreen->draw(0.0f, 0.0f, graf_ctx);
}
#else
/* ############################################################################################## */
/* 8042CA20-8042CA2C 059740 000C+00 1/1 0/0 0/0 .bss             @3882 */
static u8 lit_3882[12];

/* 8042CA2C-8042CA48 05974C 001C+00 2/2 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[28];

#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void dDlst_GameOverScrnDraw_c::draw() {
extern "C" asm void draw__24dDlst_GameOverScrnDraw_cFv() {
    nofralloc
#include "asm/d/d_gameover/draw__24dDlst_GameOverScrnDraw_cFv.s"
}
#pragma pop
#endif

/* 8019BF3C-8019BF5C 19687C 0020+00 1/0 0/0 0/0 .text            dGameover_Draw__FP11dGameover_c */
static int dGameover_Draw(dGameover_c* i_this) {
    return i_this->_draw();
}

/* 8019BF5C-8019BF7C 19689C 0020+00 1/0 0/0 0/0 .text            dGameover_Execute__FP11dGameover_c
 */
static int dGameover_Execute(dGameover_c* i_this) {
    return i_this->_execute();
}

/* 8019BF7C-8019BF84 1968BC 0008+00 1/0 0/0 0/0 .text            dGameover_IsDelete__FP11dGameover_c
 */
static int dGameover_IsDelete(dGameover_c* i_this) {
    return 1;
}

/* 8019BF84-8019BFA4 1968C4 0020+00 1/0 0/0 0/0 .text            dGameover_Delete__FP11dGameover_c
 */
static int dGameover_Delete(dGameover_c* i_this) {
    return i_this->_delete();
}

/* 8019BFA4-8019BFC4 1968E4 0020+00 1/0 0/0 0/0 .text            dGameover_Create__FP9msg_class */
static int dGameover_Create(msg_class* i_this) {
    return static_cast<dGameover_c*>(i_this)->_create();
}

/* 8019BFC4-8019C008 196904 0044+00 0/0 2/2 0/0 .text            d_GameOver_Create__FUc */
s32 d_GameOver_Create(u8 i_gameoverType) {
    dMeter2Info_setGameOverType(i_gameoverType);
    return fopMsgM_create(PROC_GAMEOVER, NULL, NULL, NULL, NULL, NULL);
}

/* 8019C008-8019C06C 196948 0064+00 0/0 1/1 0/0 .text            d_GameOver_Delete__FRUi */
bool d_GameOver_Delete(unsigned int& i_id) {
    if (i_id != UINT32_MAX) {
        fopMsgM_Delete(fopMsgM_SearchByID(i_id));
        i_id = -1;
        dMeter2Info_setGameOverType(0);
        return true;
    }

    return false;
}

/* 8019C06C-8019C0C8 1969AC 005C+00 2/1 0/0 0/0 .text            __dt__10dGov_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dGov_HIO_c::~dGov_HIO_c() {
extern "C" asm void __dt__10dGov_HIO_cFv() {
    nofralloc
#include "asm/d/d_gameover/__dt__10dGov_HIO_cFv.s"
}
#pragma pop

/* 8019C0C8-8019C2CC 196A08 0204+00 0/0 1/0 0/0 .text            __sinit_d_gameover_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_gameover_cpp(){nofralloc
#include "asm/d/d_gameover/__sinit_d_gameover_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8019C0C8, __sinit_d_gameover_cpp);
#pragma pop

/* 8019C2CC-8019C314 196C0C 0048+00 1/0 0/0 0/0 .text            __dt__24dDlst_Gameover_CAPTURE_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_Gameover_CAPTURE_c::~dDlst_Gameover_CAPTURE_c() {
    nofralloc
#include "asm/d/d_gameover/__dt__24dDlst_Gameover_CAPTURE_cFv.s"
}
#pragma pop

/* 8019C314-8019C388 196C54 0074+00 1/0 0/0 0/0 .text            __dt__12dMenu_save_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dMenu_save_c::~dMenu_save_c() {
extern "C" asm void __dt__12dMenu_save_cFv() {
    nofralloc
#include "asm/d/d_gameover/__dt__12dMenu_save_cFv.s"
}
#pragma pop

/* 80394C28-80394C28 021288 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
