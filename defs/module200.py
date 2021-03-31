#
# Generate By: dol2asm
# Module: 200
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_hp",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_hp",
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
	{'addr':0x806E5D00,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5D2C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5D58,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5D78,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5D94,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5DEC,'size':68,'pad':0,'label':"__ct__12daE_HP_HIO_cFv",'name':"__ct__12daE_HP_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5E30,'size':160,'pad':0,'label':"ctrlJoint__8daE_HP_cFP8J3DJointP8J3DModel",'name':"ctrlJoint__8daE_HP_cFP8J3DJointP8J3DModel",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5ED0,'size':76,'pad':0,'label':"JointCallBack__8daE_HP_cFP8J3DJointi",'name':"JointCallBack__8daE_HP_cFP8J3DJointi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5F1C,'size':176,'pad':0,'label':"LampCtrlJoint__8daE_HP_cFP8J3DJointP8J3DModel",'name':"LampCtrlJoint__8daE_HP_cFP8J3DJointP8J3DModel",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E5FCC,'size':76,'pad':0,'label':"LampJointCallBack__8daE_HP_cFP8J3DJointi",'name':"LampJointCallBack__8daE_HP_cFP8J3DJointi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E6018,'size':1244,'pad':0,'label':"draw__8daE_HP_cFv",'name':"draw__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E64F4,'size':32,'pad':0,'label':"daE_HP_Draw__FP8daE_HP_c",'name':"daE_HP_Draw__FP8daE_HP_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E6514,'size':172,'pad':0,'label':"setBck__8daE_HP_cFiUcff",'name':"setBck__8daE_HP_cFiUcff",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E65C0,'size':12,'pad':0,'label':"setActionMode__8daE_HP_cFii",'name':"setActionMode__8daE_HP_cFii",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[9,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E65CC,'size':368,'pad':0,'label':"mChkDistance__8daE_HP_cFf",'name':"mChkDistance__8daE_HP_cFf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E673C,'size':524,'pad':0,'label':"damage_check__8daE_HP_cFv",'name':"damage_check__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E6948,'size':812,'pad':0,'label':"executeWait__8daE_HP_cFv",'name':"executeWait__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E6C74,'size':612,'pad':0,'label':"executeMove__8daE_HP_cFv",'name':"executeMove__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E6ED8,'size':848,'pad':0,'label':"executeRetMove__8daE_HP_cFv",'name':"executeRetMove__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E7228,'size':844,'pad':0,'label':"executeAttack__8daE_HP_cFv",'name':"executeAttack__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E7574,'size':588,'pad':0,'label':"executeDamage__8daE_HP_cFv",'name':"executeDamage__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E77C0,'size':1748,'pad':0,'label':"executeDown__8daE_HP_cFv",'name':"executeDown__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E7E94,'size':696,'pad':0,'label':"executeDead__8daE_HP_cFv",'name':"executeDead__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E814C,'size':2092,'pad':0,'label':"action__8daE_HP_cFv",'name':"action__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E8978,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E89C0,'size':1056,'pad':0,'label':"mtx_set__8daE_HP_cFv",'name':"mtx_set__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E8DE0,'size':524,'pad':0,'label':"cc_set__8daE_HP_cFv",'name':"cc_set__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E8FEC,'size':388,'pad':0,'label':"execute__8daE_HP_cFv",'name':"execute__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9170,'size':32,'pad':0,'label':"daE_HP_Execute__FP8daE_HP_c",'name':"daE_HP_Execute__FP8daE_HP_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9190,'size':8,'pad':0,'label':"daE_HP_IsDelete__FP8daE_HP_c",'name':"daE_HP_IsDelete__FP8daE_HP_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x806E9198,'size':136,'pad':0,'label':"_delete__8daE_HP_cFv",'name':"_delete__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9220,'size':32,'pad':0,'label':"daE_HP_Delete__FP8daE_HP_c",'name':"daE_HP_Delete__FP8daE_HP_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9240,'size':700,'pad':0,'label':"CreateHeap__8daE_HP_cFv",'name':"CreateHeap__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E94FC,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E951C,'size':996,'pad':0,'label':"create__8daE_HP_cFv",'name':"create__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9900,'size':444,'pad':0,'label':"__ct__8daE_HP_cFv",'name':"__ct__8daE_HP_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9ABC,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9B04,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9B4C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9B94,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9BF0,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9C60,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9CD0,'size':32,'pad':0,'label':"daE_HP_Create__FP8daE_HP_c",'name':"daE_HP_Create__FP8daE_HP_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9CF0,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9D38,'size':72,'pad':0,'label':"__dt__12daE_HP_HIO_cFv",'name':"__dt__12daE_HP_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9D80,'size':60,'pad':0,'label':"__sinit_d_a_e_hp_cpp",'name':"__sinit_d_a_e_hp_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x806E9DBC,'size':8,'pad':0,'label':"func_806E9DBC",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9DC4,'size':8,'pad':0,'label':"func_806E9DC4",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806E9DCC,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806EA1E0,'size':8,'pad':0,'label':"data_806EA1E0",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806EA1E8,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806EA1EC,'size':8,'pad':0,'label':"pad_806EA1EC",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806EA1F4,'size':4,'pad':0,'label':"lit_3905",'name':"@3905",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[13,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA1F8,'size':4,'pad':0,'label':"lit_3906",'name':"@3906",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA1FC,'size':4,'pad':4,'label':"lit_3907",'name':"@3907",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA204,'size':8,'pad':0,'label':"lit_3908",'name':"@3908",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA20C,'size':8,'pad':0,'label':"lit_3909",'name':"@3909",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA214,'size':8,'pad':0,'label':"lit_3910",'name':"@3910",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA21C,'size':4,'pad':0,'label':"lit_3911",'name':"@3911",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA220,'size':4,'pad':0,'label':"lit_3926",'name':"@3926",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA224,'size':4,'pad':0,'label':"lit_4178",'name':"@4178",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA228,'size':4,'pad':0,'label':"lit_4179",'name':"@4179",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA22C,'size':4,'pad':0,'label':"lit_4180",'name':"@4180",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA230,'size':4,'pad':0,'label':"lit_4181",'name':"@4181",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA234,'size':4,'pad':0,'label':"lit_4182",'name':"@4182",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA238,'size':4,'pad':0,'label':"lit_4183",'name':"@4183",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA23C,'size':4,'pad':0,'label':"lit_4196",'name':"@4196",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA240,'size':4,'pad':0,'label':"lit_4301",'name':"@4301",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA244,'size':4,'pad':0,'label':"lit_4367",'name':"@4367",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA248,'size':4,'pad':0,'label':"lit_4368",'name':"@4368",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA24C,'size':4,'pad':0,'label':"lit_4418",'name':"@4418",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA250,'size':4,'pad':0,'label':"lit_4419",'name':"@4419",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA254,'size':4,'pad':0,'label':"lit_4420",'name':"@4420",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA258,'size':4,'pad':0,'label':"lit_4493",'name':"@4493",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA25C,'size':4,'pad':0,'label':"lit_4562",'name':"@4562",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA260,'size':4,'pad':0,'label':"lit_4781",'name':"@4781",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA264,'size':4,'pad':0,'label':"lit_4782",'name':"@4782",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA268,'size':4,'pad':0,'label':"lit_4783",'name':"@4783",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA26C,'size':4,'pad':0,'label':"lit_4784",'name':"@4784",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA270,'size':4,'pad':0,'label':"lit_4785",'name':"@4785",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA274,'size':4,'pad':4,'label':"lit_4786",'name':"@4786",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA27C,'size':8,'pad':0,'label':"lit_4788",'name':"@4788",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA284,'size':4,'pad':0,'label':"lit_5054",'name':"@5054",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA288,'size':4,'pad':0,'label':"lit_5055",'name':"@5055",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA28C,'size':4,'pad':0,'label':"lit_5056",'name':"@5056",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA290,'size':4,'pad':0,'label':"lit_5057",'name':"@5057",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA294,'size':4,'pad':0,'label':"lit_5168",'name':"@5168",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA298,'size':4,'pad':0,'label':"lit_5169",'name':"@5169",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA29C,'size':4,'pad':0,'label':"lit_5170",'name':"@5170",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2A0,'size':4,'pad':0,'label':"lit_5171",'name':"@5171",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2A4,'size':4,'pad':0,'label':"lit_5172",'name':"@5172",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2A8,'size':4,'pad':0,'label':"lit_5243",'name':"@5243",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2AC,'size':4,'pad':0,'label':"lit_5244",'name':"@5244",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2B0,'size':4,'pad':0,'label':"lit_5245",'name':"@5245",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2B4,'size':4,'pad':0,'label':"lit_5246",'name':"@5246",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2B8,'size':4,'pad':0,'label':"lit_5247",'name':"@5247",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2BC,'size':4,'pad':4,'label':"lit_5512",'name':"@5512",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA2C4,'size':8,'pad':0,'label':"lit_5514",'name':"@5514",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA2CC,'size':26,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x806EA2E8,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA2F4,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806EA308,'size':8,'pad':0,'label':"data_806EA308",'name':"e_prim$3784",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA310,'size':8,'pad':0,'label':"data_806EA310",'name':"e_env$3785",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA318,'size':6,'pad':2,'label':"data_806EA318",'name':"eff_id$3793",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA320,'size':68,'pad':0,'label':"data_806EA320",'name':"cc_hp_src__22@unnamed@d_a_e_hp_cpp@",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA364,'size':64,'pad':0,'label':"data_806EA364",'name':"cc_lamp_src__22@unnamed@d_a_e_hp_cpp@",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA3A4,'size':68,'pad':0,'label':"data_806EA3A4",'name':"cc_hp_at_src__22@unnamed@d_a_e_hp_cpp@",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA3E8,'size':4,'pad':0,'label':"particleNmaeDt",'name':"particleNmaeDt$4030",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA3EC,'size':28,'pad':0,'label':"lit_5058",'name':"@5058",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806EA408,'size':32,'pad':0,'label':"l_daE_HP_Method",'name':"l_daE_HP_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806EA428,'size':48,'pad':0,'label':"g_profile_E_HP",'name':"g_profile_E_HP",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806EA458,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA464,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA470,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA47C,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA488,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA494,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA4A0,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA4C4,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA4D0,'size':12,'pad':0,'label':"__vt__12daE_HP_HIO_c",'name':"__vt__12daE_HP_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806EA4E0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA4E8,'size':4,'pad':0,'label':"data_806EA4E8",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA4EC,'size':12,'pad':0,'label':"lit_3921",'name':"@3921",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806EA4F8,'size':20,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[9,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_HP_HIO_cFv":5,
	"ctrlJoint__8daE_HP_cFP8J3DJointP8J3DModel":6,
	"JointCallBack__8daE_HP_cFP8J3DJointi":7,
	"LampCtrlJoint__8daE_HP_cFP8J3DJointP8J3DModel":8,
	"LampJointCallBack__8daE_HP_cFP8J3DJointi":9,
	"draw__8daE_HP_cFv":10,
	"daE_HP_Draw__FP8daE_HP_c":11,
	"setBck__8daE_HP_cFiUcff":12,
	"setActionMode__8daE_HP_cFii":13,
	"mChkDistance__8daE_HP_cFf":14,
	"damage_check__8daE_HP_cFv":15,
	"executeWait__8daE_HP_cFv":16,
	"executeMove__8daE_HP_cFv":17,
	"executeRetMove__8daE_HP_cFv":18,
	"executeAttack__8daE_HP_cFv":19,
	"executeDamage__8daE_HP_cFv":20,
	"executeDown__8daE_HP_cFv":21,
	"executeDead__8daE_HP_cFv":22,
	"action__8daE_HP_cFv":23,
	"__dt__8cM3dGPlaFv":24,
	"mtx_set__8daE_HP_cFv":25,
	"cc_set__8daE_HP_cFv":26,
	"execute__8daE_HP_cFv":27,
	"daE_HP_Execute__FP8daE_HP_c":28,
	"daE_HP_IsDelete__FP8daE_HP_c":29,
	"_delete__8daE_HP_cFv":30,
	"daE_HP_Delete__FP8daE_HP_c":31,
	"CreateHeap__8daE_HP_cFv":32,
	"useHeapInit__FP10fopAc_ac_c":33,
	"create__8daE_HP_cFv":34,
	"__ct__8daE_HP_cFv":35,
	"__dt__8cM3dGSphFv":36,
	"__dt__8cM3dGCylFv":37,
	"__dt__8cM3dGAabFv":38,
	"__dt__10dCcD_GSttsFv":39,
	"__dt__12dBgS_ObjAcchFv":40,
	"__dt__12dBgS_AcchCirFv":41,
	"daE_HP_Create__FP8daE_HP_c":42,
	"__dt__10cCcD_GSttsFv":43,
	"__dt__12daE_HP_HIO_cFv":44,
	"__sinit_d_a_e_hp_cpp":45,
	"func_806E9DBC":46,
	"func_806E9DC4":47,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":48,
	"data_806EA1E0":49,
	"__destroy_global_chain_reference":50,
	"pad_806EA1EC":51,
	"lit_3905":52,
	"lit_3906":53,
	"lit_3907":54,
	"lit_3908":55,
	"lit_3909":56,
	"lit_3910":57,
	"lit_3911":58,
	"lit_3926":59,
	"lit_4178":60,
	"lit_4179":61,
	"lit_4180":62,
	"lit_4181":63,
	"lit_4182":64,
	"lit_4183":65,
	"lit_4196":66,
	"lit_4301":67,
	"lit_4367":68,
	"lit_4368":69,
	"lit_4418":70,
	"lit_4419":71,
	"lit_4420":72,
	"lit_4493":73,
	"lit_4562":74,
	"lit_4781":75,
	"lit_4782":76,
	"lit_4783":77,
	"lit_4784":78,
	"lit_4785":79,
	"lit_4786":80,
	"lit_4788":81,
	"lit_5054":82,
	"lit_5055":83,
	"lit_5056":84,
	"lit_5057":85,
	"lit_5168":86,
	"lit_5169":87,
	"lit_5170":88,
	"lit_5171":89,
	"lit_5172":90,
	"lit_5243":91,
	"lit_5244":92,
	"lit_5245":93,
	"lit_5246":94,
	"lit_5247":95,
	"lit_5512":96,
	"lit_5514":97,
	"stringBase0":98,
	"cNullVec__6Z2Calc":99,
	"lit_1787":100,
	"data_806EA308":101,
	"data_806EA310":102,
	"data_806EA318":103,
	"data_806EA320":104,
	"data_806EA364":105,
	"data_806EA3A4":106,
	"particleNmaeDt":107,
	"lit_5058":108,
	"l_daE_HP_Method":109,
	"g_profile_E_HP":110,
	"__vt__12dBgS_AcchCir":111,
	"__vt__10cCcD_GStts":112,
	"__vt__10dCcD_GStts":113,
	"__vt__8cM3dGSph":114,
	"__vt__8cM3dGCyl":115,
	"__vt__8cM3dGAab":116,
	"__vt__12dBgS_ObjAcch":117,
	"__vt__8cM3dGPla":118,
	"__vt__12daE_HP_HIO_c":119,
	"__global_destructor_chain":120,
	"data_806EA4E8":121,
	"lit_3921":122,
	"l_HIO":123,
}

