lbl_807D248C:
/* 807D248C  3C 80 80 7E */	lis r4, lit_3882@ha /* 0x807E298C@ha */
/* 807D2490  38 A4 29 8C */	addi r5, r4, lit_3882@l /* 0x807E298C@l */
/* 807D2494  3C 80 80 7E */	lis r4, __vt__12daE_WB_HIO_c@ha /* 0x807E3560@ha */
/* 807D2498  38 04 35 60 */	addi r0, r4, __vt__12daE_WB_HIO_c@l /* 0x807E3560@l */
/* 807D249C  90 03 00 00 */	stw r0, 0(r3)
/* 807D24A0  38 00 FF FF */	li r0, -1
/* 807D24A4  98 03 00 04 */	stb r0, 4(r3)
/* 807D24A8  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 807D24AC  D0 03 00 08 */	stfs f0, 8(r3)
/* 807D24B0  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 807D24B4  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 807D24B8  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 807D24BC  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 807D24C0  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 807D24C4  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 807D24C8  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 807D24CC  C0 25 00 1C */	lfs f1, 0x1c(r5)
/* 807D24D0  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 807D24D4  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 807D24D8  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 807D24DC  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 807D24E0  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 807D24E4  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 807D24E8  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 807D24EC  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 807D24F0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 807D24F4  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 807D24F8  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 807D24FC  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 807D2500  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 807D2504  D0 23 00 34 */	stfs f1, 0x34(r3)
/* 807D2508  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 807D250C  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 807D2510  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 807D2514  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 807D2518  38 00 01 2C */	li r0, 0x12c
/* 807D251C  B0 03 00 44 */	sth r0, 0x44(r3)
/* 807D2520  C0 05 00 40 */	lfs f0, 0x40(r5)
/* 807D2524  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 807D2528  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 807D252C  C0 05 00 44 */	lfs f0, 0x44(r5)
/* 807D2530  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 807D2534  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 807D2538  38 00 00 00 */	li r0, 0
/* 807D253C  98 03 00 58 */	stb r0, 0x58(r3)
/* 807D2540  98 03 00 59 */	stb r0, 0x59(r3)
/* 807D2544  4E 80 00 20 */	blr 
