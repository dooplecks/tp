lbl_802D3218:
/* 802D3218  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D321C  7C 08 02 A6 */	mflr r0
/* 802D3220  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D3224  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D3228  7C 7F 1B 78 */	mr r31, r3
/* 802D322C  38 7F 00 18 */	addi r3, r31, 0x18
/* 802D3230  48 06 BE 11 */	bl OSLockMutex
/* 802D3234  3C 60 80 43 */	lis r3, sAramList__11JKRAramHeap@ha /* 0x8043430C@ha */
/* 802D3238  38 63 43 0C */	addi r3, r3, sAramList__11JKRAramHeap@l /* 0x8043430C@l */
/* 802D323C  80 63 00 00 */	lwz r3, 0(r3)
/* 802D3240  48 00 00 08 */	b lbl_802D3248
lbl_802D3244:
/* 802D3244  80 63 00 0C */	lwz r3, 0xc(r3)
lbl_802D3248:
/* 802D3248  28 03 00 00 */	cmplwi r3, 0
/* 802D324C  40 82 FF F8 */	bne lbl_802D3244
/* 802D3250  38 7F 00 18 */	addi r3, r31, 0x18
/* 802D3254  48 06 BE C9 */	bl OSUnlockMutex
/* 802D3258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D325C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D3260  7C 08 03 A6 */	mtlr r0
/* 802D3264  38 21 00 10 */	addi r1, r1, 0x10
/* 802D3268  4E 80 00 20 */	blr 
