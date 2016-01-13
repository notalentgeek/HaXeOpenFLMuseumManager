#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_InvalidationFlag
#include <haxe/ui/toolkit/core/interfaces/InvalidationFlag.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{

Void InvalidationFlag_obj::__construct()
{
	return null();
}

//InvalidationFlag_obj::~InvalidationFlag_obj() { }

Dynamic InvalidationFlag_obj::__CreateEmpty() { return  new InvalidationFlag_obj; }
hx::ObjectPtr< InvalidationFlag_obj > InvalidationFlag_obj::__new()
{  hx::ObjectPtr< InvalidationFlag_obj > _result_ = new InvalidationFlag_obj();
	_result_->__construct();
	return _result_;}

Dynamic InvalidationFlag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InvalidationFlag_obj > _result_ = new InvalidationFlag_obj();
	_result_->__construct();
	return _result_;}

int InvalidationFlag_obj::LAYOUT;

int InvalidationFlag_obj::DISPLAY;

int InvalidationFlag_obj::SIZE;

int InvalidationFlag_obj::STATE;

int InvalidationFlag_obj::DATA;

int InvalidationFlag_obj::STYLE;

int InvalidationFlag_obj::ALL;


InvalidationFlag_obj::InvalidationFlag_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &InvalidationFlag_obj::LAYOUT,HX_HCSTRING("LAYOUT","\xaa","\x5a","\x3b","\x0b")},
	{hx::fsInt,(void *) &InvalidationFlag_obj::DISPLAY,HX_HCSTRING("DISPLAY","\x22","\xfe","\x1d","\x3b")},
	{hx::fsInt,(void *) &InvalidationFlag_obj::SIZE,HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37")},
	{hx::fsInt,(void *) &InvalidationFlag_obj::STATE,HX_HCSTRING("STATE","\xf1","\xad","\xf9","\x01")},
	{hx::fsInt,(void *) &InvalidationFlag_obj::DATA,HX_HCSTRING("DATA","\x2a","\x1e","\x24","\x2d")},
	{hx::fsInt,(void *) &InvalidationFlag_obj::STYLE,HX_HCSTRING("STYLE","\x11","\xdd","\x0b","\x02")},
	{hx::fsInt,(void *) &InvalidationFlag_obj::ALL,HX_HCSTRING("ALL","\x01","\x95","\x31","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::LAYOUT,"LAYOUT");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::DISPLAY,"DISPLAY");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::STATE,"STATE");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::DATA,"DATA");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::STYLE,"STYLE");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::ALL,"ALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::LAYOUT,"LAYOUT");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::DISPLAY,"DISPLAY");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::STATE,"STATE");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::DATA,"DATA");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::STYLE,"STYLE");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::ALL,"ALL");
};

#endif

hx::Class InvalidationFlag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LAYOUT","\xaa","\x5a","\x3b","\x0b"),
	HX_HCSTRING("DISPLAY","\x22","\xfe","\x1d","\x3b"),
	HX_HCSTRING("SIZE","\xc1","\x68","\x14","\x37"),
	HX_HCSTRING("STATE","\xf1","\xad","\xf9","\x01"),
	HX_HCSTRING("DATA","\x2a","\x1e","\x24","\x2d"),
	HX_HCSTRING("STYLE","\x11","\xdd","\x0b","\x02"),
	HX_HCSTRING("ALL","\x01","\x95","\x31","\x00"),
	::String(null()) };

void InvalidationFlag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.interfaces.InvalidationFlag","\xd1","\xb0","\x15","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InvalidationFlag_obj >;
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

void InvalidationFlag_obj::__boot()
{
	LAYOUT= (int)1;
	DISPLAY= (int)16;
	SIZE= (int)256;
	STATE= (int)4096;
	DATA= (int)65536;
	STYLE= (int)1048576;
	ALL= (int)1118481;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces
