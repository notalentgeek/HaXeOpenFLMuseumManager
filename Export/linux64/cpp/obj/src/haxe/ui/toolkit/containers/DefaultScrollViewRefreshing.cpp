#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_DefaultScrollViewRefreshing
#include <haxe/ui/toolkit/containers/DefaultScrollViewRefreshing.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewRefreshing
#include <haxe/ui/toolkit/containers/ScrollViewRefreshing.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
namespace containers{

Void DefaultScrollViewRefreshing_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.DefaultScrollViewRefreshing","new",0xd9085bb2,"haxe.ui.toolkit.containers.DefaultScrollViewRefreshing.new","haxe/ui/toolkit/containers/ScrollView.hx",835,0x89f00132)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(836)
	super::__construct();
	HX_STACK_LINE(837)
	this->set_text(HX_HCSTRING("Refreshing","\x07","\x92","\xef","\xfd"));
}
;
	return null();
}

//DefaultScrollViewRefreshing_obj::~DefaultScrollViewRefreshing_obj() { }

Dynamic DefaultScrollViewRefreshing_obj::__CreateEmpty() { return  new DefaultScrollViewRefreshing_obj; }
hx::ObjectPtr< DefaultScrollViewRefreshing_obj > DefaultScrollViewRefreshing_obj::__new()
{  hx::ObjectPtr< DefaultScrollViewRefreshing_obj > _result_ = new DefaultScrollViewRefreshing_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultScrollViewRefreshing_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultScrollViewRefreshing_obj > _result_ = new DefaultScrollViewRefreshing_obj();
	_result_->__construct();
	return _result_;}

::String DefaultScrollViewRefreshing_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.DefaultScrollViewRefreshing","set_text",0xfa490d18,"haxe.ui.toolkit.containers.DefaultScrollViewRefreshing.set_text","haxe/ui/toolkit/containers/ScrollView.hx",840,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(841)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(841)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(841)
	value = tmp1;
	HX_STACK_LINE(842)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_textComponent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(842)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(842)
	if ((tmp3)){
		HX_STACK_LINE(843)
		::haxe::ui::toolkit::controls::Text tmp4 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(843)
		this->_textComponent = tmp4;
		HX_STACK_LINE(844)
		::haxe::ui::toolkit::controls::Text tmp5 = this->_textComponent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(844)
		this->addChild(tmp5);
	}
	HX_STACK_LINE(846)
	::haxe::ui::toolkit::controls::Text tmp4 = this->_textComponent;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(846)
	::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(846)
	tmp4->set_text(tmp5);
	HX_STACK_LINE(847)
	::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(847)
	return tmp6;
}


::haxe::ui::toolkit::core::DisplayObject DefaultScrollViewRefreshing_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.DefaultScrollViewRefreshing","clone",0x1fce972f,"haxe.ui.toolkit.containers.DefaultScrollViewRefreshing.clone","src/haxe/ui/toolkit/containers/DefaultScrollViewRefreshing.hx",1,0x0f3816d3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp = hx::TCast< ::haxe::ui::toolkit::containers::ScrollViewRefreshing >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::DefaultScrollViewRefreshing c = ((::haxe::ui::toolkit::containers::DefaultScrollViewRefreshing)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::DefaultScrollViewRefreshing tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject DefaultScrollViewRefreshing_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.DefaultScrollViewRefreshing","self",0x1195e7fa,"haxe.ui.toolkit.containers.DefaultScrollViewRefreshing.self","src/haxe/ui/toolkit/containers/DefaultScrollViewRefreshing.hx",1,0x0f3816d3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::DefaultScrollViewRefreshing tmp = ::haxe::ui::toolkit::containers::DefaultScrollViewRefreshing_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



DefaultScrollViewRefreshing_obj::DefaultScrollViewRefreshing_obj()
{
}

void DefaultScrollViewRefreshing_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultScrollViewRefreshing);
	HX_MARK_MEMBER_NAME(_textComponent,"_textComponent");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultScrollViewRefreshing_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textComponent,"_textComponent");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultScrollViewRefreshing_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_textComponent") ) { return _textComponent; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultScrollViewRefreshing_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_textComponent") ) { _textComponent=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultScrollViewRefreshing_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DefaultScrollViewRefreshing_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_textComponent","\x91","\x76","\x38","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(DefaultScrollViewRefreshing_obj,_textComponent),HX_HCSTRING("_textComponent","\x91","\x76","\x38","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_textComponent","\x91","\x76","\x38","\x05"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultScrollViewRefreshing_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultScrollViewRefreshing_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultScrollViewRefreshing_obj::__mClass;

void DefaultScrollViewRefreshing_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.DefaultScrollViewRefreshing","\xc0","\x5a","\x28","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DefaultScrollViewRefreshing_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultScrollViewRefreshing_obj >;
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
} // end namespace containers
