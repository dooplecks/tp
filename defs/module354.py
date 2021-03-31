#
# Generate By: dol2asm
# Module: 354
#

# Libraries
LIBRARIES = [
	"d/a/npc/d_a_npc_seic",
	"Runtime.PPCEABI.H",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"d_a_npc_seic",
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
	{'addr':0x80AC7460,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC748C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':True,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC74B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC74D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC74F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':1,'tu':3,'section':0,'class_template':None,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC754C,'size':156,'pad':0,'label':"__dt__12daNpc_seiC_cFv",'name':"__dt__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC75E8,'size':576,'pad':0,'label':"create__12daNpc_seiC_cFv",'name':"create__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7828,'size':344,'pad':0,'label':"CreateHeap__12daNpc_seiC_cFv",'name':"CreateHeap__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7980,'size':52,'pad':0,'label':"Delete__12daNpc_seiC_cFv",'name':"Delete__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC79B4,'size':32,'pad':0,'label':"Execute__12daNpc_seiC_cFv",'name':"Execute__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC79D4,'size':148,'pad':0,'label':"Draw__12daNpc_seiC_cFv",'name':"Draw__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7A68,'size':32,'pad':0,'label':"createHeapCallBack__12daNpc_seiC_cFP10fopAc_ac_c",'name':"createHeapCallBack__12daNpc_seiC_cFP10fopAc_ac_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7A88,'size':32,'pad':0,'label':"getType__12daNpc_seiC_cFv",'name':"getType__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7AA8,'size':28,'pad':0,'label':"getFlowNodeNo__12daNpc_seiC_cFv",'name':"getFlowNodeNo__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7AC4,'size':8,'pad':0,'label':"isDelete__12daNpc_seiC_cFv",'name':"isDelete__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC7ACC,'size':336,'pad':0,'label':"reset__12daNpc_seiC_cFv",'name':"reset__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7C1C,'size':280,'pad':0,'label':"setParam__12daNpc_seiC_cFv",'name':"setParam__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7D34,'size':20,'pad':0,'label':"getDistTable__12dAttention_cFi",'name':"getDistTable__12dAttention_cFi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7D48,'size':4,'pad':0,'label':"srchActors__12daNpc_seiC_cFv",'name':"srchActors__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC7D4C,'size':256,'pad':0,'label':"evtTalk__12daNpc_seiC_cFv",'name':"evtTalk__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7E4C,'size':200,'pad':0,'label':"evtCutProc__12daNpc_seiC_cFv",'name':"evtCutProc__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7F14,'size':136,'pad':0,'label':"action__12daNpc_seiC_cFv",'name':"action__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC7F9C,'size':128,'pad':0,'label':"beforeMove__12daNpc_seiC_cFv",'name':"beforeMove__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC801C,'size':92,'pad':0,'label':"setAttnPos__12daNpc_seiC_cFv",'name':"setAttnPos__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8078,'size':8,'pad':0,'label':"drawDbgInfo__12daNpc_seiC_cFv",'name':"drawDbgInfo__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC8080,'size':408,'pad':0,'label':"afterSetMotionAnm__12daNpc_seiC_cFiifi",'name':"afterSetMotionAnm__12daNpc_seiC_cFiifi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8218,'size':72,'pad':0,'label':"selectAction__12daNpc_seiC_cFv",'name':"selectAction__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8260,'size':44,'pad':0,'label':"chkAction__12daNpc_seiC_cFM12daNpc_seiC_cFPCvPvPv_i",'name':"chkAction__12daNpc_seiC_cFM12daNpc_seiC_cFPCvPvPv_i",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC828C,'size':168,'pad':0,'label':"setAction__12daNpc_seiC_cFM12daNpc_seiC_cFPCvPvPv_i",'name':"setAction__12daNpc_seiC_cFM12daNpc_seiC_cFPCvPvPv_i",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8334,'size':4,'pad':0,'label':"ctrlWaitAnm__12daNpc_seiC_cFv",'name':"ctrlWaitAnm__12daNpc_seiC_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC8338,'size':44,'pad':0,'label':"wait__12daNpc_seiC_cFPv",'name':"wait__12daNpc_seiC_cFPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8364,'size':160,'pad':0,'label':"talk__12daNpc_seiC_cFPv",'name':"talk__12daNpc_seiC_cFPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8404,'size':32,'pad':0,'label':"daNpc_seiC_Create__FPv",'name':"daNpc_seiC_Create__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8424,'size':32,'pad':0,'label':"daNpc_seiC_Delete__FPv",'name':"daNpc_seiC_Delete__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8444,'size':32,'pad':0,'label':"daNpc_seiC_Execute__FPv",'name':"daNpc_seiC_Execute__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8464,'size':32,'pad':0,'label':"daNpc_seiC_Draw__FPv",'name':"daNpc_seiC_Draw__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8484,'size':8,'pad':0,'label':"daNpc_seiC_IsDelete__FPv",'name':"daNpc_seiC_IsDelete__FPv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC848C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC84D4,'size':904,'pad':0,'label':"__dt__8daNpcT_cFv",'name':"__dt__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC885C,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8898,'size':60,'pad':0,'label':"__dt__5csXyzFv",'name':"__dt__5csXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC88D4,'size':1028,'pad':0,'label':"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'name':"__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8CD8,'size':4,'pad':0,'label':"__ct__5csXyzFv",'name':"__ct__5csXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC8CDC,'size':252,'pad':0,'label':"__dt__15daNpcT_JntAnm_cFv",'name':"__dt__15daNpcT_JntAnm_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8DD8,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC8DDC,'size':72,'pad':0,'label':"__dt__18daNpcT_ActorMngr_cFv",'name':"__dt__18daNpcT_ActorMngr_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8E24,'size':72,'pad':0,'label':"__dt__22daNpcT_MotionSeqMngr_cFv",'name':"__dt__22daNpcT_MotionSeqMngr_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8E6C,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8EDC,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8F38,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8FA8,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC8FF0,'size':8,'pad':0,'label':"getEyeballMaterialNo__8daNpcT_cFv",'name':"getEyeballMaterialNo__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC8FF8,'size':4,'pad':0,'label':"ctrlSubFaceMotion__8daNpcT_cFi",'name':"ctrlSubFaceMotion__8daNpcT_cFi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC8FFC,'size':8,'pad':0,'label':"checkChangeJoint__8daNpcT_cFi",'name':"checkChangeJoint__8daNpcT_cFi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9004,'size':8,'pad':0,'label':"checkRemoveJoint__8daNpcT_cFi",'name':"checkRemoveJoint__8daNpcT_cFi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC900C,'size':8,'pad':0,'label':"getBackboneJointNo__8daNpcT_cFv",'name':"getBackboneJointNo__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9014,'size':8,'pad':0,'label':"getNeckJointNo__8daNpcT_cFv",'name':"getNeckJointNo__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC901C,'size':8,'pad':0,'label':"getHeadJointNo__8daNpcT_cFv",'name':"getHeadJointNo__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9024,'size':8,'pad':0,'label':"getFootLJointNo__8daNpcT_cFv",'name':"getFootLJointNo__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC902C,'size':8,'pad':0,'label':"getFootRJointNo__8daNpcT_cFv",'name':"getFootRJointNo__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9034,'size':8,'pad':0,'label':"getEyeballLMaterialNo__8daNpcT_cFv",'name':"getEyeballLMaterialNo__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC903C,'size':8,'pad':0,'label':"getEyeballRMaterialNo__8daNpcT_cFv",'name':"getEyeballRMaterialNo__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9044,'size':4,'pad':0,'label':"afterJntAnm__8daNpcT_cFi",'name':"afterJntAnm__8daNpcT_cFi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9048,'size':8,'pad':0,'label':"checkChangeEvt__8daNpcT_cFv",'name':"checkChangeEvt__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9050,'size':8,'pad':0,'label':"evtEndProc__8daNpcT_cFv",'name':"evtEndProc__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9058,'size':4,'pad':0,'label':"setAfterTalkMotion__8daNpcT_cFv",'name':"setAfterTalkMotion__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC905C,'size':4,'pad':0,'label':"afterMoved__8daNpcT_cFv",'name':"afterMoved__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9060,'size':4,'pad':0,'label':"setCollision__8daNpcT_cFv",'name':"setCollision__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9064,'size':8,'pad':0,'label':"chkXYItems__8daNpcT_cFv",'name':"chkXYItems__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC906C,'size':24,'pad':0,'label':"decTmr__8daNpcT_cFv",'name':"decTmr__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC9084,'size':4,'pad':0,'label':"drawOtherMdl__8daNpcT_cFv",'name':"drawOtherMdl__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9088,'size':4,'pad':0,'label':"drawGhost__8daNpcT_cFv",'name':"drawGhost__8daNpcT_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC908C,'size':8,'pad':0,'label':"afterSetFaceMotionAnm__8daNpcT_cFiifi",'name':"afterSetFaceMotionAnm__8daNpcT_cFiifi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9094,'size':48,'pad':0,'label':"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c",'name':"getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC90C4,'size':48,'pad':0,'label':"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c",'name':"getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC90F4,'size':4,'pad':0,'label':"changeAnm__8daNpcT_cFPiPi",'name':"changeAnm__8daNpcT_cFPiPi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC90F8,'size':4,'pad':0,'label':"changeBck__8daNpcT_cFPiPi",'name':"changeBck__8daNpcT_cFPiPi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC90FC,'size':4,'pad':0,'label':"changeBtp__8daNpcT_cFPiPi",'name':"changeBtp__8daNpcT_cFPiPi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9100,'size':4,'pad':0,'label':"changeBtk__8daNpcT_cFPiPi",'name':"changeBtk__8daNpcT_cFPiPi",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80AC9104,'size':104,'pad':0,'label':"__sinit_d_a_npc_seic_cpp",'name':"__sinit_d_a_npc_seic_cpp",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80AC916C,'size':68,'pad':0,'label':"__ct__12daNpc_seiC_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'name':"__ct__12daNpc_seiC_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC91B0,'size':72,'pad':0,'label':"__dt__18daNpc_seiC_Param_cFv",'name':"__dt__18daNpc_seiC_Param_cFv",'lib':-1,'tu':2,'section':0,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC91F8,'size':8,'pad':0,'label':"func_80AC91F8",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC9200,'size':8,'pad':0,'label':"func_80AC9200",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':2,'section':0,'class_template':None,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80AC9208,'size':8,'pad':0,'label':"data_80AC9208",'name':None,'lib':-1,'tu':1,'section':1,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC9210,'size':4,'pad':0,'label':"__destroy_global_chain_reference",'name':"__destroy_global_chain_reference",'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC9214,'size':8,'pad':0,'label':"pad_80AC9214",'name':None,'lib':1,'tu':3,'section':5,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC921C,'size':148,'pad':0,'label':"m__18daNpc_seiC_Param_c",'name':"m__18daNpc_seiC_Param_c",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC92B0,'size':4,'pad':0,'label':"lit_4089",'name':"@4089",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC92B4,'size':4,'pad':0,'label':"lit_4090",'name':"@4090",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC92B8,'size':4,'pad':0,'label':"lit_4091",'name':"@4091",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC92BC,'size':4,'pad':0,'label':"lit_4215",'name':"@4215",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC92C0,'size':4,'pad':0,'label':"lit_4247",'name':"@4247",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC92C4,'size':4,'pad':0,'label':"lit_4292",'name':"@4292",'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC92C8,'size':40,'pad':0,'label':"struct_80AC92C8",'name':None,'lib':-1,'tu':2,'section':2,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"Structure"},
	{'addr':0x80AC92F0,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC92FC,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC9310,'size':8,'pad':0,'label':"l_bmdData",'name':"l_bmdData",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC9318,'size':24,'pad':0,'label':"l_evtList",'name':"l_evtList",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC9330,'size':8,'pad':0,'label':"l_resNameList",'name':"l_resNameList",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC9338,'size':2,'pad':2,'label':"l_loadResPtrn0",'name':"l_loadResPtrn0",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80AC933C,'size':8,'pad':0,'label':"l_loadResPtrnList",'name':"l_loadResPtrnList",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC9344,'size':28,'pad':0,'label':"l_faceMotionAnmData",'name':"l_faceMotionAnmData",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC9360,'size':28,'pad':0,'label':"l_motionAnmData",'name':"l_motionAnmData",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC937C,'size':16,'pad':0,'label':"l_faceMotionSequenceData",'name':"l_faceMotionSequenceData",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC938C,'size':16,'pad':0,'label':"l_motionSequenceData",'name':"l_motionSequenceData",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC939C,'size':4,'pad':0,'label':"mCutNameList__12daNpc_seiC_c",'name':"mCutNameList__12daNpc_seiC_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC93A0,'size':12,'pad':0,'label':"mCutList__12daNpc_seiC_c",'name':"mCutList__12daNpc_seiC_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC93AC,'size':12,'pad':0,'label':"lit_4342",'name':"@4342",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC93B8,'size':12,'pad':0,'label':"lit_4352",'name':"@4352",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC93C4,'size':8,'pad':0,'label':"data_80AC93C4",'name':"btkAnmData$4416",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC93CC,'size':8,'pad':0,'label':"data_80AC93CC",'name':"brkAnmData$4417",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC93D4,'size':12,'pad':0,'label':"lit_4467",'name':"@4467",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC93E0,'size':32,'pad':0,'label':"daNpc_seiC_MethodTable",'name':"daNpc_seiC_MethodTable",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC9400,'size':48,'pad':0,'label':"g_profile_NPC_SEIC",'name':"g_profile_NPC_SEIC",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80AC9430,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC943C,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC9460,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC946C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC9478,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC9484,'size':12,'pad':0,'label':"__vt__22daNpcT_MotionSeqMngr_c",'name':"__vt__22daNpcT_MotionSeqMngr_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC9490,'size':12,'pad':0,'label':"__vt__18daNpcT_ActorMngr_c",'name':"__vt__18daNpcT_ActorMngr_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC949C,'size':12,'pad':0,'label':"__vt__15daNpcT_JntAnm_c",'name':"__vt__15daNpcT_JntAnm_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC94A8,'size':196,'pad':0,'label':"__vt__12daNpc_seiC_c",'name':"__vt__12daNpc_seiC_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC956C,'size':12,'pad':0,'label':"__vt__18daNpc_seiC_Param_c",'name':"__vt__18daNpc_seiC_Param_c",'lib':-1,'tu':2,'section':3,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80AC9578,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':1,'tu':3,'section':4,'class_template':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC9580,'size':12,'pad':0,'label':"lit_3814",'name':"@3814",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80AC958C,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':2,'section':4,'class_template':False,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__12daNpc_seiC_cFv":5,
	"create__12daNpc_seiC_cFv":6,
	"CreateHeap__12daNpc_seiC_cFv":7,
	"Delete__12daNpc_seiC_cFv":8,
	"Execute__12daNpc_seiC_cFv":9,
	"Draw__12daNpc_seiC_cFv":10,
	"createHeapCallBack__12daNpc_seiC_cFP10fopAc_ac_c":11,
	"getType__12daNpc_seiC_cFv":12,
	"getFlowNodeNo__12daNpc_seiC_cFv":13,
	"isDelete__12daNpc_seiC_cFv":14,
	"reset__12daNpc_seiC_cFv":15,
	"setParam__12daNpc_seiC_cFv":16,
	"getDistTable__12dAttention_cFi":17,
	"srchActors__12daNpc_seiC_cFv":18,
	"evtTalk__12daNpc_seiC_cFv":19,
	"evtCutProc__12daNpc_seiC_cFv":20,
	"action__12daNpc_seiC_cFv":21,
	"beforeMove__12daNpc_seiC_cFv":22,
	"setAttnPos__12daNpc_seiC_cFv":23,
	"drawDbgInfo__12daNpc_seiC_cFv":24,
	"afterSetMotionAnm__12daNpc_seiC_cFiifi":25,
	"selectAction__12daNpc_seiC_cFv":26,
	"chkAction__12daNpc_seiC_cFM12daNpc_seiC_cFPCvPvPv_i":27,
	"setAction__12daNpc_seiC_cFM12daNpc_seiC_cFPCvPvPv_i":28,
	"ctrlWaitAnm__12daNpc_seiC_cFv":29,
	"wait__12daNpc_seiC_cFPv":30,
	"talk__12daNpc_seiC_cFPv":31,
	"daNpc_seiC_Create__FPv":32,
	"daNpc_seiC_Delete__FPv":33,
	"daNpc_seiC_Execute__FPv":34,
	"daNpc_seiC_Draw__FPv":35,
	"daNpc_seiC_IsDelete__FPv":36,
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
	"__sinit_d_a_npc_seic_cpp":79,
	"__ct__12daNpc_seiC_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc":80,
	"__dt__18daNpc_seiC_Param_cFv":81,
	"func_80AC91F8":82,
	"func_80AC9200":83,
	"data_80AC9208":84,
	"__destroy_global_chain_reference":85,
	"pad_80AC9214":86,
	"m__18daNpc_seiC_Param_c":87,
	"lit_4089":88,
	"lit_4090":89,
	"lit_4091":90,
	"lit_4215":91,
	"lit_4247":92,
	"lit_4292":93,
	"struct_80AC92C8":94,
	"cNullVec__6Z2Calc":95,
	"lit_1787":96,
	"l_bmdData":97,
	"l_evtList":98,
	"l_resNameList":99,
	"l_loadResPtrn0":100,
	"l_loadResPtrnList":101,
	"l_faceMotionAnmData":102,
	"l_motionAnmData":103,
	"l_faceMotionSequenceData":104,
	"l_motionSequenceData":105,
	"mCutNameList__12daNpc_seiC_c":106,
	"mCutList__12daNpc_seiC_c":107,
	"lit_4342":108,
	"lit_4352":109,
	"data_80AC93C4":110,
	"data_80AC93CC":111,
	"lit_4467":112,
	"daNpc_seiC_MethodTable":113,
	"g_profile_NPC_SEIC":114,
	"__vt__12J3DFrameCtrl":115,
	"__vt__12dBgS_ObjAcch":116,
	"__vt__12dBgS_AcchCir":117,
	"__vt__10cCcD_GStts":118,
	"__vt__10dCcD_GStts":119,
	"__vt__22daNpcT_MotionSeqMngr_c":120,
	"__vt__18daNpcT_ActorMngr_c":121,
	"__vt__15daNpcT_JntAnm_c":122,
	"__vt__12daNpc_seiC_c":123,
	"__vt__18daNpc_seiC_Param_c":124,
	"__global_destructor_chain":125,
	"lit_3814":126,
	"l_HIO":127,
}

