lbl_80946000:
/* 80946000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80946004  7C 08 02 A6 */	mflr r0
/* 80946008  90 01 00 14 */	stw r0, 0x14(r1)
/* 8094600C  2C 04 00 00 */	cmpwi r4, 0
/* 80946010  41 82 00 20 */	beq lbl_80946030
/* 80946014  38 00 00 05 */	li r0, 5
/* 80946018  B0 03 09 16 */	sth r0, 0x916(r3)
/* 8094601C  38 80 00 0D */	li r4, 0xd
/* 80946020  3C A0 80 95 */	lis r5, lit_3926@ha /* 0x8094B1F0@ha */
/* 80946024  C0 25 B1 F0 */	lfs f1, lit_3926@l(r5)  /* 0x8094B1F0@l */
/* 80946028  48 00 40 2D */	bl setAnimeType__8daMyna_cFUcf
/* 8094602C  48 00 00 20 */	b lbl_8094604C
lbl_80946030:
/* 80946030  A0 03 09 1E */	lhz r0, 0x91e(r3)
/* 80946034  28 00 00 00 */	cmplwi r0, 0
/* 80946038  41 82 00 14 */	beq lbl_8094604C
/* 8094603C  38 80 00 0E */	li r4, 0xe
/* 80946040  3C A0 80 95 */	lis r5, lit_3926@ha /* 0x8094B1F0@ha */
/* 80946044  C0 25 B1 F0 */	lfs f1, lit_3926@l(r5)  /* 0x8094B1F0@l */
/* 80946048  48 00 40 0D */	bl setAnimeType__8daMyna_cFUcf
lbl_8094604C:
/* 8094604C  38 60 00 01 */	li r3, 1
/* 80946050  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80946054  7C 08 03 A6 */	mtlr r0
/* 80946058  38 21 00 10 */	addi r1, r1, 0x10
/* 8094605C  4E 80 00 20 */	blr 