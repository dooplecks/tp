lbl_801F61FC:
/* 801F61FC  98 83 01 A9 */	stb r4, 0x1a9(r3)
/* 801F6200  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801F6204  40 82 00 18 */	bne lbl_801F621C
/* 801F6208  80 A3 01 A4 */	lwz r5, 0x1a4(r3)
/* 801F620C  80 A5 00 04 */	lwz r5, 4(r5)
/* 801F6210  88 05 00 B2 */	lbz r0, 0xb2(r5)
/* 801F6214  28 00 00 00 */	cmplwi r0, 0
/* 801F6218  41 82 00 3C */	beq lbl_801F6254
lbl_801F621C:
/* 801F621C  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 801F6220  28 00 00 01 */	cmplwi r0, 1
/* 801F6224  40 82 00 18 */	bne lbl_801F623C
/* 801F6228  80 83 01 A4 */	lwz r4, 0x1a4(r3)
/* 801F622C  80 84 00 04 */	lwz r4, 4(r4)
/* 801F6230  88 04 00 B2 */	lbz r0, 0xb2(r4)
/* 801F6234  28 00 00 FF */	cmplwi r0, 0xff
/* 801F6238  41 82 00 1C */	beq lbl_801F6254
lbl_801F623C:
/* 801F623C  38 00 00 00 */	li r0, 0
/* 801F6240  80 83 01 A4 */	lwz r4, 0x1a4(r3)
/* 801F6244  B0 04 00 16 */	sth r0, 0x16(r4)
/* 801F6248  80 63 01 98 */	lwz r3, 0x198(r3)
/* 801F624C  B0 03 00 16 */	sth r0, 0x16(r3)
/* 801F6250  4E 80 00 20 */	blr 
lbl_801F6254:
/* 801F6254  3C 80 80 43 */	lis r4, g_msHIO@ha /* 0x8042E84C@ha */
/* 801F6258  38 A4 E8 4C */	addi r5, r4, g_msHIO@l /* 0x8042E84C@l */
/* 801F625C  88 05 00 08 */	lbz r0, 8(r5)
/* 801F6260  80 83 01 A4 */	lwz r4, 0x1a4(r3)
/* 801F6264  B0 04 00 16 */	sth r0, 0x16(r4)
/* 801F6268  88 05 00 08 */	lbz r0, 8(r5)
/* 801F626C  80 63 01 98 */	lwz r3, 0x198(r3)
/* 801F6270  B0 03 00 16 */	sth r0, 0x16(r3)
/* 801F6274  4E 80 00 20 */	blr 
