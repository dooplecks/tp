lbl_8035F37C:
/* 8035F37C  54 66 08 3C */	slwi r6, r3, 1
/* 8035F380  81 04 00 00 */	lwz r8, 0(r4)
/* 8035F384  38 86 00 E0 */	addi r4, r6, 0xe0
/* 8035F388  80 62 CB 80 */	lwz r3, __GXData(r2)
/* 8035F38C  54 87 C0 0E */	slwi r7, r4, 0x18
/* 8035F390  38 A0 00 61 */	li r5, 0x61
/* 8035F394  3C 80 CC 01 */	lis r4, 0xCC01 /* 0xCC008000@ha */
/* 8035F398  51 07 46 3E */	rlwimi r7, r8, 8, 0x18, 0x1f
/* 8035F39C  98 A4 80 00 */	stb r5, 0x8000(r4)  /* 0xCC008000@l */
/* 8035F3A0  51 07 63 26 */	rlwimi r7, r8, 0xc, 0xc, 0x13
/* 8035F3A4  90 E4 80 00 */	stw r7, -0x8000(r4)
/* 8035F3A8  38 C6 00 E1 */	addi r6, r6, 0xe1
/* 8035F3AC  54 C6 C0 0E */	slwi r6, r6, 0x18
/* 8035F3B0  51 06 C6 3E */	rlwimi r6, r8, 0x18, 0x18, 0x1f
/* 8035F3B4  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 8035F3B8  51 06 E3 26 */	rlwimi r6, r8, 0x1c, 0xc, 0x13
/* 8035F3BC  90 C4 80 00 */	stw r6, -0x8000(r4)
/* 8035F3C0  38 00 00 00 */	li r0, 0
/* 8035F3C4  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 8035F3C8  90 C4 80 00 */	stw r6, -0x8000(r4)
/* 8035F3CC  98 A4 80 00 */	stb r5, -0x8000(r4)
/* 8035F3D0  90 C4 80 00 */	stw r6, -0x8000(r4)
/* 8035F3D4  B0 03 00 02 */	sth r0, 2(r3)
/* 8035F3D8  4E 80 00 20 */	blr 
