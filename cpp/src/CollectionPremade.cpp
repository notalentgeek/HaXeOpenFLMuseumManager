#include <hxcpp.h>

#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionPremade
#include <CollectionPremade.h>
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

Void CollectionPremade_obj::__construct()
{
HX_STACK_FRAME("CollectionPremade","new",0x52bb988c,"CollectionPremade.new","CollectionPremade.hx",3,0xd14dbc64)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CollectionPremade_obj::~CollectionPremade_obj() { }

Dynamic CollectionPremade_obj::__CreateEmpty() { return  new CollectionPremade_obj; }
hx::ObjectPtr< CollectionPremade_obj > CollectionPremade_obj::__new()
{  hx::ObjectPtr< CollectionPremade_obj > _result_ = new CollectionPremade_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionPremade_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionPremade_obj > _result_ = new CollectionPremade_obj();
	_result_->__construct();
	return _result_;}

Void CollectionPremade_obj::PremadeExhibitionObjectVoid( ){
{
		HX_STACK_FRAME("CollectionPremade","PremadeExhibitionObjectVoid",0x47c41c86,"CollectionPremade.PremadeExhibitionObjectVoid","CollectionPremade.hx",4,0xd14dbc64)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CollectionPremade_obj,PremadeExhibitionObjectVoid,(void))

Void CollectionPremade_obj::PremadeFloorObjectVoid( ){
{
		HX_STACK_FRAME("CollectionPremade","PremadeFloorObjectVoid",0xe4bb8b7b,"CollectionPremade.PremadeFloorObjectVoid","CollectionPremade.hx",5,0xd14dbc64)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CollectionPremade_obj,PremadeFloorObjectVoid,(void))

Void CollectionPremade_obj::PremadeRoomObjectVoid( ){
{
		HX_STACK_FRAME("CollectionPremade","PremadeRoomObjectVoid",0xf5b58652,"CollectionPremade.PremadeRoomObjectVoid","CollectionPremade.hx",6,0xd14dbc64)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CollectionPremade_obj,PremadeRoomObjectVoid,(void))

Void CollectionPremade_obj::PremadeTagStructVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructVoid",0x286ea11f,"CollectionPremade.PremadeTagStructVoid","CollectionPremade.hx",7,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(8)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8)
		::CollectionPremade_obj::PremadeTagStructAdjVoid(tmp);
		HX_STACK_LINE(9)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(9)
		::CollectionPremade_obj::PremadeTagStructAdvVoid(tmp1);
		HX_STACK_LINE(10)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10)
		::CollectionPremade_obj::PremadeTagStructNounAliveAbstractVoid(tmp2);
		HX_STACK_LINE(11)
		::CollectionGlobal tmp3 = _collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11)
		::CollectionPremade_obj::PremadeTagStructNounAliveConcreteVoid(tmp3);
		HX_STACK_LINE(12)
		::CollectionGlobal tmp4 = _collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12)
		::CollectionPremade_obj::PremadeTagStructNounInanimateHoldAbstractVoid(tmp4);
		HX_STACK_LINE(13)
		::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(13)
		::CollectionPremade_obj::PremadeTagStructNounInanimateHoldConcreteVoid(tmp5);
		HX_STACK_LINE(14)
		::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(14)
		::CollectionPremade_obj::PremadeTagStructNounInanimatePlaceAbstractVoid(tmp6);
		HX_STACK_LINE(15)
		::CollectionGlobal tmp7 = _collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(15)
		::CollectionPremade_obj::PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid(tmp7);
		HX_STACK_LINE(16)
		::CollectionGlobal tmp8 = _collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16)
		::CollectionPremade_obj::PremadeTagStructNounInanimatePlaceConcreteOwnerVoid(tmp8);
		HX_STACK_LINE(17)
		::CollectionGlobal tmp9 = _collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(17)
		::CollectionPremade_obj::PremadeTagStructNounInanimateTitleAbstractVoid(tmp9);
		HX_STACK_LINE(18)
		::CollectionGlobal tmp10 = _collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(18)
		::CollectionPremade_obj::PremadeTagStructNounInanimateWearAbstractVoid(tmp10);
		HX_STACK_LINE(19)
		::CollectionGlobal tmp11 = _collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(19)
		::CollectionPremade_obj::PremadeTagStructNounInanimateWearConcreteVoid(tmp11);
		HX_STACK_LINE(20)
		::CollectionGlobal tmp12 = _collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(20)
		::CollectionPremade_obj::PremadeTagStructVerbVoidIntransitiveVoid(tmp12);
		HX_STACK_LINE(21)
		::CollectionGlobal tmp13 = _collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(21)
		::CollectionPremade_obj::PremadeTagStructVerbVoidTransitiveVoid(tmp13);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructVoid,(void))

Void CollectionPremade_obj::PremadeTagStructAdjVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructAdjVoid",0x8b741430,"CollectionPremade.PremadeTagStructAdjVoid","CollectionPremade.hx",23,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",26,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("awful","\x07","\x75","\xd4","\x28"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(26)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",25,0xd14dbc64)
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
		HX_STACK_LINE(25)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",36,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bad","\xc5","\xb1","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",35,0xd14dbc64)
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
		HX_STACK_LINE(35)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",46,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("excellent","\x76","\xff","\xb2","\xf6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",45,0xd14dbc64)
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
		HX_STACK_LINE(45)
		Dynamic tmp5 = _Function_1_6::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",56,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("good","\x3d","\x95","\x69","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(56)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",55,0xd14dbc64)
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
		HX_STACK_LINE(55)
		Dynamic tmp7 = _Function_1_8::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",66,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADJ,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(66)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",65,0xd14dbc64)
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
		HX_STACK_LINE(65)
		Dynamic tmp9 = _Function_1_10::Block(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructAdjVoid,(void))

Void CollectionPremade_obj::PremadeTagStructAdvVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructAdvVoid",0x74430a3c,"CollectionPremade.PremadeTagStructAdvVoid","CollectionPremade.hx",75,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",78,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADV,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desperately","\xf4","\x4c","\x46","\x20"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(78)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",77,0xd14dbc64)
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
		HX_STACK_LINE(77)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",88,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADV,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("slowly","\xce","\x7e","\x0a","\x74"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(88)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",87,0xd14dbc64)
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
		HX_STACK_LINE(87)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",98,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADV,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("perfectly","\xda","\xc0","\xbb","\x90"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(98)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",97,0xd14dbc64)
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
		HX_STACK_LINE(97)
		Dynamic tmp5 = _Function_1_6::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",108,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::ADV,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("quickly","\xba","\x3a","\x8f","\xd9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(108)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",107,0xd14dbc64)
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
		HX_STACK_LINE(107)
		Dynamic tmp7 = _Function_1_8::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructAdvVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounAliveAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounAliveAbstractVoid",0x6b40785e,"CollectionPremade.PremadeTagStructNounAliveAbstractVoid","CollectionPremade.hx",117,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",120,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasin","\x18","\x85","\x36","\x34"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(120)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",124,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasin's","\x84","\x1d","\xb4","\x92"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(124)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",128,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasins","\x5b","\xf0","\x7d","\x7b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(128)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",132,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasins'","\x6c","\x5f","\xb4","\x92"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(132)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",119,0xd14dbc64)
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
		HX_STACK_LINE(119)
		Dynamic tmp4 = _Function_1_5::Block(tmp,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		struct _Function_1_6{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",142,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("boy","\x0c","\xbe","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(142)
		Dynamic tmp5 = _Function_1_6::Block();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",146,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("boy's","\x78","\x7b","\xff","\xb6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(146)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",150,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("boys","\xe7","\x8c","\x1b","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(150)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",154,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("boys'","\x60","\xbd","\xff","\xb6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(154)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp6,Dynamic &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",141,0xd14dbc64)
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
		HX_STACK_LINE(141)
		Dynamic tmp9 = _Function_1_10::Block(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp9);
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",164,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dragon","\x13","\x72","\xca","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(164)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",168,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dragon's","\x3f","\x7f","\xd9","\x3c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(168)
		Dynamic tmp11 = _Function_1_12::Block();		HX_STACK_VAR(tmp11,"tmp11");
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",172,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dragons","\x00","\x5f","\x59","\xf1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(172)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",176,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dragons'","\x27","\xc1","\xd9","\x3c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(176)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp11,Dynamic &tmp10,Dynamic &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",163,0xd14dbc64)
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
		HX_STACK_LINE(163)
		Dynamic tmp14 = _Function_1_15::Block(tmp13,tmp11,tmp10,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(162)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
		struct _Function_1_16{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",186,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("iraqi","\x30","\x39","\xb7","\xc0"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(186)
		Dynamic tmp15 = _Function_1_16::Block();		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_17{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",190,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("iraqi's","\x9c","\x07","\xdc","\xc7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(190)
		Dynamic tmp16 = _Function_1_17::Block();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_18{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",194,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("iraqis","\x43","\xd1","\x9a","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(194)
		Dynamic tmp17 = _Function_1_18::Block();		HX_STACK_VAR(tmp17,"tmp17");
		struct _Function_1_19{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",198,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("iraqis'","\x84","\x49","\xdc","\xc7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(198)
		Dynamic tmp18 = _Function_1_19::Block();		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_20{
			inline static Dynamic Block( Dynamic &tmp17,Dynamic &tmp15,Dynamic &tmp16,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",185,0xd14dbc64)
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
		HX_STACK_LINE(185)
		Dynamic tmp19 = _Function_1_20::Block(tmp17,tmp15,tmp16,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(184)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
		struct _Function_1_21{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",208,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("italian","\xc0","\xe1","\x44","\x91"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(208)
		Dynamic tmp20 = _Function_1_21::Block();		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_22{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",212,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("italian's","\x2c","\xf4","\x90","\x15"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(212)
		Dynamic tmp21 = _Function_1_22::Block();		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_23{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",216,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("italian","\xc0","\xe1","\x44","\x91"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(216)
		Dynamic tmp22 = _Function_1_23::Block();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_24{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",220,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("italian'","\x67","\xa6","\x00","\x8b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(220)
		Dynamic tmp23 = _Function_1_24::Block();		HX_STACK_VAR(tmp23,"tmp23");
		struct _Function_1_25{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp20,Dynamic &tmp23,Dynamic &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",207,0xd14dbc64)
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
		HX_STACK_LINE(207)
		Dynamic tmp24 = _Function_1_25::Block(tmp22,tmp20,tmp23,tmp21);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(206)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp24);
		struct _Function_1_26{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",230,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painter","\x8b","\xb3","\x22","\xb8"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(230)
		Dynamic tmp25 = _Function_1_26::Block();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_27{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",234,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painter's","\xb7","\x0e","\xdf","\x0c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(234)
		Dynamic tmp26 = _Function_1_27::Block();		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_1_28{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",238,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painters","\x88","\x66","\x3a","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(238)
		Dynamic tmp27 = _Function_1_28::Block();		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_29{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",242,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painters'","\x9f","\x50","\xdf","\x0c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(242)
		Dynamic tmp28 = _Function_1_29::Block();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_30{
			inline static Dynamic Block( Dynamic &tmp28,Dynamic &tmp26,Dynamic &tmp25,Dynamic &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",229,0xd14dbc64)
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
		HX_STACK_LINE(229)
		Dynamic tmp29 = _Function_1_30::Block(tmp28,tmp26,tmp25,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(228)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
		struct _Function_1_31{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",252,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("romanian","\xb9","\x62","\x0f","\x38"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(252)
		Dynamic tmp30 = _Function_1_31::Block();		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_1_32{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",256,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("romanian's","\x65","\x65","\xb8","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(256)
		Dynamic tmp31 = _Function_1_32::Block();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_33{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",260,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("romanians","\x9a","\xff","\x66","\xd5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(260)
		Dynamic tmp32 = _Function_1_33::Block();		HX_STACK_VAR(tmp32,"tmp32");
		struct _Function_1_34{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",264,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("romanians'","\x4d","\xa7","\xb8","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(264)
		Dynamic tmp33 = _Function_1_34::Block();		HX_STACK_VAR(tmp33,"tmp33");
		struct _Function_1_35{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp31,Dynamic &tmp32,Dynamic &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",251,0xd14dbc64)
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
		HX_STACK_LINE(251)
		Dynamic tmp34 = _Function_1_35::Block(tmp33,tmp31,tmp32,tmp30);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(250)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp34);
		struct _Function_1_36{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",274,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("russian","\x53","\x5a","\xb8","\xcf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(274)
		Dynamic tmp35 = _Function_1_36::Block();		HX_STACK_VAR(tmp35,"tmp35");
		struct _Function_1_37{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",278,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("russian's","\x7f","\xf7","\x41","\x72"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(278)
		Dynamic tmp36 = _Function_1_37::Block();		HX_STACK_VAR(tmp36,"tmp36");
		struct _Function_1_38{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",282,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("russians","\xc0","\xae","\x96","\xf1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(282)
		Dynamic tmp37 = _Function_1_38::Block();		HX_STACK_VAR(tmp37,"tmp37");
		struct _Function_1_39{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",286,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("russians'","\x67","\x39","\x42","\x72"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(286)
		Dynamic tmp38 = _Function_1_39::Block();		HX_STACK_VAR(tmp38,"tmp38");
		struct _Function_1_40{
			inline static Dynamic Block( Dynamic &tmp36,Dynamic &tmp38,Dynamic &tmp37,Dynamic &tmp35){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",273,0xd14dbc64)
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
		HX_STACK_LINE(273)
		Dynamic tmp39 = _Function_1_40::Block(tmp36,tmp38,tmp37,tmp35);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(272)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp39);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounAliveAbstractVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounAliveConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounAliveConcreteVoid",0x85f2bf41,"CollectionPremade.PremadeTagStructNounAliveConcreteVoid","CollectionPremade.hx",295,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",298,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(298)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",302,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Andy's","\xce","\x8c","\xbb","\x95"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(302)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",297,0xd14dbc64)
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
		HX_STACK_LINE(297)
		Dynamic tmp2 = _Function_1_3::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",312,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Bodhisattva","\xd1","\xa6","\xa8","\x6c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(312)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",316,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Bodhisattva's","\x7d","\xdf","\x3c","\x65"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(316)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",311,0xd14dbc64)
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
		HX_STACK_LINE(311)
		Dynamic tmp5 = _Function_1_6::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",326,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Buddha","\xec","\x41","\xd5","\x03"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(326)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",330,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Buddha's","\x58","\xb7","\x1a","\x95"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(330)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",325,0xd14dbc64)
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
		HX_STACK_LINE(325)
		Dynamic tmp8 = _Function_1_9::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(324)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",340,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Dimitri","\x8a","\x79","\x99","\x0f"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(340)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",344,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Dimitri's","\x76","\x92","\x12","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(344)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp10){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",339,0xd14dbc64)
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
		HX_STACK_LINE(339)
		Dynamic tmp11 = _Function_1_12::Block(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(338)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",354,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Julius Caesar","\xf7","\x7a","\x10","\xa6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(354)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",358,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Julius Caesar's","\x23","\x89","\x5e","\xa7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(358)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",353,0xd14dbc64)
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
		HX_STACK_LINE(353)
		Dynamic tmp14 = _Function_1_15::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(352)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
		struct _Function_1_16{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",368,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Maria","\xd6","\x39","\x4f","\x96"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(368)
		Dynamic tmp15 = _Function_1_16::Block();		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_17{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",372,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Maria's","\xc2","\xfd","\xf1","\x33"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(372)
		Dynamic tmp16 = _Function_1_17::Block();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_18{
			inline static Dynamic Block( Dynamic &tmp15,Dynamic &tmp16){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",367,0xd14dbc64)
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
		HX_STACK_LINE(367)
		Dynamic tmp17 = _Function_1_18::Block(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(366)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
		struct _Function_1_19{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",382,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Medusa","\xd7","\xe1","\x65","\x33"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(382)
		Dynamic tmp18 = _Function_1_19::Block();		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_20{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",386,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Medusa's","\x03","\x68","\x03","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(386)
		Dynamic tmp19 = _Function_1_20::Block();		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_21{
			inline static Dynamic Block( Dynamic &tmp19,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",381,0xd14dbc64)
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
		HX_STACK_LINE(381)
		Dynamic tmp20 = _Function_1_21::Block(tmp19,tmp18);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(380)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
		struct _Function_1_22{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",396,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(396)
		Dynamic tmp21 = _Function_1_22::Block();		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_23{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",400,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Mikael's","\xa5","\x8b","\x9c","\x27"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(400)
		Dynamic tmp22 = _Function_1_23::Block();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_24{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp21){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",395,0xd14dbc64)
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
		HX_STACK_LINE(395)
		Dynamic tmp23 = _Function_1_24::Block(tmp22,tmp21);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(394)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
		struct _Function_1_25{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",410,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Napoleon","\xea","\xa1","\x23","\x28"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(410)
		Dynamic tmp24 = _Function_1_25::Block();		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_26{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",414,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Napoleon's","\xd6","\x92","\xbf","\x31"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(414)
		Dynamic tmp25 = _Function_1_26::Block();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_27{
			inline static Dynamic Block( Dynamic &tmp24,Dynamic &tmp25){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",409,0xd14dbc64)
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
		HX_STACK_LINE(409)
		Dynamic tmp26 = _Function_1_27::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(408)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
		struct _Function_1_28{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",424,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Ramses","\xa3","\xb8","\x85","\xeb"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(424)
		Dynamic tmp27 = _Function_1_28::Block();		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_29{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",428,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Ramses'","\x24","\xd6","\x7b","\x29"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(428)
		Dynamic tmp28 = _Function_1_29::Block();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_30{
			inline static Dynamic Block( Dynamic &tmp28,Dynamic &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",423,0xd14dbc64)
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
		HX_STACK_LINE(423)
		Dynamic tmp29 = _Function_1_30::Block(tmp28,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(422)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
		struct _Function_1_31{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",438,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Sphinx","\xc8","\x28","\x8e","\xf1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(438)
		Dynamic tmp30 = _Function_1_31::Block();		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_1_32{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",442,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Sphinx's","\x34","\x0d","\x00","\x10"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(442)
		Dynamic tmp31 = _Function_1_32::Block();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_33{
			inline static Dynamic Block( Dynamic &tmp31,Dynamic &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",437,0xd14dbc64)
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
		HX_STACK_LINE(437)
		Dynamic tmp32 = _Function_1_33::Block(tmp31,tmp30);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(436)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp32);
		struct _Function_1_34{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",452,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Washington","\x70","\x1b","\x23","\x73"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(452)
		Dynamic tmp33 = _Function_1_34::Block();		HX_STACK_VAR(tmp33,"tmp33");
		struct _Function_1_35{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",456,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Washington's","\xdc","\xf9","\xb4","\xd6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(456)
		Dynamic tmp34 = _Function_1_35::Block();		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_36{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp34){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",451,0xd14dbc64)
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
		HX_STACK_LINE(451)
		Dynamic tmp35 = _Function_1_36::Block(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(450)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp35);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounAliveConcreteVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounInanimateHoldAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounInanimateHoldAbstractVoid",0x0fd11d4c,"CollectionPremade.PremadeTagStructNounInanimateHoldAbstractVoid","CollectionPremade.hx",465,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",468,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grudge","\xd8","\x7d","\x12","\x20"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(468)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",467,0xd14dbc64)
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
		HX_STACK_LINE(467)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(466)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounInanimateHoldAbstractVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounInanimateHoldConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounInanimateHoldConcreteVoid",0x2a83642f,"CollectionPremade.PremadeTagStructNounInanimateHoldConcreteVoid","CollectionPremade.hx",477,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",480,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bat","\xd5","\xb1","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(480)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",484,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bats","\xfe","\xe8","\x10","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(484)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",479,0xd14dbc64)
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
		HX_STACK_LINE(479)
		Dynamic tmp2 = _Function_1_3::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",494,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("gun","\x80","\x8e","\x4e","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(494)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",498,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("guns","\xf3","\x21","\x6e","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(498)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",493,0xd14dbc64)
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
		HX_STACK_LINE(493)
		Dynamic tmp5 = _Function_1_6::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(492)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",508,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("hand","\x6f","\x2b","\x08","\x45"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(508)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",512,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("hands","\x24","\xd6","\x1d","\x22"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(512)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",507,0xd14dbc64)
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
		HX_STACK_LINE(507)
		Dynamic tmp8 = _Function_1_9::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(506)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",522,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("pencil","\xcd","\xf3","\x71","\x38"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(522)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",526,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("pencils","\x06","\x60","\x43","\x2b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(526)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( Dynamic &tmp9,Dynamic &tmp10){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",521,0xd14dbc64)
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
		HX_STACK_LINE(521)
		Dynamic tmp11 = _Function_1_12::Block(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(520)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",536,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sword","\xbd","\xb7","\x11","\x86"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(536)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",540,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("swords","\x16","\x0e","\x6f","\xc9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(540)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp12){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",535,0xd14dbc64)
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
		HX_STACK_LINE(535)
		Dynamic tmp14 = _Function_1_15::Block(tmp13,tmp12);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(534)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounInanimateHoldConcreteVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounInanimatePlaceAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounInanimatePlaceAbstractVoid",0xee9250c6,"CollectionPremade.PremadeTagStructNounInanimatePlaceAbstractVoid","CollectionPremade.hx",549,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",552,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("mind","\x92","\x4e","\x5c","\x48"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(552)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",551,0xd14dbc64)
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
		HX_STACK_LINE(551)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(550)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",562,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("peace","\x6e","\x76","\xed","\xbf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(562)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",561,0xd14dbc64)
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
		HX_STACK_LINE(561)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(560)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounInanimatePlaceAbstractVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid",0xd33f9cf1,"CollectionPremade.PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid","CollectionPremade.hx",571,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",574,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("India","\x57","\x0e","\x42","\x51"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(574)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",573,0xd14dbc64)
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
		HX_STACK_LINE(573)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(572)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",584,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Italia","\x0e","\xa3","\xf8","\x3a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(584)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",583,0xd14dbc64)
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
		HX_STACK_LINE(583)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(582)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",594,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Netherlands","\x70","\x0e","\x67","\x5f"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(594)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",593,0xd14dbc64)
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
		HX_STACK_LINE(593)
		Dynamic tmp5 = _Function_1_6::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(592)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",604,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Russia","\xdb","\x9d","\x80","\x73"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(604)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",603,0xd14dbc64)
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
		HX_STACK_LINE(603)
		Dynamic tmp7 = _Function_1_8::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(602)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounInanimatePlaceConcreteOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounInanimatePlaceConcreteOwnerVoid",0x6e2374b2,"CollectionPremade.PremadeTagStructNounInanimatePlaceConcreteOwnerVoid","CollectionPremade.hx",613,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",616,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("country","\x56","\xba","\x59","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(616)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",615,0xd14dbc64)
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
		HX_STACK_LINE(615)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(614)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",626,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("harbor","\x4c","\xdc","\xa0","\xba"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(626)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",625,0xd14dbc64)
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
		HX_STACK_LINE(625)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(624)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",636,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("house","\xa0","\x2f","\x64","\x2b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(636)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",635,0xd14dbc64)
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
		HX_STACK_LINE(635)
		Dynamic tmp5 = _Function_1_6::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(634)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",646,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("school","\x74","\xb8","\xc8","\x40"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(646)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( Dynamic &tmp6){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",645,0xd14dbc64)
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
		HX_STACK_LINE(645)
		Dynamic tmp7 = _Function_1_8::Block(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(644)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounInanimatePlaceConcreteOwnerVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounInanimateTitleAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounInanimateTitleAbstractVoid",0x8b95e717,"CollectionPremade.PremadeTagStructNounInanimateTitleAbstractVoid","CollectionPremade.hx",655,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",658,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("commendation","\x06","\xda","\xa1","\x8f"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(658)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",662,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("commendations","\xad","\xeb","\xfc","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(662)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",657,0xd14dbc64)
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
		HX_STACK_LINE(657)
		Dynamic tmp2 = _Function_1_3::Block(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(656)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",672,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("job","\xfd","\xcf","\x50","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(672)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",676,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jobs","\xd6","\x2d","\x65","\x46"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(676)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",671,0xd14dbc64)
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
		HX_STACK_LINE(671)
		Dynamic tmp5 = _Function_1_6::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(670)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",686,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("praise","\x7c","\x4e","\x14","\xac"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(686)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",690,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("praises","\x77","\x5e","\xb0","\xe5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(690)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp7){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",685,0xd14dbc64)
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
		HX_STACK_LINE(685)
		Dynamic tmp8 = _Function_1_9::Block(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(684)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounInanimateTitleAbstractVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounInanimateWearAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounInanimateWearAbstractVoid",0x5ce3908c,"CollectionPremade.PremadeTagStructNounInanimateWearAbstractVoid","CollectionPremade.hx",699,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",702,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("pride","\x68","\x4f","\x8b","\xc8"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(702)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",701,0xd14dbc64)
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
		HX_STACK_LINE(701)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(700)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",712,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shame","\x84","\xe0","\x1c","\x7c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(712)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",711,0xd14dbc64)
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
		HX_STACK_LINE(711)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(710)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounInanimateWearAbstractVoid,(void))

Void CollectionPremade_obj::PremadeTagStructNounInanimateWearConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructNounInanimateWearConcreteVoid",0x7795d76f,"CollectionPremade.PremadeTagStructNounInanimateWearConcreteVoid","CollectionPremade.hx",721,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",724,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shirt","\xf6","\xf6","\x22","\x7c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(724)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",723,0xd14dbc64)
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
		HX_STACK_LINE(723)
		Dynamic tmp1 = _Function_1_2::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(722)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",734,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("crown","\xf7","\x62","\x5a","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(734)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( Dynamic &tmp2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",733,0xd14dbc64)
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
		HX_STACK_LINE(733)
		Dynamic tmp3 = _Function_1_4::Block(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(732)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructNounInanimateWearConcreteVoid,(void))

Void CollectionPremade_obj::PremadeTagStructVerbVoidIntransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructVerbVoidIntransitiveVoid",0x1b64b33c,"CollectionPremade.PremadeTagStructVerbVoidIntransitiveVoid","CollectionPremade.hx",743,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",746,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("die","\x40","\x3d","\x4c","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(746)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",750,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("died","\x24","\x5b","\x69","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(750)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",754,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("died","\x24","\x5b","\x69","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(754)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",758,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dying","\x6d","\xe0","\x5c","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(758)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",762,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("dies","\x33","\x5b","\x69","\x42"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(762)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",745,0xd14dbc64)
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
		HX_STACK_LINE(745)
		Dynamic tmp5 = _Function_1_6::Block(tmp,tmp4,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(744)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",772,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrate","\x63","\x17","\xd5","\xd7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(772)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",776,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrated","\xa1","\x5f","\x9f","\x02"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(776)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",780,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrated","\xa1","\x5f","\x9f","\x02"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(780)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",784,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrating","\x60","\x5f","\xd7","\x48"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(784)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",788,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("disintegrates","\xb0","\x5f","\x9f","\x02"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(788)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp9,Dynamic &tmp10,Dynamic &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",771,0xd14dbc64)
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
		HX_STACK_LINE(771)
		Dynamic tmp11 = _Function_1_12::Block(tmp6,tmp9,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(770)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",798,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(798)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",802,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jumpe'","\x90","\xb4","\x17","\x08"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(802)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",806,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jumped","\xcd","\xb4","\x17","\x08"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(806)
		Dynamic tmp14 = _Function_1_15::Block();		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_1_16{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",810,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jumping","\xb4","\x90","\xa9","\x0c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(810)
		Dynamic tmp15 = _Function_1_16::Block();		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_17{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",814,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("jumps","\xc5","\x8b","\x22","\x56"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(814)
		Dynamic tmp16 = _Function_1_17::Block();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_18{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp15,Dynamic &tmp12,Dynamic &tmp16,Dynamic &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",797,0xd14dbc64)
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
		HX_STACK_LINE(797)
		Dynamic tmp17 = _Function_1_18::Block(tmp13,tmp15,tmp12,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(796)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
		struct _Function_1_19{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",824,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(824)
		Dynamic tmp18 = _Function_1_19::Block();		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_20{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",828,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(828)
		Dynamic tmp19 = _Function_1_20::Block();		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_21{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",832,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(832)
		Dynamic tmp20 = _Function_1_21::Block();		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_22{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",836,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(836)
		Dynamic tmp21 = _Function_1_22::Block();		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_23{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",840,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("runs","\xc8","\x7a","\xb3","\x4b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(840)
		Dynamic tmp22 = _Function_1_23::Block();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_24{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp20,Dynamic &tmp19,Dynamic &tmp21,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",823,0xd14dbc64)
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
		HX_STACK_LINE(823)
		Dynamic tmp23 = _Function_1_24::Block(tmp22,tmp20,tmp19,tmp21,tmp18);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(822)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
		struct _Function_1_25{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",850,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sing","\x4f","\x96","\x53","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(850)
		Dynamic tmp24 = _Function_1_25::Block();		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_26{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",854,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sang","\x47","\x84","\x4d","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(854)
		Dynamic tmp25 = _Function_1_26::Block();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_27{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",858,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sung","\x5b","\xb1","\x5c","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(858)
		Dynamic tmp26 = _Function_1_27::Block();		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_1_28{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",862,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("singing","\xf3","\x11","\x16","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(862)
		Dynamic tmp27 = _Function_1_28::Block();		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_29{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",866,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sings","\x44","\xef","\xcf","\x7c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(866)
		Dynamic tmp28 = _Function_1_29::Block();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_30{
			inline static Dynamic Block( Dynamic &tmp28,Dynamic &tmp26,Dynamic &tmp24,Dynamic &tmp25,Dynamic &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",849,0xd14dbc64)
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
		HX_STACK_LINE(849)
		Dynamic tmp29 = _Function_1_30::Block(tmp28,tmp26,tmp24,tmp25,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(848)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
		struct _Function_1_31{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",876,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(876)
		Dynamic tmp30 = _Function_1_31::Block();		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_1_32{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",880,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(880)
		Dynamic tmp31 = _Function_1_32::Block();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_33{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",884,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(884)
		Dynamic tmp32 = _Function_1_33::Block();		HX_STACK_VAR(tmp32,"tmp32");
		struct _Function_1_34{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",888,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(888)
		Dynamic tmp33 = _Function_1_34::Block();		HX_STACK_VAR(tmp33,"tmp33");
		struct _Function_1_35{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",892,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sleeps","\x7c","\xb7","\x60","\x6d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(892)
		Dynamic tmp34 = _Function_1_35::Block();		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_36{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp31,Dynamic &tmp34,Dynamic &tmp32,Dynamic &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",875,0xd14dbc64)
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
		HX_STACK_LINE(875)
		Dynamic tmp35 = _Function_1_36::Block(tmp33,tmp31,tmp34,tmp32,tmp30);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(874)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp35);
		struct _Function_1_37{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",902,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(902)
		Dynamic tmp36 = _Function_1_37::Block();		HX_STACK_VAR(tmp36,"tmp36");
		struct _Function_1_38{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",906,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(906)
		Dynamic tmp37 = _Function_1_38::Block();		HX_STACK_VAR(tmp37,"tmp37");
		struct _Function_1_39{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",910,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(910)
		Dynamic tmp38 = _Function_1_39::Block();		HX_STACK_VAR(tmp38,"tmp38");
		struct _Function_1_40{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",914,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("working","\xb1","\x43","\xcf","\xa0"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(914)
		Dynamic tmp39 = _Function_1_40::Block();		HX_STACK_VAR(tmp39,"tmp39");
		struct _Function_1_41{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",918,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("works","\x82","\x95","\x64","\xce"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(918)
		Dynamic tmp40 = _Function_1_41::Block();		HX_STACK_VAR(tmp40,"tmp40");
		struct _Function_1_42{
			inline static Dynamic Block( Dynamic &tmp36,Dynamic &tmp38,Dynamic &tmp40,Dynamic &tmp37,Dynamic &tmp39){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",901,0xd14dbc64)
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
		HX_STACK_LINE(901)
		Dynamic tmp41 = _Function_1_42::Block(tmp36,tmp38,tmp40,tmp37,tmp39);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(900)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp41);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructVerbVoidIntransitiveVoid,(void))

Void CollectionPremade_obj::PremadeTagStructVerbVoidTransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeTagStructVerbVoidTransitiveVoid",0xd368d517,"CollectionPremade.PremadeTagStructVerbVoidTransitiveVoid","CollectionPremade.hx",927,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",930,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinate","\xfa","\xb9","\x11","\xcb"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(930)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",934,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinated","\x2a","\x01","\x71","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(934)
		Dynamic tmp1 = _Function_1_2::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_3{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",938,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinated","\x2a","\x01","\x71","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(938)
		Dynamic tmp2 = _Function_1_3::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",942,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinating","\xb7","\x15","\x73","\xfe"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(942)
		Dynamic tmp3 = _Function_1_4::Block();		HX_STACK_VAR(tmp3,"tmp3");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",946,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("assasinates","\x39","\x01","\x71","\xe4"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(946)
		Dynamic tmp4 = _Function_1_5::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp,Dynamic &tmp4,Dynamic &tmp2,Dynamic &tmp3,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",929,0xd14dbc64)
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
		HX_STACK_LINE(929)
		Dynamic tmp5 = _Function_1_6::Block(tmp,tmp4,tmp2,tmp3,tmp1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(928)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
		struct _Function_1_7{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",956,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("buy","\x46","\xc3","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(956)
		Dynamic tmp6 = _Function_1_7::Block();		HX_STACK_VAR(tmp6,"tmp6");
		struct _Function_1_8{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",960,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(960)
		Dynamic tmp7 = _Function_1_8::Block();		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_9{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",964,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(964)
		Dynamic tmp8 = _Function_1_9::Block();		HX_STACK_VAR(tmp8,"tmp8");
		struct _Function_1_10{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",968,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("buying","\x5c","\x19","\x26","\xdd"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(968)
		Dynamic tmp9 = _Function_1_10::Block();		HX_STACK_VAR(tmp9,"tmp9");
		struct _Function_1_11{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",972,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("buys","\x6d","\x1a","\x20","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(972)
		Dynamic tmp10 = _Function_1_11::Block();		HX_STACK_VAR(tmp10,"tmp10");
		struct _Function_1_12{
			inline static Dynamic Block( Dynamic &tmp6,Dynamic &tmp9,Dynamic &tmp10,Dynamic &tmp7,Dynamic &tmp8){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",955,0xd14dbc64)
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
		HX_STACK_LINE(955)
		Dynamic tmp11 = _Function_1_12::Block(tmp6,tmp9,tmp10,tmp7,tmp8);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(954)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
		struct _Function_1_13{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",982,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(982)
		Dynamic tmp12 = _Function_1_13::Block();		HX_STACK_VAR(tmp12,"tmp12");
		struct _Function_1_14{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",986,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(986)
		Dynamic tmp13 = _Function_1_14::Block();		HX_STACK_VAR(tmp13,"tmp13");
		struct _Function_1_15{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",990,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(990)
		Dynamic tmp14 = _Function_1_15::Block();		HX_STACK_VAR(tmp14,"tmp14");
		struct _Function_1_16{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",994,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("calling","\x04","\xab","\x64","\x54"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(994)
		Dynamic tmp15 = _Function_1_16::Block();		HX_STACK_VAR(tmp15,"tmp15");
		struct _Function_1_17{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",998,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("calls","\x15","\x72","\x1b","\x41"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(998)
		Dynamic tmp16 = _Function_1_17::Block();		HX_STACK_VAR(tmp16,"tmp16");
		struct _Function_1_18{
			inline static Dynamic Block( Dynamic &tmp13,Dynamic &tmp15,Dynamic &tmp12,Dynamic &tmp16,Dynamic &tmp14){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",981,0xd14dbc64)
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
		HX_STACK_LINE(981)
		Dynamic tmp17 = _Function_1_18::Block(tmp13,tmp15,tmp12,tmp16,tmp14);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(980)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp17);
		struct _Function_1_19{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1008,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desire","\xca","\x45","\x7c","\x6f"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1008)
		Dynamic tmp18 = _Function_1_19::Block();		HX_STACK_VAR(tmp18,"tmp18");
		struct _Function_1_20{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1012,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1012)
		Dynamic tmp19 = _Function_1_20::Block();		HX_STACK_VAR(tmp19,"tmp19");
		struct _Function_1_21{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1016,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1016)
		Dynamic tmp20 = _Function_1_21::Block();		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_22{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1020,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desiring","\x87","\x35","\x74","\x7b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1020)
		Dynamic tmp21 = _Function_1_22::Block();		HX_STACK_VAR(tmp21,"tmp21");
		struct _Function_1_23{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1024,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("desires","\x69","\xcb","\x40","\x1d"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1024)
		Dynamic tmp22 = _Function_1_23::Block();		HX_STACK_VAR(tmp22,"tmp22");
		struct _Function_1_24{
			inline static Dynamic Block( Dynamic &tmp22,Dynamic &tmp20,Dynamic &tmp19,Dynamic &tmp21,Dynamic &tmp18){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1007,0xd14dbc64)
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
		HX_STACK_LINE(1007)
		Dynamic tmp23 = _Function_1_24::Block(tmp22,tmp20,tmp19,tmp21,tmp18);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1006)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
		struct _Function_1_25{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1034,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drink","\x18","\x62","\xbc","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1034)
		Dynamic tmp24 = _Function_1_25::Block();		HX_STACK_VAR(tmp24,"tmp24");
		struct _Function_1_26{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1038,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drunk","\x24","\x7d","\xc5","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1038)
		Dynamic tmp25 = _Function_1_26::Block();		HX_STACK_VAR(tmp25,"tmp25");
		struct _Function_1_27{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1042,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drank","\x10","\x50","\xb6","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1042)
		Dynamic tmp26 = _Function_1_27::Block();		HX_STACK_VAR(tmp26,"tmp26");
		struct _Function_1_28{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1046,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drinking","\xca","\x09","\xda","\x74"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1046)
		Dynamic tmp27 = _Function_1_28::Block();		HX_STACK_VAR(tmp27,"tmp27");
		struct _Function_1_29{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1050,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drinks","\x5b","\x73","\x19","\xe5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1050)
		Dynamic tmp28 = _Function_1_29::Block();		HX_STACK_VAR(tmp28,"tmp28");
		struct _Function_1_30{
			inline static Dynamic Block( Dynamic &tmp28,Dynamic &tmp26,Dynamic &tmp24,Dynamic &tmp25,Dynamic &tmp27){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1033,0xd14dbc64)
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
		HX_STACK_LINE(1033)
		Dynamic tmp29 = _Function_1_30::Block(tmp28,tmp26,tmp24,tmp25,tmp27);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1032)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
		struct _Function_1_31{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1061,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drive","\x0a","\x69","\xbc","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1061)
		Dynamic tmp30 = _Function_1_31::Block();		HX_STACK_VAR(tmp30,"tmp30");
		struct _Function_1_32{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1065,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drove","\x90","\xf6","\xc0","\xdf"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1065)
		Dynamic tmp31 = _Function_1_32::Block();		HX_STACK_VAR(tmp31,"tmp31");
		struct _Function_1_33{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1069,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("driven","\x24","\x80","\x1f","\xe5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1069)
		Dynamic tmp32 = _Function_1_33::Block();		HX_STACK_VAR(tmp32,"tmp32");
		struct _Function_1_34{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1073,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("driving","\xc7","\xa8","\x73","\x96"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1073)
		Dynamic tmp33 = _Function_1_34::Block();		HX_STACK_VAR(tmp33,"tmp33");
		struct _Function_1_35{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1077,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("drives","\x29","\x80","\x1f","\xe5"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1077)
		Dynamic tmp34 = _Function_1_35::Block();		HX_STACK_VAR(tmp34,"tmp34");
		struct _Function_1_36{
			inline static Dynamic Block( Dynamic &tmp33,Dynamic &tmp31,Dynamic &tmp34,Dynamic &tmp32,Dynamic &tmp30){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1060,0xd14dbc64)
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
		HX_STACK_LINE(1060)
		Dynamic tmp35 = _Function_1_36::Block(tmp33,tmp31,tmp34,tmp32,tmp30);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1059)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp35);
		struct _Function_1_37{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1087,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("eat","\x98","\xf8","\x4c","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1087)
		Dynamic tmp36 = _Function_1_37::Block();		HX_STACK_VAR(tmp36,"tmp36");
		struct _Function_1_38{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1091,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("ate","\x12","\x00","\x4a","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1091)
		Dynamic tmp37 = _Function_1_38::Block();		HX_STACK_VAR(tmp37,"tmp37");
		struct _Function_1_39{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1095,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("eaten","\x01","\xa7","\xee","\x67"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1095)
		Dynamic tmp38 = _Function_1_39::Block();		HX_STACK_VAR(tmp38,"tmp38");
		struct _Function_1_40{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1099,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("eating","\x4a","\x83","\xe6","\x88"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1099)
		Dynamic tmp39 = _Function_1_40::Block();		HX_STACK_VAR(tmp39,"tmp39");
		struct _Function_1_41{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1103,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("eats","\xdb","\x8c","\x0c","\x43"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1103)
		Dynamic tmp40 = _Function_1_41::Block();		HX_STACK_VAR(tmp40,"tmp40");
		struct _Function_1_42{
			inline static Dynamic Block( Dynamic &tmp36,Dynamic &tmp38,Dynamic &tmp40,Dynamic &tmp37,Dynamic &tmp39){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1086,0xd14dbc64)
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
		HX_STACK_LINE(1086)
		Dynamic tmp41 = _Function_1_42::Block(tmp36,tmp38,tmp40,tmp37,tmp39);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1085)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp41);
		struct _Function_1_43{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1113,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fight","\xd0","\x15","\x95","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1113)
		Dynamic tmp42 = _Function_1_43::Block();		HX_STACK_VAR(tmp42,"tmp42");
		struct _Function_1_44{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1117,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1117)
		Dynamic tmp43 = _Function_1_44::Block();		HX_STACK_VAR(tmp43,"tmp43");
		struct _Function_1_45{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1121,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1121)
		Dynamic tmp44 = _Function_1_45::Block();		HX_STACK_VAR(tmp44,"tmp44");
		struct _Function_1_46{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1125,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fighting","\x12","\x79","\xd2","\x35"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1125)
		Dynamic tmp45 = _Function_1_46::Block();		HX_STACK_VAR(tmp45,"tmp45");
		struct _Function_1_47{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1129,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("fights","\xa3","\x00","\xde","\x81"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1129)
		Dynamic tmp46 = _Function_1_47::Block();		HX_STACK_VAR(tmp46,"tmp46");
		struct _Function_1_48{
			inline static Dynamic Block( Dynamic &tmp46,Dynamic &tmp42,Dynamic &tmp44,Dynamic &tmp45,Dynamic &tmp43){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1112,0xd14dbc64)
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
		HX_STACK_LINE(1112)
		Dynamic tmp47 = _Function_1_48::Block(tmp46,tmp42,tmp44,tmp45,tmp43);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1111)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp47);
		struct _Function_1_49{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1139,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1139)
		Dynamic tmp48 = _Function_1_49::Block();		HX_STACK_VAR(tmp48,"tmp48");
		struct _Function_1_50{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1143,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("got","\x4c","\x89","\x4e","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1143)
		Dynamic tmp49 = _Function_1_50::Block();		HX_STACK_VAR(tmp49,"tmp49");
		struct _Function_1_51{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1147,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("gotten","\x11","\xac","\x41","\x65"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1147)
		Dynamic tmp50 = _Function_1_51::Block();		HX_STACK_VAR(tmp50,"tmp50");
		struct _Function_1_52{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1151,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("getting","\x84","\x50","\xa6","\x34"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1151)
		Dynamic tmp51 = _Function_1_52::Block();		HX_STACK_VAR(tmp51,"tmp51");
		struct _Function_1_53{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1155,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("gets","\x1d","\x03","\x62","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1155)
		Dynamic tmp52 = _Function_1_53::Block();		HX_STACK_VAR(tmp52,"tmp52");
		struct _Function_1_54{
			inline static Dynamic Block( Dynamic &tmp48,Dynamic &tmp52,Dynamic &tmp49,Dynamic &tmp50,Dynamic &tmp51){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1138,0xd14dbc64)
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
		HX_STACK_LINE(1138)
		Dynamic tmp53 = _Function_1_54::Block(tmp48,tmp52,tmp49,tmp50,tmp51);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(1137)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp53);
		struct _Function_1_55{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1165,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1165)
		Dynamic tmp54 = _Function_1_55::Block();		HX_STACK_VAR(tmp54,"tmp54");
		struct _Function_1_56{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1169,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grabbed","\xf5","\xcc","\xc1","\x6a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1169)
		Dynamic tmp55 = _Function_1_56::Block();		HX_STACK_VAR(tmp55,"tmp55");
		struct _Function_1_57{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1173,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grabbed","\xf5","\xcc","\xc1","\x6a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1173)
		Dynamic tmp56 = _Function_1_57::Block();		HX_STACK_VAR(tmp56,"tmp56");
		struct _Function_1_58{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1177,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grabbing","\x8c","\x9b","\xd4","\xfe"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1177)
		Dynamic tmp57 = _Function_1_58::Block();		HX_STACK_VAR(tmp57,"tmp57");
		struct _Function_1_59{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1181,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("grabs","\x27","\x03","\xea","\x99"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1181)
		Dynamic tmp58 = _Function_1_59::Block();		HX_STACK_VAR(tmp58,"tmp58");
		struct _Function_1_60{
			inline static Dynamic Block( Dynamic &tmp54,Dynamic &tmp55,Dynamic &tmp56,Dynamic &tmp58,Dynamic &tmp57){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1164,0xd14dbc64)
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
		HX_STACK_LINE(1164)
		Dynamic tmp59 = _Function_1_60::Block(tmp54,tmp55,tmp56,tmp58,tmp57);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(1163)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp59);
		struct _Function_1_61{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1191,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1191)
		Dynamic tmp60 = _Function_1_61::Block();		HX_STACK_VAR(tmp60,"tmp60");
		struct _Function_1_62{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1195,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1195)
		Dynamic tmp61 = _Function_1_62::Block();		HX_STACK_VAR(tmp61,"tmp61");
		struct _Function_1_63{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1199,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1199)
		Dynamic tmp62 = _Function_1_63::Block();		HX_STACK_VAR(tmp62,"tmp62");
		struct _Function_1_64{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1203,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("killing","\x04","\x44","\xeb","\xd3"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1203)
		Dynamic tmp63 = _Function_1_64::Block();		HX_STACK_VAR(tmp63,"tmp63");
		struct _Function_1_65{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1207,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("kills","\x15","\xcb","\x99","\xe1"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1207)
		Dynamic tmp64 = _Function_1_65::Block();		HX_STACK_VAR(tmp64,"tmp64");
		struct _Function_1_66{
			inline static Dynamic Block( Dynamic &tmp60,Dynamic &tmp62,Dynamic &tmp63,Dynamic &tmp61,Dynamic &tmp64){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1190,0xd14dbc64)
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
		HX_STACK_LINE(1190)
		Dynamic tmp65 = _Function_1_66::Block(tmp60,tmp62,tmp63,tmp61,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(1189)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp65);
		struct _Function_1_67{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1217,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("love","\x72","\xac","\xb7","\x47"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1217)
		Dynamic tmp66 = _Function_1_67::Block();		HX_STACK_VAR(tmp66,"tmp66");
		struct _Function_1_68{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1221,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1221)
		Dynamic tmp67 = _Function_1_68::Block();		HX_STACK_VAR(tmp67,"tmp67");
		struct _Function_1_69{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1225,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1225)
		Dynamic tmp68 = _Function_1_69::Block();		HX_STACK_VAR(tmp68,"tmp68");
		struct _Function_1_70{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1229,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("loving","\x2f","\x96","\x54","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1229)
		Dynamic tmp69 = _Function_1_70::Block();		HX_STACK_VAR(tmp69,"tmp69");
		struct _Function_1_71{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1233,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("loves","\xc1","\x37","\xff","\x78"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1233)
		Dynamic tmp70 = _Function_1_71::Block();		HX_STACK_VAR(tmp70,"tmp70");
		struct _Function_1_72{
			inline static Dynamic Block( Dynamic &tmp68,Dynamic &tmp66,Dynamic &tmp70,Dynamic &tmp67,Dynamic &tmp69){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1216,0xd14dbc64)
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
		HX_STACK_LINE(1216)
		Dynamic tmp71 = _Function_1_72::Block(tmp68,tmp66,tmp70,tmp67,tmp69);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(1215)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp71);
		struct _Function_1_73{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1243,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1243)
		Dynamic tmp72 = _Function_1_73::Block();		HX_STACK_VAR(tmp72,"tmp72");
		struct _Function_1_74{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1247,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painted","\x7d","\xb3","\x22","\xb8"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1247)
		Dynamic tmp73 = _Function_1_74::Block();		HX_STACK_VAR(tmp73,"tmp73");
		struct _Function_1_75{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1251,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painted","\x7d","\xb3","\x22","\xb8"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1251)
		Dynamic tmp74 = _Function_1_75::Block();		HX_STACK_VAR(tmp74,"tmp74");
		struct _Function_1_76{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1255,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("painting","\x04","\x6c","\x3d","\x66"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1255)
		Dynamic tmp75 = _Function_1_76::Block();		HX_STACK_VAR(tmp75,"tmp75");
		struct _Function_1_77{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1259,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("paints","\x15","\xf3","\x91","\xe7"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1259)
		Dynamic tmp76 = _Function_1_77::Block();		HX_STACK_VAR(tmp76,"tmp76");
		struct _Function_1_78{
			inline static Dynamic Block( Dynamic &tmp73,Dynamic &tmp75,Dynamic &tmp72,Dynamic &tmp76,Dynamic &tmp74){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1242,0xd14dbc64)
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
		HX_STACK_LINE(1242)
		Dynamic tmp77 = _Function_1_78::Block(tmp73,tmp75,tmp72,tmp76,tmp74);		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(1241)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp77);
		struct _Function_1_79{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1269,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sell","\x92","\x8b","\x50","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1269)
		Dynamic tmp78 = _Function_1_79::Block();		HX_STACK_VAR(tmp78,"tmp78");
		struct _Function_1_80{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1273,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sold","\x14","\x22","\x58","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1273)
		Dynamic tmp79 = _Function_1_80::Block();		HX_STACK_VAR(tmp79,"tmp79");
		struct _Function_1_81{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1277,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sold","\x14","\x22","\x58","\x4c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1277)
		Dynamic tmp80 = _Function_1_81::Block();		HX_STACK_VAR(tmp80,"tmp80");
		struct _Function_1_82{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1281,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("selling","\x90","\x88","\x29","\x87"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1281)
		Dynamic tmp81 = _Function_1_82::Block();		HX_STACK_VAR(tmp81,"tmp81");
		struct _Function_1_83{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1285,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("sells","\xa1","\x94","\x29","\x7a"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1285)
		Dynamic tmp82 = _Function_1_83::Block();		HX_STACK_VAR(tmp82,"tmp82");
		struct _Function_1_84{
			inline static Dynamic Block( Dynamic &tmp81,Dynamic &tmp80,Dynamic &tmp79,Dynamic &tmp82,Dynamic &tmp78){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1268,0xd14dbc64)
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
		HX_STACK_LINE(1268)
		Dynamic tmp83 = _Function_1_84::Block(tmp81,tmp80,tmp79,tmp82,tmp78);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(1267)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp83);
		struct _Function_1_85{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1295,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_1,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shove","\xe9","\x87","\x27","\x7c"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1295)
		Dynamic tmp84 = _Function_1_85::Block();		HX_STACK_VAR(tmp84,"tmp84");
		struct _Function_1_86{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1299,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_2,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shoved","\x5b","\x64","\x6f","\x26"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1299)
		Dynamic tmp85 = _Function_1_86::Block();		HX_STACK_VAR(tmp85,"tmp85");
		struct _Function_1_87{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1303,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_3,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shoved","\x5b","\x64","\x6f","\x26"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1303)
		Dynamic tmp86 = _Function_1_87::Block();		HX_STACK_VAR(tmp86,"tmp86");
		struct _Function_1_88{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1307,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_ING,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shoving","\x66","\x7d","\x0b","\x7b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1307)
		Dynamic tmp87 = _Function_1_88::Block();		HX_STACK_VAR(tmp87,"tmp87");
		struct _Function_1_89{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1311,0xd14dbc64)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::VERB_S,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("shoves","\x6a","\x64","\x6f","\x26"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1311)
		Dynamic tmp88 = _Function_1_89::Block();		HX_STACK_VAR(tmp88,"tmp88");
		struct _Function_1_90{
			inline static Dynamic Block( Dynamic &tmp86,Dynamic &tmp88,Dynamic &tmp84,Dynamic &tmp85,Dynamic &tmp87){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CollectionPremade.hx",1294,0xd14dbc64)
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
		HX_STACK_LINE(1294)
		Dynamic tmp89 = _Function_1_90::Block(tmp86,tmp88,tmp84,tmp85,tmp87);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(1293)
		_collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp89);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeTagStructVerbVoidTransitiveVoid,(void))

Void CollectionPremade_obj::PremadeVisitorObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeVisitorObjectVoid",0x0940badd,"CollectionPremade.PremadeVisitorObjectVoid","CollectionPremade.hx",1320,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeVisitorObjectVoid,(void))


CollectionPremade_obj::CollectionPremade_obj()
{
}

bool CollectionPremade_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVoid") ) { outValue = PremadeTagStructVoid_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"PremadeRoomObjectVoid") ) { outValue = PremadeRoomObjectVoid_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"PremadeFloorObjectVoid") ) { outValue = PremadeFloorObjectVoid_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PremadeTagStructAdjVoid") ) { outValue = PremadeTagStructAdjVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructAdvVoid") ) { outValue = PremadeTagStructAdvVoid_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"PremadeVisitorObjectVoid") ) { outValue = PremadeVisitorObjectVoid_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"PremadeExhibitionObjectVoid") ) { outValue = PremadeExhibitionObjectVoid_dyn(); return true;  }
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
	HX_MARK_MEMBER_NAME(CollectionPremade_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionPremade_obj::__mClass,"__mClass");
};

#endif

hx::Class CollectionPremade_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PremadeExhibitionObjectVoid","\x5a","\x30","\x06","\x05"),
	HX_HCSTRING("PremadeFloorObjectVoid","\x27","\x08","\xda","\x80"),
	HX_HCSTRING("PremadeRoomObjectVoid","\x26","\x43","\x7c","\xe7"),
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
	HX_HCSTRING("PremadeVisitorObjectVoid","\x89","\xba","\x78","\xc7"),
	::String(null()) };

void CollectionPremade_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionPremade","\x9a","\xa2","\xd1","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CollectionPremade_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CollectionPremade_obj >;
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

