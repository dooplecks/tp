lbl_80B547A0:
/* 80B547A0  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80B547A4  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80B547A8  28 00 00 06 */	cmplwi r0, 6
/* 80B547AC  41 81 00 54 */	bgt lbl_80B54800
/* 80B547B0  3C 60 80 B6 */	lis r3, lit_4838@ha /* 0x80B5E824@ha */
/* 80B547B4  38 63 E8 24 */	addi r3, r3, lit_4838@l /* 0x80B5E824@l */
/* 80B547B8  54 00 10 3A */	slwi r0, r0, 2
/* 80B547BC  7C 03 00 2E */	lwzx r0, r3, r0
/* 80B547C0  7C 09 03 A6 */	mtctr r0
/* 80B547C4  4E 80 04 20 */	bctr 
lbl_80B547C8:
/* 80B547C8  38 60 00 00 */	li r3, 0
/* 80B547CC  4E 80 00 20 */	blr 
lbl_80B547D0:
/* 80B547D0  38 60 00 01 */	li r3, 1
/* 80B547D4  4E 80 00 20 */	blr 
lbl_80B547D8:
/* 80B547D8  38 60 00 02 */	li r3, 2
/* 80B547DC  4E 80 00 20 */	blr 
lbl_80B547E0:
/* 80B547E0  38 60 00 03 */	li r3, 3
/* 80B547E4  4E 80 00 20 */	blr 
lbl_80B547E8:
/* 80B547E8  38 60 00 04 */	li r3, 4
/* 80B547EC  4E 80 00 20 */	blr 
lbl_80B547F0:
/* 80B547F0  38 60 00 05 */	li r3, 5
/* 80B547F4  4E 80 00 20 */	blr 
lbl_80B547F8:
/* 80B547F8  38 60 00 06 */	li r3, 6
/* 80B547FC  4E 80 00 20 */	blr 
lbl_80B54800:
/* 80B54800  38 60 00 07 */	li r3, 7
/* 80B54804  4E 80 00 20 */	blr 
