lbl_8087375C:
/* 8087375C  38 E0 00 00 */	li r7, 0
/* 80873760  39 00 00 01 */	li r8, 1
/* 80873764  3C 60 80 88 */	lis r3, __THPHuffmanSizeTab@ha /* 0x80879B64@ha */
/* 80873768  38 A3 9B 64 */	addi r5, r3, __THPHuffmanSizeTab@l /* 0x80879B64@l */
/* 8087376C  3C 60 80 88 */	lis r3, __THPHuffmanBits@ha /* 0x80879B60@ha */
/* 80873770  38 C3 9B 60 */	addi r6, r3, __THPHuffmanBits@l /* 0x80879B60@l */
lbl_80873774:
/* 80873774  80 66 00 00 */	lwz r3, 0(r6)
/* 80873778  38 08 FF FF */	addi r0, r8, -1
/* 8087377C  7C 03 00 AE */	lbzx r0, r3, r0
/* 80873780  7C 03 03 78 */	mr r3, r0
/* 80873784  2C 00 00 00 */	cmpwi r0, 0
/* 80873788  41 82 00 90 */	beq lbl_80873818
/* 8087378C  54 00 E8 FF */	rlwinm. r0, r0, 0x1d, 3, 0x1f
/* 80873790  7C 09 03 A6 */	mtctr r0
/* 80873794  41 82 00 70 */	beq lbl_80873804
lbl_80873798:
/* 80873798  80 85 00 00 */	lwz r4, 0(r5)
/* 8087379C  7D 04 39 AE */	stbx r8, r4, r7
/* 808737A0  80 85 00 00 */	lwz r4, 0(r5)
/* 808737A4  38 E7 00 01 */	addi r7, r7, 1
/* 808737A8  7D 04 39 AE */	stbx r8, r4, r7
/* 808737AC  80 85 00 00 */	lwz r4, 0(r5)
/* 808737B0  38 E7 00 01 */	addi r7, r7, 1
/* 808737B4  7D 04 39 AE */	stbx r8, r4, r7
/* 808737B8  80 85 00 00 */	lwz r4, 0(r5)
/* 808737BC  38 E7 00 01 */	addi r7, r7, 1
/* 808737C0  7D 04 39 AE */	stbx r8, r4, r7
/* 808737C4  80 85 00 00 */	lwz r4, 0(r5)
/* 808737C8  38 E7 00 01 */	addi r7, r7, 1
/* 808737CC  7D 04 39 AE */	stbx r8, r4, r7
/* 808737D0  80 85 00 00 */	lwz r4, 0(r5)
/* 808737D4  38 E7 00 01 */	addi r7, r7, 1
/* 808737D8  7D 04 39 AE */	stbx r8, r4, r7
/* 808737DC  80 85 00 00 */	lwz r4, 0(r5)
/* 808737E0  38 E7 00 01 */	addi r7, r7, 1
/* 808737E4  7D 04 39 AE */	stbx r8, r4, r7
/* 808737E8  80 85 00 00 */	lwz r4, 0(r5)
/* 808737EC  38 E7 00 01 */	addi r7, r7, 1
/* 808737F0  7D 04 39 AE */	stbx r8, r4, r7
/* 808737F4  38 E7 00 01 */	addi r7, r7, 1
/* 808737F8  42 00 FF A0 */	bdnz lbl_80873798
/* 808737FC  70 63 00 07 */	andi. r3, r3, 7
/* 80873800  41 82 00 18 */	beq lbl_80873818
lbl_80873804:
/* 80873804  7C 69 03 A6 */	mtctr r3
lbl_80873808:
/* 80873808  80 85 00 00 */	lwz r4, 0(r5)
/* 8087380C  7D 04 39 AE */	stbx r8, r4, r7
/* 80873810  38 E7 00 01 */	addi r7, r7, 1
/* 80873814  42 00 FF F4 */	bdnz lbl_80873808
lbl_80873818:
/* 80873818  39 08 00 01 */	addi r8, r8, 1
/* 8087381C  2C 08 00 10 */	cmpwi r8, 0x10
/* 80873820  40 81 FF 54 */	ble lbl_80873774
/* 80873824  38 00 00 00 */	li r0, 0
/* 80873828  3C 60 80 88 */	lis r3, __THPHuffmanSizeTab@ha /* 0x80879B64@ha */
/* 8087382C  38 63 9B 64 */	addi r3, r3, __THPHuffmanSizeTab@l /* 0x80879B64@l */
/* 80873830  80 63 00 00 */	lwz r3, 0(r3)
/* 80873834  7C 03 39 AE */	stbx r0, r3, r7
/* 80873838  4E 80 00 20 */	blr 
