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
#ifndef INCLUDED_haxe_ui_toolkit_containers_VSplitter
#include <haxe/ui/toolkit/containers/VSplitter.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VSplitterGripper
#include <haxe/ui/toolkit/containers/VSplitterGripper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void VSplitter_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","new",0xbf5d7095,"haxe.ui.toolkit.containers.VSplitter.new","haxe/ui/toolkit/containers/VSplitter.hx",19,0x6bc3d37b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
}
;
	return null();
}

//VSplitter_obj::~VSplitter_obj() { }

Dynamic VSplitter_obj::__CreateEmpty() { return  new VSplitter_obj; }
hx::ObjectPtr< VSplitter_obj > VSplitter_obj::__new()
{  hx::ObjectPtr< VSplitter_obj > _result_ = new VSplitter_obj();
	_result_->__construct();
	return _result_;}

Dynamic VSplitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VSplitter_obj > _result_ = new VSplitter_obj();
	_result_->__construct();
	return _result_;}

hx::Object *VSplitter_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

VSplitter_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< VSplitter_obj >(this); }
::haxe::ui::toolkit::core::interfaces::IDisplayObject VSplitter_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","addChild",0x2a134f66,"haxe.ui.toolkit.containers.VSplitter.addChild","haxe/ui/toolkit/containers/VSplitter.hx",22,0x6bc3d37b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(24)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::containers::VSplitterGripper >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	if ((tmp1)){
		HX_STACK_LINE(25)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = this->super::addChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		r = tmp3;
	}
	else{
		HX_STACK_LINE(27)
		int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		if ((tmp3)){
			HX_STACK_LINE(28)
			::haxe::ui::toolkit::containers::VSplitterGripper tmp4 = ::haxe::ui::toolkit::containers::VSplitterGripper_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(28)
			::haxe::ui::toolkit::containers::VSplitterGripper gripper = tmp4;		HX_STACK_VAR(gripper,"gripper");
			HX_STACK_LINE(29)
			::String tmp5 = HX_HCSTRING("haxeui_mouseDown","\x62","\x19","\x35","\x57");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(29)
			Dynamic tmp6 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			gripper->addEventListener(tmp5,tmp6,null(),null(),null());
			HX_STACK_LINE(30)
			::haxe::ui::toolkit::containers::VSplitterGripper tmp7 = gripper;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			this->addChild(tmp7);
		}
		HX_STACK_LINE(32)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(32)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = this->super::addChild(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(32)
		r = tmp5;
	}
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	return tmp2;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject VSplitter_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","addChildAt",0x5112adf9,"haxe.ui.toolkit.containers.VSplitter.addChildAt","haxe/ui/toolkit/containers/VSplitter.hx",37,0x6bc3d37b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(38)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(39)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::containers::VSplitterGripper >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp1)){
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = this->super::addChildAt(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		r = tmp4;
	}
	else{
		HX_STACK_LINE(42)
		int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		if ((tmp3)){
			HX_STACK_LINE(43)
			::haxe::ui::toolkit::containers::VSplitterGripper tmp4 = ::haxe::ui::toolkit::containers::VSplitterGripper_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			::haxe::ui::toolkit::containers::VSplitterGripper gripper = tmp4;		HX_STACK_VAR(gripper,"gripper");
			HX_STACK_LINE(44)
			::String tmp5 = HX_HCSTRING("haxeui_mouseDown","\x62","\x19","\x35","\x57");		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			Dynamic tmp6 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			gripper->addEventListener(tmp5,tmp6,null(),null(),null());
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::containers::VSplitterGripper tmp7 = gripper;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			this->addChildAt(tmp7,tmp8);
		}
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		int tmp5 = (index + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = this->super::addChildAt(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		r = tmp6;
	}
	HX_STACK_LINE(49)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	return tmp2;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject VSplitter_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","removeChild",0x4191e3ed,"haxe.ui.toolkit.containers.VSplitter.removeChild","haxe/ui/toolkit/containers/VSplitter.hx",52,0x6bc3d37b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(53)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(54)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::containers::VSplitterGripper >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(55)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(55)
			bool tmp3 = dispose;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = this->super::removeChild(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			r = tmp4;
		}
		else{
			HX_STACK_LINE(57)
			int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			bool tmp3 = (tmp2 > (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			if ((tmp3)){
				HX_STACK_LINE(58)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(58)
				int tmp5 = this->indexOfChild(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(58)
				int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(58)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = this->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(58)
				bool tmp8 = dispose;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(58)
				this->removeChild(tmp7,tmp8);
			}
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			bool tmp5 = dispose;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = this->super::removeChild(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			r = tmp6;
		}
		HX_STACK_LINE(62)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		return tmp2;
	}
}


Void VSplitter_obj::_onMouseDown( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","_onMouseDown",0x693c7334,"haxe.ui.toolkit.containers.VSplitter._onMouseDown","haxe/ui/toolkit/containers/VSplitter.hx",65,0x6bc3d37b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(66)
		::haxe::ds::ObjectMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			::haxe::ds::ObjectMap tmp1 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(66)
			::haxe::ds::ObjectMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			tmp = tmp2;
		}
		HX_STACK_LINE(66)
		this->_percents = tmp;
		HX_STACK_LINE(67)
		::haxe::ui::toolkit::core::Component tmp1 = event->get_component();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		this->_gripper = ((::haxe::ui::toolkit::containers::VSplitterGripper)(tmp1));
		HX_STACK_LINE(68)
		Float tmp2 = event->stageY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		::haxe::ui::toolkit::containers::VSplitterGripper tmp3 = this->_gripper;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		Float tmp4 = tmp3->get_y();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		this->_mouseDownOffset = tmp5;
		HX_STACK_LINE(70)
		this->_invalidating = true;
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			while((true)){
				HX_STACK_LINE(71)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(71)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(71)
				if ((tmp7)){
					HX_STACK_LINE(71)
					break;
				}
				HX_STACK_LINE(71)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = _g1->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp8;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(71)
				++(_g);
				HX_STACK_LINE(72)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::haxe::ui::toolkit::containers::VSplitterGripper >());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(72)
				bool tmp11 = (tmp10 == false);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(72)
				if ((tmp11)){
					HX_STACK_LINE(73)
					Float tmp12 = c->get_percentHeight();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					bool tmp13 = (tmp12 != (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					if ((tmp13)){
						HX_STACK_LINE(74)
						{
							HX_STACK_LINE(74)
							Float tmp14 = c->get_percentHeight();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(74)
							Float value = tmp14;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(74)
							::haxe::ds::ObjectMap tmp15 = this->_percents;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(74)
							::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp16 = c;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(74)
							Float tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(74)
							tmp15->set(tmp16,tmp17);
						}
						HX_STACK_LINE(75)
						c->set_percentHeight((int)-1);
					}
				}
			}
		}
		HX_STACK_LINE(79)
		this->_invalidating = false;
		HX_STACK_LINE(80)
		this->invalidate((int)1,null());
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::core::Screen tmp6 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		Dynamic tmp8 = this->_onMouseMove_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		tmp6->addEventListener(tmp7,tmp8,null(),null(),null());
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::core::Screen tmp9 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(83)
		Dynamic tmp11 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(83)
		tmp9->addEventListener(tmp10,tmp11,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VSplitter_obj,_onMouseDown,(void))

Void VSplitter_obj::_onMouseMove( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","_onMouseMove",0x6f2f5de3,"haxe.ui.toolkit.containers.VSplitter._onMouseMove","haxe/ui/toolkit/containers/VSplitter.hx",86,0x6bc3d37b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(87)
		::haxe::ui::toolkit::containers::VSplitterGripper tmp = this->_gripper;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(88)
			Float tmp2 = event->stageY;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::containers::VSplitterGripper tmp3 = this->_gripper;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			Float tmp4 = tmp3->get_y();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			Float tmp6 = this->_mouseDownOffset;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(88)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(88)
			Float delta = tmp7;		HX_STACK_VAR(delta,"delta");
			HX_STACK_LINE(90)
			::haxe::ui::toolkit::containers::VSplitterGripper tmp8 = this->_gripper;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(90)
			int tmp9 = this->indexOfChild(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(90)
			int index = tmp9;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(91)
			int tmp10 = (index - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = this->getChildAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::core::Component before = ((::haxe::ui::toolkit::core::Component)(tmp11));		HX_STACK_VAR(before,"before");
			HX_STACK_LINE(92)
			int tmp12 = (index + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(92)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp13 = this->getChildAt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(92)
			::haxe::ui::toolkit::core::Component after = ((::haxe::ui::toolkit::core::Component)(tmp13));		HX_STACK_VAR(after,"after");
			HX_STACK_LINE(94)
			Float tmp14 = before->get_height();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(94)
			Float tmp15 = delta;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(94)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(94)
			Float newBefore = tmp16;		HX_STACK_VAR(newBefore,"newBefore");
			HX_STACK_LINE(95)
			Float tmp17 = after->get_height();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(95)
			Float tmp18 = delta;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(95)
			Float newAfter = tmp19;		HX_STACK_VAR(newAfter,"newAfter");
			HX_STACK_LINE(96)
			Float tmp20 = newBefore;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(96)
			Float tmp21 = before->get_minHeight();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(96)
			bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(96)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(96)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(96)
			if ((tmp23)){
				HX_STACK_LINE(96)
				Float tmp25 = newAfter;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(96)
				Float tmp26 = after->get_minHeight();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(96)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(96)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(96)
				tmp24 = (tmp25 > tmp28);
			}
			else{
				HX_STACK_LINE(96)
				tmp24 = false;
			}
			HX_STACK_LINE(96)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(96)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(96)
			if ((tmp25)){
				HX_STACK_LINE(97)
				Float tmp27 = newBefore;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(97)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp28 = before->get_layout();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(97)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(97)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(97)
				::openfl::_legacy::geom::Rectangle tmp31 = tmp30->get_padding();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(97)
				::openfl::_legacy::geom::Rectangle tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(97)
				::openfl::_legacy::geom::Rectangle tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(97)
				Float tmp34 = tmp33->get_top();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(97)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(97)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(97)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp37 = before->get_layout();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(97)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(97)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(97)
				::openfl::_legacy::geom::Rectangle tmp40 = tmp39->get_padding();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(97)
				::openfl::_legacy::geom::Rectangle tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(97)
				::openfl::_legacy::geom::Rectangle tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(97)
				Float tmp43 = tmp42->get_bottom();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(97)
				Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(97)
				Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(97)
				Float tmp46 = (tmp36 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(97)
				Float tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(97)
				Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(97)
				Float tmp49 = (tmp27 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(97)
				Float tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(97)
				Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(97)
				tmp26 = (tmp51 > (int)0);
			}
			else{
				HX_STACK_LINE(96)
				tmp26 = false;
			}
			HX_STACK_LINE(96)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(96)
			if ((tmp26)){
				HX_STACK_LINE(98)
				Float tmp28 = newAfter;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(98)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp29 = after->get_layout();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(98)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(98)
				::openfl::_legacy::geom::Rectangle tmp31 = tmp30->get_padding();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(98)
				::openfl::_legacy::geom::Rectangle tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(98)
				Float tmp33 = tmp32->get_top();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(98)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(98)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp35 = after->get_layout();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(98)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(98)
				::openfl::_legacy::geom::Rectangle tmp37 = tmp36->get_padding();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(98)
				::openfl::_legacy::geom::Rectangle tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(98)
				Float tmp39 = tmp38->get_bottom();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(98)
				Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(98)
				Float tmp41 = (tmp34 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(98)
				Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(98)
				Float tmp43 = (tmp28 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(98)
				Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(98)
				tmp27 = (tmp44 > (int)0);
			}
			else{
				HX_STACK_LINE(96)
				tmp27 = false;
			}
			HX_STACK_LINE(96)
			if ((tmp27)){
				HX_STACK_LINE(99)
				Float tmp28 = newBefore;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(99)
				before->set_height(tmp28);
				HX_STACK_LINE(100)
				Float tmp29 = newAfter;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(100)
				after->set_height(tmp29);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VSplitter_obj,_onMouseMove,(void))

Void VSplitter_obj::_onMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","_onMouseUp",0x769c28ad,"haxe.ui.toolkit.containers.VSplitter._onMouseUp","haxe/ui/toolkit/containers/VSplitter.hx",105,0x6bc3d37b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		Dynamic tmp2 = this->_onMouseMove_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		tmp->removeEventListener(tmp1,tmp2,null());
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::core::Screen tmp3 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		Dynamic tmp5 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		tmp3->removeEventListener(tmp4,tmp5,null());
		HX_STACK_LINE(108)
		this->_gripper = null();
		HX_STACK_LINE(110)
		Float tmp6 = this->get_height();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		Float ucy = tmp6;		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(111)
		int tmp7 = this->get_numChildren();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp10 = this->get_layout();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		int tmp11 = tmp10->get_spacingY();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(111)
		int tmp12 = ((int)2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(111)
		Float tmp13 = (tmp9 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(111)
		hx::SubEq(ucy,tmp13);
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(112)
				bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(112)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(112)
				if ((tmp15)){
					HX_STACK_LINE(112)
					break;
				}
				HX_STACK_LINE(112)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp16 = _g1->__get(_g);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(112)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp16;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(112)
				++(_g);
				HX_STACK_LINE(113)
				::haxe::ds::ObjectMap tmp17 = this->_percents;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(113)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp18 = c;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(113)
				bool tmp19 = tmp17->exists(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(113)
				bool tmp20 = (tmp19 == false);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(113)
				if ((tmp20)){
					HX_STACK_LINE(114)
					Float tmp21 = c->get_height();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(114)
					hx::SubEq(ucy,tmp21);
				}
			}
		}
		HX_STACK_LINE(119)
		this->_invalidating = true;
		HX_STACK_LINE(120)
		::haxe::ds::ObjectMap tmp14 = this->_percents;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(120)
		Dynamic tmp15 = tmp14->keys();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(120)
		for(::cpp::FastIterator_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > *__it = ::cpp::CreateFastIterator< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >(tmp15);  __it->hasNext(); ){
			::haxe::ui::toolkit::core::interfaces::IDisplayObject c = __it->next();
			{
				HX_STACK_LINE(121)
				Float tmp16 = c->get_height();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(121)
				Float tmp17 = ucy;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(121)
				Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(121)
				Float tmp19 = (tmp18 * (int)100);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(121)
				Float newPercent = tmp19;		HX_STACK_VAR(newPercent,"newPercent");
				HX_STACK_LINE(122)
				Float tmp20 = newPercent;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(122)
				c->set_percentHeight(tmp20);
			}
;
		}
		HX_STACK_LINE(124)
		this->_invalidating = false;
		HX_STACK_LINE(125)
		this->invalidate((int)1,null());
		HX_STACK_LINE(126)
		this->_percents = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VSplitter_obj,_onMouseUp,(void))

::haxe::ui::toolkit::core::DisplayObject VSplitter_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","clone",0x153cead2,"haxe.ui.toolkit.containers.VSplitter.clone","src/haxe/ui/toolkit/containers/VSplitter.hx",1,0xf9146610)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VSplitter c = ((::haxe::ui::toolkit::containers::VSplitter)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::VSplitter tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject VSplitter_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitter","self",0xb5b319b7,"haxe.ui.toolkit.containers.VSplitter.self","src/haxe/ui/toolkit/containers/VSplitter.hx",1,0xf9146610)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VSplitter tmp = ::haxe::ui::toolkit::containers::VSplitter_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



VSplitter_obj::VSplitter_obj()
{
}

void VSplitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VSplitter);
	HX_MARK_MEMBER_NAME(_gripper,"_gripper");
	HX_MARK_MEMBER_NAME(_percents,"_percents");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VSplitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_gripper,"_gripper");
	HX_VISIT_MEMBER_NAME(_percents,"_percents");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VSplitter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_gripper") ) { return _gripper; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_percents") ) { return _percents; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseMove") ) { return _onMouseMove_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return _mouseDownOffset; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VSplitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_gripper") ) { _gripper=inValue.Cast< ::haxe::ui::toolkit::containers::VSplitterGripper >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_percents") ) { _percents=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool VSplitter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void VSplitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_gripper","\xcc","\x66","\xfa","\x48"));
	outFields->push(HX_HCSTRING("_percents","\x6d","\xb9","\x10","\x8e"));
	outFields->push(HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::VSplitterGripper*/ ,(int)offsetof(VSplitter_obj,_gripper),HX_HCSTRING("_gripper","\xcc","\x66","\xfa","\x48")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(VSplitter_obj,_percents),HX_HCSTRING("_percents","\x6d","\xb9","\x10","\x8e")},
	{hx::fsFloat,(int)offsetof(VSplitter_obj,_mouseDownOffset),HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_gripper","\xcc","\x66","\xfa","\x48"),
	HX_HCSTRING("_percents","\x6d","\xb9","\x10","\x8e"),
	HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onMouseMove","\xb8","\x2c","\x02","\x7d"),
	HX_HCSTRING("_onMouseUp","\x42","\x28","\xc0","\xf3"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VSplitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VSplitter_obj::__mClass,"__mClass");
};

#endif

hx::Class VSplitter_obj::__mClass;

void VSplitter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.VSplitter","\x23","\x82","\x32","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &VSplitter_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VSplitter_obj >;
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
