// 
// Generated By: dol2asm
// Translation Unit: JKRAramPiece
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JKernel/JKRAramPiece.h"

// 
// Types:
// 

struct JUTException {
	/* 802E21FC */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  int False
//  char const* False
// 	 char const False
// 		 char False
//  ... False
void panic_f(char const*, int, char const*, ...);
};

struct JSUPtrLink {
	/* 802DBDFC */ // False False
//  void* False
// 	 void False
JSUPtrLink(void*);
	/* 802DBE14 */ // False False
~JSUPtrLink();
};

struct JSUPtrList {
	/* 802DBF14 */ // False False
void initiate();
	/* 802DBF4C */ // False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
void append(JSUPtrLink*);
	/* 802DC15C */ // False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
void remove(JSUPtrLink*);
};

template <typename A0>
struct JSUList { };
/* JSUList<JKRAMCommand> */
struct JSUList__template5 {
	/* 802D2DF0 */ // False True
~JSUList__template5();
};

struct JKRHeap {
	/* 802CE500 */ // False False
//  void* False
// 	 void False
//  JKRHeap* False
// 	 JKRHeap False
void free(void*, JKRHeap*);
};

struct JKRDecompCommand {
};

struct JKRDecomp {
	/* 802DB8D0 */ // False False
//  JKRDecompCommand* False
// 	 JKRDecompCommand False
void sendCommand(JKRDecompCommand*);
};

struct JKRAramBlock {
};

struct JKRAMCommand {
	/* 802D39EC */ // True False
JKRAMCommand();
	/* 802D3A5C */ // True False
~JKRAMCommand();
};

struct JKRAramPiece {
	/* 802D3574 */ // True False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
//  void (*)(u32) False
// 	 * False
// 		  False
// 	 void False
// 	 u32 False
void prepareCommand(int, u32, u32, u32, JKRAramBlock*, void (*)(u32));
	/* 802D35F4 */ // False False
//  JKRAMCommand* False
// 	 JKRAMCommand False
void sendCommand(JKRAMCommand*);
	/* 802D3614 */ // True False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
//  void (*)(u32) False
// 	 * False
// 		  False
// 	 void False
// 	 u32 False
void orderAsync(int, u32, u32, u32, JKRAramBlock*, void (*)(u32));
	/* 802D3770 */ // True False
//  JKRAMCommand* False
// 	 JKRAMCommand False
//  int False
void sync(JKRAMCommand*, int);
	/* 802D3838 */ // False False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
void orderSync(int, u32, u32, u32, JKRAramBlock*);
	/* 802D38CC */ // False False
//  JKRAMCommand* False
// 	 JKRAMCommand False
void startDMA(JKRAMCommand*);
	/* 802D3944 */ // True False
//  u32 False
void doneDMA(u32);
};

// 
// Forward References:
// 


// True False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
//  void (*)(u32) False
// 	 * False
// 		  False
// 	 void False
// 	 u32 False
extern "C" void prepareCommand__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v();
// False False
//  JKRAMCommand* False
// 	 JKRAMCommand False
extern "C" void sendCommand__12JKRAramPieceFP12JKRAMCommand();
// True False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
//  void (*)(u32) False
// 	 * False
// 		  False
// 	 void False
// 	 u32 False
extern "C" void orderAsync__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v();
// True False
//  JKRAMCommand* False
// 	 JKRAMCommand False
//  int False
extern "C" void sync__12JKRAramPieceFP12JKRAMCommandi();
// False False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
extern "C" void orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock();
// False False
//  JKRAMCommand* False
// 	 JKRAMCommand False
extern "C" void startDMA__12JKRAramPieceFP12JKRAMCommand();
// True False
//  u32 False
extern "C" void doneDMA__12JKRAramPieceFUl();
// True False
extern "C" void __ct__12JKRAMCommandFv();
// True False
extern "C" void __dt__12JKRAMCommandFv();
// False False
extern "C" void __sinit_JKRAramPiece_cpp();
extern "C" extern char const* const JKRAramPiece__stringBase0;

// 
// External References:
// 

// False False
//  void* False
// 	 void False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
void* operator new(u32, JKRHeap*, int);
// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
extern "C" void OSReport();
// False False
//  void* False
// 	 void False
//  JKRHeap* False
// 	 JKRHeap False
extern "C" void free__7JKRHeapFPvP7JKRHeap();
// False False
//  void* False
// 	 void False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
extern "C" void* __nw__FUlP7JKRHeapi();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False True
extern "C" void func_802D2DF0();
// False False
//  JKRDecompCommand* False
// 	 JKRDecompCommand False
extern "C" void sendCommand__9JKRDecompFP16JKRDecompCommand();
// False False
//  void* False
// 	 void False
extern "C" void __ct__10JSUPtrLinkFPv();
// False False
extern "C" void __dt__10JSUPtrLinkFv();
// False False
extern "C" void initiate__10JSUPtrListFv();
// False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
// False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  int False
//  char const* False
// 	 char const False
// 		 char False
//  ... False
extern "C" void panic_f__12JUTExceptionFPCciPCce();
// False False
extern "C" void DCInvalidateRange();
// False False
extern "C" void DCStoreRange();
// False False
extern "C" void OSInitMessageQueue();
// False False
extern "C" void OSSendMessage();
// False False
extern "C" void OSReceiveMessage();
// False False
extern "C" void OSLockMutex();
// False False
extern "C" void OSUnlockMutex();
// False False
extern "C" void ARQPostRequest();
// False False
extern "C" void __register_global_object();
// False False
extern "C" void _savegpr_25();
// False False
extern "C" void _savegpr_26();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _restgpr_25();
// False False
extern "C" void _restgpr_26();
// False False
extern "C" void _restgpr_27();
extern "C" extern u8 sMessageQueue__7JKRAram[32];
extern "C" extern u8 sSystemHeap__7JKRHeap[4];

// 
// Declarations:
// 

/* 802D3574-802D35F4 0080+00 s=1 e=0 z=0  None .text      prepareCommand__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v  */
//	802D3584: 803621D0 (_savegpr_26)
//	802D35A4: 80451370 (sSystemHeap__7JKRHeap)
//	802D35AC: 802CEC98 (__nw__FUlP7JKRHeapi)
//	802D35B8: 802D39EC (__ct__12JKRAMCommandFv)
//	802D35E0: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
//  void (*)(u32) False
// 	 * False
// 		  False
// 	 void False
// 	 u32 False
asm void JKRAramPiece::prepareCommand(int param_0, u32 param_1, u32 param_2, u32 param_3, JKRAramBlock* param_4, void (*)(u32)) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/prepareCommand__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v.s"
}
#pragma pop


/* 802D35F4-802D3614 0020+00 s=0 e=1 z=0  None .text      sendCommand__12JKRAramPieceFP12JKRAMCommand                  */
//	802D3600: 802D38CC (startDMA__12JKRAramPieceFP12JKRAMCommand)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  JKRAMCommand* False
// 	 JKRAMCommand False
asm void JKRAramPiece::sendCommand(JKRAMCommand* param_0) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/sendCommand__12JKRAramPieceFP12JKRAMCommand.s"
}
#pragma pop


/* ############################################################################################## */
/* 8039D0B8-8039D120 0068+00 s=1 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8039D0B8 = "direction = %x\n";
SECTION_DEAD char const* const stringBase_8039D0C8 = "source = %x\n";
SECTION_DEAD char const* const stringBase_8039D0D5 = "destination = %x\n";
SECTION_DEAD char const* const stringBase_8039D0E7 = "length = %x\n";
SECTION_DEAD char const* const stringBase_8039D0F4 = "JKRAramPiece.cpp";
SECTION_DEAD char const* const stringBase_8039D105 = "%s";
SECTION_DEAD char const* const stringBase_8039D108 = "illegal address. abort.";
#pragma pop

/* 80434318-80434324 000C+00 s=1 e=0 z=0  None .bss       @492                                                         */
static u8 lit_492[12];

/* 80434324-80434330 000C+00 s=3 e=0 z=0  None .bss       sAramPieceCommandList__12JKRAramPiece                        */
static u8 sAramPieceCommandList__12JKRAramPiece[12];

/* 80434330-80434348 0018+00 s=3 e=0 z=0  None .bss       mMutex__12JKRAramPiece                                       */
static u8 mMutex__12JKRAramPiece[24];

/* 802D3614-802D3770 015C+00 s=1 e=0 z=0  None .text      orderAsync__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v      */
//	802D3624: 803621CC (_savegpr_25)
//	802D3640: 80434330 (mMutex__12JKRAramPiece)
//	802D3644: 80434330 (mMutex__12JKRAramPiece)
//	802D3648: 8033F040 (OSLockMutex)
//	802D365C: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D3660: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D366C: 80006ABC (OSReport)
//	802D3670: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D3674: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D3684: 80006ABC (OSReport)
//	802D3688: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D368C: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D369C: 80006ABC (OSReport)
//	802D36A0: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D36A4: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D36B4: 80006ABC (OSReport)
//	802D36B8: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D36BC: 8039D0B8 (JKRAramPiece__stringBase0)
//	802D36D4: 802E21FC (panic_f__12JUTExceptionFPCciPCce)
//	802D36DC: 80451370 (sSystemHeap__7JKRHeap)
//	802D36E4: 802CEC98 (__nw__FUlP7JKRHeapi)
//	802D3704: 802D3574 (prepareCommand__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v)
//	802D3718: 803CC138 (sMessageQueue__7JKRAram)
//	802D371C: 803CC138 (sMessageQueue__7JKRAram)
//	802D3728: 8033E9F4 (OSSendMessage)
//	802D3738: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D373C: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D3744: 802DBF4C (append__10JSUPtrListFP10JSUPtrLink)
//	802D3748: 80434330 (mMutex__12JKRAramPiece)
//	802D374C: 80434330 (mMutex__12JKRAramPiece)
//	802D3750: 8033F11C (OSUnlockMutex)
//	802D375C: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
//  void (*)(u32) False
// 	 * False
// 		  False
// 	 void False
// 	 u32 False
asm void JKRAramPiece::orderAsync(int param_0, u32 param_1, u32 param_2, u32 param_3, JKRAramBlock* param_4, void (*)(u32)) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/orderAsync__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v.s"
}
#pragma pop


/* 802D3770-802D3838 00C8+00 s=1 e=0 z=0  None .text      sync__12JKRAramPieceFP12JKRAMCommandi                        */
//	802D378C: 80434330 (mMutex__12JKRAramPiece)
//	802D3790: 80434330 (mMutex__12JKRAramPiece)
//	802D3794: 8033F040 (OSLockMutex)
//	802D37AC: 8033EABC (OSReceiveMessage)
//	802D37B0: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D37B4: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D37BC: 802DC15C (remove__10JSUPtrListFP10JSUPtrLink)
//	802D37C0: 80434330 (mMutex__12JKRAramPiece)
//	802D37C4: 80434330 (mMutex__12JKRAramPiece)
//	802D37C8: 8033F11C (OSUnlockMutex)
//	802D37E0: 8033EABC (OSReceiveMessage)
//	802D37EC: 80434330 (mMutex__12JKRAramPiece)
//	802D37F0: 80434330 (mMutex__12JKRAramPiece)
//	802D37F4: 8033F11C (OSUnlockMutex)
//	802D3800: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D3804: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D380C: 802DC15C (remove__10JSUPtrListFP10JSUPtrLink)
//	802D3810: 80434330 (mMutex__12JKRAramPiece)
//	802D3814: 80434330 (mMutex__12JKRAramPiece)
//	802D3818: 8033F11C (OSUnlockMutex)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  JKRAMCommand* False
// 	 JKRAMCommand False
//  int False
asm void JKRAramPiece::sync(JKRAMCommand* param_0, int param_1) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/sync__12JKRAramPieceFP12JKRAMCommandi.s"
}
#pragma pop


/* 802D3838-802D38CC 0094+00 s=0 e=6 z=0  None .text      orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock             */
//	802D3848: 803621D4 (_savegpr_27)
//	802D3860: 80434330 (mMutex__12JKRAramPiece)
//	802D3864: 80434330 (mMutex__12JKRAramPiece)
//	802D3868: 8033F040 (OSLockMutex)
//	802D3884: 802D3614 (orderAsync__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v)
//	802D3890: 802D3770 (sync__12JKRAramPieceFP12JKRAMCommandi)
//	802D38A0: 802D3A5C (__dt__12JKRAMCommandFv)
//	802D38A4: 80434330 (mMutex__12JKRAramPiece)
//	802D38A8: 80434330 (mMutex__12JKRAramPiece)
//	802D38AC: 8033F11C (OSUnlockMutex)
//	802D38B8: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  int False
//  u32 False
//  u32 False
//  u32 False
//  JKRAramBlock* False
// 	 JKRAramBlock False
asm void JKRAramPiece::orderSync(int param_0, u32 param_1, u32 param_2, u32 param_3, JKRAramBlock* param_4) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock.s"
}
#pragma pop


/* 802D38CC-802D3944 0078+00 s=1 e=1 z=0  None .text      startDMA__12JKRAramPieceFP12JKRAMCommand                     */
//	802D38F4: 8033B580 (DCInvalidateRange)
//	802D3904: 8033B5DC (DCStoreRange)
//	802D3924: 802D3944 (doneDMA__12JKRAramPieceFUl)
//	802D3928: 802D3944 (doneDMA__12JKRAramPieceFUl)
//	802D392C: 803522D4 (ARQPostRequest)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  JKRAMCommand* False
// 	 JKRAMCommand False
asm void JKRAramPiece::startDMA(JKRAMCommand* param_0) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/startDMA__12JKRAramPieceFP12JKRAMCommand.s"
}
#pragma pop


/* 802D3944-802D39EC 00A8+00 s=1 e=0 z=0  None .text      doneDMA__12JKRAramPieceFUl                                   */
//	802D396C: 8033B580 (DCInvalidateRange)
//	802D3988: 802DB8D0 (sendCommand__9JKRDecompFP16JKRDecompCommand)
//	802D39C0: 8033E9F4 (OSSendMessage)
//	802D39D4: 8033E9F4 (OSSendMessage)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  u32 False
asm void JKRAramPiece::doneDMA(u32 param_0) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/doneDMA__12JKRAramPieceFUl.s"
}
#pragma pop


/* 802D39EC-802D3A5C 0070+00 s=1 e=0 z=0  None .text      __ct__12JKRAMCommandFv                                       */
//	802D3A08: 802DBDFC (__ct__10JSUPtrLinkFPv)
//	802D3A14: 802DBDFC (__ct__10JSUPtrLinkFPv)
//	802D3A24: 8033E994 (OSInitMessageQueue)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm JKRAMCommand::JKRAMCommand() {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/__ct__12JKRAMCommandFv.s"
}
#pragma pop


/* 802D3A5C-802D3B04 00A8+00 s=1 e=0 z=0  None .text      __dt__12JKRAMCommandFv                                       */
//	802D3A88: 802CED3C (__dl__FPv)
//	802D3A98: 802CED3C (__dl__FPv)
//	802D3AAC: 802CE500 (free__7JKRHeapFPvP7JKRHeap)
//	802D3AC0: 802DBE14 (__dt__10JSUPtrLinkFv)
//	802D3AD4: 802DBE14 (__dt__10JSUPtrLinkFv)
//	802D3AE4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm JKRAMCommand::~JKRAMCommand() {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/__dt__12JKRAMCommandFv.s"
}
#pragma pop


/* 802D3B04-802D3B48 0044+00 s=0 e=0 z=0  None .text      __sinit_JKRAramPiece_cpp                                     */
//	802D3B10: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D3B14: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D3B18: 802DBF14 (initiate__10JSUPtrListFv)
//	802D3B1C: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D3B20: 80434324 (sAramPieceCommandList__12JKRAramPiece)
//	802D3B24: 802D2DF0 (func_802D2DF0)
//	802D3B28: 802D2DF0 (func_802D2DF0)
//	802D3B2C: 80434318 (lit_492)
//	802D3B30: 80434318 (lit_492)
//	802D3B34: 80361C24 (__register_global_object)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_JKRAramPiece_cpp() {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramPiece/__sinit_JKRAramPiece_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_802D3B04 = (void*)__sinit_JKRAramPiece_cpp;
#pragma pop


