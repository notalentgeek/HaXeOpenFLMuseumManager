#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBox
#include <haxe/ui/toolkit/controls/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBoxValue
#include <haxe/ui/toolkit/controls/CheckBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void CheckBox_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","new",0x63a533ab,"haxe.ui.toolkit.controls.CheckBox.new","haxe/ui/toolkit/controls/CheckBox.hx",18,0xf2eee4e5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->_down = false;
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	tmp->buttonMode = true;
	HX_STACK_LINE(41)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	tmp1->useHandCursor = true;
	HX_STACK_LINE(42)
	::haxe::ui::toolkit::controls::CheckBoxValue tmp2 = ::haxe::ui::toolkit::controls::CheckBoxValue_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	this->_value = tmp2;
	HX_STACK_LINE(43)
	::haxe::ui::toolkit::controls::Text tmp3 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	this->_label = tmp3;
	HX_STACK_LINE(44)
	::haxe::ui::toolkit::layout::HorizontalLayout tmp4 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	this->set_layout(tmp4);
	HX_STACK_LINE(45)
	this->set_autoSize(true);
}
;
	return null();
}

//CheckBox_obj::~CheckBox_obj() { }

Dynamic CheckBox_obj::__CreateEmpty() { return  new CheckBox_obj; }
hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__new()
{  hx::ObjectPtr< CheckBox_obj > _result_ = new CheckBox_obj();
	_result_->__construct();
	return _result_;}

Dynamic CheckBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CheckBox_obj > _result_ = new CheckBox_obj();
	_result_->__construct();
	return _result_;}

hx::Object *CheckBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

CheckBox_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< CheckBox_obj >(this); }
Void CheckBox_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","initialize",0x49739d65,"haxe.ui.toolkit.controls.CheckBox.initialize","haxe/ui/toolkit/controls/CheckBox.hx",51,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::controls::CheckBox _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->super::initialize();
		HX_STACK_LINE(54)
		::haxe::ui::toolkit::controls::CheckBoxValue tmp = this->_value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		tmp->set_verticalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::controls::CheckBoxValue tmp1 = this->_value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		this->addChild(tmp1);
		HX_STACK_LINE(56)
		::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		this->addChild(tmp2);
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::controls::Text tmp3 = this->_label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		::String tmp4 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::controls::CheckBox,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/CheckBox.hx",59,0xf2eee4e5)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(59)
				_g->_value->cycleValues();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(58)
		tmp3->addEventListener(tmp4, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(62)
		::haxe::ui::toolkit::controls::CheckBoxValue tmp5 = this->_value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		::String tmp6 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp6,"tmp6");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::haxe::ui::toolkit::controls::CheckBox,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/toolkit/controls/CheckBox.hx",62,0xf2eee4e5)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(63)
				Dynamic tmp7 = _g->_value->get_value();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(63)
				bool tmp8 = (tmp7 == HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(63)
				_g->set_selected(tmp8);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(62)
		tmp5->addEventListener(tmp6, Dynamic(new _Function_1_2(_g)),null(),null(),null());
		HX_STACK_LINE(66)
		::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		Dynamic tmp8 = this->_onMouseOver_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		this->addEventListener(tmp7,tmp8,null(),null(),null());
		HX_STACK_LINE(67)
		::String tmp9 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		Dynamic tmp10 = this->_onMouseOut_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(67)
		this->addEventListener(tmp9,tmp10,null(),null(),null());
		HX_STACK_LINE(68)
		::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(68)
		Dynamic tmp12 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(68)
		this->addEventListener(tmp11,tmp12,null(),null(),null());
		HX_STACK_LINE(69)
		::String tmp13 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		Dynamic tmp14 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		this->addEventListener(tmp13,tmp14,null(),null(),null());
	}
return null();
}


Void CheckBox_obj::_onMouseOver( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","_onMouseOver",0xcb153650,"haxe.ui.toolkit.controls.CheckBox._onMouseOver","haxe/ui/toolkit/controls/CheckBox.hx",75,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(76)
		bool tmp = (event->buttonDown == false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		if ((tmp)){
			HX_STACK_LINE(77)
			this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(78)
			bool tmp1 = this->_down;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			bool tmp2 = (tmp1 == true);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			if ((tmp2)){
				HX_STACK_LINE(79)
				this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseOver,(void))

Void CheckBox_obj::_onMouseOut( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","_onMouseOut",0x1904af12,"haxe.ui.toolkit.controls.CheckBox._onMouseOut","haxe/ui/toolkit/controls/CheckBox.hx",83,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(84)
		bool tmp = (event->buttonDown == false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(84)
		if ((tmp)){
			HX_STACK_LINE(85)
			this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseOut,(void))

Void CheckBox_obj::_onMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","_onMouseDown",0xc3ca9d5e,"haxe.ui.toolkit.controls.CheckBox._onMouseDown","haxe/ui/toolkit/controls/CheckBox.hx",91,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(92)
		this->_down = true;
		HX_STACK_LINE(93)
		this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		Dynamic tmp2 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		tmp->addEventListener(tmp1,tmp2,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseDown,(void))

Void CheckBox_obj::_onMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","_onMouseUp",0x50789457,"haxe.ui.toolkit.controls.CheckBox._onMouseUp","haxe/ui/toolkit/controls/CheckBox.hx",97,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(98)
		this->_down = false;
		HX_STACK_LINE(99)
		Float tmp = event->stageX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		Float tmp1 = event->stageY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		bool tmp2 = this->hitTest(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		if ((tmp2)){
			HX_STACK_LINE(101)
			this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(106)
			this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
		}
		HX_STACK_LINE(109)
		::haxe::ui::toolkit::core::Screen tmp3 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		Dynamic tmp5 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		tmp3->removeEventListener(tmp4,tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseUp,(void))

bool CheckBox_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_autoSize",0x4647c2a2,"haxe.ui.toolkit.controls.CheckBox.set_autoSize","haxe/ui/toolkit/controls/CheckBox.hx",115,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(116)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	bool tmp1 = this->super::set_autoSize(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	value = tmp1;
	HX_STACK_LINE(117)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(117)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(117)
	if ((tmp3)){
		HX_STACK_LINE(117)
		tmp4 = (int)-1;
	}
	else{
		HX_STACK_LINE(117)
		tmp4 = (int)100;
	}
	HX_STACK_LINE(117)
	tmp2->set_percentWidth(tmp4);
	HX_STACK_LINE(118)
	bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(118)
	return tmp5;
}


::String CheckBox_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_text",0x1540550b,"haxe.ui.toolkit.controls.CheckBox.get_text","haxe/ui/toolkit/controls/CheckBox.hx",121,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	return tmp1;
}


::String CheckBox_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_text",0xc39dae7f,"haxe.ui.toolkit.controls.CheckBox.set_text","haxe/ui/toolkit/controls/CheckBox.hx",125,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(126)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	value = tmp1;
	HX_STACK_LINE(127)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(128)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(128)
	return tmp4;
}


Dynamic CheckBox_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_value",0xa7294953,"haxe.ui.toolkit.controls.CheckBox.get_value","haxe/ui/toolkit/controls/CheckBox.hx",131,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	bool tmp = this->get_selected();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	return tmp;
}


Dynamic CheckBox_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_value",0x8a7a355f,"haxe.ui.toolkit.controls.CheckBox.set_value","haxe/ui/toolkit/controls/CheckBox.hx",135,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(136)
	Dynamic tmp = newValue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	if ((tmp1)){
		HX_STACK_LINE(137)
		bool tmp2 = (newValue == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		this->set_selected(tmp2);
	}
	else{
		HX_STACK_LINE(139)
		Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		this->set_selected(tmp2);
	}
	HX_STACK_LINE(141)
	Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	return tmp2;
}


Float CheckBox_obj::get_height( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_height",0x4f8be3c5,"haxe.ui.toolkit.controls.CheckBox.get_height","haxe/ui/toolkit/controls/CheckBox.hx",144,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	Float tmp = this->super::get_height();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	Float height = tmp;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(146)
	bool tmp1 = this->get_autoSize();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	if ((tmp1)){
		HX_STACK_LINE(147)
		Float tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		return tmp2;
	}
	else{
		HX_STACK_LINE(149)
		Float tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::controls::Text tmp3 = this->_label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		Float tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		Float tmp5 = ::Math_obj::max(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		return tmp5;
	}
	HX_STACK_LINE(146)
	return ((Float)0.);
}


bool CheckBox_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_multiline",0x36aa35cf,"haxe.ui.toolkit.controls.CheckBox.get_multiline","haxe/ui/toolkit/controls/CheckBox.hx",169,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1 = tmp->get_multiline();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_multiline,return )

bool CheckBox_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_multiline",0x7bb017db,"haxe.ui.toolkit.controls.CheckBox.set_multiline","haxe/ui/toolkit/controls/CheckBox.hx",173,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(174)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	bool tmp2 = tmp->set_multiline(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_multiline,return )

bool CheckBox_obj::get_wrapLines( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_wrapLines",0xb110bab7,"haxe.ui.toolkit.controls.CheckBox.get_wrapLines","haxe/ui/toolkit/controls/CheckBox.hx",177,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	bool tmp1 = tmp->get_wrapLines();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_wrapLines,return )

bool CheckBox_obj::set_wrapLines( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_wrapLines",0xf6169cc3,"haxe.ui.toolkit.controls.CheckBox.set_wrapLines","haxe/ui/toolkit/controls/CheckBox.hx",181,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(182)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(182)
	bool tmp2 = tmp->set_wrapLines(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(182)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_wrapLines,return )

bool CheckBox_obj::get_selected( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_selected",0xb34239b9,"haxe.ui.toolkit.controls.CheckBox.get_selected","haxe/ui/toolkit/controls/CheckBox.hx",185,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_selected,return )

bool CheckBox_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_selected",0xc83b5d2d,"haxe.ui.toolkit.controls.CheckBox.set_selected","haxe/ui/toolkit/controls/CheckBox.hx",189,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	if ((tmp2)){
		HX_STACK_LINE(191)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		return tmp3;
	}
	HX_STACK_LINE(194)
	::haxe::ui::toolkit::controls::CheckBoxValue tmp3 = this->_value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	bool tmp4 = (value == true);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(194)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(194)
	if ((tmp4)){
		HX_STACK_LINE(194)
		tmp5 = HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1");
	}
	else{
		HX_STACK_LINE(194)
		tmp5 = HX_HCSTRING("unselected","\xb4","\x11","\x31","\x37");
	}
	HX_STACK_LINE(194)
	tmp3->set_value(tmp5);
	HX_STACK_LINE(195)
	this->_selected = value;
	HX_STACK_LINE(197)
	::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(197)
	::openfl::_legacy::events::Event tmp7 = ::openfl::_legacy::events::Event_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(197)
	::openfl::_legacy::events::Event event = tmp7;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(198)
	::openfl::_legacy::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(198)
	this->dispatchEvent(tmp8);
	HX_STACK_LINE(200)
	bool tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(200)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_selected,return )

Void CheckBox_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","applyStyle",0x8c278cf8,"haxe.ui.toolkit.controls.CheckBox.applyStyle","haxe/ui/toolkit/controls/CheckBox.hx",206,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		this->super::applyStyle();
		HX_STACK_LINE(210)
		::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		if ((tmp1)){
			HX_STACK_LINE(211)
			::haxe::ui::toolkit::style::Style tmp2 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(211)
			::haxe::ui::toolkit::style::Style labelStyle = tmp2;		HX_STACK_VAR(labelStyle,"labelStyle");
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::style::Style tmp3 = this->_baseStyle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(212)
			if ((tmp4)){
				HX_STACK_LINE(213)
				::haxe::ui::toolkit::style::Style tmp5 = this->_baseStyle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(213)
				::String tmp6 = tmp5->get_fontName();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(213)
				labelStyle->set_fontName(tmp6);
				HX_STACK_LINE(214)
				::haxe::ui::toolkit::style::Style tmp7 = this->_baseStyle;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(214)
				Float tmp8 = tmp7->get_fontSize();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(214)
				labelStyle->set_fontSize(tmp8);
				HX_STACK_LINE(215)
				::haxe::ui::toolkit::style::Style tmp9 = this->_baseStyle;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(215)
				bool tmp10 = tmp9->get_fontEmbedded();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(215)
				labelStyle->set_fontEmbedded(tmp10);
				HX_STACK_LINE(216)
				::haxe::ui::toolkit::style::Style tmp11 = this->_baseStyle;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(216)
				int tmp12 = tmp11->get_color();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(216)
				labelStyle->set_color(tmp12);
			}
			HX_STACK_LINE(218)
			::haxe::ui::toolkit::controls::Text tmp5 = this->_label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(218)
			::haxe::ui::toolkit::style::Style tmp6 = labelStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			tmp5->set_baseStyle(tmp6);
		}
	}
return null();
}


Array< ::String > CheckBox_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_states",0x533bb520,"haxe.ui.toolkit.controls.CheckBox.get_states","haxe/ui/toolkit/controls/CheckBox.hx",226,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(226)
	return Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("over","\x54","\x91","\xb8","\x49")).Add(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
}


::haxe::ui::toolkit::core::DisplayObject CheckBox_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","clone",0x2d4c1f68,"haxe.ui.toolkit.controls.CheckBox.clone","src/haxe/ui/toolkit/controls/CheckBox.hx",1,0xf8e21330)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::CheckBox c = ((::haxe::ui::toolkit::controls::CheckBox)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool tmp1 = this->get_multiline();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_multiline(tmp1);
	HX_STACK_LINE(4)
	bool tmp2 = this->get_wrapLines();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_wrapLines(tmp2);
	HX_STACK_LINE(5)
	bool tmp3 = this->get_selected();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_selected(tmp3);
	HX_STACK_LINE(6)
	::haxe::ui::toolkit::controls::CheckBox tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	return tmp4;
}


::haxe::ui::toolkit::core::DisplayObject CheckBox_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","self",0xd03609e1,"haxe.ui.toolkit.controls.CheckBox.self","src/haxe/ui/toolkit/controls/CheckBox.hx",1,0xf8e21330)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::CheckBox tmp = ::haxe::ui::toolkit::controls::CheckBox_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


::String CheckBox_obj::STATE_NORMAL;

::String CheckBox_obj::STATE_OVER;

::String CheckBox_obj::STATE_DOWN;


CheckBox_obj::CheckBox_obj()
{
}

void CheckBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckBox);
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_down,"_down");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CheckBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return _value; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return get_selected(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { if (inCallProp == hx::paccAlways) return get_wrapLines(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return get_selected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wrapLines") ) { return get_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapLines") ) { return set_wrapLines_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CheckBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::haxe::ui::toolkit::controls::CheckBoxValue >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return set_selected(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { if (inCallProp == hx::paccAlways) return set_wrapLines(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CheckBox_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void CheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	outFields->push(HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"));
	outFields->push(HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("wrapLines","\xd5","\x57","\x78","\x18"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::CheckBoxValue*/ ,(int)offsetof(CheckBox_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(CheckBox_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{hx::fsBool,(int)offsetof(CheckBox_obj,_selected),HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9")},
	{hx::fsBool,(int)offsetof(CheckBox_obj,_down),HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &CheckBox_obj::STATE_NORMAL,HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60")},
	{hx::fsString,(void *) &CheckBox_obj::STATE_OVER,HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38")},
	{hx::fsString,(void *) &CheckBox_obj::STATE_DOWN,HX_HCSTRING("STATE_DOWN","\xb0","\x04","\x15","\x31")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
	HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"),
	HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onMouseUp","\x42","\x28","\xc0","\xf3"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_wrapLines","\xac","\x2b","\xdc","\xd9"),
	HX_HCSTRING("set_wrapLines","\xb8","\x0d","\xe2","\x1e"),
	HX_HCSTRING("get_selected","\x64","\xde","\x86","\x66"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("get_states","\x0b","\x49","\x83","\xf6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CheckBox_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(CheckBox_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(CheckBox_obj::STATE_DOWN,"STATE_DOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(CheckBox_obj::STATE_DOWN,"STATE_DOWN");
};

#endif

hx::Class CheckBox_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60"),
	HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38"),
	HX_HCSTRING("STATE_DOWN","\xb0","\x04","\x15","\x31"),
	::String(null()) };

void CheckBox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.CheckBox","\x39","\x82","\x29","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &CheckBox_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CheckBox_obj >;
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

void CheckBox_obj::__boot()
{
	STATE_NORMAL= HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
	STATE_OVER= HX_HCSTRING("over","\x54","\x91","\xb8","\x49");
	STATE_DOWN= HX_HCSTRING("down","\x62","\xf8","\x6d","\x42");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
