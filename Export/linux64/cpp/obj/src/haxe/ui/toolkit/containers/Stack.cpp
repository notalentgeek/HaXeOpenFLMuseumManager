#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Stack
#include <haxe/ui/toolkit/containers/Stack.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void Stack_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","new",0xb76a7480,"haxe.ui.toolkit.containers.Stack.new","haxe/ui/toolkit/containers/Stack.hx",11,0xfd2b75f0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->_history = ::List_obj::__new();
	HX_STACK_LINE(13)
	this->_selectedIndex = (int)0;
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->_clipContent = true;
}
;
	return null();
}

//Stack_obj::~Stack_obj() { }

Dynamic Stack_obj::__CreateEmpty() { return  new Stack_obj; }
hx::ObjectPtr< Stack_obj > Stack_obj::__new()
{  hx::ObjectPtr< Stack_obj > _result_ = new Stack_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stack_obj > _result_ = new Stack_obj();
	_result_->__construct();
	return _result_;}

::haxe::ui::toolkit::core::interfaces::IDisplayObject Stack_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","addChild",0xead9379b,"haxe.ui.toolkit.containers.Stack.addChild","haxe/ui/toolkit/containers/Stack.hx",31,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = this->super::addChild(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(33)
	int tmp2 = this->get_children()->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	int tmp4 = this->_selectedIndex;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	r->set_visible(tmp5);
	HX_STACK_LINE(34)
	::openfl::_legacy::display::Sprite tmp6 = r->get_sprite();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	tmp6->set_alpha((int)1);
	HX_STACK_LINE(35)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(35)
	return tmp7;
}


int Stack_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","get_selectedIndex",0x3e281e2e,"haxe.ui.toolkit.containers.Stack.get_selectedIndex","haxe/ui/toolkit/containers/Stack.hx",43,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	int tmp = this->_selectedIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,get_selectedIndex,return )

int Stack_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","set_selectedIndex",0x6195f63a,"haxe.ui.toolkit.containers.Stack.set_selectedIndex","haxe/ui/toolkit/containers/Stack.hx",47,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(48)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	int tmp1 = this->_selectedIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	if ((tmp2)){
		HX_STACK_LINE(49)
		::String tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Stack >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::String transition = tmp3;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(50)
		Float tmp4 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Stack >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Float transitionTime = tmp4;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(51)
			int tmp5 = this->get_children()->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			int _g = tmp5;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			while((true)){
				HX_STACK_LINE(51)
				bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				if ((tmp7)){
					HX_STACK_LINE(51)
					break;
				}
				HX_STACK_LINE(51)
				int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				int n = tmp8;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(52)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = this->get_children()->__get(n);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(52)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject item = tmp9;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(53)
				bool tmp10 = (n == value);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(53)
				if ((tmp10)){
					HX_STACK_LINE(54)
					bool tmp11 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					if ((tmp11)){
						HX_STACK_LINE(55)
						int tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(55)
						int tmp13 = this->_selectedIndex;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(55)
						bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(55)
						if ((tmp14)){
							HX_STACK_LINE(56)
							::openfl::_legacy::display::Sprite tmp15 = item->get_sprite();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(56)
							tmp15->set_alpha((int)1);
							HX_STACK_LINE(57)
							item->set_visible(true);
							HX_STACK_LINE(58)
							Float tmp16 = item->get_width();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(58)
							Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(58)
							item->set_x(tmp17);
							HX_STACK_LINE(59)
							::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp18 = item;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(59)
							Float tmp19 = transitionTime;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(59)
							::haxe::ui::toolkit::core::interfaces::ILayout tmp20 = this->get_layout();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(59)
							::openfl::_legacy::geom::Rectangle tmp21 = tmp20->get_padding();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(59)
							Float tmp22 = tmp21->get_left();		HX_STACK_VAR(tmp22,"tmp22");
							struct _Function_7_1{
								inline static Dynamic Block( Float &tmp22){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",59,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp22,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(59)
							Dynamic tmp23 = _Function_7_1::Block(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(59)
							::motion::actuators::GenericActuator tmp24 = ::motion::Actuate_obj::tween(tmp18,tmp19,tmp23,true,null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(59)
							::motion::easing::IEasing tmp25 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(59)
							::motion::actuators::GenericActuator tmp26 = tmp24->ease(tmp25);		HX_STACK_VAR(tmp26,"tmp26");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",59,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(59)
							tmp26->onComplete( Dynamic(new _Function_7_2()),null());
						}
						else{
							HX_STACK_LINE(62)
							::openfl::_legacy::display::Sprite tmp15 = item->get_sprite();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							tmp15->set_alpha((int)1);
							HX_STACK_LINE(63)
							item->set_visible(true);
							HX_STACK_LINE(64)
							Float tmp16 = this->get_width();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(64)
							item->set_x(tmp16);
							HX_STACK_LINE(65)
							::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp17 = item;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(65)
							Float tmp18 = transitionTime;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(65)
							::haxe::ui::toolkit::core::interfaces::ILayout tmp19 = this->get_layout();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(65)
							::openfl::_legacy::geom::Rectangle tmp20 = tmp19->get_padding();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(65)
							Float tmp21 = tmp20->get_left();		HX_STACK_VAR(tmp21,"tmp21");
							struct _Function_7_1{
								inline static Dynamic Block( Float &tmp21){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",65,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp21,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(65)
							Dynamic tmp22 = _Function_7_1::Block(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(65)
							::motion::actuators::GenericActuator tmp23 = ::motion::Actuate_obj::tween(tmp17,tmp18,tmp22,true,null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(65)
							::motion::easing::IEasing tmp24 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(65)
							::motion::actuators::GenericActuator tmp25 = tmp23->ease(tmp24);		HX_STACK_VAR(tmp25,"tmp25");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",65,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(65)
							tmp25->onComplete( Dynamic(new _Function_7_2()),null());
						}
					}
					else{
						HX_STACK_LINE(68)
						bool tmp12 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(68)
						if ((tmp12)){
							HX_STACK_LINE(69)
							::haxe::ui::toolkit::core::interfaces::ILayout tmp13 = this->get_layout();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(69)
							::openfl::_legacy::geom::Rectangle tmp14 = tmp13->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(69)
							Float tmp15 = tmp14->get_left();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(69)
							item->set_x(tmp15);
							HX_STACK_LINE(70)
							::openfl::_legacy::display::Sprite tmp16 = item->get_sprite();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(70)
							tmp16->set_alpha((int)0);
							HX_STACK_LINE(71)
							item->set_visible(true);
							HX_STACK_LINE(72)
							::openfl::_legacy::display::Sprite tmp17 = item->get_sprite();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(72)
							Float tmp18 = transitionTime;		HX_STACK_VAR(tmp18,"tmp18");
							struct _Function_7_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",72,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(72)
							Dynamic tmp19 = _Function_7_1::Block();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(72)
							::motion::actuators::GenericActuator tmp20 = ::motion::Actuate_obj::tween(tmp17,tmp18,tmp19,true,null());		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(72)
							::motion::easing::IEasing tmp21 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(72)
							::motion::actuators::GenericActuator tmp22 = tmp20->ease(tmp21);		HX_STACK_VAR(tmp22,"tmp22");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							int __ArgCount() const { return 0; }
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",72,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(72)
							tmp22->onComplete( Dynamic(new _Function_7_2()),null());
						}
						else{
							HX_STACK_LINE(75)
							::haxe::ui::toolkit::core::interfaces::ILayout tmp13 = this->get_layout();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(75)
							::openfl::_legacy::geom::Rectangle tmp14 = tmp13->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(75)
							Float tmp15 = tmp14->get_left();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(75)
							item->set_x(tmp15);
							HX_STACK_LINE(76)
							::openfl::_legacy::display::Sprite tmp16 = item->get_sprite();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(76)
							tmp16->set_alpha((int)1);
							HX_STACK_LINE(77)
							item->set_visible(true);
						}
					}
				}
				else{
					HX_STACK_LINE(80)
					int tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(80)
					int tmp12 = this->_selectedIndex;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(80)
					bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(80)
					if ((tmp13)){
						HX_STACK_LINE(81)
						bool tmp14 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(81)
						if ((tmp14)){
							HX_STACK_LINE(82)
							::openfl::_legacy::display::Sprite tmp15 = item->get_sprite();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(82)
							tmp15->set_alpha((int)1);
							HX_STACK_LINE(83)
							int tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(83)
							int tmp17 = this->_selectedIndex;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(83)
							bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(83)
							if ((tmp18)){
								HX_STACK_LINE(84)
								::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp19 = item;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(84)
								Float tmp20 = transitionTime;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(84)
								Float tmp21 = this->get_width();		HX_STACK_VAR(tmp21,"tmp21");
								struct _Function_8_1{
									inline static Dynamic Block( Float &tmp21){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",84,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp21,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(84)
								Dynamic tmp22 = _Function_8_1::Block(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(84)
								::motion::actuators::GenericActuator tmp23 = ::motion::Actuate_obj::tween(tmp19,tmp20,tmp22,true,null());		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(84)
								::motion::easing::IEasing tmp24 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(84)
								::motion::actuators::GenericActuator tmp25 = tmp23->ease(tmp24);		HX_STACK_VAR(tmp25,"tmp25");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,::haxe::ui::toolkit::core::interfaces::IDisplayObject,item)
								int __ArgCount() const { return 0; }
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",85,0xfd2b75f0)
									{
										HX_STACK_LINE(85)
										item->set_visible(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(84)
								tmp25->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
							else{
								HX_STACK_LINE(88)
								::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp19 = item;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(88)
								Float tmp20 = transitionTime;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(88)
								Float tmp21 = item->get_width();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(88)
								Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								struct _Function_8_1{
									inline static Dynamic Block( Float &tmp22){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",88,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , tmp22,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(88)
								Dynamic tmp23 = _Function_8_1::Block(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(88)
								::motion::actuators::GenericActuator tmp24 = ::motion::Actuate_obj::tween(tmp19,tmp20,tmp23,true,null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(88)
								::motion::easing::IEasing tmp25 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(88)
								::motion::actuators::GenericActuator tmp26 = tmp24->ease(tmp25);		HX_STACK_VAR(tmp26,"tmp26");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,::haxe::ui::toolkit::core::interfaces::IDisplayObject,item)
								int __ArgCount() const { return 0; }
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",89,0xfd2b75f0)
									{
										HX_STACK_LINE(89)
										item->set_visible(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(88)
								tmp26->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
						}
						else{
							HX_STACK_LINE(92)
							bool tmp15 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(92)
							if ((tmp15)){
								HX_STACK_LINE(93)
								::haxe::ui::toolkit::core::interfaces::ILayout tmp16 = this->get_layout();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(93)
								::openfl::_legacy::geom::Rectangle tmp17 = tmp16->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(93)
								Float tmp18 = tmp17->get_left();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(93)
								item->set_x(tmp18);
								HX_STACK_LINE(94)
								::openfl::_legacy::display::Sprite tmp19 = item->get_sprite();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(94)
								Float tmp20 = transitionTime;		HX_STACK_VAR(tmp20,"tmp20");
								struct _Function_8_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",94,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(94)
								Dynamic tmp21 = _Function_8_1::Block();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(94)
								::motion::actuators::GenericActuator tmp22 = ::motion::Actuate_obj::tween(tmp19,tmp20,tmp21,true,null());		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(94)
								::motion::easing::IEasing tmp23 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(94)
								::motion::actuators::GenericActuator tmp24 = tmp22->ease(tmp23);		HX_STACK_VAR(tmp24,"tmp24");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,::haxe::ui::toolkit::core::interfaces::IDisplayObject,item)
								int __ArgCount() const { return 0; }
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",95,0xfd2b75f0)
									{
										HX_STACK_LINE(95)
										item->set_visible(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(94)
								tmp24->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
							else{
								HX_STACK_LINE(98)
								::haxe::ui::toolkit::core::interfaces::ILayout tmp16 = this->get_layout();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(98)
								::openfl::_legacy::geom::Rectangle tmp17 = tmp16->get_padding();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(98)
								Float tmp18 = tmp17->get_left();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(98)
								item->set_x(tmp18);
								HX_STACK_LINE(99)
								::openfl::_legacy::display::Sprite tmp19 = item->get_sprite();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(99)
								tmp19->set_alpha((int)1);
								HX_STACK_LINE(100)
								item->set_visible(false);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(106)
		::List tmp5 = this->_history;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(106)
		int tmp6 = this->_selectedIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(106)
		tmp5->push(tmp6);
		HX_STACK_LINE(107)
		this->_selectedIndex = value;
		HX_STACK_LINE(109)
		::String tmp7 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		::openfl::_legacy::events::Event tmp8 = ::openfl::_legacy::events::Event_obj::__new(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		::openfl::_legacy::events::Event event = tmp8;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(110)
		::openfl::_legacy::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(110)
		this->dispatchEvent(tmp9);
	}
	HX_STACK_LINE(112)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Stack_obj,set_selectedIndex,return )

Void Stack_obj::back( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","back",0xbdc9d207,"haxe.ui.toolkit.containers.Stack.back","haxe/ui/toolkit/containers/Stack.hx",116,0xfd2b75f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::List tmp = this->_history;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		Dynamic tmp1 = tmp->pop();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		Dynamic last = tmp1;		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(118)
		bool tmp2 = (last == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		if ((tmp2)){
			HX_STACK_LINE(119)
			return null();
		}
		HX_STACK_LINE(121)
		Dynamic tmp3 = last;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		this->set_selectedIndex(tmp3);
		HX_STACK_LINE(123)
		::List tmp4 = this->_history;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		tmp4->pop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,back,(void))

::haxe::ui::toolkit::core::DisplayObject Stack_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","clone",0xed82ff7d,"haxe.ui.toolkit.containers.Stack.clone","src/haxe/ui/toolkit/containers/Stack.hx",1,0x9f0fda05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::Stack c = ((::haxe::ui::toolkit::containers::Stack)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::Stack tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Stack_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","self",0xc909836c,"haxe.ui.toolkit.containers.Stack.self","src/haxe/ui/toolkit/containers/Stack.hx",1,0x9f0fda05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::Stack tmp = ::haxe::ui::toolkit::containers::Stack_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Stack_obj::Stack_obj()
{
}

void Stack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stack);
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(_history,"_history");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(_history,"_history");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_history") ) { return _history; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return get_selectedIndex(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stack_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_history") ) { _history=inValue.Cast< ::List >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stack_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Stack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"));
	outFields->push(HX_HCSTRING("_history","\xd5","\x8e","\xff","\x9d"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stack_obj,_selectedIndex),HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Stack_obj,_history),HX_HCSTRING("_history","\xd5","\x8e","\xff","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"),
	HX_HCSTRING("_history","\xd5","\x8e","\xff","\x9d"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("back","\x27","\xda","\x10","\x41"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#endif

hx::Class Stack_obj::__mClass;

void Stack_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.Stack","\x8e","\x74","\x7e","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Stack_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stack_obj >;
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
