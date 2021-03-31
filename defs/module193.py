#
# Generate By: dol2asm
# Module: 193
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_ge",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_ge",
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
	{'addr':0x806C7960,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C798C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C79B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C79D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C79F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7A4C,'size':108,'pad':0,'label':"__ct__12daE_GE_HIO_cFv",'name':"__ct__12daE_GE_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7AB8,'size':164,'pad':0,'label':"bckSet__8daE_GE_cFifUcf",'name':"bckSet__8daE_GE_cFifUcf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[10,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7B5C,'size':92,'pad':0,'label':"bckCheck__8daE_GE_cFi",'name':"bckCheck__8daE_GE_cFi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7BB8,'size':212,'pad':0,'label':"draw__8daE_GE_cFv",'name':"draw__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7C8C,'size':32,'pad':0,'label':"daE_GE_Draw__FP8daE_GE_c",'name':"daE_GE_Draw__FP8daE_GE_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7CAC,'size':268,'pad':0,'label':"checkBeforeBg__8daE_GE_cFif",'name':"checkBeforeBg__8daE_GE_cFif",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7DB8,'size':196,'pad':0,'label':"s_arrow_sub__FPvPv",'name':"s_arrow_sub__FPvPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7E7C,'size':200,'pad':0,'label':"s_ge_surprise__FPvPv",'name':"s_ge_surprise__FPvPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7F44,'size':160,'pad':0,'label':"s_ge_caw__FPvPv",'name':"s_ge_caw__FPvPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C7FE4,'size':132,'pad':0,'label':"s_ge_attack__FPvPv",'name':"s_ge_attack__FPvPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C8068,'size':144,'pad':0,'label':"s_ge_attack2__FPvPv",'name':"s_ge_attack2__FPvPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C80F8,'size':56,'pad':0,'label':"setActionMode__8daE_GE_cFi",'name':"setActionMode__8daE_GE_cFi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[12,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C8130,'size':580,'pad':0,'label':"damage_check__8daE_GE_cFv",'name':"damage_check__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C8374,'size':132,'pad':0,'label':"checkOtherAttacker__8daE_GE_cFv",'name':"checkOtherAttacker__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C83F8,'size':168,'pad':0,'label':"searchNextAttacker__8daE_GE_cFv",'name':"searchNextAttacker__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C84A0,'size':120,'pad':0,'label':"checkCircleSpeedAdd__8daE_GE_cFP4cXyzP4cXyz",'name':"checkCircleSpeedAdd__8daE_GE_cFP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C8518,'size':944,'pad':0,'label':"setAddCalcSpeed__8daE_GE_cFR4cXyzRC4cXyzffff",'name':"setAddCalcSpeed__8daE_GE_cFR4cXyzRC4cXyzffff",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C88C8,'size':248,'pad':0,'label':"calcCircleFly__8daE_GE_cFP4cXyzP4cXyzsfsf",'name':"calcCircleFly__8daE_GE_cFP4cXyzP4cXyzsfsf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C89C0,'size':608,'pad':0,'label':"executeWait__8daE_GE_cFv",'name':"executeWait__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C8C20,'size':1328,'pad':0,'label':"executeFly__8daE_GE_cFv",'name':"executeFly__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C9150,'size':204,'pad':0,'label':"checkAttackPossible__8daE_GE_cFsb",'name':"checkAttackPossible__8daE_GE_cFsb",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C921C,'size':3304,'pad':0,'label':"executeAttack__8daE_GE_cFv",'name':"executeAttack__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806C9F04,'size':288,'pad':0,'label':"setBackAnime__8daE_GE_cFi",'name':"setBackAnime__8daE_GE_cFi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CA024,'size':2576,'pad':0,'label':"executeBack__8daE_GE_cFv",'name':"executeBack__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CAA34,'size':920,'pad':0,'label':"executeDown__8daE_GE_cFv",'name':"executeDown__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CADCC,'size':40,'pad':0,'label':"setSurpriseTime__8daE_GE_cFs",'name':"setSurpriseTime__8daE_GE_cFs",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CADF4,'size':100,'pad':0,'label':"setSurprise__8daE_GE_cFv",'name':"setSurprise__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CAE58,'size':1064,'pad':0,'label':"executeSurprise__8daE_GE_cFv",'name':"executeSurprise__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CB280,'size':112,'pad':0,'label':"setCaw__8daE_GE_cFv",'name':"setCaw__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CB2F0,'size':1036,'pad':0,'label':"executeCaw__8daE_GE_cFv",'name':"executeCaw__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CB6FC,'size':956,'pad':0,'label':"executeWind__8daE_GE_cFv",'name':"executeWind__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CBAB8,'size':384,'pad':0,'label':"executeShield__8daE_GE_cFv",'name':"executeShield__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CBC38,'size':608,'pad':0,'label':"action__8daE_GE_cFv",'name':"action__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CBE98,'size':88,'pad':0,'label':"mtx_set__8daE_GE_cFv",'name':"mtx_set__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CBEF0,'size':376,'pad':0,'label':"cc_set__8daE_GE_cFv",'name':"cc_set__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC068,'size':340,'pad':0,'label':"execute__8daE_GE_cFv",'name':"execute__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC1BC,'size':32,'pad':0,'label':"daE_GE_Execute__FP8daE_GE_c",'name':"daE_GE_Execute__FP8daE_GE_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC1DC,'size':8,'pad':0,'label':"daE_GE_IsDelete__FP8daE_GE_c",'name':"daE_GE_IsDelete__FP8daE_GE_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x806CC1E4,'size':116,'pad':0,'label':"_delete__8daE_GE_cFv",'name':"_delete__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC258,'size':32,'pad':0,'label':"daE_GE_Delete__FP8daE_GE_c",'name':"daE_GE_Delete__FP8daE_GE_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC278,'size':248,'pad':0,'label':"CreateHeap__8daE_GE_cFv",'name':"CreateHeap__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC370,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC390,'size':1172,'pad':0,'label':"create__8daE_GE_cFv",'name':"create__8daE_GE_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC824,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC86C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC8B4,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC910,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC980,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CC9F0,'size':32,'pad':0,'label':"daE_GE_Create__FP8daE_GE_c",'name':"daE_GE_Create__FP8daE_GE_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CCA10,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CCA58,'size':72,'pad':0,'label':"__dt__12daE_GE_HIO_cFv",'name':"__dt__12daE_GE_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CCAA0,'size':296,'pad':0,'label':"__sinit_d_a_e_ge_cpp",'name':"__sinit_d_a_e_ge_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x806CCBC8,'size':8,'pad':0,'label':"func_806CCBC8",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CCBD0,'size':8,'pad':0,'label':"func_806CCBD0",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CCBD8,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806CCFEC,'size':8,'pad':0,'label':"data_806CCFEC",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CCFF4,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CCFF8,'size':8,'pad':0,'label':"pad_806CCFF8",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD000,'size':4,'pad':0,'label':"lit_3904",'name':"@3904",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[18,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD004,'size':4,'pad':0,'label':"lit_3905",'name':"@3905",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD008,'size':4,'pad':4,'label':"lit_3906",'name':"@3906",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD010,'size':8,'pad':0,'label':"lit_3907",'name':"@3907",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD018,'size':8,'pad':0,'label':"lit_3908",'name':"@3908",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD020,'size':8,'pad':0,'label':"lit_3909",'name':"@3909",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD028,'size':4,'pad':0,'label':"lit_3910",'name':"@3910",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD02C,'size':4,'pad':0,'label':"lit_3925",'name':"@3925",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD030,'size':4,'pad':0,'label':"lit_3926",'name':"@3926",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD034,'size':4,'pad':0,'label':"lit_3927",'name':"@3927",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD038,'size':4,'pad':0,'label':"lit_3928",'name':"@3928",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD03C,'size':4,'pad':0,'label':"lit_3929",'name':"@3929",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD040,'size':4,'pad':0,'label':"lit_3930",'name':"@3930",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD044,'size':4,'pad':0,'label':"lit_3931",'name':"@3931",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD048,'size':4,'pad':0,'label':"lit_3932",'name':"@3932",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD04C,'size':4,'pad':0,'label':"lit_3946",'name':"@3946",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD050,'size':4,'pad':0,'label':"lit_3975",'name':"@3975",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD054,'size':4,'pad':0,'label':"lit_4025",'name':"@4025",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD058,'size':4,'pad':0,'label':"lit_4044",'name':"@4044",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD05C,'size':4,'pad':0,'label':"lit_4153",'name':"@4153",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD060,'size':4,'pad':0,'label':"lit_4154",'name':"@4154",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD064,'size':4,'pad':0,'label':"lit_4155",'name':"@4155",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD068,'size':4,'pad':4,'label':"lit_4166",'name':"@4166",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD070,'size':8,'pad':0,'label':"lit_4168",'name':"@4168",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD078,'size':4,'pad':0,'label':"lit_4178",'name':"@4178",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD07C,'size':4,'pad':0,'label':"lit_4290",'name':"@4290",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD080,'size':4,'pad':0,'label':"lit_4304",'name':"@4304",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD084,'size':4,'pad':0,'label':"lit_4355",'name':"@4355",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD088,'size':4,'pad':0,'label':"lit_4356",'name':"@4356",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD08C,'size':4,'pad':0,'label':"lit_4467",'name':"@4467",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD090,'size':4,'pad':0,'label':"lit_4468",'name':"@4468",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD094,'size':4,'pad':0,'label':"lit_4469",'name':"@4469",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD098,'size':4,'pad':0,'label':"lit_4470",'name':"@4470",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD09C,'size':4,'pad':0,'label':"lit_4471",'name':"@4471",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0A0,'size':4,'pad':0,'label':"lit_4472",'name':"@4472",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0A4,'size':4,'pad':0,'label':"lit_4796",'name':"@4796",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0A8,'size':4,'pad':0,'label':"lit_4797",'name':"@4797",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0AC,'size':4,'pad':0,'label':"lit_4798",'name':"@4798",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0B0,'size':4,'pad':0,'label':"lit_4799",'name':"@4799",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0B4,'size':4,'pad':0,'label':"lit_4800",'name':"@4800",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0B8,'size':4,'pad':0,'label':"lit_4801",'name':"@4801",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0BC,'size':4,'pad':0,'label':"lit_4802",'name':"@4802",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0C0,'size':4,'pad':0,'label':"lit_5065",'name':"@5065",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0C4,'size':4,'pad':0,'label':"lit_5066",'name':"@5066",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0C8,'size':4,'pad':0,'label':"lit_5067",'name':"@5067",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0CC,'size':4,'pad':0,'label':"lit_5068",'name':"@5068",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0D0,'size':4,'pad':0,'label':"lit_5069",'name':"@5069",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0D4,'size':4,'pad':0,'label':"lit_5070",'name':"@5070",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0D8,'size':4,'pad':0,'label':"lit_5126",'name':"@5126",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0DC,'size':4,'pad':0,'label':"lit_5127",'name':"@5127",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0E0,'size':4,'pad':0,'label':"lit_5128",'name':"@5128",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0E4,'size':4,'pad':0,'label':"lit_5254",'name':"@5254",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0E8,'size':4,'pad':0,'label':"lit_5255",'name':"@5255",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0EC,'size':4,'pad':0,'label':"lit_5256",'name':"@5256",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0F0,'size':4,'pad':0,'label':"lit_5270",'name':"@5270",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0F4,'size':4,'pad':0,'label':"lit_5483",'name':"@5483",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0F8,'size':4,'pad':0,'label':"lit_5484",'name':"@5484",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD0FC,'size':4,'pad':0,'label':"lit_5506",'name':"@5506",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD100,'size':4,'pad':0,'label':"lit_5605",'name':"@5605",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD104,'size':4,'pad':0,'label':"lit_5842",'name':"@5842",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD108,'size':4,'pad':0,'label':"lit_5843",'name':"@5843",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD10C,'size':10,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x806CD118,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD124,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806CD138,'size':8,'pad':0,'label':"data_806CD138",'name':"e_prim$3783",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD140,'size':8,'pad':0,'label':"data_806CD140",'name':"e_env$3784",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD148,'size':6,'pad':2,'label':"data_806CD148",'name':"eff_id$3792",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD150,'size':44,'pad':0,'label':"lit_5071",'name':"@5071",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD17C,'size':12,'pad':0,'label':"lit_5507",'name':"@5507",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD188,'size':12,'pad':0,'label':"lit_5508",'name':"@5508",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD194,'size':12,'pad':0,'label':"lit_5509",'name':"@5509",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD1A0,'size':12,'pad':0,'label':"lit_5510",'name':"@5510",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD1AC,'size':12,'pad':0,'label':"lit_5511",'name':"@5511",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD1B8,'size':12,'pad':0,'label':"lit_5512",'name':"@5512",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD1C4,'size':12,'pad':0,'label':"lit_5513",'name':"@5513",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD1D0,'size':12,'pad':0,'label':"lit_5514",'name':"@5514",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD1DC,'size':12,'pad':0,'label':"lit_5515",'name':"@5515",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD1E8,'size':108,'pad':0,'label':"l_actionmenu__8daE_GE_c",'name':"l_actionmenu__8daE_GE_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD254,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$5699",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD294,'size':32,'pad':0,'label':"l_daE_GE_Method",'name':"l_daE_GE_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD2B4,'size':48,'pad':0,'label':"g_profile_E_GE",'name':"g_profile_E_GE",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806CD2E4,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806CD2F0,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806CD2FC,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806CD308,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806CD314,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806CD320,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806CD344,'size':12,'pad':0,'label':"__vt__12daE_GE_HIO_c",'name':"__vt__12daE_GE_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806CD350,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD358,'size':4,'pad':0,'label':"data_806CD358",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD35C,'size':12,'pad':0,'label':"lit_3920",'name':"@3920",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD368,'size':52,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[12,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806CD39C,'size':4,'pad':0,'label':"target_count",'name':"target_count",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_GE_HIO_cFv":5,
	"bckSet__8daE_GE_cFifUcf":6,
	"bckCheck__8daE_GE_cFi":7,
	"draw__8daE_GE_cFv":8,
	"daE_GE_Draw__FP8daE_GE_c":9,
	"checkBeforeBg__8daE_GE_cFif":10,
	"s_arrow_sub__FPvPv":11,
	"s_ge_surprise__FPvPv":12,
	"s_ge_caw__FPvPv":13,
	"s_ge_attack__FPvPv":14,
	"s_ge_attack2__FPvPv":15,
	"setActionMode__8daE_GE_cFi":16,
	"damage_check__8daE_GE_cFv":17,
	"checkOtherAttacker__8daE_GE_cFv":18,
	"searchNextAttacker__8daE_GE_cFv":19,
	"checkCircleSpeedAdd__8daE_GE_cFP4cXyzP4cXyz":20,
	"setAddCalcSpeed__8daE_GE_cFR4cXyzRC4cXyzffff":21,
	"calcCircleFly__8daE_GE_cFP4cXyzP4cXyzsfsf":22,
	"executeWait__8daE_GE_cFv":23,
	"executeFly__8daE_GE_cFv":24,
	"checkAttackPossible__8daE_GE_cFsb":25,
	"executeAttack__8daE_GE_cFv":26,
	"setBackAnime__8daE_GE_cFi":27,
	"executeBack__8daE_GE_cFv":28,
	"executeDown__8daE_GE_cFv":29,
	"setSurpriseTime__8daE_GE_cFs":30,
	"setSurprise__8daE_GE_cFv":31,
	"executeSurprise__8daE_GE_cFv":32,
	"setCaw__8daE_GE_cFv":33,
	"executeCaw__8daE_GE_cFv":34,
	"executeWind__8daE_GE_cFv":35,
	"executeShield__8daE_GE_cFv":36,
	"action__8daE_GE_cFv":37,
	"mtx_set__8daE_GE_cFv":38,
	"cc_set__8daE_GE_cFv":39,
	"execute__8daE_GE_cFv":40,
	"daE_GE_Execute__FP8daE_GE_c":41,
	"daE_GE_IsDelete__FP8daE_GE_c":42,
	"_delete__8daE_GE_cFv":43,
	"daE_GE_Delete__FP8daE_GE_c":44,
	"CreateHeap__8daE_GE_cFv":45,
	"useHeapInit__FP10fopAc_ac_c":46,
	"create__8daE_GE_cFv":47,
	"__dt__8cM3dGSphFv":48,
	"__dt__8cM3dGAabFv":49,
	"__dt__10dCcD_GSttsFv":50,
	"__dt__12dBgS_ObjAcchFv":51,
	"__dt__12dBgS_AcchCirFv":52,
	"daE_GE_Create__FP8daE_GE_c":53,
	"__dt__10cCcD_GSttsFv":54,
	"__dt__12daE_GE_HIO_cFv":55,
	"__sinit_d_a_e_ge_cpp":56,
	"func_806CCBC8":57,
	"func_806CCBD0":58,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":59,
	"data_806CCFEC":60,
	"__destroy_global_chain_reference":61,
	"pad_806CCFF8":62,
	"lit_3904":63,
	"lit_3905":64,
	"lit_3906":65,
	"lit_3907":66,
	"lit_3908":67,
	"lit_3909":68,
	"lit_3910":69,
	"lit_3925":70,
	"lit_3926":71,
	"lit_3927":72,
	"lit_3928":73,
	"lit_3929":74,
	"lit_3930":75,
	"lit_3931":76,
	"lit_3932":77,
	"lit_3946":78,
	"lit_3975":79,
	"lit_4025":80,
	"lit_4044":81,
	"lit_4153":82,
	"lit_4154":83,
	"lit_4155":84,
	"lit_4166":85,
	"lit_4168":86,
	"lit_4178":87,
	"lit_4290":88,
	"lit_4304":89,
	"lit_4355":90,
	"lit_4356":91,
	"lit_4467":92,
	"lit_4468":93,
	"lit_4469":94,
	"lit_4470":95,
	"lit_4471":96,
	"lit_4472":97,
	"lit_4796":98,
	"lit_4797":99,
	"lit_4798":100,
	"lit_4799":101,
	"lit_4800":102,
	"lit_4801":103,
	"lit_4802":104,
	"lit_5065":105,
	"lit_5066":106,
	"lit_5067":107,
	"lit_5068":108,
	"lit_5069":109,
	"lit_5070":110,
	"lit_5126":111,
	"lit_5127":112,
	"lit_5128":113,
	"lit_5254":114,
	"lit_5255":115,
	"lit_5256":116,
	"lit_5270":117,
	"lit_5483":118,
	"lit_5484":119,
	"lit_5506":120,
	"lit_5605":121,
	"lit_5842":122,
	"lit_5843":123,
	"stringBase0":124,
	"cNullVec__6Z2Calc":125,
	"lit_1787":126,
	"data_806CD138":127,
	"data_806CD140":128,
	"data_806CD148":129,
	"lit_5071":130,
	"lit_5507":131,
	"lit_5508":132,
	"lit_5509":133,
	"lit_5510":134,
	"lit_5511":135,
	"lit_5512":136,
	"lit_5513":137,
	"lit_5514":138,
	"lit_5515":139,
	"l_actionmenu__8daE_GE_c":140,
	"cc_sph_src":141,
	"l_daE_GE_Method":142,
	"g_profile_E_GE":143,
	"__vt__12dBgS_AcchCir":144,
	"__vt__10cCcD_GStts":145,
	"__vt__10dCcD_GStts":146,
	"__vt__8cM3dGSph":147,
	"__vt__8cM3dGAab":148,
	"__vt__12dBgS_ObjAcch":149,
	"__vt__12daE_GE_HIO_c":150,
	"__global_destructor_chain":151,
	"data_806CD358":152,
	"lit_3920":153,
	"l_HIO":154,
	"target_count":155,
}

