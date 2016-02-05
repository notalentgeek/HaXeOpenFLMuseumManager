#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_FocusManager
#include <haxe/ui/toolkit/core/FocusManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void FocusManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.FocusManager","new",0xbf521ef4,"haxe.ui.toolkit.core.FocusManager.new","haxe/ui/toolkit/core/FocusManager.hx",16,0xe949713c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//FocusManager_obj::~FocusManager_obj() { }

Dynamic FocusManager_obj::__CreateEmpty() { return  new FocusManager_obj; }
hx::ObjectPtr< FocusManager_obj > FocusManager_obj::__new()
{  hx::ObjectPtr< FocusManager_obj > _result_ = new FocusManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic FocusManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FocusManager_obj > _result_ = new FocusManager_obj();
	_result_->__construct();
	return _result_;}

::haxe::ui::toolkit::core::FocusManager FocusManager_obj::_instance;

::haxe::ui::toolkit::core::FocusManager FocusManager_obj::instance;

::haxe::ui::toolkit::core::FocusManager FocusManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.FocusManager","get_instance",0x5bd0128a,"haxe.ui.toolkit.core.FocusManager.get_instance","haxe/ui/toolkit/core/FocusManager.hx",6,0xe949713c)
	HX_STACK_LINE(7)
	::haxe::ui::toolkit::core::FocusManager tmp = ::haxe::ui::toolkit::core::FocusManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7)
	if ((tmp1)){
		HX_STACK_LINE(8)
		::haxe::ui::toolkit::core::FocusManager tmp2 = ::haxe::ui::toolkit::core::FocusManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8)
		::haxe::ui::toolkit::core::FocusManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(10)
	::haxe::ui::toolkit::core::FocusManager tmp2 = ::haxe::ui::toolkit::core::FocusManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,get_instance,return )


FocusManager_obj::FocusManager_obj()
{
}

bool FocusManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

bool FocusManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::core::FocusManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::core::FocusManager >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::FocusManager*/ ,(void *) &FocusManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::core::FocusManager*/ ,(void *) &FocusManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FocusManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(FocusManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FocusManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(FocusManager_obj::instance,"instance");
};

#endif

hx::Class FocusManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void FocusManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.FocusManager","\x02","\xd5","\x3a","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FocusManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FocusManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FocusManager_obj >;
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

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
