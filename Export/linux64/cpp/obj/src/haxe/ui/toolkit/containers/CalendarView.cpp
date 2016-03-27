#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_CalendarView
#include <haxe/ui/toolkit/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Calendar
#include <haxe/ui/toolkit/controls/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void CalendarView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","new",0xe0ef7f2f,"haxe.ui.toolkit.containers.CalendarView.new","haxe/ui/toolkit/containers/CalendarView.hx",19,0x9c504021)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::Calendar tmp = ::haxe::ui::toolkit::controls::Calendar_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	this->_calendar = tmp;
	HX_STACK_LINE(22)
	this->_autoSize = false;
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::controls::Calendar tmp1 = this->_calendar;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	tmp1->set_percentWidth((int)100);
	HX_STACK_LINE(24)
	::haxe::ui::toolkit::controls::Calendar tmp2 = this->_calendar;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	tmp2->set_percentHeight((int)100);
}
;
	return null();
}

//CalendarView_obj::~CalendarView_obj() { }

Dynamic CalendarView_obj::__CreateEmpty() { return  new CalendarView_obj; }
hx::ObjectPtr< CalendarView_obj > CalendarView_obj::__new()
{  hx::ObjectPtr< CalendarView_obj > _result_ = new CalendarView_obj();
	_result_->__construct();
	return _result_;}

Dynamic CalendarView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CalendarView_obj > _result_ = new CalendarView_obj();
	_result_->__construct();
	return _result_;}

Void CalendarView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","initialize",0xaedb8a61,"haxe.ui.toolkit.containers.CalendarView.initialize","haxe/ui/toolkit/containers/CalendarView.hx",30,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->super::initialize();
		HX_STACK_LINE(33)
		::haxe::ui::toolkit::containers::HBox tmp = ::haxe::ui::toolkit::containers::HBox_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::haxe::ui::toolkit::containers::HBox hbox = tmp;		HX_STACK_VAR(hbox,"hbox");
		HX_STACK_LINE(34)
		hbox->set_percentWidth((int)100);
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::controls::Button tmp1 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		this->_prevMonthButton = tmp1;
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::controls::Button tmp2 = this->_prevMonthButton;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		tmp2->set_text(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::controls::Button tmp3 = this->_prevMonthButton;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Dynamic tmp5 = this->_onPrevClicked_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		tmp3->addEventListener(tmp4,tmp5,null(),null(),null());
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::controls::Button tmp6 = this->_prevMonthButton;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		hbox->addChild(tmp6);
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::controls::Spacer tmp7 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::controls::Spacer spacer = tmp7;		HX_STACK_VAR(spacer,"spacer");
		HX_STACK_LINE(42)
		spacer->set_percentWidth((int)50);
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::controls::Text tmp8 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		this->_currentMonthYear = tmp8;
		HX_STACK_LINE(46)
		::haxe::ui::toolkit::controls::Text tmp9 = this->_currentMonthYear;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		tmp9->set_text(HX_HCSTRING("December 2013","\x1b","\x8f","\xd0","\x6b"));
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::controls::Text tmp10 = this->_currentMonthYear;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(47)
		tmp10->set_id(HX_HCSTRING("currentMonthYear","\xa4","\xd1","\x45","\xed"));
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::controls::Text tmp11 = this->_currentMonthYear;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		tmp11->set_percentWidth((int)100);
		HX_STACK_LINE(49)
		::haxe::ui::toolkit::controls::Text tmp12 = this->_currentMonthYear;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(49)
		tmp12->set_autoSize(false);
		HX_STACK_LINE(50)
		::haxe::ui::toolkit::controls::Text tmp13 = this->_currentMonthYear;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(50)
		hbox->addChild(tmp13);
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::controls::Spacer tmp14 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::controls::Spacer spacer1 = tmp14;		HX_STACK_VAR(spacer1,"spacer1");
		HX_STACK_LINE(53)
		spacer1->set_percentWidth((int)50);
		HX_STACK_LINE(62)
		::haxe::ui::toolkit::controls::Button tmp15 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(62)
		this->_nextMonthButton = tmp15;
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::controls::Button tmp16 = this->_nextMonthButton;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(63)
		tmp16->set_text(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));
		HX_STACK_LINE(64)
		::haxe::ui::toolkit::controls::Button tmp17 = this->_nextMonthButton;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(64)
		::String tmp18 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(64)
		Dynamic tmp19 = this->_onNextClicked_dyn();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(64)
		tmp17->addEventListener(tmp18,tmp19,null(),null(),null());
		HX_STACK_LINE(65)
		::haxe::ui::toolkit::controls::Button tmp20 = this->_nextMonthButton;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(65)
		hbox->addChild(tmp20);
		HX_STACK_LINE(67)
		::haxe::ui::toolkit::containers::HBox tmp21 = hbox;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(67)
		this->addChild(tmp21);
		HX_STACK_LINE(69)
		::haxe::ui::toolkit::controls::Calendar tmp22 = this->_calendar;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(69)
		::String tmp23 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(69)
		Dynamic tmp24 = this->_onDateChanged_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(69)
		tmp22->addEventListener(tmp23,tmp24,null(),null(),null());
		HX_STACK_LINE(70)
		::haxe::ui::toolkit::controls::Calendar tmp25 = this->_calendar;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(70)
		this->addChild(tmp25);
		HX_STACK_LINE(71)
		this->displayMonthYear();
	}
return null();
}


::Date CalendarView_obj::get_date( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","get_date",0xac4b5488,"haxe.ui.toolkit.containers.CalendarView.get_date","haxe/ui/toolkit/containers/CalendarView.hx",80,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::controls::Calendar tmp = this->_calendar;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::Date tmp1 = tmp->get_date();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CalendarView_obj,get_date,return )

::Date CalendarView_obj::set_date( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","set_date",0x5aa8adfc,"haxe.ui.toolkit.containers.CalendarView.set_date","haxe/ui/toolkit/containers/CalendarView.hx",84,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(85)
	::haxe::ui::toolkit::controls::Calendar tmp = this->_calendar;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	::Date tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	tmp->set_date(tmp1);
	HX_STACK_LINE(86)
	::Date tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,set_date,return )

::Date CalendarView_obj::get_selectedDate( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","get_selectedDate",0xaaf25e83,"haxe.ui.toolkit.containers.CalendarView.get_selectedDate","haxe/ui/toolkit/containers/CalendarView.hx",89,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	::haxe::ui::toolkit::controls::Calendar tmp = this->_calendar;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	::Date tmp1 = tmp->get_selectedDate();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CalendarView_obj,get_selectedDate,return )

::Date CalendarView_obj::set_selectedDate( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","set_selectedDate",0x01344bf7,"haxe.ui.toolkit.containers.CalendarView.set_selectedDate","haxe/ui/toolkit/containers/CalendarView.hx",93,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	::haxe::ui::toolkit::controls::Calendar tmp = this->_calendar;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	::Date tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	tmp->set_selectedDate(tmp1);
	HX_STACK_LINE(95)
	::Date tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,set_selectedDate,return )

Void CalendarView_obj::_onPrevClicked( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","_onPrevClicked",0xc741b6e7,"haxe.ui.toolkit.containers.CalendarView._onPrevClicked","haxe/ui/toolkit/containers/CalendarView.hx",101,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(102)
		::haxe::ui::toolkit::controls::Calendar tmp = this->_calendar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		tmp->previousMonth();
		HX_STACK_LINE(103)
		this->displayMonthYear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,_onPrevClicked,(void))

Void CalendarView_obj::_onNextClicked( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","_onNextClicked",0x3742b0e7,"haxe.ui.toolkit.containers.CalendarView._onNextClicked","haxe/ui/toolkit/containers/CalendarView.hx",106,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::controls::Calendar tmp = this->_calendar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		tmp->nextMonth();
		HX_STACK_LINE(108)
		this->displayMonthYear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,_onNextClicked,(void))

Void CalendarView_obj::_onDateChanged( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","_onDateChanged",0x5a4e8759,"haxe.ui.toolkit.containers.CalendarView._onDateChanged","haxe/ui/toolkit/containers/CalendarView.hx",111,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(112)
		::String tmp = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(112)
		::openfl::_legacy::events::Event tmp1 = ::openfl::_legacy::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(112)
		this->dispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,_onDateChanged,(void))

Void CalendarView_obj::displayMonthYear( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","displayMonthYear",0xc591b64c,"haxe.ui.toolkit.containers.CalendarView.displayMonthYear","haxe/ui/toolkit/containers/CalendarView.hx",118,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::haxe::ui::toolkit::controls::Calendar tmp = this->_calendar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		::Date tmp1 = tmp->get_date();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		int tmp2 = tmp1->getMonth();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		::String tmp3 = ::haxe::ui::toolkit::containers::CalendarView_obj::MONTH_NAMES->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		::String monthName = tmp3;		HX_STACK_VAR(monthName,"monthName");
		HX_STACK_LINE(120)
		::haxe::ui::toolkit::controls::Text tmp4 = this->_currentMonthYear;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		::String tmp5 = (monthName + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		::haxe::ui::toolkit::controls::Calendar tmp6 = this->_calendar;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		::Date tmp7 = tmp6->get_date();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		int tmp8 = tmp7->getFullYear();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		::String tmp9 = (tmp5 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		tmp4->set_text(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CalendarView_obj,displayMonthYear,(void))

::haxe::ui::toolkit::core::DisplayObject CalendarView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","clone",0x4a6353ec,"haxe.ui.toolkit.containers.CalendarView.clone","src/haxe/ui/toolkit/containers/CalendarView.hx",1,0x24a3b8ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::CalendarView c = ((::haxe::ui::toolkit::containers::CalendarView)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::CalendarView tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject CalendarView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","self",0xf3edd1dd,"haxe.ui.toolkit.containers.CalendarView.self","src/haxe/ui/toolkit/containers/CalendarView.hx",1,0x24a3b8ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::CalendarView tmp = ::haxe::ui::toolkit::containers::CalendarView_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


Array< ::String > CalendarView_obj::MONTH_NAMES;


CalendarView_obj::CalendarView_obj()
{
}

void CalendarView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CalendarView);
	HX_MARK_MEMBER_NAME(_calendar,"_calendar");
	HX_MARK_MEMBER_NAME(_prevMonthButton,"_prevMonthButton");
	HX_MARK_MEMBER_NAME(_nextMonthButton,"_nextMonthButton");
	HX_MARK_MEMBER_NAME(_currentMonthYear,"_currentMonthYear");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CalendarView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_calendar,"_calendar");
	HX_VISIT_MEMBER_NAME(_prevMonthButton,"_prevMonthButton");
	HX_VISIT_MEMBER_NAME(_nextMonthButton,"_nextMonthButton");
	HX_VISIT_MEMBER_NAME(_currentMonthYear,"_currentMonthYear");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CalendarView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == hx::paccAlways) return get_date(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_date") ) { return get_date_dyn(); }
		if (HX_FIELD_EQ(inName,"set_date") ) { return set_date_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_calendar") ) { return _calendar; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == hx::paccAlways) return get_selectedDate(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onPrevClicked") ) { return _onPrevClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"_onNextClicked") ) { return _onNextClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"_onDateChanged") ) { return _onDateChanged_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevMonthButton") ) { return _prevMonthButton; }
		if (HX_FIELD_EQ(inName,"_nextMonthButton") ) { return _nextMonthButton; }
		if (HX_FIELD_EQ(inName,"get_selectedDate") ) { return get_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedDate") ) { return set_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"displayMonthYear") ) { return displayMonthYear_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentMonthYear") ) { return _currentMonthYear; }
	}
	return super::__Field(inName,inCallProp);
}

bool CalendarView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"MONTH_NAMES") ) { outValue = MONTH_NAMES; return true;  }
	}
	return false;
}

Dynamic CalendarView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == hx::paccAlways) return set_date(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_calendar") ) { _calendar=inValue.Cast< ::haxe::ui::toolkit::controls::Calendar >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == hx::paccAlways) return set_selectedDate(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevMonthButton") ) { _prevMonthButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nextMonthButton") ) { _nextMonthButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentMonthYear") ) { _currentMonthYear=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CalendarView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"MONTH_NAMES") ) { MONTH_NAMES=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

void CalendarView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_calendar","\x1d","\x56","\xbf","\xc6"));
	outFields->push(HX_HCSTRING("_prevMonthButton","\xa0","\x77","\x46","\x42"));
	outFields->push(HX_HCSTRING("_nextMonthButton","\xa0","\x71","\x4c","\xdf"));
	outFields->push(HX_HCSTRING("_currentMonthYear","\x03","\xc0","\xc0","\x85"));
	outFields->push(HX_HCSTRING("date","\x2e","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("selectedDate","\x29","\x76","\xfd","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Calendar*/ ,(int)offsetof(CalendarView_obj,_calendar),HX_HCSTRING("_calendar","\x1d","\x56","\xbf","\xc6")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(CalendarView_obj,_prevMonthButton),HX_HCSTRING("_prevMonthButton","\xa0","\x77","\x46","\x42")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(CalendarView_obj,_nextMonthButton),HX_HCSTRING("_nextMonthButton","\xa0","\x71","\x4c","\xdf")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(CalendarView_obj,_currentMonthYear),HX_HCSTRING("_currentMonthYear","\x03","\xc0","\xc0","\x85")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &CalendarView_obj::MONTH_NAMES,HX_HCSTRING("MONTH_NAMES","\x09","\x26","\x60","\xe6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_calendar","\x1d","\x56","\xbf","\xc6"),
	HX_HCSTRING("_prevMonthButton","\xa0","\x77","\x46","\x42"),
	HX_HCSTRING("_nextMonthButton","\xa0","\x71","\x4c","\xdf"),
	HX_HCSTRING("_currentMonthYear","\x03","\xc0","\xc0","\x85"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("get_date","\xb7","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_date","\x2b","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_selectedDate","\xb2","\x62","\x9c","\xd7"),
	HX_HCSTRING("set_selectedDate","\x26","\x50","\xde","\x2d"),
	HX_HCSTRING("_onPrevClicked","\x56","\x01","\xb1","\x01"),
	HX_HCSTRING("_onNextClicked","\x56","\xfb","\xb1","\x71"),
	HX_HCSTRING("_onDateChanged","\xc8","\xd1","\xbd","\x94"),
	HX_HCSTRING("displayMonthYear","\x7b","\xba","\x3b","\xf2"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CalendarView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CalendarView_obj::MONTH_NAMES,"MONTH_NAMES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CalendarView_obj::MONTH_NAMES,"MONTH_NAMES");
};

#endif

hx::Class CalendarView_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("MONTH_NAMES","\x09","\x26","\x60","\xe6"),
	::String(null()) };

void CalendarView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.CalendarView","\xbd","\xbb","\xfe","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CalendarView_obj::__GetStatic;
	__mClass->mSetStaticField = &CalendarView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CalendarView_obj >;
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

void CalendarView_obj::__boot()
{
	MONTH_NAMES= Array_obj< ::String >::__new().Add(HX_HCSTRING("January","\x4a","\x18","\x86","\x71")).Add(HX_HCSTRING("Febuary","\xb6","\xb8","\xce","\x7b")).Add(HX_HCSTRING("March","\xa3","\x34","\x4f","\x96")).Add(HX_HCSTRING("April","\x26","\x77","\x6a","\xb7")).Add(HX_HCSTRING("May","\x85","\xc2","\x3a","\x00")).Add(HX_HCSTRING("June","\xe2","\xf1","\x42","\x31")).Add(HX_HCSTRING("July","\x38","\xf0","\x42","\x31")).Add(HX_HCSTRING("August","\x63","\x79","\x82","\x9f")).Add(HX_HCSTRING("September","\xf1","\x6e","\xc5","\xf7")).Add(HX_HCSTRING("October","\x00","\x0d","\x99","\x7e")).Add(HX_HCSTRING("November","\xd2","\x64","\x19","\x13")).Add(HX_HCSTRING("December","\x05","\x71","\x82","\x9e"));
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
