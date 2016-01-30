#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScrollLayout
#include <haxe/ui/toolkit/controls/VScrollLayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_Timer
#include <openfl/_legacy/utils/Timer.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void VScroll_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","new",0xa4e2313f,"haxe.ui.toolkit.controls.VScroll.new","haxe/ui/toolkit/controls/VScroll.hx",20,0xae74d851)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(36)
	this->_hasButtons = true;
	HX_STACK_LINE(33)
	this->_scrollDirection = (int)0;
	HX_STACK_LINE(31)
	this->_mouseDownOffset = ((Float)-1);
	HX_STACK_LINE(25)
	this->_incrementSize = ((Float)20);
	HX_STACK_LINE(24)
	this->_pageSize = ((Float)0);
	HX_STACK_LINE(23)
	this->_max = ((Float)100);
	HX_STACK_LINE(22)
	this->_min = ((Float)0);
	HX_STACK_LINE(21)
	this->_pos = ((Float)0);
	HX_STACK_LINE(39)
	super::__construct();
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::controls::VScrollLayout tmp = ::haxe::ui::toolkit::controls::VScrollLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->_layout = tmp;
}
;
	return null();
}

//VScroll_obj::~VScroll_obj() { }

Dynamic VScroll_obj::__CreateEmpty() { return  new VScroll_obj; }
hx::ObjectPtr< VScroll_obj > VScroll_obj::__new()
{  hx::ObjectPtr< VScroll_obj > _result_ = new VScroll_obj();
	_result_->__construct();
	return _result_;}

Dynamic VScroll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VScroll_obj > _result_ = new VScroll_obj();
	_result_->__construct();
	return _result_;}

hx::Object *VScroll_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IScrollable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *();
	return super::__ToInterface(inType);
}

VScroll_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< VScroll_obj >(this); }
VScroll_obj::operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IScrollable_delegate_< VScroll_obj >(this); }
Void VScroll_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","preInitialize",0x52a80cf2,"haxe.ui.toolkit.controls.VScroll.preInitialize","haxe/ui/toolkit/controls/VScroll.hx",46,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::preInitialize();
		HX_STACK_LINE(49)
		::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		if ((tmp1)){
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			bool tmp3 = tmp2->get_hasButtons();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			this->_hasButtons = tmp3;
		}
	}
return null();
}


Void VScroll_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","initialize",0xd3aa3a51,"haxe.ui.toolkit.controls.VScroll.initialize","haxe/ui/toolkit/controls/VScroll.hx",54,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->super::initialize();
		HX_STACK_LINE(57)
		bool tmp = this->_hasButtons;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		if ((tmp1)){
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::controls::Button tmp2 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			this->_deincButton = tmp2;
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::controls::Button tmp3 = this->_deincButton;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			tmp3->set_autoSize(false);
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::controls::Button tmp4 = this->_deincButton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			tmp4->set_iconPosition(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::controls::Button tmp5 = this->_deincButton;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(61)
			tmp5->set_percentWidth((int)100);
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::controls::Button tmp6 = this->_deincButton;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			Float tmp8 = tmp7->get_innerWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			tmp6->set_height(tmp8);
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::controls::Button tmp9 = this->_deincButton;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			tmp9->set_id(HX_HCSTRING("deinc","\xfd","\x9b","\x24","\xd7"));
			HX_STACK_LINE(64)
			::haxe::ui::toolkit::controls::Button tmp10 = this->_deincButton;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			tmp10->set_styleName(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"));
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::controls::Button tmp11 = this->_deincButton;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			::String tmp12 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(65)
			Dynamic tmp13 = this->_onDeinc_dyn();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(65)
			tmp11->addEventListener(tmp12,tmp13,null(),null(),null());
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::Button tmp14 = this->_deincButton;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(66)
			this->addChild(tmp14);
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::controls::Button tmp15 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(68)
			this->_incButton = tmp15;
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::Button tmp16 = this->_incButton;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(69)
			tmp16->set_autoSize(false);
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::Button tmp17 = this->_incButton;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(70)
			tmp17->set_iconPosition(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::Button tmp18 = this->_incButton;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(71)
			tmp18->set_percentWidth((int)100);
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::Button tmp19 = this->_incButton;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp20 = this->get_layout();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(72)
			Float tmp21 = tmp20->get_innerWidth();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(72)
			tmp19->set_height(tmp21);
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::Button tmp22 = this->_incButton;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(73)
			tmp22->set_id(HX_HCSTRING("inc","\xde","\x0c","\x50","\x00"));
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::Button tmp23 = this->_incButton;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(74)
			tmp23->set_styleName(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::Button tmp24 = this->_incButton;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(75)
			::String tmp25 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(75)
			Dynamic tmp26 = this->_onInc_dyn();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(75)
			tmp24->addEventListener(tmp25,tmp26,null(),null(),null());
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::Button tmp27 = this->_incButton;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(76)
			this->addChild(tmp27);
		}
		HX_STACK_LINE(79)
		::haxe::ui::toolkit::controls::Button tmp2 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		this->_thumb = tmp2;
		HX_STACK_LINE(80)
		::haxe::ui::toolkit::controls::Button tmp3 = this->_thumb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		tmp3->set_iconPosition(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(81)
		::haxe::ui::toolkit::controls::Button tmp4 = this->_thumb;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		tmp4->set_autoSize(false);
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::controls::Button tmp5 = this->_thumb;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		tmp5->set_percentWidth((int)100);
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::controls::Button tmp6 = this->_thumb;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		tmp6->set_height((int)50);
		HX_STACK_LINE(84)
		::haxe::ui::toolkit::controls::Button tmp7 = this->_thumb;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		tmp7->set_id(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"));
		HX_STACK_LINE(85)
		::haxe::ui::toolkit::controls::Button tmp8 = this->_thumb;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		tmp8->set_styleName(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"));
		HX_STACK_LINE(86)
		::haxe::ui::toolkit::controls::Button tmp9 = this->_thumb;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(86)
		tmp9->set_remainPressed(true);
		HX_STACK_LINE(87)
		::haxe::ui::toolkit::controls::Button tmp10 = this->_thumb;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(87)
		::String tmp11 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(87)
		Dynamic tmp12 = this->_onThumbMouseDown_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(87)
		tmp10->addEventListener(tmp11,tmp12,null(),null(),null());
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::controls::Button tmp13 = this->_thumb;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(88)
		this->addChild(tmp13);
		HX_STACK_LINE(90)
		::String tmp14 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(90)
		Dynamic tmp15 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(90)
		this->addEventListener(tmp14,tmp15,null(),null(),null());
	}
return null();
}


Void VScroll_obj::_onThumbMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onThumbMouseDown",0xadfc812e,"haxe.ui.toolkit.controls.VScroll._onThumbMouseDown","haxe/ui/toolkit/controls/VScroll.hx",96,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(97)
		::openfl::_legacy::geom::Point tmp = ::openfl::_legacy::geom::Point_obj::__new(event->stageX,event->stageY);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::openfl::_legacy::geom::Point ptStage = tmp;		HX_STACK_VAR(ptStage,"ptStage");
		HX_STACK_LINE(98)
		Float tmp1 = ptStage->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		::haxe::ui::toolkit::controls::Button tmp2 = this->_thumb;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		Float tmp3 = tmp2->get_y();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		this->_mouseDownOffset = tmp4;
		HX_STACK_LINE(100)
		::haxe::ui::toolkit::core::Screen tmp5 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		Dynamic tmp7 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
		HX_STACK_LINE(101)
		::haxe::ui::toolkit::core::Screen tmp8 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		::String tmp9 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		Dynamic tmp10 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
		HX_STACK_LINE(103)
		::String tmp11 = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(103)
		::haxe::ui::toolkit::events::UIEvent tmp12 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp11,null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(103)
		this->dispatchEvent(tmp12);
		HX_STACK_LINE(105)
		event->stopImmediatePropagation();
		HX_STACK_LINE(106)
		event->stopPropagation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onThumbMouseDown,(void))

Void VScroll_obj::_onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onScreenMouseMove",0x14334b2d,"haxe.ui.toolkit.controls.VScroll._onScreenMouseMove","haxe/ui/toolkit/controls/VScroll.hx",109,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(110)
		Float tmp = event->stageY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		Float tmp1 = this->_mouseDownOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		Float ypos = tmp2;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(111)
		Float minY = (int)0;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(112)
		::haxe::ui::toolkit::controls::Button tmp3 = this->_deincButton;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(112)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(112)
		if ((tmp4)){
			HX_STACK_LINE(113)
			::haxe::ui::toolkit::controls::Button tmp5 = this->_deincButton;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			Float tmp6 = tmp5->get_height();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			int tmp8 = tmp7->get_spacingY();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(113)
			Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(113)
			minY = tmp9;
		}
		HX_STACK_LINE(115)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp5 = this->get_layout();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		Float tmp6 = tmp5->get_usableHeight();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		::haxe::ui::toolkit::controls::Button tmp7 = this->_thumb;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		Float tmp8 = tmp7->get_height();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(115)
		Float maxY = tmp9;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(116)
		::haxe::ui::toolkit::controls::Button tmp10 = this->_deincButton;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(116)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(116)
		if ((tmp11)){
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::controls::Button tmp12 = this->_deincButton;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(117)
			Float tmp13 = tmp12->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp14 = this->get_layout();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			int tmp15 = tmp14->get_spacingY();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(117)
			Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(117)
			hx::AddEq(maxY,tmp16);
		}
		HX_STACK_LINE(119)
		bool tmp12 = (ypos < minY);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(119)
		if ((tmp12)){
			HX_STACK_LINE(120)
			ypos = minY;
		}
		else{
			HX_STACK_LINE(121)
			bool tmp13 = (ypos > maxY);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(121)
			if ((tmp13)){
				HX_STACK_LINE(122)
				ypos = maxY;
			}
		}
		HX_STACK_LINE(125)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp13 = this->get_layout();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(125)
		Float tmp14 = tmp13->get_usableHeight();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(125)
		Float ucy = tmp14;		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(126)
		::haxe::ui::toolkit::controls::Button tmp15 = this->_thumb;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(126)
		Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(126)
		hx::SubEq(ucy,tmp16);
		HX_STACK_LINE(127)
		Float tmp17 = this->get_max();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(127)
		Float tmp18 = this->get_min();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(127)
		Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(127)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(127)
		int m = tmp20;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(128)
		Float tmp21 = (ypos - minY);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(128)
		Float v = tmp21;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(129)
		Float tmp22 = this->get_min();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(129)
		Float tmp23 = (Float(v) / Float(ucy));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(129)
		int tmp24 = m;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(129)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(129)
		Float tmp26 = (tmp22 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(129)
		Float newValue = tmp26;		HX_STACK_VAR(newValue,"newValue");
		HX_STACK_LINE(130)
		Float tmp27 = newValue;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(130)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(130)
		this->set_pos(tmp28);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onScreenMouseMove,(void))

Void VScroll_obj::_onScreenMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onScreenMouseUp",0x7ef14f77,"haxe.ui.toolkit.controls.VScroll._onScreenMouseUp","haxe/ui/toolkit/controls/VScroll.hx",133,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(134)
		this->_mouseDownOffset = (int)-1;
		HX_STACK_LINE(135)
		::openfl::_legacy::utils::Timer tmp = this->_scrollTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		if ((tmp1)){
			HX_STACK_LINE(136)
			::openfl::_legacy::utils::Timer tmp2 = this->_scrollTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			tmp2->stop();
		}
		HX_STACK_LINE(139)
		::String tmp2 = HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::events::UIEvent tmp3 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp2,null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		this->dispatchEvent(tmp3);
		HX_STACK_LINE(141)
		::haxe::ui::toolkit::core::Screen tmp4 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(141)
		::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(141)
		Dynamic tmp6 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(141)
		tmp4->removeEventListener(tmp5,tmp6,null());
		HX_STACK_LINE(142)
		::haxe::ui::toolkit::core::Screen tmp7 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(142)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(142)
		Dynamic tmp9 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(142)
		tmp7->removeEventListener(tmp8,tmp9,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onScreenMouseUp,(void))

Void VScroll_obj::_onDeinc( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onDeinc",0x2c05aaa0,"haxe.ui.toolkit.controls.VScroll._onDeinc","haxe/ui/toolkit/controls/VScroll.hx",145,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(146)
		::String tmp = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		::haxe::ui::toolkit::events::UIEvent tmp1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		this->dispatchEvent(tmp1);
		HX_STACK_LINE(147)
		this->deincrementValue();
		HX_STACK_LINE(148)
		this->_scrollDirection = (int)0;
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::core::Screen tmp2 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		Dynamic tmp4 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
		HX_STACK_LINE(150)
		::openfl::_legacy::utils::Timer tmp5 = this->_scrollTimer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		if ((tmp6)){
			HX_STACK_LINE(151)
			::openfl::_legacy::utils::Timer tmp7 = ::openfl::_legacy::utils::Timer_obj::__new((int)50,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			this->_scrollTimer = tmp7;
			HX_STACK_LINE(152)
			::openfl::_legacy::utils::Timer tmp8 = this->_scrollTimer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			Dynamic tmp9 = this->_onScrollTimerComplete_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(152)
			tmp8->addEventListener(HX_HCSTRING("timerComplete","\x9e","\x49","\xcc","\x97"),tmp9,null(),null(),null());
		}
		HX_STACK_LINE(154)
		::openfl::_legacy::utils::Timer tmp7 = this->_scrollTimer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		tmp7->reset();
		HX_STACK_LINE(155)
		::openfl::_legacy::utils::Timer tmp8 = this->_scrollTimer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(155)
		tmp8->start();
		HX_STACK_LINE(157)
		event->stopImmediatePropagation();
		HX_STACK_LINE(158)
		event->stopPropagation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onDeinc,(void))

Void VScroll_obj::_onInc( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onInc",0x5e631cc1,"haxe.ui.toolkit.controls.VScroll._onInc","haxe/ui/toolkit/controls/VScroll.hx",161,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(162)
		::String tmp = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		::haxe::ui::toolkit::events::UIEvent tmp1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		this->dispatchEvent(tmp1);
		HX_STACK_LINE(163)
		this->incrementValue();
		HX_STACK_LINE(164)
		this->_scrollDirection = (int)1;
		HX_STACK_LINE(165)
		::haxe::ui::toolkit::core::Screen tmp2 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		Dynamic tmp4 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
		HX_STACK_LINE(166)
		::openfl::_legacy::utils::Timer tmp5 = this->_scrollTimer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		if ((tmp6)){
			HX_STACK_LINE(167)
			::openfl::_legacy::utils::Timer tmp7 = ::openfl::_legacy::utils::Timer_obj::__new((int)50,(int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(167)
			this->_scrollTimer = tmp7;
			HX_STACK_LINE(168)
			::openfl::_legacy::utils::Timer tmp8 = this->_scrollTimer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			Dynamic tmp9 = this->_onScrollTimerComplete_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			tmp8->addEventListener(HX_HCSTRING("timerComplete","\x9e","\x49","\xcc","\x97"),tmp9,null(),null(),null());
		}
		HX_STACK_LINE(170)
		::openfl::_legacy::utils::Timer tmp7 = this->_scrollTimer;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		tmp7->reset();
		HX_STACK_LINE(171)
		::openfl::_legacy::utils::Timer tmp8 = this->_scrollTimer;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(171)
		tmp8->start();
		HX_STACK_LINE(173)
		event->stopImmediatePropagation();
		HX_STACK_LINE(174)
		event->stopPropagation();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onInc,(void))

Void VScroll_obj::_onScrollTimerComplete( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onScrollTimerComplete",0x46924334,"haxe.ui.toolkit.controls.VScroll._onScrollTimerComplete","haxe/ui/toolkit/controls/VScroll.hx",177,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(178)
		::openfl::_legacy::utils::Timer tmp = this->_scrollTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(178)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		if ((tmp1)){
			HX_STACK_LINE(179)
			int tmp2 = this->_scrollDirection;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			bool tmp3 = (tmp2 == (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			if ((tmp3)){
				HX_STACK_LINE(180)
				this->incrementValue();
			}
			else{
				HX_STACK_LINE(181)
				int tmp4 = this->_scrollDirection;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(181)
				bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(181)
				if ((tmp5)){
					HX_STACK_LINE(182)
					this->deincrementValue();
				}
			}
			HX_STACK_LINE(184)
			::openfl::_legacy::utils::Timer tmp4 = this->_scrollTimer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			tmp4->reset();
			HX_STACK_LINE(185)
			::openfl::_legacy::utils::Timer tmp5 = this->_scrollTimer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(185)
			tmp5->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onScrollTimerComplete,(void))

Void VScroll_obj::_onMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onMouseDown",0x3e934d4a,"haxe.ui.toolkit.controls.VScroll._onMouseDown","haxe/ui/toolkit/controls/VScroll.hx",189,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(190)
		::String tmp = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		::haxe::ui::toolkit::events::UIEvent tmp1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		this->dispatchEvent(tmp1);
		HX_STACK_LINE(192)
		Float tmp2 = event->localY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		::haxe::ui::toolkit::controls::Button tmp3 = this->_thumb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		Float tmp4 = tmp3->get_y();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		if ((tmp5)){
			HX_STACK_LINE(193)
			::haxe::ui::toolkit::controls::VScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			Float tmp6 = _g->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			Float tmp7 = this->get_pageSize();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(193)
			Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(193)
			_g->set_pos(tmp8);
		}
		else{
			HX_STACK_LINE(195)
			::haxe::ui::toolkit::controls::VScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(195)
			Float tmp6 = _g->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(195)
			Float tmp7 = this->get_pageSize();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(195)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(195)
			_g->set_pos(tmp8);
		}
		HX_STACK_LINE(198)
		::String tmp6 = HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		::haxe::ui::toolkit::events::UIEvent tmp7 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp6,null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		this->dispatchEvent(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onMouseDown,(void))

Float VScroll_obj::get_pos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_pos",0x0863e28a,"haxe.ui.toolkit.controls.VScroll.get_pos","haxe/ui/toolkit/controls/VScroll.hx",230,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	Float tmp = this->_pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_pos,return )

Float VScroll_obj::set_pos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_pos",0xfb657396,"haxe.ui.toolkit.controls.VScroll.set_pos","haxe/ui/toolkit/controls/VScroll.hx",234,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(235)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	Float tmp1 = this->_min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	if ((tmp2)){
		HX_STACK_LINE(236)
		Float tmp3 = this->_min;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(236)
		value = tmp3;
	}
	HX_STACK_LINE(238)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	Float tmp4 = this->_max;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(238)
	bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(238)
	if ((tmp5)){
		HX_STACK_LINE(239)
		Float tmp6 = this->_max;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(239)
		value = tmp6;
	}
	HX_STACK_LINE(241)
	Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(241)
	Float tmp7 = this->_pos;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(241)
	bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(241)
	if ((tmp8)){
		HX_STACK_LINE(242)
		this->_pos = value;
		HX_STACK_LINE(243)
		::String tmp9 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(243)
		::openfl::_legacy::events::Event tmp10 = ::openfl::_legacy::events::Event_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(243)
		this->dispatchEvent(tmp10);
		HX_STACK_LINE(244)
		::String tmp11 = HX_HCSTRING("haxeui_scroll","\xf2","\xcc","\x40","\x19");		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(244)
		::haxe::ui::toolkit::events::UIEvent tmp12 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp11,null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(244)
		this->dispatchEvent(tmp12);
		HX_STACK_LINE(245)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(247)
	Float tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(247)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_pos,return )

Float VScroll_obj::get_min( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_min",0x08619688,"haxe.ui.toolkit.controls.VScroll.get_min","haxe/ui/toolkit/controls/VScroll.hx",250,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(251)
	Float tmp = this->_min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_min,return )

Float VScroll_obj::set_min( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_min",0xfb632794,"haxe.ui.toolkit.controls.VScroll.set_min","haxe/ui/toolkit/controls/VScroll.hx",254,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(255)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	Float tmp1 = this->_min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	if ((tmp2)){
		HX_STACK_LINE(256)
		this->_min = value;
		HX_STACK_LINE(257)
		Float tmp3 = this->_pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		Float tmp4 = this->_min;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(257)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		if ((tmp5)){
			HX_STACK_LINE(258)
			Float tmp6 = this->_min;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			this->_pos = tmp6;
		}
		HX_STACK_LINE(260)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(262)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(262)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_min,return )

Float VScroll_obj::get_max( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_max",0x08618f9a,"haxe.ui.toolkit.controls.VScroll.get_max","haxe/ui/toolkit/controls/VScroll.hx",265,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	Float tmp = this->_max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_max,return )

Float VScroll_obj::set_max( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_max",0xfb6320a6,"haxe.ui.toolkit.controls.VScroll.set_max","haxe/ui/toolkit/controls/VScroll.hx",269,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(270)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	Float tmp1 = this->_max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	if ((tmp2)){
		HX_STACK_LINE(271)
		this->_max = value;
		HX_STACK_LINE(272)
		Float tmp3 = this->_pos;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		Float tmp4 = this->_max;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		if ((tmp5)){
			HX_STACK_LINE(273)
			Float tmp6 = this->_max;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(273)
			this->_pos = tmp6;
		}
		HX_STACK_LINE(275)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(277)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(277)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_max,return )

Float VScroll_obj::get_pageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_pageSize",0xd1b939fa,"haxe.ui.toolkit.controls.VScroll.get_pageSize","haxe/ui/toolkit/controls/VScroll.hx",280,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	Float tmp = this->_pageSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_pageSize,return )

Float VScroll_obj::set_pageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_pageSize",0xe6b25d6e,"haxe.ui.toolkit.controls.VScroll.set_pageSize","haxe/ui/toolkit/controls/VScroll.hx",284,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(285)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	Float tmp1 = this->_pageSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(285)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(285)
	if ((tmp2)){
		HX_STACK_LINE(286)
		this->_pageSize = value;
		HX_STACK_LINE(287)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(289)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(289)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_pageSize,return )

Float VScroll_obj::get_incrementSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_incrementSize",0xb692ab06,"haxe.ui.toolkit.controls.VScroll.get_incrementSize","haxe/ui/toolkit/controls/VScroll.hx",292,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	Float tmp = this->_incrementSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_incrementSize,return )

Float VScroll_obj::set_incrementSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_incrementSize",0xda008312,"haxe.ui.toolkit.controls.VScroll.set_incrementSize","haxe/ui/toolkit/controls/VScroll.hx",296,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(297)
	this->_incrementSize = value;
	HX_STACK_LINE(298)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_incrementSize,return )

Void VScroll_obj::deincrementValue( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","deincrementValue",0x2a7e75c4,"haxe.ui.toolkit.controls.VScroll.deincrementValue","haxe/ui/toolkit/controls/VScroll.hx",308,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(308)
		::haxe::ui::toolkit::controls::VScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(308)
		Float tmp = _g->get_pos();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		Float tmp1 = this->_incrementSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(308)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		_g->set_pos(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,deincrementValue,(void))

Void VScroll_obj::incrementValue( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","incrementValue",0x9e853c43,"haxe.ui.toolkit.controls.VScroll.incrementValue","haxe/ui/toolkit/controls/VScroll.hx",315,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		::haxe::ui::toolkit::controls::VScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(315)
		Float tmp = _g->get_pos();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		Float tmp1 = this->_incrementSize;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		_g->set_pos(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,incrementValue,(void))

::haxe::ui::toolkit::core::DisplayObject VScroll_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","clone",0xf5f2a9fc,"haxe.ui.toolkit.controls.VScroll.clone","src/haxe/ui/toolkit/controls/VScroll.hx",1,0x50593c66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Scroll tmp = hx::TCast< ::haxe::ui::toolkit::controls::Scroll >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VScroll c = ((::haxe::ui::toolkit::controls::VScroll)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	Float tmp1 = this->get_pos();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_pos(tmp1);
	HX_STACK_LINE(4)
	Float tmp2 = this->get_min();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_min(tmp2);
	HX_STACK_LINE(5)
	Float tmp3 = this->get_max();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_max(tmp3);
	HX_STACK_LINE(6)
	Float tmp4 = this->get_pageSize();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	c->set_pageSize(tmp4);
	HX_STACK_LINE(7)
	Float tmp5 = this->get_incrementSize();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(7)
	c->set_incrementSize(tmp5);
	HX_STACK_LINE(8)
	::haxe::ui::toolkit::controls::VScroll tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(8)
	return tmp6;
}


::haxe::ui::toolkit::core::DisplayObject VScroll_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","self",0xa456edcd,"haxe.ui.toolkit.controls.VScroll.self","src/haxe/ui/toolkit/controls/VScroll.hx",1,0x50593c66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VScroll tmp = ::haxe::ui::toolkit::controls::VScroll_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



VScroll_obj::VScroll_obj()
{
}

void VScroll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VScroll);
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_pageSize,"_pageSize");
	HX_MARK_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_MARK_MEMBER_NAME(_deincButton,"_deincButton");
	HX_MARK_MEMBER_NAME(_incButton,"_incButton");
	HX_MARK_MEMBER_NAME(_thumb,"_thumb");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	HX_MARK_MEMBER_NAME(_scrollDirection,"_scrollDirection");
	HX_MARK_MEMBER_NAME(_scrollTimer,"_scrollTimer");
	HX_MARK_MEMBER_NAME(_hasButtons,"_hasButtons");
	::haxe::ui::toolkit::controls::Scroll_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VScroll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_pageSize,"_pageSize");
	HX_VISIT_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_VISIT_MEMBER_NAME(_deincButton,"_deincButton");
	HX_VISIT_MEMBER_NAME(_incButton,"_incButton");
	HX_VISIT_MEMBER_NAME(_thumb,"_thumb");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	HX_VISIT_MEMBER_NAME(_scrollDirection,"_scrollDirection");
	HX_VISIT_MEMBER_NAME(_scrollTimer,"_scrollTimer");
	HX_VISIT_MEMBER_NAME(_hasButtons,"_hasButtons");
	::haxe::ui::toolkit::controls::Scroll_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VScroll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return get_pos(); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { return _pos; }
		if (HX_FIELD_EQ(inName,"_min") ) { return _min; }
		if (HX_FIELD_EQ(inName,"_max") ) { return _max; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { return _thumb; }
		if (HX_FIELD_EQ(inName,"_onInc") ) { return _onInc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onDeinc") ) { return _onDeinc_dyn(); }
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == hx::paccAlways) return get_pageSize(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_pageSize") ) { return _pageSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { return _incButton; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { return _hasButtons; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { return _deincButton; }
		if (HX_FIELD_EQ(inName,"_scrollTimer") ) { return _scrollTimer; }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pageSize") ) { return get_pageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pageSize") ) { return set_pageSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementSize") ) { if (inCallProp == hx::paccAlways) return get_incrementSize(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { return _incrementSize; }
		if (HX_FIELD_EQ(inName,"incrementValue") ) { return incrementValue_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return _mouseDownOffset; }
		if (HX_FIELD_EQ(inName,"_scrollDirection") ) { return _scrollDirection; }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return _onScreenMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"deincrementValue") ) { return deincrementValue_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onThumbMouseDown") ) { return _onThumbMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_incrementSize") ) { return get_incrementSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_incrementSize") ) { return set_incrementSize_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_onScrollTimerComplete") ) { return _onScrollTimerComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VScroll_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue); }
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { _thumb=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == hx::paccAlways) return set_pageSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_pageSize") ) { _pageSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { _incButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { _hasButtons=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { _deincButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTimer") ) { _scrollTimer=inValue.Cast< ::openfl::_legacy::utils::Timer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { if (inCallProp == hx::paccAlways) return set_incrementSize(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { _incrementSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollDirection") ) { _scrollDirection=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VScroll_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VScroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"));
	outFields->push(HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("_pageSize","\x0f","\x72","\xb1","\x9c"));
	outFields->push(HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a"));
	outFields->push(HX_HCSTRING("_deincButton","\xd0","\xbb","\x3f","\xd6"));
	outFields->push(HX_HCSTRING("_incButton","\x31","\x59","\x95","\x97"));
	outFields->push(HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b"));
	outFields->push(HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"));
	outFields->push(HX_HCSTRING("_scrollDirection","\xf3","\xc2","\xfa","\xe1"));
	outFields->push(HX_HCSTRING("_scrollTimer","\x79","\xb6","\x1c","\xc0"));
	outFields->push(HX_HCSTRING("_hasButtons","\x26","\x07","\xb3","\x27"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("pageSize","\xb0","\x7a","\x1b","\x55"));
	outFields->push(HX_HCSTRING("incrementSize","\x90","\x16","\xfc","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(VScroll_obj,_pos),HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_min),HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_max),HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_pageSize),HX_HCSTRING("_pageSize","\x0f","\x72","\xb1","\x9c")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_incrementSize),HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(VScroll_obj,_deincButton),HX_HCSTRING("_deincButton","\xd0","\xbb","\x3f","\xd6")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(VScroll_obj,_incButton),HX_HCSTRING("_incButton","\x31","\x59","\x95","\x97")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(VScroll_obj,_thumb),HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_mouseDownOffset),HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98")},
	{hx::fsInt,(int)offsetof(VScroll_obj,_scrollDirection),HX_HCSTRING("_scrollDirection","\xf3","\xc2","\xfa","\xe1")},
	{hx::fsObject /*::openfl::_legacy::utils::Timer*/ ,(int)offsetof(VScroll_obj,_scrollTimer),HX_HCSTRING("_scrollTimer","\x79","\xb6","\x1c","\xc0")},
	{hx::fsBool,(int)offsetof(VScroll_obj,_hasButtons),HX_HCSTRING("_hasButtons","\x26","\x07","\xb3","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	HX_HCSTRING("_pageSize","\x0f","\x72","\xb1","\x9c"),
	HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a"),
	HX_HCSTRING("_deincButton","\xd0","\xbb","\x3f","\xd6"),
	HX_HCSTRING("_incButton","\x31","\x59","\x95","\x97"),
	HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b"),
	HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"),
	HX_HCSTRING("_scrollDirection","\xf3","\xc2","\xfa","\xe1"),
	HX_HCSTRING("_scrollTimer","\x79","\xb6","\x1c","\xc0"),
	HX_HCSTRING("_hasButtons","\x26","\x07","\xb3","\x27"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("_onThumbMouseDown","\x0f","\xf8","\xd5","\x49"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("_onScreenMouseUp","\xb6","\x0f","\x00","\xd0"),
	HX_HCSTRING("_onDeinc","\xdf","\x93","\x1a","\xa7"),
	HX_HCSTRING("_onInc","\x40","\xe8","\x4e","\x2e"),
	HX_HCSTRING("_onScrollTimerComplete","\xb3","\x3c","\xf9","\x2a"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("get_pageSize","\xb9","\x2e","\x35","\x0a"),
	HX_HCSTRING("set_pageSize","\x2d","\x52","\x2e","\x1f"),
	HX_HCSTRING("get_incrementSize","\xe7","\x21","\x6c","\x52"),
	HX_HCSTRING("set_incrementSize","\xf3","\xf9","\xd9","\x75"),
	HX_HCSTRING("deincrementValue","\x03","\x36","\x8d","\x7b"),
	HX_HCSTRING("incrementValue","\xc2","\x1e","\x77","\xe5"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VScroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VScroll_obj::__mClass,"__mClass");
};

#endif

hx::Class VScroll_obj::__mClass;

void VScroll_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.VScroll","\xcd","\x25","\x0b","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VScroll_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VScroll_obj >;
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
