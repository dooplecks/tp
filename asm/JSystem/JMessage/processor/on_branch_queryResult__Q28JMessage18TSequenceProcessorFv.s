lbl_802A86D4:
/* 802A86D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802A86D8  7C 08 02 A6 */	mflr r0
/* 802A86DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802A86E0  81 83 00 00 */	lwz r12, 0(r3)
/* 802A86E4  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 802A86E8  7D 89 03 A6 */	mtctr r12
/* 802A86EC  4E 80 04 21 */	bctrl 
/* 802A86F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802A86F4  7C 08 03 A6 */	mtlr r0
/* 802A86F8  38 21 00 10 */	addi r1, r1, 0x10
/* 802A86FC  4E 80 00 20 */	blr 