lbl_801236BC:
/* 801236BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801236C0  7C 08 02 A6 */	mflr r0
/* 801236C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801236C8  39 61 00 20 */	addi r11, r1, 0x20
/* 801236CC  48 23 EB 0D */	bl _savegpr_28
/* 801236D0  7C 7F 1B 78 */	mr r31, r3
/* 801236D4  3C 60 80 39 */	lis r3, d_a_d_a_alink__stringBase0@ha /* 0x80392094@ha */
/* 801236D8  38 63 20 94 */	addi r3, r3, d_a_d_a_alink__stringBase0@l /* 0x80392094@l */
/* 801236DC  38 63 01 77 */	addi r3, r3, 0x177
/* 801236E0  4B F7 A3 81 */	bl checkStageName__9daAlink_cFPCc
/* 801236E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801236E8  41 82 00 A8 */	beq lbl_80123790
/* 801236EC  38 60 00 00 */	li r3, 0
/* 801236F0  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 801236F4  7C 04 07 74 */	extsb r4, r0
/* 801236F8  4B F0 A4 6D */	bl dComIfGs_isOneZoneSwitch__Fii
/* 801236FC  2C 03 00 00 */	cmpwi r3, 0
/* 80123700  41 82 00 90 */	beq lbl_80123790
/* 80123704  3B 80 00 00 */	li r28, 0
/* 80123708  3B C0 00 00 */	li r30, 0
/* 8012370C  3B A0 00 00 */	li r29, 0
lbl_80123710:
/* 80123710  7F E3 FB 78 */	mr r3, r31
/* 80123714  38 9D 32 6C */	addi r4, r29, 0x326c
/* 80123718  7C 9F 22 14 */	add r4, r31, r4
/* 8012371C  38 A2 96 C8 */	la r5, effName_41286(r2) /* 804530C8-_SDA2_BASE_ */
/* 80123720  7C A5 F2 2E */	lhzx r5, r5, r30
/* 80123724  38 DF 04 D0 */	addi r6, r31, 0x4d0
/* 80123728  38 FF 04 E4 */	addi r7, r31, 0x4e4
/* 8012372C  4B FF CE 55 */	bl setEmitter__9daAlink_cFPUlUsPC4cXyzPC5csXyz
/* 80123730  7C 65 1B 79 */	or. r5, r3, r3
/* 80123734  41 82 00 2C */	beq lbl_80123760
/* 80123738  80 7F 06 50 */	lwz r3, 0x650(r31)
/* 8012373C  80 63 00 84 */	lwz r3, 0x84(r3)
/* 80123740  80 83 00 0C */	lwz r4, 0xc(r3)
/* 80123744  38 62 96 C0 */	la r3, jointID(r2) /* 804530C0-_SDA2_BASE_ */
/* 80123748  7C 03 F2 2E */	lhzx r0, r3, r30
/* 8012374C  1C 00 00 30 */	mulli r0, r0, 0x30
/* 80123750  7C 64 02 14 */	add r3, r4, r0
/* 80123754  38 85 00 68 */	addi r4, r5, 0x68
/* 80123758  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 8012375C  48 15 D0 85 */	bl func_802807E0
lbl_80123760:
/* 80123760  3B 9C 00 01 */	addi r28, r28, 1
/* 80123764  2C 1C 00 04 */	cmpwi r28, 4
/* 80123768  3B DE 00 02 */	addi r30, r30, 2
/* 8012376C  3B BD 00 04 */	addi r29, r29, 4
/* 80123770  41 80 FF A0 */	blt lbl_80123710
/* 80123774  7F E3 FB 78 */	mr r3, r31
/* 80123778  3C 80 00 02 */	lis r4, 0x0002 /* 0x0002009C@ha */
/* 8012377C  38 84 00 9C */	addi r4, r4, 0x009C /* 0x0002009C@l */
/* 80123780  81 9F 06 28 */	lwz r12, 0x628(r31)
/* 80123784  81 8C 01 1C */	lwz r12, 0x11c(r12)
/* 80123788  7D 89 03 A6 */	mtctr r12
/* 8012378C  4E 80 04 21 */	bctrl 
lbl_80123790:
/* 80123790  39 61 00 20 */	addi r11, r1, 0x20
/* 80123794  48 23 EA 91 */	bl _restgpr_28
/* 80123798  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8012379C  7C 08 03 A6 */	mtlr r0
/* 801237A0  38 21 00 20 */	addi r1, r1, 0x20
/* 801237A4  4E 80 00 20 */	blr 
