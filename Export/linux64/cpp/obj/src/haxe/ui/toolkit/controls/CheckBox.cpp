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
namespace controls{

Void CheckBox_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","new",0x63a533ab,"haxe.ui.toolkit.controls.CheckBox.new","haxe/ui/toolkit/controls/CheckBox.hx",20,0xf2eee4e5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	this->_down = false;
	HX_STACK_LINE(42)
	super::__construct();
	HX_STACK_LINE(43)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	tmp->buttonMode = true;
	HX_STACK_LINE(44)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	tmp1->useHandCursor = true;
	HX_STACK_LINE(45)
	::haxe::ui::toolkit::controls::CheckBoxValue tmp2 = ::haxe::ui::toolkit::controls::CheckBoxValue_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	this->_value = tmp2;
	HX_STACK_LINE(46)
	::haxe::ui::toolkit::controls::Text tmp3 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	this->_label = tmp3;
	HX_STACK_LINE(47)
	::openfl::_legacy::display::Sprite tmp4 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	this->_eventTarget = tmp4;
	HX_STACK_LINE(48)
	::haxe::ui::toolkit::layout::HorizontalLayout tmp5 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	this->set_layout(tmp5);
	HX_STACK_LINE(49)
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
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","initialize",0x49739d65,"haxe.ui.toolkit.controls.CheckBox.initialize","haxe/ui/toolkit/controls/CheckBox.hx",55,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::controls::CheckBox _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(56)
		this->super::initialize();
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::controls::CheckBoxValue tmp = this->_value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		tmp->set_verticalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(59)
		::haxe::ui::toolkit::controls::CheckBoxValue tmp1 = this->_value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		this->addChild(tmp1);
		HX_STACK_LINE(60)
		::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		this->addChild(tmp2);
		HX_STACK_LINE(62)
		::String tmp3 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::controls::CheckBox,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/CheckBox.hx",63,0xf2eee4e5)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(63)
				_g->_value->cycleValues();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(62)
		this->addEventListener(tmp3, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(66)
		::haxe::ui::toolkit::controls::CheckBoxValue tmp4 = this->_value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		::String tmp5 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp5,"tmp5");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::haxe::ui::toolkit::controls::CheckBox,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/toolkit/controls/CheckBox.hx",66,0xf2eee4e5)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(67)
				Dynamic tmp6 = _g->_value->get_value();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				bool tmp7 = (tmp6 == HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(67)
				_g->set_selected(tmp7);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(66)
		tmp4->addEventListener(tmp5, Dynamic(new _Function_1_2(_g)),null(),null(),null());
		HX_STACK_LINE(70)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		Dynamic tmp7 = this->_onMouseOver_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		this->addEventListener(tmp6,tmp7,null(),null(),null());
		HX_STACK_LINE(71)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		Dynamic tmp9 = this->_onMouseOut_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		this->addEventListener(tmp8,tmp9,null(),null(),null());
		HX_STACK_LINE(72)
		::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(72)
		Dynamic tmp11 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(72)
		this->addEventListener(tmp10,tmp11,null(),null(),null());
		HX_STACK_LINE(73)
		::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(73)
		Dynamic tmp13 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(73)
		this->addEventListener(tmp12,tmp13,null(),null(),null());
		HX_STACK_LINE(75)
		::openfl::_legacy::display::Sprite tmp14 = this->get_sprite();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(75)
		::openfl::_legacy::display::Sprite tmp15 = this->_eventTarget;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(75)
		tmp14->addChild(tmp15);
	}
return null();
}


Void CheckBox_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","invalidate",0xe3e28590,"haxe.ui.toolkit.controls.CheckBox.invalidate","haxe/ui/toolkit/controls/CheckBox.hx",78,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(79)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		if ((tmp3)){
			HX_STACK_LINE(79)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(79)
			tmp4 = true;
		}
		HX_STACK_LINE(79)
		if ((tmp4)){
			HX_STACK_LINE(80)
			return null();
		}
		HX_STACK_LINE(83)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		bool tmp6 = recursive;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		this->super::invalidate(tmp5,tmp6);
		HX_STACK_LINE(84)
		this->_invalidating = true;
		HX_STACK_LINE(85)
		int tmp7 = (int(type) & int((int)256));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		bool tmp8 = (tmp7 == (int)256);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		if ((tmp8)){
			HX_STACK_LINE(86)
			this->resizeEventTarget();
		}
		HX_STACK_LINE(88)
		this->_invalidating = false;
	}
return null();
}


Void CheckBox_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","dispose",0x7598e56a,"haxe.ui.toolkit.controls.CheckBox.dispose","haxe/ui/toolkit/controls/CheckBox.hx",91,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::openfl::_legacy::display::Sprite tmp1 = this->_eventTarget;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		tmp->removeChild(tmp1);
		HX_STACK_LINE(93)
		this->super::dispose();
	}
return null();
}


Void CheckBox_obj::_onMouseOver( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","_onMouseOver",0xcb153650,"haxe.ui.toolkit.controls.CheckBox._onMouseOver","haxe/ui/toolkit/controls/CheckBox.hx",99,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(100)
		bool tmp = (event->buttonDown == false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		if ((tmp)){
			HX_STACK_LINE(101)
			this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(102)
			bool tmp1 = this->_down;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			bool tmp2 = (tmp1 == true);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			if ((tmp2)){
				HX_STACK_LINE(103)
				this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseOver,(void))

Void CheckBox_obj::_onMouseOut( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","_onMouseOut",0x1904af12,"haxe.ui.toolkit.controls.CheckBox._onMouseOut","haxe/ui/toolkit/controls/CheckBox.hx",107,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(108)
		bool tmp = (event->buttonDown == false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		if ((tmp)){
			HX_STACK_LINE(109)
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
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","_onMouseDown",0xc3ca9d5e,"haxe.ui.toolkit.controls.CheckBox._onMouseDown","haxe/ui/toolkit/controls/CheckBox.hx",115,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(116)
		this->_down = true;
		HX_STACK_LINE(117)
		this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
		HX_STACK_LINE(118)
		::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		Dynamic tmp2 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		tmp->addEventListener(tmp1,tmp2,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseDown,(void))

Void CheckBox_obj::_onMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","_onMouseUp",0x50789457,"haxe.ui.toolkit.controls.CheckBox._onMouseUp","haxe/ui/toolkit/controls/CheckBox.hx",121,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(122)
		this->_down = false;
		HX_STACK_LINE(123)
		Float tmp = event->stageX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		Float tmp1 = event->stageY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		bool tmp2 = this->hitTest(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		if ((tmp2)){
			HX_STACK_LINE(125)
			this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(130)
			this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
		}
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::core::Screen tmp3 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(133)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		Dynamic tmp5 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		tmp3->removeEventListener(tmp4,tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,_onMouseUp,(void))

bool CheckBox_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_autoSize",0x4647c2a2,"haxe.ui.toolkit.controls.CheckBox.set_autoSize","haxe/ui/toolkit/controls/CheckBox.hx",139,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(140)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	bool tmp1 = this->super::set_autoSize(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	value = tmp1;
	HX_STACK_LINE(141)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(141)
	if ((tmp3)){
		HX_STACK_LINE(141)
		tmp4 = (int)-1;
	}
	else{
		HX_STACK_LINE(141)
		tmp4 = (int)100;
	}
	HX_STACK_LINE(141)
	tmp2->set_percentWidth(tmp4);
	HX_STACK_LINE(142)
	bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(142)
	return tmp5;
}


::String CheckBox_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_text",0x1540550b,"haxe.ui.toolkit.controls.CheckBox.get_text","haxe/ui/toolkit/controls/CheckBox.hx",145,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	return tmp1;
}


::String CheckBox_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_text",0xc39dae7f,"haxe.ui.toolkit.controls.CheckBox.set_text","haxe/ui/toolkit/controls/CheckBox.hx",149,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(150)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	value = tmp1;
	HX_STACK_LINE(151)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(151)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(152)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(152)
	return tmp4;
}


Dynamic CheckBox_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_value",0xa7294953,"haxe.ui.toolkit.controls.CheckBox.get_value","haxe/ui/toolkit/controls/CheckBox.hx",155,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	bool tmp = this->get_selected();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	return tmp;
}


Dynamic CheckBox_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_value",0x8a7a355f,"haxe.ui.toolkit.controls.CheckBox.set_value","haxe/ui/toolkit/controls/CheckBox.hx",159,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(160)
	Dynamic tmp = newValue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	if ((tmp1)){
		HX_STACK_LINE(161)
		bool tmp2 = (newValue == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		this->set_selected(tmp2);
	}
	else{
		HX_STACK_LINE(163)
		Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		this->set_selected(tmp2);
	}
	HX_STACK_LINE(165)
	Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(165)
	return tmp2;
}


Float CheckBox_obj::get_height( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_height",0x4f8be3c5,"haxe.ui.toolkit.controls.CheckBox.get_height","haxe/ui/toolkit/controls/CheckBox.hx",168,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	Float tmp = this->super::get_height();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	Float height = tmp;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(170)
	bool tmp1 = this->get_autoSize();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	if ((tmp1)){
		HX_STACK_LINE(171)
		Float tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		return tmp2;
	}
	else{
		HX_STACK_LINE(173)
		Float tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		::haxe::ui::toolkit::controls::Text tmp3 = this->_label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		Float tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		Float tmp5 = ::Math_obj::max(tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		return tmp5;
	}
	HX_STACK_LINE(170)
	return ((Float)0.);
}


bool CheckBox_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_multiline",0x36aa35cf,"haxe.ui.toolkit.controls.CheckBox.get_multiline","haxe/ui/toolkit/controls/CheckBox.hx",193,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	bool tmp1 = tmp->get_multiline();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_multiline,return )

bool CheckBox_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_multiline",0x7bb017db,"haxe.ui.toolkit.controls.CheckBox.set_multiline","haxe/ui/toolkit/controls/CheckBox.hx",197,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(198)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	bool tmp2 = tmp->set_multiline(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_multiline,return )

bool CheckBox_obj::get_wrapLines( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_wrapLines",0xb110bab7,"haxe.ui.toolkit.controls.CheckBox.get_wrapLines","haxe/ui/toolkit/controls/CheckBox.hx",201,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(202)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	bool tmp1 = tmp->get_wrapLines();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(202)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_wrapLines,return )

bool CheckBox_obj::set_wrapLines( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_wrapLines",0xf6169cc3,"haxe.ui.toolkit.controls.CheckBox.set_wrapLines","haxe/ui/toolkit/controls/CheckBox.hx",205,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(206)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	bool tmp2 = tmp->set_wrapLines(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_wrapLines,return )

bool CheckBox_obj::get_selected( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_selected",0xb34239b9,"haxe.ui.toolkit.controls.CheckBox.get_selected","haxe/ui/toolkit/controls/CheckBox.hx",209,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_selected,return )

bool CheckBox_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_selected",0xc83b5d2d,"haxe.ui.toolkit.controls.CheckBox.set_selected","haxe/ui/toolkit/controls/CheckBox.hx",213,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(214)
	bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	if ((tmp2)){
		HX_STACK_LINE(215)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		return tmp3;
	}
	HX_STACK_LINE(218)
	::haxe::ui::toolkit::controls::CheckBoxValue tmp3 = this->_value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	bool tmp4 = (value == true);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(218)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(218)
	if ((tmp4)){
		HX_STACK_LINE(218)
		tmp5 = HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1");
	}
	else{
		HX_STACK_LINE(218)
		tmp5 = HX_HCSTRING("unselected","\xb4","\x11","\x31","\x37");
	}
	HX_STACK_LINE(218)
	tmp3->set_value(tmp5);
	HX_STACK_LINE(219)
	this->_selected = value;
	HX_STACK_LINE(221)
	::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(221)
	::openfl::_legacy::events::Event tmp7 = ::openfl::_legacy::events::Event_obj::__new(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(221)
	::openfl::_legacy::events::Event event = tmp7;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(222)
	::openfl::_legacy::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(222)
	this->dispatchEvent(tmp8);
	HX_STACK_LINE(224)
	bool tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(224)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_selected,return )

Void CheckBox_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","applyStyle",0x8c278cf8,"haxe.ui.toolkit.controls.CheckBox.applyStyle","haxe/ui/toolkit/controls/CheckBox.hx",230,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		this->super::applyStyle();
		HX_STACK_LINE(234)
		::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		if ((tmp1)){
			HX_STACK_LINE(235)
			::haxe::ui::toolkit::style::Style tmp2 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(235)
			::haxe::ui::toolkit::style::Style labelStyle = tmp2;		HX_STACK_VAR(labelStyle,"labelStyle");
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::style::Style tmp3 = this->_baseStyle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(236)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(236)
			if ((tmp4)){
				HX_STACK_LINE(237)
				::haxe::ui::toolkit::style::Style tmp5 = this->_baseStyle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				::String tmp6 = tmp5->get_fontName();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(237)
				labelStyle->set_fontName(tmp6);
				HX_STACK_LINE(238)
				::haxe::ui::toolkit::style::Style tmp7 = this->_baseStyle;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(238)
				Float tmp8 = tmp7->get_fontSize();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(238)
				labelStyle->set_fontSize(tmp8);
				HX_STACK_LINE(239)
				::haxe::ui::toolkit::style::Style tmp9 = this->_baseStyle;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(239)
				bool tmp10 = tmp9->get_fontEmbedded();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(239)
				labelStyle->set_fontEmbedded(tmp10);
				HX_STACK_LINE(240)
				::haxe::ui::toolkit::style::Style tmp11 = this->_baseStyle;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(240)
				int tmp12 = tmp11->get_color();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(240)
				labelStyle->set_color(tmp12);
			}
			HX_STACK_LINE(242)
			::haxe::ui::toolkit::controls::Text tmp5 = this->_label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			::haxe::ui::toolkit::style::Style tmp6 = labelStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(242)
			tmp5->set_baseStyle(tmp6);
		}
	}
return null();
}


Array< ::String > CheckBox_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_states",0x533bb520,"haxe.ui.toolkit.controls.CheckBox.get_states","haxe/ui/toolkit/controls/CheckBox.hx",250,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	return Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("over","\x54","\x91","\xb8","\x49")).Add(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
}


Void CheckBox_obj::resizeEventTarget( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","resizeEventTarget",0xbcf30a02,"haxe.ui.toolkit.controls.CheckBox.resizeEventTarget","haxe/ui/toolkit/controls/CheckBox.hx",256,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(257)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp = this->get_layout();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		::openfl::_legacy::geom::Rectangle tmp1 = tmp->get_padding();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		Float tmp2 = tmp1->get_left();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		Float targetX = tmp2;		HX_STACK_VAR(targetX,"targetX");
		HX_STACK_LINE(258)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp3 = this->get_layout();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		::openfl::_legacy::geom::Rectangle tmp4 = tmp3->get_padding();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(258)
		Float tmp5 = tmp4->get_top();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(258)
		Float targetY = tmp5;		HX_STACK_VAR(targetY,"targetY");
		HX_STACK_LINE(259)
		Float tmp6 = this->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(259)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(259)
		::openfl::_legacy::geom::Rectangle tmp8 = tmp7->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(259)
		Float tmp9 = tmp8->get_left();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(259)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp10 = this->get_layout();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(259)
		::openfl::_legacy::geom::Rectangle tmp11 = tmp10->get_padding();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(259)
		Float tmp12 = tmp11->get_right();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(259)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(259)
		Float tmp14 = (tmp6 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(259)
		Float targetCX = tmp14;		HX_STACK_VAR(targetCX,"targetCX");
		HX_STACK_LINE(260)
		Float tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(260)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp16 = this->get_layout();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(260)
		::openfl::_legacy::geom::Rectangle tmp17 = tmp16->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(260)
		Float tmp18 = tmp17->get_top();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(260)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp19 = this->get_layout();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(260)
		::openfl::_legacy::geom::Rectangle tmp20 = tmp19->get_padding();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(260)
		Float tmp21 = tmp20->get_bottom();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(260)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(260)
		Float tmp23 = (tmp15 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(260)
		Float targetCY = tmp23;		HX_STACK_VAR(targetCY,"targetCY");
		HX_STACK_LINE(262)
		::openfl::_legacy::display::Sprite tmp24 = this->_eventTarget;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(262)
		tmp24->set_alpha((int)0);
		HX_STACK_LINE(263)
		::openfl::_legacy::display::Sprite tmp25 = this->_eventTarget;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(263)
		::openfl::_legacy::display::Graphics tmp26 = tmp25->get_graphics();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(263)
		tmp26->clear();
		HX_STACK_LINE(264)
		::openfl::_legacy::display::Sprite tmp27 = this->_eventTarget;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(264)
		::openfl::_legacy::display::Graphics tmp28 = tmp27->get_graphics();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(264)
		tmp28->beginFill((int)16711935,null());
		HX_STACK_LINE(265)
		::openfl::_legacy::display::Sprite tmp29 = this->_eventTarget;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(265)
		::openfl::_legacy::display::Graphics tmp30 = tmp29->get_graphics();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(265)
		tmp30->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(266)
		::openfl::_legacy::display::Sprite tmp31 = this->_eventTarget;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(266)
		::openfl::_legacy::display::Graphics tmp32 = tmp31->get_graphics();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(266)
		Float tmp33 = targetX;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(266)
		Float tmp34 = targetY;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(266)
		Float tmp35 = targetCX;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(266)
		Float tmp36 = targetCY;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(266)
		tmp32->drawRect(tmp33,tmp34,tmp35,tmp36);
		HX_STACK_LINE(267)
		::openfl::_legacy::display::Sprite tmp37 = this->_eventTarget;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(267)
		::openfl::_legacy::display::Graphics tmp38 = tmp37->get_graphics();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(267)
		tmp38->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,resizeEventTarget,(void))

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
	HX_MARK_MEMBER_NAME(_eventTarget,"_eventTarget");
	HX_MARK_MEMBER_NAME(_down,"_down");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_eventTarget,"_eventTarget");
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
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
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
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_eventTarget") ) { return _eventTarget; }
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
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resizeEventTarget") ) { return resizeEventTarget_dyn(); }
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
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_eventTarget") ) { _eventTarget=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	outFields->push(HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"));
	outFields->push(HX_HCSTRING("_eventTarget","\x0c","\xed","\x43","\x40"));
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
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(CheckBox_obj,_eventTarget),HX_HCSTRING("_eventTarget","\x0c","\xed","\x43","\x40")},
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
	HX_HCSTRING("_eventTarget","\x0c","\xed","\x43","\x40"),
	HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
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
	HX_HCSTRING("resizeEventTarget","\x77","\x99","\x62","\x99"),
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
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
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
