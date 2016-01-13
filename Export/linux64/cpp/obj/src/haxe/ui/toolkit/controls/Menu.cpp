#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuItem
#include <haxe/ui/toolkit/controls/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuSeparator
#include <haxe/ui/toolkit/controls/MenuSeparator.h>
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

Void Menu_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","new",0xa09d9a27,"haxe.ui.toolkit.controls.Menu.new","haxe/ui/toolkit/controls/Menu.hx",19,0x362f81e9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	::haxe::ds::ObjectMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::haxe::ds::ObjectMap tmp1 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		::haxe::ds::ObjectMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		tmp = tmp2;
	}
	HX_STACK_LINE(21)
	this->_subMenus = tmp;
}
;
	return null();
}

//Menu_obj::~Menu_obj() { }

Dynamic Menu_obj::__CreateEmpty() { return  new Menu_obj; }
hx::ObjectPtr< Menu_obj > Menu_obj::__new()
{  hx::ObjectPtr< Menu_obj > _result_ = new Menu_obj();
	_result_->__construct();
	return _result_;}

Dynamic Menu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Menu_obj > _result_ = new Menu_obj();
	_result_->__construct();
	return _result_;}

Void Menu_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","initialize",0xe9633e69,"haxe.ui.toolkit.controls.Menu.initialize","haxe/ui/toolkit/controls/Menu.hx",24,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->super::initialize();
		HX_STACK_LINE(27)
		::haxe::ui::toolkit::controls::Menu tmp = this->get_rootMenu();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		bool tmp1 = (tmp == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		if ((tmp1)){
			HX_STACK_LINE(28)
			::haxe::ui::toolkit::core::Root tmp2 = this->get_root();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(28)
			::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(28)
			Dynamic tmp4 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject Menu_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","addChild",0xc2b93494,"haxe.ui.toolkit.controls.Menu.addChild","haxe/ui/toolkit/controls/Menu.hx",32,0x362f81e9)
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
		::haxe::ui::toolkit::controls::MenuItem tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		tmp2 = hx::TCast< ::haxe::ui::toolkit::controls::MenuItem >::cast(child);
		HX_STACK_LINE(36)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		int tmp4 = this->get_numChildren();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		Dynamic tmp5 = this->buildMouseOverFunction(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		tmp2->addEventListener(tmp3,tmp5,null(),null(),null());
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::controls::MenuItem tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		tmp6 = hx::TCast< ::haxe::ui::toolkit::controls::MenuItem >::cast(child);
		HX_STACK_LINE(37)
		::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		int tmp8 = this->get_numChildren();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		Dynamic tmp9 = this->buildMouseClickFunction(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		tmp6->addEventListener(tmp7,tmp9,null(),null(),null());
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = this->super::addChild(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		r = tmp11;
	}
	else{
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::controls::MenuSeparator >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		if ((tmp3)){
			HX_STACK_LINE(40)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = this->super::addChild(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(40)
			r = tmp5;
		}
		else{
			HX_STACK_LINE(41)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			if ((tmp5)){
				HX_STACK_LINE(42)
				::haxe::ui::toolkit::controls::MenuItem tmp6 = ::haxe::ui::toolkit::controls::MenuItem_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				::haxe::ui::toolkit::controls::MenuItem item = tmp6;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(43)
				::haxe::ui::toolkit::controls::Menu tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				tmp7 = hx::TCast< ::haxe::ui::toolkit::controls::Menu >::cast(child);
				HX_STACK_LINE(43)
				tmp7->_parentMenu = hx::ObjectPtr<OBJ_>(this);
				HX_STACK_LINE(44)
				::haxe::ui::toolkit::controls::Menu tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(44)
				tmp8 = hx::TCast< ::haxe::ui::toolkit::controls::Menu >::cast(child);
				HX_STACK_LINE(44)
				::String tmp9 = tmp8->get_text();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(44)
				item->set_text(tmp9);
				HX_STACK_LINE(45)
				item->set_styleName(HX_HCSTRING("expandable","\xf4","\x90","\xfa","\x55"));
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					::haxe::ui::toolkit::controls::Menu tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(46)
					tmp10 = hx::TCast< ::haxe::ui::toolkit::controls::Menu >::cast(child);
					HX_STACK_LINE(46)
					::haxe::ui::toolkit::controls::Menu value = tmp10;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(46)
					::haxe::ds::ObjectMap tmp11 = this->_subMenus;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(46)
					::haxe::ui::toolkit::controls::MenuItem tmp12 = item;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(46)
					::haxe::ui::toolkit::controls::Menu tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					tmp11->set(tmp12,tmp13);
				}
				HX_STACK_LINE(47)
				::haxe::ui::toolkit::controls::MenuItem tmp10 = item;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				this->addChild(tmp10);
			}
		}
	}
	HX_STACK_LINE(50)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	return tmp2;
}


Void Menu_obj::_onRootMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","_onRootMouseDown",0x2828de60,"haxe.ui.toolkit.controls.Menu._onRootMouseDown","haxe/ui/toolkit/controls/Menu.hx",53,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(54)
		bool mouseIn = false;		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::controls::Menu tmp = this->get_rootMenu();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::controls::Menu menu = tmp;		HX_STACK_VAR(menu,"menu");
		HX_STACK_LINE(56)
		while((true)){
			HX_STACK_LINE(56)
			bool tmp1 = (menu != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(56)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			if ((tmp2)){
				HX_STACK_LINE(56)
				break;
			}
			HX_STACK_LINE(57)
			Float tmp3 = event->stageX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			Float tmp4 = event->stageY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			bool tmp5 = menu->hitTest(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			if ((tmp6)){
				HX_STACK_LINE(58)
				mouseIn = true;
				HX_STACK_LINE(59)
				break;
			}
			HX_STACK_LINE(61)
			menu = menu->_currentSubMenu;
		}
		HX_STACK_LINE(64)
		bool tmp1 = (mouseIn == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		if ((tmp1)){
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::controls::Menu tmp2 = this->get_rootMenu();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			tmp2->hideSubMenus();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,_onRootMouseDown,(void))

Dynamic Menu_obj::buildMouseOverFunction( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","buildMouseOverFunction",0x547c31dc,"haxe.ui.toolkit.controls.Menu.buildMouseOverFunction","haxe/ui/toolkit/controls/Menu.hx",69,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(69)
	::haxe::ui::toolkit::controls::Menu _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::controls::Menu,_g,int,index)
	int __ArgCount() const { return 1; }
	Void run(::openfl::_legacy::events::MouseEvent event){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/Menu.hx",70,0x362f81e9)
		HX_STACK_ARG(event,"event")
		{
			HX_STACK_LINE(70)
			int tmp = index;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			_g->mouseOverItem(tmp);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(70)
	return  Dynamic(new _Function_1_1(_g,index));
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,buildMouseOverFunction,return )

Dynamic Menu_obj::buildMouseClickFunction( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","buildMouseClickFunction",0x43e14c30,"haxe.ui.toolkit.controls.Menu.buildMouseClickFunction","haxe/ui/toolkit/controls/Menu.hx",73,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(73)
	::haxe::ui::toolkit::controls::Menu _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::controls::Menu,_g,int,index)
	int __ArgCount() const { return 1; }
	Void run(::openfl::_legacy::events::MouseEvent event){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/Menu.hx",74,0x362f81e9)
		HX_STACK_ARG(event,"event")
		{
			HX_STACK_LINE(74)
			int tmp = index;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(74)
			_g->mouseClickItem(tmp);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(74)
	return  Dynamic(new _Function_1_1(_g,index));
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,buildMouseClickFunction,return )

Void Menu_obj::mouseClickItem( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","mouseClickItem",0xc1d49c2f,"haxe.ui.toolkit.controls.Menu.mouseClickItem","haxe/ui/toolkit/controls/Menu.hx",77,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(78)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = this->getChildAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		if ((tmp2)){
			HX_STACK_LINE(79)
			return null();
		}
		HX_STACK_LINE(82)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = this->getChildAt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::controls::MenuItem tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		tmp5 = hx::TCast< ::haxe::ui::toolkit::controls::MenuItem >::cast(tmp4);
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::controls::MenuItem item = tmp5;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(83)
		::haxe::ds::ObjectMap tmp6 = this->_subMenus;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::controls::MenuItem tmp7 = item;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::controls::Menu tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::controls::Menu subMenu = tmp8;		HX_STACK_VAR(subMenu,"subMenu");
		HX_STACK_LINE(84)
		bool tmp9 = (subMenu == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(84)
		if ((tmp9)){
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::controls::Menu tmp10 = this->get_rootMenu();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			tmp10->hideSubMenus();
			HX_STACK_LINE(86)
			::String tmp11 = ::haxe::ui::toolkit::events::MenuEvent_obj::SELECT;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::controls::MenuItem tmp12 = item;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::events::MenuEvent tmp13 = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::events::MenuEvent e = tmp13;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::controls::Menu tmp14 = this->get_rootMenu();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::events::MenuEvent tmp15 = e;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(87)
			tmp14->dispatchEvent(tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,mouseClickItem,(void))

Void Menu_obj::mouseOverItem( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","mouseOverItem",0xc1bc2453,"haxe.ui.toolkit.controls.Menu.mouseOverItem","haxe/ui/toolkit/controls/Menu.hx",91,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(92)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = this->getChildAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		if ((tmp2)){
			HX_STACK_LINE(93)
			return null();
		}
		HX_STACK_LINE(96)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = this->getChildAt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::controls::MenuItem tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		tmp5 = hx::TCast< ::haxe::ui::toolkit::controls::MenuItem >::cast(tmp4);
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::controls::MenuItem item = tmp5;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(97)
		::haxe::ds::ObjectMap tmp6 = this->_subMenus;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		::haxe::ui::toolkit::controls::MenuItem tmp7 = item;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		::haxe::ui::toolkit::controls::Menu tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		::haxe::ui::toolkit::controls::Menu subMenu = tmp8;		HX_STACK_VAR(subMenu,"subMenu");
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::controls::MenuItem tmp9 = this->_currentItem;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(99)
		if ((tmp10)){
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::controls::MenuItem tmp11 = this->_currentItem;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			tmp11->set_selected(false);
			HX_STACK_LINE(101)
			this->_currentItem = null();
		}
		HX_STACK_LINE(104)
		::haxe::ui::toolkit::controls::Menu tmp11 = this->_currentSubMenu;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(104)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(104)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(104)
		if ((tmp12)){
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::Menu tmp14 = this->_currentSubMenu;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::Menu tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::Menu tmp16 = subMenu;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(104)
			tmp13 = (tmp15 != tmp16);
		}
		else{
			HX_STACK_LINE(104)
			tmp13 = false;
		}
		HX_STACK_LINE(104)
		if ((tmp13)){
			HX_STACK_LINE(105)
			this->hideSubMenus();
		}
		HX_STACK_LINE(108)
		bool tmp14 = (subMenu != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(108)
		if ((tmp14)){
			HX_STACK_LINE(109)
			::haxe::ui::toolkit::controls::MenuItem tmp15 = item;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(109)
			this->showSubMenu(tmp15);
			HX_STACK_LINE(110)
			this->_currentItem = item;
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,mouseOverItem,(void))

Void Menu_obj::showSubMenu( ::haxe::ui::toolkit::controls::MenuItem item){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","showSubMenu",0x095be089,"haxe.ui.toolkit.controls.Menu.showSubMenu","haxe/ui/toolkit/controls/Menu.hx",116,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(117)
		item->set_selected(true);
		HX_STACK_LINE(118)
		::haxe::ds::ObjectMap tmp = this->_subMenus;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		::haxe::ui::toolkit::controls::MenuItem tmp1 = item;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		::haxe::ui::toolkit::controls::Menu tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		::haxe::ui::toolkit::controls::Menu subMenu = tmp2;		HX_STACK_VAR(subMenu,"subMenu");
		HX_STACK_LINE(119)
		bool tmp3 = (subMenu != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		if ((tmp3)){
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::Menu tmp5 = subMenu;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::Menu tmp6 = this->_currentSubMenu;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::Menu tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			tmp4 = (tmp5 != tmp7);
		}
		else{
			HX_STACK_LINE(119)
			tmp4 = false;
		}
		HX_STACK_LINE(119)
		if ((tmp4)){
			HX_STACK_LINE(120)
			Float tmp5 = item->get_stageX();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			Float tmp6 = item->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(120)
			subMenu->set_x(tmp7);
			HX_STACK_LINE(121)
			Float tmp8 = item->get_stageY();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(121)
			subMenu->set_y(tmp8);
			HX_STACK_LINE(122)
			::haxe::ui::toolkit::core::Root tmp9 = this->get_root();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(122)
			::haxe::ui::toolkit::controls::Menu tmp10 = subMenu;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(122)
			tmp9->addChild(tmp10);
			HX_STACK_LINE(123)
			this->_currentSubMenu = subMenu;
			HX_STACK_LINE(125)
			::String tmp11 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(125)
			::String transition = tmp11;		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(126)
			Float tmp12 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(126)
			Float transitionTime = tmp12;		HX_STACK_VAR(transitionTime,"transitionTime");
			HX_STACK_LINE(127)
			bool tmp13 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			if ((tmp13)){
				HX_STACK_LINE(128)
				subMenu->set_clipHeight((int)0);
				HX_STACK_LINE(129)
				::openfl::_legacy::display::Sprite tmp14 = subMenu->get_sprite();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(129)
				tmp14->set_alpha((int)1);
				HX_STACK_LINE(130)
				subMenu->set_visible(true);
				HX_STACK_LINE(131)
				::haxe::ui::toolkit::controls::Menu tmp15 = subMenu;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(131)
				Float tmp16 = transitionTime;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(131)
				Float tmp17 = subMenu->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				struct _Function_3_1{
					inline static Dynamic Block( Float &tmp17){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Menu.hx",131,0x362f81e9)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , tmp17,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(131)
				Dynamic tmp18 = _Function_3_1::Block(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(131)
				::motion::actuators::GenericActuator tmp19 = ::motion::Actuate_obj::tween(tmp15,tmp16,tmp18,true,null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(131)
				::motion::easing::IEasing tmp20 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(131)
				::motion::actuators::GenericActuator tmp21 = tmp19->ease(tmp20);		HX_STACK_VAR(tmp21,"tmp21");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,::haxe::ui::toolkit::controls::Menu,subMenu)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/Menu.hx",132,0x362f81e9)
					{
						HX_STACK_LINE(132)
						subMenu->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(131)
				tmp21->onComplete( Dynamic(new _Function_3_2(subMenu)),null());
			}
			else{
				HX_STACK_LINE(134)
				bool tmp14 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(134)
				if ((tmp14)){
					HX_STACK_LINE(135)
					::openfl::_legacy::display::Sprite tmp15 = subMenu->get_sprite();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(135)
					tmp15->set_alpha((int)0);
					HX_STACK_LINE(136)
					subMenu->set_visible(true);
					HX_STACK_LINE(137)
					::openfl::_legacy::display::Sprite tmp16 = subMenu->get_sprite();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(137)
					Float tmp17 = transitionTime;		HX_STACK_VAR(tmp17,"tmp17");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Menu.hx",137,0x362f81e9)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(137)
					Dynamic tmp18 = _Function_4_1::Block();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(137)
					::motion::actuators::GenericActuator tmp19 = ::motion::Actuate_obj::tween(tmp16,tmp17,tmp18,true,null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(137)
					::motion::easing::IEasing tmp20 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(137)
					::motion::actuators::GenericActuator tmp21 = tmp19->ease(tmp20);		HX_STACK_VAR(tmp21,"tmp21");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/Menu.hx",137,0x362f81e9)
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(137)
					tmp21->onComplete( Dynamic(new _Function_4_2()),null());
				}
				else{
					HX_STACK_LINE(140)
					::openfl::_legacy::display::Sprite tmp15 = subMenu->get_sprite();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(140)
					tmp15->set_alpha((int)1);
					HX_STACK_LINE(141)
					subMenu->set_visible(true);
				}
			}
			HX_STACK_LINE(144)
			::String tmp14 = ::haxe::ui::toolkit::events::MenuEvent_obj::OPEN;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(144)
			::haxe::ui::toolkit::controls::MenuItem tmp15 = item;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(144)
			::haxe::ui::toolkit::events::MenuEvent tmp16 = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(144)
			::haxe::ui::toolkit::events::MenuEvent e = tmp16;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(145)
			e->menu = subMenu;
			HX_STACK_LINE(146)
			::haxe::ui::toolkit::controls::Menu tmp17 = this->get_rootMenu();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(146)
			::haxe::ui::toolkit::events::MenuEvent tmp18 = e;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(146)
			tmp17->dispatchEvent(tmp18);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,showSubMenu,(void))

Void Menu_obj::hideSubMenus( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","hideSubMenus",0xbc80c48f,"haxe.ui.toolkit.controls.Menu.hideSubMenus","haxe/ui/toolkit/controls/Menu.hx",150,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		::haxe::ui::toolkit::controls::Menu _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(151)
		::haxe::ui::toolkit::controls::Menu tmp = this->_currentSubMenu;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		if ((tmp1)){
			HX_STACK_LINE(152)
			return null();
		}
		HX_STACK_LINE(155)
		::haxe::ui::toolkit::controls::Menu tmp2 = this->_currentSubMenu;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		::haxe::ui::toolkit::controls::Menu ref = tmp2;		HX_STACK_VAR(ref,"ref");
		HX_STACK_LINE(156)
		ref->hideSubMenus();
		HX_STACK_LINE(157)
		::String tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		::String transition = tmp3;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(158)
		Float tmp4 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		Float transitionTime = tmp4;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(159)
		bool tmp5 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		if ((tmp5)){
			HX_STACK_LINE(160)
			::haxe::ui::toolkit::controls::Menu tmp6 = this->_currentSubMenu;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			::openfl::_legacy::display::Sprite tmp7 = tmp6->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			tmp7->set_alpha((int)1);
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::controls::Menu tmp8 = ref;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(161)
			Float tmp9 = transitionTime;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Menu.hx",161,0x362f81e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(161)
			Dynamic tmp10 = _Function_2_1::Block();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(161)
			::motion::actuators::GenericActuator tmp11 = ::motion::Actuate_obj::tween(tmp8,tmp9,tmp10,true,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(161)
			::motion::easing::IEasing tmp12 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(161)
			::motion::actuators::GenericActuator tmp13 = tmp11->ease(tmp12);		HX_STACK_VAR(tmp13,"tmp13");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::controls::Menu,ref,::haxe::ui::toolkit::controls::Menu,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/Menu.hx",161,0x362f81e9)
				{
					HX_STACK_LINE(162)
					ref->set_visible(false);
					HX_STACK_LINE(163)
					ref->clearClip();
					HX_STACK_LINE(164)
					::haxe::ui::toolkit::core::Root tmp14 = _g->get_root();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(164)
					::haxe::ui::toolkit::controls::Menu tmp15 = ref;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(164)
					tmp14->removeChild(tmp15,false);
					HX_STACK_LINE(165)
					_g->_currentSubMenu = null();
					HX_STACK_LINE(166)
					ref->hideSubMenus();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(161)
			tmp13->onComplete( Dynamic(new _Function_2_2(ref,_g)),null());
		}
		else{
			HX_STACK_LINE(168)
			bool tmp6 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			if ((tmp6)){
				HX_STACK_LINE(169)
				::openfl::_legacy::display::Sprite tmp7 = ref->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(169)
				Float tmp8 = transitionTime;		HX_STACK_VAR(tmp8,"tmp8");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Menu.hx",169,0x362f81e9)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(169)
				Dynamic tmp9 = _Function_3_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(169)
				::motion::actuators::GenericActuator tmp10 = ::motion::Actuate_obj::tween(tmp7,tmp8,tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(169)
				::motion::easing::IEasing tmp11 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(169)
				::motion::actuators::GenericActuator tmp12 = tmp10->ease(tmp11);		HX_STACK_VAR(tmp12,"tmp12");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_2,::haxe::ui::toolkit::controls::Menu,ref,::haxe::ui::toolkit::controls::Menu,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/Menu.hx",169,0x362f81e9)
					{
						HX_STACK_LINE(170)
						ref->set_visible(false);
						HX_STACK_LINE(171)
						::haxe::ui::toolkit::core::Root tmp13 = _g->get_root();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(171)
						::haxe::ui::toolkit::controls::Menu tmp14 = ref;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(171)
						tmp13->removeChild(tmp14,false);
						HX_STACK_LINE(172)
						_g->_currentSubMenu = null();
						HX_STACK_LINE(173)
						ref->hideSubMenus();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(169)
				tmp12->onComplete( Dynamic(new _Function_3_2(ref,_g)),null());
			}
			else{
				HX_STACK_LINE(176)
				::openfl::_legacy::display::Sprite tmp7 = ref->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(176)
				tmp7->set_alpha((int)1);
				HX_STACK_LINE(177)
				ref->set_visible(false);
				HX_STACK_LINE(178)
				::haxe::ui::toolkit::core::Root tmp8 = this->get_root();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(178)
				::haxe::ui::toolkit::controls::Menu tmp9 = ref;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(178)
				tmp8->removeChild(tmp9,false);
				HX_STACK_LINE(179)
				this->_currentSubMenu = null();
				HX_STACK_LINE(180)
				ref->hideSubMenus();
			}
		}
		HX_STACK_LINE(183)
		::haxe::ui::toolkit::controls::MenuItem tmp6 = this->_currentItem;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(183)
		if ((tmp7)){
			HX_STACK_LINE(184)
			::haxe::ui::toolkit::controls::MenuItem tmp8 = this->_currentItem;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(184)
			tmp8->set_selected(false);
			HX_STACK_LINE(185)
			this->_currentItem = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,hideSubMenus,(void))

::haxe::ui::toolkit::controls::Menu Menu_obj::get_currentSubMenu( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","get_currentSubMenu",0x801b7ee8,"haxe.ui.toolkit.controls.Menu.get_currentSubMenu","haxe/ui/toolkit/controls/Menu.hx",194,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(195)
	::haxe::ui::toolkit::controls::Menu tmp = this->_currentSubMenu;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,get_currentSubMenu,return )

::haxe::ui::toolkit::controls::Menu Menu_obj::get_parentMenu( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","get_parentMenu",0x6897e9cb,"haxe.ui.toolkit.controls.Menu.get_parentMenu","haxe/ui/toolkit/controls/Menu.hx",198,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::haxe::ui::toolkit::controls::Menu tmp = this->_parentMenu;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,get_parentMenu,return )

::haxe::ui::toolkit::controls::Menu Menu_obj::get_rootMenu( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","get_rootMenu",0x15421243,"haxe.ui.toolkit.controls.Menu.get_rootMenu","haxe/ui/toolkit/controls/Menu.hx",202,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	::haxe::ui::toolkit::controls::Menu menu = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(menu,"menu");
	HX_STACK_LINE(204)
	while((true)){
		HX_STACK_LINE(204)
		bool tmp = (menu->_parentMenu != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		if ((tmp1)){
			HX_STACK_LINE(204)
			break;
		}
		HX_STACK_LINE(205)
		menu = menu->_parentMenu;
	}
	HX_STACK_LINE(208)
	::haxe::ui::toolkit::controls::Menu tmp = menu;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,get_rootMenu,return )

::haxe::ui::toolkit::core::DisplayObject Menu_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","clone",0xe6081ce4,"haxe.ui.toolkit.controls.Menu.clone","src/haxe/ui/toolkit/controls/Menu.hx",1,0x34a4eeb4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Menu c = ((::haxe::ui::toolkit::controls::Menu)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::Menu tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Menu_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","self",0xec974fe5,"haxe.ui.toolkit.controls.Menu.self","src/haxe/ui/toolkit/controls/Menu.hx",1,0x34a4eeb4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Menu tmp = ::haxe::ui::toolkit::controls::Menu_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Menu_obj::Menu_obj()
{
}

void Menu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Menu);
	HX_MARK_MEMBER_NAME(_subMenus,"_subMenus");
	HX_MARK_MEMBER_NAME(_currentItem,"_currentItem");
	HX_MARK_MEMBER_NAME(_currentSubMenu,"_currentSubMenu");
	HX_MARK_MEMBER_NAME(_parentMenu,"_parentMenu");
	HX_MARK_MEMBER_NAME(currentSubMenu,"currentSubMenu");
	HX_MARK_MEMBER_NAME(parentMenu,"parentMenu");
	HX_MARK_MEMBER_NAME(rootMenu,"rootMenu");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Menu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_subMenus,"_subMenus");
	HX_VISIT_MEMBER_NAME(_currentItem,"_currentItem");
	HX_VISIT_MEMBER_NAME(_currentSubMenu,"_currentSubMenu");
	HX_VISIT_MEMBER_NAME(_parentMenu,"_parentMenu");
	HX_VISIT_MEMBER_NAME(currentSubMenu,"currentSubMenu");
	HX_VISIT_MEMBER_NAME(parentMenu,"parentMenu");
	HX_VISIT_MEMBER_NAME(rootMenu,"rootMenu");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Menu_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"rootMenu") ) { return inCallProp == hx::paccAlways ? get_rootMenu() : rootMenu; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_subMenus") ) { return _subMenus; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"parentMenu") ) { return inCallProp == hx::paccAlways ? get_parentMenu() : parentMenu; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_parentMenu") ) { return _parentMenu; }
		if (HX_FIELD_EQ(inName,"showSubMenu") ) { return showSubMenu_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentItem") ) { return _currentItem; }
		if (HX_FIELD_EQ(inName,"hideSubMenus") ) { return hideSubMenus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rootMenu") ) { return get_rootMenu_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseOverItem") ) { return mouseOverItem_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseClickItem") ) { return mouseClickItem_dyn(); }
		if (HX_FIELD_EQ(inName,"currentSubMenu") ) { return inCallProp == hx::paccAlways ? get_currentSubMenu() : currentSubMenu; }
		if (HX_FIELD_EQ(inName,"get_parentMenu") ) { return get_parentMenu_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_currentSubMenu") ) { return _currentSubMenu; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_currentSubMenu") ) { return get_currentSubMenu_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"buildMouseOverFunction") ) { return buildMouseOverFunction_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"buildMouseClickFunction") ) { return buildMouseClickFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Menu_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rootMenu") ) { rootMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_subMenus") ) { _subMenus=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMenu") ) { parentMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_parentMenu") ) { _parentMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentItem") ) { _currentItem=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentSubMenu") ) { currentSubMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_currentSubMenu") ) { _currentSubMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Menu_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Menu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_subMenus","\xb3","\xf3","\x78","\xc2"));
	outFields->push(HX_HCSTRING("_currentItem","\xed","\x4b","\x5b","\xe4"));
	outFields->push(HX_HCSTRING("_currentSubMenu","\xa5","\x98","\x51","\x6d"));
	outFields->push(HX_HCSTRING("_parentMenu","\x08","\x21","\xf5","\xb9"));
	outFields->push(HX_HCSTRING("currentSubMenu","\x06","\x50","\xf1","\x23"));
	outFields->push(HX_HCSTRING("parentMenu","\xe9","\x53","\x6b","\xe7"));
	outFields->push(HX_HCSTRING("rootMenu","\xe1","\x18","\x90","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(Menu_obj,_subMenus),HX_HCSTRING("_subMenus","\xb3","\xf3","\x78","\xc2")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(Menu_obj,_currentItem),HX_HCSTRING("_currentItem","\xed","\x4b","\x5b","\xe4")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,_currentSubMenu),HX_HCSTRING("_currentSubMenu","\xa5","\x98","\x51","\x6d")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,_parentMenu),HX_HCSTRING("_parentMenu","\x08","\x21","\xf5","\xb9")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,currentSubMenu),HX_HCSTRING("currentSubMenu","\x06","\x50","\xf1","\x23")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,parentMenu),HX_HCSTRING("parentMenu","\xe9","\x53","\x6b","\xe7")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,rootMenu),HX_HCSTRING("rootMenu","\xe1","\x18","\x90","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_subMenus","\xb3","\xf3","\x78","\xc2"),
	HX_HCSTRING("_currentItem","\xed","\x4b","\x5b","\xe4"),
	HX_HCSTRING("_currentSubMenu","\xa5","\x98","\x51","\x6d"),
	HX_HCSTRING("_parentMenu","\x08","\x21","\xf5","\xb9"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("_onRootMouseDown","\x87","\x78","\xe0","\x96"),
	HX_HCSTRING("buildMouseOverFunction","\x43","\x63","\xa8","\x65"),
	HX_HCSTRING("buildMouseClickFunction","\xe9","\x54","\x60","\x39"),
	HX_HCSTRING("mouseClickItem","\x96","\x8e","\x9d","\xb6"),
	HX_HCSTRING("mouseOverItem","\xcc","\xbb","\x17","\xbd"),
	HX_HCSTRING("showSubMenu","\xc2","\x77","\xf8","\xf2"),
	HX_HCSTRING("hideSubMenus","\x36","\x7f","\xe8","\x3b"),
	HX_HCSTRING("currentSubMenu","\x06","\x50","\xf1","\x23"),
	HX_HCSTRING("parentMenu","\xe9","\x53","\x6b","\xe7"),
	HX_HCSTRING("rootMenu","\xe1","\x18","\x90","\xdf"),
	HX_HCSTRING("get_currentSubMenu","\xcf","\x30","\x8b","\xbf"),
	HX_HCSTRING("get_parentMenu","\x32","\xdc","\x60","\x5d"),
	HX_HCSTRING("get_rootMenu","\xea","\xcc","\xa9","\x94"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Menu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Menu_obj::__mClass,"__mClass");
};

#endif

hx::Class Menu_obj::__mClass;

void Menu_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Menu","\xb5","\xfa","\xd5","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Menu_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Menu_obj >;
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
