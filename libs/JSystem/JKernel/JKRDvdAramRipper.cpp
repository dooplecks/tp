//
// Generated By: dol2asm
// Translation Unit: JKRDvdAramRipper
//

#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
    /* 802DBE14 */ ~JSUPtrLink();
};

struct JSUPtrList {
    /* 802DBEAC */ ~JSUPtrList();
    /* 802DBF14 */ void initiate();
    /* 802DBF4C */ void append(JSUPtrLink*);
    /* 802DC15C */ void remove(JSUPtrLink*);
};

template <typename A0>
struct JSUList {};
/* JSUList<JKRADCommand> */
struct JSUList__template10 {
    /* 802DB62C */ void func_802DB62C();
};

struct JSUInputStream {
    /* 802DC23C */ ~JSUInputStream();
};

struct JKRFile {};

struct JSUFileInputStream {
    /* 802DADD8 */ ~JSUFileInputStream();
    /* 802DC638 */ JSUFileInputStream(JKRFile*);
};

struct JKRHeap {
    /* 802CE4D4 */ void alloc(u32, int);
    /* 802CE500 */ void free(void*, JKRHeap*);

    static u8 sSystemHeap[4];
};

struct JKRExpandSwitch {};

struct JKRDvdFile {
    /* 802D9584 */ JKRDvdFile();
    /* 802D9748 */ ~JKRDvdFile();
    /* 802D98C4 */ void open(s32);
};

struct JKRADCommand {
    /* 802DAF1C */ JKRADCommand();
    /* 802DAF5C */ ~JKRADCommand();
};

struct JKRDvdAramRipper {
    /* 802DA874 */ void loadToAram(s32, u32, JKRExpandSwitch, u32, u32, u32*);
    /* 802DA918 */ void loadToAram(JKRDvdFile*, u32, JKRExpandSwitch, u32, u32, u32*);
    /* 802DA9C0 */ void loadToAram_Async(JKRDvdFile*, u32, JKRExpandSwitch, void (*)(u32), u32, u32,
                                         u32*);
    /* 802DAA74 */ void callCommand_Async(JKRADCommand*);
    /* 802DAE48 */ void syncAram(JKRADCommand*, int);

    static u8 sDvdAramAsyncList[12];
    static u32 sSZSBufferSize;
};

struct JKRDecomp {
    /* 802DBCF8 */ void checkCompressed(u8*);
};

struct JKRAramStreamCommand {};

struct JKRAramStream {
    /* 802D3ED0 */ void write_StreamToAram_Async(JSUFileInputStream*, u32, u32, u32, u32*);
    /* 802D3FA0 */ void sync(JKRAramStreamCommand*, int);
};

struct JKRAramBlock {};

struct JKRAramPiece {
    /* 802D3838 */ void orderSync(int, u32, u32, u32, JKRAramBlock*);
};

struct JKRAramHeap {
    struct EAllocMode {};

    /* 802D2FBC */ void alloc(u32, JKRAramHeap::EAllocMode);
};

struct JKRAram {
    static u8 sAramObject[4];
};

//
// Forward References:
//

extern "C" void loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl();
extern "C" void loadToAram__16JKRDvdAramRipperFP10JKRDvdFileUl15JKRExpandSwitchUlUlPUl();
extern "C" void
loadToAram_Async__16JKRDvdAramRipperFP10JKRDvdFileUl15JKRExpandSwitchPFUl_vUlUlPUl();
extern "C" void callCommand_Async__16JKRDvdAramRipperFP12JKRADCommand();
extern "C" void __dt__18JSUFileInputStreamFv();
extern "C" void syncAram__16JKRDvdAramRipperFP12JKRADCommandi();
extern "C" void __ct__12JKRADCommandFv();
extern "C" void __dt__12JKRADCommandFv();
extern "C" static void JKRDecompressFromDVDToAram__FP10JKRDvdFileUlUlUlUlUlPUl();
extern "C" static void decompSZS_subroutine__FPUcUl();
extern "C" static void firstSrcData__Fv();
extern "C" static void nextSrcData__FPUc();
extern "C" static void dmaBufferFlush__FUl();
extern "C" void __sinit_JKRDvdAramRipper_cpp();
extern "C" void func_802DB62C();
extern "C" u8 sDvdAramAsyncList__16JKRDvdAramRipper[12];
extern "C" u32 sSZSBufferSize__16JKRDvdAramRipper;

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void alloc__7JKRHeapFUli();
extern "C" void free__7JKRHeapFPvP7JKRHeap();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
extern "C" void orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock();
extern "C" void write_StreamToAram_Async__13JKRAramStreamFP18JSUFileInputStreamUlUlUlPUl();
extern "C" void sync__13JKRAramStreamFP20JKRAramStreamCommandi();
extern "C" void __ct__10JKRDvdFileFv();
extern "C" void __dt__10JKRDvdFileFv();
extern "C" void open__10JKRDvdFileFl();
extern "C" void checkCompressed__9JKRDecompFPUc();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void remove__10JSUPtrListFP10JSUPtrLink();
extern "C" void __dt__14JSUInputStreamFv();
extern "C" void __ct__18JSUFileInputStreamFP7JKRFile();
extern "C" void DCInvalidateRange();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void OSInitMutex();
extern "C" void OSLockMutex();
extern "C" void OSUnlockMutex();
extern "C" void OSGetCurrentThread();
extern "C" void DVDReadPrio();
extern "C" void VIWaitForRetrace();
extern "C" void __register_global_object();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__20JSURandomInputStream[9];
extern "C" extern void* __vt__18JSUFileInputStream[9 + 1 /* padding */];
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sAramObject__7JKRAram[4];

//
// Declarations:
//

/* 802DA874-802DA918 2D51B4 00A4+00 0/0 3/3 0/0 .text
 * loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl   */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDvdAramRipper::loadToAram(s32 param_0, u32 param_1, JKRExpandSwitch param_2,
                                      u32 param_3, u32 param_4, u32* param_5) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl.s"
}
#pragma pop

/* 802DA918-802DA9C0 2D5258 00A8+00 1/1 0/0 0/0 .text
 * loadToAram__16JKRDvdAramRipperFP10JKRDvdFileUl15JKRExpandSwitchUlUlPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDvdAramRipper::loadToAram(JKRDvdFile* param_0, u32 param_1, JKRExpandSwitch param_2,
                                      u32 param_3, u32 param_4, u32* param_5) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/loadToAram__16JKRDvdAramRipperFP10JKRDvdFileUl15JKRExpandSwitchUlUlPUl.s"
}
#pragma pop

/* 802DA9C0-802DAA74 2D5300 00B4+00 1/1 0/0 0/0 .text
 * loadToAram_Async__16JKRDvdAramRipperFP10JKRDvdFileUl15JKRExpandSwitchPFUl_vUlUlPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDvdAramRipper::loadToAram_Async(JKRDvdFile* param_0, u32 param_1,
                                            JKRExpandSwitch param_2, void (*)(u32), u32 param_4,
                                            u32 param_5, u32* param_6) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/func_802DA9C0.s"
}
#pragma pop

/* ############################################################################################## */
/* 804343A8-804343B4 0610C8 000C+00 1/1 0/0 0/0 .bss             @301 */
static u8 lit_301[12];

/* 804343B4-804343C0 0610D4 000C+00 3/3 0/0 0/0 .bss sDvdAramAsyncList__16JKRDvdAramRipper */
u8 JKRDvdAramRipper::sDvdAramAsyncList[12];

/* 804508D0-804508D4 000350 0004+00 3/3 0/0 0/0 .sdata           None */
SECTION_SDATA static u32 data_804508D0 = 0x01000000;

/* 802DAA74-802DADD8 2D53B4 0364+00 1/1 0/0 0/0 .text
 * callCommand_Async__16JKRDvdAramRipperFP12JKRADCommand        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDvdAramRipper::callCommand_Async(JKRADCommand* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/callCommand_Async__16JKRDvdAramRipperFP12JKRADCommand.s"
}
#pragma pop

/* 802DADD8-802DAE48 2D5718 0070+00 0/0 1/0 0/0 .text            __dt__18JSUFileInputStreamFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JSUFileInputStream::~JSUFileInputStream() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/__dt__18JSUFileInputStreamFv.s"
}
#pragma pop

/* 802DAE48-802DAF1C 2D5788 00D4+00 1/1 0/0 0/0 .text
 * syncAram__16JKRDvdAramRipperFP12JKRADCommandi                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDvdAramRipper::syncAram(JKRADCommand* param_0, int param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/syncAram__16JKRDvdAramRipperFP12JKRADCommandi.s"
}
#pragma pop

/* 802DAF1C-802DAF5C 2D585C 0040+00 1/1 0/0 0/0 .text            __ct__12JKRADCommandFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRADCommand::JKRADCommand() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/__ct__12JKRADCommandFv.s"
}
#pragma pop

/* 802DAF5C-802DAFE8 2D589C 008C+00 2/2 0/0 0/0 .text            __dt__12JKRADCommandFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JKRADCommand::~JKRADCommand() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/__dt__12JKRADCommandFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804343C0-804343D8 0610E0 0018+00 1/1 0/0 0/0 .bss             decompMutex */
static u8 decompMutex[24];

/* 804508D4-804508D8 000354 0004+00 1/1 1/1 0/0 .sdata           sSZSBufferSize__16JKRDvdAramRipper
 */
SECTION_SDATA u32 JKRDvdAramRipper::sSZSBufferSize = 0x00000400;

/* 80451468-8045146C 000968 0004+00 3/3 0/0 0/0 .sbss            szpBuf */
static u8 szpBuf[4];

/* 8045146C-80451470 00096C 0004+00 3/3 0/0 0/0 .sbss            szpEnd */
static u8 szpEnd[4];

/* 80451470-80451474 000970 0004+00 2/2 0/0 0/0 .sbss            refBuf */
static u8 refBuf[4];

/* 80451474-80451478 000974 0004+00 2/2 0/0 0/0 .sbss            refEnd */
static u8 refEnd[4];

/* 80451478-8045147C 000978 0004+00 2/2 0/0 0/0 .sbss            refCurrent */
static u8 refCurrent[4];

/* 8045147C-80451480 00097C 0004+00 2/2 0/0 0/0 .sbss            dmaBuf */
static u8 dmaBuf[4];

/* 80451480-80451484 000980 0004+00 2/2 0/0 0/0 .sbss            dmaEnd */
static u8 dmaEnd[4];

/* 80451484-80451488 000984 0004+00 3/3 0/0 0/0 .sbss            dmaCurrent */
static u8 dmaCurrent[4];

/* 80451488-8045148C 000988 0004+00 3/3 0/0 0/0 .sbss            srcOffset */
static u8 srcOffset[4];

/* 8045148C-80451490 00098C 0004+00 4/4 0/0 0/0 .sbss            transLeft */
static u8 transLeft[4];

/* 80451490-80451494 000990 0004+00 3/3 0/0 0/0 .sbss            srcLimit */
static u8 srcLimit[4];

/* 80451494-80451498 000994 0004+00 3/3 0/0 0/0 .sbss            srcFile */
static u8 srcFile[4];

/* 80451498-8045149C 000998 0004+00 2/2 0/0 0/0 .sbss            fileOffset */
static u8 fileOffset[4];

/* 8045149C-804514A0 00099C 0004+00 2/2 0/0 0/0 .sbss            readCount */
static u8 readCount[4];

/* 804514A0-804514A4 0009A0 0004+00 2/2 0/0 0/0 .sbss            maxDest */
static u8 maxDest[4];

/* 804514A4-804514A8 0009A4 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_804514A4[4];

/* 804514A8-804514AC 0009A8 0004+00 2/2 0/0 0/0 .sbss            tsPtr */
static u8 tsPtr[4];

/* 804514AC-804514B0 0009AC 0004+00 1/1 0/0 0/0 .sbss            tsArea */
static u8 tsArea[4];

/* 802DAFE8-802DB160 2D5928 0178+00 1/1 0/0 0/0 .text
 * JKRDecompressFromDVDToAram__FP10JKRDvdFileUlUlUlUlUlPUl      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void JKRDecompressFromDVDToAram(JKRDvdFile* param_0, u32 param_1, u32 param_2,
                                           u32 param_3, u32 param_4, u32 param_5, u32* param_6) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/JKRDecompressFromDVDToAram__FP10JKRDvdFileUlUlUlUlUlPUl.s"
}
#pragma pop

/* 802DB160-802DB3E8 2D5AA0 0288+00 1/1 0/0 0/0 .text            decompSZS_subroutine__FPUcUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void decompSZS_subroutine(u8* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/decompSZS_subroutine__FPUcUl.s"
}
#pragma pop

/* 802DB3E8-802DB49C 2D5D28 00B4+00 1/1 0/0 0/0 .text            firstSrcData__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void firstSrcData() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/firstSrcData__Fv.s"
}
#pragma pop

/* 802DB49C-802DB580 2D5DDC 00E4+00 1/1 0/0 0/0 .text            nextSrcData__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void nextSrcData(u8* param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/nextSrcData__FPUc.s"
}
#pragma pop

/* 802DB580-802DB5E8 2D5EC0 0068+00 1/1 0/0 0/0 .text            dmaBufferFlush__FUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dmaBufferFlush(u32 param_0) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/dmaBufferFlush__FUl.s"
}
#pragma pop

/* 802DB5E8-802DB62C 2D5F28 0044+00 0/0 1/0 0/0 .text            __sinit_JKRDvdAramRipper_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_JKRDvdAramRipper_cpp() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/__sinit_JKRDvdAramRipper_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_802DB5E8 = (void*)__sinit_JKRDvdAramRipper_cpp;
#pragma pop

/* 802DB62C-802DB680 2D5F6C 0054+00 1/1 0/0 0/0 .text            __dt__23JSUList<12JKRADCommand>Fv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802DB62C() {
    nofralloc
#include "asm/JSystem/JKernel/JKRDvdAramRipper/func_802DB62C.s"
}
#pragma pop
