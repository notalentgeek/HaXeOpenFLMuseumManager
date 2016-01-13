#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_base_VerticalAlign
#include <haxe/ui/toolkit/core/base/VerticalAlign.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace base{

Void VerticalAlign_obj::__construct()
{
	return null();
}

//VerticalAlign_obj::~VerticalAlign_obj() { }

Dynamic VerticalAlign_obj::__CreateEmpty() { return  new VerticalAlign_obj; }
hx::ObjectPtr< VerticalAlign_obj > VerticalAlign_obj::__new()
{  hx::ObjectPtr< VerticalAlign_obj > _result_ = new VerticalAlign_obj();
	_result_->__construct();
	return _result_;}

Dynamic VerticalAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VerticalAlign_obj > _result_ = new VerticalAlign_obj();
	_result_->__construct();
	return _result_;}

::String VerticalAlign_obj::TOP;

::String VerticalAlign_obj::BOTTOM;

::String VerticalAlign_obj::CENTER;


VerticalAlign_obj::VerticalAlign_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &VerticalAlign_obj::TOP,HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")},
	{hx::fsString,(void *) &VerticalAlign_obj::BOTTOM,HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")},
	{hx::fsString,(void *) &VerticalAlign_obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VerticalAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VerticalAlign_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(VerticalAlign_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(VerticalAlign_obj::CENTER,"CENTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VerticalAlign_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(VerticalAlign_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(VerticalAlign_obj::CENTER,"CENTER");
};

#endif

hx::Class VerticalAlign_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	::String(null()) };

void VerticalAlign_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.base.VerticalAlign","\x5f","\xc0","\x7a","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< VerticalAlign_obj >;
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

void VerticalAlign_obj::__boot()
{
	TOP= HX_HCSTRING("top","\x95","\x66","\x58","\x00");
	BOTTOM= HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65");
	CENTER= HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace base
