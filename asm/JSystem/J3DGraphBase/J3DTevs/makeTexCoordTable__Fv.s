lbl_80324194:
/* 80324194  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80324198  3C 60 80 3A */	lis r3, lit_1197@ha /* 0x803A1FF8@ha */
/* 8032419C  38 83 1F F8 */	addi r4, r3, lit_1197@l /* 0x803A1FF8@l */
/* 803241A0  80 64 00 00 */	lwz r3, 0(r4)
/* 803241A4  80 04 00 04 */	lwz r0, 4(r4)
/* 803241A8  90 61 00 08 */	stw r3, 8(r1)
/* 803241AC  90 01 00 0C */	stw r0, 0xc(r1)
/* 803241B0  A0 04 00 08 */	lhz r0, 8(r4)
/* 803241B4  B0 01 00 10 */	sth r0, 0x10(r1)
/* 803241B8  88 04 00 0A */	lbz r0, 0xa(r4)
/* 803241BC  98 01 00 12 */	stb r0, 0x12(r1)
/* 803241C0  3C 60 80 43 */	lis r3, j3dTexCoordTable@ha /* 0x80434C98@ha */
/* 803241C4  38 C3 4C 98 */	addi r6, r3, j3dTexCoordTable@l /* 0x80434C98@l */
/* 803241C8  39 20 00 00 */	li r9, 0
/* 803241CC  38 60 00 00 */	li r3, 0
lbl_803241D0:
/* 803241D0  39 40 00 00 */	li r10, 0
/* 803241D4  38 80 00 00 */	li r4, 0
lbl_803241D8:
/* 803241D8  39 60 00 00 */	li r11, 0
/* 803241DC  7C E4 1A 14 */	add r7, r4, r3
/* 803241E0  38 A1 00 08 */	addi r5, r1, 8
/* 803241E4  38 00 00 0B */	li r0, 0xb
/* 803241E8  7C 09 03 A6 */	mtctr r0
lbl_803241EC:
/* 803241EC  7C 0B 3A 14 */	add r0, r11, r7
/* 803241F0  1C 00 00 03 */	mulli r0, r0, 3
/* 803241F4  7D 06 02 14 */	add r8, r6, r0
/* 803241F8  99 28 00 00 */	stb r9, 0(r8)
/* 803241FC  99 48 00 01 */	stb r10, 1(r8)
/* 80324200  88 05 00 00 */	lbz r0, 0(r5)
/* 80324204  98 08 00 02 */	stb r0, 2(r8)
/* 80324208  39 6B 00 01 */	addi r11, r11, 1
/* 8032420C  38 A5 00 01 */	addi r5, r5, 1
/* 80324210  42 00 FF DC */	bdnz lbl_803241EC
/* 80324214  39 4A 00 01 */	addi r10, r10, 1
/* 80324218  28 0A 00 15 */	cmplwi r10, 0x15
/* 8032421C  38 84 00 0B */	addi r4, r4, 0xb
/* 80324220  41 80 FF B8 */	blt lbl_803241D8
/* 80324224  39 29 00 01 */	addi r9, r9, 1
/* 80324228  28 09 00 0B */	cmplwi r9, 0xb
/* 8032422C  38 63 00 E7 */	addi r3, r3, 0xe7
/* 80324230  41 80 FF A0 */	blt lbl_803241D0
/* 80324234  38 21 00 20 */	addi r1, r1, 0x20
/* 80324238  4E 80 00 20 */	blr 
