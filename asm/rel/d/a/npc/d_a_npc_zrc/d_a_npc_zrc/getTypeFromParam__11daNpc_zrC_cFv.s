lbl_80B8FC34:
/* 80B8FC34  80 03 00 B0 */	lwz r0, 0xb0(r3)
/* 80B8FC38  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80B8FC3C  2C 00 00 02 */	cmpwi r0, 2
/* 80B8FC40  41 82 00 34 */	beq lbl_80B8FC74
/* 80B8FC44  40 80 00 14 */	bge lbl_80B8FC58
/* 80B8FC48  2C 00 00 00 */	cmpwi r0, 0
/* 80B8FC4C  41 82 00 18 */	beq lbl_80B8FC64
/* 80B8FC50  40 80 00 1C */	bge lbl_80B8FC6C
/* 80B8FC54  48 00 00 30 */	b lbl_80B8FC84
lbl_80B8FC58:
/* 80B8FC58  2C 00 00 04 */	cmpwi r0, 4
/* 80B8FC5C  40 80 00 28 */	bge lbl_80B8FC84
/* 80B8FC60  48 00 00 1C */	b lbl_80B8FC7C
lbl_80B8FC64:
/* 80B8FC64  38 60 00 00 */	li r3, 0
/* 80B8FC68  4E 80 00 20 */	blr 
lbl_80B8FC6C:
/* 80B8FC6C  38 60 00 01 */	li r3, 1
/* 80B8FC70  4E 80 00 20 */	blr 
lbl_80B8FC74:
/* 80B8FC74  38 60 00 02 */	li r3, 2
/* 80B8FC78  4E 80 00 20 */	blr 
lbl_80B8FC7C:
/* 80B8FC7C  38 60 00 03 */	li r3, 3
/* 80B8FC80  4E 80 00 20 */	blr 
lbl_80B8FC84:
/* 80B8FC84  38 60 00 00 */	li r3, 0
/* 80B8FC88  4E 80 00 20 */	blr 