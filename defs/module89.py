#
# Generate By: dol2asm
# Module: 89
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_bhashi",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_obj_bhashi",
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
	{'addr':0x805769E0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80576A0C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80576A38,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80576A58,'size':108,'pad':0,'label':"initCcCylinder__13daObjBHASHI_cFv",'name':"initCcCylinder__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80576AC4,'size':112,'pad':0,'label':"setCcCylinder__13daObjBHASHI_cFv",'name':"setCcCylinder__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80576B34,'size':32,'pad':0,'label':"daObjBHASHI_Create__FP10fopAc_ac_c",'name':"daObjBHASHI_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80576B54,'size':36,'pad':0,'label':"daObjBHASHI_Delete__FP13daObjBHASHI_c",'name':"daObjBHASHI_Delete__FP13daObjBHASHI_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80576B78,'size':216,'pad':0,'label':"Set_Hahen__13daObjBHASHI_cFv",'name':"Set_Hahen__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80576C50,'size':1436,'pad':0,'label':"Set_Speed__13daObjBHASHI_cFssff",'name':"Set_Speed__13daObjBHASHI_cFssff",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805771EC,'size':788,'pad':0,'label':"Obj_Damage__13daObjBHASHI_cFv",'name':"Obj_Damage__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80577500,'size':660,'pad':0,'label':"Obj_Damage__13daObjBHASHI_cF4cXyz",'name':"Obj_Damage__13daObjBHASHI_cF4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80577794,'size':16,'pad':0,'label':"__ct__7Hahen_cFv",'name':"__ct__7Hahen_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805777A4,'size':196,'pad':0,'label':"Wall_Check__7Hahen_cFv",'name':"Wall_Check__7Hahen_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80577868,'size':948,'pad':0,'label':"HahenMotion__7Hahen_cFv",'name':"HahenMotion__7Hahen_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80577C1C,'size':392,'pad':0,'label':"CheckCull__7Hahen_cFv",'name':"CheckCull__7Hahen_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80577DA4,'size':128,'pad':0,'label':"checkViewArea__7Hahen_cFv",'name':"checkViewArea__7Hahen_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80577E24,'size':444,'pad':0,'label':"Rolling__13daObjBHASHI_cFP4cXyzff",'name':"Rolling__13daObjBHASHI_cFP4cXyzff",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80577FE0,'size':540,'pad':0,'label':"Roll_Set__7Hahen_cFP4cXyzfs",'name':"Roll_Set__7Hahen_cFP4cXyzfs",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805781FC,'size':232,'pad':0,'label':"setBaseMtx__13daObjBHASHI_cFv",'name':"setBaseMtx__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805782E4,'size':44,'pad':0,'label':"daObjBHASHI_Draw__FP13daObjBHASHI_c",'name':"daObjBHASHI_Draw__FP13daObjBHASHI_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80578310,'size':32,'pad':0,'label':"daObjBHASHI_Execute__FP13daObjBHASHI_c",'name':"daObjBHASHI_Execute__FP13daObjBHASHI_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80578330,'size':252,'pad':0,'label':"CreateHeap__13daObjBHASHI_cFv",'name':"CreateHeap__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8057842C,'size':648,'pad':0,'label':"create__13daObjBHASHI_cFv",'name':"create__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805786B4,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805786FC,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80578744,'size':60,'pad':0,'label':"__dt__7Hahen_cFv",'name':"__dt__7Hahen_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80578780,'size':8,'pad':0,'label':"daObjBHASHI_IsDelete__FP13daObjBHASHI_c",'name':"daObjBHASHI_IsDelete__FP13daObjBHASHI_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80578788,'size':68,'pad':0,'label':"Create__13daObjBHASHI_cFv",'name':"Create__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805787CC,'size':288,'pad':0,'label':"Execute__13daObjBHASHI_cFPPA3_A4_f",'name':"Execute__13daObjBHASHI_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805788EC,'size':252,'pad':0,'label':"Draw__13daObjBHASHI_cFv",'name':"Draw__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805789E8,'size':152,'pad':0,'label':"Delete__13daObjBHASHI_cFv",'name':"Delete__13daObjBHASHI_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80578A80,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80578A84,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80578A88,'size':68,'pad':0,'label':"ccCylSrc",'name':"ccCylSrc$3780",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[11,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80578ACC,'size':4,'pad':0,'label':"lit_3795",'name':"@3795",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AD0,'size':4,'pad':0,'label':"lit_3829",'name':"@3829",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AD4,'size':4,'pad':0,'label':"lit_3830",'name':"@3830",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AD8,'size':4,'pad':0,'label':"lit_3922",'name':"@3922",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578ADC,'size':4,'pad':0,'label':"lit_3923",'name':"@3923",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AE0,'size':4,'pad':0,'label':"lit_3924",'name':"@3924",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AE4,'size':4,'pad':0,'label':"lit_3925",'name':"@3925",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AE8,'size':4,'pad':0,'label':"lit_3926",'name':"@3926",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AEC,'size':4,'pad':0,'label':"lit_3927",'name':"@3927",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AF0,'size':4,'pad':0,'label':"lit_3928",'name':"@3928",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AF4,'size':4,'pad':0,'label':"lit_3929",'name':"@3929",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AF8,'size':4,'pad':0,'label':"lit_3930",'name':"@3930",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578AFC,'size':4,'pad':0,'label':"lit_3931",'name':"@3931",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80578B00,'size':4,'pad':0,'label':"lit_3932",'name':"@3932",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B04,'size':4,'pad':0,'label':"lit_3933",'name':"@3933",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B08,'size':4,'pad':0,'label':"lit_3934",'name':"@3934",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B0C,'size':4,'pad':0,'label':"lit_3935",'name':"@3935",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B10,'size':4,'pad':0,'label':"lit_3936",'name':"@3936",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B14,'size':4,'pad':0,'label':"lit_3937",'name':"@3937",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B18,'size':4,'pad':0,'label':"lit_3938",'name':"@3938",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B1C,'size':4,'pad':0,'label':"lit_3939",'name':"@3939",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B20,'size':8,'pad':0,'label':"lit_3942",'name':"@3942",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80578B28,'size':4,'pad':0,'label':"lit_4028",'name':"@4028",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B2C,'size':4,'pad':0,'label':"lit_4029",'name':"@4029",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B30,'size':4,'pad':0,'label':"lit_4114",'name':"@4114",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B34,'size':4,'pad':0,'label':"lit_4185",'name':"@4185",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B38,'size':4,'pad':4,'label':"lit_4186",'name':"@4186",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B40,'size':8,'pad':0,'label':"lit_4187",'name':"@4187",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80578B48,'size':8,'pad':0,'label':"lit_4188",'name':"@4188",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80578B50,'size':8,'pad':0,'label':"lit_4189",'name':"@4189",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80578B58,'size':4,'pad':0,'label':"lit_4190",'name':"@4190",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B5C,'size':4,'pad':0,'label':"lit_4191",'name':"@4191",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B60,'size':4,'pad':0,'label':"lit_4192",'name':"@4192",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B64,'size':4,'pad':0,'label':"lit_4193",'name':"@4193",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B68,'size':4,'pad':0,'label':"lit_4194",'name':"@4194",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B6C,'size':4,'pad':0,'label':"lit_4195",'name':"@4195",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B70,'size':4,'pad':0,'label':"lit_4258",'name':"@4258",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B74,'size':4,'pad':0,'label':"lit_4271",'name':"@4271",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B78,'size':4,'pad':0,'label':"lit_4272",'name':"@4272",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B7C,'size':4,'pad':0,'label':"lit_4273",'name':"@4273",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B80,'size':4,'pad':0,'label':"lit_4345",'name':"@4345",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B84,'size':4,'pad':0,'label':"lit_4346",'name':"@4346",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B88,'size':4,'pad':0,'label':"lit_4347",'name':"@4347",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B8C,'size':4,'pad':0,'label':"lit_4515",'name':"@4515",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B90,'size':4,'pad':0,'label':"lit_4516",'name':"@4516",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B94,'size':4,'pad':0,'label':"lit_4517",'name':"@4517",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B98,'size':4,'pad':0,'label':"lit_4518",'name':"@4518",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578B9C,'size':4,'pad':0,'label':"lit_4606",'name':"@4606",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578BA0,'size':4,'pad':0,'label':"lit_4626",'name':"@4626",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578BA4,'size':4,'pad':0,'label':"lit_4627",'name':"@4627",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80578BA8,'size':71,'pad':0,'label':"d_a_obj_bhashi__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80578BF0,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80578BF4,'size':32,'pad':0,'label':"l_daObjBHASHI_Method",'name':"l_daObjBHASHI_Method",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80578C14,'size':48,'pad':0,'label':"g_profile_Obj_BHASHI",'name':"g_profile_Obj_BHASHI",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80578C44,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80578C50,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80578C5C,'size':40,'pad':0,'label':"__vt__13daObjBHASHI_c",'name':"__vt__13daObjBHASHI_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"initCcCylinder__13daObjBHASHI_cFv":3,
	"setCcCylinder__13daObjBHASHI_cFv":4,
	"daObjBHASHI_Create__FP10fopAc_ac_c":5,
	"daObjBHASHI_Delete__FP13daObjBHASHI_c":6,
	"Set_Hahen__13daObjBHASHI_cFv":7,
	"Set_Speed__13daObjBHASHI_cFssff":8,
	"Obj_Damage__13daObjBHASHI_cFv":9,
	"Obj_Damage__13daObjBHASHI_cF4cXyz":10,
	"__ct__7Hahen_cFv":11,
	"Wall_Check__7Hahen_cFv":12,
	"HahenMotion__7Hahen_cFv":13,
	"CheckCull__7Hahen_cFv":14,
	"checkViewArea__7Hahen_cFv":15,
	"Rolling__13daObjBHASHI_cFP4cXyzff":16,
	"Roll_Set__7Hahen_cFP4cXyzfs":17,
	"setBaseMtx__13daObjBHASHI_cFv":18,
	"daObjBHASHI_Draw__FP13daObjBHASHI_c":19,
	"daObjBHASHI_Execute__FP13daObjBHASHI_c":20,
	"CreateHeap__13daObjBHASHI_cFv":21,
	"create__13daObjBHASHI_cFv":22,
	"__dt__8cM3dGCylFv":23,
	"__dt__8cM3dGAabFv":24,
	"__dt__7Hahen_cFv":25,
	"daObjBHASHI_IsDelete__FP13daObjBHASHI_c":26,
	"Create__13daObjBHASHI_cFv":27,
	"Execute__13daObjBHASHI_cFPPA3_A4_f":28,
	"Draw__13daObjBHASHI_cFv":29,
	"Delete__13daObjBHASHI_cFv":30,
	"_ctors":31,
	"_dtors":32,
	"ccCylSrc":33,
	"lit_3795":34,
	"lit_3829":35,
	"lit_3830":36,
	"lit_3922":37,
	"lit_3923":38,
	"lit_3924":39,
	"lit_3925":40,
	"lit_3926":41,
	"lit_3927":42,
	"lit_3928":43,
	"lit_3929":44,
	"lit_3930":45,
	"lit_3931":46,
	"lit_3932":47,
	"lit_3933":48,
	"lit_3934":49,
	"lit_3935":50,
	"lit_3936":51,
	"lit_3937":52,
	"lit_3938":53,
	"lit_3939":54,
	"lit_3942":55,
	"lit_4028":56,
	"lit_4029":57,
	"lit_4114":58,
	"lit_4185":59,
	"lit_4186":60,
	"lit_4187":61,
	"lit_4188":62,
	"lit_4189":63,
	"lit_4190":64,
	"lit_4191":65,
	"lit_4192":66,
	"lit_4193":67,
	"lit_4194":68,
	"lit_4195":69,
	"lit_4258":70,
	"lit_4271":71,
	"lit_4272":72,
	"lit_4273":73,
	"lit_4345":74,
	"lit_4346":75,
	"lit_4347":76,
	"lit_4515":77,
	"lit_4516":78,
	"lit_4517":79,
	"lit_4518":80,
	"lit_4606":81,
	"lit_4626":82,
	"lit_4627":83,
	"d_a_obj_bhashi__stringBase0":84,
	"l_arcName":85,
	"l_daObjBHASHI_Method":86,
	"g_profile_Obj_BHASHI":87,
	"__vt__8cM3dGCyl":88,
	"__vt__8cM3dGAab":89,
	"__vt__13daObjBHASHI_c":90,
}

