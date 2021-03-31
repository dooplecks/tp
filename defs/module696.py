#
# Generate By: dol2asm
# Module: 696
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_zdoor",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_obj_zdoor",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80D3F3C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F3EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F418,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F438,'size':164,'pad':0,'label':"checkPlayerPos__FP9daZdoor_c",'name':"checkPlayerPos__FP9daZdoor_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F4DC,'size':148,'pad':0,'label':"doorCoHitCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf",'name':"doorCoHitCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F570,'size':236,'pad':0,'label':"doorTgHitCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf",'name':"doorTgHitCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F65C,'size':228,'pad':0,'label':"init_cyl__9daZdoor_cFv",'name':"init_cyl__9daZdoor_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F740,'size':324,'pad':0,'label':"set_cyl__9daZdoor_cFv",'name':"set_cyl__9daZdoor_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F884,'size':116,'pad':0,'label':"setBaseMtx__9daZdoor_cFv",'name':"setBaseMtx__9daZdoor_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F8F8,'size':120,'pad':0,'label':"Create__9daZdoor_cFv",'name':"Create__9daZdoor_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F970,'size':128,'pad':0,'label':"CreateHeap__9daZdoor_cFv",'name':"CreateHeap__9daZdoor_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3F9F0,'size':220,'pad':0,'label':"create1st__9daZdoor_cFv",'name':"create1st__9daZdoor_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3FACC,'size':540,'pad':0,'label':"Execute__9daZdoor_cFPPA3_A4_f",'name':"Execute__9daZdoor_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3FCE8,'size':164,'pad':0,'label':"Draw__9daZdoor_cFv",'name':"Draw__9daZdoor_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3FD8C,'size':64,'pad':0,'label':"Delete__9daZdoor_cFv",'name':"Delete__9daZdoor_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3FDCC,'size':332,'pad':0,'label':"daZdoor_create1st__FP9daZdoor_c",'name':"daZdoor_create1st__FP9daZdoor_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3FF18,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3FF60,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D3FFA8,'size':204,'pad':0,'label':"__dt__8dCcD_CylFv",'name':"__dt__8dCcD_CylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D40074,'size':132,'pad':0,'label':"__ct__8dCcD_CylFv",'name':"__ct__8dCcD_CylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D400F8,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D40168,'size':32,'pad':0,'label':"daZdoor_MoveBGDelete__FP9daZdoor_c",'name':"daZdoor_MoveBGDelete__FP9daZdoor_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D40188,'size':32,'pad':0,'label':"daZdoor_MoveBGExecute__FP9daZdoor_c",'name':"daZdoor_MoveBGExecute__FP9daZdoor_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D401A8,'size':44,'pad':0,'label':"daZdoor_MoveBGDraw__FP9daZdoor_c",'name':"daZdoor_MoveBGDraw__FP9daZdoor_c",'lib':-1,'tu':3,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D401D4,'size':8,'pad':0,'label':"func_80D401D4",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D401DC,'size':8,'pad':0,'label':"func_80D401DC",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D401E4,'size':4,'pad':0,'label':"data_80D401E4",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D401E8,'size':4,'pad':0,'label':"data_80D401E8",'name':None,'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D401EC,'size':60,'pad':0,'label':"l_cyl_data",'name':"l_cyl_data",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40228,'size':60,'pad':0,'label':"l_cyl_data2",'name':"l_cyl_data2",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40264,'size':6,'pad':2,'label':"l_open_limit_max",'name':"l_open_limit_max",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D4026C,'size':6,'pad':2,'label':"l_open_limit_min",'name':"l_open_limit_min",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40274,'size':6,'pad':2,'label':"l_open_speed",'name':"l_open_speed",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D4027C,'size':4,'pad':0,'label':"lit_3658",'name':"@3658",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40280,'size':4,'pad':0,'label':"lit_3679",'name':"@3679",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D40284,'size':4,'pad':4,'label':"lit_3712",'name':"@3712",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D4028C,'size':8,'pad':0,'label':"lit_3714",'name':"@3714",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40294,'size':4,'pad':0,'label':"lit_3796",'name':"@3796",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D40298,'size':4,'pad':0,'label':"lit_3797",'name':"@3797",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D4029C,'size':4,'pad':0,'label':"lit_3798",'name':"@3798",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D402A0,'size':4,'pad':0,'label':"lit_3799",'name':"@3799",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D402A4,'size':4,'pad':0,'label':"estimateSizeTbl",'name':"estimateSizeTbl$3848",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D402A8,'size':4,'pad':0,'label':"lit_3906",'name':"@3906",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D402AC,'size':4,'pad':0,'label':"lit_3907",'name':"@3907",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D402B0,'size':8,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80D402B8,'size':8,'pad':0,'label':"data_80D402B8",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D402C0,'size':8,'pad':0,'label':"data_80D402C0",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D402C8,'size':12,'pad':0,'label':"data_80D402C8",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D402D4,'size':12,'pad':0,'label':"data_80D402D4",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D402E0,'size':12,'pad':0,'label':"data_80D402E0",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D402EC,'size':12,'pad':0,'label':"data_80D402EC",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D402F8,'size':12,'pad':0,'label':"data_80D402F8",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40304,'size':12,'pad':0,'label':"data_80D40304",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40310,'size':68,'pad':0,'label':"l_cyl_src",'name':"l_cyl_src",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40354,'size':68,'pad':0,'label':"l_cyl_src2",'name':"l_cyl_src2",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D40398,'size':12,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D403A4,'size':12,'pad':0,'label':"l_bmdName",'name':"l_bmdName",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D403B0,'size':12,'pad':0,'label':"l_dzbName",'name':"l_dzbName",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D403BC,'size':32,'pad':0,'label':"daZdoor_METHODS",'name':"daZdoor_METHODS",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D403DC,'size':48,'pad':0,'label':"g_profile_Obj_ZDoor",'name':"g_profile_Obj_ZDoor",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D4040C,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D40418,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D40424,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D40448,'size':40,'pad':0,'label':"__vt__9daZdoor_c",'name':"__vt__9daZdoor_c",'lib':-1,'tu':3,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"checkPlayerPos__FP9daZdoor_c":3,
	"doorCoHitCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf":4,
	"doorTgHitCallBack__FP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf":5,
	"init_cyl__9daZdoor_cFv":6,
	"set_cyl__9daZdoor_cFv":7,
	"setBaseMtx__9daZdoor_cFv":8,
	"Create__9daZdoor_cFv":9,
	"CreateHeap__9daZdoor_cFv":10,
	"create1st__9daZdoor_cFv":11,
	"Execute__9daZdoor_cFPPA3_A4_f":12,
	"Draw__9daZdoor_cFv":13,
	"Delete__9daZdoor_cFv":14,
	"daZdoor_create1st__FP9daZdoor_c":15,
	"__dt__8cM3dGCylFv":16,
	"__dt__8cM3dGAabFv":17,
	"__dt__8dCcD_CylFv":18,
	"__ct__8dCcD_CylFv":19,
	"__dt__12dBgS_ObjAcchFv":20,
	"daZdoor_MoveBGDelete__FP9daZdoor_c":21,
	"daZdoor_MoveBGExecute__FP9daZdoor_c":22,
	"daZdoor_MoveBGDraw__FP9daZdoor_c":23,
	"func_80D401D4":24,
	"func_80D401DC":25,
	"data_80D401E4":26,
	"data_80D401E8":27,
	"l_cyl_data":28,
	"l_cyl_data2":29,
	"l_open_limit_max":30,
	"l_open_limit_min":31,
	"l_open_speed":32,
	"lit_3658":33,
	"lit_3679":34,
	"lit_3712":35,
	"lit_3714":36,
	"lit_3796":37,
	"lit_3797":38,
	"lit_3798":39,
	"lit_3799":40,
	"estimateSizeTbl":41,
	"lit_3906":42,
	"lit_3907":43,
	"stringBase0":44,
	"data_80D402B8":45,
	"data_80D402C0":46,
	"data_80D402C8":47,
	"data_80D402D4":48,
	"data_80D402E0":49,
	"data_80D402EC":50,
	"data_80D402F8":51,
	"data_80D40304":52,
	"l_cyl_src":53,
	"l_cyl_src2":54,
	"l_arcName":55,
	"l_bmdName":56,
	"l_dzbName":57,
	"daZdoor_METHODS":58,
	"g_profile_Obj_ZDoor":59,
	"__vt__8cM3dGCyl":60,
	"__vt__8cM3dGAab":61,
	"__vt__12dBgS_ObjAcch":62,
	"__vt__9daZdoor_c":63,
}

