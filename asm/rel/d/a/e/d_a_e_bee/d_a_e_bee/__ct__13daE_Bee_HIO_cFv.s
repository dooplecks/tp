lbl_8068286C:
/* 8068286C  3C 80 80 68 */	lis r4, __vt__13daE_Bee_HIO_c@ha /* 0x80685624@ha */
/* 80682870  38 04 56 24 */	addi r0, r4, __vt__13daE_Bee_HIO_c@l /* 0x80685624@l */
/* 80682874  90 03 00 00 */	stw r0, 0(r3)
/* 80682878  38 00 FF FF */	li r0, -1
/* 8068287C  98 03 00 04 */	stb r0, 4(r3)
/* 80682880  3C 80 80 68 */	lis r4, lit_3770@ha /* 0x80685434@ha */
/* 80682884  C0 04 54 34 */	lfs f0, lit_3770@l(r4)  /* 0x80685434@l */
/* 80682888  D0 03 00 08 */	stfs f0, 8(r3)
/* 8068288C  38 00 00 00 */	li r0, 0
/* 80682890  98 03 00 0C */	stb r0, 0xc(r3)
/* 80682894  98 03 00 0D */	stb r0, 0xd(r3)
/* 80682898  4E 80 00 20 */	blr 
