//
// Generated By: dol2asm
// Translation Unit: d_a_npc_df
//

#include "rel/d/a/npc/d_a_npc_df/d_a_npc_df.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct npc_df_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);
    /* 8000CE38 */ void scaleM(f32, f32, f32);
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct df_s {
    /* 809A6728 */ ~df_s();
    /* 809A6764 */ df_s();
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct J3DModel {};

struct J3DModelData {};

struct dComIfG_play_c {
    /* 8002CAF0 */ void addSimpleModel(J3DModelData*, int, u8);
    /* 8002CB30 */ void removeSimpleModel(J3DModelData*, int);
    /* 8002CB68 */ void entrySimpleModel(J3DModel*, int);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjGndChk {
    /* 809A6800 */ ~dBgS_ObjGndChk();
};

struct Vec {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80266B34 */ void operator-(Vec const&) const;
    /* 80266B84 */ void operator*(f32) const;
};

struct dBgS_LinChk {
    /* 80077C68 */ dBgS_LinChk();
    /* 80077CDC */ ~dBgS_LinChk();
    /* 80077D64 */ void Set(cXyz const*, cXyz const*, fopAc_ac_c const*);
};

struct dBgS_GndChk {
    /* 8007757C */ dBgS_GndChk();
    /* 800775F0 */ ~dBgS_GndChk();
};

struct cBgS_LinChk {};

struct cBgS_GndChk {
    /* 80267D28 */ void SetPos(cXyz const*);
};

struct cBgS {
    /* 800743B4 */ void LineCross(cBgS_LinChk*);
    /* 800744A0 */ void GroundCross(cBgS_GndChk*);
};

//
// Forward References:
//

extern "C" static void daNpc_Df_Draw__FP12npc_df_class();
extern "C" static void df_fly__FP12npc_df_classP4df_s();
extern "C" static void df_rod__FP12npc_df_classP4df_s();
extern "C" static void df_control__FP12npc_df_class();
extern "C" static void s_rod_sub__FPvPv();
extern "C" static void daNpc_Df_Execute__FP12npc_df_class();
extern "C" static bool daNpc_Df_IsDelete__FP12npc_df_class();
extern "C" static void daNpc_Df_Delete__FP12npc_df_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daNpc_Df_Create__FP10fopAc_ac_c();
extern "C" void __dt__4df_sFv();
extern "C" void __ct__4df_sFv();
extern "C" void __sinit_d_a_npc_df_cpp();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" static void func_809A6878();
extern "C" static void func_809A6880();
extern "C" static void func_809A6888();
extern "C" extern char const* const d_a_npc_df__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECAdd();
extern "C" void PSVECSquareMag();
extern "C" void __construct_array();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" extern u32 __float_nan;
extern "C" void __register_global_object();

//
// Declarations:
//

/* 809A538C-809A5424 0000EC 0098+00 1/0 0/0 0/0 .text            daNpc_Df_Draw__FP12npc_df_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_Df_Draw(npc_df_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/daNpc_Df_Draw__FP12npc_df_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 809A68A4-809A68A8 000000 0004+00 3/3 0/0 0/0 .rodata          @3748 */
SECTION_RODATA static u32 const lit_3748 = 0x42C80000;
SECTION_DEAD void* const cg_809A68A4 = (void*)(&lit_3748);

/* 809A68A8-809A68AC 000004 0004+00 0/2 0/0 0/0 .rodata          @3749 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3749 = 0x41200000;
SECTION_DEAD void* const cg_809A68A8 = (void*)(&lit_3749);
#pragma pop

/* 809A68AC-809A68B0 000008 0004+00 0/1 0/0 0/0 .rodata          @3750 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3750 = 0x42200000;
SECTION_DEAD void* const cg_809A68AC = (void*)(&lit_3750);
#pragma pop

/* 809A68B0-809A68B4 00000C 0004+00 0/3 0/0 0/0 .rodata          @3751 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3751[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_809A68B0 = (void*)(&lit_3751);
#pragma pop

/* 809A68B4-809A68B8 000010 0004+00 0/1 0/0 0/0 .rodata          @3752 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3752 = 0x47000000;
SECTION_DEAD void* const cg_809A68B4 = (void*)(&lit_3752);
#pragma pop

/* 809A68B8-809A68BC 000014 0004+00 0/1 0/0 0/0 .rodata          @3753 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3753 = 0x45FA0000;
SECTION_DEAD void* const cg_809A68B8 = (void*)(&lit_3753);
#pragma pop

/* 809A68BC-809A68C0 000018 0004+00 0/2 0/0 0/0 .rodata          @3754 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3754 = 0x42A00000;
SECTION_DEAD void* const cg_809A68BC = (void*)(&lit_3754);
#pragma pop

/* 809A68C0-809A68C4 00001C 0004+00 0/2 0/0 0/0 .rodata          @3755 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3755 = 0x40800000;
SECTION_DEAD void* const cg_809A68C0 = (void*)(&lit_3755);
#pragma pop

/* 809A68C4-809A68C8 000020 0004+00 0/1 0/0 0/0 .rodata          @3756 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3756 = 0x43960000;
SECTION_DEAD void* const cg_809A68C4 = (void*)(&lit_3756);
#pragma pop

/* 809A68C8-809A68CC 000024 0004+00 0/1 0/0 0/0 .rodata          @3757 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3757 = 0x447A0000;
SECTION_DEAD void* const cg_809A68C8 = (void*)(&lit_3757);
#pragma pop

/* 809A68CC-809A68D0 000028 0004+00 0/1 0/0 0/0 .rodata          @3758 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3758 = 0x44BB8000;
SECTION_DEAD void* const cg_809A68CC = (void*)(&lit_3758);
#pragma pop

/* 809A68D0-809A68D4 00002C 0004+00 0/2 0/0 0/0 .rodata          @3759 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3759 = 0x42480000;
SECTION_DEAD void* const cg_809A68D0 = (void*)(&lit_3759);
#pragma pop

/* 809A68D4-809A68D8 000030 0004+00 0/1 0/0 0/0 .rodata          @3760 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3760 = 0x442F0000;
SECTION_DEAD void* const cg_809A68D4 = (void*)(&lit_3760);
#pragma pop

/* 809A68D8-809A68DC 000034 0004+00 0/2 0/0 0/0 .rodata          @3761 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3761 = 0x42700000;
SECTION_DEAD void* const cg_809A68D8 = (void*)(&lit_3761);
#pragma pop

/* 809A68DC-809A68E0 000038 0004+00 0/3 0/0 0/0 .rodata          @3762 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3762 = 0x40400000;
SECTION_DEAD void* const cg_809A68DC = (void*)(&lit_3762);
#pragma pop

/* 809A68E0-809A68E4 00003C 0004+00 0/1 0/0 0/0 .rodata          @3763 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3763 = 0x428C0000;
SECTION_DEAD void* const cg_809A68E0 = (void*)(&lit_3763);
#pragma pop

/* 809A68E4-809A68E8 000040 0004+00 0/2 0/0 0/0 .rodata          @3764 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3764 = 0x3F000000;
SECTION_DEAD void* const cg_809A68E4 = (void*)(&lit_3764);
#pragma pop

/* 809A68E8-809A68EC 000044 0004+00 0/1 0/0 0/0 .rodata          @3765 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3765 = 0x3FC00000;
SECTION_DEAD void* const cg_809A68E8 = (void*)(&lit_3765);
#pragma pop

/* 809A68EC-809A68F0 000048 0004+00 0/2 0/0 0/0 .rodata          @3766 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3766 = 0x3DCCCCCD;
SECTION_DEAD void* const cg_809A68EC = (void*)(&lit_3766);
#pragma pop

/* 809A68F0-809A68F4 00004C 0004+00 0/1 0/0 0/0 .rodata          @3767 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3767 = 0x40000000;
SECTION_DEAD void* const cg_809A68F0 = (void*)(&lit_3767);
#pragma pop

/* 809A68F4-809A68F8 000050 0004+00 0/2 0/0 0/0 .rodata          @3768 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3768 = 0x3E4CCCCD;
SECTION_DEAD void* const cg_809A68F4 = (void*)(&lit_3768);
#pragma pop

/* 809A68F8-809A68FC 000054 0004+00 0/1 0/0 0/0 .rodata          @3769 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3769 = 0x3E99999A;
SECTION_DEAD void* const cg_809A68F8 = (void*)(&lit_3769);
#pragma pop

/* 809A68FC-809A6900 000058 0004+00 0/2 0/0 0/0 .rodata          @3770 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3770 = 0x41A00000;
SECTION_DEAD void* const cg_809A68FC = (void*)(&lit_3770);
#pragma pop

/* 809A6900-809A6904 00005C 0004+00 0/2 0/0 0/0 .rodata          @3771 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3771 = 0x41F00000;
SECTION_DEAD void* const cg_809A6900 = (void*)(&lit_3771);
#pragma pop

/* 809A6904-809A690C 000060 0004+04 0/2 0/0 0/0 .rodata          @3772 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3772[1 + 1 /* padding */] = {
    0x40A00000,
    /* padding */
    0x00000000,
};
SECTION_DEAD void* const cg_809A6904 = (void*)(&lit_3772);
#pragma pop

/* 809A690C-809A6914 000068 0008+00 0/3 0/0 0/0 .rodata          @3775 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3775[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809A690C = (void*)(&lit_3775);
#pragma pop

/* 809A6A10-809A6A14 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 809A6A14-809A6A18 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 809A6A18-809A6A1C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 809A6A1C-809A6A20 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 809A6A20-809A6A24 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 809A6A24-809A6A28 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 809A6A28-809A6A2C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 809A6A2C-809A6A30 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 809A6A30-809A6A34 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 809A6A34-809A6A38 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 809A6A38-809A6A3C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 809A6A3C-809A6A40 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 809A6A40-809A6A44 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 809A6A44-809A6A48 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 809A6A48-809A6A4C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 809A6A4C-809A6A50 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 809A6A50-809A6A54 000048 0004+00 3/4 0/0 0/0 .bss             lrl */
static u8 lrl[4];

/* 809A6A54-809A6A60 00004C 000C+00 0/1 0/0 0/0 .bss             @3668 */
#pragma push
#pragma force_active on
static u8 lit_3668[12];
#pragma pop

/* 809A6A60-809A6AD0 000058 0070+00 0/2 0/0 0/0 .bss             line_check */
#pragma push
#pragma force_active on
static u8 line_check[112];
#pragma pop

/* 809A6AD0-809A6ADC 0000C8 000C+00 0/1 0/0 0/0 .bss             @3669 */
#pragma push
#pragma force_active on
static u8 lit_3669[12];
#pragma pop

/* 809A6ADC-809A6B30 0000D4 0054+00 0/2 0/0 0/0 .bss             gc_work */
#pragma push
#pragma force_active on
static u8 gc_work[84];
#pragma pop

/* 809A5424-809A59DC 000184 05B8+00 1/1 0/0 0/0 .text            df_fly__FP12npc_df_classP4df_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void df_fly(npc_df_class* param_0, df_s* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/df_fly__FP12npc_df_classP4df_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 809A6914-809A6918 000070 0004+00 0/1 0/0 0/0 .rodata          @3888 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3888 = 0x46000000;
SECTION_DEAD void* const cg_809A6914 = (void*)(&lit_3888);
#pragma pop

/* 809A6918-809A691C 000074 0004+00 0/1 0/0 0/0 .rodata          @3889 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3889 = 0xC6000000;
SECTION_DEAD void* const cg_809A6918 = (void*)(&lit_3889);
#pragma pop

/* 809A691C-809A6920 000078 0004+00 0/1 0/0 0/0 .rodata          @3890 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3890 = 0x45800000;
SECTION_DEAD void* const cg_809A691C = (void*)(&lit_3890);
#pragma pop

/* 809A6920-809A6924 00007C 0004+00 1/3 0/0 0/0 .rodata          @3891 */
SECTION_RODATA static u32 const lit_3891 = 0x3F800000;
SECTION_DEAD void* const cg_809A6920 = (void*)(&lit_3891);

/* 809A6924-809A6928 000080 0004+00 0/1 0/0 0/0 .rodata          @3892 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3892 = 0x40E00000;
SECTION_DEAD void* const cg_809A6924 = (void*)(&lit_3892);
#pragma pop

/* 809A6928-809A692C 000084 0004+00 0/1 0/0 0/0 .rodata          @3893 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3893 = 0x409FAE14;
SECTION_DEAD void* const cg_809A6928 = (void*)(&lit_3893);
#pragma pop

/* 809A692C-809A6930 000088 0004+00 0/1 0/0 0/0 .rodata          @3894 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3894 = 0x41100000;
SECTION_DEAD void* const cg_809A692C = (void*)(&lit_3894);
#pragma pop

/* 809A6930-809A6934 00008C 0004+00 0/1 0/0 0/0 .rodata          @3895 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3895 = 0x403F5C29;
SECTION_DEAD void* const cg_809A6930 = (void*)(&lit_3895);
#pragma pop

/* 809A6934-809A6938 000090 0004+00 0/2 0/0 0/0 .rodata          @3896 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3896 = 0x43C80000;
SECTION_DEAD void* const cg_809A6934 = (void*)(&lit_3896);
#pragma pop

/* 809A6938-809A693C 000094 0004+00 0/1 0/0 0/0 .rodata          @3897 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3897 = 0x43FA0000;
SECTION_DEAD void* const cg_809A6938 = (void*)(&lit_3897);
#pragma pop

/* 809A693C-809A6940 000098 0004+00 0/1 0/0 0/0 .rodata          @3898 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3898 = 0x3E800000;
SECTION_DEAD void* const cg_809A693C = (void*)(&lit_3898);
#pragma pop

/* 809A6940-809A6944 00009C 0004+00 0/1 0/0 0/0 .rodata          @3899 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3899 = 0x4121999A;
SECTION_DEAD void* const cg_809A6940 = (void*)(&lit_3899);
#pragma pop

/* 809A6944-809A694C 0000A0 0008+00 0/1 0/0 0/0 .rodata          @3900 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3900[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809A6944 = (void*)(&lit_3900);
#pragma pop

/* 809A694C-809A6954 0000A8 0008+00 0/1 0/0 0/0 .rodata          @3901 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3901[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809A694C = (void*)(&lit_3901);
#pragma pop

/* 809A6954-809A695C 0000B0 0008+00 0/1 0/0 0/0 .rodata          @3902 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3902[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_809A6954 = (void*)(&lit_3902);
#pragma pop

/* 809A695C-809A6960 0000B8 0004+00 0/1 0/0 0/0 .rodata          @3903 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3903 = 0x40A33333;
SECTION_DEAD void* const cg_809A695C = (void*)(&lit_3903);
#pragma pop

/* 809A6960-809A6964 0000BC 0004+00 0/1 0/0 0/0 .rodata          @3904 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3904 = 0x420C0000;
SECTION_DEAD void* const cg_809A6960 = (void*)(&lit_3904);
#pragma pop

/* 809A6964-809A6968 0000C0 0004+00 0/1 0/0 0/0 .rodata          @3905 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3905 = 0x41700000;
SECTION_DEAD void* const cg_809A6964 = (void*)(&lit_3905);
#pragma pop

/* 809A6968-809A696C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @3906 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3906 = 0xBE051EB8;
SECTION_DEAD void* const cg_809A6968 = (void*)(&lit_3906);
#pragma pop

/* 809A696C-809A6970 0000C8 0004+00 0/1 0/0 0/0 .rodata          @3907 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3907 = 0xBE4CCCCD;
SECTION_DEAD void* const cg_809A696C = (void*)(&lit_3907);
#pragma pop

/* 809A6970-809A6974 0000CC 0004+00 0/1 0/0 0/0 .rodata          @3908 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3908 = 0xBEA8F5C3;
SECTION_DEAD void* const cg_809A6970 = (void*)(&lit_3908);
#pragma pop

/* 809A6974-809A6978 0000D0 0004+00 0/1 0/0 0/0 .rodata          @3909 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3909 = 0xBED70A3D;
SECTION_DEAD void* const cg_809A6974 = (void*)(&lit_3909);
#pragma pop

/* 809A6978-809A697C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @3910 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3910 = 0x3F4CCCCD;
SECTION_DEAD void* const cg_809A6978 = (void*)(&lit_3910);
#pragma pop

/* 809A59DC-809A6100 00073C 0724+00 1/1 0/0 0/0 .text            df_rod__FP12npc_df_classP4df_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void df_rod(npc_df_class* param_0, df_s* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/df_rod__FP12npc_df_classP4df_s.s"
}
#pragma pop

/* 809A6100-809A6314 000E60 0214+00 1/1 0/0 0/0 .text            df_control__FP12npc_df_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void df_control(npc_df_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/df_control__FP12npc_df_class.s"
}
#pragma pop

/* 809A6314-809A6360 001074 004C+00 1/1 0/0 0/0 .text            s_rod_sub__FPvPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void s_rod_sub(void* param_0, void* param_1) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/s_rod_sub__FPvPv.s"
}
#pragma pop

/* 809A6360-809A63AC 0010C0 004C+00 2/1 0/0 0/0 .text            daNpc_Df_Execute__FP12npc_df_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_Df_Execute(npc_df_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/daNpc_Df_Execute__FP12npc_df_class.s"
}
#pragma pop

/* 809A63AC-809A63B4 00110C 0008+00 1/0 0/0 0/0 .text            daNpc_Df_IsDelete__FP12npc_df_class
 */
static bool daNpc_Df_IsDelete(npc_df_class* param_0) {
    return true;
}

/* 809A63B4-809A6478 001114 00C4+00 1/0 0/0 0/0 .text            daNpc_Df_Delete__FP12npc_df_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_Df_Delete(npc_df_class* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/daNpc_Df_Delete__FP12npc_df_class.s"
}
#pragma pop

/* 809A6478-809A6564 0011D8 00EC+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 809A6564-809A6728 0012C4 01C4+00 1/0 0/0 0/0 .text            daNpc_Df_Create__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daNpc_Df_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/daNpc_Df_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 809A6728-809A6764 001488 003C+00 1/1 0/0 0/0 .text            __dt__4df_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm df_s::~df_s() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/__dt__4df_sFv.s"
}
#pragma pop

/* 809A6764-809A6768 0014C4 0004+00 1/1 0/0 0/0 .text            __ct__4df_sFv */
df_s::df_s() {
    /* empty function */
}

/* ############################################################################################## */
/* 809A6984-809A69A4 -00001 0020+00 1/0 0/0 0/0 .data            l_daNpc_Df_Method */
SECTION_DATA static void* l_daNpc_Df_Method[8] = {
    (void*)daNpc_Df_Create__FP10fopAc_ac_c,
    (void*)daNpc_Df_Delete__FP12npc_df_class,
    (void*)daNpc_Df_Execute__FP12npc_df_class,
    (void*)daNpc_Df_IsDelete__FP12npc_df_class,
    (void*)daNpc_Df_Draw__FP12npc_df_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 809A69A4-809A69D4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_DF */
SECTION_DATA extern void* g_profile_NPC_DF[12] = {
    (void*)0xFFFFFFFD, (void*)0x0009FFFD,
    (void*)0x03070000, (void*)&g_fpcLf_Method,
    (void*)0x00000D44, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01B70000, (void*)&l_daNpc_Df_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 809A69D4-809A6A04 000050 0030+00 2/2 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809A6878,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809A6888,
    (void*)NULL,
    (void*)NULL,
    (void*)func_809A6880,
};

/* 809A6768-809A6800 0014C8 0098+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_df_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_npc_df_cpp() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/__sinit_d_a_npc_df_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_809A6768 = (void*)__sinit_d_a_npc_df_cpp;
#pragma pop

/* 809A6800-809A6878 001560 0078+00 5/4 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjGndChk::~dBgS_ObjGndChk() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/__dt__14dBgS_ObjGndChkFv.s"
}
#pragma pop

/* 809A6878-809A6880 0015D8 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_809A6878() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/func_809A6878.s"
}
#pragma pop

/* 809A6880-809A6888 0015E0 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_809A6880() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/func_809A6880.s"
}
#pragma pop

/* 809A6888-809A6890 0015E8 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_809A6888() {
    nofralloc
#include "asm/rel/d/a/npc/d_a_npc_df/d_a_npc_df/func_809A6888.s"
}
#pragma pop

/* ############################################################################################## */
/* 809A6B30-809A6B34 000128 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_809A6B30[4];
#pragma pop

/* 809A6B34-809A6B38 00012C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_809A6B34[4];
#pragma pop

/* 809A6B38-809A6B3C 000130 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_809A6B38[4];
#pragma pop

/* 809A6B3C-809A6B40 000134 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_809A6B3C[4];
#pragma pop

/* 809A6B40-809A6B44 000138 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B40[4];
#pragma pop

/* 809A6B44-809A6B48 00013C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B44[4];
#pragma pop

/* 809A6B48-809A6B4C 000140 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B48[4];
#pragma pop

/* 809A6B4C-809A6B50 000144 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_809A6B4C[4];
#pragma pop

/* 809A6B50-809A6B54 000148 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_809A6B50[4];
#pragma pop

/* 809A6B54-809A6B58 00014C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_809A6B54[4];
#pragma pop

/* 809A6B58-809A6B5C 000150 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_809A6B58[4];
#pragma pop

/* 809A6B5C-809A6B60 000154 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_809A6B5C[4];
#pragma pop

/* 809A6B60-809A6B64 000158 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_809A6B60[4];
#pragma pop

/* 809A6B64-809A6B68 00015C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B64[4];
#pragma pop

/* 809A6B68-809A6B6C 000160 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_809A6B68[4];
#pragma pop

/* 809A6B6C-809A6B70 000164 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_809A6B6C[4];
#pragma pop

/* 809A6B70-809A6B74 000168 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_809A6B70[4];
#pragma pop

/* 809A6B74-809A6B78 00016C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_809A6B74[4];
#pragma pop

/* 809A6B78-809A6B7C 000170 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B78[4];
#pragma pop

/* 809A6B7C-809A6B80 000174 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_809A6B7C[4];
#pragma pop

/* 809A6B80-809A6B84 000178 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B80[4];
#pragma pop

/* 809A6B84-809A6B88 00017C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B84[4];
#pragma pop

/* 809A6B88-809A6B8C 000180 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B88[4];
#pragma pop

/* 809A6B8C-809A6B90 000184 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_809A6B8C[4];
#pragma pop

/* 809A6B90-809A6B94 000188 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_809A6B90[4];
#pragma pop

/* 809A697C-809A6983 0000D8 0007+00 3/3 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_809A697C = "Npc_df";
#pragma pop
