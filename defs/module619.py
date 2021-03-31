#
# Generate By: dol2asm
# Module: 619
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_shield",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_obj_shield",
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
	{'addr':0x80CD69E0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD6A0C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD6A38,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD6A58,'size':764,'pad':0,'label':"Reflect__FP4cXyzRC13cBgS_PolyInfof",'name':"Reflect__FP4cXyzRC13cBgS_PolyInfof",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD6D54,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD6D9C,'size':60,'pad':0,'label':"initBaseMtx__14daItemShield_cFv",'name':"initBaseMtx__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD6DD8,'size':700,'pad':0,'label':"setBaseMtx__14daItemShield_cFv",'name':"setBaseMtx__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7094,'size':440,'pad':0,'label':"Create__14daItemShield_cFv",'name':"Create__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD724C,'size':8,'pad':0,'label':"__CreateHeap__14daItemShield_cFv",'name':"__CreateHeap__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CD7254,'size':460,'pad':0,'label':"create__14daItemShield_cFv",'name':"create__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7420,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7468,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD74B0,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD750C,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD757C,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD75EC,'size':328,'pad':0,'label':"bg_check__14daItemShield_cFv",'name':"bg_check__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7734,'size':188,'pad':0,'label':"action_proc_call__14daItemShield_cFv",'name':"action_proc_call__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD77F0,'size':56,'pad':0,'label':"actionInit__14daItemShield_cFv",'name':"actionInit__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7828,'size':104,'pad':0,'label':"actionWaitInit__14daItemShield_cFv",'name':"actionWaitInit__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7890,'size':984,'pad':0,'label':"actionWait__14daItemShield_cFv",'name':"actionWait__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7C68,'size':156,'pad':0,'label':"initActionOrderGetDemo__14daItemShield_cFv",'name':"initActionOrderGetDemo__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7D04,'size':124,'pad':0,'label':"actionOrderGetDemo__14daItemShield_cFv",'name':"actionOrderGetDemo__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7D80,'size':128,'pad':0,'label':"actionGetDemo__14daItemShield_cFv",'name':"actionGetDemo__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7E00,'size':188,'pad':0,'label':"event_proc_call__14daItemShield_cFv",'name':"event_proc_call__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7EBC,'size':100,'pad':0,'label':"actionWaitCamDemo__14daItemShield_cFv",'name':"actionWaitCamDemo__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7F20,'size':104,'pad':0,'label':"actionOrderCamDemo__14daItemShield_cFv",'name':"actionOrderCamDemo__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7F88,'size':92,'pad':0,'label':"actionCamDemo__14daItemShield_cFv",'name':"actionCamDemo__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD7FE4,'size':4,'pad':0,'label':"actionCamDemoEnd__14daItemShield_cFv",'name':"actionCamDemoEnd__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CD7FE8,'size':260,'pad':0,'label':"execute__14daItemShield_cFv",'name':"execute__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD80EC,'size':84,'pad':0,'label':"draw__14daItemShield_cFv",'name':"draw__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD8140,'size':56,'pad':0,'label':"_delete__14daItemShield_cFv",'name':"_delete__14daItemShield_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD8178,'size':32,'pad':0,'label':"daItemShield_Draw__FP14daItemShield_c",'name':"daItemShield_Draw__FP14daItemShield_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD8198,'size':32,'pad':0,'label':"daItemShield_Execute__FP14daItemShield_c",'name':"daItemShield_Execute__FP14daItemShield_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD81B8,'size':32,'pad':0,'label':"daItemShield_Delete__FP14daItemShield_c",'name':"daItemShield_Delete__FP14daItemShield_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD81D8,'size':32,'pad':0,'label':"daItemShield_Create__FP10fopAc_ac_c",'name':"daItemShield_Create__FP10fopAc_ac_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD81F8,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD8240,'size':28,'pad':0,'label':"func_80CD8240",'name':"cLib_calcTimer<Uc>__FPUc",'lib':-1,'tu':4,'section':0,'class_template':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD825C,'size':8,'pad':0,'label':"func_80CD825C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD8264,'size':8,'pad':0,'label':"func_80CD8264",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CD826C,'size':4,'pad':0,'label':"data_80CD826C",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD8270,'size':4,'pad':0,'label':"data_80CD8270",'name':None,'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD8274,'size':68,'pad':0,'label':"l_cyl_src",'name':"l_cyl_src",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD82B8,'size':4,'pad':0,'label':"lit_3856",'name':"@3856",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD82BC,'size':8,'pad':0,'label':"lit_3857",'name':"@3857",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD82C4,'size':8,'pad':0,'label':"lit_3858",'name':"@3858",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD82CC,'size':8,'pad':0,'label':"lit_3859",'name':"@3859",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD82D4,'size':4,'pad':4,'label':"lit_3953",'name':"@3953",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD82DC,'size':8,'pad':0,'label':"lit_3954",'name':"@3954",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD82E4,'size':4,'pad':0,'label':"lit_3955",'name':"@3955",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD82E8,'size':4,'pad':0,'label':"lit_3956",'name':"@3956",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD82EC,'size':4,'pad':0,'label':"lit_3957",'name':"@3957",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD82F0,'size':4,'pad':0,'label':"lit_3958",'name':"@3958",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD82F4,'size':8,'pad':0,'label':"lit_3960",'name':"@3960",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD82FC,'size':4,'pad':0,'label':"lit_4003",'name':"@4003",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD8300,'size':4,'pad':0,'label':"lit_4004",'name':"@4004",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD8304,'size':8,'pad':0,'label':"lit_4006",'name':"@4006",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD830C,'size':4,'pad':0,'label':"lit_4180",'name':"@4180",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD8310,'size':4,'pad':0,'label':"lit_4181",'name':"@4181",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD8314,'size':4,'pad':0,'label':"lit_4182",'name':"@4182",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD8318,'size':4,'pad':0,'label':"lit_4183",'name':"@4183",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD831C,'size':4,'pad':0,'label':"lit_4184",'name':"@4184",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD8320,'size':4,'pad':0,'label':"lit_4335",'name':"@4335",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD8324,'size':4,'pad':0,'label':"lit_4336",'name':"@4336",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD8328,'size':4,'pad':0,'label':"lit_4337",'name':"@4337",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD832C,'size':16,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CD833C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD8348,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CD835C,'size':12,'pad':0,'label':"lit_4189",'name':"@4189",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD8368,'size':12,'pad':0,'label':"lit_4190",'name':"@4190",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD8374,'size':12,'pad':0,'label':"lit_4191",'name':"@4191",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD8380,'size':12,'pad':0,'label':"lit_4192",'name':"@4192",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD838C,'size':48,'pad':0,'label':"data_80CD838C",'name':"l_actionFunc$4188",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD83BC,'size':12,'pad':0,'label':"lit_4383",'name':"@4383",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD83C8,'size':12,'pad':0,'label':"lit_4384",'name':"@4384",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD83D4,'size':12,'pad':0,'label':"lit_4385",'name':"@4385",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD83E0,'size':12,'pad':0,'label':"lit_4386",'name':"@4386",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD83EC,'size':48,'pad':0,'label':"data_80CD83EC",'name':"l_func$4382",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CD841C,'size':32,'pad':0,'label':"l_daItemShield_Method",'name':"l_daItemShield_Method",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD843C,'size':48,'pad':0,'label':"g_profile_Obj_Shield",'name':"g_profile_Obj_Shield",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CD846C,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CD8478,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CD8484,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CD8490,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CD849C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CD84A8,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CD84CC,'size':68,'pad':0,'label':"__vt__14daItemShield_c",'name':"__vt__14daItemShield_c",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CD8510,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CD8520,'size':4,'pad':0,'label':"struct_80CD8520",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,2,0],'sh':[0,0,0],'type':"Structure"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"Reflect__FP4cXyzRC13cBgS_PolyInfof":3,
	"__dt__8cM3dGPlaFv":4,
	"initBaseMtx__14daItemShield_cFv":5,
	"setBaseMtx__14daItemShield_cFv":6,
	"Create__14daItemShield_cFv":7,
	"__CreateHeap__14daItemShield_cFv":8,
	"create__14daItemShield_cFv":9,
	"__dt__8cM3dGCylFv":10,
	"__dt__8cM3dGAabFv":11,
	"__dt__10dCcD_GSttsFv":12,
	"__dt__12dBgS_AcchCirFv":13,
	"__dt__12dBgS_ObjAcchFv":14,
	"bg_check__14daItemShield_cFv":15,
	"action_proc_call__14daItemShield_cFv":16,
	"actionInit__14daItemShield_cFv":17,
	"actionWaitInit__14daItemShield_cFv":18,
	"actionWait__14daItemShield_cFv":19,
	"initActionOrderGetDemo__14daItemShield_cFv":20,
	"actionOrderGetDemo__14daItemShield_cFv":21,
	"actionGetDemo__14daItemShield_cFv":22,
	"event_proc_call__14daItemShield_cFv":23,
	"actionWaitCamDemo__14daItemShield_cFv":24,
	"actionOrderCamDemo__14daItemShield_cFv":25,
	"actionCamDemo__14daItemShield_cFv":26,
	"actionCamDemoEnd__14daItemShield_cFv":27,
	"execute__14daItemShield_cFv":28,
	"draw__14daItemShield_cFv":29,
	"_delete__14daItemShield_cFv":30,
	"daItemShield_Draw__FP14daItemShield_c":31,
	"daItemShield_Execute__FP14daItemShield_c":32,
	"daItemShield_Delete__FP14daItemShield_c":33,
	"daItemShield_Create__FP10fopAc_ac_c":34,
	"__dt__10cCcD_GSttsFv":35,
	"func_80CD8240":36,
	"func_80CD825C":37,
	"func_80CD8264":38,
	"data_80CD826C":39,
	"data_80CD8270":40,
	"l_cyl_src":41,
	"lit_3856":42,
	"lit_3857":43,
	"lit_3858":44,
	"lit_3859":45,
	"lit_3953":46,
	"lit_3954":47,
	"lit_3955":48,
	"lit_3956":49,
	"lit_3957":50,
	"lit_3958":51,
	"lit_3960":52,
	"lit_4003":53,
	"lit_4004":54,
	"lit_4006":55,
	"lit_4180":56,
	"lit_4181":57,
	"lit_4182":58,
	"lit_4183":59,
	"lit_4184":60,
	"lit_4335":61,
	"lit_4336":62,
	"lit_4337":63,
	"stringBase0":64,
	"cNullVec__6Z2Calc":65,
	"lit_1787":66,
	"lit_4189":67,
	"lit_4190":68,
	"lit_4191":69,
	"lit_4192":70,
	"data_80CD838C":71,
	"lit_4383":72,
	"lit_4384":73,
	"lit_4385":74,
	"lit_4386":75,
	"data_80CD83EC":76,
	"l_daItemShield_Method":77,
	"g_profile_Obj_Shield":78,
	"__vt__12dBgS_AcchCir":79,
	"__vt__10cCcD_GStts":80,
	"__vt__10dCcD_GStts":81,
	"__vt__8cM3dGCyl":82,
	"__vt__8cM3dGAab":83,
	"__vt__12dBgS_ObjAcch":84,
	"__vt__14daItemShield_c":85,
	"__vt__8cM3dGPla":86,
	"struct_80CD8520":87,
}

