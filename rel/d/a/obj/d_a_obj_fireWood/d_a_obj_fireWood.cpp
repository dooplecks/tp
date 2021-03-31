// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_fireWood
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood.h"

// 
// Types:
// 

struct mDoHIO_entry_c {
	/* 80BE7668 */ // True False
~mDoHIO_entry_c();
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
};

struct daFireWood_c {
	/* 80BE76B0 */ // True False
void setBaseMtx();
	/* 80BE7708 */ // True False
void create();
	/* 80BE79A0 */ // True False
void lightInit();
	/* 80BE7A14 */ // True False
void setLight();
	/* 80BE7A38 */ // True False
void Execute();
	/* 80BE7E74 */ // True False
//  bool False
bool Draw();
	/* 80BE7E7C */ // True False
void Delete();
};

struct daFireWood_HIO_c {
	/* 80BE762C */ // True False
daFireWood_HIO_c();
	/* 80BE7F24 */ // True False
~daFireWood_HIO_c();
};

struct dSv_info_c {
	/* 80035200 */ // False False
//  int False
//  int False
void onSwitch(int, int);
	/* 80035360 */ // False False
//  int False
//  int False
void isSwitch(int, int) const;
};

struct dPa_levelEcallBack {
};

struct cXyz {
};

struct csXyz {
};

struct _GXColor {
};

struct dKy_tevstr_c {
};

struct dPa_control_c {
	/* 8004D4CC */ // False False
//  u32 False
//  u8 False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u8 False
//  dPa_levelEcallBack* False
// 	 dPa_levelEcallBack False
//  s8 False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
};

struct dCcD_Stts {
	/* 80083860 */ // False False
//  int False
//  int False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {
};

struct dCcD_GStts {
	/* 80083760 */ // False False
dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ // False False
dCcD_GObjInf();
	/* 80084460 */ // False False
void ChkTgHit();
	/* 80084548 */ // False False
void GetTgHitGObj();
};

struct dCcD_Cyl {
	/* 800848B4 */ // False False
//  dCcD_SrcCyl const& False
// 	 dCcD_SrcCyl const False
// 		 dCcD_SrcCyl False
void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
	/* 8026F1DC */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
void SetC(cXyz const&);
	/* 8026F1F8 */ // False False
//  f32 False
void SetH(f32);
	/* 8026F200 */ // False False
//  f32 False
void SetR(f32);
	/* 80BE7910 */ // True False
~cM3dGCyl();
};

struct cM3dGAab {
	/* 80BE7958 */ // True False
~cM3dGAab();
};

struct cCcD_Obj {
};

struct cCcS {
	/* 80264BA8 */ // False False
//  cCcD_Obj* False
// 	 cCcD_Obj False
void Set(cCcD_Obj*);
};

struct Vec {
};

struct JAISoundID {
};

struct Z2SeMgr {
	/* 802AB984 */ // False False
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
void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
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

struct LIGHT_INFLUENCE {
};

// 
// Forward References:
// 

// True False
//  daFireWood_c* False
// 	 daFireWood_c False
static void daFireWood_Draw(daFireWood_c*);
// True False
//  daFireWood_c* False
// 	 daFireWood_c False
static void daFireWood_Execute(daFireWood_c*);
// True False
//  daFireWood_c* False
// 	 daFireWood_c False
static void daFireWood_Delete(daFireWood_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daFireWood_Create(fopAc_ac_c*);

// True False
extern "C" void __ct__16daFireWood_HIO_cFv();
// True False
extern "C" void __dt__14mDoHIO_entry_cFv();
// True False
extern "C" void setBaseMtx__12daFireWood_cFv();
// True False
extern "C" void create__12daFireWood_cFv();
// True False
extern "C" void __dt__8cM3dGCylFv();
// True False
extern "C" void __dt__8cM3dGAabFv();
// True False
extern "C" void lightInit__12daFireWood_cFv();
// True False
extern "C" void setLight__12daFireWood_cFv();
// True False
extern "C" void Execute__12daFireWood_cFv();
// True False
//  bool False
extern "C" bool Draw__12daFireWood_cFv();
// True False
extern "C" void Delete__12daFireWood_cFv();
// True False
//  daFireWood_c* False
// 	 daFireWood_c False
extern "C" static void daFireWood_Draw__FP12daFireWood_c();
// True False
//  daFireWood_c* False
// 	 daFireWood_c False
extern "C" static void daFireWood_Execute__FP12daFireWood_c();
// True False
//  daFireWood_c* False
// 	 daFireWood_c False
extern "C" static void daFireWood_Delete__FP12daFireWood_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daFireWood_Create__FP10fopAc_ac_c();
// True False
extern "C" void __dt__16daFireWood_HIO_cFv();
// False False
extern "C" void __sinit_d_a_obj_fireWood_cpp();
extern "C" extern u32 const lit_3806;
extern "C" extern u32 const lit_3807;
extern "C" extern u32 const lit_3808;
extern "C" extern u32 const lit_3919;
extern "C" extern u32 const lit_3920;
extern "C" extern void* g_profile_Obj_FireWood[12];
extern "C" extern void* __vt__8cM3dGCyl[3];
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__16daFireWood_HIO_c[3];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];

// 
// External References:
// 

// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
//  s16 False
//  s16 False
void mDoMtx_ZXYrotM(f32 (* )[4], s16, s16, s16);
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
// False False
//  int False
void dComIfGp_getReverb(int);
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
void dKy_plight_set(LIGHT_INFLUENCE*);
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
void dKy_plight_cut(LIGHT_INFLUENCE*);
// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
//  s16 False
//  s16 False
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
//  f32 False
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
// False False
//  int False
extern "C" void dComIfGp_getReverb__Fi();
// False False
//  int False
//  int False
extern "C" void onSwitch__10dSv_info_cFii();
// False False
//  int False
//  int False
extern "C" void isSwitch__10dSv_info_cCFii();
// False False
//  u32 False
//  u8 False
//  u16 False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  dKy_tevstr_c const* False
// 	 dKy_tevstr_c const False
// 		 dKy_tevstr_c False
//  csXyz const* False
// 	 csXyz const False
// 		 csXyz False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  u8 False
//  dPa_levelEcallBack* False
// 	 dPa_levelEcallBack False
//  s8 False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  _GXColor const* False
// 	 _GXColor const False
// 		 _GXColor False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
//  f32 False
extern "C" void set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
// False False
extern "C" void __ct__10dCcD_GSttsFv();
// False False
//  int False
//  int False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
// False False
extern "C" void __ct__12dCcD_GObjInfFv();
// False False
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
// False False
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
// False False
//  dCcD_SrcCyl const& False
// 	 dCcD_SrcCyl const False
// 		 dCcD_SrcCyl False
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
// False False
//  LIGHT_INFLUENCE* False
// 	 LIGHT_INFLUENCE False
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
// False False
//  cCcD_Obj* False
// 	 cCcD_Obj False
extern "C" void Set__4cCcSFP8cCcD_Obj();
// False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
extern "C" void SetC__8cM3dGCylFRC4cXyz();
// False False
//  f32 False
extern "C" void SetH__8cM3dGCylFf();
// False False
//  f32 False
extern "C" void SetR__8cM3dGCylFf();
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
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
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
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
// False False
extern "C" void __register_global_object();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80BE8004-80BE8008 0004+00 s=3 e=0 z=0  None .rodata    @3625                                                        */
SECTION_RODATA static u8 const lit_3625[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80BE8008-80BE800C 0004+00 s=1 e=0 z=0  None .rodata    @3626                                                        */
SECTION_RODATA static u32 const lit_3626 = 0x42700000;

/* 80BE8050-80BE8094 0044+00 s=2 e=0 z=0  None .data      mCcDCyl__12daFireWood_c                                      */
SECTION_DATA static u8 mCcDCyl__12daFireWood_c[68] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

/* 80BE8094-80BE80AC 0018+00 s=1 e=0 z=0  None .data      l_cull_box                                                   */
SECTION_DATA static u8 l_cull_box[24] = {
	0xC2, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0x48, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
	0x42, 0xC8, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00,
};

/* 80BE80AC-80BE80CC 0020+00 s=1 e=0 z=0  None .data      l_daFireWood_Method                                          */
SECTION_DATA static void* l_daFireWood_Method[8] = {
	(void*)daFireWood_Create__FP10fopAc_ac_c,
	(void*)daFireWood_Delete__FP12daFireWood_c,
	(void*)daFireWood_Execute__FP12daFireWood_c,
	(void*)NULL,
	(void*)daFireWood_Draw__FP12daFireWood_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80BE80CC-80BE80FC 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_FireWood                                       */
SECTION_DATA void* g_profile_Obj_FireWood[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x01690000,
	(void*)&g_fpcLf_Method,
	(void*)0x00000740,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x01FA0000,
	(void*)&l_daFireWood_Method,
	(void*)0x00060000,
	(void*)0x000E0000,
};

/* 80BE80FC-80BE8108 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGCyl                                              */
SECTION_DATA void* __vt__8cM3dGCyl[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGCylFv,
};

/* 80BE8108-80BE8114 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80BE8114-80BE8120 000C+00 s=2 e=0 z=0  None .data      __vt__16daFireWood_HIO_c                                     */
SECTION_DATA void* __vt__16daFireWood_HIO_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__16daFireWood_HIO_cFv,
};

/* 80BE8120-80BE812C 000C+00 s=3 e=0 z=0  None .data      __vt__14mDoHIO_entry_c                                       */
SECTION_DATA void* __vt__14mDoHIO_entry_c[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BE762C-80BE7668 003C+00 s=1 e=0 z=0  None .text      __ct__16daFireWood_HIO_cFv                                   */
//	80BE762C: 80BE8120 (__vt__14mDoHIO_entry_c)
//	80BE7630: 80BE8120 (__vt__14mDoHIO_entry_c)
//	80BE7638: 80BE8114 (__vt__16daFireWood_HIO_c)
//	80BE763C: 80BE8114 (__vt__16daFireWood_HIO_c)
//	80BE7644: 80BE8004 (lit_3625)
//	80BE7648: 80BE8004 (lit_3625)
//	80BE7650: 80BE8008 (lit_3626)
//	80BE7654: 80BE8008 (lit_3626)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daFireWood_HIO_c::daFireWood_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__ct__16daFireWood_HIO_cFv.s"
}
#pragma pop


/* 80BE7668-80BE76B0 0048+00 s=1 e=0 z=0  None .text      __dt__14mDoHIO_entry_cFv                                     */
//	80BE7680: 80BE8120 (__vt__14mDoHIO_entry_c)
//	80BE7684: 80BE8120 (__vt__14mDoHIO_entry_c)
//	80BE7694: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop


/* 80BE76B0-80BE7708 0058+00 s=1 e=0 z=0  None .text      setBaseMtx__12daFireWood_cFv                                 */
//	80BE76C4: 803DD470 (now__14mDoMtx_stack_c)
//	80BE76C8: 803DD470 (now__14mDoMtx_stack_c)
//	80BE76D8: 803468E8 (PSMTXTrans)
//	80BE76DC: 803DD470 (now__14mDoMtx_stack_c)
//	80BE76E0: 803DD470 (now__14mDoMtx_stack_c)
//	80BE76F0: 8000C2A0 (mDoMtx_ZXYrotM__FPA4_fsss)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daFireWood_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/setBaseMtx__12daFireWood_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BE8138-80BE8144 000C+00 s=1 e=0 z=0  None .bss       @3619                                                        */
static u8 lit_3619[12];

/* 80BE8144-80BE8154 0010+00 s=3 e=0 z=0  None .bss       l_HIO                                                        */
static u8 l_HIO[16];

/* 80BE7708-80BE7910 0208+00 s=1 e=0 z=0  None .text      create__12daFireWood_cFv                                     */
//	80BE7738: 80018B64 (__ct__10fopAc_ac_cFv)
//	80BE773C: 803C3728 (__vt__9cCcD_Stts)
//	80BE7740: 803C3728 (__vt__9cCcD_Stts)
//	80BE774C: 80083760 (__ct__10dCcD_GSttsFv)
//	80BE7750: 803AC2E4 (__vt__9dCcD_Stts)
//	80BE7754: 803AC2E4 (__vt__9dCcD_Stts)
//	80BE776C: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80BE7770: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BE7774: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80BE777C: 80BE8108 (__vt__8cM3dGAab)
//	80BE7780: 80BE8108 (__vt__8cM3dGAab)
//	80BE7788: 80BE80FC (__vt__8cM3dGCyl)
//	80BE778C: 80BE80FC (__vt__8cM3dGCyl)
//	80BE7794: 803C35A4 (__vt__12cCcD_CylAttr)
//	80BE7798: 803C35A4 (__vt__12cCcD_CylAttr)
//	80BE77A8: 803AC050 (__vt__8dCcD_Cyl)
//	80BE77AC: 803AC050 (__vt__8dCcD_Cyl)
//	80BE77D4: 80BE76B0 (setBaseMtx__12daFireWood_cFv)
//	80BE77E8: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80BE77F0: 80BE8050 (mCcDCyl__12daFireWood_c)
//	80BE77F4: 80BE8050 (mCcDCyl__12daFireWood_c)
//	80BE77F8: 800848B4 (Set__8dCcD_CylFRC11dCcD_SrcCyl)
//	80BE7804: 80BE8094 (l_cull_box)
//	80BE7808: 80BE8094 (l_cull_box)
//	80BE7844: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80BE7854: 80BE8144 (l_HIO)
//	80BE7858: 80BE8144 (l_HIO)
//	80BE7894: 80BE79A0 (lightInit__12daFireWood_cFv)
//	80BE78A0: 804061C0 (g_dComIfG_gameInfo)
//	80BE78A4: 804061C0 (g_dComIfG_gameInfo)
//	80BE78B8: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BE78DC: 80BE7A14 (setLight__12daFireWood_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daFireWood_c::create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/create__12daFireWood_cFv.s"
}
#pragma pop


/* 80BE7910-80BE7958 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGCylFv                                            */
//	80BE7928: 80BE80FC (__vt__8cM3dGCyl)
//	80BE792C: 80BE80FC (__vt__8cM3dGCyl)
//	80BE793C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGCyl::~cM3dGCyl() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__dt__8cM3dGCylFv.s"
}
#pragma pop


/* 80BE7958-80BE79A0 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
//	80BE7970: 80BE8108 (__vt__8cM3dGAab)
//	80BE7974: 80BE8108 (__vt__8cM3dGAab)
//	80BE7984: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80BE79A0-80BE7A14 0074+00 s=1 e=0 z=0  None .text      lightInit__12daFireWood_cFv                                  */
//	80BE79A0: 80BE8004 (lit_3625)
//	80BE79A4: 80BE8004 (lit_3625)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daFireWood_c::lightInit() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/lightInit__12daFireWood_cFv.s"
}
#pragma pop


/* 80BE7A14-80BE7A38 0024+00 s=2 e=0 z=0  None .text      setLight__12daFireWood_cFv                                   */
//	80BE7A24: 801A7790 (dKy_plight_set__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daFireWood_c::setLight() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/setLight__12daFireWood_cFv.s"
}
#pragma pop


/* 80BE7A38-80BE7E74 043C+00 s=1 e=0 z=0  None .text      Execute__12daFireWood_cFv                                    */
//	80BE7A48: 803621DC (_savegpr_29)
//	80BE7A50: 80BE8004 (lit_3625)
//	80BE7A54: 80BE8004 (lit_3625)
//	80BE7A58: 804061C0 (g_dComIfG_gameInfo)
//	80BE7A5C: 804061C0 (g_dComIfG_gameInfo)
//	80BE7A70: 80035360 (isSwitch__10dSv_info_cCFii)
//	80BE7A90: 804061C0 (g_dComIfG_gameInfo)
//	80BE7A94: 804061C0 (g_dComIfG_gameInfo)
//	80BE7AE4: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE7B38: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE7B8C: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE7BE0: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE7BEC: 804061C0 (g_dComIfG_gameInfo)
//	80BE7BF0: 804061C0 (g_dComIfG_gameInfo)
//	80BE7C3C: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE7C8C: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE7CDC: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80BE7CEC: 8002D06C (dComIfGp_getReverb__Fi)
//	80BE7D00: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE7D04: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE7D2C: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BE7D34: 80084460 (ChkTgHit__12dCcD_GObjInfFv)
//	80BE7D44: 80084548 (GetTgHitGObj__12dCcD_GObjInfFv)
//	80BE7D6C: 80BE8144 (l_HIO)
//	80BE7D70: 80BE8144 (l_HIO)
//	80BE7D90: 8002D06C (dComIfGp_getReverb__Fi)
//	80BE7DA4: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE7DA8: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80BE7DD0: 802AB984 (seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80BE7DD8: 80BE7A14 (setLight__12daFireWood_cFv)
//	80BE7DE0: 80BE8144 (l_HIO)
//	80BE7DE4: 80BE8144 (l_HIO)
//	80BE7DEC: 8026F200 (SetR__8cM3dGCylFf)
//	80BE7DF8: 8026F1F8 (SetH__8cM3dGCylFf)
//	80BE7E04: 8026F1DC (SetC__8cM3dGCylFRC4cXyz)
//	80BE7E08: 804061C0 (g_dComIfG_gameInfo)
//	80BE7E0C: 804061C0 (g_dComIfG_gameInfo)
//	80BE7E18: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	80BE7E3C: 804061C0 (g_dComIfG_gameInfo)
//	80BE7E40: 804061C0 (g_dComIfG_gameInfo)
//	80BE7E54: 80035200 (onSwitch__10dSv_info_cFii)
//	80BE7E60: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daFireWood_c::Execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/Execute__12daFireWood_cFv.s"
}
#pragma pop


/* 80BE7E74-80BE7E7C 0008+00 s=1 e=0 z=0  None .text      Draw__12daFireWood_cFv                                       */
// True False
//  bool False
bool daFireWood_c::Draw() {
	return true;
}


/* 80BE7E7C-80BE7EA4 0028+00 s=1 e=0 z=0  None .text      Delete__12daFireWood_cFv                                     */
//	80BE7E8C: 801A792C (dKy_plight_cut__FP15LIGHT_INFLUENCE)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daFireWood_c::Delete() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/Delete__12daFireWood_cFv.s"
}
#pragma pop


/* 80BE7EA4-80BE7EC4 0020+00 s=1 e=0 z=0  None .text      daFireWood_Draw__FP12daFireWood_c                            */
//	80BE7EB0: 80BE7E74 (Draw__12daFireWood_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daFireWood_c* False
// 	 daFireWood_c False
asm static void daFireWood_Draw(daFireWood_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/daFireWood_Draw__FP12daFireWood_c.s"
}
#pragma pop


/* 80BE7EC4-80BE7EE4 0020+00 s=1 e=0 z=0  None .text      daFireWood_Execute__FP12daFireWood_c                         */
//	80BE7ED0: 80BE7A38 (Execute__12daFireWood_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daFireWood_c* False
// 	 daFireWood_c False
asm static void daFireWood_Execute(daFireWood_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/daFireWood_Execute__FP12daFireWood_c.s"
}
#pragma pop


/* 80BE7EE4-80BE7F04 0020+00 s=1 e=0 z=0  None .text      daFireWood_Delete__FP12daFireWood_c                          */
//	80BE7EF0: 80BE7E7C (Delete__12daFireWood_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daFireWood_c* False
// 	 daFireWood_c False
asm static void daFireWood_Delete(daFireWood_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/daFireWood_Delete__FP12daFireWood_c.s"
}
#pragma pop


/* 80BE7F04-80BE7F24 0020+00 s=1 e=0 z=0  None .text      daFireWood_Create__FP10fopAc_ac_c                            */
//	80BE7F10: 80BE7708 (create__12daFireWood_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daFireWood_Create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/daFireWood_Create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80BE7F24-80BE7F80 005C+00 s=2 e=0 z=0  None .text      __dt__16daFireWood_HIO_cFv                                   */
//	80BE7F3C: 80BE8114 (__vt__16daFireWood_HIO_c)
//	80BE7F40: 80BE8114 (__vt__16daFireWood_HIO_c)
//	80BE7F4C: 80BE8120 (__vt__14mDoHIO_entry_c)
//	80BE7F50: 80BE8120 (__vt__14mDoHIO_entry_c)
//	80BE7F64: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm daFireWood_HIO_c::~daFireWood_HIO_c() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__dt__16daFireWood_HIO_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80BE800C-80BE803C 0030+00 s=1 e=0 z=0  None .rodata    mCcDObjInfo__12daFireWood_c                                  */
SECTION_RODATA static u8 const mCcDObjInfo__12daFireWood_c[48] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
	0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE7F80-80BE7FF0 0070+00 s=0 e=1 z=0  None .text      __sinit_d_a_obj_fireWood_cpp                                 */
//	80BE7F8C: 80BE8144 (l_HIO)
//	80BE7F90: 80BE8144 (l_HIO)
//	80BE7F94: 80BE762C (__ct__16daFireWood_HIO_cFv)
//	80BE7F98: 80BE7F24 (__dt__16daFireWood_HIO_cFv)
//	80BE7F9C: 80BE7F24 (__dt__16daFireWood_HIO_cFv)
//	80BE7FA0: 80BE8138 (lit_3619)
//	80BE7FA4: 80BE8138 (lit_3619)
//	80BE7FA8: 80BE75B8 (__register_global_object)
//	80BE7FAC: 80BE8050 (mCcDCyl__12daFireWood_c)
//	80BE7FB0: 80BE8050 (mCcDCyl__12daFireWood_c)
//	80BE7FB8: 80BE800C (mCcDObjInfo__12daFireWood_c)
//	80BE7FBC: 80BE800C (mCcDObjInfo__12daFireWood_c)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void __sinit_d_a_obj_fireWood_cpp() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__sinit_d_a_obj_fireWood_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_80BE7F80 = (void*)__sinit_d_a_obj_fireWood_cpp;
#pragma pop


/* ############################################################################################## */
/* 80BE803C-80BE8040 0004+00 s=0 e=0 z=0  None .rodata    @3806                                                        */
SECTION_RODATA u32 const lit_3806 = 0x41200000;

/* 80BE8040-80BE8044 0004+00 s=0 e=0 z=0  None .rodata    @3807                                                        */
SECTION_RODATA u32 const lit_3807 = 0x43FA0000;

/* 80BE8044-80BE8048 0004+00 s=0 e=0 z=0  None .rodata    @3808                                                        */
SECTION_RODATA u32 const lit_3808 = 0x3F800000;

/* 80BE8048-80BE804C 0004+00 s=0 e=0 z=0  None .rodata    @3919                                                        */
SECTION_RODATA u32 const lit_3919 = 0xBF800000;

/* 80BE804C-80BE8050 0004+00 s=0 e=0 z=0  None .rodata    @3920                                                        */
SECTION_RODATA u32 const lit_3920 = 0x42C80000;

