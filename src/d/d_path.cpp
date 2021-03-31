// 
// Generated By: dol2asm
// Translation Unit: d/d_path
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/d_path.h"

// 
// Types:
// 

struct dSv_info_c {
	/* 80035360 */ // False False
//  int False
//  int False
void isSwitch(int, int) const;
};

struct dStage_roomControl_c {
	/* 80024384 */ // False False
//  int False
void getStatusRoomDt(int);
};

struct dPath {
};

struct cBgS_PolyInfo {
};

struct dBgS {
	/* 80074FE0 */ // False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
void GetRoomPathId(cBgS_PolyInfo const&);
	/* 80075030 */ // False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
void GetRoomPathPntNo(cBgS_PolyInfo const&);
	/* 80075100 */ // False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
void GetRoomId(cBgS_PolyInfo const&);
};

struct cXyz {
};

// 
// Forward References:
// 

// False False
//  dPath const* False
// 	 dPath const False
// 		 dPath False
//  int False
void dPath_GetPnt(dPath const*, int);
// False False
//  int False
//  int False
void dPath_GetRoomPath(int, int);
// False False
//  dPath const* False
// 	 dPath const False
// 		 dPath False
//  int False
void dPath_GetNextRoomPath(dPath const*, int);
// False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
//  cXyz* False
// 	 cXyz False
//  int* False
// 	 int False
void dPath_GetPolyRoomPathVec(cBgS_PolyInfo const&, cXyz*, int*);

// False False
//  dPath const* False
// 	 dPath const False
// 		 dPath False
//  int False
extern "C" void dPath_GetPnt__FPC5dPathi();
// False False
//  int False
//  int False
extern "C" void dPath_GetRoomPath__Fii();
// False False
//  dPath const* False
// 	 dPath const False
// 		 dPath False
//  int False
extern "C" void dPath_GetNextRoomPath__FPC5dPathi();
// False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
//  cXyz* False
// 	 cXyz False
//  int* False
// 	 int False
extern "C" void dPath_GetPolyRoomPathVec__FRC13cBgS_PolyInfoP4cXyzPi();

// 
// External References:
// 


// False False
//  int False
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
// False False
//  int False
//  int False
extern "C" void isSwitch__10dSv_info_cCFii();
// False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
extern "C" void GetRoomPathId__4dBgSFRC13cBgS_PolyInfo();
// False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
extern "C" void GetRoomPathPntNo__4dBgSFRC13cBgS_PolyInfo();
// False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
// False False
extern "C" void _savegpr_26();
// False False
extern "C" void _restgpr_26();
extern "C" extern u8 g_dComIfG_gameInfo[122384];

// 
// Declarations:
// 

/* 800517B0-800517EC 003C+00 s=0 e=7 z=63  None .text      dPath_GetPnt__FPC5dPathi                                     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  dPath const* False
// 	 dPath const False
// 		 dPath False
//  int False
asm void dPath_GetPnt(dPath const* param_0, int param_1) {
	nofralloc
#include "asm/d/d_path/dPath_GetPnt__FPC5dPathi.s"
}
#pragma pop


/* 800517EC-80051898 00AC+00 s=1 e=12 z=82  None .text      dPath_GetRoomPath__Fii                                       */
//	80051808: 804061C0 (g_dComIfG_gameInfo)
//	8005180C: 804061C0 (g_dComIfG_gameInfo)
//	80051824: 804061C0 (g_dComIfG_gameInfo)
//	80051828: 804061C0 (g_dComIfG_gameInfo)
//	80051830: 80024384 (getStatusRoomDt__20dStage_roomControl_cFi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  int False
//  int False
asm void dPath_GetRoomPath(int param_0, int param_1) {
	nofralloc
#include "asm/d/d_path/dPath_GetRoomPath__Fii.s"
}
#pragma pop


/* 80051898-8005195C 00C4+00 s=0 e=1 z=3  None .text      dPath_GetNextRoomPath__FPC5dPathi                            */
//	800518B4: 804061C0 (g_dComIfG_gameInfo)
//	800518B8: 804061C0 (g_dComIfG_gameInfo)
//	800518D0: 804061C0 (g_dComIfG_gameInfo)
//	800518D4: 804061C0 (g_dComIfG_gameInfo)
//	800518DC: 80024384 (getStatusRoomDt__20dStage_roomControl_cFi)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  dPath const* False
// 	 dPath const False
// 		 dPath False
//  int False
asm void dPath_GetNextRoomPath(dPath const* param_0, int param_1) {
	nofralloc
#include "asm/d/d_path/dPath_GetNextRoomPath__FPC5dPathi.s"
}
#pragma pop


/* ############################################################################################## */
/* 80452000-80452008 0004+04 s=1 e=0 z=0  None .sdata2    @3685                                                        */
SECTION_SDATA2 static f32 lit_3685[1 + 1 /* padding */] = {
	0.0f,
	/* padding */
	0.0f,
};

/* 8005195C-80051AC0 0164+00 s=0 e=1 z=4  None .text      dPath_GetPolyRoomPathVec__FRC13cBgS_PolyInfoP4cXyzPi         */
//	8005196C: 803621D0 (_savegpr_26)
//	8005197C: 804061C0 (g_dComIfG_gameInfo)
//	80051980: 804061C0 (g_dComIfG_gameInfo)
//	80051990: 80075100 (GetRoomId__4dBgSFRC13cBgS_PolyInfo)
//	800519A0: 80074FE0 (GetRoomPathId__4dBgSFRC13cBgS_PolyInfo)
//	800519A4: 80452000 (lit_3685)
//	800519D0: 800517EC (dPath_GetRoomPath__Fii)
//	800519F0: 804061C0 (g_dComIfG_gameInfo)
//	800519F4: 804061C0 (g_dComIfG_gameInfo)
//	800519FC: 80035360 (isSwitch__10dSv_info_cCFii)
//	80051A18: 80075030 (GetRoomPathPntNo__4dBgSFRC13cBgS_PolyInfo)
//	80051AAC: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  cBgS_PolyInfo const& False
// 	 cBgS_PolyInfo const False
// 		 cBgS_PolyInfo False
//  cXyz* False
// 	 cXyz False
//  int* False
// 	 int False
asm void dPath_GetPolyRoomPathVec(cBgS_PolyInfo const& param_0, cXyz* param_1, int* param_2) {
	nofralloc
#include "asm/d/d_path/dPath_GetPolyRoomPathVec__FRC13cBgS_PolyInfoP4cXyzPi.s"
}
#pragma pop


