lbl_80335C18:
/* 80335C18  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80335C1C  7C 08 02 A6 */	mflr r0
/* 80335C20  90 01 00 24 */	stw r0, 0x24(r1)
/* 80335C24  39 61 00 20 */	addi r11, r1, 0x20
/* 80335C28  48 02 C5 AD */	bl _savegpr_27
/* 80335C2C  7C 7B 1B 78 */	mr r27, r3
/* 80335C30  7C 9C 23 78 */	mr r28, r4
/* 80335C34  A3 A4 00 08 */	lhz r29, 8(r4)
/* 80335C38  7F 83 E3 78 */	mr r3, r28
/* 80335C3C  80 84 00 0C */	lwz r4, 0xc(r4)
/* 80335C40  48 00 0A AD */	bl func_803366EC
/* 80335C44  7C 7F 1B 78 */	mr r31, r3
/* 80335C48  80 1C 00 10 */	lwz r0, 0x10(r28)
/* 80335C4C  28 00 00 00 */	cmplwi r0, 0
/* 80335C50  41 82 00 3C */	beq lbl_80335C8C
/* 80335C54  38 60 00 10 */	li r3, 0x10
/* 80335C58  4B F9 8F F5 */	bl __nw__FUl
/* 80335C5C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80335C60  41 82 00 20 */	beq lbl_80335C80
/* 80335C64  7F 83 E3 78 */	mr r3, r28
/* 80335C68  80 9C 00 10 */	lwz r4, 0x10(r28)
/* 80335C6C  4B FD 48 C5 */	bl func_8030A530
/* 80335C70  7C 64 1B 78 */	mr r4, r3
/* 80335C74  7F C3 F3 78 */	mr r3, r30
/* 80335C78  4B FA 8D 69 */	bl __ct__10JUTNameTabFPC7ResNTAB
/* 80335C7C  7C 7E 1B 78 */	mr r30, r3
lbl_80335C80:
/* 80335C80  80 7B 00 08 */	lwz r3, 8(r27)
/* 80335C84  93 C3 00 18 */	stw r30, 0x18(r3)
/* 80335C88  48 00 00 10 */	b lbl_80335C98
lbl_80335C8C:
/* 80335C8C  38 00 00 00 */	li r0, 0
/* 80335C90  80 7B 00 08 */	lwz r3, 8(r27)
/* 80335C94  90 03 00 18 */	stw r0, 0x18(r3)
lbl_80335C98:
/* 80335C98  38 60 00 0C */	li r3, 0xc
/* 80335C9C  4B F9 8F B1 */	bl __nw__FUl
/* 80335CA0  28 03 00 00 */	cmplwi r3, 0
/* 80335CA4  41 82 00 20 */	beq lbl_80335CC4
/* 80335CA8  3C 80 80 3D */	lis r4, __vt__10J3DTexture@ha /* 0x803CF1E8@ha */
/* 80335CAC  38 04 F1 E8 */	addi r0, r4, __vt__10J3DTexture@l /* 0x803CF1E8@l */
/* 80335CB0  90 03 00 08 */	stw r0, 8(r3)
/* 80335CB4  B3 A3 00 00 */	sth r29, 0(r3)
/* 80335CB8  38 00 00 00 */	li r0, 0
/* 80335CBC  B0 03 00 02 */	sth r0, 2(r3)
/* 80335CC0  93 E3 00 04 */	stw r31, 4(r3)
lbl_80335CC4:
/* 80335CC4  80 9B 00 08 */	lwz r4, 8(r27)
/* 80335CC8  90 64 00 14 */	stw r3, 0x14(r4)
/* 80335CCC  39 61 00 20 */	addi r11, r1, 0x20
/* 80335CD0  48 02 C5 51 */	bl _restgpr_27
/* 80335CD4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80335CD8  7C 08 03 A6 */	mtlr r0
/* 80335CDC  38 21 00 20 */	addi r1, r1, 0x20
/* 80335CE0  4E 80 00 20 */	blr 
