// 
// Generated By: dol2asm
// Translation Unit: d_a_kytag02
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/kytag/d_a_kytag02/d_a_kytag02.h"

// 
// Types:
// 

struct kytag02_class {
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
};

struct dSv_info_c {
	/* 80035360 */ // False False
//  int False
//  int False
void isSwitch(int, int) const;
};

struct Vec {
};

struct Z2EnvSeMgr {
	/* 802C7FBC */ // False False
void initStrongWindSe();
	/* 802C7FC8 */ // False False
//  Vec* False
// 	 Vec False
void setWindDirection(Vec*);
	/* 802C800C */ // False False
//  s8 False
void startStrongWindSe(s8);
};

// 
// Forward References:
// 

// True False
//  bool False
//  kytag02_class* False
// 	 kytag02_class False
static bool daKytag02_Draw(kytag02_class*);
// True False
//  kytag02_class* False
// 	 kytag02_class False
static void daKytag02_Execute(kytag02_class*);
// True False
//  bool False
//  kytag02_class* False
// 	 kytag02_class False
static bool daKytag02_IsDelete(kytag02_class*);
// True False
//  kytag02_class* False
// 	 kytag02_class False
static void daKytag02_Delete(kytag02_class*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daKytag02_Create(fopAc_ac_c*);

// True False
//  bool False
//  kytag02_class* False
// 	 kytag02_class False
extern "C" static bool daKytag02_Draw__FP13kytag02_class();
// True False
//  kytag02_class* False
// 	 kytag02_class False
extern "C" static void daKytag02_Execute__FP13kytag02_class();
// True False
//  bool False
//  kytag02_class* False
// 	 kytag02_class False
extern "C" static bool daKytag02_IsDelete__FP13kytag02_class();
// True False
//  kytag02_class* False
// 	 kytag02_class False
extern "C" static void daKytag02_Delete__FP13kytag02_class();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daKytag02_Create__FP10fopAc_ac_c();
extern "C" extern u32 const lit_3667;
extern "C" extern u32 const lit_3669;
extern "C" extern void* g_profile_KYTAG02[12];

// 
// External References:
// 

// False False
//  int False
void dComIfGp_getReverb(int);
// False False
void dKyw_get_wind_vec();
// False False
//  s16 False
//  s16 False
void dKyw_evt_wind_set(s16, s16);
// False False
void dKyw_evt_wind_set_go();

// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
//  int False
extern "C" void dComIfGp_getReverb__Fi();
// False False
//  int False
//  int False
extern "C" void isSwitch__10dSv_info_cCFii();
// False False
extern "C" void dKyw_get_wind_vec__Fv();
// False False
//  s16 False
//  s16 False
extern "C" void dKyw_evt_wind_set__Fss();
// False False
extern "C" void dKyw_evt_wind_set_go__Fv();
// False False
extern "C" void initStrongWindSe__10Z2EnvSeMgrFv();
// False False
//  Vec* False
// 	 Vec False
extern "C" void setWindDirection__10Z2EnvSeMgrFP3Vec();
// False False
//  s8 False
extern "C" void startStrongWindSe__10Z2EnvSeMgrFSc();
// False False
extern "C" void _savegpr_28();
// False False
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_mEnvSeMgr[780];
extern "C" extern u8 struct_80450D64[4];

// 
// Declarations:
// 

/* 80855AB8-80855AC0 0008+00 s=1 e=0 z=0  None .text      daKytag02_Draw__FP13kytag02_class                            */
// True False
//  bool False
//  kytag02_class* False
// 	 kytag02_class False
static bool daKytag02_Draw(kytag02_class* param_0) {
	return true;
}


/* ############################################################################################## */
/* 80855DFC-80855E00 0004+00 s=1 e=0 z=0  None .rodata    @3666                                                        */
SECTION_RODATA static u32 const lit_3666 = 0x3E8A3D71;

/* 80855AC0-80855CC4 0204+00 s=1 e=0 z=0  None .text      daKytag02_Execute__FP13kytag02_class                         */
//	80855AD0: 803621D8 (_savegpr_28)
//	80855AD8: 80855DFC (lit_3666)
//	80855ADC: 80855DFC (lit_3666)
//	80855AE0: 8042CA54 (g_env_light)
//	80855AE4: 8042CA54 (g_env_light)
//	80855AE8: 8005AAE0 (dKyw_get_wind_vec__Fv)
//	80855AF0: 804061C0 (g_dComIfG_gameInfo)
//	80855AF4: 804061C0 (g_dComIfG_gameInfo)
//	80855B04: 80035360 (isSwitch__10dSv_info_cCFii)
//	80855B10: 8005B638 (dKyw_evt_wind_set_go__Fv)
//	80855B1C: 8005B61C (dKyw_evt_wind_set__Fss)
//	80855B8C: 8042DD70 (g_mEnvSeMgr)
//	80855B90: 8042DD70 (g_mEnvSeMgr)
//	80855BC4: 8042DD70 (g_mEnvSeMgr)
//	80855BC8: 8042DD70 (g_mEnvSeMgr)
//	80855C08: 8042DD70 (g_mEnvSeMgr)
//	80855C0C: 8042DD70 (g_mEnvSeMgr)
//	80855C40: 8042CA54 (g_env_light)
//	80855C44: 8042CA54 (g_env_light)
//	80855C74: 8042DD70 (g_mEnvSeMgr)
//	80855C78: 8042DD70 (g_mEnvSeMgr)
//	80855C80: 802C7FC8 (setWindDirection__10Z2EnvSeMgrFP3Vec)
//	80855C84: 80450D64 (struct_80450D64)
//	80855C88: 80450D64 (struct_80450D64)
//	80855C94: 8002D06C (dComIfGp_getReverb__Fi)
//	80855C9C: 8042DD70 (g_mEnvSeMgr)
//	80855CA0: 8042DD70 (g_mEnvSeMgr)
//	80855CA4: 802C800C (startStrongWindSe__10Z2EnvSeMgrFSc)
//	80855CB0: 80362224 (_restgpr_28)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  kytag02_class* False
// 	 kytag02_class False
asm static void daKytag02_Execute(kytag02_class* param_0) {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag02/d_a_kytag02/daKytag02_Execute__FP13kytag02_class.s"
}
#pragma pop


/* 80855CC4-80855CCC 0008+00 s=1 e=0 z=0  None .text      daKytag02_IsDelete__FP13kytag02_class                        */
// True False
//  bool False
//  kytag02_class* False
// 	 kytag02_class False
static bool daKytag02_IsDelete(kytag02_class* param_0) {
	return true;
}


/* 80855CCC-80855CEC 0020+00 s=1 e=0 z=0  None .text      daKytag02_Delete__FP13kytag02_class                          */
//	80855CD0: 8042CA54 (g_env_light)
//	80855CD4: 8042CA54 (g_env_light)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  kytag02_class* False
// 	 kytag02_class False
asm static void daKytag02_Delete(kytag02_class* param_0) {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag02/d_a_kytag02/daKytag02_Delete__FP13kytag02_class.s"
}
#pragma pop


/* ############################################################################################## */
/* 80855E00-80855E04 0004+00 s=0 e=0 z=0  None .rodata    @3667                                                        */
SECTION_RODATA u32 const lit_3667 = 0x3ECF5C28;

/* 80855E04-80855E08 0004+00 s=1 e=0 z=0  None .rodata    @3668                                                        */
SECTION_RODATA static u8 const lit_3668[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80855CEC-80855DF4 0108+00 s=1 e=0 z=0  None .text      daKytag02_Create__FP10fopAc_ac_c                             */
//	80855D04: 8042CA54 (g_env_light)
//	80855D08: 8042CA54 (g_env_light)
//	80855D0C: 8005AAE0 (dKyw_get_wind_vec__Fv)
//	80855D28: 80018B64 (__ct__10fopAc_ac_cFv)
//	80855D4C: 80855E04 (lit_3668)
//	80855D50: 80855E04 (lit_3668)
//	80855D60: 804061C0 (g_dComIfG_gameInfo)
//	80855D64: 804061C0 (g_dComIfG_gameInfo)
//	80855D74: 80035360 (isSwitch__10dSv_info_cCFii)
//	80855D80: 8005B638 (dKyw_evt_wind_set_go__Fv)
//	80855D8C: 8005B61C (dKyw_evt_wind_set__Fss)
//	80855DCC: 8042DD70 (g_mEnvSeMgr)
//	80855DD0: 8042DD70 (g_mEnvSeMgr)
//	80855DD4: 802C7FBC (initStrongWindSe__10Z2EnvSeMgrFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daKytag02_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/kytag/d_a_kytag02/d_a_kytag02/daKytag02_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80855E08-80855E0C 0004+00 s=0 e=0 z=0  None .rodata    @3669                                                        */
SECTION_RODATA u32 const lit_3669 = 0x3E99999A;

/* 80855E0C-80855E2C 0020+00 s=1 e=0 z=0  None .data      l_daKytag02_Method                                           */
SECTION_DATA static void* l_daKytag02_Method[8] = {
	(void*)daKytag02_Create__FP10fopAc_ac_c,
	(void*)daKytag02_Delete__FP13kytag02_class,
	(void*)daKytag02_Execute__FP13kytag02_class,
	(void*)daKytag02_IsDelete__FP13kytag02_class,
	(void*)daKytag02_Draw__FP13kytag02_class,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80855E2C-80855E5C 0030+00 s=0 e=0 z=1  None .data      g_profile_KYTAG02                                            */
SECTION_DATA void* g_profile_KYTAG02[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x02AC0000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000057C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x00600000,
	(void*)&l_daKytag02_Method,
	(void*)0x00044000,
	(void*)NULL,
};

