#
# Generate By: dol2asm
# Module: 42
#

# Libraries
LIBRARIES = [
	"d/a/d_a_tbox2",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_tbox2",
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
	{'addr':0x804969A0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804969CC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804969F8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80496A18,'size':60,'pad':0,'label':"initBaseMtx__9daTbox2_cFv",'name':"initBaseMtx__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80496A54,'size':100,'pad':0,'label':"setBaseMtx__9daTbox2_cFv",'name':"setBaseMtx__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80496AB8,'size':360,'pad':0,'label':"Create__9daTbox2_cFv",'name':"Create__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80496C20,'size':468,'pad':0,'label':"CreateHeap__9daTbox2_cFv",'name':"CreateHeap__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80496DF4,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80496E3C,'size':580,'pad':0,'label':"create1st__9daTbox2_cFv",'name':"create1st__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497080,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804970F0,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497160,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804971A8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804971F0,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8049724C,'size':556,'pad':0,'label':"demoProc__9daTbox2_cFv",'name':"demoProc__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497478,'size':136,'pad':0,'label':"openInit__9daTbox2_cFv",'name':"openInit__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497500,'size':236,'pad':0,'label':"Execute__9daTbox2_cFPPA3_A4_f",'name':"Execute__9daTbox2_cFPPA3_A4_f",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804975EC,'size':140,'pad':0,'label':"mode_proc_call__9daTbox2_cFv",'name':"mode_proc_call__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497678,'size':280,'pad':0,'label':"mode_exec_wait__9daTbox2_cFv",'name':"mode_exec_wait__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497790,'size':124,'pad':0,'label':"mode_exec__9daTbox2_cFv",'name':"mode_exec__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8049780C,'size':188,'pad':0,'label':"action__9daTbox2_cFv",'name':"action__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804978C8,'size':12,'pad':0,'label':"init_actionWait__9daTbox2_cFv",'name':"init_actionWait__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804978D4,'size':4,'pad':0,'label':"actionWait__9daTbox2_cFv",'name':"actionWait__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x804978D8,'size':12,'pad':0,'label':"init_actionNotOpenDemo__9daTbox2_cFv",'name':"init_actionNotOpenDemo__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804978E4,'size':104,'pad':0,'label':"actionNotOpenDemo__9daTbox2_cFv",'name':"actionNotOpenDemo__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8049794C,'size':12,'pad':0,'label':"init_actionOpenDemo__9daTbox2_cFv",'name':"init_actionOpenDemo__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497958,'size':180,'pad':0,'label':"actionOpenDemo__9daTbox2_cFv",'name':"actionOpenDemo__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497A0C,'size':12,'pad':0,'label':"init_actionOpenWait__9daTbox2_cFv",'name':"init_actionOpenWait__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497A18,'size':440,'pad':0,'label':"actionOpenWait__9daTbox2_cFv",'name':"actionOpenWait__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497BD0,'size':144,'pad':0,'label':"setGetDemoItem__9daTbox2_cFv",'name':"setGetDemoItem__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497C60,'size':320,'pad':0,'label':"boxCheck__9daTbox2_cFv",'name':"boxCheck__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497DA0,'size':204,'pad':0,'label':"Draw__9daTbox2_cFv",'name':"Draw__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497E6C,'size':108,'pad':0,'label':"Delete__9daTbox2_cFv",'name':"Delete__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80497ED8,'size':436,'pad':0,'label':"daTbox2_create1st__FP9daTbox2_c",'name':"daTbox2_create1st__FP9daTbox2_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8049808C,'size':32,'pad':0,'label':"daTbox2_MoveBGDelete__FP9daTbox2_c",'name':"daTbox2_MoveBGDelete__FP9daTbox2_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804980AC,'size':32,'pad':0,'label':"daTbox2_MoveBGExecute__FP9daTbox2_c",'name':"daTbox2_MoveBGExecute__FP9daTbox2_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804980CC,'size':44,'pad':0,'label':"daTbox2_MoveBGDraw__FP9daTbox2_c",'name':"daTbox2_MoveBGDraw__FP9daTbox2_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804980F8,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80498140,'size':8,'pad':0,'label':"checkSmallTbox__9daTbox2_cFv",'name':"checkSmallTbox__9daTbox2_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80498148,'size':8,'pad':0,'label':"func_80498148",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80498150,'size':8,'pad':0,'label':"func_80498150",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80498158,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x8049815C,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80498160,'size':32,'pad':0,'label':"l_resInfo",'name':"l_resInfo",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80498180,'size':60,'pad':0,'label':"l_cyl_info",'name':"l_cyl_info",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804981BC,'size':4,'pad':0,'label':"lit_3714",'name':"@3714",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804981C0,'size':4,'pad':0,'label':"lit_3715",'name':"@3715",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804981C4,'size':4,'pad':0,'label':"lit_3716",'name':"@3716",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804981C8,'size':4,'pad':0,'label':"lit_3717",'name':"@3717",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804981CC,'size':4,'pad':0,'label':"lit_3718",'name':"@3718",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804981D0,'size':4,'pad':0,'label':"lit_3763",'name':"@3763",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804981D4,'size':4,'pad':0,'label':"lit_4021",'name':"@4021",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804981D8,'size':4,'pad':0,'label':"lit_4266",'name':"@4266",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804981DC,'size':4,'pad':0,'label':"lit_4267",'name':"@4267",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804981E0,'size':123,'pad':0,'label':"d_a_tbox2__stringBase0",'name':"@stringBase0",'lib':-1,'tu':4,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x8049825C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80498268,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8049827C,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80498280,'size':4,'pad':0,'label':"l_staff_name",'name':"l_staff_name",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80498284,'size':68,'pad':0,'label':"l_cyl_src",'name':"l_cyl_src",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804982C8,'size':16,'pad':0,'label':"action_table",'name':"action_table$3964",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804982D8,'size':12,'pad':0,'label':"lit_4060",'name':"@4060",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804982E4,'size':12,'pad':0,'label':"lit_4061",'name':"@4061",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804982F0,'size':24,'pad':0,'label':"l_func_4059",'name':"l_func$4059",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80498308,'size':12,'pad':0,'label':"lit_4101",'name':"@4101",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80498314,'size':12,'pad':0,'label':"lit_4102",'name':"@4102",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80498320,'size':12,'pad':0,'label':"lit_4103",'name':"@4103",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8049832C,'size':12,'pad':0,'label':"lit_4104",'name':"@4104",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80498338,'size':48,'pad':0,'label':"l_func_4100",'name':"l_func$4100",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80498368,'size':32,'pad':0,'label':"daTbox2_METHODS",'name':"daTbox2_METHODS",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80498388,'size':48,'pad':0,'label':"g_profile_TBOX2",'name':"g_profile_TBOX2",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804983B8,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804983C4,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804983D0,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804983DC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80498400,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8049840C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80498418,'size':44,'pad':0,'label':"__vt__12daTboxBase_c",'name':"__vt__12daTboxBase_c",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80498444,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80498450,'size':44,'pad':0,'label':"__vt__9daTbox2_c",'name':"__vt__9daTbox2_c",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80498480,'size':4,'pad':0,'label':"struct_80498480",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':False,'is_reachable':False,'r':[0,2,0],'sh':[0,0,0],'type':"Structure"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"initBaseMtx__9daTbox2_cFv":3,
	"setBaseMtx__9daTbox2_cFv":4,
	"Create__9daTbox2_cFv":5,
	"CreateHeap__9daTbox2_cFv":6,
	"__dt__12J3DFrameCtrlFv":7,
	"create1st__9daTbox2_cFv":8,
	"__dt__12dBgS_AcchCirFv":9,
	"__dt__12dBgS_ObjAcchFv":10,
	"__dt__8cM3dGCylFv":11,
	"__dt__8cM3dGAabFv":12,
	"__dt__10dCcD_GSttsFv":13,
	"demoProc__9daTbox2_cFv":14,
	"openInit__9daTbox2_cFv":15,
	"Execute__9daTbox2_cFPPA3_A4_f":16,
	"mode_proc_call__9daTbox2_cFv":17,
	"mode_exec_wait__9daTbox2_cFv":18,
	"mode_exec__9daTbox2_cFv":19,
	"action__9daTbox2_cFv":20,
	"init_actionWait__9daTbox2_cFv":21,
	"actionWait__9daTbox2_cFv":22,
	"init_actionNotOpenDemo__9daTbox2_cFv":23,
	"actionNotOpenDemo__9daTbox2_cFv":24,
	"init_actionOpenDemo__9daTbox2_cFv":25,
	"actionOpenDemo__9daTbox2_cFv":26,
	"init_actionOpenWait__9daTbox2_cFv":27,
	"actionOpenWait__9daTbox2_cFv":28,
	"setGetDemoItem__9daTbox2_cFv":29,
	"boxCheck__9daTbox2_cFv":30,
	"Draw__9daTbox2_cFv":31,
	"Delete__9daTbox2_cFv":32,
	"daTbox2_create1st__FP9daTbox2_c":33,
	"daTbox2_MoveBGDelete__FP9daTbox2_c":34,
	"daTbox2_MoveBGExecute__FP9daTbox2_c":35,
	"daTbox2_MoveBGDraw__FP9daTbox2_c":36,
	"__dt__10cCcD_GSttsFv":37,
	"checkSmallTbox__9daTbox2_cFv":38,
	"func_80498148":39,
	"func_80498150":40,
	"_ctors":41,
	"_dtors":42,
	"l_resInfo":43,
	"l_cyl_info":44,
	"lit_3714":45,
	"lit_3715":46,
	"lit_3716":47,
	"lit_3717":48,
	"lit_3718":49,
	"lit_3763":50,
	"lit_4021":51,
	"lit_4266":52,
	"lit_4267":53,
	"d_a_tbox2__stringBase0":54,
	"cNullVec__6Z2Calc":55,
	"lit_1787":56,
	"l_arcName":57,
	"l_staff_name":58,
	"l_cyl_src":59,
	"action_table":60,
	"lit_4060":61,
	"lit_4061":62,
	"l_func_4059":63,
	"lit_4101":64,
	"lit_4102":65,
	"lit_4103":66,
	"lit_4104":67,
	"l_func_4100":68,
	"daTbox2_METHODS":69,
	"g_profile_TBOX2":70,
	"__vt__10cCcD_GStts":71,
	"__vt__10dCcD_GStts":72,
	"__vt__12dBgS_AcchCir":73,
	"__vt__12dBgS_ObjAcch":74,
	"__vt__8cM3dGCyl":75,
	"__vt__8cM3dGAab":76,
	"__vt__12daTboxBase_c":77,
	"__vt__12J3DFrameCtrl":78,
	"__vt__9daTbox2_c":79,
	"struct_80498480":80,
}

