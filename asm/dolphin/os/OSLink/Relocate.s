lbl_8033DF74:
/* 8033DF74  7C 08 02 A6 */	mflr r0
/* 8033DF78  90 01 00 04 */	stw r0, 4(r1)
/* 8033DF7C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8033DF80  BE E1 00 1C */	stmw r23, 0x1c(r1)
/* 8033DF84  7C 7A 1B 79 */	or. r26, r3, r3
/* 8033DF88  3B 64 00 00 */	addi r27, r4, 0
/* 8033DF8C  41 82 00 0C */	beq lbl_8033DF98
/* 8033DF90  83 FA 00 00 */	lwz r31, 0(r26)
/* 8033DF94  48 00 00 08 */	b lbl_8033DF9C
lbl_8033DF98:
/* 8033DF98  3B E0 00 00 */	li r31, 0
lbl_8033DF9C:
/* 8033DF9C  80 7B 00 28 */	lwz r3, 0x28(r27)
/* 8033DFA0  80 1B 00 2C */	lwz r0, 0x2c(r27)
/* 8033DFA4  38 83 00 00 */	addi r4, r3, 0
/* 8033DFA8  7C 63 02 14 */	add r3, r3, r0
/* 8033DFAC  38 03 00 07 */	addi r0, r3, 7
/* 8033DFB0  7C 04 00 50 */	subf r0, r4, r0
/* 8033DFB4  54 00 E8 FE */	srwi r0, r0, 3
/* 8033DFB8  7C 04 18 40 */	cmplw r4, r3
/* 8033DFBC  7C 09 03 A6 */	mtctr r0
/* 8033DFC0  40 80 00 18 */	bge lbl_8033DFD8
lbl_8033DFC4:
/* 8033DFC4  80 04 00 00 */	lwz r0, 0(r4)
/* 8033DFC8  7C 00 F8 40 */	cmplw r0, r31
/* 8033DFCC  41 82 00 14 */	beq lbl_8033DFE0
/* 8033DFD0  38 84 00 08 */	addi r4, r4, 8
/* 8033DFD4  42 00 FF F0 */	bdnz lbl_8033DFC4
lbl_8033DFD8:
/* 8033DFD8  38 60 00 00 */	li r3, 0
/* 8033DFDC  48 00 02 40 */	b lbl_8033E21C
lbl_8033DFE0:
/* 8033DFE0  3C 60 80 3D */	lis r3, lit_62@ha /* 0x803D0788@ha */
/* 8033DFE4  83 C4 00 04 */	lwz r30, 4(r4)
/* 8033DFE8  3B 23 07 88 */	addi r25, r3, lit_62@l /* 0x803D0788@l */
/* 8033DFEC  3B A0 00 00 */	li r29, 0
/* 8033DFF0  48 00 01 F4 */	b lbl_8033E1E4
lbl_8033DFF4:
/* 8033DFF4  A0 1E 00 00 */	lhz r0, 0(r30)
/* 8033DFF8  28 1F 00 00 */	cmplwi r31, 0
/* 8033DFFC  7F 9C 02 14 */	add r28, r28, r0
/* 8033E000  41 82 00 1C */	beq lbl_8033E01C
/* 8033E004  88 1E 00 03 */	lbz r0, 3(r30)
/* 8033E008  80 7A 00 10 */	lwz r3, 0x10(r26)
/* 8033E00C  54 00 18 38 */	slwi r0, r0, 3
/* 8033E010  7C 03 00 2E */	lwzx r0, r3, r0
/* 8033E014  54 05 00 3C */	rlwinm r5, r0, 0, 0, 0x1e
/* 8033E018  48 00 00 08 */	b lbl_8033E020
lbl_8033E01C:
/* 8033E01C  38 A0 00 00 */	li r5, 0
lbl_8033E020:
/* 8033E020  2C 04 00 06 */	cmpwi r4, 6
/* 8033E024  41 82 00 C4 */	beq lbl_8033E0E8
/* 8033E028  40 80 00 30 */	bge lbl_8033E058
/* 8033E02C  2C 04 00 02 */	cmpwi r4, 2
/* 8033E030  41 82 00 68 */	beq lbl_8033E098
/* 8033E034  40 80 00 14 */	bge lbl_8033E048
/* 8033E038  2C 04 00 00 */	cmpwi r4, 0
/* 8033E03C  41 82 01 A4 */	beq lbl_8033E1E0
/* 8033E040  40 80 00 48 */	bge lbl_8033E088
/* 8033E044  48 00 01 90 */	b lbl_8033E1D4
lbl_8033E048:
/* 8033E048  2C 04 00 04 */	cmpwi r4, 4
/* 8033E04C  41 82 00 78 */	beq lbl_8033E0C4
/* 8033E050  40 80 00 84 */	bge lbl_8033E0D4
/* 8033E054  48 00 00 60 */	b lbl_8033E0B4
lbl_8033E058:
/* 8033E058  2C 04 00 C9 */	cmpwi r4, 0xc9
/* 8033E05C  41 82 01 84 */	beq lbl_8033E1E0
/* 8033E060  40 80 00 1C */	bge lbl_8033E07C
/* 8033E064  2C 04 00 0A */	cmpwi r4, 0xa
/* 8033E068  41 82 00 C8 */	beq lbl_8033E130
/* 8033E06C  41 80 00 A8 */	blt lbl_8033E114
/* 8033E070  2C 04 00 0E */	cmpwi r4, 0xe
/* 8033E074  40 80 01 60 */	bge lbl_8033E1D4
/* 8033E078  48 00 00 D8 */	b lbl_8033E150
lbl_8033E07C:
/* 8033E07C  2C 04 00 CB */	cmpwi r4, 0xcb
/* 8033E080  40 80 01 54 */	bge lbl_8033E1D4
/* 8033E084  48 00 00 EC */	b lbl_8033E170
lbl_8033E088:
/* 8033E088  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E08C  7C 05 02 14 */	add r0, r5, r0
/* 8033E090  90 1C 00 00 */	stw r0, 0(r28)
/* 8033E094  48 00 01 4C */	b lbl_8033E1E0
lbl_8033E098:
/* 8033E098  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E09C  80 7C 00 00 */	lwz r3, 0(r28)
/* 8033E0A0  7C 05 02 14 */	add r0, r5, r0
/* 8033E0A4  54 63 07 8A */	rlwinm r3, r3, 0, 0x1e, 5
/* 8033E0A8  50 03 01 BA */	rlwimi r3, r0, 0, 6, 0x1d
/* 8033E0AC  90 7C 00 00 */	stw r3, 0(r28)
/* 8033E0B0  48 00 01 30 */	b lbl_8033E1E0
lbl_8033E0B4:
/* 8033E0B4  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E0B8  7C 05 02 14 */	add r0, r5, r0
/* 8033E0BC  B0 1C 00 00 */	sth r0, 0(r28)
/* 8033E0C0  48 00 01 20 */	b lbl_8033E1E0
lbl_8033E0C4:
/* 8033E0C4  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E0C8  7C 05 02 14 */	add r0, r5, r0
/* 8033E0CC  B0 1C 00 00 */	sth r0, 0(r28)
/* 8033E0D0  48 00 01 10 */	b lbl_8033E1E0
lbl_8033E0D4:
/* 8033E0D4  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E0D8  7C 05 02 14 */	add r0, r5, r0
/* 8033E0DC  54 00 84 3E */	srwi r0, r0, 0x10
/* 8033E0E0  B0 1C 00 00 */	sth r0, 0(r28)
/* 8033E0E4  48 00 00 FC */	b lbl_8033E1E0
lbl_8033E0E8:
/* 8033E0E8  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E0EC  7C 85 02 14 */	add r4, r5, r0
/* 8033E0F0  54 80 04 21 */	rlwinm. r0, r4, 0, 0x10, 0x10
/* 8033E0F4  41 82 00 0C */	beq lbl_8033E100
/* 8033E0F8  38 60 00 01 */	li r3, 1
/* 8033E0FC  48 00 00 08 */	b lbl_8033E104
lbl_8033E100:
/* 8033E100  38 60 00 00 */	li r3, 0
lbl_8033E104:
/* 8033E104  54 80 84 3E */	srwi r0, r4, 0x10
/* 8033E108  7C 00 1A 14 */	add r0, r0, r3
/* 8033E10C  B0 1C 00 00 */	sth r0, 0(r28)
/* 8033E110  48 00 00 D0 */	b lbl_8033E1E0
lbl_8033E114:
/* 8033E114  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E118  80 7C 00 00 */	lwz r3, 0(r28)
/* 8033E11C  7C 05 02 14 */	add r0, r5, r0
/* 8033E120  54 63 07 9E */	rlwinm r3, r3, 0, 0x1e, 0xf
/* 8033E124  50 03 04 3A */	rlwimi r3, r0, 0, 0x10, 0x1d
/* 8033E128  90 7C 00 00 */	stw r3, 0(r28)
/* 8033E12C  48 00 00 B4 */	b lbl_8033E1E0
lbl_8033E130:
/* 8033E130  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E134  80 7C 00 00 */	lwz r3, 0(r28)
/* 8033E138  7C 05 02 14 */	add r0, r5, r0
/* 8033E13C  7C 1C 00 50 */	subf r0, r28, r0
/* 8033E140  54 63 07 8A */	rlwinm r3, r3, 0, 0x1e, 5
/* 8033E144  50 03 01 BA */	rlwimi r3, r0, 0, 6, 0x1d
/* 8033E148  90 7C 00 00 */	stw r3, 0(r28)
/* 8033E14C  48 00 00 94 */	b lbl_8033E1E0
lbl_8033E150:
/* 8033E150  80 1E 00 04 */	lwz r0, 4(r30)
/* 8033E154  80 7C 00 00 */	lwz r3, 0(r28)
/* 8033E158  7C 05 02 14 */	add r0, r5, r0
/* 8033E15C  7C 1C 00 50 */	subf r0, r28, r0
/* 8033E160  54 63 07 9E */	rlwinm r3, r3, 0, 0x1e, 0xf
/* 8033E164  50 03 04 3A */	rlwimi r3, r0, 0, 0x10, 0x1d
/* 8033E168  90 7C 00 00 */	stw r3, 0(r28)
/* 8033E16C  48 00 00 74 */	b lbl_8033E1E0
lbl_8033E170:
/* 8033E170  88 1E 00 03 */	lbz r0, 3(r30)
/* 8033E174  28 1D 00 00 */	cmplwi r29, 0
/* 8033E178  80 7B 00 10 */	lwz r3, 0x10(r27)
/* 8033E17C  54 00 18 38 */	slwi r0, r0, 3
/* 8033E180  7C 63 02 14 */	add r3, r3, r0
/* 8033E184  80 03 00 00 */	lwz r0, 0(r3)
/* 8033E188  3A E3 00 00 */	addi r23, r3, 0
/* 8033E18C  54 1C 00 3C */	rlwinm r28, r0, 0, 0, 0x1e
/* 8033E190  41 82 00 24 */	beq lbl_8033E1B4
/* 8033E194  80 1D 00 00 */	lwz r0, 0(r29)
/* 8033E198  80 9D 00 04 */	lwz r4, 4(r29)
/* 8033E19C  54 18 00 3C */	rlwinm r24, r0, 0, 0, 0x1e
/* 8033E1A0  38 78 00 00 */	addi r3, r24, 0
/* 8033E1A4  4B FF D4 09 */	bl DCFlushRange
/* 8033E1A8  7F 03 C3 78 */	mr r3, r24
/* 8033E1AC  80 9D 00 04 */	lwz r4, 4(r29)
/* 8033E1B0  4B FF D4 E1 */	bl ICInvalidateRange
lbl_8033E1B4:
/* 8033E1B4  80 17 00 00 */	lwz r0, 0(r23)
/* 8033E1B8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8033E1BC  41 82 00 0C */	beq lbl_8033E1C8
/* 8033E1C0  7E E0 BB 78 */	mr r0, r23
/* 8033E1C4  48 00 00 08 */	b lbl_8033E1CC
lbl_8033E1C8:
/* 8033E1C8  38 00 00 00 */	li r0, 0
lbl_8033E1CC:
/* 8033E1CC  7C 1D 03 78 */	mr r29, r0
/* 8033E1D0  48 00 00 10 */	b lbl_8033E1E0
lbl_8033E1D4:
/* 8033E1D4  38 79 00 00 */	addi r3, r25, 0
/* 8033E1D8  4C C6 31 82 */	crclr 6
/* 8033E1DC  4B CC 88 E1 */	bl OSReport
lbl_8033E1E0:
/* 8033E1E0  3B DE 00 08 */	addi r30, r30, 8
lbl_8033E1E4:
/* 8033E1E4  88 9E 00 02 */	lbz r4, 2(r30)
/* 8033E1E8  28 04 00 CB */	cmplwi r4, 0xcb
/* 8033E1EC  40 82 FE 08 */	bne lbl_8033DFF4
/* 8033E1F0  28 1D 00 00 */	cmplwi r29, 0
/* 8033E1F4  41 82 00 24 */	beq lbl_8033E218
/* 8033E1F8  80 1D 00 00 */	lwz r0, 0(r29)
/* 8033E1FC  80 9D 00 04 */	lwz r4, 4(r29)
/* 8033E200  54 19 00 3C */	rlwinm r25, r0, 0, 0, 0x1e
/* 8033E204  38 79 00 00 */	addi r3, r25, 0
/* 8033E208  4B FF D3 A5 */	bl DCFlushRange
/* 8033E20C  7F 23 CB 78 */	mr r3, r25
/* 8033E210  80 9D 00 04 */	lwz r4, 4(r29)
/* 8033E214  4B FF D4 7D */	bl ICInvalidateRange
lbl_8033E218:
/* 8033E218  38 60 00 01 */	li r3, 1
lbl_8033E21C:
/* 8033E21C  BA E1 00 1C */	lmw r23, 0x1c(r1)
/* 8033E220  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8033E224  38 21 00 40 */	addi r1, r1, 0x40
/* 8033E228  7C 08 03 A6 */	mtlr r0
/* 8033E22C  4E 80 00 20 */	blr 
