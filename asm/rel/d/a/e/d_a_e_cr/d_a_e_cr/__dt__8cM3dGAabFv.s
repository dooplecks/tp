lbl_80699628:
/* 80699628  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069962C  7C 08 02 A6 */	mflr r0
/* 80699630  90 01 00 14 */	stw r0, 0x14(r1)
/* 80699634  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80699638  7C 7F 1B 79 */	or. r31, r3, r3
/* 8069963C  41 82 00 1C */	beq lbl_80699658
/* 80699640  3C A0 80 6A */	lis r5, __vt__8cM3dGAab@ha /* 0x80699E44@ha */
/* 80699644  38 05 9E 44 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x80699E44@l */
/* 80699648  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8069964C  7C 80 07 35 */	extsh. r0, r4
/* 80699650  40 81 00 08 */	ble lbl_80699658
/* 80699654  4B C3 56 E9 */	bl __dl__FPv
lbl_80699658:
/* 80699658  7F E3 FB 78 */	mr r3, r31
/* 8069965C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80699660  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80699664  7C 08 03 A6 */	mtlr r0
/* 80699668  38 21 00 10 */	addi r1, r1, 0x10
/* 8069966C  4E 80 00 20 */	blr 