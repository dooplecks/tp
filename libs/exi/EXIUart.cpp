// 
// Generated By: dol2asm
// Translation Unit: EXIUart
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "exi/EXIUart.h"

// 
// Forward References:
// 


// True False
extern "C" static void ProbeBarnacle();
// False False
extern "C" void __OSEnableBarnacle();
// False False
extern "C" void InitializeUART();
// False False
extern "C" void WriteUARTN();

// 
// External References:
// 


// False False
extern "C" void OSGetConsoleType();
// False False
extern "C" void EXIImm();
// False False
extern "C" void EXISync();
// False False
extern "C" void EXIAttach();
// False False
extern "C" void EXIDetach();
// False False
extern "C" void EXISelect();
// False False
extern "C" void EXIDeselect();
// False False
extern "C" void EXILock();
// False False
extern "C" void EXIUnlock();
// False False
extern "C" void EXIGetID();

// 
// Declarations:
// 

/* 803445E8-80344774 018C+00 s=1 e=0 z=0  None .text      ProbeBarnacle                                                */
//	80344628: 803436A0 (EXIAttach)
//	80344648: 80344028 (EXILock)
//	80344668: 80343868 (EXISelect)
//	8034469C: 80342D00 (EXIImm)
//	803446AC: 803430E8 (EXISync)
//	803446D0: 80342D00 (EXIImm)
//	803446E4: 803430E8 (EXISync)
//	803446F8: 80343994 (EXIDeselect)
//	8034470C: 8034411C (EXIUnlock)
//	80344724: 803437AC (EXIDetach)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
extern "C" asm static void ProbeBarnacle() {
	nofralloc
#include "asm/exi/EXIUart/ProbeBarnacle.s"
}
#pragma pop


/* ############################################################################################## */
/* 804516E0-804516E4 0004+00 s=3 e=0 z=0  None .sbss      Chan                                                         */
static u8 Chan[4];

/* 804516E4-804516E8 0004+00 s=3 e=0 z=0  None .sbss      Dev                                                          */
static u8 Dev[4];

/* 804516E8-804516EC 0004+00 s=3 e=0 z=0  None .sbss      Enabled                                                      */
static u8 Enabled[4];

/* 804516EC-804516F0 0004+00 s=2 e=0 z=0  None .sbss      BarnacleEnabled                                              */
static u8 BarnacleEnabled[4];

/* 80344774-80344930 01BC+00 s=0 e=1 z=0  None .text      __OSEnableBarnacle                                           */
//	80344794: 80344238 (EXIGetID)
//	803448F4: 803445E8 (ProbeBarnacle)
//	80344904: 804516E0 (Chan)
//	8034490C: 804516E4 (Dev)
//	80344910: 804516EC (BarnacleEnabled)
//	80344914: 804516E8 (Enabled)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __OSEnableBarnacle() {
	nofralloc
#include "asm/exi/EXIUart/__OSEnableBarnacle.s"
}
#pragma pop


/* 80344930-803449A0 0070+00 s=0 e=1 z=0  None .text      InitializeUART                                               */
//	8034493C: 804516EC (BarnacleEnabled)
//	80344954: 80339EFC (OSGetConsoleType)
//	80344964: 804516E8 (Enabled)
//	8034497C: 804516E8 (Enabled)
//	80344984: 804516E0 (Chan)
//	8034498C: 804516E4 (Dev)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void InitializeUART() {
	nofralloc
#include "asm/exi/EXIUart/InitializeUART.s"
}
#pragma pop


/* 803449A0-80344BA0 0200+00 s=0 e=1 z=0  None .text      WriteUARTN                                                   */
//	803449B8: 804516E8 (Enabled)
//	803449D0: 804516E0 (Chan)
//	803449D8: 804516E4 (Dev)
//	803449DC: 80344028 (EXILock)
//	80344A30: 804516E0 (Chan)
//	80344A38: 804516E4 (Dev)
//	80344A3C: 80343868 (EXISelect)
//	80344A58: 804516E0 (Chan)
//	80344A68: 80342D00 (EXIImm)
//	80344A6C: 804516E0 (Chan)
//	80344A70: 803430E8 (EXISync)
//	80344A74: 804516E0 (Chan)
//	80344A88: 80342D00 (EXIImm)
//	80344A8C: 804516E0 (Chan)
//	80344A90: 803430E8 (EXISync)
//	80344A94: 804516E0 (Chan)
//	80344A98: 80343994 (EXIDeselect)
//	80344ACC: 804516E0 (Chan)
//	80344AD4: 804516E4 (Dev)
//	80344AD8: 80343868 (EXISelect)
//	80344AEC: 804516E0 (Chan)
//	80344B00: 80342D00 (EXIImm)
//	80344B04: 804516E0 (Chan)
//	80344B08: 803430E8 (EXISync)
//	80344B34: 804516E0 (Chan)
//	80344B48: 80342D00 (EXIImm)
//	80344B4C: 804516E0 (Chan)
//	80344B5C: 803430E8 (EXISync)
//	80344B70: 804516E0 (Chan)
//	80344B74: 80343994 (EXIDeselect)
//	80344B80: 804516E0 (Chan)
//	80344B84: 8034411C (EXIUnlock)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void WriteUARTN() {
	nofralloc
#include "asm/exi/EXIUart/WriteUARTN.s"
}
#pragma pop


