#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_Direction
#include <haxe/ui/toolkit/core/interfaces/Direction.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{

Void Direction_obj::__construct()
{
	return null();
}

//Direction_obj::~Direction_obj() { }

Dynamic Direction_obj::__CreateEmpty() { return  new Direction_obj; }
hx::ObjectPtr< Direction_obj > Direction_obj::__new()
{  hx::ObjectPtr< Direction_obj > _result_ = new Direction_obj();
	_result_->__construct();
	return _result_;}

Dynamic Direction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Direction_obj > _result_ = new Direction_obj();
	_result_->__construct();
	return _result_;}

::String Direction_obj::HORIZONTAL;

::String Direction_obj::VERTICAL;


Direction_obj::Direction_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Direction_obj::HORIZONTAL,HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")},
	{hx::fsString,(void *) &Direction_obj::VERTICAL,HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Direction_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Direction_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(Direction_obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Direction_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Direction_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(Direction_obj::VERTICAL,"VERTICAL");
};

#endif

hx::Class Direction_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),
	HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),
	::String(null()) };

void Direction_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.interfaces.Direction","\xb8","\x59","\xb0","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Direction_obj >;
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

void Direction_obj::__boot()
{
	HORIZONTAL= HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15");
	VERTICAL= HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces
