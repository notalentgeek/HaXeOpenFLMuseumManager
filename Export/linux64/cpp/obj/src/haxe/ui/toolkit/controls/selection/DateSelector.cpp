#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_CalendarView
#include <haxe/ui/toolkit/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_DateSelector
#include <haxe/ui/toolkit/controls/selection/DateSelector.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
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
namespace selection{

Void DateSelector_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","new",0x0e397ad7,"haxe.ui.toolkit.controls.selection.DateSelector.new","haxe/ui/toolkit/controls/selection/DateSelector.hx",14,0x0ade2058)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(183)
	this->dateFormat = HX_HCSTRING("%d/%m/%Y","\x2b","\x5a","\x76","\xe3");
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->set_text(HX_HCSTRING("Select Date","\xd2","\x3d","\x7f","\x44"));
	HX_STACK_LINE(22)
	this->set_toggle(true);
}
;
	return null();
}

//DateSelector_obj::~DateSelector_obj() { }

Dynamic DateSelector_obj::__CreateEmpty() { return  new DateSelector_obj; }
hx::ObjectPtr< DateSelector_obj > DateSelector_obj::__new()
{  hx::ObjectPtr< DateSelector_obj > _result_ = new DateSelector_obj();
	_result_->__construct();
	return _result_;}

Dynamic DateSelector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DateSelector_obj > _result_ = new DateSelector_obj();
	_result_->__construct();
	return _result_;}

Void DateSelector_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","preInitialize",0x5f64448a,"haxe.ui.toolkit.controls.selection.DateSelector.preInitialize","haxe/ui/toolkit/controls/selection/DateSelector.hx",28,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->super::preInitialize();
		HX_STACK_LINE(31)
		::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		if ((tmp1)){
			HX_STACK_LINE(32)
			::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			::String tmp3 = tmp2->get_selectionMethod();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			if ((tmp4)){
				HX_STACK_LINE(33)
				::haxe::ui::toolkit::style::Style tmp5 = this->_baseStyle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				::String tmp6 = tmp5->get_selectionMethod();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(33)
				this->_method = tmp6;
			}
		}
	}
return null();
}


Void DateSelector_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","initialize",0xabb1d3b9,"haxe.ui.toolkit.controls.selection.DateSelector.initialize","haxe/ui/toolkit/controls/selection/DateSelector.hx",38,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->super::initialize();
		HX_STACK_LINE(40)
		this->set_autoSize(false);
	}
return null();
}


Void DateSelector_obj::_onMouseClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","_onMouseClick",0xf99fa9f8,"haxe.ui.toolkit.controls.selection.DateSelector._onMouseClick","haxe/ui/toolkit/controls/selection/DateSelector.hx",43,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(44)
		::openfl::_legacy::events::MouseEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		this->super::_onMouseClick(tmp);
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::containers::CalendarView tmp1 = this->_cal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		if ((tmp3)){
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::containers::CalendarView tmp5 = this->_cal;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::containers::CalendarView tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			bool tmp7 = tmp6->get_visible();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			tmp4 = (tmp8 == false);
		}
		else{
			HX_STACK_LINE(45)
			tmp4 = true;
		}
		HX_STACK_LINE(45)
		if ((tmp4)){
			HX_STACK_LINE(46)
			this->showCalendar();
		}
		else{
			HX_STACK_LINE(48)
			this->hideCalendar();
		}
	}
return null();
}


Void DateSelector_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","applyStyle",0xee65c34c,"haxe.ui.toolkit.controls.selection.DateSelector.applyStyle","haxe/ui/toolkit/controls/selection/DateSelector.hx",52,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		this->super::applyStyle();
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(56)
			::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			::String tmp3 = tmp2->get_selectionMethod();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(56)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			if ((tmp4)){
				HX_STACK_LINE(56)
				::String tmp6 = this->_method;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(56)
				::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(56)
				tmp5 = (tmp7 == null());
			}
			else{
				HX_STACK_LINE(56)
				tmp5 = false;
			}
			HX_STACK_LINE(56)
			if ((tmp5)){
				HX_STACK_LINE(57)
				::haxe::ui::toolkit::style::Style tmp6 = this->_baseStyle;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(57)
				::String tmp7 = tmp6->get_selectionMethod();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(57)
				this->_method = tmp7;
			}
		}
	}
return null();
}


Void DateSelector_obj::showCalendar( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","showCalendar",0x0e698384,"haxe.ui.toolkit.controls.selection.DateSelector.showCalendar","haxe/ui/toolkit/controls/selection/DateSelector.hx",65,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		::haxe::ui::toolkit::controls::selection::DateSelector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		::String tmp = this->_method;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = (tmp == HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::core::PopupManager tmp2 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::controls::selection::DateSelector,_g)
			int __ArgCount() const { return 2; }
			Void run(Dynamic button,::Date date){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/selection/DateSelector.hx",67,0x0ade2058)
				HX_STACK_ARG(button,"button")
				HX_STACK_ARG(date,"date")
				{
					HX_STACK_LINE(68)
					_g->set_selected(false);
					HX_STACK_LINE(69)
					bool tmp3 = (button == (int)65536);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(69)
					if ((tmp3)){
						HX_STACK_LINE(70)
						::Date tmp4 = date;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(70)
						::String tmp5 = _g->dateFormat;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(70)
						::String tmp6 = ::DateTools_obj::format(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(70)
						::String dateString = tmp6;		HX_STACK_VAR(dateString,"dateString");
						HX_STACK_LINE(71)
						::String tmp7 = dateString;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						_g->set_text(tmp7);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(67)
			tmp2->showCalendar(HX_HCSTRING("Select Date","\xd2","\x3d","\x7f","\x44"), Dynamic(new _Function_2_1(_g)));
		}
		else{
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::containers::CalendarView tmp2 = this->_cal;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			if ((tmp3)){
				HX_STACK_LINE(76)
				::haxe::ui::toolkit::containers::CalendarView tmp4 = ::haxe::ui::toolkit::containers::CalendarView_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(76)
				this->_cal = tmp4;
				HX_STACK_LINE(77)
				::haxe::ui::toolkit::containers::CalendarView tmp5 = this->_cal;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				tmp5->set_styleName(HX_HCSTRING("dropDown","\x31","\xa0","\x08","\xe8"));
				HX_STACK_LINE(78)
				::String tmp6 = this->get_id();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(78)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				if ((tmp7)){
					HX_STACK_LINE(79)
					::haxe::ui::toolkit::containers::CalendarView tmp8 = this->_cal;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(79)
					::String tmp9 = this->get_id();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(79)
					::String tmp10 = (tmp9 + HX_HCSTRING("_dropDown","\x90","\x97","\x9e","\x2f"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(79)
					tmp8->set_id(tmp10);
				}
				HX_STACK_LINE(81)
				::haxe::ui::toolkit::containers::CalendarView tmp8 = this->_cal;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				::String tmp9 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(81)
				Dynamic tmp10 = this->onDateChange_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(81)
				tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
				HX_STACK_LINE(82)
				::haxe::ui::toolkit::containers::CalendarView tmp11 = this->_cal;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(82)
				::String tmp12 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp12,"tmp12");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::haxe::ui::toolkit::controls::selection::DateSelector,_g)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","haxe/ui/toolkit/controls/selection/DateSelector.hx",83,0x0ade2058)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(83)
						_g->showCalendar();
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(82)
				tmp11->addEventListener(tmp12, Dynamic(new _Function_3_1(_g)),null(),null(),null());
				HX_STACK_LINE(85)
				::haxe::ui::toolkit::core::Root tmp13 = this->get_root();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(85)
				::haxe::ui::toolkit::containers::CalendarView tmp14 = this->_cal;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				tmp13->addChild(tmp14);
				HX_STACK_LINE(86)
				return null();
			}
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::core::Root tmp4 = this->get_root();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			Dynamic tmp6 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			tmp4->addEventListener(tmp5,tmp6,null(),null(),null());
			HX_STACK_LINE(90)
			::haxe::ui::toolkit::core::Root tmp7 = this->get_root();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(90)
			::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			Dynamic tmp9 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			tmp7->addEventListener(tmp8,tmp9,null(),null(),null());
			HX_STACK_LINE(92)
			::haxe::ui::toolkit::containers::CalendarView tmp10 = this->_cal;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(92)
			Float tmp11 = this->get_stageX();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(92)
			::haxe::ui::toolkit::core::Root tmp12 = this->get_root();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(92)
			Float tmp13 = tmp12->get_stageX();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(92)
			Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(92)
			tmp10->set_x(tmp14);
			HX_STACK_LINE(93)
			::haxe::ui::toolkit::containers::CalendarView tmp15 = this->_cal;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(93)
			Float tmp16 = this->get_stageY();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(93)
			Float tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(93)
			Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(93)
			::haxe::ui::toolkit::core::Root tmp19 = this->get_root();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(93)
			Float tmp20 = tmp19->get_stageY();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(93)
			Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(93)
			tmp15->set_y(tmp21);
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::containers::CalendarView tmp22 = this->_cal;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(94)
			Float tmp23 = tmp22->get_stageY();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::containers::CalendarView tmp24 = this->_cal;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(94)
			Float tmp25 = tmp24->get_height();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(94)
			Float tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::core::Screen tmp27 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(94)
			Float tmp28 = tmp27->get_height();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(94)
			Float tmp29 = ::haxe::ui::toolkit::core::Toolkit_obj::get_scaleFactor();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(94)
			Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(94)
			bool tmp31 = (tmp26 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(94)
			if ((tmp31)){
				HX_STACK_LINE(95)
				::haxe::ui::toolkit::containers::CalendarView tmp32 = this->_cal;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(95)
				Float tmp33 = this->get_stageY();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(95)
				::haxe::ui::toolkit::containers::CalendarView tmp34 = this->_cal;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(95)
				Float tmp35 = tmp34->get_height();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(95)
				Float tmp36 = (tmp33 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(95)
				tmp32->set_y(tmp36);
				HX_STACK_LINE(96)
				this->set_styleName(HX_HCSTRING("dropUp","\x6a","\x2c","\x12","\xe9"));
			}
			else{
				HX_STACK_LINE(98)
				this->set_styleName(null());
			}
			HX_STACK_LINE(101)
			::String tmp32 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::DateSelector >());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(101)
			::String transition = tmp32;		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(102)
			Float tmp33 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::DateSelector >());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(102)
			Float transitionTime = tmp33;		HX_STACK_VAR(transitionTime,"transitionTime");
			HX_STACK_LINE(103)
			bool tmp34 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(103)
			if ((tmp34)){
				HX_STACK_LINE(104)
				::haxe::ui::toolkit::containers::CalendarView tmp35 = this->_cal;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(104)
				tmp35->set_clipHeight((int)0);
				HX_STACK_LINE(105)
				::haxe::ui::toolkit::containers::CalendarView tmp36 = this->_cal;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(105)
				::openfl::_legacy::display::Sprite tmp37 = tmp36->get_sprite();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(105)
				tmp37->set_alpha((int)1);
				HX_STACK_LINE(106)
				::haxe::ui::toolkit::containers::CalendarView tmp38 = this->_cal;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(106)
				tmp38->set_visible(true);
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::containers::CalendarView tmp39 = this->_cal;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(107)
				Float tmp40 = transitionTime;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::containers::CalendarView tmp41 = this->_cal;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(107)
				Float tmp42 = tmp41->get_height();		HX_STACK_VAR(tmp42,"tmp42");
				struct _Function_3_1{
					inline static Dynamic Block( Float &tmp42){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",107,0x0ade2058)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , tmp42,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(107)
				Dynamic tmp43 = _Function_3_1::Block(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(107)
				::motion::actuators::GenericActuator tmp44 = ::motion::Actuate_obj::tween(tmp39,tmp40,tmp43,true,null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(107)
				::motion::easing::IEasing tmp45 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(107)
				::motion::actuators::GenericActuator tmp46 = tmp44->ease(tmp45);		HX_STACK_VAR(tmp46,"tmp46");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,::haxe::ui::toolkit::controls::selection::DateSelector,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/selection/DateSelector.hx",108,0x0ade2058)
					{
						HX_STACK_LINE(108)
						_g->_cal->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(107)
				tmp46->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(110)
				bool tmp35 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(110)
				if ((tmp35)){
					HX_STACK_LINE(111)
					::haxe::ui::toolkit::containers::CalendarView tmp36 = this->_cal;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(111)
					::openfl::_legacy::display::Sprite tmp37 = tmp36->get_sprite();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(111)
					tmp37->set_alpha((int)0);
					HX_STACK_LINE(112)
					::haxe::ui::toolkit::containers::CalendarView tmp38 = this->_cal;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(112)
					tmp38->set_visible(true);
					HX_STACK_LINE(113)
					::haxe::ui::toolkit::containers::CalendarView tmp39 = this->_cal;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(113)
					::openfl::_legacy::display::Sprite tmp40 = tmp39->get_sprite();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(113)
					Float tmp41 = transitionTime;		HX_STACK_VAR(tmp41,"tmp41");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",113,0x0ade2058)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(113)
					Dynamic tmp42 = _Function_4_1::Block();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(113)
					::motion::actuators::GenericActuator tmp43 = ::motion::Actuate_obj::tween(tmp40,tmp41,tmp42,true,null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(113)
					::motion::easing::IEasing tmp44 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(113)
					::motion::actuators::GenericActuator tmp45 = tmp43->ease(tmp44);		HX_STACK_VAR(tmp45,"tmp45");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/selection/DateSelector.hx",113,0x0ade2058)
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(113)
					tmp45->onComplete( Dynamic(new _Function_4_2()),null());
				}
				else{
					HX_STACK_LINE(116)
					::haxe::ui::toolkit::containers::CalendarView tmp36 = this->_cal;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(116)
					::openfl::_legacy::display::Sprite tmp37 = tmp36->get_sprite();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(116)
					tmp37->set_alpha((int)1);
					HX_STACK_LINE(117)
					::haxe::ui::toolkit::containers::CalendarView tmp38 = this->_cal;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(117)
					tmp38->set_visible(true);
				}
			}
			HX_STACK_LINE(120)
			this->set_selected(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DateSelector_obj,showCalendar,(void))

Void DateSelector_obj::hideCalendar( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","hideCalendar",0xa3e1b049,"haxe.ui.toolkit.controls.selection.DateSelector.hideCalendar","haxe/ui/toolkit/controls/selection/DateSelector.hx",124,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(124)
		::haxe::ui::toolkit::controls::selection::DateSelector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		::haxe::ui::toolkit::containers::CalendarView tmp = this->_cal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		if ((tmp1)){
			HX_STACK_LINE(126)
			::String tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::DateSelector >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			::String transition = tmp2;		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(127)
			Float tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::DateSelector >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			Float transitionTime = tmp3;		HX_STACK_VAR(transitionTime,"transitionTime");
			HX_STACK_LINE(128)
			bool tmp4 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			if ((tmp4)){
				HX_STACK_LINE(129)
				::haxe::ui::toolkit::containers::CalendarView tmp5 = this->_cal;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(129)
				::openfl::_legacy::display::Sprite tmp6 = tmp5->get_sprite();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(129)
				tmp6->set_alpha((int)1);
				HX_STACK_LINE(130)
				::haxe::ui::toolkit::containers::CalendarView tmp7 = this->_cal;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(130)
				Float tmp8 = transitionTime;		HX_STACK_VAR(tmp8,"tmp8");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",130,0x0ade2058)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(130)
				Dynamic tmp9 = _Function_3_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(130)
				::motion::actuators::GenericActuator tmp10 = ::motion::Actuate_obj::tween(tmp7,tmp8,tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(130)
				::motion::easing::IEasing tmp11 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(130)
				::motion::actuators::GenericActuator tmp12 = tmp10->ease(tmp11);		HX_STACK_VAR(tmp12,"tmp12");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,::haxe::ui::toolkit::controls::selection::DateSelector,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/selection/DateSelector.hx",130,0x0ade2058)
					{
						HX_STACK_LINE(131)
						_g->_cal->set_visible(false);
						HX_STACK_LINE(132)
						_g->_cal->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(130)
				tmp12->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(134)
				bool tmp5 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				if ((tmp5)){
					HX_STACK_LINE(135)
					::haxe::ui::toolkit::containers::CalendarView tmp6 = this->_cal;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(135)
					::openfl::_legacy::display::Sprite tmp7 = tmp6->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(135)
					Float tmp8 = transitionTime;		HX_STACK_VAR(tmp8,"tmp8");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",135,0x0ade2058)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(135)
					Dynamic tmp9 = _Function_4_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					::motion::actuators::GenericActuator tmp10 = ::motion::Actuate_obj::tween(tmp7,tmp8,tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(135)
					::motion::easing::IEasing tmp11 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(135)
					::motion::actuators::GenericActuator tmp12 = tmp10->ease(tmp11);		HX_STACK_VAR(tmp12,"tmp12");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_2,::haxe::ui::toolkit::controls::selection::DateSelector,_g)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/selection/DateSelector.hx",136,0x0ade2058)
						{
							HX_STACK_LINE(136)
							_g->_cal->set_visible(false);
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(135)
					tmp12->onComplete( Dynamic(new _Function_4_2(_g)),null());
				}
				else{
					HX_STACK_LINE(139)
					::haxe::ui::toolkit::containers::CalendarView tmp6 = this->_cal;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(139)
					::openfl::_legacy::display::Sprite tmp7 = tmp6->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(139)
					tmp7->set_alpha((int)1);
					HX_STACK_LINE(140)
					::haxe::ui::toolkit::containers::CalendarView tmp8 = this->_cal;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(140)
					tmp8->set_visible(false);
				}
			}
			HX_STACK_LINE(143)
			this->set_selected(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DateSelector_obj,hideCalendar,(void))

::String DateSelector_obj::get_method( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","get_method",0xb8d90913,"haxe.ui.toolkit.controls.selection.DateSelector.get_method","haxe/ui/toolkit/controls/selection/DateSelector.hx",159,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_LINE(160)
	::String tmp = this->_method;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DateSelector_obj,get_method,return )

::String DateSelector_obj::set_method( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","set_method",0xbc56a787,"haxe.ui.toolkit.controls.selection.DateSelector.set_method","haxe/ui/toolkit/controls/selection/DateSelector.hx",163,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(164)
	this->_method = value;
	HX_STACK_LINE(165)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DateSelector_obj,set_method,return )

::Date DateSelector_obj::get_date( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","get_date",0x75e817e0,"haxe.ui.toolkit.controls.selection.DateSelector.get_date","haxe/ui/toolkit/controls/selection/DateSelector.hx",173,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_LINE(174)
	::haxe::ui::toolkit::containers::CalendarView tmp = this->_cal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	if ((tmp1)){
		HX_STACK_LINE(175)
		::haxe::ui::toolkit::containers::CalendarView tmp2 = this->_cal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(175)
		::Date tmp3 = tmp2->get_selectedDate();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(175)
		return tmp3;
	}
	HX_STACK_LINE(177)
	::Date tmp2 = ::Date_obj::now();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DateSelector_obj,get_date,return )

::String DateSelector_obj::set_dateFormat( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","set_dateFormat",0xf69e2bab,"haxe.ui.toolkit.controls.selection.DateSelector.set_dateFormat","haxe/ui/toolkit/controls/selection/DateSelector.hx",185,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(186)
	this->dateFormat = value;
	HX_STACK_LINE(187)
	::haxe::ui::toolkit::containers::CalendarView tmp = this->_cal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	if ((tmp1)){
		HX_STACK_LINE(188)
		::haxe::ui::toolkit::containers::CalendarView tmp2 = this->_cal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		::Date tmp3 = tmp2->get_selectedDate();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		::String tmp4 = this->dateFormat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		::String tmp5 = ::DateTools_obj::format(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		this->set_text(tmp5);
	}
	HX_STACK_LINE(190)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DateSelector_obj,set_dateFormat,return )

Void DateSelector_obj::_onRootMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","_onRootMouseDown",0x95ca4fb0,"haxe.ui.toolkit.controls.selection.DateSelector._onRootMouseDown","haxe/ui/toolkit/controls/selection/DateSelector.hx",196,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(197)
		bool mouseInList = false;		HX_STACK_VAR(mouseInList,"mouseInList");
		HX_STACK_LINE(198)
		::haxe::ui::toolkit::containers::CalendarView tmp = this->_cal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp1)){
			HX_STACK_LINE(199)
			::haxe::ui::toolkit::containers::CalendarView tmp2 = this->_cal;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			Float tmp3 = event->stageX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			Float tmp4 = event->stageY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(199)
			bool tmp5 = tmp2->hitTest(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			mouseInList = tmp5;
		}
		HX_STACK_LINE(202)
		Float tmp2 = event->stageX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		Float tmp3 = event->stageY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		bool tmp4 = this->hitTest(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		bool mouseIn = tmp4;		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(203)
		bool tmp5 = (mouseInList == false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(203)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(203)
		if ((tmp6)){
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::containers::CalendarView tmp8 = this->_cal;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::containers::CalendarView tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::containers::CalendarView tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(203)
			tmp7 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(203)
			tmp7 = false;
		}
		HX_STACK_LINE(203)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(203)
		if ((tmp7)){
			HX_STACK_LINE(203)
			tmp8 = (mouseIn == false);
		}
		else{
			HX_STACK_LINE(203)
			tmp8 = false;
		}
		HX_STACK_LINE(203)
		if ((tmp8)){
			HX_STACK_LINE(204)
			::haxe::ui::toolkit::core::Root tmp9 = this->get_root();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(204)
			Dynamic tmp11 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(204)
			tmp9->removeEventListener(tmp10,tmp11,null());
			HX_STACK_LINE(205)
			::haxe::ui::toolkit::core::Root tmp12 = this->get_root();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(205)
			::String tmp13 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(205)
			Dynamic tmp14 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(205)
			tmp12->removeEventListener(tmp13,tmp14,null());
			HX_STACK_LINE(206)
			this->hideCalendar();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DateSelector_obj,_onRootMouseDown,(void))

Void DateSelector_obj::onDateChange( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","onDateChange",0x8560a2e6,"haxe.ui.toolkit.controls.selection.DateSelector.onDateChange","haxe/ui/toolkit/controls/selection/DateSelector.hx",210,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(211)
		::haxe::ui::toolkit::containers::CalendarView tmp = this->_cal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		::Date tmp1 = tmp->get_selectedDate();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		::String tmp2 = this->dateFormat;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		::String tmp3 = ::DateTools_obj::format(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		::String dateString = tmp3;		HX_STACK_VAR(dateString,"dateString");
		HX_STACK_LINE(212)
		::String tmp4 = dateString;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		this->set_text(tmp4);
		HX_STACK_LINE(213)
		this->hideCalendar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DateSelector_obj,onDateChange,(void))

::haxe::ui::toolkit::core::DisplayObject DateSelector_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","clone",0xdae18994,"haxe.ui.toolkit.controls.selection.DateSelector.clone","src/haxe/ui/toolkit/controls/selection/DateSelector.hx",1,0x507d9be3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button tmp = hx::TCast< ::haxe::ui::toolkit::controls::Button >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::selection::DateSelector c = ((::haxe::ui::toolkit::controls::selection::DateSelector)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::selection::DateSelector tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject DateSelector_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","self",0x67600935,"haxe.ui.toolkit.controls.selection.DateSelector.self","src/haxe/ui/toolkit/controls/selection/DateSelector.hx",1,0x507d9be3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::selection::DateSelector tmp = ::haxe::ui::toolkit::controls::selection::DateSelector_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



DateSelector_obj::DateSelector_obj()
{
}

void DateSelector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DateSelector);
	HX_MARK_MEMBER_NAME(_cal,"_cal");
	HX_MARK_MEMBER_NAME(_method,"_method");
	HX_MARK_MEMBER_NAME(dateFormat,"dateFormat");
	::haxe::ui::toolkit::controls::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DateSelector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cal,"_cal");
	HX_VISIT_MEMBER_NAME(_method,"_method");
	HX_VISIT_MEMBER_NAME(dateFormat,"dateFormat");
	::haxe::ui::toolkit::controls::Button_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DateSelector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_cal") ) { return _cal; }
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == hx::paccAlways) return get_date(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { if (inCallProp == hx::paccAlways) return get_method(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_method") ) { return _method; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_date") ) { return get_date_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_method") ) { return get_method_dyn(); }
		if (HX_FIELD_EQ(inName,"set_method") ) { return set_method_dyn(); }
		if (HX_FIELD_EQ(inName,"dateFormat") ) { return dateFormat; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"showCalendar") ) { return showCalendar_dyn(); }
		if (HX_FIELD_EQ(inName,"hideCalendar") ) { return hideCalendar_dyn(); }
		if (HX_FIELD_EQ(inName,"onDateChange") ) { return onDateChange_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_dateFormat") ) { return set_dateFormat_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DateSelector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_cal") ) { _cal=inValue.Cast< ::haxe::ui::toolkit::containers::CalendarView >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { if (inCallProp == hx::paccAlways) return set_method(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_method") ) { _method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dateFormat") ) { if (inCallProp == hx::paccAlways) return set_dateFormat(inValue);dateFormat=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DateSelector_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void DateSelector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_cal","\x0f","\xb9","\x16","\x3f"));
	outFields->push(HX_HCSTRING("_method","\x80","\x08","\xd2","\x77"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("date","\x2e","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dateFormat","\x05","\x30","\x86","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::CalendarView*/ ,(int)offsetof(DateSelector_obj,_cal),HX_HCSTRING("_cal","\x0f","\xb9","\x16","\x3f")},
	{hx::fsString,(int)offsetof(DateSelector_obj,_method),HX_HCSTRING("_method","\x80","\x08","\xd2","\x77")},
	{hx::fsString,(int)offsetof(DateSelector_obj,dateFormat),HX_HCSTRING("dateFormat","\x05","\x30","\x86","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_cal","\x0f","\xb9","\x16","\x3f"),
	HX_HCSTRING("_method","\x80","\x08","\xd2","\x77"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("_onMouseClick","\xc1","\xa4","\xdd","\x20"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("showCalendar","\xdb","\xb4","\xb6","\xaa"),
	HX_HCSTRING("hideCalendar","\xa0","\xe1","\x2e","\x40"),
	HX_HCSTRING("get_method","\xaa","\x66","\xe2","\xf9"),
	HX_HCSTRING("set_method","\x1e","\x05","\x60","\xfd"),
	HX_HCSTRING("get_date","\xb7","\x11","\x1e","\xc2"),
	HX_HCSTRING("dateFormat","\x05","\x30","\x86","\x8f"),
	HX_HCSTRING("set_dateFormat","\xc2","\xa0","\x9b","\x25"),
	HX_HCSTRING("_onRootMouseDown","\x87","\x78","\xe0","\x96"),
	HX_HCSTRING("onDateChange","\x3d","\xd4","\xad","\x21"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DateSelector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DateSelector_obj::__mClass,"__mClass");
};

#endif

hx::Class DateSelector_obj::__mClass;

void DateSelector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.selection.DateSelector","\x65","\xc3","\x67","\x65");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &DateSelector_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DateSelector_obj >;
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
} // end namespace selection
