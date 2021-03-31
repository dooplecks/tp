// 
// Generated By: dol2asm
// Translation Unit: m_Do/m_Do_dvd_thread
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "m_Do/m_Do_dvd_thread.h"

// 
// Types:
// 

struct node_list_class {
};

struct node_class {
};

struct JKRHeap {
	/* 802CE438 */ // False False
void becomeCurrentHeap();
	/* 802CE700 */ // False False
//  void* False
// 	 void False
void getSize(void*);
};

struct mDoDvdThd_toMainRam_c {
	/* 80016338 */ // True False
//  u8 False
mDoDvdThd_toMainRam_c(u8);
	/* 80016394 */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRHeap* False
// 	 JKRHeap False
void create(char const*, u8, JKRHeap*);
	/* 8001645C */ // True False
~mDoDvdThd_toMainRam_c();
	/* 800164BC */ // True False
void execute();
};

struct mDoDvdThd_command_c {
	/* 800158FC */ // True False
~mDoDvdThd_command_c();
	/* 80015B74 */ // True False
mDoDvdThd_command_c();
};

struct mDoDvdThd_param_c {
	/* 80015944 */ // True False
mDoDvdThd_param_c();
	/* 8001598C */ // True False
void kick();
	/* 800159B4 */ // True False
void waitForKick();
	/* 800159DC */ // True False
void getFirstCommand();
	/* 800159E4 */ // True False
//  mDoDvdThd_command_c* False
// 	 mDoDvdThd_command_c False
void addition(mDoDvdThd_command_c*);
	/* 80015A3C */ // True False
//  mDoDvdThd_command_c* False
// 	 mDoDvdThd_command_c False
void cut(mDoDvdThd_command_c*);
	/* 80015AD8 */ // True False
void mainLoop();
};

struct JKRArchive {
	struct EMountMode {
	};

	struct EMountDirection {
	};

	/* 802D58C8 */ // False False
//  s32 False
//  JKRArchive::EMountMode False
//  JKRHeap* False
// 	 JKRHeap False
//  JKRArchive::EMountDirection False
void mount(s32, JKRArchive::EMountMode, JKRHeap*, JKRArchive::EMountDirection);
};

struct mDoDvdThd_mountXArchive_c {
	/* 80016108 */ // True False
~mDoDvdThd_mountXArchive_c();
	/* 80016168 */ // True False
//  u8 False
//  JKRArchive::EMountMode False
mDoDvdThd_mountXArchive_c(u8, JKRArchive::EMountMode);
	/* 800161E0 */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRArchive::EMountMode False
//  JKRHeap* False
// 	 JKRHeap False
void create(char const*, u8, JKRArchive::EMountMode, JKRHeap*);
	/* 800162B0 */ // True False
void execute();
};

struct mDoDvdThd_mountArchive_c {
	/* 80015D44 */ // True False
~mDoDvdThd_mountArchive_c();
	/* 80015DA4 */ // True False
//  u8 False
mDoDvdThd_mountArchive_c(u8);
	/* 80015E14 */ // False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRHeap* False
// 	 JKRHeap False
void create(char const*, u8, JKRHeap*);
	/* 80015EDC */ // True False
void execute();
};

struct mDoDvdThd_callback_c {
	/* 80015BB8 */ // True False
~mDoDvdThd_callback_c();
	/* 80015C18 */ // True False
//  void* (*)(void*) False
// 	 * False
// 		  False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
//  void* False
// 	 void False
mDoDvdThd_callback_c(void* (*)(void*), void*);
	/* 80015C74 */ // False False
//  void* (*)(void*) False
// 	 * False
// 		  False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
//  void* False
// 	 void False
void create(void* (*)(void*), void*);
	/* 80015CF0 */ // True False
void execute();
};

struct mDoDvdThd {
	/* 800157FC */ // True False
//  void* False
// 	 void False
void main(void*);
	/* 80015858 */ // False False
//  s32 False
void create(s32);
	/* 800158B4 */ // False False
void suspend();
};

struct OSThread {
};

struct JKRThread {
	/* 802D16B8 */ // False False
//  OSThread* False
// 	 OSThread False
//  int False
JKRThread(OSThread*, int);
	/* 802D1758 */ // False False
~JKRThread();
};

struct JKRMemArchive {
	/* 802D69B8 */ // False False
//  s32 False
//  JKRArchive::EMountDirection False
JKRMemArchive(s32, JKRArchive::EMountDirection);
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

struct JASTaskThread {
	/* 8028FB5C */ // False False
//  void (*)(void*) False
// 	 * False
// 		  False
// 	 void False
// 	 void* False
// 		 void False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
void sendCmdMsg(void (*)(void*), void const*, u32);
};

struct JASDvd {
	/* 8028FEFC */ // False False
void getThreadPointer();
};

// 
// Forward References:
// 

// True False
//  char const* False
// 	 char const False
// 		 char False
static void my_DVDConvertPathToEntrynum(char const*);
// True False
//  void* False
// 	 void False
static void cb(void*);

// True False
//  void* False
// 	 void False
extern "C" void main__9mDoDvdThdFPv();
// False False
//  s32 False
extern "C" void create__9mDoDvdThdFl();
// False False
extern "C" void suspend__9mDoDvdThdFv();
// True False
//  char const* False
// 	 char const False
// 		 char False
extern "C" static void my_DVDConvertPathToEntrynum__FPCc();
// True False
extern "C" void __dt__19mDoDvdThd_command_cFv();
// True False
extern "C" void __ct__17mDoDvdThd_param_cFv();
// True False
extern "C" void kick__17mDoDvdThd_param_cFv();
// True False
extern "C" void waitForKick__17mDoDvdThd_param_cFv();
// True False
extern "C" void getFirstCommand__17mDoDvdThd_param_cFv();
// True False
//  mDoDvdThd_command_c* False
// 	 mDoDvdThd_command_c False
extern "C" void addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c();
// True False
//  mDoDvdThd_command_c* False
// 	 mDoDvdThd_command_c False
extern "C" void cut__17mDoDvdThd_param_cFP19mDoDvdThd_command_c();
// True False
//  void* False
// 	 void False
extern "C" static void cb__FPv();
// True False
extern "C" void mainLoop__17mDoDvdThd_param_cFv();
// True False
extern "C" void __ct__19mDoDvdThd_command_cFv();
// True False
extern "C" void __dt__20mDoDvdThd_callback_cFv();
// True False
//  void* (*)(void*) False
// 	 * False
// 		  False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
//  void* False
// 	 void False
extern "C" void __ct__20mDoDvdThd_callback_cFPFPv_PvPv();
// False False
//  void* (*)(void*) False
// 	 * False
// 		  False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
//  void* False
// 	 void False
extern "C" void create__20mDoDvdThd_callback_cFPFPv_PvPv();
// True False
extern "C" void execute__20mDoDvdThd_callback_cFv();
// True False
extern "C" void __dt__24mDoDvdThd_mountArchive_cFv();
// True False
//  u8 False
extern "C" void __ct__24mDoDvdThd_mountArchive_cFUc();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRHeap* False
// 	 JKRHeap False
extern "C" void create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap();
// True False
extern "C" void execute__24mDoDvdThd_mountArchive_cFv();
// True False
extern "C" void __dt__25mDoDvdThd_mountXArchive_cFv();
// True False
//  u8 False
//  JKRArchive::EMountMode False
extern "C" void __ct__25mDoDvdThd_mountXArchive_cFUcQ210JKRArchive10EMountMode();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRArchive::EMountMode False
//  JKRHeap* False
// 	 JKRHeap False
extern "C" void create__25mDoDvdThd_mountXArchive_cFPCcUcQ210JKRArchive10EMountModeP7JKRHeap();
// True False
extern "C" void execute__25mDoDvdThd_mountXArchive_cFv();
// True False
//  u8 False
extern "C" void __ct__21mDoDvdThd_toMainRam_cFUc();
// False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRHeap* False
// 	 JKRHeap False
extern "C" void create__21mDoDvdThd_toMainRam_cFPCcUcP7JKRHeap();
// True False
extern "C" void __dt__21mDoDvdThd_toMainRam_cFv();
// True False
extern "C" void execute__21mDoDvdThd_toMainRam_cFv();
// False False
extern "C" void __sinit_m_Do_dvd_thread_cpp();
extern "C" extern char const* const m_Do_m_Do_dvd_thread__stringBase0;
extern "C" extern void* __vt__21mDoDvdThd_toMainRam_c[4];
extern "C" extern void* __vt__25mDoDvdThd_mountXArchive_c[4];
extern "C" extern void* __vt__24mDoDvdThd_mountArchive_c[4];
extern "C" extern void* __vt__20mDoDvdThd_callback_c[4];
extern "C" extern void* __vt__19mDoDvdThd_command_c[4];
extern "C" extern u8 l_threadStack__9mDoDvdThd[4096];

// 
// External References:
// 

// False False
void mDoExt_getAssertHeap();
// False False
void mDoExt_getGameHeap();
// False False
void mDoExt_getZeldaHeap();
// False False
void mDoExt_getCommandHeap();
// False False
void mDoExt_getArchiveHeap();
// False False
void mDoExt_getArchiveHeapPtr();
// False False
void mDoExt_getJ2dHeap();
// False False
//  node_class* False
// 	 node_class False
void cLs_SingleCut(node_class*);
// False False
//  node_list_class* False
// 	 node_list_class False
//  node_class* False
// 	 node_class False
void cLs_Addition(node_list_class*, node_class*);
// False False
//  node_list_class* False
// 	 node_list_class False
void cLs_Create(node_list_class*);
// False False
//  node_class* False
// 	 node_class False
void cNd_ForcedClear(node_class*);
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
extern "C" void OSReport_FatalError();
// False False
extern "C" void OSReport_Error();
// False False
extern "C" void mDoExt_getAssertHeap__Fv();
// False False
extern "C" void mDoExt_getGameHeap__Fv();
// False False
extern "C" void mDoExt_getZeldaHeap__Fv();
// False False
extern "C" void mDoExt_getCommandHeap__Fv();
// False False
extern "C" void mDoExt_getArchiveHeap__Fv();
// False False
extern "C" void mDoExt_getArchiveHeapPtr__Fv();
// False False
extern "C" void mDoExt_getJ2dHeap__Fv();
// False False
//  node_class* False
// 	 node_class False
extern "C" void cLs_SingleCut__FP10node_class();
// False False
//  node_list_class* False
// 	 node_list_class False
//  node_class* False
// 	 node_class False
extern "C" void cLs_Addition__FP15node_list_classP10node_class();
// False False
//  node_list_class* False
// 	 node_list_class False
extern "C" void cLs_Create__FP15node_list_class();
// False False
//  node_class* False
// 	 node_class False
extern "C" void cNd_ForcedClear__FP10node_class();
// False False
//  void (*)(void*) False
// 	 * False
// 		  False
// 	 void False
// 	 void* False
// 		 void False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
extern "C" void sendCmdMsg__13JASTaskThreadFPFPv_vPCvUl();
// False False
extern "C" void getThreadPointer__6JASDvdFv();
// False False
extern "C" void becomeCurrentHeap__7JKRHeapFv();
// False False
//  void* False
// 	 void False
extern "C" void getSize__7JKRHeapFPv();
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
//  OSThread* False
// 	 OSThread False
//  int False
extern "C" void __ct__9JKRThreadFP8OSThreadi();
// False False
extern "C" void __dt__9JKRThreadFv();
// False False
//  s32 False
//  JKRArchive::EMountMode False
//  JKRHeap* False
// 	 JKRHeap False
//  JKRArchive::EMountDirection False
extern "C" void mount__10JKRArchiveFlQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection();
// False False
//  s32 False
//  JKRArchive::EMountDirection False
extern "C" void __ct__13JKRMemArchiveFlQ210JKRArchive15EMountDirection();
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
extern "C" void OSInitMessageQueue();
// False False
extern "C" void OSSendMessage();
// False False
extern "C" void OSReceiveMessage();
// False False
extern "C" void OSInitMutex();
// False False
extern "C" void OSLockMutex();
// False False
extern "C" void OSUnlockMutex();
// False False
extern "C" void OSGetCurrentThread();
// False False
extern "C" void OSCreateThread();
// False False
extern "C" void OSResumeThread();
// False False
extern "C" void OSSuspendThread();
// False False
extern "C" void DVDConvertPathToEntrynum();
// False False
extern "C" void _savegpr_25();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_25();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_28();
// False False
extern "C" void _restgpr_29();
extern "C" extern u8 struct_80450C80[8];

// 
// Declarations:
// 

/* 800157FC-80015858 005C+00 s=1 e=0 z=0  None .text      main__9mDoDvdThdFPv                                          */
//	80015810: 80340C84 (OSGetCurrentThread)
//	80015820: 802D16B8 (__ct__9JKRThreadFP8OSThreadi)
//	8001582C: 802D1758 (__dt__9JKRThreadFv)
//	80015830: 8000ECE4 (mDoExt_getAssertHeap__Fv)
//	80015834: 802CE438 (becomeCurrentHeap__7JKRHeapFv)
//	8001583C: 80015AD8 (mainLoop__17mDoDvdThd_param_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm void mDoDvdThd::main(void* param_0) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/main__9mDoDvdThdFPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803DD940-803DDC60 0318+08 s=2 e=0 z=0  None .bss       l_thread__9mDoDvdThd                                         */
static u8 l_thread__9mDoDvdThd[792 + 8 /* padding */];

/* 80015858-800158B4 005C+00 s=0 e=1 z=0  None .text      create__9mDoDvdThdFl                                         */
//	8001586C: 803DD940 (l_thread__9mDoDvdThd)
//	80015870: 803DD940 (l_thread__9mDoDvdThd)
//	80015878: 800157FC (main__9mDoDvdThdFPv)
//	8001587C: 800157FC (main__9mDoDvdThdFPv)
//	80015894: 8034128C (OSCreateThread)
//	8001589C: 803417B4 (OSResumeThread)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  s32 False
asm void mDoDvdThd::create(s32 param_0) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/create__9mDoDvdThdFl.s"
}
#pragma pop


/* 800158B4-800158DC 0028+00 s=0 e=1 z=0  None .text      suspend__9mDoDvdThdFv                                        */
//	800158C0: 803DD940 (l_thread__9mDoDvdThd)
//	800158C4: 803DD940 (l_thread__9mDoDvdThd)
//	800158C8: 80341A3C (OSSuspendThread)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void mDoDvdThd::suspend() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/suspend__9mDoDvdThdFv.s"
}
#pragma pop


/* 800158DC-800158FC 0020+00 s=3 e=0 z=0  None .text      my_DVDConvertPathToEntrynum__FPCc                            */
//	800158E8: 80348528 (DVDConvertPathToEntrynum)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  char const* False
// 	 char const False
// 		 char False
asm static void my_DVDConvertPathToEntrynum(char const* param_0) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/my_DVDConvertPathToEntrynum__FPCc.s"
}
#pragma pop


/* ############################################################################################## */
/* 803A34A8-803A34B8 0010+00 s=2 e=0 z=0  None .data      __vt__21mDoDvdThd_toMainRam_c                                */
SECTION_DATA void* __vt__21mDoDvdThd_toMainRam_c[4] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__21mDoDvdThd_toMainRam_cFv,
	(void*)execute__21mDoDvdThd_toMainRam_cFv,
};

/* 803A34B8-803A34C8 0010+00 s=2 e=0 z=0  None .data      __vt__25mDoDvdThd_mountXArchive_c                            */
SECTION_DATA void* __vt__25mDoDvdThd_mountXArchive_c[4] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__25mDoDvdThd_mountXArchive_cFv,
	(void*)execute__25mDoDvdThd_mountXArchive_cFv,
};

/* 803A34C8-803A34D8 0010+00 s=2 e=0 z=0  None .data      __vt__24mDoDvdThd_mountArchive_c                             */
SECTION_DATA void* __vt__24mDoDvdThd_mountArchive_c[4] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__24mDoDvdThd_mountArchive_cFv,
	(void*)execute__24mDoDvdThd_mountArchive_cFv,
};

/* 803A34D8-803A34E8 0010+00 s=2 e=0 z=0  None .data      __vt__20mDoDvdThd_callback_c                                 */
SECTION_DATA void* __vt__20mDoDvdThd_callback_c[4] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__20mDoDvdThd_callback_cFv,
	(void*)execute__20mDoDvdThd_callback_cFv,
};

/* 803A34E8-803A34F8 0010+00 s=2 e=0 z=0  None .data      __vt__19mDoDvdThd_command_c                                  */
SECTION_DATA void* __vt__19mDoDvdThd_command_c[4] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__19mDoDvdThd_command_cFv,
	(void*)NULL,
};

/* 800158FC-80015944 0048+00 s=5 e=0 z=0  None .text      __dt__19mDoDvdThd_command_cFv                                */
//	80015914: 803A34E8 (__vt__19mDoDvdThd_command_c)
//	80015918: 803A34E8 (__vt__19mDoDvdThd_command_c)
//	80015928: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoDvdThd_command_c::~mDoDvdThd_command_c() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__dt__19mDoDvdThd_command_cFv.s"
}
#pragma pop


/* 80015944-8001598C 0048+00 s=1 e=0 z=0  None .text      __ct__17mDoDvdThd_param_cFv                                  */
//	80015960: 8033E994 (OSInitMessageQueue)
//	80015968: 8033F008 (OSInitMutex)
//	80015970: 80266040 (cLs_Create__FP15node_list_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoDvdThd_param_c::mDoDvdThd_param_c() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__ct__17mDoDvdThd_param_cFv.s"
}
#pragma pop


/* 8001598C-800159B4 0028+00 s=2 e=0 z=0  None .text      kick__17mDoDvdThd_param_cFv                                  */
//	800159A0: 8033E9F4 (OSSendMessage)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoDvdThd_param_c::kick() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/kick__17mDoDvdThd_param_cFv.s"
}
#pragma pop


/* 800159B4-800159DC 0028+00 s=1 e=0 z=0  None .text      waitForKick__17mDoDvdThd_param_cFv                           */
//	800159C8: 8033EABC (OSReceiveMessage)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoDvdThd_param_c::waitForKick() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/waitForKick__17mDoDvdThd_param_cFv.s"
}
#pragma pop


/* 800159DC-800159E4 0008+00 s=1 e=0 z=0  None .text      getFirstCommand__17mDoDvdThd_param_cFv                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoDvdThd_param_c::getFirstCommand() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/getFirstCommand__17mDoDvdThd_param_cFv.s"
}
#pragma pop


/* 800159E4-80015A3C 0058+00 s=4 e=0 z=0  None .text      addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c         */
//	80015A04: 8033F040 (OSLockMutex)
//	80015A10: 80265EFC (cLs_Addition__FP15node_list_classP10node_class)
//	80015A18: 8033F11C (OSUnlockMutex)
//	80015A20: 8001598C (kick__17mDoDvdThd_param_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  mDoDvdThd_command_c* False
// 	 mDoDvdThd_command_c False
asm void mDoDvdThd_param_c::addition(mDoDvdThd_command_c* param_0) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c.s"
}
#pragma pop


/* 80015A3C-80015A90 0054+00 s=1 e=0 z=0  None .text      cut__17mDoDvdThd_param_cFP19mDoDvdThd_command_c              */
//	80015A5C: 8033F040 (OSLockMutex)
//	80015A64: 80265E78 (cLs_SingleCut__FP10node_class)
//	80015A6C: 8033F11C (OSUnlockMutex)
//	80015A74: 8001598C (kick__17mDoDvdThd_param_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  mDoDvdThd_command_c* False
// 	 mDoDvdThd_command_c False
asm void mDoDvdThd_param_c::cut(mDoDvdThd_command_c* param_0) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/cut__17mDoDvdThd_param_cFP19mDoDvdThd_command_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 803741A8-803743F8 0250+00 s=2 e=0 z=0  None .rodata    @stringBase0                                                 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_803741A8 = 
    "mDoDvdThd_param_c::mainLoop() コマンドの実行が失敗しました。\n";
SECTION_DEAD char const* const stringBase_803741E6 = 
    "mDoDvdThd_mountArchive_c::execute マウント失敗\n";
SECTION_DEAD char const* const stringBase_80374216 = 
    "mDoDvdThd_mountArchive_c::execute ゼルダヒープで再チャレンジ！"
    "\n";
SECTION_DEAD char const* const stringBase_80374256 = 
    "mDoDvdThd_mountArchive_c::execute アーカイブヒープで再チャレン"
    "ジ！\n";
SECTION_DEAD char const* const stringBase_8037429A = 
    "mDoDvdThd_mountArchive_c::execute ゲームヒープで再チャレンジ！"
    "\n";
SECTION_DEAD char const* const stringBase_803742DA = 
    "mDoDvdThd_mountArchive_c::execute J2Dヒープで再チャレンジ！"
    "\n";
SECTION_DEAD char const* const stringBase_80374317 = 
    "mDoDvdThd_mountArchive_c::execute ヒープが致命的に足りません！"
    "\n";
SECTION_DEAD char const* const stringBase_80374357 = 
    "mDoDvdThd_getResource_c::create() クラス生成に失敗\n";
// MWCC ignores mapping of some japanese characters using the 
// byte 0x5C (ASCII '\'). This is why this string is hex-encoded.
SECTION_DEAD char const* const stringBase_8037438B = 
    "\x6D\x44\x6F\x44\x76\x64\x54\x68\x64\x5F\x67\x65\x74\x52\x65\x73\x6F\x75\x72\x63\x65\x5F\x63\x3A\x3A\x63\x72\x65\x61\x74\x65\x28\x29\x20\x83\x8A\x83\x5C\x81\x5B\x83\x58\x8E\xE6\x93\xBE\x82\xC9"
    "\x8E\xB8\x94\x73\x0A";
// MWCC ignores mapping of some japanese characters using the 
// byte 0x5C (ASCII '\'). This is why this string is hex-encoded.
SECTION_DEAD char const* const stringBase_803743C1 = 
    "\x6D\x44\x6F\x44\x76\x64\x54\x68\x64\x5F\x67\x65\x74\x52\x65\x73\x6F\x75\x72\x63\x65\x5F\x63\x3A\x3A\x65\x78\x65\x63\x75\x74\x65\x28\x29\x20\x83\x8A\x83\x5C\x81\x5B\x83\x58\x8E\xE6\x93\xBE\x82"
    "\xC9\x8E\xB8\x94\x73\x0A";
#pragma pop

/* 80015A90-80015AD8 0048+00 s=1 e=0 z=0  None .text      cb__FPv                                                      */
//	80015AB8: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	80015ABC: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	80015AC4: 80006C0C (OSReport_Error)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* False
// 	 void False
asm static void cb(void* param_0) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/cb__FPv.s"
}
#pragma pop


/* 80015AD8-80015B74 009C+00 s=1 e=0 z=0  None .text      mainLoop__17mDoDvdThd_param_cFv                              */
//	80015AF0: 80015A90 (cb__FPv)
//	80015AF4: 80015A90 (cb__FPv)
//	80015B08: 80015A3C (cut__17mDoDvdThd_param_cFP19mDoDvdThd_command_c)
//	80015B0C: 80450C80 (struct_80450C80)
//	80015B18: 8028FEFC (getThreadPointer__6JASDvdFv)
//	80015B28: 8028FB5C (sendCmdMsg__13JASTaskThreadFPFPv_vPCvUl)
//	80015B34: 80015A90 (cb__FPv)
//	80015B3C: 800159DC (getFirstCommand__17mDoDvdThd_param_cFv)
//	80015B50: 800159B4 (waitForKick__17mDoDvdThd_param_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoDvdThd_param_c::mainLoop() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/mainLoop__17mDoDvdThd_param_cFv.s"
}
#pragma pop


/* 80015B74-80015BB8 0044+00 s=4 e=0 z=0  None .text      __ct__19mDoDvdThd_command_cFv                                */
//	80015B88: 803A34E8 (__vt__19mDoDvdThd_command_c)
//	80015B8C: 803A34E8 (__vt__19mDoDvdThd_command_c)
//	80015B9C: 802662FC (cNd_ForcedClear__FP10node_class)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoDvdThd_command_c::mDoDvdThd_command_c() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__ct__19mDoDvdThd_command_cFv.s"
}
#pragma pop


/* 80015BB8-80015C18 0060+00 s=1 e=0 z=0  None .text      __dt__20mDoDvdThd_callback_cFv                               */
//	80015BD8: 803A34D8 (__vt__20mDoDvdThd_callback_c)
//	80015BDC: 803A34D8 (__vt__20mDoDvdThd_callback_c)
//	80015BE8: 800158FC (__dt__19mDoDvdThd_command_cFv)
//	80015BF8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoDvdThd_callback_c::~mDoDvdThd_callback_c() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__dt__20mDoDvdThd_callback_cFv.s"
}
#pragma pop


/* 80015C18-80015C74 005C+00 s=1 e=0 z=0  None .text      __ct__20mDoDvdThd_callback_cFPFPv_PvPv                       */
//	80015C28: 803621DC (_savegpr_29)
//	80015C38: 80015B74 (__ct__19mDoDvdThd_command_cFv)
//	80015C3C: 803A34D8 (__vt__20mDoDvdThd_callback_c)
//	80015C40: 803A34D8 (__vt__20mDoDvdThd_callback_c)
//	80015C60: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void* (*)(void*) False
// 	 * False
// 		  False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
//  void* False
// 	 void False
asm mDoDvdThd_callback_c::mDoDvdThd_callback_c(void* (*)(void*), void* param_1) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__ct__20mDoDvdThd_callback_cFPFPv_PvPv.s"
}
#pragma pop


/* ############################################################################################## */
/* 803DDC60-803DEC60 1000+00 s=0 e=0 z=0  None .bss       l_threadStack__9mDoDvdThd                                    */
u8 l_threadStack__9mDoDvdThd[4096];

/* 803DEC60-803DECC0 0048+18 s=5 e=0 z=0  None .bss       l_param__9mDoDvdThd                                          */
static u8 l_param__9mDoDvdThd[72 + 24 /* padding */];

/* 80015C74-80015CF0 007C+00 s=0 e=3 z=0  None .text      create__20mDoDvdThd_callback_cFPFPv_PvPv                     */
//	80015C84: 803621DC (_savegpr_29)
//	80015C90: 8000EDB0 (mDoExt_getCommandHeap__Fv)
//	80015CA0: 802CEC98 (__nw__FUlP7JKRHeapi)
//	80015CB4: 80015C18 (__ct__20mDoDvdThd_callback_cFPFPv_PvPv)
//	80015CC4: 803DEC60 (l_param__9mDoDvdThd)
//	80015CC8: 803DEC60 (l_param__9mDoDvdThd)
//	80015CD0: 800159E4 (addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c)
//	80015CDC: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  void* (*)(void*) False
// 	 * False
// 		  False
// 	 void* False
// 		 void False
// 	 void* False
// 		 void False
//  void* False
// 	 void False
asm void mDoDvdThd_callback_c::create(void* (*)(void*), void* param_1) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/create__20mDoDvdThd_callback_cFPFPv_PvPv.s"
}
#pragma pop


/* 80015CF0-80015D44 0054+00 s=1 e=0 z=0  None .text      execute__20mDoDvdThd_callback_cFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoDvdThd_callback_c::execute() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/execute__20mDoDvdThd_callback_cFv.s"
}
#pragma pop


/* 80015D44-80015DA4 0060+00 s=1 e=0 z=0  None .text      __dt__24mDoDvdThd_mountArchive_cFv                           */
//	80015D64: 803A34C8 (__vt__24mDoDvdThd_mountArchive_c)
//	80015D68: 803A34C8 (__vt__24mDoDvdThd_mountArchive_c)
//	80015D74: 800158FC (__dt__19mDoDvdThd_command_cFv)
//	80015D84: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoDvdThd_mountArchive_c::~mDoDvdThd_mountArchive_c() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__dt__24mDoDvdThd_mountArchive_cFv.s"
}
#pragma pop


/* 80015DA4-80015E14 0070+00 s=1 e=0 z=0  None .text      __ct__24mDoDvdThd_mountArchive_cFUc                          */
//	80015DC0: 80015B74 (__ct__19mDoDvdThd_command_cFv)
//	80015DC4: 803A34C8 (__vt__24mDoDvdThd_mountArchive_c)
//	80015DC8: 803A34C8 (__vt__24mDoDvdThd_mountArchive_c)
//	80015DF0: 80450C81 (struct_80450C80)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  u8 False
asm mDoDvdThd_mountArchive_c::mDoDvdThd_mountArchive_c(u8 param_0) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__ct__24mDoDvdThd_mountArchive_cFUc.s"
}
#pragma pop


/* 80015E14-80015EDC 00C8+00 s=0 e=10 z=1  None .text      create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap            */
//	80015E24: 803621D8 (_savegpr_28)
//	80015E34: 8000EDB0 (mDoExt_getCommandHeap__Fv)
//	80015E44: 802CEC98 (__nw__FUlP7JKRHeapi)
//	80015E54: 80015DA4 (__ct__24mDoDvdThd_mountArchive_cFUc)
//	80015E68: 800158DC (my_DVDConvertPathToEntrynum__FPCc)
//	80015EB0: 803DEC60 (l_param__9mDoDvdThd)
//	80015EB4: 803DEC60 (l_param__9mDoDvdThd)
//	80015EBC: 800159E4 (addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c)
//	80015EC8: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRHeap* False
// 	 JKRHeap False
asm void mDoDvdThd_mountArchive_c::create(char const* param_0, u8 param_1, JKRHeap* param_2) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/create__24mDoDvdThd_mountArchive_cFPCcUcP7JKRHeap.s"
}
#pragma pop


/* 80015EDC-80016108 022C+00 s=1 e=0 z=0  None .text      execute__24mDoDvdThd_mountArchive_cFv                        */
//	80015EEC: 803621CC (_savegpr_25)
//	80015F14: 8000EDEC (mDoExt_getArchiveHeap__Fv)
//	80015F1C: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	80015F20: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	80015F24: 8000EDF4 (mDoExt_getArchiveHeapPtr__Fv)
//	80015F38: 8000ED80 (mDoExt_getZeldaHeap__Fv)
//	80015F4C: 8000ED50 (mDoExt_getGameHeap__Fv)
//	80015F60: 8000EE30 (mDoExt_getJ2dHeap__Fv)
//	80015F88: 802CEC98 (__nw__FUlP7JKRHeapi)
//	80015F9C: 802D69B8 (__ct__13JKRMemArchiveFlQ210JKRArchive15EMountDirection)
//	80015FB8: 802CEC98 (__nw__FUlP7JKRHeapi)
//	80015FCC: 802D69B8 (__ct__13JKRMemArchiveFlQ210JKRArchive15EMountDirection)
//	80015FFC: 80006C0C (OSReport_Error)
//	8001602C: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	80016030: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	8001603C: 80006C0C (OSReport_Error)
//	80016040: 8000ED80 (mDoExt_getZeldaHeap__Fv)
//	80016054: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	80016058: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	80016064: 80006C0C (OSReport_Error)
//	80016068: 8000EDF4 (mDoExt_getArchiveHeapPtr__Fv)
//	8001607C: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	80016080: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	8001608C: 80006C0C (OSReport_Error)
//	80016090: 8000ED50 (mDoExt_getGameHeap__Fv)
//	800160A4: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	800160A8: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	800160B4: 80006C0C (OSReport_Error)
//	800160B8: 8000EE30 (mDoExt_getJ2dHeap__Fv)
//	800160C4: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	800160C8: 803741A8 (m_Do_m_Do_dvd_thread__stringBase0)
//	800160D4: 80006B3C (OSReport_FatalError)
//	800160F4: 80362218 (_restgpr_25)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoDvdThd_mountArchive_c::execute() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/execute__24mDoDvdThd_mountArchive_cFv.s"
}
#pragma pop


/* 80016108-80016168 0060+00 s=1 e=0 z=0  None .text      __dt__25mDoDvdThd_mountXArchive_cFv                          */
//	80016128: 803A34B8 (__vt__25mDoDvdThd_mountXArchive_c)
//	8001612C: 803A34B8 (__vt__25mDoDvdThd_mountXArchive_c)
//	80016138: 800158FC (__dt__19mDoDvdThd_command_cFv)
//	80016148: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoDvdThd_mountXArchive_c::~mDoDvdThd_mountXArchive_c() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__dt__25mDoDvdThd_mountXArchive_cFv.s"
}
#pragma pop


/* 80016168-800161E0 0078+00 s=1 e=0 z=0  None .text      __ct__25mDoDvdThd_mountXArchive_cFUcQ210JKRArchive10EMountMode */
//	80016178: 803621DC (_savegpr_29)
//	80016188: 80015B74 (__ct__19mDoDvdThd_command_cFv)
//	8001618C: 803A34B8 (__vt__25mDoDvdThd_mountXArchive_c)
//	80016190: 803A34B8 (__vt__25mDoDvdThd_mountXArchive_c)
//	800161BC: 80450C81 (struct_80450C80)
//	800161CC: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  u8 False
//  JKRArchive::EMountMode False
asm mDoDvdThd_mountXArchive_c::mDoDvdThd_mountXArchive_c(u8 param_0, JKRArchive::EMountMode param_1) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__ct__25mDoDvdThd_mountXArchive_cFUcQ210JKRArchive10EMountMode.s"
}
#pragma pop


/* 800161E0-800162B0 00D0+00 s=0 e=3 z=0  None .text      create__25mDoDvdThd_mountXArchive_cFPCcUcQ210JKRArchive10EMountModeP7JKRHeap */
//	800161F0: 803621D4 (_savegpr_27)
//	80016204: 8000EDB0 (mDoExt_getCommandHeap__Fv)
//	80016214: 802CEC98 (__nw__FUlP7JKRHeapi)
//	80016228: 80016168 (__ct__25mDoDvdThd_mountXArchive_cFUcQ210JKRArchive10EMountMode)
//	8001623C: 800158DC (my_DVDConvertPathToEntrynum__FPCc)
//	80016284: 803DEC60 (l_param__9mDoDvdThd)
//	80016288: 803DEC60 (l_param__9mDoDvdThd)
//	80016290: 800159E4 (addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c)
//	8001629C: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRArchive::EMountMode False
//  JKRHeap* False
// 	 JKRHeap False
asm void mDoDvdThd_mountXArchive_c::create(char const* param_0, u8 param_1, JKRArchive::EMountMode param_2, JKRHeap* param_3) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/create__25mDoDvdThd_mountXArchive_cFPCcUcQ210JKRArchive10EMountModeP7JKRHeap.s"
}
#pragma pop


/* 800162B0-80016338 0088+00 s=1 e=0 z=0  None .text      execute__25mDoDvdThd_mountXArchive_cFv                       */
//	800162EC: 8000EDEC (mDoExt_getArchiveHeap__Fv)
//	80016300: 802D58C8 (mount__10JKRArchiveFlQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoDvdThd_mountXArchive_c::execute() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/execute__25mDoDvdThd_mountXArchive_cFv.s"
}
#pragma pop


/* 80016338-80016394 005C+00 s=1 e=0 z=0  None .text      __ct__21mDoDvdThd_toMainRam_cFUc                             */
//	80016354: 80015B74 (__ct__19mDoDvdThd_command_cFv)
//	80016358: 803A34A8 (__vt__21mDoDvdThd_toMainRam_c)
//	8001635C: 803A34A8 (__vt__21mDoDvdThd_toMainRam_c)
//	80016370: 80450C81 (struct_80450C80)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  u8 False
asm mDoDvdThd_toMainRam_c::mDoDvdThd_toMainRam_c(u8 param_0) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__ct__21mDoDvdThd_toMainRam_cFUc.s"
}
#pragma pop


/* 80016394-8001645C 00C8+00 s=0 e=3 z=0  None .text      create__21mDoDvdThd_toMainRam_cFPCcUcP7JKRHeap               */
//	800163A4: 803621D8 (_savegpr_28)
//	800163B4: 8000EDB0 (mDoExt_getCommandHeap__Fv)
//	800163C4: 802CEC98 (__nw__FUlP7JKRHeapi)
//	800163D4: 80016338 (__ct__21mDoDvdThd_toMainRam_cFUc)
//	800163E8: 800158DC (my_DVDConvertPathToEntrynum__FPCc)
//	80016430: 803DEC60 (l_param__9mDoDvdThd)
//	80016434: 803DEC60 (l_param__9mDoDvdThd)
//	8001643C: 800159E4 (addition__17mDoDvdThd_param_cFP19mDoDvdThd_command_c)
//	80016448: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  char const* False
// 	 char const False
// 		 char False
//  u8 False
//  JKRHeap* False
// 	 JKRHeap False
asm void mDoDvdThd_toMainRam_c::create(char const* param_0, u8 param_1, JKRHeap* param_2) {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/create__21mDoDvdThd_toMainRam_cFPCcUcP7JKRHeap.s"
}
#pragma pop


/* 8001645C-800164BC 0060+00 s=1 e=0 z=0  None .text      __dt__21mDoDvdThd_toMainRam_cFv                              */
//	8001647C: 803A34A8 (__vt__21mDoDvdThd_toMainRam_c)
//	80016480: 803A34A8 (__vt__21mDoDvdThd_toMainRam_c)
//	8001648C: 800158FC (__dt__19mDoDvdThd_command_cFv)
//	8001649C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoDvdThd_toMainRam_c::~mDoDvdThd_toMainRam_c() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__dt__21mDoDvdThd_toMainRam_cFv.s"
}
#pragma pop


/* 800164BC-80016574 00B8+00 s=1 e=0 z=0  None .text      execute__21mDoDvdThd_toMainRam_cFv                           */
//	800164E4: 8000EDEC (mDoExt_getArchiveHeap__Fv)
//	80016524: 802D9C54 (loadToMainRAM__12JKRDvdRipperFlPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl)
//	8001653C: 802CE700 (getSize__7JKRHeapFPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void mDoDvdThd_toMainRam_c::execute() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/execute__21mDoDvdThd_toMainRam_cFv.s"
}
#pragma pop


/* 80016574-8001659C 0028+00 s=0 e=0 z=0  None .text      __sinit_m_Do_dvd_thread_cpp                                  */
//	80016580: 803DEC60 (l_param__9mDoDvdThd)
//	80016584: 803DEC60 (l_param__9mDoDvdThd)
//	80016588: 80015944 (__ct__17mDoDvdThd_param_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_m_Do_dvd_thread_cpp() {
	nofralloc
#include "asm/m_Do/m_Do_dvd_thread/__sinit_m_Do_dvd_thread_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80016574 = (void*)__sinit_m_Do_dvd_thread_cpp;
#pragma pop


