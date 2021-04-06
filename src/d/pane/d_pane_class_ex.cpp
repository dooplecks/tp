//
// Generated By: dol2asm
// Translation Unit: d/pane/d_pane_class_ex
//

#include "d/pane/d_pane_class_ex.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J2DAnmTransform {};

struct J2DWindowEx {
    /* 80256084 */ void setAnimation(J2DAnmTransform*);
};

struct J2DTextBoxEx {
    /* 80256024 */ void getMaterial() const;
    /* 80256044 */ void setAnimation(J2DAnmTransform*);
};

struct J2DTextBox {
    /* 8025602C */ bool getMaterial() const;
};

struct J2DPictureEx {
    /* 80256034 */ void getMaterial() const;
    /* 80256064 */ void setAnimation(J2DAnmTransform*);
};

struct J2DPicture {
    /* 8025603C */ bool getMaterial() const;
};

struct J2DAnmVtxColor {};

struct J2DAnmVisibilityFull {};

struct J2DAnmTexPattern {};

struct J2DPane {
    /* 80256018 */ void setAnimation(J2DAnmVtxColor*);
    /* 80256020 */ void setAnimation(J2DAnmTexPattern*);
    /* 802F7FC4 */ void setAnimation(J2DAnmTransform*);
    /* 8025601C */ void setAnimation(J2DAnmVisibilityFull*);
};

//
// Forward References:
//

extern "C" void setAnimation__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void setAnimation__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setAnimation__7J2DPaneFP16J2DAnmTexPattern();
extern "C" void getMaterial__12J2DTextBoxExCFv();
extern "C" bool getMaterial__10J2DTextBoxCFv();
extern "C" void getMaterial__12J2DPictureExCFv();
extern "C" bool getMaterial__10J2DPictureCFv();
extern "C" void setAnimation__12J2DTextBoxExFP15J2DAnmTransform();
extern "C" void setAnimation__12J2DPictureExFP15J2DAnmTransform();
extern "C" void setAnimation__11J2DWindowExFP15J2DAnmTransform();

//
// External References:
//

extern "C" void setAnimation__7J2DPaneFP15J2DAnmTransform();

//
// Declarations:
//

/* 80256018-8025601C 250958 0004+00 0/0 4/0 0/0 .text setAnimation__7J2DPaneFP14J2DAnmVtxColor */
void J2DPane::setAnimation(J2DAnmVtxColor* param_0) {
    /* empty function */
}

/* 8025601C-80256020 25095C 0004+00 0/0 4/0 0/0 .text
 * setAnimation__7J2DPaneFP20J2DAnmVisibilityFull               */
void J2DPane::setAnimation(J2DAnmVisibilityFull* param_0) {
    /* empty function */
}

/* 80256020-80256024 250960 0004+00 0/0 4/0 0/0 .text setAnimation__7J2DPaneFP16J2DAnmTexPattern
 */
void J2DPane::setAnimation(J2DAnmTexPattern* param_0) {
    /* empty function */
}

/* 80256024-8025602C 250964 0008+00 0/0 1/0 0/0 .text            getMaterial__12J2DTextBoxExCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::getMaterial() const {
    nofralloc
#include "asm/d/pane/d_pane_class_ex/getMaterial__12J2DTextBoxExCFv.s"
}
#pragma pop

/* 8025602C-80256034 25096C 0008+00 0/0 1/0 0/0 .text            getMaterial__10J2DTextBoxCFv */
bool J2DTextBox::getMaterial() const {
    return false;
}

/* 80256034-8025603C 250974 0008+00 0/0 1/0 0/0 .text            getMaterial__12J2DPictureExCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPictureEx::getMaterial() const {
    nofralloc
#include "asm/d/pane/d_pane_class_ex/getMaterial__12J2DPictureExCFv.s"
}
#pragma pop

/* 8025603C-80256044 25097C 0008+00 0/0 1/0 0/0 .text            getMaterial__10J2DPictureCFv */
bool J2DPicture::getMaterial() const {
    return false;
}

/* 80256044-80256064 250984 0020+00 0/0 1/0 0/0 .text
 * setAnimation__12J2DTextBoxExFP15J2DAnmTransform              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DTextBoxEx::setAnimation(J2DAnmTransform* param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class_ex/setAnimation__12J2DTextBoxExFP15J2DAnmTransform.s"
}
#pragma pop

/* 80256064-80256084 2509A4 0020+00 0/0 1/0 0/0 .text
 * setAnimation__12J2DPictureExFP15J2DAnmTransform              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DPictureEx::setAnimation(J2DAnmTransform* param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class_ex/setAnimation__12J2DPictureExFP15J2DAnmTransform.s"
}
#pragma pop

/* 80256084-802560A4 2509C4 0020+00 0/0 1/0 0/0 .text
 * setAnimation__11J2DWindowExFP15J2DAnmTransform               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DWindowEx::setAnimation(J2DAnmTransform* param_0) {
    nofralloc
#include "asm/d/pane/d_pane_class_ex/setAnimation__11J2DWindowExFP15J2DAnmTransform.s"
}
#pragma pop
