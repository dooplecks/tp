#
# Generate By: dol2asm
# Module: 678
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_warp_obrg",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_obj_warp_obrg",
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
	{'addr':0x80D29940,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2996C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D29998,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D299B8,'size':72,'pad':0,'label':"initBaseMtx__15daObjWarpOBrg_cFv",'name':"initBaseMtx__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D29A00,'size':204,'pad':0,'label':"setBaseMtx__15daObjWarpOBrg_cFv",'name':"setBaseMtx__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D29ACC,'size':232,'pad':0,'label':"Create__15daObjWarpOBrg_cFv",'name':"Create__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D29BB4,'size':640,'pad':0,'label':"CreateHeap__15daObjWarpOBrg_cFv",'name':"CreateHeap__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D29E34,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D29E7C,'size':396,'pad':0,'label':"create1st__15daObjWarpOBrg_cFv",'name':"create1st__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2A008,'size':68,'pad':0,'label':"Execute__15daObjWarpOBrg_cFPPA3_A4_f",'name':"Execute__15daObjWarpOBrg_cFPPA3_A4_f",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2A04C,'size':328,'pad':0,'label':"event_proc_call__15daObjWarpOBrg_cFv",'name':"event_proc_call__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2A194,'size':824,'pad':0,'label':"actionWait__15daObjWarpOBrg_cFv",'name':"actionWait__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2A4CC,'size':628,'pad':0,'label':"actionOrderEvent__15daObjWarpOBrg_cFv",'name':"actionOrderEvent__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2A740,'size':132,'pad':0,'label':"actionTalkEvent__15daObjWarpOBrg_cFv",'name':"actionTalkEvent__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2A7C4,'size':376,'pad':0,'label':"actionWarpEvent__15daObjWarpOBrg_cFv",'name':"actionWarpEvent__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2A93C,'size':168,'pad':0,'label':"actionOrderEventDst__15daObjWarpOBrg_cFv",'name':"actionOrderEventDst__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2A9E4,'size':76,'pad':0,'label':"actionWarpEventDst__15daObjWarpOBrg_cFv",'name':"actionWarpEventDst__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2AA30,'size':4,'pad':0,'label':"actionDead__15daObjWarpOBrg_cFv",'name':"actionDead__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D2AA34,'size':2440,'pad':0,'label':"demoProc__15daObjWarpOBrg_cFv",'name':"demoProc__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B3BC,'size':376,'pad':0,'label':"checkTalkDistance__15daObjWarpOBrg_cFv",'name':"checkTalkDistance__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B534,'size':148,'pad':0,'label':"calcMidnaWaitPos__15daObjWarpOBrg_cFv",'name':"calcMidnaWaitPos__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B5C8,'size':248,'pad':0,'label':"Draw__15daObjWarpOBrg_cFv",'name':"Draw__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B6C0,'size':52,'pad':0,'label':"Delete__15daObjWarpOBrg_cFv",'name':"Delete__15daObjWarpOBrg_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B6F4,'size':116,'pad':0,'label':"daObjWarpOBrg_create1st__FP15daObjWarpOBrg_c",'name':"daObjWarpOBrg_create1st__FP15daObjWarpOBrg_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B768,'size':32,'pad':0,'label':"daObjWarpOBrg_MoveBGDelete__FP15daObjWarpOBrg_c",'name':"daObjWarpOBrg_MoveBGDelete__FP15daObjWarpOBrg_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B788,'size':32,'pad':0,'label':"daObjWarpOBrg_MoveBGExecute__FP15daObjWarpOBrg_c",'name':"daObjWarpOBrg_MoveBGExecute__FP15daObjWarpOBrg_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B7A8,'size':44,'pad':0,'label':"daObjWarpOBrg_MoveBGDraw__FP15daObjWarpOBrg_c",'name':"daObjWarpOBrg_MoveBGDraw__FP15daObjWarpOBrg_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B7D4,'size':28,'pad':0,'label':"func_80D2B7D4",'name':"cLib_calcTimer<Uc>__FPUc",'lib':-1,'tu':4,'section':0,'class_template':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2B7F0,'size':4,'pad':0,'label':"data_80D2B7F0",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B7F4,'size':4,'pad':0,'label':"data_80D2B7F4",'name':None,'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B7F8,'size':8,'pad':0,'label':"l_bmd_idx",'name':"l_bmd_idx",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B800,'size':8,'pad':0,'label':"l_dzb_idx",'name':"l_dzb_idx",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B808,'size':8,'pad':0,'label':"l_bck_idx",'name':"l_bck_idx",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B810,'size':8,'pad':0,'label':"l_btk_idx",'name':"l_btk_idx",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B818,'size':10,'pad':2,'label':"l_beam_eff",'name':"l_beam_eff",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B824,'size':10,'pad':2,'label':"l_disapp_eff",'name':"l_disapp_eff",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B830,'size':6,'pad':2,'label':"l_app_eff",'name':"l_app_eff",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B838,'size':12,'pad':0,'label':"l_midna_wait_offset",'name':"l_midna_wait_offset",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B844,'size':4,'pad':0,'label':"lit_3834",'name':"@3834",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B848,'size':8,'pad':0,'label':"lit_3836",'name':"@3836",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B850,'size':4,'pad':0,'label':"lit_3882",'name':"@3882",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B854,'size':4,'pad':0,'label':"lit_3883",'name':"@3883",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B858,'size':8,'pad':0,'label':"lit_3885",'name':"@3885",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B860,'size':8,'pad':0,'label':"lit_3999",'name':"@3999",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B868,'size':8,'pad':0,'label':"lit_4000",'name':"@4000",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B870,'size':8,'pad':0,'label':"lit_4001",'name':"@4001",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B878,'size':4,'pad':0,'label':"lit_4002",'name':"@4002",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B87C,'size':4,'pad':0,'label':"lit_4003",'name':"@4003",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B880,'size':4,'pad':0,'label':"lit_4004",'name':"@4004",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B884,'size':4,'pad':0,'label':"lit_4599",'name':"@4599",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B888,'size':4,'pad':0,'label':"lit_4600",'name':"@4600",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B88C,'size':4,'pad':0,'label':"lit_4601",'name':"@4601",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B890,'size':4,'pad':0,'label':"lit_4602",'name':"@4602",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B894,'size':4,'pad':0,'label':"lit_4603",'name':"@4603",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B898,'size':4,'pad':0,'label':"lit_4604",'name':"@4604",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B89C,'size':4,'pad':0,'label':"lit_4605",'name':"@4605",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B8A0,'size':4,'pad':0,'label':"lit_4606",'name':"@4606",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B8A4,'size':4,'pad':0,'label':"lit_4607",'name':"@4607",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B8A8,'size':4,'pad':0,'label':"lit_4666",'name':"@4666",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B8AC,'size':104,'pad':0,'label':"struct_80D2B8AC",'name':None,'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80D2B914,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B920,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2B934,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B938,'size':8,'pad':0,'label':"l_portal_warp_name",'name':"l_portal_warp_name",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B940,'size':8,'pad':0,'label':"l_staff_name",'name':"l_staff_name",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B948,'size':12,'pad':0,'label':"lit_3894",'name':"@3894",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B954,'size':12,'pad':0,'label':"lit_3895",'name':"@3895",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B960,'size':12,'pad':0,'label':"lit_3896",'name':"@3896",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B96C,'size':12,'pad':0,'label':"lit_3897",'name':"@3897",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B978,'size':12,'pad':0,'label':"lit_3898",'name':"@3898",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B984,'size':12,'pad':0,'label':"lit_3899",'name':"@3899",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B990,'size':12,'pad':0,'label':"lit_3900",'name':"@3900",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2B99C,'size':84,'pad':0,'label':"data_80D2B99C",'name':"l_func$3893",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D2B9F0,'size':16,'pad':0,'label':"action_table",'name':"action_table$4165",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2BA00,'size':32,'pad':0,'label':"daObjWarpOBrg_METHODS",'name':"daObjWarpOBrg_METHODS",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2BA20,'size':48,'pad':0,'label':"g_profile_Obj_OrdinBrg",'name':"g_profile_Obj_OrdinBrg",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D2BA50,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D2BA5C,'size':40,'pad':0,'label':"__vt__15daObjWarpOBrg_c",'name':"__vt__15daObjWarpOBrg_c",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D2BA88,'size':4,'pad':0,'label':"data_80D2BA88",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"initBaseMtx__15daObjWarpOBrg_cFv":3,
	"setBaseMtx__15daObjWarpOBrg_cFv":4,
	"Create__15daObjWarpOBrg_cFv":5,
	"CreateHeap__15daObjWarpOBrg_cFv":6,
	"__dt__12J3DFrameCtrlFv":7,
	"create1st__15daObjWarpOBrg_cFv":8,
	"Execute__15daObjWarpOBrg_cFPPA3_A4_f":9,
	"event_proc_call__15daObjWarpOBrg_cFv":10,
	"actionWait__15daObjWarpOBrg_cFv":11,
	"actionOrderEvent__15daObjWarpOBrg_cFv":12,
	"actionTalkEvent__15daObjWarpOBrg_cFv":13,
	"actionWarpEvent__15daObjWarpOBrg_cFv":14,
	"actionOrderEventDst__15daObjWarpOBrg_cFv":15,
	"actionWarpEventDst__15daObjWarpOBrg_cFv":16,
	"actionDead__15daObjWarpOBrg_cFv":17,
	"demoProc__15daObjWarpOBrg_cFv":18,
	"checkTalkDistance__15daObjWarpOBrg_cFv":19,
	"calcMidnaWaitPos__15daObjWarpOBrg_cFv":20,
	"Draw__15daObjWarpOBrg_cFv":21,
	"Delete__15daObjWarpOBrg_cFv":22,
	"daObjWarpOBrg_create1st__FP15daObjWarpOBrg_c":23,
	"daObjWarpOBrg_MoveBGDelete__FP15daObjWarpOBrg_c":24,
	"daObjWarpOBrg_MoveBGExecute__FP15daObjWarpOBrg_c":25,
	"daObjWarpOBrg_MoveBGDraw__FP15daObjWarpOBrg_c":26,
	"func_80D2B7D4":27,
	"data_80D2B7F0":28,
	"data_80D2B7F4":29,
	"l_bmd_idx":30,
	"l_dzb_idx":31,
	"l_bck_idx":32,
	"l_btk_idx":33,
	"l_beam_eff":34,
	"l_disapp_eff":35,
	"l_app_eff":36,
	"l_midna_wait_offset":37,
	"lit_3834":38,
	"lit_3836":39,
	"lit_3882":40,
	"lit_3883":41,
	"lit_3885":42,
	"lit_3999":43,
	"lit_4000":44,
	"lit_4001":45,
	"lit_4002":46,
	"lit_4003":47,
	"lit_4004":48,
	"lit_4599":49,
	"lit_4600":50,
	"lit_4601":51,
	"lit_4602":52,
	"lit_4603":53,
	"lit_4604":54,
	"lit_4605":55,
	"lit_4606":56,
	"lit_4607":57,
	"lit_4666":58,
	"struct_80D2B8AC":59,
	"cNullVec__6Z2Calc":60,
	"lit_1787":61,
	"l_arcName":62,
	"l_portal_warp_name":63,
	"l_staff_name":64,
	"lit_3894":65,
	"lit_3895":66,
	"lit_3896":67,
	"lit_3897":68,
	"lit_3898":69,
	"lit_3899":70,
	"lit_3900":71,
	"data_80D2B99C":72,
	"action_table":73,
	"daObjWarpOBrg_METHODS":74,
	"g_profile_Obj_OrdinBrg":75,
	"__vt__12J3DFrameCtrl":76,
	"__vt__15daObjWarpOBrg_c":77,
	"data_80D2BA88":78,
}

