lbl_805786FC:
/* 805786FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80578700  7C 08 02 A6 */	mflr r0
/* 80578704  90 01 00 14 */	stw r0, 0x14(r1)
/* 80578708  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8057870C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80578710  41 82 00 1C */	beq lbl_8057872C
/* 80578714  3C A0 80 58 */	lis r5, __vt__8cM3dGAab@ha /* 0x80578C50@ha */
/* 80578718  38 05 8C 50 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x80578C50@l */
/* 8057871C  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80578720  7C 80 07 35 */	extsh. r0, r4
/* 80578724  40 81 00 08 */	ble lbl_8057872C
/* 80578728  4B D5 66 15 */	bl __dl__FPv
lbl_8057872C:
/* 8057872C  7F E3 FB 78 */	mr r3, r31
/* 80578730  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80578734  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80578738  7C 08 03 A6 */	mtlr r0
/* 8057873C  38 21 00 10 */	addi r1, r1, 0x10
/* 80578740  4E 80 00 20 */	blr 
