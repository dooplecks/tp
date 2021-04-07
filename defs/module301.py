#
# Generate By: dol2asm
# Module: 301
#

# Libraries
LIBRARIES = [
	"d/a/npc/d_a_npc_du",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_npc_du",
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
	{'addr':0x809AFC60,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809AFC8C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809AFCB8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809AFCD8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809AFCF4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809AFD4C,'size':36,'pad':0,'label':"__ct__14daNpc_Du_HIO_cFv",'name':"__ct__14daNpc_Du_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809AFD70,'size':176,'pad':0,'label':"anm_init__FP12npc_du_classifUcf",'name':"anm_init__FP12npc_du_classifUcf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809AFE20,'size':500,'pad':0,'label':"nodeCallBack__FP8J3DJointi",'name':"nodeCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B0014,'size':256,'pad':0,'label':"daNpc_Du_Draw__FP12npc_du_class",'name':"daNpc_Du_Draw__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B0114,'size':588,'pad':0,'label':"npc_du_normal__FP12npc_du_class",'name':"npc_du_normal__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B0360,'size':384,'pad':0,'label':"npc_du_away__FP12npc_du_class",'name':"npc_du_away__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B04E0,'size':660,'pad':0,'label':"npc_du_swim__FP12npc_du_class",'name':"npc_du_swim__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B0774,'size':364,'pad':0,'label':"npc_du_message__FP12npc_du_class",'name':"npc_du_message__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B08E0,'size':988,'pad':0,'label':"action__FP12npc_du_class",'name':"action__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B0CBC,'size':292,'pad':0,'label':"message__FP12npc_du_class",'name':"message__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B0DE0,'size':908,'pad':0,'label':"daNpc_Du_Execute__FP12npc_du_class",'name':"daNpc_Du_Execute__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B116C,'size':8,'pad':0,'label':"daNpc_Du_IsDelete__FP12npc_du_class",'name':"daNpc_Du_IsDelete__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x809B1174,'size':108,'pad':0,'label':"daNpc_Du_Delete__FP12npc_du_class",'name':"daNpc_Du_Delete__FP12npc_du_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B11E0,'size':488,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B13C8,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B1410,'size':656,'pad':0,'label':"daNpc_Du_Create__FP10fopAc_ac_c",'name':"daNpc_Du_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B16A0,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B16E8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B1730,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B17A0,'size':72,'pad':0,'label':"__dt__14daNpc_Du_HIO_cFv",'name':"__dt__14daNpc_Du_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B17E8,'size':60,'pad':0,'label':"__sinit_d_a_npc_du_cpp",'name':"__sinit_d_a_npc_du_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x809B1824,'size':8,'pad':0,'label':"func_809B1824",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B182C,'size':8,'pad':0,'label':"func_809B182C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809B1834,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x809B183C,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x809B1848,'size':4,'pad':0,'label':"lit_3762",'name':"@3762",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[10,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B184C,'size':4,'pad':0,'label':"lit_3776",'name':"@3776",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809B1850,'size':4,'pad':0,'label':"lit_3777",'name':"@3777",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1854,'size':4,'pad':0,'label':"lit_3864",'name':"@3864",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1858,'size':4,'pad':0,'label':"lit_3865",'name':"@3865",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B185C,'size':4,'pad':0,'label':"lit_3866",'name':"@3866",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1860,'size':4,'pad':0,'label':"lit_3905",'name':"@3905",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1864,'size':4,'pad':0,'label':"lit_3906",'name':"@3906",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1868,'size':4,'pad':0,'label':"lit_3907",'name':"@3907",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B186C,'size':4,'pad':0,'label':"lit_3908",'name':"@3908",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1870,'size':4,'pad':0,'label':"lit_3909",'name':"@3909",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1874,'size':4,'pad':0,'label':"lit_3910",'name':"@3910",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1878,'size':4,'pad':0,'label':"lit_3911",'name':"@3911",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B187C,'size':4,'pad':0,'label':"lit_3912",'name':"@3912",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1880,'size':4,'pad':0,'label':"lit_3913",'name':"@3913",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1884,'size':4,'pad':0,'label':"lit_3914",'name':"@3914",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1888,'size':4,'pad':0,'label':"lit_3944",'name':"@3944",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B188C,'size':4,'pad':0,'label':"lit_3945",'name':"@3945",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1890,'size':4,'pad':0,'label':"lit_3946",'name':"@3946",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1894,'size':4,'pad':0,'label':"lit_3947",'name':"@3947",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B1898,'size':4,'pad':0,'label':"lit_3992",'name':"@3992",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B189C,'size':4,'pad':0,'label':"lit_3993",'name':"@3993",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18A0,'size':4,'pad':0,'label':"lit_3994",'name':"@3994",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18A4,'size':4,'pad':0,'label':"lit_4024",'name':"@4024",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18A8,'size':4,'pad':0,'label':"lit_4025",'name':"@4025",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18AC,'size':4,'pad':0,'label':"lit_4092",'name':"@4092",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18B0,'size':4,'pad':0,'label':"lit_4093",'name':"@4093",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18B4,'size':4,'pad':0,'label':"lit_4094",'name':"@4094",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18B8,'size':4,'pad':0,'label':"lit_4095",'name':"@4095",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18BC,'size':4,'pad':0,'label':"lit_4096",'name':"@4096",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18C0,'size':4,'pad':0,'label':"lit_4097",'name':"@4097",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18C4,'size':4,'pad':0,'label':"lit_4098",'name':"@4098",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18C8,'size':8,'pad':0,'label':"lit_4237",'name':"@4237",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809B18D0,'size':4,'pad':0,'label':"lit_4408",'name':"@4408",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18D4,'size':4,'pad':0,'label':"lit_4409",'name':"@4409",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18D8,'size':4,'pad':0,'label':"lit_4410",'name':"@4410",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809B18DC,'size':14,'pad':0,'label':"d_a_npc_du__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x809B18EC,'size':8,'pad':0,'label':"walk_se",'name':"walk_se$4161",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809B18F4,'size':8,'pad':0,'label':"run_se",'name':"run_se$4162",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809B18FC,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$4342",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809B193C,'size':32,'pad':0,'label':"l_daNpc_Du_Method",'name':"l_daNpc_Du_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x809B195C,'size':48,'pad':0,'label':"g_profile_NPC_DU",'name':"g_profile_NPC_DU",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x809B198C,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809B1998,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809B19A4,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809B19C8,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809B19D4,'size':12,'pad':0,'label':"__vt__14daNpc_Du_HIO_c",'name':"__vt__14daNpc_Du_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809B19E0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809B19E8,'size':4,'pad':0,'label':"data_809B19E8",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809B19EC,'size':12,'pad':0,'label':"lit_3757",'name':"@3757",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809B19F8,'size':12,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daNpc_Du_HIO_cFv":5,
	"anm_init__FP12npc_du_classifUcf":6,
	"nodeCallBack__FP8J3DJointi":7,
	"daNpc_Du_Draw__FP12npc_du_class":8,
	"npc_du_normal__FP12npc_du_class":9,
	"npc_du_away__FP12npc_du_class":10,
	"npc_du_swim__FP12npc_du_class":11,
	"npc_du_message__FP12npc_du_class":12,
	"action__FP12npc_du_class":13,
	"message__FP12npc_du_class":14,
	"daNpc_Du_Execute__FP12npc_du_class":15,
	"daNpc_Du_IsDelete__FP12npc_du_class":16,
	"daNpc_Du_Delete__FP12npc_du_class":17,
	"useHeapInit__FP10fopAc_ac_c":18,
	"__dt__12J3DFrameCtrlFv":19,
	"daNpc_Du_Create__FP10fopAc_ac_c":20,
	"__dt__8cM3dGSphFv":21,
	"__dt__8cM3dGAabFv":22,
	"__dt__12dBgS_ObjAcchFv":23,
	"__dt__14daNpc_Du_HIO_cFv":24,
	"__sinit_d_a_npc_du_cpp":25,
	"func_809B1824":26,
	"func_809B182C":27,
	"_ctors":28,
	"_dtors":29,
	"lit_3762":30,
	"lit_3776":31,
	"lit_3777":32,
	"lit_3864":33,
	"lit_3865":34,
	"lit_3866":35,
	"lit_3905":36,
	"lit_3906":37,
	"lit_3907":38,
	"lit_3908":39,
	"lit_3909":40,
	"lit_3910":41,
	"lit_3911":42,
	"lit_3912":43,
	"lit_3913":44,
	"lit_3914":45,
	"lit_3944":46,
	"lit_3945":47,
	"lit_3946":48,
	"lit_3947":49,
	"lit_3992":50,
	"lit_3993":51,
	"lit_3994":52,
	"lit_4024":53,
	"lit_4025":54,
	"lit_4092":55,
	"lit_4093":56,
	"lit_4094":57,
	"lit_4095":58,
	"lit_4096":59,
	"lit_4097":60,
	"lit_4098":61,
	"lit_4237":62,
	"lit_4408":63,
	"lit_4409":64,
	"lit_4410":65,
	"d_a_npc_du__stringBase0":66,
	"walk_se":67,
	"run_se":68,
	"cc_sph_src":69,
	"l_daNpc_Du_Method":70,
	"g_profile_NPC_DU":71,
	"__vt__8cM3dGSph":72,
	"__vt__8cM3dGAab":73,
	"__vt__12dBgS_ObjAcch":74,
	"__vt__12J3DFrameCtrl":75,
	"__vt__14daNpc_Du_HIO_c":76,
	"__global_destructor_chain":77,
	"data_809B19E8":78,
	"lit_3757":79,
	"l_HIO":80,
}

