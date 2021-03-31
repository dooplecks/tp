#
# Generate By: dol2asm
# Module: 683
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_wdStick",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_obj_wdStick",
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
	{'addr':0x80D31A60,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31A8C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31AB8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31AD8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31AF4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31B4C,'size':60,'pad':0,'label':"__ct__15daWdStick_HIO_cFv",'name':"__ct__15daWdStick_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31B88,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31BD0,'size':136,'pad':0,'label':"setBaseMtx__11daWdStick_cFv",'name':"setBaseMtx__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31C58,'size':108,'pad':0,'label':"CreateHeap__11daWdStick_cFv",'name':"CreateHeap__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31CC4,'size':728,'pad':0,'label':"create__11daWdStick_cFv",'name':"create__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31F9C,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D31FE4,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3202C,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D32088,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D320F8,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D32168,'size':44,'pad':0,'label':"createHeapCallBack__11daWdStick_cFP10fopAc_ac_c",'name':"createHeapCallBack__11daWdStick_cFP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D32194,'size':4,'pad':0,'label':"lightInit__11daWdStick_cFv",'name':"lightInit__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D32198,'size':4,'pad':0,'label':"setLight__11daWdStick_cFv",'name':"setLight__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D3219C,'size':1280,'pad':0,'label':"setFire__11daWdStick_cFv",'name':"setFire__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3269C,'size':980,'pad':0,'label':"Execute__11daWdStick_cFv",'name':"Execute__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D32A70,'size':764,'pad':0,'label':"bound__FP4cXyzRC13cBgS_PolyInfof",'name':"bound__FP4cXyzRC13cBgS_PolyInfof",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D32D6C,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D32DB4,'size':1428,'pad':0,'label':"bgCheck__11daWdStick_cFv",'name':"bgCheck__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33348,'size':172,'pad':0,'label':"setBoundSe__11daWdStick_cFv",'name':"setBoundSe__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D333F4,'size':280,'pad':0,'label':"mode_proc_call__11daWdStick_cFv",'name':"mode_proc_call__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3350C,'size':48,'pad':0,'label':"mode_init_wait__11daWdStick_cFv",'name':"mode_init_wait__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3353C,'size':76,'pad':0,'label':"mode_proc_wait__11daWdStick_cFv",'name':"mode_proc_wait__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33588,'size':36,'pad':0,'label':"mode_init_carry__11daWdStick_cFv",'name':"mode_init_carry__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D335AC,'size':704,'pad':0,'label':"mode_proc_carry__11daWdStick_cFv",'name':"mode_proc_carry__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3386C,'size':36,'pad':0,'label':"mode_init_drop__11daWdStick_cFv",'name':"mode_init_drop__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33890,'size':76,'pad':0,'label':"mode_proc_drop__11daWdStick_cFv",'name':"mode_proc_drop__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D338DC,'size':24,'pad':0,'label':"mode_init_roll__11daWdStick_cFv",'name':"mode_init_roll__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D338F4,'size':984,'pad':0,'label':"mode_proc_roll__11daWdStick_cFv",'name':"mode_proc_roll__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33CCC,'size':120,'pad':0,'label':"__dt__14dBgS_ObjGndChkFv",'name':"__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33D44,'size':36,'pad':0,'label':"chkWaterLineIn__11daWdStick_cFv",'name':"chkWaterLineIn__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33D68,'size':36,'pad':0,'label':"mode_init_sink__11daWdStick_cFv",'name':"mode_init_sink__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33D8C,'size':292,'pad':0,'label':"mode_proc_sink__11daWdStick_cFv",'name':"mode_proc_sink__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33EB0,'size':100,'pad':0,'label':"Draw__11daWdStick_cFv",'name':"Draw__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33F14,'size':48,'pad':0,'label':"Delete__11daWdStick_cFv",'name':"Delete__11daWdStick_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33F44,'size':44,'pad':0,'label':"daWdStick_Draw__FP11daWdStick_c",'name':"daWdStick_Draw__FP11daWdStick_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33F70,'size':44,'pad':0,'label':"daWdStick_Execute__FP11daWdStick_c",'name':"daWdStick_Execute__FP11daWdStick_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33F9C,'size':44,'pad':0,'label':"daWdStick_Delete__FP11daWdStick_c",'name':"daWdStick_Delete__FP11daWdStick_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33FC8,'size':32,'pad':0,'label':"daWdStick_Create__FP10fopAc_ac_c",'name':"daWdStick_Create__FP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D33FE8,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D34030,'size':92,'pad':0,'label':"__dt__15daWdStick_HIO_cFv",'name':"__dt__15daWdStick_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3408C,'size':112,'pad':0,'label':"__sinit_d_a_obj_wdStick_cpp",'name':"__sinit_d_a_obj_wdStick_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80D340FC,'size':8,'pad':0,'label':"func_80D340FC",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D34104,'size':8,'pad':0,'label':"func_80D34104",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3410C,'size':8,'pad':0,'label':"func_80D3410C",'name':"@20@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D34114,'size':8,'pad':0,'label':"func_80D34114",'name':"@76@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3411C,'size':8,'pad':0,'label':"func_80D3411C",'name':"@60@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D34124,'size':8,'pad':0,'label':"data_80D34124",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D3412C,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D34130,'size':8,'pad':0,'label':"pad_80D34130",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D34138,'size':48,'pad':0,'label':"mCcDObjInfo__11daWdStick_c",'name':"mCcDObjInfo__11daWdStick_c",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[10,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D34168,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3416C,'size':4,'pad':0,'label':"lit_3776",'name':"@3776",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34170,'size':4,'pad':0,'label':"lit_3777",'name':"@3777",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34174,'size':4,'pad':0,'label':"lit_3778",'name':"@3778",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34178,'size':4,'pad':0,'label':"lit_4028",'name':"@4028",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3417C,'size':4,'pad':0,'label':"lit_4029",'name':"@4029",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34180,'size':4,'pad':0,'label':"lit_4030",'name':"@4030",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D34184,'size':4,'pad':0,'label':"lit_4031",'name':"@4031",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34188,'size':4,'pad':0,'label':"lit_4032",'name':"@4032",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3418C,'size':4,'pad':0,'label':"lit_4033",'name':"@4033",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34190,'size':4,'pad':0,'label':"lit_4034",'name':"@4034",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34194,'size':4,'pad':0,'label':"lit_4118",'name':"@4118",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34198,'size':4,'pad':0,'label':"lit_4119",'name':"@4119",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3419C,'size':4,'pad':0,'label':"lit_4120",'name':"@4120",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341A0,'size':4,'pad':4,'label':"lit_4121",'name':"@4121",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341A8,'size':8,'pad':0,'label':"lit_4220",'name':"@4220",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D341B0,'size':8,'pad':0,'label':"lit_4221",'name':"@4221",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D341B8,'size':8,'pad':0,'label':"lit_4222",'name':"@4222",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D341C0,'size':4,'pad':0,'label':"lit_4444",'name':"@4444",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341C4,'size':4,'pad':0,'label':"lit_4445",'name':"@4445",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341C8,'size':4,'pad':0,'label':"lit_4446",'name':"@4446",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341CC,'size':4,'pad':0,'label':"lit_4447",'name':"@4447",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341D0,'size':4,'pad':0,'label':"lit_4448",'name':"@4448",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341D4,'size':4,'pad':0,'label':"lit_4449",'name':"@4449",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341D8,'size':4,'pad':0,'label':"lit_4574",'name':"@4574",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341DC,'size':4,'pad':0,'label':"lit_4704",'name':"@4704",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341E0,'size':4,'pad':0,'label':"lit_4705",'name':"@4705",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341E4,'size':4,'pad':0,'label':"lit_4706",'name':"@4706",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341E8,'size':4,'pad':0,'label':"lit_4707",'name':"@4707",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341EC,'size':4,'pad':0,'label':"lit_4708",'name':"@4708",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341F0,'size':4,'pad':0,'label':"lit_4709",'name':"@4709",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341F4,'size':4,'pad':0,'label':"lit_4710",'name':"@4710",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341F8,'size':4,'pad':0,'label':"lit_4725",'name':"@4725",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D341FC,'size':4,'pad':0,'label':"lit_4731",'name':"@4731",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34200,'size':4,'pad':0,'label':"lit_4777",'name':"@4777",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34204,'size':4,'pad':0,'label':"lit_4778",'name':"@4778",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34208,'size':4,'pad':0,'label':"lit_4779",'name':"@4779",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3420C,'size':4,'pad':0,'label':"lit_4780",'name':"@4780",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D34210,'size':10,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80D3421C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D34228,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D3423C,'size':64,'pad':0,'label':"mCcDSph__11daWdStick_c",'name':"mCcDSph__11daWdStick_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D3427C,'size':12,'pad':0,'label':"lit_4470",'name':"@4470",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D34288,'size':12,'pad':0,'label':"lit_4471",'name':"@4471",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D34294,'size':12,'pad':0,'label':"lit_4472",'name':"@4472",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D342A0,'size':12,'pad':0,'label':"lit_4473",'name':"@4473",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D342AC,'size':12,'pad':0,'label':"lit_4474",'name':"@4474",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D342B8,'size':60,'pad':0,'label':"data_80D342B8",'name':"l_mode_func$4469",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D342F4,'size':32,'pad':0,'label':"l_daWdStick_Method",'name':"l_daWdStick_Method",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D34314,'size':48,'pad':0,'label':"g_profile_Obj_WdStick",'name':"g_profile_Obj_WdStick",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D34344,'size':48,'pad':0,'label':"__vt__14dBgS_ObjGndChk",'name':"__vt__14dBgS_ObjGndChk",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D34374,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D34380,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D3438C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D34398,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D343A4,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D343B0,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D343BC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D343E0,'size':24,'pad':0,'label':"__vt__11daWdStick_c",'name':"__vt__11daWdStick_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D343F8,'size':12,'pad':0,'label':"__vt__15daWdStick_HIO_c",'name':"__vt__15daWdStick_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D34404,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D34410,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D34418,'size':12,'pad':0,'label':"lit_3643",'name':"@3643",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D34424,'size':12,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D34430,'size':4,'pad':0,'label':"data_80D34430",'name':None,'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__15daWdStick_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__11daWdStick_cFv":7,
	"CreateHeap__11daWdStick_cFv":8,
	"create__11daWdStick_cFv":9,
	"__dt__8cM3dGSphFv":10,
	"__dt__8cM3dGAabFv":11,
	"__dt__10dCcD_GSttsFv":12,
	"__dt__12dBgS_AcchCirFv":13,
	"__dt__12dBgS_ObjAcchFv":14,
	"createHeapCallBack__11daWdStick_cFP10fopAc_ac_c":15,
	"lightInit__11daWdStick_cFv":16,
	"setLight__11daWdStick_cFv":17,
	"setFire__11daWdStick_cFv":18,
	"Execute__11daWdStick_cFv":19,
	"bound__FP4cXyzRC13cBgS_PolyInfof":20,
	"__dt__8cM3dGPlaFv":21,
	"bgCheck__11daWdStick_cFv":22,
	"setBoundSe__11daWdStick_cFv":23,
	"mode_proc_call__11daWdStick_cFv":24,
	"mode_init_wait__11daWdStick_cFv":25,
	"mode_proc_wait__11daWdStick_cFv":26,
	"mode_init_carry__11daWdStick_cFv":27,
	"mode_proc_carry__11daWdStick_cFv":28,
	"mode_init_drop__11daWdStick_cFv":29,
	"mode_proc_drop__11daWdStick_cFv":30,
	"mode_init_roll__11daWdStick_cFv":31,
	"mode_proc_roll__11daWdStick_cFv":32,
	"__dt__14dBgS_ObjGndChkFv":33,
	"chkWaterLineIn__11daWdStick_cFv":34,
	"mode_init_sink__11daWdStick_cFv":35,
	"mode_proc_sink__11daWdStick_cFv":36,
	"Draw__11daWdStick_cFv":37,
	"Delete__11daWdStick_cFv":38,
	"daWdStick_Draw__FP11daWdStick_c":39,
	"daWdStick_Execute__FP11daWdStick_c":40,
	"daWdStick_Delete__FP11daWdStick_c":41,
	"daWdStick_Create__FP10fopAc_ac_c":42,
	"__dt__10cCcD_GSttsFv":43,
	"__dt__15daWdStick_HIO_cFv":44,
	"__sinit_d_a_obj_wdStick_cpp":45,
	"func_80D340FC":46,
	"func_80D34104":47,
	"func_80D3410C":48,
	"func_80D34114":49,
	"func_80D3411C":50,
	"data_80D34124":51,
	"__destroy_global_chain_reference":52,
	"pad_80D34130":53,
	"mCcDObjInfo__11daWdStick_c":54,
	"lit_3775":55,
	"lit_3776":56,
	"lit_3777":57,
	"lit_3778":58,
	"lit_4028":59,
	"lit_4029":60,
	"lit_4030":61,
	"lit_4031":62,
	"lit_4032":63,
	"lit_4033":64,
	"lit_4034":65,
	"lit_4118":66,
	"lit_4119":67,
	"lit_4120":68,
	"lit_4121":69,
	"lit_4220":70,
	"lit_4221":71,
	"lit_4222":72,
	"lit_4444":73,
	"lit_4445":74,
	"lit_4446":75,
	"lit_4447":76,
	"lit_4448":77,
	"lit_4449":78,
	"lit_4574":79,
	"lit_4704":80,
	"lit_4705":81,
	"lit_4706":82,
	"lit_4707":83,
	"lit_4708":84,
	"lit_4709":85,
	"lit_4710":86,
	"lit_4725":87,
	"lit_4731":88,
	"lit_4777":89,
	"lit_4778":90,
	"lit_4779":91,
	"lit_4780":92,
	"stringBase0":93,
	"cNullVec__6Z2Calc":94,
	"lit_1787":95,
	"mCcDSph__11daWdStick_c":96,
	"lit_4470":97,
	"lit_4471":98,
	"lit_4472":99,
	"lit_4473":100,
	"lit_4474":101,
	"data_80D342B8":102,
	"l_daWdStick_Method":103,
	"g_profile_Obj_WdStick":104,
	"__vt__14dBgS_ObjGndChk":105,
	"__vt__8cM3dGPla":106,
	"__vt__12dBgS_AcchCir":107,
	"__vt__10cCcD_GStts":108,
	"__vt__10dCcD_GStts":109,
	"__vt__8cM3dGSph":110,
	"__vt__8cM3dGAab":111,
	"__vt__12dBgS_ObjAcch":112,
	"__vt__11daWdStick_c":113,
	"__vt__15daWdStick_HIO_c":114,
	"__vt__14mDoHIO_entry_c":115,
	"__global_destructor_chain":116,
	"lit_3643":117,
	"l_HIO":118,
	"data_80D34430":119,
}

