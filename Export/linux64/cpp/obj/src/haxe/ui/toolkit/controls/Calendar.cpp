#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Calendar
#include <haxe/ui/toolkit/controls/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CalendarDay
#include <haxe/ui/toolkit/controls/CalendarDay.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CalendarLayout
#include <haxe/ui/toolkit/controls/CalendarLayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
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
namespace controls{

Void Calendar_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","new",0xe986f1c6,"haxe.ui.toolkit.controls.Calendar.new","haxe/ui/toolkit/controls/Calendar.hx",21,0xe933a32a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::controls::CalendarLayout tmp = ::haxe::ui::toolkit::controls::CalendarLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	this->_layout = tmp;
	HX_STACK_LINE(24)
	this->_autoSize = false;
	HX_STACK_LINE(25)
	this->_dayItems = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(26)
	::Date tmp1 = ::Date_obj::now();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->_selectedDate = tmp1;
}
;
	return null();
}

//Calendar_obj::~Calendar_obj() { }

Dynamic Calendar_obj::__CreateEmpty() { return  new Calendar_obj; }
hx::ObjectPtr< Calendar_obj > Calendar_obj::__new()
{  hx::ObjectPtr< Calendar_obj > _result_ = new Calendar_obj();
	_result_->__construct();
	return _result_;}

Dynamic Calendar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Calendar_obj > _result_ = new Calendar_obj();
	_result_->__construct();
	return _result_;}

Void Calendar_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","preInitialize",0x12075c39,"haxe.ui.toolkit.controls.Calendar.preInitialize","haxe/ui/toolkit/controls/Calendar.hx",32,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::preInitialize();
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			while((true)){
				HX_STACK_LINE(35)
				bool tmp = (_g < (int)6);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(35)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(35)
				if ((tmp1)){
					HX_STACK_LINE(35)
					break;
				}
				HX_STACK_LINE(35)
				int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(35)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(36)
				{
					HX_STACK_LINE(36)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(36)
					while((true)){
						HX_STACK_LINE(36)
						bool tmp3 = (_g1 < (int)7);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(36)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(36)
						if ((tmp4)){
							HX_STACK_LINE(36)
							break;
						}
						HX_STACK_LINE(36)
						int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(36)
						int j = tmp5;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(37)
						::haxe::ui::toolkit::controls::CalendarDay tmp6 = ::haxe::ui::toolkit::controls::CalendarDay_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(37)
						::haxe::ui::toolkit::controls::CalendarDay dayItem = tmp6;		HX_STACK_VAR(dayItem,"dayItem");
						HX_STACK_LINE(38)
						::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(38)
						int tmp8 = this->_dayItems->length;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(38)
						Dynamic tmp9 = this->buildMouseClickFunction(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(38)
						dayItem->addEventListener(tmp7,tmp9,null(),null(),null());
						HX_STACK_LINE(39)
						::haxe::ui::toolkit::controls::CalendarDay tmp10 = dayItem;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(39)
						this->_dayItems->push(tmp10);
						HX_STACK_LINE(40)
						::haxe::ui::toolkit::controls::CalendarDay tmp11 = dayItem;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(40)
						this->addChild(tmp11);
					}
				}
			}
		}
		HX_STACK_LINE(43)
		::Date tmp = ::Date_obj::now();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		this->set_date(tmp);
	}
return null();
}


Void Calendar_obj::previousMonth( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","previousMonth",0xbeb8f06f,"haxe.ui.toolkit.controls.Calendar.previousMonth","haxe/ui/toolkit/controls/Calendar.hx",49,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		(this->_month)--;
		HX_STACK_LINE(51)
		int tmp = this->_month;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		if ((tmp1)){
			HX_STACK_LINE(52)
			this->_month = (int)11;
			HX_STACK_LINE(53)
			(this->_year)--;
		}
		HX_STACK_LINE(55)
		int tmp2 = this->_day;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		int tmp3 = this->_month;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		int tmp4 = this->_year;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		int tmp5 = this->getEndDay(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		Float tmp6 = ::Math_obj::min(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(55)
		tmp7 = hx::TCast< ::Int >::cast(tmp6);
		HX_STACK_LINE(55)
		this->_day = tmp7;
		HX_STACK_LINE(56)
		int tmp8 = this->_year;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		int tmp9 = this->_month;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(56)
		int tmp10 = this->_day;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(56)
		::Date tmp11 = ::Date_obj::__new(tmp8,tmp9,tmp10,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(56)
		this->set_date(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,previousMonth,(void))

Void Calendar_obj::nextMonth( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","nextMonth",0xdaf41333,"haxe.ui.toolkit.controls.Calendar.nextMonth","haxe/ui/toolkit/controls/Calendar.hx",59,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		(this->_month)++;
		HX_STACK_LINE(61)
		int tmp = this->_month;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = (tmp > (int)11);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(62)
			this->_month = (int)0;
			HX_STACK_LINE(63)
			(this->_year)++;
		}
		HX_STACK_LINE(65)
		int tmp2 = this->_day;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		int tmp3 = this->_month;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		int tmp4 = this->_year;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		int tmp5 = this->getEndDay(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		Float tmp6 = ::Math_obj::min(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		tmp7 = hx::TCast< ::Int >::cast(tmp6);
		HX_STACK_LINE(65)
		this->_day = tmp7;
		HX_STACK_LINE(66)
		int tmp8 = this->_year;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		int tmp9 = this->_month;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		int tmp10 = this->_day;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		::Date tmp11 = ::Date_obj::__new(tmp8,tmp9,tmp10,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		this->set_date(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,nextMonth,(void))

::Date Calendar_obj::get_date( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","get_date",0x2f5a1e91,"haxe.ui.toolkit.controls.Calendar.get_date","haxe/ui/toolkit/controls/Calendar.hx",75,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::Date tmp = this->_date;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,get_date,return )

::Date Calendar_obj::set_date( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","set_date",0xddb77805,"haxe.ui.toolkit.controls.Calendar.set_date","haxe/ui/toolkit/controls/Calendar.hx",79,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(80)
	this->_date = value;
	HX_STACK_LINE(81)
	::Date tmp = this->_date;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = tmp->getFullYear();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	this->_year = tmp1;
	HX_STACK_LINE(82)
	::Date tmp2 = this->_date;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	int tmp3 = tmp2->getMonth();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	this->_month = tmp3;
	HX_STACK_LINE(83)
	::Date tmp4 = this->_date;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	int tmp5 = tmp4->getDate();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	this->_day = tmp5;
	HX_STACK_LINE(85)
	int tmp6 = this->_year;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	int tmp7 = this->_month;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	::Date tmp8 = ::Date_obj::__new(tmp6,tmp7,(int)1,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	int tmp9 = tmp8->getDay();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(85)
	int startDay = tmp9;		HX_STACK_VAR(startDay,"startDay");
	HX_STACK_LINE(86)
	int tmp10 = this->_month;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	int tmp11 = this->_year;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	int tmp12 = this->getEndDay(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(86)
	int endDay = tmp12;		HX_STACK_VAR(endDay,"endDay");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		Array< ::Dynamic > _g1 = this->_dayItems;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			bool tmp13 = (_g < _g1->length);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(88)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(88)
			if ((tmp14)){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::controls::CalendarDay tmp15 = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::CalendarDay >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::controls::CalendarDay item = tmp15;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(88)
			++(_g);
			HX_STACK_LINE(89)
			item->set_visible(false);
			HX_STACK_LINE(90)
			item->set_id(null());
		}
	}
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(93)
			bool tmp13 = (_g < endDay);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(93)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(93)
			if ((tmp14)){
				HX_STACK_LINE(93)
				break;
			}
			HX_STACK_LINE(93)
			int tmp15 = (_g)++;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(93)
			int i = tmp15;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(94)
			int tmp16 = (i + startDay);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::controls::CalendarDay tmp17 = this->_dayItems->__get(tmp16).StaticCast< ::haxe::ui::toolkit::controls::CalendarDay >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::controls::CalendarDay item = tmp17;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(95)
			item->set_visible(true);
			HX_STACK_LINE(96)
			int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(96)
			::String tmp19 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(96)
			item->set_text(tmp19);
			HX_STACK_LINE(97)
			int tmp20 = (i + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(97)
			::Date tmp21 = this->_selectedDate;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(97)
			int tmp22 = tmp21->getDate();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(97)
			bool tmp23 = (tmp20 == tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(97)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(97)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(97)
			if ((tmp24)){
				HX_STACK_LINE(97)
				int tmp26 = this->_month;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(97)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(97)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(97)
				::Date tmp29 = this->_selectedDate;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(97)
				::Date tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(97)
				::Date tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(97)
				int tmp32 = tmp31->getMonth();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(97)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(97)
				int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(97)
				tmp25 = (tmp28 == tmp34);
			}
			else{
				HX_STACK_LINE(97)
				tmp25 = false;
			}
			HX_STACK_LINE(97)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(97)
			if ((tmp25)){
				HX_STACK_LINE(97)
				int tmp27 = this->_year;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(97)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(97)
				::Date tmp29 = this->_selectedDate;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(97)
				::Date tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(97)
				int tmp31 = tmp30->getFullYear();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(97)
				int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(97)
				tmp26 = (tmp28 == tmp32);
			}
			else{
				HX_STACK_LINE(97)
				tmp26 = false;
			}
			HX_STACK_LINE(97)
			if ((tmp26)){
				HX_STACK_LINE(98)
				item->set_id(HX_HCSTRING("selectedDay","\xc1","\x6e","\x03","\x30"));
			}
		}
	}
	HX_STACK_LINE(102)
	::Date tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(102)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,set_date,return )

::Date Calendar_obj::get_selectedDate( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","get_selectedDate",0xd357d98c,"haxe.ui.toolkit.controls.Calendar.get_selectedDate","haxe/ui/toolkit/controls/Calendar.hx",105,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	::Date tmp = this->_selectedDate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,get_selectedDate,return )

::Date Calendar_obj::set_selectedDate( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","set_selectedDate",0x2999c700,"haxe.ui.toolkit.controls.Calendar.set_selectedDate","haxe/ui/toolkit/controls/Calendar.hx",109,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(110)
	this->_selectedDate = value;
	HX_STACK_LINE(111)
	::Date tmp = this->_date;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	this->set_date(tmp);
	HX_STACK_LINE(112)
	::Date tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,set_selectedDate,return )

int Calendar_obj::getEndDay( int month,int year){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","getEndDay",0x9e12405d,"haxe.ui.toolkit.controls.Calendar.getEndDay","haxe/ui/toolkit/controls/Calendar.hx",118,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(month,"month")
	HX_STACK_ARG(year,"year")
	HX_STACK_LINE(119)
	int endDay = (int)-1;		HX_STACK_VAR(endDay,"endDay");
	HX_STACK_LINE(120)
	int tmp = month;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(122)
			int tmp1 = hx::Mod(year,(int)400);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(122)
			bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(122)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			if ((tmp3)){
				HX_STACK_LINE(122)
				int tmp5 = hx::Mod(year,(int)100);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(122)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(122)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(122)
				if ((tmp9)){
					HX_STACK_LINE(122)
					int tmp10 = hx::Mod(year,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(122)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(122)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(122)
					tmp4 = (tmp12 == (int)0);
				}
				else{
					HX_STACK_LINE(122)
					tmp4 = false;
				}
			}
			else{
				HX_STACK_LINE(122)
				tmp4 = true;
			}
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(123)
				endDay = (int)29;
			}
			else{
				HX_STACK_LINE(125)
				endDay = (int)28;
			}
		}
		;break;
		case (int)3: case (int)5: case (int)8: case (int)10: {
			HX_STACK_LINE(128)
			endDay = (int)30;
		}
		;break;
		default: {
			HX_STACK_LINE(130)
			endDay = (int)31;
		}
	}
	HX_STACK_LINE(132)
	int tmp1 = endDay;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(Calendar_obj,getEndDay,return )

Dynamic Calendar_obj::buildMouseClickFunction( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","buildMouseClickFunction",0xf094cd4f,"haxe.ui.toolkit.controls.Calendar.buildMouseClickFunction","haxe/ui/toolkit/controls/Calendar.hx",135,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(135)
	::haxe::ui::toolkit::controls::Calendar _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::controls::Calendar,_g,int,index)
	int __ArgCount() const { return 1; }
	Void run(::openfl::_legacy::events::MouseEvent event){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/Calendar.hx",136,0xe933a32a)
		HX_STACK_ARG(event,"event")
		{
			HX_STACK_LINE(136)
			int tmp = index;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			_g->mouseClickButton(tmp);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(136)
	return  Dynamic(new _Function_1_1(_g,index));
}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,buildMouseClickFunction,return )

Void Calendar_obj::mouseClickButton( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","mouseClickButton",0x90a1490f,"haxe.ui.toolkit.controls.Calendar.mouseClickButton","haxe/ui/toolkit/controls/Calendar.hx",139,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::controls::CalendarDay tmp = this->_dayItems->__get(index).StaticCast< ::haxe::ui::toolkit::controls::CalendarDay >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::controls::CalendarDay item = tmp;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(141)
		::String tmp1 = item->get_text();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		Dynamic tmp2 = ::Std_obj::parseInt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		int day = tmp2;		HX_STACK_VAR(day,"day");
		HX_STACK_LINE(142)
		int tmp3 = this->_year;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		int tmp4 = this->_month;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		int tmp5 = day;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		::Date tmp6 = ::Date_obj::__new(tmp3,tmp4,tmp5,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		this->set_selectedDate(tmp6);
		HX_STACK_LINE(143)
		::String tmp7 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		::openfl::_legacy::events::Event tmp8 = ::openfl::_legacy::events::Event_obj::__new(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		this->dispatchEvent(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,mouseClickButton,(void))

::haxe::ui::toolkit::core::DisplayObject Calendar_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","clone",0x3dadda43,"haxe.ui.toolkit.controls.Calendar.clone","src/haxe/ui/toolkit/controls/Calendar.hx",1,0xef26d175)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Calendar c = ((::haxe::ui::toolkit::controls::Calendar)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::Calendar tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Calendar_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","self",0x6fdaa366,"haxe.ui.toolkit.controls.Calendar.self","src/haxe/ui/toolkit/controls/Calendar.hx",1,0xef26d175)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Calendar tmp = ::haxe::ui::toolkit::controls::Calendar_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Calendar_obj::Calendar_obj()
{
}

void Calendar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Calendar);
	HX_MARK_MEMBER_NAME(_dayItems,"_dayItems");
	HX_MARK_MEMBER_NAME(_date,"_date");
	HX_MARK_MEMBER_NAME(_year,"_year");
	HX_MARK_MEMBER_NAME(_month,"_month");
	HX_MARK_MEMBER_NAME(_day,"_day");
	HX_MARK_MEMBER_NAME(_selectedDate,"_selectedDate");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Calendar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dayItems,"_dayItems");
	HX_VISIT_MEMBER_NAME(_date,"_date");
	HX_VISIT_MEMBER_NAME(_year,"_year");
	HX_VISIT_MEMBER_NAME(_month,"_month");
	HX_VISIT_MEMBER_NAME(_day,"_day");
	HX_VISIT_MEMBER_NAME(_selectedDate,"_selectedDate");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Calendar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_day") ) { return _day; }
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == hx::paccAlways) return get_date(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_date") ) { return _date; }
		if (HX_FIELD_EQ(inName,"_year") ) { return _year; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_month") ) { return _month; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_date") ) { return get_date_dyn(); }
		if (HX_FIELD_EQ(inName,"set_date") ) { return set_date_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dayItems") ) { return _dayItems; }
		if (HX_FIELD_EQ(inName,"nextMonth") ) { return nextMonth_dyn(); }
		if (HX_FIELD_EQ(inName,"getEndDay") ) { return getEndDay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == hx::paccAlways) return get_selectedDate(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_selectedDate") ) { return _selectedDate; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"previousMonth") ) { return previousMonth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedDate") ) { return get_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedDate") ) { return set_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseClickButton") ) { return mouseClickButton_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"buildMouseClickFunction") ) { return buildMouseClickFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Calendar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_day") ) { _day=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"date") ) { if (inCallProp == hx::paccAlways) return set_date(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_date") ) { _date=inValue.Cast< ::Date >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_year") ) { _year=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_month") ) { _month=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dayItems") ) { _dayItems=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == hx::paccAlways) return set_selectedDate(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_selectedDate") ) { _selectedDate=inValue.Cast< ::Date >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Calendar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dayItems","\x63","\x4f","\x55","\x17"));
	outFields->push(HX_HCSTRING("_date","\x0d","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("_year","\x9c","\xe5","\x58","\x03"));
	outFields->push(HX_HCSTRING("_month","\x81","\x0e","\x47","\x08"));
	outFields->push(HX_HCSTRING("_day","\x5d","\x7b","\x17","\x3f"));
	outFields->push(HX_HCSTRING("_selectedDate","\x08","\x09","\x6c","\xb5"));
	outFields->push(HX_HCSTRING("date","\x2e","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("selectedDate","\x29","\x76","\xfd","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Calendar_obj,_dayItems),HX_HCSTRING("_dayItems","\x63","\x4f","\x55","\x17")},
	{hx::fsObject /*::Date*/ ,(int)offsetof(Calendar_obj,_date),HX_HCSTRING("_date","\x0d","\x72","\x74","\xf5")},
	{hx::fsInt,(int)offsetof(Calendar_obj,_year),HX_HCSTRING("_year","\x9c","\xe5","\x58","\x03")},
	{hx::fsInt,(int)offsetof(Calendar_obj,_month),HX_HCSTRING("_month","\x81","\x0e","\x47","\x08")},
	{hx::fsInt,(int)offsetof(Calendar_obj,_day),HX_HCSTRING("_day","\x5d","\x7b","\x17","\x3f")},
	{hx::fsObject /*::Date*/ ,(int)offsetof(Calendar_obj,_selectedDate),HX_HCSTRING("_selectedDate","\x08","\x09","\x6c","\xb5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_dayItems","\x63","\x4f","\x55","\x17"),
	HX_HCSTRING("_date","\x0d","\x72","\x74","\xf5"),
	HX_HCSTRING("_year","\x9c","\xe5","\x58","\x03"),
	HX_HCSTRING("_month","\x81","\x0e","\x47","\x08"),
	HX_HCSTRING("_day","\x5d","\x7b","\x17","\x3f"),
	HX_HCSTRING("_selectedDate","\x08","\x09","\x6c","\xb5"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("previousMonth","\x89","\xd3","\x53","\x33"),
	HX_HCSTRING("nextMonth","\x4d","\xe1","\xa4","\xb3"),
	HX_HCSTRING("get_date","\xb7","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_date","\x2b","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_selectedDate","\xb2","\x62","\x9c","\xd7"),
	HX_HCSTRING("set_selectedDate","\x26","\x50","\xde","\x2d"),
	HX_HCSTRING("getEndDay","\x77","\x0e","\xc3","\x76"),
	HX_HCSTRING("buildMouseClickFunction","\xe9","\x54","\x60","\x39"),
	HX_HCSTRING("mouseClickButton","\x35","\xd2","\xe5","\x94"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Calendar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Calendar_obj::__mClass,"__mClass");
};

#endif

hx::Class Calendar_obj::__mClass;

void Calendar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Calendar","\xd4","\x56","\x75","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Calendar_obj >;
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
