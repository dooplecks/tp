lbl_8057E700:
/* 8057E700  80 03 05 5C */	lwz r0, 0x55c(r3)
/* 8057E704  54 00 07 34 */	rlwinm r0, r0, 0, 0x1c, 0x1a
/* 8057E708  90 03 05 5C */	stw r0, 0x55c(r3)
/* 8057E70C  3C 80 80 58 */	lis r4, l_HIO@ha /* 0x8057F8E4@ha */
/* 8057E710  38 84 F8 E4 */	addi r4, r4, l_HIO@l /* 0x8057F8E4@l */
/* 8057E714  C0 04 00 04 */	lfs f0, 4(r4)
/* 8057E718  FC 00 00 50 */	fneg f0, f0
/* 8057E71C  D0 03 05 30 */	stfs f0, 0x530(r3)
/* 8057E720  38 00 00 02 */	li r0, 2
/* 8057E724  98 03 05 78 */	stb r0, 0x578(r3)
/* 8057E728  4E 80 00 20 */	blr 
