// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_onsenFire
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_onsenFire/d_a_obj_onsenFire.h"

// 
// Types:
// 

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
	/* 80018C8C */ // False False
~fopAc_ac_c();
};

struct daObjOnsenFire_c {
	/* 80CA8278 */ // True False
void create();
	/* 80CA82F4 */ // True False
void execute();
};

struct dSv_event_c {
	/* 800349BC */ // False False
//  u16 False
void isEventBit(u16) const;
};

struct cXyz {
};

struct dKy_tevstr_c {
};

struct _GXColor {
};

struct dPa_control_c {
	/* 8004D1B8 */ // False False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  u8 False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
//  int False
//  f32 False
void setSimple(u16, cXyz const*, dKy_tevstr_c const*, u8, _GXColor const&, _GXColor const&, int, f32);
};

struct Vec {
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AC50C */ // False False
//  JAISoundID False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  u32 False
//  s8 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  u8 False
void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

// 
// Forward References:
// 

// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daObjOnsenFire_Create(fopAc_ac_c*);
// True False
//  daObjOnsenFire_c* False
// 	 daObjOnsenFire_c False
static void daObjOnsenFire_Execute(daObjOnsenFire_c*);
// True False
//  daObjOnsenFire_c* False
// 	 daObjOnsenFire_c False
static void daObjOnsenFire_Delete(daObjOnsenFire_c*);

// True False
extern "C" void create__16daObjOnsenFire_cFv();
// True False
extern "C" void execute__16daObjOnsenFire_cFv();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daObjOnsenFire_Create__FP10fopAc_ac_c();
// True False
//  daObjOnsenFire_c* False
// 	 daObjOnsenFire_c False
extern "C" static void daObjOnsenFire_Execute__FP16daObjOnsenFire_c();
// True False
//  daObjOnsenFire_c* False
// 	 daObjOnsenFire_c False
extern "C" static void daObjOnsenFire_Delete__FP16daObjOnsenFire_c();
extern "C" extern u32 const lit_3660;
extern "C" extern u32 const lit_3661;
extern "C" extern void* g_profile_OBJ_ONSEN_FIRE[12];

// 
// External References:
// 


// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
extern "C" void __dt__10fopAc_ac_cFv();
// False False
//  u16 False
extern "C" void isEventBit__11dSv_event_cCFUs();
// False False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  u8 False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
//  int False
//  f32 False
extern "C" void setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif();
// False False
//  JAISoundID False
//  Vec const* False
// 	 Vec const False
// 		 Vec False
//  u32 False
//  s8 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  u8 False
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 g_whiteColor;
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* 80CA8278-80CA82F4 007C+00 s=1 e=0 z=0  None .text      create__16daObjOnsenFire_cFv                                 */
//	80CA82A0: 80018B64 (__ct__10fopAc_ac_cFv)
//	80CA82B0: 804061C0 (g_dComIfG_gameInfo)
//	80CA82B4: 804061C0 (g_dComIfG_gameInfo)
//	80CA82BC: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80CA82C0: 803A7288 (saveBitLabels__16dSv_event_flag_c)
//	80CA82C8: 800349BC (isEventBit__11dSv_event_cCFUs)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjOnsenFire_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenFire/d_a_obj_onsenFire/create__16daObjOnsenFire_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CA8474-80CA8478 0004+00 s=1 e=0 z=0  None .rodata    @3659                                                        */
SECTION_RODATA static u8 const lit_3659[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80CA82F4-80CA83FC 0108+00 s=1 e=0 z=0  None .text      execute__16daObjOnsenFire_cFv                                */
//	80CA8304: 803621DC (_savegpr_29)
//	80CA830C: 80CA8474 (lit_3659)
//	80CA8310: 80CA8474 (lit_3659)
//	80CA8314: 804061C0 (g_dComIfG_gameInfo)
//	80CA8318: 804061C0 (g_dComIfG_gameInfo)
//	80CA8330: 80450608 (g_whiteColor)
//	80CA8334: 80450608 (g_whiteColor)
//	80CA8344: 8004D1B8 (setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif)
//	80CA835C: 80450608 (g_whiteColor)
//	80CA8360: 80450608 (g_whiteColor)
//	80CA8370: 8004D1B8 (setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif)
//	80CA8388: 80450608 (g_whiteColor)
//	80CA838C: 80450608 (g_whiteColor)
//	80CA839C: 8004D1B8 (setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif)
//	80CA83AC: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CA83B0: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80CA83DC: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80CA83E8: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjOnsenFire_c::execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenFire/d_a_obj_onsenFire/execute__16daObjOnsenFire_cFv.s"
}
#pragma pop


/* 80CA83FC-80CA841C 0020+00 s=1 e=0 z=0  None .text      daObjOnsenFire_Create__FP10fopAc_ac_c                        */
//	80CA8408: 80CA8278 (create__16daObjOnsenFire_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daObjOnsenFire_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenFire/d_a_obj_onsenFire/daObjOnsenFire_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80CA841C-80CA843C 0020+00 s=1 e=0 z=0  None .text      daObjOnsenFire_Execute__FP16daObjOnsenFire_c                 */
//	80CA8428: 80CA82F4 (execute__16daObjOnsenFire_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjOnsenFire_c* False
// 	 daObjOnsenFire_c False
asm static void daObjOnsenFire_Execute(daObjOnsenFire_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenFire/d_a_obj_onsenFire/daObjOnsenFire_Execute__FP16daObjOnsenFire_c.s"
}
#pragma pop


/* 80CA843C-80CA846C 0030+00 s=1 e=0 z=0  None .text      daObjOnsenFire_Delete__FP16daObjOnsenFire_c                  */
//	80CA8454: 80018C8C (__dt__10fopAc_ac_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjOnsenFire_c* False
// 	 daObjOnsenFire_c False
asm static void daObjOnsenFire_Delete(daObjOnsenFire_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_onsenFire/d_a_obj_onsenFire/daObjOnsenFire_Delete__FP16daObjOnsenFire_c.s"
}
#pragma pop


/* ############################################################################################## */
/* 80CA8478-80CA847C 0004+00 s=0 e=0 z=0  None .rodata    @3660                                                        */
SECTION_RODATA u32 const lit_3660 = 0x3F800000;

/* 80CA847C-80CA8480 0004+00 s=0 e=0 z=0  None .rodata    @3661                                                        */
SECTION_RODATA u32 const lit_3661 = 0xBF800000;

/* 80CA8480-80CA84A0 0020+00 s=1 e=0 z=0  None .data      l_daObjOnsenFire_Method                                      */
SECTION_DATA static void* l_daObjOnsenFire_Method[8] = {
	(void*)daObjOnsenFire_Create__FP10fopAc_ac_c,
	(void*)daObjOnsenFire_Delete__FP16daObjOnsenFire_c,
	(void*)daObjOnsenFire_Execute__FP16daObjOnsenFire_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80CA84A0-80CA84D0 0030+00 s=0 e=0 z=1  None .data      g_profile_OBJ_ONSEN_FIRE                                     */
SECTION_DATA void* g_profile_OBJ_ONSEN_FIRE[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0003FFFD,
	(void*)0x008C0000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000568,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x02640000,
	(void*)&l_daObjOnsenFire_Method,
	(void*)0x00044000,
	(void*)0x000E0000,
};

