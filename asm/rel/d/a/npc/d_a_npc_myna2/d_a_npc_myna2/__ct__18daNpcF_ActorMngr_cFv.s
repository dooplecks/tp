lbl_80A87A70:
/* 80A87A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A87A74  7C 08 02 A6 */	mflr r0
/* 80A87A78  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A87A7C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A87A80  7C 7F 1B 78 */	mr r31, r3
/* 80A87A84  3C 80 80 A9 */	lis r4, __vt__18daNpcF_ActorMngr_c@ha /* 0x80A88AB0@ha */
/* 80A87A88  38 04 8A B0 */	addi r0, r4, __vt__18daNpcF_ActorMngr_c@l /* 0x80A88AB0@l */
/* 80A87A8C  90 03 00 04 */	stw r0, 4(r3)
/* 80A87A90  4B 6C 8C 21 */	bl initialize__18daNpcF_ActorMngr_cFv
/* 80A87A94  7F E3 FB 78 */	mr r3, r31
/* 80A87A98  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A87A9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A87AA0  7C 08 03 A6 */	mtlr r0
/* 80A87AA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80A87AA8  4E 80 00 20 */	blr 
