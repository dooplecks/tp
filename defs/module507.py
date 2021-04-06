#
# Generate By: dol2asm
# Module: 507
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_kuwagata",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_kuwagata",
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
	{'addr':0x80C4A100,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A12C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A158,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A178,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A194,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A1EC,'size':48,'pad':0,'label':"__ct__14daObj_KuwHIO_cFv",'name':"__ct__14daObj_KuwHIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A21C,'size':108,'pad':0,'label':"InitCcSph__10daObjKUW_cFv",'name':"InitCcSph__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A288,'size':88,'pad':0,'label':"SetCcSph__10daObjKUW_cFv",'name':"SetCcSph__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A2E0,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A300,'size':856,'pad':0,'label':"CreateHeap__10daObjKUW_cFv",'name':"CreateHeap__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A658,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A6A0,'size':32,'pad':0,'label':"daObjKUW_Create__FP10fopAc_ac_c",'name':"daObjKUW_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A6C0,'size':36,'pad':0,'label':"daObjKUW_Delete__FP10daObjKUW_c",'name':"daObjKUW_Delete__FP10daObjKUW_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A6E4,'size':360,'pad':0,'label':"ShopWaitAction__10daObjKUW_cFv",'name':"ShopWaitAction__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A84C,'size':388,'pad':0,'label':"WaitAction__10daObjKUW_cFv",'name':"WaitAction__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4A9D0,'size':556,'pad':0,'label':"WallCheck__10daObjKUW_cFv",'name':"WallCheck__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4ABFC,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4AC44,'size':268,'pad':0,'label':"SpeedSet__10daObjKUW_cFv",'name':"SpeedSet__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4AD50,'size':1104,'pad':0,'label':"WallWalk__10daObjKUW_cFv",'name':"WallWalk__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4B1A0,'size':512,'pad':0,'label':"WalkAction__10daObjKUW_cFv",'name':"WalkAction__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4B3A0,'size':2024,'pad':0,'label':"MoveAction__10daObjKUW_cFv",'name':"MoveAction__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4BB88,'size':196,'pad':0,'label':"Action__10daObjKUW_cFv",'name':"Action__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4BC4C,'size':188,'pad':0,'label':"ShopAction__10daObjKUW_cFv",'name':"ShopAction__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4BD08,'size':24,'pad':0,'label':"Insect_Release__10daObjKUW_cFv",'name':"Insect_Release__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4BD20,'size':380,'pad':0,'label':"Z_BufferChk__10daObjKUW_cFv",'name':"Z_BufferChk__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4BE9C,'size':292,'pad':0,'label':"ParticleSet__10daObjKUW_cFv",'name':"ParticleSet__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4BFC0,'size':972,'pad':0,'label':"BoomChk__10daObjKUW_cFv",'name':"BoomChk__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4C38C,'size':392,'pad':0,'label':"ObjHit__10daObjKUW_cFv",'name':"ObjHit__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4C514,'size':632,'pad':0,'label':"Execute__10daObjKUW_cFv",'name':"Execute__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4C78C,'size':104,'pad':0,'label':"Delete__10daObjKUW_cFv",'name':"Delete__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4C7F4,'size':104,'pad':0,'label':"setBaseMtx__10daObjKUW_cFv",'name':"setBaseMtx__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4C85C,'size':224,'pad':0,'label':"daObjKUW_Draw__FP10daObjKUW_c",'name':"daObjKUW_Draw__FP10daObjKUW_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4C93C,'size':32,'pad':0,'label':"daObjKUW_Execute__FP10daObjKUW_c",'name':"daObjKUW_Execute__FP10daObjKUW_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4C95C,'size':428,'pad':0,'label':"CreateChk__10daObjKUW_cFv",'name':"CreateChk__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4CB08,'size':2008,'pad':0,'label':"create__10daObjKUW_cFv",'name':"create__10daObjKUW_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4D2E0,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4D350,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4D398,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4D3E0,'size':8,'pad':0,'label':"daObjKUW_IsDelete__FP10daObjKUW_c",'name':"daObjKUW_IsDelete__FP10daObjKUW_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C4D3E8,'size':72,'pad':0,'label':"__dt__14daObj_KuwHIO_cFv",'name':"__dt__14daObj_KuwHIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4D430,'size':60,'pad':0,'label':"__sinit_d_a_obj_kuwagata_cpp",'name':"__sinit_d_a_obj_kuwagata_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C4D46C,'size':8,'pad':0,'label':"func_80C4D46C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4D474,'size':8,'pad':0,'label':"func_80C4D474",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C4D47C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C4D484,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C4D490,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[13,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D494,'size':4,'pad':0,'label':"lit_3776",'name':"@3776",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D498,'size':64,'pad':0,'label':"ccSphSrc",'name':"ccSphSrc$3780",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D4D8,'size':4,'pad':0,'label':"lit_3789",'name':"@3789",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D4DC,'size':4,'pad':0,'label':"lit_3895",'name':"@3895",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D4E0,'size':4,'pad':0,'label':"lit_3932",'name':"@3932",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D4E4,'size':4,'pad':0,'label':"lit_3933",'name':"@3933",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D4E8,'size':4,'pad':0,'label':"lit_3934",'name':"@3934",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D4EC,'size':4,'pad':0,'label':"lit_3935",'name':"@3935",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D4F0,'size':4,'pad':0,'label':"lit_3936",'name':"@3936",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D4F4,'size':4,'pad':0,'label':"lit_3960",'name':"@3960",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D4F8,'size':8,'pad':0,'label':"lit_4013",'name':"@4013",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D500,'size':8,'pad':0,'label':"lit_4014",'name':"@4014",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D508,'size':8,'pad':0,'label':"lit_4015",'name':"@4015",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D510,'size':4,'pad':0,'label':"lit_4039",'name':"@4039",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D514,'size':4,'pad':0,'label':"lit_4040",'name':"@4040",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D518,'size':4,'pad':0,'label':"lit_4041",'name':"@4041",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D51C,'size':4,'pad':0,'label':"lit_4042",'name':"@4042",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D520,'size':4,'pad':0,'label':"lit_4143",'name':"@4143",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D524,'size':4,'pad':0,'label':"lit_4144",'name':"@4144",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D528,'size':4,'pad':0,'label':"lit_4145",'name':"@4145",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D52C,'size':4,'pad':0,'label':"lit_4146",'name':"@4146",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D530,'size':4,'pad':0,'label':"lit_4324",'name':"@4324",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D534,'size':4,'pad':0,'label':"lit_4325",'name':"@4325",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D538,'size':4,'pad':0,'label':"lit_4326",'name':"@4326",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D53C,'size':4,'pad':0,'label':"lit_4327",'name':"@4327",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D540,'size':4,'pad':0,'label':"lit_4328",'name':"@4328",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D544,'size':4,'pad':0,'label':"lit_4329",'name':"@4329",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D548,'size':2,'pad':2,'label':"l_kuw_itemno",'name':"l_kuw_itemno",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D54C,'size':4,'pad':0,'label':"lit_4438",'name':"@4438",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D550,'size':4,'pad':0,'label':"lit_4485",'name':"@4485",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D554,'size':4,'pad':0,'label':"lit_4486",'name':"@4486",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D558,'size':4,'pad':4,'label':"lit_4487",'name':"@4487",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D560,'size':8,'pad':0,'label':"lit_4517",'name':"@4517",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D568,'size':4,'pad':0,'label':"lit_4694",'name':"@4694",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D56C,'size':4,'pad':0,'label':"lit_4758",'name':"@4758",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D570,'size':4,'pad':0,'label':"lit_4759",'name':"@4759",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D574,'size':4,'pad':0,'label':"l_musiya_num",'name':"l_musiya_num",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D578,'size':4,'pad':0,'label':"lit_5033",'name':"@5033",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D57C,'size':4,'pad':0,'label':"lit_5034",'name':"@5034",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D580,'size':4,'pad':0,'label':"lit_5035",'name':"@5035",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D584,'size':4,'pad':0,'label':"lit_5036",'name':"@5036",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D588,'size':4,'pad':0,'label':"lit_5037",'name':"@5037",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C4D58C,'size':14,'pad':0,'label':"d_a_obj_kuwagata__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[10,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C4D59C,'size':32,'pad':0,'label':"l_daObjKUW_Method",'name':"l_daObjKUW_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C4D5BC,'size':48,'pad':0,'label':"g_profile_Obj_Kuw",'name':"g_profile_Obj_Kuw",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C4D5EC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C4D610,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C4D61C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C4D628,'size':12,'pad':0,'label':"__vt__10daObjKUW_c",'name':"__vt__10daObjKUW_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C4D634,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C4D640,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C4D64C,'size':12,'pad':0,'label':"__vt__14daObj_KuwHIO_c",'name':"__vt__14daObj_KuwHIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C4D658,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D660,'size':4,'pad':0,'label':"data_80C4D660",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D664,'size':12,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C4D670,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daObj_KuwHIO_cFv":5,
	"InitCcSph__10daObjKUW_cFv":6,
	"SetCcSph__10daObjKUW_cFv":7,
	"useHeapInit__FP10fopAc_ac_c":8,
	"CreateHeap__10daObjKUW_cFv":9,
	"__dt__12J3DFrameCtrlFv":10,
	"daObjKUW_Create__FP10fopAc_ac_c":11,
	"daObjKUW_Delete__FP10daObjKUW_c":12,
	"ShopWaitAction__10daObjKUW_cFv":13,
	"WaitAction__10daObjKUW_cFv":14,
	"WallCheck__10daObjKUW_cFv":15,
	"__dt__8cM3dGPlaFv":16,
	"SpeedSet__10daObjKUW_cFv":17,
	"WallWalk__10daObjKUW_cFv":18,
	"WalkAction__10daObjKUW_cFv":19,
	"MoveAction__10daObjKUW_cFv":20,
	"Action__10daObjKUW_cFv":21,
	"ShopAction__10daObjKUW_cFv":22,
	"Insect_Release__10daObjKUW_cFv":23,
	"Z_BufferChk__10daObjKUW_cFv":24,
	"ParticleSet__10daObjKUW_cFv":25,
	"BoomChk__10daObjKUW_cFv":26,
	"ObjHit__10daObjKUW_cFv":27,
	"Execute__10daObjKUW_cFv":28,
	"Delete__10daObjKUW_cFv":29,
	"setBaseMtx__10daObjKUW_cFv":30,
	"daObjKUW_Draw__FP10daObjKUW_c":31,
	"daObjKUW_Execute__FP10daObjKUW_c":32,
	"CreateChk__10daObjKUW_cFv":33,
	"create__10daObjKUW_cFv":34,
	"__dt__12dBgS_ObjAcchFv":35,
	"__dt__8cM3dGSphFv":36,
	"__dt__8cM3dGAabFv":37,
	"daObjKUW_IsDelete__FP10daObjKUW_c":38,
	"__dt__14daObj_KuwHIO_cFv":39,
	"__sinit_d_a_obj_kuwagata_cpp":40,
	"func_80C4D46C":41,
	"func_80C4D474":42,
	"_ctors":43,
	"_dtors":44,
	"lit_3775":45,
	"lit_3776":46,
	"ccSphSrc":47,
	"lit_3789":48,
	"lit_3895":49,
	"lit_3932":50,
	"lit_3933":51,
	"lit_3934":52,
	"lit_3935":53,
	"lit_3936":54,
	"lit_3960":55,
	"lit_4013":56,
	"lit_4014":57,
	"lit_4015":58,
	"lit_4039":59,
	"lit_4040":60,
	"lit_4041":61,
	"lit_4042":62,
	"lit_4143":63,
	"lit_4144":64,
	"lit_4145":65,
	"lit_4146":66,
	"lit_4324":67,
	"lit_4325":68,
	"lit_4326":69,
	"lit_4327":70,
	"lit_4328":71,
	"lit_4329":72,
	"l_kuw_itemno":73,
	"lit_4438":74,
	"lit_4485":75,
	"lit_4486":76,
	"lit_4487":77,
	"lit_4517":78,
	"lit_4694":79,
	"lit_4758":80,
	"lit_4759":81,
	"l_musiya_num":82,
	"lit_5033":83,
	"lit_5034":84,
	"lit_5035":85,
	"lit_5036":86,
	"lit_5037":87,
	"d_a_obj_kuwagata__stringBase0":88,
	"l_daObjKUW_Method":89,
	"g_profile_Obj_Kuw":90,
	"__vt__12dBgS_ObjAcch":91,
	"__vt__8cM3dGSph":92,
	"__vt__8cM3dGAab":93,
	"__vt__10daObjKUW_c":94,
	"__vt__8cM3dGPla":95,
	"__vt__12J3DFrameCtrl":96,
	"__vt__14daObj_KuwHIO_c":97,
	"__global_destructor_chain":98,
	"data_80C4D660":99,
	"lit_3770":100,
	"l_HIO":101,
}

