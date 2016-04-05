#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#include <haxe/ui/toolkit/util/StringUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void DisplayObject_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","new",0x23527166,"haxe.ui.toolkit.core.DisplayObject.new","haxe/ui/toolkit/core/DisplayObject.hx",36,0xfab33e8a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(59)
	this->_alpha = ((Float)1);
	HX_STACK_LINE(58)
	this->_includeInLayout = true;
	HX_STACK_LINE(57)
	this->_valign = HX_HCSTRING("top","\x95","\x66","\x58","\x00");
	HX_STACK_LINE(56)
	this->_halign = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	HX_STACK_LINE(54)
	this->_invalidating = false;
	HX_STACK_LINE(53)
	this->_ready = false;
	HX_STACK_LINE(52)
	this->_minHeight = ((Float)0);
	HX_STACK_LINE(51)
	this->_minWidth = ((Float)0);
	HX_STACK_LINE(50)
	this->_percentHeight = ((Float)-1);
	HX_STACK_LINE(49)
	this->_percentWidth = ((Float)-1);
	HX_STACK_LINE(48)
	this->_height = ((Float)0);
	HX_STACK_LINE(47)
	this->_width = ((Float)0);
	HX_STACK_LINE(46)
	this->_rotationZ = ((Float)0);
	HX_STACK_LINE(45)
	this->_rotationY = ((Float)0);
	HX_STACK_LINE(44)
	this->_rotationX = ((Float)0);
	HX_STACK_LINE(43)
	this->_z = ((Float)0);
	HX_STACK_LINE(42)
	this->_y = ((Float)0);
	HX_STACK_LINE(41)
	this->_x = ((Float)0);
	HX_STACK_LINE(64)
	::openfl::_legacy::display::Sprite tmp = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	this->_sprite = tmp;
	HX_STACK_LINE(66)
	::openfl::_legacy::display::Sprite tmp1 = this->_sprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	tmp1->set_tabChildren(false);
	HX_STACK_LINE(67)
	::String tmp2 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(67)
	Dynamic tmp3 = this->_onAddedToStage_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	this->addEventListener(tmp2,tmp3,false,(int)100,null());
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDrawable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< DisplayObject_obj >(this); }
DisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< DisplayObject_obj >(this); }
DisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< DisplayObject_obj >(this); }
DisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IDrawable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDrawable_delegate_< DisplayObject_obj >(this); }
Void DisplayObject_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","preInitialize",0x79caa3d9,"haxe.ui.toolkit.core.DisplayObject.preInitialize","haxe/ui/toolkit/core/DisplayObject.hx",73,0xfab33e8a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,preInitialize,(void))

Void DisplayObject_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","initialize",0x56715d0a,"haxe.ui.toolkit.core.DisplayObject.initialize","haxe/ui/toolkit/core/DisplayObject.hx",76,0xfab33e8a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,initialize,(void))

Void DisplayObject_obj::postInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","postInitialize",0x0bad828a,"haxe.ui.toolkit.core.DisplayObject.postInitialize","haxe/ui/toolkit/core/DisplayObject.hx",79,0xfab33e8a)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,postInitialize,(void))

Void DisplayObject_obj::_onAddedToStage( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","_onAddedToStage",0xd913dcc7,"haxe.ui.toolkit.core.DisplayObject._onAddedToStage","haxe/ui/toolkit/core/DisplayObject.hx",84,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(85)
		::String tmp = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		Dynamic tmp1 = this->_onAddedToStage_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		this->removeEventListener(tmp,tmp1,null());
		HX_STACK_LINE(87)
		this->preInitialize();
		HX_STACK_LINE(88)
		this->_ready = true;
		HX_STACK_LINE(89)
		this->initialize();
		HX_STACK_LINE(90)
		this->postInitialize();
		HX_STACK_LINE(91)
		int tmp2 = (int)17;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		int tmp3 = (int(tmp2) | int((int)256));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		this->invalidate(tmp3,null());
		HX_STACK_LINE(93)
		::String tmp4 = HX_HCSTRING("haxeui_init","\xb5","\xbc","\x37","\x9e");		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		::haxe::ui::toolkit::events::UIEvent tmp5 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp4,null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		::haxe::ui::toolkit::events::UIEvent event1 = tmp5;		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::events::UIEvent tmp6 = event1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		this->dispatchEvent(tmp6);
		HX_STACK_LINE(96)
		::String tmp7 = HX_HCSTRING("haxeui_ready","\x1e","\x8f","\x2f","\xfb");		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::events::UIEvent tmp8 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp7,null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::events::UIEvent event2 = tmp8;		HX_STACK_VAR(event2,"event2");
		HX_STACK_LINE(97)
		::haxe::ui::toolkit::events::UIEvent tmp9 = event2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		this->dispatchEvent(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_onAddedToStage,(void))

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer DisplayObject_obj::get_parent( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_parent",0x47bba0ad,"haxe.ui.toolkit.core.DisplayObject.get_parent","haxe/ui/toolkit/core/DisplayObject.hx",151,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_parent,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer DisplayObject_obj::set_parent( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_parent",0x4b393f21,"haxe.ui.toolkit.core.DisplayObject.set_parent","haxe/ui/toolkit/core/DisplayObject.hx",155,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(156)
	this->_parent = value;
	HX_STACK_LINE(157)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_parent,return )

::haxe::ui::toolkit::core::Root DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_root",0xeae792e5,"haxe.ui.toolkit.core.DisplayObject.get_root","haxe/ui/toolkit/core/DisplayObject.hx",160,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	::haxe::ui::toolkit::core::Root tmp = this->_root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

::haxe::ui::toolkit::core::Root DisplayObject_obj::set_root( ::haxe::ui::toolkit::core::Root value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_root",0x9944ec59,"haxe.ui.toolkit.core.DisplayObject.set_root","haxe/ui/toolkit/core/DisplayObject.hx",164,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(165)
	this->_root = value;
	HX_STACK_LINE(166)
	::haxe::ui::toolkit::core::Root tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_root,return )

::String DisplayObject_obj::get_id( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_id",0x624339de,"haxe.ui.toolkit.core.DisplayObject.get_id","haxe/ui/toolkit/core/DisplayObject.hx",169,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	::String tmp = this->_id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_id,return )

::String DisplayObject_obj::set_id( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_id",0x2e8b8e52,"haxe.ui.toolkit.core.DisplayObject.set_id","haxe/ui/toolkit/core/DisplayObject.hx",173,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(174)
	this->_id = value;
	HX_STACK_LINE(175)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_id,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_x",0x6a0e13d5,"haxe.ui.toolkit.core.DisplayObject.get_x","haxe/ui/toolkit/core/DisplayObject.hx",178,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	Float tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_x",0x52dd09e1,"haxe.ui.toolkit.core.DisplayObject.set_x","haxe/ui/toolkit/core/DisplayObject.hx",182,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(183)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	this->_x = tmp1;
	HX_STACK_LINE(184)
	::openfl::_legacy::display::Sprite tmp2 = this->_sprite;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	Float tmp3 = this->_x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	tmp2->set_x(tmp3);
	HX_STACK_LINE(185)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(185)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_y",0x6a0e13d6,"haxe.ui.toolkit.core.DisplayObject.get_y","haxe/ui/toolkit/core/DisplayObject.hx",188,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	Float tmp = this->_y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_y",0x52dd09e2,"haxe.ui.toolkit.core.DisplayObject.set_y","haxe/ui/toolkit/core/DisplayObject.hx",192,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(193)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(193)
	this->_y = tmp1;
	HX_STACK_LINE(194)
	::openfl::_legacy::display::Sprite tmp2 = this->_sprite;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	Float tmp3 = this->_y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	tmp2->set_y(tmp3);
	HX_STACK_LINE(195)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(195)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

Float DisplayObject_obj::get_z( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_z",0x6a0e13d7,"haxe.ui.toolkit.core.DisplayObject.get_z","haxe/ui/toolkit/core/DisplayObject.hx",199,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	Float tmp = this->_z;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_z,return )

Float DisplayObject_obj::set_z( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_z",0x52dd09e3,"haxe.ui.toolkit.core.DisplayObject.set_z","haxe/ui/toolkit/core/DisplayObject.hx",203,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(204)
	Float tmp = this->_z;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	bool tmp3 = (tmp == tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	if ((tmp3)){
		HX_STACK_LINE(205)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		return tmp4;
	}
	HX_STACK_LINE(207)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(207)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(207)
	this->_z = tmp5;
	HX_STACK_LINE(211)
	Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(211)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_z,return )

Float DisplayObject_obj::get_rotationX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_rotationX",0x217b91b7,"haxe.ui.toolkit.core.DisplayObject.get_rotationX","haxe/ui/toolkit/core/DisplayObject.hx",219,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotationX,return )

Float DisplayObject_obj::set_rotationX( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_rotationX",0x668173c3,"haxe.ui.toolkit.core.DisplayObject.set_rotationX","haxe/ui/toolkit/core/DisplayObject.hx",223,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(224)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	Float tmp1 = this->_rotationX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(224)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(224)
	if ((tmp2)){
		HX_STACK_LINE(225)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		return tmp3;
	}
	HX_STACK_LINE(227)
	this->_rotationX = value;
	HX_STACK_LINE(231)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(231)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotationX,return )

Float DisplayObject_obj::get_rotationY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_rotationY",0x217b91b8,"haxe.ui.toolkit.core.DisplayObject.get_rotationY","haxe/ui/toolkit/core/DisplayObject.hx",238,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotationY,return )

Float DisplayObject_obj::set_rotationY( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_rotationY",0x668173c4,"haxe.ui.toolkit.core.DisplayObject.set_rotationY","haxe/ui/toolkit/core/DisplayObject.hx",242,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(243)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	Float tmp1 = this->_rotationY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(243)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	if ((tmp2)){
		HX_STACK_LINE(244)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(244)
		return tmp3;
	}
	HX_STACK_LINE(246)
	this->_rotationY = value;
	HX_STACK_LINE(250)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(250)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotationY,return )

Float DisplayObject_obj::get_rotationZ( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_rotationZ",0x217b91b9,"haxe.ui.toolkit.core.DisplayObject.get_rotationZ","haxe/ui/toolkit/core/DisplayObject.hx",257,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(257)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotationZ,return )

Float DisplayObject_obj::set_rotationZ( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_rotationZ",0x668173c5,"haxe.ui.toolkit.core.DisplayObject.set_rotationZ","haxe/ui/toolkit/core/DisplayObject.hx",261,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(262)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	Float tmp1 = this->_rotationZ;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	if ((tmp2)){
		HX_STACK_LINE(263)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(263)
		return tmp3;
	}
	HX_STACK_LINE(265)
	this->_rotationZ = value;
	HX_STACK_LINE(269)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotationZ,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_width",0x7cba3be3,"haxe.ui.toolkit.core.DisplayObject.get_width","haxe/ui/toolkit/core/DisplayObject.hx",272,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	Float tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	Float tmp2 = tmp1->get_scaleX();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(273)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_width",0x600b27ef,"haxe.ui.toolkit.core.DisplayObject.set_width","haxe/ui/toolkit/core/DisplayObject.hx",276,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(277)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	Float tmp1 = ::Math_obj::fround(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	value = tmp1;
	HX_STACK_LINE(278)
	Float tmp2 = this->_width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(278)
	if ((tmp4)){
		HX_STACK_LINE(279)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		return tmp5;
	}
	HX_STACK_LINE(282)
	this->_width = value;
	HX_STACK_LINE(283)
	this->_invalidating = false;
	HX_STACK_LINE(284)
	int tmp5 = (int)272;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(284)
	this->invalidate(tmp5,null());
	HX_STACK_LINE(285)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->_parent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(285)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(285)
	if ((tmp7)){
		HX_STACK_LINE(286)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp8 = this->_parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(286)
		tmp8->invalidate((int)1,null());
	}
	HX_STACK_LINE(288)
	::String tmp8 = HX_HCSTRING("haxeui_resize","\xd9","\x4e","\x57","\xda");		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(288)
	::haxe::ui::toolkit::events::UIEvent tmp9 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp8,null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(288)
	::haxe::ui::toolkit::events::UIEvent event = tmp9;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(289)
	::haxe::ui::toolkit::events::UIEvent tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(289)
	this->dispatchEvent(tmp10);
	HX_STACK_LINE(291)
	Float tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(291)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_height",0x5c89a36a,"haxe.ui.toolkit.core.DisplayObject.get_height","haxe/ui/toolkit/core/DisplayObject.hx",294,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(295)
	Float tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	Float tmp2 = tmp1->get_scaleY();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(295)
	Float tmp3 = (Float(tmp) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_height",0x600741de,"haxe.ui.toolkit.core.DisplayObject.set_height","haxe/ui/toolkit/core/DisplayObject.hx",298,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(299)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	Float tmp1 = ::Math_obj::fround(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	value = tmp1;
	HX_STACK_LINE(300)
	Float tmp2 = this->_height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(300)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(300)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(300)
	if ((tmp4)){
		HX_STACK_LINE(301)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(301)
		return tmp5;
	}
	HX_STACK_LINE(304)
	this->_height = value;
	HX_STACK_LINE(305)
	this->_invalidating = false;
	HX_STACK_LINE(306)
	int tmp5 = (int)272;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(306)
	this->invalidate(tmp5,null());
	HX_STACK_LINE(307)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->_parent;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(307)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(307)
	if ((tmp7)){
		HX_STACK_LINE(308)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp8 = this->_parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(308)
		tmp8->invalidate((int)1,null());
	}
	HX_STACK_LINE(310)
	::String tmp8 = HX_HCSTRING("haxeui_resize","\xd9","\x4e","\x57","\xda");		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(310)
	::haxe::ui::toolkit::events::UIEvent tmp9 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp8,null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(310)
	::haxe::ui::toolkit::events::UIEvent event = tmp9;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(311)
	::haxe::ui::toolkit::events::UIEvent tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(311)
	this->dispatchEvent(tmp10);
	HX_STACK_LINE(313)
	Float tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(313)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

Float DisplayObject_obj::get_percentWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_percentWidth",0xea7af0c4,"haxe.ui.toolkit.core.DisplayObject.get_percentWidth","haxe/ui/toolkit/core/DisplayObject.hx",316,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(317)
	Float tmp = this->_percentWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_percentWidth,return )

Float DisplayObject_obj::set_percentWidth( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_percentWidth",0x40bcde38,"haxe.ui.toolkit.core.DisplayObject.set_percentWidth","haxe/ui/toolkit/core/DisplayObject.hx",320,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(321)
	Float tmp = this->_percentWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(321)
	if ((tmp2)){
		HX_STACK_LINE(322)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		return tmp3;
	}
	HX_STACK_LINE(325)
	this->_percentWidth = value;
	HX_STACK_LINE(326)
	this->invalidate(null(),null());
	HX_STACK_LINE(327)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->_parent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(327)
	if ((tmp4)){
		HX_STACK_LINE(328)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		tmp5->invalidate((int)1,null());
	}
	HX_STACK_LINE(330)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(330)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_percentWidth,return )

Float DisplayObject_obj::get_percentHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_percentHeight",0xf7673369,"haxe.ui.toolkit.core.DisplayObject.get_percentHeight","haxe/ui/toolkit/core/DisplayObject.hx",333,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(334)
	Float tmp = this->_percentHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_percentHeight,return )

Float DisplayObject_obj::set_percentHeight( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_percentHeight",0x1ad50b75,"haxe.ui.toolkit.core.DisplayObject.set_percentHeight","haxe/ui/toolkit/core/DisplayObject.hx",337,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(338)
	Float tmp = this->_percentHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(338)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(338)
	if ((tmp2)){
		HX_STACK_LINE(339)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(339)
		return tmp3;
	}
	HX_STACK_LINE(342)
	this->_percentHeight = value;
	HX_STACK_LINE(343)
	this->invalidate(null(),null());
	HX_STACK_LINE(344)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->_parent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(344)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(344)
	if ((tmp4)){
		HX_STACK_LINE(345)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(345)
		tmp5->invalidate((int)1,null());
	}
	HX_STACK_LINE(347)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(347)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_percentHeight,return )

Float DisplayObject_obj::get_minWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_minWidth",0x5b17e557,"haxe.ui.toolkit.core.DisplayObject.get_minWidth","haxe/ui/toolkit/core/DisplayObject.hx",350,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(351)
	Float tmp = this->_minWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_minWidth,return )

Float DisplayObject_obj::set_minWidth( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_minWidth",0x701108cb,"haxe.ui.toolkit.core.DisplayObject.set_minWidth","haxe/ui/toolkit/core/DisplayObject.hx",354,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(355)
	this->_minWidth = value;
	HX_STACK_LINE(356)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_minWidth,return )

Float DisplayObject_obj::get_minHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_minHeight",0x10203f76,"haxe.ui.toolkit.core.DisplayObject.get_minHeight","haxe/ui/toolkit/core/DisplayObject.hx",359,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(360)
	Float tmp = this->_minHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(360)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_minHeight,return )

Float DisplayObject_obj::set_minHeight( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_minHeight",0x55262182,"haxe.ui.toolkit.core.DisplayObject.set_minHeight","haxe/ui/toolkit/core/DisplayObject.hx",363,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(364)
	this->_minHeight = value;
	HX_STACK_LINE(365)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(365)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_minHeight,return )

bool DisplayObject_obj::get_ready( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_ready",0x99122640,"haxe.ui.toolkit.core.DisplayObject.get_ready","haxe/ui/toolkit/core/DisplayObject.hx",368,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(369)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(369)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_ready,return )

::openfl::_legacy::display::Sprite DisplayObject_obj::get_sprite( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_sprite",0x1dd37788,"haxe.ui.toolkit.core.DisplayObject.get_sprite","haxe/ui/toolkit/core/DisplayObject.hx",372,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_sprite,return )

Float DisplayObject_obj::get_stageX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_stageX",0x602f975d,"haxe.ui.toolkit.core.DisplayObject.get_stageX","haxe/ui/toolkit/core/DisplayObject.hx",377,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(378)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(378)
	tmp = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(378)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(379)
	Float xpos = (int)0;		HX_STACK_VAR(xpos,"xpos");
	HX_STACK_LINE(380)
	while((true)){
		HX_STACK_LINE(380)
		bool tmp1 = (c != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(380)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(380)
		if ((tmp2)){
			HX_STACK_LINE(380)
			break;
		}
		HX_STACK_LINE(381)
		Float tmp3 = c->get_x();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(381)
		hx::AddEq(xpos,tmp3);
		HX_STACK_LINE(382)
		::openfl::_legacy::display::Sprite tmp4 = c->get_sprite();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(382)
		::openfl::_legacy::geom::Rectangle tmp5 = tmp4->get_scrollRect();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(382)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(382)
		if ((tmp6)){
			HX_STACK_LINE(383)
			::openfl::_legacy::display::Sprite tmp7 = c->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(383)
			::openfl::_legacy::geom::Rectangle tmp8 = tmp7->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(383)
			Float tmp9 = tmp8->get_left();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(383)
			hx::SubEq(xpos,tmp9);
		}
		HX_STACK_LINE(385)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = c->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(385)
		c = tmp7;
	}
	HX_STACK_LINE(388)
	Float tmp1 = xpos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_stageX,return )

Float DisplayObject_obj::get_stageY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_stageY",0x602f975e,"haxe.ui.toolkit.core.DisplayObject.get_stageY","haxe/ui/toolkit/core/DisplayObject.hx",391,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(392)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	tmp = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(392)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(393)
	Float ypos = (int)0;		HX_STACK_VAR(ypos,"ypos");
	HX_STACK_LINE(394)
	while((true)){
		HX_STACK_LINE(394)
		bool tmp1 = (c != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(394)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(394)
		if ((tmp2)){
			HX_STACK_LINE(394)
			break;
		}
		HX_STACK_LINE(395)
		Float tmp3 = c->get_y();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(395)
		hx::AddEq(ypos,tmp3);
		HX_STACK_LINE(396)
		::openfl::_legacy::display::Sprite tmp4 = c->get_sprite();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		::openfl::_legacy::geom::Rectangle tmp5 = tmp4->get_scrollRect();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(396)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(396)
		if ((tmp6)){
			HX_STACK_LINE(397)
			::openfl::_legacy::display::Sprite tmp7 = c->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(397)
			::openfl::_legacy::geom::Rectangle tmp8 = tmp7->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(397)
			Float tmp9 = tmp8->get_top();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(397)
			hx::SubEq(ypos,tmp9);
		}
		HX_STACK_LINE(399)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = c->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(399)
		c = tmp7;
	}
	HX_STACK_LINE(402)
	Float tmp1 = ypos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(402)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_stageY,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_visible",0x3eceef8f,"haxe.ui.toolkit.core.DisplayObject.get_visible","haxe/ui/toolkit/core/DisplayObject.hx",405,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(406)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	bool tmp1 = tmp->get_visible();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	bool v = tmp1;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(407)
	bool tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(407)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_visible",0x493bf69b,"haxe.ui.toolkit.core.DisplayObject.set_visible","haxe/ui/toolkit/core/DisplayObject.hx",410,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(411)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(411)
	tmp->set_visible(tmp1);
	HX_STACK_LINE(412)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(412)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(412)
	if ((tmp3)){
		HX_STACK_LINE(413)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(413)
		tmp4->invalidate((int)1,null());
	}
	HX_STACK_LINE(415)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(415)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_alpha",0xd3ee2d3b,"haxe.ui.toolkit.core.DisplayObject.get_alpha","haxe/ui/toolkit/core/DisplayObject.hx",418,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(419)
	Float tmp = this->_alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(419)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_alpha",0xb73f1947,"haxe.ui.toolkit.core.DisplayObject.set_alpha","haxe/ui/toolkit/core/DisplayObject.hx",422,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(423)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(423)
	Float tmp1 = this->_alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(423)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(423)
	if ((tmp2)){
		HX_STACK_LINE(424)
		this->_alpha = value;
		HX_STACK_LINE(425)
		this->invalidate(null(),null());
	}
	HX_STACK_LINE(427)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(427)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

bool DisplayObject_obj::get_includeInLayout( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_includeInLayout",0xe19876d4,"haxe.ui.toolkit.core.DisplayObject.get_includeInLayout","haxe/ui/toolkit/core/DisplayObject.hx",430,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(431)
	bool tmp = this->_includeInLayout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_includeInLayout,return )

bool DisplayObject_obj::set_includeInLayout( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_includeInLayout",0x1e3569e0,"haxe.ui.toolkit.core.DisplayObject.set_includeInLayout","haxe/ui/toolkit/core/DisplayObject.hx",434,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(435)
	this->_includeInLayout = value;
	HX_STACK_LINE(436)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(436)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(436)
	if ((tmp1)){
		HX_STACK_LINE(437)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(437)
		tmp2->invalidate((int)1,null());
	}
	HX_STACK_LINE(439)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(439)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_includeInLayout,return )

::String DisplayObject_obj::get_horizontalAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_horizontalAlign",0x6739eb5e,"haxe.ui.toolkit.core.DisplayObject.get_horizontalAlign","haxe/ui/toolkit/core/DisplayObject.hx",442,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(443)
	::String tmp = this->_halign;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_horizontalAlign,return )

::String DisplayObject_obj::set_horizontalAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_horizontalAlign",0xa3d6de6a,"haxe.ui.toolkit.core.DisplayObject.set_horizontalAlign","haxe/ui/toolkit/core/DisplayObject.hx",446,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(447)
	this->_halign = value;
	HX_STACK_LINE(448)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(448)
	if ((tmp)){
		HX_STACK_LINE(449)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->get_parent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(449)
		tmp1->invalidate((int)1,null());
	}
	HX_STACK_LINE(451)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(451)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_horizontalAlign,return )

::String DisplayObject_obj::get_verticalAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_verticalAlign",0xcbc8494c,"haxe.ui.toolkit.core.DisplayObject.get_verticalAlign","haxe/ui/toolkit/core/DisplayObject.hx",454,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(455)
	::String tmp = this->_valign;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_verticalAlign,return )

::String DisplayObject_obj::set_verticalAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_verticalAlign",0xef362158,"haxe.ui.toolkit.core.DisplayObject.set_verticalAlign","haxe/ui/toolkit/core/DisplayObject.hx",458,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(459)
	this->_valign = value;
	HX_STACK_LINE(460)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	if ((tmp)){
		HX_STACK_LINE(461)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->get_parent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(461)
		tmp1->invalidate((int)1,null());
	}
	HX_STACK_LINE(463)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(463)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_verticalAlign,return )

bool DisplayObject_obj::get_useHandCursor( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_useHandCursor",0x70fb05a9,"haxe.ui.toolkit.core.DisplayObject.get_useHandCursor","haxe/ui/toolkit/core/DisplayObject.hx",466,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(467)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(467)
	bool tmp1 = tmp->useHandCursor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(467)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_useHandCursor,return )

bool DisplayObject_obj::set_useHandCursor( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_useHandCursor",0x9468ddb5,"haxe.ui.toolkit.core.DisplayObject.set_useHandCursor","haxe/ui/toolkit/core/DisplayObject.hx",470,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(471)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	tmp->useHandCursor = value;
	HX_STACK_LINE(472)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(472)
	tmp1->buttonMode = value;
	HX_STACK_LINE(473)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(473)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_useHandCursor,return )

bool DisplayObject_obj::hitTest( Float xpos,Float ypos){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","hitTest",0x5449fc4b,"haxe.ui.toolkit.core.DisplayObject.hitTest","haxe/ui/toolkit/core/DisplayObject.hx",476,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xpos,"xpos")
	HX_STACK_ARG(ypos,"ypos")
	HX_STACK_LINE(477)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(478)
	Float tmp = this->get_stageX();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(478)
	Float sx = tmp;		HX_STACK_VAR(sx,"sx");
	HX_STACK_LINE(479)
	Float tmp1 = this->get_stageY();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	Float sy = tmp1;		HX_STACK_VAR(sy,"sy");
	HX_STACK_LINE(480)
	Float tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::get_scaleFactor();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	hx::DivEq(xpos,tmp2);
	HX_STACK_LINE(481)
	Float tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::get_scaleFactor();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(481)
	hx::DivEq(ypos,tmp3);
	HX_STACK_LINE(482)
	bool tmp4 = (xpos > sx);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(482)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(482)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(482)
	if ((tmp5)){
		HX_STACK_LINE(482)
		Float tmp7 = xpos;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(482)
		Float tmp8 = sx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(482)
		Float tmp9 = this->get_width();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(482)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(482)
		Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(482)
		Float tmp12 = (tmp8 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(482)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(482)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(482)
		tmp6 = (tmp7 < tmp14);
	}
	else{
		HX_STACK_LINE(482)
		tmp6 = false;
	}
	HX_STACK_LINE(482)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(482)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(482)
	if ((tmp7)){
		HX_STACK_LINE(482)
		tmp8 = (ypos > sy);
	}
	else{
		HX_STACK_LINE(482)
		tmp8 = false;
	}
	HX_STACK_LINE(482)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(482)
	if ((tmp8)){
		HX_STACK_LINE(482)
		Float tmp10 = ypos;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(482)
		Float tmp11 = sy;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(482)
		Float tmp12 = this->get_height();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(482)
		Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(482)
		Float tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(482)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(482)
		tmp9 = (tmp10 < tmp15);
	}
	else{
		HX_STACK_LINE(482)
		tmp9 = false;
	}
	HX_STACK_LINE(482)
	if ((tmp9)){
		HX_STACK_LINE(483)
		b = true;
	}
	HX_STACK_LINE(486)
	bool tmp10 = b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(486)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,hitTest,return )

Void DisplayObject_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","invalidate",0xf0e04535,"haxe.ui.toolkit.core.DisplayObject.invalidate","haxe/ui/toolkit/core/DisplayObject.hx",489,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(490)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(490)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(490)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(490)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(490)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(490)
		if ((tmp3)){
			HX_STACK_LINE(490)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(490)
			tmp4 = true;
		}
		HX_STACK_LINE(490)
		if ((tmp4)){
			HX_STACK_LINE(491)
			return null();
		}
		HX_STACK_LINE(496)
		this->_invalidating = true;
		HX_STACK_LINE(497)
		int tmp5 = (int(type) & int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		bool tmp6 = (tmp5 == (int)16);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		if ((tmp7)){
			HX_STACK_LINE(498)
			int tmp9 = (int(type) & int((int)4096));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(498)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(498)
			tmp8 = (tmp10 == (int)4096);
		}
		else{
			HX_STACK_LINE(497)
			tmp8 = true;
		}
		HX_STACK_LINE(497)
		if ((tmp8)){
			HX_STACK_LINE(499)
			this->paint();
		}
		HX_STACK_LINE(501)
		this->_invalidating = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,invalidate,(void))

Void DisplayObject_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","dispose",0x2d171ca5,"haxe.ui.toolkit.core.DisplayObject.dispose","haxe/ui/toolkit/core/DisplayObject.hx",506,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(506)
		this->removeAllEventListeners();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,dispose,(void))

Void DisplayObject_obj::interceptEvent( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","interceptEvent",0xa5a2b732,"haxe.ui.toolkit.core.DisplayObject.interceptEvent","haxe/ui/toolkit/core/DisplayObject.hx",509,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(510)
		::String tmp = event->get_type();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		::String tmp1 = (HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		::haxe::ui::toolkit::events::UIEvent tmp2 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp1,null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(510)
		::haxe::ui::toolkit::events::UIEvent uiEvent = tmp2;		HX_STACK_VAR(uiEvent,"uiEvent");
		HX_STACK_LINE(511)
		::openfl::_legacy::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(511)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::_legacy::events::MouseEvent >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		if ((tmp4)){
			HX_STACK_LINE(512)
			::openfl::_legacy::events::MouseEvent mouseEvent = ((::openfl::_legacy::events::MouseEvent)(event));		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(513)
			uiEvent->stageX = mouseEvent->stageX;
			HX_STACK_LINE(514)
			uiEvent->stageY = mouseEvent->stageY;
		}
		HX_STACK_LINE(516)
		::haxe::ui::toolkit::events::UIEvent tmp5 = uiEvent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(516)
		this->dispatchEvent(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,interceptEvent,(void))

Void DisplayObject_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","addEventListener",0xd924bf07,"haxe.ui.toolkit.core.DisplayObject.addEventListener","haxe/ui/toolkit/core/DisplayObject.hx",523,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(524)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(524)
		bool tmp1 = ::StringTools_obj::startsWith(tmp,HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(524)
		if ((tmp1)){
			HX_STACK_LINE(525)
			int tmp2 = HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08").length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(525)
			int tmp3 = type.length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(525)
			::String tmp4 = type.substr(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(525)
			::String interceptEventType = tmp4;		HX_STACK_VAR(interceptEventType,"interceptEventType");
			HX_STACK_LINE(526)
			::haxe::ds::StringMap tmp5 = this->_interceptMap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(526)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(526)
			if ((tmp6)){
				HX_STACK_LINE(527)
				::haxe::ds::StringMap tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(527)
				{
					HX_STACK_LINE(527)
					::haxe::ds::StringMap tmp8 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(527)
					::haxe::ds::StringMap tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(527)
					tmp7 = tmp9;
				}
				HX_STACK_LINE(527)
				this->_interceptMap = tmp7;
			}
			HX_STACK_LINE(529)
			::haxe::ds::StringMap tmp7 = this->_interceptMap;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(529)
			::String tmp8 = interceptEventType;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(529)
			bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(529)
			bool tmp10 = (tmp9 == false);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(529)
			if ((tmp10)){
				HX_STACK_LINE(530)
				::haxe::ds::StringMap tmp11 = this->_interceptMap;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(530)
				::String tmp12 = interceptEventType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(530)
				tmp11->set(tmp12,(int)0);
			}
			else{
				HX_STACK_LINE(532)
				::haxe::ds::StringMap tmp11 = this->_interceptMap;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(532)
				::String tmp12 = interceptEventType;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(532)
				Dynamic tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(532)
				Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(532)
				int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(532)
				int value = tmp15;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(532)
				::haxe::ds::StringMap tmp16 = this->_interceptMap;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(532)
				::String tmp17 = interceptEventType;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(532)
				int tmp18 = value;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(532)
				tmp16->set(tmp17,tmp18);
			}
			HX_STACK_LINE(534)
			::haxe::ds::StringMap tmp11 = this->_interceptMap;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(534)
			::String tmp12 = interceptEventType;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(534)
			Dynamic tmp13 = tmp11->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(534)
			Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(534)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(534)
			if ((tmp15)){
				HX_STACK_LINE(535)
				::String tmp16 = interceptEventType;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(535)
				Dynamic tmp17 = this->interceptEvent_dyn();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(535)
				bool tmp18 = useCapture;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(535)
				int tmp19 = priority;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(535)
				bool tmp20 = useWeakReference;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(535)
				this->addEventListener(tmp16,tmp17,tmp18,tmp19,tmp20);
			}
		}
		HX_STACK_LINE(539)
		::haxe::ds::StringMap tmp2 = this->_eventListeners;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(539)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(539)
		if ((tmp3)){
			HX_STACK_LINE(540)
			::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(540)
			this->_eventListeners = tmp4;
		}
		HX_STACK_LINE(543)
		::haxe::ds::StringMap tmp4 = this->_eventListeners;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(543)
		::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(543)
		cpp::ArrayBase list = tmp4->get(tmp5);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(544)
		bool tmp6 = (list == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(544)
		if ((tmp6)){
			HX_STACK_LINE(545)
			list = Dynamic( Array_obj<Dynamic>::__new() );
			HX_STACK_LINE(546)
			::haxe::ds::StringMap tmp7 = this->_eventListeners;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(546)
			::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(546)
			tmp7->set(tmp8,list);
		}
		HX_STACK_LINE(548)
		Dynamic tmp7 = listener;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(548)
		list->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
		HX_STACK_LINE(550)
		::openfl::_legacy::display::Sprite tmp8 = this->_sprite;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(550)
		::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(550)
		Dynamic tmp10 = listener;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(550)
		bool tmp11 = useCapture;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(550)
		int tmp12 = priority;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(550)
		bool tmp13 = useWeakReference;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(550)
		tmp8->addEventListener(tmp9,tmp10,tmp11,tmp12,tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(DisplayObject_obj,addEventListener,(void))

bool DisplayObject_obj::dispatchEvent( ::openfl::_legacy::events::Event event){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","dispatchEvent",0xb98d2b86,"haxe.ui.toolkit.core.DisplayObject.dispatchEvent","haxe/ui/toolkit/core/DisplayObject.hx",553,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(554)
	::openfl::_legacy::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(554)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::events::UIEvent >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(554)
	if ((tmp1)){
		HX_STACK_LINE(555)
		::haxe::ui::toolkit::events::UIEvent tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(555)
		tmp2 = hx::TCast< ::haxe::ui::toolkit::events::UIEvent >::cast(event);
		HX_STACK_LINE(555)
		tmp2->displayObject = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(557)
	::openfl::_legacy::display::Sprite tmp2 = this->_sprite;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(557)
	::openfl::_legacy::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(557)
	bool tmp4 = tmp2->dispatchEvent(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(557)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,dispatchEvent,return )

bool DisplayObject_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","hasEventListener",0xf4aae22e,"haxe.ui.toolkit.core.DisplayObject.hasEventListener","haxe/ui/toolkit/core/DisplayObject.hx",560,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(561)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(561)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(561)
	bool tmp2 = tmp->hasEventListener(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(561)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hasEventListener,return )

Void DisplayObject_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","removeEventListener",0x3d3d14d0,"haxe.ui.toolkit.core.DisplayObject.removeEventListener","haxe/ui/toolkit/core/DisplayObject.hx",564,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
		HX_STACK_LINE(565)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(565)
		bool tmp1 = ::StringTools_obj::startsWith(tmp,HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(565)
		if ((tmp1)){
			HX_STACK_LINE(566)
			int tmp2 = HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08").length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(566)
			int tmp3 = type.length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(566)
			::String tmp4 = type.substr(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(566)
			::String interceptEventType = tmp4;		HX_STACK_VAR(interceptEventType,"interceptEventType");
			HX_STACK_LINE(567)
			::haxe::ds::StringMap tmp5 = this->_interceptMap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(567)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(567)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(567)
			if ((tmp6)){
				HX_STACK_LINE(567)
				::haxe::ds::StringMap tmp8 = this->_interceptMap;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(567)
				::haxe::ds::StringMap tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(567)
				::String tmp10 = interceptEventType;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(567)
				::String tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(567)
				tmp7 = tmp9->exists(tmp11);
			}
			else{
				HX_STACK_LINE(567)
				tmp7 = false;
			}
			HX_STACK_LINE(567)
			if ((tmp7)){
				HX_STACK_LINE(568)
				{
					HX_STACK_LINE(568)
					::haxe::ds::StringMap tmp8 = this->_interceptMap;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(568)
					::String tmp9 = interceptEventType;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(568)
					Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(568)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(568)
					int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(568)
					int value = tmp12;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(568)
					::haxe::ds::StringMap tmp13 = this->_interceptMap;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(568)
					::String tmp14 = interceptEventType;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(568)
					int tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(568)
					tmp13->set(tmp14,tmp15);
				}
				HX_STACK_LINE(569)
				::haxe::ds::StringMap tmp8 = this->_interceptMap;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(569)
				::String tmp9 = interceptEventType;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(569)
				Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(569)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(569)
				bool tmp12 = (tmp11 <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(569)
				if ((tmp12)){
					HX_STACK_LINE(570)
					::haxe::ds::StringMap tmp13 = this->_interceptMap;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(570)
					::String tmp14 = interceptEventType;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(570)
					tmp13->remove(tmp14);
					HX_STACK_LINE(571)
					::String tmp15 = interceptEventType;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(571)
					Dynamic tmp16 = this->interceptEvent_dyn();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(571)
					bool tmp17 = useCapture;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(571)
					this->removeEventListener(tmp15,tmp16,tmp17);
				}
			}
		}
		HX_STACK_LINE(576)
		::haxe::ds::StringMap tmp2 = this->_eventListeners;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(576)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(576)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(576)
		if ((tmp3)){
			HX_STACK_LINE(576)
			::haxe::ds::StringMap tmp5 = this->_eventListeners;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(576)
			::haxe::ds::StringMap tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(576)
			::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(576)
			::String tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(576)
			tmp4 = tmp6->exists(tmp8);
		}
		else{
			HX_STACK_LINE(576)
			tmp4 = false;
		}
		HX_STACK_LINE(576)
		if ((tmp4)){
			HX_STACK_LINE(577)
			::haxe::ds::StringMap tmp5 = this->_eventListeners;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(577)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(577)
			cpp::ArrayBase list = tmp5->get(tmp6);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(578)
			bool tmp7 = (list != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(578)
			if ((tmp7)){
				HX_STACK_LINE(579)
				while((true)){
					HX_STACK_LINE(579)
					bool tmp8 = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(579)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(579)
					if ((tmp9)){
						HX_STACK_LINE(579)
						break;
					}
					HX_STACK_LINE(580)
					{
						HX_STACK_LINE(580)
						Dynamic tmp10 = list->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(580)
						Dynamic fn = tmp10;		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(580)
						Dynamic tmp11 = fn;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(580)
						list->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp11);
					}
				}
			}
		}
		HX_STACK_LINE(584)
		::openfl::_legacy::display::Sprite tmp5 = this->_sprite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(584)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(584)
		Dynamic tmp7 = listener;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(584)
		bool tmp8 = useCapture;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(584)
		tmp5->removeEventListener(tmp6,tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,removeEventListener,(void))

bool DisplayObject_obj::willTrigger( ::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","willTrigger",0xedf00b4c,"haxe.ui.toolkit.core.DisplayObject.willTrigger","haxe/ui/toolkit/core/DisplayObject.hx",587,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(588)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(588)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(588)
	bool tmp2 = tmp->willTrigger(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(588)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,willTrigger,return )

::openfl::_legacy::display::Graphics DisplayObject_obj::get_graphics( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","get_graphics",0xabe5bb0e,"haxe.ui.toolkit.core.DisplayObject.get_graphics","haxe/ui/toolkit/core/DisplayObject.hx",596,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(597)
	::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(597)
	::openfl::_legacy::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(597)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_graphics,return )

Void DisplayObject_obj::paint( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","paint",0x95fc2624,"haxe.ui.toolkit.core.DisplayObject.paint","haxe/ui/toolkit/core/DisplayObject.hx",600,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(601)
		::openfl::_legacy::display::Sprite tmp = this->_sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(601)
		::openfl::_legacy::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(601)
		tmp1->clear();
		HX_STACK_LINE(603)
		::openfl::_legacy::display::Sprite tmp2 = this->_sprite;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		::openfl::_legacy::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(603)
		tmp3->beginFill((int)13421772,null());
		HX_STACK_LINE(604)
		::openfl::_legacy::display::Sprite tmp4 = this->_sprite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(604)
		::openfl::_legacy::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(604)
		tmp5->lineStyle((int)1,(int)8947848,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(605)
		::openfl::_legacy::display::Sprite tmp6 = this->_sprite;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(605)
		::openfl::_legacy::display::Graphics tmp7 = tmp6->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(605)
		Float tmp8 = this->_width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(605)
		Float tmp9 = this->_height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(605)
		tmp7->drawRect((int)0,(int)0,tmp8,tmp9);
		HX_STACK_LINE(606)
		::openfl::_legacy::display::Sprite tmp10 = this->_sprite;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(606)
		::openfl::_legacy::display::Graphics tmp11 = tmp10->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(606)
		tmp11->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,paint,(void))

Void DisplayObject_obj::removeEventListenerType( ::String eventType){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","removeEventListenerType",0x1e91dbaa,"haxe.ui.toolkit.core.DisplayObject.removeEventListenerType","haxe/ui/toolkit/core/DisplayObject.hx",612,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eventType,"eventType")
		HX_STACK_LINE(613)
		::haxe::ds::StringMap tmp = this->_eventListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(613)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(613)
		if ((tmp1)){
			HX_STACK_LINE(614)
			::haxe::ds::StringMap tmp2 = this->_eventListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			::String tmp3 = eventType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(614)
			cpp::ArrayBase list = tmp2->get(tmp3);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(615)
			bool tmp4 = (list != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(615)
			if ((tmp4)){
				HX_STACK_LINE(616)
				while((true)){
					HX_STACK_LINE(616)
					bool tmp5 = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(616)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(616)
					if ((tmp6)){
						HX_STACK_LINE(616)
						break;
					}
					HX_STACK_LINE(617)
					::String tmp7 = eventType;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(617)
					Dynamic tmp8 = list->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(617)
					this->removeEventListener(tmp7,tmp8,null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,removeEventListenerType,(void))

Void DisplayObject_obj::removeAllEventListeners( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","removeAllEventListeners",0xbf172e28,"haxe.ui.toolkit.core.DisplayObject.removeAllEventListeners","haxe/ui/toolkit/core/DisplayObject.hx",623,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(624)
		::haxe::ds::StringMap tmp = this->_eventListeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(624)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(624)
		if ((tmp1)){
			HX_STACK_LINE(625)
			::haxe::ds::StringMap tmp2 = this->_eventListeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(625)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(625)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String eventType = __it->next();
				{
					HX_STACK_LINE(626)
					::haxe::ds::StringMap tmp4 = this->_eventListeners;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(626)
					::String tmp5 = eventType;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(626)
					cpp::ArrayBase list = tmp4->get(tmp5);		HX_STACK_VAR(list,"list");
					HX_STACK_LINE(627)
					while((true)){
						HX_STACK_LINE(627)
						bool tmp6 = (list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(627)
						bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(627)
						if ((tmp7)){
							HX_STACK_LINE(627)
							break;
						}
						HX_STACK_LINE(628)
						::String tmp8 = eventType;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(628)
						Dynamic tmp9 = list->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(628)
						this->removeEventListener(tmp8,tmp9,null());
						HX_STACK_LINE(629)
						::haxe::ds::StringMap tmp10 = this->_eventListeners;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(629)
						::String tmp11 = eventType;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(629)
						list = tmp10->get(tmp11);
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,removeAllEventListeners,(void))

int DisplayObject_obj::getListenerCount( ::String type,Dynamic listener){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","getListenerCount",0x6365ec7f,"haxe.ui.toolkit.core.DisplayObject.getListenerCount","haxe/ui/toolkit/core/DisplayObject.hx",635,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(639)
	int count = (int)0;		HX_STACK_VAR(count,"count");
	HX_STACK_LINE(640)
	::haxe::ds::StringMap tmp = this->_eventListeners;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(640)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(640)
	if ((tmp2)){
		HX_STACK_LINE(641)
		::haxe::ds::StringMap tmp3 = this->_eventListeners;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(641)
		::String tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(641)
		cpp::ArrayBase list = tmp3->get(tmp4);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(642)
		{
			HX_STACK_LINE(642)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(642)
			while((true)){
				HX_STACK_LINE(642)
				bool tmp5 = (_g < list->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(642)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(642)
				if ((tmp6)){
					HX_STACK_LINE(642)
					break;
				}
				HX_STACK_LINE(642)
				Dynamic tmp7 = list->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(642)
				Dynamic l = tmp7;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(642)
				++(_g);
				HX_STACK_LINE(643)
				bool tmp8 = (l == listener);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(643)
				if ((tmp8)){
					HX_STACK_LINE(644)
					(count)++;
				}
			}
		}
	}
	HX_STACK_LINE(648)
	int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(648)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,getListenerCount,return )

bool DisplayObject_obj::removeEventFunction( cpp::ArrayBase arr,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","removeEventFunction",0x195dbf74,"haxe.ui.toolkit.core.DisplayObject.removeEventFunction","haxe/ui/toolkit/core/DisplayObject.hx",652,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(655)
	Dynamic tmp = fn;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(655)
	bool tmp1 = arr->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(655)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,removeEventFunction,return )

Void DisplayObject_obj::_handleEvent( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","_handleEvent",0x727c2f8d,"haxe.ui.toolkit.core.DisplayObject._handleEvent","haxe/ui/toolkit/core/DisplayObject.hx",679,0xfab33e8a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(680)
		::String tmp = event->get_type();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(680)
		::String tmp1 = ::StringTools_obj::replace(tmp,HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(680)
		::String tmp2 = ::haxe::ui::toolkit::util::StringUtil_obj::capitalizeFirstLetter(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(680)
		::String tmp3 = (HX_HCSTRING("on","\x1f","\x61","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(680)
		::String fnName = tmp3;		HX_STACK_VAR(fnName,"fnName");
		HX_STACK_LINE(681)
		::String tmp4 = fnName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(681)
		Dynamic tmp5 = ::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(681)
		Dynamic fn = tmp5;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(682)
		bool tmp6 = (fn != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(682)
		if ((tmp6)){
			HX_STACK_LINE(683)
			::String tmp7 = event->get_type();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(683)
			::String tmp8 = (HX_HCSTRING("haxeui_","\x25","\x8b","\x87","\x08") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(683)
			::haxe::ui::toolkit::core::Component tmp9 = event->get_component();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(683)
			::haxe::ui::toolkit::events::UIEvent tmp10 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp8,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(683)
			::haxe::ui::toolkit::events::UIEvent fnEvent = tmp10;		HX_STACK_VAR(fnEvent,"fnEvent");
			HX_STACK_LINE(684)
			fnEvent->data = event->data;
			HX_STACK_LINE(685)
			fnEvent->displayObject = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(686)
			::haxe::ui::toolkit::events::UIEvent tmp11 = fnEvent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(686)
			fn(tmp11).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,_handleEvent,(void))

Dynamic DisplayObject_obj::set_onInit( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onInit",0x46007dc6,"haxe.ui.toolkit.core.DisplayObject.set_onInit","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onInit = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_init","\xb5","\xbc","\x37","\x9e");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(19)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onInit,return )

Dynamic DisplayObject_obj::set_onResize( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onResize",0x969f362a,"haxe.ui.toolkit.core.DisplayObject.set_onResize","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onResize = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_resize","\xd9","\x4e","\x57","\xda");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onResize,return )

Dynamic DisplayObject_obj::set_onReady( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onReady",0x230fbced,"haxe.ui.toolkit.core.DisplayObject.set_onReady","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onReady = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_ready","\x1e","\x8f","\x2f","\xfb");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onReady,return )

Dynamic DisplayObject_obj::set_onClick( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onClick",0x84b398d2,"haxe.ui.toolkit.core.DisplayObject.set_onClick","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onClick = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onClick,return )

Dynamic DisplayObject_obj::set_onMouseDown( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseDown",0x2721dab1,"haxe.ui.toolkit.core.DisplayObject.set_onMouseDown","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseDown = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_mouseDown","\x62","\x19","\x35","\x57");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseDown,return )

Dynamic DisplayObject_obj::set_onMouseUp( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseUp",0x91afc6ea,"haxe.ui.toolkit.core.DisplayObject.set_onMouseUp","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseUp = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_mouseUp","\x5b","\x47","\x0d","\x8f");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseUp,return )

Dynamic DisplayObject_obj::set_onMouseOver( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseOver",0x2e6c73a3,"haxe.ui.toolkit.core.DisplayObject.set_onMouseOver","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseOver = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_mouseOver","\x54","\xb2","\x7f","\x5e");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseOver,return )

Dynamic DisplayObject_obj::set_onMouseOut( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseOut",0xe819bd1f,"haxe.ui.toolkit.core.DisplayObject.set_onMouseOut","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseOut = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_mouseOut","\x8e","\x9f","\x8c","\x9c");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseOut,return )

Dynamic DisplayObject_obj::set_onMouseMove( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMouseMove",0x2d14c560,"haxe.ui.toolkit.core.DisplayObject.set_onMouseMove","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMouseMove = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_mouseMove","\x11","\x04","\x28","\x5d");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMouseMove,return )

Dynamic DisplayObject_obj::set_onDoubleClick( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onDoubleClick",0x3b1a2381,"haxe.ui.toolkit.core.DisplayObject.set_onDoubleClick","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onDoubleClick = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_doubleClick","\x72","\x30","\x7f","\x05");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onDoubleClick,return )

Dynamic DisplayObject_obj::set_onRollOver( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRollOver",0x56a48127,"haxe.ui.toolkit.core.DisplayObject.set_onRollOver","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRollOver = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_rollOver","\x96","\x63","\x17","\x0b");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRollOver,return )

Dynamic DisplayObject_obj::set_onRollOut( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRollOut",0x2e4ecc1b,"haxe.ui.toolkit.core.DisplayObject.set_onRollOut","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRollOut = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_rollOut","\x8c","\x4c","\xac","\x2b");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRollOut,return )

Dynamic DisplayObject_obj::set_onChange( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onChange",0x45966da6,"haxe.ui.toolkit.core.DisplayObject.set_onChange","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onChange = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onChange,return )

Dynamic DisplayObject_obj::set_onAdded( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onAdded",0x5898f14a,"haxe.ui.toolkit.core.DisplayObject.set_onAdded","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onAdded = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_added","\x7b","\xc3","\xb8","\x30");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onAdded,return )

Dynamic DisplayObject_obj::set_onAddedToStage( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onAddedToStage",0x8e4d0b19,"haxe.ui.toolkit.core.DisplayObject.set_onAddedToStage","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onAddedToStage = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_addedToStage","\x08","\x51","\x53","\xdc");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onAddedToStage,return )

Dynamic DisplayObject_obj::set_onRemoved( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRemoved",0xc43cf2aa,"haxe.ui.toolkit.core.DisplayObject.set_onRemoved","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRemoved = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_removed","\x1b","\x73","\x9a","\xc1");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRemoved,return )

Dynamic DisplayObject_obj::set_onRemovedFromStage( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRemovedFromStage",0xc56f9cea,"haxe.ui.toolkit.core.DisplayObject.set_onRemovedFromStage","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRemovedFromStage = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_removedFromStage","\x59","\x06","\x41","\xd1");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRemovedFromStage,return )

Dynamic DisplayObject_obj::set_onActivate( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onActivate",0x29a7f169,"haxe.ui.toolkit.core.DisplayObject.set_onActivate","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onActivate = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_activate","\xd8","\xd3","\x1a","\xde");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onActivate,return )

Dynamic DisplayObject_obj::set_onDeactivate( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onDeactivate",0x56e68b6a,"haxe.ui.toolkit.core.DisplayObject.set_onDeactivate","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onDeactivate = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_deactivate","\x99","\x27","\xaa","\x37");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onDeactivate,return )

Dynamic DisplayObject_obj::set_onScroll( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onScroll",0xd588b443,"haxe.ui.toolkit.core.DisplayObject.set_onScroll","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onScroll = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_scroll","\xf2","\xcc","\x40","\x19");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onScroll,return )

Dynamic DisplayObject_obj::set_onScrollStart( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onScrollStart",0x3b8cdd1f,"haxe.ui.toolkit.core.DisplayObject.set_onScrollStart","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onScrollStart = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onScrollStart,return )

Dynamic DisplayObject_obj::set_onScrollStop( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onScrollStop",0x2500ade5,"haxe.ui.toolkit.core.DisplayObject.set_onScrollStop","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onScrollStop = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onScrollStop,return )

Dynamic DisplayObject_obj::set_onGlyphClick( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onGlyphClick",0x21990e32,"haxe.ui.toolkit.core.DisplayObject.set_onGlyphClick","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onGlyphClick = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_glyphClick","\x61","\xaa","\x5c","\x02");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onGlyphClick,return )

Dynamic DisplayObject_obj::set_onMenuSelect( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMenuSelect",0x679c8531,"haxe.ui.toolkit.core.DisplayObject.set_onMenuSelect","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMenuSelect = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_menuSelect","\x60","\x21","\x60","\x48");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMenuSelect,return )

Dynamic DisplayObject_obj::set_onMenuOpen( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onMenuOpen",0x941f06bf,"haxe.ui.toolkit.core.DisplayObject.set_onMenuOpen","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onMenuOpen = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_menuOpen","\x2e","\xe9","\x91","\x48");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onMenuOpen,return )

Dynamic DisplayObject_obj::set_onRefresh( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","set_onRefresh",0xbe5dace5,"haxe.ui.toolkit.core.DisplayObject.set_onRefresh","haxe/ui/toolkit/core/DisplayObject.hx",19,0xfab33e8a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(19)
	this->onRefresh = value;
	HX_STACK_LINE(19)
	::String tmp = HX_HCSTRING("haxeui_refresh","\x56","\x2d","\xbb","\xbb");		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Dynamic tmp1 = this->_handleEvent_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->addEventListener(tmp,tmp1,null(),null(),null());
	HX_STACK_LINE(20)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_onRefresh,return )

::haxe::ui::toolkit::core::DisplayObject DisplayObject_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","clone",0x211081e3,"haxe.ui.toolkit.core.DisplayObject.clone","src/haxe/ui/toolkit/core/DisplayObject.hx",1,0x298891df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObject tmp = this->self();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObject c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::String tmp1 = this->get_id();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_id(tmp1);
	HX_STACK_LINE(4)
	Float tmp2 = this->get_x();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_x(tmp2);
	HX_STACK_LINE(5)
	Float tmp3 = this->get_y();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_y(tmp3);
	HX_STACK_LINE(6)
	Float tmp4 = this->get_z();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	c->set_z(tmp4);
	HX_STACK_LINE(7)
	Float tmp5 = this->get_rotationX();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(7)
	c->set_rotationX(tmp5);
	HX_STACK_LINE(8)
	Float tmp6 = this->get_rotationY();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(8)
	c->set_rotationY(tmp6);
	HX_STACK_LINE(9)
	Float tmp7 = this->get_rotationZ();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(9)
	c->set_rotationZ(tmp7);
	HX_STACK_LINE(10)
	Float tmp8 = this->get_width();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(10)
	c->set_width(tmp8);
	HX_STACK_LINE(11)
	Float tmp9 = this->get_height();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(11)
	c->set_height(tmp9);
	HX_STACK_LINE(12)
	Float tmp10 = this->get_percentWidth();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(12)
	c->set_percentWidth(tmp10);
	HX_STACK_LINE(13)
	Float tmp11 = this->get_percentHeight();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(13)
	c->set_percentHeight(tmp11);
	HX_STACK_LINE(14)
	Float tmp12 = this->get_minWidth();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(14)
	c->set_minWidth(tmp12);
	HX_STACK_LINE(15)
	Float tmp13 = this->get_minHeight();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(15)
	c->set_minHeight(tmp13);
	HX_STACK_LINE(16)
	Float tmp14 = this->get_alpha();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(16)
	c->set_alpha(tmp14);
	HX_STACK_LINE(17)
	bool tmp15 = this->get_includeInLayout();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(17)
	c->set_includeInLayout(tmp15);
	HX_STACK_LINE(18)
	::String tmp16 = this->get_horizontalAlign();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(18)
	c->set_horizontalAlign(tmp16);
	HX_STACK_LINE(19)
	::String tmp17 = this->get_verticalAlign();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(19)
	c->set_verticalAlign(tmp17);
	HX_STACK_LINE(20)
	bool tmp18 = this->get_useHandCursor();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(20)
	c->set_useHandCursor(tmp18);
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::core::DisplayObject tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(21)
	return tmp19;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,clone,return )

::haxe::ui::toolkit::core::DisplayObject DisplayObject_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObject","self",0xc81ecfc6,"haxe.ui.toolkit.core.DisplayObject.self","src/haxe/ui/toolkit/core/DisplayObject.hx",1,0x298891df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObject tmp = ::haxe::ui::toolkit::core::DisplayObject_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,self,return )


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_root,"_root");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_z,"_z");
	HX_MARK_MEMBER_NAME(_rotationX,"_rotationX");
	HX_MARK_MEMBER_NAME(_rotationY,"_rotationY");
	HX_MARK_MEMBER_NAME(_rotationZ,"_rotationZ");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_MARK_MEMBER_NAME(_minWidth,"_minWidth");
	HX_MARK_MEMBER_NAME(_minHeight,"_minHeight");
	HX_MARK_MEMBER_NAME(_ready,"_ready");
	HX_MARK_MEMBER_NAME(_invalidating,"_invalidating");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(_halign,"_halign");
	HX_MARK_MEMBER_NAME(_valign,"_valign");
	HX_MARK_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_eventListeners,"_eventListeners");
	HX_MARK_MEMBER_NAME(ready,"ready");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(_interceptMap,"_interceptMap");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(onInit,"onInit");
	HX_MARK_MEMBER_NAME(onResize,"onResize");
	HX_MARK_MEMBER_NAME(onReady,"onReady");
	HX_MARK_MEMBER_NAME(onClick,"onClick");
	HX_MARK_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_MARK_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_MARK_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_MARK_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_MARK_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_MARK_MEMBER_NAME(onDoubleClick,"onDoubleClick");
	HX_MARK_MEMBER_NAME(onRollOver,"onRollOver");
	HX_MARK_MEMBER_NAME(onRollOut,"onRollOut");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(onAdded,"onAdded");
	HX_MARK_MEMBER_NAME(onAddedToStage,"onAddedToStage");
	HX_MARK_MEMBER_NAME(onRemoved,"onRemoved");
	HX_MARK_MEMBER_NAME(onRemovedFromStage,"onRemovedFromStage");
	HX_MARK_MEMBER_NAME(onActivate,"onActivate");
	HX_MARK_MEMBER_NAME(onDeactivate,"onDeactivate");
	HX_MARK_MEMBER_NAME(onScroll,"onScroll");
	HX_MARK_MEMBER_NAME(onScrollStart,"onScrollStart");
	HX_MARK_MEMBER_NAME(onScrollStop,"onScrollStop");
	HX_MARK_MEMBER_NAME(onGlyphClick,"onGlyphClick");
	HX_MARK_MEMBER_NAME(onMenuSelect,"onMenuSelect");
	HX_MARK_MEMBER_NAME(onMenuOpen,"onMenuOpen");
	HX_MARK_MEMBER_NAME(onRefresh,"onRefresh");
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_root,"_root");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_z,"_z");
	HX_VISIT_MEMBER_NAME(_rotationX,"_rotationX");
	HX_VISIT_MEMBER_NAME(_rotationY,"_rotationY");
	HX_VISIT_MEMBER_NAME(_rotationZ,"_rotationZ");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_VISIT_MEMBER_NAME(_minWidth,"_minWidth");
	HX_VISIT_MEMBER_NAME(_minHeight,"_minHeight");
	HX_VISIT_MEMBER_NAME(_ready,"_ready");
	HX_VISIT_MEMBER_NAME(_invalidating,"_invalidating");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(_halign,"_halign");
	HX_VISIT_MEMBER_NAME(_valign,"_valign");
	HX_VISIT_MEMBER_NAME(_includeInLayout,"_includeInLayout");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_eventListeners,"_eventListeners");
	HX_VISIT_MEMBER_NAME(ready,"ready");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(_interceptMap,"_interceptMap");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(onInit,"onInit");
	HX_VISIT_MEMBER_NAME(onResize,"onResize");
	HX_VISIT_MEMBER_NAME(onReady,"onReady");
	HX_VISIT_MEMBER_NAME(onClick,"onClick");
	HX_VISIT_MEMBER_NAME(onMouseDown,"onMouseDown");
	HX_VISIT_MEMBER_NAME(onMouseUp,"onMouseUp");
	HX_VISIT_MEMBER_NAME(onMouseOver,"onMouseOver");
	HX_VISIT_MEMBER_NAME(onMouseOut,"onMouseOut");
	HX_VISIT_MEMBER_NAME(onMouseMove,"onMouseMove");
	HX_VISIT_MEMBER_NAME(onDoubleClick,"onDoubleClick");
	HX_VISIT_MEMBER_NAME(onRollOver,"onRollOver");
	HX_VISIT_MEMBER_NAME(onRollOut,"onRollOut");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(onAdded,"onAdded");
	HX_VISIT_MEMBER_NAME(onAddedToStage,"onAddedToStage");
	HX_VISIT_MEMBER_NAME(onRemoved,"onRemoved");
	HX_VISIT_MEMBER_NAME(onRemovedFromStage,"onRemovedFromStage");
	HX_VISIT_MEMBER_NAME(onActivate,"onActivate");
	HX_VISIT_MEMBER_NAME(onDeactivate,"onDeactivate");
	HX_VISIT_MEMBER_NAME(onScroll,"onScroll");
	HX_VISIT_MEMBER_NAME(onScrollStart,"onScrollStart");
	HX_VISIT_MEMBER_NAME(onScrollStop,"onScrollStop");
	HX_VISIT_MEMBER_NAME(onGlyphClick,"onGlyphClick");
	HX_VISIT_MEMBER_NAME(onMenuSelect,"onMenuSelect");
	HX_VISIT_MEMBER_NAME(onMenuOpen,"onMenuOpen");
	HX_VISIT_MEMBER_NAME(onRefresh,"onRefresh");
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return get_z(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_z") ) { return _z; }
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return get_id(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == hx::paccAlways) return get_root(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { return _root; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"ready") ) { return inCallProp == hx::paccAlways ? get_ready() : ready; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return get_z_dyn(); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return set_z_dyn(); }
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_ready") ) { return _ready; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return get_parent(); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"sprite") ) { return inCallProp == hx::paccAlways ? get_sprite() : sprite; }
		if (HX_FIELD_EQ(inName,"stageX") ) { return inCallProp == hx::paccAlways ? get_stageX() : stageX; }
		if (HX_FIELD_EQ(inName,"stageY") ) { return inCallProp == hx::paccAlways ? get_stageY() : stageY; }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"onInit") ) { return onInit; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"_halign") ) { return _halign; }
		if (HX_FIELD_EQ(inName,"_valign") ) { return _valign; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"onReady") ) { return onReady; }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick; }
		if (HX_FIELD_EQ(inName,"onAdded") ) { return onAdded; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == hx::paccAlways) return get_minWidth(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		if (HX_FIELD_EQ(inName,"set_root") ) { return set_root_dyn(); }
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp == hx::paccAlways ? get_graphics() : graphics; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize; }
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange; }
		if (HX_FIELD_EQ(inName,"onScroll") ) { return onScroll; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_minWidth") ) { return _minWidth; }
		if (HX_FIELD_EQ(inName,"rotationX") ) { if (inCallProp == hx::paccAlways) return get_rotationX(); }
		if (HX_FIELD_EQ(inName,"rotationY") ) { if (inCallProp == hx::paccAlways) return get_rotationY(); }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { if (inCallProp == hx::paccAlways) return get_rotationZ(); }
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == hx::paccAlways) return get_minHeight(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ready") ) { return get_ready_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp; }
		if (HX_FIELD_EQ(inName,"onRollOut") ) { return onRollOut; }
		if (HX_FIELD_EQ(inName,"onRemoved") ) { return onRemoved; }
		if (HX_FIELD_EQ(inName,"onRefresh") ) { return onRefresh; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rotationX") ) { return _rotationX; }
		if (HX_FIELD_EQ(inName,"_rotationY") ) { return _rotationY; }
		if (HX_FIELD_EQ(inName,"_rotationZ") ) { return _rotationZ; }
		if (HX_FIELD_EQ(inName,"_minHeight") ) { return _minHeight; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_parent") ) { return set_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_sprite") ) { return get_sprite_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageX") ) { return get_stageX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageY") ) { return get_stageY_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onInit") ) { return set_onInit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut; }
		if (HX_FIELD_EQ(inName,"onRollOver") ) { return onRollOver; }
		if (HX_FIELD_EQ(inName,"onActivate") ) { return onActivate; }
		if (HX_FIELD_EQ(inName,"onMenuOpen") ) { return onMenuOpen; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onReady") ) { return set_onReady_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onClick") ) { return set_onClick_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown; }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove; }
		if (HX_FIELD_EQ(inName,"set_onAdded") ) { return set_onAdded_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == hx::paccAlways) return get_percentWidth(); }
		if (HX_FIELD_EQ(inName,"get_minWidth") ) { return get_minWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minWidth") ) { return set_minWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		if (HX_FIELD_EQ(inName,"_handleEvent") ) { return _handleEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onResize") ) { return set_onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onChange") ) { return set_onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"onDeactivate") ) { return onDeactivate; }
		if (HX_FIELD_EQ(inName,"set_onScroll") ) { return set_onScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"onScrollStop") ) { return onScrollStop; }
		if (HX_FIELD_EQ(inName,"onGlyphClick") ) { return onGlyphClick; }
		if (HX_FIELD_EQ(inName,"onMenuSelect") ) { return onMenuSelect; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { return _percentWidth; }
		if (HX_FIELD_EQ(inName,"_invalidating") ) { return _invalidating; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == hx::paccAlways) return get_percentHeight(); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == hx::paccAlways) return get_verticalAlign(); }
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { if (inCallProp == hx::paccAlways) return get_useHandCursor(); }
		if (HX_FIELD_EQ(inName,"get_rotationX") ) { return get_rotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationX") ) { return set_rotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotationY") ) { return get_rotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationY") ) { return set_rotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotationZ") ) { return get_rotationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationZ") ) { return set_rotationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_minHeight") ) { return get_minHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minHeight") ) { return set_minHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_interceptMap") ) { return _interceptMap; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMouseUp") ) { return set_onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onDoubleClick") ) { return onDoubleClick; }
		if (HX_FIELD_EQ(inName,"set_onRollOut") ) { return set_onRollOut_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onRemoved") ) { return set_onRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"onScrollStart") ) { return onScrollStart; }
		if (HX_FIELD_EQ(inName,"set_onRefresh") ) { return set_onRefresh_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { return _percentHeight; }
		if (HX_FIELD_EQ(inName,"postInitialize") ) { return postInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"interceptEvent") ) { return interceptEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMouseOut") ) { return set_onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onRollOver") ) { return set_onRollOver_dyn(); }
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return onAddedToStage; }
		if (HX_FIELD_EQ(inName,"set_onActivate") ) { return set_onActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMenuOpen") ) { return set_onMenuOpen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_eventListeners") ) { return _eventListeners; }
		if (HX_FIELD_EQ(inName,"_onAddedToStage") ) { return _onAddedToStage_dyn(); }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == hx::paccAlways) return get_includeInLayout(); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == hx::paccAlways) return get_horizontalAlign(); }
		if (HX_FIELD_EQ(inName,"set_onMouseDown") ) { return set_onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMouseOver") ) { return set_onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMouseMove") ) { return set_onMouseMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { return _includeInLayout; }
		if (HX_FIELD_EQ(inName,"get_percentWidth") ) { return get_percentWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percentWidth") ) { return set_percentWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"getListenerCount") ) { return getListenerCount_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onDeactivate") ) { return set_onDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onScrollStop") ) { return set_onScrollStop_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onGlyphClick") ) { return set_onGlyphClick_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onMenuSelect") ) { return set_onMenuSelect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_percentHeight") ) { return get_percentHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percentHeight") ) { return set_percentHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return get_verticalAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return set_verticalAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"get_useHandCursor") ) { return get_useHandCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_useHandCursor") ) { return set_useHandCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onDoubleClick") ) { return set_onDoubleClick_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onScrollStart") ) { return set_onScrollStart_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_onAddedToStage") ) { return set_onAddedToStage_dyn(); }
		if (HX_FIELD_EQ(inName,"onRemovedFromStage") ) { return onRemovedFromStage; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_includeInLayout") ) { return get_includeInLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_includeInLayout") ) { return set_includeInLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"get_horizontalAlign") ) { return get_horizontalAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return set_horizontalAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"removeEventFunction") ) { return removeEventFunction_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_onRemovedFromStage") ) { return set_onRemovedFromStage_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"removeEventListenerType") ) { return removeEventListenerType_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllEventListeners") ) { return removeAllEventListeners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return set_z(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_z") ) { _z=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return set_id(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { if (inCallProp == hx::paccAlways) return set_root(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_root") ) { _root=inValue.Cast< ::haxe::ui::toolkit::core::Root >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"ready") ) { ready=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ready") ) { _ready=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { if (inCallProp == hx::paccAlways) return set_parent(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onInit") ) { if (inCallProp == hx::paccAlways) return set_onInit(inValue);onInit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_halign") ) { _halign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_valign") ) { _valign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"onReady") ) { if (inCallProp == hx::paccAlways) return set_onReady(inValue);onReady=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onClick") ) { if (inCallProp == hx::paccAlways) return set_onClick(inValue);onClick=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAdded") ) { if (inCallProp == hx::paccAlways) return set_onAdded(inValue);onAdded=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == hx::paccAlways) return set_minWidth(inValue); }
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::_legacy::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onResize") ) { if (inCallProp == hx::paccAlways) return set_onResize(inValue);onResize=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onChange") ) { if (inCallProp == hx::paccAlways) return set_onChange(inValue);onChange=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onScroll") ) { if (inCallProp == hx::paccAlways) return set_onScroll(inValue);onScroll=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_minWidth") ) { _minWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotationX") ) { if (inCallProp == hx::paccAlways) return set_rotationX(inValue); }
		if (HX_FIELD_EQ(inName,"rotationY") ) { if (inCallProp == hx::paccAlways) return set_rotationY(inValue); }
		if (HX_FIELD_EQ(inName,"rotationZ") ) { if (inCallProp == hx::paccAlways) return set_rotationZ(inValue); }
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == hx::paccAlways) return set_minHeight(inValue); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { if (inCallProp == hx::paccAlways) return set_onMouseUp(inValue);onMouseUp=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRollOut") ) { if (inCallProp == hx::paccAlways) return set_onRollOut(inValue);onRollOut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRemoved") ) { if (inCallProp == hx::paccAlways) return set_onRemoved(inValue);onRemoved=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRefresh") ) { if (inCallProp == hx::paccAlways) return set_onRefresh(inValue);onRefresh=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_rotationX") ) { _rotationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationY") ) { _rotationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationZ") ) { _rotationZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_minHeight") ) { _minHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { if (inCallProp == hx::paccAlways) return set_onMouseOut(inValue);onMouseOut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onRollOver") ) { if (inCallProp == hx::paccAlways) return set_onRollOver(inValue);onRollOver=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onActivate") ) { if (inCallProp == hx::paccAlways) return set_onActivate(inValue);onActivate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMenuOpen") ) { if (inCallProp == hx::paccAlways) return set_onMenuOpen(inValue);onMenuOpen=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { if (inCallProp == hx::paccAlways) return set_onMouseDown(inValue);onMouseDown=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { if (inCallProp == hx::paccAlways) return set_onMouseOver(inValue);onMouseOver=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { if (inCallProp == hx::paccAlways) return set_onMouseMove(inValue);onMouseMove=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == hx::paccAlways) return set_percentWidth(inValue); }
		if (HX_FIELD_EQ(inName,"onDeactivate") ) { if (inCallProp == hx::paccAlways) return set_onDeactivate(inValue);onDeactivate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onScrollStop") ) { if (inCallProp == hx::paccAlways) return set_onScrollStop(inValue);onScrollStop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onGlyphClick") ) { if (inCallProp == hx::paccAlways) return set_onGlyphClick(inValue);onGlyphClick=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onMenuSelect") ) { if (inCallProp == hx::paccAlways) return set_onMenuSelect(inValue);onMenuSelect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { _percentWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_invalidating") ) { _invalidating=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == hx::paccAlways) return set_percentHeight(inValue); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == hx::paccAlways) return set_verticalAlign(inValue); }
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { if (inCallProp == hx::paccAlways) return set_useHandCursor(inValue); }
		if (HX_FIELD_EQ(inName,"_interceptMap") ) { _interceptMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDoubleClick") ) { if (inCallProp == hx::paccAlways) return set_onDoubleClick(inValue);onDoubleClick=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onScrollStart") ) { if (inCallProp == hx::paccAlways) return set_onScrollStart(inValue);onScrollStart=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { _percentHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { if (inCallProp == hx::paccAlways) return set_onAddedToStage(inValue);onAddedToStage=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_eventListeners") ) { _eventListeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"includeInLayout") ) { if (inCallProp == hx::paccAlways) return set_includeInLayout(inValue); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == hx::paccAlways) return set_horizontalAlign(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_includeInLayout") ) { _includeInLayout=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onRemovedFromStage") ) { if (inCallProp == hx::paccAlways) return set_onRemovedFromStage(inValue);onRemovedFromStage=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"));
	outFields->push(HX_HCSTRING("_root","\x01","\x0a","\xc0","\xfe"));
	outFields->push(HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"));
	outFields->push(HX_HCSTRING("_x","\x39","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_z","\x3b","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_rotationX","\x1b","\xd5","\x91","\xc8"));
	outFields->push(HX_HCSTRING("_rotationY","\x1c","\xd5","\x91","\xc8"));
	outFields->push(HX_HCSTRING("_rotationZ","\x1d","\xd5","\x91","\xc8"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_percentWidth","\xe0","\xe3","\x89","\xe0"));
	outFields->push(HX_HCSTRING("_percentHeight","\xcd","\xf8","\x6c","\x4e"));
	outFields->push(HX_HCSTRING("_minWidth","\x73","\x1a","\x30","\x09"));
	outFields->push(HX_HCSTRING("_minHeight","\xda","\x82","\x36","\xb7"));
	outFields->push(HX_HCSTRING("_ready","\xa4","\xe7","\xa1","\xe2"));
	outFields->push(HX_HCSTRING("_invalidating","\x57","\xaa","\x71","\x1b"));
	outFields->push(HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"));
	outFields->push(HX_HCSTRING("_halign","\xfc","\xee","\x25","\x25"));
	outFields->push(HX_HCSTRING("_valign","\x2e","\xfc","\x24","\xbe"));
	outFields->push(HX_HCSTRING("_includeInLayout","\x38","\x5d","\xa5","\x59"));
	outFields->push(HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));
	outFields->push(HX_HCSTRING("_eventListeners","\xa4","\xf2","\xb3","\x45"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c"));
	outFields->push(HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c"));
	outFields->push(HX_HCSTRING("rotationZ","\x5c","\x59","\xef","\x6c"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"));
	outFields->push(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"));
	outFields->push(HX_HCSTRING("minWidth","\x14","\x23","\x9a","\xc1"));
	outFields->push(HX_HCSTRING("minHeight","\x19","\x07","\x94","\x5b"));
	outFields->push(HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("includeInLayout","\xb7","\x1a","\xc6","\x6e"));
	outFields->push(HX_HCSTRING("horizontalAlign","\x41","\x8f","\x67","\xf4"));
	outFields->push(HX_HCSTRING("verticalAlign","\x6f","\x1e","\x7c","\xe4"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	outFields->push(HX_HCSTRING("_interceptMap","\x59","\x08","\x99","\x4d"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,_parent),HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Root*/ ,(int)offsetof(DisplayObject_obj,_root),HX_HCSTRING("_root","\x01","\x0a","\xc0","\xfe")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,_id),HX_HCSTRING("_id","\xfa","\x71","\x48","\x00")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_x),HX_HCSTRING("_x","\x39","\x53","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_y),HX_HCSTRING("_y","\x3a","\x53","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_z),HX_HCSTRING("_z","\x3b","\x53","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_rotationX),HX_HCSTRING("_rotationX","\x1b","\xd5","\x91","\xc8")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_rotationY),HX_HCSTRING("_rotationY","\x1c","\xd5","\x91","\xc8")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_rotationZ),HX_HCSTRING("_rotationZ","\x1d","\xd5","\x91","\xc8")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_percentWidth),HX_HCSTRING("_percentWidth","\xe0","\xe3","\x89","\xe0")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_percentHeight),HX_HCSTRING("_percentHeight","\xcd","\xf8","\x6c","\x4e")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_minWidth),HX_HCSTRING("_minWidth","\x73","\x1a","\x30","\x09")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_minHeight),HX_HCSTRING("_minHeight","\xda","\x82","\x36","\xb7")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,_ready),HX_HCSTRING("_ready","\xa4","\xe7","\xa1","\xe2")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,_invalidating),HX_HCSTRING("_invalidating","\x57","\xaa","\x71","\x1b")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(DisplayObject_obj,_sprite),HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,_halign),HX_HCSTRING("_halign","\xfc","\xee","\x25","\x25")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,_valign),HX_HCSTRING("_valign","\x2e","\xfc","\x24","\xbe")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,_includeInLayout),HX_HCSTRING("_includeInLayout","\x38","\x5d","\xa5","\x59")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,_alpha),HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DisplayObject_obj,_eventListeners),HX_HCSTRING("_eventListeners","\xa4","\xf2","\xb3","\x45")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,ready),HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(DisplayObject_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,stageX),HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,stageY),HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DisplayObject_obj,_interceptMap),HX_HCSTRING("_interceptMap","\x59","\x08","\x99","\x4d")},
	{hx::fsObject /*::openfl::_legacy::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onInit),HX_HCSTRING("onInit","\xcf","\x43","\x45","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onResize),HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onReady),HX_HCSTRING("onReady","\xc4","\x3e","\xf8","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onClick),HX_HCSTRING("onClick","\xa9","\x1a","\x9c","\xde")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseDown),HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseUp),HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseOver),HX_HCSTRING("onMouseOver","\xfa","\x2c","\x50","\x18")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseOut),HX_HCSTRING("onMouseOut","\xa8","\xbb","\xd4","\x81")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMouseMove),HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onDoubleClick),HX_HCSTRING("onDoubleClick","\x98","\x20","\x60","\x30")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRollOver),HX_HCSTRING("onRollOver","\xb0","\x7f","\x5f","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRollOut),HX_HCSTRING("onRollOut","\xb2","\xb1","\xbc","\x34")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onChange),HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onAdded),HX_HCSTRING("onAdded","\x21","\x73","\x81","\xb2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onAddedToStage),HX_HCSTRING("onAddedToStage","\x22","\x82","\x44","\x36")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRemoved),HX_HCSTRING("onRemoved","\x41","\xd8","\xaa","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRemovedFromStage),HX_HCSTRING("onRemovedFromStage","\x73","\xcc","\x89","\x12")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onActivate),HX_HCSTRING("onActivate","\xf2","\xef","\x62","\xc3")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onDeactivate),HX_HCSTRING("onDeactivate","\x33","\xfe","\x44","\x14")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onScroll),HX_HCSTRING("onScroll","\x8c","\xce","\x11","\x27")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onScrollStart),HX_HCSTRING("onScrollStart","\x36","\xda","\xd2","\x30")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onScrollStop),HX_HCSTRING("onScrollStop","\xae","\x20","\x5f","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onGlyphClick),HX_HCSTRING("onGlyphClick","\xfb","\x80","\xf7","\xde")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMenuSelect),HX_HCSTRING("onMenuSelect","\xfa","\xf7","\xfa","\x24")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onMenuOpen),HX_HCSTRING("onMenuOpen","\x48","\x05","\xda","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,onRefresh),HX_HCSTRING("onRefresh","\x7c","\x92","\xcb","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"),
	HX_HCSTRING("_root","\x01","\x0a","\xc0","\xfe"),
	HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"),
	HX_HCSTRING("_x","\x39","\x53","\x00","\x00"),
	HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"),
	HX_HCSTRING("_z","\x3b","\x53","\x00","\x00"),
	HX_HCSTRING("_rotationX","\x1b","\xd5","\x91","\xc8"),
	HX_HCSTRING("_rotationY","\x1c","\xd5","\x91","\xc8"),
	HX_HCSTRING("_rotationZ","\x1d","\xd5","\x91","\xc8"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_percentWidth","\xe0","\xe3","\x89","\xe0"),
	HX_HCSTRING("_percentHeight","\xcd","\xf8","\x6c","\x4e"),
	HX_HCSTRING("_minWidth","\x73","\x1a","\x30","\x09"),
	HX_HCSTRING("_minHeight","\xda","\x82","\x36","\xb7"),
	HX_HCSTRING("_ready","\xa4","\xe7","\xa1","\xe2"),
	HX_HCSTRING("_invalidating","\x57","\xaa","\x71","\x1b"),
	HX_HCSTRING("_sprite","\xa4","\xed","\x0c","\x32"),
	HX_HCSTRING("_halign","\xfc","\xee","\x25","\x25"),
	HX_HCSTRING("_valign","\x2e","\xfc","\x24","\xbe"),
	HX_HCSTRING("_includeInLayout","\x38","\x5d","\xa5","\x59"),
	HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"),
	HX_HCSTRING("_eventListeners","\xa4","\xf2","\xb3","\x45"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("postInitialize","\xd0","\xf1","\x7d","\x3b"),
	HX_HCSTRING("_onAddedToStage","\xc1","\xca","\xa4","\x7f"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"),
	HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("set_parent","\x67","\x13","\x83","\xe1"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("set_root","\x1f","\x03","\xc7","\x79"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_z","\x51","\xa5","\x60","\x91"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_rotationX","\x31","\x2d","\x53","\x2e"),
	HX_HCSTRING("set_rotationX","\x3d","\x0f","\x59","\x73"),
	HX_HCSTRING("get_rotationY","\x32","\x2d","\x53","\x2e"),
	HX_HCSTRING("set_rotationY","\x3e","\x0f","\x59","\x73"),
	HX_HCSTRING("get_rotationZ","\x33","\x2d","\x53","\x2e"),
	HX_HCSTRING("set_rotationZ","\x3f","\x0f","\x59","\x73"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_percentWidth","\x8a","\x3d","\xba","\x02"),
	HX_HCSTRING("set_percentWidth","\xfe","\x2a","\xfc","\x58"),
	HX_HCSTRING("get_percentHeight","\xe3","\x13","\x8b","\x16"),
	HX_HCSTRING("set_percentHeight","\xef","\xeb","\xf8","\x39"),
	HX_HCSTRING("get_minWidth","\x1d","\xd7","\xb3","\x76"),
	HX_HCSTRING("set_minWidth","\x91","\xfa","\xac","\x8b"),
	HX_HCSTRING("get_minHeight","\xf0","\xda","\xf7","\x1c"),
	HX_HCSTRING("set_minHeight","\xfc","\xbc","\xfd","\x61"),
	HX_HCSTRING("get_ready","\xba","\xfc","\x63","\x2a"),
	HX_HCSTRING("get_sprite","\xce","\x4b","\x1d","\xb4"),
	HX_HCSTRING("get_stageX","\xa3","\x6b","\x79","\xf6"),
	HX_HCSTRING("get_stageY","\xa4","\x6b","\x79","\xf6"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_includeInLayout","\xce","\xe9","\xd0","\xf9"),
	HX_HCSTRING("set_includeInLayout","\xda","\xdc","\x6d","\x36"),
	HX_HCSTRING("get_horizontalAlign","\x58","\x5e","\x72","\x7f"),
	HX_HCSTRING("set_horizontalAlign","\x64","\x51","\x0f","\xbc"),
	HX_HCSTRING("get_verticalAlign","\xc6","\x29","\xec","\xea"),
	HX_HCSTRING("set_verticalAlign","\xd2","\x01","\x5a","\x0e"),
	HX_HCSTRING("get_useHandCursor","\x23","\xe6","\x1e","\x90"),
	HX_HCSTRING("set_useHandCursor","\x2f","\xbe","\x8c","\xb3"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("interceptEvent","\x78","\x26","\x73","\xd5"),
	HX_HCSTRING("_interceptMap","\x59","\x08","\x99","\x4d"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),
	HX_HCSTRING("removeEventListenerType","\xa4","\x53","\x18","\x53"),
	HX_HCSTRING("removeAllEventListeners","\x22","\xa6","\x9d","\xf3"),
	HX_HCSTRING("getListenerCount","\x45","\x39","\xa5","\x7b"),
	HX_HCSTRING("removeEventFunction","\x6e","\x32","\x96","\x31"),
	HX_HCSTRING("_handleEvent","\x53","\x21","\x18","\x8e"),
	HX_HCSTRING("onInit","\xcf","\x43","\x45","\xe8"),
	HX_HCSTRING("set_onInit","\x0c","\x52","\x4a","\xdc"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("set_onResize","\xf0","\x27","\x3b","\xb2"),
	HX_HCSTRING("onReady","\xc4","\x3e","\xf8","\x7c"),
	HX_HCSTRING("set_onReady","\xe7","\xa5","\x5f","\x0d"),
	HX_HCSTRING("onClick","\xa9","\x1a","\x9c","\xde"),
	HX_HCSTRING("set_onClick","\xcc","\x81","\x03","\x6f"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("set_onMouseDown","\xab","\xc8","\xb2","\xcd"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("set_onMouseUp","\x64","\x62","\x87","\x9e"),
	HX_HCSTRING("onMouseOver","\xfa","\x2c","\x50","\x18"),
	HX_HCSTRING("set_onMouseOver","\x9d","\x61","\xfd","\xd4"),
	HX_HCSTRING("onMouseOut","\xa8","\xbb","\xd4","\x81"),
	HX_HCSTRING("set_onMouseOut","\x65","\x2c","\xea","\x17"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("set_onMouseMove","\x5a","\xb3","\xa5","\xd3"),
	HX_HCSTRING("onDoubleClick","\x98","\x20","\x60","\x30"),
	HX_HCSTRING("set_onDoubleClick","\xfb","\x03","\x3e","\x5a"),
	HX_HCSTRING("onRollOver","\xb0","\x7f","\x5f","\xf0"),
	HX_HCSTRING("set_onRollOver","\x6d","\xf0","\x74","\x86"),
	HX_HCSTRING("onRollOut","\xb2","\xb1","\xbc","\x34"),
	HX_HCSTRING("set_onRollOut","\x95","\x67","\x26","\x3b"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("set_onChange","\x6c","\x5f","\x32","\x61"),
	HX_HCSTRING("onAdded","\x21","\x73","\x81","\xb2"),
	HX_HCSTRING("set_onAdded","\x44","\xda","\xe8","\x42"),
	HX_HCSTRING("onAddedToStage","\x22","\x82","\x44","\x36"),
	HX_HCSTRING("set_onAddedToStage","\x5f","\x95","\x8d","\xae"),
	HX_HCSTRING("onRemoved","\x41","\xd8","\xaa","\xca"),
	HX_HCSTRING("set_onRemoved","\x24","\x8e","\x14","\xd1"),
	HX_HCSTRING("onRemovedFromStage","\x73","\xcc","\x89","\x12"),
	HX_HCSTRING("set_onRemovedFromStage","\x30","\xc2","\xc9","\x9f"),
	HX_HCSTRING("onActivate","\xf2","\xef","\x62","\xc3"),
	HX_HCSTRING("set_onActivate","\xaf","\x60","\x78","\x59"),
	HX_HCSTRING("onDeactivate","\x33","\xfe","\x44","\x14"),
	HX_HCSTRING("set_onDeactivate","\x30","\xd8","\x25","\x6f"),
	HX_HCSTRING("onScroll","\x8c","\xce","\x11","\x27"),
	HX_HCSTRING("set_onScroll","\x09","\xa6","\x24","\xf1"),
	HX_HCSTRING("onScrollStart","\x36","\xda","\xd2","\x30"),
	HX_HCSTRING("set_onScrollStart","\x99","\xbd","\xb0","\x5a"),
	HX_HCSTRING("onScrollStop","\xae","\x20","\x5f","\xe2"),
	HX_HCSTRING("set_onScrollStop","\xab","\xfa","\x3f","\x3d"),
	HX_HCSTRING("onGlyphClick","\xfb","\x80","\xf7","\xde"),
	HX_HCSTRING("set_onGlyphClick","\xf8","\x5a","\xd8","\x39"),
	HX_HCSTRING("onMenuSelect","\xfa","\xf7","\xfa","\x24"),
	HX_HCSTRING("set_onMenuSelect","\xf7","\xd1","\xdb","\x7f"),
	HX_HCSTRING("onMenuOpen","\x48","\x05","\xda","\x2d"),
	HX_HCSTRING("set_onMenuOpen","\x05","\x76","\xef","\xc3"),
	HX_HCSTRING("onRefresh","\x7c","\x92","\xcb","\xc4"),
	HX_HCSTRING("set_onRefresh","\x5f","\x48","\x35","\xcb"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObject_obj::__mClass;

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.DisplayObject","\x74","\x86","\x60","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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
} // end namespace core
