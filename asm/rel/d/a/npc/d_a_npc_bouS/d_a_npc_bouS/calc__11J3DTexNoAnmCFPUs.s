lbl_80976BD0:
/* 80976BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80976BD4  7C 08 02 A6 */	mflr r0
/* 80976BD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80976BDC  7C 66 1B 78 */	mr r6, r3
/* 80976BE0  7C 85 23 78 */	mr r5, r4
/* 80976BE4  80 63 00 08 */	lwz r3, 8(r3)
/* 80976BE8  A0 86 00 04 */	lhz r4, 4(r6)
/* 80976BEC  4B 9B 43 65 */	bl getTexNo__16J3DAnmTexPatternCFUsPUs
/* 80976BF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80976BF4  7C 08 03 A6 */	mtlr r0
/* 80976BF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80976BFC  4E 80 00 20 */	blr 
