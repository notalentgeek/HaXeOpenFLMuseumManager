#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_BusyPopupContent
#include <haxe/ui/toolkit/controls/popups/BusyPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_SimplePopupContent
#include <haxe/ui/toolkit/controls/popups/SimplePopupContent.h>
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
namespace popups{

Void BusyPopupContent_obj::__construct(::String __o_text)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.BusyPopupContent","new",0xcc773829,"haxe.ui.toolkit.controls.popups.BusyPopupContent.new","haxe/ui/toolkit/controls/popups/BusyPopupContent.hx",8,0xfe6ec146)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_text,"text")
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(9)
	::String tmp = text;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp);
}
;
	return null();
}

//BusyPopupContent_obj::~BusyPopupContent_obj() { }

Dynamic BusyPopupContent_obj::__CreateEmpty() { return  new BusyPopupContent_obj; }
hx::ObjectPtr< BusyPopupContent_obj > BusyPopupContent_obj::__new(::String __o_text)
{  hx::ObjectPtr< BusyPopupContent_obj > _result_ = new BusyPopupContent_obj();
	_result_->__construct(__o_text);
	return _result_;}

Dynamic BusyPopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BusyPopupContent_obj > _result_ = new BusyPopupContent_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void BusyPopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.BusyPopupContent","initialize",0x6f7e44a7,"haxe.ui.toolkit.controls.popups.BusyPopupContent.initialize","haxe/ui/toolkit/controls/popups/BusyPopupContent.hx",15,0xfe6ec146)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		::haxe::ui::toolkit::controls::Text tmp = this->_textControl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		this->addChild(tmp);
		HX_STACK_LINE(17)
		::haxe::ui::toolkit::controls::Text tmp1 = this->_textControl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		Float tmp2 = tmp1->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		Float tmp3 = (tmp2 + (int)15);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		this->set_height(tmp3);
	}
return null();
}


::haxe::ui::toolkit::core::DisplayObject BusyPopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.BusyPopupContent","clone",0xf206bf66,"haxe.ui.toolkit.controls.popups.BusyPopupContent.clone","src/haxe/ui/toolkit/controls/popups/BusyPopupContent.hx",1,0xa45b5f5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::SimplePopupContent tmp = hx::TCast< ::haxe::ui::toolkit::controls::popups::SimplePopupContent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::BusyPopupContent c = ((::haxe::ui::toolkit::controls::popups::BusyPopupContent)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::popups::BusyPopupContent tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject BusyPopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.BusyPopupContent","self",0x1f27f3a3,"haxe.ui.toolkit.controls.popups.BusyPopupContent.self","src/haxe/ui/toolkit/controls/popups/BusyPopupContent.hx",1,0xa45b5f5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::BusyPopupContent tmp = ::haxe::ui::toolkit::controls::popups::BusyPopupContent_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



BusyPopupContent_obj::BusyPopupContent_obj()
{
}

Dynamic BusyPopupContent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BusyPopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BusyPopupContent_obj::__mClass,"__mClass");
};

#endif

hx::Class BusyPopupContent_obj::__mClass;

void BusyPopupContent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.popups.BusyPopupContent","\xb7","\xef","\x43","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BusyPopupContent_obj >;
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
