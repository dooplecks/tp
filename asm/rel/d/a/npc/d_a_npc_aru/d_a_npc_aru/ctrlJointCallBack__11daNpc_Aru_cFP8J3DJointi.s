lbl_809520E4:
/* 809520E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809520E8  7C 08 02 A6 */	mflr r0
/* 809520EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 809520F0  7C 60 1B 78 */	mr r0, r3
/* 809520F4  2C 04 00 00 */	cmpwi r4, 0
/* 809520F8  40 82 00 30 */	bne lbl_80952128
/* 809520FC  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 80952100  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 80952104  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80952108  80 65 00 14 */	lwz r3, 0x14(r5)
/* 8095210C  28 03 00 00 */	cmplwi r3, 0
/* 80952110  41 82 00 18 */	beq lbl_80952128
/* 80952114  7C 04 03 78 */	mr r4, r0
/* 80952118  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 8095211C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80952120  7D 89 03 A6 */	mtctr r12
/* 80952124  4E 80 04 21 */	bctrl 
lbl_80952128:
/* 80952128  38 60 00 01 */	li r3, 1
/* 8095212C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80952130  7C 08 03 A6 */	mtlr r0
/* 80952134  38 21 00 10 */	addi r1, r1, 0x10
/* 80952138  4E 80 00 20 */	blr 
