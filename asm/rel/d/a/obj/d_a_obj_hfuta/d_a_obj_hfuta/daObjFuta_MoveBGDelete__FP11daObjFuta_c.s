lbl_80C1EDFC:
/* 80C1EDFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C1EE00  7C 08 02 A6 */	mflr r0
/* 80C1EE04  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C1EE08  4B 45 9A D5 */	bl MoveBGDelete__16dBgS_MoveBgActorFv
/* 80C1EE0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C1EE10  7C 08 03 A6 */	mtlr r0
/* 80C1EE14  38 21 00 10 */	addi r1, r1, 0x10
/* 80C1EE18  4E 80 00 20 */	blr 
