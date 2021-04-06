#
# Generate By: dol2asm
# Module: 260
#

# Libraries
LIBRARIES = [
	"d/a/d_a_formation_mng",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_formation_mng",
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
	{'addr':0x808354E0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8083550C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80835538,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80835558,'size':204,'pad':0,'label':"initWait__10daFmtMng_cFv",'name':"initWait__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80835624,'size':1280,'pad':0,'label':"initMemberPos__10daFmtMng_cFv",'name':"initMemberPos__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80835B24,'size':516,'pad':0,'label':"executeWait__10daFmtMng_cFv",'name':"executeWait__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80835D28,'size':196,'pad':0,'label':"initWalk__10daFmtMng_cFv",'name':"initWalk__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80835DEC,'size':1088,'pad':0,'label':"executeWalk__10daFmtMng_cFv",'name':"executeWalk__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8083622C,'size':900,'pad':0,'label':"setMovePath__10daFmtMng_cFP8FmtPos_ci",'name':"setMovePath__10daFmtMng_cFP8FmtPos_ci",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x808365B0,'size':172,'pad':0,'label':"checkPathEnd__15daFmtMng_Path_cF4cXyzf",'name':"checkPathEnd__15daFmtMng_Path_cF4cXyzf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8083665C,'size':436,'pad':0,'label':"checkPoint__15daFmtMng_Path_cF4cXyzf",'name':"checkPoint__15daFmtMng_Path_cF4cXyzf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80836810,'size':148,'pad':0,'label':"initReverse__10daFmtMng_cFv",'name':"initReverse__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x808368A4,'size':896,'pad':0,'label':"executeReverse__10daFmtMng_cFv",'name':"executeReverse__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80836C24,'size':60,'pad':0,'label':"__dt__8FmtPos_cFv",'name':"__dt__8FmtPos_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80836C60,'size':4,'pad':0,'label':"__ct__8FmtPos_cFv",'name':"__ct__8FmtPos_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80836C64,'size':444,'pad':0,'label':"initMotion__10daFmtMng_cFv",'name':"initMotion__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80836E20,'size':344,'pad':0,'label':"executeMotion__10daFmtMng_cFv",'name':"executeMotion__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80836F78,'size':256,'pad':0,'label':"initFight__10daFmtMng_cFv",'name':"initFight__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80837078,'size':472,'pad':0,'label':"executeFight__10daFmtMng_cFv",'name':"executeFight__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80837250,'size':8,'pad':0,'label':"daFmtMng_Draw__FP10daFmtMng_c",'name':"daFmtMng_Draw__FP10daFmtMng_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80837258,'size':356,'pad':0,'label':"daFmtMng_Execute__FP10daFmtMng_c",'name':"daFmtMng_Execute__FP10daFmtMng_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x808373BC,'size':8,'pad':0,'label':"daFmtMng_IsDelete__FP10daFmtMng_c",'name':"daFmtMng_IsDelete__FP10daFmtMng_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x808373C4,'size':148,'pad':0,'label':"daFmtMng_Delete__FP10daFmtMng_c",'name':"daFmtMng_Delete__FP10daFmtMng_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80837458,'size':60,'pad':0,'label':"__dt__11FmtMember_cFv",'name':"__dt__11FmtMember_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80837494,'size':32,'pad':0,'label':"daFmtMng_Create__FP10fopAc_ac_c",'name':"daFmtMng_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x808374B4,'size':88,'pad':0,'label':"create__10daFmtMng_cFv",'name':"create__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8083750C,'size':652,'pad':0,'label':"create_init__10daFmtMng_cFv",'name':"create_init__10daFmtMng_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80837798,'size':4,'pad':0,'label':"__ct__11FmtMember_cFv",'name':"__ct__11FmtMember_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x8083779C,'size':256,'pad':0,'label':"__sinit_d_a_formation_mng_cpp",'name':"__sinit_d_a_formation_mng_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x8083789C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x808378A4,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x808378A8,'size':24,'pad':0,'label':"M_attr__10daFmtMng_c",'name':"M_attr__10daFmtMng_c",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[12,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x808378C0,'size':4,'pad':0,'label':"lit_3979",'name':"@3979",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x808378C4,'size':4,'pad':0,'label':"lit_3980",'name':"@3980",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x808378C8,'size':4,'pad':0,'label':"lit_3981",'name':"@3981",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x808378CC,'size':4,'pad':0,'label':"lit_4082",'name':"@4082",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x808378D0,'size':8,'pad':0,'label':"lit_4083",'name':"@4083",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x808378D8,'size':8,'pad':0,'label':"lit_4084",'name':"@4084",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x808378E0,'size':8,'pad':0,'label':"lit_4085",'name':"@4085",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x808378E8,'size':4,'pad':0,'label':"lit_4086",'name':"@4086",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x808378EC,'size':4,'pad':0,'label':"lit_4087",'name':"@4087",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x808378F0,'size':8,'pad':0,'label':"lit_4089",'name':"@4089",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x808378F8,'size':4,'pad':0,'label':"lit_4357",'name':"@4357",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x808378FC,'size':4,'pad':0,'label':"lit_4408",'name':"@4408",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80837900,'size':4,'pad':0,'label':"lit_4595",'name':"@4595",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80837904,'size':4,'pad':0,'label':"lit_4596",'name':"@4596",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80837908,'size':4,'pad':0,'label':"lit_4597",'name':"@4597",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8083790C,'size':4,'pad':0,'label':"lit_4598",'name':"@4598",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80837910,'size':4,'pad':4,'label':"lit_4599",'name':"@4599",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80837918,'size':8,'pad':0,'label':"lit_4714",'name':"@4714",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80837920,'size':8,'pad':0,'label':"lit_4715",'name':"@4715",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80837928,'size':4,'pad':0,'label':"lit_4802",'name':"@4802",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8083792C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80837938,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8083794C,'size':12,'pad':0,'label':"lit_3861",'name':"@3861",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80837958,'size':12,'pad':0,'label':"lit_3862",'name':"@3862",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80837964,'size':12,'pad':0,'label':"lit_3863",'name':"@3863",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80837970,'size':12,'pad':0,'label':"lit_3864",'name':"@3864",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8083797C,'size':12,'pad':0,'label':"lit_3865",'name':"@3865",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80837988,'size':12,'pad':0,'label':"lit_3866",'name':"@3866",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80837994,'size':12,'pad':0,'label':"lit_3867",'name':"@3867",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x808379A0,'size':12,'pad':0,'label':"lit_3868",'name':"@3868",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x808379AC,'size':12,'pad':0,'label':"lit_3869",'name':"@3869",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x808379B8,'size':12,'pad':0,'label':"lit_3870",'name':"@3870",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x808379C4,'size':120,'pad':0,'label':"ActionTable__10daFmtMng_c",'name':"ActionTable__10daFmtMng_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80837A3C,'size':32,'pad':0,'label':"l_daFmtMng_Method",'name':"l_daFmtMng_Method",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80837A5C,'size':48,'pad':0,'label':"g_profile_FORMATION_MNG",'name':"g_profile_FORMATION_MNG",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"initWait__10daFmtMng_cFv":3,
	"initMemberPos__10daFmtMng_cFv":4,
	"executeWait__10daFmtMng_cFv":5,
	"initWalk__10daFmtMng_cFv":6,
	"executeWalk__10daFmtMng_cFv":7,
	"setMovePath__10daFmtMng_cFP8FmtPos_ci":8,
	"checkPathEnd__15daFmtMng_Path_cF4cXyzf":9,
	"checkPoint__15daFmtMng_Path_cF4cXyzf":10,
	"initReverse__10daFmtMng_cFv":11,
	"executeReverse__10daFmtMng_cFv":12,
	"__dt__8FmtPos_cFv":13,
	"__ct__8FmtPos_cFv":14,
	"initMotion__10daFmtMng_cFv":15,
	"executeMotion__10daFmtMng_cFv":16,
	"initFight__10daFmtMng_cFv":17,
	"executeFight__10daFmtMng_cFv":18,
	"daFmtMng_Draw__FP10daFmtMng_c":19,
	"daFmtMng_Execute__FP10daFmtMng_c":20,
	"daFmtMng_IsDelete__FP10daFmtMng_c":21,
	"daFmtMng_Delete__FP10daFmtMng_c":22,
	"__dt__11FmtMember_cFv":23,
	"daFmtMng_Create__FP10fopAc_ac_c":24,
	"create__10daFmtMng_cFv":25,
	"create_init__10daFmtMng_cFv":26,
	"__ct__11FmtMember_cFv":27,
	"__sinit_d_a_formation_mng_cpp":28,
	"_ctors":29,
	"_dtors":30,
	"M_attr__10daFmtMng_c":31,
	"lit_3979":32,
	"lit_3980":33,
	"lit_3981":34,
	"lit_4082":35,
	"lit_4083":36,
	"lit_4084":37,
	"lit_4085":38,
	"lit_4086":39,
	"lit_4087":40,
	"lit_4089":41,
	"lit_4357":42,
	"lit_4408":43,
	"lit_4595":44,
	"lit_4596":45,
	"lit_4597":46,
	"lit_4598":47,
	"lit_4599":48,
	"lit_4714":49,
	"lit_4715":50,
	"lit_4802":51,
	"cNullVec__6Z2Calc":52,
	"lit_1787":53,
	"lit_3861":54,
	"lit_3862":55,
	"lit_3863":56,
	"lit_3864":57,
	"lit_3865":58,
	"lit_3866":59,
	"lit_3867":60,
	"lit_3868":61,
	"lit_3869":62,
	"lit_3870":63,
	"ActionTable__10daFmtMng_c":64,
	"l_daFmtMng_Method":65,
	"g_profile_FORMATION_MNG":66,
}

