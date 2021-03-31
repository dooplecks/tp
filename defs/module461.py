#
# Generate By: dol2asm
# Module: 461
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_goGate",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_goGate",
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
	{'addr':0x80BFD5C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD5EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD618,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD638,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD654,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD6AC,'size':48,'pad':0,'label':"__ct__14daGoGate_HIO_cFv",'name':"__ct__14daGoGate_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD6DC,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD724,'size':156,'pad':0,'label':"setBaseMtx__10daGoGate_cFv",'name':"setBaseMtx__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD7C0,'size':108,'pad':0,'label':"CreateHeap__10daGoGate_cFv",'name':"CreateHeap__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD82C,'size':344,'pad':0,'label':"create__10daGoGate_cFv",'name':"create__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD984,'size':80,'pad':0,'label':"Execute__10daGoGate_cFPPA3_A4_f",'name':"Execute__10daGoGate_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFD9D4,'size':260,'pad':0,'label':"moveGate__10daGoGate_cFv",'name':"moveGate__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDAD8,'size':12,'pad':0,'label':"init_modeWait__10daGoGate_cFv",'name':"init_modeWait__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDAE4,'size':4,'pad':0,'label':"modeWait__10daGoGate_cFv",'name':"modeWait__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BFDAE8,'size':12,'pad':0,'label':"init_modeMoveOpen__10daGoGate_cFv",'name':"init_modeMoveOpen__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDAF4,'size':272,'pad':0,'label':"modeMoveOpen__10daGoGate_cFv",'name':"modeMoveOpen__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDC04,'size':12,'pad':0,'label':"init_modeMoveClose__10daGoGate_cFv",'name':"init_modeMoveClose__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDC10,'size':272,'pad':0,'label':"modeMoveClose__10daGoGate_cFv",'name':"modeMoveClose__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDD20,'size':188,'pad':0,'label':"setSe__10daGoGate_cFv",'name':"setSe__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDDDC,'size':164,'pad':0,'label':"Draw__10daGoGate_cFv",'name':"Draw__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDE80,'size':48,'pad':0,'label':"Delete__10daGoGate_cFv",'name':"Delete__10daGoGate_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDEB0,'size':44,'pad':0,'label':"daGoGate_Draw__FP10daGoGate_c",'name':"daGoGate_Draw__FP10daGoGate_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDEDC,'size':32,'pad':0,'label':"daGoGate_Execute__FP10daGoGate_c",'name':"daGoGate_Execute__FP10daGoGate_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDEFC,'size':32,'pad':0,'label':"daGoGate_Delete__FP10daGoGate_c",'name':"daGoGate_Delete__FP10daGoGate_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDF1C,'size':32,'pad':0,'label':"daGoGate_Create__FP10fopAc_ac_c",'name':"daGoGate_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDF3C,'size':92,'pad':0,'label':"__dt__14daGoGate_HIO_cFv",'name':"__dt__14daGoGate_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BFDF98,'size':60,'pad':0,'label':"__sinit_d_a_obj_goGate_cpp",'name':"__sinit_d_a_obj_goGate_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80BFDFD4,'size':8,'pad':0,'label':"data_80BFDFD4",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFDFDC,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFDFE0,'size':8,'pad':0,'label':"pad_80BFDFE0",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFDFE8,'size':4,'pad':0,'label':"lit_3627",'name':"@3627",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[5,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BFDFEC,'size':4,'pad':0,'label':"lit_3648",'name':"@3648",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFDFF0,'size':4,'pad':0,'label':"lit_3712",'name':"@3712",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BFDFF4,'size':4,'pad':0,'label':"lit_3713",'name':"@3713",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BFDFF8,'size':4,'pad':0,'label':"lit_3780",'name':"@3780",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BFDFFC,'size':4,'pad':0,'label':"lit_3781",'name':"@3781",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BFE000,'size':4,'pad':0,'label':"lit_3782",'name':"@3782",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BFE004,'size':4,'pad':0,'label':"lit_3783",'name':"@3783",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BFE008,'size':8,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BFE010,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFE01C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BFE030,'size':12,'pad':0,'label':"lit_3727",'name':"@3727",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFE03C,'size':12,'pad':0,'label':"lit_3728",'name':"@3728",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFE048,'size':12,'pad':0,'label':"lit_3729",'name':"@3729",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFE054,'size':36,'pad':0,'label':"data_80BFE054",'name':"mode_proc$3726",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFE078,'size':32,'pad':0,'label':"l_daGoGate_Method",'name':"l_daGoGate_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFE098,'size':48,'pad':0,'label':"g_profile_Obj_GoGate",'name':"g_profile_Obj_GoGate",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BFE0C8,'size':40,'pad':0,'label':"__vt__10daGoGate_c",'name':"__vt__10daGoGate_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFE0F0,'size':12,'pad':0,'label':"__vt__14daGoGate_HIO_c",'name':"__vt__14daGoGate_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFE0FC,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BFE108,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFE110,'size':12,'pad':0,'label':"lit_3621",'name':"@3621",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFE11C,'size':12,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BFE128,'size':4,'pad':0,'label':"data_80BFE128",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daGoGate_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__10daGoGate_cFv":7,
	"CreateHeap__10daGoGate_cFv":8,
	"create__10daGoGate_cFv":9,
	"Execute__10daGoGate_cFPPA3_A4_f":10,
	"moveGate__10daGoGate_cFv":11,
	"init_modeWait__10daGoGate_cFv":12,
	"modeWait__10daGoGate_cFv":13,
	"init_modeMoveOpen__10daGoGate_cFv":14,
	"modeMoveOpen__10daGoGate_cFv":15,
	"init_modeMoveClose__10daGoGate_cFv":16,
	"modeMoveClose__10daGoGate_cFv":17,
	"setSe__10daGoGate_cFv":18,
	"Draw__10daGoGate_cFv":19,
	"Delete__10daGoGate_cFv":20,
	"daGoGate_Draw__FP10daGoGate_c":21,
	"daGoGate_Execute__FP10daGoGate_c":22,
	"daGoGate_Delete__FP10daGoGate_c":23,
	"daGoGate_Create__FP10fopAc_ac_c":24,
	"__dt__14daGoGate_HIO_cFv":25,
	"__sinit_d_a_obj_goGate_cpp":26,
	"data_80BFDFD4":27,
	"__destroy_global_chain_reference":28,
	"pad_80BFDFE0":29,
	"lit_3627":30,
	"lit_3648":31,
	"lit_3712":32,
	"lit_3713":33,
	"lit_3780":34,
	"lit_3781":35,
	"lit_3782":36,
	"lit_3783":37,
	"stringBase0":38,
	"cNullVec__6Z2Calc":39,
	"lit_1787":40,
	"lit_3727":41,
	"lit_3728":42,
	"lit_3729":43,
	"data_80BFE054":44,
	"l_daGoGate_Method":45,
	"g_profile_Obj_GoGate":46,
	"__vt__10daGoGate_c":47,
	"__vt__14daGoGate_HIO_c":48,
	"__vt__14mDoHIO_entry_c":49,
	"__global_destructor_chain":50,
	"lit_3621":51,
	"l_HIO":52,
	"data_80BFE128":53,
}

