// 
// Generated By: dol2asm
// Translation Unit: JAUBankTable
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JAudio2/JAUBankTable.h"

// 
// Types:
// 

struct JSUPtrLink {
};

struct JSUPtrList {
	/* 802DBF4C */ // False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
void append(JSUPtrLink*);
};

template <typename A0>
struct JSULink { };
/* JSULink<JAUBankTable> */
struct JSULink__template0 {
};

struct JAUBankTable {
	/* 802A4AA0 */ // False False
//  u32 False
void getBank(u32) const;
};

struct JAUBankTableDictionary {
	/* 802A4A80 */ // False True
//  JSULink<JAUBankTable>* False
// 	 JSULink<JAUBankTable> True
// 		 JAUBankTable False
void appendBankTable(JSULink<JAUBankTable>*);
};

// 
// Forward References:
// 


// False True
//  JSULink<JAUBankTable>* False
// 	 JSULink<JAUBankTable> True
// 		 JAUBankTable False
extern "C" void func_802A4A80();
// False False
//  u32 False
extern "C" void getBank__12JAUBankTableCFUl();

// 
// External References:
// 


// False False
//  JSUPtrLink* False
// 	 JSUPtrLink False
extern "C" void append__10JSUPtrListFP10JSUPtrLink();

// 
// Declarations:
// 

/* 802A4A80-802A4AA0 0020+00 s=0 e=1 z=0  None .text      appendBankTable__22JAUBankTableDictionaryFP23JSULink<12JAUBankTable> */
//	802A4A8C: 802DBF4C (append__10JSUPtrListFP10JSUPtrLink)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
//  JSULink<JAUBankTable>* False
// 	 JSULink<JAUBankTable> True
// 		 JAUBankTable False
asm void JAUBankTableDictionary::appendBankTable(JSULink<JAUBankTable>* param_0) {
	nofralloc
#include "asm/JSystem/JAudio2/JAUBankTable/func_802A4A80.s"
}
#pragma pop


/* 802A4AA0-802A4AC4 0024+00 s=0 e=2 z=0  None .text      getBank__12JAUBankTableCFUl                                  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  u32 False
asm void JAUBankTable::getBank(u32 param_0) const {
	nofralloc
#include "asm/JSystem/JAudio2/JAUBankTable/getBank__12JAUBankTableCFUl.s"
}
#pragma pop


