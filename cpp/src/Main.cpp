#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif
#ifndef INCLUDED_EnumTagTypeSub
#include <EnumTagTypeSub.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif

Void Main_obj::__construct()
{
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",4,0x087e5c05)
		HX_STACK_LINE(5)
		::CollectionGlobal tmp = ::CollectionGlobal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5)
		::CollectionGlobal collectionGlobalObject = tmp;		HX_STACK_VAR(collectionGlobalObject,"collectionGlobalObject");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",17,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(17)
		Dynamic tmp1 = _Function_1_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",17,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Mikael's","\xa5","\x8b","\x9c","\x27"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(17)
		Dynamic tmp2 = _Function_1_2::Block();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_1_3{
			inline static Dynamic Block( Dynamic &tmp2,Dynamic &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",17,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp1,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(17)
		Dynamic tmp3 = _Function_1_3::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		struct _Function_1_4{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",18,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(18)
		Dynamic tmp4 = _Function_1_4::Block();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_5{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",18,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeSubEnum","\xcd","\x68","\x9c","\xfd") , ::EnumTagTypeSub_obj::NOUN_POS,false);
					__result->Add(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42") , HX_HCSTRING("Andy's","\xce","\x8c","\xbb","\x95"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(18)
		Dynamic tmp5 = _Function_1_5::Block();		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_6{
			inline static Dynamic Block( Dynamic &tmp5,Dynamic &tmp4){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",18,0x087e5c05)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9") , ::EnumTagType_obj::NOUN_ALIVE_CONCRETE,false);
					__result->Add(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3") , tmp4,false);
					__result->Add(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(18)
		Dynamic tmp6 = _Function_1_6::Block(tmp5,tmp4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(18)
		collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(19)
		int tmp7 = collectionGlobalObject->GetTagStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(19)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),19,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(19)
		::haxe::Log_obj::trace(tmp7,tmp8);
		HX_STACK_LINE(20)
		::ObjectMuseum tmp9 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),HX_HCSTRING("First Floor","\x9c","\x21","\x70","\xf5"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),::EnumMuseumType_obj::FLR,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		::ObjectMuseum floor1Object = tmp9;		HX_STACK_VAR(floor1Object,"floor1Object");
		HX_STACK_LINE(21)
		::ObjectMuseum tmp10 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),HX_HCSTRING("Second Floor","\x20","\xf8","\x88","\x2f"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),::EnumMuseumType_obj::FLR,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(21)
		::ObjectMuseum floor2Object = tmp10;		HX_STACK_VAR(floor2Object,"floor2Object");
		HX_STACK_LINE(22)
		::ObjectMuseum tmp11 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),HX_HCSTRING("First Room","\x4b","\x88","\xbc","\x44"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),::EnumMuseumType_obj::ROM,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		::ObjectMuseum room1Object = tmp11;		HX_STACK_VAR(room1Object,"room1Object");
		HX_STACK_LINE(23)
		::ObjectMuseum tmp12 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),HX_HCSTRING("Second Room","\x47","\xee","\xfc","\x82"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),::EnumMuseumType_obj::ROM,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(23)
		::ObjectMuseum room2Object = tmp12;		HX_STACK_VAR(room2Object,"room2Object");
		HX_STACK_LINE(24)
		::ObjectMuseum tmp13 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),HX_HCSTRING("Third Room","\xb4","\x6d","\xcc","\x63"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),::EnumMuseumType_obj::ROM,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(24)
		::ObjectMuseum room3Object = tmp13;		HX_STACK_VAR(room3Object,"room3Object");
		HX_STACK_LINE(25)
		::ObjectMuseum tmp14 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),HX_HCSTRING("Fourth Room","\x21","\x1d","\x19","\x8e"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),::EnumMuseumType_obj::ROM,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(25)
		::ObjectMuseum room4Object = tmp14;		HX_STACK_VAR(room4Object,"room4Object");
		HX_STACK_LINE(26)
		::ObjectMuseum tmp15 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_001","\x27","\x62","\x7a","\x18"),HX_HCSTRING("First Exhibition","\x7f","\x06","\xa3","\x70"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(26)
		::ObjectMuseum exhibition1Object = tmp15;		HX_STACK_VAR(exhibition1Object,"exhibition1Object");
		HX_STACK_LINE(27)
		::ObjectMuseum tmp16 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_002","\x28","\x62","\x7a","\x18"),HX_HCSTRING("Second Exhibition","\x7b","\x11","\xde","\xc5"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(27)
		::ObjectMuseum exhibition2Object = tmp16;		HX_STACK_VAR(exhibition2Object,"exhibition2Object");
		HX_STACK_LINE(28)
		::ObjectMuseum tmp17 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_003","\x29","\x62","\x7a","\x18"),HX_HCSTRING("Third Exhibition","\xa8","\x60","\x7a","\x86"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(28)
		::ObjectMuseum exhibition3Object = tmp17;		HX_STACK_VAR(exhibition3Object,"exhibition3Object");
		HX_STACK_LINE(29)
		::ObjectMuseum tmp18 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_004","\x2a","\x62","\x7a","\x18"),HX_HCSTRING("Fourth Exhibition","\xd5","\xdf","\x97","\x52"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(29)
		::ObjectMuseum exhibition4Object = tmp18;		HX_STACK_VAR(exhibition4Object,"exhibition4Object");
		HX_STACK_LINE(30)
		::ObjectMuseum tmp19 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_005","\x2b","\x62","\x7a","\x18"),HX_HCSTRING("Fifth Exhibition","\x18","\x78","\x4a","\x81"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(30)
		::ObjectMuseum exhibition5Object = tmp19;		HX_STACK_VAR(exhibition5Object,"exhibition5Object");
		HX_STACK_LINE(31)
		::ObjectMuseum tmp20 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_006","\x2c","\x62","\x7a","\x18"),HX_HCSTRING("Sixth Exhibition","\x59","\x6b","\xec","\x4e"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(31)
		::ObjectMuseum exhibition6Object = tmp20;		HX_STACK_VAR(exhibition6Object,"exhibition6Object");
		HX_STACK_LINE(32)
		::ObjectMuseum tmp21 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_007","\x2d","\x62","\x7a","\x18"),HX_HCSTRING("Seventh Exhibition","\x8e","\x96","\x66","\x3c"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(32)
		::ObjectMuseum exhibition7Object = tmp21;		HX_STACK_VAR(exhibition7Object,"exhibition7Object");
		HX_STACK_LINE(33)
		::ObjectMuseum tmp22 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_008","\x2e","\x62","\x7a","\x18"),HX_HCSTRING("Eighth Exhibition","\xd6","\x18","\xfb","\x63"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH,collectionGlobalObject->GetTagStructArray());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(33)
		::ObjectMuseum exhibition8Object = tmp22;		HX_STACK_VAR(exhibition8Object,"exhibition8Object");
		HX_STACK_LINE(34)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(35)
		while((true)){
			HX_STACK_LINE(35)
			bool tmp23 = (loopCounter1Int < (int)1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(35)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(35)
			if ((tmp24)){
				HX_STACK_LINE(35)
				break;
			}
			HX_STACK_LINE(36)
			::CollectionGlobal tmp25 = collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(36)
			::ObjectMuseum tmp26 = ::CollectionFunction_obj::PickRandomFromArrayT(collectionGlobalObject->GetExhibitionObjectArray());		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(36)
			int tmp27 = collectionGlobalObject->PutIndexGlobalVisitorInt();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(36)
			::String tmp28 = (HX_HCSTRING("Visitor ","\xd2","\xd0","\x5e","\x02") + loopCounter1Int);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(36)
			::ObjectVisitor tmp29 = ::ObjectVisitor_obj::__new(tmp25,tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(36)
			::ObjectVisitor visitorObject = tmp29;		HX_STACK_VAR(visitorObject,"visitorObject");
			HX_STACK_LINE(37)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(39)
		while((true)){
			HX_STACK_LINE(41)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(42)
			while((true)){
				HX_STACK_LINE(42)
				int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(42)
				int tmp24 = collectionGlobalObject->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(42)
				bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(42)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(42)
				if ((tmp26)){
					HX_STACK_LINE(42)
					break;
				}
				HX_STACK_LINE(43)
				::ObjectMuseum tmp27 = collectionGlobalObject->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(43)
				tmp27->Update();
				HX_STACK_LINE(44)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(46)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(47)
				int tmp24 = collectionGlobalObject->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(47)
				bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(47)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(47)
				if ((tmp26)){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(48)
				::ObjectMuseum tmp27 = collectionGlobalObject->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(48)
				tmp27->Update();
				HX_STACK_LINE(49)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(51)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(52)
				int tmp24 = collectionGlobalObject->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(52)
				bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(52)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(52)
				if ((tmp26)){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(53)
				::ObjectMuseum tmp27 = collectionGlobalObject->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(53)
				tmp27->Update();
				HX_STACK_LINE(54)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(56)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(57)
				int tmp24 = collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(57)
				bool tmp25 = (tmp23 < tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(57)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(57)
				if ((tmp26)){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(58)
				::ObjectVisitor tmp27 = collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(58)
				tmp27->AIAutoExhibitionChangeVoid();
				HX_STACK_LINE(59)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(63)
			::String tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				::ObjectVisitor tmp24 = collectionGlobalObject->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(63)
				::haxe::ds::ObjectMap tmp25 = tmp24->GetTagStructMap();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(63)
				::haxe::IMap this1 = tmp25;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(63)
				tmp23 = this1->toString();
			}
			HX_STACK_LINE(63)
			Dynamic tmp24 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),63,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(63)
			::haxe::Log_obj::trace(tmp23,tmp24);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

