lbl_80C041E8:
/* 80C041E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80C041EC  7C 08 02 A6 */	mflr r0
/* 80C041F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80C041F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80C041F8  7C 7F 1B 78 */	mr r31, r3
/* 80C041FC  2C 04 00 00 */	cmpwi r4, 0
/* 80C04200  41 82 00 48 */	beq lbl_80C04248
/* 80C04204  38 80 00 0D */	li r4, 0xd
/* 80C04208  C0 3F 0A 94 */	lfs f1, 0xa94(r31)
/* 80C0420C  4B FF D1 A5 */	bl setBaseAnm__11daObj_GrA_cFif
/* 80C04210  3C 60 80 C1 */	lis r3, lit_10254@ha /* 0x80C0FDCC@ha */
/* 80C04214  C0 03 FD CC */	lfs f0, lit_10254@l(r3)  /* 0x80C0FDCC@l */
/* 80C04218  80 7F 07 54 */	lwz r3, 0x754(r31)
/* 80C0421C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 80C04220  3C 60 00 05 */	lis r3, 0x0005 /* 0x00050089@ha */
/* 80C04224  38 03 00 89 */	addi r0, r3, 0x0089 /* 0x00050089@l */
/* 80C04228  90 01 00 08 */	stw r0, 8(r1)
/* 80C0422C  38 7F 07 58 */	addi r3, r31, 0x758
/* 80C04230  38 81 00 08 */	addi r4, r1, 8
/* 80C04234  38 A0 FF FF */	li r5, -1
/* 80C04238  81 9F 07 58 */	lwz r12, 0x758(r31)
/* 80C0423C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80C04240  7D 89 03 A6 */	mtctr r12
/* 80C04244  4E 80 04 21 */	bctrl 
lbl_80C04248:
/* 80C04248  38 60 00 01 */	li r3, 1
/* 80C0424C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80C04250  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80C04254  7C 08 03 A6 */	mtlr r0
/* 80C04258  38 21 00 20 */	addi r1, r1, 0x20
/* 80C0425C  4E 80 00 20 */	blr 
