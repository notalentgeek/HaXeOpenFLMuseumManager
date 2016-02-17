#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Box
#include <haxe/ui/toolkit/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_ToolTip
#include <haxe/ui/toolkit/controls/ToolTip.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipManager
#include <haxe/ui/toolkit/core/ToolTipManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsComponentDefaults
#include <haxe/ui/toolkit/core/ToolTipOptionsComponentDefaults.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsDefaults
#include <haxe/ui/toolkit/core/ToolTipOptionsDefaults.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void ToolTipManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipManager","new",0x73094d09,"haxe.ui.toolkit.core.ToolTipManager.new","haxe/ui/toolkit/core/ToolTipManager.hx",80,0xe81a6cc7)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/ToolTipManager.hx",93,0xe81a6cc7)
			{
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/ToolTipManager.hx",93,0xe81a6cc7)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca") , HX_HCSTRING("top","\x95","\x66","\x58","\x00"),false);
							__result->Add(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2") , HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"),false);
							__result->Add(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05") , true,false);
							__result->Add(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7") , ((Dynamic)((int)3)),false);
							__result->Add(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7") , ((Dynamic)((int)3)),false);
							__result->Add(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7") , (int)700,false);
							__result->Add(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9") , false,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(93)
				Dynamic tmp = _Function_2_1::Block();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(93)
				return tmp;
			}
			return null();
		}
	};
	HX_STACK_LINE(93)
	this->defaults = _Function_1_1::Block();
	HX_STACK_LINE(106)
	::haxe::ui::toolkit::core::Screen_obj::get_instance();
}
;
	return null();
}

//ToolTipManager_obj::~ToolTipManager_obj() { }

Dynamic ToolTipManager_obj::__CreateEmpty() { return  new ToolTipManager_obj; }
hx::ObjectPtr< ToolTipManager_obj > ToolTipManager_obj::__new()
{  hx::ObjectPtr< ToolTipManager_obj > _result_ = new ToolTipManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic ToolTipManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ToolTipManager_obj > _result_ = new ToolTipManager_obj();
	_result_->__construct();
	return _result_;}

Void ToolTipManager_obj::showToolTip( ::haxe::ui::toolkit::core::Component c,Dynamic options,::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipManager","showToolTip",0x26ffcf0f,"haxe.ui.toolkit.core.ToolTipManager.showToolTip","haxe/ui/toolkit/core/ToolTipManager.hx",109,0xe81a6cc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(options,"options")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(110)
		::haxe::ui::toolkit::controls::ToolTip tmp = this->_currentToolTip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		if ((tmp1)){
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::controls::ToolTip tmp3 = this->_currentToolTip;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::controls::ToolTip tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::core::Component tmp5 = tmp4->component;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::core::Component tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(110)
			tmp2 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(110)
			tmp2 = false;
		}
		HX_STACK_LINE(110)
		if ((tmp2)){
			HX_STACK_LINE(111)
			return null();
		}
		HX_STACK_LINE(114)
		bool tmp3 = (options == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		if ((tmp3)){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/ToolTipManager.hx",115,0xe81a6cc7)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(115)
			Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			options = tmp4;
		}
		HX_STACK_LINE(118)
		Dynamic tmp4 = options;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		::haxe::ui::toolkit::core::Component tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		::haxe::ui::toolkit::core::ToolTipOptionsComponentDefaults_obj::applyDefaultsFromComponent(tmp4,tmp5);
		HX_STACK_LINE(119)
		Dynamic tmp6 = options;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		::haxe::ui::toolkit::core::ToolTipOptionsDefaults_obj::applyDefaults(tmp6);
		HX_STACK_LINE(120)
		bool tmp7 = (event == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(120)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(120)
		if ((tmp8)){
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::core::Component tmp10 = event->get_component();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::core::Component tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::core::Component tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(120)
			tmp9 = (tmp11 != tmp12);
		}
		else{
			HX_STACK_LINE(120)
			tmp9 = true;
		}
		HX_STACK_LINE(120)
		if ((tmp9)){
			HX_STACK_LINE(121)
			options->__FieldRef(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2")) = HX_HCSTRING("target","\x51","\xf3","\xec","\x86");
			HX_STACK_LINE(122)
			options->__FieldRef(HX_HCSTRING("autoHide","\xd1","\x23","\x34","\x28")) = false;
		}
		HX_STACK_LINE(125)
		this->hideCurrentToolTip();
		HX_STACK_LINE(126)
		::haxe::ui::toolkit::controls::ToolTip tmp10 = ::haxe::ui::toolkit::controls::ToolTip_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		this->_currentToolTip = tmp10;
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::controls::ToolTip tmp11 = this->_currentToolTip;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(127)
		Dynamic tmp12 = c->get_toolTip();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(127)
		tmp11->set_text(tmp12);
		HX_STACK_LINE(128)
		::haxe::ui::toolkit::controls::ToolTip tmp13 = this->_currentToolTip;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(128)
		tmp13->component = c;
		HX_STACK_LINE(129)
		::haxe::ui::toolkit::controls::ToolTip tmp14 = this->_currentToolTip;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(129)
		tmp14->options = options;
		HX_STACK_LINE(130)
		::haxe::ui::toolkit::core::Root tmp15 = c->get_root();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(130)
		::haxe::ui::toolkit::controls::ToolTip tmp16 = this->_currentToolTip;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(130)
		tmp15->addChild(tmp16);
		HX_STACK_LINE(131)
		::haxe::ui::toolkit::controls::ToolTip tmp17 = this->_currentToolTip;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(131)
		tmp17->set_alpha((int)0);
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::controls::ToolTip tmp18 = this->_currentToolTip;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(133)
		Dynamic tmp19 = options;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(133)
		this->positionTooltip(tmp18,tmp19);
		HX_STACK_LINE(135)
		::haxe::ui::toolkit::controls::ToolTip tmp20 = this->_currentToolTip;		HX_STACK_VAR(tmp20,"tmp20");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/ToolTipManager.hx",135,0xe81a6cc7)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(135)
		Dynamic tmp21 = _Function_1_1::Block();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(135)
		::motion::Actuate_obj::tween(tmp20,((Float).3),tmp21,null(),null());
		HX_STACK_LINE(136)
		::haxe::ui::toolkit::core::Screen tmp22 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(136)
		::String tmp23 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(136)
		Dynamic tmp24 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(136)
		tmp22->addEventListener(tmp23,tmp24,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ToolTipManager_obj,showToolTip,(void))

Void ToolTipManager_obj::_onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipManager","_onScreenMouseMove",0x8a4302a3,"haxe.ui.toolkit.core.ToolTipManager._onScreenMouseMove","haxe/ui/toolkit/core/ToolTipManager.hx",139,0xe81a6cc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::controls::ToolTip tmp = this->_currentToolTip;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		if ((tmp1)){
			HX_STACK_LINE(141)
			::haxe::ui::toolkit::controls::ToolTip tmp2 = this->_currentToolTip;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			Dynamic tmp3 = tmp2->options->__Field(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			bool tmp4 = (tmp3 == true);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			if ((tmp4)){
				HX_STACK_LINE(142)
				::haxe::ui::toolkit::controls::ToolTip tmp5 = this->_currentToolTip;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(142)
				::haxe::ui::toolkit::controls::ToolTip tmp6 = this->_currentToolTip;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(142)
				Dynamic tmp7 = tmp6->options;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				this->positionTooltip(tmp5,tmp7);
			}
			HX_STACK_LINE(144)
			::haxe::ui::toolkit::controls::ToolTip tmp5 = this->_currentToolTip;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			Float tmp6 = event->stageX;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			Float tmp7 = event->stageY;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			bool tmp8 = tmp5->component->hitTest(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			bool tmp9 = (tmp8 == false);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			if ((tmp9)){
				HX_STACK_LINE(144)
				::haxe::ui::toolkit::controls::ToolTip tmp11 = this->_currentToolTip;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(144)
				::haxe::ui::toolkit::controls::ToolTip tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(144)
				Dynamic tmp13 = tmp12->options->__Field(HX_HCSTRING("autoHide","\xd1","\x23","\x34","\x28"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(144)
				Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(144)
				tmp10 = (tmp14 == true);
			}
			else{
				HX_STACK_LINE(144)
				tmp10 = false;
			}
			HX_STACK_LINE(144)
			if ((tmp10)){
				HX_STACK_LINE(145)
				this->hideCurrentToolTip();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,_onScreenMouseMove,(void))

Void ToolTipManager_obj::positionTooltip( ::haxe::ui::toolkit::controls::ToolTip tooltip,Dynamic options){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipManager","positionTooltip",0xe0d6e183,"haxe.ui.toolkit.core.ToolTipManager.positionTooltip","haxe/ui/toolkit/core/ToolTipManager.hx",150,0xe81a6cc7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tooltip,"tooltip")
		HX_STACK_ARG(options,"options")
		HX_STACK_LINE(151)
		::haxe::ui::toolkit::core::Component c = tooltip->component;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(152)
		Float tmp = c->get_stageX();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		::haxe::ui::toolkit::core::Root tmp1 = c->get_root();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		Float tmp2 = tmp1->get_stageX();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(152)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		Float xpos = tmp3;		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(153)
		Float tmp4 = c->get_stageY();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		::haxe::ui::toolkit::core::Root tmp5 = c->get_root();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		Float tmp6 = tmp5->get_stageY();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(153)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		Float ypos = tmp7;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(154)
		bool tmp8 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		if ((tmp8)){
			HX_STACK_LINE(155)
			::haxe::ui::toolkit::core::Screen tmp9 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(155)
			Float tmp10 = tmp9->get_cursorX();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(155)
			xpos = tmp10;
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::core::Screen tmp11 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(156)
			Float tmp12 = tmp11->get_cursorY();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(156)
			ypos = tmp12;
		}
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			::String _g = options->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(159)
			bool tmp9 = (_g != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(159)
			if ((tmp9)){
				HX_STACK_LINE(159)
				::String tmp10 = _g;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(159)
				::String _switch_1 = (tmp10);
				if (  ( _switch_1==HX_HCSTRING("top","\x95","\x66","\x58","\x00"))){
					HX_STACK_LINE(161)
					bool tmp11 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(161)
					if ((tmp11)){
						HX_STACK_LINE(162)
						hx::AddEq(xpos,options->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic ));
						HX_STACK_LINE(163)
						bool tmp12 = (options->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(163)
						if ((tmp12)){
							HX_STACK_LINE(164)
							::haxe::ui::toolkit::controls::ToolTip tmp13 = this->_currentToolTip;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(164)
							Float tmp14 = tmp13->get_width();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(164)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(164)
							hx::SubEq(xpos,tmp15);
						}
						HX_STACK_LINE(166)
						::haxe::ui::toolkit::controls::ToolTip tmp13 = this->_currentToolTip;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(166)
						Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(166)
						Dynamic tmp15 = options->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(166)
						Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(166)
						hx::SubEq(ypos,tmp16);
					}
					else{
						HX_STACK_LINE(167)
						bool tmp12 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(167)
						if ((tmp12)){
							HX_STACK_LINE(168)
							bool tmp13 = (options->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(168)
							if ((tmp13)){
								HX_STACK_LINE(169)
								Float tmp14 = xpos;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(169)
								Float tmp15 = c->get_width();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(169)
								Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(169)
								::haxe::ui::toolkit::controls::ToolTip tmp17 = this->_currentToolTip;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(169)
								Float tmp18 = tmp17->get_width();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(169)
								Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(169)
								Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(169)
								Float tmp21 = (tmp14 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(169)
								xpos = tmp21;
							}
							else{
								HX_STACK_LINE(171)
								hx::AddEq(xpos,options->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic ));
							}
							HX_STACK_LINE(173)
							::haxe::ui::toolkit::controls::ToolTip tmp14 = this->_currentToolTip;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(173)
							Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(173)
							Dynamic tmp16 = options->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(173)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(173)
							hx::SubEq(ypos,tmp17);
						}
					}
				}
				else if (  ( _switch_1==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
					HX_STACK_LINE(176)
					bool tmp11 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(176)
					if ((tmp11)){
						HX_STACK_LINE(177)
						hx::AddEq(xpos,options->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic ));
						HX_STACK_LINE(178)
						bool tmp12 = (options->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(178)
						if ((tmp12)){
							HX_STACK_LINE(179)
							::haxe::ui::toolkit::controls::ToolTip tmp13 = this->_currentToolTip;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							Float tmp14 = tmp13->get_width();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(179)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(179)
							hx::SubEq(xpos,tmp15);
						}
						HX_STACK_LINE(181)
						hx::AddEq(ypos,options->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic ));
					}
					else{
						HX_STACK_LINE(182)
						bool tmp12 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(182)
						if ((tmp12)){
							HX_STACK_LINE(183)
							bool tmp13 = (options->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(183)
							if ((tmp13)){
								HX_STACK_LINE(184)
								Float tmp14 = xpos;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(184)
								Float tmp15 = c->get_width();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(184)
								Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(184)
								::haxe::ui::toolkit::controls::ToolTip tmp17 = this->_currentToolTip;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(184)
								Float tmp18 = tmp17->get_width();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(184)
								Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(184)
								Float tmp20 = (tmp16 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								Float tmp21 = (tmp14 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(184)
								xpos = tmp21;
							}
							else{
								HX_STACK_LINE(186)
								hx::AddEq(xpos,options->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic ));
							}
							HX_STACK_LINE(188)
							::haxe::ui::toolkit::controls::ToolTip tmp14 = this->_currentToolTip;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(188)
							Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(188)
							Dynamic tmp16 = options->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(188)
							Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(188)
							hx::AddEq(ypos,tmp17);
						}
					}
				}
				else if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
					HX_STACK_LINE(191)
					bool tmp11 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(191)
					if ((tmp11)){
						HX_STACK_LINE(192)
						::haxe::ui::toolkit::controls::ToolTip tmp12 = this->_currentToolTip;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(192)
						Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(192)
						Dynamic tmp14 = options->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(192)
						Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(192)
						hx::SubEq(xpos,tmp15);
						HX_STACK_LINE(193)
						hx::AddEq(ypos,options->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic ));
						HX_STACK_LINE(194)
						bool tmp16 = (options->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(194)
						if ((tmp16)){
							HX_STACK_LINE(195)
							::haxe::ui::toolkit::controls::ToolTip tmp17 = this->_currentToolTip;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(195)
							Float tmp18 = tmp17->get_height();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(195)
							Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(195)
							hx::SubEq(ypos,tmp19);
						}
					}
					else{
						HX_STACK_LINE(197)
						bool tmp12 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(197)
						if ((tmp12)){
							HX_STACK_LINE(198)
							::haxe::ui::toolkit::controls::ToolTip tmp13 = this->_currentToolTip;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(198)
							Float tmp14 = tmp13->get_width();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(198)
							Dynamic tmp15 = options->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(198)
							Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(198)
							hx::SubEq(xpos,tmp16);
							HX_STACK_LINE(199)
							bool tmp17 = (options->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(199)
							if ((tmp17)){
								HX_STACK_LINE(200)
								Float tmp18 = ypos;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(200)
								Float tmp19 = c->get_height();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(200)
								Float tmp20 = (Float(tmp19) / Float((int)2));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(200)
								::haxe::ui::toolkit::controls::ToolTip tmp21 = this->_currentToolTip;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(200)
								Float tmp22 = tmp21->get_height();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(200)
								Float tmp23 = (Float(tmp22) / Float((int)2));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(200)
								Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(200)
								Float tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(200)
								ypos = tmp25;
							}
							else{
								HX_STACK_LINE(202)
								hx::AddEq(ypos,options->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic ));
							}
						}
					}
				}
				else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
					HX_STACK_LINE(206)
					bool tmp11 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(206)
					if ((tmp11)){
						HX_STACK_LINE(207)
						hx::AddEq(xpos,options->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic ));
						HX_STACK_LINE(208)
						hx::AddEq(ypos,options->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic ));
						HX_STACK_LINE(209)
						bool tmp12 = (options->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(209)
						if ((tmp12)){
							HX_STACK_LINE(210)
							::haxe::ui::toolkit::controls::ToolTip tmp13 = this->_currentToolTip;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(210)
							Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(210)
							Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(210)
							hx::SubEq(ypos,tmp15);
						}
					}
					else{
						HX_STACK_LINE(212)
						bool tmp12 = (options->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) == HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(212)
						if ((tmp12)){
							HX_STACK_LINE(213)
							Float tmp13 = c->get_width();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(213)
							Dynamic tmp14 = options->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(213)
							Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(213)
							hx::AddEq(xpos,tmp15);
							HX_STACK_LINE(214)
							bool tmp16 = (options->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) == true);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(214)
							if ((tmp16)){
								HX_STACK_LINE(215)
								Float tmp17 = ypos;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(215)
								Float tmp18 = c->get_height();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(215)
								Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(215)
								::haxe::ui::toolkit::controls::ToolTip tmp20 = this->_currentToolTip;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(215)
								Float tmp21 = tmp20->get_height();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(215)
								Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(215)
								Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(215)
								Float tmp24 = (tmp17 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(215)
								ypos = tmp24;
							}
							else{
								HX_STACK_LINE(217)
								hx::AddEq(ypos,options->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic ));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(222)
		Float tmp9 = xpos;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		tooltip->set_x(tmp9);
		HX_STACK_LINE(223)
		Float tmp10 = ypos;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		tooltip->set_y(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ToolTipManager_obj,positionTooltip,(void))

Void ToolTipManager_obj::hideCurrentToolTip( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipManager","hideCurrentToolTip",0x9aafdb83,"haxe.ui.toolkit.core.ToolTipManager.hideCurrentToolTip","haxe/ui/toolkit/core/ToolTipManager.hx",226,0xe81a6cc7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		Dynamic tmp2 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		tmp->removeEventListener(tmp1,tmp2,null());
		HX_STACK_LINE(228)
		::haxe::ui::toolkit::controls::ToolTip tmp3 = this->_currentToolTip;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(228)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(228)
		if ((tmp4)){
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::controls::ToolTip tmp5 = this->_currentToolTip;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::controls::ToolTip copy = tmp5;		HX_STACK_VAR(copy,"copy");
			HX_STACK_LINE(230)
			::haxe::ui::toolkit::controls::ToolTip tmp6 = this->_currentToolTip;		HX_STACK_VAR(tmp6,"tmp6");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/ToolTipManager.hx",230,0xe81a6cc7)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(230)
			Dynamic tmp7 = _Function_2_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(230)
			::motion::actuators::GenericActuator tmp8 = ::motion::Actuate_obj::tween(tmp6,((Float).3),tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::controls::ToolTip,copy)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/core/ToolTipManager.hx",230,0xe81a6cc7)
				{
					HX_STACK_LINE(231)
					::haxe::ui::toolkit::core::Root tmp9 = copy->get_root();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(231)
					::haxe::ui::toolkit::controls::ToolTip tmp10 = copy;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(231)
					tmp9->removeChild(tmp10,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(230)
			tmp8->onComplete( Dynamic(new _Function_2_2(copy)),null());
		}
		HX_STACK_LINE(234)
		::haxe::ui::toolkit::core::Screen tmp5 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(234)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(234)
		Dynamic tmp7 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(234)
		tmp5->removeEventListener(tmp6,tmp7,null());
		HX_STACK_LINE(235)
		this->_currentToolTip = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,hideCurrentToolTip,(void))

bool ToolTipManager_obj::toolTipVisible( ::haxe::ui::toolkit::core::Component c){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipManager","toolTipVisible",0xd8b44fc6,"haxe.ui.toolkit.core.ToolTipManager.toolTipVisible","haxe/ui/toolkit/core/ToolTipManager.hx",238,0xe81a6cc7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(239)
	::haxe::ui::toolkit::controls::ToolTip tmp = this->_currentToolTip;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(239)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(239)
	if ((tmp1)){
		HX_STACK_LINE(240)
		return false;
	}
	HX_STACK_LINE(242)
	::haxe::ui::toolkit::controls::ToolTip tmp2 = this->_currentToolTip;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	::haxe::ui::toolkit::core::Component tmp3 = tmp2->component;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	::haxe::ui::toolkit::core::Component tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(242)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(242)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ToolTipManager_obj,toolTipVisible,return )

::haxe::ui::toolkit::core::ToolTipManager ToolTipManager_obj::_instance;

::haxe::ui::toolkit::core::ToolTipManager ToolTipManager_obj::instance;

::haxe::ui::toolkit::core::ToolTipManager ToolTipManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipManager","get_instance",0x20def9d5,"haxe.ui.toolkit.core.ToolTipManager.get_instance","haxe/ui/toolkit/core/ToolTipManager.hx",83,0xe81a6cc7)
	HX_STACK_LINE(84)
	::haxe::ui::toolkit::core::ToolTipManager tmp = ::haxe::ui::toolkit::core::ToolTipManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	if ((tmp1)){
		HX_STACK_LINE(85)
		::haxe::ui::toolkit::core::ToolTipManager tmp2 = ::haxe::ui::toolkit::core::ToolTipManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::haxe::ui::toolkit::core::ToolTipManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(87)
	::haxe::ui::toolkit::core::ToolTipManager tmp2 = ::haxe::ui::toolkit::core::ToolTipManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ToolTipManager_obj,get_instance,return )


ToolTipManager_obj::ToolTipManager_obj()
{
}

void ToolTipManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ToolTipManager);
	HX_MARK_MEMBER_NAME(defaults,"defaults");
	HX_MARK_MEMBER_NAME(_currentToolTip,"_currentToolTip");
	HX_MARK_END_CLASS();
}

void ToolTipManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaults,"defaults");
	HX_VISIT_MEMBER_NAME(_currentToolTip,"_currentToolTip");
}

Dynamic ToolTipManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { return defaults; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showToolTip") ) { return showToolTip_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toolTipVisible") ) { return toolTipVisible_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_currentToolTip") ) { return _currentToolTip; }
		if (HX_FIELD_EQ(inName,"positionTooltip") ) { return positionTooltip_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"hideCurrentToolTip") ) { return hideCurrentToolTip_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ToolTipManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic ToolTipManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { defaults=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_currentToolTip") ) { _currentToolTip=inValue.Cast< ::haxe::ui::toolkit::controls::ToolTip >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ToolTipManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::core::ToolTipManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::core::ToolTipManager >(); return true; }
	}
	return false;
}

void ToolTipManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf"));
	outFields->push(HX_HCSTRING("_currentToolTip","\x49","\x22","\x69","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ToolTipManager_obj,defaults),HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::ToolTip*/ ,(int)offsetof(ToolTipManager_obj,_currentToolTip),HX_HCSTRING("_currentToolTip","\x49","\x22","\x69","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::ToolTipManager*/ ,(void *) &ToolTipManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::core::ToolTipManager*/ ,(void *) &ToolTipManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf"),
	HX_HCSTRING("_currentToolTip","\x49","\x22","\x69","\xc1"),
	HX_HCSTRING("showToolTip","\x66","\x01","\x10","\x47"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("positionTooltip","\x5a","\x8b","\xc4","\x69"),
	HX_HCSTRING("hideCurrentToolTip","\x0c","\xb2","\x0e","\xe7"),
	HX_HCSTRING("toolTipVisible","\xcf","\xed","\xd0","\x68"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ToolTipManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ToolTipManager_obj::instance,"instance");
};

#endif

hx::Class ToolTipManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void ToolTipManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.ToolTipManager","\x97","\x14","\x32","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolTipManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ToolTipManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ToolTipManager_obj >;
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
