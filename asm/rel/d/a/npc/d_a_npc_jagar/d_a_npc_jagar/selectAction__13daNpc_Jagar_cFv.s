lbl_80A16234:
/* 80A16234  3C 80 80 3A */	lis r4, __ptmf_null@ha /* 0x803A2180@ha */
/* 80A16238  38 A4 21 80 */	addi r5, r4, __ptmf_null@l /* 0x803A2180@l */
/* 80A1623C  80 85 00 00 */	lwz r4, 0(r5)
/* 80A16240  80 05 00 04 */	lwz r0, 4(r5)
/* 80A16244  90 83 0F D4 */	stw r4, 0xfd4(r3)
/* 80A16248  90 03 0F D8 */	stw r0, 0xfd8(r3)
/* 80A1624C  80 05 00 08 */	lwz r0, 8(r5)
/* 80A16250  90 03 0F DC */	stw r0, 0xfdc(r3)
/* 80A16254  88 03 0F 80 */	lbz r0, 0xf80(r3)
/* 80A16258  2C 00 00 01 */	cmpwi r0, 1
/* 80A1625C  41 82 00 08 */	beq lbl_80A16264
/* 80A16260  48 00 00 28 */	b lbl_80A16288
lbl_80A16264:
/* 80A16264  3C 80 80 A2 */	lis r4, lit_5061@ha /* 0x80A1AB98@ha */
/* 80A16268  38 A4 AB 98 */	addi r5, r4, lit_5061@l /* 0x80A1AB98@l */
/* 80A1626C  80 85 00 00 */	lwz r4, 0(r5)
/* 80A16270  80 05 00 04 */	lwz r0, 4(r5)
/* 80A16274  90 83 0F D4 */	stw r4, 0xfd4(r3)
/* 80A16278  90 03 0F D8 */	stw r0, 0xfd8(r3)
/* 80A1627C  80 05 00 08 */	lwz r0, 8(r5)
/* 80A16280  90 03 0F DC */	stw r0, 0xfdc(r3)
/* 80A16284  48 00 00 24 */	b lbl_80A162A8
lbl_80A16288:
/* 80A16288  3C 80 80 A2 */	lis r4, lit_5063@ha /* 0x80A1ABA4@ha */
/* 80A1628C  38 A4 AB A4 */	addi r5, r4, lit_5063@l /* 0x80A1ABA4@l */
/* 80A16290  80 85 00 00 */	lwz r4, 0(r5)
/* 80A16294  80 05 00 04 */	lwz r0, 4(r5)
/* 80A16298  90 83 0F D4 */	stw r4, 0xfd4(r3)
/* 80A1629C  90 03 0F D8 */	stw r0, 0xfd8(r3)
/* 80A162A0  80 05 00 08 */	lwz r0, 8(r5)
/* 80A162A4  90 03 0F DC */	stw r0, 0xfdc(r3)
lbl_80A162A8:
/* 80A162A8  38 60 00 01 */	li r3, 1
/* 80A162AC  4E 80 00 20 */	blr 
