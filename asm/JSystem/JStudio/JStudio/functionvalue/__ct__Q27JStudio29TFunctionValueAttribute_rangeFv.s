lbl_80281D18:
/* 80281D18  3C 80 80 45 */	lis r4, __float_nan@ha /* 0x80450AE0@ha */
/* 80281D1C  C0 04 0A E0 */	lfs f0, __float_nan@l(r4)  /* 0x80450AE0@l */
/* 80281D20  D8 03 00 00 */	stfd f0, 0(r3)
/* 80281D24  C8 03 00 00 */	lfd f0, 0(r3)
/* 80281D28  D8 03 00 08 */	stfd f0, 8(r3)
/* 80281D2C  C8 03 00 00 */	lfd f0, 0(r3)
/* 80281D30  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 80281D34  38 00 00 00 */	li r0, 0
/* 80281D38  98 03 00 18 */	stb r0, 0x18(r3)
/* 80281D3C  98 03 00 19 */	stb r0, 0x19(r3)
/* 80281D40  C8 03 00 00 */	lfd f0, 0(r3)
/* 80281D44  D8 03 00 20 */	stfd f0, 0x20(r3)
/* 80281D48  C8 03 00 00 */	lfd f0, 0(r3)
/* 80281D4C  D8 03 00 28 */	stfd f0, 0x28(r3)
/* 80281D50  90 03 00 30 */	stw r0, 0x30(r3)
/* 80281D54  90 03 00 34 */	stw r0, 0x34(r3)
/* 80281D58  4E 80 00 20 */	blr 
