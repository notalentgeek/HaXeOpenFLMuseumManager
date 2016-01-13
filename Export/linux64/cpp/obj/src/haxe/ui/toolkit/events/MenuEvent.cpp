#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#include <haxe/ui/toolkit/controls/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuItem
#include <haxe/ui/toolkit/controls/MenuItem.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_MenuEvent
#include <haxe/ui/toolkit/events/MenuEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace events{

Void MenuEvent_obj::__construct(::String type,::haxe::ui::toolkit::controls::MenuItem menuItem)
{
HX_STACK_FRAME("haxe.ui.toolkit.events.MenuEvent","new",0xf3016ffa,"haxe.ui.toolkit.events.MenuEvent.new","haxe/ui/toolkit/events/MenuEvent.hx",14,0x1fe31c36)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(menuItem,"menuItem")
{
	HX_STACK_LINE(15)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	super::__construct(tmp,null(),null());
	HX_STACK_LINE(16)
	this->menuItem = menuItem;
}
;
	return null();
}

//MenuEvent_obj::~MenuEvent_obj() { }

Dynamic MenuEvent_obj::__CreateEmpty() { return  new MenuEvent_obj; }
hx::ObjectPtr< MenuEvent_obj > MenuEvent_obj::__new(::String type,::haxe::ui::toolkit::controls::MenuItem menuItem)
{  hx::ObjectPtr< MenuEvent_obj > _result_ = new MenuEvent_obj();
	_result_->__construct(type,menuItem);
	return _result_;}

Dynamic MenuEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuEvent_obj > _result_ = new MenuEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String MenuEvent_obj::SELECT;

::String MenuEvent_obj::OPEN;


MenuEvent_obj::MenuEvent_obj()
{
}

void MenuEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuEvent);
	HX_MARK_MEMBER_NAME(menuItem,"menuItem");
	HX_MARK_MEMBER_NAME(menu,"menu");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuItem,"menuItem");
	HX_VISIT_MEMBER_NAME(menu,"menu");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"menu") ) { return menu; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuItem") ) { return menuItem; }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"OPEN") ) { outValue = OPEN; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SELECT") ) { outValue = SELECT; return true;  }
	}
	return false;
}

Dynamic MenuEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"menu") ) { menu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuItem") ) { menuItem=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SELECT") ) { SELECT=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MenuEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("menuItem","\x52","\xf2","\x2e","\x4c"));
	outFields->push(HX_HCSTRING("menu","\x9f","\x45","\x59","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MenuEvent_obj,menuItem),HX_HCSTRING("menuItem","\x52","\xf2","\x2e","\x4c")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(MenuEvent_obj,menu),HX_HCSTRING("menu","\x9f","\x45","\x59","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &MenuEvent_obj::SELECT,HX_HCSTRING("SELECT","\xfc","\xc6","\xb5","\x1c")},
	{hx::fsString,(void *) &MenuEvent_obj::OPEN,HX_HCSTRING("OPEN","\xca","\xcb","\x74","\x34")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("menuItem","\x52","\xf2","\x2e","\x4c"),
	HX_HCSTRING("menu","\x9f","\x45","\x59","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MenuEvent_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(MenuEvent_obj::OPEN,"OPEN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::OPEN,"OPEN");
};

#endif

hx::Class MenuEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SELECT","\xfc","\xc6","\xb5","\x1c"),
	HX_HCSTRING("OPEN","\xca","\xcb","\x74","\x34"),
	::String(null()) };

void MenuEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.events.MenuEvent","\x08","\xab","\x5f","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuEvent_obj >;
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

void MenuEvent_obj::__boot()
{
	SELECT= ::openfl::_legacy::events::Event_obj::SELECT;
	OPEN= ::openfl::_legacy::events::Event_obj::OPEN;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace events
