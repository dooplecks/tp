lbl_808415B4:
/* 808415B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 808415B8  7C 08 02 A6 */	mflr r0
/* 808415BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 808415C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 808415C4  3B E0 00 00 */	li r31, 0
/* 808415C8  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 808415CC  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 808415D0  88 04 4F AD */	lbz r0, 0x4fad(r4)
/* 808415D4  28 00 00 00 */	cmplwi r0, 0
/* 808415D8  40 82 00 38 */	bne lbl_80841610
/* 808415DC  80 63 17 44 */	lwz r3, 0x1744(r3)
/* 808415E0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 808415E4  41 82 00 2C */	beq lbl_80841610
/* 808415E8  54 60 02 97 */	rlwinm. r0, r3, 0, 0xa, 0xb
/* 808415EC  40 82 00 24 */	bne lbl_80841610
/* 808415F0  80 64 5D B4 */	lwz r3, 0x5db4(r4)
/* 808415F4  81 83 06 28 */	lwz r12, 0x628(r3)
/* 808415F8  81 8C 02 80 */	lwz r12, 0x280(r12)
/* 808415FC  7D 89 03 A6 */	mtctr r12
/* 80841600  4E 80 04 21 */	bctrl 
/* 80841604  2C 03 00 00 */	cmpwi r3, 0
/* 80841608  41 82 00 08 */	beq lbl_80841610
/* 8084160C  3B E0 00 01 */	li r31, 1
lbl_80841610:
/* 80841610  57 E3 06 3E */	clrlwi r3, r31, 0x18
/* 80841614  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80841618  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8084161C  7C 08 03 A6 */	mtlr r0
/* 80841620  38 21 00 10 */	addi r1, r1, 0x10
/* 80841624  4E 80 00 20 */	blr 
