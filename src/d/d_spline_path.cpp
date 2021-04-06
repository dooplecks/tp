//
// Generated By: dol2asm
// Translation Unit: d/d_spline_path
//

#include "d/d_spline_path.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dPath {};

struct dPathCurve {
    /* 80097C5C */ void Init(dPath*);
    /* 80097C74 */ void bSpline2(f32);
};

struct cXyz {};

struct d2DBSplinePath {
    /* 80097878 */ void Init(s32, s32);
    /* 80097904 */ void Step();
    /* 80097B20 */ void Calc(f32*);
    /* 80097A6C */ void Calc(cXyz*);
    /* 80097B68 */ void Spot(f32*, f32);
};

//
// Forward References:
//

extern "C" void Init__14d2DBSplinePathFll();
extern "C" void Step__14d2DBSplinePathFv();
extern "C" void Calc__14d2DBSplinePathFP4cXyz();
extern "C" void Calc__14d2DBSplinePathFPf();
extern "C" void Spot__14d2DBSplinePathFPff();
extern "C" void Init__10dPathCurveFP5dPath();
extern "C" void bSpline2__10dPathCurveFf();

//
// External References:
//

extern "C" void PSVECAdd();

//
// Declarations:
//

/* ############################################################################################## */
/* 80452BC8-80452BD0 0011C8 0008+00 4/4 0/0 0/0 .sdata2          @3632 */
SECTION_SDATA2 static f64 lit_3632 = 4503601774854144.0 /* cast s32 to float */;

/* 80097878-80097904 0921B8 008C+00 0/0 7/7 0/0 .text            Init__14d2DBSplinePathFll */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void d2DBSplinePath::Init(s32 param_0, s32 param_1) {
    nofralloc
#include "asm/d/d_spline_path/Init__14d2DBSplinePathFll.s"
}
#pragma pop

/* ############################################################################################## */
/* 80452BD0-80452BD4 0011D0 0004+00 3/3 0/0 0/0 .sdata2          @3684 */
SECTION_SDATA2 static f32 lit_3684 = 1.0f;

/* 80452BD4-80452BD8 0011D4 0004+00 3/3 0/0 0/0 .sdata2          @3685 */
SECTION_SDATA2 static f32 lit_3685 = 0.5f;

/* 80097904-80097A6C 092244 0168+00 0/0 5/5 0/0 .text            Step__14d2DBSplinePathFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void d2DBSplinePath::Step() {
    nofralloc
#include "asm/d/d_spline_path/Step__14d2DBSplinePathFv.s"
}
#pragma pop

/* 80097A6C-80097B20 0923AC 00B4+00 0/0 1/1 0/0 .text            Calc__14d2DBSplinePathFP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void d2DBSplinePath::Calc(cXyz* param_0) {
    nofralloc
#include "asm/d/d_spline_path/Calc__14d2DBSplinePathFP4cXyz.s"
}
#pragma pop

/* 80097B20-80097B68 092460 0048+00 0/0 5/5 0/0 .text            Calc__14d2DBSplinePathFPf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void d2DBSplinePath::Calc(f32* param_0) {
    nofralloc
#include "asm/d/d_spline_path/Calc__14d2DBSplinePathFPf.s"
}
#pragma pop

/* 80097B68-80097C5C 0924A8 00F4+00 0/0 1/1 0/0 .text            Spot__14d2DBSplinePathFPff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void d2DBSplinePath::Spot(f32* param_0, f32 param_1) {
    nofralloc
#include "asm/d/d_spline_path/Spot__14d2DBSplinePathFPff.s"
}
#pragma pop

/* 80097C5C-80097C74 09259C 0018+00 0/0 0/0 1/1 .text            Init__10dPathCurveFP5dPath */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPathCurve::Init(dPath* param_0) {
    nofralloc
#include "asm/d/d_spline_path/Init__10dPathCurveFP5dPath.s"
}
#pragma pop

/* 80097C74-80097E8C 0925B4 0218+00 0/0 0/0 1/1 .text            bSpline2__10dPathCurveFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dPathCurve::bSpline2(f32 param_0) {
    nofralloc
#include "asm/d/d_spline_path/bSpline2__10dPathCurveFf.s"
}
#pragma pop
