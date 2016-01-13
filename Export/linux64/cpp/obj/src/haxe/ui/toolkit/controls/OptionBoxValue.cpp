#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_OptionBoxValue
#include <haxe/ui/toolkit/controls/OptionBoxValue.h>
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

Void OptionBoxValue_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBoxValue","new",0xf8e0e003,"haxe.ui.toolkit.controls.OptionBoxValue.new","haxe/ui/toolkit/controls/OptionBox.hx",270,0xfe98d33e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(271)
	super::__construct();
	HX_STACK_LINE(272)
	this->_value = HX_HCSTRING("unselected","\xb4","\x11","\x31","\x37");
	HX_STACK_LINE(273)
	this->addValue(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	HX_STACK_LINE(274)
	this->addValue(HX_HCSTRING("unselected","\xb4","\x11","\x31","\x37"));
}
;
	return null();
}

//OptionBoxValue_obj::~OptionBoxValue_obj() { }

Dynamic OptionBoxValue_obj::__CreateEmpty() { return  new OptionBoxValue_obj; }
hx::ObjectPtr< OptionBoxValue_obj > OptionBoxValue_obj::__new()
{  hx::ObjectPtr< OptionBoxValue_obj > _result_ = new OptionBoxValue_obj();
	_result_->__construct();
	return _result_;}

Dynamic OptionBoxValue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionBoxValue_obj > _result_ = new OptionBoxValue_obj();
	_result_->__construct();
	return _result_;}

hx::Object *OptionBoxValue_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

OptionBoxValue_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< OptionBoxValue_obj >(this); }
::haxe::ui::toolkit::core::DisplayObject OptionBoxValue_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBoxValue","clone",0x4a0d91c0,"haxe.ui.toolkit.controls.OptionBoxValue.clone","src/haxe/ui/toolkit/controls/OptionBoxValue.hx",1,0x5b491418)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Value tmp = hx::TCast< ::haxe::ui::toolkit::controls::Value >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::OptionBoxValue c = ((::haxe::ui::toolkit::controls::OptionBoxValue)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::OptionBoxValue tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject OptionBoxValue_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBoxValue","self",0xcf312a89,"haxe.ui.toolkit.controls.OptionBoxValue.self","src/haxe/ui/toolkit/controls/OptionBoxValue.hx",1,0x5b491418)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::OptionBoxValue tmp = ::haxe::ui::toolkit::controls::OptionBoxValue_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



OptionBoxValue_obj::OptionBoxValue_obj()
{
}

Dynamic OptionBoxValue_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(OptionBoxValue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBoxValue_obj::__mClass,"__mClass");
};

#endif

hx::Class OptionBoxValue_obj::__mClass;

void OptionBoxValue_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.OptionBoxValue","\x91","\x22","\x52","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionBoxValue_obj >;
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
