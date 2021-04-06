#
# Generate By: dol2asm
# Module: 671
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_twGate",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_twGate",
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
	{'addr':0x80D1F9C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1F9EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FA18,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FA38,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FA54,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FAAC,'size':52,'pad':0,'label':"__ct__14daTwGate_HIO_cFv",'name':"__ct__14daTwGate_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FAE0,'size':92,'pad':0,'label':"__dt__18fOpAcm_HIO_entry_cFv",'name':"__dt__18fOpAcm_HIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FB3C,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FB84,'size':136,'pad':0,'label':"setBaseMtx__10daTwGate_cFv",'name':"setBaseMtx__10daTwGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FC0C,'size':312,'pad':0,'label':"CreateHeap__10daTwGate_cFv",'name':"CreateHeap__10daTwGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FD44,'size':464,'pad':0,'label':"create__10daTwGate_cFv",'name':"create__10daTwGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FF14,'size':72,'pad':0,'label':"__dt__8cM3dGLinFv",'name':"__dt__8cM3dGLinFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FF5C,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D1FFA4,'size':272,'pad':0,'label':"Execute__10daTwGate_cFPPA3_A4_f",'name':"Execute__10daTwGate_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D200B4,'size':204,'pad':0,'label':"Draw__10daTwGate_cFv",'name':"Draw__10daTwGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D20180,'size':64,'pad':0,'label':"Delete__10daTwGate_cFv",'name':"Delete__10daTwGate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D201C0,'size':44,'pad':0,'label':"daTwGate_Draw__FP10daTwGate_c",'name':"daTwGate_Draw__FP10daTwGate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D201EC,'size':32,'pad':0,'label':"daTwGate_Execute__FP10daTwGate_c",'name':"daTwGate_Execute__FP10daTwGate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2020C,'size':32,'pad':0,'label':"daTwGate_Delete__FP10daTwGate_c",'name':"daTwGate_Delete__FP10daTwGate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2022C,'size':32,'pad':0,'label':"daTwGate_Create__FP10fopAc_ac_c",'name':"daTwGate_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D2024C,'size':108,'pad':0,'label':"__dt__14daTwGate_HIO_cFv",'name':"__dt__14daTwGate_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D202B8,'size':60,'pad':0,'label':"__sinit_d_a_obj_twGate_cpp",'name':"__sinit_d_a_obj_twGate_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80D202F4,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80D202FC,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80D20308,'size':4,'pad':0,'label':"lit_3638",'name':"@3638",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2030C,'size':52,'pad':0,'label':"l_bmdIdx",'name':"l_bmdIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D20340,'size':52,'pad':0,'label':"l_dzbIdx",'name':"l_dzbIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D20374,'size':52,'pad':0,'label':"l_btkIdx",'name':"l_btkIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D203A8,'size':52,'pad':0,'label':"l_brkIdx",'name':"l_brkIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D203DC,'size':52,'pad':0,'label':"l_twFlagIdx",'name':"l_twFlagIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D20410,'size':156,'pad':0,'label':"l_cheeckPos0",'name':"l_cheeckPos0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D204AC,'size':156,'pad':0,'label':"l_cheeckPos1",'name':"l_cheeckPos1",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D20548,'size':4,'pad':0,'label':"lit_3693",'name':"@3693",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D2054C,'size':4,'pad':0,'label':"lit_3769",'name':"@3769",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D20550,'size':4,'pad':0,'label':"lit_3837",'name':"@3837",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D20554,'size':89,'pad':0,'label':"d_a_obj_twGate__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80D205B0,'size':52,'pad':0,'label':"l_resNameIdx",'name':"l_resNameIdx",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D205E4,'size':32,'pad':0,'label':"l_daTwGate_Method",'name':"l_daTwGate_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D20604,'size':48,'pad':0,'label':"g_profile_Obj_TwGate",'name':"g_profile_Obj_TwGate",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D20634,'size':12,'pad':0,'label':"__vt__8cM3dGLin",'name':"__vt__8cM3dGLin",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D20640,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D2064C,'size':40,'pad':0,'label':"__vt__10daTwGate_c",'name':"__vt__10daTwGate_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D20674,'size':12,'pad':0,'label':"__vt__14daTwGate_HIO_c",'name':"__vt__14daTwGate_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D20680,'size':12,'pad':0,'label':"__vt__18fOpAcm_HIO_entry_c",'name':"__vt__18fOpAcm_HIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D2068C,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D20698,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D206A0,'size':12,'pad':0,'label':"lit_3630",'name':"@3630",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D206AC,'size':8,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daTwGate_HIO_cFv":5,
	"__dt__18fOpAcm_HIO_entry_cFv":6,
	"__dt__14mDoHIO_entry_cFv":7,
	"setBaseMtx__10daTwGate_cFv":8,
	"CreateHeap__10daTwGate_cFv":9,
	"create__10daTwGate_cFv":10,
	"__dt__8cM3dGLinFv":11,
	"__dt__12J3DFrameCtrlFv":12,
	"Execute__10daTwGate_cFPPA3_A4_f":13,
	"Draw__10daTwGate_cFv":14,
	"Delete__10daTwGate_cFv":15,
	"daTwGate_Draw__FP10daTwGate_c":16,
	"daTwGate_Execute__FP10daTwGate_c":17,
	"daTwGate_Delete__FP10daTwGate_c":18,
	"daTwGate_Create__FP10fopAc_ac_c":19,
	"__dt__14daTwGate_HIO_cFv":20,
	"__sinit_d_a_obj_twGate_cpp":21,
	"_ctors":22,
	"_dtors":23,
	"lit_3638":24,
	"l_bmdIdx":25,
	"l_dzbIdx":26,
	"l_btkIdx":27,
	"l_brkIdx":28,
	"l_twFlagIdx":29,
	"l_cheeckPos0":30,
	"l_cheeckPos1":31,
	"lit_3693":32,
	"lit_3769":33,
	"lit_3837":34,
	"d_a_obj_twGate__stringBase0":35,
	"l_resNameIdx":36,
	"l_daTwGate_Method":37,
	"g_profile_Obj_TwGate":38,
	"__vt__8cM3dGLin":39,
	"__vt__12J3DFrameCtrl":40,
	"__vt__10daTwGate_c":41,
	"__vt__14daTwGate_HIO_c":42,
	"__vt__18fOpAcm_HIO_entry_c":43,
	"__vt__14mDoHIO_entry_c":44,
	"__global_destructor_chain":45,
	"lit_3630":46,
	"l_HIO":47,
}

