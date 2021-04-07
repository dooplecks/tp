//
// Generated By: dol2asm
// Translation Unit: JAUSectionHeap
//

#include "JSystem/JAudio2/JAUSectionHeap.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

namespace std {
template <typename A1>
struct __bitset_base {};
/* __bitset_base<8> */
struct __bitset_base__template0 {
    /* 802A65D4 */ void func_802A65D4(u32, bool);
    /* 802A6614 */ void func_802A6614(u32);
    /* 802A6634 */ void func_802A6634(u32) /* const */;
    /* 802A665C */ void func_802A665C();
};

};  // namespace std

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
    /* 802DBE14 */ ~JSUPtrLink();
};

struct JSUPtrList {
    /* 802DBEAC */ ~JSUPtrList();
    /* 802DBF14 */ void initiate();
    /* 802DBF4C */ void append(JSUPtrLink*);
};

template <typename A0>
struct JSULink {};
/* JSULink<JAUBankTable> */
struct JSULink__template0 {};

struct JKRHeap {
    /* 802CE438 */ void becomeCurrentHeap();
    /* 802CE5F8 */ void freeTail();
    /* 802CE72C */ void getFreeSize();
};

struct JKRSolidHeap {
    /* 802D0A24 */ void create(u32, JKRHeap*, bool);
};

struct JKRDisposer {
    /* 802D147C */ JKRDisposer();
    /* 802D14E4 */ ~JKRDisposer();
};

struct JKRArchive {};

struct JAUStreamFileTable {
    /* 802A7420 */ JAUStreamFileTable();
    /* 802A742C */ void init(void const*);
    /* 802A7478 */ void getNumFiles() const;
    /* 802A7484 */ void getFilePath(int) const;
};

struct JAUSoundTable {
    /* 802A7114 */ void init(void const*);
};

struct JAUSoundNameTable {
    /* 802A73D4 */ void init(void const*);
};

struct JAUSeqDataMgr_SeqCollection {
    /* 802A677C */ JAUSeqDataMgr_SeqCollection();
};

struct JAUSeqDataBlock {
    /* 802A68F4 */ JAUSeqDataBlock();
};

struct JAUSeqCollection {
    /* 802A66AC */ void init(void const*);
};

struct JAISoundID {};

struct JAISeqDataUser {};

struct JAISeqData {};

struct JAUSectionHeap {
    struct TSectionHeapData {
        /* 802A5DF4 */ TSectionHeapData();
    };

    /* 802A5E60 */ void setSeqDataArchive(JKRArchive*);
    /* 802A5EC0 */ void loadDynamicSeq(JAISoundID, bool);
    /* 802A5EF8 */ void releaseIdleDynamicSeqDataBlock();
    /* 802A5FE0 */ JAUSectionHeap(JKRSolidHeap*, bool, s32);
    /* 802A6094 */ void getOpenSection();
    /* 802A60A0 */ void setSeqDataUser(JAISeqDataUser*);
    /* 802A60AC */ void newDynamicSeqBlock(u32);
    /* 802A61D0 */ void getSeqData(JAISoundID, JAISeqData*);
    /* 802A6270 */ bool releaseSeqData();
    /* 802A6278 */ ~JAUSectionHeap();
};

struct JAUSection {
    struct TSectionData {
        /* 802A4EE8 */ TSectionData();
        /* 802A4F68 */ void resetRegisteredBankTables();
        /* 802A4FE4 */ void resetRegisteredWaveBankTables();
    };

    /* 802A5060 */ JAUSection(JAUSectionHeap*, u32, s32);
    /* 802A50F8 */ void finishBuild();
    /* 802A5160 */ void dispose();
    /* 802A51E4 */ void newSoundTable(void const*, u32, bool);
    /* 802A52A0 */ void newSoundNameTable(void const*, u32, bool);
    /* 802A535C */ void newStreamFileTable(void const*, bool);
    /* 802A5500 */ void newSeSeqCollection(void const*, u32);
    /* 802A5598 */ void newStaticSeqDataBlock_(JAISoundID, u32);
    /* 802A56C8 */ void newStaticSeqData(JAISoundID, void const*, u32);
    /* 802A5730 */ void newStaticSeqData(JAISoundID);
    /* 802A57F0 */ void newCopy(void const*, u32, s32);
    /* 802A5854 */ void newWaveBank(u32, void const*);
    /* 802A5948 */ void loadWaveArc(u32, u32);
    /* 802A5A50 */ void newBank(void const*, u32);
    /* 802A5B84 */ void newVoiceBank(u32, u32);
    /* 802A5CAC */ void beginNewBankTable(u32, u32);
    /* 802A5D9C */ void endNewBankTable();
    /* 802A6468 */ ~JAUSection();
};

struct JAUDynamicSeqDataBlocks {
    /* 802A6A58 */ JAUDynamicSeqDataBlocks();
    /* 802A6AA0 */ void setSeqDataArchive(JKRArchive*);
    /* 802A6AA8 */ void getSeqData(JAISoundID, JAISeqDataUser*, JAISeqData*, bool);
    /* 802A6B8C */ void appendDynamicSeqDataBlock(JAUSeqDataBlock*);
    /* 802A6C18 */ void loadDynamicSeq(JAISoundID, bool, JAISeqDataUser*);
    /* 802A6D48 */ void releaseIdleDynamicSeqDataBlock(JAISeqDataUser*);
};

struct JAUBankTable {
    /* 802A4AA0 */ void getBank(u32) const;
};

struct JAUBankTableDictionary {
    /* 802A4A80 */ void appendBankTable(JSULink<JAUBankTable>*);
};

struct JASHeap {};

struct JASWaveArc {
    /* 8029A4C0 */ void load(JASHeap*);
};

struct JASWSParser {
    /* 80298FD8 */ void createWaveBank(void const*, JKRHeap*);
};

struct JASResArcLoader {
    /* 80290BD0 */ void getResSize(JKRArchive const*, u16);
};

struct JASBNKParser {
    /* 80299538 */ void createBank(void const*, JKRHeap*);
};

struct JAIStreamDataMgr {
    /* 802A3AD8 */ ~JAIStreamDataMgr();
};

struct JAISeqDataMgr {
    /* 802A17BC */ ~JAISeqDataMgr();
};

//
// Forward References:
//

extern "C" void __ct__Q210JAUSection12TSectionDataFv();
extern "C" void resetRegisteredBankTables__Q210JAUSection12TSectionDataFv();
extern "C" void resetRegisteredWaveBankTables__Q210JAUSection12TSectionDataFv();
extern "C" void __ct__10JAUSectionFP14JAUSectionHeapUll();
extern "C" void finishBuild__10JAUSectionFv();
extern "C" void dispose__10JAUSectionFv();
extern "C" void newSoundTable__10JAUSectionFPCvUlb();
extern "C" void newSoundNameTable__10JAUSectionFPCvUlb();
extern "C" void newStreamFileTable__10JAUSectionFPCvb();
extern "C" void newSeSeqCollection__10JAUSectionFPCvUl();
extern "C" void newStaticSeqDataBlock___10JAUSectionF10JAISoundIDUl();
extern "C" void newStaticSeqData__10JAUSectionF10JAISoundIDPCvUl();
extern "C" void newStaticSeqData__10JAUSectionF10JAISoundID();
extern "C" void newCopy__10JAUSectionFPCvUll();
extern "C" void newWaveBank__10JAUSectionFUlPCv();
extern "C" void loadWaveArc__10JAUSectionFUlUl();
extern "C" void newBank__10JAUSectionFPCvUl();
extern "C" void newVoiceBank__10JAUSectionFUlUl();
extern "C" void beginNewBankTable__10JAUSectionFUlUl();
extern "C" void endNewBankTable__10JAUSectionFv();
extern "C" void __ct__Q214JAUSectionHeap16TSectionHeapDataFv();
extern "C" void setSeqDataArchive__14JAUSectionHeapFP10JKRArchive();
extern "C" void loadDynamicSeq__14JAUSectionHeapF10JAISoundIDb();
extern "C" void releaseIdleDynamicSeqDataBlock__14JAUSectionHeapFv();
extern "C" static void JAUNewSectionHeap__FP12JKRSolidHeapb();
extern "C" void JAUNewSectionHeap__Fb();
extern "C" void __ct__14JAUSectionHeapFP12JKRSolidHeapbl();
extern "C" void getOpenSection__14JAUSectionHeapFv();
extern "C" void setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser();
extern "C" void newDynamicSeqBlock__14JAUSectionHeapFUl();
extern "C" void getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData();
extern "C" bool releaseSeqData__14JAUSectionHeapFv();
extern "C" void __dt__14JAUSectionHeapFv();
extern "C" static void func_802A6440();
extern "C" void __dt__10JAUSectionFv();
extern "C" void func_802A6574();
extern "C" void func_802A65D4(u32, bool);
extern "C" void func_802A6614(u32);
extern "C" void func_802A6634(u32);
extern "C" void func_802A665C();
extern "C" static void func_802A6680();
extern "C" static void func_802A6688();
extern "C" static void func_802A6690();
extern "C" static void func_802A6698();
extern "C" extern char const* const JAUSectionHeap__stringBase0;

//
// External References:
//

SECTION_INIT void memset();
SECTION_INIT void memcpy();
extern "C" void getResSize__15JASResArcLoaderFPC10JKRArchiveUs();
extern "C" void createWaveBank__11JASWSParserFPCvP7JKRHeap();
extern "C" void createBank__12JASBNKParserFPCvP7JKRHeap();
extern "C" void load__10JASWaveArcFP7JASHeap();
extern "C" void __dt__13JAISeqDataMgrFv();
extern "C" void __dt__16JAIStreamDataMgrFv();
extern "C" void func_802A4A80();
extern "C" void getBank__12JAUBankTableCFUl();
extern "C" void init__16JAUSeqCollectionFPCv();
extern "C" void __ct__27JAUSeqDataMgr_SeqCollectionFv();
extern "C" void __ct__15JAUSeqDataBlockFv();
extern "C" void __ct__23JAUDynamicSeqDataBlocksFv();
extern "C" void setSeqDataArchive__23JAUDynamicSeqDataBlocksFP10JKRArchive();
extern "C" void getSeqData__23JAUDynamicSeqDataBlocksF10JAISoundIDP14JAISeqDataUserP10JAISeqDatab();
extern "C" void appendDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP15JAUSeqDataBlock();
extern "C" void loadDynamicSeq__23JAUDynamicSeqDataBlocksF10JAISoundIDbP14JAISeqDataUser();
extern "C" void releaseIdleDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP14JAISeqDataUser();
extern "C" void init__13JAUSoundTableFPCv();
extern "C" void init__17JAUSoundNameTableFPCv();
extern "C" void __ct__18JAUStreamFileTableFv();
extern "C" void init__18JAUStreamFileTableFPCv();
extern "C" void getNumFiles__18JAUStreamFileTableCFv();
extern "C" void getFilePath__18JAUStreamFileTableCFi();
extern "C" void becomeCurrentHeap__7JKRHeapFv();
extern "C" void freeTail__7JKRHeapFv();
extern "C" void getFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUl();
extern "C" void* __nwa__FUli();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void create__12JKRSolidHeapFUlP7JKRHeapb();
extern "C" void __ct__11JKRDisposerFv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void OSDisableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void DVDConvertPathToEntrynum();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void abort();
extern "C" void fprintf();
extern "C" extern void* __vt__11JASBankList[3 + 1 /* padding */];
extern "C" extern void* __vt__7JASBank[5];
extern "C" extern void* __vt__12JASVoiceBank[5 + 1 /* padding */];
extern "C" extern void* __vt__13JAISeqDataMgr[6];
extern "C" extern void* __vt__16JAIStreamDataMgr[4 + 1 /* padding */];
extern "C" extern void* __vt__32JAUStreamDataMgr_StreamFileTable[4];
extern "C" extern void* __files[80];
extern "C" extern u8 data_80450B50[4];
extern "C" extern u8 data_80450B54[4];
extern "C" extern u8 data_80450B58[4];
extern "C" extern u8 data_80450B90[4 + 4 /* padding */];
extern "C" extern u8 data_80450CC0[4 + 4 /* padding */];
extern "C" extern u8 JASDram[4];

//
// Declarations:
//

/* 802A4EE8-802A4F68 29F828 0080+00 1/1 0/0 0/0 .text __ct__Q210JAUSection12TSectionDataFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSection::TSectionData::TSectionData() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__ct__Q210JAUSection12TSectionDataFv.s"
}
#pragma pop

/* 802A4F68-802A4FE4 29F8A8 007C+00 1/1 0/0 0/0 .text
 * resetRegisteredBankTables__Q210JAUSection12TSectionDataFv    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::TSectionData::resetRegisteredBankTables() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/resetRegisteredBankTables__Q210JAUSection12TSectionDataFv.s"
}
#pragma pop

/* 802A4FE4-802A5060 29F924 007C+00 1/1 0/0 0/0 .text
 * resetRegisteredWaveBankTables__Q210JAUSection12TSectionDataFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::TSectionData::resetRegisteredWaveBankTables() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/resetRegisteredWaveBankTables__Q210JAUSection12TSectionDataFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C9AC0-803C9AF4 026BE0 0034+00 2/2 0/0 0/0 .data            __vt__14JAUSectionHeap */
SECTION_DATA extern void* __vt__14JAUSectionHeap[13] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14JAUSectionHeapFv,
    (void*)dispose__10JAUSectionFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_802A6698,
    (void*)func_802A6690,
    (void*)func_802A6688,
    (void*)func_802A6680,
    (void*)setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser,
    (void*)getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData,
    (void*)releaseSeqData__14JAUSectionHeapFv,
};

/* 803C9AF4-803C9B08 026C14 0014+00 1/1 0/0 0/0 .data            __vt__16JAUBankTableLink */
SECTION_DATA extern void* __vt__16JAUBankTableLink[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)getBank__12JAUBankTableCFUl,
};

/* 803C9B08-803C9B14 026C28 000C+00 1/1 0/0 0/0 .data            __vt__12JAUBankTable */
SECTION_DATA extern void* __vt__12JAUBankTable[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getBank__12JAUBankTableCFUl,
};

/* 803C9B14-803C9B24 026C34 0010+00 2/2 0/0 0/0 .data
 * __vt__Q228@unnamed@JAUSectionHeap_cpp@14TStreamDataMgr       */
SECTION_DATA extern void* data_803C9B14[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_802A6440,
    (void*)func_802A6574,
};

/* 803C9B24-803C9B38 026C44 0010+04 3/3 0/0 0/0 .data            __vt__10JAUSection */
SECTION_DATA extern void* __vt__10JAUSection[4 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10JAUSectionFv,
    (void*)dispose__10JAUSectionFv,
    /* padding */
    NULL,
};

/* 802A5060-802A50F8 29F9A0 0098+00 1/1 0/0 0/0 .text __ct__10JAUSectionFP14JAUSectionHeapUll */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSection::JAUSection(JAUSectionHeap* param_0, u32 param_1, s32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__ct__10JAUSectionFP14JAUSectionHeapUll.s"
}
#pragma pop

/* 802A50F8-802A5160 29FA38 0068+00 0/0 1/1 0/0 .text            finishBuild__10JAUSectionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::finishBuild() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/finishBuild__10JAUSectionFv.s"
}
#pragma pop

/* 802A5160-802A51E4 29FAA0 0084+00 2/0 0/0 0/0 .text            dispose__10JAUSectionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::dispose() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/dispose__10JAUSectionFv.s"
}
#pragma pop

/* 802A51E4-802A52A0 29FB24 00BC+00 0/0 1/1 0/0 .text            newSoundTable__10JAUSectionFPCvUlb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newSoundTable(void const* param_0, u32 param_1, bool param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newSoundTable__10JAUSectionFPCvUlb.s"
}
#pragma pop

/* 802A52A0-802A535C 29FBE0 00BC+00 0/0 1/1 0/0 .text newSoundNameTable__10JAUSectionFPCvUlb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newSoundNameTable(void const* param_0, u32 param_1, bool param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newSoundNameTable__10JAUSectionFPCvUlb.s"
}
#pragma pop

/* 802A535C-802A5500 29FC9C 01A4+00 0/0 1/1 0/0 .text newStreamFileTable__10JAUSectionFPCvb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newStreamFileTable(void const* param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newStreamFileTable__10JAUSectionFPCvb.s"
}
#pragma pop

/* 802A5500-802A5598 29FE40 0098+00 0/0 1/1 0/0 .text newSeSeqCollection__10JAUSectionFPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newSeSeqCollection(void const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newSeSeqCollection__10JAUSectionFPCvUl.s"
}
#pragma pop

/* 802A5598-802A56C8 29FED8 0130+00 2/2 0/0 0/0 .text
 * newStaticSeqDataBlock___10JAUSectionF10JAISoundIDUl          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newStaticSeqDataBlock_(JAISoundID param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newStaticSeqDataBlock___10JAUSectionF10JAISoundIDUl.s"
}
#pragma pop

/* 802A56C8-802A5730 2A0008 0068+00 0/0 1/1 0/0 .text
 * newStaticSeqData__10JAUSectionF10JAISoundIDPCvUl             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newStaticSeqData(JAISoundID param_0, void const* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newStaticSeqData__10JAUSectionF10JAISoundIDPCvUl.s"
}
#pragma pop

/* 802A5730-802A57F0 2A0070 00C0+00 0/0 1/1 0/0 .text newStaticSeqData__10JAUSectionF10JAISoundID
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newStaticSeqData(JAISoundID param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newStaticSeqData__10JAUSectionF10JAISoundID.s"
}
#pragma pop

/* 802A57F0-802A5854 2A0130 0064+00 3/3 0/0 0/0 .text            newCopy__10JAUSectionFPCvUll */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newCopy(void const* param_0, u32 param_1, s32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newCopy__10JAUSectionFPCvUll.s"
}
#pragma pop

/* 802A5854-802A5948 2A0194 00F4+00 0/0 1/1 0/0 .text            newWaveBank__10JAUSectionFUlPCv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newWaveBank(u32 param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newWaveBank__10JAUSectionFUlPCv.s"
}
#pragma pop

/* 802A5948-802A5A50 2A0288 0108+00 0/0 1/1 0/0 .text            loadWaveArc__10JAUSectionFUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::loadWaveArc(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/loadWaveArc__10JAUSectionFUlUl.s"
}
#pragma pop

/* 802A5A50-802A5B84 2A0390 0134+00 0/0 1/1 0/0 .text            newBank__10JAUSectionFPCvUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newBank(void const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newBank__10JAUSectionFPCvUl.s"
}
#pragma pop

/* 802A5B84-802A5CAC 2A04C4 0128+00 0/0 1/1 0/0 .text            newVoiceBank__10JAUSectionFUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::newVoiceBank(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newVoiceBank__10JAUSectionFUlUl.s"
}
#pragma pop

/* 802A5CAC-802A5D9C 2A05EC 00F0+00 0/0 1/1 0/0 .text beginNewBankTable__10JAUSectionFUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::beginNewBankTable(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/beginNewBankTable__10JAUSectionFUlUl.s"
}
#pragma pop

/* 802A5D9C-802A5DF4 2A06DC 0058+00 0/0 1/1 0/0 .text            endNewBankTable__10JAUSectionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::endNewBankTable() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/endNewBankTable__10JAUSectionFv.s"
}
#pragma pop

/* 802A5DF4-802A5E60 2A0734 006C+00 1/1 0/0 0/0 .text __ct__Q214JAUSectionHeap16TSectionHeapDataFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSectionHeap::TSectionHeapData::TSectionHeapData() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__ct__Q214JAUSectionHeap16TSectionHeapDataFv.s"
}
#pragma pop

/* 802A5E60-802A5EC0 2A07A0 0060+00 0/0 1/1 0/0 .text
 * setSeqDataArchive__14JAUSectionHeapFP10JKRArchive            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSectionHeap::setSeqDataArchive(JKRArchive* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/setSeqDataArchive__14JAUSectionHeapFP10JKRArchive.s"
}
#pragma pop

/* 802A5EC0-802A5EF8 2A0800 0038+00 0/0 1/1 0/0 .text
 * loadDynamicSeq__14JAUSectionHeapF10JAISoundIDb               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSectionHeap::loadDynamicSeq(JAISoundID param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/loadDynamicSeq__14JAUSectionHeapF10JAISoundIDb.s"
}
#pragma pop

/* 802A5EF8-802A5F24 2A0838 002C+00 0/0 1/1 0/0 .text
 * releaseIdleDynamicSeqDataBlock__14JAUSectionHeapFv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSectionHeap::releaseIdleDynamicSeqDataBlock() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/releaseIdleDynamicSeqDataBlock__14JAUSectionHeapFv.s"
}
#pragma pop

/* 802A5F24-802A5F9C 2A0864 0078+00 1/1 0/0 0/0 .text JAUNewSectionHeap__FP12JKRSolidHeapb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void JAUNewSectionHeap(JKRSolidHeap* param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/JAUNewSectionHeap__FP12JKRSolidHeapb.s"
}
#pragma pop

/* 802A5F9C-802A5FE0 2A08DC 0044+00 0/0 1/1 0/0 .text            JAUNewSectionHeap__Fb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUNewSectionHeap(bool param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/JAUNewSectionHeap__Fb.s"
}
#pragma pop

/* 802A5FE0-802A6094 2A0920 00B4+00 1/1 0/0 0/0 .text __ct__14JAUSectionHeapFP12JKRSolidHeapbl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSectionHeap::JAUSectionHeap(JKRSolidHeap* param_0, bool param_1, s32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__ct__14JAUSectionHeapFP12JKRSolidHeapbl.s"
}
#pragma pop

/* 802A6094-802A60A0 2A09D4 000C+00 0/0 1/1 0/0 .text            getOpenSection__14JAUSectionHeapFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSectionHeap::getOpenSection() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/getOpenSection__14JAUSectionHeapFv.s"
}
#pragma pop

/* 802A60A0-802A60AC 2A09E0 000C+00 2/1 0/0 0/0 .text
 * setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSectionHeap::setSeqDataUser(JAISeqDataUser* param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser.s"
}
#pragma pop

/* 802A60AC-802A61D0 2A09EC 0124+00 0/0 2/2 0/0 .text newDynamicSeqBlock__14JAUSectionHeapFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSectionHeap::newDynamicSeqBlock(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newDynamicSeqBlock__14JAUSectionHeapFUl.s"
}
#pragma pop

/* 802A61D0-802A6270 2A0B10 00A0+00 2/1 0/0 0/0 .text
 * getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSectionHeap::getSeqData(JAISoundID param_0, JAISeqData* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData.s"
}
#pragma pop

/* 802A6270-802A6278 2A0BB0 0008+00 2/1 0/0 0/0 .text            releaseSeqData__14JAUSectionHeapFv
 */
bool JAUSectionHeap::releaseSeqData() {
    return false;
}

/* 802A6278-802A6440 2A0BB8 01C8+00 2/1 0/0 0/0 .text            __dt__14JAUSectionHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSectionHeap::~JAUSectionHeap() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__dt__14JAUSectionHeapFv.s"
}
#pragma pop

/* 802A6440-802A6468 2A0D80 0028+00 1/0 0/0 0/0 .text
 * getStreamFileEntry__Q228@unnamed@JAUSectionHeap_cpp@14TStreamDataMgrF10JAISoundID */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6440() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6440.s"
}
#pragma pop

/* 802A6468-802A6574 2A0DA8 010C+00 1/0 0/0 0/0 .text            __dt__10JAUSectionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSection::~JAUSection() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__dt__10JAUSectionFv.s"
}
#pragma pop

/* 802A6574-802A65D4 2A0EB4 0060+00 1/0 0/0 0/0 .text
 * __dt__Q228@unnamed@JAUSectionHeap_cpp@14TStreamDataMgrFv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void func_802A6574() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6574.s"
}
#pragma pop

/* 802A65D4-802A6614 2A0F14 0040+00 3/3 0/0 0/0 .text            set__Q23std16__bitset_base<8>FUlb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A65D4(u32 param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A65D4.s"
}
#pragma pop

/* 802A6614-802A6634 2A0F54 0020+00 2/2 0/0 0/0 .text            reset__Q23std16__bitset_base<8>FUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A6614(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6614.s"
}
#pragma pop

/* 802A6634-802A665C 2A0F74 0028+00 1/1 0/0 0/0 .text            test__Q23std16__bitset_base<8>CFUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A6634(u32 param_0) /* const */ {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6634.s"
}
#pragma pop

/* ############################################################################################## */
/* 804507D0-804507D8 000250 0004+04 1/1 0/0 0/0 .sdata           @2588 */
SECTION_SDATA static u8 lit_2588[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 802A665C-802A6680 2A0F9C 0024+00 1/1 0/0 0/0 .text            __ct__Q23std16__bitset_base<8>Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A665C() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A665C.s"
}
#pragma pop

/* 802A6680-802A6688 2A0FC0 0008+00 1/0 0/0 0/0 .text
 * @220@setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6680() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6680.s"
}
#pragma pop

/* 802A6688-802A6690 2A0FC8 0008+00 1/0 0/0 0/0 .text @220@releaseSeqData__14JAUSectionHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6688() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6688.s"
}
#pragma pop

/* 802A6690-802A6698 2A0FD0 0008+00 1/0 0/0 0/0 .text
 * @220@getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6690() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6690.s"
}
#pragma pop

/* 802A6698-802A66A0 2A0FD8 0008+00 1/0 0/0 0/0 .text            @220@__dt__14JAUSectionHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6698() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6698.s"
}
#pragma pop

/* 8039B950-8039B9C0 027FB0 0069+07 6/6 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_8039B950 = "index out of range of bitset::reset";
SECTION_DEAD static char const* const stringBase_8039B974 = "index out of range of bitset::test";
SECTION_DEAD static char const* const stringBase_8039B997 = "index out of range of bitset::set";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039B9B9 = "\0\0\0\0\0\0";
#pragma pop
