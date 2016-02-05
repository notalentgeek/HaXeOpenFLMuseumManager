#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace events{

Void UIEvent_obj::__construct(::String type,::haxe::ui::toolkit::core::Component c,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","new",0x17c22785,"haxe.ui.toolkit.events.UIEvent.new","haxe/ui/toolkit/events/UIEvent.hx",48,0x2669ff0b)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(c,"c")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(49)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(50)
	this->_component = c;
}
;
	return null();
}

//UIEvent_obj::~UIEvent_obj() { }

Dynamic UIEvent_obj::__CreateEmpty() { return  new UIEvent_obj; }
hx::ObjectPtr< UIEvent_obj > UIEvent_obj::__new(::String type,::haxe::ui::toolkit::core::Component c,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< UIEvent_obj > _result_ = new UIEvent_obj();
	_result_->__construct(type,c,__o_bubbles,__o_cancelable);
	return _result_;}

Dynamic UIEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIEvent_obj > _result_ = new UIEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::openfl::_legacy::events::Event UIEvent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","clone",0xd9713dc2,"haxe.ui.toolkit.events.UIEvent.clone","haxe/ui/toolkit/events/UIEvent.hx",53,0x2669ff0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::haxe::ui::toolkit::core::Component tmp1 = this->_component;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	bool tmp2 = this->get_bubbles();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	bool tmp3 = this->get_cancelable();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	::haxe::ui::toolkit::events::UIEvent tmp4 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	::haxe::ui::toolkit::events::UIEvent c = tmp4;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(55)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = this->displayObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(55)
	c->displayObject = tmp5;
	HX_STACK_LINE(56)
	Dynamic tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	c->data = tmp6;
	HX_STACK_LINE(57)
	Float tmp7 = this->stageX;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	c->stageX = tmp7;
	HX_STACK_LINE(58)
	Float tmp8 = this->stageY;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(58)
	c->stageY = tmp8;
	HX_STACK_LINE(59)
	::haxe::ui::toolkit::events::UIEvent tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(59)
	return tmp9;
}


::haxe::ui::toolkit::core::Component UIEvent_obj::get_component( ){
	HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","get_component",0xf43e5bf9,"haxe.ui.toolkit.events.UIEvent.get_component","haxe/ui/toolkit/events/UIEvent.hx",63,0x2669ff0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	::haxe::ui::toolkit::core::Component tmp = this->_component;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	if ((tmp1)){
		HX_STACK_LINE(65)
		::haxe::ui::toolkit::core::Component tmp2 = this->_component;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		return tmp2;
	}
	HX_STACK_LINE(67)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = this->displayObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(67)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	if ((tmp4)){
		HX_STACK_LINE(67)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = this->displayObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(67)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(67)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxe::ui::toolkit::core::Component >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(67)
		tmp5 = (tmp10 == false);
	}
	else{
		HX_STACK_LINE(67)
		tmp5 = true;
	}
	HX_STACK_LINE(67)
	if ((tmp5)){
		HX_STACK_LINE(68)
		return null();
	}
	HX_STACK_LINE(70)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = this->displayObject;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(70)
	::haxe::ui::toolkit::core::Component tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(70)
	tmp7 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(tmp6);
	HX_STACK_LINE(70)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(UIEvent_obj,get_component,return )

Dynamic UIEvent_obj::getComponentAs( ::hx::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","getComponentAs",0xfa9bc714,"haxe.ui.toolkit.events.UIEvent.getComponentAs","haxe/ui/toolkit/events/UIEvent.hx",73,0x2669ff0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(74)
	::haxe::ui::toolkit::core::Component tmp = this->get_component();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(75)
	bool tmp1 = (c == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	if ((tmp1)){
		HX_STACK_LINE(76)
		return null();
	}
	HX_STACK_LINE(79)
	Dynamic tmp2 = ((Dynamic)(c));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(UIEvent_obj,getComponentAs,return )

Dynamic UIEvent_obj::getDataAs( ::hx::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","getDataAs",0xcabf37d7,"haxe.ui.toolkit.events.UIEvent.getDataAs","haxe/ui/toolkit/events/UIEvent.hx",82,0x2669ff0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(83)
	Dynamic tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	Dynamic d = tmp;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(84)
	bool tmp1 = (d == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	if ((tmp1)){
		HX_STACK_LINE(85)
		return null();
	}
	HX_STACK_LINE(88)
	Dynamic tmp2 = d;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(UIEvent_obj,getDataAs,return )

::String UIEvent_obj::PREFIX;

::String UIEvent_obj::INIT;

::String UIEvent_obj::RESIZE;

::String UIEvent_obj::READY;

::String UIEvent_obj::CLICK;

::String UIEvent_obj::MOUSE_DOWN;

::String UIEvent_obj::MOUSE_UP;

::String UIEvent_obj::MOUSE_OVER;

::String UIEvent_obj::MOUSE_OUT;

::String UIEvent_obj::MOUSE_MOVE;

::String UIEvent_obj::DOUBLE_CLICK;

::String UIEvent_obj::ROLL_OVER;

::String UIEvent_obj::ROLL_OUT;

::String UIEvent_obj::CHANGE;

::String UIEvent_obj::SCROLL;

::String UIEvent_obj::SCROLL_START;

::String UIEvent_obj::SCROLL_STOP;

::String UIEvent_obj::REFRESH;

::String UIEvent_obj::ADDED;

::String UIEvent_obj::ADDED_TO_STAGE;

::String UIEvent_obj::REMOVED;

::String UIEvent_obj::REMOVED_FROM_STAGE;

::String UIEvent_obj::ACTIVATE;

::String UIEvent_obj::DEACTIVATE;

::String UIEvent_obj::GLYPH_CLICK;

::String UIEvent_obj::COMPONENT_EVENT;

::String UIEvent_obj::MENU_SELECT;

::String UIEvent_obj::MENU_OPEN;


UIEvent_obj::UIEvent_obj()
{
}

void UIEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIEvent);
	HX_MARK_MEMBER_NAME(displayObject,"displayObject");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(_component,"_component");
	::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(displayObject,"displayObject");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(_component,"_component");
	::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stageX") ) { return stageX; }
		if (HX_FIELD_EQ(inName,"stageY") ) { return stageY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { return inCallProp == hx::paccAlways ? get_component() : component; }
		if (HX_FIELD_EQ(inName,"getDataAs") ) { return getDataAs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return _component; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayObject") ) { return displayObject; }
		if (HX_FIELD_EQ(inName,"get_component") ) { return get_component_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getComponentAs") ) { return getComponentAs_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayObject") ) { displayObject=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("displayObject","\xa1","\x3a","\xa2","\xd6"));
	outFields->push(HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObject*/ ,(int)offsetof(UIEvent_obj,displayObject),HX_HCSTRING("displayObject","\xa1","\x3a","\xa2","\xd6")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(UIEvent_obj,component),HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIEvent_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsFloat,(int)offsetof(UIEvent_obj,stageX),HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05")},
	{hx::fsFloat,(int)offsetof(UIEvent_obj,stageY),HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(UIEvent_obj,_component),HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &UIEvent_obj::PREFIX,HX_HCSTRING("PREFIX","\x92","\x85","\x39","\x61")},
	{hx::fsString,(void *) &UIEvent_obj::INIT,HX_HCSTRING("INIT","\x10","\x03","\x7c","\x30")},
	{hx::fsString,(void *) &UIEvent_obj::RESIZE,HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba")},
	{hx::fsString,(void *) &UIEvent_obj::READY,HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64")},
	{hx::fsString,(void *) &UIEvent_obj::CLICK,HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6")},
	{hx::fsString,(void *) &UIEvent_obj::MOUSE_DOWN,HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde")},
	{hx::fsString,(void *) &UIEvent_obj::MOUSE_UP,HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd")},
	{hx::fsString,(void *) &UIEvent_obj::MOUSE_OVER,HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6")},
	{hx::fsString,(void *) &UIEvent_obj::MOUSE_OUT,HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11")},
	{hx::fsString,(void *) &UIEvent_obj::MOUSE_MOVE,HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4")},
	{hx::fsString,(void *) &UIEvent_obj::DOUBLE_CLICK,HX_HCSTRING("DOUBLE_CLICK","\x3a","\xf5","\xe9","\x68")},
	{hx::fsString,(void *) &UIEvent_obj::ROLL_OVER,HX_HCSTRING("ROLL_OVER","\x96","\xfc","\xed","\xda")},
	{hx::fsString,(void *) &UIEvent_obj::ROLL_OUT,HX_HCSTRING("ROLL_OUT","\x6c","\x37","\xe3","\x8b")},
	{hx::fsString,(void *) &UIEvent_obj::CHANGE,HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69")},
	{hx::fsString,(void *) &UIEvent_obj::SCROLL,HX_HCSTRING("SCROLL","\x0d","\x84","\xe7","\xf9")},
	{hx::fsString,(void *) &UIEvent_obj::SCROLL_START,HX_HCSTRING("SCROLL_START","\x50","\x7f","\xda","\x0c")},
	{hx::fsString,(void *) &UIEvent_obj::SCROLL_STOP,HX_HCSTRING("SCROLL_STOP","\xb4","\x80","\x2b","\xf9")},
	{hx::fsString,(void *) &UIEvent_obj::REFRESH,HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c")},
	{hx::fsString,(void *) &UIEvent_obj::ADDED,HX_HCSTRING("ADDED","\xa0","\x0c","\x32","\x9a")},
	{hx::fsString,(void *) &UIEvent_obj::ADDED_TO_STAGE,HX_HCSTRING("ADDED_TO_STAGE","\x59","\x58","\xdb","\x1a")},
	{hx::fsString,(void *) &UIEvent_obj::REMOVED,HX_HCSTRING("REMOVED","\x80","\xf3","\xd3","\x72")},
	{hx::fsString,(void *) &UIEvent_obj::REMOVED_FROM_STAGE,HX_HCSTRING("REMOVED_FROM_STAGE","\x68","\xcc","\x72","\xdb")},
	{hx::fsString,(void *) &UIEvent_obj::ACTIVATE,HX_HCSTRING("ACTIVATE","\xb3","\xab","\x31","\x3f")},
	{hx::fsString,(void *) &UIEvent_obj::DEACTIVATE,HX_HCSTRING("DEACTIVATE","\x34","\xd0","\x0a","\x2e")},
	{hx::fsString,(void *) &UIEvent_obj::GLYPH_CLICK,HX_HCSTRING("GLYPH_CLICK","\xf5","\xe1","\xb9","\x7d")},
	{hx::fsString,(void *) &UIEvent_obj::COMPONENT_EVENT,HX_HCSTRING("COMPONENT_EVENT","\x98","\x7b","\x78","\xd0")},
	{hx::fsString,(void *) &UIEvent_obj::MENU_SELECT,HX_HCSTRING("MENU_SELECT","\xdc","\x4c","\x73","\x65")},
	{hx::fsString,(void *) &UIEvent_obj::MENU_OPEN,HX_HCSTRING("MENU_OPEN","\xaa","\x19","\x9b","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("displayObject","\xa1","\x3a","\xa2","\xd6"),
	HX_HCSTRING("component","\xbd","\xf0","\x53","\x0f"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"),
	HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("_component","\x7e","\x6c","\xf6","\x6a"),
	HX_HCSTRING("get_component","\x94","\xc4","\xb7","\xd0"),
	HX_HCSTRING("getComponentAs","\x19","\xe6","\x5d","\x08"),
	HX_HCSTRING("getDataAs","\xf2","\x76","\xdb","\x9e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIEvent_obj::PREFIX,"PREFIX");
	HX_MARK_MEMBER_NAME(UIEvent_obj::INIT,"INIT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(UIEvent_obj::SCROLL_START,"SCROLL_START");
	HX_MARK_MEMBER_NAME(UIEvent_obj::SCROLL_STOP,"SCROLL_STOP");
	HX_MARK_MEMBER_NAME(UIEvent_obj::REFRESH,"REFRESH");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::GLYPH_CLICK,"GLYPH_CLICK");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_EVENT,"COMPONENT_EVENT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MENU_SELECT,"MENU_SELECT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MENU_OPEN,"MENU_OPEN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::PREFIX,"PREFIX");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::INIT,"INIT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::SCROLL,"SCROLL");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::SCROLL_START,"SCROLL_START");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::SCROLL_STOP,"SCROLL_STOP");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::REFRESH,"REFRESH");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ACTIVATE,"ACTIVATE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::DEACTIVATE,"DEACTIVATE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::GLYPH_CLICK,"GLYPH_CLICK");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_EVENT,"COMPONENT_EVENT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MENU_SELECT,"MENU_SELECT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MENU_OPEN,"MENU_OPEN");
};

#endif

hx::Class UIEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PREFIX","\x92","\x85","\x39","\x61"),
	HX_HCSTRING("INIT","\x10","\x03","\x7c","\x30"),
	HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba"),
	HX_HCSTRING("READY","\x43","\xd8","\xa8","\x64"),
	HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6"),
	HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde"),
	HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd"),
	HX_HCSTRING("MOUSE_OVER","\x0e","\x35","\x45","\xe6"),
	HX_HCSTRING("MOUSE_OUT","\xf4","\xb5","\x1a","\x11"),
	HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4"),
	HX_HCSTRING("DOUBLE_CLICK","\x3a","\xf5","\xe9","\x68"),
	HX_HCSTRING("ROLL_OVER","\x96","\xfc","\xed","\xda"),
	HX_HCSTRING("ROLL_OUT","\x6c","\x37","\xe3","\x8b"),
	HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69"),
	HX_HCSTRING("SCROLL","\x0d","\x84","\xe7","\xf9"),
	HX_HCSTRING("SCROLL_START","\x50","\x7f","\xda","\x0c"),
	HX_HCSTRING("SCROLL_STOP","\xb4","\x80","\x2b","\xf9"),
	HX_HCSTRING("REFRESH","\xbb","\xad","\xf4","\x6c"),
	HX_HCSTRING("ADDED","\xa0","\x0c","\x32","\x9a"),
	HX_HCSTRING("ADDED_TO_STAGE","\x59","\x58","\xdb","\x1a"),
	HX_HCSTRING("REMOVED","\x80","\xf3","\xd3","\x72"),
	HX_HCSTRING("REMOVED_FROM_STAGE","\x68","\xcc","\x72","\xdb"),
	HX_HCSTRING("ACTIVATE","\xb3","\xab","\x31","\x3f"),
	HX_HCSTRING("DEACTIVATE","\x34","\xd0","\x0a","\x2e"),
	HX_HCSTRING("GLYPH_CLICK","\xf5","\xe1","\xb9","\x7d"),
	HX_HCSTRING("COMPONENT_EVENT","\x98","\x7b","\x78","\xd0"),
	HX_HCSTRING("MENU_SELECT","\xdc","\x4c","\x73","\x65"),
	HX_HCSTRING("MENU_OPEN","\xaa","\x19","\x9b","\x6c"),
	::String(null()) };

void UIEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.events.UIEvent","\x13","\x01","\x55","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIEvent_obj >;
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

void UIEvent_obj::__boot()
{
	PREFIX= HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08");
	INIT= HX_HCSTRING("haxeui_init","\xb5","\xbc","\x37","\x9e");
	RESIZE= HX_HCSTRING("haxeui_resize","\xd9","\x4e","\x57","\xda");
	READY= HX_HCSTRING("haxeui_ready","\x1e","\x8f","\x2f","\xfb");
	CLICK= HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");
	MOUSE_DOWN= HX_HCSTRING("haxeui_mouseDown","\x62","\x19","\x35","\x57");
	MOUSE_UP= HX_HCSTRING("haxeui_mouseUp","\x5b","\x47","\x0d","\x8f");
	MOUSE_OVER= HX_HCSTRING("haxeui_mouseOver","\x54","\xb2","\x7f","\x5e");
	MOUSE_OUT= HX_HCSTRING("haxeui_mouseOut","\x8e","\x9f","\x8c","\x9c");
	MOUSE_MOVE= HX_HCSTRING("haxeui_mouseMove","\x11","\x04","\x28","\x5d");
	DOUBLE_CLICK= HX_HCSTRING("haxeui_doubleClick","\x72","\x30","\x7f","\x05");
	ROLL_OVER= HX_HCSTRING("haxeui_rollOver","\x96","\x63","\x17","\x0b");
	ROLL_OUT= HX_HCSTRING("haxeui_rollOut","\x8c","\x4c","\xac","\x2b");
	CHANGE= HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");
	SCROLL= HX_HCSTRING("haxeui_scroll","\xf2","\xcc","\x40","\x19");
	SCROLL_START= HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");
	SCROLL_STOP= HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");
	REFRESH= HX_HCSTRING("haxeui_refresh","\x56","\x2d","\xbb","\xbb");
	ADDED= HX_HCSTRING("haxeui_added","\x7b","\xc3","\xb8","\x30");
	ADDED_TO_STAGE= HX_HCSTRING("haxeui_addedToStage","\x08","\x51","\x53","\xdc");
	REMOVED= HX_HCSTRING("haxeui_removed","\x1b","\x73","\x9a","\xc1");
	REMOVED_FROM_STAGE= HX_HCSTRING("haxeui_removedFromStage","\x59","\x06","\x41","\xd1");
	ACTIVATE= HX_HCSTRING("haxeui_activate","\xd8","\xd3","\x1a","\xde");
	DEACTIVATE= HX_HCSTRING("haxeui_deactivate","\x99","\x27","\xaa","\x37");
	GLYPH_CLICK= HX_HCSTRING("haxeui_glyphClick","\x61","\xaa","\x5c","\x02");
	COMPONENT_EVENT= HX_HCSTRING("haxeui_componentEvent","\x02","\x5c","\xae","\x33");
	MENU_SELECT= HX_HCSTRING("haxeui_menuSelect","\x60","\x21","\x60","\x48");
	MENU_OPEN= HX_HCSTRING("haxeui_menuOpen","\x2e","\xe9","\x91","\x48");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace events
