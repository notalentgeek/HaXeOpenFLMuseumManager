#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_themes_DefaultTheme
#include <haxe/ui/toolkit/themes/DefaultTheme.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{

Void DefaultTheme_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.themes.DefaultTheme","new",0x80740ebc,"haxe.ui.toolkit.themes.DefaultTheme.new","haxe/ui/toolkit/themes/DefaultTheme.hx",4,0x0b2adcb4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	this->name = HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b");
}
;
	return null();
}

//DefaultTheme_obj::~DefaultTheme_obj() { }

Dynamic DefaultTheme_obj::__CreateEmpty() { return  new DefaultTheme_obj; }
hx::ObjectPtr< DefaultTheme_obj > DefaultTheme_obj::__new()
{  hx::ObjectPtr< DefaultTheme_obj > _result_ = new DefaultTheme_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultTheme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultTheme_obj > _result_ = new DefaultTheme_obj();
	_result_->__construct();
	return _result_;}


DefaultTheme_obj::DefaultTheme_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultTheme_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultTheme_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultTheme_obj::__mClass;

void DefaultTheme_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.themes.DefaultTheme","\xca","\x40","\x27","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DefaultTheme_obj >;
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
} // end namespace themes
