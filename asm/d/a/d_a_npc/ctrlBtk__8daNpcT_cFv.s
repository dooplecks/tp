lbl_801490D4:
/* 801490D4  80 A3 09 6C */	lwz r5, 0x96c(r3)
/* 801490D8  28 05 00 00 */	cmplwi r5, 0
/* 801490DC  41 82 00 AC */	beq lbl_80149188
/* 801490E0  88 03 0E 29 */	lbz r0, 0xe29(r3)
/* 801490E4  28 00 00 00 */	cmplwi r0, 0
/* 801490E8  41 82 00 7C */	beq lbl_80149164
/* 801490EC  80 03 06 58 */	lwz r0, 0x658(r3)
/* 801490F0  28 00 00 00 */	cmplwi r0, 0
/* 801490F4  41 82 00 70 */	beq lbl_80149164
/* 801490F8  A8 03 0C D6 */	lha r0, 0xcd6(r3)
/* 801490FC  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80149100  3C 80 80 44 */	lis r4, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80149104  38 84 9A 20 */	addi r4, r4, sincosTable___5JMath@l /* 0x80439A20@l */
/* 80149108  7C 24 04 2E */	lfsx f1, r4, r0
/* 8014910C  C0 03 0D E4 */	lfs f0, 0xde4(r3)
/* 80149110  EC 00 00 72 */	fmuls f0, f0, f1
/* 80149114  D0 05 00 FC */	stfs f0, 0xfc(r5)
/* 80149118  A8 03 0C D4 */	lha r0, 0xcd4(r3)
/* 8014911C  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80149120  7C 24 04 2E */	lfsx f1, r4, r0
/* 80149124  C0 03 0D E0 */	lfs f0, 0xde0(r3)
/* 80149128  EC 00 00 72 */	fmuls f0, f0, f1
/* 8014912C  80 83 09 6C */	lwz r4, 0x96c(r3)
/* 80149130  D0 04 01 00 */	stfs f0, 0x100(r4)
/* 80149134  88 03 0E 2A */	lbz r0, 0xe2a(r3)
/* 80149138  28 00 00 00 */	cmplwi r0, 0
/* 8014913C  41 82 00 14 */	beq lbl_80149150
/* 80149140  80 83 09 6C */	lwz r4, 0x96c(r3)
/* 80149144  98 04 01 05 */	stb r0, 0x105(r4)
/* 80149148  38 00 00 00 */	li r0, 0
/* 8014914C  98 03 0E 2A */	stb r0, 0xe2a(r3)
lbl_80149150:
/* 80149150  38 00 00 01 */	li r0, 1
/* 80149154  80 63 09 6C */	lwz r3, 0x96c(r3)
/* 80149158  98 03 01 04 */	stb r0, 0x104(r3)
/* 8014915C  38 60 00 01 */	li r3, 1
/* 80149160  4E 80 00 20 */	blr 
lbl_80149164:
/* 80149164  88 03 0E 2A */	lbz r0, 0xe2a(r3)
/* 80149168  28 00 00 00 */	cmplwi r0, 0
/* 8014916C  41 82 00 10 */	beq lbl_8014917C
/* 80149170  98 05 01 05 */	stb r0, 0x105(r5)
/* 80149174  38 00 00 00 */	li r0, 0
/* 80149178  98 03 0E 2A */	stb r0, 0xe2a(r3)
lbl_8014917C:
/* 8014917C  38 00 00 00 */	li r0, 0
/* 80149180  80 63 09 6C */	lwz r3, 0x96c(r3)
/* 80149184  98 03 01 04 */	stb r0, 0x104(r3)
lbl_80149188:
/* 80149188  38 60 00 00 */	li r3, 0
/* 8014918C  4E 80 00 20 */	blr 
