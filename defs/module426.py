#
# Generate By: dol2asm
# Module: 426
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_crvfence",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_obj_crvfence",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80BCEC20,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCEC4C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCEC78,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCEC98,'size':140,'pad':0,'label':"CheckVec__15daObjCRVFENCE_cFv",'name':"CheckVec__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCED24,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCED60,'size':188,'pad':0,'label':"Wall_Check__15daObjCRVFENCE_cF4cXyz4cXyz",'name':"Wall_Check__15daObjCRVFENCE_cF4cXyz4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCEE1C,'size':32,'pad':0,'label':"daObjCRVFENCE_Create__FP10fopAc_ac_c",'name':"daObjCRVFENCE_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCEE3C,'size':36,'pad':0,'label':"daObjCRVFENCE_Delete__FP15daObjCRVFENCE_c",'name':"daObjCRVFENCE_Delete__FP15daObjCRVFENCE_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCEE60,'size':112,'pad':0,'label':"BgRelease__15daObjCRVFENCE_cFv",'name':"BgRelease__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCEED0,'size':96,'pad':0,'label':"PosSet__15daObjCRVFENCE_cFP4cXyz",'name':"PosSet__15daObjCRVFENCE_cFP4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCEF30,'size':384,'pad':0,'label':"FenceMove__15daObjCRVFENCE_cFRUcP4cXyzP5csXyzP4cXyzRs",'name':"FenceMove__15daObjCRVFENCE_cFRUcP4cXyzP5csXyzP4cXyzRs",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF0B0,'size':736,'pad':0,'label':"BrokenAction__15daObjCRVFENCE_cFv",'name':"BrokenAction__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF390,'size':116,'pad':0,'label':"s_obj_sub__FPvPv",'name':"s_obj_sub__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF404,'size':984,'pad':0,'label':"NormalAction__15daObjCRVFENCE_cFv",'name':"NormalAction__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF7DC,'size':132,'pad':0,'label':"checkViewArea__15daObjCRVFENCE_cFP4cXyz",'name':"checkViewArea__15daObjCRVFENCE_cFP4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF860,'size':68,'pad':0,'label':"Action__15daObjCRVFENCE_cFv",'name':"Action__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF8A4,'size':244,'pad':0,'label':"setBaseMtx__15daObjCRVFENCE_cFv",'name':"setBaseMtx__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF998,'size':44,'pad':0,'label':"daObjCRVFENCE_Draw__FP15daObjCRVFENCE_c",'name':"daObjCRVFENCE_Draw__FP15daObjCRVFENCE_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF9C4,'size':32,'pad':0,'label':"daObjCRVFENCE_Execute__FP15daObjCRVFENCE_c",'name':"daObjCRVFENCE_Execute__FP15daObjCRVFENCE_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCF9E4,'size':256,'pad':0,'label':"CreateHeap__15daObjCRVFENCE_cFv",'name':"CreateHeap__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCFAE4,'size':648,'pad':0,'label':"create__15daObjCRVFENCE_cFv",'name':"create__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCFD6C,'size':204,'pad':0,'label':"__dt__8dCcD_SphFv",'name':"__dt__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCFE38,'size':132,'pad':0,'label':"__ct__8dCcD_SphFv",'name':"__ct__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCFEBC,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCFF04,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCFF4C,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCFFBC,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BCFFC0,'size':8,'pad':0,'label':"daObjCRVFENCE_IsDelete__FP15daObjCRVFENCE_c",'name':"daObjCRVFENCE_IsDelete__FP15daObjCRVFENCE_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BCFFC8,'size':68,'pad':0,'label':"Create__15daObjCRVFENCE_cFv",'name':"Create__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BD000C,'size':76,'pad':0,'label':"Execute__15daObjCRVFENCE_cFPPA3_A4_f",'name':"Execute__15daObjCRVFENCE_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BD0058,'size':228,'pad':0,'label':"Draw__15daObjCRVFENCE_cFv",'name':"Draw__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BD013C,'size':52,'pad':0,'label':"Delete__15daObjCRVFENCE_cFv",'name':"Delete__15daObjCRVFENCE_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BD0170,'size':8,'pad':0,'label':"func_80BD0170",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BD0178,'size':8,'pad':0,'label':"func_80BD0178",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BD0180,'size':4,'pad':0,'label':"data_80BD0180",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BD0184,'size':4,'pad':0,'label':"data_80BD0184",'name':None,'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BD0188,'size':4,'pad':0,'label':"lit_3685",'name':"@3685",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[7,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BD018C,'size':4,'pad':0,'label':"lit_3761",'name':"@3761",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD0190,'size':4,'pad':0,'label':"lit_3762",'name':"@3762",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD0194,'size':4,'pad':0,'label':"lit_3763",'name':"@3763",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD0198,'size':4,'pad':0,'label':"lit_3764",'name':"@3764",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD019C,'size':4,'pad':0,'label':"lit_3765",'name':"@3765",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01A0,'size':4,'pad':0,'label':"lit_3766",'name':"@3766",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01A4,'size':4,'pad':0,'label':"lit_3825",'name':"@3825",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01A8,'size':4,'pad':0,'label':"lit_3826",'name':"@3826",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01AC,'size':4,'pad':0,'label':"lit_3827",'name':"@3827",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01B0,'size':4,'pad':0,'label':"lit_3828",'name':"@3828",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01B4,'size':4,'pad':0,'label':"lit_3829",'name':"@3829",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01B8,'size':4,'pad':0,'label':"lit_3830",'name':"@3830",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01BC,'size':4,'pad':0,'label':"lit_3831",'name':"@3831",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01C0,'size':4,'pad':0,'label':"lit_3832",'name':"@3832",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01C4,'size':4,'pad':0,'label':"lit_3833",'name':"@3833",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01C8,'size':4,'pad':0,'label':"lit_3845",'name':"@3845",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01CC,'size':4,'pad':0,'label':"lit_3953",'name':"@3953",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01D0,'size':4,'pad':0,'label':"lit_3954",'name':"@3954",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01D4,'size':4,'pad':0,'label':"lit_3955",'name':"@3955",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01D8,'size':4,'pad':0,'label':"lit_3956",'name':"@3956",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01DC,'size':4,'pad':0,'label':"lit_3957",'name':"@3957",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01E0,'size':4,'pad':0,'label':"lit_3958",'name':"@3958",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01E4,'size':4,'pad':0,'label':"lit_3959",'name':"@3959",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01E8,'size':4,'pad':0,'label':"lit_3960",'name':"@3960",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01EC,'size':4,'pad':0,'label':"lit_3975",'name':"@3975",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01F0,'size':4,'pad':0,'label':"lit_3976",'name':"@3976",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01F4,'size':4,'pad':0,'label':"lit_4010",'name':"@4010",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01F8,'size':4,'pad':0,'label':"lit_4119",'name':"@4119",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD01FC,'size':4,'pad':0,'label':"lit_4120",'name':"@4120",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD0200,'size':4,'pad':0,'label':"lit_4121",'name':"@4121",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD0204,'size':4,'pad':0,'label':"lit_4122",'name':"@4122",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD0208,'size':4,'pad':0,'label':"lit_4219",'name':"@4219",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BD020C,'size':83,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BD0260,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BD0264,'size':32,'pad':0,'label':"l_daObjCRVFENCE_Method",'name':"l_daObjCRVFENCE_Method",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BD0284,'size':48,'pad':0,'label':"g_profile_Obj_CRVFENCE",'name':"g_profile_Obj_CRVFENCE",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BD02B4,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BD02C0,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BD02CC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BD02F0,'size':40,'pad':0,'label':"__vt__15daObjCRVFENCE_c",'name':"__vt__15daObjCRVFENCE_c",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"CheckVec__15daObjCRVFENCE_cFv":3,
	"__dt__4cXyzFv":4,
	"Wall_Check__15daObjCRVFENCE_cF4cXyz4cXyz":5,
	"daObjCRVFENCE_Create__FP10fopAc_ac_c":6,
	"daObjCRVFENCE_Delete__FP15daObjCRVFENCE_c":7,
	"BgRelease__15daObjCRVFENCE_cFv":8,
	"PosSet__15daObjCRVFENCE_cFP4cXyz":9,
	"FenceMove__15daObjCRVFENCE_cFRUcP4cXyzP5csXyzP4cXyzRs":10,
	"BrokenAction__15daObjCRVFENCE_cFv":11,
	"s_obj_sub__FPvPv":12,
	"NormalAction__15daObjCRVFENCE_cFv":13,
	"checkViewArea__15daObjCRVFENCE_cFP4cXyz":14,
	"Action__15daObjCRVFENCE_cFv":15,
	"setBaseMtx__15daObjCRVFENCE_cFv":16,
	"daObjCRVFENCE_Draw__FP15daObjCRVFENCE_c":17,
	"daObjCRVFENCE_Execute__FP15daObjCRVFENCE_c":18,
	"CreateHeap__15daObjCRVFENCE_cFv":19,
	"create__15daObjCRVFENCE_cFv":20,
	"__dt__8dCcD_SphFv":21,
	"__ct__8dCcD_SphFv":22,
	"__dt__8cM3dGSphFv":23,
	"__dt__8cM3dGAabFv":24,
	"__dt__12dBgS_ObjAcchFv":25,
	"__ct__4cXyzFv":26,
	"daObjCRVFENCE_IsDelete__FP15daObjCRVFENCE_c":27,
	"Create__15daObjCRVFENCE_cFv":28,
	"Execute__15daObjCRVFENCE_cFPPA3_A4_f":29,
	"Draw__15daObjCRVFENCE_cFv":30,
	"Delete__15daObjCRVFENCE_cFv":31,
	"func_80BD0170":32,
	"func_80BD0178":33,
	"data_80BD0180":34,
	"data_80BD0184":35,
	"lit_3685":36,
	"lit_3761":37,
	"lit_3762":38,
	"lit_3763":39,
	"lit_3764":40,
	"lit_3765":41,
	"lit_3766":42,
	"lit_3825":43,
	"lit_3826":44,
	"lit_3827":45,
	"lit_3828":46,
	"lit_3829":47,
	"lit_3830":48,
	"lit_3831":49,
	"lit_3832":50,
	"lit_3833":51,
	"lit_3845":52,
	"lit_3953":53,
	"lit_3954":54,
	"lit_3955":55,
	"lit_3956":56,
	"lit_3957":57,
	"lit_3958":58,
	"lit_3959":59,
	"lit_3960":60,
	"lit_3975":61,
	"lit_3976":62,
	"lit_4010":63,
	"lit_4119":64,
	"lit_4120":65,
	"lit_4121":66,
	"lit_4122":67,
	"lit_4219":68,
	"stringBase0":69,
	"l_arcName":70,
	"l_daObjCRVFENCE_Method":71,
	"g_profile_Obj_CRVFENCE":72,
	"__vt__8cM3dGAab":73,
	"__vt__8cM3dGSph":74,
	"__vt__12dBgS_ObjAcch":75,
	"__vt__15daObjCRVFENCE_c":76,
}

