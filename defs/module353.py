#
# Generate By: dol2asm
# Module: 353
#

# Libraries
LIBRARIES = [
	"d/a/npc/d_a_npc_seib",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_npc_seib",
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
	{'addr':0x80AC5000,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC502C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5058,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5078,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5094,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC50EC,'size':156,'pad':0,'label':"__dt__12daNpc_seiB_cFv",'name':"__dt__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5188,'size':576,'pad':0,'label':"create__12daNpc_seiB_cFv",'name':"create__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC53C8,'size':344,'pad':0,'label':"CreateHeap__12daNpc_seiB_cFv",'name':"CreateHeap__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5520,'size':52,'pad':0,'label':"Delete__12daNpc_seiB_cFv",'name':"Delete__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5554,'size':32,'pad':0,'label':"Execute__12daNpc_seiB_cFv",'name':"Execute__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5574,'size':148,'pad':0,'label':"Draw__12daNpc_seiB_cFv",'name':"Draw__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5608,'size':32,'pad':0,'label':"createHeapCallBack__12daNpc_seiB_cFP10fopAc_ac_c",'name':"createHeapCallBack__12daNpc_seiB_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5628,'size':32,'pad':0,'label':"getType__12daNpc_seiB_cFv",'name':"getType__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5648,'size':28,'pad':0,'label':"getFlowNodeNo__12daNpc_seiB_cFv",'name':"getFlowNodeNo__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5664,'size':8,'pad':0,'label':"isDelete__12daNpc_seiB_cFv",'name':"isDelete__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC566C,'size':344,'pad':0,'label':"reset__12daNpc_seiB_cFv",'name':"reset__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC57C4,'size':280,'pad':0,'label':"setParam__12daNpc_seiB_cFv",'name':"setParam__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC58DC,'size':20,'pad':0,'label':"getDistTable__12dAttention_cFi",'name':"getDistTable__12dAttention_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC58F0,'size':4,'pad':0,'label':"srchActors__12daNpc_seiB_cFv",'name':"srchActors__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC58F4,'size':256,'pad':0,'label':"evtTalk__12daNpc_seiB_cFv",'name':"evtTalk__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC59F4,'size':200,'pad':0,'label':"evtCutProc__12daNpc_seiB_cFv",'name':"evtCutProc__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5ABC,'size':136,'pad':0,'label':"action__12daNpc_seiB_cFv",'name':"action__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5B44,'size':128,'pad':0,'label':"beforeMove__12daNpc_seiB_cFv",'name':"beforeMove__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5BC4,'size':92,'pad':0,'label':"setAttnPos__12daNpc_seiB_cFv",'name':"setAttnPos__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5C20,'size':8,'pad':0,'label':"drawDbgInfo__12daNpc_seiB_cFv",'name':"drawDbgInfo__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC5C28,'size':408,'pad':0,'label':"afterSetMotionAnm__12daNpc_seiB_cFiifi",'name':"afterSetMotionAnm__12daNpc_seiB_cFiifi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5DC0,'size':72,'pad':0,'label':"selectAction__12daNpc_seiB_cFv",'name':"selectAction__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5E08,'size':44,'pad':0,'label':"chkAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i",'name':"chkAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5E34,'size':168,'pad':0,'label':"setAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i",'name':"setAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC5EDC,'size':612,'pad':0,'label':"ctrlWaitAnm__12daNpc_seiB_cFv",'name':"ctrlWaitAnm__12daNpc_seiB_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6140,'size':44,'pad':0,'label':"wait__12daNpc_seiB_cFPv",'name':"wait__12daNpc_seiB_cFPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC616C,'size':160,'pad':0,'label':"talk__12daNpc_seiB_cFPv",'name':"talk__12daNpc_seiB_cFPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC620C,'size':32,'pad':0,'label':"daNpc_seiB_Create__FPv",'name':"daNpc_seiB_Create__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC622C,'size':32,'pad':0,'label':"daNpc_seiB_Delete__FPv",'name':"daNpc_seiB_Delete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC624C,'size':32,'pad':0,'label':"daNpc_seiB_Execute__FPv",'name':"daNpc_seiB_Execute__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC626C,'size':32,'pad':0,'label':"daNpc_seiB_Draw__FPv",'name':"daNpc_seiB_Draw__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC628C,'size':8,'pad':0,'label':"daNpc_seiB_IsDelete__FPv",'name':"daNpc_seiB_IsDelete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6294,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC62DC,'size':904,'pad':0,'label':"__dt__8daNpcT_cFv",'name':"__dt__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6664,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC66A0,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC66DC,'size':1028,'pad':0,'label':"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'name':"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6AE0,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6AE4,'size':252,'pad':0,'label':"__dt__15daNpcT_JntAnm_cFv",'name':"__dt__15daNpcT_JntAnm_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6BE0,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6BE4,'size':72,'pad':0,'label':"__dt__18daNpcT_ActorMngr_cFv",'name':"__dt__18daNpcT_ActorMngr_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6C2C,'size':72,'pad':0,'label':"__dt__22daNpcT_MotionSeqMngr_cFv",'name':"__dt__22daNpcT_MotionSeqMngr_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6C74,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6CE4,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6D40,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6DB0,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6DF8,'size':8,'pad':0,'label':"getEyeballMaterialNo__8daNpcT_cFv",'name':"getEyeballMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E00,'size':4,'pad':0,'label':"ctrlSubFaceMotion__8daNpcT_cFi",'name':"ctrlSubFaceMotion__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E04,'size':8,'pad':0,'label':"checkChangeJoint__8daNpcT_cFi",'name':"checkChangeJoint__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E0C,'size':8,'pad':0,'label':"checkRemoveJoint__8daNpcT_cFi",'name':"checkRemoveJoint__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E14,'size':8,'pad':0,'label':"getBackboneJointNo__8daNpcT_cFv",'name':"getBackboneJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E1C,'size':8,'pad':0,'label':"getNeckJointNo__8daNpcT_cFv",'name':"getNeckJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E24,'size':8,'pad':0,'label':"getHeadJointNo__8daNpcT_cFv",'name':"getHeadJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E2C,'size':8,'pad':0,'label':"getFootLJointNo__8daNpcT_cFv",'name':"getFootLJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E34,'size':8,'pad':0,'label':"getFootRJointNo__8daNpcT_cFv",'name':"getFootRJointNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E3C,'size':8,'pad':0,'label':"getEyeballLMaterialNo__8daNpcT_cFv",'name':"getEyeballLMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E44,'size':8,'pad':0,'label':"getEyeballRMaterialNo__8daNpcT_cFv",'name':"getEyeballRMaterialNo__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E4C,'size':4,'pad':0,'label':"afterJntAnm__8daNpcT_cFi",'name':"afterJntAnm__8daNpcT_cFi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E50,'size':8,'pad':0,'label':"checkChangeEvt__8daNpcT_cFv",'name':"checkChangeEvt__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E58,'size':8,'pad':0,'label':"evtEndProc__8daNpcT_cFv",'name':"evtEndProc__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E60,'size':4,'pad':0,'label':"setAfterTalkMotion__8daNpcT_cFv",'name':"setAfterTalkMotion__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E64,'size':4,'pad':0,'label':"afterMoved__8daNpcT_cFv",'name':"afterMoved__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E68,'size':4,'pad':0,'label':"setCollision__8daNpcT_cFv",'name':"setCollision__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E6C,'size':8,'pad':0,'label':"chkXYItems__8daNpcT_cFv",'name':"chkXYItems__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E74,'size':24,'pad':0,'label':"decTmr__8daNpcT_cFv",'name':"decTmr__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6E8C,'size':4,'pad':0,'label':"drawOtherMdl__8daNpcT_cFv",'name':"drawOtherMdl__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E90,'size':4,'pad':0,'label':"drawGhost__8daNpcT_cFv",'name':"drawGhost__8daNpcT_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E94,'size':8,'pad':0,'label':"afterSetFaceMotionAnm__8daNpcT_cFiifi",'name':"afterSetFaceMotionAnm__8daNpcT_cFiifi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6E9C,'size':48,'pad':0,'label':"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c",'name':"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6ECC,'size':48,'pad':0,'label':"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c",'name':"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6EFC,'size':4,'pad':0,'label':"changeAnm__8daNpcT_cFPiPi",'name':"changeAnm__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6F00,'size':4,'pad':0,'label':"changeBck__8daNpcT_cFPiPi",'name':"changeBck__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6F04,'size':4,'pad':0,'label':"changeBtp__8daNpcT_cFPiPi",'name':"changeBtp__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6F08,'size':4,'pad':0,'label':"changeBtk__8daNpcT_cFPiPi",'name':"changeBtk__8daNpcT_cFPiPi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC6F0C,'size':104,'pad':0,'label':"__sinit_d_a_npc_seib_cpp",'name':"__sinit_d_a_npc_seib_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80AC6F74,'size':68,'pad':0,'label':"__ct__12daNpc_seiB_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'name':"__ct__12daNpc_seiB_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC6FB8,'size':72,'pad':0,'label':"__dt__18daNpc_seiB_Param_cFv",'name':"__dt__18daNpc_seiB_Param_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7000,'size':8,'pad':0,'label':"func_80AC7000",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7008,'size':8,'pad':0,'label':"func_80AC7008",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7010,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80AC7018,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80AC7024,'size':148,'pad':0,'label':"m__18daNpc_seiB_Param_c",'name':"m__18daNpc_seiB_Param_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC70B8,'size':4,'pad':0,'label':"lit_4089",'name':"@4089",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC70BC,'size':4,'pad':0,'label':"lit_4090",'name':"@4090",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC70C0,'size':4,'pad':0,'label':"lit_4091",'name':"@4091",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC70C4,'size':4,'pad':0,'label':"lit_4215",'name':"@4215",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC70C8,'size':4,'pad':0,'label':"lit_4247",'name':"@4247",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC70CC,'size':4,'pad':0,'label':"lit_4292",'name':"@4292",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC70D0,'size':39,'pad':0,'label':"d_a_npc_seib__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80AC70F8,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC7104,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC7118,'size':8,'pad':0,'label':"l_bmdData",'name':"l_bmdData",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC7120,'size':24,'pad':0,'label':"l_evtList",'name':"l_evtList",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC7138,'size':8,'pad':0,'label':"l_resNameList",'name':"l_resNameList",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC7140,'size':2,'pad':2,'label':"l_loadResPtrn0",'name':"l_loadResPtrn0",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC7144,'size':8,'pad':0,'label':"l_loadResPtrnList",'name':"l_loadResPtrnList",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC714C,'size':28,'pad':0,'label':"l_faceMotionAnmData",'name':"l_faceMotionAnmData",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC7168,'size':112,'pad':0,'label':"l_motionAnmData",'name':"l_motionAnmData",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC71D8,'size':16,'pad':0,'label':"l_faceMotionSequenceData",'name':"l_faceMotionSequenceData",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC71E8,'size':64,'pad':0,'label':"l_motionSequenceData",'name':"l_motionSequenceData",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC7228,'size':4,'pad':0,'label':"mCutNameList__12daNpc_seiB_c",'name':"mCutNameList__12daNpc_seiB_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC722C,'size':12,'pad':0,'label':"mCutList__12daNpc_seiB_c",'name':"mCutList__12daNpc_seiB_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC7238,'size':12,'pad':0,'label':"lit_4342",'name':"@4342",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC7244,'size':12,'pad':0,'label':"lit_4352",'name':"@4352",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC7250,'size':32,'pad':0,'label':"btkAnmData",'name':"btkAnmData$4416",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC7270,'size':32,'pad':0,'label':"brkAnmData",'name':"brkAnmData$4417",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC7290,'size':12,'pad':0,'label':"lit_4467",'name':"@4467",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC729C,'size':32,'pad':0,'label':"daNpc_seiB_MethodTable",'name':"daNpc_seiB_MethodTable",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC72BC,'size':48,'pad':0,'label':"g_profile_NPC_SEIB",'name':"g_profile_NPC_SEIB",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC72EC,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC72F8,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC731C,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC7328,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC7334,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC7340,'size':12,'pad':0,'label':"__vt__22daNpcT_MotionSeqMngr_c",'name':"__vt__22daNpcT_MotionSeqMngr_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC734C,'size':12,'pad':0,'label':"__vt__18daNpcT_ActorMngr_c",'name':"__vt__18daNpcT_ActorMngr_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC7358,'size':12,'pad':0,'label':"__vt__15daNpcT_JntAnm_c",'name':"__vt__15daNpcT_JntAnm_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC7364,'size':196,'pad':0,'label':"__vt__12daNpc_seiB_c",'name':"__vt__12daNpc_seiB_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC7428,'size':12,'pad':0,'label':"__vt__18daNpc_seiB_Param_c",'name':"__vt__18daNpc_seiB_Param_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC7438,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC7440,'size':12,'pad':0,'label':"lit_3814",'name':"@3814",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC744C,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__12daNpc_seiB_cFv":5,
	"create__12daNpc_seiB_cFv":6,
	"CreateHeap__12daNpc_seiB_cFv":7,
	"Delete__12daNpc_seiB_cFv":8,
	"Execute__12daNpc_seiB_cFv":9,
	"Draw__12daNpc_seiB_cFv":10,
	"createHeapCallBack__12daNpc_seiB_cFP10fopAc_ac_c":11,
	"getType__12daNpc_seiB_cFv":12,
	"getFlowNodeNo__12daNpc_seiB_cFv":13,
	"isDelete__12daNpc_seiB_cFv":14,
	"reset__12daNpc_seiB_cFv":15,
	"setParam__12daNpc_seiB_cFv":16,
	"getDistTable__12dAttention_cFi":17,
	"srchActors__12daNpc_seiB_cFv":18,
	"evtTalk__12daNpc_seiB_cFv":19,
	"evtCutProc__12daNpc_seiB_cFv":20,
	"action__12daNpc_seiB_cFv":21,
	"beforeMove__12daNpc_seiB_cFv":22,
	"setAttnPos__12daNpc_seiB_cFv":23,
	"drawDbgInfo__12daNpc_seiB_cFv":24,
	"afterSetMotionAnm__12daNpc_seiB_cFiifi":25,
	"selectAction__12daNpc_seiB_cFv":26,
	"chkAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i":27,
	"setAction__12daNpc_seiB_cFM12daNpc_seiB_cFPCvPvPv_i":28,
	"ctrlWaitAnm__12daNpc_seiB_cFv":29,
	"wait__12daNpc_seiB_cFPv":30,
	"talk__12daNpc_seiB_cFPv":31,
	"daNpc_seiB_Create__FPv":32,
	"daNpc_seiB_Delete__FPv":33,
	"daNpc_seiB_Execute__FPv":34,
	"daNpc_seiB_Draw__FPv":35,
	"daNpc_seiB_IsDelete__FPv":36,
	"__dt__10cCcD_GSttsFv":37,
	"__dt__8daNpcT_cFv":38,
	"__dt__4cXyzFv":39,
	"__dt__5csXyzFv":40,
	"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc":41,
	"__ct__5csXyzFv":42,
	"__dt__15daNpcT_JntAnm_cFv":43,
	"__ct__4cXyzFv":44,
	"__dt__18daNpcT_ActorMngr_cFv":45,
	"__dt__22daNpcT_MotionSeqMngr_cFv":46,
	"__dt__12dBgS_AcchCirFv":47,
	"__dt__10dCcD_GSttsFv":48,
	"__dt__12dBgS_ObjAcchFv":49,
	"__dt__12J3DFrameCtrlFv":50,
	"getEyeballMaterialNo__8daNpcT_cFv":51,
	"ctrlSubFaceMotion__8daNpcT_cFi":52,
	"checkChangeJoint__8daNpcT_cFi":53,
	"checkRemoveJoint__8daNpcT_cFi":54,
	"getBackboneJointNo__8daNpcT_cFv":55,
	"getNeckJointNo__8daNpcT_cFv":56,
	"getHeadJointNo__8daNpcT_cFv":57,
	"getFootLJointNo__8daNpcT_cFv":58,
	"getFootRJointNo__8daNpcT_cFv":59,
	"getEyeballLMaterialNo__8daNpcT_cFv":60,
	"getEyeballRMaterialNo__8daNpcT_cFv":61,
	"afterJntAnm__8daNpcT_cFi":62,
	"checkChangeEvt__8daNpcT_cFv":63,
	"evtEndProc__8daNpcT_cFv":64,
	"setAfterTalkMotion__8daNpcT_cFv":65,
	"afterMoved__8daNpcT_cFv":66,
	"setCollision__8daNpcT_cFv":67,
	"chkXYItems__8daNpcT_cFv":68,
	"decTmr__8daNpcT_cFv":69,
	"drawOtherMdl__8daNpcT_cFv":70,
	"drawGhost__8daNpcT_cFv":71,
	"afterSetFaceMotionAnm__8daNpcT_cFiifi":72,
	"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c":73,
	"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c":74,
	"changeAnm__8daNpcT_cFPiPi":75,
	"changeBck__8daNpcT_cFPiPi":76,
	"changeBtp__8daNpcT_cFPiPi":77,
	"changeBtk__8daNpcT_cFPiPi":78,
	"__sinit_d_a_npc_seib_cpp":79,
	"__ct__12daNpc_seiB_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc":80,
	"__dt__18daNpc_seiB_Param_cFv":81,
	"func_80AC7000":82,
	"func_80AC7008":83,
	"_ctors":84,
	"_dtors":85,
	"m__18daNpc_seiB_Param_c":86,
	"lit_4089":87,
	"lit_4090":88,
	"lit_4091":89,
	"lit_4215":90,
	"lit_4247":91,
	"lit_4292":92,
	"d_a_npc_seib__stringBase0":93,
	"cNullVec__6Z2Calc":94,
	"lit_1787":95,
	"l_bmdData":96,
	"l_evtList":97,
	"l_resNameList":98,
	"l_loadResPtrn0":99,
	"l_loadResPtrnList":100,
	"l_faceMotionAnmData":101,
	"l_motionAnmData":102,
	"l_faceMotionSequenceData":103,
	"l_motionSequenceData":104,
	"mCutNameList__12daNpc_seiB_c":105,
	"mCutList__12daNpc_seiB_c":106,
	"lit_4342":107,
	"lit_4352":108,
	"btkAnmData":109,
	"brkAnmData":110,
	"lit_4467":111,
	"daNpc_seiB_MethodTable":112,
	"g_profile_NPC_SEIB":113,
	"__vt__12J3DFrameCtrl":114,
	"__vt__12dBgS_ObjAcch":115,
	"__vt__12dBgS_AcchCir":116,
	"__vt__10cCcD_GStts":117,
	"__vt__10dCcD_GStts":118,
	"__vt__22daNpcT_MotionSeqMngr_c":119,
	"__vt__18daNpcT_ActorMngr_c":120,
	"__vt__15daNpcT_JntAnm_c":121,
	"__vt__12daNpc_seiB_c":122,
	"__vt__18daNpc_seiB_Param_c":123,
	"__global_destructor_chain":124,
	"lit_3814":125,
	"l_HIO":126,
}

