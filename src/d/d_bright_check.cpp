//
// Generated By: dol2asm
// Translation Unit: d/d_bright_check
//

#include "d/d_bright_check.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/d_drawlist.h"
#include "d/com/d_com_inf_game.h"
#include "d/msg/d_msg_string.h"
#include "d/meter/d_meter2_info.h"
#include "m_Do/m_Do_controller_pad.h"
#include "JSystem/J2DGraph/J2DTextBox.h"
#include "JSystem/J2DGraph/J2DGrafContext.h"
#include "JSystem/J2DGraph/J2DScreen.h"
#include "JSystem/JKernel/JKRArchive.h"

//
// Types:
//

struct dDlst_BrightCheck_c 
#ifdef NONMATCHING
: public dDlst_base_c 
#endif
{
    #ifdef NONMATCHING
    /* 801935D0 */ virtual void draw();
    /* 80193648 */ virtual ~dDlst_BrightCheck_c() {};
    #else
    /* 801935D0 */ void draw();
    /* 80193648 */ ~dDlst_BrightCheck_c();
    void* vtable;
    #endif
    J2DScreen* mScreen;
};

struct dBrightCheck_c {
    /* 80192F10 */ dBrightCheck_c(JKRArchive*);
    #ifdef NONMATCHING
    /* 80192F98 */ virtual ~dBrightCheck_c();
    #else
    void * vtable;
    /* 80192F98 */ ~dBrightCheck_c();
    #endif
    /* 80193030 */ void screenSet();
    /* 801934D0 */ void _move();
    /* 80193508 */ void modeWait();
    /* 8019350C */ void modeMove();
    /* 80193594 */ void _draw();
    
    /* 0x04 */ JKRArchive* mArchive;
    /* 0x08 */ dDlst_BrightCheck_c mDlstBrightCheck;
    /* 0x10 */ u8 field_0x10[4];
    /* 0x14 */ dMsgString_c* mMsgString;
    /* 0x18 */ u8 field_0x18;
    /* 0x19 */ u8 field_0x19;
};

//
// Forward References:
//

extern "C" void __ct__14dBrightCheck_cFP10JKRArchive();
extern "C" void __dt__14dBrightCheck_cFv();
extern "C" void screenSet__14dBrightCheck_cFv();
extern "C" void _move__14dBrightCheck_cFv();
extern "C" void modeWait__14dBrightCheck_cFv();
extern "C" void modeMove__14dBrightCheck_cFv();
extern "C" void _draw__14dBrightCheck_cFv();
extern "C" void draw__19dDlst_BrightCheck_cFv();
extern "C" void __sinit_d_bright_check_cpp();
extern "C" void __dt__19dDlst_BrightCheck_cFv();
extern "C" extern char const* const d_d_bright_check__stringBase0;

//
// External References:
//

extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void mDoExt_getRubyFont__Fv();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void __ct__12dMsgString_cFv();
extern "C" void __dt__12dMsgString_cFv();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _restgpr_22();
extern "C" extern void* __vt__12dDlst_base_c[3];
extern "C" u8 m_cpadInfo__8mDoCPd_c[256];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803BB5B0-803BB5BC 0186D0 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

typedef void (dBrightCheck_c::*BrightCheckFunc)();

#ifdef NONMATCHING
SECTION_DATA static BrightCheckFunc brightChackProc[2] = {
    &dBrightCheck_c::modeWait, &dBrightCheck_c::modeMove, 
};
#else
/* 803BB5BC-803BB5C8 -00001 000C+00 0/1 0/0 0/0 .data            @3797 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3797[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__14dBrightCheck_cFv,
};
#pragma pop

/* 803BB5C8-803BB5D4 -00001 000C+00 0/1 0/0 0/0 .data            @3798 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3798[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMove__14dBrightCheck_cFv,
};
#pragma pop

/* 803BB5D4-803BB5EC 0186F4 0018+00 1/2 0/0 0/0 .data            brightChackProc */
SECTION_DATA static u8 brightChackProc[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803BB5EC-803BB5FC 01870C 0010+00 3/3 0/0 0/0 .data            __vt__19dDlst_BrightCheck_c */
SECTION_DATA extern void* __vt__19dDlst_BrightCheck_c[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__19dDlst_BrightCheck_cFv,
    (void*)__dt__19dDlst_BrightCheck_cFv,
};

/* 803BB5FC-803BB618 01871C 000C+10 2/2 0/0 0/0 .data            __vt__14dBrightCheck_c */
SECTION_DATA extern void* __vt__14dBrightCheck_c[3 + 4 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBrightCheck_cFv,
    /* padding */
    NULL,
    NULL,
    NULL,
    NULL,
};

#endif

/* 80192F10-80192F98 18D850 0088+00 0/0 1/1 0/0 .text __ct__14dBrightCheck_cFP10JKRArchive */
// Matches without vtables
#ifdef NONMATCHING
dBrightCheck_c::dBrightCheck_c(JKRArchive* param_0) {
    mArchive = param_0;
    mMsgString = new dMsgString_c();
    screenSet();
    field_0x19 = 0;
    field_0x18 = 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBrightCheck_c::dBrightCheck_c(JKRArchive* param_0) {
    nofralloc
#include "asm/d/d_bright_check/__ct__14dBrightCheck_cFP10JKRArchive.s"
}
#pragma pop
#endif

/* 80192F98-80193030 18D8D8 0098+00 1/0 0/0 0/0 .text            __dt__14dBrightCheck_cFv */
#ifdef NONMATCHING
dBrightCheck_c::~dBrightCheck_c() {
    delete mDlstBrightCheck.mScreen; 
    delete mMsgString;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBrightCheck_c::~dBrightCheck_c() {
    nofralloc
#include "asm/d/d_bright_check/__dt__14dBrightCheck_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80394910-80394938 020F70 0028+00 1/1 0/0 0/0 .rodata          tv_btnA$3744 */
SECTION_RODATA static u64 const tv_btnA[5] = {
    'cont_at1', 'cont_at2', 'cont_at3', 'cont_at4', 'cont_at',
};
COMPILER_STRIP_GATE(0x80394910, &tv_btnA);

/* 80394938-80394960 020F98 0028+00 0/1 0/0 0/0 .rodata          ftv_btnA$3745 */
#pragma push
#pragma force_active on
SECTION_RODATA static u64 const ftv_btnA[5] = {
    'font_a1', 'font_at2', 'font_at3' , 'font_at4', 'font_at',
};
COMPILER_STRIP_GATE(0x80394938, &ftv_btnA);
#pragma pop

/* 80394960-803949B0 020FC0 0050+00 0/1 0/0 0/0 .rodata          txTV$3751 */
#pragma push
#pragma force_active on
SECTION_RODATA static u64 const txTV[10] = {
    'menu_t61', 'menu_t2', 'menu_t91', 'menu_t1', 'menut101', 'menu_t01', 'menu_t71',
    'menu_t3', 'menu_t81', 'menu_t4',
};
COMPILER_STRIP_GATE(0x80394960, &txTV);
#pragma pop

/* 803949B0-803949D8 021010 0028+00 0/1 0/0 0/0 .rodata          txTVhide$3752 */
#pragma push
#pragma force_active on
SECTION_RODATA static u64 const txTVhide[5] = {
    'menu_6n', 'menu_9n', 'menu_10n', 'menu_7n', 'menu_8n',
};
COMPILER_STRIP_GATE(0x803949B0, &txTVhide);
#pragma pop

/* 803949D8-803949D8 021038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803949D8 = "zelda_option_check.blo";
SECTION_DEAD static char const* const stringBase_803949EF = "";
#pragma pop

/* 80453A00-80453A04 002000 0004+00 2/2 0/0 0/0 .sdata2          @3792 */
SECTION_SDATA2 static u8 lit_3792[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80193030-801934D0 18D970 04A0+00 1/1 0/0 0/0 .text            screenSet__14dBrightCheck_cFv */
// matches with literals
#ifdef NONMATCHING
void dBrightCheck_c::screenSet() {
    mDlstBrightCheck.mScreen = new J2DScreen();
    mDlstBrightCheck.mScreen->setPriority("zelda_option_check.blo", 0x1100000, mArchive);
    mDlstBrightCheck.mScreen->search('g_abtn_n')->hide();
    J2DTextBox* textBox = (J2DTextBox*)mDlstBrightCheck.mScreen->search('f_t00');
    mDlstBrightCheck.mScreen->search('f_t00')->show();
    mDlstBrightCheck.mScreen->search('t_t00')->hide();
    textBox->setFont(mDoExt_getRubyFont());
    textBox->setString(0x40, "");
    mMsgString->getString(0x55c, textBox, NULL, NULL, NULL, 0);

    J2DTextBox* texts[5];
    for (int i = 0; i < 5; i++) {
        texts[i] = (J2DTextBox*)mDlstBrightCheck.mScreen->search(ftv_btnA[i]);
        mDlstBrightCheck.mScreen->search(tv_btnA[i])->hide();
        texts[i]->setFont(mDoExt_getMesgFont());
        texts[i]->setString(0x40, "");
        mMsgString->getString(0x564, texts[i], NULL, NULL, NULL, 0);
    }

    for (int i = 0; i < 5; i++) {
        mDlstBrightCheck.mScreen->search(txTVhide[i])->hide();
    }

    for (int i = 0; i < 10; i++) {
        textBox = (J2DTextBox*)mDlstBrightCheck.mScreen->search(txTV[i]);
        textBox->setFont(mDoExt_getMesgFont());
        textBox->setCharSpace(0.0f);

        if (i < 2) {
            textBox->setString(0x100, "");
            mMsgString->getString(0x558, textBox, NULL, NULL, NULL, 0);
        } else if (i < 4) {
            textBox->setString(0x100, "");
            mMsgString->getString(0x557, textBox, NULL, NULL, NULL, 0);
        } else if (i < 6) {
            textBox->setString(0x100, "");
            mMsgString->getString(0x559, textBox, NULL, NULL, NULL, 0);
        } else if (i < 8) {
            textBox->setString(0x100, "");
            mMsgString->getString(0x55a, textBox, NULL, NULL, NULL, 0);
        } else {
            textBox->setString(0x100, "");
            mMsgString->getString(0x55b, textBox, NULL, NULL, NULL, 0);
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBrightCheck_c::screenSet() {
    nofralloc
#include "asm/d/d_bright_check/screenSet__14dBrightCheck_cFv.s"
}
#pragma pop
#endif

/* 801934D0-80193508 18DE10 0038+00 0/0 1/1 0/0 .text            _move__14dBrightCheck_cFv */
void dBrightCheck_c::_move() {
    (this->*(((BrightCheckFunc*)brightChackProc)[field_0x18]))();
}

/* 80193508-8019350C 18DE48 0004+00 1/0 0/0 0/0 .text            modeWait__14dBrightCheck_cFv */
void dBrightCheck_c::modeWait() {
    /* empty function */
}

/* ############################################################################################## */
/* 80453A04-80453A08 002004 0004+00 1/1 0/0 0/0 .sdata2          @3821 */
SECTION_SDATA2 static f32 lit_3821 = 1.0f;

/* 80453A08-80453A10 002008 0004+04 1/1 0/0 0/0 .sdata2          @3822 */
SECTION_SDATA2 static f32 lit_3822[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};

/* 8019350C-80193594 18DE4C 0088+00 1/0 0/0 0/0 .text            modeMove__14dBrightCheck_cFv */
void dBrightCheck_c::modeMove() {
    if (mDoCPd_c::getTrigA(0) || mDoCPd_c::getTrigStart(0)) {
        mDoAud_seStart(1, 0, 0, 0);
        field_0x19 = 1;
        field_0x18 = 0;
    }
}

/* 80193594-801935D0 18DED4 003C+00 0/0 1/1 0/0 .text            _draw__14dBrightCheck_cFv */
// Matches with mDlstBrightCheck inheritance
#ifdef NONMATCHING
void dBrightCheck_c::_draw() {
    dComIfGd_set2DOpa(&mDlstBrightCheck);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dBrightCheck_c::_draw() {
    nofralloc
#include "asm/d/d_bright_check/_draw__14dBrightCheck_cFv.s"
}
#pragma pop
#endif

/* 801935D0-80193608 18DF10 0038+00 1/0 0/0 0/0 .text            draw__19dDlst_BrightCheck_cFv */
// Matches with literals
#ifdef NONMATCHING
void dDlst_BrightCheck_c::draw() {
    J2DGrafContext* grafContext = dComIfGp_getCurrentGrafPort();
    mScreen->draw(0.0f, 0.0f, grafContext);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dDlst_BrightCheck_c::draw() {
    nofralloc
#include "asm/d/d_bright_check/draw__19dDlst_BrightCheck_cFv.s"
}
#pragma pop
#endif

/* 80193608-80193648 18DF48 0040+00 0/0 1/0 0/0 .text            __sinit_d_bright_check_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_bright_check_cpp() {
    nofralloc
#include "asm/d/d_bright_check/__sinit_d_bright_check_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80193608, __sinit_d_bright_check_cpp);
#pragma pop

/* 80193648-80193690 18DF88 0048+00 1/0 0/0 0/0 .text            __dt__19dDlst_BrightCheck_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dDlst_BrightCheck_c::~dDlst_BrightCheck_c() {
    nofralloc
#include "asm/d/d_bright_check/__dt__19dDlst_BrightCheck_cFv.s"
}
#pragma pop

/* 803949D8-803949D8 021038 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */