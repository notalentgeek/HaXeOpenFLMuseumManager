#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_base_HorizontalAlign
#include <haxe/ui/toolkit/core/base/HorizontalAlign.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace base{

Void HorizontalAlign_obj::__construct()
{
	return null();
}

//HorizontalAlign_obj::~HorizontalAlign_obj() { }

Dynamic HorizontalAlign_obj::__CreateEmpty() { return  new HorizontalAlign_obj; }
hx::ObjectPtr< HorizontalAlign_obj > HorizontalAlign_obj::__new()
{  hx::ObjectPtr< HorizontalAlign_obj > _result_ = new HorizontalAlign_obj();
	_result_->__construct();
	return _result_;}

Dynamic HorizontalAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HorizontalAlign_obj > _result_ = new HorizontalAlign_obj();
	_result_->__construct();
	return _result_;}

::String HorizontalAlign_obj::LEFT;

::String HorizontalAlign_obj::RIGHT;

::String HorizontalAlign_obj::CENTER;


HorizontalAlign_obj::HorizontalAlign_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HorizontalAlign_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsString,(void *) &HorizontalAlign_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsString,(void *) &HorizontalAlign_obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HorizontalAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(HorizontalAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(HorizontalAlign_obj::CENTER,"CENTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_obj::CENTER,"CENTER");
};

#endif

hx::Class HorizontalAlign_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	::String(null()) };

void HorizontalAlign_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.base.HorizontalAlign","\x31","\x8d","\xc6","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< HorizontalAlign_obj >;
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

void HorizontalAlign_obj::__boot()
{
	LEFT= HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	RIGHT= HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
	CENTER= HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace base
