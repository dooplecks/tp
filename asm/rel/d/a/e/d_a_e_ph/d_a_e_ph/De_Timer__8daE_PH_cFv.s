lbl_8074117C:
/* 8074117C  A8 83 05 AE */	lha r4, 0x5ae(r3)
/* 80741180  38 04 FF FF */	addi r0, r4, -1
/* 80741184  B0 03 05 AE */	sth r0, 0x5ae(r3)
/* 80741188  A8 03 05 AE */	lha r0, 0x5ae(r3)
/* 8074118C  2C 00 00 00 */	cmpwi r0, 0
/* 80741190  41 81 00 0C */	bgt lbl_8074119C
/* 80741194  38 00 00 00 */	li r0, 0
/* 80741198  B0 03 05 AE */	sth r0, 0x5ae(r3)
lbl_8074119C:
/* 8074119C  A8 83 05 AC */	lha r4, 0x5ac(r3)
/* 807411A0  38 04 FF FF */	addi r0, r4, -1
/* 807411A4  B0 03 05 AC */	sth r0, 0x5ac(r3)
/* 807411A8  A8 03 05 AC */	lha r0, 0x5ac(r3)
/* 807411AC  2C 00 00 00 */	cmpwi r0, 0
/* 807411B0  4C 80 00 20 */	bgelr 
/* 807411B4  38 00 00 00 */	li r0, 0
/* 807411B8  B0 03 05 AC */	sth r0, 0x5ac(r3)
/* 807411BC  4E 80 00 20 */	blr 