lbl_80D29590:
/* 80D29590  88 83 00 00 */	lbz r4, 0(r3)
/* 80D29594  28 04 00 00 */	cmplwi r4, 0
/* 80D29598  41 82 00 0C */	beq lbl_80D295A4
/* 80D2959C  38 04 FF FF */	addi r0, r4, -1
/* 80D295A0  98 03 00 00 */	stb r0, 0(r3)
lbl_80D295A4:
/* 80D295A4  88 63 00 00 */	lbz r3, 0(r3)
/* 80D295A8  4E 80 00 20 */	blr 
