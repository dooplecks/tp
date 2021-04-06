//
// Generated By: dol2asm
// Translation Unit: jstudio-control
//

#include "JSystem/JStudio/JStudio/jstudio-control.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct Vec {};

namespace JStudio {
namespace ctb {
struct TObject {};

struct TControl {
    /* 80280FC4 */ TControl();
    /* 80280FF4 */ ~TControl();
    /* 80281230 */ void getObject_index(u32);
};

struct TFactory {
    /* 80281274 */ ~TFactory();
};

struct TParse {
    /* 8028135C */ TParse(JStudio::ctb::TControl*);
    /* 8028137C */ ~TParse();
};

};  // namespace ctb

struct TCreateObject {
    /* 80285488 */ ~TCreateObject();
};

namespace stb {
struct data {
    struct TParse_TBlock_object {};

    struct TParse_THeader {};

    struct TParse_TBlock {};
};

struct TControl {
    /* 802890B4 */ TControl();
    /* 80289194 */ ~TControl();
};

struct TObject {};

struct TFactory {
    /* 802895B4 */ ~TFactory();
    /* 80289604 */ void destroy(JStudio::stb::TObject*);
};

struct TParse {
    /* 80289640 */ TParse(JStudio::stb::TControl*);
    /* 80289660 */ ~TParse();
    /* 802896C0 */ void parseHeader_next(void const**, u32*, u32);
    /* 8028978C */ void parseBlock_next(void const**, u32*, u32);
    /* 802897E8 */ void parseBlock_block(JStudio::stb::data::TParse_TBlock const&, u32);
    /* 80289820 */ void parseBlock_object(JStudio::stb::data::TParse_TBlock_object const&, u32);
};

};  // namespace stb

struct TFactory {
    /* 802854D0 */ ~TFactory();
    /* 80285560 */ void appendCreateObject(JStudio::TCreateObject*);
    /* 802855AC */ void create(JStudio::stb::data::TParse_TBlock_object const&);
};

struct TControl {
    /* 80285114 */ TControl();
    /* 802851AC */ ~TControl();
    /* 80285228 */ void setFactory(JStudio::TFactory*);
    /* 80285250 */ void transformOnSet_setOrigin_TxyzRy(Vec const&, f32);
    /* 802852D0 */ void transformOnGet_setOrigin_TxyzRy(Vec const&, f32);
    /* 80285368 */ void transform_setOrigin_ctb(JStudio::ctb::TObject const&);
    /* 8028543C */ void transform_setOrigin_ctb_index(u32);
};

struct TParse {
    /* 8028566C */ TParse(JStudio::TControl*);
    /* 802856A8 */ ~TParse();
    /* 80285708 */ void parseHeader(JStudio::stb::data::TParse_THeader const&, u32);
    /* 802857E4 */ void parseBlock_block(JStudio::stb::data::TParse_TBlock const&, u32);
    /* 80285844 */ void parseBlock_block_fvb_(JStudio::stb::data::TParse_TBlock const&, u32);
    /* 802858F0 */ void parseBlock_block_ctb_(JStudio::stb::data::TParse_TBlock const&, u32);
};

namespace fvb {
struct TControl {
    /* 80284668 */ TControl();
    /* 80284698 */ ~TControl();
};

struct TFactory {
    /* 80284918 */ ~TFactory();
};

struct TParse {
    /* 80284ADC */ TParse(JStudio::fvb::TControl*);
    /* 80284AFC */ ~TParse();
};

};  // namespace fvb

};  // namespace JStudio

namespace JGadget {
struct binary {
    struct TParse_header_block {
        /* 802DC910 */ void parse_next(void const**, u32);
    };
};

struct TLinkListNode {};

struct TNodeLinkList {
    struct iterator {};

    /* 802DCA1C */ ~TNodeLinkList();
    /* 802DCBA8 */ void Insert(JGadget::TNodeLinkList::iterator, JGadget::TLinkListNode*);
};

};  // namespace JGadget

//
// Forward References:
//

extern "C" void __ct__Q27JStudio8TControlFv();
extern "C" void __dt__Q27JStudio8TControlFv();
extern "C" void setFactory__Q27JStudio8TControlFPQ27JStudio8TFactory();
extern "C" void transformOnSet_setOrigin_TxyzRy__Q27JStudio8TControlFRC3Vecf();
extern "C" void transformOnGet_setOrigin_TxyzRy__Q27JStudio8TControlFRC3Vecf();
extern "C" void transform_setOrigin_ctb__Q27JStudio8TControlFRCQ37JStudio3ctb7TObject();
extern "C" void transform_setOrigin_ctb_index__Q27JStudio8TControlFUl();
extern "C" void __dt__Q27JStudio13TCreateObjectFv();
extern "C" void __dt__Q27JStudio8TFactoryFv();
extern "C" void appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject();
extern "C" void create__Q27JStudio8TFactoryFRCQ47JStudio3stb4data20TParse_TBlock_object();
extern "C" void __ct__Q27JStudio6TParseFPQ27JStudio8TControl();
extern "C" void __dt__Q27JStudio6TParseFv();
extern "C" void parseHeader__Q27JStudio6TParseFRCQ47JStudio3stb4data14TParse_THeaderUl();
extern "C" void parseBlock_block__Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl();
extern "C" void parseBlock_block_fvb___Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl();
extern "C" void parseBlock_block_ctb___Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl();

//
// External References:
//

extern "C" void __ct__Q37JStudio3ctb8TControlFv();
extern "C" void __dt__Q37JStudio3ctb8TControlFv();
extern "C" void getObject_index__Q37JStudio3ctb8TControlFUl();
extern "C" void __dt__Q37JStudio3ctb8TFactoryFv();
extern "C" void __ct__Q37JStudio3ctb6TParseFPQ37JStudio3ctb8TControl();
extern "C" void __dt__Q37JStudio3ctb6TParseFv();
extern "C" void __ct__Q37JStudio3fvb8TControlFv();
extern "C" void __dt__Q37JStudio3fvb8TControlFv();
extern "C" void __dt__Q37JStudio3fvb8TFactoryFv();
extern "C" void __ct__Q37JStudio3fvb6TParseFPQ37JStudio3fvb8TControl();
extern "C" void __dt__Q37JStudio3fvb6TParseFv();
extern "C" void __ct__Q37JStudio3stb8TControlFv();
extern "C" void __dt__Q37JStudio3stb8TControlFv();
extern "C" void __dt__Q37JStudio3stb8TFactoryFv();
extern "C" void destroy__Q37JStudio3stb8TFactoryFPQ37JStudio3stb7TObject();
extern "C" void __ct__Q37JStudio3stb6TParseFPQ37JStudio3stb8TControl();
extern "C" void __dt__Q37JStudio3stb6TParseFv();
extern "C" void parseHeader_next__Q37JStudio3stb6TParseFPPCvPUlUl();
extern "C" void parseBlock_next__Q37JStudio3stb6TParseFPPCvPUlUl();
extern "C" void parseBlock_block__Q37JStudio3stb6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl();
extern "C" void
parseBlock_object__Q37JStudio3stb6TParseFRCQ47JStudio3stb4data20TParse_TBlock_objectUl();
extern "C" void __dl__FPv();
extern "C" void parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl();
extern "C" void __dt__Q27JGadget13TNodeLinkListFv();
extern "C" void
Insert__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iteratorPQ27JGadget13TLinkListNode();
extern "C" void PSMTXConcat();
extern "C" void PSMTXRotRad();
extern "C" void PSMTXTrans();
extern "C" void PSMTXTransApply();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void memcmp();
extern "C" extern void* __vt__Q27JStudio13TCreateObject[4];
extern "C" extern u8 ga8cSignature__Q27JStudio4data[8];

//
// Declarations:
//

/* ############################################################################################## */
/* 8039AA40-8039AA4C 0270A0 000C+00 1/1 0/0 0/0 .rodata          @745 */
SECTION_RODATA static u8 const lit_745[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8039AA40 = (void*)(&lit_745);

/* 803C4AC0-803C4AE0 021BE0 0020+00 2/2 0/0 0/0 .data            __vt__Q27JStudio6TParse */
SECTION_DATA extern void* __vt__Q27JStudio6TParse[8] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q27JStudio6TParseFv,
    (void*)parseHeader_next__Q37JStudio3stb6TParseFPPCvPUlUl,
    (void*)parseBlock_next__Q37JStudio3stb6TParseFPPCvPUlUl,
    (void*)parseHeader__Q27JStudio6TParseFRCQ47JStudio3stb4data14TParse_THeaderUl,
    (void*)parseBlock_block__Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl,
    (void*)parseBlock_object__Q37JStudio3stb6TParseFRCQ47JStudio3stb4data20TParse_TBlock_objectUl,
};

/* 803C4AE0-803C4AF4 021C00 0014+00 1/1 1/1 0/0 .data            __vt__Q27JStudio8TFactory */
SECTION_DATA extern void* __vt__Q27JStudio8TFactory[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q27JStudio8TFactoryFv,
    (void*)create__Q27JStudio8TFactoryFRCQ47JStudio3stb4data20TParse_TBlock_object,
    (void*)destroy__Q37JStudio3stb8TFactoryFPQ37JStudio3stb7TObject,
};

/* 803C4AF4-803C4B00 021C14 000C+00 2/2 0/0 0/0 .data            __vt__Q27JStudio8TControl */
SECTION_DATA extern void* __vt__Q27JStudio8TControl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__Q27JStudio8TControlFv,
};

/* 80455458-8045545C 003A58 0004+00 2/2 0/0 0/0 .sdata2          @748 */
SECTION_SDATA2 static u8 lit_748[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80285114-802851AC 27FA54 0098+00 0/0 1/1 0/0 .text            __ct__Q27JStudio8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::TControl::TControl() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/__ct__Q27JStudio8TControlFv.s"
}
#pragma pop

/* 802851AC-80285228 27FAEC 007C+00 1/0 0/0 0/0 .text            __dt__Q27JStudio8TControlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::TControl::~TControl() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/__dt__Q27JStudio8TControlFv.s"
}
#pragma pop

/* 80285228-80285250 27FB68 0028+00 0/0 1/1 0/0 .text
 * setFactory__Q27JStudio8TControlFPQ27JStudio8TFactory         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TControl::setFactory(JStudio::TFactory* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/setFactory__Q27JStudio8TControlFPQ27JStudio8TFactory.s"
}
#pragma pop

/* ############################################################################################## */
/* 8045545C-80455460 003A5C 0004+00 2/2 0/0 0/0 .sdata2          @772 */
SECTION_SDATA2 static f32 lit_772 = 0.01745329238474369f;

/* 80285250-802852D0 27FB90 0080+00 3/3 1/1 0/0 .text
 * transformOnSet_setOrigin_TxyzRy__Q27JStudio8TControlFRC3Vecf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TControl::transformOnSet_setOrigin_TxyzRy(Vec const& param_0, f32 param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/transformOnSet_setOrigin_TxyzRy__Q27JStudio8TControlFRC3Vecf.s"
}
#pragma pop

/* 802852D0-80285368 27FC10 0098+00 3/3 1/1 0/0 .text
 * transformOnGet_setOrigin_TxyzRy__Q27JStudio8TControlFRC3Vecf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TControl::transformOnGet_setOrigin_TxyzRy(Vec const& param_0, f32 param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/transformOnGet_setOrigin_TxyzRy__Q27JStudio8TControlFRC3Vecf.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039AA4C-8039AA58 0270AC 000C+00 1/1 0/0 0/0 .rodata          @838 */
SECTION_RODATA static u8 const lit_838[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
SECTION_DEAD void* const cg_8039AA4C = (void*)(&lit_838);

/* 80285368-8028543C 27FCA8 00D4+00 1/1 0/0 0/0 .text
 * transform_setOrigin_ctb__Q27JStudio8TControlFRCQ37JStudio3ctb7TObject */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TControl::transform_setOrigin_ctb(JStudio::ctb::TObject const& param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/transform_setOrigin_ctb__Q27JStudio8TControlFRCQ37JStudio3ctb7TObject.s"
}
#pragma pop

/* 8028543C-80285488 27FD7C 004C+00 1/1 0/0 0/0 .text
 * transform_setOrigin_ctb_index__Q27JStudio8TControlFUl        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TControl::transform_setOrigin_ctb_index(u32 param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/transform_setOrigin_ctb_index__Q27JStudio8TControlFUl.s"
}
#pragma pop

/* 80285488-802854D0 27FDC8 0048+00 0/0 4/4 0/0 .text            __dt__Q27JStudio13TCreateObjectFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::TCreateObject::~TCreateObject() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/__dt__Q27JStudio13TCreateObjectFv.s"
}
#pragma pop

/* 802854D0-80285560 27FE10 0090+00 1/0 0/0 0/0 .text            __dt__Q27JStudio8TFactoryFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::TFactory::~TFactory() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/__dt__Q27JStudio8TFactoryFv.s"
}
#pragma pop

/* 80285560-802855AC 27FEA0 004C+00 0/0 1/1 0/0 .text
 * appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TFactory::appendCreateObject(JStudio::TCreateObject* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/appendCreateObject__Q27JStudio8TFactoryFPQ27JStudio13TCreateObject.s"
}
#pragma pop

/* 802855AC-8028566C 27FEEC 00C0+00 1/0 0/0 0/0 .text
 * create__Q27JStudio8TFactoryFRCQ47JStudio3stb4data20TParse_TBlock_object */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TFactory::create(JStudio::stb::data::TParse_TBlock_object const& param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/create__Q27JStudio8TFactoryFRCQ47JStudio3stb4data20TParse_TBlock_object.s"
}
#pragma pop

/* 8028566C-802856A8 27FFAC 003C+00 0/0 1/1 0/0 .text __ct__Q27JStudio6TParseFPQ27JStudio8TControl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::TParse::TParse(JStudio::TControl* param_0) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/__ct__Q27JStudio6TParseFPQ27JStudio8TControl.s"
}
#pragma pop

/* 802856A8-80285708 27FFE8 0060+00 1/0 1/1 0/0 .text            __dt__Q27JStudio6TParseFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JStudio::TParse::~TParse() {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/__dt__Q27JStudio6TParseFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039AA58-8039AA68 0270B8 000C+04 1/1 0/0 0/0 .rodata          @1138 */
SECTION_RODATA static u8 const lit_1138[12 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
SECTION_DEAD void* const cg_8039AA58 = (void*)(&lit_1138);

/* 80285708-802857E4 280048 00DC+00 1/0 0/0 0/0 .text
 * parseHeader__Q27JStudio6TParseFRCQ47JStudio3stb4data14TParse_THeaderUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TParse::parseHeader(JStudio::stb::data::TParse_THeader const& param_0,
                                      u32 param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/parseHeader__Q27JStudio6TParseFRCQ47JStudio3stb4data14TParse_THeaderUl.s"
}
#pragma pop

/* 802857E4-80285844 280124 0060+00 1/0 0/0 0/0 .text
 * parseBlock_block__Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TParse::parseBlock_block(JStudio::stb::data::TParse_TBlock const& param_0,
                                           u32 param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/parseBlock_block__Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl.s"
}
#pragma pop

/* 80285844-802858F0 280184 00AC+00 1/1 0/0 0/0 .text
 * parseBlock_block_fvb___Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TParse::parseBlock_block_fvb_(JStudio::stb::data::TParse_TBlock const& param_0,
                                                u32 param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/func_80285844.s"
}
#pragma pop

/* 802858F0-802859DC 280230 00EC+00 1/1 0/0 0/0 .text
 * parseBlock_block_ctb___Q27JStudio6TParseFRCQ47JStudio3stb4data13TParse_TBlockUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JStudio::TParse::parseBlock_block_ctb_(JStudio::stb::data::TParse_TBlock const& param_0,
                                                u32 param_1) {
    nofralloc
#include "asm/JSystem/JStudio/JStudio/jstudio-control/func_802858F0.s"
}
#pragma pop
