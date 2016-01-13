#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_DefaultScrollViewRefreshPrompt
#include <haxe/ui/toolkit/containers/DefaultScrollViewRefreshPrompt.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewRefreshPrompt
#include <haxe/ui/toolkit/containers/ScrollViewRefreshPrompt.h>
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

Void DefaultScrollViewRefreshPrompt_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt","new",0xe1b2e298,"haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt.new","haxe/ui/toolkit/containers/ScrollView.hx",808,0x89f00132)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(809)
	super::__construct();
	HX_STACK_LINE(810)
	this->set_text(HX_HCSTRING("Release to refresh","\x0f","\x54","\x1e","\x2f"));
}
;
	return null();
}

//DefaultScrollViewRefreshPrompt_obj::~DefaultScrollViewRefreshPrompt_obj() { }

Dynamic DefaultScrollViewRefreshPrompt_obj::__CreateEmpty() { return  new DefaultScrollViewRefreshPrompt_obj; }
hx::ObjectPtr< DefaultScrollViewRefreshPrompt_obj > DefaultScrollViewRefreshPrompt_obj::__new()
{  hx::ObjectPtr< DefaultScrollViewRefreshPrompt_obj > _result_ = new DefaultScrollViewRefreshPrompt_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultScrollViewRefreshPrompt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultScrollViewRefreshPrompt_obj > _result_ = new DefaultScrollViewRefreshPrompt_obj();
	_result_->__construct();
	return _result_;}

::String DefaultScrollViewRefreshPrompt_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt","set_text",0x11cdc472,"haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt.set_text","haxe/ui/toolkit/containers/ScrollView.hx",813,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(814)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(814)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(814)
	value = tmp1;
	HX_STACK_LINE(815)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_textComponent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(815)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(815)
	if ((tmp3)){
		HX_STACK_LINE(816)
		::haxe::ui::toolkit::controls::Text tmp4 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(816)
		this->_textComponent = tmp4;
		HX_STACK_LINE(817)
		::haxe::ui::toolkit::controls::Text tmp5 = this->_textComponent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(817)
		this->addChild(tmp5);
	}
	HX_STACK_LINE(819)
	::haxe::ui::toolkit::controls::Text tmp4 = this->_textComponent;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(819)
	::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(819)
	tmp4->set_text(tmp5);
	HX_STACK_LINE(820)
	::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(820)
	return tmp6;
}


::haxe::ui::toolkit::core::DisplayObject DefaultScrollViewRefreshPrompt_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt","clone",0x8d552395,"haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt.clone","src/haxe/ui/toolkit/containers/DefaultScrollViewRefreshPrompt.hx",1,0xbb02b423)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp = hx::TCast< ::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::DefaultScrollViewRefreshPrompt c = ((::haxe::ui::toolkit::containers::DefaultScrollViewRefreshPrompt)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::DefaultScrollViewRefreshPrompt tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject DefaultScrollViewRefreshPrompt_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt","self",0x9e216a54,"haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt.self","src/haxe/ui/toolkit/containers/DefaultScrollViewRefreshPrompt.hx",1,0xbb02b423)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::DefaultScrollViewRefreshPrompt tmp = ::haxe::ui::toolkit::containers::DefaultScrollViewRefreshPrompt_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



DefaultScrollViewRefreshPrompt_obj::DefaultScrollViewRefreshPrompt_obj()
{
}

void DefaultScrollViewRefreshPrompt_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultScrollViewRefreshPrompt);
	HX_MARK_MEMBER_NAME(_textComponent,"_textComponent");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultScrollViewRefreshPrompt_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textComponent,"_textComponent");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultScrollViewRefreshPrompt_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic DefaultScrollViewRefreshPrompt_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_textComponent") ) { _textComponent=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DefaultScrollViewRefreshPrompt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DefaultScrollViewRefreshPrompt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_textComponent","\x91","\x76","\x38","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(DefaultScrollViewRefreshPrompt_obj,_textComponent),HX_HCSTRING("_textComponent","\x91","\x76","\x38","\x05")},
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
	HX_MARK_MEMBER_NAME(DefaultScrollViewRefreshPrompt_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultScrollViewRefreshPrompt_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultScrollViewRefreshPrompt_obj::__mClass;

void DefaultScrollViewRefreshPrompt_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.DefaultScrollViewRefreshPrompt","\xa6","\xf6","\x3f","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DefaultScrollViewRefreshPrompt_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultScrollViewRefreshPrompt_obj >;
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
