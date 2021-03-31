#
# Generate By: dol2asm
# Module: 248
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_yd",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_yd",
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
	{'addr':0x807F2B40,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2B6C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2B98,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2BB8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2BD4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2C2C,'size':76,'pad':0,'label':"__ct__12daE_YD_HIO_cFv",'name':"__ct__12daE_YD_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2C78,'size':424,'pad':0,'label':"yd_disappear__FP10e_yd_class",'name':"yd_disappear__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2E20,'size':172,'pad':0,'label':"anm_init__FP10e_yd_classifUcf",'name':"anm_init__FP10e_yd_classifUcf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2ECC,'size':216,'pad':0,'label':"leaf_anm_init__FP10e_yd_classifUcf",'name':"leaf_anm_init__FP10e_yd_classifUcf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F2FA4,'size':452,'pad':0,'label':"daE_YD_Draw__FP10e_yd_class",'name':"daE_YD_Draw__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F3168,'size':88,'pad':0,'label':"pl_check__FP10e_yd_classf",'name':"pl_check__FP10e_yd_classf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F31C0,'size':620,'pad':0,'label':"damage_check__FP10e_yd_class",'name':"damage_check__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F342C,'size':856,'pad':0,'label':"e_yd_stay__FP10e_yd_class",'name':"e_yd_stay__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F3784,'size':704,'pad':0,'label':"e_yd_appear__FP10e_yd_class",'name':"e_yd_appear__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F3A44,'size':460,'pad':0,'label':"e_yd_appear_v__FP10e_yd_class",'name':"e_yd_appear_v__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F3C10,'size':1352,'pad':0,'label':"e_yd_wait__FP10e_yd_class",'name':"e_yd_wait__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F4158,'size':2656,'pad':0,'label':"e_yd_attack__FP10e_yd_class",'name':"e_yd_attack__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F4BB8,'size':768,'pad':0,'label':"e_yd_chance__FP10e_yd_class",'name':"e_yd_chance__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F4EB8,'size':600,'pad':0,'label':"e_yd_s_damage__FP10e_yd_class",'name':"e_yd_s_damage__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F5110,'size':992,'pad':0,'label':"e_yd_damage__FP10e_yd_class",'name':"e_yd_damage__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F54F0,'size':816,'pad':0,'label':"kuki_control1__FP10e_yd_class",'name':"kuki_control1__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F5820,'size':372,'pad':0,'label':"kuki_control2__FP10e_yd_class",'name':"kuki_control2__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F5994,'size':220,'pad':0,'label':"kuki_control3__FP10e_yd_class",'name':"kuki_control3__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F5A70,'size':236,'pad':0,'label':"kuki_ha_set__FP10e_yd_class",'name':"kuki_ha_set__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F5B5C,'size':1504,'pad':0,'label':"action__FP10e_yd_class",'name':"action__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F613C,'size':932,'pad':0,'label':"eff_set__FP10e_yd_class",'name':"eff_set__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F64E0,'size':360,'pad':0,'label':"anm_se_set__FP10e_yd_class",'name':"anm_se_set__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F6648,'size':772,'pad':0,'label':"daE_YD_Execute__FP10e_yd_class",'name':"daE_YD_Execute__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F694C,'size':8,'pad':0,'label':"daE_YD_IsDelete__FP10e_yd_class",'name':"daE_YD_IsDelete__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x807F6954,'size':104,'pad':0,'label':"daE_YD_Delete__FP10e_yd_class",'name':"daE_YD_Delete__FP10e_yd_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F69BC,'size':652,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F6C48,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F6C90,'size':1232,'pad':0,'label':"daE_YD_Create__FP10fopAc_ac_c",'name':"daE_YD_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F7160,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F71D0,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F7240,'size':132,'pad':0,'label':"__ct__8dCcD_SphFv",'name':"__ct__8dCcD_SphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F72C4,'size':204,'pad':0,'label':"__dt__8dCcD_SphFv",'name':"__dt__8dCcD_SphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F7390,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F73D8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F7420,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F747C,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x807F7480,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x807F7484,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F74CC,'size':72,'pad':0,'label':"__dt__12daE_YD_HIO_cFv",'name':"__dt__12daE_YD_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F7514,'size':60,'pad':0,'label':"__sinit_d_a_e_yd_cpp",'name':"__sinit_d_a_e_yd_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x807F7550,'size':8,'pad':0,'label':"func_807F7550",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F7558,'size':8,'pad':0,'label':"func_807F7558",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F7560,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F7974,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F79B0,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807F79EC,'size':8,'pad':0,'label':"data_807F79EC",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807F79F4,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807F79F8,'size':8,'pad':0,'label':"pad_807F79F8",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807F7A00,'size':4,'pad':0,'label':"lit_3788",'name':"@3788",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[17,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A04,'size':4,'pad':0,'label':"lit_3789",'name':"@3789",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7A08,'size':4,'pad':4,'label':"lit_3790",'name':"@3790",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A10,'size':8,'pad':0,'label':"lit_3791",'name':"@3791",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7A18,'size':8,'pad':0,'label':"lit_3792",'name':"@3792",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7A20,'size':8,'pad':0,'label':"lit_3793",'name':"@3793",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7A28,'size':4,'pad':0,'label':"lit_3794",'name':"@3794",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A2C,'size':4,'pad':0,'label':"lit_3809",'name':"@3809",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A30,'size':4,'pad':0,'label':"lit_3870",'name':"@3870",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A34,'size':4,'pad':0,'label':"lit_3871",'name':"@3871",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A38,'size':4,'pad':0,'label':"lit_3949",'name':"@3949",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A3C,'size':4,'pad':0,'label':"lit_3950",'name':"@3950",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A40,'size':4,'pad':0,'label':"lit_4075",'name':"@4075",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A44,'size':4,'pad':0,'label':"lit_4076",'name':"@4076",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A48,'size':4,'pad':0,'label':"lit_4077",'name':"@4077",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A4C,'size':4,'pad':0,'label':"lit_4078",'name':"@4078",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A50,'size':4,'pad':0,'label':"lit_4079",'name':"@4079",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A54,'size':4,'pad':0,'label':"lit_4080",'name':"@4080",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A58,'size':4,'pad':0,'label':"lit_4081",'name':"@4081",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A5C,'size':4,'pad':0,'label':"lit_4082",'name':"@4082",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A60,'size':4,'pad':0,'label':"lit_4083",'name':"@4083",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A64,'size':4,'pad':0,'label':"lit_4084",'name':"@4084",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A68,'size':4,'pad':0,'label':"lit_4118",'name':"@4118",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A6C,'size':4,'pad':0,'label':"lit_4148",'name':"@4148",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A70,'size':4,'pad':0,'label':"lit_4149",'name':"@4149",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A74,'size':4,'pad':0,'label':"lit_4150",'name':"@4150",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A78,'size':4,'pad':0,'label':"lit_4151",'name':"@4151",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A7C,'size':4,'pad':0,'label':"lit_4152",'name':"@4152",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A80,'size':4,'pad':0,'label':"lit_4153",'name':"@4153",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A84,'size':4,'pad':0,'label':"lit_4246",'name':"@4246",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A88,'size':4,'pad':0,'label':"lit_4247",'name':"@4247",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A8C,'size':4,'pad':0,'label':"lit_4248",'name':"@4248",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A90,'size':4,'pad':0,'label':"lit_4249",'name':"@4249",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A94,'size':4,'pad':0,'label':"lit_4250",'name':"@4250",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7A98,'size':8,'pad':0,'label':"lit_4252",'name':"@4252",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7AA0,'size':4,'pad':0,'label':"lit_4445",'name':"@4445",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AA4,'size':4,'pad':0,'label':"lit_4446",'name':"@4446",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AA8,'size':4,'pad':0,'label':"lit_4447",'name':"@4447",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AAC,'size':4,'pad':0,'label':"lit_4448",'name':"@4448",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AB0,'size':4,'pad':0,'label':"lit_4449",'name':"@4449",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AB4,'size':4,'pad':0,'label':"lit_4450",'name':"@4450",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AB8,'size':4,'pad':0,'label':"lit_4451",'name':"@4451",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7ABC,'size':4,'pad':0,'label':"lit_4504",'name':"@4504",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AC0,'size':4,'pad':0,'label':"lit_4505",'name':"@4505",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AC4,'size':4,'pad':0,'label':"lit_4550",'name':"@4550",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AC8,'size':4,'pad':0,'label':"lit_4551",'name':"@4551",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7ACC,'size':4,'pad':0,'label':"lit_4628",'name':"@4628",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AD0,'size':4,'pad':0,'label':"lit_4629",'name':"@4629",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AD4,'size':4,'pad':0,'label':"lit_4630",'name':"@4630",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AD8,'size':4,'pad':0,'label':"lit_4709",'name':"@4709",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7ADC,'size':4,'pad':0,'label':"lit_4710",'name':"@4710",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AE0,'size':4,'pad':0,'label':"lit_4765",'name':"@4765",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AE4,'size':4,'pad':0,'label':"lit_4861",'name':"@4861",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AE8,'size':4,'pad':0,'label':"lit_4862",'name':"@4862",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AEC,'size':4,'pad':0,'label':"lit_4863",'name':"@4863",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AF0,'size':4,'pad':0,'label':"lit_4864",'name':"@4864",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AF4,'size':4,'pad':0,'label':"lit_5003",'name':"@5003",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AF8,'size':4,'pad':0,'label':"lit_5004",'name':"@5004",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7AFC,'size':4,'pad':0,'label':"lit_5005",'name':"@5005",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B00,'size':4,'pad':0,'label':"lit_5006",'name':"@5006",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B04,'size':4,'pad':0,'label':"lit_5167",'name':"@5167",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B08,'size':4,'pad':0,'label':"lit_5168",'name':"@5168",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B0C,'size':4,'pad':0,'label':"lit_5238",'name':"@5238",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B10,'size':4,'pad':0,'label':"lit_5468",'name':"@5468",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B14,'size':4,'pad':0,'label':"lit_5469",'name':"@5469",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B18,'size':4,'pad':0,'label':"lit_5470",'name':"@5470",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B1C,'size':4,'pad':0,'label':"lit_5471",'name':"@5471",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B20,'size':4,'pad':4,'label':"lit_5472",'name':"@5472",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B28,'size':8,'pad':0,'label':"lit_5474",'name':"@5474",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7B30,'size':5,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x807F7B38,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7B44,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x807F7B58,'size':8,'pad':0,'label':"data_807F7B58",'name':"e_prim$3667",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7B60,'size':8,'pad':0,'label':"data_807F7B60",'name':"e_env$3668",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7B68,'size':6,'pad':2,'label':"data_807F7B68",'name':"eff_id$3676",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7B70,'size':4,'pad':0,'label':"l_color",'name':"l_color$3890",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7B74,'size':22,'pad':2,'label':"pow_xa",'name':"pow_xa$4634",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7B8C,'size':36,'pad':0,'label':"lit_5007",'name':"@5007",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807F7BB0,'size':6,'pad':2,'label':"p_name",'name':"p_name$5015",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7BB8,'size':12,'pad':0,'label':"p_idx",'name':"p_idx$5016",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7BC4,'size':64,'pad':0,'label':"data_807F7BC4",'name':"cc_sph_src$5344",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7C04,'size':64,'pad':0,'label':"data_807F7C04",'name':"at_sph_src$5345",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7C44,'size':64,'pad':0,'label':"data_807F7C44",'name':"kuki_sph_src$5346",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7C84,'size':32,'pad':0,'label':"l_daE_YD_Method",'name':"l_daE_YD_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807F7CA4,'size':48,'pad':0,'label':"g_profile_E_YD",'name':"g_profile_E_YD",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x807F7CD4,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7CE0,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7CEC,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7CF8,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7D1C,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7D28,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7D34,'size':20,'pad':0,'label':"__vt__18mDoExt_3DlineMat_c",'name':"__vt__18mDoExt_3DlineMat_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7D48,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7D54,'size':12,'pad':0,'label':"__vt__12daE_YD_HIO_c",'name':"__vt__12daE_YD_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x807F7D60,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7D68,'size':4,'pad':0,'label':"data_807F7D68",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7D6C,'size':12,'pad':0,'label':"lit_3804",'name':"@3804",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807F7D78,'size':28,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[9,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_YD_HIO_cFv":5,
	"yd_disappear__FP10e_yd_class":6,
	"anm_init__FP10e_yd_classifUcf":7,
	"leaf_anm_init__FP10e_yd_classifUcf":8,
	"daE_YD_Draw__FP10e_yd_class":9,
	"pl_check__FP10e_yd_classf":10,
	"damage_check__FP10e_yd_class":11,
	"e_yd_stay__FP10e_yd_class":12,
	"e_yd_appear__FP10e_yd_class":13,
	"e_yd_appear_v__FP10e_yd_class":14,
	"e_yd_wait__FP10e_yd_class":15,
	"e_yd_attack__FP10e_yd_class":16,
	"e_yd_chance__FP10e_yd_class":17,
	"e_yd_s_damage__FP10e_yd_class":18,
	"e_yd_damage__FP10e_yd_class":19,
	"kuki_control1__FP10e_yd_class":20,
	"kuki_control2__FP10e_yd_class":21,
	"kuki_control3__FP10e_yd_class":22,
	"kuki_ha_set__FP10e_yd_class":23,
	"action__FP10e_yd_class":24,
	"eff_set__FP10e_yd_class":25,
	"anm_se_set__FP10e_yd_class":26,
	"daE_YD_Execute__FP10e_yd_class":27,
	"daE_YD_IsDelete__FP10e_yd_class":28,
	"daE_YD_Delete__FP10e_yd_class":29,
	"useHeapInit__FP10fopAc_ac_c":30,
	"__dt__12J3DFrameCtrlFv":31,
	"daE_YD_Create__FP10fopAc_ac_c":32,
	"__dt__12dBgS_ObjAcchFv":33,
	"__dt__12dBgS_AcchCirFv":34,
	"__ct__8dCcD_SphFv":35,
	"__dt__8dCcD_SphFv":36,
	"__dt__8cM3dGSphFv":37,
	"__dt__8cM3dGAabFv":38,
	"__dt__10dCcD_GSttsFv":39,
	"__ct__5csXyzFv":40,
	"__ct__4cXyzFv":41,
	"__dt__10cCcD_GSttsFv":42,
	"__dt__12daE_YD_HIO_cFv":43,
	"__sinit_d_a_e_yd_cpp":44,
	"func_807F7550":45,
	"func_807F7558":46,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":47,
	"__dt__5csXyzFv":48,
	"__dt__4cXyzFv":49,
	"data_807F79EC":50,
	"__destroy_global_chain_reference":51,
	"pad_807F79F8":52,
	"lit_3788":53,
	"lit_3789":54,
	"lit_3790":55,
	"lit_3791":56,
	"lit_3792":57,
	"lit_3793":58,
	"lit_3794":59,
	"lit_3809":60,
	"lit_3870":61,
	"lit_3871":62,
	"lit_3949":63,
	"lit_3950":64,
	"lit_4075":65,
	"lit_4076":66,
	"lit_4077":67,
	"lit_4078":68,
	"lit_4079":69,
	"lit_4080":70,
	"lit_4081":71,
	"lit_4082":72,
	"lit_4083":73,
	"lit_4084":74,
	"lit_4118":75,
	"lit_4148":76,
	"lit_4149":77,
	"lit_4150":78,
	"lit_4151":79,
	"lit_4152":80,
	"lit_4153":81,
	"lit_4246":82,
	"lit_4247":83,
	"lit_4248":84,
	"lit_4249":85,
	"lit_4250":86,
	"lit_4252":87,
	"lit_4445":88,
	"lit_4446":89,
	"lit_4447":90,
	"lit_4448":91,
	"lit_4449":92,
	"lit_4450":93,
	"lit_4451":94,
	"lit_4504":95,
	"lit_4505":96,
	"lit_4550":97,
	"lit_4551":98,
	"lit_4628":99,
	"lit_4629":100,
	"lit_4630":101,
	"lit_4709":102,
	"lit_4710":103,
	"lit_4765":104,
	"lit_4861":105,
	"lit_4862":106,
	"lit_4863":107,
	"lit_4864":108,
	"lit_5003":109,
	"lit_5004":110,
	"lit_5005":111,
	"lit_5006":112,
	"lit_5167":113,
	"lit_5168":114,
	"lit_5238":115,
	"lit_5468":116,
	"lit_5469":117,
	"lit_5470":118,
	"lit_5471":119,
	"lit_5472":120,
	"lit_5474":121,
	"stringBase0":122,
	"cNullVec__6Z2Calc":123,
	"lit_1787":124,
	"data_807F7B58":125,
	"data_807F7B60":126,
	"data_807F7B68":127,
	"l_color":128,
	"pow_xa":129,
	"lit_5007":130,
	"p_name":131,
	"p_idx":132,
	"data_807F7BC4":133,
	"data_807F7C04":134,
	"data_807F7C44":135,
	"l_daE_YD_Method":136,
	"g_profile_E_YD":137,
	"__vt__10cCcD_GStts":138,
	"__vt__10dCcD_GStts":139,
	"__vt__12dBgS_AcchCir":140,
	"__vt__12dBgS_ObjAcch":141,
	"__vt__8cM3dGSph":142,
	"__vt__8cM3dGAab":143,
	"__vt__18mDoExt_3DlineMat_c":144,
	"__vt__12J3DFrameCtrl":145,
	"__vt__12daE_YD_HIO_c":146,
	"__global_destructor_chain":147,
	"data_807F7D68":148,
	"lit_3804":149,
	"l_HIO":150,
}

