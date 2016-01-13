#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Box
#include <haxe/ui/toolkit/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_ToolTip
#include <haxe/ui/toolkit/controls/ToolTip.h>
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

Void ToolTip_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.ToolTip","new",0xef316cff,"haxe.ui.toolkit.controls.ToolTip.new","haxe/ui/toolkit/controls/ToolTip.hx",8,0x71f25491)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->options = null();
	HX_STACK_LINE(9)
	this->component = null();
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->_autoSize = true;
	HX_STACK_LINE(16)
	::haxe::ui::toolkit::controls::Text tmp = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	this->_textField = tmp;
	HX_STACK_LINE(17)
	::haxe::ui::toolkit::controls::Text tmp1 = this->_textField;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	tmp1->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	this->addChild(tmp2);
}
;
	return null();
}

//ToolTip_obj::~ToolTip_obj() { }

Dynamic ToolTip_obj::__CreateEmpty() { return  new ToolTip_obj; }
hx::ObjectPtr< ToolTip_obj > ToolTip_obj::__new()
{  hx::ObjectPtr< ToolTip_obj > _result_ = new ToolTip_obj();
	_result_->__construct();
	return _result_;}

Dynamic ToolTip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ToolTip_obj > _result_ = new ToolTip_obj();
	_result_->__construct();
	return _result_;}

::String ToolTip_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.ToolTip","set_text",0xca1d24ab,"haxe.ui.toolkit.controls.ToolTip.set_text","haxe/ui/toolkit/controls/ToolTip.hx",21,0x71f25491)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(22)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	value = tmp1;
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_textField;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(24)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	return tmp4;
}


::haxe::ui::toolkit::core::DisplayObject ToolTip_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.ToolTip","clone",0xdf5855bc,"haxe.ui.toolkit.controls.ToolTip.clone","src/haxe/ui/toolkit/controls/ToolTip.hx",1,0x13d6b8a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::Box tmp = hx::TCast< ::haxe::ui::toolkit::containers::Box >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::ToolTip c = ((::haxe::ui::toolkit::controls::ToolTip)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::ToolTip tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ToolTip_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.ToolTip","self",0x5f5bfa0d,"haxe.ui.toolkit.controls.ToolTip.self","src/haxe/ui/toolkit/controls/ToolTip.hx",1,0x13d6b8a6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::ToolTip tmp = ::haxe::ui::toolkit::controls::ToolTip_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ToolTip_obj::ToolTip_obj()
{
}

void ToolTip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolTip);
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(_textField,"_textField");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ToolTip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(_textField,"_textField");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ToolTip_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { return component; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textField") ) { return _textField; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ToolTip_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_textField") ) { _textField=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ToolTip_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ToolTip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
	outFields->push(HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"));
	outFields->push(HX_HCSTRING("_textField","\x8e","\xa0","\x23","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(ToolTip_obj,component),HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ToolTip_obj,options),HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(ToolTip_obj,_textField),HX_HCSTRING("_textField","\x8e","\xa0","\x23","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"),
	HX_HCSTRING("options","\x5e","\x33","\xfe","\xdf"),
	HX_HCSTRING("_textField","\x8e","\xa0","\x23","\xf5"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTip_obj::__mClass,"__mClass");
};

#endif

hx::Class ToolTip_obj::__mClass;

void ToolTip_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.ToolTip","\x8d","\x81","\xa1","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ToolTip_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ToolTip_obj >;
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
