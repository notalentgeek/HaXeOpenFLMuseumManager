#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void PopupContent_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.PopupContent","new",0x0c36f850,"haxe.ui.toolkit.controls.popups.PopupContent.new","haxe/ui/toolkit/controls/popups/PopupContent.hx",12,0x703c677f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//PopupContent_obj::~PopupContent_obj() { }

Dynamic PopupContent_obj::__CreateEmpty() { return  new PopupContent_obj; }
hx::ObjectPtr< PopupContent_obj > PopupContent_obj::__new()
{  hx::ObjectPtr< PopupContent_obj > _result_ = new PopupContent_obj();
	_result_->__construct();
	return _result_;}

Dynamic PopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupContent_obj > _result_ = new PopupContent_obj();
	_result_->__construct();
	return _result_;}

bool PopupContent_obj::onButtonClicked( int button){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.PopupContent","onButtonClicked",0x2c06f626,"haxe.ui.toolkit.controls.popups.PopupContent.onButtonClicked","haxe/ui/toolkit/controls/popups/PopupContent.hx",16,0x703c677f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(16)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(PopupContent_obj,onButtonClicked,return )

::haxe::ui::toolkit::core::DisplayObject PopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.PopupContent","clone",0x7154174d,"haxe.ui.toolkit.controls.popups.PopupContent.clone","src/haxe/ui/toolkit/controls/popups/PopupContent.hx",1,0x41f11714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::PopupContent c = ((::haxe::ui::toolkit::controls::popups::PopupContent)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::popups::PopupContent tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject PopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.PopupContent","self",0xa730559c,"haxe.ui.toolkit.controls.popups.PopupContent.self","src/haxe/ui/toolkit/controls/popups/PopupContent.hx",1,0x41f11714)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::PopupContent tmp = ::haxe::ui::toolkit::controls::popups::PopupContent_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



PopupContent_obj::PopupContent_obj()
{
}

void PopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PopupContent);
	HX_MARK_MEMBER_NAME(popup,"popup");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(popup,"popup");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PopupContent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"popup") ) { return popup; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onButtonClicked") ) { return onButtonClicked_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"popup") ) { popup=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(PopupContent_obj,popup),HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6"),
	HX_HCSTRING("onButtonClicked","\x36","\xa6","\x0f","\xa0"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupContent_obj::__mClass,"__mClass");
};

#endif

hx::Class PopupContent_obj::__mClass;

void PopupContent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.popups.PopupContent","\x5e","\xd0","\x28","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PopupContent_obj >;
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
} // end namespace popups
