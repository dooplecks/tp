#
# Generate By: dol2asm
# Module: 179
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_bug",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_e_bug",
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
	{'addr':0x80694AA0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694ACC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694AF8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694B18,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694B34,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694B8C,'size':48,'pad':0,'label':"__ct__13daE_Bug_HIO_cFv",'name':"__ct__13daE_Bug_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694BBC,'size':268,'pad':0,'label':"daE_Bug_Draw__FP11e_bug_class",'name':"daE_Bug_Draw__FP11e_bug_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694CC8,'size':656,'pad':0,'label':"simple_bg_check__FP5bug_si",'name':"simple_bg_check__FP5bug_si",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694F58,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80694F94,'size':216,'pad':0,'label':"bug_mtxset__FP5bug_s",'name':"bug_mtxset__FP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8069506C,'size':348,'pad':0,'label':"bug_mtxset_stick__FP5bug_s",'name':"bug_mtxset_stick__FP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806951C8,'size':540,'pad':0,'label':"bug_mtxset_stickW__FP5bug_s",'name':"bug_mtxset_stickW__FP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806953E4,'size':240,'pad':0,'label':"bug_mtxset_fail__FP5bug_s",'name':"bug_mtxset_fail__FP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806954D4,'size':776,'pad':0,'label':"bug_ground_ang_set__FP5bug_s",'name':"bug_ground_ang_set__FP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806957DC,'size':268,'pad':0,'label':"bug_action__FP11e_bug_classP5bug_s",'name':"bug_action__FP11e_bug_classP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806958E8,'size':764,'pad':0,'label':"bug_stick__FP5bug_s",'name':"bug_stick__FP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80695BE4,'size':516,'pad':0,'label':"bug_stickW__FP5bug_s",'name':"bug_stickW__FP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80695DE8,'size':228,'pad':0,'label':"wind_move__FP5bug_s",'name':"wind_move__FP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80695ECC,'size':256,'pad':0,'label':"bug_fail__FP11e_bug_classP5bug_s",'name':"bug_fail__FP11e_bug_classP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80695FCC,'size':1512,'pad':0,'label':"damage_check__FP11e_bug_classP5bug_s",'name':"damage_check__FP11e_bug_classP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806965B4,'size':628,'pad':0,'label':"set_wait__FP11e_bug_classP5bug_s",'name':"set_wait__FP11e_bug_classP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80696828,'size':1628,'pad':0,'label':"normal_move__FP11e_bug_classP5bug_s",'name':"normal_move__FP11e_bug_classP5bug_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80696E84,'size':732,'pad':0,'label':"bug_control__FP11e_bug_class",'name':"bug_control__FP11e_bug_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80697160,'size':140,'pad':0,'label':"s_boom_sub__FPvPv",'name':"s_boom_sub__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806971EC,'size':168,'pad':0,'label':"s_bomb_sub__FPvPv",'name':"s_bomb_sub__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80697294,'size':780,'pad':0,'label':"daE_Bug_Execute__FP11e_bug_class",'name':"daE_Bug_Execute__FP11e_bug_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806975A0,'size':8,'pad':0,'label':"daE_Bug_IsDelete__FP11e_bug_class",'name':"daE_Bug_IsDelete__FP11e_bug_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x806975A8,'size':268,'pad':0,'label':"daE_Bug_Delete__FP11e_bug_class",'name':"daE_Bug_Delete__FP11e_bug_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806976B4,'size':244,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806977A8,'size':932,'pad':0,'label':"daE_Bug_Create__FP10fopAc_ac_c",'name':"daE_Bug_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80697B4C,'size':108,'pad':0,'label':"__dt__5bug_sFv",'name':"__dt__5bug_sFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80697BB8,'size':52,'pad':0,'label':"__ct__5bug_sFv",'name':"__ct__5bug_sFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80697BEC,'size':72,'pad':0,'label':"__dt__13daE_Bug_HIO_cFv",'name':"__dt__13daE_Bug_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80697C34,'size':88,'pad':0,'label':"__sinit_d_a_e_bug_cpp",'name':"__sinit_d_a_e_bug_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80697C8C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80697C94,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80697CA0,'size':4,'pad':0,'label':"lit_3829",'name':"@3829",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[13,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CA4,'size':4,'pad':0,'label':"lit_3830",'name':"@3830",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CA8,'size':4,'pad':4,'label':"lit_3945",'name':"@3945",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697CB0,'size':8,'pad':0,'label':"lit_3946",'name':"@3946",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697CB8,'size':8,'pad':0,'label':"lit_3947",'name':"@3947",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697CC0,'size':8,'pad':0,'label':"lit_3948",'name':"@3948",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697CC8,'size':4,'pad':0,'label':"lit_3949",'name':"@3949",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CCC,'size':4,'pad':0,'label':"lit_3950",'name':"@3950",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CD0,'size':4,'pad':0,'label':"lit_4019",'name':"@4019",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CD4,'size':4,'pad':0,'label':"lit_4108",'name':"@4108",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CD8,'size':4,'pad':0,'label':"lit_4205",'name':"@4205",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CDC,'size':4,'pad':0,'label':"lit_4206",'name':"@4206",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CE0,'size':4,'pad':0,'label':"lit_4207",'name':"@4207",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CE4,'size':4,'pad':0,'label':"lit_4230",'name':"@4230",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CE8,'size':4,'pad':0,'label':"lit_4231",'name':"@4231",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CEC,'size':4,'pad':0,'label':"lit_4232",'name':"@4232",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CF0,'size':4,'pad':0,'label':"lit_4233",'name':"@4233",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CF4,'size':4,'pad':0,'label':"lit_4309",'name':"@4309",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CF8,'size':4,'pad':0,'label':"lit_4310",'name':"@4310",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697CFC,'size':4,'pad':0,'label':"lit_4311",'name':"@4311",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D00,'size':4,'pad':0,'label':"lit_4312",'name':"@4312",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D04,'size':4,'pad':0,'label':"lit_4313",'name':"@4313",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D08,'size':4,'pad':0,'label':"lit_4314",'name':"@4314",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D0C,'size':4,'pad':0,'label':"lit_4315",'name':"@4315",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D10,'size':4,'pad':0,'label':"lit_4316",'name':"@4316",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D14,'size':4,'pad':0,'label':"lit_4358",'name':"@4358",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D18,'size':4,'pad':0,'label':"lit_4359",'name':"@4359",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D1C,'size':4,'pad':0,'label':"lit_4360",'name':"@4360",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D20,'size':4,'pad':0,'label':"lit_4376",'name':"@4376",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D24,'size':4,'pad':0,'label':"lit_4377",'name':"@4377",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D28,'size':4,'pad':0,'label':"lit_4395",'name':"@4395",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D2C,'size':4,'pad':0,'label':"lit_4396",'name':"@4396",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D30,'size':4,'pad':0,'label':"lit_4562",'name':"@4562",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D34,'size':4,'pad':0,'label':"lit_4563",'name':"@4563",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D38,'size':4,'pad':0,'label':"lit_4564",'name':"@4564",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D3C,'size':4,'pad':0,'label':"lit_4565",'name':"@4565",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D40,'size':4,'pad':0,'label':"lit_4566",'name':"@4566",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D44,'size':4,'pad':0,'label':"lit_4567",'name':"@4567",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D48,'size':4,'pad':4,'label':"lit_4568",'name':"@4568",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D50,'size':8,'pad':0,'label':"lit_4630",'name':"@4630",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697D58,'size':4,'pad':0,'label':"lit_4761",'name':"@4761",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D5C,'size':4,'pad':0,'label':"lit_4762",'name':"@4762",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D60,'size':4,'pad':0,'label':"lit_4763",'name':"@4763",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D64,'size':4,'pad':0,'label':"lit_4764",'name':"@4764",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D68,'size':4,'pad':0,'label':"lit_4765",'name':"@4765",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D6C,'size':4,'pad':0,'label':"lit_4766",'name':"@4766",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D70,'size':4,'pad':0,'label':"lit_4767",'name':"@4767",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D74,'size':4,'pad':0,'label':"lit_4842",'name':"@4842",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D78,'size':4,'pad':0,'label':"lit_4947",'name':"@4947",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D7C,'size':4,'pad':0,'label':"lit_4948",'name':"@4948",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80697D80,'size':8,'pad':0,'label':"l_bmdidx_4962",'name':"l_bmdidx$4962",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697D88,'size':8,'pad':0,'label':"l_bmdidx_5049",'name':"l_bmdidx$5049",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697D90,'size':8,'pad':0,'label':"lit_5142",'name':"@5142",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697D98,'size':14,'pad':0,'label':"d_a_e_bug__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80697DA8,'size':16,'pad':0,'label':"c_x",'name':"c_x$3877",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697DB8,'size':16,'pad':0,'label':"c_z",'name':"c_z$3878",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697DC8,'size':32,'pad':0,'label':"l_daE_Bug_Method",'name':"l_daE_Bug_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80697DE8,'size':48,'pad':0,'label':"g_profile_E_BUG",'name':"g_profile_E_BUG",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80697E18,'size':12,'pad':0,'label':"__vt__13daE_Bug_HIO_c",'name':"__vt__13daE_Bug_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80697E28,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E30,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E34,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E38,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E3C,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E40,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E44,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E48,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E4C,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E50,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E54,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E58,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E5C,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E60,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E64,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E68,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E6C,'size':4,'pad':0,'label':"struct_80697E6C",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80697E70,'size':12,'pad':0,'label':"lit_3824",'name':"@3824",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E7C,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E8C,'size':4,'pad':0,'label':"struct_80697E8C",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80697E90,'size':12,'pad':0,'label':"lit_3831",'name':"@3831",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697E9C,'size':12,'pad':0,'label':"at_pos",'name':"at_pos",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EA8,'size':4,'pad':0,'label':"at_size",'name':"at_size",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EAC,'size':4,'pad':0,'label':"data_80697EAC",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EB0,'size':4,'pad':0,'label':"data_80697EB0",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EB4,'size':4,'pad':0,'label':"data_80697EB4",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EB8,'size':4,'pad':0,'label':"data_80697EB8",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EBC,'size':4,'pad':0,'label':"data_80697EBC",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EC0,'size':4,'pad':0,'label':"data_80697EC0",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EC4,'size':4,'pad':0,'label':"data_80697EC4",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EC8,'size':4,'pad':0,'label':"data_80697EC8",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697ECC,'size':4,'pad':0,'label':"data_80697ECC",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697ED0,'size':4,'pad':0,'label':"data_80697ED0",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697ED4,'size':4,'pad':0,'label':"data_80697ED4",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697ED8,'size':4,'pad':0,'label':"data_80697ED8",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EDC,'size':4,'pad':0,'label':"data_80697EDC",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EE0,'size':4,'pad':0,'label':"data_80697EE0",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EE4,'size':4,'pad':0,'label':"data_80697EE4",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EE8,'size':4,'pad':0,'label':"data_80697EE8",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EEC,'size':4,'pad':0,'label':"data_80697EEC",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EF0,'size':4,'pad':0,'label':"data_80697EF0",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EF4,'size':4,'pad':0,'label':"data_80697EF4",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EF8,'size':4,'pad':0,'label':"data_80697EF8",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697EFC,'size':4,'pad':0,'label':"data_80697EFC",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697F00,'size':4,'pad':0,'label':"data_80697F00",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697F04,'size':4,'pad':0,'label':"data_80697F04",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697F08,'size':4,'pad':0,'label':"data_80697F08",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697F0C,'size':4,'pad':0,'label':"data_80697F0C",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80697F10,'size':4,'pad':0,'label':"data_80697F10",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__13daE_Bug_HIO_cFv":5,
	"daE_Bug_Draw__FP11e_bug_class":6,
	"simple_bg_check__FP5bug_si":7,
	"__dt__4cXyzFv":8,
	"bug_mtxset__FP5bug_s":9,
	"bug_mtxset_stick__FP5bug_s":10,
	"bug_mtxset_stickW__FP5bug_s":11,
	"bug_mtxset_fail__FP5bug_s":12,
	"bug_ground_ang_set__FP5bug_s":13,
	"bug_action__FP11e_bug_classP5bug_s":14,
	"bug_stick__FP5bug_s":15,
	"bug_stickW__FP5bug_s":16,
	"wind_move__FP5bug_s":17,
	"bug_fail__FP11e_bug_classP5bug_s":18,
	"damage_check__FP11e_bug_classP5bug_s":19,
	"set_wait__FP11e_bug_classP5bug_s":20,
	"normal_move__FP11e_bug_classP5bug_s":21,
	"bug_control__FP11e_bug_class":22,
	"s_boom_sub__FPvPv":23,
	"s_bomb_sub__FPvPv":24,
	"daE_Bug_Execute__FP11e_bug_class":25,
	"daE_Bug_IsDelete__FP11e_bug_class":26,
	"daE_Bug_Delete__FP11e_bug_class":27,
	"useHeapInit__FP10fopAc_ac_c":28,
	"daE_Bug_Create__FP10fopAc_ac_c":29,
	"__dt__5bug_sFv":30,
	"__ct__5bug_sFv":31,
	"__dt__13daE_Bug_HIO_cFv":32,
	"__sinit_d_a_e_bug_cpp":33,
	"_ctors":34,
	"_dtors":35,
	"lit_3829":36,
	"lit_3830":37,
	"lit_3945":38,
	"lit_3946":39,
	"lit_3947":40,
	"lit_3948":41,
	"lit_3949":42,
	"lit_3950":43,
	"lit_4019":44,
	"lit_4108":45,
	"lit_4205":46,
	"lit_4206":47,
	"lit_4207":48,
	"lit_4230":49,
	"lit_4231":50,
	"lit_4232":51,
	"lit_4233":52,
	"lit_4309":53,
	"lit_4310":54,
	"lit_4311":55,
	"lit_4312":56,
	"lit_4313":57,
	"lit_4314":58,
	"lit_4315":59,
	"lit_4316":60,
	"lit_4358":61,
	"lit_4359":62,
	"lit_4360":63,
	"lit_4376":64,
	"lit_4377":65,
	"lit_4395":66,
	"lit_4396":67,
	"lit_4562":68,
	"lit_4563":69,
	"lit_4564":70,
	"lit_4565":71,
	"lit_4566":72,
	"lit_4567":73,
	"lit_4568":74,
	"lit_4630":75,
	"lit_4761":76,
	"lit_4762":77,
	"lit_4763":78,
	"lit_4764":79,
	"lit_4765":80,
	"lit_4766":81,
	"lit_4767":82,
	"lit_4842":83,
	"lit_4947":84,
	"lit_4948":85,
	"l_bmdidx_4962":86,
	"l_bmdidx_5049":87,
	"lit_5142":88,
	"d_a_e_bug__stringBase0":89,
	"c_x":90,
	"c_z":91,
	"l_daE_Bug_Method":92,
	"g_profile_E_BUG":93,
	"__vt__13daE_Bug_HIO_c":94,
	"__global_destructor_chain":95,
	"lit_1109":96,
	"lit_1107":97,
	"lit_1105":98,
	"lit_1104":99,
	"lit_1099":100,
	"lit_1097":101,
	"lit_1095":102,
	"lit_1094":103,
	"lit_1057":104,
	"lit_1055":105,
	"lit_1053":106,
	"lit_1052":107,
	"lit_1014":108,
	"lit_1012":109,
	"lit_1010":110,
	"struct_80697E6C":111,
	"lit_3824":112,
	"l_HIO":113,
	"struct_80697E8C":114,
	"lit_3831":115,
	"at_pos":116,
	"at_size":117,
	"data_80697EAC":118,
	"data_80697EB0":119,
	"data_80697EB4":120,
	"data_80697EB8":121,
	"data_80697EBC":122,
	"data_80697EC0":123,
	"data_80697EC4":124,
	"data_80697EC8":125,
	"data_80697ECC":126,
	"data_80697ED0":127,
	"data_80697ED4":128,
	"data_80697ED8":129,
	"data_80697EDC":130,
	"data_80697EE0":131,
	"data_80697EE4":132,
	"data_80697EE8":133,
	"data_80697EEC":134,
	"data_80697EF0":135,
	"data_80697EF4":136,
	"data_80697EF8":137,
	"data_80697EFC":138,
	"data_80697F00":139,
	"data_80697F04":140,
	"data_80697F08":141,
	"data_80697F0C":142,
	"data_80697F10":143,
}

