lbl_80264808:
/* 80264808  38 00 00 00 */	li r0, 0
/* 8026480C  90 04 00 00 */	stw r0, 0(r4)
/* 80264810  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 80264814  D0 04 00 04 */	stfs f0, 4(r4)
/* 80264818  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8026481C  D0 04 00 08 */	stfs f0, 8(r4)
/* 80264820  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 80264824  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 80264828  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 8026482C  D0 04 00 10 */	stfs f0, 0x10(r4)
/* 80264830  C0 02 B6 20 */	lfs f0, lit_2431(r2)
/* 80264834  D0 04 00 14 */	stfs f0, 0x14(r4)
/* 80264838  4E 80 00 20 */	blr 