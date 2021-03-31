#
# Generate By: dol2asm
# Module: 481
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_iceblock",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_obj_iceblock",
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
	{'addr':0x80C21C60,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21C8C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21CB8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21CD8,'size':212,'pad':0,'label':"PPCallBack__13daObjIceBlk_cFP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel",'name':"PPCallBack__13daObjIceBlk_cFP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21DAC,'size':24,'pad':0,'label':"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21DC4,'size':96,'pad':0,'label':"initBaseMtx__13daObjIceBlk_cFv",'name':"initBaseMtx__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21E24,'size':128,'pad':0,'label':"setBaseMtx__13daObjIceBlk_cFv",'name':"setBaseMtx__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21EA4,'size':136,'pad':0,'label':"getPointNo__13daObjIceBlk_cFv",'name':"getPointNo__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21F2C,'size':156,'pad':0,'label':"loadCurrentPos__13daObjIceBlk_cFv",'name':"loadCurrentPos__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C21FC8,'size':568,'pad':0,'label':"saveCurrentPos__13daObjIceBlk_cFv",'name':"saveCurrentPos__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C22200,'size':76,'pad':0,'label':"enablePushPull__13daObjIceBlk_cFv",'name':"enablePushPull__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2224C,'size':76,'pad':0,'label':"disablePushPull__13daObjIceBlk_cFv",'name':"disablePushPull__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C22298,'size':896,'pad':0,'label':"Create__13daObjIceBlk_cFv",'name':"Create__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C22618,'size':476,'pad':0,'label':"CreateHeap__13daObjIceBlk_cFv",'name':"CreateHeap__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C227F4,'size':192,'pad':0,'label':"create1st__13daObjIceBlk_cFv",'name':"create1st__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C228B4,'size':152,'pad':0,'label':"Execute__13daObjIceBlk_cFPPA3_A4_f",'name':"Execute__13daObjIceBlk_cFPPA3_A4_f",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2294C,'size':440,'pad':0,'label':"checkWalk__13daObjIceBlk_cFv",'name':"checkWalk__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C22B04,'size':36,'pad':0,'label':"clrCounter__13daObjIceBlk_cFv",'name':"clrCounter__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C22B28,'size':976,'pad':0,'label':"mode_proc_call__13daObjIceBlk_cFv",'name':"mode_proc_call__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C22EF8,'size':124,'pad':0,'label':"mode_init_wait__13daObjIceBlk_cFv",'name':"mode_init_wait__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C22F74,'size':228,'pad':0,'label':"mode_proc_wait__13daObjIceBlk_cFv",'name':"mode_proc_wait__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23058,'size':48,'pad':0,'label':"mode_init_walk__13daObjIceBlk_cFv",'name':"mode_init_walk__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23088,'size':768,'pad':0,'label':"mode_proc_walk__13daObjIceBlk_cFv",'name':"mode_proc_walk__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23388,'size':388,'pad':0,'label':"setEffect__13daObjIceBlk_cFv",'name':"setEffect__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2350C,'size':444,'pad':0,'label':"checkWallPre__13daObjIceBlk_cFs",'name':"checkWallPre__13daObjIceBlk_cFs",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C236C8,'size':232,'pad':0,'label':"checkBgHit__13daObjIceBlk_cFv",'name':"checkBgHit__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C237B0,'size':176,'pad':0,'label':"bgCheck__13daObjIceBlk_cFv",'name':"bgCheck__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23860,'size':80,'pad':0,'label':"init_bgCheck__13daObjIceBlk_cFv",'name':"init_bgCheck__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C238B0,'size':344,'pad':0,'label':"checkFall__13daObjIceBlk_cFv",'name':"checkFall__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23A08,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23A50,'size':188,'pad':0,'label':"event_proc_call__13daObjIceBlk_cFv",'name':"event_proc_call__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23B0C,'size':100,'pad':0,'label':"actionWait__13daObjIceBlk_cFv",'name':"actionWait__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23B70,'size':172,'pad':0,'label':"actionOrderEvent__13daObjIceBlk_cFv",'name':"actionOrderEvent__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23C1C,'size':132,'pad':0,'label':"actionEvent__13daObjIceBlk_cFv",'name':"actionEvent__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23CA0,'size':4,'pad':0,'label':"actionDead__13daObjIceBlk_cFv",'name':"actionDead__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C23CA4,'size':260,'pad':0,'label':"Draw__13daObjIceBlk_cFv",'name':"Draw__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23DA8,'size':192,'pad':0,'label':"Delete__13daObjIceBlk_cFv",'name':"Delete__13daObjIceBlk_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23E68,'size':356,'pad':0,'label':"daObjIceBlk_create1st__FP13daObjIceBlk_c",'name':"daObjIceBlk_create1st__FP13daObjIceBlk_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C23FCC,'size':120,'pad':0,'label':"__dt__14dBgS_ObjGndChkFv",'name':"__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C24044,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2408C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C240D4,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C24130,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C241A0,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C24210,'size':32,'pad':0,'label':"daObjIceBlk_MoveBGDelete__FP13daObjIceBlk_c",'name':"daObjIceBlk_MoveBGDelete__FP13daObjIceBlk_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C24230,'size':32,'pad':0,'label':"daObjIceBlk_MoveBGExecute__FP13daObjIceBlk_c",'name':"daObjIceBlk_MoveBGExecute__FP13daObjIceBlk_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C24250,'size':44,'pad':0,'label':"daObjIceBlk_MoveBGDraw__FP13daObjIceBlk_c",'name':"daObjIceBlk_MoveBGDraw__FP13daObjIceBlk_c",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C2427C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C242C4,'size':8,'pad':0,'label':"func_80C242C4",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C242CC,'size':8,'pad':0,'label':"func_80C242CC",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':4,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C242D4,'size':8,'pad':0,'label':"func_80C242D4",'name':"@20@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':4,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C242DC,'size':8,'pad':0,'label':"func_80C242DC",'name':"@76@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':4,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C242E4,'size':8,'pad':0,'label':"func_80C242E4",'name':"@60@__dt__14dBgS_ObjGndChkFv",'lib':-1,'tu':4,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C242EC,'size':4,'pad':0,'label':"data_80C242EC",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C242F0,'size':4,'pad':0,'label':"data_80C242F0",'name':None,'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C242F4,'size':48,'pad':0,'label':"l_dir_vec",'name':"l_dir_vec",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24324,'size':8,'pad':0,'label':"l_dir_angle",'name':"l_dir_angle",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2432C,'size':68,'pad':0,'label':"l_cyl_src",'name':"l_cyl_src",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24370,'size':4,'pad':0,'label':"lit_3936",'name':"@3936",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24374,'size':8,'pad':0,'label':"lit_3937",'name':"@3937",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2437C,'size':8,'pad':0,'label':"lit_3938",'name':"@3938",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24384,'size':8,'pad':0,'label':"lit_3939",'name':"@3939",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C2438C,'size':4,'pad':0,'label':"lit_3940",'name':"@3940",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C24390,'size':4,'pad':0,'label':"data_80C24390",'name':"l_eff_id$4008",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24394,'size':4,'pad':0,'label':"lit_4078",'name':"@4078",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C24398,'size':4,'pad':0,'label':"lit_4079",'name':"@4079",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2439C,'size':4,'pad':0,'label':"lit_4080",'name':"@4080",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C243A0,'size':8,'pad':0,'label':"l_bmd",'name':"l_bmd$4084",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C243A8,'size':4,'pad':0,'label':"lit_4361",'name':"@4361",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C243AC,'size':4,'pad':0,'label':"lit_4451",'name':"@4451",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C243B0,'size':4,'pad':0,'label':"lit_4452",'name':"@4452",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C243B4,'size':4,'pad':0,'label':"lit_4453",'name':"@4453",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C243B8,'size':4,'pad':0,'label':"lit_4454",'name':"@4454",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C243BC,'size':4,'pad':0,'label':"lit_4455",'name':"@4455",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C243C0,'size':4,'pad':0,'label':"lit_4456",'name':"@4456",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C243C4,'size':8,'pad':0,'label':"lit_4459",'name':"@4459",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C243CC,'size':4,'pad':0,'label':"data_80C243CC",'name':"l_eff_break_b$4463",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C243D0,'size':4,'pad':0,'label':"data_80C243D0",'name':"l_eff_break_id$4464",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C243D4,'size':60,'pad':0,'label':"data_80C243D4",'name':"l_check_offsetXY$4509",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24410,'size':4,'pad':0,'label':"lit_4571",'name':"@4571",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C24414,'size':4,'pad':0,'label':"lit_4572",'name':"@4572",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C24418,'size':60,'pad':0,'label':"data_80C24418",'name':"l_check_offsetXZ$4577",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24454,'size':4,'pad':0,'label':"lit_4603",'name':"@4603",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C24458,'size':4,'pad':0,'label':"lit_4604",'name':"@4604",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2445C,'size':60,'pad':0,'label':"l_check_offsetXZ_4641",'name':"l_check_offsetXZ$4641",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24498,'size':4,'pad':0,'label':"lit_4696",'name':"@4696",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C2449C,'size':52,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':4,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C244D0,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C244DC,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C244F0,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C244F4,'size':12,'pad':0,'label':"lit_4231",'name':"@4231",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C24500,'size':12,'pad':0,'label':"lit_4232",'name':"@4232",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2450C,'size':24,'pad':0,'label':"data_80C2450C",'name':"l_func$4230",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24524,'size':12,'pad':0,'label':"lit_4705",'name':"@4705",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C24530,'size':12,'pad':0,'label':"lit_4706",'name':"@4706",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C2453C,'size':12,'pad':0,'label':"lit_4707",'name':"@4707",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C24548,'size':12,'pad':0,'label':"lit_4708",'name':"@4708",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C24554,'size':48,'pad':0,'label':"data_80C24554",'name':"l_func$4704",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C24584,'size':32,'pad':0,'label':"daObjIceBlk_METHODS",'name':"daObjIceBlk_METHODS",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C245A4,'size':48,'pad':0,'label':"g_profile_Obj_IceBlock",'name':"g_profile_Obj_IceBlock",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C245D4,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C245E0,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C245EC,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C245F8,'size':48,'pad':0,'label':"__vt__14dBgS_ObjGndChk",'name':"__vt__14dBgS_ObjGndChk",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C24628,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C24634,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C24640,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C24664,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C24670,'size':40,'pad':0,'label':"__vt__13daObjIceBlk_c",'name':"__vt__13daObjIceBlk_c",'lib':-1,'tu':4,'section':5,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C24698,'size':4,'pad':0,'label':"struct_80C24698",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'is_reachable':False,'r':[0,2,0],'sh':[0,0,0],'type':"Structure"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"PPCallBack__13daObjIceBlk_cFP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel":3,
	"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c":4,
	"initBaseMtx__13daObjIceBlk_cFv":5,
	"setBaseMtx__13daObjIceBlk_cFv":6,
	"getPointNo__13daObjIceBlk_cFv":7,
	"loadCurrentPos__13daObjIceBlk_cFv":8,
	"saveCurrentPos__13daObjIceBlk_cFv":9,
	"enablePushPull__13daObjIceBlk_cFv":10,
	"disablePushPull__13daObjIceBlk_cFv":11,
	"Create__13daObjIceBlk_cFv":12,
	"CreateHeap__13daObjIceBlk_cFv":13,
	"create1st__13daObjIceBlk_cFv":14,
	"Execute__13daObjIceBlk_cFPPA3_A4_f":15,
	"checkWalk__13daObjIceBlk_cFv":16,
	"clrCounter__13daObjIceBlk_cFv":17,
	"mode_proc_call__13daObjIceBlk_cFv":18,
	"mode_init_wait__13daObjIceBlk_cFv":19,
	"mode_proc_wait__13daObjIceBlk_cFv":20,
	"mode_init_walk__13daObjIceBlk_cFv":21,
	"mode_proc_walk__13daObjIceBlk_cFv":22,
	"setEffect__13daObjIceBlk_cFv":23,
	"checkWallPre__13daObjIceBlk_cFs":24,
	"checkBgHit__13daObjIceBlk_cFv":25,
	"bgCheck__13daObjIceBlk_cFv":26,
	"init_bgCheck__13daObjIceBlk_cFv":27,
	"checkFall__13daObjIceBlk_cFv":28,
	"__dt__8cM3dGPlaFv":29,
	"event_proc_call__13daObjIceBlk_cFv":30,
	"actionWait__13daObjIceBlk_cFv":31,
	"actionOrderEvent__13daObjIceBlk_cFv":32,
	"actionEvent__13daObjIceBlk_cFv":33,
	"actionDead__13daObjIceBlk_cFv":34,
	"Draw__13daObjIceBlk_cFv":35,
	"Delete__13daObjIceBlk_cFv":36,
	"daObjIceBlk_create1st__FP13daObjIceBlk_c":37,
	"__dt__14dBgS_ObjGndChkFv":38,
	"__dt__8cM3dGCylFv":39,
	"__dt__8cM3dGAabFv":40,
	"__dt__10dCcD_GSttsFv":41,
	"__dt__12dBgS_AcchCirFv":42,
	"__dt__12dBgS_ObjAcchFv":43,
	"daObjIceBlk_MoveBGDelete__FP13daObjIceBlk_c":44,
	"daObjIceBlk_MoveBGExecute__FP13daObjIceBlk_c":45,
	"daObjIceBlk_MoveBGDraw__FP13daObjIceBlk_c":46,
	"__dt__10cCcD_GSttsFv":47,
	"func_80C242C4":48,
	"func_80C242CC":49,
	"func_80C242D4":50,
	"func_80C242DC":51,
	"func_80C242E4":52,
	"data_80C242EC":53,
	"data_80C242F0":54,
	"l_dir_vec":55,
	"l_dir_angle":56,
	"l_cyl_src":57,
	"lit_3936":58,
	"lit_3937":59,
	"lit_3938":60,
	"lit_3939":61,
	"lit_3940":62,
	"data_80C24390":63,
	"lit_4078":64,
	"lit_4079":65,
	"lit_4080":66,
	"l_bmd":67,
	"lit_4361":68,
	"lit_4451":69,
	"lit_4452":70,
	"lit_4453":71,
	"lit_4454":72,
	"lit_4455":73,
	"lit_4456":74,
	"lit_4459":75,
	"data_80C243CC":76,
	"data_80C243D0":77,
	"data_80C243D4":78,
	"lit_4571":79,
	"lit_4572":80,
	"data_80C24418":81,
	"lit_4603":82,
	"lit_4604":83,
	"l_check_offsetXZ_4641":84,
	"lit_4696":85,
	"stringBase0":86,
	"cNullVec__6Z2Calc":87,
	"lit_1787":88,
	"l_arcName":89,
	"lit_4231":90,
	"lit_4232":91,
	"data_80C2450C":92,
	"lit_4705":93,
	"lit_4706":94,
	"lit_4707":95,
	"lit_4708":96,
	"data_80C24554":97,
	"daObjIceBlk_METHODS":98,
	"g_profile_Obj_IceBlock":99,
	"__vt__12dBgS_AcchCir":100,
	"__vt__10cCcD_GStts":101,
	"__vt__10dCcD_GStts":102,
	"__vt__14dBgS_ObjGndChk":103,
	"__vt__8cM3dGCyl":104,
	"__vt__8cM3dGAab":105,
	"__vt__12dBgS_ObjAcch":106,
	"__vt__8cM3dGPla":107,
	"__vt__13daObjIceBlk_c":108,
	"struct_80C24698":109,
}

