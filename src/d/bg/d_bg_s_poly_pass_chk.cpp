// 
// Generated By: dol2asm
// Translation Unit: d/bg/d_bg_s_poly_pass_chk
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "d/bg/d_bg_s_poly_pass_chk.h"

// 
// Types:
// 

struct dBgS_PolyPassChk {
	/* 80078D64 */ // False False
dBgS_PolyPassChk();
	/* 80078DB0 */ // False False
~dBgS_PolyPassChk();
	/* 80078E0C */ // False False
//  dBgS_PolyPassChk& False
// 	 dBgS_PolyPassChk False
void SetPassChkInfo(dBgS_PolyPassChk&);
	/* 80078E68 */ // False False
void SetObj();
	/* 80078E74 */ // False False
void ClrObj();
	/* 80078E80 */ // False False
void SetCam();
	/* 80078E8C */ // False False
void ClrCam();
	/* 80078E98 */ // False False
void SetLink();
	/* 80078EA4 */ // False False
void ClrLink();
	/* 80078EB0 */ // False False
void SetArrow();
	/* 80078EBC */ // False False
void SetBomb();
	/* 80078EC8 */ // False False
void ClrBomb();
	/* 80078ED4 */ // False False
void SetBoomerang();
	/* 80078EE0 */ // False False
void SetRope();
	/* 80078EEC */ // False False
void SetUnderwaterRoof();
	/* 80078EF8 */ // False False
void SetHorse();
	/* 80078F04 */ // False False
void ChkNoHorse();
	/* 80078F7C */ // False False
void SetStatue();
	/* 80078F88 */ // False False
void ClrStatue();
	/* 80078F94 */ // False False
void SetIronBall();
	/* 80078FA0 */ // False False
void ClrIronBall();
};

struct cBgS_PolyPassChk {
	/* 80078FAC */ // True False
~cBgS_PolyPassChk();
};

// 
// Forward References:
// 


// False False
extern "C" void __ct__16dBgS_PolyPassChkFv();
// False False
extern "C" void __dt__16dBgS_PolyPassChkFv();
// False False
//  dBgS_PolyPassChk& False
// 	 dBgS_PolyPassChk False
extern "C" void SetPassChkInfo__16dBgS_PolyPassChkFR16dBgS_PolyPassChk();
// False False
extern "C" void SetObj__16dBgS_PolyPassChkFv();
// False False
extern "C" void ClrObj__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetCam__16dBgS_PolyPassChkFv();
// False False
extern "C" void ClrCam__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetLink__16dBgS_PolyPassChkFv();
// False False
extern "C" void ClrLink__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetArrow__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetBomb__16dBgS_PolyPassChkFv();
// False False
extern "C" void ClrBomb__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetBoomerang__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetRope__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetUnderwaterRoof__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetHorse__16dBgS_PolyPassChkFv();
// False False
extern "C" void ChkNoHorse__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetStatue__16dBgS_PolyPassChkFv();
// False False
extern "C" void ClrStatue__16dBgS_PolyPassChkFv();
// False False
extern "C" void SetIronBall__16dBgS_PolyPassChkFv();
// False False
extern "C" void ClrIronBall__16dBgS_PolyPassChkFv();
// True False
extern "C" void __dt__16cBgS_PolyPassChkFv();
extern "C" extern void* __vt__16dBgS_PolyPassChk[3];
extern "C" extern void* __vt__16cBgS_PolyPassChk[3];

// 
// External References:
// 

// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803ABA38-803ABA44 000C+00 s=2 e=0 z=0  None .data      __vt__16dBgS_PolyPassChk                                     */
SECTION_DATA void* __vt__16dBgS_PolyPassChk[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__16dBgS_PolyPassChkFv,
};

/* 803ABA44-803ABA50 000C+00 s=3 e=0 z=0  None .data      __vt__16cBgS_PolyPassChk                                     */
SECTION_DATA void* __vt__16cBgS_PolyPassChk[3] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__16cBgS_PolyPassChkFv,
};

/* 80078D64-80078DB0 004C+00 s=0 e=1 z=0  None .text      __ct__16dBgS_PolyPassChkFv                                   */
//	80078D64: 803ABA44 (__vt__16cBgS_PolyPassChk)
//	80078D68: 803ABA44 (__vt__16cBgS_PolyPassChk)
//	80078D70: 803ABA38 (__vt__16dBgS_PolyPassChk)
//	80078D74: 803ABA38 (__vt__16dBgS_PolyPassChk)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm dBgS_PolyPassChk::dBgS_PolyPassChk() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/__ct__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078DB0-80078E0C 005C+00 s=1 e=1 z=0  None .text      __dt__16dBgS_PolyPassChkFv                                   */
//	80078DC8: 803ABA38 (__vt__16dBgS_PolyPassChk)
//	80078DCC: 803ABA38 (__vt__16dBgS_PolyPassChk)
//	80078DD8: 803ABA44 (__vt__16cBgS_PolyPassChk)
//	80078DDC: 803ABA44 (__vt__16cBgS_PolyPassChk)
//	80078DF0: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm dBgS_PolyPassChk::~dBgS_PolyPassChk() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/__dt__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078E0C-80078E68 005C+00 s=0 e=1 z=0  None .text      SetPassChkInfo__16dBgS_PolyPassChkFR16dBgS_PolyPassChk       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  dBgS_PolyPassChk& False
// 	 dBgS_PolyPassChk False
asm void dBgS_PolyPassChk::SetPassChkInfo(dBgS_PolyPassChk& param_0) {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetPassChkInfo__16dBgS_PolyPassChkFR16dBgS_PolyPassChk.s"
}
#pragma pop


/* 80078E68-80078E74 000C+00 s=0 e=14 z=410  None .text      SetObj__16dBgS_PolyPassChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetObj() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetObj__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078E74-80078E80 000C+00 s=0 e=4 z=2  None .text      ClrObj__16dBgS_PolyPassChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::ClrObj() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/ClrObj__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078E80-80078E8C 000C+00 s=0 e=6 z=0  None .text      SetCam__16dBgS_PolyPassChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetCam() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetCam__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078E8C-80078E98 000C+00 s=0 e=2 z=0  None .text      ClrCam__16dBgS_PolyPassChkFv                                 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::ClrCam() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/ClrCam__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078E98-80078EA4 000C+00 s=0 e=3 z=3  None .text      SetLink__16dBgS_PolyPassChkFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetLink() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetLink__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078EA4-80078EB0 000C+00 s=0 e=1 z=0  None .text      ClrLink__16dBgS_PolyPassChkFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::ClrLink() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/ClrLink__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078EB0-80078EBC 000C+00 s=0 e=1 z=0  None .text      SetArrow__16dBgS_PolyPassChkFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetArrow() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetArrow__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078EBC-80078EC8 000C+00 s=0 e=2 z=2  None .text      SetBomb__16dBgS_PolyPassChkFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetBomb() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetBomb__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078EC8-80078ED4 000C+00 s=0 e=1 z=0  None .text      ClrBomb__16dBgS_PolyPassChkFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::ClrBomb() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/ClrBomb__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078ED4-80078EE0 000C+00 s=0 e=1 z=0  None .text      SetBoomerang__16dBgS_PolyPassChkFv                           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetBoomerang() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetBoomerang__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078EE0-80078EEC 000C+00 s=0 e=1 z=8  None .text      SetRope__16dBgS_PolyPassChkFv                                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetRope() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetRope__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078EEC-80078EF8 000C+00 s=0 e=3 z=0  None .text      SetUnderwaterRoof__16dBgS_PolyPassChkFv                      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetUnderwaterRoof() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetUnderwaterRoof__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078EF8-80078F04 000C+00 s=0 e=1 z=1  None .text      SetHorse__16dBgS_PolyPassChkFv                               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetHorse() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetHorse__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078F04-80078F7C 0078+00 s=0 e=2 z=0  None .text      ChkNoHorse__16dBgS_PolyPassChkFv                             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::ChkNoHorse() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/ChkNoHorse__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078F7C-80078F88 000C+00 s=0 e=1 z=2  None .text      SetStatue__16dBgS_PolyPassChkFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetStatue() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetStatue__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078F88-80078F94 000C+00 s=0 e=1 z=0  None .text      ClrStatue__16dBgS_PolyPassChkFv                              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::ClrStatue() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/ClrStatue__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078F94-80078FA0 000C+00 s=0 e=1 z=1  None .text      SetIronBall__16dBgS_PolyPassChkFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::SetIronBall() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/SetIronBall__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078FA0-80078FAC 000C+00 s=0 e=0 z=9  None .text      ClrIronBall__16dBgS_PolyPassChkFv                            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
asm void dBgS_PolyPassChk::ClrIronBall() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/ClrIronBall__16dBgS_PolyPassChkFv.s"
}
#pragma pop


/* 80078FAC-80078FF4 0048+00 s=1 e=0 z=0  None .text      __dt__16cBgS_PolyPassChkFv                                   */
//	80078FC4: 803ABA44 (__vt__16cBgS_PolyPassChk)
//	80078FC8: 803ABA44 (__vt__16cBgS_PolyPassChk)
//	80078FD8: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm cBgS_PolyPassChk::~cBgS_PolyPassChk() {
	nofralloc
#include "asm/d/bg/d_bg_s_poly_pass_chk/__dt__16cBgS_PolyPassChkFv.s"
}
#pragma pop


