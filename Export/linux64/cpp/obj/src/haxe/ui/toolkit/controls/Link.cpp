#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Link
#include <haxe/ui/toolkit/controls/Link.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Link_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","new",0x4bbf3602,"haxe.ui.toolkit.controls.Link.new","haxe/ui/toolkit/controls/Link.hx",10,0x9f6b5a6e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->_isOver = false;
	HX_STACK_LINE(24)
	this->_isDown = false;
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(29)
	this->set_useHandCursor(true);
}
;
	return null();
}

//Link_obj::~Link_obj() { }

Dynamic Link_obj::__CreateEmpty() { return  new Link_obj; }
hx::ObjectPtr< Link_obj > Link_obj::__new()
{  hx::ObjectPtr< Link_obj > _result_ = new Link_obj();
	_result_->__construct();
	return _result_;}

Dynamic Link_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Link_obj > _result_ = new Link_obj();
	_result_->__construct();
	return _result_;}

Void Link_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","initialize",0xcda2a3ee,"haxe.ui.toolkit.controls.Link.initialize","haxe/ui/toolkit/controls/Link.hx",32,0x9f6b5a6e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::initialize();
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		Dynamic tmp2 = this->_onScreenMouseDown_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		tmp->addEventListener(tmp1,tmp2,null(),null(),null());
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::core::Screen tmp3 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		Dynamic tmp5 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		tmp3->addEventListener(tmp4,tmp5,null(),null(),null());
	}
return null();
}


Void Link_obj::_onScreenMouseDown( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","_onScreenMouseDown",0x22572f1b,"haxe.ui.toolkit.controls.Link._onScreenMouseDown","haxe/ui/toolkit/controls/Link.hx",40,0x9f6b5a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(41)
		bool tmp = this->ensureVisible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		if ((tmp1)){
			HX_STACK_LINE(42)
			return null();
		}
		HX_STACK_LINE(45)
		Float tmp2 = e->stageX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		Float tmp3 = e->stageY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		bool tmp4 = this->hitTest(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		if ((tmp5)){
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			Float tmp9 = e->stageX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			Float tmp10 = e->stageY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			Float tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			Float tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			bool tmp13 = tmp8->hitTest(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(45)
			tmp6 = (tmp14 == true);
		}
		else{
			HX_STACK_LINE(45)
			tmp6 = false;
		}
		HX_STACK_LINE(45)
		if ((tmp6)){
			HX_STACK_LINE(46)
			this->_isDown = true;
			HX_STACK_LINE(47)
			this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			HX_STACK_LINE(48)
			::haxe::ui::toolkit::core::Screen tmp7 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(48)
			::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(48)
			Dynamic tmp9 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(48)
			tmp7->addEventListener(tmp8,tmp9,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Link_obj,_onScreenMouseDown,(void))

Void Link_obj::_onScreenMouseMove( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","_onScreenMouseMove",0x284a19ca,"haxe.ui.toolkit.controls.Link._onScreenMouseMove","haxe/ui/toolkit/controls/Link.hx",52,0x9f6b5a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(53)
		bool tmp = this->ensureVisible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		if ((tmp1)){
			HX_STACK_LINE(54)
			return null();
		}
		HX_STACK_LINE(57)
		Float tmp2 = e->stageX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		Float tmp3 = e->stageY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		bool tmp4 = this->hitTest(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		if ((tmp5)){
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = this->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(57)
			Float tmp9 = e->stageX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(57)
			Float tmp10 = e->stageY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(57)
			Float tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(57)
			Float tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(57)
			bool tmp13 = tmp8->hitTest(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(57)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(57)
			tmp6 = (tmp14 == true);
		}
		else{
			HX_STACK_LINE(57)
			tmp6 = false;
		}
		HX_STACK_LINE(57)
		if ((tmp6)){
			HX_STACK_LINE(58)
			bool tmp7 = this->_isDown;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			bool tmp8 = (tmp7 == true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			if ((tmp8)){
				HX_STACK_LINE(59)
				this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			}
			else{
				HX_STACK_LINE(61)
				this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
			}
			HX_STACK_LINE(63)
			this->_isOver = true;
		}
		else{
			HX_STACK_LINE(64)
			bool tmp7 = this->_isOver;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(64)
			bool tmp8 = (tmp7 == true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(64)
			if ((tmp8)){
				HX_STACK_LINE(65)
				this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
				HX_STACK_LINE(66)
				this->_isOver = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Link_obj,_onScreenMouseMove,(void))

Void Link_obj::_onScreenMouseUp( ::openfl::_legacy::events::MouseEvent e){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","_onScreenMouseUp",0x11484cd4,"haxe.ui.toolkit.controls.Link._onScreenMouseUp","haxe/ui/toolkit/controls/Link.hx",70,0x9f6b5a6e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(71)
		bool tmp = this->ensureVisible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(72)
			return null();
		}
		HX_STACK_LINE(75)
		::haxe::ui::toolkit::core::Screen tmp2 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		Dynamic tmp4 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		tmp2->removeEventListener(tmp3,tmp4,null());
		HX_STACK_LINE(76)
		Float tmp5 = e->stageX;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		Float tmp6 = e->stageY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		bool tmp7 = this->hitTest(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		bool tmp8 = (tmp7 == true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		if ((tmp9)){
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp11 = this->get_parent();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(76)
			Float tmp14 = e->stageX;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(76)
			Float tmp15 = e->stageY;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(76)
			Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(76)
			Float tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(76)
			Float tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(76)
			Float tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(76)
			bool tmp20 = tmp13->hitTest(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(76)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(76)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(76)
			tmp10 = (tmp22 == true);
		}
		else{
			HX_STACK_LINE(76)
			tmp10 = false;
		}
		HX_STACK_LINE(76)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(76)
		if ((tmp10)){
			HX_STACK_LINE(76)
			bool tmp12 = this->_isDown;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(76)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(76)
			tmp11 = (tmp13 == true);
		}
		else{
			HX_STACK_LINE(76)
			tmp11 = false;
		}
		HX_STACK_LINE(76)
		if ((tmp11)){
			HX_STACK_LINE(77)
			this->_isDown = false;
			HX_STACK_LINE(78)
			this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
			HX_STACK_LINE(81)
			::String tmp12 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::events::UIEvent tmp13 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp12,null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::events::UIEvent uiEvent = tmp13;		HX_STACK_VAR(uiEvent,"uiEvent");
			HX_STACK_LINE(82)
			::haxe::ui::toolkit::events::UIEvent tmp14 = uiEvent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			this->dispatchEvent(tmp14);
			HX_STACK_LINE(85)
			::String tmp15 = this->url;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(85)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(85)
			if ((tmp16)){
				HX_STACK_LINE(86)
				::String tmp17 = this->url;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(86)
				::openfl::_legacy::net::URLRequest tmp18 = ::openfl::_legacy::net::URLRequest_obj::__new(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				::openfl::_legacy::Lib_obj::getURL(tmp18,null());
			}
		}
		else{
			HX_STACK_LINE(88)
			bool tmp12 = this->_isOver;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(88)
			bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(88)
			if ((tmp13)){
				HX_STACK_LINE(89)
				this->_isDown = false;
				HX_STACK_LINE(90)
				this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Link_obj,_onScreenMouseUp,(void))

Array< ::String > Link_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","get_states",0xd76abba9,"haxe.ui.toolkit.controls.Link.get_states","haxe/ui/toolkit/controls/Link.hx",100,0x9f6b5a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(100)
	return Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("over","\x54","\x91","\xb8","\x49")).Add(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
}


bool Link_obj::ensureVisible( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","ensureVisible",0xa83e8276,"haxe.ui.toolkit.controls.Link.ensureVisible","haxe/ui/toolkit/controls/Link.hx",106,0x9f6b5a6e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(107)
	bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	if ((tmp1)){
		HX_STACK_LINE(108)
		return false;
	}
	HX_STACK_LINE(110)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_parent();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer p = tmp2;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(111)
	while((true)){
		HX_STACK_LINE(111)
		bool tmp3 = (p != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		if ((tmp4)){
			HX_STACK_LINE(111)
			break;
		}
		HX_STACK_LINE(112)
		bool tmp5 = p->get_visible();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(112)
		bool tmp6 = (tmp5 == false);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(112)
		if ((tmp6)){
			HX_STACK_LINE(113)
			return false;
		}
		HX_STACK_LINE(115)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = p->get_parent();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		p = tmp7;
	}
	HX_STACK_LINE(118)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Link_obj,ensureVisible,return )

::haxe::ui::toolkit::core::DisplayObject Link_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","clone",0xd1aca57f,"haxe.ui.toolkit.controls.Link.clone","src/haxe/ui/toolkit/controls/Link.hx",1,0x9de0c739)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Text tmp = hx::TCast< ::haxe::ui::toolkit::controls::Text >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Link c = ((::haxe::ui::toolkit::controls::Link)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::Link tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Link_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Link","self",0xfede13aa,"haxe.ui.toolkit.controls.Link.self","src/haxe/ui/toolkit/controls/Link.hx",1,0x9de0c739)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Link tmp = ::haxe::ui::toolkit::controls::Link_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


::String Link_obj::STATE_NORMAL;

::String Link_obj::STATE_OVER;

::String Link_obj::STATE_DOWN;


Link_obj::Link_obj()
{
}

void Link_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Link);
	HX_MARK_MEMBER_NAME(_isDown,"_isDown");
	HX_MARK_MEMBER_NAME(_isOver,"_isOver");
	HX_MARK_MEMBER_NAME(url,"url");
	::haxe::ui::toolkit::controls::Text_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Link_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isDown,"_isDown");
	HX_VISIT_MEMBER_NAME(_isOver,"_isOver");
	HX_VISIT_MEMBER_NAME(url,"url");
	::haxe::ui::toolkit::controls::Text_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Link_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_isDown") ) { return _isDown; }
		if (HX_FIELD_EQ(inName,"_isOver") ) { return _isOver; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ensureVisible_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return _onScreenMouseUp_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseDown") ) { return _onScreenMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Link_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_isDown") ) { _isDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_isOver") ) { _isOver=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Link_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Link_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_isDown","\x0b","\xcf","\x4b","\xce"));
	outFields->push(HX_HCSTRING("_isOver","\xfd","\x67","\x96","\xd5"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Link_obj,_isDown),HX_HCSTRING("_isDown","\x0b","\xcf","\x4b","\xce")},
	{hx::fsBool,(int)offsetof(Link_obj,_isOver),HX_HCSTRING("_isOver","\xfd","\x67","\x96","\xd5")},
	{hx::fsString,(int)offsetof(Link_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Link_obj::STATE_NORMAL,HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60")},
	{hx::fsString,(void *) &Link_obj::STATE_OVER,HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38")},
	{hx::fsString,(void *) &Link_obj::STATE_DOWN,HX_HCSTRING("STATE_DOWN","\xb0","\x04","\x15","\x31")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_isDown","\x0b","\xcf","\x4b","\xce"),
	HX_HCSTRING("_isOver","\xfd","\x67","\x96","\xd5"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("_onScreenMouseDown","\x7d","\xee","\xae","\xd0"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("_onScreenMouseUp","\xb6","\x0f","\x00","\xd0"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("get_states","\x0b","\x49","\x83","\xf6"),
	HX_HCSTRING("ensureVisible","\x54","\xfe","\x02","\x7c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Link_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Link_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(Link_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(Link_obj::STATE_DOWN,"STATE_DOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Link_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Link_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(Link_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(Link_obj::STATE_DOWN,"STATE_DOWN");
};

#endif

hx::Class Link_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60"),
	HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38"),
	HX_HCSTRING("STATE_DOWN","\xb0","\x04","\x15","\x31"),
	::String(null()) };

void Link_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Link","\x10","\xcd","\x2f","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Link_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Link_obj >;
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

void Link_obj::__boot()
{
	STATE_NORMAL= HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
	STATE_OVER= HX_HCSTRING("over","\x54","\x91","\xb8","\x49");
	STATE_DOWN= HX_HCSTRING("down","\x62","\xf8","\x6d","\x42");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
