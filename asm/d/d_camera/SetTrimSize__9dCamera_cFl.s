lbl_8016300C:
/* 8016300C  80 03 09 24 */	lwz r0, 0x924(r3)
/* 80163010  7C A0 20 50 */	subf r5, r0, r4
/* 80163014  30 05 FF FF */	addic r0, r5, -1
/* 80163018  7C 00 29 10 */	subfe r0, r0, r5
/* 8016301C  90 83 09 24 */	stw r4, 0x924(r3)
/* 80163020  7C 03 03 78 */	mr r3, r0
/* 80163024  4E 80 00 20 */	blr 
