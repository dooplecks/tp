lbl_8079222C:
/* 8079222C  3C 80 80 7A */	lis r4, __vt__12daE_Sm_HIO_c@ha /* 0x80798968@ha */
/* 80792230  38 04 89 68 */	addi r0, r4, __vt__12daE_Sm_HIO_c@l /* 0x80798968@l */
/* 80792234  90 03 00 00 */	stw r0, 0(r3)
/* 80792238  38 00 FF FF */	li r0, -1
/* 8079223C  98 03 00 04 */	stb r0, 4(r3)
/* 80792240  3C 80 80 7A */	lis r4, lit_3922@ha /* 0x807985E8@ha */
/* 80792244  C0 24 85 E8 */	lfs f1, lit_3922@l(r4)  /* 0x807985E8@l */
/* 80792248  D0 23 00 08 */	stfs f1, 8(r3)
/* 8079224C  3C 80 80 7A */	lis r4, lit_3941@ha /* 0x8079860C@ha */
/* 80792250  C0 04 86 0C */	lfs f0, lit_3941@l(r4)  /* 0x8079860C@l */
/* 80792254  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80792258  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8079225C  4E 80 00 20 */	blr 
