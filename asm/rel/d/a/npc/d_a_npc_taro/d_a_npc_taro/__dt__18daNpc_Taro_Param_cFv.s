lbl_805715FC:
/* 805715FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80571600  7C 08 02 A6 */	mflr r0
/* 80571604  90 01 00 14 */	stw r0, 0x14(r1)
/* 80571608  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8057160C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80571610  41 82 00 1C */	beq lbl_8057162C
/* 80571614  3C A0 80 57 */	lis r5, __vt__18daNpc_Taro_Param_c@ha /* 0x8057354C@ha */
/* 80571618  38 05 35 4C */	addi r0, r5, __vt__18daNpc_Taro_Param_c@l /* 0x8057354C@l */
/* 8057161C  90 1F 00 00 */	stw r0, 0(r31)
/* 80571620  7C 80 07 35 */	extsh. r0, r4
/* 80571624  40 81 00 08 */	ble lbl_8057162C
/* 80571628  4B D5 D7 15 */	bl __dl__FPv
lbl_8057162C:
/* 8057162C  7F E3 FB 78 */	mr r3, r31
/* 80571630  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80571634  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80571638  7C 08 03 A6 */	mtlr r0
/* 8057163C  38 21 00 10 */	addi r1, r1, 0x10
/* 80571640  4E 80 00 20 */	blr 
