lbl_80962030:
/* 80962030  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80962034  7C 08 02 A6 */	mflr r0
/* 80962038  90 01 00 14 */	stw r0, 0x14(r1)
/* 8096203C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80962040  7C 7F 1B 79 */	or. r31, r3, r3
/* 80962044  41 82 00 1C */	beq lbl_80962060
/* 80962048  3C A0 80 96 */	lis r5, __vt__10cCcD_GStts@ha /* 0x80962754@ha */
/* 8096204C  38 05 27 54 */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x80962754@l */
/* 80962050  90 1F 00 00 */	stw r0, 0(r31)
/* 80962054  7C 80 07 35 */	extsh. r0, r4
/* 80962058  40 81 00 08 */	ble lbl_80962060
/* 8096205C  4B 96 CC E1 */	bl __dl__FPv
lbl_80962060:
/* 80962060  7F E3 FB 78 */	mr r3, r31
/* 80962064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80962068  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8096206C  7C 08 03 A6 */	mtlr r0
/* 80962070  38 21 00 10 */	addi r1, r1, 0x10
/* 80962074  4E 80 00 20 */	blr 
