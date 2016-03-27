#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#include <haxe/ui/toolkit/controls/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuButton
#include <haxe/ui/toolkit/controls/MenuButton.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuItem
#include <haxe/ui/toolkit/controls/MenuItem.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_events_MenuEvent
#include <haxe/ui/toolkit/events/MenuEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
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

Void MenuButton_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","new",0x319e36f9,"haxe.ui.toolkit.controls.MenuButton.new","haxe/ui/toolkit/controls/MenuButton.hx",17,0xfd1e7557)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	this->set_toggle(true);
	HX_STACK_LINE(20)
	this->set_allowSelection(false);
}
;
	return null();
}

//MenuButton_obj::~MenuButton_obj() { }

Dynamic MenuButton_obj::__CreateEmpty() { return  new MenuButton_obj; }
hx::ObjectPtr< MenuButton_obj > MenuButton_obj::__new()
{  hx::ObjectPtr< MenuButton_obj > _result_ = new MenuButton_obj();
	_result_->__construct();
	return _result_;}

Dynamic MenuButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuButton_obj > _result_ = new MenuButton_obj();
	_result_->__construct();
	return _result_;}

Void MenuButton_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","initialize",0x214fbfd7,"haxe.ui.toolkit.controls.MenuButton.initialize","haxe/ui/toolkit/controls/MenuButton.hx",23,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->super::initialize();
		HX_STACK_LINE(26)
		::haxe::ui::toolkit::controls::Menu tmp = this->_menu;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(27)
			::haxe::ui::toolkit::controls::Menu tmp2 = this->_menu;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(27)
			::String tmp3 = ::haxe::ui::toolkit::events::MenuEvent_obj::SELECT;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(27)
			Dynamic tmp4 = this->_onMenuSelect_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
			HX_STACK_LINE(28)
			::haxe::ui::toolkit::controls::Menu tmp5 = this->_menu;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(28)
			::String tmp6 = ::haxe::ui::toolkit::events::MenuEvent_obj::OPEN;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(28)
			Dynamic tmp7 = this->_onMenuOpen_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(28)
			tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject MenuButton_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","addChild",0x34f4de82,"haxe.ui.toolkit.controls.MenuButton.addChild","haxe/ui/toolkit/controls/MenuButton.hx",32,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(33)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(35)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	if ((tmp1)){
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::controls::Menu tmp2 = this->_menu;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::controls::Menu tmp4 = ::haxe::ui::toolkit::controls::Menu_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			this->_menu = tmp4;
			HX_STACK_LINE(38)
			::haxe::ui::toolkit::controls::Menu tmp5 = this->_menu;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			::haxe::ui::toolkit::core::Root tmp6 = this->get_root();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			tmp5->set_root(tmp6);
		}
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::controls::Menu tmp4 = this->_menu;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		tmp4->addChild(tmp5);
	}
	else{
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		if ((tmp3)){
			HX_STACK_LINE(42)
			::haxe::ui::toolkit::controls::Menu tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			tmp4 = hx::TCast< ::haxe::ui::toolkit::controls::Menu >::cast(child);
			HX_STACK_LINE(42)
			this->_menu = tmp4;
		}
		else{
			HX_STACK_LINE(44)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = this->super::addChild(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			r = tmp5;
		}
	}
	HX_STACK_LINE(47)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	return tmp2;
}


Void MenuButton_obj::_onMouseOver( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMouseOver",0x6c145942,"haxe.ui.toolkit.controls.MenuButton._onMouseOver","haxe/ui/toolkit/controls/MenuButton.hx",50,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(51)
		::openfl::_legacy::events::MouseEvent tmp = event;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		this->super::_onMouseOver(tmp);
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::controls::MenuButton tmp1 = ::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		if ((tmp2)){
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::controls::MenuButton tmp4 = ::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::controls::MenuButton tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			tmp3 = (tmp5 != hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(52)
			tmp3 = false;
		}
		HX_STACK_LINE(52)
		if ((tmp3)){
			HX_STACK_LINE(53)
			::haxe::ui::toolkit::controls::MenuButton tmp4 = ::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			tmp4->hideMenu();
			HX_STACK_LINE(54)
			this->showMenu();
		}
	}
return null();
}


Void MenuButton_obj::_onMouseClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMouseClick",0x3651a49a,"haxe.ui.toolkit.controls.MenuButton._onMouseClick","haxe/ui/toolkit/controls/MenuButton.hx",58,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(59)
		::haxe::ui::toolkit::core::Root tmp = this->get_root();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		::haxe::ui::toolkit::controls::Menu tmp1 = this->_menu;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		int tmp2 = tmp->indexOfChild(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		bool tmp3 = (tmp2 == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		if ((tmp3)){
			HX_STACK_LINE(60)
			this->showMenu();
		}
		else{
			HX_STACK_LINE(62)
			this->hideMenu();
		}
	}
return null();
}


bool MenuButton_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","set_selected",0x693a801f,"haxe.ui.toolkit.controls.MenuButton.set_selected","haxe/ui/toolkit/controls/MenuButton.hx",66,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(67)
	this->_selected = value;
	HX_STACK_LINE(68)
	bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	if ((tmp1)){
		HX_STACK_LINE(69)
		this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
	}
	else{
		HX_STACK_LINE(71)
		this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	}
	HX_STACK_LINE(73)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	return tmp2;
}


Void MenuButton_obj::_onRootMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onRootMouseDown",0x4825264e,"haxe.ui.toolkit.controls.MenuButton._onRootMouseDown","haxe/ui/toolkit/controls/MenuButton.hx",76,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(77)
		bool mouseIn = false;		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(78)
		Float tmp = event->stageX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		Float tmp1 = event->stageY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		bool tmp2 = this->hitTest(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		if ((tmp3)){
			HX_STACK_LINE(79)
			mouseIn = true;
		}
		HX_STACK_LINE(81)
		::haxe::ui::toolkit::controls::Menu tmp4 = this->_menu;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(81)
		if ((tmp5)){
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::controls::Menu tmp7 = this->_menu;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::controls::Menu tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			Float tmp9 = event->stageX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(81)
			Float tmp10 = event->stageY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			Float tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			Float tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			bool tmp13 = tmp8->hitTest(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(81)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			tmp6 = (tmp14 == true);
		}
		else{
			HX_STACK_LINE(81)
			tmp6 = false;
		}
		HX_STACK_LINE(81)
		if ((tmp6)){
			HX_STACK_LINE(82)
			mouseIn = true;
		}
		HX_STACK_LINE(84)
		::haxe::ui::toolkit::controls::Menu tmp7 = this->_menu;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(84)
		if ((tmp8)){
			HX_STACK_LINE(84)
			tmp9 = (mouseIn == false);
		}
		else{
			HX_STACK_LINE(84)
			tmp9 = false;
		}
		HX_STACK_LINE(84)
		if ((tmp9)){
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::controls::Menu tmp10 = this->_menu;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::controls::Menu tmp11 = tmp10->get_rootMenu();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::controls::Menu menu = tmp11;		HX_STACK_VAR(menu,"menu");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				bool tmp12 = (menu != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(86)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(86)
				if ((tmp13)){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(87)
				Float tmp14 = event->stageX;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(87)
				Float tmp15 = event->stageY;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(87)
				bool tmp16 = menu->hitTest(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(87)
				bool tmp17 = (tmp16 == true);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(87)
				if ((tmp17)){
					HX_STACK_LINE(88)
					mouseIn = true;
					HX_STACK_LINE(89)
					break;
				}
				HX_STACK_LINE(91)
				::haxe::ui::toolkit::controls::Menu tmp18 = menu->get_currentSubMenu();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(91)
				menu = tmp18;
			}
		}
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::controls::Menu tmp10 = this->_menu;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(94)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(94)
		if ((tmp11)){
			HX_STACK_LINE(94)
			tmp12 = (mouseIn == false);
		}
		else{
			HX_STACK_LINE(94)
			tmp12 = false;
		}
		HX_STACK_LINE(94)
		if ((tmp12)){
			HX_STACK_LINE(95)
			this->hideMenu();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onRootMouseDown,(void))

Void MenuButton_obj::_onMenuSelect( ::haxe::ui::toolkit::events::MenuEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMenuSelect",0x1cdd8ab2,"haxe.ui.toolkit.controls.MenuButton._onMenuSelect","haxe/ui/toolkit/controls/MenuButton.hx",99,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(100)
		this->hideMenu();
		HX_STACK_LINE(101)
		::String tmp = ::haxe::ui::toolkit::events::MenuEvent_obj::SELECT;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		::haxe::ui::toolkit::controls::MenuItem tmp1 = event->menuItem;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		::haxe::ui::toolkit::events::MenuEvent tmp2 = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		::haxe::ui::toolkit::events::MenuEvent e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(102)
		::haxe::ui::toolkit::events::MenuEvent tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		this->dispatchEvent(tmp3);
		HX_STACK_LINE(104)
		::String tmp4 = HX_HCSTRING("haxeui_menuSelect","\x60","\x21","\x60","\x48");		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		::haxe::ui::toolkit::controls::MenuItem tmp5 = event->menuItem;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		::haxe::ui::toolkit::events::UIEvent tmp6 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp4,tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		::haxe::ui::toolkit::events::UIEvent uiEvent = tmp6;		HX_STACK_VAR(uiEvent,"uiEvent");
		HX_STACK_LINE(105)
		::haxe::ui::toolkit::events::UIEvent tmp7 = uiEvent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		this->dispatchEvent(tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onMenuSelect,(void))

Void MenuButton_obj::_onMenuOpen( ::haxe::ui::toolkit::events::MenuEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMenuOpen",0xcdcbfa00,"haxe.ui.toolkit.controls.MenuButton._onMenuOpen","haxe/ui/toolkit/controls/MenuButton.hx",108,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(109)
		::String tmp = ::haxe::ui::toolkit::events::MenuEvent_obj::OPEN;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		::haxe::ui::toolkit::events::MenuEvent tmp1 = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::haxe::ui::toolkit::events::MenuEvent e = tmp1;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(110)
		e->menu = event->menu;
		HX_STACK_LINE(111)
		::haxe::ui::toolkit::events::MenuEvent tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onMenuOpen,(void))

Void MenuButton_obj::showMenu( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","showMenu",0x25be1803,"haxe.ui.toolkit.controls.MenuButton.showMenu","haxe/ui/toolkit/controls/MenuButton.hx",114,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		::haxe::ui::toolkit::controls::MenuButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		this->set_selected(true);
		HX_STACK_LINE(116)
		::haxe::ui::toolkit::controls::Menu tmp = this->_menu;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		Float tmp1 = this->get_stageX();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::haxe::ui::toolkit::core::Root tmp2 = this->get_root();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		Float tmp3 = tmp2->get_stageX();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		tmp->set_x(tmp4);
		HX_STACK_LINE(117)
		::haxe::ui::toolkit::controls::Menu tmp5 = this->_menu;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		Float tmp6 = this->get_stageY();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		Float tmp7 = this->get_height();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		::haxe::ui::toolkit::core::Root tmp9 = this->get_root();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		Float tmp10 = tmp9->get_stageY();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(117)
		Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(117)
		tmp5->set_y(tmp11);
		HX_STACK_LINE(118)
		::haxe::ui::toolkit::core::Root tmp12 = this->get_root();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(118)
		::haxe::ui::toolkit::controls::Menu tmp13 = this->_menu;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(118)
		tmp12->addChild(tmp13);
		HX_STACK_LINE(119)
		::haxe::ui::toolkit::core::Root tmp14 = this->get_root();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(119)
		::String tmp15 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(119)
		Dynamic tmp16 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(119)
		tmp14->addEventListener(tmp15,tmp16,null(),null(),null());
		HX_STACK_LINE(120)
		::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(122)
		::String tmp17 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(122)
		::String transition = tmp17;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(123)
		Float tmp18 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(123)
		Float transitionTime = tmp18;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(124)
		bool tmp19 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(124)
		if ((tmp19)){
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::Menu tmp20 = this->_menu;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(125)
			tmp20->set_clipHeight((int)0);
			HX_STACK_LINE(126)
			::haxe::ui::toolkit::controls::Menu tmp21 = this->_menu;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(126)
			::openfl::_legacy::display::Sprite tmp22 = tmp21->get_sprite();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(126)
			tmp22->set_alpha((int)1);
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::controls::Menu tmp23 = this->_menu;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(127)
			tmp23->set_visible(true);
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::controls::Menu tmp24 = this->_menu;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(128)
			Float tmp25 = transitionTime;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::controls::Menu tmp26 = this->_menu;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(128)
			Float tmp27 = tmp26->get_height();		HX_STACK_VAR(tmp27,"tmp27");
			struct _Function_2_1{
				inline static Dynamic Block( Float &tmp27){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",128,0xfd1e7557)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , tmp27,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(128)
			Dynamic tmp28 = _Function_2_1::Block(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(128)
			::motion::actuators::GenericActuator tmp29 = ::motion::Actuate_obj::tween(tmp24,tmp25,tmp28,true,null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(128)
			::motion::easing::IEasing tmp30 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(128)
			::motion::actuators::GenericActuator tmp31 = tmp29->ease(tmp30);		HX_STACK_VAR(tmp31,"tmp31");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::controls::MenuButton,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/MenuButton.hx",129,0xfd1e7557)
				{
					HX_STACK_LINE(129)
					_g->_menu->clearClip();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(128)
			tmp31->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(131)
			bool tmp20 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(131)
			if ((tmp20)){
				HX_STACK_LINE(132)
				::haxe::ui::toolkit::controls::Menu tmp21 = this->_menu;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(132)
				::openfl::_legacy::display::Sprite tmp22 = tmp21->get_sprite();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(132)
				tmp22->set_alpha((int)0);
				HX_STACK_LINE(133)
				::haxe::ui::toolkit::controls::Menu tmp23 = this->_menu;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(133)
				tmp23->set_visible(true);
				HX_STACK_LINE(134)
				::haxe::ui::toolkit::controls::Menu tmp24 = this->_menu;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(134)
				::openfl::_legacy::display::Sprite tmp25 = tmp24->get_sprite();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(134)
				Float tmp26 = transitionTime;		HX_STACK_VAR(tmp26,"tmp26");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",134,0xfd1e7557)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(134)
				Dynamic tmp27 = _Function_3_1::Block();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(134)
				::motion::actuators::GenericActuator tmp28 = ::motion::Actuate_obj::tween(tmp25,tmp26,tmp27,true,null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(134)
				::motion::easing::IEasing tmp29 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(134)
				::motion::actuators::GenericActuator tmp30 = tmp28->ease(tmp29);		HX_STACK_VAR(tmp30,"tmp30");

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/MenuButton.hx",134,0xfd1e7557)
					{
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(134)
				tmp30->onComplete( Dynamic(new _Function_3_2()),null());
			}
			else{
				HX_STACK_LINE(137)
				::haxe::ui::toolkit::controls::Menu tmp21 = this->_menu;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(137)
				::openfl::_legacy::display::Sprite tmp22 = tmp21->get_sprite();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(137)
				tmp22->set_alpha((int)1);
				HX_STACK_LINE(138)
				::haxe::ui::toolkit::controls::Menu tmp23 = this->_menu;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(138)
				tmp23->set_visible(true);
			}
		}
		HX_STACK_LINE(141)
		::String tmp20 = ::haxe::ui::toolkit::events::MenuEvent_obj::OPEN;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(141)
		::haxe::ui::toolkit::events::MenuEvent tmp21 = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(141)
		::haxe::ui::toolkit::events::MenuEvent event = tmp21;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(142)
		::haxe::ui::toolkit::controls::Menu tmp22 = this->_menu;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(142)
		event->menu = tmp22;
		HX_STACK_LINE(143)
		::haxe::ui::toolkit::events::MenuEvent tmp23 = event;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(143)
		this->dispatchEvent(tmp23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuButton_obj,showMenu,(void))

Void MenuButton_obj::hideMenu( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","hideMenu",0x17053e48,"haxe.ui.toolkit.controls.MenuButton.hideMenu","haxe/ui/toolkit/controls/MenuButton.hx",146,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		::haxe::ui::toolkit::controls::MenuButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		this->set_selected(false);
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::controls::Menu tmp = this->_menu;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		tmp->hideSubMenus();
		HX_STACK_LINE(150)
		::haxe::ui::toolkit::core::Root tmp1 = this->get_root();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Dynamic tmp3 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		tmp1->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(152)
		::String tmp4 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		::String transition = tmp4;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(153)
		Float tmp5 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		Float transitionTime = tmp5;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(154)
		bool tmp6 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		if ((tmp6)){
			HX_STACK_LINE(155)
			::haxe::ui::toolkit::controls::Menu tmp7 = this->_menu;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			::openfl::_legacy::display::Sprite tmp8 = tmp7->get_sprite();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(155)
			tmp8->set_alpha((int)1);
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::controls::Menu tmp9 = this->_menu;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			Float tmp10 = transitionTime;		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",156,0xfd1e7557)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(156)
			Dynamic tmp11 = _Function_2_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(156)
			::motion::actuators::GenericActuator tmp12 = ::motion::Actuate_obj::tween(tmp9,tmp10,tmp11,true,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			::motion::easing::IEasing tmp13 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(156)
			::motion::actuators::GenericActuator tmp14 = tmp12->ease(tmp13);		HX_STACK_VAR(tmp14,"tmp14");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::controls::MenuButton,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/MenuButton.hx",156,0xfd1e7557)
				{
					HX_STACK_LINE(157)
					_g->_menu->set_visible(false);
					HX_STACK_LINE(158)
					_g->_menu->clearClip();
					HX_STACK_LINE(159)
					::haxe::ui::toolkit::core::Root tmp15 = _g->get_root();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(159)
					::haxe::ui::toolkit::controls::Menu tmp16 = _g->_menu;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(159)
					tmp15->removeChild(tmp16,false);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(156)
			tmp14->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(161)
			bool tmp7 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			if ((tmp7)){
				HX_STACK_LINE(162)
				::haxe::ui::toolkit::controls::Menu tmp8 = this->_menu;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(162)
				::openfl::_legacy::display::Sprite tmp9 = tmp8->get_sprite();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(162)
				Float tmp10 = transitionTime;		HX_STACK_VAR(tmp10,"tmp10");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",162,0xfd1e7557)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(162)
				Dynamic tmp11 = _Function_3_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(162)
				::motion::actuators::GenericActuator tmp12 = ::motion::Actuate_obj::tween(tmp9,tmp10,tmp11,true,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(162)
				::motion::easing::IEasing tmp13 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(162)
				::motion::actuators::GenericActuator tmp14 = tmp12->ease(tmp13);		HX_STACK_VAR(tmp14,"tmp14");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,::haxe::ui::toolkit::controls::MenuButton,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/MenuButton.hx",162,0xfd1e7557)
					{
						HX_STACK_LINE(163)
						_g->_menu->set_visible(false);
						HX_STACK_LINE(164)
						::haxe::ui::toolkit::core::Root tmp15 = _g->get_root();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(164)
						::haxe::ui::toolkit::controls::Menu tmp16 = _g->_menu;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(164)
						tmp15->removeChild(tmp16,false);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(162)
				tmp14->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(167)
				::haxe::ui::toolkit::controls::Menu tmp8 = this->_menu;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(167)
				::openfl::_legacy::display::Sprite tmp9 = tmp8->get_sprite();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(167)
				tmp9->set_alpha((int)1);
				HX_STACK_LINE(168)
				::haxe::ui::toolkit::controls::Menu tmp10 = this->_menu;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(168)
				tmp10->set_visible(false);
				HX_STACK_LINE(169)
				::haxe::ui::toolkit::core::Root tmp11 = this->get_root();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(169)
				::haxe::ui::toolkit::controls::Menu tmp12 = this->_menu;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(169)
				tmp11->removeChild(tmp12,false);
			}
		}
		HX_STACK_LINE(172)
		::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton = null();
		HX_STACK_LINE(173)
		this->set_selected(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuButton_obj,hideMenu,(void))

::haxe::ui::toolkit::core::DisplayObject MenuButton_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","clone",0x2e071236,"haxe.ui.toolkit.controls.MenuButton.clone","src/haxe/ui/toolkit/controls/MenuButton.hx",1,0xc8f20c62)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button tmp = hx::TCast< ::haxe::ui::toolkit::controls::Button >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuButton c = ((::haxe::ui::toolkit::controls::MenuButton)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::MenuButton tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject MenuButton_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","self",0x3c1fead3,"haxe.ui.toolkit.controls.MenuButton.self","src/haxe/ui/toolkit/controls/MenuButton.hx",1,0xc8f20c62)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuButton tmp = ::haxe::ui::toolkit::controls::MenuButton_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


::haxe::ui::toolkit::controls::MenuButton MenuButton_obj::_currentMenuButton;


MenuButton_obj::MenuButton_obj()
{
}

void MenuButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuButton);
	HX_MARK_MEMBER_NAME(_menu,"_menu");
	::haxe::ui::toolkit::controls::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menu,"_menu");
	::haxe::ui::toolkit::controls::Button_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuButton_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { return _menu; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"showMenu") ) { return showMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"hideMenu") ) { return hideMenu_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMenuOpen") ) { return _onMenuOpen_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMenuSelect") ) { return _onMenuSelect_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool MenuButton_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"_currentMenuButton") ) { outValue = _currentMenuButton; return true;  }
	}
	return false;
}

Dynamic MenuButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { _menu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuButton_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"_currentMenuButton") ) { _currentMenuButton=ioValue.Cast< ::haxe::ui::toolkit::controls::MenuButton >(); return true; }
	}
	return false;
}

void MenuButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_menu","\x7e","\x61","\x6a","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(MenuButton_obj,_menu),HX_HCSTRING("_menu","\x7e","\x61","\x6a","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuButton*/ ,(void *) &MenuButton_obj::_currentMenuButton,HX_HCSTRING("_currentMenuButton","\x4b","\xc3","\xaf","\x66")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_menu","\x7e","\x61","\x6a","\xfb"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseClick","\xc1","\xa4","\xdd","\x20"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	HX_HCSTRING("_onRootMouseDown","\x87","\x78","\xe0","\x96"),
	HX_HCSTRING("_onMenuSelect","\xd9","\x8a","\x69","\x07"),
	HX_HCSTRING("_onMenuOpen","\x67","\xd2","\x63","\x00"),
	HX_HCSTRING("showMenu","\x3c","\x09","\xe0","\xaf"),
	HX_HCSTRING("hideMenu","\x81","\x2f","\x27","\xa1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MenuButton_obj::_currentMenuButton,"_currentMenuButton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MenuButton_obj::_currentMenuButton,"_currentMenuButton");
};

#endif

hx::Class MenuButton_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_currentMenuButton","\x4b","\xc3","\xaf","\x66"),
	::String(null()) };

void MenuButton_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.MenuButton","\x87","\x46","\xaf","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MenuButton_obj::__GetStatic;
	__mClass->mSetStaticField = &MenuButton_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuButton_obj >;
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
