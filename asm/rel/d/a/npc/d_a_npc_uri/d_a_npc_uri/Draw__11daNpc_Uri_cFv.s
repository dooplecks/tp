lbl_80B270E0:
/* 80B270E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80B270E4  7C 08 02 A6 */	mflr r0
/* 80B270E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80B270EC  39 61 00 20 */	addi r11, r1, 0x20
/* 80B270F0  4B 83 B0 ED */	bl _savegpr_29
/* 80B270F4  7C 7D 1B 78 */	mr r29, r3
/* 80B270F8  83 C3 09 6C */	lwz r30, 0x96c(r3)
/* 80B270FC  28 1E 00 00 */	cmplwi r30, 0
/* 80B27100  41 82 00 30 */	beq lbl_80B27130
/* 80B27104  80 9D 05 78 */	lwz r4, 0x578(r29)
/* 80B27108  80 84 00 04 */	lwz r4, 4(r4)
/* 80B2710C  83 E4 00 04 */	lwz r31, 4(r4)
/* 80B27110  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80B27114  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80B27118  7D 89 03 A6 */	mtctr r12
/* 80B2711C  4E 80 04 21 */	bctrl 
/* 80B27120  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 80B27124  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 80B27128  7C 64 00 2E */	lwzx r3, r4, r0
/* 80B2712C  93 C3 00 3C */	stw r30, 0x3c(r3)
lbl_80B27130:
/* 80B27130  7F A3 EB 78 */	mr r3, r29
/* 80B27134  38 80 00 00 */	li r4, 0
/* 80B27138  38 A0 00 00 */	li r5, 0
/* 80B2713C  C0 3D 0D E8 */	lfs f1, 0xde8(r29)
/* 80B27140  38 C0 00 00 */	li r6, 0
/* 80B27144  3C E0 80 B3 */	lis r7, lit_4427@ha /* 0x80B2CF00@ha */
/* 80B27148  C0 47 CF 00 */	lfs f2, lit_4427@l(r7)  /* 0x80B2CF00@l */
/* 80B2714C  38 E0 00 00 */	li r7, 0
/* 80B27150  39 00 00 00 */	li r8, 0
/* 80B27154  39 20 00 00 */	li r9, 0
/* 80B27158  4B 62 17 15 */	bl draw__8daNpcT_cFiifP11_GXColorS10fiii
/* 80B2715C  39 61 00 20 */	addi r11, r1, 0x20
/* 80B27160  4B 83 B0 C9 */	bl _restgpr_29
/* 80B27164  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80B27168  7C 08 03 A6 */	mtlr r0
/* 80B2716C  38 21 00 20 */	addi r1, r1, 0x20
/* 80B27170  4E 80 00 20 */	blr 
