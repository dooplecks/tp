#
# Generate By: dol2asm
# Module: 664
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_tobyhouse",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_tobyhouse",
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
	{'addr':0x80D159C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D159EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15A18,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15A38,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15A54,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15AAC,'size':764,'pad':0,'label':"s_b_sub__FPvPv",'name':"s_b_sub__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15DA8,'size':240,'pad':0,'label':"nodeCallBack__FP8J3DJointi",'name':"nodeCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15E98,'size':116,'pad':0,'label':"eventCallBack__FPvi",'name':"eventCallBack__FPvi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15F0C,'size':60,'pad':0,'label':"initBaseMtx__16daObjTobyHouse_cFv",'name':"initBaseMtx__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15F48,'size':152,'pad':0,'label':"setBaseMtx__16daObjTobyHouse_cFv",'name':"setBaseMtx__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D15FE0,'size':452,'pad':0,'label':"Create__16daObjTobyHouse_cFv",'name':"Create__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D161A4,'size':516,'pad':0,'label':"CreateHeap__16daObjTobyHouse_cFv",'name':"CreateHeap__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D163A8,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D163F0,'size':208,'pad':0,'label':"create1st__16daObjTobyHouse_cFv",'name':"create1st__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D164C0,'size':160,'pad':0,'label':"Execute__16daObjTobyHouse_cFPPA3_A4_f",'name':"Execute__16daObjTobyHouse_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D16560,'size':188,'pad':0,'label':"action__16daObjTobyHouse_cFv",'name':"action__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1661C,'size':196,'pad':0,'label':"actionWait__16daObjTobyHouse_cFv",'name':"actionWait__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D166E0,'size':220,'pad':0,'label':"actionOrderEvent__16daObjTobyHouse_cFv",'name':"actionOrderEvent__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D167BC,'size':164,'pad':0,'label':"actionEvent__16daObjTobyHouse_cFv",'name':"actionEvent__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D16860,'size':4,'pad':0,'label':"actionDead__16daObjTobyHouse_cFv",'name':"actionDead__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D16864,'size':2396,'pad':0,'label':"demoProc__16daObjTobyHouse_cFv",'name':"demoProc__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D171C0,'size':112,'pad':0,'label':"sceneChange__16daObjTobyHouse_cFv",'name':"sceneChange__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17230,'size':324,'pad':0,'label':"Draw__16daObjTobyHouse_cFv",'name':"Draw__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17374,'size':388,'pad':0,'label':"checkLODModel__16daObjTobyHouse_cFv",'name':"checkLODModel__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D174F8,'size':288,'pad':0,'label':"Delete__16daObjTobyHouse_cFv",'name':"Delete__16daObjTobyHouse_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17618,'size':96,'pad':0,'label':"daObjTobyHouse_create1st__FP16daObjTobyHouse_c",'name':"daObjTobyHouse_create1st__FP16daObjTobyHouse_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17678,'size':32,'pad':0,'label':"daObjTobyHouse_MoveBGDelete__FP16daObjTobyHouse_c",'name':"daObjTobyHouse_MoveBGDelete__FP16daObjTobyHouse_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17698,'size':32,'pad':0,'label':"daObjTobyHouse_MoveBGExecute__FP16daObjTobyHouse_c",'name':"daObjTobyHouse_MoveBGExecute__FP16daObjTobyHouse_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D176B8,'size':44,'pad':0,'label':"daObjTobyHouse_MoveBGDraw__FP16daObjTobyHouse_c",'name':"daObjTobyHouse_MoveBGDraw__FP16daObjTobyHouse_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D176E4,'size':28,'pad':0,'label':"func_80D176E4",'name':"cLib_calcTimer<Uc>__FPUc",'lib':-1,'tu':3,'section':0,'class_template':True,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D17700,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1773C,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80D17740,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80D1774C,'size':8,'pad':0,'label':"l_bmd",'name':"l_bmd",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17754,'size':8,'pad':0,'label':"l_dzb",'name':"l_dzb",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1775C,'size':8,'pad':0,'label':"l_LodBmd",'name':"l_LodBmd",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17764,'size':12,'pad':0,'label':"l_bck",'name':"l_bck",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17770,'size':4,'pad':0,'label':"lit_4046",'name':"@4046",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17774,'size':8,'pad':0,'label':"lit_4047",'name':"@4047",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1777C,'size':8,'pad':0,'label':"lit_4048",'name':"@4048",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17784,'size':8,'pad':0,'label':"lit_4049",'name':"@4049",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D1778C,'size':4,'pad':0,'label':"lit_4050",'name':"@4050",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D17790,'size':4,'pad':0,'label':"lit_4193",'name':"@4193",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D17794,'size':4,'pad':0,'label':"lit_4194",'name':"@4194",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D17798,'size':4,'pad':0,'label':"lit_4251",'name':"@4251",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D1779C,'size':4,'pad':0,'label':"lit_4287",'name':"@4287",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D177A0,'size':4,'pad':0,'label':"lit_4769",'name':"@4769",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D177A4,'size':4,'pad':0,'label':"lit_4770",'name':"@4770",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D177A8,'size':4,'pad':0,'label':"lit_4771",'name':"@4771",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D177AC,'size':4,'pad':0,'label':"lit_4772",'name':"@4772",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D177B0,'size':4,'pad':0,'label':"lit_4773",'name':"@4773",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D177B4,'size':8,'pad':0,'label':"lit_4776",'name':"@4776",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D177BC,'size':4,'pad':0,'label':"lit_4905",'name':"@4905",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D177C0,'size':152,'pad':0,'label':"d_a_obj_tobyhouse__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80D17858,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17864,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D17878,'size':8,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D17880,'size':4,'pad':0,'label':"l_staff_name",'name':"l_staff_name",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D17884,'size':8,'pad':0,'label':"l_event_name",'name':"l_event_name",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D1788C,'size':12,'pad':0,'label':"lit_4292",'name':"@4292",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D17898,'size':12,'pad':0,'label':"lit_4293",'name':"@4293",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D178A4,'size':12,'pad':0,'label':"lit_4294",'name':"@4294",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D178B0,'size':12,'pad':0,'label':"lit_4295",'name':"@4295",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D178BC,'size':48,'pad':0,'label':"l_func",'name':"l_func$4291",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D178EC,'size':28,'pad':0,'label':"action_table",'name':"action_table$4349",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D17908,'size':12,'pad':0,'label':"l_shotSmokeOffset",'name':"l_shotSmokeOffset$4354",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17914,'size':28,'pad':0,'label':"lit_4774",'name':"@4774",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D17930,'size':32,'pad':0,'label':"daObjTobyHouse_METHODS",'name':"daObjTobyHouse_METHODS",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D17950,'size':48,'pad':0,'label':"g_profile_Obj_TobyHouse",'name':"g_profile_Obj_TobyHouse",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D17980,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D1798C,'size':40,'pad':0,'label':"__vt__16daObjTobyHouse_c",'name':"__vt__16daObjTobyHouse_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D179B8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179C0,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179C4,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179C8,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179CC,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179D0,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179D4,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179D8,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179DC,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179E0,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179E4,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179E8,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179EC,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179F0,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179F4,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179F8,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D179FC,'size':4,'pad':0,'label':"struct_80D179FC",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80D17A00,'size':12,'pad':4,'label':"lit_4351",'name':"@4351",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A10,'size':12,'pad':0,'label':"l_shotSmokeScale",'name':"l_shotSmokeScale$4350",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A1C,'size':4,'pad':0,'label':"data_80D17A1C",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A20,'size':4,'pad':0,'label':"data_80D17A20",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A24,'size':4,'pad':0,'label':"data_80D17A24",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A28,'size':4,'pad':0,'label':"data_80D17A28",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A2C,'size':4,'pad':0,'label':"data_80D17A2C",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A30,'size':4,'pad':0,'label':"data_80D17A30",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A34,'size':4,'pad':0,'label':"data_80D17A34",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A38,'size':4,'pad':0,'label':"data_80D17A38",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A3C,'size':4,'pad':0,'label':"data_80D17A3C",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A40,'size':4,'pad':0,'label':"data_80D17A40",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A44,'size':4,'pad':0,'label':"data_80D17A44",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A48,'size':4,'pad':0,'label':"data_80D17A48",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A4C,'size':4,'pad':0,'label':"data_80D17A4C",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A50,'size':4,'pad':0,'label':"data_80D17A50",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A54,'size':4,'pad':0,'label':"data_80D17A54",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A58,'size':4,'pad':0,'label':"data_80D17A58",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A5C,'size':4,'pad':0,'label':"data_80D17A5C",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A60,'size':4,'pad':0,'label':"data_80D17A60",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A64,'size':4,'pad':0,'label':"data_80D17A64",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A68,'size':4,'pad':0,'label':"data_80D17A68",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A6C,'size':4,'pad':0,'label':"data_80D17A6C",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A70,'size':4,'pad':0,'label':"data_80D17A70",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A74,'size':4,'pad':0,'label':"data_80D17A74",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A78,'size':4,'pad':0,'label':"data_80D17A78",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D17A7C,'size':4,'pad':0,'label':"data_80D17A7C",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"s_b_sub__FPvPv":5,
	"nodeCallBack__FP8J3DJointi":6,
	"eventCallBack__FPvi":7,
	"initBaseMtx__16daObjTobyHouse_cFv":8,
	"setBaseMtx__16daObjTobyHouse_cFv":9,
	"Create__16daObjTobyHouse_cFv":10,
	"CreateHeap__16daObjTobyHouse_cFv":11,
	"__dt__12J3DFrameCtrlFv":12,
	"create1st__16daObjTobyHouse_cFv":13,
	"Execute__16daObjTobyHouse_cFPPA3_A4_f":14,
	"action__16daObjTobyHouse_cFv":15,
	"actionWait__16daObjTobyHouse_cFv":16,
	"actionOrderEvent__16daObjTobyHouse_cFv":17,
	"actionEvent__16daObjTobyHouse_cFv":18,
	"actionDead__16daObjTobyHouse_cFv":19,
	"demoProc__16daObjTobyHouse_cFv":20,
	"sceneChange__16daObjTobyHouse_cFv":21,
	"Draw__16daObjTobyHouse_cFv":22,
	"checkLODModel__16daObjTobyHouse_cFv":23,
	"Delete__16daObjTobyHouse_cFv":24,
	"daObjTobyHouse_create1st__FP16daObjTobyHouse_c":25,
	"daObjTobyHouse_MoveBGDelete__FP16daObjTobyHouse_c":26,
	"daObjTobyHouse_MoveBGExecute__FP16daObjTobyHouse_c":27,
	"daObjTobyHouse_MoveBGDraw__FP16daObjTobyHouse_c":28,
	"func_80D176E4":29,
	"__dt__4cXyzFv":30,
	"_ctors":31,
	"_dtors":32,
	"l_bmd":33,
	"l_dzb":34,
	"l_LodBmd":35,
	"l_bck":36,
	"lit_4046":37,
	"lit_4047":38,
	"lit_4048":39,
	"lit_4049":40,
	"lit_4050":41,
	"lit_4193":42,
	"lit_4194":43,
	"lit_4251":44,
	"lit_4287":45,
	"lit_4769":46,
	"lit_4770":47,
	"lit_4771":48,
	"lit_4772":49,
	"lit_4773":50,
	"lit_4776":51,
	"lit_4905":52,
	"d_a_obj_tobyhouse__stringBase0":53,
	"cNullVec__6Z2Calc":54,
	"lit_1787":55,
	"l_arcName":56,
	"l_staff_name":57,
	"l_event_name":58,
	"lit_4292":59,
	"lit_4293":60,
	"lit_4294":61,
	"lit_4295":62,
	"l_func":63,
	"action_table":64,
	"l_shotSmokeOffset":65,
	"lit_4774":66,
	"daObjTobyHouse_METHODS":67,
	"g_profile_Obj_TobyHouse":68,
	"__vt__12J3DFrameCtrl":69,
	"__vt__16daObjTobyHouse_c":70,
	"__global_destructor_chain":71,
	"lit_1109":72,
	"lit_1107":73,
	"lit_1105":74,
	"lit_1104":75,
	"lit_1099":76,
	"lit_1097":77,
	"lit_1095":78,
	"lit_1094":79,
	"lit_1057":80,
	"lit_1055":81,
	"lit_1053":82,
	"lit_1052":83,
	"lit_1014":84,
	"lit_1012":85,
	"lit_1010":86,
	"struct_80D179FC":87,
	"lit_4351":88,
	"l_shotSmokeScale":89,
	"data_80D17A1C":90,
	"data_80D17A20":91,
	"data_80D17A24":92,
	"data_80D17A28":93,
	"data_80D17A2C":94,
	"data_80D17A30":95,
	"data_80D17A34":96,
	"data_80D17A38":97,
	"data_80D17A3C":98,
	"data_80D17A40":99,
	"data_80D17A44":100,
	"data_80D17A48":101,
	"data_80D17A4C":102,
	"data_80D17A50":103,
	"data_80D17A54":104,
	"data_80D17A58":105,
	"data_80D17A5C":106,
	"data_80D17A60":107,
	"data_80D17A64":108,
	"data_80D17A68":109,
	"data_80D17A6C":110,
	"data_80D17A70":111,
	"data_80D17A74":112,
	"data_80D17A78":113,
	"data_80D17A7C":114,
}

