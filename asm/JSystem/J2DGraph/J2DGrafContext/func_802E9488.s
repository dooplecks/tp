lbl_802E9488:
/* 802E9488  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E948C  7C 08 02 A6 */	mflr r0
/* 802E9490  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E9494  39 61 00 20 */	addi r11, r1, 0x20
/* 802E9498  48 07 8D 45 */	bl _savegpr_29
/* 802E949C  7C 7D 1B 78 */	mr r29, r3
/* 802E94A0  7C 9E 23 78 */	mr r30, r4
/* 802E94A4  7C BF 2B 78 */	mr r31, r5
/* 802E94A8  88 63 00 B3 */	lbz r3, 0xb3(r3)
/* 802E94AC  88 9D 00 B4 */	lbz r4, 0xb4(r29)
/* 802E94B0  88 BD 00 B5 */	lbz r5, 0xb5(r29)
/* 802E94B4  38 C0 00 0F */	li r6, 0xf
/* 802E94B8  48 07 67 39 */	bl GXSetBlendMode
/* 802E94BC  38 7D 00 80 */	addi r3, r29, 0x80
/* 802E94C0  38 80 00 00 */	li r4, 0
/* 802E94C4  48 07 6D 89 */	bl GXLoadPosMtxImm
/* 802E94C8  38 60 00 00 */	li r3, 0
/* 802E94CC  38 80 00 09 */	li r4, 9
/* 802E94D0  38 A0 00 01 */	li r5, 1
/* 802E94D4  38 C0 00 04 */	li r6, 4
/* 802E94D8  38 E0 00 00 */	li r7, 0
/* 802E94DC  48 07 20 E9 */	bl GXSetVtxAttrFmt
/* 802E94E0  38 60 00 A8 */	li r3, 0xa8
/* 802E94E4  38 80 00 00 */	li r4, 0
/* 802E94E8  38 A0 00 02 */	li r5, 2
/* 802E94EC  48 07 32 79 */	bl GXBegin
/* 802E94F0  C0 3E 00 04 */	lfs f1, 4(r30)
/* 802E94F4  C0 1E 00 00 */	lfs f0, 0(r30)
/* 802E94F8  3C 60 CC 01 */	lis r3, 0xCC01 /* 0xCC008000@ha */
/* 802E94FC  D0 03 80 00 */	stfs f0, 0x8000(r3)  /* 0xCC008000@l */
/* 802E9500  D0 23 80 00 */	stfs f1, -0x8000(r3)
/* 802E9504  C0 02 C7 48 */	lfs f0, lit_627(r2)
/* 802E9508  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 802E950C  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 802E9510  90 03 80 00 */	stw r0, -0x8000(r3)
/* 802E9514  C0 3F 00 04 */	lfs f1, 4(r31)
/* 802E9518  C0 1F 00 00 */	lfs f0, 0(r31)
/* 802E951C  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 802E9520  D0 23 80 00 */	stfs f1, -0x8000(r3)
/* 802E9524  C0 02 C7 48 */	lfs f0, lit_627(r2)
/* 802E9528  D0 03 80 00 */	stfs f0, -0x8000(r3)
/* 802E952C  80 1D 00 2C */	lwz r0, 0x2c(r29)
/* 802E9530  90 03 80 00 */	stw r0, -0x8000(r3)
/* 802E9534  38 60 00 00 */	li r3, 0
/* 802E9538  38 80 00 09 */	li r4, 9
/* 802E953C  38 A0 00 01 */	li r5, 1
/* 802E9540  38 C0 00 03 */	li r6, 3
/* 802E9544  38 E0 00 00 */	li r7, 0
/* 802E9548  48 07 20 7D */	bl GXSetVtxAttrFmt
/* 802E954C  39 61 00 20 */	addi r11, r1, 0x20
/* 802E9550  48 07 8C D9 */	bl _restgpr_29
/* 802E9554  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E9558  7C 08 03 A6 */	mtlr r0
/* 802E955C  38 21 00 20 */	addi r1, r1, 0x20
/* 802E9560  4E 80 00 20 */	blr 
