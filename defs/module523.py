#
# Generate By: dol2asm
# Module: 523
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lv4CandleDemoTag",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_lv4CandleDemoTag",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80C5C900,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5C92C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5C958,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5C978,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5C994,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5C9EC,'size':36,'pad':0,'label':"__ct__24dalv4CandleDemoTag_HIO_cFv",'name':"__ct__24dalv4CandleDemoTag_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CA10,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CA58,'size':56,'pad':0,'label':"setBaseMtx__20dalv4CandleDemoTag_cFv",'name':"setBaseMtx__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CA90,'size':276,'pad':0,'label':"create__20dalv4CandleDemoTag_cFv",'name':"create__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CBA4,'size':68,'pad':0,'label':"Execute__20dalv4CandleDemoTag_cFv",'name':"Execute__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CBE8,'size':188,'pad':0,'label':"procMain__20dalv4CandleDemoTag_cFv",'name':"procMain__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CCA4,'size':28,'pad':0,'label':"init_modeWatch__20dalv4CandleDemoTag_cFv",'name':"init_modeWatch__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CCC0,'size':256,'pad':0,'label':"modeWatch__20dalv4CandleDemoTag_cFv",'name':"modeWatch__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CDC0,'size':176,'pad':0,'label':"init_modeEnemyCreate__20dalv4CandleDemoTag_cFv",'name':"init_modeEnemyCreate__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CE70,'size':68,'pad':0,'label':"modeEnemyCreate__20dalv4CandleDemoTag_cFv",'name':"modeEnemyCreate__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CEB4,'size':12,'pad':0,'label':"init_modeNG__20dalv4CandleDemoTag_cFv",'name':"init_modeNG__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CEC0,'size':116,'pad':0,'label':"modeNG__20dalv4CandleDemoTag_cFv",'name':"modeNG__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CF34,'size':12,'pad':0,'label':"init_modeEnd__20dalv4CandleDemoTag_cFv",'name':"init_modeEnd__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CF40,'size':56,'pad':0,'label':"modeEnd__20dalv4CandleDemoTag_cFv",'name':"modeEnd__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CF78,'size':36,'pad':0,'label':"eventStart__20dalv4CandleDemoTag_cFv",'name':"eventStart__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CF9C,'size':80,'pad':0,'label':"searchShutterAct__20dalv4CandleDemoTag_cFPvPv",'name':"searchShutterAct__20dalv4CandleDemoTag_cFPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5CFEC,'size':8,'pad':0,'label':"Draw__20dalv4CandleDemoTag_cFv",'name':"Draw__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5CFF4,'size':8,'pad':0,'label':"Delete__20dalv4CandleDemoTag_cFv",'name':"Delete__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5CFFC,'size':32,'pad':0,'label':"dalv4CandleDemoTag_Draw__FP20dalv4CandleDemoTag_c",'name':"dalv4CandleDemoTag_Draw__FP20dalv4CandleDemoTag_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D01C,'size':32,'pad':0,'label':"dalv4CandleDemoTag_Execute__FP20dalv4CandleDemoTag_c",'name':"dalv4CandleDemoTag_Execute__FP20dalv4CandleDemoTag_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D03C,'size':32,'pad':0,'label':"dalv4CandleDemoTag_Delete__FP20dalv4CandleDemoTag_c",'name':"dalv4CandleDemoTag_Delete__FP20dalv4CandleDemoTag_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D05C,'size':32,'pad':0,'label':"dalv4CandleDemoTag_Create__FP10fopAc_ac_c",'name':"dalv4CandleDemoTag_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D07C,'size':92,'pad':0,'label':"__dt__24dalv4CandleDemoTag_HIO_cFv",'name':"__dt__24dalv4CandleDemoTag_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D0D8,'size':60,'pad':0,'label':"__sinit_d_a_obj_lv4CandleDemoTag_cpp",'name':"__sinit_d_a_obj_lv4CandleDemoTag_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C5D114,'size':8,'pad':0,'label':"func_80C5D114",'name':"@1392@eventStart__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D11C,'size':8,'pad':0,'label':"func_80C5D11C",'name':"@1392@__dt__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D124,'size':72,'pad':0,'label':"__dt__17dEvLib_callback_cFv",'name':"__dt__17dEvLib_callback_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D16C,'size':8,'pad':0,'label':"eventRun__17dEvLib_callback_cFv",'name':"eventRun__17dEvLib_callback_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5D174,'size':8,'pad':0,'label':"eventEnd__17dEvLib_callback_cFv",'name':"eventEnd__17dEvLib_callback_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5D17C,'size':8,'pad':0,'label':"eventStart__17dEvLib_callback_cFv",'name':"eventStart__17dEvLib_callback_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5D184,'size':128,'pad':0,'label':"__dt__20dalv4CandleDemoTag_cFv",'name':"__dt__20dalv4CandleDemoTag_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5D204,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C5D20C,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C5D218,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5D224,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C5D238,'size':12,'pad':0,'label':"lit_3702",'name':"@3702",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5D244,'size':12,'pad':0,'label':"lit_3703",'name':"@3703",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5D250,'size':12,'pad':0,'label':"lit_3704",'name':"@3704",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5D25C,'size':12,'pad':0,'label':"lit_3705",'name':"@3705",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5D268,'size':48,'pad':0,'label':"mode_proc",'name':"mode_proc$3701",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5D298,'size':32,'pad':0,'label':"l_dalv4CandleDemoTag_Method",'name':"l_dalv4CandleDemoTag_Method",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5D2B8,'size':48,'pad':0,'label':"g_profile_Tag_Lv4CandleDm",'name':"g_profile_Tag_Lv4CandleDm",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5D2E8,'size':40,'pad':0,'label':"__vt__20dalv4CandleDemoTag_c",'name':"__vt__20dalv4CandleDemoTag_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C5D310,'size':24,'pad':0,'label':"__vt__17dEvLib_callback_c",'name':"__vt__17dEvLib_callback_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C5D328,'size':12,'pad':0,'label':"__vt__24dalv4CandleDemoTag_HIO_c",'name':"__vt__24dalv4CandleDemoTag_HIO_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C5D334,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C5D340,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5D348,'size':12,'pad':0,'label':"lit_3632",'name':"@3632",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5D354,'size':8,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5D35C,'size':4,'pad':0,'label':"data_80C5D35C",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__24dalv4CandleDemoTag_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__20dalv4CandleDemoTag_cFv":7,
	"create__20dalv4CandleDemoTag_cFv":8,
	"Execute__20dalv4CandleDemoTag_cFv":9,
	"procMain__20dalv4CandleDemoTag_cFv":10,
	"init_modeWatch__20dalv4CandleDemoTag_cFv":11,
	"modeWatch__20dalv4CandleDemoTag_cFv":12,
	"init_modeEnemyCreate__20dalv4CandleDemoTag_cFv":13,
	"modeEnemyCreate__20dalv4CandleDemoTag_cFv":14,
	"init_modeNG__20dalv4CandleDemoTag_cFv":15,
	"modeNG__20dalv4CandleDemoTag_cFv":16,
	"init_modeEnd__20dalv4CandleDemoTag_cFv":17,
	"modeEnd__20dalv4CandleDemoTag_cFv":18,
	"eventStart__20dalv4CandleDemoTag_cFv":19,
	"searchShutterAct__20dalv4CandleDemoTag_cFPvPv":20,
	"Draw__20dalv4CandleDemoTag_cFv":21,
	"Delete__20dalv4CandleDemoTag_cFv":22,
	"dalv4CandleDemoTag_Draw__FP20dalv4CandleDemoTag_c":23,
	"dalv4CandleDemoTag_Execute__FP20dalv4CandleDemoTag_c":24,
	"dalv4CandleDemoTag_Delete__FP20dalv4CandleDemoTag_c":25,
	"dalv4CandleDemoTag_Create__FP10fopAc_ac_c":26,
	"__dt__24dalv4CandleDemoTag_HIO_cFv":27,
	"__sinit_d_a_obj_lv4CandleDemoTag_cpp":28,
	"func_80C5D114":29,
	"func_80C5D11C":30,
	"__dt__17dEvLib_callback_cFv":31,
	"eventRun__17dEvLib_callback_cFv":32,
	"eventEnd__17dEvLib_callback_cFv":33,
	"eventStart__17dEvLib_callback_cFv":34,
	"__dt__20dalv4CandleDemoTag_cFv":35,
	"_ctors":36,
	"_dtors":37,
	"cNullVec__6Z2Calc":38,
	"lit_1787":39,
	"lit_3702":40,
	"lit_3703":41,
	"lit_3704":42,
	"lit_3705":43,
	"mode_proc":44,
	"l_dalv4CandleDemoTag_Method":45,
	"g_profile_Tag_Lv4CandleDm":46,
	"__vt__20dalv4CandleDemoTag_c":47,
	"__vt__17dEvLib_callback_c":48,
	"__vt__24dalv4CandleDemoTag_HIO_c":49,
	"__vt__14mDoHIO_entry_c":50,
	"__global_destructor_chain":51,
	"lit_3632":52,
	"l_HIO":53,
	"data_80C5D35C":54,
}

