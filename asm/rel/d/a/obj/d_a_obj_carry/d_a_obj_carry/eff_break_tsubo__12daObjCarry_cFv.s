lbl_8047747C:
/* 8047747C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80477480  7C 08 02 A6 */	mflr r0
/* 80477484  90 01 00 34 */	stw r0, 0x34(r1)
/* 80477488  3C 80 80 48 */	lis r4, lit_4685@ha /* 0x8047A3CC@ha */
/* 8047748C  C0 04 A3 CC */	lfs f0, lit_4685@l(r4)  /* 0x8047A3CC@l */
/* 80477490  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80477494  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80477498  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8047749C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 804774A0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 804774A4  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 804774A8  FC 00 00 18 */	frsp f0, f0
/* 804774AC  D0 01 00 08 */	stfs f0, 8(r1)
/* 804774B0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 804774B4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 804774B8  38 80 00 00 */	li r4, 0
/* 804774BC  38 A1 00 08 */	addi r5, r1, 8
/* 804774C0  4B FF FD 01 */	bl eff_break_tuboBmd__12daObjCarry_cFUs4cXyz
/* 804774C4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 804774C8  7C 08 03 A6 */	mtlr r0
/* 804774CC  38 21 00 30 */	addi r1, r1, 0x30
/* 804774D0  4E 80 00 20 */	blr 
