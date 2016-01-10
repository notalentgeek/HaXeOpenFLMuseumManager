#include <hxcpp.h>

#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionPremadeTag
#include <CollectionPremadeTag.h>
#endif
#ifndef INCLUDED_EnumTagFeelType
#include <EnumTagFeelType.h>
#endif
#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif
#ifndef INCLUDED_EnumTagTypeSub
#include <EnumTagTypeSub.h>
#endif

Void CollectionPremadeTag_obj::__construct()
{
HX_STACK_FRAME("CollectionPremadeTag","new",0x99899cd2,"CollectionPremadeTag.new","CollectionPremadeTag.hx",3,0xe1b162de)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CollectionPremadeTag_obj::~CollectionPremadeTag_obj() { }

Dynamic CollectionPremadeTag_obj::__CreateEmpty() { return  new CollectionPremadeTag_obj; }
hx::ObjectPtr< CollectionPremadeTag_obj > CollectionPremadeTag_obj::__new()
{  hx::ObjectPtr< CollectionPremadeTag_obj > _result_ = new CollectionPremadeTag_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionPremadeTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionPremadeTag_obj > _result_ = new CollectionPremadeTag_obj();
	_result_->__construct();
	return _result_;}

Void CollectionPremadeTag_obj::PremadeTagStructVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVoid",0xf0ef6e19,"CollectionPremadeTag.PremadeTagStructVoid","CollectionPremadeTag.hx",4,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(5)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5)
		::CollectionPremadeTag_obj::PremadeTagStructAdjVoid(tmp);
		HX_STACK_LINE(6)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6)
		::CollectionPremadeTag_obj::PremadeTagStructAdvVoid(tmp1);
		HX_STACK_LINE(7)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7)
		::CollectionPremadeTag_obj::PremadeTagStructNounAliveAbstractVoid(tmp2);
		HX_STACK_LINE(8)
		::CollectionGlobal tmp3 = _collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8)
		::CollectionPremadeTag_obj::PremadeTagStructNounAliveConcreteVoid(tmp3);
		HX_STACK_LINE(9)
		::CollectionGlobal tmp4 = _collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(9)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldAbstractVoid(tmp4);
		HX_STACK_LINE(10)
		::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(10)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldConcreteVoid(tmp5);
		HX_STACK_LINE(11)
		::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(11)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceAbstractVoid(tmp6);
		HX_STACK_LINE(12)
		::CollectionGlobal tmp7 = _collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(12)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid(tmp7);
		HX_STACK_LINE(13)
		::CollectionGlobal tmp8 = _collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(13)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteOwnerVoid(tmp8);
		HX_STACK_LINE(14)
		::CollectionGlobal tmp9 = _collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(14)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateTitleAbstractVoid(tmp9);
		HX_STACK_LINE(15)
		::CollectionGlobal tmp10 = _collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(15)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearAbstractVoid(tmp10);
		HX_STACK_LINE(16)
		::CollectionGlobal tmp11 = _collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(16)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearConcreteVoid(tmp11);
		HX_STACK_LINE(17)
		::CollectionGlobal tmp12 = _collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(17)
		::CollectionPremadeTag_obj::PremadeTagStructVerbVoidIntransitiveVoid(tmp12);
		HX_STACK_LINE(18)
		::CollectionGlobal tmp13 = _collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(18)
		::CollectionPremadeTag_obj::PremadeTagStructVerbVoidTransitiveVoid(tmp13);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructAdjVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructAdjVoid",0x8fba1f76,"CollectionPremadeTag.PremadeTagStructAdjVoid","CollectionPremadeTag.hx",20,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",23,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("awful","\x07","\x75","\xd4","\x28"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",22,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADJ,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",33,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bad","\xc5","\xb1","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(33)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",32,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp2,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADJ,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",43,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("excellent","\x76","\xff","\xb2","\xf6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(43)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",42,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADJ,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		Dynamic tmp5 = _Function_1_6::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",53,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("good","\x3d","\x95","\x69","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",52,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADJ,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(52)
		Dynamic tmp7 = _Function_1_8::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",63,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(63)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",62,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp8,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADJ,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(62)
		Dynamic tmp9 = _Function_1_10::Block(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(61)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructAdjVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructAdvVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructAdvVoid",0x78891582,"CollectionPremadeTag.PremadeTagStructAdvVoid","CollectionPremadeTag.hx",72,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",75,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADV,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desperately","\xf4","\x4c","\x46","\x20"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(75)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",74,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADV,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(74)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",85,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADV,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("slowly","\xce","\x7e","\x0a","\x74"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(85)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",84,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp2,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADV,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(84)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",95,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADV,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("perfectly","\xda","\xc0","\xbb","\x90"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(95)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",94,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADV,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(94)
		Dynamic tmp5 = _Function_1_6::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",105,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADV,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("quickly","\xba","\x3a","\x8f","\xd9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(105)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",104,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::ADV,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(104)
		Dynamic tmp7 = _Function_1_8::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(103)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructAdvVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounAliveAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounAliveAbstractVoid",0xaab17224,"CollectionPremadeTag.PremadeTagStructNounAliveAbstractVoid","CollectionPremadeTag.hx",114,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",117,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasin","\x18","\x85","\x36","\x34"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(117)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",121,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasin's","\x84","\x1d","\xb4","\x92"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(121)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",125,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasins","\x5b","\xf0","\x7d","\x7b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(125)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",129,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasins'","\x6c","\x5f","\xb4","\x92"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(129)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",116,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp1,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp2,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp3,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(116)
		Dynamic tmp4 = _Function_1_5::Block(tmp,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(115)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",139,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("boy","\x0c","\xbe","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(139)
		Dynamic tmp5 = _Function_1_6::Block();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",143,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("boy's","\x78","\x7b","\xff","\xb6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(143)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",147,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("boys","\xe7","\x8c","\x1b","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(147)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",151,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("boys'","\x60","\xbd","\xff","\xb6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(151)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp6,Dynamic &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",138,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp5,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp6,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp7,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp8,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(138)
		Dynamic tmp9 = _Function_1_10::Block(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(137)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",161,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dragon","\x13","\x72","\xca","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(161)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",165,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dragon's","\x3f","\x7f","\xd9","\x3c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(165)
		Dynamic tmp11 = _Function_1_12::Block();		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",169,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dragons","\x00","\x5f","\x59","\xf1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(169)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",173,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dragons'","\x27","\xc1","\xd9","\x3c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(173)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp11,Dynamic &tmp10,Dynamic &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",160,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp10,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp11,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp12,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp13,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(160)
		Dynamic tmp14 = _Function_1_15::Block(tmp13,tmp11,tmp10,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(159)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
		struct _Function_1_16{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",183,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("iraqi","\x30","\x39","\xb7","\xc0"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(183)
		Dynamic tmp15 = _Function_1_16::Block();		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_17{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",187,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("iraqi's","\x9c","\x07","\xdc","\xc7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(187)
		Dynamic tmp16 = _Function_1_17::Block();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_18{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",191,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("iraqis","\x43","\xd1","\x9a","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(191)
		Dynamic tmp17 = _Function_1_18::Block();		HX_STACK_VAR(tmp17,"tmp17");
		struct _Function_1_19{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",195,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("iraqis'","\x84","\x49","\xdc","\xc7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(195)
		Dynamic tmp18 = _Function_1_19::Block();		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_20{
			inline static Dynamic Block( Dynamic &tmp17,Dynamic &tmp15,Dynamic &tmp16,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",182,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp15,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp16,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp17,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp18,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(182)
		Dynamic tmp19 = _Function_1_20::Block(tmp17,tmp15,tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(181)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
		struct _Function_1_21{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",205,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("italian","\xc0","\xe1","\x44","\x91"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(205)
		Dynamic tmp20 = _Function_1_21::Block();		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_22{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",209,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("italian's","\x2c","\xf4","\x90","\x15"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(209)
		Dynamic tmp21 = _Function_1_22::Block();		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_23{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",213,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("italian","\xc0","\xe1","\x44","\x91"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(213)
		Dynamic tmp22 = _Function_1_23::Block();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_24{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",217,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("italian'","\x67","\xa6","\x00","\x8b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(217)
		Dynamic tmp23 = _Function_1_24::Block();		HX_STACK_VAR(tmp23,"tmp23");
		struct _Function_1_25{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp20,Dynamic &tmp23,Dynamic &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",204,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp20,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp21,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp22,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp23,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(204)
		Dynamic tmp24 = _Function_1_25::Block(tmp22,tmp20,tmp23,tmp21);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(203)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp24);
		struct _Function_1_26{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",227,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painter","\x8b","\xb3","\x22","\xb8"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(227)
		Dynamic tmp25 = _Function_1_26::Block();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_27{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",231,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painter's","\xb7","\x0e","\xdf","\x0c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(231)
		Dynamic tmp26 = _Function_1_27::Block();		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_1_28{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",235,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painters","\x88","\x66","\x3a","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(235)
		Dynamic tmp27 = _Function_1_28::Block();		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_29{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",239,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painters'","\x9f","\x50","\xdf","\x0c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(239)
		Dynamic tmp28 = _Function_1_29::Block();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_30{
			inline static Dynamic Block( Dynamic &tmp28,Dynamic &tmp26,Dynamic &tmp25,Dynamic &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",226,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp25,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp26,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp27,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp28,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(226)
		Dynamic tmp29 = _Function_1_30::Block(tmp28,tmp26,tmp25,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(225)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
		struct _Function_1_31{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",249,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("romanian","\xb9","\x62","\x0f","\x38"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(249)
		Dynamic tmp30 = _Function_1_31::Block();		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_1_32{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",253,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("romanian's","\x65","\x65","\xb8","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(253)
		Dynamic tmp31 = _Function_1_32::Block();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_33{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",257,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("romanians","\x9a","\xff","\x66","\xd5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(257)
		Dynamic tmp32 = _Function_1_33::Block();		HX_STACK_VAR(tmp32,"tmp32");
		struct _Function_1_34{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",261,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("romanians'","\x4d","\xa7","\xb8","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(261)
		Dynamic tmp33 = _Function_1_34::Block();		HX_STACK_VAR(tmp33,"tmp33");
		struct _Function_1_35{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp31,Dynamic &tmp32,Dynamic &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",248,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp30,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp31,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp32,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp33,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(248)
		Dynamic tmp34 = _Function_1_35::Block(tmp33,tmp31,tmp32,tmp30);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(247)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp34);
		struct _Function_1_36{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",271,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("russian","\x53","\x5a","\xb8","\xcf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(271)
		Dynamic tmp35 = _Function_1_36::Block();		HX_STACK_VAR(tmp35,"tmp35");
		struct _Function_1_37{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",275,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("russian's","\x7f","\xf7","\x41","\x72"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(275)
		Dynamic tmp36 = _Function_1_37::Block();		HX_STACK_VAR(tmp36,"tmp36");
		struct _Function_1_38{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",279,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("russians","\xc0","\xae","\x96","\xf1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(279)
		Dynamic tmp37 = _Function_1_38::Block();		HX_STACK_VAR(tmp37,"tmp37");
		struct _Function_1_39{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",283,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("russians'","\x67","\x39","\x42","\x72"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(283)
		Dynamic tmp38 = _Function_1_39::Block();		HX_STACK_VAR(tmp38,"tmp38");
		struct _Function_1_40{
			inline static Dynamic Block( Dynamic &tmp36,Dynamic &tmp38,Dynamic &tmp37,Dynamic &tmp35){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",270,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp35,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp36,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp37,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp38,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(270)
		Dynamic tmp39 = _Function_1_40::Block(tmp36,tmp38,tmp37,tmp35);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(269)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp39);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounAliveAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounAliveConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounAliveConcreteVoid",0xc563b907,"CollectionPremadeTag.PremadeTagStructNounAliveConcreteVoid","CollectionPremadeTag.hx",292,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",295,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(295)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",299,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Andy's","\xce","\x8c","\xbb","\x95"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(299)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",294,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp1,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(294)
		Dynamic tmp2 = _Function_1_3::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",309,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Bodhisattva","\xd1","\xa6","\xa8","\x6c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(309)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",313,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Bodhisattva's","\x7d","\xdf","\x3c","\x65"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(313)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",308,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp3,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(308)
		Dynamic tmp5 = _Function_1_6::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(307)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",323,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Buddha","\xec","\x41","\xd5","\x03"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(323)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",327,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Buddha's","\x58","\xb7","\x1a","\x95"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(327)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",322,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp7,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(322)
		Dynamic tmp8 = _Function_1_9::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(321)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",337,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Dimitri","\x8a","\x79","\x99","\x0f"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(337)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",341,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Dimitri's","\x76","\x92","\x12","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(341)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp10){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",336,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp9,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp10,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(336)
		Dynamic tmp11 = _Function_1_12::Block(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(335)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",351,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Julius Caesar","\xf7","\x7a","\x10","\xa6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(351)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",355,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Julius Caesar's","\x23","\x89","\x5e","\xa7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(355)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",350,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp12,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp13,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(350)
		Dynamic tmp14 = _Function_1_15::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(349)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
		struct _Function_1_16{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",365,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Maria","\xd6","\x39","\x4f","\x96"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(365)
		Dynamic tmp15 = _Function_1_16::Block();		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_17{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",369,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Maria's","\xc2","\xfd","\xf1","\x33"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(369)
		Dynamic tmp16 = _Function_1_17::Block();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_18{
			inline static Dynamic Block( Dynamic &tmp15,Dynamic &tmp16){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",364,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp15,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp16,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(364)
		Dynamic tmp17 = _Function_1_18::Block(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(363)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
		struct _Function_1_19{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",379,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Medusa","\xd7","\xe1","\x65","\x33"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(379)
		Dynamic tmp18 = _Function_1_19::Block();		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_20{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",383,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Medusa's","\x03","\x68","\x03","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(383)
		Dynamic tmp19 = _Function_1_20::Block();		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_21{
			inline static Dynamic Block( Dynamic &tmp19,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",378,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp18,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp19,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(378)
		Dynamic tmp20 = _Function_1_21::Block(tmp19,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(377)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
		struct _Function_1_22{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",393,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(393)
		Dynamic tmp21 = _Function_1_22::Block();		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_23{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",397,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Mikael's","\xa5","\x8b","\x9c","\x27"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(397)
		Dynamic tmp22 = _Function_1_23::Block();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_24{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",392,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp21,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp22,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(392)
		Dynamic tmp23 = _Function_1_24::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(391)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
		struct _Function_1_25{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",407,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Napoleon","\xea","\xa1","\x23","\x28"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(407)
		Dynamic tmp24 = _Function_1_25::Block();		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_26{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",411,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Napoleon's","\xd6","\x92","\xbf","\x31"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(411)
		Dynamic tmp25 = _Function_1_26::Block();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_27{
			inline static Dynamic Block( Dynamic &tmp24,Dynamic &tmp25){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",406,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp24,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp25,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(406)
		Dynamic tmp26 = _Function_1_27::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(405)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
		struct _Function_1_28{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",421,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Ramses","\xa3","\xb8","\x85","\xeb"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(421)
		Dynamic tmp27 = _Function_1_28::Block();		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_29{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",425,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Ramses'","\x24","\xd6","\x7b","\x29"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(425)
		Dynamic tmp28 = _Function_1_29::Block();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_30{
			inline static Dynamic Block( Dynamic &tmp28,Dynamic &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",420,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp27,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp28,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(420)
		Dynamic tmp29 = _Function_1_30::Block(tmp28,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(419)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
		struct _Function_1_31{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",435,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Sphinx","\xc8","\x28","\x8e","\xf1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(435)
		Dynamic tmp30 = _Function_1_31::Block();		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_1_32{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",439,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Sphinx's","\x34","\x0d","\x00","\x10"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(439)
		Dynamic tmp31 = _Function_1_32::Block();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_33{
			inline static Dynamic Block( Dynamic &tmp31,Dynamic &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",434,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp30,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp31,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(434)
		Dynamic tmp32 = _Function_1_33::Block(tmp31,tmp30);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(433)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp32);
		struct _Function_1_34{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",449,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Washington","\x70","\x1b","\x23","\x73"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(449)
		Dynamic tmp33 = _Function_1_34::Block();		HX_STACK_VAR(tmp33,"tmp33");
		struct _Function_1_35{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",453,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Washington's","\xdc","\xf9","\xb4","\xd6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(453)
		Dynamic tmp34 = _Function_1_35::Block();		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_36{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp34){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",448,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp33,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp34,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(448)
		Dynamic tmp35 = _Function_1_36::Block(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(447)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp35);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounAliveConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateHoldAbstractVoid",0x351a4d12,"CollectionPremadeTag.PremadeTagStructNounInanimateHoldAbstractVoid","CollectionPremadeTag.hx",462,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",465,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grudge","\xd8","\x7d","\x12","\x20"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(465)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",464,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_HOLD_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(464)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateHoldAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateHoldConcreteVoid",0x4fcc93f5,"CollectionPremadeTag.PremadeTagStructNounInanimateHoldConcreteVoid","CollectionPremadeTag.hx",474,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",477,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bat","\xd5","\xb1","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(477)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",481,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bats","\xfe","\xe8","\x10","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(481)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",476,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp1,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(476)
		Dynamic tmp2 = _Function_1_3::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",491,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("gun","\x80","\x8e","\x4e","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(491)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",495,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("guns","\xf3","\x21","\x6e","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(495)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",490,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp3,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(490)
		Dynamic tmp5 = _Function_1_6::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(489)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",505,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("hand","\x6f","\x2b","\x08","\x45"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(505)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",509,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("hands","\x24","\xd6","\x1d","\x22"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(509)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",504,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp7,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(504)
		Dynamic tmp8 = _Function_1_9::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(503)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",519,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("pencil","\xcd","\xf3","\x71","\x38"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(519)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",523,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("pencils","\x06","\x60","\x43","\x2b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(523)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp10){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",518,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp9,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp10,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(518)
		Dynamic tmp11 = _Function_1_12::Block(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(517)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",533,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sword","\xbd","\xb7","\x11","\x86"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(533)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",537,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("swords","\x16","\x0e","\x6f","\xc9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(537)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",532,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp12,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp13,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(532)
		Dynamic tmp14 = _Function_1_15::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(531)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateHoldConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceAbstractVoid",0x6952ee40,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceAbstractVoid","CollectionPremadeTag.hx",546,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",549,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("mind","\x92","\x4e","\x5c","\x48"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(549)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",548,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(548)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",559,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("peace","\x6e","\x76","\xed","\xbf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(559)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",558,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp2,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(558)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid",0x628702b7,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid","CollectionPremadeTag.hx",568,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",571,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("India","\x57","\x0e","\x42","\x51"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(571)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",570,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(570)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(569)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",581,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Italia","\x0e","\xa3","\xf8","\x3a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(581)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",580,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp2,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(580)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(579)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",591,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Netherlands","\x70","\x0e","\x67","\x5f"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(591)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",590,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(590)
		Dynamic tmp5 = _Function_1_6::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(589)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",601,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Russia","\xdb","\x9d","\x80","\x73"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(601)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",600,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(600)
		Dynamic tmp7 = _Function_1_8::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(599)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceConcreteOwnerVoid",0xca93bcf8,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceConcreteOwnerVoid","CollectionPremadeTag.hx",610,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",613,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("country","\x56","\xba","\x59","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(613)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",612,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(612)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(611)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",623,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("harbor","\x4c","\xdc","\xa0","\xba"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(623)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",622,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp2,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(622)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(621)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",633,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("house","\xa0","\x2f","\x64","\x2b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(633)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",632,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(632)
		Dynamic tmp5 = _Function_1_6::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(631)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",643,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("school","\x74","\xb8","\xc8","\x40"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(643)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",642,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(642)
		Dynamic tmp7 = _Function_1_8::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(641)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceConcreteOwnerVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateTitleAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateTitleAbstractVoid",0x06568491,"CollectionPremadeTag.PremadeTagStructNounInanimateTitleAbstractVoid","CollectionPremadeTag.hx",652,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",655,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("commendation","\x06","\xda","\xa1","\x8f"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(655)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",659,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("commendations","\xad","\xeb","\xfc","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(659)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",654,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp1,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_TITLE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(654)
		Dynamic tmp2 = _Function_1_3::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(653)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",669,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("job","\xfd","\xcf","\x50","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(669)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",673,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jobs","\xd6","\x2d","\x65","\x46"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(673)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",668,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp3,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_TITLE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(668)
		Dynamic tmp5 = _Function_1_6::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(667)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",683,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("praise","\x7c","\x4e","\x14","\xac"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(683)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",687,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("praises","\x77","\x5e","\xb0","\xe5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(687)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",682,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp7,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_TITLE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(682)
		Dynamic tmp8 = _Function_1_9::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(681)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateTitleAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateWearAbstractVoid",0x822cc052,"CollectionPremadeTag.PremadeTagStructNounInanimateWearAbstractVoid","CollectionPremadeTag.hx",696,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",699,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("pride","\x68","\x4f","\x8b","\xc8"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(699)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",698,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(698)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(697)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",709,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shame","\x84","\xe0","\x1c","\x7c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(709)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",708,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp2,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(708)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(707)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateWearAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateWearConcreteVoid",0x9cdf0735,"CollectionPremadeTag.PremadeTagStructNounInanimateWearConcreteVoid","CollectionPremadeTag.hx",718,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",721,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shirt","\xf6","\xf6","\x22","\x7c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(721)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",720,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::POSITIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(720)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(719)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",731,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("crown","\xf7","\x62","\x5a","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(731)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",730,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp2,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(730)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(729)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateWearConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructVerbVoidIntransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVerbVoidIntransitiveVoid",0x3af59936,"CollectionPremadeTag.PremadeTagStructVerbVoidIntransitiveVoid","CollectionPremadeTag.hx",740,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",743,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("die","\x40","\x3d","\x4c","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(743)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",747,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("died","\x24","\x5b","\x69","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(747)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",751,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("died","\x24","\x5b","\x69","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(751)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",755,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dying","\x6d","\xe0","\x5c","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(755)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",759,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dies","\x33","\x5b","\x69","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(759)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",742,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp1,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp2,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp3,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(742)
		Dynamic tmp5 = _Function_1_6::Block(tmp,tmp4,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(741)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",769,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrate","\x63","\x17","\xd5","\xd7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(769)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",773,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrated","\xa1","\x5f","\x9f","\x02"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(773)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",777,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrated","\xa1","\x5f","\x9f","\x02"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(777)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",781,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrating","\x60","\x5f","\xd7","\x48"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(781)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",785,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrates","\xb0","\x5f","\x9f","\x02"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(785)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp9,Dynamic &tmp10,Dynamic &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",768,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp7,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp8,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp9,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp10,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(768)
		Dynamic tmp11 = _Function_1_12::Block(tmp6,tmp9,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(767)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",795,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(795)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",799,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jumpe'","\x90","\xb4","\x17","\x08"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(799)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",803,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jumped","\xcd","\xb4","\x17","\x08"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(803)
		Dynamic tmp14 = _Function_1_15::Block();		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_1_16{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",807,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jumping","\xb4","\x90","\xa9","\x0c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(807)
		Dynamic tmp15 = _Function_1_16::Block();		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_17{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",811,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jumps","\xc5","\x8b","\x22","\x56"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(811)
		Dynamic tmp16 = _Function_1_17::Block();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_18{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp15,Dynamic &tmp12,Dynamic &tmp16,Dynamic &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",794,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp12,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp13,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp14,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp15,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp16,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(794)
		Dynamic tmp17 = _Function_1_18::Block(tmp13,tmp15,tmp12,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(793)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
		struct _Function_1_19{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",821,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(821)
		Dynamic tmp18 = _Function_1_19::Block();		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_20{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",825,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(825)
		Dynamic tmp19 = _Function_1_20::Block();		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_21{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",829,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(829)
		Dynamic tmp20 = _Function_1_21::Block();		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_22{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",833,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(833)
		Dynamic tmp21 = _Function_1_22::Block();		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_23{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",837,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("runs","\xc8","\x7a","\xb3","\x4b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(837)
		Dynamic tmp22 = _Function_1_23::Block();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_24{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp20,Dynamic &tmp19,Dynamic &tmp21,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",820,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp18,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp19,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp20,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp21,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp22,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(820)
		Dynamic tmp23 = _Function_1_24::Block(tmp22,tmp20,tmp19,tmp21,tmp18);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(819)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
		struct _Function_1_25{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",847,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sing","\x4f","\x96","\x53","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(847)
		Dynamic tmp24 = _Function_1_25::Block();		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_26{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",851,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sang","\x47","\x84","\x4d","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(851)
		Dynamic tmp25 = _Function_1_26::Block();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_27{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",855,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sung","\x5b","\xb1","\x5c","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(855)
		Dynamic tmp26 = _Function_1_27::Block();		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_1_28{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",859,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("singing","\xf3","\x11","\x16","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(859)
		Dynamic tmp27 = _Function_1_28::Block();		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_29{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",863,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sings","\x44","\xef","\xcf","\x7c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(863)
		Dynamic tmp28 = _Function_1_29::Block();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_30{
			inline static Dynamic Block( Dynamic &tmp28,Dynamic &tmp26,Dynamic &tmp24,Dynamic &tmp25,Dynamic &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",846,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp24,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp25,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp26,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp27,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp28,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(846)
		Dynamic tmp29 = _Function_1_30::Block(tmp28,tmp26,tmp24,tmp25,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(845)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
		struct _Function_1_31{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",873,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(873)
		Dynamic tmp30 = _Function_1_31::Block();		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_1_32{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",877,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(877)
		Dynamic tmp31 = _Function_1_32::Block();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_33{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",881,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(881)
		Dynamic tmp32 = _Function_1_33::Block();		HX_STACK_VAR(tmp32,"tmp32");
		struct _Function_1_34{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",885,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(885)
		Dynamic tmp33 = _Function_1_34::Block();		HX_STACK_VAR(tmp33,"tmp33");
		struct _Function_1_35{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",889,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sleeps","\x7c","\xb7","\x60","\x6d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(889)
		Dynamic tmp34 = _Function_1_35::Block();		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_36{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp31,Dynamic &tmp34,Dynamic &tmp32,Dynamic &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",872,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp30,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp31,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp32,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp33,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp34,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(872)
		Dynamic tmp35 = _Function_1_36::Block(tmp33,tmp31,tmp34,tmp32,tmp30);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(871)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp35);
		struct _Function_1_37{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",899,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(899)
		Dynamic tmp36 = _Function_1_37::Block();		HX_STACK_VAR(tmp36,"tmp36");
		struct _Function_1_38{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",903,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(903)
		Dynamic tmp37 = _Function_1_38::Block();		HX_STACK_VAR(tmp37,"tmp37");
		struct _Function_1_39{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",907,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(907)
		Dynamic tmp38 = _Function_1_39::Block();		HX_STACK_VAR(tmp38,"tmp38");
		struct _Function_1_40{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",911,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("working","\xb1","\x43","\xcf","\xa0"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(911)
		Dynamic tmp39 = _Function_1_40::Block();		HX_STACK_VAR(tmp39,"tmp39");
		struct _Function_1_41{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",915,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("works","\x82","\x95","\x64","\xce"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(915)
		Dynamic tmp40 = _Function_1_41::Block();		HX_STACK_VAR(tmp40,"tmp40");
		struct _Function_1_42{
			inline static Dynamic Block( Dynamic &tmp36,Dynamic &tmp38,Dynamic &tmp40,Dynamic &tmp37,Dynamic &tmp39){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",898,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp36,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp37,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp38,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp39,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp40,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(898)
		Dynamic tmp41 = _Function_1_42::Block(tmp36,tmp38,tmp40,tmp37,tmp39);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(897)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp41);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVerbVoidIntransitiveVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructVerbVoidTransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVerbVoidTransitiveVoid",0x16d26891,"CollectionPremadeTag.PremadeTagStructVerbVoidTransitiveVoid","CollectionPremadeTag.hx",924,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",927,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinate","\xfa","\xb9","\x11","\xcb"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(927)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",931,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinated","\x2a","\x01","\x71","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(931)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",935,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinated","\x2a","\x01","\x71","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(935)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",939,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinating","\xb7","\x15","\x73","\xfe"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(939)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",943,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinates","\x39","\x01","\x71","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(943)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",926,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp1,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp2,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp3,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp4,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(926)
		Dynamic tmp5 = _Function_1_6::Block(tmp,tmp4,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(925)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",953,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("buy","\x46","\xc3","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(953)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",957,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(957)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",961,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(961)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",965,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("buying","\x5c","\x19","\x26","\xdd"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(965)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",969,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("buys","\x6d","\x1a","\x20","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(969)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp9,Dynamic &tmp10,Dynamic &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",952,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp6,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp7,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp8,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp9,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp10,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(952)
		Dynamic tmp11 = _Function_1_12::Block(tmp6,tmp9,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(951)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",979,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(979)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",983,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(983)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",987,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(987)
		Dynamic tmp14 = _Function_1_15::Block();		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_1_16{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",991,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("calling","\x04","\xab","\x64","\x54"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(991)
		Dynamic tmp15 = _Function_1_16::Block();		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_17{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",995,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("calls","\x15","\x72","\x1b","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(995)
		Dynamic tmp16 = _Function_1_17::Block();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_18{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp15,Dynamic &tmp12,Dynamic &tmp16,Dynamic &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",978,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp12,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp13,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp14,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp15,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp16,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(978)
		Dynamic tmp17 = _Function_1_18::Block(tmp13,tmp15,tmp12,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(977)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
		struct _Function_1_19{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1005,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desire","\xca","\x45","\x7c","\x6f"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1005)
		Dynamic tmp18 = _Function_1_19::Block();		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_20{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1009,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1009)
		Dynamic tmp19 = _Function_1_20::Block();		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_21{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1013,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1013)
		Dynamic tmp20 = _Function_1_21::Block();		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_22{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1017,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desiring","\x87","\x35","\x74","\x7b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1017)
		Dynamic tmp21 = _Function_1_22::Block();		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_23{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1021,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desires","\x69","\xcb","\x40","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1021)
		Dynamic tmp22 = _Function_1_23::Block();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_24{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp20,Dynamic &tmp19,Dynamic &tmp21,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1004,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp18,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp19,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp20,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp21,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp22,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1004)
		Dynamic tmp23 = _Function_1_24::Block(tmp22,tmp20,tmp19,tmp21,tmp18);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1003)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
		struct _Function_1_25{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1031,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drink","\x18","\x62","\xbc","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1031)
		Dynamic tmp24 = _Function_1_25::Block();		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_26{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1035,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drunk","\x24","\x7d","\xc5","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1035)
		Dynamic tmp25 = _Function_1_26::Block();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_27{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1039,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drank","\x10","\x50","\xb6","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1039)
		Dynamic tmp26 = _Function_1_27::Block();		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_1_28{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1043,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drinking","\xca","\x09","\xda","\x74"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1043)
		Dynamic tmp27 = _Function_1_28::Block();		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_29{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1047,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drinks","\x5b","\x73","\x19","\xe5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1047)
		Dynamic tmp28 = _Function_1_29::Block();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_30{
			inline static Dynamic Block( Dynamic &tmp28,Dynamic &tmp26,Dynamic &tmp24,Dynamic &tmp25,Dynamic &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1030,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp24,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp25,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp26,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp27,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp28,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1030)
		Dynamic tmp29 = _Function_1_30::Block(tmp28,tmp26,tmp24,tmp25,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1029)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
		struct _Function_1_31{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1058,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drive","\x0a","\x69","\xbc","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1058)
		Dynamic tmp30 = _Function_1_31::Block();		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_1_32{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1062,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drove","\x90","\xf6","\xc0","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1062)
		Dynamic tmp31 = _Function_1_32::Block();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_33{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1066,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("driven","\x24","\x80","\x1f","\xe5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1066)
		Dynamic tmp32 = _Function_1_33::Block();		HX_STACK_VAR(tmp32,"tmp32");
		struct _Function_1_34{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1070,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("driving","\xc7","\xa8","\x73","\x96"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1070)
		Dynamic tmp33 = _Function_1_34::Block();		HX_STACK_VAR(tmp33,"tmp33");
		struct _Function_1_35{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1074,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drives","\x29","\x80","\x1f","\xe5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1074)
		Dynamic tmp34 = _Function_1_35::Block();		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_36{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp31,Dynamic &tmp34,Dynamic &tmp32,Dynamic &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1057,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp30,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp31,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp32,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp33,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp34,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1057)
		Dynamic tmp35 = _Function_1_36::Block(tmp33,tmp31,tmp34,tmp32,tmp30);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1056)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp35);
		struct _Function_1_37{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1084,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("eat","\x98","\xf8","\x4c","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1084)
		Dynamic tmp36 = _Function_1_37::Block();		HX_STACK_VAR(tmp36,"tmp36");
		struct _Function_1_38{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1088,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("ate","\x12","\x00","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1088)
		Dynamic tmp37 = _Function_1_38::Block();		HX_STACK_VAR(tmp37,"tmp37");
		struct _Function_1_39{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1092,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("eaten","\x01","\xa7","\xee","\x67"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1092)
		Dynamic tmp38 = _Function_1_39::Block();		HX_STACK_VAR(tmp38,"tmp38");
		struct _Function_1_40{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1096,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("eating","\x4a","\x83","\xe6","\x88"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1096)
		Dynamic tmp39 = _Function_1_40::Block();		HX_STACK_VAR(tmp39,"tmp39");
		struct _Function_1_41{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1100,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("eats","\xdb","\x8c","\x0c","\x43"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1100)
		Dynamic tmp40 = _Function_1_41::Block();		HX_STACK_VAR(tmp40,"tmp40");
		struct _Function_1_42{
			inline static Dynamic Block( Dynamic &tmp36,Dynamic &tmp38,Dynamic &tmp40,Dynamic &tmp37,Dynamic &tmp39){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1083,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp36,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp37,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp38,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp39,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp40,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1083)
		Dynamic tmp41 = _Function_1_42::Block(tmp36,tmp38,tmp40,tmp37,tmp39);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1082)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp41);
		struct _Function_1_43{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1110,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fight","\xd0","\x15","\x95","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1110)
		Dynamic tmp42 = _Function_1_43::Block();		HX_STACK_VAR(tmp42,"tmp42");
		struct _Function_1_44{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1114,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1114)
		Dynamic tmp43 = _Function_1_44::Block();		HX_STACK_VAR(tmp43,"tmp43");
		struct _Function_1_45{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1118,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1118)
		Dynamic tmp44 = _Function_1_45::Block();		HX_STACK_VAR(tmp44,"tmp44");
		struct _Function_1_46{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1122,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fighting","\x12","\x79","\xd2","\x35"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1122)
		Dynamic tmp45 = _Function_1_46::Block();		HX_STACK_VAR(tmp45,"tmp45");
		struct _Function_1_47{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1126,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fights","\xa3","\x00","\xde","\x81"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1126)
		Dynamic tmp46 = _Function_1_47::Block();		HX_STACK_VAR(tmp46,"tmp46");
		struct _Function_1_48{
			inline static Dynamic Block( Dynamic &tmp46,Dynamic &tmp42,Dynamic &tmp44,Dynamic &tmp45,Dynamic &tmp43){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1109,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp42,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp43,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp44,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp45,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp46,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1109)
		Dynamic tmp47 = _Function_1_48::Block(tmp46,tmp42,tmp44,tmp45,tmp43);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1108)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp47);
		struct _Function_1_49{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1136,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1136)
		Dynamic tmp48 = _Function_1_49::Block();		HX_STACK_VAR(tmp48,"tmp48");
		struct _Function_1_50{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1140,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("got","\x4c","\x89","\x4e","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1140)
		Dynamic tmp49 = _Function_1_50::Block();		HX_STACK_VAR(tmp49,"tmp49");
		struct _Function_1_51{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1144,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("gotten","\x11","\xac","\x41","\x65"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1144)
		Dynamic tmp50 = _Function_1_51::Block();		HX_STACK_VAR(tmp50,"tmp50");
		struct _Function_1_52{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1148,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("getting","\x84","\x50","\xa6","\x34"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1148)
		Dynamic tmp51 = _Function_1_52::Block();		HX_STACK_VAR(tmp51,"tmp51");
		struct _Function_1_53{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1152,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("gets","\x1d","\x03","\x62","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1152)
		Dynamic tmp52 = _Function_1_53::Block();		HX_STACK_VAR(tmp52,"tmp52");
		struct _Function_1_54{
			inline static Dynamic Block( Dynamic &tmp48,Dynamic &tmp52,Dynamic &tmp49,Dynamic &tmp50,Dynamic &tmp51){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1135,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp48,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp49,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp50,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp51,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp52,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1135)
		Dynamic tmp53 = _Function_1_54::Block(tmp48,tmp52,tmp49,tmp50,tmp51);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1134)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp53);
		struct _Function_1_55{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1162,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1162)
		Dynamic tmp54 = _Function_1_55::Block();		HX_STACK_VAR(tmp54,"tmp54");
		struct _Function_1_56{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1166,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grabbed","\xf5","\xcc","\xc1","\x6a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1166)
		Dynamic tmp55 = _Function_1_56::Block();		HX_STACK_VAR(tmp55,"tmp55");
		struct _Function_1_57{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1170,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grabbed","\xf5","\xcc","\xc1","\x6a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1170)
		Dynamic tmp56 = _Function_1_57::Block();		HX_STACK_VAR(tmp56,"tmp56");
		struct _Function_1_58{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1174,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grabbing","\x8c","\x9b","\xd4","\xfe"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1174)
		Dynamic tmp57 = _Function_1_58::Block();		HX_STACK_VAR(tmp57,"tmp57");
		struct _Function_1_59{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1178,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grabs","\x27","\x03","\xea","\x99"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1178)
		Dynamic tmp58 = _Function_1_59::Block();		HX_STACK_VAR(tmp58,"tmp58");
		struct _Function_1_60{
			inline static Dynamic Block( Dynamic &tmp54,Dynamic &tmp55,Dynamic &tmp56,Dynamic &tmp58,Dynamic &tmp57){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1161,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp54,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp55,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp56,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp57,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp58,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1161)
		Dynamic tmp59 = _Function_1_60::Block(tmp54,tmp55,tmp56,tmp58,tmp57);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(1160)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp59);
		struct _Function_1_61{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1188,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1188)
		Dynamic tmp60 = _Function_1_61::Block();		HX_STACK_VAR(tmp60,"tmp60");
		struct _Function_1_62{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1192,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1192)
		Dynamic tmp61 = _Function_1_62::Block();		HX_STACK_VAR(tmp61,"tmp61");
		struct _Function_1_63{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1196,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1196)
		Dynamic tmp62 = _Function_1_63::Block();		HX_STACK_VAR(tmp62,"tmp62");
		struct _Function_1_64{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1200,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("killing","\x04","\x44","\xeb","\xd3"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1200)
		Dynamic tmp63 = _Function_1_64::Block();		HX_STACK_VAR(tmp63,"tmp63");
		struct _Function_1_65{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1204,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("kills","\x15","\xcb","\x99","\xe1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1204)
		Dynamic tmp64 = _Function_1_65::Block();		HX_STACK_VAR(tmp64,"tmp64");
		struct _Function_1_66{
			inline static Dynamic Block( Dynamic &tmp60,Dynamic &tmp62,Dynamic &tmp63,Dynamic &tmp61,Dynamic &tmp64){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1187,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp60,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp61,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp62,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp63,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp64,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEGATIVE,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_INTRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1187)
		Dynamic tmp65 = _Function_1_66::Block(tmp60,tmp62,tmp63,tmp61,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(1186)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp65);
		struct _Function_1_67{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1214,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("love","\x72","\xac","\xb7","\x47"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1214)
		Dynamic tmp66 = _Function_1_67::Block();		HX_STACK_VAR(tmp66,"tmp66");
		struct _Function_1_68{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1218,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1218)
		Dynamic tmp67 = _Function_1_68::Block();		HX_STACK_VAR(tmp67,"tmp67");
		struct _Function_1_69{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1222,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1222)
		Dynamic tmp68 = _Function_1_69::Block();		HX_STACK_VAR(tmp68,"tmp68");
		struct _Function_1_70{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1226,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("loving","\x2f","\x96","\x54","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1226)
		Dynamic tmp69 = _Function_1_70::Block();		HX_STACK_VAR(tmp69,"tmp69");
		struct _Function_1_71{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1230,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("loves","\xc1","\x37","\xff","\x78"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1230)
		Dynamic tmp70 = _Function_1_71::Block();		HX_STACK_VAR(tmp70,"tmp70");
		struct _Function_1_72{
			inline static Dynamic Block( Dynamic &tmp68,Dynamic &tmp66,Dynamic &tmp70,Dynamic &tmp67,Dynamic &tmp69){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1213,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp66,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp67,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp68,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp69,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp70,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1213)
		Dynamic tmp71 = _Function_1_72::Block(tmp68,tmp66,tmp70,tmp67,tmp69);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(1212)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp71);
		struct _Function_1_73{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1240,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1240)
		Dynamic tmp72 = _Function_1_73::Block();		HX_STACK_VAR(tmp72,"tmp72");
		struct _Function_1_74{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1244,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painted","\x7d","\xb3","\x22","\xb8"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1244)
		Dynamic tmp73 = _Function_1_74::Block();		HX_STACK_VAR(tmp73,"tmp73");
		struct _Function_1_75{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1248,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painted","\x7d","\xb3","\x22","\xb8"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1248)
		Dynamic tmp74 = _Function_1_75::Block();		HX_STACK_VAR(tmp74,"tmp74");
		struct _Function_1_76{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1252,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painting","\x04","\x6c","\x3d","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1252)
		Dynamic tmp75 = _Function_1_76::Block();		HX_STACK_VAR(tmp75,"tmp75");
		struct _Function_1_77{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1256,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("paints","\x15","\xf3","\x91","\xe7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1256)
		Dynamic tmp76 = _Function_1_77::Block();		HX_STACK_VAR(tmp76,"tmp76");
		struct _Function_1_78{
			inline static Dynamic Block( Dynamic &tmp73,Dynamic &tmp75,Dynamic &tmp72,Dynamic &tmp76,Dynamic &tmp74){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1239,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp72,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp73,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp74,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp75,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp76,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1239)
		Dynamic tmp77 = _Function_1_78::Block(tmp73,tmp75,tmp72,tmp76,tmp74);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(1238)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp77);
		struct _Function_1_79{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1266,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sell","\x92","\x8b","\x50","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1266)
		Dynamic tmp78 = _Function_1_79::Block();		HX_STACK_VAR(tmp78,"tmp78");
		struct _Function_1_80{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1270,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sold","\x14","\x22","\x58","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1270)
		Dynamic tmp79 = _Function_1_80::Block();		HX_STACK_VAR(tmp79,"tmp79");
		struct _Function_1_81{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1274,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sold","\x14","\x22","\x58","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1274)
		Dynamic tmp80 = _Function_1_81::Block();		HX_STACK_VAR(tmp80,"tmp80");
		struct _Function_1_82{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1278,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("selling","\x90","\x88","\x29","\x87"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1278)
		Dynamic tmp81 = _Function_1_82::Block();		HX_STACK_VAR(tmp81,"tmp81");
		struct _Function_1_83{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1282,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sells","\xa1","\x94","\x29","\x7a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1282)
		Dynamic tmp82 = _Function_1_83::Block();		HX_STACK_VAR(tmp82,"tmp82");
		struct _Function_1_84{
			inline static Dynamic Block( Dynamic &tmp81,Dynamic &tmp80,Dynamic &tmp79,Dynamic &tmp82,Dynamic &tmp78){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1265,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp78,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp79,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp80,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp81,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp82,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1265)
		Dynamic tmp83 = _Function_1_84::Block(tmp81,tmp80,tmp79,tmp82,tmp78);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(1264)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp83);
		struct _Function_1_85{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1292,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shove","\xe9","\x87","\x27","\x7c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1292)
		Dynamic tmp84 = _Function_1_85::Block();		HX_STACK_VAR(tmp84,"tmp84");
		struct _Function_1_86{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1296,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shoved","\x5b","\x64","\x6f","\x26"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1296)
		Dynamic tmp85 = _Function_1_86::Block();		HX_STACK_VAR(tmp85,"tmp85");
		struct _Function_1_87{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1300,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shoved","\x5b","\x64","\x6f","\x26"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1300)
		Dynamic tmp86 = _Function_1_87::Block();		HX_STACK_VAR(tmp86,"tmp86");
		struct _Function_1_88{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1304,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shoving","\x66","\x7d","\x0b","\x7b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1304)
		Dynamic tmp87 = _Function_1_88::Block();		HX_STACK_VAR(tmp87,"tmp87");
		struct _Function_1_89{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1308,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shoves","\x6a","\x64","\x6f","\x26"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1308)
		Dynamic tmp88 = _Function_1_89::Block();		HX_STACK_VAR(tmp88,"tmp88");
		struct _Function_1_90{
			inline static Dynamic Block( Dynamic &tmp86,Dynamic &tmp88,Dynamic &tmp84,Dynamic &tmp85,Dynamic &tmp87){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremadeTag.hx",1291,0xe1b162de)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp84,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp85,false);
					__result->Add(HX_HCSTRING("tagEntry3Struct","\x30","\x76","\xf9","\x16") , tmp86,false);
					__result->Add(HX_HCSTRING("tagEntry4Struct","\xf1","\xec","\x8e","\x40") , tmp87,false);
					__result->Add(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a") , tmp88,false);
					__result->Add(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb") , ::EnumTagFeelType_obj::NEUTRAL,false);
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::VERB_TRANSITIVE,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1291)
		Dynamic tmp89 = _Function_1_90::Block(tmp86,tmp88,tmp84,tmp85,tmp87);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(1290)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp89);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVerbVoidTransitiveVoid,(void))


CollectionPremadeTag_obj::CollectionPremadeTag_obj()
{
}

bool CollectionPremadeTag_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVoid") ) { outValue = PremadeTagStructVoid_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PremadeTagStructAdjVoid") ) { outValue = PremadeTagStructAdjVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructAdvVoid") ) { outValue = PremadeTagStructAdvVoid_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounAliveAbstractVoid") ) { outValue = PremadeTagStructNounAliveAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounAliveConcreteVoid") ) { outValue = PremadeTagStructNounAliveConcreteVoid_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVerbVoidTransitiveVoid") ) { outValue = PremadeTagStructVerbVoidTransitiveVoid_dyn(); return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVerbVoidIntransitiveVoid") ) { outValue = PremadeTagStructVerbVoidIntransitiveVoid_dyn(); return true;  }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateHoldAbstractVoid") ) { outValue = PremadeTagStructNounInanimateHoldAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateHoldConcreteVoid") ) { outValue = PremadeTagStructNounInanimateHoldConcreteVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateWearAbstractVoid") ) { outValue = PremadeTagStructNounInanimateWearAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateWearConcreteVoid") ) { outValue = PremadeTagStructNounInanimateWearConcreteVoid_dyn(); return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceAbstractVoid") ) { outValue = PremadeTagStructNounInanimatePlaceAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateTitleAbstractVoid") ) { outValue = PremadeTagStructNounInanimateTitleAbstractVoid_dyn(); return true;  }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceConcreteOwnerVoid") ) { outValue = PremadeTagStructNounInanimatePlaceConcreteOwnerVoid_dyn(); return true;  }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid") ) { outValue = PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionPremadeTag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionPremadeTag_obj::__mClass,"__mClass");
};

#endif

hx::Class CollectionPremadeTag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PremadeTagStructVoid","\xcb","\x5a","\xea","\x62"),
	HX_HCSTRING("PremadeTagStructAdjVoid","\x04","\xae","\x02","\x8a"),
	HX_HCSTRING("PremadeTagStructAdvVoid","\x10","\xa4","\xd1","\x72"),
	HX_HCSTRING("PremadeTagStructNounAliveAbstractVoid","\x32","\x1d","\x29","\x49"),
	HX_HCSTRING("PremadeTagStructNounAliveConcreteVoid","\x15","\x64","\xdb","\x63"),
	HX_HCSTRING("PremadeTagStructNounInanimateHoldAbstractVoid","\x20","\xb6","\xe8","\x6c"),
	HX_HCSTRING("PremadeTagStructNounInanimateHoldConcreteVoid","\x03","\xfd","\x9a","\x87"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceAbstractVoid","\x72","\x71","\x20","\x06"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid","\xc5","\x29","\x9a","\xa5"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceConcreteOwnerVoid","\x86","\x64","\xc3","\x64"),
	HX_HCSTRING("PremadeTagStructNounInanimateTitleAbstractVoid","\xc3","\x07","\x24","\xa3"),
	HX_HCSTRING("PremadeTagStructNounInanimateWearAbstractVoid","\x60","\x29","\xfb","\xb9"),
	HX_HCSTRING("PremadeTagStructNounInanimateWearConcreteVoid","\x43","\x70","\xad","\xd4"),
	HX_HCSTRING("PremadeTagStructVerbVoidIntransitiveVoid","\xe8","\xca","\x9b","\xd1"),
	HX_HCSTRING("PremadeTagStructVerbVoidTransitiveVoid","\xc3","\x69","\x10","\x21"),
	::String(null()) };

void CollectionPremadeTag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionPremadeTag","\xe0","\x8b","\x6a","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CollectionPremadeTag_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CollectionPremadeTag_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

