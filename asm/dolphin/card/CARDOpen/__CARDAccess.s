lbl_80357CDC:
/* 80357CDC  7C 08 02 A6 */	mflr r0
/* 80357CE0  90 01 00 04 */	stw r0, 4(r1)
/* 80357CE4  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 80357CE8  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80357CEC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 80357CF0  7C 9E 23 78 */	mr r30, r4
/* 80357CF4  88 04 00 00 */	lbz r0, 0(r4)
/* 80357CF8  83 E3 01 0C */	lwz r31, 0x10c(r3)
/* 80357CFC  28 00 00 FF */	cmplwi r0, 0xff
/* 80357D00  40 82 00 0C */	bne lbl_80357D0C
/* 80357D04  38 60 FF FC */	li r3, -4
/* 80357D08  48 00 00 50 */	b lbl_80357D58
lbl_80357D0C:
/* 80357D0C  3C 60 80 45 */	lis r3, __CARDDiskNone@ha /* 0x8044CDE0@ha */
/* 80357D10  38 03 CD E0 */	addi r0, r3, __CARDDiskNone@l /* 0x8044CDE0@l */
/* 80357D14  7C 1F 00 40 */	cmplw r31, r0
/* 80357D18  41 82 00 34 */	beq lbl_80357D4C
/* 80357D1C  38 7E 00 00 */	addi r3, r30, 0
/* 80357D20  38 9F 00 00 */	addi r4, r31, 0
/* 80357D24  38 A0 00 04 */	li r5, 4
/* 80357D28  48 00 E3 65 */	bl memcmp
/* 80357D2C  2C 03 00 00 */	cmpwi r3, 0
/* 80357D30  40 82 00 24 */	bne lbl_80357D54
/* 80357D34  38 7E 00 04 */	addi r3, r30, 4
/* 80357D38  38 9F 00 04 */	addi r4, r31, 4
/* 80357D3C  38 A0 00 02 */	li r5, 2
/* 80357D40  48 00 E3 4D */	bl memcmp
/* 80357D44  2C 03 00 00 */	cmpwi r3, 0
/* 80357D48  40 82 00 0C */	bne lbl_80357D54
lbl_80357D4C:
/* 80357D4C  38 60 00 00 */	li r3, 0
/* 80357D50  48 00 00 08 */	b lbl_80357D58
lbl_80357D54:
/* 80357D54  38 60 FF F6 */	li r3, -10
lbl_80357D58:
/* 80357D58  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80357D5C  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80357D60  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 80357D64  38 21 00 18 */	addi r1, r1, 0x18
/* 80357D68  7C 08 03 A6 */	mtlr r0
/* 80357D6C  4E 80 00 20 */	blr 
