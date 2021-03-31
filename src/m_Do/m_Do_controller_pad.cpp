// 
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_controller_pad
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "m_Do/m_Do_controller_pad.h"

// 
// Types:
// 

struct JUTGamePad {
	struct EPadPort {
	};

	struct CRumble {
		/* 802E19D8 */ // False False
//  u32 False
void setEnabled(u32);
	};

	/* 802E06DC */ // False False
//  JUTGamePad::EPadPort False
JUTGamePad(JUTGamePad::EPadPort);
	/* 802E08E4 */ // False False
void read();
	/* 802E1024 */ // False False
void clearForReset();
	/* 802E199C */ // False False
//  int False
void getGamePad(int);
};

struct interface_of_controller_pad {
};

struct mDoCPd_c {
	/* 80007954 */ // False False
void create();
	/* 80007A94 */ // False False
void read();
	/* 80007B7C */ // True False
//  interface_of_controller_pad* False
// 	 interface_of_controller_pad False
//  JUTGamePad* False
// 	 JUTGamePad False
void convert(interface_of_controller_pad*, JUTGamePad*);
	/* 80007CD0 */ // True False
//  interface_of_controller_pad* False
// 	 interface_of_controller_pad False
void LRlockCheck(interface_of_controller_pad*);
	/* 80007D74 */ // False False
void recalibrate();
};

// 
// Forward References:
// 


// False False
extern "C" void create__8mDoCPd_cFv();
// False False
extern "C" void read__8mDoCPd_cFv();
// True False
//  interface_of_controller_pad* False
// 	 interface_of_controller_pad False
//  JUTGamePad* False
// 	 JUTGamePad False
extern "C" void convert__8mDoCPd_cFP27interface_of_controller_padP10JUTGamePad();
// True False
//  interface_of_controller_pad* False
// 	 interface_of_controller_pad False
extern "C" void LRlockCheck__8mDoCPd_cFP27interface_of_controller_pad();
// False False
extern "C" void recalibrate__8mDoCPd_cFv();
extern "C" extern u8 m_gamePad__8mDoCPd_c[16];
extern "C" extern u8 m_cpadInfo__8mDoCPd_c[256];

// 
// External References:
// 

// False False
//  int False
//  void* False
// 	 void False
void mDoRst_resetCallBack(int, void*);
// False False
//  void* False
// 	 void False
//  int False
//  u32 False
void cLib_memSet(void*, int, u32);
// False False
//  void* False
// 	 void False
//  u32 False
void* operator new(u32);

// False False
//  int False
//  void* False
// 	 void False
extern "C" void mDoRst_resetCallBack__FiPv();
// False False
//  void* False
// 	 void False
//  int False
//  u32 False
extern "C" void cLib_memSet__FPviUl();
// False False
//  void* False
// 	 void False
//  u32 False
extern "C" void* __nw__FUl();
// False False
//  JUTGamePad::EPadPort False
extern "C" void __ct__10JUTGamePadFQ210JUTGamePad8EPadPort();
// False False
extern "C" void read__10JUTGamePadFv();
// False False
extern "C" void clearForReset__10JUTGamePadFv();
// False False
//  int False
extern "C" void getGamePad__10JUTGamePadFi();
// False False
//  u32 False
extern "C" void setEnabled__Q210JUTGamePad7CRumbleFUl();
// False False
extern "C" void PADSetAnalogMode();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();
extern "C" extern u8 g_HIO[64 + 4 /* padding */];
extern "C" extern u32 data_80450580;
extern "C" extern u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" extern u8 sAnalogMode__10JUTGamePad[4];
extern "C" extern u8 sCallback__Q210JUTGamePad13C3ButtonReset[4];
extern "C" extern u8 sCallbackArg__Q210JUTGamePad13C3ButtonReset[4 + 4 /* padding */];
extern "C" extern u8 struct_80451500[4];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803DD2D8-803DD2E8 0010+00 s=2 e=6 z=0  None .bss       m_gamePad__8mDoCPd_c                                         */
u8 m_gamePad__8mDoCPd_c[16];

/* 803DD2E8-803DD3E8 0100+00 s=2 e=84 z=37  None .bss       m_cpadInfo__8mDoCPd_c                                        */
u8 m_cpadInfo__8mDoCPd_c[256];

/* 80007954-80007A94 0140+00 s=0 e=1 z=0  None .text      create__8mDoCPd_cFv                                          */
//	80007964: 802CEC4C (__nw__FUl)
//	80007974: 802E06DC (__ct__10JUTGamePadFQ210JUTGamePad8EPadPort)
//	8000797C: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	80007980: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	80007984: 80450580 (data_80450580)
//	80007994: 802CEC4C (__nw__FUl)
//	800079A4: 802E06DC (__ct__10JUTGamePadFQ210JUTGamePad8EPadPort)
//	800079AC: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	800079B0: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	800079BC: 802CEC4C (__nw__FUl)
//	800079CC: 802E06DC (__ct__10JUTGamePadFQ210JUTGamePad8EPadPort)
//	800079D4: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	800079D8: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	800079E4: 802CEC4C (__nw__FUl)
//	800079F4: 802E06DC (__ct__10JUTGamePadFQ210JUTGamePad8EPadPort)
//	800079FC: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	80007A00: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	80007A1C: 80450C78 (mResetData__6mDoRst)
//	80007A30: 80451501 (struct_80451500)
//	80007A34: 8001574C (mDoRst_resetCallBack__FiPv)
//	80007A38: 8001574C (mDoRst_resetCallBack__FiPv)
//	80007A3C: 804514EC (sCallback__Q210JUTGamePad13C3ButtonReset)
//	80007A40: 804514F0 (sCallbackArg__Q210JUTGamePad13C3ButtonReset)
//	80007A48: 804514DC (sAnalogMode__10JUTGamePad)
//	80007A50: 8034FA10 (PADSetAnalogMode)
//	80007A54: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	80007A58: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoCPd_c::create() {
	nofralloc
#include "asm/m_Do/m_Do_controller_pad/create__8mDoCPd_cFv.s"
}
#pragma pop


/* 80007A94-80007B7C 00E8+00 s=0 e=1 z=0  None .text      read__8mDoCPd_cFv                                            */
//	80007AA4: 803621DC (_savegpr_29)
//	80007AA8: 802E08E4 (read__10JUTGamePadFv)
//	80007AAC: 80450C78 (mResetData__6mDoRst)
//	80007ACC: 802E199C (getGamePad__10JUTGamePadFi)
//	80007AFC: 80450C78 (mResetData__6mDoRst)
//	80007B04: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	80007B08: 803DD2D8 (m_gamePad__8mDoCPd_c)
//	80007B10: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	80007B14: 803DD2E8 (m_cpadInfo__8mDoCPd_c)
//	80007B38: 8026F95C (cLib_memSet__FPviUl)
//	80007B44: 80007B7C (convert__8mDoCPd_cFP27interface_of_controller_padP10JUTGamePad)
//	80007B4C: 80007CD0 (LRlockCheck__8mDoCPd_cFP27interface_of_controller_pad)
//	80007B68: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoCPd_c::read() {
	nofralloc
#include "asm/m_Do/m_Do_controller_pad/read__8mDoCPd_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80451A20-80451A24 0004+00 s=1 e=0 z=0  None .sdata2    @3709                                                        */
SECTION_SDATA2 static f32 lit_3709 = 1.0f / 15.0f;

/* 80451A24-80451A28 0004+00 s=1 e=0 z=0  None .sdata2    @3710                                                        */
SECTION_SDATA2 static f32 lit_3710 = 1.0f;

/* 80451A28-80451A30 0004+04 s=1 e=0 z=0  None .sdata2    @3711                                                        */
SECTION_SDATA2 static f32 lit_3711[1 + 1 /* padding */] = {
	0.0071428571827709675f,
	/* padding */
	0.0f,
};

/* 80451A30-80451A38 0008+00 s=1 e=0 z=0  None .sdata2    @3713                                                        */
SECTION_SDATA2 static f64 lit_3713 = 4503599627370496.0 /* cast u32 to float */;

/* 80007B7C-80007CD0 0154+00 s=1 e=0 z=0  None .text      convert__8mDoCPd_cFP27interface_of_controller_padP10JUTGamePad */
//	80007BD4: 80451A20 (lit_3709)
//	80007BD8: 80451A30 (lit_3713)
//	80007BFC: 80451A24 (lit_3710)
//	80007C10: 80451A20 (lit_3709)
//	80007C14: 80451A30 (lit_3713)
//	80007C38: 80451A24 (lit_3710)
//	80007C4C: 80451A28 (lit_3711)
//	80007C50: 80451A30 (lit_3713)
//	80007C74: 80451A24 (lit_3710)
//	80007C88: 80451A28 (lit_3711)
//	80007C8C: 80451A30 (lit_3713)
//	80007CB0: 80451A24 (lit_3710)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  interface_of_controller_pad* False
// 	 interface_of_controller_pad False
//  JUTGamePad* False
// 	 JUTGamePad False
asm void mDoCPd_c::convert(interface_of_controller_pad* param_0, JUTGamePad* param_1) {
	nofralloc
#include "asm/m_Do/m_Do_controller_pad/convert__8mDoCPd_cFP27interface_of_controller_padP10JUTGamePad.s"
}
#pragma pop


/* 80007CD0-80007D74 00A4+00 s=1 e=0 z=0  None .text      LRlockCheck__8mDoCPd_cFP27interface_of_controller_pad        */
//	80007CE0: 803F1BBC (g_HIO)
//	80007CE4: 803F1BBC (g_HIO)
//	80007D54: 803F1BBC (g_HIO)
//	80007D58: 803F1BBC (g_HIO)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  interface_of_controller_pad* False
// 	 interface_of_controller_pad False
asm void mDoCPd_c::LRlockCheck(interface_of_controller_pad* param_0) {
	nofralloc
#include "asm/m_Do/m_Do_controller_pad/LRlockCheck__8mDoCPd_cFP27interface_of_controller_pad.s"
}
#pragma pop


/* 80007D74-80007D9C 0028+00 s=0 e=1 z=0  None .text      recalibrate__8mDoCPd_cFv                                     */
//	80007D80: 802E1024 (clearForReset__10JUTGamePadFv)
//	80007D88: 802E19D8 (setEnabled__Q210JUTGamePad7CRumbleFUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoCPd_c::recalibrate() {
	nofralloc
#include "asm/m_Do/m_Do_controller_pad/recalibrate__8mDoCPd_cFv.s"
}
#pragma pop


