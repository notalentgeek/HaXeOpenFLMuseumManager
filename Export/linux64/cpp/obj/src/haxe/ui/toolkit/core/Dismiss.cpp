#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Dismiss
#include <haxe/ui/toolkit/core/Dismiss.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Dismiss_obj::__construct()
{
	return null();
}

//Dismiss_obj::~Dismiss_obj() { }

Dynamic Dismiss_obj::__CreateEmpty() { return  new Dismiss_obj; }
hx::ObjectPtr< Dismiss_obj > Dismiss_obj::__new()
{  hx::ObjectPtr< Dismiss_obj > _result_ = new Dismiss_obj();
	_result_->__construct();
	return _result_;}

Dynamic Dismiss_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dismiss_obj > _result_ = new Dismiss_obj();
	_result_->__construct();
	return _result_;}

int Dismiss_obj::ESCAPE;

int Dismiss_obj::ENTER;

int Dismiss_obj::ANYKEY;

int Dismiss_obj::CLICK_OUTSIDE;

int Dismiss_obj::CLICK_INSIDE;

int Dismiss_obj::CLICK;


Dismiss_obj::Dismiss_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Dismiss_obj::ESCAPE,HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")},
	{hx::fsInt,(void *) &Dismiss_obj::ENTER,HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")},
	{hx::fsInt,(void *) &Dismiss_obj::ANYKEY,HX_HCSTRING("ANYKEY","\x33","\xd6","\x80","\x21")},
	{hx::fsInt,(void *) &Dismiss_obj::CLICK_OUTSIDE,HX_HCSTRING("CLICK_OUTSIDE","\xae","\xd6","\xc3","\x45")},
	{hx::fsInt,(void *) &Dismiss_obj::CLICK_INSIDE,HX_HCSTRING("CLICK_INSIDE","\x73","\x9e","\x2d","\x02")},
	{hx::fsInt,(void *) &Dismiss_obj::CLICK,HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dismiss_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Dismiss_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Dismiss_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Dismiss_obj::ANYKEY,"ANYKEY");
	HX_MARK_MEMBER_NAME(Dismiss_obj::CLICK_OUTSIDE,"CLICK_OUTSIDE");
	HX_MARK_MEMBER_NAME(Dismiss_obj::CLICK_INSIDE,"CLICK_INSIDE");
	HX_MARK_MEMBER_NAME(Dismiss_obj::CLICK,"CLICK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dismiss_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Dismiss_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Dismiss_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Dismiss_obj::ANYKEY,"ANYKEY");
	HX_VISIT_MEMBER_NAME(Dismiss_obj::CLICK_OUTSIDE,"CLICK_OUTSIDE");
	HX_VISIT_MEMBER_NAME(Dismiss_obj::CLICK_INSIDE,"CLICK_INSIDE");
	HX_VISIT_MEMBER_NAME(Dismiss_obj::CLICK,"CLICK");
};

#endif

hx::Class Dismiss_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),
	HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),
	HX_HCSTRING("ANYKEY","\x33","\xd6","\x80","\x21"),
	HX_HCSTRING("CLICK_OUTSIDE","\xae","\xd6","\xc3","\x45"),
	HX_HCSTRING("CLICK_INSIDE","\x73","\x9e","\x2d","\x02"),
	HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6"),
	::String(null()) };

void Dismiss_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.Dismiss","\xdd","\x2a","\xa1","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Dismiss_obj >;
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

void Dismiss_obj::__boot()
{
	ESCAPE= (int)1;
	ENTER= (int)16;
	ANYKEY= (int)256;
	CLICK_OUTSIDE= (int)4096;
	CLICK_INSIDE= (int)65536;
	CLICK= (int)69632;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
