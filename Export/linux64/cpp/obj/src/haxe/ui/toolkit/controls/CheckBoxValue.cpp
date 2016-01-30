#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBoxValue
#include <haxe/ui/toolkit/controls/CheckBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Value
#include <haxe/ui/toolkit/controls/Value.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void CheckBoxValue_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBoxValue","new",0x8364fb6a,"haxe.ui.toolkit.controls.CheckBoxValue.new","haxe/ui/toolkit/controls/CheckBox.hx",273,0xf2eee4e5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(274)
	super::__construct();
	HX_STACK_LINE(275)
	this->_value = HX_HCSTRING("unselected","\xb4","\x11","\x31","\x37");
	HX_STACK_LINE(276)
	this->addValue(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	HX_STACK_LINE(277)
	this->addValue(HX_HCSTRING("unselected","\xb4","\x11","\x31","\x37"));
}
;
	return null();
}

//CheckBoxValue_obj::~CheckBoxValue_obj() { }

Dynamic CheckBoxValue_obj::__CreateEmpty() { return  new CheckBoxValue_obj; }
hx::ObjectPtr< CheckBoxValue_obj > CheckBoxValue_obj::__new()
{  hx::ObjectPtr< CheckBoxValue_obj > _result_ = new CheckBoxValue_obj();
	_result_->__construct();
	return _result_;}

Dynamic CheckBoxValue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CheckBoxValue_obj > _result_ = new CheckBoxValue_obj();
	_result_->__construct();
	return _result_;}

hx::Object *CheckBoxValue_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

CheckBoxValue_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< CheckBoxValue_obj >(this); }
::haxe::ui::toolkit::core::DisplayObject CheckBoxValue_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBoxValue","clone",0x925c94e7,"haxe.ui.toolkit.controls.CheckBoxValue.clone","src/haxe/ui/toolkit/controls/CheckBoxValue.hx",1,0x2e254e5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Value tmp = hx::TCast< ::haxe::ui::toolkit::controls::Value >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::CheckBoxValue c = ((::haxe::ui::toolkit::controls::CheckBoxValue)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::CheckBoxValue tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject CheckBoxValue_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBoxValue","self",0x78450942,"haxe.ui.toolkit.controls.CheckBoxValue.self","src/haxe/ui/toolkit/controls/CheckBoxValue.hx",1,0x2e254e5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::CheckBoxValue tmp = ::haxe::ui::toolkit::controls::CheckBoxValue_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



CheckBoxValue_obj::CheckBoxValue_obj()
{
}

Dynamic CheckBoxValue_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBoxValue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBoxValue_obj::__mClass,"__mClass");
};

#endif

hx::Class CheckBoxValue_obj::__mClass;

void CheckBoxValue_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.CheckBoxValue","\x78","\xbe","\x5c","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBoxValue_obj >;
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
} // end namespace controls
