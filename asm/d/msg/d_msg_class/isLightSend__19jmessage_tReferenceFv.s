lbl_802298DC:
/* 802298DC  88 03 12 46 */	lbz r0, 0x1246(r3)
/* 802298E0  28 00 00 08 */	cmplwi r0, 8
/* 802298E4  40 82 00 18 */	bne lbl_802298FC
/* 802298E8  3C 80 80 43 */	lis r4, g_MsgObject_HIO_c@ha /* 0x8043028C@ha */
/* 802298EC  38 84 02 8C */	addi r4, r4, g_MsgObject_HIO_c@l /* 0x8043028C@l */
/* 802298F0  A8 84 03 1C */	lha r4, 0x31c(r4)
/* 802298F4  7C 85 23 78 */	mr r5, r4
/* 802298F8  48 00 00 14 */	b lbl_8022990C
lbl_802298FC:
/* 802298FC  3C 80 80 43 */	lis r4, g_MsgObject_HIO_c@ha /* 0x8043028C@ha */
/* 80229900  38 84 02 8C */	addi r4, r4, g_MsgObject_HIO_c@l /* 0x8043028C@l */
/* 80229904  A8 84 03 1A */	lha r4, 0x31a(r4)
/* 80229908  7C 85 23 78 */	mr r5, r4
lbl_8022990C:
/* 8022990C  7C A0 07 35 */	extsh. r0, r5
/* 80229910  40 80 00 0C */	bge lbl_8022991C
/* 80229914  1C 05 FF FF */	mulli r0, r5, -1
/* 80229918  7C 05 07 34 */	extsh r5, r0
lbl_8022991C:
/* 8022991C  7C 80 07 35 */	extsh. r0, r4
/* 80229920  40 81 00 24 */	ble lbl_80229944
/* 80229924  88 83 05 DD */	lbz r4, 0x5dd(r3)
/* 80229928  7C A0 07 34 */	extsh r0, r5
/* 8022992C  7C 63 02 14 */	add r3, r3, r0
/* 80229930  88 03 12 53 */	lbz r0, 0x1253(r3)
/* 80229934  7C 04 00 40 */	cmplw r4, r0
/* 80229938  41 80 00 0C */	blt lbl_80229944
/* 8022993C  38 60 00 00 */	li r3, 0
/* 80229940  4E 80 00 20 */	blr 
lbl_80229944:
/* 80229944  38 60 00 01 */	li r3, 1
/* 80229948  4E 80 00 20 */	blr 