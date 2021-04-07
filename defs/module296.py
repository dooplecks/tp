#
# Generate By: dol2asm
# Module: 296
#

# Libraries
LIBRARIES = [
	"d/a/npc/d_a_npc_coach",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_npc_coach",
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
	{'addr':0x8099D660,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099D68C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099D6B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099D6D8,'size':84,'pad':0,'label':"jointHorseCallBack__FP8J3DJointi",'name':"jointHorseCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099D72C,'size':224,'pad':0,'label':"jointFrontWheelCallBack__FP8J3DJointi",'name':"jointFrontWheelCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099D80C,'size':224,'pad':0,'label':"jointRearWheelCallBack__FP8J3DJointi",'name':"jointRearWheelCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099D8EC,'size':192,'pad':0,'label':"jointCoachCallBack__FP8J3DJointi",'name':"jointCoachCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099D9AC,'size':120,'pad':0,'label':"arrowStickCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_cR4cXyz",'name':"arrowStickCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_cR4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099DA24,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099DA60,'size':324,'pad':0,'label':"hitFireArrow__12daNpcCoach_cF4cXyz",'name':"hitFireArrow__12daNpcCoach_cF4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099DBA4,'size':324,'pad':0,'label':"deleteFireArrow__12daNpcCoach_cFUi",'name':"deleteFireArrow__12daNpcCoach_cFUi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099DCE8,'size':64,'pad':0,'label':"deleteFireArrowFromList__12daNpcCoach_cFUi",'name':"deleteFireArrowFromList__12daNpcCoach_cFUi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099DD28,'size':84,'pad':0,'label':"setPosAngle__12daNpcCoach_cFR4cXyzR5csXyz",'name':"setPosAngle__12daNpcCoach_cFR4cXyzR5csXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,3],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099DD7C,'size':156,'pad':0,'label':"ctrlJointHorse__12daNpcCoach_cFP8J3DJointP8J3DModel",'name':"ctrlJointHorse__12daNpcCoach_cFP8J3DJointP8J3DModel",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099DE18,'size':712,'pad':0,'label':"initCoachPosition__12daNpcCoach_cFR3VecR4SVec",'name':"initCoachPosition__12daNpcCoach_cFR3VecR4SVec",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099E0E0,'size':88,'pad':0,'label':"s_sub__FPvPv",'name':"s_sub__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099E138,'size':872,'pad':0,'label':"changeAtherPath__12daNpcCoach_cFScR4cXyzR5csXyz",'name':"changeAtherPath__12daNpcCoach_cFScR4cXyzR5csXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099E4A0,'size':32,'pad':0,'label':"createSolidHeap__FP10fopAc_ac_c",'name':"createSolidHeap__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099E4C0,'size':1560,'pad':0,'label':"createHeap__12daNpcCoach_cFv",'name':"createHeap__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099EAD8,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099EB20,'size':32,'pad':0,'label':"daNpcCoach_Execute__FP12daNpcCoach_c",'name':"daNpcCoach_Execute__FP12daNpcCoach_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099EB40,'size':864,'pad':0,'label':"execute__12daNpcCoach_cFv",'name':"execute__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099EEA0,'size':792,'pad':0,'label':"checkCoachDamage__12daNpcCoach_cFv",'name':"checkCoachDamage__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099F1B8,'size':772,'pad':0,'label':"setCoachBlazing__12daNpcCoach_cFUc",'name':"setCoachBlazing__12daNpcCoach_cFUc",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099F4BC,'size':1228,'pad':0,'label':"reinsExecute__12daNpcCoach_cFv",'name':"reinsExecute__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099F988,'size':876,'pad':0,'label':"reinsInit__12daNpcCoach_cFv",'name':"reinsInit__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8099FCF4,'size':2612,'pad':0,'label':"calcCoachMotion__12daNpcCoach_cFv",'name':"calcCoachMotion__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A0728,'size':1680,'pad':0,'label':"calcRearWheelRotate__12daNpcCoach_cFv",'name':"calcRearWheelRotate__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A0DB8,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A0E00,'size':896,'pad':0,'label':"calcHarnessMotion__12daNpcCoach_cFv",'name':"calcHarnessMotion__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A1180,'size':1680,'pad':0,'label':"calcFrontWheelRotate__12daNpcCoach_cFv",'name':"calcFrontWheelRotate__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A1810,'size':976,'pad':0,'label':"calcHorseMotion__12daNpcCoach_cFv",'name':"calcHorseMotion__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A1BE0,'size':2912,'pad':0,'label':"calcHorseAnm__12daNpcCoach_cFv",'name':"calcHorseAnm__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A2740,'size':1880,'pad':0,'label':"calcHorsePath__12daNpcCoach_cFv",'name':"calcHorsePath__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A2E98,'size':32,'pad':0,'label':"daNpcCoach_Draw__FP12daNpcCoach_c",'name':"daNpcCoach_Draw__FP12daNpcCoach_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A2EB8,'size':1096,'pad':0,'label':"draw__12daNpcCoach_cFv",'name':"draw__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A3300,'size':8,'pad':0,'label':"daNpcCoach_IsDelete__FP12daNpcCoach_c",'name':"daNpcCoach_IsDelete__FP12daNpcCoach_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x809A3308,'size':40,'pad':0,'label':"daNpcCoach_Delete__FP12daNpcCoach_c",'name':"daNpcCoach_Delete__FP12daNpcCoach_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A3330,'size':576,'pad':0,'label':"__dt__12daNpcCoach_cFv",'name':"__dt__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A3570,'size':260,'pad':0,'label':"__dt__16daNpcChHarness_cFv",'name':"__dt__16daNpcChHarness_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A3674,'size':292,'pad':0,'label':"__dt__14daNpcChCoach_cFv",'name':"__dt__14daNpcChCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A3798,'size':204,'pad':0,'label':"__dt__8dCcD_CylFv",'name':"__dt__8dCcD_CylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A3864,'size':32,'pad':0,'label':"daNpcCoach_Create__FP10fopAc_ac_c",'name':"daNpcCoach_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A3884,'size':164,'pad':0,'label':"create__12daNpcCoach_cFv",'name':"create__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A3928,'size':1872,'pad':0,'label':"create_init__12daNpcCoach_cFv",'name':"create_init__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4078,'size':808,'pad':0,'label':"initCollision__12daNpcCoach_cFv",'name':"initCollision__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A43A0,'size':60,'pad':0,'label':"initBaseMtx__12daNpcCoach_cFv",'name':"initBaseMtx__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A43DC,'size':744,'pad':0,'label':"setBaseMtx__12daNpcCoach_cFv",'name':"setBaseMtx__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A46C4,'size':484,'pad':0,'label':"initCoachBlazing__12daNpcCoach_cFv",'name':"initCoachBlazing__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A48A8,'size':756,'pad':0,'label':"__ct__12daNpcCoach_cFv",'name':"__ct__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4B9C,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4BF8,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4C68,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4CB0,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4CF8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4D40,'size':56,'pad':0,'label':"__ct__11J3DLightObjFv",'name':"__ct__11J3DLightObjFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4D78,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x809A4D7C,'size':132,'pad':0,'label':"__ct__8dCcD_CylFv",'name':"__ct__8dCcD_CylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4E00,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4E70,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4EB8,'size':8,'pad':0,'label':"func_809A4EB8",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4EC0,'size':8,'pad':0,'label':"func_809A4EC0",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x809A4EC8,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x809A4ECC,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x809A4ED0,'size':160,'pad':0,'label':"M_attr__12daNpcCoach_c",'name':"M_attr__12daNpcCoach_c",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[19,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A4F70,'size':4,'pad':0,'label':"lit_4121",'name':"@4121",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A4F74,'size':4,'pad':0,'label':"lit_4358",'name':"@4358",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A4F78,'size':68,'pad':0,'label':"data_809A4F78",'name':"ccCylSrc$localstatic3$initCollision__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A4FBC,'size':64,'pad':0,'label':"data_809A4FBC",'name':"ccSphSrc$localstatic4$initCollision__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A4FFC,'size':4,'pad':0,'label':"lit_4845",'name':"@4845",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5000,'size':8,'pad':0,'label':"lit_4846",'name':"@4846",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A5008,'size':8,'pad':0,'label':"lit_4847",'name':"@4847",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A5010,'size':8,'pad':0,'label':"lit_4848",'name':"@4848",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A5018,'size':20,'pad':0,'label':"data_809A5018",'name':"ParticleName$localstatic3$setCoachBlazing__12daNpcCoach_cFUc",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A502C,'size':4,'pad':0,'label':"lit_5111",'name':"@5111",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5030,'size':4,'pad':0,'label':"lit_5133",'name':"@5133",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x809A5034,'size':4,'pad':0,'label':"lit_5250",'name':"@5250",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5038,'size':4,'pad':0,'label':"lit_5251",'name':"@5251",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A503C,'size':4,'pad':0,'label':"lit_5252",'name':"@5252",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5040,'size':4,'pad':0,'label':"lit_5253",'name':"@5253",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5044,'size':4,'pad':0,'label':"lit_5254",'name':"@5254",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x809A5048,'size':8,'pad':0,'label':"lit_5256",'name':"@5256",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A5050,'size':4,'pad':0,'label':"lit_5307",'name':"@5307",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5054,'size':4,'pad':0,'label':"lit_5397",'name':"@5397",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5058,'size':4,'pad':0,'label':"lit_5398",'name':"@5398",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A505C,'size':4,'pad':0,'label':"lit_5399",'name':"@5399",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5060,'size':4,'pad':0,'label':"lit_5400",'name':"@5400",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5064,'size':4,'pad':0,'label':"lit_5600",'name':"@5600",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5068,'size':4,'pad':0,'label':"lit_5601",'name':"@5601",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A506C,'size':4,'pad':0,'label':"lit_5602",'name':"@5602",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5070,'size':4,'pad':0,'label':"lit_5603",'name':"@5603",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5074,'size':4,'pad':0,'label':"lit_5710",'name':"@5710",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5078,'size':4,'pad':0,'label':"lit_5711",'name':"@5711",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A507C,'size':4,'pad':0,'label':"lit_5928",'name':"@5928",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5080,'size':4,'pad':0,'label':"lit_5929",'name':"@5929",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5084,'size':4,'pad':0,'label':"lit_5930",'name':"@5930",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5088,'size':4,'pad':0,'label':"lit_5931",'name':"@5931",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A508C,'size':4,'pad':0,'label':"lit_5932",'name':"@5932",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5090,'size':4,'pad':0,'label':"lit_5933",'name':"@5933",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5094,'size':4,'pad':0,'label':"lit_5934",'name':"@5934",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5098,'size':4,'pad':0,'label':"lit_6072",'name':"@6072",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A509C,'size':4,'pad':0,'label':"lit_6073",'name':"@6073",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x809A50A0,'size':4,'pad':0,'label':"lit_6074",'name':"@6074",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x809A50A4,'size':4,'pad':0,'label':"lit_6075",'name':"@6075",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50A8,'size':4,'pad':0,'label':"lit_6173",'name':"@6173",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50AC,'size':4,'pad':0,'label':"lit_6308",'name':"@6308",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x809A50B0,'size':4,'pad':0,'label':"lit_6309",'name':"@6309",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x809A50B4,'size':4,'pad':0,'label':"lit_6420",'name':"@6420",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50B8,'size':4,'pad':0,'label':"lit_6421",'name':"@6421",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50BC,'size':4,'pad':0,'label':"lit_6422",'name':"@6422",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50C0,'size':4,'pad':0,'label':"lit_6423",'name':"@6423",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50C4,'size':4,'pad':0,'label':"lit_6424",'name':"@6424",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50C8,'size':4,'pad':0,'label':"lit_6425",'name':"@6425",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50CC,'size':4,'pad':0,'label':"lit_6426",'name':"@6426",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50D0,'size':4,'pad':0,'label':"lit_6773",'name':"@6773",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50D4,'size':4,'pad':0,'label':"lit_6774",'name':"@6774",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50D8,'size':4,'pad':0,'label':"lit_6958",'name':"@6958",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50DC,'size':4,'pad':0,'label':"lit_6959",'name':"@6959",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50E0,'size':4,'pad':0,'label':"lit_6960",'name':"@6960",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50E4,'size':4,'pad':0,'label':"lit_6961",'name':"@6961",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50E8,'size':4,'pad':0,'label':"lit_7066",'name':"@7066",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50EC,'size':4,'pad':0,'label':"lit_7067",'name':"@7067",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50F0,'size':4,'pad':0,'label':"lit_7068",'name':"@7068",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50F4,'size':4,'pad':0,'label':"lit_7069",'name':"@7069",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50F8,'size':4,'pad':0,'label':"lit_7443",'name':"@7443",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A50FC,'size':4,'pad':0,'label':"lit_7444",'name':"@7444",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5100,'size':4,'pad':0,'label':"lit_7445",'name':"@7445",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5104,'size':4,'pad':0,'label':"lit_7446",'name':"@7446",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5108,'size':4,'pad':0,'label':"lit_7447",'name':"@7447",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A510C,'size':4,'pad':0,'label':"lit_7496",'name':"@7496",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5110,'size':4,'pad':0,'label':"lit_7497",'name':"@7497",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5114,'size':4,'pad':0,'label':"lit_7498",'name':"@7498",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5118,'size':4,'pad':0,'label':"lit_7499",'name':"@7499",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A511C,'size':4,'pad':0,'label':"lit_7500",'name':"@7500",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x809A5120,'size':14,'pad':0,'label':"d_a_npc_coach__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x809A5130,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[7,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x809A5134,'size':120,'pad':0,'label':"l_horseAnmParam",'name':"l_horseAnmParam",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A51AC,'size':4,'pad':0,'label':"data_809A51AC",'name':"l_color$localstatic3$reinsDraw__12daNpcCoach_cFv",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x809A51B0,'size':32,'pad':0,'label':"l_daNpcCoach_Method",'name':"l_daNpcCoach_Method",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x809A51D0,'size':48,'pad':0,'label':"g_profile_NPC_COACH",'name':"g_profile_NPC_COACH",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x809A5200,'size':20,'pad':0,'label':"__vt__18mDoExt_3DlineMat_c",'name':"__vt__18mDoExt_3DlineMat_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A5214,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A5220,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A522C,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A5238,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A525C,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A5268,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A5274,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A5280,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x809A528C,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"jointHorseCallBack__FP8J3DJointi":3,
	"jointFrontWheelCallBack__FP8J3DJointi":4,
	"jointRearWheelCallBack__FP8J3DJointi":5,
	"jointCoachCallBack__FP8J3DJointi":6,
	"arrowStickCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_cR4cXyz":7,
	"__dt__4cXyzFv":8,
	"hitFireArrow__12daNpcCoach_cF4cXyz":9,
	"deleteFireArrow__12daNpcCoach_cFUi":10,
	"deleteFireArrowFromList__12daNpcCoach_cFUi":11,
	"setPosAngle__12daNpcCoach_cFR4cXyzR5csXyz":12,
	"ctrlJointHorse__12daNpcCoach_cFP8J3DJointP8J3DModel":13,
	"initCoachPosition__12daNpcCoach_cFR3VecR4SVec":14,
	"s_sub__FPvPv":15,
	"changeAtherPath__12daNpcCoach_cFScR4cXyzR5csXyz":16,
	"createSolidHeap__FP10fopAc_ac_c":17,
	"createHeap__12daNpcCoach_cFv":18,
	"__dt__12J3DFrameCtrlFv":19,
	"daNpcCoach_Execute__FP12daNpcCoach_c":20,
	"execute__12daNpcCoach_cFv":21,
	"checkCoachDamage__12daNpcCoach_cFv":22,
	"setCoachBlazing__12daNpcCoach_cFUc":23,
	"reinsExecute__12daNpcCoach_cFv":24,
	"reinsInit__12daNpcCoach_cFv":25,
	"calcCoachMotion__12daNpcCoach_cFv":26,
	"calcRearWheelRotate__12daNpcCoach_cFv":27,
	"__dt__8cM3dGPlaFv":28,
	"calcHarnessMotion__12daNpcCoach_cFv":29,
	"calcFrontWheelRotate__12daNpcCoach_cFv":30,
	"calcHorseMotion__12daNpcCoach_cFv":31,
	"calcHorseAnm__12daNpcCoach_cFv":32,
	"calcHorsePath__12daNpcCoach_cFv":33,
	"daNpcCoach_Draw__FP12daNpcCoach_c":34,
	"draw__12daNpcCoach_cFv":35,
	"daNpcCoach_IsDelete__FP12daNpcCoach_c":36,
	"daNpcCoach_Delete__FP12daNpcCoach_c":37,
	"__dt__12daNpcCoach_cFv":38,
	"__dt__16daNpcChHarness_cFv":39,
	"__dt__14daNpcChCoach_cFv":40,
	"__dt__8dCcD_CylFv":41,
	"daNpcCoach_Create__FP10fopAc_ac_c":42,
	"create__12daNpcCoach_cFv":43,
	"create_init__12daNpcCoach_cFv":44,
	"initCollision__12daNpcCoach_cFv":45,
	"initBaseMtx__12daNpcCoach_cFv":46,
	"setBaseMtx__12daNpcCoach_cFv":47,
	"initCoachBlazing__12daNpcCoach_cFv":48,
	"__ct__12daNpcCoach_cFv":49,
	"__dt__10dCcD_GSttsFv":50,
	"__dt__12dBgS_AcchCirFv":51,
	"__dt__8cM3dGSphFv":52,
	"__dt__8cM3dGCylFv":53,
	"__dt__8cM3dGAabFv":54,
	"__ct__11J3DLightObjFv":55,
	"__ct__4cXyzFv":56,
	"__ct__8dCcD_CylFv":57,
	"__dt__12dBgS_ObjAcchFv":58,
	"__dt__10cCcD_GSttsFv":59,
	"func_809A4EB8":60,
	"func_809A4EC0":61,
	"_ctors":62,
	"_dtors":63,
	"M_attr__12daNpcCoach_c":64,
	"lit_4121":65,
	"lit_4358":66,
	"data_809A4F78":67,
	"data_809A4FBC":68,
	"lit_4845":69,
	"lit_4846":70,
	"lit_4847":71,
	"lit_4848":72,
	"data_809A5018":73,
	"lit_5111":74,
	"lit_5133":75,
	"lit_5250":76,
	"lit_5251":77,
	"lit_5252":78,
	"lit_5253":79,
	"lit_5254":80,
	"lit_5256":81,
	"lit_5307":82,
	"lit_5397":83,
	"lit_5398":84,
	"lit_5399":85,
	"lit_5400":86,
	"lit_5600":87,
	"lit_5601":88,
	"lit_5602":89,
	"lit_5603":90,
	"lit_5710":91,
	"lit_5711":92,
	"lit_5928":93,
	"lit_5929":94,
	"lit_5930":95,
	"lit_5931":96,
	"lit_5932":97,
	"lit_5933":98,
	"lit_5934":99,
	"lit_6072":100,
	"lit_6073":101,
	"lit_6074":102,
	"lit_6075":103,
	"lit_6173":104,
	"lit_6308":105,
	"lit_6309":106,
	"lit_6420":107,
	"lit_6421":108,
	"lit_6422":109,
	"lit_6423":110,
	"lit_6424":111,
	"lit_6425":112,
	"lit_6426":113,
	"lit_6773":114,
	"lit_6774":115,
	"lit_6958":116,
	"lit_6959":117,
	"lit_6960":118,
	"lit_6961":119,
	"lit_7066":120,
	"lit_7067":121,
	"lit_7068":122,
	"lit_7069":123,
	"lit_7443":124,
	"lit_7444":125,
	"lit_7445":126,
	"lit_7446":127,
	"lit_7447":128,
	"lit_7496":129,
	"lit_7497":130,
	"lit_7498":131,
	"lit_7499":132,
	"lit_7500":133,
	"d_a_npc_coach__stringBase0":134,
	"l_arcName":135,
	"l_horseAnmParam":136,
	"data_809A51AC":137,
	"l_daNpcCoach_Method":138,
	"g_profile_NPC_COACH":139,
	"__vt__18mDoExt_3DlineMat_c":140,
	"__vt__8cM3dGSph":141,
	"__vt__8cM3dGAab":142,
	"__vt__8cM3dGCyl":143,
	"__vt__12dBgS_ObjAcch":144,
	"__vt__12dBgS_AcchCir":145,
	"__vt__10cCcD_GStts":146,
	"__vt__10dCcD_GStts":147,
	"__vt__8cM3dGPla":148,
	"__vt__12J3DFrameCtrl":149,
}

