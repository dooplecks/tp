lbl_80BC61BC:
/* 80BC61BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BC61C0  7C 08 02 A6 */	mflr r0
/* 80BC61C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BC61C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80BC61CC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80BC61D0  41 82 00 1C */	beq lbl_80BC61EC
/* 80BC61D4  3C A0 80 BC */	lis r5, __vt__8cM3dGAab@ha /* 0x80BC6C10@ha */
/* 80BC61D8  38 05 6C 10 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x80BC6C10@l */
/* 80BC61DC  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80BC61E0  7C 80 07 35 */	extsh. r0, r4
/* 80BC61E4  40 81 00 08 */	ble lbl_80BC61EC
/* 80BC61E8  4B 70 8B 55 */	bl __dl__FPv
lbl_80BC61EC:
/* 80BC61EC  7F E3 FB 78 */	mr r3, r31
/* 80BC61F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80BC61F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BC61F8  7C 08 03 A6 */	mtlr r0
/* 80BC61FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80BC6200  4E 80 00 20 */	blr 
