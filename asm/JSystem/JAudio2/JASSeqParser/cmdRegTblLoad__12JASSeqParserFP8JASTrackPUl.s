lbl_80294FB4:
/* 80294FB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80294FB8  7C 08 02 A6 */	mflr r0
/* 80294FBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80294FC0  80 E5 00 04 */	lwz r7, 4(r5)
/* 80294FC4  80 C5 00 08 */	lwz r6, 8(r5)
/* 80294FC8  81 05 00 0C */	lwz r8, 0xc(r5)
/* 80294FCC  80 05 00 00 */	lwz r0, 0(r5)
/* 80294FD0  2C 00 00 0E */	cmpwi r0, 0xe
/* 80294FD4  41 82 00 4C */	beq lbl_80295020
/* 80294FD8  40 80 00 14 */	bge lbl_80294FEC
/* 80294FDC  2C 00 00 0C */	cmpwi r0, 0xc
/* 80294FE0  41 82 00 1C */	beq lbl_80294FFC
/* 80294FE4  40 80 00 28 */	bge lbl_8029500C
/* 80294FE8  48 00 00 7C */	b lbl_80295064
lbl_80294FEC:
/* 80294FEC  2C 00 00 10 */	cmpwi r0, 0x10
/* 80294FF0  41 82 00 64 */	beq lbl_80295054
/* 80294FF4  40 80 00 70 */	bge lbl_80295064
/* 80294FF8  48 00 00 48 */	b lbl_80295040
lbl_80294FFC:
/* 80294FFC  80 A4 00 00 */	lwz r5, 0(r4)
/* 80295000  7C 06 42 14 */	add r0, r6, r8
/* 80295004  7C C5 00 AE */	lbzx r6, r5, r0
/* 80295008  48 00 00 64 */	b lbl_8029506C
lbl_8029500C:
/* 8029500C  80 A4 00 00 */	lwz r5, 0(r4)
/* 80295010  55 00 08 3C */	slwi r0, r8, 1
/* 80295014  7C 00 2A 14 */	add r0, r0, r5
/* 80295018  7C C6 02 2E */	lhzx r6, r6, r0
/* 8029501C  48 00 00 50 */	b lbl_8029506C
lbl_80295020:
/* 80295020  55 00 08 3C */	slwi r0, r8, 1
/* 80295024  7D 08 02 14 */	add r8, r8, r0
/* 80295028  80 04 00 00 */	lwz r0, 0(r4)
/* 8029502C  7C A8 02 14 */	add r5, r8, r0
/* 80295030  38 05 FF FF */	addi r0, r5, -1
/* 80295034  7C 06 00 2E */	lwzx r0, r6, r0
/* 80295038  54 06 02 3E */	clrlwi r6, r0, 8
/* 8029503C  48 00 00 30 */	b lbl_8029506C
lbl_80295040:
/* 80295040  80 A4 00 00 */	lwz r5, 0(r4)
/* 80295044  55 00 10 3A */	slwi r0, r8, 2
/* 80295048  7C 00 2A 14 */	add r0, r0, r5
/* 8029504C  7C C6 00 2E */	lwzx r6, r6, r0
/* 80295050  48 00 00 1C */	b lbl_8029506C
lbl_80295054:
/* 80295054  80 04 00 00 */	lwz r0, 0(r4)
/* 80295058  7C 08 02 14 */	add r0, r8, r0
/* 8029505C  7C C6 00 2E */	lwzx r6, r6, r0
/* 80295060  48 00 00 0C */	b lbl_8029506C
lbl_80295064:
/* 80295064  38 60 00 00 */	li r3, 0
/* 80295068  48 00 00 10 */	b lbl_80295078
lbl_8029506C:
/* 8029506C  7C E5 3B 78 */	mr r5, r7
/* 80295070  4B FF ED 55 */	bl writeReg__12JASSeqParserFP8JASTrackUlUl
/* 80295074  38 60 00 00 */	li r3, 0
lbl_80295078:
/* 80295078  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029507C  7C 08 03 A6 */	mtlr r0
/* 80295080  38 21 00 10 */	addi r1, r1, 0x10
/* 80295084  4E 80 00 20 */	blr 