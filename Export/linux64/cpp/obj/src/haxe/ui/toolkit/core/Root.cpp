#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_AbsoluteLayout
#include <haxe/ui/toolkit/layout/AbsoluteLayout.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Root_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Root","new",0xe8048d21,"haxe.ui.toolkit.core.Root.new","haxe/ui/toolkit/core/Root.hx",12,0x06a667af)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->_modalOverlayCounter = (int)0;
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::layout::AbsoluteLayout tmp = ::haxe::ui::toolkit::layout::AbsoluteLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	this->_layout = tmp;
	HX_STACK_LINE(22)
	this->_clipContent = false;
	HX_STACK_LINE(26)
	::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	this->_mousePos = tmp1;
	HX_STACK_LINE(27)
	::haxe::ui::toolkit::core::Screen tmp2 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	::String tmp3 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	Dynamic tmp4 = this->_onScreenResize_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
}
;
	return null();
}

//Root_obj::~Root_obj() { }

Dynamic Root_obj::__CreateEmpty() { return  new Root_obj; }
hx::ObjectPtr< Root_obj > Root_obj::__new()
{  hx::ObjectPtr< Root_obj > _result_ = new Root_obj();
	_result_->__construct();
	return _result_;}

Dynamic Root_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Root_obj > _result_ = new Root_obj();
	_result_->__construct();
	return _result_;}

Void Root_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","preInitialize",0x68c4d754,"haxe.ui.toolkit.core.Root.preInitialize","haxe/ui/toolkit/core/Root.hx",33,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::haxe::ui::toolkit::core::Root _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		this->super::preInitialize();
		HX_STACK_LINE(35)
		::String tmp = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::core::Root,_g)
		int __ArgCount() const { return 1; }
		Void run(::openfl::_legacy::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/core/Root.hx",35,0x06a667af)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(36)
				::openfl::_legacy::geom::Point tmp1 = ::openfl::_legacy::geom::Point_obj::__new(event->stageX,event->stageY);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(36)
				_g->_mousePos = tmp1;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(35)
		this->addEventListener(tmp, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(38)
		this->resizeRoot();
	}
return null();
}


Void Root_obj::_onScreenResize( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","_onScreenResize",0xfae2651f,"haxe.ui.toolkit.core.Root._onScreenResize","haxe/ui/toolkit/core/Root.hx",45,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(45)
		this->resizeRoot();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Root_obj,_onScreenResize,(void))

::openfl::_legacy::geom::Point Root_obj::get_mousePosition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Root","get_mousePosition",0x7720d7c6,"haxe.ui.toolkit.core.Root.get_mousePosition","haxe/ui/toolkit/core/Root.hx",53,0x06a667af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::openfl::_legacy::geom::Point tmp = this->_mousePos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Root_obj,get_mousePosition,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject Root_obj::add( Dynamic item){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Root","add",0xe7faaee2,"haxe.ui.toolkit.core.Root.add","haxe/ui/toolkit/core/Root.hx",60,0x06a667af)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(61)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(62)
	Dynamic tmp = item;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	if ((tmp1)){
		HX_STACK_LINE(63)
		::String tmp2 = ((::String)(item));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = this->addChild(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		r = tmp4;
	}
	else{
		HX_STACK_LINE(64)
		Dynamic tmp2 = item;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::Controller >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		if ((tmp3)){
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::core::Controller tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			tmp4 = hx::TCast< ::haxe::ui::toolkit::core::Controller >::cast(item);
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = tmp4->get_view();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = this->addChild(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			r = tmp6;
		}
		else{
			HX_STACK_LINE(67)
			Dynamic tmp4 = item;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			::String tmp6 = (tmp5 + HX_HCSTRING(" item not supported in Root.add","\xa4","\x9c","\x12","\x2f"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Root.hx","\xbc","\x7d","\xc7","\xe9"),67,HX_HCSTRING("haxe.ui.toolkit.core.Root","\xaf","\x68","\x55","\x8b"),HX_HCSTRING("add","\x21","\xf2","\x49","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			::haxe::Log_obj::trace(tmp6,tmp7);
		}
	}
	HX_STACK_LINE(69)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Root_obj,add,return )

Void Root_obj::resizeRoot( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","resizeRoot",0x59104b95,"haxe.ui.toolkit.core.Root.resizeRoot","haxe/ui/toolkit/core/Root.hx",72,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		Float tmp = this->get_percentWidth();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::core::Screen tmp2 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			Float tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			Float tmp4 = this->get_percentWidth();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			Float tmp6 = (Float(tmp5) / Float((int)100));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			this->set_width(tmp6);
		}
		HX_STACK_LINE(76)
		Float tmp2 = this->get_percentHeight();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp3)){
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::core::Screen tmp4 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			Float tmp5 = tmp4->get_height();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			Float tmp6 = this->get_percentHeight();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			Float tmp8 = (Float(tmp7) / Float((int)100));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			this->set_height(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Root_obj,resizeRoot,(void))

Void Root_obj::showModalOverlay( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","showModalOverlay",0x37f0221f,"haxe.ui.toolkit.core.Root.showModalOverlay","haxe/ui/toolkit/core/Root.hx",83,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		(this->_modalOverlayCounter)++;
		HX_STACK_LINE(86)
		::haxe::ui::toolkit::core::Component tmp = this->_modalOverlay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		if ((tmp1)){
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::core::Component tmp2 = ::haxe::ui::toolkit::core::Component_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			this->_modalOverlay = tmp2;
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::core::Component tmp3 = this->_modalOverlay;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			tmp3->set_id(HX_HCSTRING("modalOverlay","\xe3","\x5a","\x2b","\x81"));
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::core::Component tmp4 = this->_modalOverlay;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::core::Component tmp5 = this->_modalOverlay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			Float tmp6 = tmp5->set_percentHeight((int)100);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			tmp4->set_percentWidth(tmp6);
			HX_STACK_LINE(90)
			::haxe::ui::toolkit::core::Component tmp7 = this->_modalOverlay;		HX_STACK_VAR(tmp7,"tmp7");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent e){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/core/Root.hx",90,0x06a667af)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(91)
					::haxe::ui::toolkit::core::PopupManager tmp8 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(91)
					tmp8->dismissModal((int)4096);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(90)
			tmp7->set_onClick( Dynamic(new _Function_2_1()));
		}
		HX_STACK_LINE(94)
		Dynamic tmp2 = this->findChild(HX_HCSTRING("modalOverlay","\xe3","\x5a","\x2b","\x81"),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		if ((tmp3)){
			HX_STACK_LINE(95)
			::haxe::ui::toolkit::core::Component tmp4 = this->_modalOverlay;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(95)
			this->addChild(tmp4);
		}
		HX_STACK_LINE(97)
		::haxe::ui::toolkit::core::Component tmp4 = this->_modalOverlay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		tmp4->set_visible(true);
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(100)
			while((true)){
				HX_STACK_LINE(100)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				if ((tmp6)){
					HX_STACK_LINE(100)
					break;
				}
				HX_STACK_LINE(100)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(100)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(100)
				++(_g);
				HX_STACK_LINE(101)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				bool tmp10 = (tmp9 == false);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				if ((tmp10)){
					HX_STACK_LINE(101)
					::String tmp12 = child->get_id();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(101)
					::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(101)
					tmp11 = (tmp13 != HX_HCSTRING("modalOverlay","\xe3","\x5a","\x2b","\x81"));
				}
				else{
					HX_STACK_LINE(101)
					tmp11 = false;
				}
				HX_STACK_LINE(101)
				if ((tmp11)){
					HX_STACK_LINE(102)
					::haxe::ui::toolkit::core::Component tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(102)
					tmp12 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(child);
					HX_STACK_LINE(102)
					::haxe::ui::toolkit::core::Component c = tmp12;		HX_STACK_VAR(c,"c");
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Root_obj,showModalOverlay,(void))

Void Root_obj::hideModalOverlay( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Root","hideModalOverlay",0xf8de9564,"haxe.ui.toolkit.core.Root.hideModalOverlay","haxe/ui/toolkit/core/Root.hx",108,0x06a667af)
		HX_STACK_THIS(this)
		HX_STACK_LINE(109)
		(this->_modalOverlayCounter)--;
		HX_STACK_LINE(110)
		int tmp = this->_modalOverlayCounter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		if ((tmp1)){
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::core::Component tmp2 = this->_modalOverlay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(111)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			if ((tmp3)){
				HX_STACK_LINE(112)
				::haxe::ui::toolkit::core::Component tmp4 = this->_modalOverlay;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				tmp4->set_visible(false);
			}
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(116)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(116)
				while((true)){
					HX_STACK_LINE(116)
					bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(116)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(116)
					if ((tmp5)){
						HX_STACK_LINE(116)
						break;
					}
					HX_STACK_LINE(116)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(116)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp6;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(116)
					++(_g);
					HX_STACK_LINE(117)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(117)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(117)
					bool tmp9 = (tmp8 == false);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(117)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(117)
					if ((tmp9)){
						HX_STACK_LINE(117)
						::String tmp11 = child->get_id();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(117)
						::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(117)
						tmp10 = (tmp12 != HX_HCSTRING("modalOverlay","\xe3","\x5a","\x2b","\x81"));
					}
					else{
						HX_STACK_LINE(117)
						tmp10 = false;
					}
					HX_STACK_LINE(117)
					if ((tmp10)){
						HX_STACK_LINE(118)
						::haxe::ui::toolkit::core::Component tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(118)
						tmp11 = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(child);
						HX_STACK_LINE(118)
						::haxe::ui::toolkit::core::Component c = tmp11;		HX_STACK_VAR(c,"c");
					}
				}
			}
			HX_STACK_LINE(122)
			this->_modalOverlayCounter = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Root_obj,hideModalOverlay,(void))

::haxe::ui::toolkit::core::DisplayObject Root_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Root","clone",0x0b4d425e,"haxe.ui.toolkit.core.Root.clone","src/haxe/ui/toolkit/core/Root.hx",1,0x12fcd2fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Root c = ((::haxe::ui::toolkit::core::Root)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::core::Root tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Root_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Root","self",0x1f44f7ab,"haxe.ui.toolkit.core.Root.self","src/haxe/ui/toolkit/core/Root.hx",1,0x12fcd2fa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Root tmp = ::haxe::ui::toolkit::core::Root_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Root_obj::Root_obj()
{
}

void Root_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Root);
	HX_MARK_MEMBER_NAME(_modalOverlay,"_modalOverlay");
	HX_MARK_MEMBER_NAME(_modalOverlayCounter,"_modalOverlayCounter");
	HX_MARK_MEMBER_NAME(_mousePos,"_mousePos");
	HX_MARK_MEMBER_NAME(mousePosition,"mousePosition");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Root_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_modalOverlay,"_modalOverlay");
	HX_VISIT_MEMBER_NAME(_modalOverlayCounter,"_modalOverlayCounter");
	HX_VISIT_MEMBER_NAME(_mousePos,"_mousePos");
	HX_VISIT_MEMBER_NAME(mousePosition,"mousePosition");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Root_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_mousePos") ) { return _mousePos; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resizeRoot") ) { return resizeRoot_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_modalOverlay") ) { return _modalOverlay; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"mousePosition") ) { return inCallProp == hx::paccAlways ? get_mousePosition() : mousePosition; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onScreenResize") ) { return _onScreenResize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"showModalOverlay") ) { return showModalOverlay_dyn(); }
		if (HX_FIELD_EQ(inName,"hideModalOverlay") ) { return hideModalOverlay_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_mousePosition") ) { return get_mousePosition_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_modalOverlayCounter") ) { return _modalOverlayCounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Root_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_mousePos") ) { _mousePos=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_modalOverlay") ) { _modalOverlay=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mousePosition") ) { mousePosition=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_modalOverlayCounter") ) { _modalOverlayCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Root_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Root_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_modalOverlay","\xc2","\xed","\x99","\x63"));
	outFields->push(HX_HCSTRING("_modalOverlayCounter","\x5a","\x05","\x13","\x28"));
	outFields->push(HX_HCSTRING("_mousePos","\xce","\x9b","\xb4","\xeb"));
	outFields->push(HX_HCSTRING("mousePosition","\xee","\x9f","\xfb","\x59"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(Root_obj,_modalOverlay),HX_HCSTRING("_modalOverlay","\xc2","\xed","\x99","\x63")},
	{hx::fsInt,(int)offsetof(Root_obj,_modalOverlayCounter),HX_HCSTRING("_modalOverlayCounter","\x5a","\x05","\x13","\x28")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Root_obj,_mousePos),HX_HCSTRING("_mousePos","\xce","\x9b","\xb4","\xeb")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(Root_obj,mousePosition),HX_HCSTRING("mousePosition","\xee","\x9f","\xfb","\x59")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_modalOverlay","\xc2","\xed","\x99","\x63"),
	HX_HCSTRING("_modalOverlayCounter","\x5a","\x05","\x13","\x28"),
	HX_HCSTRING("_mousePos","\xce","\x9b","\xb4","\xeb"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("_onScreenResize","\xde","\x0a","\xe9","\x58"),
	HX_HCSTRING("mousePosition","\xee","\x9f","\xfb","\x59"),
	HX_HCSTRING("get_mousePosition","\x45","\xab","\x6b","\x60"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("resizeRoot","\x36","\x7e","\xe9","\xbf"),
	HX_HCSTRING("showModalOverlay","\x80","\x83","\xba","\x1f"),
	HX_HCSTRING("hideModalOverlay","\xc5","\xf6","\xa8","\xe0"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Root_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Root_obj::__mClass,"__mClass");
};

#endif

hx::Class Root_obj::__mClass;

void Root_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.Root","\xaf","\x68","\x55","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Root_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Root_obj >;
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
} // end namespace core
