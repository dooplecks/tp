#
# Generate By: dol2asm
# Module: 606
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_rotTrap",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_rotTrap",
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
	{'addr':0x80CBF7C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF7EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF818,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF838,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF854,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF8AC,'size':76,'pad':0,'label':"__ct__15daRotTrap_HIO_cFv",'name':"__ct__15daRotTrap_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF8F8,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF940,'size':152,'pad':0,'label':"setBaseMtx__11daRotTrap_cFv",'name':"setBaseMtx__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBF9D8,'size':240,'pad':0,'label':"CreateHeap__11daRotTrap_cFv",'name':"CreateHeap__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBFAC8,'size':448,'pad':0,'label':"create__11daRotTrap_cFv",'name':"create__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBFC88,'size':204,'pad':0,'label':"__dt__8dCcD_CylFv",'name':"__dt__8dCcD_CylFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBFD54,'size':132,'pad':0,'label':"__ct__8dCcD_CylFv",'name':"__ct__8dCcD_CylFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBFDD8,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBFE20,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBFE68,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBFEC4,'size':88,'pad':0,'label':"Execute__11daRotTrap_cFPPA3_A4_f",'name':"Execute__11daRotTrap_cFPPA3_A4_f",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBFF1C,'size':400,'pad':0,'label':"procMain__11daRotTrap_cFv",'name':"procMain__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC00AC,'size':116,'pad':0,'label':"init_modeWait__11daRotTrap_cFv",'name':"init_modeWait__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0120,'size':96,'pad':0,'label':"modeWait__11daRotTrap_cFv",'name':"modeWait__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0180,'size':252,'pad':0,'label':"init_modeAcc__11daRotTrap_cFv",'name':"init_modeAcc__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC027C,'size':208,'pad':0,'label':"modeAcc__11daRotTrap_cFv",'name':"modeAcc__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC034C,'size':20,'pad':0,'label':"init_modeMove__11daRotTrap_cFv",'name':"init_modeMove__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0360,'size':224,'pad':0,'label':"modeMove__11daRotTrap_cFv",'name':"modeMove__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0440,'size':264,'pad':0,'label':"seSet__11daRotTrap_cFv",'name':"seSet__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0548,'size':164,'pad':0,'label':"Draw__11daRotTrap_cFv",'name':"Draw__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC05EC,'size':104,'pad':0,'label':"Delete__11daRotTrap_cFv",'name':"Delete__11daRotTrap_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0654,'size':44,'pad':0,'label':"daRotTrap_Draw__FP11daRotTrap_c",'name':"daRotTrap_Draw__FP11daRotTrap_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0680,'size':32,'pad':0,'label':"daRotTrap_Execute__FP11daRotTrap_c",'name':"daRotTrap_Execute__FP11daRotTrap_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC06A0,'size':32,'pad':0,'label':"daRotTrap_Delete__FP11daRotTrap_c",'name':"daRotTrap_Delete__FP11daRotTrap_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC06C0,'size':32,'pad':0,'label':"daRotTrap_Create__FP10fopAc_ac_c",'name':"daRotTrap_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC06E0,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0728,'size':92,'pad':0,'label':"__dt__15daRotTrap_HIO_cFv",'name':"__dt__15daRotTrap_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CC0784,'size':112,'pad':0,'label':"__sinit_d_a_obj_rotTrap_cpp",'name':"__sinit_d_a_obj_rotTrap_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80CC07F4,'size':8,'pad':0,'label':"data_80CC07F4",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC07FC,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC0800,'size':8,'pad':0,'label':"pad_80CC0800",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC0808,'size':4,'pad':0,'label':"lit_3649",'name':"@3649",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC080C,'size':48,'pad':0,'label':"mCcDObjInfo__11daRotTrap_c",'name':"mCcDObjInfo__11daRotTrap_c",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC083C,'size':4,'pad':0,'label':"lit_3880",'name':"@3880",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC0840,'size':4,'pad':0,'label':"lit_3921",'name':"@3921",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC0844,'size':4,'pad':0,'label':"lit_3922",'name':"@3922",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC0848,'size':4,'pad':0,'label':"lit_3923",'name':"@3923",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC084C,'size':4,'pad':0,'label':"lit_3924",'name':"@3924",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC0850,'size':4,'pad':0,'label':"lit_3925",'name':"@3925",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC0854,'size':4,'pad':0,'label':"lit_3940",'name':"@3940",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC0858,'size':7,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CC0860,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC086C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CC0880,'size':68,'pad':0,'label':"mCcDCyl__11daRotTrap_c",'name':"mCcDCyl__11daRotTrap_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC08C4,'size':168,'pad':0,'label':"atPos",'name':"atPos",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC096C,'size':56,'pad':0,'label':"atR",'name':"atR",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC09A4,'size':12,'pad':0,'label':"lit_3851",'name':"@3851",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC09B0,'size':12,'pad':0,'label':"lit_3852",'name':"@3852",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC09BC,'size':12,'pad':0,'label':"lit_3853",'name':"@3853",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC09C8,'size':36,'pad':0,'label':"data_80CC09C8",'name':"mode_proc$3850",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC09EC,'size':32,'pad':0,'label':"l_daRotTrap_Method",'name':"l_daRotTrap_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC0A0C,'size':48,'pad':0,'label':"g_profile_Obj_RotTrap",'name':"g_profile_Obj_RotTrap",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CC0A3C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC0A48,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC0A54,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC0A60,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC0A6C,'size':40,'pad':0,'label':"__vt__11daRotTrap_c",'name':"__vt__11daRotTrap_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC0A94,'size':12,'pad':0,'label':"__vt__15daRotTrap_HIO_c",'name':"__vt__15daRotTrap_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC0AA0,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CC0AB0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC0AB8,'size':12,'pad':0,'label':"lit_3643",'name':"@3643",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC0AC4,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CC0AD4,'size':4,'pad':0,'label':"data_80CC0AD4",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__15daRotTrap_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__11daRotTrap_cFv":7,
	"CreateHeap__11daRotTrap_cFv":8,
	"create__11daRotTrap_cFv":9,
	"__dt__8dCcD_CylFv":10,
	"__ct__8dCcD_CylFv":11,
	"__dt__8cM3dGCylFv":12,
	"__dt__8cM3dGAabFv":13,
	"__dt__10dCcD_GSttsFv":14,
	"Execute__11daRotTrap_cFPPA3_A4_f":15,
	"procMain__11daRotTrap_cFv":16,
	"init_modeWait__11daRotTrap_cFv":17,
	"modeWait__11daRotTrap_cFv":18,
	"init_modeAcc__11daRotTrap_cFv":19,
	"modeAcc__11daRotTrap_cFv":20,
	"init_modeMove__11daRotTrap_cFv":21,
	"modeMove__11daRotTrap_cFv":22,
	"seSet__11daRotTrap_cFv":23,
	"Draw__11daRotTrap_cFv":24,
	"Delete__11daRotTrap_cFv":25,
	"daRotTrap_Draw__FP11daRotTrap_c":26,
	"daRotTrap_Execute__FP11daRotTrap_c":27,
	"daRotTrap_Delete__FP11daRotTrap_c":28,
	"daRotTrap_Create__FP10fopAc_ac_c":29,
	"__dt__10cCcD_GSttsFv":30,
	"__dt__15daRotTrap_HIO_cFv":31,
	"__sinit_d_a_obj_rotTrap_cpp":32,
	"data_80CC07F4":33,
	"__destroy_global_chain_reference":34,
	"pad_80CC0800":35,
	"lit_3649":36,
	"mCcDObjInfo__11daRotTrap_c":37,
	"lit_3880":38,
	"lit_3921":39,
	"lit_3922":40,
	"lit_3923":41,
	"lit_3924":42,
	"lit_3925":43,
	"lit_3940":44,
	"stringBase0":45,
	"cNullVec__6Z2Calc":46,
	"lit_1787":47,
	"mCcDCyl__11daRotTrap_c":48,
	"atPos":49,
	"atR":50,
	"lit_3851":51,
	"lit_3852":52,
	"lit_3853":53,
	"data_80CC09C8":54,
	"l_daRotTrap_Method":55,
	"g_profile_Obj_RotTrap":56,
	"__vt__10cCcD_GStts":57,
	"__vt__10dCcD_GStts":58,
	"__vt__8cM3dGAab":59,
	"__vt__8cM3dGCyl":60,
	"__vt__11daRotTrap_c":61,
	"__vt__15daRotTrap_HIO_c":62,
	"__vt__14mDoHIO_entry_c":63,
	"__global_destructor_chain":64,
	"lit_3643":65,
	"l_HIO":66,
	"data_80CC0AD4":67,
}

