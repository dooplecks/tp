lbl_806997AC:
/* 806997AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806997B0  7C 08 02 A6 */	mflr r0
/* 806997B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806997B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806997BC  7C 7F 1B 79 */	or. r31, r3, r3
/* 806997C0  41 82 00 1C */	beq lbl_806997DC
/* 806997C4  3C A0 80 6A */	lis r5, __vt__10cCcD_GStts@ha /* 0x80699E20@ha */
/* 806997C8  38 05 9E 20 */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x80699E20@l */
/* 806997CC  90 1F 00 00 */	stw r0, 0(r31)
/* 806997D0  7C 80 07 35 */	extsh. r0, r4
/* 806997D4  40 81 00 08 */	ble lbl_806997DC
/* 806997D8  4B C3 55 65 */	bl __dl__FPv
lbl_806997DC:
/* 806997DC  7F E3 FB 78 */	mr r3, r31
/* 806997E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806997E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806997E8  7C 08 03 A6 */	mtlr r0
/* 806997EC  38 21 00 10 */	addi r1, r1, 0x10
/* 806997F0  4E 80 00 20 */	blr 
