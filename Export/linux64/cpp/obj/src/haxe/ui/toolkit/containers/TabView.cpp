#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Stack
#include <haxe/ui/toolkit/containers/Stack.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TabView
#include <haxe/ui/toolkit/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TabBar
#include <haxe/ui/toolkit/controls/TabBar.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void TabView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","new",0x19b9a312,"haxe.ui.toolkit.containers.TabView.new","haxe/ui/toolkit/containers/TabView.hx",15,0x54697f9e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	::haxe::ui::toolkit::layout::VerticalLayout tmp = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	this->_layout = tmp;
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::controls::TabBar tmp1 = ::haxe::ui::toolkit::controls::TabBar_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	this->_tabs = tmp1;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::controls::TabBar tmp2 = this->_tabs;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	tmp2->set_percentWidth((int)100);
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::TabBar tmp3 = this->_tabs;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	::String tmp4 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(21)
	Dynamic tmp5 = this->_onTabsChange_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(21)
	tmp3->addEventListener(tmp4,tmp5,null(),null(),null());
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::controls::TabBar tmp6 = this->_tabs;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(22)
	::String tmp7 = HX_HCSTRING("haxeui_glyphClick","\x61","\xaa","\x5c","\x02");		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	Dynamic tmp8 = this->_onGlyphClick_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(22)
	tmp6->addEventListener(tmp7,tmp8,null(),null(),null());
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::controls::TabBar tmp9 = this->_tabs;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(23)
	this->addChild(tmp9);
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::containers::Stack tmp10 = ::haxe::ui::toolkit::containers::Stack_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(25)
	this->_stack = tmp10;
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::containers::Stack tmp11 = this->_stack;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::containers::Stack tmp12 = this->_stack;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(26)
	Float tmp13 = tmp12->set_percentHeight((int)100);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(26)
	tmp11->set_percentWidth(tmp13);
	HX_STACK_LINE(27)
	::haxe::ui::toolkit::containers::Stack tmp14 = this->_stack;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(27)
	tmp14->set_styleName(HX_HCSTRING("page","\x4f","\xda","\x51","\x4a"));
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::containers::Stack tmp15 = this->_stack;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(28)
	this->addChild(tmp15);
}
;
	return null();
}

//TabView_obj::~TabView_obj() { }

Dynamic TabView_obj::__CreateEmpty() { return  new TabView_obj; }
hx::ObjectPtr< TabView_obj > TabView_obj::__new()
{  hx::ObjectPtr< TabView_obj > _result_ = new TabView_obj();
	_result_->__construct();
	return _result_;}

Dynamic TabView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TabView_obj > _result_ = new TabView_obj();
	_result_->__construct();
	return _result_;}

Void TabView_obj::_onTabsChange( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","_onTabsChange",0x01ab429e,"haxe.ui.toolkit.containers.TabView._onTabsChange","haxe/ui/toolkit/containers/TabView.hx",34,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::containers::Stack tmp = this->_stack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::controls::TabBar tmp1 = this->_tabs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		int tmp2 = tmp1->get_selectedIndex();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		tmp->set_selectedIndex(tmp2);
		HX_STACK_LINE(37)
		::String tmp3 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::events::UIEvent tmp4 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp3,null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::events::UIEvent event1 = tmp4;		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::events::UIEvent tmp5 = event1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		this->dispatchEvent(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,_onTabsChange,(void))

Void TabView_obj::_onGlyphClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","_onGlyphClick",0x79acf90c,"haxe.ui.toolkit.containers.TabView._onGlyphClick","haxe/ui/toolkit/containers/TabView.hx",41,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(42)
		::String tmp = HX_HCSTRING("haxeui_glyphClick","\x61","\xaa","\x5c","\x02");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::events::UIEvent tmp1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::events::UIEvent newEvent = tmp1;		HX_STACK_VAR(newEvent,"newEvent");
		HX_STACK_LINE(43)
		newEvent->data = event->data;
		HX_STACK_LINE(44)
		::haxe::ui::toolkit::events::UIEvent tmp2 = newEvent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,_onGlyphClick,(void))

Void TabView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","initialize",0x20a6f8de,"haxe.ui.toolkit.containers.TabView.initialize","haxe/ui/toolkit/containers/TabView.hx",50,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->super::initialize();
		HX_STACK_LINE(52)
		this->set_selectedIndex((int)0);
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject TabView_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","addChild",0x94ddf7c9,"haxe.ui.toolkit.containers.TabView.addChild","haxe/ui/toolkit/containers/TabView.hx",56,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(57)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(58)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::haxe::ui::toolkit::controls::TabBar tmp1 = this->_tabs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	if ((tmp3)){
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::containers::Stack tmp6 = this->_stack;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::containers::Stack tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		tmp4 = (tmp5 == tmp7);
	}
	else{
		HX_STACK_LINE(58)
		tmp4 = true;
	}
	HX_STACK_LINE(58)
	if ((tmp4)){
		HX_STACK_LINE(59)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = this->super::addChild(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		r = tmp6;
	}
	else{
		HX_STACK_LINE(61)
		::haxe::ui::toolkit::containers::Stack tmp5 = this->_stack;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(61)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = tmp5->addChild(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		r = tmp7;
		HX_STACK_LINE(62)
		::String label = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(label,"label");
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxe::ui::toolkit::core::Component >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(63)
		if ((tmp9)){
			HX_STACK_LINE(64)
			::haxe::ui::toolkit::core::Component tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(64)
			tmp10 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(child);
			HX_STACK_LINE(64)
			::String tmp11 = tmp10->get_text();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(64)
			label = tmp11;
		}
		HX_STACK_LINE(66)
		::haxe::ui::toolkit::controls::TabBar tmp10 = this->_tabs;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		::String tmp11 = label;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		::haxe::ui::toolkit::controls::Button tmp12 = tmp10->addTab(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(66)
		::String tmp13 = child->get_id();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(66)
		tmp12->set_styleName(tmp13);
	}
	HX_STACK_LINE(68)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(68)
	return tmp5;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject TabView_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","addChildAt",0x0222751c,"haxe.ui.toolkit.containers.TabView.addChildAt","haxe/ui/toolkit/containers/TabView.hx",71,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(72)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(73)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::haxe::ui::toolkit::controls::TabBar tmp1 = this->_tabs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	if ((tmp3)){
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::containers::Stack tmp6 = this->_stack;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::containers::Stack tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		tmp4 = (tmp5 == tmp7);
	}
	else{
		HX_STACK_LINE(73)
		tmp4 = true;
	}
	HX_STACK_LINE(73)
	if ((tmp4)){
		HX_STACK_LINE(74)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = this->super::addChildAt(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		r = tmp7;
	}
	else{
		HX_STACK_LINE(76)
		::haxe::ui::toolkit::containers::Stack tmp5 = this->_stack;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(76)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = tmp5->addChildAt(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		r = tmp8;
		HX_STACK_LINE(77)
		::String label = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(label,"label");
		HX_STACK_LINE(78)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(78)
		bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::haxe::ui::toolkit::core::Component >());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(78)
		if ((tmp10)){
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::core::Component tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(79)
			tmp11 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(child);
			HX_STACK_LINE(79)
			::String tmp12 = tmp11->get_text();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(79)
			label = tmp12;
		}
		HX_STACK_LINE(81)
		::haxe::ui::toolkit::controls::TabBar tmp11 = this->_tabs;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(81)
		::String tmp12 = label;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(81)
		::haxe::ui::toolkit::controls::Button tmp13 = tmp11->addTab(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(81)
		::String tmp14 = child->get_id();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(81)
		tmp13->set_styleName(tmp14);
	}
	HX_STACK_LINE(83)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	return tmp5;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject TabView_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","removeChild",0x7e505b6a,"haxe.ui.toolkit.containers.TabView.removeChild","haxe/ui/toolkit/containers/TabView.hx",86,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(87)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::controls::TabBar tmp1 = this->_tabs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		if ((tmp3)){
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::containers::Stack tmp6 = this->_stack;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::containers::Stack tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			tmp4 = (tmp5 == tmp7);
		}
		else{
			HX_STACK_LINE(88)
			tmp4 = true;
		}
		HX_STACK_LINE(88)
		if ((tmp4)){
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			bool tmp6 = dispose;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = this->super::removeChild(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			r = tmp7;
		}
		else{
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::containers::Stack tmp5 = this->_stack;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			bool tmp7 = dispose;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = tmp5->removeChild(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(91)
			r = tmp8;
		}
		HX_STACK_LINE(93)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = r;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		return tmp5;
	}
}


int TabView_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","get_selectedIndex",0x9aece840,"haxe.ui.toolkit.containers.TabView.get_selectedIndex","haxe/ui/toolkit/containers/TabView.hx",103,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	::haxe::ui::toolkit::controls::TabBar tmp = this->_tabs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	int tmp1 = tmp->get_selectedIndex();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_selectedIndex,return )

int TabView_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","set_selectedIndex",0xbe5ac04c,"haxe.ui.toolkit.containers.TabView.set_selectedIndex","haxe/ui/toolkit/containers/TabView.hx",107,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(108)
	::haxe::ui::toolkit::controls::TabBar tmp = this->_tabs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	tmp->set_selectedIndex(tmp1);
	HX_STACK_LINE(109)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_selectedIndex,return )

int TabView_obj::get_pageCount( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","get_pageCount",0x6a24d509,"haxe.ui.toolkit.containers.TabView.get_pageCount","haxe/ui/toolkit/containers/TabView.hx",112,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::containers::Stack tmp = this->_stack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_pageCount,return )

::haxe::ui::toolkit::core::Component TabView_obj::get_selectedPage( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","get_selectedPage",0x95edcce1,"haxe.ui.toolkit.containers.TabView.get_selectedPage","haxe/ui/toolkit/containers/TabView.hx",116,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	int tmp = this->get_selectedIndex();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	::haxe::ui::toolkit::core::Component tmp1 = this->getTabPage(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_selectedPage,return )

Void TabView_obj::setTabText( int index,::String text){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","setTabText",0xcc3a8dae,"haxe.ui.toolkit.containers.TabView.setTabText","haxe/ui/toolkit/containers/TabView.hx",123,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(124)
		::haxe::ui::toolkit::controls::TabBar tmp = this->_tabs;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		::String tmp2 = text;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		tmp->setTabText(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TabView_obj,setTabText,(void))

Void TabView_obj::removeTab( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","removeTab",0x036f5ca3,"haxe.ui.toolkit.containers.TabView.removeTab","haxe/ui/toolkit/containers/TabView.hx",127,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(128)
		::haxe::ui::toolkit::containers::Stack tmp = this->_stack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		tmp->removeChildAt(tmp1,null());
		HX_STACK_LINE(129)
		::haxe::ui::toolkit::controls::TabBar tmp2 = this->_tabs;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		tmp2->removeTab(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,removeTab,(void))

::haxe::ui::toolkit::controls::Button TabView_obj::getTabButton( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","getTabButton",0x269b01bf,"haxe.ui.toolkit.containers.TabView.getTabButton","haxe/ui/toolkit/containers/TabView.hx",132,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(133)
	::haxe::ui::toolkit::controls::TabBar tmp = this->_tabs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	::haxe::ui::toolkit::controls::Button tmp2 = tmp->getTabButton(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	::haxe::ui::toolkit::controls::Button tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(133)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,getTabButton,return )

::haxe::ui::toolkit::core::Component TabView_obj::getTabPage( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","getTabPage",0xc614fcdc,"haxe.ui.toolkit.containers.TabView.getTabPage","haxe/ui/toolkit/containers/TabView.hx",136,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(137)
	::haxe::ui::toolkit::containers::Stack tmp = this->_stack;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = tmp->getChildAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	::haxe::ui::toolkit::core::Component tmp3 = ((::haxe::ui::toolkit::core::Component)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,getTabPage,return )

Void TabView_obj::removeAllTabs( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","removeAllTabs",0xe844bb8d,"haxe.ui.toolkit.containers.TabView.removeAllTabs","haxe/ui/toolkit/containers/TabView.hx",140,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::haxe::ui::toolkit::containers::Stack tmp = this->_stack;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		tmp->removeAllChildren(null());
		HX_STACK_LINE(142)
		::haxe::ui::toolkit::controls::TabBar tmp1 = this->_tabs;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		tmp1->removeAllTabs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,removeAllTabs,(void))

::haxe::ui::toolkit::core::DisplayObject TabView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","clone",0xe4e8768f,"haxe.ui.toolkit.containers.TabView.clone","src/haxe/ui/toolkit/containers/TabView.hx",1,0x833ed2f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TabView c = ((::haxe::ui::toolkit::containers::TabView)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::TabView tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject TabView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","self",0x6c03149a,"haxe.ui.toolkit.containers.TabView.self","src/haxe/ui/toolkit/containers/TabView.hx",1,0x833ed2f3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TabView tmp = ::haxe::ui::toolkit::containers::TabView_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



TabView_obj::TabView_obj()
{
}

void TabView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabView);
	HX_MARK_MEMBER_NAME(_tabs,"_tabs");
	HX_MARK_MEMBER_NAME(_stack,"_stack");
	HX_MARK_MEMBER_NAME(pageCount,"pageCount");
	HX_MARK_MEMBER_NAME(selectedPage,"selectedPage");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tabs,"_tabs");
	HX_VISIT_MEMBER_NAME(_stack,"_stack");
	HX_VISIT_MEMBER_NAME(pageCount,"pageCount");
	HX_VISIT_MEMBER_NAME(selectedPage,"selectedPage");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TabView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tabs") ) { return _tabs; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stack") ) { return _stack; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageCount") ) { return inCallProp == hx::paccAlways ? get_pageCount() : pageCount; }
		if (HX_FIELD_EQ(inName,"removeTab") ) { return removeTab_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setTabText") ) { return setTabText_dyn(); }
		if (HX_FIELD_EQ(inName,"getTabPage") ) { return getTabPage_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedPage") ) { return inCallProp == hx::paccAlways ? get_selectedPage() : selectedPage; }
		if (HX_FIELD_EQ(inName,"getTabButton") ) { return getTabButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onTabsChange") ) { return _onTabsChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onGlyphClick") ) { return _onGlyphClick_dyn(); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"get_pageCount") ) { return get_pageCount_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllTabs") ) { return removeAllTabs_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedPage") ) { return get_selectedPage_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TabView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tabs") ) { _tabs=inValue.Cast< ::haxe::ui::toolkit::controls::TabBar >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stack") ) { _stack=inValue.Cast< ::haxe::ui::toolkit::containers::Stack >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageCount") ) { pageCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedPage") ) { selectedPage=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return set_selectedIndex(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00"));
	outFields->push(HX_HCSTRING("_stack","\x89","\xae","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0"));
	outFields->push(HX_HCSTRING("selectedPage","\x4a","\xfa","\xeb","\xda"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::TabBar*/ ,(int)offsetof(TabView_obj,_tabs),HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Stack*/ ,(int)offsetof(TabView_obj,_stack),HX_HCSTRING("_stack","\x89","\xae","\xf2","\x7f")},
	{hx::fsInt,(int)offsetof(TabView_obj,pageCount),HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(TabView_obj,selectedPage),HX_HCSTRING("selectedPage","\x4a","\xfa","\xeb","\xda")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_tabs","\x5d","\xcc","\x07","\x00"),
	HX_HCSTRING("_stack","\x89","\xae","\xf2","\x7f"),
	HX_HCSTRING("_onTabsChange","\x6c","\x5d","\x64","\x49"),
	HX_HCSTRING("_onGlyphClick","\xda","\x13","\x66","\xc1"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("pageCount","\x00","\x1c","\x7a","\xf0"),
	HX_HCSTRING("selectedPage","\x4a","\xfa","\xeb","\xda"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("get_pageCount","\xd7","\xef","\xdd","\xb1"),
	HX_HCSTRING("get_selectedPage","\xd3","\xe6","\x8a","\xdf"),
	HX_HCSTRING("setTabText","\x20","\xc6","\x4e","\x98"),
	HX_HCSTRING("removeTab","\x71","\x78","\xf3","\xca"),
	HX_HCSTRING("getTabButton","\xb1","\xba","\x83","\x4a"),
	HX_HCSTRING("getTabPage","\x4e","\x35","\x29","\x92"),
	HX_HCSTRING("removeAllTabs","\x5b","\xd6","\xfd","\x2f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabView_obj::__mClass,"__mClass");
};

#endif

hx::Class TabView_obj::__mClass;

void TabView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.TabView","\x20","\x72","\x0a","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TabView_obj >;
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
} // end namespace containers
