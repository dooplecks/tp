lbl_808452E4:
/* 808452E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 808452E8  7C 08 02 A6 */	mflr r0
/* 808452EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 808452F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 808452F4  93 C1 00 08 */	stw r30, 8(r1)
/* 808452F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 808452FC  7C 9F 23 78 */	mr r31, r4
/* 80845300  41 82 00 38 */	beq lbl_80845338
/* 80845304  3C 60 80 84 */	lis r3, __vt__12dBgS_AcchCir@ha /* 0x80845A90@ha */
/* 80845308  38 03 5A 90 */	addi r0, r3, __vt__12dBgS_AcchCir@l /* 0x80845A90@l */
/* 8084530C  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80845310  38 7E 00 14 */	addi r3, r30, 0x14
/* 80845314  38 80 FF FF */	li r4, -1
/* 80845318  4B A2 9C 01 */	bl __dt__8cM3dGCirFv
/* 8084531C  7F C3 F3 78 */	mr r3, r30
/* 80845320  38 80 00 00 */	li r4, 0
/* 80845324  4B A2 2D 8D */	bl __dt__13cBgS_PolyInfoFv
/* 80845328  7F E0 07 35 */	extsh. r0, r31
/* 8084532C  40 81 00 0C */	ble lbl_80845338
/* 80845330  7F C3 F3 78 */	mr r3, r30
/* 80845334  4B A8 9A 09 */	bl __dl__FPv
lbl_80845338:
/* 80845338  7F C3 F3 78 */	mr r3, r30
/* 8084533C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80845340  83 C1 00 08 */	lwz r30, 8(r1)
/* 80845344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80845348  7C 08 03 A6 */	mtlr r0
/* 8084534C  38 21 00 10 */	addi r1, r1, 0x10
/* 80845350  4E 80 00 20 */	blr 
