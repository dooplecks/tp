lbl_80B92AB8:
/* 80B92AB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B92ABC  7C 08 02 A6 */	mflr r0
/* 80B92AC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B92AC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80B92AC8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80B92ACC  41 82 00 10 */	beq lbl_80B92ADC
/* 80B92AD0  7C 80 07 35 */	extsh. r0, r4
/* 80B92AD4  40 81 00 08 */	ble lbl_80B92ADC
/* 80B92AD8  4B 73 C2 65 */	bl __dl__FPv
lbl_80B92ADC:
/* 80B92ADC  7F E3 FB 78 */	mr r3, r31
/* 80B92AE0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80B92AE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B92AE8  7C 08 03 A6 */	mtlr r0
/* 80B92AEC  38 21 00 10 */	addi r1, r1, 0x10
/* 80B92AF0  4E 80 00 20 */	blr 
