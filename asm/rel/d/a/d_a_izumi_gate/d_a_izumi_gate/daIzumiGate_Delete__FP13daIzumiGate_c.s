lbl_80849160:
/* 80849160  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80849164  7C 08 02 A6 */	mflr r0
/* 80849168  90 01 00 14 */	stw r0, 0x14(r1)
/* 8084916C  4B 82 F7 71 */	bl MoveBGDelete__16dBgS_MoveBgActorFv
/* 80849170  38 60 00 01 */	li r3, 1
/* 80849174  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80849178  7C 08 03 A6 */	mtlr r0
/* 8084917C  38 21 00 10 */	addi r1, r1, 0x10
/* 80849180  4E 80 00 20 */	blr 
