#
# Generate By: dol2asm
# Module: 134
#

# Libraries
LIBRARIES = [
	"d/a/d_a_ykgr",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_ykgr",
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
	{'addr':0x805A83A0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A83CC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A83F8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A8418,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A8434,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A848C,'size':72,'pad':0,'label':"draw__17dPa_YkgrPcallBackFP14JPABaseEmitterP15JPABaseParticle",'name':"draw__17dPa_YkgrPcallBackFP14JPABaseEmitterP15JPABaseParticle",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A84D4,'size':256,'pad':0,'label':"setParam__17dPa_YkgrPcallBackFf",'name':"setParam__17dPa_YkgrPcallBackFf",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A85D4,'size':600,'pad':0,'label':"getPosRate__8daYkgr_cFv",'name':"getPosRate__8daYkgr_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A882C,'size':540,'pad':0,'label':"daYkgrCreate__FPv",'name':"daYkgrCreate__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A8A48,'size':8,'pad':0,'label':"daYkgrDelete__FPv",'name':"daYkgrDelete__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x805A8A50,'size':364,'pad':0,'label':"daYkgrExecute__FPv",'name':"daYkgrExecute__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A8BBC,'size':468,'pad':0,'label':"daYkgrDraw__FPv",'name':"daYkgrDraw__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A8D90,'size':8,'pad':0,'label':"daYkgrIsDelete__FPv",'name':"daYkgrIsDelete__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x805A8D98,'size':92,'pad':0,'label':"__dt__12daYkgr_HIO_cFv",'name':"__dt__12daYkgr_HIO_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A8DF4,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A8E3C,'size':96,'pad':0,'label':"__dt__17dPa_YkgrPcallBackFv",'name':"__dt__17dPa_YkgrPcallBackFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805A8E9C,'size':4,'pad':0,'label':"execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle",'name':"execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x805A8EA0,'size':260,'pad':0,'label':"__sinit_d_a_ykgr_cpp",'name':"__sinit_d_a_ykgr_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x805A8FA4,'size':4,'pad':0,'label':"draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle",'name':"draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x805A8FA8,'size':8,'pad':0,'label':"data_805A8FA8",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805A8FB0,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805A8FB4,'size':8,'pad':0,'label':"pad_805A8FB4",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805A8FBC,'size':4,'pad':0,'label':"lit_3759",'name':"@3759",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':True,'r':[6,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A8FC0,'size':4,'pad':0,'label':"lit_3760",'name':"@3760",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A8FC4,'size':4,'pad':0,'label':"lit_3761",'name':"@3761",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A8FC8,'size':4,'pad':0,'label':"lit_3762",'name':"@3762",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A8FCC,'size':4,'pad':4,'label':"lit_3763",'name':"@3763",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A8FD4,'size':8,'pad':0,'label':"lit_3766",'name':"@3766",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A8FDC,'size':8,'pad':0,'label':"lit_3846",'name':"@3846",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A8FE4,'size':8,'pad':0,'label':"lit_3847",'name':"@3847",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A8FEC,'size':8,'pad':0,'label':"lit_3848",'name':"@3848",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A8FF4,'size':4,'pad':0,'label':"lit_3951",'name':"@3951",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A8FF8,'size':4,'pad':0,'label':"lit_3976",'name':"@3976",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A8FFC,'size':4,'pad':0,'label':"lit_3977",'name':"@3977",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A9000,'size':4,'pad':0,'label':"lit_4032",'name':"@4032",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A9004,'size':4,'pad':0,'label':"lit_4033",'name':"@4033",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A9008,'size':4,'pad':0,'label':"lit_4061",'name':"@4061",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A900C,'size':4,'pad':0,'label':"lit_4062",'name':"@4062",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A9010,'size':4,'pad':0,'label':"lit_4063",'name':"@4063",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A9014,'size':4,'pad':0,'label':"lit_4064",'name':"@4064",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x805A9018,'size':8,'pad':0,'label':"stringBase0",'name':"@stringBase0",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x805A9020,'size':32,'pad':0,'label':"daYkgrMethodTable",'name':"daYkgrMethodTable",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805A9040,'size':48,'pad':0,'label':"g_profile_Ykgr",'name':"g_profile_Ykgr",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x805A9070,'size':20,'pad':0,'label':"__vt__17dPa_YkgrPcallBack",'name':"__vt__17dPa_YkgrPcallBack",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A9084,'size':20,'pad':0,'label':"__vt__19JPAParticleCallBack",'name':"__vt__19JPAParticleCallBack",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A9098,'size':12,'pad':0,'label':"__vt__12daYkgr_HIO_c",'name':"__vt__12daYkgr_HIO_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A90A4,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805A90B0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90B8,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90BC,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90C0,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90C4,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90C8,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90CC,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90D0,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90D4,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90D8,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90DC,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90E0,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90E4,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90E8,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90EC,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90F0,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90F4,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A90F8,'size':12,'pad':0,'label':"lit_3744",'name':"@3744",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9104,'size':40,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A912C,'size':12,'pad':0,'label':"lit_3851",'name':"@3851",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9138,'size':32,'pad':0,'label':"YkgrCB",'name':"YkgrCB",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9158,'size':4,'pad':0,'label':"data_805A9158",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A915C,'size':4,'pad':0,'label':"data_805A915C",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9160,'size':4,'pad':0,'label':"data_805A9160",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9164,'size':4,'pad':0,'label':"data_805A9164",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9168,'size':4,'pad':0,'label':"data_805A9168",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A916C,'size':4,'pad':0,'label':"data_805A916C",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9170,'size':4,'pad':0,'label':"data_805A9170",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9174,'size':4,'pad':0,'label':"data_805A9174",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9178,'size':4,'pad':0,'label':"data_805A9178",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A917C,'size':4,'pad':0,'label':"data_805A917C",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9180,'size':4,'pad':0,'label':"data_805A9180",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9184,'size':4,'pad':0,'label':"data_805A9184",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9188,'size':4,'pad':0,'label':"data_805A9188",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A918C,'size':4,'pad':0,'label':"data_805A918C",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9190,'size':4,'pad':0,'label':"data_805A9190",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9194,'size':4,'pad':0,'label':"data_805A9194",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A9198,'size':4,'pad':0,'label':"data_805A9198",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A919C,'size':4,'pad':0,'label':"data_805A919C",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A91A0,'size':4,'pad':0,'label':"data_805A91A0",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A91A4,'size':4,'pad':0,'label':"data_805A91A4",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A91A8,'size':4,'pad':0,'label':"data_805A91A8",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A91AC,'size':4,'pad':0,'label':"data_805A91AC",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A91B0,'size':4,'pad':0,'label':"data_805A91B0",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A91B4,'size':4,'pad':0,'label':"data_805A91B4",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x805A91B8,'size':4,'pad':0,'label':"data_805A91B8",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"draw__17dPa_YkgrPcallBackFP14JPABaseEmitterP15JPABaseParticle":5,
	"setParam__17dPa_YkgrPcallBackFf":6,
	"getPosRate__8daYkgr_cFv":7,
	"daYkgrCreate__FPv":8,
	"daYkgrDelete__FPv":9,
	"daYkgrExecute__FPv":10,
	"daYkgrDraw__FPv":11,
	"daYkgrIsDelete__FPv":12,
	"__dt__12daYkgr_HIO_cFv":13,
	"__dt__14mDoHIO_entry_cFv":14,
	"__dt__17dPa_YkgrPcallBackFv":15,
	"execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle":16,
	"__sinit_d_a_ykgr_cpp":17,
	"draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle":18,
	"data_805A8FA8":19,
	"__destroy_global_chain_reference":20,
	"pad_805A8FB4":21,
	"lit_3759":22,
	"lit_3760":23,
	"lit_3761":24,
	"lit_3762":25,
	"lit_3763":26,
	"lit_3766":27,
	"lit_3846":28,
	"lit_3847":29,
	"lit_3848":30,
	"lit_3951":31,
	"lit_3976":32,
	"lit_3977":33,
	"lit_4032":34,
	"lit_4033":35,
	"lit_4061":36,
	"lit_4062":37,
	"lit_4063":38,
	"lit_4064":39,
	"stringBase0":40,
	"daYkgrMethodTable":41,
	"g_profile_Ykgr":42,
	"__vt__17dPa_YkgrPcallBack":43,
	"__vt__19JPAParticleCallBack":44,
	"__vt__12daYkgr_HIO_c":45,
	"__vt__14mDoHIO_entry_c":46,
	"__global_destructor_chain":47,
	"lit_1109":48,
	"lit_1107":49,
	"lit_1105":50,
	"lit_1104":51,
	"lit_1099":52,
	"lit_1097":53,
	"lit_1095":54,
	"lit_1094":55,
	"lit_1057":56,
	"lit_1055":57,
	"lit_1053":58,
	"lit_1052":59,
	"lit_1014":60,
	"lit_1012":61,
	"lit_1010":62,
	"lit_1009":63,
	"lit_3744":64,
	"l_HIO":65,
	"lit_3851":66,
	"YkgrCB":67,
	"data_805A9158":68,
	"data_805A915C":69,
	"data_805A9160":70,
	"data_805A9164":71,
	"data_805A9168":72,
	"data_805A916C":73,
	"data_805A9170":74,
	"data_805A9174":75,
	"data_805A9178":76,
	"data_805A917C":77,
	"data_805A9180":78,
	"data_805A9184":79,
	"data_805A9188":80,
	"data_805A918C":81,
	"data_805A9190":82,
	"data_805A9194":83,
	"data_805A9198":84,
	"data_805A919C":85,
	"data_805A91A0":86,
	"data_805A91A4":87,
	"data_805A91A8":88,
	"data_805A91AC":89,
	"data_805A91B0":90,
	"data_805A91B4":91,
	"data_805A91B8":92,
}

