lbl_805BA250:
/* 805BA250  C0 04 00 00 */	lfs f0, 0(r4)
/* 805BA254  D0 03 00 00 */	stfs f0, 0(r3)
/* 805BA258  C0 04 00 04 */	lfs f0, 4(r4)
/* 805BA25C  D0 03 00 04 */	stfs f0, 4(r3)
/* 805BA260  C0 04 00 08 */	lfs f0, 8(r4)
/* 805BA264  D0 03 00 08 */	stfs f0, 8(r3)
/* 805BA268  4E 80 00 20 */	blr 