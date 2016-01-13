#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Box
#include <haxe/ui/toolkit/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_DefaultScrollViewRefreshPrompt
#include <haxe/ui/toolkit/containers/DefaultScrollViewRefreshPrompt.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_DefaultScrollViewRefreshing
#include <haxe/ui/toolkit/containers/DefaultScrollViewRefreshing.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewLayout
#include <haxe/ui/toolkit/containers/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewRefreshPrompt
#include <haxe/ui/toolkit/containers/ScrollViewRefreshPrompt.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewRefreshing
#include <haxe/ui/toolkit/containers/ScrollViewRefreshing.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ScrollView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","new",0x13956cfe,"haxe.ui.toolkit.containers.ScrollView.new","haxe/ui/toolkit/containers/ScrollView.hx",27,0x89f00132)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(452)
	this->_pulling = false;
	HX_STACK_LINE(52)
	this->_virtualScrolling = false;
	HX_STACK_LINE(51)
	this->_autoHideScrolls = false;
	HX_STACK_LINE(48)
	this->_scrollSensitivity = (int)0;
	HX_STACK_LINE(41)
	this->_inertialScrolling = false;
	HX_STACK_LINE(40)
	this->_inertiaSensitivity = ((Float)5);
	HX_STACK_LINE(38)
	this->_inertiaSpeed = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);
	HX_STACK_LINE(33)
	this->_showVScroll = true;
	HX_STACK_LINE(32)
	this->_showHScroll = true;
	HX_STACK_LINE(55)
	super::__construct();
	HX_STACK_LINE(56)
	this->addStates(Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")),null());
	HX_STACK_LINE(57)
	::haxe::ui::toolkit::containers::ScrollViewLayout tmp = ::haxe::ui::toolkit::containers::ScrollViewLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	this->_layout = tmp;
	HX_STACK_LINE(58)
	::openfl::_legacy::display::Sprite tmp1 = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	this->_eventTarget = tmp1;
	HX_STACK_LINE(59)
	::openfl::_legacy::display::Sprite tmp2 = this->_eventTarget;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	tmp2->set_visible(false);
	HX_STACK_LINE(61)
	::haxe::ui::toolkit::containers::Box tmp3 = ::haxe::ui::toolkit::containers::Box_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	this->_container = tmp3;
	HX_STACK_LINE(62)
	::haxe::ui::toolkit::containers::Box tmp4 = this->_container;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	::haxe::ui::toolkit::layout::VerticalLayout tmp5 = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	tmp4->set_layout(tmp5);
	HX_STACK_LINE(63)
	::haxe::ui::toolkit::containers::Box tmp6 = this->_container;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(63)
	tmp6->set_id(HX_HCSTRING("container","\x41","\x75","\x73","\xbf"));
	HX_STACK_LINE(64)
	::haxe::ui::toolkit::containers::Box tmp7 = this->_container;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(64)
	::haxe::ui::toolkit::containers::Box tmp8 = this->_container;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	Float tmp9 = tmp8->set_percentHeight((int)100);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(64)
	tmp7->set_percentWidth(tmp9);
	HX_STACK_LINE(65)
	::haxe::ui::toolkit::containers::Box tmp10 = this->_container;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(65)
	this->addChild(tmp10);
}
;
	return null();
}

//ScrollView_obj::~ScrollView_obj() { }

Dynamic ScrollView_obj::__CreateEmpty() { return  new ScrollView_obj; }
hx::ObjectPtr< ScrollView_obj > ScrollView_obj::__new()
{  hx::ObjectPtr< ScrollView_obj > _result_ = new ScrollView_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScrollView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScrollView_obj > _result_ = new ScrollView_obj();
	_result_->__construct();
	return _result_;}

Void ScrollView_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","preInitialize",0xa7c50d71,"haxe.ui.toolkit.containers.ScrollView.preInitialize","haxe/ui/toolkit/containers/ScrollView.hx",74,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		this->super::preInitialize();
		HX_STACK_LINE(77)
		::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		if ((tmp1)){
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			bool tmp3 = tmp2->get_autoHideScrolls();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			this->_autoHideScrolls = tmp3;
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp4 = this->_layout;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			Dynamic tmp5 = ::Reflect_obj::getProperty(tmp4,HX_HCSTRING("inlineScrolls","\x6d","\x7e","\x60","\x4b"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			if ((tmp6)){
				HX_STACK_LINE(80)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->_layout;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				::haxe::ui::toolkit::style::Style tmp8 = this->_baseStyle;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(80)
				bool tmp9 = tmp8->get_inlineScrolls();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(80)
				::Reflect_obj::setProperty(tmp7,HX_HCSTRING("inlineScrolls","\x6d","\x7e","\x60","\x4b"),tmp9);
			}
		}
	}
return null();
}


Void ScrollView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","initialize",0x3e478472,"haxe.ui.toolkit.containers.ScrollView.initialize","haxe/ui/toolkit/containers/ScrollView.hx",85,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		this->super::initialize();
		HX_STACK_LINE(88)
		::String tmp = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		Dynamic tmp1 = this->_onMouseWheel_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		this->addEventListener(tmp,tmp1,null(),null(),null());
		HX_STACK_LINE(89)
		::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		Dynamic tmp3 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		this->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(91)
		::openfl::_legacy::display::Sprite tmp4 = this->get_sprite();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		::openfl::_legacy::display::Sprite tmp5 = this->_eventTarget;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		tmp4->addChild(tmp5);
	}
return null();
}


Void ScrollView_obj::postInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","postInitialize",0x18cf7df2,"haxe.ui.toolkit.containers.ScrollView.postInitialize","haxe/ui/toolkit/containers/ScrollView.hx",94,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::containers::ScrollView _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		this->super::postInitialize();
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::containers::Box tmp = this->_container;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = tmp->getChildAt((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = tmp1;		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(97)
		bool tmp2 = (content != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		if ((tmp2)){
			HX_STACK_LINE(98)
			::haxe::ui::toolkit::core::interfaces::IEventDispatcher tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			tmp3 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >::cast(content);
			HX_STACK_LINE(98)
			::String tmp4 = HX_HCSTRING("haxeui_resize","\xd9","\x4e","\x57","\xda");		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::containers::ScrollView,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic e){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/containers/ScrollView.hx",99,0x89f00132)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(99)
					_g->invalidate((int)256,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(98)
			tmp3->addEventListener(tmp4, Dynamic(new _Function_2_1(_g)),null(),null(),null());
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ScrollView_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","addChild",0x18e2b65d,"haxe.ui.toolkit.containers.ScrollView.addChild","haxe/ui/toolkit/containers/ScrollView.hx",104,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(105)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(106)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	::haxe::ui::toolkit::containers::Box tmp1 = this->_container;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(106)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	if ((tmp4)){
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::controls::HScroll tmp7 = this->_hscroll;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::controls::HScroll tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::controls::HScroll tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		tmp5 = (tmp6 == tmp9);
	}
	else{
		HX_STACK_LINE(106)
		tmp5 = true;
	}
	HX_STACK_LINE(106)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(106)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(106)
	if ((tmp6)){
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::controls::VScroll tmp9 = this->_vscroll;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::controls::VScroll tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		tmp7 = (tmp8 == tmp10);
	}
	else{
		HX_STACK_LINE(106)
		tmp7 = true;
	}
	HX_STACK_LINE(106)
	if ((tmp7)){
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = this->super::addChild(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(107)
		r = tmp9;
	}
	else{
		HX_STACK_LINE(108)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(108)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(108)
		if ((tmp9)){
			HX_STACK_LINE(109)
			this->_refreshPromptView = ((::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt)(child));
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp10 = this->_refreshPromptView;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			tmp10->set_alpha((int)0);
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp12 = this->super::addChildAt(tmp11,(int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			r = tmp12;
		}
		else{
			HX_STACK_LINE(112)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(112)
			bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::haxe::ui::toolkit::containers::ScrollViewRefreshing >());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(112)
			if ((tmp11)){
				HX_STACK_LINE(113)
				this->_refreshingView = ((::haxe::ui::toolkit::containers::ScrollViewRefreshing)(child));
				HX_STACK_LINE(114)
				::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp12 = this->_refreshingView;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(114)
				tmp12->set_visible(false);
				HX_STACK_LINE(115)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(115)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp14 = this->super::addChildAt(tmp13,(int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(115)
				r = tmp14;
			}
			else{
				HX_STACK_LINE(117)
				::haxe::ui::toolkit::containers::Box tmp12 = this->_container;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(117)
				int tmp13 = tmp12->get_numChildren();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(117)
				bool tmp14 = (tmp13 >= (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(117)
				if ((tmp14)){
					HX_STACK_LINE(118)
					Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("ScrollView.hx","\xcc","\x48","\xd9","\x56"),118,HX_HCSTRING("haxe.ui.toolkit.containers.ScrollView","\x0c","\xd6","\x67","\x8c"),HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(118)
					::haxe::Log_obj::trace(HX_HCSTRING("WARNING: ScrollView will only use the first child as the scroll content","\xf5","\x66","\xf6","\x84"),tmp15);
				}
				HX_STACK_LINE(120)
				::haxe::ui::toolkit::containers::Box tmp15 = this->_container;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(120)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp16 = child;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(120)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp17 = tmp15->addChild(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(120)
				r = tmp17;
			}
		}
	}
	HX_STACK_LINE(122)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(122)
	return tmp8;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ScrollView_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","addChildAt",0x1fc300b0,"haxe.ui.toolkit.containers.ScrollView.addChildAt","haxe/ui/toolkit/containers/ScrollView.hx",125,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(126)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(127)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	::haxe::ui::toolkit::containers::Box tmp1 = this->_container;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	if ((tmp4)){
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::controls::HScroll tmp7 = this->_hscroll;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::controls::HScroll tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::controls::HScroll tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(127)
		tmp5 = (tmp6 == tmp9);
	}
	else{
		HX_STACK_LINE(127)
		tmp5 = true;
	}
	HX_STACK_LINE(127)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(127)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(127)
	if ((tmp6)){
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::controls::VScroll tmp9 = this->_vscroll;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::controls::VScroll tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(127)
		tmp7 = (tmp8 == tmp10);
	}
	else{
		HX_STACK_LINE(127)
		tmp7 = true;
	}
	HX_STACK_LINE(127)
	if ((tmp7)){
		HX_STACK_LINE(128)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(128)
		int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = this->super::addChildAt(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(128)
		r = tmp10;
	}
	else{
		HX_STACK_LINE(130)
		::haxe::ui::toolkit::containers::Box tmp8 = this->_container;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		int tmp9 = tmp8->get_numChildren();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		bool tmp10 = (tmp9 >= (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(130)
		if ((tmp10)){
			HX_STACK_LINE(131)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("ScrollView.hx","\xcc","\x48","\xd9","\x56"),131,HX_HCSTRING("haxe.ui.toolkit.containers.ScrollView","\x0c","\xd6","\x67","\x8c"),HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			::haxe::Log_obj::trace(HX_HCSTRING("WARNING: ScrollView will only use the first child as the scroll content","\xf5","\x66","\xf6","\x84"),tmp11);
		}
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::containers::Box tmp11 = this->_container;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(133)
		int tmp13 = index;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp14 = tmp11->addChildAt(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(133)
		r = tmp14;
	}
	HX_STACK_LINE(135)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(135)
	return tmp8;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ScrollView_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","removeChild",0x4d29f156,"haxe.ui.toolkit.containers.ScrollView.removeChild","haxe/ui/toolkit/containers/ScrollView.hx",138,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::containers::Box tmp1 = this->_container;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		if ((tmp4)){
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::controls::HScroll tmp7 = this->_hscroll;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::controls::HScroll tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::controls::HScroll tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			tmp5 = (tmp6 == tmp9);
		}
		else{
			HX_STACK_LINE(140)
			tmp5 = true;
		}
		HX_STACK_LINE(140)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		if ((tmp7)){
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::controls::VScroll tmp10 = this->_vscroll;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::controls::VScroll tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::controls::VScroll tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(140)
			tmp8 = (tmp9 == tmp12);
		}
		else{
			HX_STACK_LINE(140)
			tmp8 = true;
		}
		HX_STACK_LINE(140)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		if ((tmp10)){
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp13 = this->_refreshPromptView;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(140)
			tmp11 = (tmp12 == tmp15);
		}
		else{
			HX_STACK_LINE(140)
			tmp11 = true;
		}
		HX_STACK_LINE(140)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(140)
		if ((tmp12)){
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp14 = child;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp15 = this->_refreshingView;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(140)
			tmp13 = (tmp14 == tmp16);
		}
		else{
			HX_STACK_LINE(140)
			tmp13 = true;
		}
		HX_STACK_LINE(140)
		if ((tmp13)){
			HX_STACK_LINE(141)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp14 = child;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(141)
			bool tmp15 = dispose;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(141)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp16 = this->super::removeChild(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(141)
			r = tmp16;
		}
		else{
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::containers::Box tmp14 = this->_container;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(143)
			bool tmp16 = dispose;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp17 = tmp14->removeChild(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(143)
			r = tmp17;
		}
		HX_STACK_LINE(145)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp14 = r;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(145)
		return tmp14;
	}
}


Void ScrollView_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","dispose",0x7edbc43d,"haxe.ui.toolkit.containers.ScrollView.dispose","haxe/ui/toolkit/containers/ScrollView.hx",148,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(149)
		::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		::openfl::_legacy::display::Sprite tmp1 = this->_eventTarget;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		tmp->removeChild(tmp1);
		HX_STACK_LINE(150)
		this->super::dispose();
	}
return null();
}


bool ScrollView_obj::get_inertialScrolling( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_inertialScrolling",0xb81bf958,"haxe.ui.toolkit.containers.ScrollView.get_inertialScrolling","haxe/ui/toolkit/containers/ScrollView.hx",157,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(158)
	bool tmp = this->_inertialScrolling;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_inertialScrolling,return )

bool ScrollView_obj::set_inertialScrolling( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_inertialScrolling",0x0c24c764,"haxe.ui.toolkit.containers.ScrollView.set_inertialScrolling","haxe/ui/toolkit/containers/ScrollView.hx",160,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(161)
	this->_inertialScrolling = value;
	HX_STACK_LINE(162)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(162)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_inertialScrolling,return )

bool ScrollView_obj::get_virtualScrolling( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_virtualScrolling",0xa9315a15,"haxe.ui.toolkit.containers.ScrollView.get_virtualScrolling","haxe/ui/toolkit/containers/ScrollView.hx",166,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	bool tmp = this->_virtualScrolling;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_virtualScrolling,return )

bool ScrollView_obj::set_virtualScrolling( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_virtualScrolling",0x75e91189,"haxe.ui.toolkit.containers.ScrollView.set_virtualScrolling","haxe/ui/toolkit/containers/ScrollView.hx",169,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(170)
	this->_virtualScrolling = value;
	HX_STACK_LINE(171)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_virtualScrolling,return )

bool ScrollView_obj::get_showHScroll( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_showHScroll",0xc837f04d,"haxe.ui.toolkit.containers.ScrollView.get_showHScroll","haxe/ui/toolkit/containers/ScrollView.hx",177,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(178)
	bool tmp = this->_showHScroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_showHScroll,return )

bool ScrollView_obj::set_showHScroll( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_showHScroll",0xc4036d59,"haxe.ui.toolkit.containers.ScrollView.set_showHScroll","haxe/ui/toolkit/containers/ScrollView.hx",181,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(182)
	this->_showHScroll = value;
	HX_STACK_LINE(183)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_showHScroll,return )

bool ScrollView_obj::get_showVScroll( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_showVScroll",0x0e646edb,"haxe.ui.toolkit.containers.ScrollView.get_showVScroll","haxe/ui/toolkit/containers/ScrollView.hx",186,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	bool tmp = this->_showVScroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_showVScroll,return )

bool ScrollView_obj::set_showVScroll( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_showVScroll",0x0a2febe7,"haxe.ui.toolkit.containers.ScrollView.set_showVScroll","haxe/ui/toolkit/containers/ScrollView.hx",190,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(191)
	this->_showVScroll = value;
	HX_STACK_LINE(192)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_showVScroll,return )

Float ScrollView_obj::get_hscrollPos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_hscrollPos",0xaf8eca8a,"haxe.ui.toolkit.containers.ScrollView.get_hscrollPos","haxe/ui/toolkit/containers/ScrollView.hx",200,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	::haxe::ui::toolkit::controls::HScroll tmp = this->_hscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	if ((tmp1)){
		HX_STACK_LINE(202)
		::haxe::ui::toolkit::controls::HScroll tmp2 = this->_hscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		Float tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		return tmp3;
	}
	HX_STACK_LINE(204)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPos,return )

Float ScrollView_obj::set_hscrollPos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_hscrollPos",0xcfaeb2fe,"haxe.ui.toolkit.containers.ScrollView.set_hscrollPos","haxe/ui/toolkit/containers/ScrollView.hx",207,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(208)
	::haxe::ui::toolkit::controls::HScroll tmp = this->_hscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	if ((tmp1)){
		HX_STACK_LINE(209)
		::haxe::ui::toolkit::controls::HScroll tmp2 = this->_hscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		tmp2->set_pos(tmp3);
	}
	HX_STACK_LINE(211)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPos,return )

Float ScrollView_obj::get_hscrollMin( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_hscrollMin",0xaf8c7e88,"haxe.ui.toolkit.containers.ScrollView.get_hscrollMin","haxe/ui/toolkit/containers/ScrollView.hx",214,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	::haxe::ui::toolkit::controls::HScroll tmp = this->_hscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	if ((tmp1)){
		HX_STACK_LINE(216)
		::haxe::ui::toolkit::controls::HScroll tmp2 = this->_hscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		Float tmp3 = tmp2->get_min();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(216)
		return tmp3;
	}
	HX_STACK_LINE(218)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollMin,return )

Float ScrollView_obj::set_hscrollMin( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_hscrollMin",0xcfac66fc,"haxe.ui.toolkit.containers.ScrollView.set_hscrollMin","haxe/ui/toolkit/containers/ScrollView.hx",221,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(222)
	bool tmp = this->_virtualScrolling;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	if ((tmp1)){
	}
	HX_STACK_LINE(225)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollMin,return )

Float ScrollView_obj::get_hscrollMax( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_hscrollMax",0xaf8c779a,"haxe.ui.toolkit.containers.ScrollView.get_hscrollMax","haxe/ui/toolkit/containers/ScrollView.hx",228,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	::haxe::ui::toolkit::controls::HScroll tmp = this->_hscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	if ((tmp1)){
		HX_STACK_LINE(230)
		::haxe::ui::toolkit::controls::HScroll tmp2 = this->_hscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(230)
		Float tmp3 = tmp2->get_max();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		return tmp3;
	}
	HX_STACK_LINE(232)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollMax,return )

Float ScrollView_obj::set_hscrollMax( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_hscrollMax",0xcfac600e,"haxe.ui.toolkit.containers.ScrollView.set_hscrollMax","haxe/ui/toolkit/containers/ScrollView.hx",235,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(236)
	bool tmp = this->_virtualScrolling;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	if ((tmp1)){
		HX_STACK_LINE(237)
		this->createHScroll(true);
		HX_STACK_LINE(238)
		::haxe::ui::toolkit::controls::HScroll tmp2 = this->_hscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(238)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		tmp2->set_max(tmp3);
	}
	HX_STACK_LINE(240)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(240)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollMax,return )

Float ScrollView_obj::get_hscrollPageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_hscrollPageSize",0xbe0551fa,"haxe.ui.toolkit.containers.ScrollView.get_hscrollPageSize","haxe/ui/toolkit/containers/ScrollView.hx",243,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	::haxe::ui::toolkit::controls::HScroll tmp = this->_hscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	if ((tmp1)){
		HX_STACK_LINE(245)
		::haxe::ui::toolkit::controls::HScroll tmp2 = this->_hscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		Float tmp3 = tmp2->get_pageSize();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		return tmp3;
	}
	HX_STACK_LINE(247)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_hscrollPageSize,return )

Float ScrollView_obj::set_hscrollPageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_hscrollPageSize",0xfaa24506,"haxe.ui.toolkit.containers.ScrollView.set_hscrollPageSize","haxe/ui/toolkit/containers/ScrollView.hx",250,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(251)
	bool tmp = this->_virtualScrolling;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	if ((tmp1)){
	}
	HX_STACK_LINE(254)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_hscrollPageSize,return )

Float ScrollView_obj::get_vscrollPos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_vscrollPos",0x33a158bc,"haxe.ui.toolkit.containers.ScrollView.get_vscrollPos","haxe/ui/toolkit/containers/ScrollView.hx",262,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	if ((tmp1)){
		HX_STACK_LINE(264)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		Float tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		return tmp3;
	}
	HX_STACK_LINE(266)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPos,return )

Float ScrollView_obj::set_vscrollPos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_vscrollPos",0x53c14130,"haxe.ui.toolkit.containers.ScrollView.set_vscrollPos","haxe/ui/toolkit/containers/ScrollView.hx",269,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(270)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	if ((tmp1)){
		HX_STACK_LINE(271)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		tmp2->set_pos(tmp3);
	}
	HX_STACK_LINE(273)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(273)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPos,return )

Float ScrollView_obj::get_vscrollMin( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_vscrollMin",0x339f0cba,"haxe.ui.toolkit.containers.ScrollView.get_vscrollMin","haxe/ui/toolkit/containers/ScrollView.hx",276,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(277)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	if ((tmp1)){
		HX_STACK_LINE(278)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		Float tmp3 = tmp2->get_min();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		return tmp3;
	}
	HX_STACK_LINE(280)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollMin,return )

Float ScrollView_obj::set_vscrollMin( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_vscrollMin",0x53bef52e,"haxe.ui.toolkit.containers.ScrollView.set_vscrollMin","haxe/ui/toolkit/containers/ScrollView.hx",283,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(284)
	bool tmp = this->_virtualScrolling;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	if ((tmp1)){
	}
	HX_STACK_LINE(287)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollMin,return )

Float ScrollView_obj::get_vscrollMax( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_vscrollMax",0x339f05cc,"haxe.ui.toolkit.containers.ScrollView.get_vscrollMax","haxe/ui/toolkit/containers/ScrollView.hx",290,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(291)
	if ((tmp1)){
		HX_STACK_LINE(292)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(292)
		Float tmp3 = tmp2->get_max();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		return tmp3;
	}
	HX_STACK_LINE(294)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollMax,return )

Float ScrollView_obj::set_vscrollMax( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_vscrollMax",0x53beee40,"haxe.ui.toolkit.containers.ScrollView.set_vscrollMax","haxe/ui/toolkit/containers/ScrollView.hx",297,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(298)
	bool tmp = this->_virtualScrolling;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	if ((tmp1)){
		HX_STACK_LINE(299)
		this->createVScroll(true);
		HX_STACK_LINE(300)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(300)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(300)
		tmp2->set_max(tmp3);
	}
	HX_STACK_LINE(302)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(302)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollMax,return )

Float ScrollView_obj::get_vscrollPageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_vscrollPageSize",0xe3c80e88,"haxe.ui.toolkit.containers.ScrollView.get_vscrollPageSize","haxe/ui/toolkit/containers/ScrollView.hx",305,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(306)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	if ((tmp1)){
		HX_STACK_LINE(307)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		Float tmp3 = tmp2->get_pageSize();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		return tmp3;
	}
	HX_STACK_LINE(309)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_vscrollPageSize,return )

Float ScrollView_obj::set_vscrollPageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_vscrollPageSize",0x20650194,"haxe.ui.toolkit.containers.ScrollView.set_vscrollPageSize","haxe/ui/toolkit/containers/ScrollView.hx",312,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(313)
	bool tmp = this->_virtualScrolling;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(313)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(313)
	if ((tmp1)){
		HX_STACK_LINE(314)
		this->createVScroll(true);
		HX_STACK_LINE(315)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		tmp2->set_pageSize(tmp3);
	}
	HX_STACK_LINE(317)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(317)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_vscrollPageSize,return )

Void ScrollView_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","invalidate",0xd8b66c9d,"haxe.ui.toolkit.containers.ScrollView.invalidate","haxe/ui/toolkit/containers/ScrollView.hx",323,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(324)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		if ((tmp3)){
			HX_STACK_LINE(324)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(324)
			tmp4 = true;
		}
		HX_STACK_LINE(324)
		if ((tmp4)){
			HX_STACK_LINE(325)
			return null();
		}
		HX_STACK_LINE(328)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		bool tmp6 = recursive;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(328)
		this->super::invalidate(tmp5,tmp6);
		HX_STACK_LINE(329)
		this->_invalidating = true;
		HX_STACK_LINE(330)
		int tmp7 = (int(type) & int((int)256));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(330)
		bool tmp8 = (tmp7 == (int)256);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(330)
		if ((tmp8)){
			HX_STACK_LINE(331)
			this->checkScrolls();
			HX_STACK_LINE(332)
			this->updateScrollRect();
			HX_STACK_LINE(333)
			this->resizeEventTarget();
		}
		HX_STACK_LINE(335)
		this->_invalidating = false;
	}
return null();
}


Void ScrollView_obj::_onInertiaEnterFrame( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onInertiaEnterFrame",0x50840a13,"haxe.ui.toolkit.containers.ScrollView._onInertiaEnterFrame","haxe/ui/toolkit/containers/ScrollView.hx",342,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(344)
		::openfl::_legacy::display::Sprite tmp = this->_eventTarget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		tmp->set_visible(true);
		HX_STACK_LINE(345)
		::haxe::ui::toolkit::containers::Box tmp1 = this->_container;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = tmp1->getChildAt((int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(345)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = tmp2;		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(347)
		bool tmp3 = (content != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(347)
		if ((tmp3)){
			HX_STACK_LINE(349)
			::openfl::_legacy::geom::Point tmp4 = this->_inertiaSpeed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(349)
			hx::MultEq(tmp4->x,((Float)0.8));
			HX_STACK_LINE(350)
			::openfl::_legacy::geom::Point tmp5 = this->_inertiaSpeed;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(350)
			hx::MultEq(tmp5->y,((Float)0.8));
			HX_STACK_LINE(352)
			Float tmp6 = content->get_width();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(352)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(352)
			Float tmp8 = tmp7->get_usableWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(352)
			bool tmp9 = (tmp6 > tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(352)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(352)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(352)
			if ((tmp10)){
				HX_STACK_LINE(352)
				bool tmp12 = this->_virtualScrolling;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(352)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(352)
				tmp11 = (tmp13 == true);
			}
			else{
				HX_STACK_LINE(352)
				tmp11 = true;
			}
			HX_STACK_LINE(352)
			if ((tmp11)){
				HX_STACK_LINE(353)
				bool tmp12 = this->_showHScroll;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(353)
				bool tmp13 = (tmp12 == true);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(353)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(353)
				if ((tmp13)){
					HX_STACK_LINE(353)
					bool tmp15 = this->_autoHideScrolls;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(353)
					bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(353)
					tmp14 = (tmp16 == true);
				}
				else{
					HX_STACK_LINE(353)
					tmp14 = false;
				}
				HX_STACK_LINE(353)
				if ((tmp14)){
					HX_STACK_LINE(354)
					::haxe::ui::toolkit::controls::HScroll tmp15 = this->_hscroll;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(354)
					tmp15->set_visible(true);
				}
				HX_STACK_LINE(356)
				::haxe::ui::toolkit::controls::HScroll tmp15 = this->_hscroll;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(356)
				bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(356)
				if ((tmp16)){
					HX_STACK_LINE(357)
					::haxe::ui::toolkit::controls::HScroll tmp17 = this->_hscroll;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(357)
					::haxe::ui::toolkit::controls::HScroll _g = tmp17;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(357)
					Float tmp18 = _g->get_pos();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(357)
					::openfl::_legacy::geom::Point tmp19 = this->_inertiaSpeed;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(357)
					Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(357)
					Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(357)
					_g->set_pos(tmp21);
				}
			}
			HX_STACK_LINE(361)
			Float tmp12 = content->get_height();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(361)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp13 = this->get_layout();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(361)
			Float tmp14 = tmp13->get_usableHeight();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(361)
			bool tmp15 = (tmp12 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(361)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(361)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(361)
			if ((tmp16)){
				HX_STACK_LINE(361)
				bool tmp18 = this->_virtualScrolling;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(361)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(361)
				tmp17 = (tmp19 == true);
			}
			else{
				HX_STACK_LINE(361)
				tmp17 = true;
			}
			HX_STACK_LINE(361)
			if ((tmp17)){
				HX_STACK_LINE(362)
				bool tmp18 = this->_showVScroll;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(362)
				bool tmp19 = (tmp18 == true);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(362)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(362)
				if ((tmp19)){
					HX_STACK_LINE(362)
					bool tmp21 = this->_autoHideScrolls;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(362)
					bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(362)
					tmp20 = (tmp22 == true);
				}
				else{
					HX_STACK_LINE(362)
					tmp20 = false;
				}
				HX_STACK_LINE(362)
				if ((tmp20)){
					HX_STACK_LINE(363)
					::haxe::ui::toolkit::controls::VScroll tmp21 = this->_vscroll;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(363)
					tmp21->set_visible(true);
				}
				HX_STACK_LINE(365)
				::haxe::ui::toolkit::controls::VScroll tmp21 = this->_vscroll;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(365)
				bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(365)
				if ((tmp22)){
					HX_STACK_LINE(366)
					::haxe::ui::toolkit::controls::VScroll tmp23 = this->_vscroll;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(366)
					::haxe::ui::toolkit::controls::VScroll _g = tmp23;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(366)
					Float tmp24 = _g->get_pos();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(366)
					::openfl::_legacy::geom::Point tmp25 = this->_inertiaSpeed;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(366)
					Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(366)
					Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(366)
					_g->set_pos(tmp27);
				}
			}
			HX_STACK_LINE(370)
			::openfl::_legacy::geom::Point tmp18 = this->_inertiaSpeed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(370)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(370)
			Float tmp20 = ::Math_obj::abs(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(370)
			bool tmp21 = (tmp20 < ((Float)0.1));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(370)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(370)
			if ((tmp21)){
				HX_STACK_LINE(370)
				::openfl::_legacy::geom::Point tmp23 = this->_inertiaSpeed;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(370)
				::openfl::_legacy::geom::Point tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(370)
				Float tmp25 = tmp24->y;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(370)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(370)
				Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(370)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(370)
				tmp22 = (tmp28 < ((Float)0.1));
			}
			else{
				HX_STACK_LINE(370)
				tmp22 = false;
			}
			HX_STACK_LINE(370)
			if ((tmp22)){
				HX_STACK_LINE(371)
				::openfl::_legacy::display::Sprite tmp23 = this->_eventTarget;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(371)
				tmp23->set_visible(false);
				HX_STACK_LINE(372)
				::haxe::ui::toolkit::controls::HScroll tmp24 = this->_hscroll;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(372)
				bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(372)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(372)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(372)
				if ((tmp26)){
					HX_STACK_LINE(372)
					bool tmp28 = this->_showHScroll;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(372)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(372)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(372)
					tmp27 = (tmp30 == true);
				}
				else{
					HX_STACK_LINE(372)
					tmp27 = false;
				}
				HX_STACK_LINE(372)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(372)
				if ((tmp27)){
					HX_STACK_LINE(372)
					bool tmp29 = this->_autoHideScrolls;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(372)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(372)
					tmp28 = (tmp30 == true);
				}
				else{
					HX_STACK_LINE(372)
					tmp28 = false;
				}
				HX_STACK_LINE(372)
				if ((tmp28)){
					HX_STACK_LINE(373)
					::haxe::ui::toolkit::controls::HScroll tmp29 = this->_hscroll;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(373)
					tmp29->set_visible(false);
				}
				HX_STACK_LINE(375)
				::haxe::ui::toolkit::controls::VScroll tmp29 = this->_vscroll;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(375)
				bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(375)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(375)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(375)
				if ((tmp31)){
					HX_STACK_LINE(375)
					bool tmp33 = this->_showVScroll;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(375)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(375)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(375)
					tmp32 = (tmp35 == true);
				}
				else{
					HX_STACK_LINE(375)
					tmp32 = false;
				}
				HX_STACK_LINE(375)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(375)
				if ((tmp32)){
					HX_STACK_LINE(375)
					bool tmp34 = this->_autoHideScrolls;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(375)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(375)
					tmp33 = (tmp35 == true);
				}
				else{
					HX_STACK_LINE(375)
					tmp33 = false;
				}
				HX_STACK_LINE(375)
				if ((tmp33)){
					HX_STACK_LINE(376)
					::haxe::ui::toolkit::controls::VScroll tmp34 = this->_vscroll;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(376)
					tmp34->set_visible(false);
				}
				HX_STACK_LINE(378)
				::haxe::ui::toolkit::core::Screen tmp34 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(378)
				::String tmp35 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(378)
				Dynamic tmp36 = this->_onInertiaEnterFrame_dyn();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(378)
				tmp34->removeEventListener(tmp35,tmp36,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onInertiaEnterFrame,(void))

Void ScrollView_obj::_onHScrollChange( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onHScrollChange",0x9dc43069,"haxe.ui.toolkit.containers.ScrollView._onHScrollChange","haxe/ui/toolkit/containers/ScrollView.hx",383,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(384)
		this->updateScrollRect();
		HX_STACK_LINE(385)
		::String tmp = HX_HCSTRING("haxeui_scroll","\xf2","\xcc","\x40","\x19");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		::haxe::ui::toolkit::events::UIEvent tmp1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		::haxe::ui::toolkit::events::UIEvent event1 = tmp1;		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(386)
		::haxe::ui::toolkit::events::UIEvent tmp2 = event1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(386)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onHScrollChange,(void))

Void ScrollView_obj::_onVScrollChange( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onVScrollChange",0x6e4b0d77,"haxe.ui.toolkit.containers.ScrollView._onVScrollChange","haxe/ui/toolkit/containers/ScrollView.hx",389,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(390)
		this->updateScrollRect();
		HX_STACK_LINE(391)
		::String tmp = HX_HCSTRING("haxeui_scroll","\xf2","\xcc","\x40","\x19");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		::haxe::ui::toolkit::events::UIEvent tmp1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		::haxe::ui::toolkit::events::UIEvent event1 = tmp1;		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(392)
		::haxe::ui::toolkit::events::UIEvent tmp2 = event1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(392)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onVScrollChange,(void))

Void ScrollView_obj::_onMouseWheel( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onMouseWheel",0xc35c2b32,"haxe.ui.toolkit.containers.ScrollView._onMouseWheel","haxe/ui/toolkit/containers/ScrollView.hx",395,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(396)
		::haxe::ui::toolkit::containers::Box tmp = this->_container;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = tmp->getChildAt((int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = tmp1;		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(397)
		bool tmp2 = event->shiftKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(397)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(397)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(397)
		if ((tmp3)){
			HX_STACK_LINE(397)
			Float tmp5 = content->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(397)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(397)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(397)
			Float tmp9 = tmp8->get_usableHeight();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(397)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(397)
			tmp4 = (tmp6 < tmp10);
		}
		else{
			HX_STACK_LINE(397)
			tmp4 = true;
		}
		HX_STACK_LINE(397)
		if ((tmp4)){
			HX_STACK_LINE(398)
			::haxe::ui::toolkit::controls::HScroll tmp5 = this->_hscroll;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(398)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(398)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(398)
			if ((tmp6)){
				HX_STACK_LINE(398)
				Float tmp8 = content->get_width();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(398)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(398)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp10 = this->get_layout();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(398)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(398)
				Float tmp12 = tmp11->get_usableWidth();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(398)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(398)
				tmp7 = (tmp9 > tmp13);
			}
			else{
				HX_STACK_LINE(398)
				tmp7 = false;
			}
			HX_STACK_LINE(398)
			if ((tmp7)){
				HX_STACK_LINE(399)
				bool tmp8 = (event->delta != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(399)
				if ((tmp8)){
					HX_STACK_LINE(400)
					bool tmp9 = (event->delta < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(400)
					if ((tmp9)){
						HX_STACK_LINE(401)
						::haxe::ui::toolkit::controls::HScroll tmp10 = this->_hscroll;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(401)
						tmp10->incrementValue();
					}
					else{
						HX_STACK_LINE(402)
						bool tmp10 = (event->delta > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(402)
						if ((tmp10)){
							HX_STACK_LINE(403)
							::haxe::ui::toolkit::controls::HScroll tmp11 = this->_hscroll;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(403)
							tmp11->deincrementValue();
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(408)
			::haxe::ui::toolkit::controls::VScroll tmp5 = this->_vscroll;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(408)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(408)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(408)
			if ((tmp6)){
				HX_STACK_LINE(408)
				Float tmp8 = content->get_height();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(408)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(408)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp10 = this->get_layout();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(408)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(408)
				Float tmp12 = tmp11->get_usableHeight();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(408)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(408)
				tmp7 = (tmp9 > tmp13);
			}
			else{
				HX_STACK_LINE(408)
				tmp7 = false;
			}
			HX_STACK_LINE(408)
			if ((tmp7)){
				HX_STACK_LINE(409)
				bool tmp8 = (event->delta != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(409)
				if ((tmp8)){
					HX_STACK_LINE(410)
					bool tmp9 = (event->delta < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(410)
					if ((tmp9)){
						HX_STACK_LINE(411)
						::haxe::ui::toolkit::controls::VScroll tmp10 = this->_vscroll;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(411)
						tmp10->incrementValue();
					}
					else{
						HX_STACK_LINE(412)
						bool tmp10 = (event->delta > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(412)
						if ((tmp10)){
							HX_STACK_LINE(413)
							::haxe::ui::toolkit::controls::VScroll tmp11 = this->_vscroll;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(413)
							tmp11->deincrementValue();
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onMouseWheel,(void))

Void ScrollView_obj::_onMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onMouseDown",0x82b021ab,"haxe.ui.toolkit.containers.ScrollView._onMouseDown","haxe/ui/toolkit/containers/ScrollView.hx",420,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(421)
		bool inScroll = false;		HX_STACK_VAR(inScroll,"inScroll");
		HX_STACK_LINE(422)
		::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		if ((tmp1)){
			HX_STACK_LINE(422)
			::haxe::ui::toolkit::controls::VScroll tmp3 = this->_vscroll;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(422)
			::haxe::ui::toolkit::controls::VScroll tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(422)
			bool tmp5 = tmp4->get_visible();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(422)
			tmp2 = (tmp6 == true);
		}
		else{
			HX_STACK_LINE(422)
			tmp2 = false;
		}
		HX_STACK_LINE(422)
		if ((tmp2)){
			HX_STACK_LINE(423)
			::haxe::ui::toolkit::controls::VScroll tmp3 = this->_vscroll;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(423)
			Float tmp4 = event->stageX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(423)
			Float tmp5 = event->stageY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(423)
			bool tmp6 = tmp3->hitTest(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(423)
			inScroll = tmp6;
		}
		HX_STACK_LINE(425)
		::haxe::ui::toolkit::controls::HScroll tmp3 = this->_hscroll;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(425)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(425)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(425)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(425)
		if ((tmp5)){
			HX_STACK_LINE(425)
			::haxe::ui::toolkit::controls::HScroll tmp7 = this->_hscroll;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(425)
			::haxe::ui::toolkit::controls::HScroll tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(425)
			::haxe::ui::toolkit::controls::HScroll tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(425)
			bool tmp10 = tmp9->get_visible();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(425)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(425)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(425)
			tmp6 = (tmp12 == true);
		}
		else{
			HX_STACK_LINE(425)
			tmp6 = false;
		}
		HX_STACK_LINE(425)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(425)
		if ((tmp6)){
			HX_STACK_LINE(425)
			tmp7 = (inScroll == false);
		}
		else{
			HX_STACK_LINE(425)
			tmp7 = false;
		}
		HX_STACK_LINE(425)
		if ((tmp7)){
			HX_STACK_LINE(426)
			::haxe::ui::toolkit::controls::HScroll tmp8 = this->_hscroll;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(426)
			Float tmp9 = event->stageX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(426)
			Float tmp10 = event->stageY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(426)
			bool tmp11 = tmp8->hitTest(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(426)
			inScroll = tmp11;
		}
		HX_STACK_LINE(429)
		bool tmp8 = this->_inertialScrolling;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(429)
		bool tmp9 = (tmp8 == true);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(429)
		if ((tmp9)){
			HX_STACK_LINE(430)
			::haxe::ui::toolkit::core::Screen tmp10 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(430)
			::String tmp11 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(430)
			Dynamic tmp12 = this->_onInertiaEnterFrame_dyn();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(430)
			tmp10->removeEventListener(tmp11,tmp12,null());
			HX_STACK_LINE(431)
			int tmp13 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(431)
			this->_inertiaTime = tmp13;
		}
		HX_STACK_LINE(434)
		::haxe::ui::toolkit::containers::Box tmp10 = this->_container;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(434)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = tmp10->getChildAt((int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(434)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = tmp11;		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(435)
		bool tmp12 = (content != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(435)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(435)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(435)
		if ((tmp13)){
			HX_STACK_LINE(435)
			tmp14 = (inScroll == false);
		}
		else{
			HX_STACK_LINE(435)
			tmp14 = false;
		}
		HX_STACK_LINE(435)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(435)
		if ((tmp14)){
			HX_STACK_LINE(435)
			bool tmp16 = this->_virtualScrolling;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(435)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(435)
			tmp15 = (tmp17 == false);
		}
		else{
			HX_STACK_LINE(435)
			tmp15 = false;
		}
		HX_STACK_LINE(435)
		if ((tmp15)){
			HX_STACK_LINE(436)
			Float tmp16 = content->get_width();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(436)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp17 = this->get_layout();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(436)
			Float tmp18 = tmp17->get_usableWidth();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(436)
			bool tmp19 = (tmp16 > tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(436)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(436)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(436)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(436)
			if ((tmp21)){
				HX_STACK_LINE(436)
				Float tmp23 = content->get_height();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(436)
				Float tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(436)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(436)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp26 = this->get_layout();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(436)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(436)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(436)
				Float tmp29 = tmp28->get_usableHeight();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(436)
				Float tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(436)
				Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(436)
				tmp22 = (tmp25 > tmp31);
			}
			else{
				HX_STACK_LINE(436)
				tmp22 = true;
			}
			HX_STACK_LINE(436)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(436)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(436)
			if ((tmp23)){
				HX_STACK_LINE(436)
				tmp24 = this->allowPull();
			}
			else{
				HX_STACK_LINE(436)
				tmp24 = true;
			}
			HX_STACK_LINE(436)
			if ((tmp24)){
				HX_STACK_LINE(437)
				::openfl::_legacy::geom::Point tmp25 = ::openfl::_legacy::geom::Point_obj::__new(event->stageX,event->stageY);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(437)
				this->_downPos = tmp25;
				HX_STACK_LINE(438)
				::haxe::ui::toolkit::core::Screen tmp26 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(438)
				::String tmp27 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(438)
				Dynamic tmp28 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(438)
				tmp26->addEventListener(tmp27,tmp28,null(),null(),null());
				HX_STACK_LINE(439)
				::haxe::ui::toolkit::core::Screen tmp29 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(439)
				::String tmp30 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(439)
				Dynamic tmp31 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(439)
				tmp29->addEventListener(tmp30,tmp31,null(),null(),null());
				HX_STACK_LINE(440)
				::String tmp32 = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(440)
				::haxe::ui::toolkit::events::UIEvent tmp33 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp32,null(),null(),null());		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(440)
				this->dispatchEvent(tmp33);
			}
		}
		HX_STACK_LINE(444)
		bool tmp16 = this->_virtualScrolling;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(444)
		bool tmp17 = (tmp16 == true);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(444)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(444)
		if ((tmp17)){
			HX_STACK_LINE(444)
			::haxe::ui::toolkit::controls::VScroll tmp19 = this->_vscroll;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(444)
			::haxe::ui::toolkit::controls::VScroll tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(444)
			bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(444)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(444)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(444)
			bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(444)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(444)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(444)
			if ((tmp26)){
				HX_STACK_LINE(444)
				::haxe::ui::toolkit::controls::HScroll tmp27 = this->_hscroll;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(444)
				::haxe::ui::toolkit::controls::HScroll tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(444)
				::haxe::ui::toolkit::controls::HScroll tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(444)
				tmp18 = (tmp29 != null());
			}
			else{
				HX_STACK_LINE(444)
				tmp18 = true;
			}
		}
		else{
			HX_STACK_LINE(444)
			tmp18 = false;
		}
		HX_STACK_LINE(444)
		if ((tmp18)){
			HX_STACK_LINE(445)
			::openfl::_legacy::geom::Point tmp19 = ::openfl::_legacy::geom::Point_obj::__new(event->stageX,event->stageY);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(445)
			this->_downPos = tmp19;
			HX_STACK_LINE(446)
			::haxe::ui::toolkit::core::Screen tmp20 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(446)
			::String tmp21 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(446)
			Dynamic tmp22 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(446)
			tmp20->addEventListener(tmp21,tmp22,null(),null(),null());
			HX_STACK_LINE(447)
			::haxe::ui::toolkit::core::Screen tmp23 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(447)
			::String tmp24 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(447)
			Dynamic tmp25 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(447)
			tmp23->addEventListener(tmp24,tmp25,null(),null(),null());
			HX_STACK_LINE(448)
			::String tmp26 = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(448)
			::haxe::ui::toolkit::events::UIEvent tmp27 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp26,null(),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(448)
			this->dispatchEvent(tmp27);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onMouseDown,(void))

::String ScrollView_obj::get_refreshString( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_refreshString",0x41820d81,"haxe.ui.toolkit.containers.ScrollView.get_refreshString","haxe/ui/toolkit/containers/ScrollView.hx",457,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(458)
	::String tmp = this->_refreshString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(458)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_refreshString,return )

::String ScrollView_obj::set_refreshString( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_refreshString",0x64efe58d,"haxe.ui.toolkit.containers.ScrollView.set_refreshString","haxe/ui/toolkit/containers/ScrollView.hx",460,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(461)
	::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp = this->_refreshPromptView;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(461)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(461)
	if ((tmp1)){
		HX_STACK_LINE(462)
		::haxe::ui::toolkit::containers::DefaultScrollViewRefreshPrompt tmp2 = ::haxe::ui::toolkit::containers::DefaultScrollViewRefreshPrompt_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(462)
		this->_refreshPromptView = tmp2;
		HX_STACK_LINE(463)
		::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp3 = this->_refreshPromptView;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(463)
		this->addChild(tmp3);
	}
	HX_STACK_LINE(465)
	::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp2 = this->_refreshPromptView;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(465)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(465)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(466)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(466)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_refreshString,return )

::String ScrollView_obj::get_refreshingString( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","get_refreshingString",0xb90fc8c3,"haxe.ui.toolkit.containers.ScrollView.get_refreshingString","haxe/ui/toolkit/containers/ScrollView.hx",472,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(473)
	::String tmp = this->_refreshingString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(473)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,get_refreshingString,return )

::String ScrollView_obj::set_refreshingString( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","set_refreshingString",0x85c78037,"haxe.ui.toolkit.containers.ScrollView.set_refreshingString","haxe/ui/toolkit/containers/ScrollView.hx",475,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(476)
	::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp = this->_refreshingView;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	if ((tmp1)){
		HX_STACK_LINE(477)
		::haxe::ui::toolkit::containers::DefaultScrollViewRefreshing tmp2 = ::haxe::ui::toolkit::containers::DefaultScrollViewRefreshing_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(477)
		this->_refreshingView = tmp2;
		HX_STACK_LINE(478)
		::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp3 = this->_refreshingView;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(478)
		this->addChild(tmp3);
	}
	HX_STACK_LINE(480)
	::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp2 = this->_refreshingView;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(480)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(481)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(481)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,set_refreshingString,return )

Void ScrollView_obj::_onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onScreenMouseMove",0xdd491e4e,"haxe.ui.toolkit.containers.ScrollView._onScreenMouseMove","haxe/ui/toolkit/containers/ScrollView.hx",484,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(485)
		::openfl::_legacy::geom::Point tmp = this->_downPos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(485)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(485)
		if ((tmp1)){
			HX_STACK_LINE(486)
			Float tmp2 = event->stageY;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(486)
			::openfl::_legacy::geom::Point tmp3 = this->_downPos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(486)
			Float tmp4 = tmp3->y;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(486)
			Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(486)
			Float ypos = tmp5;		HX_STACK_VAR(ypos,"ypos");
			HX_STACK_LINE(487)
			Float tmp6 = event->stageX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(487)
			::openfl::_legacy::geom::Point tmp7 = this->_downPos;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(487)
			Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(487)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(487)
			Float xpos = tmp9;		HX_STACK_VAR(xpos,"xpos");
			HX_STACK_LINE(489)
			Dynamic tmp10 = event->get_target();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(489)
			::openfl::_legacy::display::DisplayObject target = tmp10;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(490)
			while((true)){
				HX_STACK_LINE(490)
				bool tmp11 = (target != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(490)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(490)
				if ((tmp11)){
					HX_STACK_LINE(490)
					::openfl::_legacy::display::DisplayObject tmp13 = target;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(490)
					::openfl::_legacy::display::DisplayObject tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(490)
					tmp12 = ::Std_obj::is(tmp14,hx::ClassOf< ::openfl::_legacy::display::DisplayObject >());
				}
				else{
					HX_STACK_LINE(490)
					tmp12 = false;
				}
				HX_STACK_LINE(490)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(490)
				if ((tmp13)){
					HX_STACK_LINE(490)
					break;
				}
				HX_STACK_LINE(492)
				Float tmp14 = target->get_scaleX();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(492)
				hx::DivEq(xpos,tmp14);
				HX_STACK_LINE(493)
				Float tmp15 = target->get_scaleY();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(493)
				hx::DivEq(ypos,tmp15);
				HX_STACK_LINE(494)
				::openfl::_legacy::display::DisplayObjectContainer tmp16 = target->get_parent();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(494)
				target = tmp16;
			}
			HX_STACK_LINE(497)
			bool tmp11 = this->_inertialScrolling;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(497)
			bool tmp12 = (tmp11 == true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(497)
			if ((tmp12)){
				HX_STACK_LINE(498)
				int tmp13 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(498)
				Float tmp14 = this->_inertiaTime;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(498)
				Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(498)
				Float tmp16 = (Float(tmp15) / Float((int)100));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(498)
				Float time = tmp16;		HX_STACK_VAR(time,"time");
				HX_STACK_LINE(499)
				Float tmp17 = (Float(xpos) / Float(time));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(499)
				Float tmp18 = (Float(ypos) / Float(time));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(499)
				::openfl::_legacy::geom::Point tmp19 = ::openfl::_legacy::geom::Point_obj::__new(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(499)
				this->_inertiaSpeed = tmp19;
				HX_STACK_LINE(500)
				int tmp20 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(500)
				this->_inertiaTime = tmp20;
			}
			HX_STACK_LINE(503)
			Float tmp13 = xpos;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(503)
			Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(503)
			int tmp15 = this->_scrollSensitivity;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(503)
			bool tmp16 = (tmp14 >= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(503)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(503)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(503)
			if ((tmp17)){
				HX_STACK_LINE(503)
				Float tmp19 = ypos;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(503)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(503)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(503)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(503)
				int tmp23 = this->_scrollSensitivity;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(503)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(503)
				tmp18 = (tmp22 >= tmp24);
			}
			else{
				HX_STACK_LINE(503)
				tmp18 = true;
			}
			HX_STACK_LINE(503)
			if ((tmp18)){
				HX_STACK_LINE(504)
				::openfl::_legacy::display::Sprite tmp19 = this->_eventTarget;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(504)
				tmp19->set_visible(true);
				HX_STACK_LINE(505)
				::haxe::ui::toolkit::containers::Box tmp20 = this->_container;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(505)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp21 = tmp20->getChildAt((int)0);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(505)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject content = tmp21;		HX_STACK_VAR(content,"content");
				HX_STACK_LINE(506)
				bool tmp22 = (content != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(506)
				if ((tmp22)){
					HX_STACK_LINE(507)
					bool tmp23 = (xpos != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(507)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(507)
					bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(507)
					if ((tmp24)){
						HX_STACK_LINE(507)
						Float tmp26 = content->get_width();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(507)
						Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(507)
						Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(507)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp29 = this->get_layout();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(507)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(507)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(507)
						Float tmp32 = tmp31->get_usableWidth();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(507)
						Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(507)
						Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(507)
						bool tmp35 = (tmp28 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(507)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(507)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(507)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(507)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(507)
						bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(507)
						bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(507)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(507)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(507)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(507)
						if ((tmp44)){
							HX_STACK_LINE(507)
							bool tmp45 = this->_virtualScrolling;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(507)
							bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(507)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(507)
							bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(507)
							tmp25 = (tmp48 == true);
						}
						else{
							HX_STACK_LINE(507)
							tmp25 = true;
						}
					}
					else{
						HX_STACK_LINE(507)
						tmp25 = false;
					}
					HX_STACK_LINE(507)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(507)
					if ((tmp25)){
						HX_STACK_LINE(507)
						bool tmp27 = this->_pulling;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(507)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(507)
						tmp26 = (tmp28 == false);
					}
					else{
						HX_STACK_LINE(507)
						tmp26 = false;
					}
					HX_STACK_LINE(507)
					if ((tmp26)){
						HX_STACK_LINE(508)
						bool tmp27 = this->_showHScroll;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(508)
						bool tmp28 = (tmp27 == true);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(508)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(508)
						if ((tmp28)){
							HX_STACK_LINE(508)
							bool tmp30 = this->_autoHideScrolls;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(508)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(508)
							tmp29 = (tmp31 == true);
						}
						else{
							HX_STACK_LINE(508)
							tmp29 = false;
						}
						HX_STACK_LINE(508)
						if ((tmp29)){
							HX_STACK_LINE(509)
							::haxe::ui::toolkit::controls::HScroll tmp30 = this->_hscroll;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(509)
							tmp30->set_visible(true);
						}
						HX_STACK_LINE(511)
						::haxe::ui::toolkit::controls::HScroll tmp30 = this->_hscroll;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(511)
						bool tmp31 = (tmp30 != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(511)
						if ((tmp31)){
							HX_STACK_LINE(512)
							::haxe::ui::toolkit::controls::HScroll tmp32 = this->_hscroll;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(512)
							::haxe::ui::toolkit::controls::HScroll _g = tmp32;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(512)
							Float tmp33 = _g->get_pos();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(512)
							Float tmp34 = xpos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(512)
							Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(512)
							_g->set_pos(tmp35);
						}
					}
					HX_STACK_LINE(516)
					bool tmp27 = (ypos != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(516)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(516)
					bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(516)
					if ((tmp28)){
						HX_STACK_LINE(516)
						Float tmp30 = content->get_height();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(516)
						Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(516)
						Float tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(516)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp33 = this->get_layout();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(516)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(516)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(516)
						Float tmp36 = tmp35->get_usableHeight();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(516)
						Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(516)
						Float tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(516)
						bool tmp39 = (tmp32 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(516)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(516)
						bool tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(516)
						bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(516)
						bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(516)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(516)
						bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(516)
						bool tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(516)
						bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(516)
						bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(516)
						if ((tmp48)){
							HX_STACK_LINE(516)
							bool tmp49 = this->_virtualScrolling;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(516)
							bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(516)
							bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(516)
							bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(516)
							tmp29 = (tmp52 == true);
						}
						else{
							HX_STACK_LINE(516)
							tmp29 = true;
						}
					}
					else{
						HX_STACK_LINE(516)
						tmp29 = false;
					}
					HX_STACK_LINE(516)
					bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(516)
					if ((tmp29)){
						HX_STACK_LINE(516)
						bool tmp31 = this->_pulling;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(516)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(516)
						tmp30 = (tmp32 == false);
					}
					else{
						HX_STACK_LINE(516)
						tmp30 = false;
					}
					HX_STACK_LINE(516)
					if ((tmp30)){
						HX_STACK_LINE(517)
						bool tmp31 = this->_showVScroll;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(517)
						bool tmp32 = (tmp31 == true);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(517)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(517)
						if ((tmp32)){
							HX_STACK_LINE(517)
							bool tmp34 = this->_autoHideScrolls;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(517)
							bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(517)
							tmp33 = (tmp35 == true);
						}
						else{
							HX_STACK_LINE(517)
							tmp33 = false;
						}
						HX_STACK_LINE(517)
						if ((tmp33)){
							HX_STACK_LINE(518)
							::haxe::ui::toolkit::controls::VScroll tmp34 = this->_vscroll;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(518)
							tmp34->set_visible(true);
						}
						HX_STACK_LINE(520)
						::haxe::ui::toolkit::controls::VScroll tmp34 = this->_vscroll;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(520)
						bool tmp35 = (tmp34 != null());		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(520)
						if ((tmp35)){
							HX_STACK_LINE(521)
							::haxe::ui::toolkit::controls::VScroll tmp36 = this->_vscroll;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(521)
							::haxe::ui::toolkit::controls::VScroll _g = tmp36;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(521)
							Float tmp37 = _g->get_pos();		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(521)
							Float tmp38 = ypos;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(521)
							Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(521)
							_g->set_pos(tmp39);
						}
					}
					HX_STACK_LINE(525)
					bool tmp31 = this->allowPull();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(525)
					if ((tmp31)){
						HX_STACK_LINE(526)
						::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp32 = this->_refreshingView;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(526)
						tmp32->set_visible(false);
						HX_STACK_LINE(527)
						this->_pulling = true;
						HX_STACK_LINE(528)
						{
							HX_STACK_LINE(528)
							::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = content;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(528)
							Float tmp33 = _g->get_y();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(528)
							Float tmp34 = ypos;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(528)
							Float tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(528)
							_g->set_y(tmp35);
						}
						HX_STACK_LINE(529)
						Float tmp33 = content->get_y();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(529)
						::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp34 = this->_refreshPromptView;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(529)
						Float tmp35 = tmp34->get_height();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(529)
						bool tmp36 = (tmp33 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(529)
						if ((tmp36)){
							HX_STACK_LINE(530)
							::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp37 = this->_refreshPromptView;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(530)
							Float tmp38 = tmp37->get_height();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(530)
							content->set_y(tmp38);
						}
						else{
							HX_STACK_LINE(531)
							Float tmp37 = content->get_y();		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(531)
							bool tmp38 = (tmp37 < (int)0);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(531)
							if ((tmp38)){
								HX_STACK_LINE(532)
								content->set_y((int)0);
							}
						}
						HX_STACK_LINE(534)
						::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp37 = this->_refreshPromptView;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(534)
						Float tmp38 = content->get_y();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(534)
						::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp39 = this->_refreshPromptView;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(534)
						Float tmp40 = tmp39->get_height();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(534)
						Float tmp41 = (Float(tmp38) / Float(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(534)
						tmp37->set_alpha(tmp41);
					}
					HX_STACK_LINE(537)
					::openfl::_legacy::geom::Point tmp32 = ::openfl::_legacy::geom::Point_obj::__new(event->stageX,event->stageY);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(537)
					this->_downPos = tmp32;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onScreenMouseMove,(void))

bool ScrollView_obj::allowPull( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","allowPull",0xedf33c0c,"haxe.ui.toolkit.containers.ScrollView.allowPull","haxe/ui/toolkit/containers/ScrollView.hx",543,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(544)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(544)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(544)
	if ((tmp3)){
		HX_STACK_LINE(544)
		::haxe::ui::toolkit::controls::VScroll tmp5 = this->_vscroll;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(544)
		::haxe::ui::toolkit::controls::VScroll tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(544)
		::haxe::ui::toolkit::controls::VScroll tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(544)
		Float tmp8 = tmp7->get_pos();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(544)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(544)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(544)
		tmp4 = (tmp10 == (int)0);
	}
	else{
		HX_STACK_LINE(544)
		tmp4 = true;
	}
	HX_STACK_LINE(544)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(544)
	if ((tmp4)){
		HX_STACK_LINE(544)
		::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp6 = this->_refreshPromptView;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(544)
		::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(544)
		tmp5 = (tmp7 != null());
	}
	else{
		HX_STACK_LINE(544)
		tmp5 = false;
	}
	HX_STACK_LINE(544)
	if ((tmp5)){
		HX_STACK_LINE(545)
		return true;
	}
	HX_STACK_LINE(547)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,allowPull,return )

Void ScrollView_obj::_onScreenMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","_onScreenMouseUp",0xcde66858,"haxe.ui.toolkit.containers.ScrollView._onScreenMouseUp","haxe/ui/toolkit/containers/ScrollView.hx",550,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(552)
		bool tmp = this->_inertialScrolling;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(552)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(552)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(552)
		if ((tmp1)){
			HX_STACK_LINE(552)
			int tmp3 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(552)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(552)
			Float tmp5 = this->_inertiaTime;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(552)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(552)
			Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(552)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(552)
			tmp2 = (tmp8 < (int)100);
		}
		else{
			HX_STACK_LINE(552)
			tmp2 = false;
		}
		HX_STACK_LINE(552)
		if ((tmp2)){
			HX_STACK_LINE(553)
			::openfl::_legacy::geom::Point tmp3 = this->_inertiaSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(553)
			Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(553)
			Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(553)
			Float tmp6 = this->_inertiaSensitivity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(553)
			bool tmp7 = (tmp5 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(553)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(553)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(553)
			if ((tmp8)){
				HX_STACK_LINE(553)
				::openfl::_legacy::geom::Point tmp10 = this->_inertiaSpeed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(553)
				::openfl::_legacy::geom::Point tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(553)
				Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(553)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(553)
				Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(553)
				Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(553)
				Float tmp16 = this->_inertiaSensitivity;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(553)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(553)
				tmp9 = (tmp15 > tmp17);
			}
			else{
				HX_STACK_LINE(553)
				tmp9 = true;
			}
			HX_STACK_LINE(553)
			if ((tmp9)){
				HX_STACK_LINE(554)
				::haxe::ui::toolkit::core::Screen tmp10 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(554)
				::String tmp11 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(554)
				Dynamic tmp12 = this->_onInertiaEnterFrame_dyn();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(554)
				tmp10->addEventListener(tmp11,tmp12,null(),null(),null());
			}
		}
		HX_STACK_LINE(557)
		::openfl::_legacy::display::Sprite tmp3 = this->_eventTarget;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		tmp3->set_visible(false);
		HX_STACK_LINE(558)
		this->_downPos = null();
		HX_STACK_LINE(559)
		::haxe::ui::toolkit::core::Screen tmp4 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(559)
		::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(559)
		Dynamic tmp6 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(559)
		tmp4->removeEventListener(tmp5,tmp6,null());
		HX_STACK_LINE(560)
		::haxe::ui::toolkit::core::Screen tmp7 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(560)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(560)
		Dynamic tmp9 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(560)
		tmp7->removeEventListener(tmp8,tmp9,null());
		HX_STACK_LINE(562)
		::haxe::ui::toolkit::controls::HScroll tmp10 = this->_hscroll;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(562)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(562)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(562)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(562)
		if ((tmp12)){
			HX_STACK_LINE(562)
			bool tmp14 = this->_showHScroll;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(562)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(562)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(562)
			tmp13 = (tmp16 == true);
		}
		else{
			HX_STACK_LINE(562)
			tmp13 = false;
		}
		HX_STACK_LINE(562)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(562)
		if ((tmp13)){
			HX_STACK_LINE(562)
			bool tmp15 = this->_autoHideScrolls;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(562)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(562)
			tmp14 = (tmp16 == true);
		}
		else{
			HX_STACK_LINE(562)
			tmp14 = false;
		}
		HX_STACK_LINE(562)
		if ((tmp14)){
			HX_STACK_LINE(563)
			::haxe::ui::toolkit::controls::HScroll tmp15 = this->_hscroll;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(563)
			tmp15->set_visible(false);
		}
		HX_STACK_LINE(565)
		::haxe::ui::toolkit::controls::VScroll tmp15 = this->_vscroll;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(565)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(565)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(565)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(565)
		if ((tmp17)){
			HX_STACK_LINE(565)
			bool tmp19 = this->_showVScroll;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(565)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(565)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(565)
			tmp18 = (tmp21 == true);
		}
		else{
			HX_STACK_LINE(565)
			tmp18 = false;
		}
		HX_STACK_LINE(565)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(565)
		if ((tmp18)){
			HX_STACK_LINE(565)
			bool tmp20 = this->_autoHideScrolls;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(565)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(565)
			tmp19 = (tmp21 == true);
		}
		else{
			HX_STACK_LINE(565)
			tmp19 = false;
		}
		HX_STACK_LINE(565)
		if ((tmp19)){
			HX_STACK_LINE(566)
			::haxe::ui::toolkit::controls::VScroll tmp20 = this->_vscroll;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(566)
			tmp20->set_visible(false);
		}
		HX_STACK_LINE(569)
		::String tmp20 = HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(569)
		::haxe::ui::toolkit::events::UIEvent tmp21 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp20,null(),null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(569)
		this->dispatchEvent(tmp21);
		HX_STACK_LINE(571)
		bool tmp22 = this->_pulling;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(571)
		bool tmp23 = (tmp22 == true);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(571)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(571)
		if ((tmp23)){
			HX_STACK_LINE(571)
			::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp25 = this->_refreshPromptView;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(571)
			::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(571)
			tmp24 = (tmp26 != null());
		}
		else{
			HX_STACK_LINE(571)
			tmp24 = false;
		}
		HX_STACK_LINE(571)
		if ((tmp24)){
			HX_STACK_LINE(572)
			::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp25 = this->_refreshPromptView;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(572)
			Float tmp26 = tmp25->get_alpha();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(572)
			bool tmp27 = (tmp26 < (int)1);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(572)
			if ((tmp27)){
				HX_STACK_LINE(573)
				this->_pulling = false;
				HX_STACK_LINE(574)
				::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp28 = this->_refreshPromptView;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(574)
				tmp28->set_alpha((int)0);
				HX_STACK_LINE(575)
				::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp29 = this->_refreshingView;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(575)
				tmp29->set_visible(false);
				HX_STACK_LINE(576)
				this->invalidate(null(),null());
			}
			else{
				HX_STACK_LINE(578)
				::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp28 = this->_refreshPromptView;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(578)
				tmp28->set_alpha((int)0);
				HX_STACK_LINE(579)
				::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp29 = this->_refreshingView;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(579)
				tmp29->set_visible(true);
				HX_STACK_LINE(580)
				::String tmp30 = HX_HCSTRING("haxeui_refresh","\x56","\x2d","\xbb","\xbb");		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(580)
				::haxe::ui::toolkit::events::UIEvent tmp31 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp30,null(),null(),null());		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(580)
				this->dispatchEvent(tmp31);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,_onScreenMouseUp,(void))

Void ScrollView_obj::refreshComplete( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","refreshComplete",0x47297b52,"haxe.ui.toolkit.containers.ScrollView.refreshComplete","haxe/ui/toolkit/containers/ScrollView.hx",585,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(586)
		this->_pulling = false;
		HX_STACK_LINE(587)
		::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp = this->_refreshPromptView;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(587)
		tmp->set_alpha((int)0);
		HX_STACK_LINE(588)
		::haxe::ui::toolkit::containers::ScrollViewRefreshing tmp1 = this->_refreshingView;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(588)
		tmp1->set_visible(false);
		HX_STACK_LINE(589)
		this->invalidate(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,refreshComplete,(void))

Void ScrollView_obj::checkScrolls( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","checkScrolls",0x29ffcb80,"haxe.ui.toolkit.containers.ScrollView.checkScrolls","haxe/ui/toolkit/containers/ScrollView.hx",595,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(596)
		bool tmp = this->_virtualScrolling;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(596)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(596)
		if ((tmp1)){
			HX_STACK_LINE(597)
			return null();
		}
		HX_STACK_LINE(600)
		::haxe::ui::toolkit::containers::Box tmp2 = this->_container;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(600)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = tmp2->getChildAt((int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(600)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject content = tmp3;		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(601)
		bool tmp4 = (content != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(601)
		if ((tmp4)){
			HX_STACK_LINE(603)
			bool invalidateLayout = false;		HX_STACK_VAR(invalidateLayout,"invalidateLayout");
			HX_STACK_LINE(604)
			Float hpos = (int)0;		HX_STACK_VAR(hpos,"hpos");
			HX_STACK_LINE(605)
			::haxe::ui::toolkit::controls::HScroll tmp5 = this->_hscroll;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(605)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(605)
			if ((tmp6)){
				HX_STACK_LINE(606)
				::haxe::ui::toolkit::controls::HScroll tmp7 = this->_hscroll;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(606)
				Float tmp8 = tmp7->get_pos();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(606)
				hpos = tmp8;
			}
			HX_STACK_LINE(608)
			Float tmp7 = content->get_width();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(608)
			Float tmp8 = hpos;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(608)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(608)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp10 = this->get_layout();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(608)
			Float tmp11 = tmp10->get_usableWidth();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(608)
			bool tmp12 = (tmp9 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(608)
			if ((tmp12)){
				HX_STACK_LINE(609)
				bool tmp13 = this->createHScroll(null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(609)
				bool tmp14 = (tmp13 == true);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(609)
				if ((tmp14)){
					HX_STACK_LINE(610)
					::haxe::ui::toolkit::controls::HScroll tmp15 = this->_hscroll;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(610)
					tmp15->set_visible(false);
					HX_STACK_LINE(611)
					invalidateLayout = true;
				}
				HX_STACK_LINE(614)
				::haxe::ui::toolkit::controls::HScroll tmp15 = this->_hscroll;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(614)
				Float tmp16 = content->get_width();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(614)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp17 = this->get_layout();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(614)
				Float tmp18 = tmp17->get_usableWidth();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(614)
				Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(614)
				tmp15->set_max(tmp19);
				HX_STACK_LINE(615)
				::haxe::ui::toolkit::controls::HScroll tmp20 = this->_hscroll;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(615)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp21 = this->get_layout();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(615)
				Float tmp22 = tmp21->get_usableWidth();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(615)
				Float tmp23 = content->get_width();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(615)
				Float tmp24 = (Float(tmp22) / Float(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(615)
				::haxe::ui::toolkit::controls::HScroll tmp25 = this->_hscroll;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(615)
				Float tmp26 = tmp25->get_max();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(615)
				Float tmp27 = (tmp24 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(615)
				tmp20->set_pageSize(tmp27);
				HX_STACK_LINE(616)
				::haxe::ui::toolkit::controls::HScroll tmp28 = this->_hscroll;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(616)
				bool tmp29 = tmp28->get_visible();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(616)
				bool tmp30 = (tmp29 == false);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(616)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(616)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(616)
				if ((tmp31)){
					HX_STACK_LINE(616)
					bool tmp33 = this->_showHScroll;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(616)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(616)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(616)
					tmp32 = (tmp35 == true);
				}
				else{
					HX_STACK_LINE(616)
					tmp32 = false;
				}
				HX_STACK_LINE(616)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(616)
				if ((tmp32)){
					HX_STACK_LINE(616)
					bool tmp34 = this->_autoHideScrolls;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(616)
					bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(616)
					tmp33 = (tmp35 == false);
				}
				else{
					HX_STACK_LINE(616)
					tmp33 = false;
				}
				HX_STACK_LINE(616)
				if ((tmp33)){
					HX_STACK_LINE(617)
					::haxe::ui::toolkit::controls::HScroll tmp34 = this->_hscroll;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(617)
					tmp34->set_visible(true);
					HX_STACK_LINE(618)
					invalidateLayout = true;
				}
			}
			else{
				HX_STACK_LINE(621)
				::haxe::ui::toolkit::controls::HScroll tmp13 = this->_hscroll;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(621)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(621)
				if ((tmp14)){
					HX_STACK_LINE(622)
					::haxe::ui::toolkit::controls::HScroll tmp15 = this->_hscroll;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(622)
					Float tmp16 = tmp15->get_pos();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(622)
					bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(622)
					if ((tmp17)){
						HX_STACK_LINE(623)
						::haxe::ui::toolkit::controls::HScroll tmp18 = this->_hscroll;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(623)
						Float tmp19 = content->get_width();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(623)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp20 = this->get_layout();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(623)
						Float tmp21 = tmp20->get_usableWidth();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(623)
						Float tmp22 = (tmp19 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(623)
						tmp18->set_pos(tmp22);
					}
					HX_STACK_LINE(626)
					::haxe::ui::toolkit::controls::HScroll tmp18 = this->_hscroll;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(626)
					Float tmp19 = tmp18->get_pos();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(626)
					bool tmp20 = (tmp19 == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(626)
					if ((tmp20)){
						HX_STACK_LINE(627)
						::haxe::ui::toolkit::controls::HScroll tmp21 = this->_hscroll;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(627)
						bool tmp22 = tmp21->get_visible();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(627)
						bool tmp23 = (tmp22 == true);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(627)
						if ((tmp23)){
							HX_STACK_LINE(628)
							::haxe::ui::toolkit::controls::HScroll tmp24 = this->_hscroll;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(628)
							tmp24->set_visible(false);
							HX_STACK_LINE(629)
							invalidateLayout = true;
						}
					}
					else{
						HX_STACK_LINE(632)
						::haxe::ui::toolkit::controls::HScroll tmp21 = this->_hscroll;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(632)
						Float tmp22 = content->get_width();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(632)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp23 = this->get_layout();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(632)
						Float tmp24 = tmp23->get_usableWidth();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(632)
						Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(632)
						tmp21->set_max(tmp25);
						HX_STACK_LINE(633)
						::haxe::ui::toolkit::controls::HScroll tmp26 = this->_hscroll;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(633)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp27 = this->get_layout();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(633)
						Float tmp28 = tmp27->get_usableWidth();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(633)
						Float tmp29 = content->get_width();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(633)
						Float tmp30 = (Float(tmp28) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(633)
						::haxe::ui::toolkit::controls::HScroll tmp31 = this->_hscroll;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(633)
						Float tmp32 = tmp31->get_max();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(633)
						Float tmp33 = (tmp30 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(633)
						tmp26->set_pageSize(tmp33);
					}
				}
			}
			HX_STACK_LINE(639)
			Float vpos = (int)0;		HX_STACK_VAR(vpos,"vpos");
			HX_STACK_LINE(640)
			::haxe::ui::toolkit::controls::VScroll tmp13 = this->_vscroll;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(640)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(640)
			if ((tmp14)){
				HX_STACK_LINE(641)
				::haxe::ui::toolkit::controls::VScroll tmp15 = this->_vscroll;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(641)
				Float tmp16 = tmp15->get_pos();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(641)
				vpos = tmp16;
			}
			HX_STACK_LINE(643)
			Float tmp15 = content->get_height();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(643)
			Float tmp16 = vpos;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(643)
			Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(643)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp18 = this->get_layout();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(643)
			Float tmp19 = tmp18->get_usableHeight();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(643)
			bool tmp20 = (tmp17 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(643)
			if ((tmp20)){
				HX_STACK_LINE(644)
				bool tmp21 = this->createVScroll(null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(644)
				bool tmp22 = (tmp21 == true);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(644)
				if ((tmp22)){
					HX_STACK_LINE(645)
					::haxe::ui::toolkit::controls::VScroll tmp23 = this->_vscroll;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(645)
					tmp23->set_visible(false);
					HX_STACK_LINE(646)
					invalidateLayout = true;
				}
				HX_STACK_LINE(649)
				::haxe::ui::toolkit::controls::VScroll tmp23 = this->_vscroll;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(649)
				Float tmp24 = content->get_height();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(649)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp25 = this->get_layout();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(649)
				Float tmp26 = tmp25->get_usableHeight();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(649)
				Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(649)
				tmp23->set_max(tmp27);
				HX_STACK_LINE(650)
				::haxe::ui::toolkit::controls::VScroll tmp28 = this->_vscroll;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(650)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp29 = this->get_layout();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(650)
				Float tmp30 = tmp29->get_usableHeight();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(650)
				Float tmp31 = content->get_height();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(650)
				Float tmp32 = (Float(tmp30) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(650)
				::haxe::ui::toolkit::controls::VScroll tmp33 = this->_vscroll;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(650)
				Float tmp34 = tmp33->get_max();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(650)
				Float tmp35 = (tmp32 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(650)
				tmp28->set_pageSize(tmp35);
				HX_STACK_LINE(651)
				::haxe::ui::toolkit::controls::VScroll tmp36 = this->_vscroll;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(651)
				bool tmp37 = tmp36->get_visible();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(651)
				bool tmp38 = (tmp37 == false);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(651)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(651)
				bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(651)
				if ((tmp39)){
					HX_STACK_LINE(651)
					bool tmp41 = this->_showVScroll;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(651)
					bool tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(651)
					bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(651)
					tmp40 = (tmp43 == true);
				}
				else{
					HX_STACK_LINE(651)
					tmp40 = false;
				}
				HX_STACK_LINE(651)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(651)
				if ((tmp40)){
					HX_STACK_LINE(651)
					bool tmp42 = this->_autoHideScrolls;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(651)
					bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(651)
					tmp41 = (tmp43 == false);
				}
				else{
					HX_STACK_LINE(651)
					tmp41 = false;
				}
				HX_STACK_LINE(651)
				if ((tmp41)){
					HX_STACK_LINE(652)
					::haxe::ui::toolkit::controls::VScroll tmp42 = this->_vscroll;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(652)
					tmp42->set_visible(true);
					HX_STACK_LINE(653)
					invalidateLayout = true;
				}
			}
			else{
				HX_STACK_LINE(656)
				::haxe::ui::toolkit::controls::VScroll tmp21 = this->_vscroll;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(656)
				bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(656)
				if ((tmp22)){
					HX_STACK_LINE(657)
					::haxe::ui::toolkit::controls::VScroll tmp23 = this->_vscroll;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(657)
					Float tmp24 = tmp23->get_pos();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(657)
					bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(657)
					if ((tmp25)){
						HX_STACK_LINE(658)
						::haxe::ui::toolkit::controls::VScroll tmp26 = this->_vscroll;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(658)
						Float tmp27 = content->get_height();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(658)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp28 = this->get_layout();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(658)
						Float tmp29 = tmp28->get_usableHeight();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(658)
						Float tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(658)
						tmp26->set_pos(tmp30);
					}
					HX_STACK_LINE(661)
					::haxe::ui::toolkit::controls::VScroll tmp26 = this->_vscroll;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(661)
					Float tmp27 = tmp26->get_pos();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(661)
					bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(661)
					if ((tmp28)){
						HX_STACK_LINE(662)
						::haxe::ui::toolkit::controls::VScroll tmp29 = this->_vscroll;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(662)
						bool tmp30 = tmp29->get_visible();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(662)
						bool tmp31 = (tmp30 == true);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(662)
						if ((tmp31)){
							HX_STACK_LINE(663)
							::haxe::ui::toolkit::controls::VScroll tmp32 = this->_vscroll;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(663)
							tmp32->set_visible(false);
							HX_STACK_LINE(664)
							invalidateLayout = true;
						}
					}
					else{
						HX_STACK_LINE(667)
						::haxe::ui::toolkit::controls::VScroll tmp29 = this->_vscroll;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(667)
						Float tmp30 = content->get_height();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(667)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp31 = this->get_layout();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(667)
						Float tmp32 = tmp31->get_usableHeight();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(667)
						Float tmp33 = (tmp30 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(667)
						tmp29->set_max(tmp33);
						HX_STACK_LINE(668)
						::haxe::ui::toolkit::controls::VScroll tmp34 = this->_vscroll;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(668)
						::haxe::ui::toolkit::core::interfaces::ILayout tmp35 = this->get_layout();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(668)
						Float tmp36 = tmp35->get_usableHeight();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(668)
						Float tmp37 = content->get_height();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(668)
						Float tmp38 = (Float(tmp36) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(668)
						::haxe::ui::toolkit::controls::VScroll tmp39 = this->_vscroll;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(668)
						Float tmp40 = tmp39->get_max();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(668)
						Float tmp41 = (tmp38 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(668)
						tmp34->set_pageSize(tmp41);
					}
				}
			}
			HX_STACK_LINE(674)
			bool tmp21 = invalidateLayout;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(674)
			if ((tmp21)){
				HX_STACK_LINE(675)
				this->_invalidating = false;
				HX_STACK_LINE(676)
				this->invalidate((int)1,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,checkScrolls,(void))

bool ScrollView_obj::createHScroll( hx::Null< bool >  __o_invalidateLayout){
bool invalidateLayout = __o_invalidateLayout.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","createHScroll",0x6a173117,"haxe.ui.toolkit.containers.ScrollView.createHScroll","haxe/ui/toolkit/containers/ScrollView.hx",681,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(invalidateLayout,"invalidateLayout")
{
		HX_STACK_LINE(681)
		::haxe::ui::toolkit::containers::ScrollView _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(682)
		bool created = false;		HX_STACK_VAR(created,"created");
		HX_STACK_LINE(683)
		::haxe::ui::toolkit::controls::HScroll tmp = this->_hscroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(683)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(683)
		if ((tmp1)){
			HX_STACK_LINE(684)
			::haxe::ui::toolkit::controls::HScroll tmp2 = ::haxe::ui::toolkit::controls::HScroll_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(684)
			this->_hscroll = tmp2;
			HX_STACK_LINE(685)
			::haxe::ui::toolkit::controls::HScroll tmp3 = this->_hscroll;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(685)
			tmp3->set_id(HX_HCSTRING("hscroll","\x75","\x16","\x1d","\x2c"));
			HX_STACK_LINE(686)
			::haxe::ui::toolkit::controls::HScroll tmp4 = this->_hscroll;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(686)
			tmp4->set_percentWidth((int)100);
			HX_STACK_LINE(687)
			::haxe::ui::toolkit::controls::HScroll tmp5 = this->_hscroll;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(687)
			::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(687)
			Dynamic tmp7 = this->_onHScrollChange_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(687)
			tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
			HX_STACK_LINE(688)
			::haxe::ui::toolkit::controls::HScroll tmp8 = this->_hscroll;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(688)
			::String tmp9 = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp9,"tmp9");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::containers::ScrollView,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic event){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/containers/ScrollView.hx",688,0x89f00132)
				HX_STACK_ARG(event,"event")
				{
					HX_STACK_LINE(689)
					::String tmp10 = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(689)
					::haxe::ui::toolkit::events::UIEvent tmp11 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp10,null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(689)
					_g->dispatchEvent(tmp11);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(688)
			tmp8->addEventListener(tmp9, Dynamic(new _Function_2_1(_g)),null(),null(),null());
			HX_STACK_LINE(691)
			::haxe::ui::toolkit::controls::HScroll tmp10 = this->_hscroll;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(691)
			::String tmp11 = HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");		HX_STACK_VAR(tmp11,"tmp11");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::containers::ScrollView,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic event){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/containers/ScrollView.hx",691,0x89f00132)
				HX_STACK_ARG(event,"event")
				{
					HX_STACK_LINE(692)
					::String tmp12 = HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(692)
					::haxe::ui::toolkit::events::UIEvent tmp13 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp12,null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(692)
					_g->dispatchEvent(tmp13);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(691)
			tmp10->addEventListener(tmp11, Dynamic(new _Function_2_2(_g)),null(),null(),null());
			HX_STACK_LINE(694)
			bool tmp12 = this->_showHScroll;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(694)
			bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(694)
			if ((tmp13)){
				HX_STACK_LINE(695)
				::haxe::ui::toolkit::controls::HScroll tmp14 = this->_hscroll;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(695)
				tmp14->set_visible(false);
			}
			else{
				HX_STACK_LINE(696)
				bool tmp14 = this->_autoHideScrolls;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(696)
				bool tmp15 = (tmp14 == true);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(696)
				if ((tmp15)){
					HX_STACK_LINE(697)
					::haxe::ui::toolkit::controls::HScroll tmp16 = this->_hscroll;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(697)
					tmp16->set_visible(false);
				}
				else{
					HX_STACK_LINE(699)
					::haxe::ui::toolkit::controls::HScroll tmp16 = this->_hscroll;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(699)
					tmp16->set_visible(true);
				}
			}
			HX_STACK_LINE(701)
			invalidateLayout = true;
			HX_STACK_LINE(702)
			::haxe::ui::toolkit::controls::HScroll tmp14 = this->_hscroll;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(702)
			this->addChild(tmp14);
			HX_STACK_LINE(703)
			created = true;
		}
		HX_STACK_LINE(706)
		bool tmp2 = invalidateLayout;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(706)
		if ((tmp2)){
			HX_STACK_LINE(707)
			Float tmp3 = this->get_percentWidth();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(707)
			bool tmp4 = (tmp3 == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(707)
			if ((tmp4)){
				HX_STACK_LINE(708)
				this->_invalidating = false;
			}
			HX_STACK_LINE(710)
			this->invalidate((int)1,null());
		}
		HX_STACK_LINE(713)
		bool tmp3 = created;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(713)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,createHScroll,return )

bool ScrollView_obj::createVScroll( hx::Null< bool >  __o_invalidateLayout){
bool invalidateLayout = __o_invalidateLayout.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","createVScroll",0xb043afa5,"haxe.ui.toolkit.containers.ScrollView.createVScroll","haxe/ui/toolkit/containers/ScrollView.hx",716,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(invalidateLayout,"invalidateLayout")
{
		HX_STACK_LINE(716)
		::haxe::ui::toolkit::containers::ScrollView _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(717)
		bool created = false;		HX_STACK_VAR(created,"created");
		HX_STACK_LINE(718)
		::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(718)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(718)
		if ((tmp1)){
			HX_STACK_LINE(719)
			::haxe::ui::toolkit::controls::VScroll tmp2 = ::haxe::ui::toolkit::controls::VScroll_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(719)
			this->_vscroll = tmp2;
			HX_STACK_LINE(720)
			::haxe::ui::toolkit::controls::VScroll tmp3 = this->_vscroll;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(720)
			tmp3->set_id(HX_HCSTRING("vscroll","\x03","\x95","\x49","\x72"));
			HX_STACK_LINE(721)
			::haxe::ui::toolkit::controls::VScroll tmp4 = this->_vscroll;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(721)
			tmp4->set_percentHeight((int)100);
			HX_STACK_LINE(722)
			::haxe::ui::toolkit::controls::VScroll tmp5 = this->_vscroll;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(722)
			::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(722)
			Dynamic tmp7 = this->_onVScrollChange_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(722)
			tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
			HX_STACK_LINE(723)
			::haxe::ui::toolkit::controls::VScroll tmp8 = this->_vscroll;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(723)
			::String tmp9 = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp9,"tmp9");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::containers::ScrollView,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic event){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/containers/ScrollView.hx",723,0x89f00132)
				HX_STACK_ARG(event,"event")
				{
					HX_STACK_LINE(724)
					::String tmp10 = HX_HCSTRING("haxeui_scrollStart","\x10","\xea","\xf1","\x05");		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(724)
					::haxe::ui::toolkit::events::UIEvent tmp11 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp10,null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(724)
					_g->dispatchEvent(tmp11);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(723)
			tmp8->addEventListener(tmp9, Dynamic(new _Function_2_1(_g)),null(),null(),null());
			HX_STACK_LINE(726)
			::haxe::ui::toolkit::controls::VScroll tmp10 = this->_vscroll;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(726)
			::String tmp11 = HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");		HX_STACK_VAR(tmp11,"tmp11");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::containers::ScrollView,_g)
			int __ArgCount() const { return 1; }
			Void run(Dynamic event){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/containers/ScrollView.hx",726,0x89f00132)
				HX_STACK_ARG(event,"event")
				{
					HX_STACK_LINE(727)
					::String tmp12 = HX_HCSTRING("haxeui_scrollStop","\x14","\x4a","\xc4","\x05");		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(727)
					::haxe::ui::toolkit::events::UIEvent tmp13 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp12,null(),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(727)
					_g->dispatchEvent(tmp13);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(726)
			tmp10->addEventListener(tmp11, Dynamic(new _Function_2_2(_g)),null(),null(),null());
			HX_STACK_LINE(729)
			bool tmp12 = this->_showVScroll;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(729)
			bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(729)
			if ((tmp13)){
				HX_STACK_LINE(730)
				::haxe::ui::toolkit::controls::VScroll tmp14 = this->_vscroll;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(730)
				tmp14->set_visible(false);
			}
			else{
				HX_STACK_LINE(731)
				bool tmp14 = this->_autoHideScrolls;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(731)
				bool tmp15 = (tmp14 == true);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(731)
				if ((tmp15)){
					HX_STACK_LINE(732)
					::haxe::ui::toolkit::controls::VScroll tmp16 = this->_vscroll;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(732)
					tmp16->set_visible(false);
				}
				else{
					HX_STACK_LINE(734)
					::haxe::ui::toolkit::controls::VScroll tmp16 = this->_vscroll;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(734)
					tmp16->set_visible(true);
				}
			}
			HX_STACK_LINE(736)
			invalidateLayout = true;
			HX_STACK_LINE(737)
			::haxe::ui::toolkit::controls::VScroll tmp14 = this->_vscroll;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(737)
			this->addChild(tmp14);
			HX_STACK_LINE(738)
			created = true;
		}
		HX_STACK_LINE(741)
		bool tmp2 = invalidateLayout;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(741)
		if ((tmp2)){
			HX_STACK_LINE(742)
			Float tmp3 = this->get_percentHeight();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(742)
			bool tmp4 = (tmp3 == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(742)
			if ((tmp4)){
				HX_STACK_LINE(743)
				this->_invalidating = false;
			}
			HX_STACK_LINE(745)
			this->invalidate((int)1,null());
		}
		HX_STACK_LINE(747)
		bool tmp3 = created;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(747)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollView_obj,createVScroll,return )

Void ScrollView_obj::updateScrollRect( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","updateScrollRect",0x513903dc,"haxe.ui.toolkit.containers.ScrollView.updateScrollRect","haxe/ui/toolkit/containers/ScrollView.hx",750,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(751)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(751)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(751)
		if ((tmp1)){
			HX_STACK_LINE(752)
			return null();
		}
		HX_STACK_LINE(755)
		int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(755)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(755)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(755)
		if ((tmp3)){
			HX_STACK_LINE(755)
			bool tmp5 = this->_virtualScrolling;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(755)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(755)
			tmp4 = (tmp6 == false);
		}
		else{
			HX_STACK_LINE(755)
			tmp4 = false;
		}
		HX_STACK_LINE(755)
		if ((tmp4)){
			HX_STACK_LINE(756)
			::haxe::ui::toolkit::containers::Box tmp5 = this->_container;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(756)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = tmp5->getChildAt((int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(756)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject content = tmp6;		HX_STACK_VAR(content,"content");
			HX_STACK_LINE(757)
			bool tmp7 = (content != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(757)
			if ((tmp7)){
				HX_STACK_LINE(758)
				Float xpos = (int)0;		HX_STACK_VAR(xpos,"xpos");
				HX_STACK_LINE(759)
				::haxe::ui::toolkit::controls::HScroll tmp8 = this->_hscroll;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(759)
				bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(759)
				if ((tmp9)){
					HX_STACK_LINE(760)
					::haxe::ui::toolkit::controls::HScroll tmp10 = this->_hscroll;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(760)
					Float tmp11 = tmp10->get_pos();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(760)
					xpos = tmp11;
				}
				HX_STACK_LINE(762)
				Float ypos = (int)0;		HX_STACK_VAR(ypos,"ypos");
				HX_STACK_LINE(763)
				::haxe::ui::toolkit::controls::VScroll tmp10 = this->_vscroll;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(763)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(763)
				if ((tmp11)){
					HX_STACK_LINE(764)
					::haxe::ui::toolkit::controls::VScroll tmp12 = this->_vscroll;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(764)
					Float tmp13 = tmp12->get_pos();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(764)
					ypos = tmp13;
				}
				HX_STACK_LINE(766)
				Float tmp12 = xpos;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(766)
				Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(766)
				content->set_x(tmp13);
				HX_STACK_LINE(767)
				Float tmp14 = ypos;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(767)
				Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(767)
				content->set_y(tmp15);
				HX_STACK_LINE(769)
				::haxe::ui::toolkit::containers::Box tmp16 = this->_container;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(769)
				::openfl::_legacy::display::Sprite tmp17 = tmp16->get_sprite();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(769)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp18 = this->get_layout();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(769)
				Float tmp19 = tmp18->get_usableWidth();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(769)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp20 = this->get_layout();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(769)
				Float tmp21 = tmp20->get_usableHeight();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(769)
				::openfl::_legacy::geom::Rectangle tmp22 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(769)
				tmp17->set_scrollRect(tmp22);
			}
		}
		else{
			HX_STACK_LINE(772)
			::haxe::ui::toolkit::containers::Box tmp5 = this->_container;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(772)
			::openfl::_legacy::display::Sprite tmp6 = tmp5->get_sprite();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(772)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(772)
			Float tmp8 = tmp7->get_usableWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(772)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp9 = this->get_layout();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(772)
			Float tmp10 = tmp9->get_usableHeight();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(772)
			::openfl::_legacy::geom::Rectangle tmp11 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp8,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(772)
			tmp6->set_scrollRect(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,updateScrollRect,(void))

Void ScrollView_obj::resizeEventTarget( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","resizeEventTarget",0xc509ce95,"haxe.ui.toolkit.containers.ScrollView.resizeEventTarget","haxe/ui/toolkit/containers/ScrollView.hx",776,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(777)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp = this->get_layout();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(777)
		::openfl::_legacy::geom::Rectangle tmp1 = tmp->get_padding();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(777)
		Float tmp2 = tmp1->get_left();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(777)
		Float targetX = tmp2;		HX_STACK_VAR(targetX,"targetX");
		HX_STACK_LINE(778)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp3 = this->get_layout();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(778)
		::openfl::_legacy::geom::Rectangle tmp4 = tmp3->get_padding();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(778)
		Float tmp5 = tmp4->get_top();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(778)
		Float targetY = tmp5;		HX_STACK_VAR(targetY,"targetY");
		HX_STACK_LINE(779)
		Float tmp6 = this->get_width();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(779)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(779)
		::openfl::_legacy::geom::Rectangle tmp8 = tmp7->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(779)
		Float tmp9 = tmp8->get_left();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(779)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp10 = this->get_layout();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(779)
		::openfl::_legacy::geom::Rectangle tmp11 = tmp10->get_padding();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(779)
		Float tmp12 = tmp11->get_right();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(779)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(779)
		Float tmp14 = (tmp6 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(779)
		Float targetCX = tmp14;		HX_STACK_VAR(targetCX,"targetCX");
		HX_STACK_LINE(780)
		Float tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(780)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp16 = this->get_layout();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(780)
		::openfl::_legacy::geom::Rectangle tmp17 = tmp16->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(780)
		Float tmp18 = tmp17->get_top();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(780)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp19 = this->get_layout();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(780)
		::openfl::_legacy::geom::Rectangle tmp20 = tmp19->get_padding();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(780)
		Float tmp21 = tmp20->get_bottom();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(780)
		Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(780)
		Float tmp23 = (tmp15 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(780)
		Float targetCY = tmp23;		HX_STACK_VAR(targetCY,"targetCY");
		HX_STACK_LINE(781)
		::haxe::ui::toolkit::controls::VScroll tmp24 = this->_vscroll;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(781)
		bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(781)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(781)
		if ((tmp25)){
			HX_STACK_LINE(781)
			::haxe::ui::toolkit::controls::VScroll tmp27 = this->_vscroll;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(781)
			::haxe::ui::toolkit::controls::VScroll tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(781)
			bool tmp29 = tmp28->get_visible();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(781)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(781)
			tmp26 = (tmp30 == true);
		}
		else{
			HX_STACK_LINE(781)
			tmp26 = false;
		}
		HX_STACK_LINE(781)
		if ((tmp26)){
			HX_STACK_LINE(782)
			::haxe::ui::toolkit::controls::VScroll tmp27 = this->_vscroll;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(782)
			Float tmp28 = tmp27->get_width();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(782)
			hx::SubEq(targetCX,tmp28);
		}
		HX_STACK_LINE(784)
		::haxe::ui::toolkit::controls::HScroll tmp27 = this->_hscroll;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(784)
		bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(784)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(784)
		if ((tmp28)){
			HX_STACK_LINE(784)
			::haxe::ui::toolkit::controls::HScroll tmp30 = this->_hscroll;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(784)
			::haxe::ui::toolkit::controls::HScroll tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(784)
			bool tmp32 = tmp31->get_visible();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(784)
			bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(784)
			tmp29 = (tmp33 == true);
		}
		else{
			HX_STACK_LINE(784)
			tmp29 = false;
		}
		HX_STACK_LINE(784)
		if ((tmp29)){
			HX_STACK_LINE(785)
			::haxe::ui::toolkit::controls::HScroll tmp30 = this->_hscroll;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(785)
			Float tmp31 = tmp30->get_height();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(785)
			hx::SubEq(targetCY,tmp31);
		}
		HX_STACK_LINE(788)
		::openfl::_legacy::display::Sprite tmp30 = this->_eventTarget;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(788)
		tmp30->set_alpha((int)0);
		HX_STACK_LINE(789)
		::openfl::_legacy::display::Sprite tmp31 = this->_eventTarget;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(789)
		::openfl::_legacy::display::Graphics tmp32 = tmp31->get_graphics();		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(789)
		tmp32->clear();
		HX_STACK_LINE(790)
		::openfl::_legacy::display::Sprite tmp33 = this->_eventTarget;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(790)
		::openfl::_legacy::display::Graphics tmp34 = tmp33->get_graphics();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(790)
		tmp34->beginFill((int)16711935,null());
		HX_STACK_LINE(791)
		::openfl::_legacy::display::Sprite tmp35 = this->_eventTarget;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(791)
		::openfl::_legacy::display::Graphics tmp36 = tmp35->get_graphics();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(791)
		tmp36->lineStyle((int)0,null(),null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(792)
		::openfl::_legacy::display::Sprite tmp37 = this->_eventTarget;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(792)
		::openfl::_legacy::display::Graphics tmp38 = tmp37->get_graphics();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(792)
		Float tmp39 = targetX;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(792)
		Float tmp40 = targetY;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(792)
		Float tmp41 = targetCX;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(792)
		Float tmp42 = targetCY;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(792)
		tmp38->drawRect(tmp39,tmp40,tmp41,tmp42);
		HX_STACK_LINE(793)
		::openfl::_legacy::display::Sprite tmp43 = this->_eventTarget;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(793)
		::openfl::_legacy::display::Graphics tmp44 = tmp43->get_graphics();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(793)
		tmp44->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollView_obj,resizeEventTarget,(void))

::haxe::ui::toolkit::core::DisplayObject ScrollView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","clone",0xe4bb937b,"haxe.ui.toolkit.containers.ScrollView.clone","src/haxe/ui/toolkit/containers/ScrollView.hx",1,0xa31fb0fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollView c = ((::haxe::ui::toolkit::containers::ScrollView)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::ScrollView tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ScrollView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollView","self",0x1277f92e,"haxe.ui.toolkit.containers.ScrollView.self","src/haxe/ui/toolkit/containers/ScrollView.hx",1,0xa31fb0fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollView tmp = ::haxe::ui::toolkit::containers::ScrollView_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ScrollView_obj::ScrollView_obj()
{
}

void ScrollView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScrollView);
	HX_MARK_MEMBER_NAME(_hscroll,"_hscroll");
	HX_MARK_MEMBER_NAME(_vscroll,"_vscroll");
	HX_MARK_MEMBER_NAME(_container,"_container");
	HX_MARK_MEMBER_NAME(_showHScroll,"_showHScroll");
	HX_MARK_MEMBER_NAME(_showVScroll,"_showVScroll");
	HX_MARK_MEMBER_NAME(_eventTarget,"_eventTarget");
	HX_MARK_MEMBER_NAME(_downPos,"_downPos");
	HX_MARK_MEMBER_NAME(_inertiaSpeed,"_inertiaSpeed");
	HX_MARK_MEMBER_NAME(_inertiaTime,"_inertiaTime");
	HX_MARK_MEMBER_NAME(_inertiaSensitivity,"_inertiaSensitivity");
	HX_MARK_MEMBER_NAME(_inertialScrolling,"_inertialScrolling");
	HX_MARK_MEMBER_NAME(_scrollSensitivity,"_scrollSensitivity");
	HX_MARK_MEMBER_NAME(_autoHideScrolls,"_autoHideScrolls");
	HX_MARK_MEMBER_NAME(_virtualScrolling,"_virtualScrolling");
	HX_MARK_MEMBER_NAME(_pulling,"_pulling");
	HX_MARK_MEMBER_NAME(_refreshPromptView,"_refreshPromptView");
	HX_MARK_MEMBER_NAME(_refreshString,"_refreshString");
	HX_MARK_MEMBER_NAME(_refreshingView,"_refreshingView");
	HX_MARK_MEMBER_NAME(_refreshingString,"_refreshingString");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScrollView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hscroll,"_hscroll");
	HX_VISIT_MEMBER_NAME(_vscroll,"_vscroll");
	HX_VISIT_MEMBER_NAME(_container,"_container");
	HX_VISIT_MEMBER_NAME(_showHScroll,"_showHScroll");
	HX_VISIT_MEMBER_NAME(_showVScroll,"_showVScroll");
	HX_VISIT_MEMBER_NAME(_eventTarget,"_eventTarget");
	HX_VISIT_MEMBER_NAME(_downPos,"_downPos");
	HX_VISIT_MEMBER_NAME(_inertiaSpeed,"_inertiaSpeed");
	HX_VISIT_MEMBER_NAME(_inertiaTime,"_inertiaTime");
	HX_VISIT_MEMBER_NAME(_inertiaSensitivity,"_inertiaSensitivity");
	HX_VISIT_MEMBER_NAME(_inertialScrolling,"_inertialScrolling");
	HX_VISIT_MEMBER_NAME(_scrollSensitivity,"_scrollSensitivity");
	HX_VISIT_MEMBER_NAME(_autoHideScrolls,"_autoHideScrolls");
	HX_VISIT_MEMBER_NAME(_virtualScrolling,"_virtualScrolling");
	HX_VISIT_MEMBER_NAME(_pulling,"_pulling");
	HX_VISIT_MEMBER_NAME(_refreshPromptView,"_refreshPromptView");
	HX_VISIT_MEMBER_NAME(_refreshString,"_refreshString");
	HX_VISIT_MEMBER_NAME(_refreshingView,"_refreshingView");
	HX_VISIT_MEMBER_NAME(_refreshingString,"_refreshingString");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ScrollView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_hscroll") ) { return _hscroll; }
		if (HX_FIELD_EQ(inName,"_vscroll") ) { return _vscroll; }
		if (HX_FIELD_EQ(inName,"_downPos") ) { return _downPos; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"_pulling") ) { return _pulling; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowPull") ) { return allowPull_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { return _container; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == hx::paccAlways) return get_hscrollPos(); }
		if (HX_FIELD_EQ(inName,"hscrollMin") ) { if (inCallProp == hx::paccAlways) return get_hscrollMin(); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { if (inCallProp == hx::paccAlways) return get_hscrollMax(); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == hx::paccAlways) return get_vscrollPos(); }
		if (HX_FIELD_EQ(inName,"vscrollMin") ) { if (inCallProp == hx::paccAlways) return get_vscrollMin(); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { if (inCallProp == hx::paccAlways) return get_vscrollMax(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"showHScroll") ) { if (inCallProp == hx::paccAlways) return get_showHScroll(); }
		if (HX_FIELD_EQ(inName,"showVScroll") ) { if (inCallProp == hx::paccAlways) return get_showVScroll(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_showHScroll") ) { return _showHScroll; }
		if (HX_FIELD_EQ(inName,"_showVScroll") ) { return _showVScroll; }
		if (HX_FIELD_EQ(inName,"_eventTarget") ) { return _eventTarget; }
		if (HX_FIELD_EQ(inName,"_inertiaTime") ) { return _inertiaTime; }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"checkScrolls") ) { return checkScrolls_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_inertiaSpeed") ) { return _inertiaSpeed; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseWheel") ) { return _onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshString") ) { if (inCallProp == hx::paccAlways) return get_refreshString(); }
		if (HX_FIELD_EQ(inName,"createHScroll") ) { return createHScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"createVScroll") ) { return createVScroll_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"postInitialize") ) { return postInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hscrollPos") ) { return get_hscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hscrollPos") ) { return set_hscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hscrollMin") ) { return get_hscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hscrollMin") ) { return set_hscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hscrollMax") ) { return get_hscrollMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hscrollMax") ) { return set_hscrollMax_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollPos") ) { return get_vscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollPos") ) { return set_vscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollMin") ) { return get_vscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollMin") ) { return set_vscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollMax") ) { return get_vscrollMax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollMax") ) { return set_vscrollMax_dyn(); }
		if (HX_FIELD_EQ(inName,"_refreshString") ) { return _refreshString; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_showHScroll") ) { return get_showHScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"set_showHScroll") ) { return set_showHScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"get_showVScroll") ) { return get_showVScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"set_showVScroll") ) { return set_showVScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { if (inCallProp == hx::paccAlways) return get_hscrollPageSize(); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { if (inCallProp == hx::paccAlways) return get_vscrollPageSize(); }
		if (HX_FIELD_EQ(inName,"_refreshingView") ) { return _refreshingView; }
		if (HX_FIELD_EQ(inName,"refreshComplete") ) { return refreshComplete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autoHideScrolls") ) { return _autoHideScrolls; }
		if (HX_FIELD_EQ(inName,"virtualScrolling") ) { if (inCallProp == hx::paccAlways) return get_virtualScrolling(); }
		if (HX_FIELD_EQ(inName,"_onHScrollChange") ) { return _onHScrollChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onVScrollChange") ) { return _onVScrollChange_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshingString") ) { if (inCallProp == hx::paccAlways) return get_refreshingString(); }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return _onScreenMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScrollRect") ) { return updateScrollRect_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_virtualScrolling") ) { return _virtualScrolling; }
		if (HX_FIELD_EQ(inName,"inertialScrolling") ) { if (inCallProp == hx::paccAlways) return get_inertialScrolling(); }
		if (HX_FIELD_EQ(inName,"get_refreshString") ) { return get_refreshString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_refreshString") ) { return set_refreshString_dyn(); }
		if (HX_FIELD_EQ(inName,"_refreshingString") ) { return _refreshingString; }
		if (HX_FIELD_EQ(inName,"resizeEventTarget") ) { return resizeEventTarget_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_inertialScrolling") ) { return _inertialScrolling; }
		if (HX_FIELD_EQ(inName,"_scrollSensitivity") ) { return _scrollSensitivity; }
		if (HX_FIELD_EQ(inName,"_refreshPromptView") ) { return _refreshPromptView; }
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_inertiaSensitivity") ) { return _inertiaSensitivity; }
		if (HX_FIELD_EQ(inName,"get_hscrollPageSize") ) { return get_hscrollPageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hscrollPageSize") ) { return set_hscrollPageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollPageSize") ) { return get_vscrollPageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollPageSize") ) { return set_vscrollPageSize_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_virtualScrolling") ) { return get_virtualScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"set_virtualScrolling") ) { return set_virtualScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"_onInertiaEnterFrame") ) { return _onInertiaEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_refreshingString") ) { return get_refreshingString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_refreshingString") ) { return set_refreshingString_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_inertialScrolling") ) { return get_inertialScrolling_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inertialScrolling") ) { return set_inertialScrolling_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScrollView_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_hscroll") ) { _hscroll=inValue.Cast< ::haxe::ui::toolkit::controls::HScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vscroll") ) { _vscroll=inValue.Cast< ::haxe::ui::toolkit::controls::VScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downPos") ) { _downPos=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pulling") ) { _pulling=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { _container=inValue.Cast< ::haxe::ui::toolkit::containers::Box >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hscrollPos") ) { if (inCallProp == hx::paccAlways) return set_hscrollPos(inValue); }
		if (HX_FIELD_EQ(inName,"hscrollMin") ) { if (inCallProp == hx::paccAlways) return set_hscrollMin(inValue); }
		if (HX_FIELD_EQ(inName,"hscrollMax") ) { if (inCallProp == hx::paccAlways) return set_hscrollMax(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == hx::paccAlways) return set_vscrollPos(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollMin") ) { if (inCallProp == hx::paccAlways) return set_vscrollMin(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { if (inCallProp == hx::paccAlways) return set_vscrollMax(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showHScroll") ) { if (inCallProp == hx::paccAlways) return set_showHScroll(inValue); }
		if (HX_FIELD_EQ(inName,"showVScroll") ) { if (inCallProp == hx::paccAlways) return set_showVScroll(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_showHScroll") ) { _showHScroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_showVScroll") ) { _showVScroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_eventTarget") ) { _eventTarget=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inertiaTime") ) { _inertiaTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_inertiaSpeed") ) { _inertiaSpeed=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"refreshString") ) { if (inCallProp == hx::paccAlways) return set_refreshString(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_refreshString") ) { _refreshString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hscrollPageSize") ) { if (inCallProp == hx::paccAlways) return set_hscrollPageSize(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollPageSize") ) { if (inCallProp == hx::paccAlways) return set_vscrollPageSize(inValue); }
		if (HX_FIELD_EQ(inName,"_refreshingView") ) { _refreshingView=inValue.Cast< ::haxe::ui::toolkit::containers::ScrollViewRefreshing >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autoHideScrolls") ) { _autoHideScrolls=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"virtualScrolling") ) { if (inCallProp == hx::paccAlways) return set_virtualScrolling(inValue); }
		if (HX_FIELD_EQ(inName,"refreshingString") ) { if (inCallProp == hx::paccAlways) return set_refreshingString(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_virtualScrolling") ) { _virtualScrolling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inertialScrolling") ) { if (inCallProp == hx::paccAlways) return set_inertialScrolling(inValue); }
		if (HX_FIELD_EQ(inName,"_refreshingString") ) { _refreshingString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_inertialScrolling") ) { _inertialScrolling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollSensitivity") ) { _scrollSensitivity=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_refreshPromptView") ) { _refreshPromptView=inValue.Cast< ::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_inertiaSensitivity") ) { _inertiaSensitivity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ScrollView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ScrollView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65"));
	outFields->push(HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac"));
	outFields->push(HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b"));
	outFields->push(HX_HCSTRING("_showHScroll","\x19","\xd5","\x56","\xa3"));
	outFields->push(HX_HCSTRING("_showVScroll","\xa7","\x53","\x83","\xe9"));
	outFields->push(HX_HCSTRING("_eventTarget","\x0c","\xed","\x43","\x40"));
	outFields->push(HX_HCSTRING("_downPos","\xd3","\x5f","\x59","\xa7"));
	outFields->push(HX_HCSTRING("_inertiaSpeed","\x0c","\x1f","\xc5","\xdc"));
	outFields->push(HX_HCSTRING("_inertiaTime","\x28","\x5c","\xdf","\x77"));
	outFields->push(HX_HCSTRING("_inertiaSensitivity","\x64","\x0d","\xa7","\x87"));
	outFields->push(HX_HCSTRING("_inertialScrolling","\x24","\x7f","\x98","\xfe"));
	outFields->push(HX_HCSTRING("_scrollSensitivity","\xd3","\x89","\x60","\xc7"));
	outFields->push(HX_HCSTRING("_autoHideScrolls","\x76","\x06","\x1e","\x87"));
	outFields->push(HX_HCSTRING("_virtualScrolling","\xc9","\x91","\x65","\xb0"));
	outFields->push(HX_HCSTRING("inertialScrolling","\x63","\xda","\x82","\x2b"));
	outFields->push(HX_HCSTRING("virtualScrolling","\x6a","\xa3","\xea","\x17"));
	outFields->push(HX_HCSTRING("showHScroll","\x18","\x27","\x4d","\x3d"));
	outFields->push(HX_HCSTRING("showVScroll","\xa6","\xa5","\x79","\x83"));
	outFields->push(HX_HCSTRING("hscrollPos","\x1f","\xb6","\x47","\x5c"));
	outFields->push(HX_HCSTRING("hscrollMin","\x1d","\x6a","\x45","\x5c"));
	outFields->push(HX_HCSTRING("hscrollMax","\x2f","\x63","\x45","\x5c"));
	outFields->push(HX_HCSTRING("hscrollPageSize","\x45","\x4a","\x45","\x67"));
	outFields->push(HX_HCSTRING("vscrollPos","\x51","\x44","\x5a","\xe0"));
	outFields->push(HX_HCSTRING("vscrollMin","\x4f","\xf8","\x57","\xe0"));
	outFields->push(HX_HCSTRING("vscrollMax","\x61","\xf1","\x57","\xe0"));
	outFields->push(HX_HCSTRING("vscrollPageSize","\xd3","\x06","\x08","\x8d"));
	outFields->push(HX_HCSTRING("_pulling","\xbe","\x43","\xd7","\xa9"));
	outFields->push(HX_HCSTRING("_refreshPromptView","\xa5","\xd4","\x4a","\x83"));
	outFields->push(HX_HCSTRING("_refreshString","\x4d","\xbd","\xbc","\x4d"));
	outFields->push(HX_HCSTRING("refreshString","\x0c","\xcd","\x6a","\x0f"));
	outFields->push(HX_HCSTRING("_refreshingView","\x8b","\xb4","\x21","\x82"));
	outFields->push(HX_HCSTRING("_refreshingString","\x77","\x00","\x44","\xc0"));
	outFields->push(HX_HCSTRING("refreshingString","\x18","\x12","\xc9","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::HScroll*/ ,(int)offsetof(ScrollView_obj,_hscroll),HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::VScroll*/ ,(int)offsetof(ScrollView_obj,_vscroll),HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Box*/ ,(int)offsetof(ScrollView_obj,_container),HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_showHScroll),HX_HCSTRING("_showHScroll","\x19","\xd5","\x56","\xa3")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_showVScroll),HX_HCSTRING("_showVScroll","\xa7","\x53","\x83","\xe9")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(ScrollView_obj,_eventTarget),HX_HCSTRING("_eventTarget","\x0c","\xed","\x43","\x40")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(ScrollView_obj,_downPos),HX_HCSTRING("_downPos","\xd3","\x5f","\x59","\xa7")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(ScrollView_obj,_inertiaSpeed),HX_HCSTRING("_inertiaSpeed","\x0c","\x1f","\xc5","\xdc")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_inertiaTime),HX_HCSTRING("_inertiaTime","\x28","\x5c","\xdf","\x77")},
	{hx::fsFloat,(int)offsetof(ScrollView_obj,_inertiaSensitivity),HX_HCSTRING("_inertiaSensitivity","\x64","\x0d","\xa7","\x87")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_inertialScrolling),HX_HCSTRING("_inertialScrolling","\x24","\x7f","\x98","\xfe")},
	{hx::fsInt,(int)offsetof(ScrollView_obj,_scrollSensitivity),HX_HCSTRING("_scrollSensitivity","\xd3","\x89","\x60","\xc7")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_autoHideScrolls),HX_HCSTRING("_autoHideScrolls","\x76","\x06","\x1e","\x87")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_virtualScrolling),HX_HCSTRING("_virtualScrolling","\xc9","\x91","\x65","\xb0")},
	{hx::fsBool,(int)offsetof(ScrollView_obj,_pulling),HX_HCSTRING("_pulling","\xbe","\x43","\xd7","\xa9")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt*/ ,(int)offsetof(ScrollView_obj,_refreshPromptView),HX_HCSTRING("_refreshPromptView","\xa5","\xd4","\x4a","\x83")},
	{hx::fsString,(int)offsetof(ScrollView_obj,_refreshString),HX_HCSTRING("_refreshString","\x4d","\xbd","\xbc","\x4d")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::ScrollViewRefreshing*/ ,(int)offsetof(ScrollView_obj,_refreshingView),HX_HCSTRING("_refreshingView","\x8b","\xb4","\x21","\x82")},
	{hx::fsString,(int)offsetof(ScrollView_obj,_refreshingString),HX_HCSTRING("_refreshingString","\x77","\x00","\x44","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65"),
	HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac"),
	HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b"),
	HX_HCSTRING("_showHScroll","\x19","\xd5","\x56","\xa3"),
	HX_HCSTRING("_showVScroll","\xa7","\x53","\x83","\xe9"),
	HX_HCSTRING("_eventTarget","\x0c","\xed","\x43","\x40"),
	HX_HCSTRING("_downPos","\xd3","\x5f","\x59","\xa7"),
	HX_HCSTRING("_inertiaSpeed","\x0c","\x1f","\xc5","\xdc"),
	HX_HCSTRING("_inertiaTime","\x28","\x5c","\xdf","\x77"),
	HX_HCSTRING("_inertiaSensitivity","\x64","\x0d","\xa7","\x87"),
	HX_HCSTRING("_inertialScrolling","\x24","\x7f","\x98","\xfe"),
	HX_HCSTRING("_scrollSensitivity","\xd3","\x89","\x60","\xc7"),
	HX_HCSTRING("_autoHideScrolls","\x76","\x06","\x1e","\x87"),
	HX_HCSTRING("_virtualScrolling","\xc9","\x91","\x65","\xb0"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("postInitialize","\xd0","\xf1","\x7d","\x3b"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("get_inertialScrolling","\x3a","\xdd","\x30","\xaa"),
	HX_HCSTRING("set_inertialScrolling","\x46","\xab","\x39","\xfe"),
	HX_HCSTRING("get_virtualScrolling","\x73","\x08","\x55","\x36"),
	HX_HCSTRING("set_virtualScrolling","\xe7","\xbf","\x0c","\x03"),
	HX_HCSTRING("get_showHScroll","\xaf","\xde","\x2e","\xfe"),
	HX_HCSTRING("set_showHScroll","\xbb","\x5b","\xfa","\xf9"),
	HX_HCSTRING("get_showVScroll","\x3d","\x5d","\x5b","\x44"),
	HX_HCSTRING("set_showVScroll","\x49","\xda","\x26","\x40"),
	HX_HCSTRING("get_hscrollPos","\x68","\x3e","\x3d","\xd2"),
	HX_HCSTRING("set_hscrollPos","\xdc","\x26","\x5d","\xf2"),
	HX_HCSTRING("get_hscrollMin","\x66","\xf2","\x3a","\xd2"),
	HX_HCSTRING("set_hscrollMin","\xda","\xda","\x5a","\xf2"),
	HX_HCSTRING("get_hscrollMax","\x78","\xeb","\x3a","\xd2"),
	HX_HCSTRING("set_hscrollMax","\xec","\xd3","\x5a","\xf2"),
	HX_HCSTRING("get_hscrollPageSize","\x5c","\x19","\x50","\xf2"),
	HX_HCSTRING("set_hscrollPageSize","\x68","\x0c","\xed","\x2e"),
	HX_HCSTRING("get_vscrollPos","\x9a","\xcc","\x4f","\x56"),
	HX_HCSTRING("set_vscrollPos","\x0e","\xb5","\x6f","\x76"),
	HX_HCSTRING("get_vscrollMin","\x98","\x80","\x4d","\x56"),
	HX_HCSTRING("set_vscrollMin","\x0c","\x69","\x6d","\x76"),
	HX_HCSTRING("get_vscrollMax","\xaa","\x79","\x4d","\x56"),
	HX_HCSTRING("set_vscrollMax","\x1e","\x62","\x6d","\x76"),
	HX_HCSTRING("get_vscrollPageSize","\xea","\xd5","\x12","\x18"),
	HX_HCSTRING("set_vscrollPageSize","\xf6","\xc8","\xaf","\x54"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("_onInertiaEnterFrame","\x71","\xb8","\xa7","\xdd"),
	HX_HCSTRING("_onHScrollChange","\xc7","\xd7","\xdd","\x9f"),
	HX_HCSTRING("_onVScrollChange","\xd5","\xb4","\x64","\x70"),
	HX_HCSTRING("_onMouseWheel","\x14","\x5d","\x39","\xa2"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_pulling","\xbe","\x43","\xd7","\xa9"),
	HX_HCSTRING("_refreshPromptView","\xa5","\xd4","\x4a","\x83"),
	HX_HCSTRING("_refreshString","\x4d","\xbd","\xbc","\x4d"),
	HX_HCSTRING("get_refreshString","\x63","\xd8","\xda","\x15"),
	HX_HCSTRING("set_refreshString","\x6f","\xb0","\x48","\x39"),
	HX_HCSTRING("_refreshingView","\x8b","\xb4","\x21","\x82"),
	HX_HCSTRING("_refreshingString","\x77","\x00","\x44","\xc0"),
	HX_HCSTRING("get_refreshingString","\x21","\x77","\x33","\x46"),
	HX_HCSTRING("set_refreshingString","\x95","\x2e","\xeb","\x12"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("allowPull","\xee","\x54","\x55","\xb5"),
	HX_HCSTRING("_onScreenMouseUp","\xb6","\x0f","\x00","\xd0"),
	HX_HCSTRING("refreshComplete","\xb4","\x69","\x20","\x7d"),
	HX_HCSTRING("checkScrolls","\xde","\xeb","\x5e","\x1e"),
	HX_HCSTRING("createHScroll","\xf9","\x62","\xf4","\x48"),
	HX_HCSTRING("createVScroll","\x87","\xe1","\x20","\x8f"),
	HX_HCSTRING("updateScrollRect","\x3a","\xab","\x52","\x53"),
	HX_HCSTRING("resizeEventTarget","\x77","\x99","\x62","\x99"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollView_obj::__mClass,"__mClass");
};

#endif

hx::Class ScrollView_obj::__mClass;

void ScrollView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.ScrollView","\x0c","\xd6","\x67","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ScrollView_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollView_obj >;
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
