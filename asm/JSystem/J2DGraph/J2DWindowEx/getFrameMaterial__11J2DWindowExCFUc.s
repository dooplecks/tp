lbl_80303510:
/* 80303510  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 80303514  28 00 00 04 */	cmplwi r0, 4
/* 80303518  41 80 00 0C */	blt lbl_80303524
/* 8030351C  38 60 00 00 */	li r3, 0
/* 80303520  4E 80 00 20 */	blr 
lbl_80303524:
/* 80303524  54 80 15 BA */	rlwinm r0, r4, 2, 0x16, 0x1d
/* 80303528  7C 63 02 14 */	add r3, r3, r0
/* 8030352C  80 63 01 48 */	lwz r3, 0x148(r3)
/* 80303530  4E 80 00 20 */	blr 