lbl_80489E18:
/* 80489E18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80489E1C  7C 08 02 A6 */	mflr r0
/* 80489E20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80489E24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80489E28  93 C1 00 08 */	stw r30, 8(r1)
/* 80489E2C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80489E30  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80489E34  83 C3 5D B8 */	lwz r30, 0x5db8(r3)
/* 80489E38  3B E0 00 00 */	li r31, 0
/* 80489E3C  3C 60 80 49 */	lis r3, data_8048A670@ha /* 0x8048A670@ha */
/* 80489E40  38 63 A6 70 */	addi r3, r3, data_8048A670@l /* 0x8048A670@l */
/* 80489E44  80 63 00 00 */	lwz r3, 0(r3)
/* 80489E48  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80489E4C  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 80489E50  7D 89 03 A6 */	mtctr r12
/* 80489E54  4E 80 04 21 */	bctrl 
/* 80489E58  28 03 00 00 */	cmplwi r3, 0
/* 80489E5C  41 82 00 14 */	beq lbl_80489E70
/* 80489E60  80 1E 17 44 */	lwz r0, 0x1744(r30)
/* 80489E64  54 00 00 01 */	rlwinm. r0, r0, 0, 0, 0
/* 80489E68  41 82 00 08 */	beq lbl_80489E70
/* 80489E6C  3B E0 00 01 */	li r31, 1
lbl_80489E70:
/* 80489E70  7F E3 FB 78 */	mr r3, r31
/* 80489E74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80489E78  83 C1 00 08 */	lwz r30, 8(r1)
/* 80489E7C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80489E80  7C 08 03 A6 */	mtlr r0
/* 80489E84  38 21 00 10 */	addi r1, r1, 0x10
/* 80489E88  4E 80 00 20 */	blr 