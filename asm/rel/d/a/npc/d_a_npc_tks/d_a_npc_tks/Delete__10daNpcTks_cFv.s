lbl_80B153D8:
/* 80B153D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B153DC  7C 08 02 A6 */	mflr r0
/* 80B153E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B153E4  38 80 FF FF */	li r4, -1
/* 80B153E8  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80B153EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80B153F0  7D 89 03 A6 */	mtctr r12
/* 80B153F4  4E 80 04 21 */	bctrl 
/* 80B153F8  38 60 00 01 */	li r3, 1
/* 80B153FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B15400  7C 08 03 A6 */	mtlr r0
/* 80B15404  38 21 00 10 */	addi r1, r1, 0x10
/* 80B15408  4E 80 00 20 */	blr 