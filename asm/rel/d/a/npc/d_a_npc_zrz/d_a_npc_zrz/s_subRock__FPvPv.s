lbl_80B951F8:
/* 80B951F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B951FC  7C 08 02 A6 */	mflr r0
/* 80B95200  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B95204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B95208  7C 7F 1B 78 */	mr r31, r3
/* 80B9520C  4B 48 3A D5 */	bl fopAc_IsActor__FPv
/* 80B95210  2C 03 00 00 */	cmpwi r3, 0
/* 80B95214  41 82 00 18 */	beq lbl_80B9522C
/* 80B95218  A8 1F 00 08 */	lha r0, 8(r31)
/* 80B9521C  2C 00 00 88 */	cmpwi r0, 0x88
/* 80B95220  40 82 00 0C */	bne lbl_80B9522C
/* 80B95224  7F E3 FB 78 */	mr r3, r31
/* 80B95228  48 00 00 08 */	b lbl_80B95230
lbl_80B9522C:
/* 80B9522C  38 60 00 00 */	li r3, 0
lbl_80B95230:
/* 80B95230  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B95234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B95238  7C 08 03 A6 */	mtlr r0
/* 80B9523C  38 21 00 10 */	addi r1, r1, 0x10
/* 80B95240  4E 80 00 20 */	blr 
