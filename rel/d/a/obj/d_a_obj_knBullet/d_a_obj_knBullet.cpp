// 
// Generated By: dol2asm
// Translation Unit: d_a_obj_knBullet
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet.h"

// 
// Types:
// 

struct csXyz {
};

struct mDoMtx_stack_c {
	/* 8000CED4 */ // False False
//  csXyz const& False
// 	 csXyz const False
// 		 csXyz False
void XYZrotM(csXyz const&);
};

struct fopAc_ac_c {
	/* 80018B64 */ // False False
fopAc_ac_c();
};

struct daObjKnBullet_c {
	/* 80C47118 */ // True False
void Create();
	/* 80C47300 */ // True False
void Execute();
	/* 80C47480 */ // True False
//  bool False
bool Draw();
	/* 80C47488 */ // True False
//  bool False
bool Delete();
	/* 80C47490 */ // True False
void setBaseMtx();
	/* 80C474E8 */ // True False
void col_init();
	/* 80C47558 */ // True False
void col_chk();
	/* 80C477B4 */ // True False
void hitPrtclSet();
};

struct dPa_levelEcallBack {
};

struct Vec {
};

struct cXyz {
	/* 80266B34 */ // False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
void operator-(Vec const&) const;
	/* 80266F48 */ // False False
void normalizeZP();
};

struct _GXColor {
};

struct dKy_tevstr_c {
};

struct dPa_control_c {
	struct level_c {
		/* 8004B918 */ // False False
//  u32 False
void getEmitter(u32);
	};

	/* 8004CA90 */ // False False
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
void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*, cXyz const*, f32);
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

struct dCcD_SrcSph {
};

struct dCcD_Sph {
	/* 80084A34 */ // False False
//  dCcD_SrcSph const& False
// 	 dCcD_SrcSph const False
// 		 dCcD_SrcSph False
void Set(dCcD_SrcSph const&);
};

struct dCcD_GStts {
	/* 80083760 */ // False False
dCcD_GStts();
};

struct dCcD_GObjInf {
	/* 80083A28 */ // False False
dCcD_GObjInf();
	/* 800842C0 */ // False False
void ChkAtHit();
};

struct cM3dGSph {
	/* 8026F648 */ // False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
void SetC(cXyz const&);
	/* 8026F708 */ // False False
//  f32 False
void SetR(f32);
	/* 80C47270 */ // True False
~cM3dGSph();
};

struct cM3dGAab {
	/* 80C472B8 */ // True False
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

struct JPABaseEmitter {
	/* 8027EC60 */ // False False
void deleteAllParticle();
};

// 
// Forward References:
// 

// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
static void daObjKnBullet_Execute(daObjKnBullet_c*);
// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
static void daObjKnBullet_Draw(daObjKnBullet_c*);
// True False
//  bool False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
static bool daObjKnBullet_IsDelete(daObjKnBullet_c*);
// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
static void daObjKnBullet_Delete(daObjKnBullet_c*);
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
static void daObjKnBullet_create(fopAc_ac_c*);
// False True
//  s16* False
// 	 s16 False
void cLib_calcTimer__template0(s16*);

// True False
extern "C" void Create__15daObjKnBullet_cFv();
// True False
extern "C" void __dt__8cM3dGSphFv();
// True False
extern "C" void __dt__8cM3dGAabFv();
// True False
extern "C" void Execute__15daObjKnBullet_cFv();
// True False
//  bool False
extern "C" bool Draw__15daObjKnBullet_cFv();
// True False
//  bool False
extern "C" bool Delete__15daObjKnBullet_cFv();
// True False
extern "C" void setBaseMtx__15daObjKnBullet_cFv();
// True False
extern "C" void col_init__15daObjKnBullet_cFv();
// True False
extern "C" void col_chk__15daObjKnBullet_cFv();
// True False
extern "C" void hitPrtclSet__15daObjKnBullet_cFv();
// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
extern "C" static void daObjKnBullet_Execute__FP15daObjKnBullet_c();
// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
extern "C" static void daObjKnBullet_Draw__FP15daObjKnBullet_c();
// True False
//  bool False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
extern "C" static bool daObjKnBullet_IsDelete__FP15daObjKnBullet_c();
// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
extern "C" static void daObjKnBullet_Delete__FP15daObjKnBullet_c();
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" static void daObjKnBullet_create__FP10fopAc_ac_c();
// False True
//  s16* False
// 	 s16 False
extern "C" void func_80C4792C();
extern "C" extern u32 const lit_3907;
extern "C" extern u32 const lit_3908;
extern "C" extern u32 const lit_3909;
extern "C" extern u32 const lit_3910;
extern "C" extern u8 const data_80C479AC[6 + 2 /* padding */];
extern "C" extern u32 const lit_4022;
extern "C" extern u8 const lit_4129[4];
extern "C" extern u32 const lit_4130;
extern "C" extern void* g_profile_KN_BULLET[12];
extern "C" extern void* __vt__8cM3dGSph[3];
extern "C" extern void* __vt__8cM3dGAab[3];

// 
// External References:
// 

// False False
//  f32 (* )[4] False
// 	 f32 False
// 	 * False
// 		  False
//  s16 False
void mDoMtx_YrotS(f32 (* )[4], s16);
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
void fopAcM_delete(fopAc_ac_c*);
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
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
void fopAcM_posMove(fopAc_ac_c*, cXyz const*);
// False False
//  unsigned int False
void fpcEx_SearchByID(unsigned int);
// False False
//  int False
void dComIfGp_getReverb(int);
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
extern "C" void mDoMtx_YrotS__FPA4_fs();
// False False
//  csXyz const& False
// 	 csXyz const False
// 		 csXyz False
extern "C" void XYZrotM__14mDoMtx_stack_cFRC5csXyz();
// False False
extern "C" void __ct__10fopAc_ac_cFv();
// False False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
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
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
//  cXyz const* False
// 	 cXyz const False
// 		 cXyz False
extern "C" void fopAcM_posMove__FP10fopAc_ac_cPC4cXyz();
// False False
//  unsigned int False
extern "C" void fpcEx_SearchByID__FUi();
// False False
//  int False
extern "C" void dComIfGp_getReverb__Fi();
// False False
//  u32 False
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
// False False
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
extern "C" void set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
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
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
// False False
//  dCcD_SrcSph const& False
// 	 dCcD_SrcSph const False
// 		 dCcD_SrcSph False
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
// False False
//  cCcD_Obj* False
// 	 cCcD_Obj False
extern "C" void Set__4cCcSFP8cCcD_Obj();
// False False
//  Vec const& False
// 	 Vec const False
// 		 Vec False
extern "C" void __mi__4cXyzCFRC3Vec();
// False False
extern "C" void normalizeZP__4cXyzFv();
// False False
//  cXyz const& False
// 	 cXyz const False
// 		 cXyz False
extern "C" void SetC__8cM3dGSphFRC4cXyz();
// False False
//  f32 False
extern "C" void SetR__8cM3dGSphFf();
// False False
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
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
extern "C" void PSMTXCopy();
// False False
extern "C" void PSMTXTrans();
// False False
extern "C" void PSMTXMultVec();
// False False
extern "C" void PSVECScale();
// False False
extern "C" void _savegpr_24();
// False False
extern "C" void _savegpr_26();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_24();
// False False
extern "C" void _restgpr_26();
// False False
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 80C47950-80C4795C 000C+00 s=4 e=0 z=0  None .rodata    l_DATA                                                       */
SECTION_RODATA static u8 const l_DATA[12] = {
	0x41, 0xF0, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00,
};

/* 80C479CC-80C479EC 0020+00 s=1 e=0 z=0  None .data      l_daObjKnBullet_Method                                       */
SECTION_DATA static void* l_daObjKnBullet_Method[8] = {
	(void*)daObjKnBullet_create__FP10fopAc_ac_c,
	(void*)daObjKnBullet_Delete__FP15daObjKnBullet_c,
	(void*)daObjKnBullet_Execute__FP15daObjKnBullet_c,
	(void*)daObjKnBullet_IsDelete__FP15daObjKnBullet_c,
	(void*)daObjKnBullet_Draw__FP15daObjKnBullet_c,
	(void*)NULL,
	(void*)NULL,
	(void*)NULL,
};

/* 80C479EC-80C47A1C 0030+00 s=0 e=0 z=1  None .data      g_profile_KN_BULLET                                          */
SECTION_DATA void* g_profile_KN_BULLET[12] = {
	(void*)0xFFFFFFFD,
	(void*)0x0007FFFD,
	(void*)0x025B0000,
	(void*)&g_fpcLf_Method,
	(void*)0x0000071C,
	(void*)NULL,
	(void*)NULL,
	(void*)&g_fopAc_Method,
	(void*)0x015C0000,
	(void*)&l_daObjKnBullet_Method,
	(void*)0x00044100,
	(void*)0x000E0000,
};

/* 80C47A1C-80C47A28 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGSph                                              */
SECTION_DATA void* __vt__8cM3dGSph[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGSphFv,
};

/* 80C47A28-80C47A34 000C+00 s=2 e=0 z=0  None .data      __vt__8cM3dGAab                                              */
SECTION_DATA void* __vt__8cM3dGAab[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__8cM3dGAabFv,
};

/* 80C47118-80C47270 0158+00 s=1 e=0 z=0  None .text      Create__15daObjKnBullet_cFv                                  */
//	80C47128: 803621DC (_savegpr_29)
//	80C47130: 80C47950 (l_DATA)
//	80C47134: 80C47950 (l_DATA)
//	80C47150: 80018B64 (__ct__10fopAc_ac_cFv)
//	80C47154: 803C3728 (__vt__9cCcD_Stts)
//	80C47158: 803C3728 (__vt__9cCcD_Stts)
//	80C47164: 80083760 (__ct__10dCcD_GSttsFv)
//	80C47168: 803AC2E4 (__vt__9dCcD_Stts)
//	80C4716C: 803AC2E4 (__vt__9dCcD_Stts)
//	80C47184: 80083A28 (__ct__12dCcD_GObjInfFv)
//	80C47188: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C4718C: 803C36D0 (__vt__14cCcD_ShapeAttr)
//	80C47194: 80C47A28 (__vt__8cM3dGAab)
//	80C47198: 80C47A28 (__vt__8cM3dGAab)
//	80C471A0: 80C47A1C (__vt__8cM3dGSph)
//	80C471A4: 80C47A1C (__vt__8cM3dGSph)
//	80C471AC: 803C3540 (__vt__12cCcD_SphAttr)
//	80C471B0: 803C3540 (__vt__12cCcD_SphAttr)
//	80C471C0: 803ABFC0 (__vt__8dCcD_Sph)
//	80C471C4: 803ABFC0 (__vt__8dCcD_Sph)
//	80C471EC: 80C47490 (setBaseMtx__15daObjKnBullet_cFv)
//	80C47224: 8001A548 (fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff)
//	80C4722C: 80C474E8 (col_init__15daObjKnBullet_cFv)
//	80C4725C: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKnBullet_c::Create() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/Create__15daObjKnBullet_cFv.s"
}
#pragma pop


/* 80C47270-80C472B8 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGSphFv                                            */
//	80C47288: 80C47A1C (__vt__8cM3dGSph)
//	80C4728C: 80C47A1C (__vt__8cM3dGSph)
//	80C4729C: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGSph::~cM3dGSph() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/__dt__8cM3dGSphFv.s"
}
#pragma pop


/* 80C472B8-80C47300 0048+00 s=1 e=0 z=0  None .text      __dt__8cM3dGAabFv                                            */
//	80C472D0: 80C47A28 (__vt__8cM3dGAab)
//	80C472D4: 80C47A28 (__vt__8cM3dGAab)
//	80C472E4: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cM3dGAab::~cM3dGAab() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/__dt__8cM3dGAabFv.s"
}
#pragma pop


/* 80C47300-80C47480 0180+00 s=1 e=0 z=0  None .text      Execute__15daObjKnBullet_cFv                                 */
//	80C47310: 803621C8 (_savegpr_24)
//	80C47318: 80C47950 (l_DATA)
//	80C4731C: 80C47950 (l_DATA)
//	80C47320: 80C47558 (col_chk__15daObjKnBullet_cFv)
//	80C4733C: 8001A660 (fopAcM_posMove__FP10fopAc_ac_cPC4cXyz)
//	80C47344: 80C47490 (setBaseMtx__15daObjKnBullet_cFv)
//	80C4734C: 80C4792C (func_80C4792C)
//	80C4735C: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80C47374: 804061C0 (g_dComIfG_gameInfo)
//	80C47378: 804061C0 (g_dComIfG_gameInfo)
//	80C473CC: 8004D4CC (set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80C473E0: 8004B918 (getEmitter__Q213dPa_control_c7level_cFUl)
//	80C4742C: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C47430: 80451368 (mAudioMgrPtr__10Z2AudioMgr)
//	80C47434: 8002D06C (dComIfGp_getReverb__Fi)
//	80C47460: 802AC50C (seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc)
//	80C4746C: 80362214 (_restgpr_24)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKnBullet_c::Execute() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/Execute__15daObjKnBullet_cFv.s"
}
#pragma pop


/* 80C47480-80C47488 0008+00 s=1 e=0 z=0  None .text      Draw__15daObjKnBullet_cFv                                    */
// True False
//  bool False
bool daObjKnBullet_c::Draw() {
	return true;
}


/* 80C47488-80C47490 0008+00 s=1 e=0 z=0  None .text      Delete__15daObjKnBullet_cFv                                  */
// True False
//  bool False
bool daObjKnBullet_c::Delete() {
	return true;
}


/* 80C47490-80C474E8 0058+00 s=2 e=0 z=0  None .text      setBaseMtx__15daObjKnBullet_cFv                              */
//	80C474A4: 803DD470 (now__14mDoMtx_stack_c)
//	80C474A8: 803DD470 (now__14mDoMtx_stack_c)
//	80C474B8: 803468E8 (PSMTXTrans)
//	80C474C0: 8000CED4 (XYZrotM__14mDoMtx_stack_cFRC5csXyz)
//	80C474C4: 803DD470 (now__14mDoMtx_stack_c)
//	80C474C8: 803DD470 (now__14mDoMtx_stack_c)
//	80C474D0: 803464B0 (PSMTXCopy)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKnBullet_c::setBaseMtx() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/setBaseMtx__15daObjKnBullet_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C4795C-80C4799C 0040+00 s=1 e=0 z=0  None .rodata    l_sph_src                                                    */
SECTION_RODATA static u8 const l_sph_src[64] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
	0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C474E8-80C47558 0070+00 s=1 e=0 z=0  None .text      col_init__15daObjKnBullet_cFv                                */
//	80C4750C: 80083860 (Init__9dCcD_SttsFiiP10fopAc_ac_c)
//	80C47514: 80C4795C (l_sph_src)
//	80C47518: 80C4795C (l_sph_src)
//	80C4751C: 80084A34 (Set__8dCcD_SphFRC11dCcD_SrcSph)
//	80C47530: 8026F648 (SetC__8cM3dGSphFRC4cXyz)
//	80C47538: 80C47950 (l_DATA)
//	80C4753C: 80C47950 (l_DATA)
//	80C47540: 8026F708 (SetR__8cM3dGSphFf)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKnBullet_c::col_init() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/col_init__15daObjKnBullet_cFv.s"
}
#pragma pop


/* 80C47558-80C477B4 025C+00 s=1 e=0 z=0  None .text      col_chk__15daObjKnBullet_cFv                                 */
//	80C47568: 803621DC (_savegpr_29)
//	80C47570: 80C47950 (l_DATA)
//	80C47574: 80C47950 (l_DATA)
//	80C475AC: 803DD470 (now__14mDoMtx_stack_c)
//	80C475B0: 803DD470 (now__14mDoMtx_stack_c)
//	80C475B8: 8000C3DC (mDoMtx_YrotS__FPA4_fs)
//	80C475BC: 803DD470 (now__14mDoMtx_stack_c)
//	80C475C0: 803DD470 (now__14mDoMtx_stack_c)
//	80C475CC: 80346D6C (PSMTXMultVec)
//	80C475E8: 804061C0 (g_dComIfG_gameInfo)
//	80C475EC: 804061C0 (g_dComIfG_gameInfo)
//	80C47604: 80021358 (fpcEx_SearchByID__FUi)
//	80C47640: 80266B34 (__mi__4cXyzCFRC3Vec)
//	80C47664: 80266F48 (normalizeZP__4cXyzFv)
//	80C47674: 803470D8 (PSVECScale)
//	80C4769C: 80C477B4 (hitPrtclSet__15daObjKnBullet_cFv)
//	80C476A4: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80C476C0: 80021358 (fpcEx_SearchByID__FUi)
//	80C476D8: 80C477B4 (hitPrtclSet__15daObjKnBullet_cFv)
//	80C476E0: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80C476F0: 800842C0 (ChkAtHit__12dCcD_GObjInfFv)
//	80C47700: 80021358 (fpcEx_SearchByID__FUi)
//	80C47718: 80C477B4 (hitPrtclSet__15daObjKnBullet_cFv)
//	80C47720: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80C47738: 800842C0 (ChkAtHit__12dCcD_GObjInfFv)
//	80C47748: 80C477B4 (hitPrtclSet__15daObjKnBullet_cFv)
//	80C47750: 80019C7C (fopAcM_delete__FP10fopAc_ac_c)
//	80C47774: 8026F648 (SetC__8cM3dGSphFRC4cXyz)
//	80C47780: 8026F708 (SetR__8cM3dGSphFf)
//	80C47784: 804061C0 (g_dComIfG_gameInfo)
//	80C47788: 804061C0 (g_dComIfG_gameInfo)
//	80C47794: 80264BA8 (Set__4cCcSFP8cCcD_Obj)
//	80C477A0: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKnBullet_c::col_chk() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/col_chk__15daObjKnBullet_cFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80C4799C-80C479A0 0004+00 s=0 e=0 z=0  None .rodata    @3907                                                        */
SECTION_RODATA u32 const lit_3907 = 0xC3960000;

/* 80C479A0-80C479A4 0004+00 s=0 e=0 z=0  None .rodata    @3908                                                        */
SECTION_RODATA u32 const lit_3908 = 0xC2480000;

/* 80C479A4-80C479A8 0004+00 s=0 e=0 z=0  None .rodata    @3909                                                        */
SECTION_RODATA u32 const lit_3909 = 0x43960000;

/* 80C479A8-80C479AC 0004+00 s=0 e=0 z=0  None .rodata    @3910                                                        */
SECTION_RODATA u32 const lit_3910 = 0x43E10000;

/* 80C479AC-80C479B4 0006+02 s=0 e=0 z=0  None .rodata    l_prticles_id$3986                                           */
SECTION_RODATA u8 const data_80C479AC[6 + 2 /* padding */] = {
	0x8B, 0x7F, 0x8B, 0x80, 0x8B, 0x81,
	/* padding */
	0x00, 0x00,
};

/* 80C479B4-80C479B8 0004+00 s=1 e=0 z=0  None .rodata    @4021                                                        */
SECTION_RODATA static u32 const lit_4021 = 0x3F800000;

/* 80C479B8-80C479BC 0004+00 s=0 e=0 z=0  None .rodata    @4022                                                        */
SECTION_RODATA u32 const lit_4022 = 0xBF800000;

/* 80C479BC-80C479C0 0004+00 s=0 e=0 z=0  None .rodata    @4129                                                        */
SECTION_RODATA u8 const lit_4129[4] = {
	0x00, 0x00, 0x00, 0x00,
};

/* 80C479C0-80C479C4 0004+00 s=0 e=0 z=0  None .rodata    @4130                                                        */
SECTION_RODATA u32 const lit_4130 = 0x43160000;

/* 80C479C4-80C479CA 0006+00 s=1 e=0 z=0  None .rodata    l_prticles_id$4141                                           */
SECTION_RODATA static u8 const l_prticles_id_4141[6] = {
	0x8B, 0x82, 0x8B, 0x83, 0x8B, 0x84,
};

/* 80C477B4-80C478A4 00F0+00 s=1 e=0 z=0  None .text      hitPrtclSet__15daObjKnBullet_cFv                             */
//	80C477C4: 803621D0 (_savegpr_26)
//	80C477D4: 804061C0 (g_dComIfG_gameInfo)
//	80C477D8: 804061C0 (g_dComIfG_gameInfo)
//	80C477F0: 8004B918 (getEmitter__Q213dPa_control_c7level_cFUl)
//	80C4780C: 8027EC60 (deleteAllParticle__14JPABaseEmitterFv)
//	80C47828: 80C479C4 (l_prticles_id_4141)
//	80C4782C: 80C479C4 (l_prticles_id_4141)
//	80C47830: 80C479B4 (lit_4021)
//	80C47834: 80C479B4 (lit_4021)
//	80C47878: 8004CA90 (set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf)
//	80C47890: 8036221C (_restgpr_26)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void daObjKnBullet_c::hitPrtclSet() {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/hitPrtclSet__15daObjKnBullet_cFv.s"
}
#pragma pop


/* 80C478A4-80C478C4 0020+00 s=1 e=0 z=0  None .text      daObjKnBullet_Execute__FP15daObjKnBullet_c                   */
//	80C478B0: 80C47300 (Execute__15daObjKnBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
asm static void daObjKnBullet_Execute(daObjKnBullet_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/daObjKnBullet_Execute__FP15daObjKnBullet_c.s"
}
#pragma pop


/* 80C478C4-80C478E4 0020+00 s=1 e=0 z=0  None .text      daObjKnBullet_Draw__FP15daObjKnBullet_c                      */
//	80C478D0: 80C47480 (Draw__15daObjKnBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
asm static void daObjKnBullet_Draw(daObjKnBullet_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/daObjKnBullet_Draw__FP15daObjKnBullet_c.s"
}
#pragma pop


/* 80C478E4-80C478EC 0008+00 s=1 e=0 z=0  None .text      daObjKnBullet_IsDelete__FP15daObjKnBullet_c                  */
// True False
//  bool False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
static bool daObjKnBullet_IsDelete(daObjKnBullet_c* param_0) {
	return true;
}


/* 80C478EC-80C4790C 0020+00 s=1 e=0 z=0  None .text      daObjKnBullet_Delete__FP15daObjKnBullet_c                    */
//	80C478F8: 80C47488 (Delete__15daObjKnBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  daObjKnBullet_c* False
// 	 daObjKnBullet_c False
asm static void daObjKnBullet_Delete(daObjKnBullet_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/daObjKnBullet_Delete__FP15daObjKnBullet_c.s"
}
#pragma pop


/* 80C4790C-80C4792C 0020+00 s=1 e=0 z=0  None .text      daObjKnBullet_create__FP10fopAc_ac_c                         */
//	80C47918: 80C47118 (Create__15daObjKnBullet_cFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  fopAc_ac_c* False
// 	 fopAc_ac_c False
asm static void daObjKnBullet_create(fopAc_ac_c* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/daObjKnBullet_create__FP10fopAc_ac_c.s"
}
#pragma pop


/* 80C4792C-80C47948 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<s>__FPs                                       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
//  s16* False
// 	 s16 False
asm void cLib_calcTimer__template0(s16* param_0) {
	nofralloc
#include "asm/rel/d/a/obj/d_a_obj_knBullet/d_a_obj_knBullet/func_80C4792C.s"
}
#pragma pop


