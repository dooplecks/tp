lbl_80832658:
/* 80832658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8083265C  7C 08 02 A6 */	mflr r0
/* 80832660  90 01 00 14 */	stw r0, 0x14(r1)
/* 80832664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80832668  7C 7F 1B 79 */	or. r31, r3, r3
/* 8083266C  41 82 00 30 */	beq lbl_8083269C
/* 80832670  3C 60 80 83 */	lis r3, __vt__10dCcD_GStts@ha /* 0x80832F18@ha */
/* 80832674  38 03 2F 18 */	addi r0, r3, __vt__10dCcD_GStts@l /* 0x80832F18@l */
/* 80832678  90 1F 00 00 */	stw r0, 0(r31)
/* 8083267C  41 82 00 10 */	beq lbl_8083268C
/* 80832680  3C 60 80 83 */	lis r3, __vt__10cCcD_GStts@ha /* 0x80832F0C@ha */
/* 80832684  38 03 2F 0C */	addi r0, r3, __vt__10cCcD_GStts@l /* 0x80832F0C@l */
/* 80832688  90 1F 00 00 */	stw r0, 0(r31)
lbl_8083268C:
/* 8083268C  7C 80 07 35 */	extsh. r0, r4
/* 80832690  40 81 00 0C */	ble lbl_8083269C
/* 80832694  7F E3 FB 78 */	mr r3, r31
/* 80832698  4B A9 C6 A5 */	bl __dl__FPv
lbl_8083269C:
/* 8083269C  7F E3 FB 78 */	mr r3, r31
/* 808326A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 808326A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 808326A8  7C 08 03 A6 */	mtlr r0
/* 808326AC  38 21 00 10 */	addi r1, r1, 0x10
/* 808326B0  4E 80 00 20 */	blr 
