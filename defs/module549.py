#
# Generate By: dol2asm
# Module: 549
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lv6Tenbin",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_lv6Tenbin",
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
	{'addr':0x80C76800,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C7682C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76858,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76878,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76894,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C768EC,'size':156,'pad':0,'label':"__ct__14daTenbin_HIO_cFv",'name':"__ct__14daTenbin_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76988,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C769D0,'size':508,'pad':0,'label':"setBaseMtx__10daTenbin_cFv",'name':"setBaseMtx__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76BCC,'size':324,'pad':0,'label':"CreateHeap__10daTenbin_cFv",'name':"CreateHeap__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76D10,'size':464,'pad':0,'label':"create__10daTenbin_cFv",'name':"create__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C76EE0,'size':408,'pad':0,'label':"rideCallBackRight__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBackRight__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77078,'size':392,'pad':0,'label':"rideCallBackLeft__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBackLeft__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77200,'size':188,'pad':0,'label':"Execute__10daTenbin_cFPPA3_A4_f",'name':"Execute__10daTenbin_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C772BC,'size':424,'pad':0,'label':"procMain__10daTenbin_cFv",'name':"procMain__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77464,'size':12,'pad':0,'label':"init_modeWait__10daTenbin_cFv",'name':"init_modeWait__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77470,'size':504,'pad':0,'label':"modeWait__10daTenbin_cFv",'name':"modeWait__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77668,'size':196,'pad':0,'label':"balanceCheck__10daTenbin_cFv",'name':"balanceCheck__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C7772C,'size':228,'pad':0,'label':"Draw__10daTenbin_cFv",'name':"Draw__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77810,'size':104,'pad':0,'label':"Delete__10daTenbin_cFv",'name':"Delete__10daTenbin_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77878,'size':44,'pad':0,'label':"daTenbin_Draw__FP10daTenbin_c",'name':"daTenbin_Draw__FP10daTenbin_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C778A4,'size':32,'pad':0,'label':"daTenbin_Execute__FP10daTenbin_c",'name':"daTenbin_Execute__FP10daTenbin_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C778C4,'size':32,'pad':0,'label':"daTenbin_Delete__FP10daTenbin_c",'name':"daTenbin_Delete__FP10daTenbin_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C778E4,'size':32,'pad':0,'label':"daTenbin_Create__FP10fopAc_ac_c",'name':"daTenbin_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77904,'size':92,'pad':0,'label':"__dt__14daTenbin_HIO_cFv",'name':"__dt__14daTenbin_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C77960,'size':60,'pad':0,'label':"__sinit_d_a_obj_lv6Tenbin_cpp",'name':"__sinit_d_a_obj_lv6Tenbin_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C7799C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C779A4,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C779B0,'size':4,'pad':0,'label':"lit_3668",'name':"@3668",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779B4,'size':4,'pad':0,'label':"lit_3669",'name':"@3669",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779B8,'size':4,'pad':0,'label':"lit_3670",'name':"@3670",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C779BC,'size':4,'pad':0,'label':"lit_3671",'name':"@3671",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779C0,'size':4,'pad':0,'label':"lit_3672",'name':"@3672",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779C4,'size':4,'pad':0,'label':"lit_3673",'name':"@3673",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779C8,'size':4,'pad':0,'label':"lit_3674",'name':"@3674",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779CC,'size':4,'pad':0,'label':"lit_3675",'name':"@3675",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779D0,'size':4,'pad':0,'label':"lit_3676",'name':"@3676",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779D4,'size':4,'pad':0,'label':"lit_3677",'name':"@3677",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779D8,'size':4,'pad':0,'label':"lit_3678",'name':"@3678",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779DC,'size':4,'pad':0,'label':"lit_3679",'name':"@3679",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779E0,'size':4,'pad':0,'label':"lit_3680",'name':"@3680",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779E4,'size':4,'pad':0,'label':"lit_3735",'name':"@3735",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779E8,'size':4,'pad':0,'label':"lit_3908",'name':"@3908",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779EC,'size':4,'pad':0,'label':"lit_3971",'name':"@3971",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779F0,'size':4,'pad':0,'label':"lit_3972",'name':"@3972",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779F4,'size':4,'pad':0,'label':"lit_3973",'name':"@3973",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779F8,'size':4,'pad':0,'label':"lit_3974",'name':"@3974",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C779FC,'size':9,'pad':0,'label':"d_a_obj_lv6Tenbin__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C77A08,'size':24,'pad':0,'label':"l_cull_box",'name':"l_cull_box",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C77A20,'size':12,'pad':0,'label':"lit_3913",'name':"@3913",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C77A2C,'size':12,'pad':0,'label':"mode_proc",'name':"mode_proc$3912",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C77A38,'size':32,'pad':0,'label':"l_daTenbin_Method",'name':"l_daTenbin_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C77A58,'size':48,'pad':0,'label':"g_profile_Obj_Lv6Tenbin",'name':"g_profile_Obj_Lv6Tenbin",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C77A88,'size':40,'pad':0,'label':"__vt__10daTenbin_c",'name':"__vt__10daTenbin_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C77AB0,'size':12,'pad':0,'label':"__vt__14daTenbin_HIO_c",'name':"__vt__14daTenbin_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C77ABC,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C77AC8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C77AD0,'size':12,'pad':0,'label':"lit_3662",'name':"@3662",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C77ADC,'size':68,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C77B20,'size':4,'pad':0,'label':"data_80C77B20",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daTenbin_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__10daTenbin_cFv":7,
	"CreateHeap__10daTenbin_cFv":8,
	"create__10daTenbin_cFv":9,
	"rideCallBackRight__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c":10,
	"rideCallBackLeft__10daTenbin_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c":11,
	"Execute__10daTenbin_cFPPA3_A4_f":12,
	"procMain__10daTenbin_cFv":13,
	"init_modeWait__10daTenbin_cFv":14,
	"modeWait__10daTenbin_cFv":15,
	"balanceCheck__10daTenbin_cFv":16,
	"Draw__10daTenbin_cFv":17,
	"Delete__10daTenbin_cFv":18,
	"daTenbin_Draw__FP10daTenbin_c":19,
	"daTenbin_Execute__FP10daTenbin_c":20,
	"daTenbin_Delete__FP10daTenbin_c":21,
	"daTenbin_Create__FP10fopAc_ac_c":22,
	"__dt__14daTenbin_HIO_cFv":23,
	"__sinit_d_a_obj_lv6Tenbin_cpp":24,
	"_ctors":25,
	"_dtors":26,
	"lit_3668":27,
	"lit_3669":28,
	"lit_3670":29,
	"lit_3671":30,
	"lit_3672":31,
	"lit_3673":32,
	"lit_3674":33,
	"lit_3675":34,
	"lit_3676":35,
	"lit_3677":36,
	"lit_3678":37,
	"lit_3679":38,
	"lit_3680":39,
	"lit_3735":40,
	"lit_3908":41,
	"lit_3971":42,
	"lit_3972":43,
	"lit_3973":44,
	"lit_3974":45,
	"d_a_obj_lv6Tenbin__stringBase0":46,
	"l_cull_box":47,
	"lit_3913":48,
	"mode_proc":49,
	"l_daTenbin_Method":50,
	"g_profile_Obj_Lv6Tenbin":51,
	"__vt__10daTenbin_c":52,
	"__vt__14daTenbin_HIO_c":53,
	"__vt__14mDoHIO_entry_c":54,
	"__global_destructor_chain":55,
	"lit_3662":56,
	"l_HIO":57,
	"data_80C77B20":58,
}

