#
# Generate By: dol2asm
# Module: 477
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_hfuta",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_hfuta",
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
	{'addr':0x80C1DCA0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DCCC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DCF8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DD18,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DD34,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DD8C,'size':60,'pad':0,'label':"initBaseMtx__11daObjFuta_cFv",'name':"initBaseMtx__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DDC8,'size':204,'pad':0,'label':"setBaseMtx__11daObjFuta_cFv",'name':"setBaseMtx__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DE94,'size':152,'pad':0,'label':"Create__11daObjFuta_cFv",'name':"Create__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DF2C,'size':112,'pad':0,'label':"CreateHeap__11daObjFuta_cFv",'name':"CreateHeap__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1DF9C,'size':132,'pad':0,'label':"create1st__11daObjFuta_cFv",'name':"create1st__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1E020,'size':2780,'pad':0,'label':"Execute__11daObjFuta_cFPPA3_A4_f",'name':"Execute__11daObjFuta_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1EAFC,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1EB38,'size':164,'pad':0,'label':"mode_proc_call__11daObjFuta_cFv",'name':"mode_proc_call__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1EBDC,'size':104,'pad':0,'label':"mode_wait__11daObjFuta_cFv",'name':"mode_wait__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1EC44,'size':112,'pad':0,'label':"mode_move__11daObjFuta_cFv",'name':"mode_move__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1ECB4,'size':16,'pad':0,'label':"mode_end__11daObjFuta_cFv",'name':"mode_end__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1ECC4,'size':164,'pad':0,'label':"Draw__11daObjFuta_cFv",'name':"Draw__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1ED68,'size':52,'pad':0,'label':"Delete__11daObjFuta_cFv",'name':"Delete__11daObjFuta_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1ED9C,'size':96,'pad':0,'label':"daObjFuta_create1st__FP11daObjFuta_c",'name':"daObjFuta_create1st__FP11daObjFuta_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1EDFC,'size':32,'pad':0,'label':"daObjFuta_MoveBGDelete__FP11daObjFuta_c",'name':"daObjFuta_MoveBGDelete__FP11daObjFuta_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1EE1C,'size':32,'pad':0,'label':"daObjFuta_MoveBGExecute__FP11daObjFuta_c",'name':"daObjFuta_MoveBGExecute__FP11daObjFuta_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1EE3C,'size':44,'pad':0,'label':"daObjFuta_MoveBGDraw__FP11daObjFuta_c",'name':"daObjFuta_MoveBGDraw__FP11daObjFuta_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C1EE68,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C1EE6C,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C1EE78,'size':4,'pad':0,'label':"lit_3644",'name':"@3644",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EE7C,'size':4,'pad':0,'label':"lit_3645",'name':"@3645",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C1EE80,'size':4,'pad':0,'label':"lit_3646",'name':"@3646",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C1EE84,'size':4,'pad':0,'label':"lit_3985",'name':"@3985",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C1EE88,'size':4,'pad':0,'label':"lit_3995",'name':"@3995",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C1EE8C,'size':4,'pad':0,'label':"lit_3996",'name':"@3996",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C1EE90,'size':4,'pad':0,'label':"lit_3997",'name':"@3997",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C1EE94,'size':4,'pad':0,'label':"lit_3998",'name':"@3998",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C1EE98,'size':10,'pad':0,'label':"d_a_obj_hfuta__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C1EEA4,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EEB0,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C1EEC4,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C1EEC8,'size':12,'pad':0,'label':"lit_3966",'name':"@3966",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C1EED4,'size':12,'pad':0,'label':"lit_3967",'name':"@3967",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C1EEE0,'size':12,'pad':0,'label':"lit_3968",'name':"@3968",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C1EEEC,'size':36,'pad':0,'label':"l_func",'name':"l_func$3965",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EF10,'size':32,'pad':0,'label':"daObjFuta_METHODS",'name':"daObjFuta_METHODS",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C1EF30,'size':48,'pad':0,'label':"g_profile_Obj_Hfuta",'name':"g_profile_Obj_Hfuta",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C1EF60,'size':40,'pad':0,'label':"__vt__11daObjFuta_c",'name':"__vt__11daObjFuta_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C1EF88,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EF90,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EF94,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EF98,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EF9C,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFA0,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFA4,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFA8,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFAC,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFB0,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFB4,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFB8,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFBC,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFC0,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFC4,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFC8,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFCC,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFD0,'size':12,'pad':4,'label':"lit_3687",'name':"@3687",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFE0,'size':12,'pad':0,'label':"lit_3690",'name':"@3690",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFEC,'size':12,'pad':0,'label':"lit_3691",'name':"@3691",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1EFF8,'size':12,'pad':0,'label':"lit_3692",'name':"@3692",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F004,'size':12,'pad':0,'label':"lit_3693",'name':"@3693",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F010,'size':12,'pad':0,'label':"lit_3694",'name':"@3694",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F01C,'size':12,'pad':0,'label':"lit_3695",'name':"@3695",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F028,'size':12,'pad':0,'label':"lit_3696",'name':"@3696",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F034,'size':12,'pad':0,'label':"lit_3697",'name':"@3697",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F040,'size':12,'pad':0,'label':"lit_3698",'name':"@3698",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F04C,'size':12,'pad':0,'label':"lit_3699",'name':"@3699",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F058,'size':12,'pad':0,'label':"lit_3700",'name':"@3700",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F064,'size':12,'pad':0,'label':"lit_3701",'name':"@3701",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F070,'size':12,'pad':0,'label':"lit_3702",'name':"@3702",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F07C,'size':12,'pad':0,'label':"lit_3703",'name':"@3703",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F088,'size':12,'pad':0,'label':"lit_3704",'name':"@3704",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F094,'size':12,'pad':0,'label':"lit_3705",'name':"@3705",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F0A0,'size':12,'pad':0,'label':"lit_3706",'name':"@3706",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F0AC,'size':12,'pad':0,'label':"lit_3707",'name':"@3707",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F0B8,'size':12,'pad':0,'label':"lit_3708",'name':"@3708",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F0C4,'size':12,'pad':0,'label':"lit_3709",'name':"@3709",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F0D0,'size':12,'pad':0,'label':"lit_3710",'name':"@3710",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F0DC,'size':12,'pad':0,'label':"lit_3711",'name':"@3711",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F0E8,'size':12,'pad':0,'label':"lit_3712",'name':"@3712",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F0F4,'size':12,'pad':0,'label':"lit_3713",'name':"@3713",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F100,'size':12,'pad':0,'label':"lit_3714",'name':"@3714",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F10C,'size':12,'pad':0,'label':"lit_3715",'name':"@3715",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F118,'size':12,'pad':0,'label':"lit_3716",'name':"@3716",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F124,'size':12,'pad':0,'label':"lit_3717",'name':"@3717",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F130,'size':12,'pad':0,'label':"lit_3718",'name':"@3718",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F13C,'size':12,'pad':0,'label':"lit_3719",'name':"@3719",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F148,'size':12,'pad':0,'label':"lit_3720",'name':"@3720",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F154,'size':12,'pad':0,'label':"lit_3721",'name':"@3721",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F160,'size':12,'pad':0,'label':"lit_3722",'name':"@3722",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F16C,'size':12,'pad':0,'label':"lit_3723",'name':"@3723",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F178,'size':12,'pad':0,'label':"lit_3724",'name':"@3724",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F184,'size':12,'pad':0,'label':"lit_3725",'name':"@3725",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F190,'size':12,'pad':0,'label':"lit_3726",'name':"@3726",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F19C,'size':12,'pad':0,'label':"lit_3727",'name':"@3727",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F1A8,'size':12,'pad':0,'label':"lit_3728",'name':"@3728",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F1B4,'size':12,'pad':0,'label':"lit_3729",'name':"@3729",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F1C0,'size':12,'pad':0,'label':"lit_3730",'name':"@3730",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F1CC,'size':12,'pad':0,'label':"lit_3731",'name':"@3731",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F1D8,'size':260,'pad':0,'label':"struct_80C1F1D8",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80C1F2DC,'size':4,'pad':0,'label':"data_80C1F2DC",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F2E0,'size':4,'pad':0,'label':"data_80C1F2E0",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F2E4,'size':4,'pad':0,'label':"data_80C1F2E4",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F2E8,'size':4,'pad':0,'label':"data_80C1F2E8",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F2EC,'size':4,'pad':0,'label':"data_80C1F2EC",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F2F0,'size':4,'pad':0,'label':"data_80C1F2F0",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F2F4,'size':4,'pad':0,'label':"data_80C1F2F4",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F2F8,'size':4,'pad':0,'label':"data_80C1F2F8",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F2FC,'size':4,'pad':0,'label':"data_80C1F2FC",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F300,'size':4,'pad':0,'label':"data_80C1F300",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F304,'size':4,'pad':0,'label':"data_80C1F304",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F308,'size':4,'pad':0,'label':"data_80C1F308",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F30C,'size':4,'pad':0,'label':"data_80C1F30C",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F310,'size':4,'pad':0,'label':"data_80C1F310",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F314,'size':4,'pad':0,'label':"data_80C1F314",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F318,'size':4,'pad':0,'label':"data_80C1F318",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F31C,'size':4,'pad':0,'label':"data_80C1F31C",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F320,'size':4,'pad':0,'label':"data_80C1F320",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F324,'size':4,'pad':0,'label':"data_80C1F324",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F328,'size':4,'pad':0,'label':"data_80C1F328",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F32C,'size':4,'pad':0,'label':"data_80C1F32C",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F330,'size':4,'pad':0,'label':"data_80C1F330",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F334,'size':4,'pad':0,'label':"data_80C1F334",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F338,'size':4,'pad':0,'label':"data_80C1F338",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C1F33C,'size':4,'pad':0,'label':"data_80C1F33C",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"initBaseMtx__11daObjFuta_cFv":5,
	"setBaseMtx__11daObjFuta_cFv":6,
	"Create__11daObjFuta_cFv":7,
	"CreateHeap__11daObjFuta_cFv":8,
	"create1st__11daObjFuta_cFv":9,
	"Execute__11daObjFuta_cFPPA3_A4_f":10,
	"__dt__5csXyzFv":11,
	"mode_proc_call__11daObjFuta_cFv":12,
	"mode_wait__11daObjFuta_cFv":13,
	"mode_move__11daObjFuta_cFv":14,
	"mode_end__11daObjFuta_cFv":15,
	"Draw__11daObjFuta_cFv":16,
	"Delete__11daObjFuta_cFv":17,
	"daObjFuta_create1st__FP11daObjFuta_c":18,
	"daObjFuta_MoveBGDelete__FP11daObjFuta_c":19,
	"daObjFuta_MoveBGExecute__FP11daObjFuta_c":20,
	"daObjFuta_MoveBGDraw__FP11daObjFuta_c":21,
	"_ctors":22,
	"_dtors":23,
	"lit_3644":24,
	"lit_3645":25,
	"lit_3646":26,
	"lit_3985":27,
	"lit_3995":28,
	"lit_3996":29,
	"lit_3997":30,
	"lit_3998":31,
	"d_a_obj_hfuta__stringBase0":32,
	"cNullVec__6Z2Calc":33,
	"lit_1787":34,
	"l_arcName":35,
	"lit_3966":36,
	"lit_3967":37,
	"lit_3968":38,
	"l_func":39,
	"daObjFuta_METHODS":40,
	"g_profile_Obj_Hfuta":41,
	"__vt__11daObjFuta_c":42,
	"__global_destructor_chain":43,
	"lit_1109":44,
	"lit_1107":45,
	"lit_1105":46,
	"lit_1104":47,
	"lit_1099":48,
	"lit_1097":49,
	"lit_1095":50,
	"lit_1094":51,
	"lit_1057":52,
	"lit_1055":53,
	"lit_1053":54,
	"lit_1052":55,
	"lit_1014":56,
	"lit_1012":57,
	"lit_1010":58,
	"lit_1009":59,
	"lit_3687":60,
	"lit_3690":61,
	"lit_3691":62,
	"lit_3692":63,
	"lit_3693":64,
	"lit_3694":65,
	"lit_3695":66,
	"lit_3696":67,
	"lit_3697":68,
	"lit_3698":69,
	"lit_3699":70,
	"lit_3700":71,
	"lit_3701":72,
	"lit_3702":73,
	"lit_3703":74,
	"lit_3704":75,
	"lit_3705":76,
	"lit_3706":77,
	"lit_3707":78,
	"lit_3708":79,
	"lit_3709":80,
	"lit_3710":81,
	"lit_3711":82,
	"lit_3712":83,
	"lit_3713":84,
	"lit_3714":85,
	"lit_3715":86,
	"lit_3716":87,
	"lit_3717":88,
	"lit_3718":89,
	"lit_3719":90,
	"lit_3720":91,
	"lit_3721":92,
	"lit_3722":93,
	"lit_3723":94,
	"lit_3724":95,
	"lit_3725":96,
	"lit_3726":97,
	"lit_3727":98,
	"lit_3728":99,
	"lit_3729":100,
	"lit_3730":101,
	"lit_3731":102,
	"struct_80C1F1D8":103,
	"data_80C1F2DC":104,
	"data_80C1F2E0":105,
	"data_80C1F2E4":106,
	"data_80C1F2E8":107,
	"data_80C1F2EC":108,
	"data_80C1F2F0":109,
	"data_80C1F2F4":110,
	"data_80C1F2F8":111,
	"data_80C1F2FC":112,
	"data_80C1F300":113,
	"data_80C1F304":114,
	"data_80C1F308":115,
	"data_80C1F30C":116,
	"data_80C1F310":117,
	"data_80C1F314":118,
	"data_80C1F318":119,
	"data_80C1F31C":120,
	"data_80C1F320":121,
	"data_80C1F324":122,
	"data_80C1F328":123,
	"data_80C1F32C":124,
	"data_80C1F330":125,
	"data_80C1F334":126,
	"data_80C1F338":127,
	"data_80C1F33C":128,
}

