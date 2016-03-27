#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_base_State
#include <haxe/ui/toolkit/core/base/State.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace base{

Void State_obj::__construct()
{
	return null();
}

//State_obj::~State_obj() { }

Dynamic State_obj::__CreateEmpty() { return  new State_obj; }
hx::ObjectPtr< State_obj > State_obj::__new()
{  hx::ObjectPtr< State_obj > _result_ = new State_obj();
	_result_->__construct();
	return _result_;}

Dynamic State_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< State_obj > _result_ = new State_obj();
	_result_->__construct();
	return _result_;}

::String State_obj::NORMAL;

::String State_obj::OVER;

::String State_obj::DOWN;

::String State_obj::DISABLED;


State_obj::State_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &State_obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{hx::fsString,(void *) &State_obj::OVER,HX_HCSTRING("OVER","\x54","\x59","\x79","\x34")},
	{hx::fsString,(void *) &State_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsString,(void *) &State_obj::DISABLED,HX_HCSTRING("DISABLED","\x7c","\xd1","\x89","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(State_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(State_obj::OVER,"OVER");
	HX_MARK_MEMBER_NAME(State_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(State_obj::DISABLED,"DISABLED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(State_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(State_obj::OVER,"OVER");
	HX_VISIT_MEMBER_NAME(State_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(State_obj::DISABLED,"DISABLED");
};

#endif

hx::Class State_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("OVER","\x54","\x59","\x79","\x34"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("DISABLED","\x7c","\xd1","\x89","\xd5"),
	::String(null()) };

void State_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.base.State","\x01","\xa8","\x9e","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< State_obj >;
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

void State_obj::__boot()
{
	NORMAL= HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
	OVER= HX_HCSTRING("over","\x54","\x91","\xb8","\x49");
	DOWN= HX_HCSTRING("down","\x62","\xf8","\x6d","\x42");
	DISABLED= HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace base
