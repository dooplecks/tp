lbl_802F83FC:
/* 802F83FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F8400  7C 08 02 A6 */	mflr r0
/* 802F8404  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F8408  81 83 00 00 */	lwz r12, 0(r3)
/* 802F840C  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 802F8410  7D 89 03 A6 */	mtctr r12
/* 802F8414  4E 80 04 21 */	bctrl 
/* 802F8418  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F841C  7C 08 03 A6 */	mtlr r0
/* 802F8420  38 21 00 10 */	addi r1, r1, 0x10
/* 802F8424  4E 80 00 20 */	blr 