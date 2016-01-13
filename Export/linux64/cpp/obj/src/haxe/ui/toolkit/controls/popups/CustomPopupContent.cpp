#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CustomPopupContent
#include <haxe/ui/toolkit/controls/popups/CustomPopupContent.h>
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

Void CustomPopupContent_obj::__construct(::haxe::ui::toolkit::core::interfaces::IDisplayObject display)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CustomPopupContent","new",0xf176f8e1,"haxe.ui.toolkit.controls.popups.CustomPopupContent.new","haxe/ui/toolkit/controls/popups/CustomPopupContent.hx",11,0x4740f54e)
HX_STACK_THIS(this)
HX_STACK_ARG(display,"display")
{
	HX_STACK_LINE(12)
	super::__construct();
	HX_STACK_LINE(14)
	this->_display = display;
}
;
	return null();
}

//CustomPopupContent_obj::~CustomPopupContent_obj() { }

Dynamic CustomPopupContent_obj::__CreateEmpty() { return  new CustomPopupContent_obj; }
hx::ObjectPtr< CustomPopupContent_obj > CustomPopupContent_obj::__new(::haxe::ui::toolkit::core::interfaces::IDisplayObject display)
{  hx::ObjectPtr< CustomPopupContent_obj > _result_ = new CustomPopupContent_obj();
	_result_->__construct(display);
	return _result_;}

Dynamic CustomPopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CustomPopupContent_obj > _result_ = new CustomPopupContent_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void CustomPopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CustomPopupContent","initialize",0x6a388aef,"haxe.ui.toolkit.controls.popups.CustomPopupContent.initialize","haxe/ui/toolkit/controls/popups/CustomPopupContent.hx",20,0x4740f54e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->super::initialize();
		HX_STACK_LINE(22)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = this->_display;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		this->addChild(tmp);
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = this->_display;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		Float tmp2 = tmp1->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		this->set_height(tmp2);
	}
return null();
}


::haxe::ui::toolkit::core::DisplayObject CustomPopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CustomPopupContent","clone",0x27021e1e,"haxe.ui.toolkit.controls.popups.CustomPopupContent.clone","src/haxe/ui/toolkit/controls/popups/CustomPopupContent.hx",1,0xb82102a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::PopupContent tmp = hx::TCast< ::haxe::ui::toolkit::controls::popups::PopupContent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::CustomPopupContent c = ((::haxe::ui::toolkit::controls::popups::CustomPopupContent)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::popups::CustomPopupContent tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject CustomPopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CustomPopupContent","self",0x59f0d3eb,"haxe.ui.toolkit.controls.popups.CustomPopupContent.self","src/haxe/ui/toolkit/controls/popups/CustomPopupContent.hx",1,0xb82102a3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::CustomPopupContent tmp = ::haxe::ui::toolkit::controls::popups::CustomPopupContent_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



CustomPopupContent_obj::CustomPopupContent_obj()
{
}

void CustomPopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomPopupContent);
	HX_MARK_MEMBER_NAME(_display,"_display");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CustomPopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_display,"_display");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CustomPopupContent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_display") ) { return _display; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CustomPopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_display") ) { _display=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CustomPopupContent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CustomPopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_display","\xc3","\x83","\x02","\xf5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObject*/ ,(int)offsetof(CustomPopupContent_obj,_display),HX_HCSTRING("_display","\xc3","\x83","\x02","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_display","\xc3","\x83","\x02","\xf5"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomPopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomPopupContent_obj::__mClass,"__mClass");
};

#endif

hx::Class CustomPopupContent_obj::__mClass;

void CustomPopupContent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.popups.CustomPopupContent","\x6f","\xf4","\xb6","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CustomPopupContent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CustomPopupContent_obj >;
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
