lbl_80978240:
/* 80978240  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80978244  7C 08 02 A6 */	mflr r0
/* 80978248  90 01 00 14 */	stw r0, 0x14(r1)
/* 8097824C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80978250  7C 7F 1B 79 */	or. r31, r3, r3
/* 80978254  41 82 00 30 */	beq lbl_80978284
/* 80978258  3C 60 80 98 */	lis r3, __vt__10dCcD_GStts@ha /* 0x80978B1C@ha */
/* 8097825C  38 03 8B 1C */	addi r0, r3, __vt__10dCcD_GStts@l /* 0x80978B1C@l */
/* 80978260  90 1F 00 00 */	stw r0, 0(r31)
/* 80978264  41 82 00 10 */	beq lbl_80978274
/* 80978268  3C 60 80 98 */	lis r3, __vt__10cCcD_GStts@ha /* 0x80978B10@ha */
/* 8097826C  38 03 8B 10 */	addi r0, r3, __vt__10cCcD_GStts@l /* 0x80978B10@l */
/* 80978270  90 1F 00 00 */	stw r0, 0(r31)
lbl_80978274:
/* 80978274  7C 80 07 35 */	extsh. r0, r4
/* 80978278  40 81 00 0C */	ble lbl_80978284
/* 8097827C  7F E3 FB 78 */	mr r3, r31
/* 80978280  4B 95 6A BD */	bl __dl__FPv
lbl_80978284:
/* 80978284  7F E3 FB 78 */	mr r3, r31
/* 80978288  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8097828C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80978290  7C 08 03 A6 */	mtlr r0
/* 80978294  38 21 00 10 */	addi r1, r1, 0x10
/* 80978298  4E 80 00 20 */	blr 
