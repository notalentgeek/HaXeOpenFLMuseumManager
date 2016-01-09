#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionPremade
#include <CollectionPremade.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
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
		HX_STACK_LINE(6)
		::CollectionGlobal tmp = ::CollectionGlobal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6)
		::CollectionGlobal collectionGlobalObject = tmp;		HX_STACK_VAR(collectionGlobalObject,"collectionGlobalObject");
		HX_STACK_LINE(7)
		::CollectionGlobal tmp1 = collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7)
		::CollectionPremade_obj::PremadeTagStructVoid(tmp1);
		HX_STACK_LINE(13)
		::ObjectMuseum tmp2 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),HX_HCSTRING("First Floor","\x9c","\x21","\x70","\xf5"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		::ObjectMuseum floor1Object = tmp2;		HX_STACK_VAR(floor1Object,"floor1Object");
		HX_STACK_LINE(14)
		::ObjectMuseum tmp3 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),HX_HCSTRING("Second Floor","\x20","\xf8","\x88","\x2f"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		::ObjectMuseum floor2Object = tmp3;		HX_STACK_VAR(floor2Object,"floor2Object");
		HX_STACK_LINE(15)
		::ObjectMuseum tmp4 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),HX_HCSTRING("First Room","\x4b","\x88","\xbc","\x44"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		::ObjectMuseum room1Object = tmp4;		HX_STACK_VAR(room1Object,"room1Object");
		HX_STACK_LINE(16)
		::ObjectMuseum tmp5 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),HX_HCSTRING("Second Room","\x47","\xee","\xfc","\x82"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		::ObjectMuseum room2Object = tmp5;		HX_STACK_VAR(room2Object,"room2Object");
		HX_STACK_LINE(17)
		::ObjectMuseum tmp6 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),HX_HCSTRING("Third Room","\xb4","\x6d","\xcc","\x63"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		::ObjectMuseum room3Object = tmp6;		HX_STACK_VAR(room3Object,"room3Object");
		HX_STACK_LINE(18)
		::ObjectMuseum tmp7 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),HX_HCSTRING("Fourth Room","\x21","\x1d","\x19","\x8e"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(18)
		::ObjectMuseum room4Object = tmp7;		HX_STACK_VAR(room4Object,"room4Object");
		HX_STACK_LINE(19)
		::ObjectMuseum tmp8 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_001","\x27","\x62","\x7a","\x18"),HX_HCSTRING("First Exhibition","\x7f","\x06","\xa3","\x70"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(19)
		::ObjectMuseum exhibition1Object = tmp8;		HX_STACK_VAR(exhibition1Object,"exhibition1Object");
		HX_STACK_LINE(20)
		::ObjectMuseum tmp9 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_002","\x28","\x62","\x7a","\x18"),HX_HCSTRING("Second Exhibition","\x7b","\x11","\xde","\xc5"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		::ObjectMuseum exhibition2Object = tmp9;		HX_STACK_VAR(exhibition2Object,"exhibition2Object");
		HX_STACK_LINE(21)
		::ObjectMuseum tmp10 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_003","\x29","\x62","\x7a","\x18"),HX_HCSTRING("Third Exhibition","\xa8","\x60","\x7a","\x86"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(21)
		::ObjectMuseum exhibition3Object = tmp10;		HX_STACK_VAR(exhibition3Object,"exhibition3Object");
		HX_STACK_LINE(22)
		::ObjectMuseum tmp11 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_004","\x2a","\x62","\x7a","\x18"),HX_HCSTRING("Fourth Exhibition","\xd5","\xdf","\x97","\x52"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(22)
		::ObjectMuseum exhibition4Object = tmp11;		HX_STACK_VAR(exhibition4Object,"exhibition4Object");
		HX_STACK_LINE(23)
		::ObjectMuseum tmp12 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_005","\x2b","\x62","\x7a","\x18"),HX_HCSTRING("Fifth Exhibition","\x18","\x78","\x4a","\x81"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(23)
		::ObjectMuseum exhibition5Object = tmp12;		HX_STACK_VAR(exhibition5Object,"exhibition5Object");
		HX_STACK_LINE(24)
		::ObjectMuseum tmp13 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_006","\x2c","\x62","\x7a","\x18"),HX_HCSTRING("Sixth Exhibition","\x59","\x6b","\xec","\x4e"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(24)
		::ObjectMuseum exhibition6Object = tmp13;		HX_STACK_VAR(exhibition6Object,"exhibition6Object");
		HX_STACK_LINE(25)
		::ObjectMuseum tmp14 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_007","\x2d","\x62","\x7a","\x18"),HX_HCSTRING("Seventh Exhibition","\x8e","\x96","\x66","\x3c"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(25)
		::ObjectMuseum exhibition7Object = tmp14;		HX_STACK_VAR(exhibition7Object,"exhibition7Object");
		HX_STACK_LINE(26)
		::ObjectMuseum tmp15 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_008","\x2e","\x62","\x7a","\x18"),HX_HCSTRING("Eighth Exhibition","\xd6","\x18","\xfb","\x63"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),collectionGlobalObject->GetTagStructArray(),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(26)
		::ObjectMuseum exhibition8Object = tmp15;		HX_STACK_VAR(exhibition8Object,"exhibition8Object");
		HX_STACK_LINE(29)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp16 = (loopCounter1Int < (int)123);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(30)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(30)
			if ((tmp17)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(31)
			::CollectionGlobal tmp18 = collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(31)
			::ObjectMuseum tmp19 = ::CollectionFunction_obj::PickRandomFromArrayT(collectionGlobalObject->GetExhibitionObjectArray());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(31)
			int tmp20 = collectionGlobalObject->PutIndexGlobalVisitorInt();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(31)
			::String tmp21 = (HX_HCSTRING("Visitor ","\xd2","\xd0","\x5e","\x02") + loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(31)
			::ObjectVisitor tmp22 = ::ObjectVisitor_obj::__new(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(31)
			::ObjectVisitor visitorObject = tmp22;		HX_STACK_VAR(visitorObject,"visitorObject");
			HX_STACK_LINE(32)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(36)
		while((true)){
			HX_STACK_LINE(38)
			int tmp16 = collectionGlobalObject->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(38)
			int tmp17 = collectionGlobalObject->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(38)
			Float tmp18 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(38)
			Float leastCommonMultipleFloat = tmp18;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
			HX_STACK_LINE(39)
			Float tmp19 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(39)
			int tmp20 = collectionGlobalObject->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(39)
			Float tmp21 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(39)
			leastCommonMultipleFloat = tmp21;
			HX_STACK_LINE(40)
			Float tmp22 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(40)
			int tmp23 = collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(40)
			Float tmp24 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(40)
			leastCommonMultipleFloat = tmp24;
			HX_STACK_LINE(41)
			Float tmp25 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(41)
			int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(41)
			int leastCommonMultipleInt = tmp26;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
			HX_STACK_LINE(42)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(43)
			while((true)){
				HX_STACK_LINE(43)
				bool tmp27 = (loopCounter1Int < leastCommonMultipleInt);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(43)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(43)
				if ((tmp28)){
					HX_STACK_LINE(43)
					break;
				}
				HX_STACK_LINE(44)
				int tmp29 = loopCounter1Int;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(44)
				int tmp30 = collectionGlobalObject->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(44)
				int tmp31 = hx::Mod(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(44)
				::ObjectMuseum tmp32 = collectionGlobalObject->GetExhibitionObjectArray()->__get(tmp31).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(44)
				tmp32->Update();
				HX_STACK_LINE(45)
				int tmp33 = loopCounter1Int;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(45)
				int tmp34 = collectionGlobalObject->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(45)
				int tmp35 = hx::Mod(tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(45)
				::ObjectMuseum tmp36 = collectionGlobalObject->GetFloorObjectArray()->__get(tmp35).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(45)
				tmp36->Update();
				HX_STACK_LINE(46)
				int tmp37 = loopCounter1Int;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(46)
				int tmp38 = collectionGlobalObject->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(46)
				int tmp39 = hx::Mod(tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(46)
				::ObjectMuseum tmp40 = collectionGlobalObject->GetRoomObjectArray()->__get(tmp39).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(46)
				tmp40->Update();
				HX_STACK_LINE(47)
				int tmp41 = loopCounter1Int;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(47)
				int tmp42 = collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(47)
				int tmp43 = hx::Mod(tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(47)
				::ObjectVisitor tmp44 = collectionGlobalObject->GetVisitorObjectArray()->__get(tmp43).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(47)
				tmp44->AIAutoExhibitionChangeVoid();
				HX_STACK_LINE(48)
				(loopCounter1Int)++;
			}
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

