#
# Generate By: dol2asm
# Module: 564
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lv9SwShutter",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_lv9SwShutter",
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
	{'addr':0x80C8CDC0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8CDEC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8CE18,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8CE38,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8CE54,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8CEAC,'size':68,'pad':0,'label':"__ct__20daLv9SwShutter_HIO_cFv",'name':"__ct__20daLv9SwShutter_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8CEF0,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8CF38,'size':156,'pad':0,'label':"setBaseMtx__16daLv9SwShutter_cFv",'name':"setBaseMtx__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8CFD4,'size':108,'pad':0,'label':"CreateHeap__16daLv9SwShutter_cFv",'name':"CreateHeap__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D040,'size':296,'pad':0,'label':"create__16daLv9SwShutter_cFv",'name':"create__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D168,'size':80,'pad':0,'label':"Execute__16daLv9SwShutter_cFPPA3_A4_f",'name':"Execute__16daLv9SwShutter_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D1B8,'size':260,'pad':0,'label':"moveShutter__16daLv9SwShutter_cFv",'name':"moveShutter__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D2BC,'size':12,'pad':0,'label':"init_modeWait__16daLv9SwShutter_cFv",'name':"init_modeWait__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D2C8,'size':4,'pad':0,'label':"modeWait__16daLv9SwShutter_cFv",'name':"modeWait__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C8D2CC,'size':12,'pad':0,'label':"init_modeOpen__16daLv9SwShutter_cFv",'name':"init_modeOpen__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D2D8,'size':360,'pad':0,'label':"modeOpen__16daLv9SwShutter_cFv",'name':"modeOpen__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D440,'size':24,'pad':0,'label':"init_modeClose__16daLv9SwShutter_cFv",'name':"init_modeClose__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D458,'size':376,'pad':0,'label':"modeClose__16daLv9SwShutter_cFv",'name':"modeClose__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D5D0,'size':164,'pad':0,'label':"Draw__16daLv9SwShutter_cFv",'name':"Draw__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D674,'size':48,'pad':0,'label':"Delete__16daLv9SwShutter_cFv",'name':"Delete__16daLv9SwShutter_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D6A4,'size':44,'pad':0,'label':"daLv9SwShutter_Draw__FP16daLv9SwShutter_c",'name':"daLv9SwShutter_Draw__FP16daLv9SwShutter_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D6D0,'size':32,'pad':0,'label':"daLv9SwShutter_Execute__FP16daLv9SwShutter_c",'name':"daLv9SwShutter_Execute__FP16daLv9SwShutter_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D6F0,'size':32,'pad':0,'label':"daLv9SwShutter_Delete__FP16daLv9SwShutter_c",'name':"daLv9SwShutter_Delete__FP16daLv9SwShutter_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D710,'size':32,'pad':0,'label':"daLv9SwShutter_Create__FP10fopAc_ac_c",'name':"daLv9SwShutter_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D730,'size':92,'pad':0,'label':"__dt__20daLv9SwShutter_HIO_cFv",'name':"__dt__20daLv9SwShutter_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8D78C,'size':60,'pad':0,'label':"__sinit_d_a_obj_lv9SwShutter_cpp",'name':"__sinit_d_a_obj_lv9SwShutter_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C8D7C8,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C8D7D0,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C8D7DC,'size':4,'pad':0,'label':"lit_3627",'name':"@3627",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D7E0,'size':4,'pad':0,'label':"lit_3628",'name':"@3628",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D7E4,'size':4,'pad':0,'label':"lit_3629",'name':"@3629",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D7E8,'size':4,'pad':0,'label':"lit_3650",'name':"@3650",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8D7EC,'size':4,'pad':0,'label':"lit_3708",'name':"@3708",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D7F0,'size':4,'pad':0,'label':"lit_3782",'name':"@3782",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D7F4,'size':4,'pad':0,'label':"lit_3783",'name':"@3783",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D7F8,'size':4,'pad':0,'label':"lit_3784",'name':"@3784",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D7FC,'size':4,'pad':0,'label':"lit_3785",'name':"@3785",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D800,'size':9,'pad':0,'label':"d_a_obj_lv9SwShutter__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C8D80C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8D818,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8D82C,'size':12,'pad':0,'label':"lit_3722",'name':"@3722",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8D838,'size':12,'pad':0,'label':"lit_3723",'name':"@3723",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8D844,'size':12,'pad':0,'label':"lit_3724",'name':"@3724",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8D850,'size':36,'pad':0,'label':"mode_proc",'name':"mode_proc$3721",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8D874,'size':32,'pad':0,'label':"l_daLv9SwShutter_Method",'name':"l_daLv9SwShutter_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8D894,'size':48,'pad':0,'label':"g_profile_Obj_Lv9SwShutter",'name':"g_profile_Obj_Lv9SwShutter",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8D8C4,'size':40,'pad':0,'label':"__vt__16daLv9SwShutter_c",'name':"__vt__16daLv9SwShutter_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8D8EC,'size':12,'pad':0,'label':"__vt__20daLv9SwShutter_HIO_c",'name':"__vt__20daLv9SwShutter_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8D8F8,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8D908,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8D910,'size':12,'pad':0,'label':"lit_3621",'name':"@3621",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8D91C,'size':20,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8D930,'size':4,'pad':0,'label':"data_80C8D930",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__20daLv9SwShutter_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__16daLv9SwShutter_cFv":7,
	"CreateHeap__16daLv9SwShutter_cFv":8,
	"create__16daLv9SwShutter_cFv":9,
	"Execute__16daLv9SwShutter_cFPPA3_A4_f":10,
	"moveShutter__16daLv9SwShutter_cFv":11,
	"init_modeWait__16daLv9SwShutter_cFv":12,
	"modeWait__16daLv9SwShutter_cFv":13,
	"init_modeOpen__16daLv9SwShutter_cFv":14,
	"modeOpen__16daLv9SwShutter_cFv":15,
	"init_modeClose__16daLv9SwShutter_cFv":16,
	"modeClose__16daLv9SwShutter_cFv":17,
	"Draw__16daLv9SwShutter_cFv":18,
	"Delete__16daLv9SwShutter_cFv":19,
	"daLv9SwShutter_Draw__FP16daLv9SwShutter_c":20,
	"daLv9SwShutter_Execute__FP16daLv9SwShutter_c":21,
	"daLv9SwShutter_Delete__FP16daLv9SwShutter_c":22,
	"daLv9SwShutter_Create__FP10fopAc_ac_c":23,
	"__dt__20daLv9SwShutter_HIO_cFv":24,
	"__sinit_d_a_obj_lv9SwShutter_cpp":25,
	"_ctors":26,
	"_dtors":27,
	"lit_3627":28,
	"lit_3628":29,
	"lit_3629":30,
	"lit_3650":31,
	"lit_3708":32,
	"lit_3782":33,
	"lit_3783":34,
	"lit_3784":35,
	"lit_3785":36,
	"d_a_obj_lv9SwShutter__stringBase0":37,
	"cNullVec__6Z2Calc":38,
	"lit_1787":39,
	"lit_3722":40,
	"lit_3723":41,
	"lit_3724":42,
	"mode_proc":43,
	"l_daLv9SwShutter_Method":44,
	"g_profile_Obj_Lv9SwShutter":45,
	"__vt__16daLv9SwShutter_c":46,
	"__vt__20daLv9SwShutter_HIO_c":47,
	"__vt__14mDoHIO_entry_c":48,
	"__global_destructor_chain":49,
	"lit_3621":50,
	"l_HIO":51,
	"data_80C8D930":52,
}

