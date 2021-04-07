#
# Generate By: dol2asm
# Module: 545
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lv6FurikoTrap",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_lv6FurikoTrap",
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
	{'addr':0x80C723A0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C723CC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C723F8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72418,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72434,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C7248C,'size':60,'pad':0,'label':"__ct__21daLv6FurikoTrap_HIO_cFv",'name':"__ct__21daLv6FurikoTrap_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C724C8,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72510,'size':136,'pad':0,'label':"setBaseMtx__17daLv6FurikoTrap_cFv",'name':"setBaseMtx__17daLv6FurikoTrap_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72598,'size':108,'pad':0,'label':"CreateHeap__17daLv6FurikoTrap_cFv",'name':"CreateHeap__17daLv6FurikoTrap_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72604,'size':464,'pad':0,'label':"create__17daLv6FurikoTrap_cFv",'name':"create__17daLv6FurikoTrap_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C727D4,'size':204,'pad':0,'label':"__dt__8dCcD_SphFv",'name':"__dt__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C728A0,'size':132,'pad':0,'label':"__ct__8dCcD_SphFv",'name':"__ct__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72924,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C7296C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C729B4,'size':756,'pad':0,'label':"Execute__17daLv6FurikoTrap_cFPPA3_A4_f",'name':"Execute__17daLv6FurikoTrap_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72CA8,'size':124,'pad':0,'label':"move__17daLv6FurikoTrap_cFv",'name':"move__17daLv6FurikoTrap_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72D24,'size':20,'pad':0,'label':"init_modeMove__17daLv6FurikoTrap_cFv",'name':"init_modeMove__17daLv6FurikoTrap_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72D38,'size':424,'pad':0,'label':"modeMove__17daLv6FurikoTrap_cFv",'name':"modeMove__17daLv6FurikoTrap_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72EE0,'size':180,'pad':0,'label':"Draw__17daLv6FurikoTrap_cFv",'name':"Draw__17daLv6FurikoTrap_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72F94,'size':48,'pad':0,'label':"Delete__17daLv6FurikoTrap_cFv",'name':"Delete__17daLv6FurikoTrap_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72FC4,'size':44,'pad':0,'label':"daLv6FurikoTrap_Draw__FP17daLv6FurikoTrap_c",'name':"daLv6FurikoTrap_Draw__FP17daLv6FurikoTrap_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C72FF0,'size':32,'pad':0,'label':"daLv6FurikoTrap_Execute__FP17daLv6FurikoTrap_c",'name':"daLv6FurikoTrap_Execute__FP17daLv6FurikoTrap_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C73010,'size':32,'pad':0,'label':"daLv6FurikoTrap_Delete__FP17daLv6FurikoTrap_c",'name':"daLv6FurikoTrap_Delete__FP17daLv6FurikoTrap_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C73030,'size':32,'pad':0,'label':"daLv6FurikoTrap_Create__FP10fopAc_ac_c",'name':"daLv6FurikoTrap_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C73050,'size':92,'pad':0,'label':"__dt__21daLv6FurikoTrap_HIO_cFv",'name':"__dt__21daLv6FurikoTrap_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C730AC,'size':112,'pad':0,'label':"__sinit_d_a_obj_lv6FurikoTrap_cpp",'name':"__sinit_d_a_obj_lv6FurikoTrap_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C7311C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C73124,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C73130,'size':4,'pad':0,'label':"lit_3625",'name':"@3625",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C73134,'size':4,'pad':0,'label':"lit_3626",'name':"@3626",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C73138,'size':48,'pad':0,'label':"mCcDObjInfo__17daLv6FurikoTrap_c",'name':"mCcDObjInfo__17daLv6FurikoTrap_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C73168,'size':4,'pad':0,'label':"lit_3871",'name':"@3871",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C7316C,'size':4,'pad':0,'label':"lit_3872",'name':"@3872",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C73170,'size':4,'pad':0,'label':"lit_3873",'name':"@3873",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C73174,'size':4,'pad':0,'label':"lit_3874",'name':"@3874",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C73178,'size':4,'pad':0,'label':"lit_3875",'name':"@3875",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C7317C,'size':4,'pad':0,'label':"lit_3876",'name':"@3876",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C73180,'size':8,'pad':0,'label':"lit_3878",'name':"@3878",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C73188,'size':4,'pad':0,'label':"lit_3941",'name':"@3941",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C7318C,'size':4,'pad':0,'label':"lit_3942",'name':"@3942",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C73190,'size':4,'pad':0,'label':"lit_3943",'name':"@3943",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C73194,'size':4,'pad':0,'label':"lit_3944",'name':"@3944",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C73198,'size':9,'pad':0,'label':"d_a_obj_lv6FurikoTrap__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C731A4,'size':64,'pad':0,'label':"mCcDSph__17daLv6FurikoTrap_c",'name':"mCcDSph__17daLv6FurikoTrap_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C731E4,'size':12,'pad':0,'label':"posx",'name':"posx$3810",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C731F0,'size':12,'pad':0,'label':"posy",'name':"posy$3811",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C731FC,'size':12,'pad':0,'label':"lit_3884",'name':"@3884",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C73208,'size':12,'pad':0,'label':"mode_proc",'name':"mode_proc$3883",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C73214,'size':32,'pad':0,'label':"l_daLv6FurikoTrap_Method",'name':"l_daLv6FurikoTrap_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C73234,'size':48,'pad':0,'label':"g_profile_Obj_Lv6FuriTrap",'name':"g_profile_Obj_Lv6FuriTrap",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C73264,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C73270,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C7327C,'size':40,'pad':0,'label':"__vt__17daLv6FurikoTrap_c",'name':"__vt__17daLv6FurikoTrap_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C732A4,'size':12,'pad':0,'label':"__vt__21daLv6FurikoTrap_HIO_c",'name':"__vt__21daLv6FurikoTrap_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C732B0,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C732C0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C732C8,'size':12,'pad':0,'label':"lit_3619",'name':"@3619",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C732D4,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C732E4,'size':4,'pad':0,'label':"data_80C732E4",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__21daLv6FurikoTrap_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__17daLv6FurikoTrap_cFv":7,
	"CreateHeap__17daLv6FurikoTrap_cFv":8,
	"create__17daLv6FurikoTrap_cFv":9,
	"__dt__8dCcD_SphFv":10,
	"__ct__8dCcD_SphFv":11,
	"__dt__8cM3dGSphFv":12,
	"__dt__8cM3dGAabFv":13,
	"Execute__17daLv6FurikoTrap_cFPPA3_A4_f":14,
	"move__17daLv6FurikoTrap_cFv":15,
	"init_modeMove__17daLv6FurikoTrap_cFv":16,
	"modeMove__17daLv6FurikoTrap_cFv":17,
	"Draw__17daLv6FurikoTrap_cFv":18,
	"Delete__17daLv6FurikoTrap_cFv":19,
	"daLv6FurikoTrap_Draw__FP17daLv6FurikoTrap_c":20,
	"daLv6FurikoTrap_Execute__FP17daLv6FurikoTrap_c":21,
	"daLv6FurikoTrap_Delete__FP17daLv6FurikoTrap_c":22,
	"daLv6FurikoTrap_Create__FP10fopAc_ac_c":23,
	"__dt__21daLv6FurikoTrap_HIO_cFv":24,
	"__sinit_d_a_obj_lv6FurikoTrap_cpp":25,
	"_ctors":26,
	"_dtors":27,
	"lit_3625":28,
	"lit_3626":29,
	"mCcDObjInfo__17daLv6FurikoTrap_c":30,
	"lit_3871":31,
	"lit_3872":32,
	"lit_3873":33,
	"lit_3874":34,
	"lit_3875":35,
	"lit_3876":36,
	"lit_3878":37,
	"lit_3941":38,
	"lit_3942":39,
	"lit_3943":40,
	"lit_3944":41,
	"d_a_obj_lv6FurikoTrap__stringBase0":42,
	"mCcDSph__17daLv6FurikoTrap_c":43,
	"posx":44,
	"posy":45,
	"lit_3884":46,
	"mode_proc":47,
	"l_daLv6FurikoTrap_Method":48,
	"g_profile_Obj_Lv6FuriTrap":49,
	"__vt__8cM3dGAab":50,
	"__vt__8cM3dGSph":51,
	"__vt__17daLv6FurikoTrap_c":52,
	"__vt__21daLv6FurikoTrap_HIO_c":53,
	"__vt__14mDoHIO_entry_c":54,
	"__global_destructor_chain":55,
	"lit_3619":56,
	"l_HIO":57,
	"data_80C732E4":58,
}

