lbl_80083748:
/* 80083748  88 03 00 14 */	lbz r0, 0x14(r3)
/* 8008374C  7C 03 07 74 */	extsb r3, r0
/* 80083750  7C 03 00 D0 */	neg r0, r3
/* 80083754  7C 00 18 78 */	andc r0, r0, r3
/* 80083758  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8008375C  4E 80 00 20 */	blr 