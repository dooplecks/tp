#
# Generate By: dol2asm
# Module: 583
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_nougu",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_nougu",
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
	{'addr':0x80CA3B20,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA3B4C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA3B78,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA3B98,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA3BB4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA3C0C,'size':332,'pad':0,'label':"__dt__13daObj_Nougu_cFv",'name':"__dt__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA3D58,'size':204,'pad':0,'label':"__dt__8dCcD_SphFv",'name':"__dt__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA3E24,'size':692,'pad':0,'label':"create__13daObj_Nougu_cFv",'name':"create__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA40D8,'size':132,'pad':0,'label':"__ct__8dCcD_SphFv",'name':"__ct__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA415C,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA41A4,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA41EC,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA425C,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA42B8,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4328,'size':120,'pad':0,'label':"CreateHeap__13daObj_Nougu_cFv",'name':"CreateHeap__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA43A0,'size':52,'pad':0,'label':"Delete__13daObj_Nougu_cFv",'name':"Delete__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA43D4,'size':544,'pad':0,'label':"Execute__13daObj_Nougu_cFv",'name':"Execute__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA45F4,'size':196,'pad':0,'label':"Draw__13daObj_Nougu_cFv",'name':"Draw__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA46B8,'size':32,'pad':0,'label':"createHeapCallBack__13daObj_Nougu_cFP10fopAc_ac_c",'name':"createHeapCallBack__13daObj_Nougu_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA46D8,'size':16,'pad':0,'label':"getResName__13daObj_Nougu_cFv",'name':"getResName__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA46E8,'size':32,'pad':0,'label':"isDelete__13daObj_Nougu_cFv",'name':"isDelete__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4708,'size':92,'pad':0,'label':"setEnvTevColor__13daObj_Nougu_cFv",'name':"setEnvTevColor__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4764,'size':64,'pad':0,'label':"setRoomNo__13daObj_Nougu_cFv",'name':"setRoomNo__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA47A4,'size':100,'pad':0,'label':"setMtx__13daObj_Nougu_cFv",'name':"setMtx__13daObj_Nougu_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4808,'size':32,'pad':0,'label':"daObj_Nougu_Create__FPv",'name':"daObj_Nougu_Create__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4828,'size':32,'pad':0,'label':"daObj_Nougu_Delete__FPv",'name':"daObj_Nougu_Delete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4848,'size':32,'pad':0,'label':"daObj_Nougu_Execute__FPv",'name':"daObj_Nougu_Execute__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4868,'size':32,'pad':0,'label':"daObj_Nougu_Draw__FPv",'name':"daObj_Nougu_Draw__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4888,'size':8,'pad':0,'label':"daObj_Nougu_IsDelete__FPv",'name':"daObj_Nougu_IsDelete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CA4890,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA48D8,'size':116,'pad':0,'label':"__sinit_d_a_obj_nougu_cpp",'name':"__sinit_d_a_obj_nougu_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80CA494C,'size':72,'pad':0,'label':"__dt__19daObj_Nougu_Param_cFv",'name':"__dt__19daObj_Nougu_Param_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA4994,'size':8,'pad':0,'label':"func_80CA4994",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA499C,'size':8,'pad':0,'label':"func_80CA499C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CA49A4,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CA49AC,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CA49B8,'size':16,'pad':0,'label':"m__19daObj_Nougu_Param_c",'name':"m__19daObj_Nougu_Param_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CA49C8,'size':4,'pad':0,'label':"lit_3916",'name':"@3916",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49CC,'size':4,'pad':0,'label':"lit_3917",'name':"@3917",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49D0,'size':4,'pad':0,'label':"lit_3918",'name':"@3918",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49D4,'size':4,'pad':0,'label':"lit_3919",'name':"@3919",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49D8,'size':4,'pad':0,'label':"lit_3920",'name':"@3920",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49DC,'size':4,'pad':0,'label':"lit_3921",'name':"@3921",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49E0,'size':4,'pad':0,'label':"lit_3922",'name':"@3922",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49E4,'size':4,'pad':0,'label':"lit_4046",'name':"@4046",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49E8,'size':4,'pad':0,'label':"lit_4047",'name':"@4047",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CA49EC,'size':4,'pad':0,'label':"lit_4048",'name':"@4048",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49F0,'size':4,'pad':0,'label':"lit_4060",'name':"@4060",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49F4,'size':4,'pad':0,'label':"lit_4061",'name':"@4061",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CA49F8,'size':7,'pad':0,'label':"d_a_obj_nougu__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CA4A00,'size':64,'pad':0,'label':"mCcDSph__13daObj_Nougu_c",'name':"mCcDSph__13daObj_Nougu_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CA4A40,'size':4,'pad':0,'label':"l_resName",'name':"l_resName",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CA4A44,'size':32,'pad':0,'label':"daObj_Nougu_MethodTable",'name':"daObj_Nougu_MethodTable",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CA4A64,'size':48,'pad':0,'label':"g_profile_OBJ_NOUGU",'name':"g_profile_OBJ_NOUGU",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CA4A94,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CA4AA0,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CA4AAC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CA4AD0,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CA4ADC,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CA4AE8,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CA4AF4,'size':12,'pad':0,'label':"__vt__13daObj_Nougu_c",'name':"__vt__13daObj_Nougu_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CA4B00,'size':12,'pad':0,'label':"__vt__19daObj_Nougu_Param_c",'name':"__vt__19daObj_Nougu_Param_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CA4B10,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CA4B18,'size':12,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CA4B24,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__13daObj_Nougu_cFv":5,
	"__dt__8dCcD_SphFv":6,
	"create__13daObj_Nougu_cFv":7,
	"__ct__8dCcD_SphFv":8,
	"__dt__8cM3dGSphFv":9,
	"__dt__8cM3dGAabFv":10,
	"__dt__12dBgS_AcchCirFv":11,
	"__dt__10dCcD_GSttsFv":12,
	"__dt__12dBgS_ObjAcchFv":13,
	"CreateHeap__13daObj_Nougu_cFv":14,
	"Delete__13daObj_Nougu_cFv":15,
	"Execute__13daObj_Nougu_cFv":16,
	"Draw__13daObj_Nougu_cFv":17,
	"createHeapCallBack__13daObj_Nougu_cFP10fopAc_ac_c":18,
	"getResName__13daObj_Nougu_cFv":19,
	"isDelete__13daObj_Nougu_cFv":20,
	"setEnvTevColor__13daObj_Nougu_cFv":21,
	"setRoomNo__13daObj_Nougu_cFv":22,
	"setMtx__13daObj_Nougu_cFv":23,
	"daObj_Nougu_Create__FPv":24,
	"daObj_Nougu_Delete__FPv":25,
	"daObj_Nougu_Execute__FPv":26,
	"daObj_Nougu_Draw__FPv":27,
	"daObj_Nougu_IsDelete__FPv":28,
	"__dt__10cCcD_GSttsFv":29,
	"__sinit_d_a_obj_nougu_cpp":30,
	"__dt__19daObj_Nougu_Param_cFv":31,
	"func_80CA4994":32,
	"func_80CA499C":33,
	"_ctors":34,
	"_dtors":35,
	"m__19daObj_Nougu_Param_c":36,
	"lit_3916":37,
	"lit_3917":38,
	"lit_3918":39,
	"lit_3919":40,
	"lit_3920":41,
	"lit_3921":42,
	"lit_3922":43,
	"lit_4046":44,
	"lit_4047":45,
	"lit_4048":46,
	"lit_4060":47,
	"lit_4061":48,
	"d_a_obj_nougu__stringBase0":49,
	"mCcDSph__13daObj_Nougu_c":50,
	"l_resName":51,
	"daObj_Nougu_MethodTable":52,
	"g_profile_OBJ_NOUGU":53,
	"__vt__8cM3dGAab":54,
	"__vt__8cM3dGSph":55,
	"__vt__12dBgS_ObjAcch":56,
	"__vt__10cCcD_GStts":57,
	"__vt__10dCcD_GStts":58,
	"__vt__12dBgS_AcchCir":59,
	"__vt__13daObj_Nougu_c":60,
	"__vt__19daObj_Nougu_Param_c":61,
	"__global_destructor_chain":62,
	"lit_3805":63,
	"l_HIO":64,
}

