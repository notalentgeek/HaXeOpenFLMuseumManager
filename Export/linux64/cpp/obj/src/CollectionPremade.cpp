#include <hxcpp.h>

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
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif

Void CollectionPremade_obj::__construct()
{
HX_STACK_FRAME("CollectionPremade","new",0x52bb988c,"CollectionPremade.new","CollectionPremade.hx",20,0xd14dbc64)
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

Array< ::String > CollectionPremade_obj::explanationGenericStringArray;

Void CollectionPremade_obj::PremadeExhibitionObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeExhibitionObjectVoid",0x47c41c86,"CollectionPremade.PremadeExhibitionObjectVoid","CollectionPremade.hx",29,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(30)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_001","\x27","\x62","\x7a","\x18"),HX_HCSTRING("First Exhibition","\x7f","\x06","\xa3","\x70"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(31)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_002","\x28","\x62","\x7a","\x18"),HX_HCSTRING("Second Exhibition","\x7b","\x11","\xde","\xc5"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp1),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(32)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_003","\x29","\x62","\x7a","\x18"),HX_HCSTRING("Third Exhibition","\xa8","\x60","\x7a","\x86"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp2),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(33)
		::CollectionGlobal tmp3 = _collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_004","\x2a","\x62","\x7a","\x18"),HX_HCSTRING("Fourth Exhibition","\xd5","\xdf","\x97","\x52"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp3),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(34)
		::CollectionGlobal tmp4 = _collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_005","\x2b","\x62","\x7a","\x18"),HX_HCSTRING("Fifth Exhibition","\x18","\x78","\x4a","\x81"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp4),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(35)
		::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_006","\x2c","\x62","\x7a","\x18"),HX_HCSTRING("Sixth Exhibition","\x59","\x6b","\xec","\x4e"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp5),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(36)
		::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_007","\x2d","\x62","\x7a","\x18"),HX_HCSTRING("Seventh Exhibition","\x8e","\x96","\x66","\x3c"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp6),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(37)
		::CollectionGlobal tmp7 = _collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_008","\x2e","\x62","\x7a","\x18"),HX_HCSTRING("Eighth Exhibition","\xd6","\x18","\xfb","\x63"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp7),::EnumMuseumType_obj::EXH);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeExhibitionObjectVoid,(void))

Void CollectionPremade_obj::PremadeFloorObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeFloorObjectVoid",0xe4bb8b7b,"CollectionPremade.PremadeFloorObjectVoid","CollectionPremade.hx",47,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(48)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),HX_HCSTRING("First Floor","\x9c","\x21","\x70","\xf5"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp),::EnumMuseumType_obj::FLR);
		HX_STACK_LINE(49)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),HX_HCSTRING("Second Floor","\x20","\xf8","\x88","\x2f"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp1),::EnumMuseumType_obj::FLR);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeFloorObjectVoid,(void))

Void CollectionPremade_obj::PremadeRoomObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeRoomObjectVoid",0xf5b58652,"CollectionPremade.PremadeRoomObjectVoid","CollectionPremade.hx",59,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(60)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),HX_HCSTRING("First Room","\x4b","\x88","\xbc","\x44"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp),::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(61)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),HX_HCSTRING("Second Room","\x47","\xee","\xfc","\x82"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp1),::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(62)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),HX_HCSTRING("Third Room","\xb4","\x6d","\xcc","\x63"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp2),::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(63)
		::CollectionGlobal tmp3 = _collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),HX_HCSTRING("Fourth Room","\x21","\x1d","\x19","\x8e"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp3),::EnumMuseumType_obj::ROM);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeRoomObjectVoid,(void))

Void CollectionPremade_obj::PremadeVisitorObjectVoid( int _amountInt,::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeVisitorObjectVoid",0x0940badd,"CollectionPremade.PremadeVisitorObjectVoid","CollectionPremade.hx",73,0xd14dbc64)
		HX_STACK_ARG(_amountInt,"_amountInt")
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(74)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			bool tmp = (loopCounter1Int < _amountInt);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(75)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(75)
			if ((tmp1)){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(76)
			::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			int tmp3 = _collectionGlobalObject->PutIndexGlobalVisitorInt();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(76)
			int tmp4 = _collectionGlobalObject->GetIndexGlobalVisitorInt();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			::String tmp5 = (HX_HCSTRING("Visitor ","\xd2","\xd0","\x5e","\x02") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			::ObjectVisitor tmp6 = ::ObjectVisitor_obj::__new(tmp2,tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			::ObjectVisitor visitorObject = tmp6;		HX_STACK_VAR(visitorObject,"visitorObject");
			HX_STACK_LINE(77)
			(loopCounter1Int)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionPremade_obj,PremadeVisitorObjectVoid,(void))


CollectionPremade_obj::CollectionPremade_obj()
{
}

bool CollectionPremade_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"PremadeRoomObjectVoid") ) { outValue = PremadeRoomObjectVoid_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"PremadeFloorObjectVoid") ) { outValue = PremadeFloorObjectVoid_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"PremadeVisitorObjectVoid") ) { outValue = PremadeVisitorObjectVoid_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"PremadeExhibitionObjectVoid") ) { outValue = PremadeExhibitionObjectVoid_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"explanationGenericStringArray") ) { outValue = explanationGenericStringArray; return true;  }
	}
	return false;
}

bool CollectionPremade_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 29:
		if (HX_FIELD_EQ(inName,"explanationGenericStringArray") ) { explanationGenericStringArray=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("explanationGenericStringArray","\xea","\x25","\xf3","\xde")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionPremade_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CollectionPremade_obj::explanationGenericStringArray,"explanationGenericStringArray");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionPremade_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CollectionPremade_obj::explanationGenericStringArray,"explanationGenericStringArray");
};

#endif

hx::Class CollectionPremade_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("explanationGenericStringArray","\xea","\x25","\xf3","\xde"),
	HX_HCSTRING("PremadeExhibitionObjectVoid","\x5a","\x30","\x06","\x05"),
	HX_HCSTRING("PremadeFloorObjectVoid","\x27","\x08","\xda","\x80"),
	HX_HCSTRING("PremadeRoomObjectVoid","\x26","\x43","\x7c","\xe7"),
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
	__mClass->mSetStaticField = &CollectionPremade_obj::__SetStatic;
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

void CollectionPremade_obj::__boot()
{
	explanationGenericStringArray= Array_obj< ::String >::__new().Add(HX_HCSTRING("Explanation 1.","\x64","\x4b","\x12","\x7e")).Add(HX_HCSTRING("Explanation 2.","\x43","\x4c","\x12","\x7e")).Add(HX_HCSTRING("Explanation 3.","\x22","\x4d","\x12","\x7e"));
}

