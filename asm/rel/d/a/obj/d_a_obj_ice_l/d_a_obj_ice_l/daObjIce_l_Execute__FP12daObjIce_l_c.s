lbl_80C20060:
/* 80C20060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C20064  7C 08 02 A6 */	mflr r0
/* 80C20068  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C2006C  4B 45 88 E5 */	bl MoveBGExecute__16dBgS_MoveBgActorFv
/* 80C20070  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C20074  7C 08 03 A6 */	mtlr r0
/* 80C20078  38 21 00 10 */	addi r1, r1, 0x10
/* 80C2007C  4E 80 00 20 */	blr 
