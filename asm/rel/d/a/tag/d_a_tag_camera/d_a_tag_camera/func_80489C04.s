lbl_80489C04:
/* 80489C04  3C 60 80 49 */	lis r3, data_8048A670@ha /* 0x8048A670@ha */
/* 80489C08  38 63 A6 70 */	addi r3, r3, data_8048A670@l /* 0x8048A670@l */
/* 80489C0C  80 63 00 00 */	lwz r3, 0(r3)
/* 80489C10  80 03 05 70 */	lwz r0, 0x570(r3)
/* 80489C14  54 03 A7 FE */	rlwinm r3, r0, 0x14, 0x1f, 0x1f
/* 80489C18  4E 80 00 20 */	blr 
