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
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",2,0x087e5c05)
		HX_STACK_LINE(3)
		::CollectionGlobal tmp = ::CollectionGlobal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(3)
		::CollectionGlobal collectionGlobalObject = tmp;		HX_STACK_VAR(collectionGlobalObject,"collectionGlobalObject");
		HX_STACK_LINE(4)
		::ObjectMuseum tmp1 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),HX_HCSTRING("First Floor","\x9c","\x21","\x70","\xf5"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(4)
		::ObjectMuseum floor1Object = tmp1;		HX_STACK_VAR(floor1Object,"floor1Object");
		HX_STACK_LINE(5)
		::ObjectMuseum tmp2 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),HX_HCSTRING("Second Floor","\x20","\xf8","\x88","\x2f"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(5)
		::ObjectMuseum floor2Object = tmp2;		HX_STACK_VAR(floor2Object,"floor2Object");
		HX_STACK_LINE(6)
		::ObjectMuseum tmp3 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),HX_HCSTRING("First Room","\x4b","\x88","\xbc","\x44"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(6)
		::ObjectMuseum room1Object = tmp3;		HX_STACK_VAR(room1Object,"room1Object");
		HX_STACK_LINE(7)
		::ObjectMuseum tmp4 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),HX_HCSTRING("Second Room","\x47","\xee","\xfc","\x82"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(7)
		::ObjectMuseum room2Object = tmp4;		HX_STACK_VAR(room2Object,"room2Object");
		HX_STACK_LINE(8)
		::ObjectMuseum tmp5 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),HX_HCSTRING("Third Room","\xb4","\x6d","\xcc","\x63"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(8)
		::ObjectMuseum room3Object = tmp5;		HX_STACK_VAR(room3Object,"room3Object");
		HX_STACK_LINE(9)
		::ObjectMuseum tmp6 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),HX_HCSTRING("Fourth Room","\x21","\x1d","\x19","\x8e"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(9)
		::ObjectMuseum room4Object = tmp6;		HX_STACK_VAR(room4Object,"room4Object");
		HX_STACK_LINE(10)
		::ObjectMuseum tmp7 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_001","\x27","\x62","\x7a","\x18"),HX_HCSTRING("First Exhibition","\x7f","\x06","\xa3","\x70"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(10)
		::ObjectMuseum exhibition1Object = tmp7;		HX_STACK_VAR(exhibition1Object,"exhibition1Object");
		HX_STACK_LINE(11)
		::ObjectMuseum tmp8 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_002","\x28","\x62","\x7a","\x18"),HX_HCSTRING("Second Exhibition","\x7b","\x11","\xde","\xc5"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(11)
		::ObjectMuseum exhibition2Object = tmp8;		HX_STACK_VAR(exhibition2Object,"exhibition2Object");
		HX_STACK_LINE(12)
		::ObjectMuseum tmp9 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_003","\x29","\x62","\x7a","\x18"),HX_HCSTRING("Third Exhibition","\xa8","\x60","\x7a","\x86"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(12)
		::ObjectMuseum exhibition3Object = tmp9;		HX_STACK_VAR(exhibition3Object,"exhibition3Object");
		HX_STACK_LINE(13)
		::ObjectMuseum tmp10 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_004","\x2a","\x62","\x7a","\x18"),HX_HCSTRING("Fourth Exhibition","\xd5","\xdf","\x97","\x52"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(13)
		::ObjectMuseum exhibition4Object = tmp10;		HX_STACK_VAR(exhibition4Object,"exhibition4Object");
		HX_STACK_LINE(14)
		::ObjectMuseum tmp11 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_005","\x2b","\x62","\x7a","\x18"),HX_HCSTRING("Fifth Exhibition","\x18","\x78","\x4a","\x81"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(14)
		::ObjectMuseum exhibition5Object = tmp11;		HX_STACK_VAR(exhibition5Object,"exhibition5Object");
		HX_STACK_LINE(15)
		::ObjectMuseum tmp12 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_006","\x2c","\x62","\x7a","\x18"),HX_HCSTRING("Sixth Exhibition","\x59","\x6b","\xec","\x4e"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(15)
		::ObjectMuseum exhibition6Object = tmp12;		HX_STACK_VAR(exhibition6Object,"exhibition6Object");
		HX_STACK_LINE(16)
		::ObjectMuseum tmp13 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_007","\x2d","\x62","\x7a","\x18"),HX_HCSTRING("Seventh Exhibition","\x8e","\x96","\x66","\x3c"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(16)
		::ObjectMuseum exhibition7Object = tmp13;		HX_STACK_VAR(exhibition7Object,"exhibition7Object");
		HX_STACK_LINE(17)
		::ObjectMuseum tmp14 = ::ObjectMuseum_obj::__new(collectionGlobalObject,HX_HCSTRING("EXH_008","\x2e","\x62","\x7a","\x18"),HX_HCSTRING("Eighth Exhibition","\xd6","\x18","\xfb","\x63"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(17)
		::ObjectMuseum exhibition8Object = tmp14;		HX_STACK_VAR(exhibition8Object,"exhibition8Object");
		HX_STACK_LINE(18)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(19)
		while((true)){
			HX_STACK_LINE(19)
			bool tmp15 = (loopCounter1Int < (int)1000);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(19)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(19)
			if ((tmp16)){
				HX_STACK_LINE(19)
				break;
			}
			HX_STACK_LINE(20)
			::CollectionGlobal tmp17 = collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(20)
			::ObjectMuseum tmp18 = ::CollectionFunction_obj::PickRandomFromArrayT(collectionGlobalObject->GetExhibitionObjectArray());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(20)
			int tmp19 = collectionGlobalObject->PutIndexGlobalVisitorInt();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(20)
			::String tmp20 = (HX_HCSTRING("Visitor ","\xd2","\xd0","\x5e","\x02") + loopCounter1Int);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(20)
			::ObjectVisitor tmp21 = ::ObjectVisitor_obj::__new(tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(20)
			::ObjectVisitor visitorObject = tmp21;		HX_STACK_VAR(visitorObject,"visitorObject");
			HX_STACK_LINE(21)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(23)
		while((true)){
			HX_STACK_LINE(24)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(25)
			while((true)){
				HX_STACK_LINE(25)
				int tmp15 = loopCounter1Int;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(25)
				int tmp16 = collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(25)
				bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(25)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(25)
				if ((tmp18)){
					HX_STACK_LINE(25)
					break;
				}
				HX_STACK_LINE(26)
				::ObjectVisitor tmp19 = collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(26)
				tmp19->AIAutoExhibitionChangeVoid();
				HX_STACK_LINE(27)
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

