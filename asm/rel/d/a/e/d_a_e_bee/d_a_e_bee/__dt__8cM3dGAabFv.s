lbl_806852B4:
/* 806852B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806852B8  7C 08 02 A6 */	mflr r0
/* 806852BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 806852C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806852C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 806852C8  41 82 00 1C */	beq lbl_806852E4
/* 806852CC  3C A0 80 68 */	lis r5, __vt__8cM3dGAab@ha /* 0x80685618@ha */
/* 806852D0  38 05 56 18 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x80685618@l */
/* 806852D4  90 1F 00 18 */	stw r0, 0x18(r31)
/* 806852D8  7C 80 07 35 */	extsh. r0, r4
/* 806852DC  40 81 00 08 */	ble lbl_806852E4
/* 806852E0  4B C4 9A 5D */	bl __dl__FPv
lbl_806852E4:
/* 806852E4  7F E3 FB 78 */	mr r3, r31
/* 806852E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806852EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806852F0  7C 08 03 A6 */	mtlr r0
/* 806852F4  38 21 00 10 */	addi r1, r1, 0x10
/* 806852F8  4E 80 00 20 */	blr 
