lbl_8067916C:
/* 8067916C  3C 80 80 68 */	lis r4, lit_3789@ha /* 0x8067C3FC@ha */
/* 80679170  38 A4 C3 FC */	addi r5, r4, lit_3789@l /* 0x8067C3FC@l */
/* 80679174  3C 80 80 68 */	lis r4, __vt__12daE_AI_HIO_c@ha /* 0x8067C684@ha */
/* 80679178  38 04 C6 84 */	addi r0, r4, __vt__12daE_AI_HIO_c@l /* 0x8067C684@l */
/* 8067917C  90 03 00 00 */	stw r0, 0(r3)
/* 80679180  38 00 FF FF */	li r0, -1
/* 80679184  98 03 00 04 */	stb r0, 4(r3)
/* 80679188  C0 05 00 08 */	lfs f0, 8(r5)
/* 8067918C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80679190  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 80679194  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80679198  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 8067919C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 806791A0  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 806791A4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 806791A8  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 806791AC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 806791B0  C0 05 00 04 */	lfs f0, 4(r5)
/* 806791B4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 806791B8  4E 80 00 20 */	blr 
