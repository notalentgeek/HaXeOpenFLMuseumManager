#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButton
#include <haxe/ui/toolkit/core/PopupButton.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void PopupButton_obj::__construct()
{
	return null();
}

//PopupButton_obj::~PopupButton_obj() { }

Dynamic PopupButton_obj::__CreateEmpty() { return  new PopupButton_obj; }
hx::ObjectPtr< PopupButton_obj > PopupButton_obj::__new()
{  hx::ObjectPtr< PopupButton_obj > _result_ = new PopupButton_obj();
	_result_->__construct();
	return _result_;}

Dynamic PopupButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupButton_obj > _result_ = new PopupButton_obj();
	_result_->__construct();
	return _result_;}

int PopupButton_obj::OK;

int PopupButton_obj::YES;

int PopupButton_obj::NO;

int PopupButton_obj::CANCEL;

int PopupButton_obj::CONFIRM;

int PopupButton_obj::CLOSE;

int PopupButton_obj::CUSTOM;


PopupButton_obj::PopupButton_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &PopupButton_obj::OK,HX_HCSTRING("OK","\x1c","\x45","\x00","\x00")},
	{hx::fsInt,(void *) &PopupButton_obj::YES,HX_HCSTRING("YES","\x07","\xc5","\x43","\x00")},
	{hx::fsInt,(void *) &PopupButton_obj::NO,HX_HCSTRING("NO","\x41","\x44","\x00","\x00")},
	{hx::fsInt,(void *) &PopupButton_obj::CANCEL,HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a")},
	{hx::fsInt,(void *) &PopupButton_obj::CONFIRM,HX_HCSTRING("CONFIRM","\xe0","\x70","\x0d","\x90")},
	{hx::fsInt,(void *) &PopupButton_obj::CLOSE,HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6")},
	{hx::fsInt,(void *) &PopupButton_obj::CUSTOM,HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PopupButton_obj::OK,"OK");
	HX_MARK_MEMBER_NAME(PopupButton_obj::YES,"YES");
	HX_MARK_MEMBER_NAME(PopupButton_obj::NO,"NO");
	HX_MARK_MEMBER_NAME(PopupButton_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(PopupButton_obj::CONFIRM,"CONFIRM");
	HX_MARK_MEMBER_NAME(PopupButton_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(PopupButton_obj::CUSTOM,"CUSTOM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::OK,"OK");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::YES,"YES");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::NO,"NO");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::CONFIRM,"CONFIRM");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::CUSTOM,"CUSTOM");
};

#endif

hx::Class PopupButton_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("OK","\x1c","\x45","\x00","\x00"),
	HX_HCSTRING("YES","\x07","\xc5","\x43","\x00"),
	HX_HCSTRING("NO","\x41","\x44","\x00","\x00"),
	HX_HCSTRING("CANCEL","\x7a","\x99","\xb6","\x6a"),
	HX_HCSTRING("CONFIRM","\xe0","\x70","\x0d","\x90"),
	HX_HCSTRING("CLOSE","\x98","\x4f","\x51","\xc6"),
	HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),
	::String(null()) };

void PopupButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.PopupButton","\x51","\x6a","\x63","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PopupButton_obj >;
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

void PopupButton_obj::__boot()
{
	OK= (int)1;
	YES= (int)16;
	NO= (int)256;
	CANCEL= (int)4096;
	CONFIRM= (int)65536;
	CLOSE= (int)1048576;
	CUSTOM= (int)16777216;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
