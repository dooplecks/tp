lbl_80BC7B34:
/* 80BC7B34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BC7B38  7C 08 02 A6 */	mflr r0
/* 80BC7B3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BC7B40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80BC7B44  7C 7F 1B 78 */	mr r31, r3
/* 80BC7B48  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 80BC7B4C  28 00 00 02 */	cmplwi r0, 2
/* 80BC7B50  40 82 00 10 */	bne lbl_80BC7B60
/* 80BC7B54  38 00 00 02 */	li r0, 2
/* 80BC7B58  98 1F 05 B7 */	stb r0, 0x5b7(r31)
/* 80BC7B5C  48 00 00 2C */	b lbl_80BC7B88
lbl_80BC7B60:
/* 80BC7B60  A8 9F 05 B4 */	lha r4, 0x5b4(r31)
/* 80BC7B64  88 BF 05 B6 */	lbz r5, 0x5b6(r31)
/* 80BC7B68  3C C0 00 01 */	lis r6, 0x0001 /* 0x0000FFFF@ha */
/* 80BC7B6C  38 C6 FF FF */	addi r6, r6, 0xFFFF /* 0x0000FFFF@l */
/* 80BC7B70  38 E0 00 00 */	li r7, 0
/* 80BC7B74  39 00 00 01 */	li r8, 1
/* 80BC7B78  4B 45 3B 05 */	bl fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs
/* 80BC7B7C  A0 1F 00 FA */	lhz r0, 0xfa(r31)
/* 80BC7B80  60 00 00 02 */	ori r0, r0, 2
/* 80BC7B84  B0 1F 00 FA */	sth r0, 0xfa(r31)
lbl_80BC7B88:
/* 80BC7B88  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80BC7B8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BC7B90  7C 08 03 A6 */	mtlr r0
/* 80BC7B94  38 21 00 10 */	addi r1, r1, 0x10
/* 80BC7B98  4E 80 00 20 */	blr 
