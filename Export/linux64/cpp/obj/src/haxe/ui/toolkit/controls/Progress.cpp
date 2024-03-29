#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgressLayout
#include <haxe/ui/toolkit/controls/HProgressLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VProgressLayout
#include <haxe/ui/toolkit/controls/VProgressLayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Progress_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","new",0x89f92e35,"haxe.ui.toolkit.controls.Progress.new","haxe/ui/toolkit/controls/Progress.hx",20,0x8f3b099b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->_incrementSize = ((Float)1);
	HX_STACK_LINE(24)
	this->_pos = ((Float)0);
	HX_STACK_LINE(23)
	this->_max = ((Float)100);
	HX_STACK_LINE(22)
	this->_min = ((Float)0);
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	this->addStates(Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")),null());
	HX_STACK_LINE(33)
	this->set_direction(HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::core::StateComponent tmp = ::haxe::ui::toolkit::core::StateComponent_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	this->_valueBgComp = tmp;
	HX_STACK_LINE(35)
	::haxe::ui::toolkit::core::StateComponent tmp1 = this->_valueBgComp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	tmp1->addStates(Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")),null());
	HX_STACK_LINE(36)
	::haxe::ui::toolkit::core::StateComponent tmp2 = this->_valueBgComp;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	tmp2->set_id(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	HX_STACK_LINE(37)
	::haxe::ui::toolkit::core::StateComponent tmp3 = ::haxe::ui::toolkit::core::StateComponent_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	this->_valueComp = tmp3;
	HX_STACK_LINE(38)
	::haxe::ui::toolkit::core::StateComponent tmp4 = this->_valueComp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(38)
	tmp4->addStates(Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")),null());
	HX_STACK_LINE(39)
	::haxe::ui::toolkit::core::StateComponent tmp5 = this->_valueComp;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	tmp5->set_id(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
}
;
	return null();
}

//Progress_obj::~Progress_obj() { }

Dynamic Progress_obj::__CreateEmpty() { return  new Progress_obj; }
hx::ObjectPtr< Progress_obj > Progress_obj::__new()
{  hx::ObjectPtr< Progress_obj > _result_ = new Progress_obj();
	_result_->__construct();
	return _result_;}

Dynamic Progress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Progress_obj > _result_ = new Progress_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Progress_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDirectional_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDirectional_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IScrollable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *();
	return super::__ToInterface(inType);
}

Progress_obj::operator ::haxe::ui::toolkit::core::interfaces::IDirectional_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDirectional_delegate_< Progress_obj >(this); }
Progress_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Progress_obj >(this); }
Progress_obj::operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IScrollable_delegate_< Progress_obj >(this); }
Void Progress_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","initialize",0xfc24681b,"haxe.ui.toolkit.controls.Progress.initialize","haxe/ui/toolkit/controls/Progress.hx",46,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::initialize();
		HX_STACK_LINE(49)
		::haxe::ui::toolkit::core::StateComponent tmp = this->_valueBgComp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		this->addChild(tmp);
		HX_STACK_LINE(50)
		::haxe::ui::toolkit::core::StateComponent tmp1 = this->_valueBgComp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		::haxe::ui::toolkit::core::StateComponent tmp2 = this->_valueComp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		tmp1->addChild(tmp2);
	}
return null();
}


::String Progress_obj::get_direction( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_direction",0xc18f102b,"haxe.ui.toolkit.controls.Progress.get_direction","haxe/ui/toolkit/controls/Progress.hx",87,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::String tmp = this->_direction;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_direction,return )

::String Progress_obj::set_direction( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_direction",0x0694f237,"haxe.ui.toolkit.controls.Progress.set_direction","haxe/ui/toolkit/controls/Progress.hx",91,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(92)
	this->_direction = value;
	HX_STACK_LINE(93)
	bool tmp = (value == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	if ((tmp)){
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::controls::HProgressLayout tmp1 = ::haxe::ui::toolkit::controls::HProgressLayout_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		this->_layout = tmp1;
	}
	else{
		HX_STACK_LINE(95)
		bool tmp1 = (value == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(96)
			::haxe::ui::toolkit::controls::VProgressLayout tmp2 = ::haxe::ui::toolkit::controls::VProgressLayout_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			this->_layout = tmp2;
		}
	}
	HX_STACK_LINE(98)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_direction,return )

Float Progress_obj::get_min( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_min",0xcf39467e,"haxe.ui.toolkit.controls.Progress.get_min","haxe/ui/toolkit/controls/Progress.hx",101,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	Float tmp = this->_min;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_min,return )

Float Progress_obj::set_min( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_min",0xc23ad78a,"haxe.ui.toolkit.controls.Progress.set_min","haxe/ui/toolkit/controls/Progress.hx",105,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(106)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	Float tmp1 = this->_min;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	if ((tmp2)){
		HX_STACK_LINE(107)
		this->_min = value;
		HX_STACK_LINE(108)
		::String tmp3 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		::openfl::_legacy::events::Event tmp4 = ::openfl::_legacy::events::Event_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		::openfl::_legacy::events::Event changeEvent = tmp4;		HX_STACK_VAR(changeEvent,"changeEvent");
		HX_STACK_LINE(109)
		::openfl::_legacy::events::Event tmp5 = changeEvent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		this->dispatchEvent(tmp5);
		HX_STACK_LINE(110)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(112)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_min,return )

Float Progress_obj::get_max( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_max",0xcf393f90,"haxe.ui.toolkit.controls.Progress.get_max","haxe/ui/toolkit/controls/Progress.hx",115,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	Float tmp = this->_max;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_max,return )

Float Progress_obj::set_max( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_max",0xc23ad09c,"haxe.ui.toolkit.controls.Progress.set_max","haxe/ui/toolkit/controls/Progress.hx",119,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(120)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Float tmp1 = this->_max;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	if ((tmp2)){
		HX_STACK_LINE(121)
		this->_max = value;
		HX_STACK_LINE(122)
		::String tmp3 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		::openfl::_legacy::events::Event tmp4 = ::openfl::_legacy::events::Event_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		::openfl::_legacy::events::Event changeEvent = tmp4;		HX_STACK_VAR(changeEvent,"changeEvent");
		HX_STACK_LINE(123)
		::openfl::_legacy::events::Event tmp5 = changeEvent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		this->dispatchEvent(tmp5);
		HX_STACK_LINE(124)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(126)
	Float tmp3 = this->_max;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_max,return )

Float Progress_obj::get_pos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_pos",0xcf3b9280,"haxe.ui.toolkit.controls.Progress.get_pos","haxe/ui/toolkit/controls/Progress.hx",129,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	Float tmp = this->_pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_pos,return )

Float Progress_obj::set_pos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_pos",0xc23d238c,"haxe.ui.toolkit.controls.Progress.set_pos","haxe/ui/toolkit/controls/Progress.hx",133,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(134)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	if ((tmp)){
		HX_STACK_LINE(135)
		Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		Float tmp2 = this->_min;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		if ((tmp3)){
			HX_STACK_LINE(136)
			Float tmp4 = this->_min;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			value = tmp4;
		}
		HX_STACK_LINE(138)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		Float tmp5 = this->_max;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(138)
		bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(138)
		if ((tmp6)){
			HX_STACK_LINE(139)
			Float tmp7 = this->_max;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(139)
			value = tmp7;
		}
	}
	HX_STACK_LINE(143)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	Float tmp2 = this->_pos;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	if ((tmp3)){
		HX_STACK_LINE(144)
		this->_pos = value;
		HX_STACK_LINE(145)
		::String tmp4 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		::openfl::_legacy::events::Event tmp5 = ::openfl::_legacy::events::Event_obj::__new(tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		::openfl::_legacy::events::Event changeEvent = tmp5;		HX_STACK_VAR(changeEvent,"changeEvent");
		HX_STACK_LINE(146)
		::openfl::_legacy::events::Event tmp6 = changeEvent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(146)
		this->dispatchEvent(tmp6);
		HX_STACK_LINE(147)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(149)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(149)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_pos,return )

Float Progress_obj::get_pageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_pageSize",0xaf71ee44,"haxe.ui.toolkit.controls.Progress.get_pageSize","haxe/ui/toolkit/controls/Progress.hx",153,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_pageSize,return )

Float Progress_obj::set_pageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_pageSize",0xc46b11b8,"haxe.ui.toolkit.controls.Progress.set_pageSize","haxe/ui/toolkit/controls/Progress.hx",156,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(157)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_pageSize,return )

Float Progress_obj::get_incrementSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_incrementSize",0xf1362a7c,"haxe.ui.toolkit.controls.Progress.get_incrementSize","haxe/ui/toolkit/controls/Progress.hx",160,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	Float tmp = this->_incrementSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_incrementSize,return )

Float Progress_obj::set_incrementSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_incrementSize",0x14a40288,"haxe.ui.toolkit.controls.Progress.set_incrementSize","haxe/ui/toolkit/controls/Progress.hx",164,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(165)
	this->_incrementSize = value;
	HX_STACK_LINE(166)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(166)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_incrementSize,return )

::haxe::ui::toolkit::core::DisplayObject Progress_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","clone",0x8c7b5072,"haxe.ui.toolkit.controls.Progress.clone","src/haxe/ui/toolkit/controls/Progress.hx",1,0x952e37e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Progress c = ((::haxe::ui::toolkit::controls::Progress)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::String tmp1 = this->get_direction();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_direction(tmp1);
	HX_STACK_LINE(4)
	Float tmp2 = this->get_min();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_min(tmp2);
	HX_STACK_LINE(5)
	Float tmp3 = this->get_max();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_max(tmp3);
	HX_STACK_LINE(6)
	Float tmp4 = this->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	c->set_pos(tmp4);
	HX_STACK_LINE(7)
	Float tmp5 = this->get_pageSize();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(7)
	c->set_pageSize(tmp5);
	HX_STACK_LINE(8)
	Float tmp6 = this->get_incrementSize();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(8)
	c->set_incrementSize(tmp6);
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::controls::Progress tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(9)
	return tmp7;
}


::haxe::ui::toolkit::core::DisplayObject Progress_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","self",0x335d4817,"haxe.ui.toolkit.controls.Progress.self","src/haxe/ui/toolkit/controls/Progress.hx",1,0x952e37e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Progress tmp = ::haxe::ui::toolkit::controls::Progress_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Progress_obj::Progress_obj()
{
}

void Progress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Progress);
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_MARK_MEMBER_NAME(_valueBgComp,"_valueBgComp");
	HX_MARK_MEMBER_NAME(_valueComp,"_valueComp");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Progress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_VISIT_MEMBER_NAME(_valueBgComp,"_valueBgComp");
	HX_VISIT_MEMBER_NAME(_valueComp,"_valueComp");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Progress_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return get_max(); }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return get_pos(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { return _min; }
		if (HX_FIELD_EQ(inName,"_max") ) { return _max; }
		if (HX_FIELD_EQ(inName,"_pos") ) { return _pos; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == hx::paccAlways) return get_pageSize(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return get_direction(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { return _direction; }
		if (HX_FIELD_EQ(inName,"_valueComp") ) { return _valueComp; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_valueBgComp") ) { return _valueBgComp; }
		if (HX_FIELD_EQ(inName,"get_pageSize") ) { return get_pageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pageSize") ) { return set_pageSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { if (inCallProp == hx::paccAlways) return get_incrementSize(); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { return _incrementSize; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_incrementSize") ) { return get_incrementSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_incrementSize") ) { return set_incrementSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Progress_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp == hx::paccAlways) return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp == hx::paccAlways) return set_max(inValue); }
		if (HX_FIELD_EQ(inName,"pos") ) { if (inCallProp == hx::paccAlways) return set_pos(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { if (inCallProp == hx::paccAlways) return set_pageSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return set_direction(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_valueComp") ) { _valueComp=inValue.Cast< ::haxe::ui::toolkit::core::StateComponent >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_valueBgComp") ) { _valueBgComp=inValue.Cast< ::haxe::ui::toolkit::core::StateComponent >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { if (inCallProp == hx::paccAlways) return set_incrementSize(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { _incrementSize=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Progress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_direction","\x00","\xde","\xe2","\x6b"));
	outFields->push(HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"));
	outFields->push(HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a"));
	outFields->push(HX_HCSTRING("_valueBgComp","\xc6","\x4d","\x16","\x11"));
	outFields->push(HX_HCSTRING("_valueComp","\xe1","\xec","\xeb","\xe9"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	outFields->push(HX_HCSTRING("pageSize","\xb0","\x7a","\x1b","\x55"));
	outFields->push(HX_HCSTRING("incrementSize","\x90","\x16","\xfc","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Progress_obj,_direction),HX_HCSTRING("_direction","\x00","\xde","\xe2","\x6b")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_min),HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_max),HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_pos),HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_incrementSize),HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a")},
	{hx::fsObject /*::haxe::ui::toolkit::core::StateComponent*/ ,(int)offsetof(Progress_obj,_valueBgComp),HX_HCSTRING("_valueBgComp","\xc6","\x4d","\x16","\x11")},
	{hx::fsObject /*::haxe::ui::toolkit::core::StateComponent*/ ,(int)offsetof(Progress_obj,_valueComp),HX_HCSTRING("_valueComp","\xe1","\xec","\xeb","\xe9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_direction","\x00","\xde","\xe2","\x6b"),
	HX_HCSTRING("_min","\x93","\x56","\x1e","\x3f"),
	HX_HCSTRING("_max","\xa5","\x4f","\x1e","\x3f"),
	HX_HCSTRING("_pos","\x95","\xa2","\x20","\x3f"),
	HX_HCSTRING("_incrementSize","\xd1","\x06","\x4e","\x8a"),
	HX_HCSTRING("_valueBgComp","\xc6","\x4d","\x16","\x11"),
	HX_HCSTRING("_valueComp","\xe1","\xec","\xeb","\xe9"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	HX_HCSTRING("get_min","\x29","\xda","\xc7","\x26"),
	HX_HCSTRING("set_min","\x35","\x6b","\xc9","\x19"),
	HX_HCSTRING("get_max","\x3b","\xd3","\xc7","\x26"),
	HX_HCSTRING("set_max","\x47","\x64","\xc9","\x19"),
	HX_HCSTRING("get_pos","\x2b","\x26","\xca","\x26"),
	HX_HCSTRING("set_pos","\x37","\xb7","\xcb","\x19"),
	HX_HCSTRING("get_pageSize","\xb9","\x2e","\x35","\x0a"),
	HX_HCSTRING("set_pageSize","\x2d","\x52","\x2e","\x1f"),
	HX_HCSTRING("get_incrementSize","\xe7","\x21","\x6c","\x52"),
	HX_HCSTRING("set_incrementSize","\xf3","\xf9","\xd9","\x75"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#endif

hx::Class Progress_obj::__mClass;

void Progress_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Progress","\xc3","\xef","\x76","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Progress_obj >;
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
