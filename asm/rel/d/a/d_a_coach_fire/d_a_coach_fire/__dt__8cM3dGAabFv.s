lbl_806582F4:
/* 806582F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806582F8  7C 08 02 A6 */	mflr r0
/* 806582FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80658300  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80658304  7C 7F 1B 79 */	or. r31, r3, r3
/* 80658308  41 82 00 1C */	beq lbl_80658324
/* 8065830C  3C A0 80 66 */	lis r5, __vt__8cM3dGAab@ha /* 0x806584C4@ha */
/* 80658310  38 05 84 C4 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x806584C4@l */
/* 80658314  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80658318  7C 80 07 35 */	extsh. r0, r4
/* 8065831C  40 81 00 08 */	ble lbl_80658324
/* 80658320  4B C7 6A 1D */	bl __dl__FPv
lbl_80658324:
/* 80658324  7F E3 FB 78 */	mr r3, r31
/* 80658328  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8065832C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80658330  7C 08 03 A6 */	mtlr r0
/* 80658334  38 21 00 10 */	addi r1, r1, 0x10
/* 80658338  4E 80 00 20 */	blr 
