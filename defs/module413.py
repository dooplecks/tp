#
# Generate By: dol2asm
# Module: 413
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_boumato",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_boumato",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80BBAF00,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBAF2C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBAF58,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBAF78,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBAF94,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBAFEC,'size':520,'pad':0,'label':"__dt__15daObj_BouMato_cFv",'name':"__dt__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB1F4,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB230,'size':808,'pad':0,'label':"create__15daObj_BouMato_cFv",'name':"create__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB558,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BBB55C,'size':72,'pad':0,'label':"__dt__8cM3dGLinFv",'name':"__dt__8cM3dGLinFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB5A4,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB5EC,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB634,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB6A4,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB700,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB770,'size':144,'pad':0,'label':"CreateHeap__15daObj_BouMato_cFv",'name':"CreateHeap__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB800,'size':52,'pad':0,'label':"Delete__15daObj_BouMato_cFv",'name':"Delete__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBB834,'size':1356,'pad':0,'label':"Execute__15daObj_BouMato_cFv",'name':"Execute__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBBD80,'size':208,'pad':0,'label':"Draw__15daObj_BouMato_cFv",'name':"Draw__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBBE50,'size':32,'pad':0,'label':"createHeapCallBack__15daObj_BouMato_cFP10fopAc_ac_c",'name':"createHeapCallBack__15daObj_BouMato_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBBE70,'size':48,'pad':0,'label':"tgHitCallBack__15daObj_BouMato_cFP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf",'name':"tgHitCallBack__15daObj_BouMato_cFP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBBEA0,'size':172,'pad':0,'label':"srchArrow__15daObj_BouMato_cFPvPv",'name':"srchArrow__15daObj_BouMato_cFPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBBF4C,'size':172,'pad':0,'label':"deleteStuckArrow__15daObj_BouMato_cFv",'name':"deleteStuckArrow__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBBFF8,'size':16,'pad':0,'label':"getResName__15daObj_BouMato_cFv",'name':"getResName__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC008,'size':404,'pad':0,'label':"setSwayParam__15daObj_BouMato_cFP10fopAc_ac_c",'name':"setSwayParam__15daObj_BouMato_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC19C,'size':92,'pad':0,'label':"setEnvTevColor__15daObj_BouMato_cFv",'name':"setEnvTevColor__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC1F8,'size':68,'pad':0,'label':"setRoomNo__15daObj_BouMato_cFv",'name':"setRoomNo__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC23C,'size':132,'pad':0,'label':"setMtx__15daObj_BouMato_cFv",'name':"setMtx__15daObj_BouMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC2C0,'size':32,'pad':0,'label':"daObj_BouMato_Create__FPv",'name':"daObj_BouMato_Create__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC2E0,'size':32,'pad':0,'label':"daObj_BouMato_Delete__FPv",'name':"daObj_BouMato_Delete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC300,'size':32,'pad':0,'label':"daObj_BouMato_Execute__FPv",'name':"daObj_BouMato_Execute__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC320,'size':32,'pad':0,'label':"daObj_BouMato_Draw__FPv",'name':"daObj_BouMato_Draw__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC340,'size':8,'pad':0,'label':"daObj_BouMato_IsDelete__FPv",'name':"daObj_BouMato_IsDelete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BBC348,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC390,'size':116,'pad':0,'label':"__sinit_d_a_obj_boumato_cpp",'name':"__sinit_d_a_obj_boumato_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80BBC404,'size':72,'pad':0,'label':"__dt__21daObj_BouMato_Param_cFv",'name':"__dt__21daObj_BouMato_Param_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC44C,'size':8,'pad':0,'label':"func_80BBC44C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC454,'size':8,'pad':0,'label':"func_80BBC454",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BBC45C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BBC464,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BBC470,'size':28,'pad':0,'label':"m__21daObj_BouMato_Param_c",'name':"m__21daObj_BouMato_Param_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC48C,'size':48,'pad':0,'label':"l_ccDObjData",'name':"l_ccDObjData",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC4BC,'size':4,'pad':0,'label':"lit_3956",'name':"@3956",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4C0,'size':4,'pad':0,'label':"lit_3957",'name':"@3957",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4C4,'size':4,'pad':0,'label':"lit_3958",'name':"@3958",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4C8,'size':4,'pad':0,'label':"lit_3959",'name':"@3959",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4CC,'size':4,'pad':0,'label':"lit_4241",'name':"@4241",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4D0,'size':4,'pad':0,'label':"lit_4242",'name':"@4242",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4D4,'size':4,'pad':0,'label':"lit_4243",'name':"@4243",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4D8,'size':4,'pad':0,'label':"lit_4244",'name':"@4244",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC4DC,'size':4,'pad':0,'label':"lit_4245",'name':"@4245",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4E0,'size':4,'pad':0,'label':"lit_4246",'name':"@4246",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4E4,'size':4,'pad':0,'label':"lit_4247",'name':"@4247",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4E8,'size':4,'pad':0,'label':"lit_4248",'name':"@4248",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4EC,'size':4,'pad':0,'label':"lit_4249",'name':"@4249",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4F0,'size':4,'pad':0,'label':"lit_4250",'name':"@4250",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4F4,'size':4,'pad':0,'label':"lit_4266",'name':"@4266",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC4F8,'size':12,'pad':0,'label':"lit_4327",'name':"@4327",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC504,'size':4,'pad':0,'label':"lit_4355",'name':"@4355",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC508,'size':4,'pad':4,'label':"lit_4356",'name':"@4356",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BBC510,'size':8,'pad':0,'label':"lit_4359",'name':"@4359",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC518,'size':19,'pad':0,'label':"d_a_obj_boumato__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BBC52C,'size':68,'pad':0,'label':"l_ccDCyl",'name':"l_ccDCyl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC570,'size':4,'pad':0,'label':"l_resName",'name':"l_resName",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BBC574,'size':24,'pad':0,'label':"jntCoOffset",'name':"jntCoOffset$4044",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC58C,'size':12,'pad':0,'label':"jntCoData",'name':"jntCoData$4045",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BBC598,'size':32,'pad':0,'label':"daObj_BouMato_MethodTable",'name':"daObj_BouMato_MethodTable",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BBC5B8,'size':48,'pad':0,'label':"g_profile_OBJ_BOUMATO",'name':"g_profile_OBJ_BOUMATO",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BBC5E8,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC60C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC618,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC624,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC630,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC63C,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC648,'size':12,'pad':0,'label':"__vt__8cM3dGLin",'name':"__vt__8cM3dGLin",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC654,'size':12,'pad':0,'label':"__vt__15daObj_BouMato_c",'name':"__vt__15daObj_BouMato_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC660,'size':12,'pad':0,'label':"__vt__21daObj_BouMato_Param_c",'name':"__vt__21daObj_BouMato_Param_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BBC670,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC678,'size':400,'pad':0,'label':"l_findActorPtrs",'name':"l_findActorPtrs",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC808,'size':4,'pad':0,'label':"l_findCount",'name':"l_findCount",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC80C,'size':12,'pad':0,'label':"lit_3830",'name':"@3830",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BBC818,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__15daObj_BouMato_cFv":5,
	"__dt__5csXyzFv":6,
	"create__15daObj_BouMato_cFv":7,
	"__ct__5csXyzFv":8,
	"__dt__8cM3dGLinFv":9,
	"__dt__8cM3dGCylFv":10,
	"__dt__8cM3dGAabFv":11,
	"__dt__12dBgS_AcchCirFv":12,
	"__dt__10dCcD_GSttsFv":13,
	"__dt__12dBgS_ObjAcchFv":14,
	"CreateHeap__15daObj_BouMato_cFv":15,
	"Delete__15daObj_BouMato_cFv":16,
	"Execute__15daObj_BouMato_cFv":17,
	"Draw__15daObj_BouMato_cFv":18,
	"createHeapCallBack__15daObj_BouMato_cFP10fopAc_ac_c":19,
	"tgHitCallBack__15daObj_BouMato_cFP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf":20,
	"srchArrow__15daObj_BouMato_cFPvPv":21,
	"deleteStuckArrow__15daObj_BouMato_cFv":22,
	"getResName__15daObj_BouMato_cFv":23,
	"setSwayParam__15daObj_BouMato_cFP10fopAc_ac_c":24,
	"setEnvTevColor__15daObj_BouMato_cFv":25,
	"setRoomNo__15daObj_BouMato_cFv":26,
	"setMtx__15daObj_BouMato_cFv":27,
	"daObj_BouMato_Create__FPv":28,
	"daObj_BouMato_Delete__FPv":29,
	"daObj_BouMato_Execute__FPv":30,
	"daObj_BouMato_Draw__FPv":31,
	"daObj_BouMato_IsDelete__FPv":32,
	"__dt__10cCcD_GSttsFv":33,
	"__sinit_d_a_obj_boumato_cpp":34,
	"__dt__21daObj_BouMato_Param_cFv":35,
	"func_80BBC44C":36,
	"func_80BBC454":37,
	"_ctors":38,
	"_dtors":39,
	"m__21daObj_BouMato_Param_c":40,
	"l_ccDObjData":41,
	"lit_3956":42,
	"lit_3957":43,
	"lit_3958":44,
	"lit_3959":45,
	"lit_4241":46,
	"lit_4242":47,
	"lit_4243":48,
	"lit_4244":49,
	"lit_4245":50,
	"lit_4246":51,
	"lit_4247":52,
	"lit_4248":53,
	"lit_4249":54,
	"lit_4250":55,
	"lit_4266":56,
	"lit_4327":57,
	"lit_4355":58,
	"lit_4356":59,
	"lit_4359":60,
	"d_a_obj_boumato__stringBase0":61,
	"l_ccDCyl":62,
	"l_resName":63,
	"jntCoOffset":64,
	"jntCoData":65,
	"daObj_BouMato_MethodTable":66,
	"g_profile_OBJ_BOUMATO":67,
	"__vt__12dBgS_ObjAcch":68,
	"__vt__10cCcD_GStts":69,
	"__vt__10dCcD_GStts":70,
	"__vt__12dBgS_AcchCir":71,
	"__vt__8cM3dGAab":72,
	"__vt__8cM3dGCyl":73,
	"__vt__8cM3dGLin":74,
	"__vt__15daObj_BouMato_c":75,
	"__vt__21daObj_BouMato_Param_c":76,
	"__global_destructor_chain":77,
	"l_findActorPtrs":78,
	"l_findCount":79,
	"lit_3830":80,
	"l_HIO":81,
}

