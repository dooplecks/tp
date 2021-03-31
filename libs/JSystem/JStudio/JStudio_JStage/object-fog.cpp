// 
// Generated By: dol2asm
// Translation Unit: object-fog
// 

#include "dol2asm.h"
#include "dolphin/types.h"
#include "JSystem/JStudio/JStudio_JStage/object-fog.h"

// 
// Types:
// 

struct _GXColor {
};

struct JStage {
	struct TSystem {
	};

	struct TFog {
	};

};

namespace JStudio {
	struct TAdaptor {
		/* 802862AC */ // False False
//  u32 const* False
// 	 u32 const False
// 		 u32 False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
void adaptor_setVariableValue_GXColor(u32 const*, _GXColor const&);
		/* 8028638C */ // False False
//  _GXColor* False
// 	 _GXColor False
//  u32 const* False
// 	 u32 const False
// 		 u32 False
void adaptor_getVariableValue_GXColor(_GXColor*, u32 const*) const;
	};

	struct TVariableValue {
		struct TOutput {
			/* 80285E0C */ // False False
~TOutput();
		};

		/* 80285EB8 */ // False False
//  JStudio::TVariableValue* False
// 	 JStudio::TVariableValue False
//  f64 False
void update_immediate_(JStudio::TVariableValue*, f64);
		/* 8028B568 */ // False False
TVariableValue();
	};

	struct TAdaptor_fog {
		/* 8028717C */ // False False
~TAdaptor_fog();
	};

};

struct JStudio_JStage {
	struct TAdaptor_fog {
		/* 8028C574 */ // False False
//  JStage::TSystem const* False
// 	 JStage::TSystem const False
// 		 JStage::TSystem False
//  JStage::TFog* False
// 	 JStage::TFog False
TAdaptor_fog(JStage::TSystem const*, JStage::TFog*);
		/* 8028C610 */ // True False
~TAdaptor_fog();
		/* 8028C684 */ // True False
void adaptor_do_prepare();
		/* 8028C6CC */ // True False
void adaptor_do_begin();
		/* 8028C7B4 */ // True False
void adaptor_do_end();
		/* 8028C808 */ // True False
//  u32 False
void adaptor_do_update(u32);
		/* 8028C880 */ // True False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
void adaptor_do_data(void const*, u32, void const*, u32);
	};

	template <typename A1, typename B1>
	struct TVariableValueOutput_object_ { };
	/* TVariableValueOutput_object_<JStudio_JStage::TAdaptor_fog, JStage::TFog> */
	struct TVariableValueOutput_object___template2 {
		/* 8028CAC0 */ // False True
~TVariableValueOutput_object___template2();
		/* 8028CB20 */ // False True
//  f32 False
//  JStudio::TAdaptor* False
// 	 JStudio::TAdaptor False
void operator()(f32, JStudio::TAdaptor*) const;
	};

	struct TAdaptor_object_ {
		/* 8028A470 */ // False False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
void adaptor_object_data_(void const*, u32, void const*, u32);
	};

};

// 
// Forward References:
// 


// False False
//  JStage::TSystem const* False
// 	 JStage::TSystem const False
// 		 JStage::TSystem False
//  JStage::TFog* False
// 	 JStage::TFog False
extern "C" void __ct__Q214JStudio_JStage12TAdaptor_fogFPCQ26JStage7TSystemPQ26JStage4TFog();
// True False
extern "C" void __dt__Q214JStudio_JStage12TAdaptor_fogFv();
// True False
extern "C" void adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFv();
// True False
extern "C" void adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFv();
// True False
extern "C" void adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFv();
// True False
//  u32 False
extern "C" void adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFUl();
// True False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
extern "C" void adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCvUlPCvUl();
// False False
extern "C" void func_8028C8A4();
// False True
extern "C" void func_8028CAC0();
// False True
//  f32 False
//  JStudio::TAdaptor* False
// 	 JStudio::TAdaptor False
extern "C" void func_8028CB20();
extern "C" extern u8 object_fog__lit_845[12];
extern "C" extern u8 object_fog__lit_849[12];
extern "C" extern u8 object_fog__lit_850[12];
extern "C" extern void* __vt__Q214JStudio_JStage12TAdaptor_fog[8 + 8 /* padding */];
extern "C" extern void* data_803C5A10[4 + 4 /* padding */];
extern "C" extern u8 object_fog__lit_853[12];
extern "C" extern u8 object_fog__lit_854[12];

// 
// External References:
// 

// False False
//  void False
//  void* False
// 	 void False
void operator delete(void*);

// False False
extern "C" void __dt__Q37JStudio14TVariableValue7TOutputFv();
// False False
//  JStudio::TVariableValue* False
// 	 JStudio::TVariableValue False
//  f64 False
extern "C" void update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued();
// False False
//  u32 const* False
// 	 u32 const False
// 		 u32 False
//  _GXColor const& False
// 	 _GXColor const False
// 		 _GXColor False
extern "C" void adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor();
// False False
//  _GXColor* False
// 	 _GXColor False
//  u32 const* False
// 	 u32 const False
// 		 u32 False
extern "C" void adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl();
// False False
extern "C" void __dt__Q27JStudio12TAdaptor_fogFv();
// False False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
extern "C" void adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl();
// False False
extern "C" void __ct__Q27JStudio14TVariableValueFv();
// False False
//  void False
//  void* False
// 	 void False
extern "C" void __dl__FPv();
// False False
extern "C" void __register_global_object();
// False False
extern "C" void __construct_array();
// False False
extern "C" void __ptmf_scall();
// False False
extern "C" void _savegpr_27();
// False False
extern "C" void _savegpr_29();
// False False
extern "C" void _restgpr_27();
// False False
extern "C" void _restgpr_29();
extern "C" extern u8 const sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog[16];
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern void* __vt__Q27JStudio12TAdaptor_fog[8];
extern "C" extern void* __vt__Q27JStudio8TAdaptor[8];
extern "C" extern void* __vt__Q37JStudio14TVariableValue7TOutput[4];
extern "C" extern u8 soOutput_none___Q27JStudio14TVariableValue[4 + 4 /* padding */];

// 
// Declarations:
// 

/* ############################################################################################## */
/* 803C59A0-803C59AC 000C+00 s=1 e=0 z=0  None .data      @844                                                         */
SECTION_DATA static u8 lit_844[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00,
};

/* 803C59AC-803C59B8 000C+00 s=0 e=0 z=0  None .data      @845                                                         */
SECTION_DATA u8 object_fog__lit_845[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00,
};

/* 803C59B8-803C59C4 000C+00 s=0 e=0 z=0  None .data      @849                                                         */
SECTION_DATA u8 object_fog__lit_849[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00,
};

/* 803C59C4-803C59D0 000C+00 s=0 e=0 z=0  None .data      @850                                                         */
SECTION_DATA u8 object_fog__lit_850[12] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x00, 0x00, 0x00, 0x00,
};

/* 803C59D0-803C5A10 0020+20 s=2 e=0 z=0  None .data      __vt__Q214JStudio_JStage12TAdaptor_fog                       */
SECTION_DATA void* __vt__Q214JStudio_JStage12TAdaptor_fog[8 + 8 /* padding */] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)__dt__Q214JStudio_JStage12TAdaptor_fogFv,
	(void*)adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFv,
	(void*)adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFv,
	(void*)adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFv,
	(void*)adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFUl,
	(void*)adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCvUlPCvUl,
	/* padding */
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};

/* 8028C574-8028C610 009C+00 s=0 e=1 z=0  None .text      __ct__Q214JStudio_JStage12TAdaptor_fogFPCQ26JStage7TSystemPQ26JStage4TFog */
//	8028C584: 803621DC (_savegpr_29)
//	8028C598: 803C5610 (__vt__Q27JStudio8TAdaptor)
//	8028C59C: 803C5610 (__vt__Q27JStudio8TAdaptor)
//	8028C5BC: 803C54C4 (__vt__Q27JStudio12TAdaptor_fog)
//	8028C5C0: 803C54C4 (__vt__Q27JStudio12TAdaptor_fog)
//	8028C5C8: 8028B568 (__ct__Q27JStudio14TVariableValueFv)
//	8028C5CC: 8028B568 (__ct__Q27JStudio14TVariableValueFv)
//	8028C5DC: 80361D60 (__construct_array)
//	8028C5E8: 803C59D0 (__vt__Q214JStudio_JStage12TAdaptor_fog)
//	8028C5EC: 803C59D0 (__vt__Q214JStudio_JStage12TAdaptor_fog)
//	8028C5FC: 80362228 (_restgpr_29)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
//  JStage::TSystem const* False
// 	 JStage::TSystem const False
// 		 JStage::TSystem False
//  JStage::TFog* False
// 	 JStage::TFog False
asm JStudio_JStage::TAdaptor_fog::TAdaptor_fog(JStage::TSystem const* param_0, JStage::TFog* param_1) {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/func_8028C574.s"
}
#pragma pop


/* 8028C610-8028C684 0074+00 s=1 e=0 z=0  None .text      __dt__Q214JStudio_JStage12TAdaptor_fogFv                     */
//	8028C630: 803C59D0 (__vt__Q214JStudio_JStage12TAdaptor_fog)
//	8028C634: 803C59D0 (__vt__Q214JStudio_JStage12TAdaptor_fog)
//	8028C654: 8028717C (__dt__Q27JStudio12TAdaptor_fogFv)
//	8028C664: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm JStudio_JStage::TAdaptor_fog::~TAdaptor_fog() {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/__dt__Q214JStudio_JStage12TAdaptor_fogFv.s"
}
#pragma pop


/* ############################################################################################## */
/* 80431378-80431384 000C+00 s=1 e=0 z=0  None .bss       @848                                                         */
static u8 lit_848[12];

/* 80431384-80431390 000C+00 s=0 e=0 z=0  None .bss       @853                                                         */
u8 object_fog__lit_853[12];

/* 80431390-8043139C 000C+00 s=0 e=0 z=0  None .bss       @854                                                         */
u8 object_fog__lit_854[12];

/* 8043139C-80431400 0060+04 s=2 e=0 z=0  None .bss       saoVVOutput___Q214JStudio_JStage12TAdaptor_fog               */
static u8 saoVVOutput___Q214JStudio_JStage12TAdaptor_fog[96 + 4 /* padding */];

/* 8028C684-8028C6CC 0048+00 s=1 e=0 z=0  None .text      adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFv       */
//	8028C684: 8043139C (saoVVOutput___Q214JStudio_JStage12TAdaptor_fog)
//	8028C688: 8043139C (saoVVOutput___Q214JStudio_JStage12TAdaptor_fog)
//	8028C6B0: 804511F0 (soOutput_none___Q27JStudio14TVariableValue)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_prepare() {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_prepare__Q214JStudio_JStage12TAdaptor_fogFv.s"
}
#pragma pop


/* 8028C6CC-8028C7B4 00E8+00 s=1 e=0 z=0  None .text      adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFv         */
//	8028C6DC: 803621D4 (_savegpr_27)
//	8028C734: 8039AACC (sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog)
//	8028C738: 8039AACC (sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog)
//	8028C740: 802862AC (adaptor_setVariableValue_GXColor__Q27JStudio8TAdaptorFPCUlRC8_GXColor)
//	8028C744: 8043139C (saoVVOutput___Q214JStudio_JStage12TAdaptor_fog)
//	8028C748: 8043139C (saoVVOutput___Q214JStudio_JStage12TAdaptor_fog)
//	8028C750: 80285EB8 (update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued)
//	8028C754: 80285EB8 (update_immediate___Q27JStudio14TVariableValueFPQ27JStudio14TVariableValued)
//	8028C768: 80362084 (__ptmf_scall)
//	8028C7A0: 80362220 (_restgpr_27)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_begin() {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_begin__Q214JStudio_JStage12TAdaptor_fogFv.s"
}
#pragma pop


/* 8028C7B4-8028C808 0054+00 s=1 e=0 z=0  None .text      adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFv           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_end() {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_end__Q214JStudio_JStage12TAdaptor_fogFv.s"
}
#pragma pop


/* 8028C808-8028C880 0078+00 s=1 e=0 z=0  None .text      adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFUl       */
//	8028C828: 8039AACC (sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog)
//	8028C82C: 8039AACC (sauVariableValue_4_COLOR_RGBA__Q27JStudio12TAdaptor_fog)
//	8028C830: 8028638C (adaptor_getVariableValue_GXColor__Q27JStudio8TAdaptorCFP8_GXColorPCUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  u32 False
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_update(u32 param_0) {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_update__Q214JStudio_JStage12TAdaptor_fogFUl.s"
}
#pragma pop


/* 8028C880-8028C8A4 0024+00 s=1 e=0 z=0  None .text      adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCvUlPCvUl */
//	8028C890: 8028A470 (adaptor_object_data___Q214JStudio_JStage16TAdaptor_object_FPCvUlPCvUl)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// True False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
//  void const* False
// 	 void const False
// 		 void False
//  u32 False
asm void JStudio_JStage::TAdaptor_fog::adaptor_do_data(void const* param_0, u32 param_1, void const* param_2, u32 param_3) {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/adaptor_do_data__Q214JStudio_JStage12TAdaptor_fogFPCvUlPCvUl.s"
}
#pragma pop


/* ############################################################################################## */
/* 803C5A10-803C5A30 0010+10 s=2 e=0 z=0  None .data      __vt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog> */
SECTION_DATA void* data_803C5A10[4 + 4 /* padding */] = {
	(void*)NULL /* RTTI */,
	(void*)NULL,
	(void*)func_8028CB20,
	(void*)func_8028CAC0,
	/* padding */
	NULL,
	NULL,
	NULL,
	NULL,
};

/* 8028C8A4-8028CAC0 021C+00 s=0 e=0 z=0  None .text      __sinit_object-fog_cpp                                       */
//	8028C8B8: 80431378 (lit_848)
//	8028C8BC: 80431378 (lit_848)
//	8028C8C0: 803C59A0 (lit_844)
//	8028C8C4: 803C59A0 (lit_844)
//	8028C8C8: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C8CC: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C8D4: 803C5A10 (data_803C5A10)
//	8028C8D8: 803C5A10 (data_803C5A10)
//	8028C940: 8028CAC0 (func_8028CAC0)
//	8028C944: 8028CAC0 (func_8028CAC0)
//	8028C94C: 80361C24 (__register_global_object)
//	8028C950: 803C5A10 (data_803C5A10)
//	8028C954: 803C5A10 (data_803C5A10)
//	8028C964: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
//	8028C968: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C96C: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028C974: 803C5A10 (data_803C5A10)
//	8028C978: 803C5A10 (data_803C5A10)
//	8028C9E4: 8028CAC0 (func_8028CAC0)
//	8028C9E8: 8028CAC0 (func_8028CAC0)
//	8028C9F0: 80361C24 (__register_global_object)
//	8028C9F4: 803C5A10 (data_803C5A10)
//	8028C9F8: 803C5A10 (data_803C5A10)
//	8028CA08: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
//	8028CA0C: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028CA10: 803C5640 (__vt__Q37JStudio14TVariableValue7TOutput)
//	8028CA18: 803C5A10 (data_803C5A10)
//	8028CA1C: 803C5A10 (data_803C5A10)
//	8028CA2C: 803A2180 (__ptmf_null)
//	8028CA30: 803A2180 (__ptmf_null)
//	8028CA80: 8028CAC0 (func_8028CAC0)
//	8028CA84: 8028CAC0 (func_8028CAC0)
//	8028CA8C: 80361C24 (__register_global_object)
//	8028CA90: 803C5A10 (data_803C5A10)
//	8028CA94: 803C5A10 (data_803C5A10)
//	8028CAA4: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False False
extern "C" asm void func_8028C8A4() {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/func_8028C8A4.s"
}
#pragma pop

#pragma push
#pragma force_active on
#pragma section ".ctors$15"
__declspec(section ".ctors$15") void* const _ctors_8028C8A4 = (void*)func_8028C8A4;
#pragma pop


/* 8028CAC0-8028CB20 0060+00 s=2 e=0 z=0  None .text      __dt__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>Fv */
//	8028CAE0: 803C5A10 (data_803C5A10)
//	8028CAE4: 803C5A10 (data_803C5A10)
//	8028CAF0: 80285E0C (__dt__Q37JStudio14TVariableValue7TOutputFv)
//	8028CB00: 802CED3C (__dl__FPv)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
asm JStudio_JStage::TVariableValueOutput_object___template2::~TVariableValueOutput_object___template2() {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/func_8028CAC0.s"
}
#pragma pop


/* 8028CB20-8028CB50 0030+00 s=1 e=0 z=0  None .text      __cl__Q214JStudio_JStage77TVariableValueOutput_object_<Q214JStudio_JStage12TAdaptor_fog,Q26JStage4TFog>CFfPQ27JStudio8TAdaptor */
//	8028CB38: 80362084 (__ptmf_scall)
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// False True
//  f32 False
//  JStudio::TAdaptor* False
// 	 JStudio::TAdaptor False
asm void JStudio_JStage::TVariableValueOutput_object___template2::operator()(f32 param_0, JStudio::TAdaptor* param_1) const {
	nofralloc
#include "asm/JSystem/JStudio/JStudio_JStage/object-fog/func_8028CB20.s"
}
#pragma pop


