#
# Generate By: dol2asm
# Module: 624
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_smtile",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_smtile",
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
	{'addr':0x80CDD1C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD1EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD218,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD238,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD254,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD2AC,'size':256,'pad':0,'label':"__dt__14daObj_SMTile_cFv",'name':"__dt__14daObj_SMTile_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD3AC,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD3E8,'size':408,'pad':0,'label':"create__14daObj_SMTile_cFv",'name':"create__14daObj_SMTile_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD580,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CDD584,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD5CC,'size':284,'pad':0,'label':"CreateHeap__14daObj_SMTile_cFv",'name':"CreateHeap__14daObj_SMTile_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD6E8,'size':52,'pad':0,'label':"Delete__14daObj_SMTile_cFv",'name':"Delete__14daObj_SMTile_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDD71C,'size':892,'pad':0,'label':"Execute__14daObj_SMTile_cFv",'name':"Execute__14daObj_SMTile_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDDA98,'size':144,'pad':0,'label':"Draw__14daObj_SMTile_cFv",'name':"Draw__14daObj_SMTile_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDDB28,'size':32,'pad':0,'label':"createHeapCallBack__14daObj_SMTile_cFP10fopAc_ac_c",'name':"createHeapCallBack__14daObj_SMTile_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDDB48,'size':480,'pad':0,'label':"setDstPos__14daObj_SMTile_cFv",'name':"setDstPos__14daObj_SMTile_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDDD28,'size':468,'pad':0,'label':"setPrtcls__14daObj_SMTile_cFii",'name':"setPrtcls__14daObj_SMTile_cFii",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDDEFC,'size':684,'pad':0,'label':"touchPrtcls__14daObj_SMTile_cFf",'name':"touchPrtcls__14daObj_SMTile_cFf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDE1A8,'size':116,'pad':0,'label':"setMtx__14daObj_SMTile_cFv",'name':"setMtx__14daObj_SMTile_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDE21C,'size':32,'pad':0,'label':"daObj_SMTile_Create__FPv",'name':"daObj_SMTile_Create__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDE23C,'size':32,'pad':0,'label':"daObj_SMTile_Delete__FPv",'name':"daObj_SMTile_Delete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDE25C,'size':32,'pad':0,'label':"daObj_SMTile_Execute__FPv",'name':"daObj_SMTile_Execute__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDE27C,'size':32,'pad':0,'label':"daObj_SMTile_Draw__FPv",'name':"daObj_SMTile_Draw__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDE29C,'size':8,'pad':0,'label':"daObj_SMTile_IsDelete__FPv",'name':"daObj_SMTile_IsDelete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CDE2A4,'size':28,'pad':0,'label':"func_80CDE2A4",'name':"cLib_calcTimer<i>__FPi",'lib':-1,'tu':3,'section':0,'class_template':True,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDE2C0,'size':64,'pad':0,'label':"__sinit_d_a_obj_smtile_cpp",'name':"__sinit_d_a_obj_smtile_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80CDE300,'size':72,'pad':0,'label':"__dt__20daObj_SMTile_Param_cFv",'name':"__dt__20daObj_SMTile_Param_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CDE348,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CDE350,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CDE35C,'size':8,'pad':0,'label':"m__20daObj_SMTile_Param_c",'name':"m__20daObj_SMTile_Param_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CDE364,'size':4,'pad':0,'label':"lit_3892",'name':"@3892",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CDE368,'size':4,'pad':0,'label':"lit_3978",'name':"@3978",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CDE36C,'size':4,'pad':0,'label':"lit_3979",'name':"@3979",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CDE370,'size':4,'pad':0,'label':"lit_3980",'name':"@3980",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CDE374,'size':8,'pad':0,'label':"lit_3982",'name':"@3982",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CDE37C,'size':8,'pad':0,'label':"id",'name':"id$4105",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CDE384,'size':4,'pad':0,'label':"lit_4194",'name':"@4194",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CDE388,'size':10,'pad':0,'label':"d_a_obj_smtile__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CDE394,'size':8,'pad':0,'label':"l_bmdData",'name':"l_bmdData",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CDE39C,'size':8,'pad':0,'label':"l_resNameList",'name':"l_resNameList",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CDE3A4,'size':84,'pad':0,'label':"l_tileMoveData",'name':"l_tileMoveData",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CDE3F8,'size':32,'pad':0,'label':"daObj_SMTile_MethodTable",'name':"daObj_SMTile_MethodTable",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CDE418,'size':48,'pad':0,'label':"g_profile_OBJ_SMTILE",'name':"g_profile_OBJ_SMTILE",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CDE448,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CDE454,'size':12,'pad':0,'label':"__vt__14daObj_SMTile_c",'name':"__vt__14daObj_SMTile_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CDE460,'size':12,'pad':0,'label':"__vt__20daObj_SMTile_Param_c",'name':"__vt__20daObj_SMTile_Param_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CDE470,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CDE478,'size':12,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CDE484,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__14daObj_SMTile_cFv":5,
	"__dt__4cXyzFv":6,
	"create__14daObj_SMTile_cFv":7,
	"__ct__4cXyzFv":8,
	"__dt__12J3DFrameCtrlFv":9,
	"CreateHeap__14daObj_SMTile_cFv":10,
	"Delete__14daObj_SMTile_cFv":11,
	"Execute__14daObj_SMTile_cFv":12,
	"Draw__14daObj_SMTile_cFv":13,
	"createHeapCallBack__14daObj_SMTile_cFP10fopAc_ac_c":14,
	"setDstPos__14daObj_SMTile_cFv":15,
	"setPrtcls__14daObj_SMTile_cFii":16,
	"touchPrtcls__14daObj_SMTile_cFf":17,
	"setMtx__14daObj_SMTile_cFv":18,
	"daObj_SMTile_Create__FPv":19,
	"daObj_SMTile_Delete__FPv":20,
	"daObj_SMTile_Execute__FPv":21,
	"daObj_SMTile_Draw__FPv":22,
	"daObj_SMTile_IsDelete__FPv":23,
	"func_80CDE2A4":24,
	"__sinit_d_a_obj_smtile_cpp":25,
	"__dt__20daObj_SMTile_Param_cFv":26,
	"_ctors":27,
	"_dtors":28,
	"m__20daObj_SMTile_Param_c":29,
	"lit_3892":30,
	"lit_3978":31,
	"lit_3979":32,
	"lit_3980":33,
	"lit_3982":34,
	"id":35,
	"lit_4194":36,
	"d_a_obj_smtile__stringBase0":37,
	"l_bmdData":38,
	"l_resNameList":39,
	"l_tileMoveData":40,
	"daObj_SMTile_MethodTable":41,
	"g_profile_OBJ_SMTILE":42,
	"__vt__12J3DFrameCtrl":43,
	"__vt__14daObj_SMTile_c":44,
	"__vt__20daObj_SMTile_Param_c":45,
	"__global_destructor_chain":46,
	"lit_3805":47,
	"l_HIO":48,
}

