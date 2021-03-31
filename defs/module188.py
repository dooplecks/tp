#
# Generate By: dol2asm
# Module: 188
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_fb",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_e_fb",
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
	{'addr':0x806B63C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B63EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B6418,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B6438,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B6454,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B64AC,'size':116,'pad':0,'label':"__ct__12daE_FB_HIO_cFv",'name':"__ct__12daE_FB_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B6520,'size':160,'pad':0,'label':"ctrlJoint__8daE_FB_cFP8J3DJointP8J3DModel",'name':"ctrlJoint__8daE_FB_cFP8J3DJointP8J3DModel",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B65C0,'size':76,'pad':0,'label':"JointCallBack__8daE_FB_cFP8J3DJointi",'name':"JointCallBack__8daE_FB_cFP8J3DJointi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B660C,'size':436,'pad':0,'label':"draw__8daE_FB_cFv",'name':"draw__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B67C0,'size':32,'pad':0,'label':"daE_FB_Draw__FP8daE_FB_c",'name':"daE_FB_Draw__FP8daE_FB_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B67E0,'size':172,'pad':0,'label':"setBck__8daE_FB_cFiUcff",'name':"setBck__8daE_FB_cFiUcff",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B688C,'size':12,'pad':0,'label':"setActionMode__8daE_FB_cFii",'name':"setActionMode__8daE_FB_cFii",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B6898,'size':1160,'pad':0,'label':"damage_check__8daE_FB_cFv",'name':"damage_check__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B6D20,'size':212,'pad':0,'label':"mBgLineCheck__8daE_FB_cFv",'name':"mBgLineCheck__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B6DF4,'size':332,'pad':0,'label':"search_check__8daE_FB_cFv",'name':"search_check__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B6F40,'size':444,'pad':0,'label':"executeWait__8daE_FB_cFv",'name':"executeWait__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B70FC,'size':1956,'pad':0,'label':"executeAttack__8daE_FB_cFv",'name':"executeAttack__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B78A0,'size':744,'pad':0,'label':"executeDamage__8daE_FB_cFv",'name':"executeDamage__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B7B88,'size':596,'pad':0,'label':"executeBullet__8daE_FB_cFv",'name':"executeBullet__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B7DDC,'size':712,'pad':0,'label':"action__8daE_FB_cFv",'name':"action__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B80A4,'size':120,'pad':0,'label':"mtx_set__8daE_FB_cFv",'name':"mtx_set__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B811C,'size':408,'pad':0,'label':"cc_set__8daE_FB_cFv",'name':"cc_set__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B82B4,'size':316,'pad':0,'label':"normal_eff_set__8daE_FB_cFv",'name':"normal_eff_set__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B83F0,'size':296,'pad':0,'label':"dead_eff_set__8daE_FB_cFv",'name':"dead_eff_set__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8518,'size':136,'pad':0,'label':"execute__8daE_FB_cFv",'name':"execute__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B85A0,'size':32,'pad':0,'label':"daE_FB_Execute__FP8daE_FB_c",'name':"daE_FB_Execute__FP8daE_FB_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B85C0,'size':8,'pad':0,'label':"daE_FB_IsDelete__FP8daE_FB_c",'name':"daE_FB_IsDelete__FP8daE_FB_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x806B85C8,'size':144,'pad':0,'label':"_delete__8daE_FB_cFv",'name':"_delete__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8658,'size':32,'pad':0,'label':"daE_FB_Delete__FP8daE_FB_c",'name':"daE_FB_Delete__FP8daE_FB_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8678,'size':512,'pad':0,'label':"CreateHeap__8daE_FB_cFv",'name':"CreateHeap__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8878,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B88C0,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B88E0,'size':828,'pad':0,'label':"create__8daE_FB_cFv",'name':"create__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8C1C,'size':424,'pad':0,'label':"__ct__8daE_FB_cFv",'name':"__ct__8daE_FB_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8DC4,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8E0C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8E54,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8EC4,'size':32,'pad':0,'label':"daE_FB_Create__FP8daE_FB_c",'name':"daE_FB_Create__FP8daE_FB_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8EE4,'size':72,'pad':0,'label':"__dt__12daE_FB_HIO_cFv",'name':"__dt__12daE_FB_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8F2C,'size':60,'pad':0,'label':"__sinit_d_a_e_fb_cpp",'name':"__sinit_d_a_e_fb_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x806B8F68,'size':8,'pad':0,'label':"func_806B8F68",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8F70,'size':8,'pad':0,'label':"func_806B8F70",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806B8F78,'size':8,'pad':0,'label':"data_806B8F78",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806B8F80,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806B8F84,'size':8,'pad':0,'label':"pad_806B8F84",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806B8F8C,'size':4,'pad':0,'label':"lit_3662",'name':"@3662",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[9,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8F90,'size':4,'pad':0,'label':"lit_3663",'name':"@3663",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8F94,'size':4,'pad':0,'label':"lit_3748",'name':"@3748",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8F98,'size':4,'pad':0,'label':"lit_3749",'name':"@3749",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8F9C,'size':4,'pad':0,'label':"lit_3750",'name':"@3750",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B8FA0,'size':4,'pad':0,'label':"lit_3751",'name':"@3751",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FA4,'size':4,'pad':0,'label':"lit_3764",'name':"@3764",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FA8,'size':4,'pad':0,'label':"lit_3877",'name':"@3877",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FAC,'size':4,'pad':0,'label':"lit_3965",'name':"@3965",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FB0,'size':4,'pad':0,'label':"lit_3966",'name':"@3966",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FB4,'size':4,'pad':0,'label':"lit_3967",'name':"@3967",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FB8,'size':4,'pad':0,'label':"lit_3968",'name':"@3968",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FBC,'size':4,'pad':0,'label':"lit_3969",'name':"@3969",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FC0,'size':4,'pad':0,'label':"lit_3970",'name':"@3970",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FC4,'size':4,'pad':0,'label':"lit_4260",'name':"@4260",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FC8,'size':4,'pad':0,'label':"lit_4261",'name':"@4261",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FCC,'size':4,'pad':0,'label':"lit_4262",'name':"@4262",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FD0,'size':4,'pad':0,'label':"lit_4263",'name':"@4263",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FD4,'size':4,'pad':0,'label':"lit_4264",'name':"@4264",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FD8,'size':4,'pad':0,'label':"lit_4265",'name':"@4265",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FDC,'size':8,'pad':0,'label':"lit_4267",'name':"@4267",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B8FE4,'size':4,'pad':0,'label':"lit_4370",'name':"@4370",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FE8,'size':4,'pad':0,'label':"lit_4371",'name':"@4371",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FEC,'size':4,'pad':0,'label':"lit_4372",'name':"@4372",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FF0,'size':4,'pad':0,'label':"lit_4451",'name':"@4451",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FF4,'size':4,'pad':0,'label':"lit_4452",'name':"@4452",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FF8,'size':4,'pad':0,'label':"lit_4453",'name':"@4453",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B8FFC,'size':4,'pad':4,'label':"lit_4528",'name':"@4528",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B9004,'size':8,'pad':0,'label':"lit_4531",'name':"@4531",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B900C,'size':4,'pad':0,'label':"lit_4604",'name':"@4604",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B9010,'size':4,'pad':0,'label':"lit_4605",'name':"@4605",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B9014,'size':4,'pad':0,'label':"lit_4606",'name':"@4606",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B9018,'size':4,'pad':0,'label':"lit_4607",'name':"@4607",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B901C,'size':4,'pad':0,'label':"lit_4608",'name':"@4608",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B9020,'size':4,'pad':0,'label':"lit_4934",'name':"@4934",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B9024,'size':4,'pad':0,'label':"lit_4935",'name':"@4935",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x806B9028,'size':10,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x806B9034,'size':64,'pad':0,'label':"data_806B9034",'name':"cc_fb_src__22@unnamed@d_a_e_fb_cpp@",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9074,'size':64,'pad':0,'label':"data_806B9074",'name':"cc_fb_at_src__22@unnamed@d_a_e_fb_cpp@",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B90B4,'size':6,'pad':2,'label':"a_eff_id",'name':"a_eff_id$3974",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B90BC,'size':4,'pad':0,'label':"d_eff_id_4275",'name':"d_eff_id$4275",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B90C0,'size':10,'pad':2,'label':"n_eff_id",'name':"n_eff_id$4612",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B90CC,'size':20,'pad':0,'label':"n_joint_id",'name':"n_joint_id$4613",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B90E0,'size':10,'pad':2,'label':"d_eff_id_4669",'name':"d_eff_id$4669",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B90EC,'size':20,'pad':0,'label':"d_joint_id",'name':"d_joint_id$4670",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9100,'size':32,'pad':0,'label':"l_daE_FB_Method",'name':"l_daE_FB_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806B9120,'size':48,'pad':0,'label':"g_profile_E_FB",'name':"g_profile_E_FB",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x806B9150,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806B915C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806B9168,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806B918C,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806B9198,'size':12,'pad':0,'label':"__vt__12daE_FB_HIO_c",'name':"__vt__12daE_FB_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x806B91A8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91B0,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91B4,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91B8,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91BC,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91C0,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91C4,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91C8,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91CC,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91D0,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91D4,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91D8,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91DC,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91E0,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91E4,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91E8,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91EC,'size':4,'pad':0,'label':"struct_806B91EC",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x806B91F0,'size':12,'pad':0,'label':"lit_3657",'name':"@3657",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B91FC,'size':36,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9220,'size':4,'pad':0,'label':"mFireTimer",'name':"mFireTimer",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9224,'size':4,'pad':0,'label':"data_806B9224",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9228,'size':4,'pad':0,'label':"data_806B9228",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B922C,'size':4,'pad':0,'label':"data_806B922C",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9230,'size':4,'pad':0,'label':"data_806B9230",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9234,'size':4,'pad':0,'label':"data_806B9234",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9238,'size':4,'pad':0,'label':"data_806B9238",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B923C,'size':4,'pad':0,'label':"data_806B923C",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9240,'size':4,'pad':0,'label':"data_806B9240",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9244,'size':4,'pad':0,'label':"data_806B9244",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9248,'size':4,'pad':0,'label':"data_806B9248",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B924C,'size':4,'pad':0,'label':"data_806B924C",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9250,'size':4,'pad':0,'label':"data_806B9250",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9254,'size':4,'pad':0,'label':"data_806B9254",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9258,'size':4,'pad':0,'label':"data_806B9258",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B925C,'size':4,'pad':0,'label':"data_806B925C",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9260,'size':4,'pad':0,'label':"data_806B9260",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9264,'size':4,'pad':0,'label':"data_806B9264",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9268,'size':4,'pad':0,'label':"data_806B9268",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B926C,'size':4,'pad':0,'label':"data_806B926C",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9270,'size':4,'pad':0,'label':"data_806B9270",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9274,'size':4,'pad':0,'label':"data_806B9274",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9278,'size':4,'pad':0,'label':"data_806B9278",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B927C,'size':4,'pad':0,'label':"data_806B927C",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9280,'size':4,'pad':0,'label':"data_806B9280",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9284,'size':4,'pad':0,'label':"data_806B9284",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x806B9288,'size':4,'pad':0,'label':"data_806B9288",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_FB_HIO_cFv":5,
	"ctrlJoint__8daE_FB_cFP8J3DJointP8J3DModel":6,
	"JointCallBack__8daE_FB_cFP8J3DJointi":7,
	"draw__8daE_FB_cFv":8,
	"daE_FB_Draw__FP8daE_FB_c":9,
	"setBck__8daE_FB_cFiUcff":10,
	"setActionMode__8daE_FB_cFii":11,
	"damage_check__8daE_FB_cFv":12,
	"mBgLineCheck__8daE_FB_cFv":13,
	"search_check__8daE_FB_cFv":14,
	"executeWait__8daE_FB_cFv":15,
	"executeAttack__8daE_FB_cFv":16,
	"executeDamage__8daE_FB_cFv":17,
	"executeBullet__8daE_FB_cFv":18,
	"action__8daE_FB_cFv":19,
	"mtx_set__8daE_FB_cFv":20,
	"cc_set__8daE_FB_cFv":21,
	"normal_eff_set__8daE_FB_cFv":22,
	"dead_eff_set__8daE_FB_cFv":23,
	"execute__8daE_FB_cFv":24,
	"daE_FB_Execute__FP8daE_FB_c":25,
	"daE_FB_IsDelete__FP8daE_FB_c":26,
	"_delete__8daE_FB_cFv":27,
	"daE_FB_Delete__FP8daE_FB_c":28,
	"CreateHeap__8daE_FB_cFv":29,
	"__dt__12J3DFrameCtrlFv":30,
	"useHeapInit__FP10fopAc_ac_c":31,
	"create__8daE_FB_cFv":32,
	"__ct__8daE_FB_cFv":33,
	"__dt__8cM3dGSphFv":34,
	"__dt__8cM3dGAabFv":35,
	"__dt__12dBgS_ObjAcchFv":36,
	"daE_FB_Create__FP8daE_FB_c":37,
	"__dt__12daE_FB_HIO_cFv":38,
	"__sinit_d_a_e_fb_cpp":39,
	"func_806B8F68":40,
	"func_806B8F70":41,
	"data_806B8F78":42,
	"__destroy_global_chain_reference":43,
	"pad_806B8F84":44,
	"lit_3662":45,
	"lit_3663":46,
	"lit_3748":47,
	"lit_3749":48,
	"lit_3750":49,
	"lit_3751":50,
	"lit_3764":51,
	"lit_3877":52,
	"lit_3965":53,
	"lit_3966":54,
	"lit_3967":55,
	"lit_3968":56,
	"lit_3969":57,
	"lit_3970":58,
	"lit_4260":59,
	"lit_4261":60,
	"lit_4262":61,
	"lit_4263":62,
	"lit_4264":63,
	"lit_4265":64,
	"lit_4267":65,
	"lit_4370":66,
	"lit_4371":67,
	"lit_4372":68,
	"lit_4451":69,
	"lit_4452":70,
	"lit_4453":71,
	"lit_4528":72,
	"lit_4531":73,
	"lit_4604":74,
	"lit_4605":75,
	"lit_4606":76,
	"lit_4607":77,
	"lit_4608":78,
	"lit_4934":79,
	"lit_4935":80,
	"stringBase0":81,
	"data_806B9034":82,
	"data_806B9074":83,
	"a_eff_id":84,
	"d_eff_id_4275":85,
	"n_eff_id":86,
	"n_joint_id":87,
	"d_eff_id_4669":88,
	"d_joint_id":89,
	"l_daE_FB_Method":90,
	"g_profile_E_FB":91,
	"__vt__8cM3dGSph":92,
	"__vt__8cM3dGAab":93,
	"__vt__12dBgS_ObjAcch":94,
	"__vt__12J3DFrameCtrl":95,
	"__vt__12daE_FB_HIO_c":96,
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
	"struct_806B91EC":113,
	"lit_3657":114,
	"l_HIO":115,
	"mFireTimer":116,
	"data_806B9224":117,
	"data_806B9228":118,
	"data_806B922C":119,
	"data_806B9230":120,
	"data_806B9234":121,
	"data_806B9238":122,
	"data_806B923C":123,
	"data_806B9240":124,
	"data_806B9244":125,
	"data_806B9248":126,
	"data_806B924C":127,
	"data_806B9250":128,
	"data_806B9254":129,
	"data_806B9258":130,
	"data_806B925C":131,
	"data_806B9260":132,
	"data_806B9264":133,
	"data_806B9268":134,
	"data_806B926C":135,
	"data_806B9270":136,
	"data_806B9274":137,
	"data_806B9278":138,
	"data_806B927C":139,
	"data_806B9280":140,
	"data_806B9284":141,
	"data_806B9288":142,
}

