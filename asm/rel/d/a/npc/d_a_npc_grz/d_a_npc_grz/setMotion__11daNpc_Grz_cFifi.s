lbl_809EAD4C:
/* 809EAD4C  7C 86 07 34 */	extsh r6, r4
/* 809EAD50  2C 05 00 00 */	cmpwi r5, 0
/* 809EAD54  40 82 00 10 */	bne lbl_809EAD64
/* 809EAD58  A8 03 09 E0 */	lha r0, 0x9e0(r3)
/* 809EAD5C  7C 00 30 00 */	cmpw r0, r6
/* 809EAD60  4D 82 00 20 */	beqlr 
lbl_809EAD64:
/* 809EAD64  2C 04 00 00 */	cmpwi r4, 0
/* 809EAD68  4D 80 00 20 */	bltlr 
/* 809EAD6C  2C 04 00 0F */	cmpwi r4, 0xf
/* 809EAD70  4C 80 00 20 */	bgelr 
/* 809EAD74  B0 C3 09 E0 */	sth r6, 0x9e0(r3)
/* 809EAD78  D0 23 09 7C */	stfs f1, 0x97c(r3)
/* 809EAD7C  38 00 FF FF */	li r0, -1
/* 809EAD80  B0 03 09 DC */	sth r0, 0x9dc(r3)
/* 809EAD84  38 00 00 00 */	li r0, 0
/* 809EAD88  B0 03 09 DA */	sth r0, 0x9da(r3)
/* 809EAD8C  4E 80 00 20 */	blr 
