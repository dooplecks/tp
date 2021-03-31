#
# Generate By: dol2asm
# Module: 215
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_nz",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_nz",
	"global_destructor_chain",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".rodata",
	".data",
	".bss",
	".dtors",
]

# Symbols
SYMBOLS = [
	{'addr':0x80729900,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072992C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80729958,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80729978,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,2,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80729994,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807299EC,'size':80,'pad':0,'label':"__ct__12daE_NZ_HIO_cFv",'name':"__ct__12daE_NZ_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80729A3C,'size':172,'pad':0,'label':"anm_init__FP10e_nz_classifUcf",'name':"anm_init__FP10e_nz_classifUcf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80729AE8,'size':60,'pad':0,'label':"pl_check__FP10e_nz_classf",'name':"pl_check__FP10e_nz_classf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80729B24,'size':256,'pad':0,'label':"daE_NZ_Draw__FP10e_nz_class",'name':"daE_NZ_Draw__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80729C24,'size':1056,'pad':0,'label':"e_nz_normal__FP10e_nz_class",'name':"e_nz_normal__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072A044,'size':1596,'pad':0,'label':"e_nz_attack__FP10e_nz_class",'name':"e_nz_attack__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072A680,'size':324,'pad':0,'label':"e_nz_stick__FP10e_nz_class",'name':"e_nz_stick__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072A7C4,'size':264,'pad':0,'label':"damage_check__FP10e_nz_class",'name':"damage_check__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072A8CC,'size':452,'pad':0,'label':"e_nz_damage__FP10e_nz_class",'name':"e_nz_damage__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072AA90,'size':216,'pad':0,'label':"getPolyColor__FR13cBgS_PolyInfoiP8_GXColorP8_GXColorPUcPf",'name':"getPolyColor__FR13cBgS_PolyInfoiP8_GXColorP8_GXColorPUcPf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072AB68,'size':1332,'pad':0,'label':"action__FP10e_nz_class",'name':"action__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072B09C,'size':1336,'pad':0,'label':"daE_NZ_Execute__FP10e_nz_class",'name':"daE_NZ_Execute__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072B5D4,'size':8,'pad':0,'label':"daE_NZ_IsDelete__FP10e_nz_class",'name':"daE_NZ_IsDelete__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x8072B5DC,'size':164,'pad':0,'label':"daE_NZ_Delete__FP10e_nz_class",'name':"daE_NZ_Delete__FP10e_nz_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072B680,'size':324,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072B7C4,'size':688,'pad':0,'label':"daE_NZ_Create__FP10fopAc_ac_c",'name':"daE_NZ_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BA74,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BABC,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BB04,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BB60,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BBD0,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BC40,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BC88,'size':72,'pad':0,'label':"__dt__12daE_NZ_HIO_cFv",'name':"__dt__12daE_NZ_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BCD0,'size':60,'pad':0,'label':"__sinit_d_a_e_nz_cpp",'name':"__sinit_d_a_e_nz_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x8072BD0C,'size':8,'pad':0,'label':"func_8072BD0C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BD14,'size':8,'pad':0,'label':"func_8072BD14",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072BD1C,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072C130,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072C16C,'size':8,'pad':0,'label':"data_8072C16C",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8072C174,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8072C178,'size':8,'pad':0,'label':"pad_8072C178",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8072C180,'size':4,'pad':0,'label':"lit_3789",'name':"@3789",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[8,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C184,'size':4,'pad':0,'label':"lit_3790",'name':"@3790",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C188,'size':4,'pad':4,'label':"lit_3791",'name':"@3791",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C190,'size':8,'pad':0,'label':"lit_3792",'name':"@3792",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C198,'size':8,'pad':0,'label':"lit_3793",'name':"@3793",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C1A0,'size':8,'pad':0,'label':"lit_3794",'name':"@3794",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C1A8,'size':4,'pad':0,'label':"lit_3795",'name':"@3795",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1AC,'size':4,'pad':0,'label':"lit_3810",'name':"@3810",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1B0,'size':4,'pad':0,'label':"lit_3811",'name':"@3811",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1B4,'size':4,'pad':0,'label':"lit_3812",'name':"@3812",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1B8,'size':4,'pad':0,'label':"lit_3813",'name':"@3813",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1BC,'size':4,'pad':0,'label':"lit_3814",'name':"@3814",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1C0,'size':4,'pad':0,'label':"lit_3828",'name':"@3828",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1C4,'size':4,'pad':0,'label':"lit_3935",'name':"@3935",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1C8,'size':4,'pad':0,'label':"lit_3936",'name':"@3936",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1CC,'size':4,'pad':0,'label':"lit_3937",'name':"@3937",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1D0,'size':4,'pad':0,'label':"lit_3938",'name':"@3938",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1D4,'size':4,'pad':0,'label':"lit_3939",'name':"@3939",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1D8,'size':4,'pad':0,'label':"lit_3940",'name':"@3940",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1DC,'size':4,'pad':0,'label':"lit_3941",'name':"@3941",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1E0,'size':4,'pad':0,'label':"lit_3942",'name':"@3942",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1E4,'size':4,'pad':0,'label':"lit_3943",'name':"@3943",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1E8,'size':4,'pad':0,'label':"lit_3944",'name':"@3944",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1EC,'size':4,'pad':0,'label':"lit_3945",'name':"@3945",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1F0,'size':4,'pad':0,'label':"lit_3946",'name':"@3946",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1F4,'size':4,'pad':0,'label':"lit_3947",'name':"@3947",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1F8,'size':4,'pad':0,'label':"lit_3948",'name':"@3948",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C1FC,'size':4,'pad':0,'label':"lit_4088",'name':"@4088",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C200,'size':4,'pad':0,'label':"lit_4089",'name':"@4089",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C204,'size':4,'pad':0,'label':"lit_4180",'name':"@4180",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C208,'size':4,'pad':0,'label':"lit_4181",'name':"@4181",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C20C,'size':4,'pad':0,'label':"lit_4182",'name':"@4182",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C210,'size':4,'pad':0,'label':"lit_4318",'name':"@4318",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C214,'size':4,'pad':0,'label':"lit_4319",'name':"@4319",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C218,'size':4,'pad':0,'label':"lit_4320",'name':"@4320",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C21C,'size':4,'pad':0,'label':"lit_4321",'name':"@4321",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C220,'size':4,'pad':0,'label':"lit_4444",'name':"@4444",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C224,'size':4,'pad':0,'label':"lit_4445",'name':"@4445",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C228,'size':4,'pad':0,'label':"lit_4446",'name':"@4446",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C22C,'size':4,'pad':0,'label':"lit_4447",'name':"@4447",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C230,'size':4,'pad':4,'label':"lit_4448",'name':"@4448",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C238,'size':8,'pad':0,'label':"lit_4450",'name':"@4450",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C240,'size':10,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x8072C24C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C258,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8072C26C,'size':8,'pad':0,'label':"data_8072C26C",'name':"e_prim$3668",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C274,'size':8,'pad':0,'label':"data_8072C274",'name':"e_env$3669",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C27C,'size':6,'pad':2,'label':"data_8072C27C",'name':"eff_id$3677",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C284,'size':8,'pad':0,'label':"stick_bit",'name':"stick_bit",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C28C,'size':80,'pad':0,'label':"stick_d",'name':"stick_d",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C2DC,'size':8,'pad':0,'label':"eff_id_4227",'name':"eff_id$4227",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C2E4,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$4510",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C324,'size':32,'pad':0,'label':"l_daE_NZ_Method",'name':"l_daE_NZ_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8072C344,'size':48,'pad':0,'label':"g_profile_E_NZ",'name':"g_profile_E_NZ",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8072C374,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8072C380,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8072C38C,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8072C398,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8072C3A4,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8072C3B0,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8072C3D4,'size':12,'pad':0,'label':"__vt__12daE_NZ_HIO_c",'name':"__vt__12daE_NZ_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8072C3E0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C3E8,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C3EC,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C3F0,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C3F4,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C3F8,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C3FC,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C400,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C404,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C408,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C40C,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C410,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C414,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C418,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C41C,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C420,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C424,'size':4,'pad':0,'label':"struct_8072C424",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x8072C428,'size':12,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C434,'size':32,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C454,'size':4,'pad':0,'label':"data_8072C454",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C458,'size':12,'pad':4,'label':"lit_4220",'name':"@4220",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C468,'size':12,'pad':0,'label':"data_8072C468",'name':"sc$4219",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C474,'size':4,'pad':0,'label':"data_8072C474",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C478,'size':4,'pad':0,'label':"data_8072C478",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C47C,'size':4,'pad':0,'label':"data_8072C47C",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C480,'size':4,'pad':0,'label':"data_8072C480",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C484,'size':4,'pad':0,'label':"data_8072C484",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C488,'size':4,'pad':0,'label':"data_8072C488",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C48C,'size':4,'pad':0,'label':"data_8072C48C",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C490,'size':4,'pad':0,'label':"data_8072C490",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C494,'size':4,'pad':0,'label':"data_8072C494",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C498,'size':4,'pad':0,'label':"data_8072C498",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C49C,'size':4,'pad':0,'label':"data_8072C49C",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4A0,'size':4,'pad':0,'label':"data_8072C4A0",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4A4,'size':4,'pad':0,'label':"data_8072C4A4",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4A8,'size':4,'pad':0,'label':"data_8072C4A8",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4AC,'size':4,'pad':0,'label':"data_8072C4AC",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4B0,'size':4,'pad':0,'label':"data_8072C4B0",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4B4,'size':4,'pad':0,'label':"data_8072C4B4",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4B8,'size':4,'pad':0,'label':"data_8072C4B8",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4BC,'size':4,'pad':0,'label':"data_8072C4BC",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4C0,'size':4,'pad':0,'label':"data_8072C4C0",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4C4,'size':4,'pad':0,'label':"data_8072C4C4",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4C8,'size':4,'pad':0,'label':"data_8072C4C8",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4CC,'size':4,'pad':0,'label':"data_8072C4CC",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4D0,'size':4,'pad':0,'label':"data_8072C4D0",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072C4D4,'size':4,'pad':0,'label':"data_8072C4D4",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_NZ_HIO_cFv":5,
	"anm_init__FP10e_nz_classifUcf":6,
	"pl_check__FP10e_nz_classf":7,
	"daE_NZ_Draw__FP10e_nz_class":8,
	"e_nz_normal__FP10e_nz_class":9,
	"e_nz_attack__FP10e_nz_class":10,
	"e_nz_stick__FP10e_nz_class":11,
	"damage_check__FP10e_nz_class":12,
	"e_nz_damage__FP10e_nz_class":13,
	"getPolyColor__FR13cBgS_PolyInfoiP8_GXColorP8_GXColorPUcPf":14,
	"action__FP10e_nz_class":15,
	"daE_NZ_Execute__FP10e_nz_class":16,
	"daE_NZ_IsDelete__FP10e_nz_class":17,
	"daE_NZ_Delete__FP10e_nz_class":18,
	"useHeapInit__FP10fopAc_ac_c":19,
	"daE_NZ_Create__FP10fopAc_ac_c":20,
	"__dt__8cM3dGSphFv":21,
	"__dt__8cM3dGAabFv":22,
	"__dt__10dCcD_GSttsFv":23,
	"__dt__12dBgS_ObjAcchFv":24,
	"__dt__12dBgS_AcchCirFv":25,
	"__dt__10cCcD_GSttsFv":26,
	"__dt__12daE_NZ_HIO_cFv":27,
	"__sinit_d_a_e_nz_cpp":28,
	"func_8072BD0C":29,
	"func_8072BD14":30,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":31,
	"__dt__4cXyzFv":32,
	"data_8072C16C":33,
	"__destroy_global_chain_reference":34,
	"pad_8072C178":35,
	"lit_3789":36,
	"lit_3790":37,
	"lit_3791":38,
	"lit_3792":39,
	"lit_3793":40,
	"lit_3794":41,
	"lit_3795":42,
	"lit_3810":43,
	"lit_3811":44,
	"lit_3812":45,
	"lit_3813":46,
	"lit_3814":47,
	"lit_3828":48,
	"lit_3935":49,
	"lit_3936":50,
	"lit_3937":51,
	"lit_3938":52,
	"lit_3939":53,
	"lit_3940":54,
	"lit_3941":55,
	"lit_3942":56,
	"lit_3943":57,
	"lit_3944":58,
	"lit_3945":59,
	"lit_3946":60,
	"lit_3947":61,
	"lit_3948":62,
	"lit_4088":63,
	"lit_4089":64,
	"lit_4180":65,
	"lit_4181":66,
	"lit_4182":67,
	"lit_4318":68,
	"lit_4319":69,
	"lit_4320":70,
	"lit_4321":71,
	"lit_4444":72,
	"lit_4445":73,
	"lit_4446":74,
	"lit_4447":75,
	"lit_4448":76,
	"lit_4450":77,
	"stringBase0":78,
	"cNullVec__6Z2Calc":79,
	"lit_1787":80,
	"data_8072C26C":81,
	"data_8072C274":82,
	"data_8072C27C":83,
	"stick_bit":84,
	"stick_d":85,
	"eff_id_4227":86,
	"cc_sph_src":87,
	"l_daE_NZ_Method":88,
	"g_profile_E_NZ":89,
	"__vt__12dBgS_AcchCir":90,
	"__vt__10cCcD_GStts":91,
	"__vt__10dCcD_GStts":92,
	"__vt__8cM3dGSph":93,
	"__vt__8cM3dGAab":94,
	"__vt__12dBgS_ObjAcch":95,
	"__vt__12daE_NZ_HIO_c":96,
	"__global_destructor_chain":97,
	"lit_1109":98,
	"lit_1107":99,
	"lit_1105":100,
	"lit_1104":101,
	"lit_1099":102,
	"lit_1097":103,
	"lit_1095":104,
	"lit_1094":105,
	"lit_1057":106,
	"lit_1055":107,
	"lit_1053":108,
	"lit_1052":109,
	"lit_1014":110,
	"lit_1012":111,
	"lit_1010":112,
	"struct_8072C424":113,
	"lit_3805":114,
	"l_HIO":115,
	"data_8072C454":116,
	"lit_4220":117,
	"data_8072C468":118,
	"data_8072C474":119,
	"data_8072C478":120,
	"data_8072C47C":121,
	"data_8072C480":122,
	"data_8072C484":123,
	"data_8072C488":124,
	"data_8072C48C":125,
	"data_8072C490":126,
	"data_8072C494":127,
	"data_8072C498":128,
	"data_8072C49C":129,
	"data_8072C4A0":130,
	"data_8072C4A4":131,
	"data_8072C4A8":132,
	"data_8072C4AC":133,
	"data_8072C4B0":134,
	"data_8072C4B4":135,
	"data_8072C4B8":136,
	"data_8072C4BC":137,
	"data_8072C4C0":138,
	"data_8072C4C4":139,
	"data_8072C4C8":140,
	"data_8072C4CC":141,
	"data_8072C4D0":142,
	"data_8072C4D4":143,
}

