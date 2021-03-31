#
# Generate By: dol2asm
# Module: 372
#

# Libraries
LIBRARIES = [
	"d/a/npc/d_a_npc_tkj2",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_npc_tkj2",
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
	{'addr':0x80B10D00,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B10D2C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B10D58,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B10D78,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B10D94,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B10DEC,'size':52,'pad':0,'label':"__ct__16daNpc_Tkj2_HIO_cFv",'name':"__ct__16daNpc_Tkj2_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B10E20,'size':172,'pad':0,'label':"anm_init__FP14npc_tkj2_classifUcf",'name':"anm_init__FP14npc_tkj2_classifUcf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B10ECC,'size':336,'pad':0,'label':"nodeCallBack__FP8J3DJointi",'name':"nodeCallBack__FP8J3DJointi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B1101C,'size':276,'pad':0,'label':"daNpc_Tkj2_Draw__FP14npc_tkj2_class",'name':"daNpc_Tkj2_Draw__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B11130,'size':108,'pad':0,'label':"npc_tkj2_carry_check__FP14npc_tkj2_class",'name':"npc_tkj2_carry_check__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B1119C,'size':88,'pad':0,'label':"mode_init_boomCarry__FP14npc_tkj2_class",'name':"mode_init_boomCarry__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B111F4,'size':568,'pad':0,'label':"Wind_effect__FP14npc_tkj2_class",'name':"Wind_effect__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B1142C,'size':624,'pad':0,'label':"CheckRoof__FP14npc_tkj2_class",'name':"CheckRoof__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B1169C,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B116E4,'size':972,'pad':0,'label':"CheckWall__FP14npc_tkj2_classs",'name':"CheckWall__FP14npc_tkj2_classs",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B11AB0,'size':288,'pad':0,'label':"GndCheck2__FP14npc_tkj2_class",'name':"GndCheck2__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B11BD0,'size':120,'pad':0,'label':"__dt__14dBgS_ObjGndChkFv",'name':"__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B11C48,'size':132,'pad':0,'label':"GndCheck__FP14npc_tkj2_class4cXyz",'name':"GndCheck__FP14npc_tkj2_class4cXyz",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B11CCC,'size':1040,'pad':0,'label':"npc_tkj2_normal__FP14npc_tkj2_class",'name':"npc_tkj2_normal__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B120DC,'size':464,'pad':0,'label':"return_pos_get__FP14npc_tkj2_class",'name':"return_pos_get__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B122AC,'size':804,'pad':0,'label':"npc_tkj2_carry__FP14npc_tkj2_class",'name':"npc_tkj2_carry__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B125D0,'size':384,'pad':0,'label':"npc_tkj2_fly__FP14npc_tkj2_class",'name':"npc_tkj2_fly__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B12750,'size':192,'pad':0,'label':"npc_tkj2_drop__FP14npc_tkj2_class",'name':"npc_tkj2_drop__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B12810,'size':1296,'pad':0,'label':"npc_tkj2_return__FP14npc_tkj2_class",'name':"npc_tkj2_return__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B12D20,'size':360,'pad':0,'label':"ObjHit__FP14npc_tkj2_class",'name':"ObjHit__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B12E88,'size':2276,'pad':0,'label':"action__FP14npc_tkj2_class",'name':"action__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B1376C,'size':972,'pad':0,'label':"daNpc_Tkj2_Execute__FP14npc_tkj2_class",'name':"daNpc_Tkj2_Execute__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B13B38,'size':8,'pad':0,'label':"daNpc_Tkj2_IsDelete__FP14npc_tkj2_class",'name':"daNpc_Tkj2_IsDelete__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80B13B40,'size':104,'pad':0,'label':"daNpc_Tkj2_Delete__FP14npc_tkj2_class",'name':"daNpc_Tkj2_Delete__FP14npc_tkj2_class",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B13BA8,'size':632,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B13E20,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B13E68,'size':692,'pad':0,'label':"daNpc_Tkj2_Create__FP10fopAc_ac_c",'name':"daNpc_Tkj2_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B1411C,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B14164,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B141AC,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B1421C,'size':72,'pad':0,'label':"__dt__16daNpc_Tkj2_HIO_cFv",'name':"__dt__16daNpc_Tkj2_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B14264,'size':60,'pad':0,'label':"__sinit_d_a_npc_tkj2_cpp",'name':"__sinit_d_a_npc_tkj2_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80B142A0,'size':8,'pad':0,'label':"func_80B142A0",'name':"@20@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B142A8,'size':8,'pad':0,'label':"func_80B142A8",'name':"@76@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B142B0,'size':8,'pad':0,'label':"func_80B142B0",'name':"@60@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B142B8,'size':8,'pad':0,'label':"func_80B142B8",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B142C0,'size':8,'pad':0,'label':"func_80B142C0",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80B142C8,'size':8,'pad':0,'label':"data_80B142C8",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B142D0,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B142D4,'size':8,'pad':0,'label':"pad_80B142D4",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B142DC,'size':4,'pad':0,'label':"lit_3648",'name':"@3648",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[16,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B142E0,'size':4,'pad':0,'label':"lit_3649",'name':"@3649",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B142E4,'size':4,'pad':0,'label':"lit_3663",'name':"@3663",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B142E8,'size':4,'pad':0,'label':"lit_3664",'name':"@3664",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B142EC,'size':4,'pad':0,'label':"lit_3740",'name':"@3740",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B142F0,'size':4,'pad':0,'label':"lit_3741",'name':"@3741",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B142F4,'size':4,'pad':0,'label':"lit_3742",'name':"@3742",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B142F8,'size':4,'pad':0,'label':"lit_3804",'name':"@3804",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B142FC,'size':4,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14300,'size':4,'pad':0,'label':"lit_3806",'name':"@3806",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14304,'size':4,'pad':0,'label':"lit_3878",'name':"@3878",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14308,'size':4,'pad':0,'label':"lit_3879",'name':"@3879",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B1430C,'size':8,'pad':0,'label':"lit_3880",'name':"@3880",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B14314,'size':8,'pad':0,'label':"lit_3881",'name':"@3881",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B1431C,'size':8,'pad':0,'label':"lit_3882",'name':"@3882",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B14324,'size':4,'pad':0,'label':"lit_3988",'name':"@3988",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14328,'size':4,'pad':0,'label':"lit_4015",'name':"@4015",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B1432C,'size':4,'pad':0,'label':"lit_4035",'name':"@4035",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14330,'size':4,'pad':0,'label':"lit_4107",'name':"@4107",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14334,'size':4,'pad':0,'label':"lit_4108",'name':"@4108",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14338,'size':4,'pad':0,'label':"lit_4109",'name':"@4109",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B1433C,'size':4,'pad':0,'label':"lit_4110",'name':"@4110",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14340,'size':4,'pad':0,'label':"lit_4111",'name':"@4111",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14344,'size':4,'pad':0,'label':"lit_4112",'name':"@4112",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14348,'size':4,'pad':0,'label':"lit_4113",'name':"@4113",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B1434C,'size':4,'pad':0,'label':"lit_4251",'name':"@4251",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14350,'size':4,'pad':0,'label':"lit_4281",'name':"@4281",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14354,'size':4,'pad':0,'label':"lit_4282",'name':"@4282",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14358,'size':4,'pad':0,'label':"lit_4283",'name':"@4283",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B1435C,'size':4,'pad':0,'label':"lit_4284",'name':"@4284",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14360,'size':4,'pad':0,'label':"lit_4296",'name':"@4296",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14364,'size':4,'pad':0,'label':"lit_4429",'name':"@4429",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14368,'size':4,'pad':0,'label':"lit_4430",'name':"@4430",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B1436C,'size':4,'pad':0,'label':"lit_4755",'name':"@4755",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14370,'size':4,'pad':0,'label':"lit_4756",'name':"@4756",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14374,'size':4,'pad':0,'label':"lit_4757",'name':"@4757",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14378,'size':4,'pad':0,'label':"lit_4758",'name':"@4758",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B1437C,'size':4,'pad':0,'label':"lit_4759",'name':"@4759",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14380,'size':4,'pad':0,'label':"lit_4760",'name':"@4760",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14384,'size':8,'pad':0,'label':"lit_4763",'name':"@4763",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B1438C,'size':4,'pad':0,'label':"lit_4858",'name':"@4858",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14390,'size':4,'pad':0,'label':"lit_4859",'name':"@4859",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14394,'size':4,'pad':0,'label':"lit_4860",'name':"@4860",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B14398,'size':4,'pad':0,'label':"lit_4861",'name':"@4861",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B1439C,'size':4,'pad':0,'label':"lit_4862",'name':"@4862",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B143A0,'size':4,'pad':0,'label':"lit_4863",'name':"@4863",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B143A4,'size':4,'pad':0,'label':"lit_4864",'name':"@4864",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B143A8,'size':4,'pad':0,'label':"lit_5080",'name':"@5080",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80B143AC,'size':12,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80B143B8,'size':28,'pad':0,'label':"lit_4761",'name':"@4761",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B143D4,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$4995",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B14414,'size':32,'pad':0,'label':"l_daNpc_Tkj2_Method",'name':"l_daNpc_Tkj2_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B14434,'size':48,'pad':0,'label':"g_profile_NPC_TKJ2",'name':"g_profile_NPC_TKJ2",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80B14464,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B14470,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B1447C,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B144A0,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B144AC,'size':48,'pad':0,'label':"__vt__14dBgS_ObjGndChk",'name':"__vt__14dBgS_ObjGndChk",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B144DC,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B144E8,'size':12,'pad':0,'label':"__vt__16daNpc_Tkj2_HIO_c",'name':"__vt__16daNpc_Tkj2_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80B144F8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B14500,'size':4,'pad':0,'label':"data_80B14500",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B14504,'size':12,'pad':0,'label':"lit_3643",'name':"@3643",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80B14510,'size':20,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__16daNpc_Tkj2_HIO_cFv":5,
	"anm_init__FP14npc_tkj2_classifUcf":6,
	"nodeCallBack__FP8J3DJointi":7,
	"daNpc_Tkj2_Draw__FP14npc_tkj2_class":8,
	"npc_tkj2_carry_check__FP14npc_tkj2_class":9,
	"mode_init_boomCarry__FP14npc_tkj2_class":10,
	"Wind_effect__FP14npc_tkj2_class":11,
	"CheckRoof__FP14npc_tkj2_class":12,
	"__dt__8cM3dGPlaFv":13,
	"CheckWall__FP14npc_tkj2_classs":14,
	"GndCheck2__FP14npc_tkj2_class":15,
	"__dt__14dBgS_ObjGndChkFv":16,
	"GndCheck__FP14npc_tkj2_class4cXyz":17,
	"npc_tkj2_normal__FP14npc_tkj2_class":18,
	"return_pos_get__FP14npc_tkj2_class":19,
	"npc_tkj2_carry__FP14npc_tkj2_class":20,
	"npc_tkj2_fly__FP14npc_tkj2_class":21,
	"npc_tkj2_drop__FP14npc_tkj2_class":22,
	"npc_tkj2_return__FP14npc_tkj2_class":23,
	"ObjHit__FP14npc_tkj2_class":24,
	"action__FP14npc_tkj2_class":25,
	"daNpc_Tkj2_Execute__FP14npc_tkj2_class":26,
	"daNpc_Tkj2_IsDelete__FP14npc_tkj2_class":27,
	"daNpc_Tkj2_Delete__FP14npc_tkj2_class":28,
	"useHeapInit__FP10fopAc_ac_c":29,
	"__dt__12J3DFrameCtrlFv":30,
	"daNpc_Tkj2_Create__FP10fopAc_ac_c":31,
	"__dt__8cM3dGSphFv":32,
	"__dt__8cM3dGAabFv":33,
	"__dt__12dBgS_ObjAcchFv":34,
	"__dt__16daNpc_Tkj2_HIO_cFv":35,
	"__sinit_d_a_npc_tkj2_cpp":36,
	"func_80B142A0":37,
	"func_80B142A8":38,
	"func_80B142B0":39,
	"func_80B142B8":40,
	"func_80B142C0":41,
	"data_80B142C8":42,
	"__destroy_global_chain_reference":43,
	"pad_80B142D4":44,
	"lit_3648":45,
	"lit_3649":46,
	"lit_3663":47,
	"lit_3664":48,
	"lit_3740":49,
	"lit_3741":50,
	"lit_3742":51,
	"lit_3804":52,
	"lit_3805":53,
	"lit_3806":54,
	"lit_3878":55,
	"lit_3879":56,
	"lit_3880":57,
	"lit_3881":58,
	"lit_3882":59,
	"lit_3988":60,
	"lit_4015":61,
	"lit_4035":62,
	"lit_4107":63,
	"lit_4108":64,
	"lit_4109":65,
	"lit_4110":66,
	"lit_4111":67,
	"lit_4112":68,
	"lit_4113":69,
	"lit_4251":70,
	"lit_4281":71,
	"lit_4282":72,
	"lit_4283":73,
	"lit_4284":74,
	"lit_4296":75,
	"lit_4429":76,
	"lit_4430":77,
	"lit_4755":78,
	"lit_4756":79,
	"lit_4757":80,
	"lit_4758":81,
	"lit_4759":82,
	"lit_4760":83,
	"lit_4763":84,
	"lit_4858":85,
	"lit_4859":86,
	"lit_4860":87,
	"lit_4861":88,
	"lit_4862":89,
	"lit_4863":90,
	"lit_4864":91,
	"lit_5080":92,
	"stringBase0":93,
	"lit_4761":94,
	"cc_sph_src":95,
	"l_daNpc_Tkj2_Method":96,
	"g_profile_NPC_TKJ2":97,
	"__vt__8cM3dGSph":98,
	"__vt__8cM3dGAab":99,
	"__vt__12dBgS_ObjAcch":100,
	"__vt__12J3DFrameCtrl":101,
	"__vt__14dBgS_ObjGndChk":102,
	"__vt__8cM3dGPla":103,
	"__vt__16daNpc_Tkj2_HIO_c":104,
	"__global_destructor_chain":105,
	"data_80B14500":106,
	"lit_3643":107,
	"l_HIO":108,
}

