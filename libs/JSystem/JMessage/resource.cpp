//
// Generated By: dol2asm
// Translation Unit: resource
//

#include "JSystem/JMessage/resource.h"
#include "JSystem/JGadget/binary.h"
#include "MSL_C/MSL_Common/Src/mem.h"
#include "dol2asm.h"

//
// Types:
//

namespace std {
template <typename A1, typename B1>
void lower_bound(/* ... */);
/* 802A94D4 */ /* std::lower_bound<u32 const*, u32> */
void func_802A94D4(void* _this, u32 const*, u32 const*, u32 const&);
};  // namespace std

//
// Forward References:
//

extern "C" void toMessageIndex_messageID__Q28JMessage9TResourceCFUlUlPb();
extern "C" void __ct__Q38JMessage18TResourceContainer10TCResourceFv();
extern "C" void __dt__Q38JMessage18TResourceContainer10TCResourceFv();
extern "C" void Get_groupID__Q38JMessage18TResourceContainer10TCResourceFUs();
extern "C" void Do_create__Q38JMessage18TResourceContainer10TCResourceFv();
extern "C" void Do_destroy__Q38JMessage18TResourceContainer10TCResourceFPQ28JMessage9TResource();
extern "C" void __ct__Q28JMessage18TResourceContainerFv();
extern "C" void setEncoding__Q28JMessage18TResourceContainerFUc();
extern "C" void setEncoding___Q28JMessage18TResourceContainerFUc();
extern "C" void __ct__Q28JMessage6TParseFPQ28JMessage18TResourceContainer();
extern "C" void __dt__Q28JMessage6TParseFv();
extern "C" void parseHeader_next__Q28JMessage6TParseFPPCvPUlUl();
extern "C" void parseBlock_next__Q28JMessage6TParseFPPCvPUlUl();
extern "C" void parseCharacter_1Byte__Q28JMessage6localeFPPCc();
extern "C" void parseCharacter_2Byte__Q28JMessage6localeFPPCc();
extern "C" void func_802A94D4(void* _this, u32 const*, u32 const*, u32 const&);
extern "C" void* sapfnParseCharacter___Q28JMessage18TResourceContainer[5];

//
// External References:
//

extern "C" void parseCharacter_ShiftJIS__Q28JMessage6localeFPPCc();
extern "C" void parseCharacter_UTF8__Q28JMessage6localeFPPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void __dt__Q37JGadget6binary19TParse_header_blockFv();
extern "C" void __dt__Q27JGadget13TNodeLinkListFv();
extern "C" void
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode();
extern "C" void Erase__Q27JGadget13TNodeLinkListFPQ27JGadget13TLinkListNode();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" extern void* __vt__Q37JGadget6binary19TParse_header_block[5];
extern "C" f32 ga4cSignature__Q28JMessage4data[1 + 1 /* padding */];

//
// Declarations:
//

/* 802A8CDC-802A8EC0 2A361C 01E4+00 0/0 1/1 0/0 .text
 * toMessageIndex_messageID__Q28JMessage9TResourceCFUlUlPb      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JMessage::TResource::toMessageIndex_messageID(u32 param_0, u32 param_1,
                                                       bool* param_2) const {
    nofralloc
#include "asm/JSystem/JMessage/resource/toMessageIndex_messageID__Q28JMessage9TResourceCFUlUlPb.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C9C80-803C9C94 -00001 0014+00 1/1 0/0 0/0 .data
 * sapfnParseCharacter___Q28JMessage18TResourceContainer        */
JMessage::locale::parseCharacter_function JMessage::TResourceContainer::sapfnParseCharacter_[5] = {
    NULL,
    JMessage::locale::parseCharacter_1Byte,
    JMessage::locale::parseCharacter_2Byte,
    JMessage::locale::parseCharacter_ShiftJIS,
    JMessage::locale::parseCharacter_UTF8,
};

/* 803C9C94-803C9CA8 026DB4 0014+00 2/2 0/0 0/0 .data            __vt__Q28JMessage6TParse */
SECTION_DATA extern void* __vt__Q28JMessage6TParse[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q28JMessage6TParseFv,
    (void*)parseHeader_next__Q28JMessage6TParseFPPCvPUlUl,
    (void*)parseBlock_next__Q28JMessage6TParseFPPCvPUlUl,
};

/* 803C9CA8-803C9CBC 026DC8 0014+00 2/2 0/0 0/0 .data
 * __vt__Q38JMessage18TResourceContainer10TCResource            */
SECTION_DATA extern void* __vt__Q38JMessage18TResourceContainer10TCResource[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q38JMessage18TResourceContainer10TCResourceFv,
    (void*)Do_create__Q38JMessage18TResourceContainer10TCResourceFv,
    (void*)Do_destroy__Q38JMessage18TResourceContainer10TCResourceFPQ28JMessage9TResource,
};

/* 803C9CBC-803C9CD0 026DDC 0014+00 2/2 0/0 0/0 .data
 * __vt__Q27JGadget42TLinkList_factory<Q28JMessage9TResource,0> */
SECTION_DATA extern void* data_803C9CBC[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 802A8EC0-802A8EF8 2A3800 0038+00 1/1 0/0 0/0 .text
 * __ct__Q38JMessage18TResourceContainer10TCResourceFv          */
// need to fix TLinkList_factory vtable stuff
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TResourceContainer::TCResource::TCResource() {
    nofralloc
#include "asm/JSystem/JMessage/resource/__ct__Q38JMessage18TResourceContainer10TCResourceFv.s"
}
#pragma pop

/* 802A8EF8-802A8F6C 2A3838 0074+00 1/0 2/2 0/0 .text
 * __dt__Q38JMessage18TResourceContainer10TCResourceFv          */
// need to fix TLinkList_factory vtable stuff
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JMessage::TResourceContainer::TCResource::~TCResource() {
extern "C" asm void __dt__Q38JMessage18TResourceContainer10TCResourceFv() {
    nofralloc
#include "asm/JSystem/JMessage/resource/__dt__Q38JMessage18TResourceContainer10TCResourceFv.s"
}
#pragma pop

/* 802A8F6C-802A8FFC 2A38AC 0090+00 0/0 1/1 0/0 .text
 * Get_groupID__Q38JMessage18TResourceContainer10TCResourceFUs  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JMessage::TResource* JMessage::TResourceContainer::TCResource::Get_groupID(u16 param_0) {
    nofralloc
#include "asm/JSystem/JMessage/resource/Get_groupID__Q38JMessage18TResourceContainer10TCResourceFUs.s"
}
#pragma pop

/* 802A8FFC-802A9048 2A393C 004C+00 1/0 0/0 0/0 .text
 * Do_create__Q38JMessage18TResourceContainer10TCResourceFv     */
JMessage::TResource* JMessage::TResourceContainer::TCResource::Do_create() {
    TResource* new_res = new TResource();
    return new_res;
}

/* 802A9048-802A906C 2A3988 0024+00 1/0 0/0 0/0 .text
 * Do_destroy__Q38JMessage18TResourceContainer10TCResourceFPQ28JMessage9TResource */
void JMessage::TResourceContainer::TCResource::Do_destroy(JMessage::TResource* param_0) {
    delete param_0;
}

/* 802A906C-802A90B8 2A39AC 004C+00 0/0 2/2 0/0 .text __ct__Q28JMessage18TResourceContainerFv */
JMessage::TResourceContainer::TResourceContainer() : mEncodingType(0), pfnParseCharacter_(NULL) {}

/* 802A90B8-802A90F0 2A39F8 0038+00 1/1 0/0 0/0 .text
 * setEncoding__Q28JMessage18TResourceContainerFUc              */
void JMessage::TResourceContainer::setEncoding(u8 e) {
    if (e == 0) {
        mEncodingType = e;
        pfnParseCharacter_ = NULL;
    } else {
        setEncoding_(e);
    }
}

/* 802A90F0-802A9130 2A3A30 0040+00 1/1 0/0 0/0 .text
 * setEncoding___Q28JMessage18TResourceContainerFUc             */
void JMessage::TResourceContainer::setEncoding_(u8 e) {
    mEncodingType = e;
    pfnParseCharacter_ = JGadget::toValueFromIndex<JMessage::locale::parseCharacter_function>(
        e, sapfnParseCharacter_, 5, NULL);
}

/* 802A9130-802A9158 2A3A70 0028+00 0/0 2/2 0/0 .text
 * __ct__Q28JMessage6TParseFPQ28JMessage18TResourceContainer    */
JMessage::TParse::TParse(JMessage::TResourceContainer* pContainer) {
    pContainer_ = pContainer;
    pResource_ = NULL;
}

/* 802A9158-802A91B8 2A3A98 0060+00 1/0 0/0 0/0 .text            __dt__Q28JMessage6TParseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm JMessage::TParse::~TParse() {
extern "C" asm void __dt__Q28JMessage6TParseFv() {
    nofralloc
#include "asm/JSystem/JMessage/resource/__dt__Q28JMessage6TParseFv.s"
}
#pragma pop

/* 802A91B8-802A92F4 2A3AF8 013C+00 1/0 0/0 0/0 .text
 * parseHeader_next__Q28JMessage6TParseFPPCvPUlUl               */
#ifdef NONMATCHING
bool JMessage::TParse::parseHeader_next(void const** ppData_inout, u32* puBlock_out, u32 param_2) {
    const void* pData = *ppData_inout;

    data::TParse_THeader header(pData);
    *ppData_inout = header.getContent();
    *puBlock_out = header.get_blockNumber();

    if (memcmp(header.get_signature(), &data::ga4cSignature, sizeof(data::ga4cSignature))) {
        return 0;
    }

    if (header.get_type() != 'bmg1') {
        return 0;
    }

    u8 encoding = header.get_encoding();
    if (encoding != 0) {
        if (!pContainer_->isEncodingSettable(encoding)) {
            return 0;
        }

        pContainer_->setEncoding(encoding);
    }

    if (param_2 & 0x10) {
        return 1;
    }

    pResource_ = pContainer_->resContainer_.Do_create();

    if (pResource_ == NULL) {
        if (param_2 & 0x20) {
            return 0;
        } else {
            return 1;
        }
    } else {
        pContainer_->resContainer_.Push_back_hack(pResource_);
        pResource_->setData_header(header.getRaw());
        return 1;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JMessage::TParse::parseHeader_next(void const** param_0, u32* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JMessage/resource/parseHeader_next__Q28JMessage6TParseFPPCvPUlUl.s"
}
#pragma pop
#endif

/* 802A92F4-802A9490 2A3C34 019C+00 1/0 0/0 0/0 .text
 * parseBlock_next__Q28JMessage6TParseFPPCvPUlUl                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JMessage::TParse::parseBlock_next(void const** param_0, u32* param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JMessage/resource/parseBlock_next__Q28JMessage6TParseFPPCvPUlUl.s"
}
#pragma pop

/* 802A9490-802A94A8 2A3DD0 0018+00 1/0 0/0 0/0 .text
 * parseCharacter_1Byte__Q28JMessage6localeFPPCc                */
int JMessage::locale::parseCharacter_1Byte(char const** string) {
    u8 parse_char = **string;

    *string = *string + 1;
    return parse_char;
}

/* 802A94A8-802A94D4 2A3DE8 002C+00 1/0 0/0 0/0 .text
 * parseCharacter_2Byte__Q28JMessage6localeFPPCc                */
int JMessage::locale::parseCharacter_2Byte(char const** string) {
    u8** tmp_str = (u8**)string;

    u8 hi = **tmp_str;
    *tmp_str = *tmp_str + 1;

    u8 lo = **tmp_str;
    int parse_char = (hi << 8) | lo;
    *tmp_str = *tmp_str + 1;

    return parse_char;
}

/* 802A94D4-802A9528 2A3E14 0054+00 1/1 0/0 0/0 .text lower_bound<PCUl,Ul>__3stdFPCUlPCUlRCUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A94D4(void* _this, u32 const* param_0, u32 const* param_1,
                                  u32 const& param_2) {
    nofralloc
#include "asm/JSystem/JMessage/resource/func_802A94D4.s"
}
#pragma pop
