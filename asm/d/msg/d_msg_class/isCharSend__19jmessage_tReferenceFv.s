lbl_8022986C:
/* 8022986C  88 03 12 46 */	lbz r0, 0x1246(r3)
/* 80229870  28 00 00 08 */	cmplwi r0, 8
/* 80229874  40 82 00 18 */	bne lbl_8022988C
/* 80229878  3C 80 80 43 */	lis r4, g_MsgObject_HIO_c@ha /* 0x8043028C@ha */
/* 8022987C  38 84 02 8C */	addi r4, r4, g_MsgObject_HIO_c@l /* 0x8043028C@l */
/* 80229880  A8 84 03 1C */	lha r4, 0x31c(r4)
/* 80229884  7C 85 23 78 */	mr r5, r4
/* 80229888  48 00 00 14 */	b lbl_8022989C
lbl_8022988C:
/* 8022988C  3C 80 80 43 */	lis r4, g_MsgObject_HIO_c@ha /* 0x8043028C@ha */
/* 80229890  38 84 02 8C */	addi r4, r4, g_MsgObject_HIO_c@l /* 0x8043028C@l */
/* 80229894  A8 84 03 1A */	lha r4, 0x31a(r4)
/* 80229898  7C 85 23 78 */	mr r5, r4
lbl_8022989C:
/* 8022989C  7C A0 07 35 */	extsh. r0, r5
/* 802298A0  40 80 00 0C */	bge lbl_802298AC
/* 802298A4  1C 05 FF FF */	mulli r0, r5, -1
/* 802298A8  7C 05 07 34 */	extsh r5, r0
lbl_802298AC:
/* 802298AC  7C 80 07 35 */	extsh. r0, r4
/* 802298B0  40 80 00 24 */	bge lbl_802298D4
/* 802298B4  88 83 05 DD */	lbz r4, 0x5dd(r3)
/* 802298B8  7C A0 07 34 */	extsh r0, r5
/* 802298BC  7C 63 02 14 */	add r3, r3, r0
/* 802298C0  88 03 12 53 */	lbz r0, 0x1253(r3)
/* 802298C4  7C 04 00 40 */	cmplw r4, r0
/* 802298C8  41 80 00 0C */	blt lbl_802298D4
/* 802298CC  38 60 00 00 */	li r3, 0
/* 802298D0  4E 80 00 20 */	blr 
lbl_802298D4:
/* 802298D4  38 60 00 01 */	li r3, 1
/* 802298D8  4E 80 00 20 */	blr 
