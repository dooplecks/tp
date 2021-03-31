// 
// Generated By: dol2asm
// Translation Unit: JKRAramArchive
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JKernel/JKRAramArchive.h"

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
};

struct JSUPtrList {
	/* 802DBFF0 */ // False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
void prepend(JSUPtrLink*);
	/* 802DC15C */ // False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
void remove(JSUPtrLink*);
};

struct JKRHeap {
	/* 802CE4D4 */ // False False
//  u32 False
//  int False
void alloc(u32, int);
	/* 802CE474 */ // False False
//  u32 False
//  int False
//  JKRHeap* False
// 	 JKRHeap False
void alloc(u32, int, JKRHeap*);
	/* 802CE500 */ // False False
//  void* False
// 	 void False
//  JKRHeap* False
// 	 JKRHeap False
void free(void*, JKRHeap*);
	/* 802CE548 */ // False False
//  void* False
// 	 void False
void free(void*);
	/* 802CEB18 */ // False False
//  void* False
// 	 void False
//  void* False
// 	 void False
//  u32 False
void copyMemory(void*, void*, u32);
};

struct JKRFileLoader {
	/* 802D41D4 */ // False False
void unmount();
};

struct JKRFile {
	/* 802D7B90 */ // True False
~JKRFile();
};

struct JKRExpandSwitch {
};

struct JKRDvdRipper {
	struct EAllocDirection {
	};

	/* 802D9C54 */ // False False
//  s32 False
//  u8* False
// 	 u8 False
//  JKRExpandSwitch False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  JKRDvdRipper::EAllocDirection False
//  u32 False
//  int* False
// 	 int False
//  u32* False
// 	 u32 False
void loadToMainRAM(s32, u8*, JKRExpandSwitch, u32, JKRHeap*, JKRDvdRipper::EAllocDirection, u32, int*, u32*);
};

struct JKRDvdFile {
	/* 802D96A0 */ // False False
//  s32 False
JKRDvdFile(s32);
};

struct JKRDvdAramRipper {
	/* 802DA874 */ // False False
//  s32 False
//  u32 False
//  JKRExpandSwitch False
//  u32 False
//  u32 False
//  u32* False
// 	 u32 False
void loadToAram(s32, u32, JKRExpandSwitch, u32, u32, u32*);
};

struct JKRDisposer {
	/* 802D14E4 */ // False False
~JKRDisposer();
};

struct JKRArchive {
	struct EMountDirection {
	};

	struct SDIFileEntry {
	};

	struct EMountMode {
	};

	/* 802D5A38 */ // False False
//  char const* False
// 	 char const False
// 		 char False
void becomeCurrent(char const*);
	/* 802D5C64 */ // False False
//  u32 False
//  char const* False
// 	 char const False
// 		 char False
void getResource(u32, char const*);
	/* 802D5BE8 */ // False False
//  char const* False
// 	 char const False
// 		 char False
void getResource(char const*);
	/* 802D5D8C */ // False False
//  void* False
// 	 void False
//  u32 False
//  u32 False
//  char const* False
// 	 char const False
// 		 char False
void readResource(void*, u32, u32, char const*);
	/* 802D5E30 */ // False False
//  void* False
// 	 void False
//  u32 False
//  char const* False
// 	 char const False
// 		 char False
void readResource(void*, u32, char const*);
	/* 802D5FB4 */ // False False
void removeResourceAll();
	/* 802D603C */ // False False
//  void* False
// 	 void False
void removeResource(void*);
	/* 802D609C */ // False False
//  void* False
// 	 void False
void detachResource(void*);
	/* 802D60D8 */ // False False
//  void const* False
// 	 void const False
// 		 void False
void getResSize(void const*) const;
	/* 802D6150 */ // False False
//  char const* False
// 	 char const False
// 		 char False
void countFile(char const*) const;
	/* 802D61B0 */ // False False
//  char const* False
// 	 char const False
// 		 char False
void getFirstFile(char const*) const;
	/* 802D6294 */ // False False
//  s32 False
//  JKRArchive::EMountMode False
JKRArchive(s32, JKRArchive::EMountMode);
	/* 802D6334 */ // False False
~JKRArchive();
	/* 802D65A4 */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  u32 False
void findFsResource(char const*, u32) const;
	/* 802D6734 */ // False False
//  void const* False
// 	 void const False
// 		 void False
void findPtrResource(void const*) const;
	/* 802D693C */ // False False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
//  u32 False
void setExpandSize(JKRArchive::SDIFileEntry*, u32);
	/* 802D6978 */ // False False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
void getExpandSize(JKRArchive::SDIFileEntry*) const;
};

struct JKRAramHeap {
	struct EAllocMode {
	};

	/* 802D2FBC */ // False False
//  u32 False
//  JKRAramHeap::EAllocMode False
void alloc(u32, JKRAramHeap::EAllocMode);
};

struct JKRAramArchive {
	/* 802D70C0 */ // False False
//  s32 False
//  JKRArchive::EMountDirection False
JKRAramArchive(s32, JKRArchive::EMountDirection);
	/* 802D7168 */ // True False
~JKRAramArchive();
	/* 802D72A8 */ // True False
//  s32 False
void open(s32);
	/* 802D75E0 */ // True False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
//  u32* False
// 	 u32 False
void fetchResource(JKRArchive::SDIFileEntry*, u32*);
	/* 802D76F4 */ // True False
//  void* False
// 	 void False
//  u32 False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
//  u32* False
// 	 u32 False
void fetchResource(void*, u32, JKRArchive::SDIFileEntry*, u32*);
	/* 802D77F8 */ // True False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
void getAramAddress_Entry(JKRArchive::SDIFileEntry*);
	/* 802D781C */ // False False
//  char const* False
// 	 char const False
// 		 char False
void getAramAddress(char const*);
	/* 802D7914 */ // False False
//  u32 False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
//  u8** False
// 	 u8* False
// 		 u8 False
void fetchResource_subroutine(u32, u32, JKRHeap*, int, u8**);
	/* 802D7858 */ // False False
//  u32 False
//  u32 False
//  u8* False
// 	 u8 False
//  u32 False
//  int False
void fetchResource_subroutine(u32, u32, u8*, u32, int);
	/* 802D7A64 */ // True False
//  void const* False
// 	 void const False
// 		 void False
void getExpandedResSize(void const*) const;
};

struct JKRAram {
	/* 802D25B4 */ // False False
//  u32 False
//  u8* False
// 	 u8 False
//  u32 False
//  JKRExpandSwitch False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
//  u32* False
// 	 u32 False
void aramToMainRam(u32, u8*, u32, JKRExpandSwitch, u32, JKRHeap*, int, u32*);
};

// 
// Forward References:
// 


// False False
//  s32 False
//  JKRArchive::EMountDirection False
extern "C" void __ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection();
// True False
extern "C" void __dt__14JKRAramArchiveFv();
// True False
//  s32 False
extern "C" void open__14JKRAramArchiveFl();
// True False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
//  u32* False
// 	 u32 False
extern "C" void fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl();
// True False
//  void* False
// 	 void False
//  u32 False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
//  u32* False
// 	 u32 False
extern "C" void fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl();
// True False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
extern "C" void getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry();
// False False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void getAramAddress__14JKRAramArchiveFPCc();
// False False
//  u32 False
//  u32 False
//  u8* False
// 	 u8 False
//  u32 False
//  int False
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli();
// False False
//  u32 False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
//  u8** False
// 	 u8* False
// 		 u8 False
extern "C" void fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc();
// True False
//  void const* False
// 	 void const False
// 		 void False
extern "C" void getExpandedResSize__14JKRAramArchiveCFPCv();
// True False
extern "C" void __dt__7JKRFileFv();
extern "C" extern char const* const JKRAramArchive__stringBase0;
extern "C" extern void* __vt__7JKRFile[8];
extern "C" extern void* __vt__14JKRAramArchive[20];

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
SECTION_INIT void memset();
// False False
//  u32 False
//  int False
//  JKRHeap* False
// 	 JKRHeap False
extern "C" void alloc__7JKRHeapFUliP7JKRHeap();
// False False
//  u32 False
//  int False
extern "C" void alloc__7JKRHeapFUli();
// False False
//  void* False
// 	 void False
//  JKRHeap* False
// 	 JKRHeap False
extern "C" void free__7JKRHeapFPvP7JKRHeap();
// False False
//  void* False
// 	 void False
extern "C" void free__7JKRHeapFPv();
// False False
//  void* False
// 	 void False
//  void* False
// 	 void False
//  u32 False
extern "C" void copyMemory__7JKRHeapFPvPvUl();
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
// False False
extern "C" void __dt__11JKRDisposerFv();
// False False
//  u32 False
//  u8* False
// 	 u8 False
//  u32 False
//  JKRExpandSwitch False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
//  u32* False
// 	 u32 False
extern "C" void aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl();
// False False
//  u32 False
//  JKRAramHeap::EAllocMode False
extern "C" void alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode();
// False False
extern "C" void unmount__13JKRFileLoaderFv();
// False False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void becomeCurrent__10JKRArchiveFPCc();
// False False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void getResource__10JKRArchiveFPCc();
// False False
//  u32 False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void getResource__10JKRArchiveFUlPCc();
// False False
//  void* False
// 	 void False
//  u32 False
//  u32 False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void readResource__10JKRArchiveFPvUlUlPCc();
// False False
//  void* False
// 	 void False
//  u32 False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void readResource__10JKRArchiveFPvUlPCc();
// False False
extern "C" void removeResourceAll__10JKRArchiveFv();
// False False
//  void* False
// 	 void False
extern "C" void removeResource__10JKRArchiveFPv();
// False False
//  void* False
// 	 void False
extern "C" void detachResource__10JKRArchiveFPv();
// False False
//  void const* False
// 	 void const False
// 		 void False
extern "C" void getResSize__10JKRArchiveCFPCv();
// False False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void countFile__10JKRArchiveCFPCc();
// False False
//  char const* False
// 	 char const False
// 		 char False
extern "C" void getFirstFile__10JKRArchiveCFPCc();
// False False
//  s32 False
//  JKRArchive::EMountMode False
extern "C" void __ct__10JKRArchiveFlQ210JKRArchive10EMountMode();
// False False
extern "C" void __dt__10JKRArchiveFv();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  u32 False
extern "C" void findFsResource__10JKRArchiveCFPCcUl();
// False False
//  void const* False
// 	 void const False
// 		 void False
extern "C" void findPtrResource__10JKRArchiveCFPCv();
// False False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
//  u32 False
extern "C" void setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl();
// False False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
extern "C" void getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry();
// False False
//  s32 False
extern "C" void __ct__10JKRDvdFileFl();
// False False
//  s32 False
//  u8* False
// 	 u8 False
//  JKRExpandSwitch False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  JKRDvdRipper::EAllocDirection False
//  u32 False
//  int* False
// 	 int False
//  u32* False
// 	 u32 False
extern "C" void loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl();
// False False
//  s32 False
//  u32 False
//  JKRExpandSwitch False
//  u32 False
//  u32 False
//  u32* False
// 	 u32 False
extern "C" void loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl();
// False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
extern "C" void prepend__10JSUPtrListFP10JSUPtrLink();
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
extern "C" void _savegpr_26();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_26();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
// False False
extern "C" void _restgpr_29();
// False False
extern "C" void abs();
extern "C" extern u8 sVolumeList__13JKRFileLoader[12];
extern "C" extern u8 sSystemHeap__7JKRHeap[4];
extern "C" extern u8 sAramObject__7JKRAram[4];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803CC328-803CC348 0020+00 s=1 e=4 z=0  None .data      __vt__7JKRFile                                               */
SECTION_DATA void* __vt__7JKRFile[8] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__7JKRFileFv,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 803CC348-803CC398 0050+00 s=2 e=0 z=0  None .data      __vt__14JKRAramArchive                                       */
SECTION_DATA void* __vt__14JKRAramArchive[20] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__14JKRAramArchiveFv,
	(void*)unmount__13JKRFileLoaderFv,
	(void*)becomeCurrent__10JKRArchiveFPCc,
	(void*)getResource__10JKRArchiveFPCc,
	(void*)getResource__10JKRArchiveFUlPCc,
	(void*)readResource__10JKRArchiveFPvUlPCc,
	(void*)readResource__10JKRArchiveFPvUlUlPCc,
	(void*)removeResourceAll__10JKRArchiveFv,
	(void*)removeResource__10JKRArchiveFPv,
	(void*)detachResource__10JKRArchiveFPv,
	(void*)getResSize__10JKRArchiveCFPCv,
	(void*)countFile__10JKRArchiveCFPCc,
	(void*)getFirstFile__10JKRArchiveCFPCc,
	(void*)getExpandedResSize__14JKRAramArchiveCFPCv,
	(void*)fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl,
	(void*)fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl,
	(void*)setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl,
	(void*)getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry,
};

/* 802D70C0-802D7168 00A8+00 s=0 e=1 z=0  None .text      __ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection      */
//	802D70D0: 803621DC (_savegpr_29)
//	802D70E4: 802D6294 (__ct__10JKRArchiveFlQ210JKRArchive10EMountMode)
//	802D70E8: 803CC348 (__vt__14JKRAramArchive)
//	802D70EC: 803CC348 (__vt__14JKRAramArchive)
//	802D7100: 802D72A8 (open__14JKRAramArchiveFl)
//	802D7134: 80434354 (sVolumeList__13JKRFileLoader)
//	802D7138: 80434354 (sVolumeList__13JKRFileLoader)
//	802D7140: 802DBFF0 (prepend__10JSUPtrListFP10JSUPtrLink)
//	802D7154: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  s32 False
//  JKRArchive::EMountDirection False
asm JKRAramArchive::JKRAramArchive(s32 param_0, JKRArchive::EMountDirection param_1) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/__ct__14JKRAramArchiveFlQ210JKRArchive15EMountDirection.s"
}
#pragma pop


/* 802D7168-802D72A8 0140+00 s=1 e=0 z=0  None .text      __dt__14JKRAramArchiveFv                                     */
//	802D7178: 803621D8 (_savegpr_28)
//	802D7188: 803CC348 (__vt__14JKRAramArchive)
//	802D718C: 803CC348 (__vt__14JKRAramArchive)
//	802D71C8: 802CE500 (free__7JKRHeapFPvP7JKRHeap)
//	802D71E8: 802CE500 (free__7JKRHeapFPvP7JKRHeap)
//	802D7204: 802CE500 (free__7JKRHeapFPvP7JKRHeap)
//	802D7258: 80434354 (sVolumeList__13JKRFileLoader)
//	802D725C: 80434354 (sVolumeList__13JKRFileLoader)
//	802D7264: 802DC15C (remove__10JSUPtrListFP10JSUPtrLink)
//	802D7278: 802D6334 (__dt__10JKRArchiveFv)
//	802D7288: 802CED3C (__dl__FPv)
//	802D7294: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm JKRAramArchive::~JKRAramArchive() {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/__dt__14JKRAramArchiveFv.s"
}
#pragma pop


/* 802D72A8-802D75E0 0338+00 s=1 e=0 z=0  None .text      open__14JKRAramArchiveFl                                     */
//	802D72B8: 803621D4 (_savegpr_27)
//	802D72E0: 80451370 (sSystemHeap__7JKRHeap)
//	802D72F8: 802CEC98 (__nw__FUlP7JKRHeapi)
//	802D7308: 802D96A0 (__ct__10JKRDvdFileFl)
//	802D7330: 80451370 (sSystemHeap__7JKRHeap)
//	802D733C: 802CE4D4 (alloc__7JKRHeapFUli)
//	802D737C: 802D9C54 (loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl)
//	802D7388: 8033B580 (DCInvalidateRange)
//	802D73B8: 802CE474 (alloc__7JKRHeapFUliP7JKRHeap)
//	802D73FC: 802D9C54 (loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl)
//	802D7408: 8033B580 (DCInvalidateRange)
//	802D7490: 803650D0 (abs)
//	802D74A8: 802CE474 (alloc__7JKRHeapFUliP7JKRHeap)
//	802D74C4: 802CE500 (free__7JKRHeapFPvP7JKRHeap)
//	802D74E4: 80003458 (memset)
//	802D74F4: 804513C8 (sAramObject__7JKRAram)
//	802D750C: 802D2FBC (alloc__11JKRAramHeapFUlQ211JKRAramHeap10EAllocMode)
//	802D7530: 802CE500 (free__7JKRHeapFPvP7JKRHeap)
//	802D7544: 802CE500 (free__7JKRHeapFPvP7JKRHeap)
//	802D7574: 802DA874 (loadToAram__16JKRDvdAramRipperFlUl15JKRExpandSwitchUlUlPUl)
//	802D7580: 80451370 (sSystemHeap__7JKRHeap)
//	802D7588: 802CE548 (free__7JKRHeapFPv)
//	802D75CC: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  s32 False
asm void JKRAramArchive::open(s32 param_0) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/open__14JKRAramArchiveFl.s"
}
#pragma pop


/* 802D75E0-802D76F4 0114+00 s=1 e=0 z=0  None .text      fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl */
//	802D75F0: 803621D8 (_savegpr_28)
//	802D7660: 802D7914 (fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc)
//	802D76E0: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
//  u32* False
// 	 u32 False
asm void JKRAramArchive::fetchResource(JKRArchive::SDIFileEntry* param_0, u32* param_1) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntryPUl.s"
}
#pragma pop


/* 802D76F4-802D77F8 0104+00 s=1 e=0 z=0  None .text      fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl */
//	802D7704: 803621D4 (_savegpr_27)
//	802D7780: 802D7858 (fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli)
//	802D77CC: 802CEB18 (copyMemory__7JKRHeapFPvPvUl)
//	802D77E4: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
//  u32 False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
//  u32* False
// 	 u32 False
asm void JKRAramArchive::fetchResource(void* param_0, u32 param_1, JKRArchive::SDIFileEntry* param_2, u32* param_3) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource__14JKRAramArchiveFPvUlPQ210JKRArchive12SDIFileEntryPUl.s"
}
#pragma pop


/* 802D77F8-802D781C 0024+00 s=1 e=0 z=0  None .text      getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  JKRArchive::SDIFileEntry* False
// 	 JKRArchive::SDIFileEntry False
asm void JKRAramArchive::getAramAddress_Entry(JKRArchive::SDIFileEntry* param_0) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry.s"
}
#pragma pop


/* 802D781C-802D7858 003C+00 s=0 e=1 z=0  None .text      getAramAddress__14JKRAramArchiveFPCc                         */
//	802D7834: 802D65A4 (findFsResource__10JKRArchiveCFPCcUl)
//	802D7840: 802D77F8 (getAramAddress_Entry__14JKRAramArchiveFPQ210JKRArchive12SDIFileEntry)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  char const* False
// 	 char const False
// 		 char False
asm void JKRAramArchive::getAramAddress(char const* param_0) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/getAramAddress__14JKRAramArchiveFPCc.s"
}
#pragma pop


/* ############################################################################################## */
/* 8039D188-8039D1B0 0028+00 s=2 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_8039D188 = "JKRAramArchive.cpp";
SECTION_DEAD char const* const stringBase_8039D19B = "%s";
SECTION_DEAD char const* const stringBase_8039D19E = "??? bad sequence\n";
#pragma pop

/* 802D7858-802D7914 00BC+00 s=1 e=1 z=0  None .text      fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli        */
//	802D78B0: 802D25B4 (aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	802D78D8: 802D25B4 (aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	802D78E4: 8039D188 (JKRAramArchive__stringBase0)
//	802D78E8: 8039D188 (JKRAramArchive__stringBase0)
//	802D78FC: 802E21FC (panic_f__12JUTExceptionFPCciPCce)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u32 False
//  u32 False
//  u8* False
// 	 u8 False
//  u32 False
//  int False
asm void JKRAramArchive::fetchResource_subroutine(u32 param_0, u32 param_1, u8* param_2, u32 param_3, int param_4) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource_subroutine__14JKRAramArchiveFUlUlPUcUli.s"
}
#pragma pop


/* 802D7914-802D7A64 0150+00 s=1 e=1 z=0  None .text      fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc */
//	802D7924: 803621D0 (_savegpr_26)
//	802D7960: 802CE474 (alloc__7JKRHeapFUliP7JKRHeap)
//	802D7988: 802D25B4 (aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	802D79BC: 802D25B4 (aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	802D79F4: 802CE474 (alloc__7JKRHeapFUliP7JKRHeap)
//	802D7A1C: 802D25B4 (aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	802D7A2C: 8039D188 (JKRAramArchive__stringBase0)
//	802D7A30: 8039D188 (JKRAramArchive__stringBase0)
//	802D7A44: 802E21FC (panic_f__12JUTExceptionFPCciPCce)
//	802D7A50: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u32 False
//  u32 False
//  JKRHeap* False
// 	 JKRHeap False
//  int False
//  u8** False
// 	 u8* False
// 		 u8 False
asm void JKRAramArchive::fetchResource_subroutine(u32 param_0, u32 param_1, JKRHeap* param_2, int param_3, u8** param_4) {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/fetchResource_subroutine__14JKRAramArchiveFUlUlP7JKRHeapiPPUc.s"
}
#pragma pop


/* 802D7A64-802D7B90 012C+00 s=1 e=0 z=0  None .text      getExpandedResSize__14JKRAramArchiveCFPCv                    */
//	802D7A74: 803621DC (_savegpr_29)
//	802D7AA0: 802D6734 (findPtrResource__10JKRArchiveCFPCv)
//	802D7B34: 802D25B4 (aramToMainRam__7JKRAramFUlPUcUl15JKRExpandSwitchUlP7JKRHeapiPUl)
//	802D7B7C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void const* False
// 	 void const False
// 		 void False
asm void JKRAramArchive::getExpandedResSize(void const* param_0) const {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/getExpandedResSize__14JKRAramArchiveCFPCv.s"
}
#pragma pop


/* 802D7B90-802D7BF0 0060+00 s=1 e=0 z=0  None .text      __dt__7JKRFileFv                                             */
//	802D7BB0: 803CC328 (__vt__7JKRFile)
//	802D7BB4: 803CC328 (__vt__7JKRFile)
//	802D7BC0: 802D14E4 (__dt__11JKRDisposerFv)
//	802D7BD0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm JKRFile::~JKRFile() {
	nofralloc
#include "asm/JSystem/JKernel/JKRAramArchive/__dt__7JKRFileFv.s"
}
#pragma pop


