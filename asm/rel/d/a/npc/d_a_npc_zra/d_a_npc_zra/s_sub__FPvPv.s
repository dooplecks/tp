lbl_80B8424C:
/* 80B8424C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B84250  7C 08 02 A6 */	mflr r0
/* 80B84254  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B84258  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B8425C  7C 7F 1B 78 */	mr r31, r3
/* 80B84260  4B 49 4A 81 */	bl fopAc_IsActor__FPv
/* 80B84264  2C 03 00 00 */	cmpwi r3, 0
/* 80B84268  41 82 00 18 */	beq lbl_80B84280
/* 80B8426C  A8 1F 00 08 */	lha r0, 8(r31)
/* 80B84270  2C 00 00 ED */	cmpwi r0, 0xed
/* 80B84274  40 82 00 0C */	bne lbl_80B84280
/* 80B84278  7F E3 FB 78 */	mr r3, r31
/* 80B8427C  48 00 00 08 */	b lbl_80B84284
lbl_80B84280:
/* 80B84280  38 60 00 00 */	li r3, 0
lbl_80B84284:
/* 80B84284  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B84288  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B8428C  7C 08 03 A6 */	mtlr r0
/* 80B84290  38 21 00 10 */	addi r1, r1, 0x10
/* 80B84294  4E 80 00 20 */	blr 
