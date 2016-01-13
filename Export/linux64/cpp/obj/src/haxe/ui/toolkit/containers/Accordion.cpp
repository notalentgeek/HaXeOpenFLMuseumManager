#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Accordion
#include <haxe/ui/toolkit/containers/Accordion.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_AccordionButton
#include <haxe/ui/toolkit/containers/AccordionButton.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void Accordion_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","new",0x97feb2c0,"haxe.ui.toolkit.containers.Accordion.new","haxe/ui/toolkit/containers/Accordion.hx",18,0x8ce13fb0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->_selectedIndex = (int)-1;
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->_autoSize = false;
	HX_STACK_LINE(26)
	this->_panels = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();
	HX_STACK_LINE(27)
	this->_buttons = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Accordion_obj::~Accordion_obj() { }

Dynamic Accordion_obj::__CreateEmpty() { return  new Accordion_obj; }
hx::ObjectPtr< Accordion_obj > Accordion_obj::__new()
{  hx::ObjectPtr< Accordion_obj > _result_ = new Accordion_obj();
	_result_->__construct();
	return _result_;}

Dynamic Accordion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Accordion_obj > _result_ = new Accordion_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Accordion_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Accordion_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Accordion_obj >(this); }
Void Accordion_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","initialize",0xf9fb5af0,"haxe.ui.toolkit.containers.Accordion.initialize","haxe/ui/toolkit/containers/Accordion.hx",33,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->super::initialize();
		HX_STACK_LINE(36)
		int tmp = this->_selectedIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		bool tmp1 = (tmp != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		if ((tmp1)){
			HX_STACK_LINE(37)
			int tmp2 = this->_selectedIndex;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(37)
			int cachedIndex = tmp2;		HX_STACK_VAR(cachedIndex,"cachedIndex");
			HX_STACK_LINE(38)
			this->_selectedIndex = (int)-1;
			HX_STACK_LINE(39)
			int tmp3 = cachedIndex;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			this->showPage(tmp3);
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject Accordion_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","addChild",0x28fb515b,"haxe.ui.toolkit.containers.Accordion.addChild","haxe/ui/toolkit/containers/Accordion.hx",46,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(47)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(48)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::containers::AccordionButton >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	if ((tmp1)){
		HX_STACK_LINE(49)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = this->super::addChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		r = tmp3;
	}
	else{
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			tmp4 = hx::TCast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
			HX_STACK_LINE(52)
			tmp4->set_autoSize(false);
		}
		HX_STACK_LINE(54)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		if ((tmp5)){
			HX_STACK_LINE(55)
			::haxe::ui::toolkit::core::StyleableDisplayObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			tmp6 = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(child);
			HX_STACK_LINE(55)
			tmp6->set_styleName(HX_HCSTRING("page","\x4f","\xda","\x51","\x4a"));
		}
		HX_STACK_LINE(57)
		child->set_percentHeight((int)100);
		HX_STACK_LINE(58)
		child->set_percentWidth((int)100);
		HX_STACK_LINE(59)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		this->_panels->push(tmp6);
		HX_STACK_LINE(61)
		::haxe::ui::toolkit::containers::AccordionButton tmp7 = ::haxe::ui::toolkit::containers::AccordionButton_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		::haxe::ui::toolkit::containers::AccordionButton button = tmp7;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(62)
		button->set_styleName(HX_HCSTRING("expandable","\xf4","\x90","\xfa","\x55"));
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
			button->set_text(tmp11);
		}
		HX_STACK_LINE(66)
		int tmp10 = this->_panels->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(66)
		int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(66)
		button->userData = tmp11;
		HX_STACK_LINE(67)
		int tmp12 = this->_panels->length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(67)
		int tmp13 = (tmp12 - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(67)
		::String tmp14 = (HX_HCSTRING("accordionButton_","\x85","\xf0","\xd7","\xbc") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(67)
		button->set_id(tmp14);
		HX_STACK_LINE(68)
		button->set_percentWidth((int)100);
		HX_STACK_LINE(69)
		button->set_toggle(true);
		HX_STACK_LINE(70)
		button->set_selected(false);
		HX_STACK_LINE(71)
		button->set_allowSelection(false);
		HX_STACK_LINE(72)
		::String tmp15 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(72)
		Dynamic tmp16 = this->_onButtonClick_dyn();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(72)
		button->addEventListener(tmp15,tmp16,null(),null(),null());
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::containers::AccordionButton tmp17 = button;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(73)
		this->_buttons->push(tmp17);
		HX_STACK_LINE(75)
		::haxe::ui::toolkit::containers::AccordionButton tmp18 = button;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(75)
		this->addChild(tmp18);
		HX_STACK_LINE(76)
		child->set_visible(false);
		HX_STACK_LINE(77)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp19 = child;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(77)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp20 = this->super::addChild(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(77)
		r = tmp20;
	}
	HX_STACK_LINE(79)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = r;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(79)
	return tmp2;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject Accordion_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","removeChild",0xced1c918,"haxe.ui.toolkit.containers.Accordion.removeChild","haxe/ui/toolkit/containers/Accordion.hx",82,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(83)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::haxe::ui::toolkit::containers::AccordionButton >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		if ((tmp1)){
			HX_STACK_LINE(84)
			::haxe::ui::toolkit::containers::AccordionButton tmp2 = ((::haxe::ui::toolkit::containers::AccordionButton)(child));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			this->_buttons->remove(tmp2);
		}
		else{
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			this->_panels->remove(tmp2);
		}
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		bool tmp3 = dispose;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = this->super::removeChild(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		return tmp4;
	}
}


int Accordion_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","get_selectedIndex",0xa954cc6e,"haxe.ui.toolkit.containers.Accordion.get_selectedIndex","haxe/ui/toolkit/containers/Accordion.hx",96,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	int tmp = this->_selectedIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Accordion_obj,get_selectedIndex,return )

int Accordion_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","set_selectedIndex",0xccc2a47a,"haxe.ui.toolkit.containers.Accordion.set_selectedIndex","haxe/ui/toolkit/containers/Accordion.hx",100,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(101)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	if ((tmp1)){
		HX_STACK_LINE(102)
		::haxe::ui::toolkit::containers::AccordionButton tmp2 = this->_buttons->__get(value).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		tmp2->set_selected(true);
	}
	else{
		HX_STACK_LINE(104)
		this->_selectedIndex = value;
	}
	HX_STACK_LINE(106)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,set_selectedIndex,return )

::haxe::ui::toolkit::controls::Button Accordion_obj::get_selectedButton( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","get_selectedButton",0xc6cb6116,"haxe.ui.toolkit.containers.Accordion.get_selectedButton","haxe/ui/toolkit/containers/Accordion.hx",113,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(115)
	int tmp = this->_selectedIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	bool tmp1 = (tmp == (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	if ((tmp1)){
		HX_STACK_LINE(116)
		return null();
	}
	HX_STACK_LINE(119)
	int tmp2 = this->_selectedIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	::haxe::ui::toolkit::controls::Button tmp3 = this->getButton(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(119)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Accordion_obj,get_selectedButton,return )

::haxe::ui::toolkit::controls::Button Accordion_obj::getButton( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","getButton",0x9443d588,"haxe.ui.toolkit.containers.Accordion.getButton","haxe/ui/toolkit/containers/Accordion.hx",122,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(123)
	::haxe::ui::toolkit::containers::AccordionButton tmp = this->_buttons->__get(index).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,getButton,return )

Void Accordion_obj::showPage( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","showPage",0x1bbd1f8c,"haxe.ui.toolkit.containers.Accordion.showPage","haxe/ui/toolkit/containers/Accordion.hx",126,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::containers::AccordionButton tmp = this->_buttons->__get(index).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::containers::AccordionButton button = tmp;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(128)
		button->set_selected(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,showPage,(void))

Void Accordion_obj::_onButtonClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","_onButtonClick",0x726ac3f8,"haxe.ui.toolkit.containers.Accordion._onButtonClick","haxe/ui/toolkit/containers/Accordion.hx",131,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(132)
		::haxe::ui::toolkit::core::Component tmp = event->get_component();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		int index = tmp->userData;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(133)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		this->showPanel(tmp1);
		HX_STACK_LINE(134)
		::String tmp2 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		::haxe::ui::toolkit::events::UIEvent tmp3 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp2,null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		this->dispatchEvent(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,_onButtonClick,(void))

Void Accordion_obj::showPanel( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","showPanel",0x29c3cb27,"haxe.ui.toolkit.containers.Accordion.showPanel","haxe/ui/toolkit/containers/Accordion.hx",137,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(138)
		::haxe::ui::toolkit::containers::AccordionButton tmp = this->_buttons->__get(index).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		::haxe::ui::toolkit::containers::AccordionButton button = tmp;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(139)
		button->set_selected(true);
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = this->_panels->__get(index);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::core::Component panel = ((::haxe::ui::toolkit::core::Component)(tmp1));		HX_STACK_VAR(panel,"panel");
		HX_STACK_LINE(142)
		::haxe::ui::toolkit::containers::AccordionButton buttonOld = null();		HX_STACK_VAR(buttonOld,"buttonOld");
		HX_STACK_LINE(143)
		::haxe::ui::toolkit::core::Component panelOld = null();		HX_STACK_VAR(panelOld,"panelOld");
		HX_STACK_LINE(144)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp2 = this->get_layout();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(144)
		Float tmp3 = tmp2->get_usableHeight();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(144)
		Float ucy = tmp3;		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(145)
		int tmp4 = this->_selectedIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		bool tmp5 = (tmp4 > (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		if ((tmp5)){
			HX_STACK_LINE(146)
			int tmp6 = this->_selectedIndex;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			::haxe::ui::toolkit::containers::AccordionButton tmp7 = this->_buttons->__get(tmp6).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			buttonOld = tmp7;
			HX_STACK_LINE(147)
			int tmp8 = this->_selectedIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = this->_panels->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			panelOld = ((::haxe::ui::toolkit::core::Component)(tmp9));
			HX_STACK_LINE(148)
			bool tmp10 = (button != buttonOld);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(148)
			if ((tmp10)){
				HX_STACK_LINE(149)
				::haxe::ui::toolkit::containers::AccordionButton tmp11 = buttonOld;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(149)
				this->unselectButton(tmp11);
			}
		}
		HX_STACK_LINE(152)
		::String tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(152)
		::String transition = tmp6;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(153)
		Float tmp7 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(153)
		Float transitionTime = tmp7;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(154)
		bool tmp8 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		if ((tmp8)){
			HX_STACK_LINE(155)
			panel->set_percentHeight((int)-1);
			HX_STACK_LINE(156)
			panel->set_height((int)0);
			HX_STACK_LINE(157)
			panel->set_visible(true);
			HX_STACK_LINE(158)
			::haxe::ui::toolkit::core::Component tmp9 = panel;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(158)
			Float tmp10 = transitionTime;		HX_STACK_VAR(tmp10,"tmp10");
			struct _Function_2_1{
				inline static Dynamic Block( Float &ucy){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Accordion.hx",158,0x8ce13fb0)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , ucy,false);
						__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , ucy,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(158)
			Dynamic tmp11 = _Function_2_1::Block(ucy);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(158)
			::motion::actuators::GenericActuator tmp12 = ::motion::Actuate_obj::tween(tmp9,tmp10,tmp11,true,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(158)
			::motion::easing::IEasing tmp13 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(158)
			::motion::actuators::GenericActuator tmp14 = tmp12->ease(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(159)
			Dynamic tmp15 = this->_onTweenUpdate_dyn();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(158)
			::motion::actuators::GenericActuator tmp16 = tmp14->onUpdate(tmp15,cpp::ArrayBase_obj::__new().Add(ucy).Add(panel).Add(panelOld));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(160)
			Dynamic tmp17 = this->_onTweenComplete_dyn();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(158)
			tmp16->onComplete(tmp17,cpp::ArrayBase_obj::__new().Add(panel).Add(panelOld).Add(buttonOld));
		}
		else{
			HX_STACK_LINE(161)
			bool tmp9 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(161)
			if ((tmp9)){
				HX_STACK_LINE(162)
				::openfl::_legacy::display::Sprite tmp10 = panel->get_sprite();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(162)
				tmp10->set_alpha((int)0);
				HX_STACK_LINE(163)
				panel->set_visible(true);
				HX_STACK_LINE(164)
				bool tmp11 = (panelOld != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(164)
				if ((tmp11)){
					HX_STACK_LINE(165)
					::haxe::ui::toolkit::containers::AccordionButton tmp12 = buttonOld;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(165)
					this->unselectButton(tmp12);
					HX_STACK_LINE(166)
					panelOld->set_visible(false);
				}
				HX_STACK_LINE(168)
				::openfl::_legacy::display::Sprite tmp12 = panel->get_sprite();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(168)
				Float tmp13 = transitionTime;		HX_STACK_VAR(tmp13,"tmp13");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Accordion.hx",168,0x8ce13fb0)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(168)
				Dynamic tmp14 = _Function_3_1::Block();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(168)
				::motion::actuators::GenericActuator tmp15 = ::motion::Actuate_obj::tween(tmp12,tmp13,tmp14,true,null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(168)
				::motion::easing::IEasing tmp16 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(168)
				tmp15->ease(tmp16);
			}
			else{
				HX_STACK_LINE(170)
				panel->set_visible(true);
				HX_STACK_LINE(171)
				bool tmp10 = (panelOld != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(171)
				if ((tmp10)){
					HX_STACK_LINE(172)
					::haxe::ui::toolkit::containers::AccordionButton tmp11 = buttonOld;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(172)
					this->unselectButton(tmp11);
					HX_STACK_LINE(173)
					panelOld->set_visible(false);
				}
			}
		}
		HX_STACK_LINE(177)
		bool tmp9 = (panelOld == panel);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(177)
		if ((tmp9)){
			HX_STACK_LINE(178)
			this->_selectedIndex = (int)-1;
		}
		else{
			HX_STACK_LINE(180)
			this->_selectedIndex = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,showPanel,(void))

Void Accordion_obj::unselectButton( ::haxe::ui::toolkit::controls::Button button){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","unselectButton",0xeb2ad787,"haxe.ui.toolkit.containers.Accordion.unselectButton","haxe/ui/toolkit/containers/Accordion.hx",187,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(187)
		button->set_selected(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,unselectButton,(void))

Void Accordion_obj::_onTweenUpdate( Float ucy,::haxe::ui::toolkit::core::Component panel,::haxe::ui::toolkit::core::Component panelOld){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","_onTweenUpdate",0x07c04dd6,"haxe.ui.toolkit.containers.Accordion._onTweenUpdate","haxe/ui/toolkit/containers/Accordion.hx",191,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ucy,"ucy")
		HX_STACK_ARG(panel,"panel")
		HX_STACK_ARG(panelOld,"panelOld")
		HX_STACK_LINE(192)
		bool tmp = (panelOld != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		if ((tmp)){
			HX_STACK_LINE(193)
			Float tmp1 = ucy;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			Float tmp2 = panel->get_height();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			panelOld->set_height(tmp3);
			HX_STACK_LINE(194)
			Float tmp4 = panelOld->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			panelOld->set_clipHeight(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Accordion_obj,_onTweenUpdate,(void))

Void Accordion_obj::_onTweenComplete( ::haxe::ui::toolkit::core::Component panel,::haxe::ui::toolkit::core::Component panelOld,::haxe::ui::toolkit::controls::Button buttonOld){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","_onTweenComplete",0xba9e15c6,"haxe.ui.toolkit.containers.Accordion._onTweenComplete","haxe/ui/toolkit/containers/Accordion.hx",198,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(panel,"panel")
		HX_STACK_ARG(panelOld,"panelOld")
		HX_STACK_ARG(buttonOld,"buttonOld")
		HX_STACK_LINE(199)
		panel->clearClip();
		HX_STACK_LINE(200)
		panel->set_percentHeight((int)100);
		HX_STACK_LINE(201)
		bool tmp = (panelOld != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		if ((tmp)){
			HX_STACK_LINE(202)
			panelOld->set_visible(false);
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::controls::Button tmp1 = buttonOld;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(203)
			this->unselectButton(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Accordion_obj,_onTweenComplete,(void))

::haxe::ui::toolkit::core::DisplayObject Accordion_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","clone",0x4a534dbd,"haxe.ui.toolkit.containers.Accordion.clone","haxe/ui/toolkit/core/Macros.hx",543,0x3fba9eca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::Accordion c = ((::haxe::ui::toolkit::containers::Accordion)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(211)
	c->removeAllChildren(null());
	HX_STACK_LINE(212)
	{
		HX_STACK_LINE(212)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(212)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(212)
		while((true)){
			HX_STACK_LINE(212)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(212)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(212)
			if ((tmp2)){
				HX_STACK_LINE(212)
				break;
			}
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(212)
			++(_g);
			HX_STACK_LINE(213)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(213)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::haxe::ui::toolkit::containers::AccordionButton >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(213)
			bool tmp6 = (tmp5 == false);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(213)
			if ((tmp6)){
				HX_STACK_LINE(214)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = child->clone();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(214)
				c->addChild(tmp7);
			}
		}
	}
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::Accordion tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Accordion_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","self",0x6a2bbd2c,"haxe.ui.toolkit.containers.Accordion.self","src/haxe/ui/toolkit/containers/Accordion.hx",1,0x1a31d245)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::Accordion tmp = ::haxe::ui::toolkit::containers::Accordion_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	return tmp;
}



Accordion_obj::Accordion_obj()
{
}

void Accordion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accordion);
	HX_MARK_MEMBER_NAME(_panels,"_panels");
	HX_MARK_MEMBER_NAME(_buttons,"_buttons");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(selectedButton,"selectedButton");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accordion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_panels,"_panels");
	HX_VISIT_MEMBER_NAME(_buttons,"_buttons");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(selectedButton,"selectedButton");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Accordion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_panels") ) { return _panels; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buttons") ) { return _buttons; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"showPage") ) { return showPage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getButton") ) { return getButton_dyn(); }
		if (HX_FIELD_EQ(inName,"showPanel") ) { return showPanel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return get_selectedIndex(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		if (HX_FIELD_EQ(inName,"selectedButton") ) { return inCallProp == hx::paccAlways ? get_selectedButton() : selectedButton; }
		if (HX_FIELD_EQ(inName,"_onButtonClick") ) { return _onButtonClick_dyn(); }
		if (HX_FIELD_EQ(inName,"unselectButton") ) { return unselectButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTweenUpdate") ) { return _onTweenUpdate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onTweenComplete") ) { return _onTweenComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_selectedButton") ) { return get_selectedButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Accordion_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_panels") ) { _panels=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buttons") ) { _buttons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedButton") ) { selectedButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Accordion_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Accordion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_panels","\x8e","\x3a","\x50","\x59"));
	outFields->push(HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04"));
	outFields->push(HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >*/ ,(int)offsetof(Accordion_obj,_panels),HX_HCSTRING("_panels","\x8e","\x3a","\x50","\x59")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Accordion_obj,_buttons),HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04")},
	{hx::fsInt,(int)offsetof(Accordion_obj,_selectedIndex),HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(Accordion_obj,selectedButton),HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_panels","\x8e","\x3a","\x50","\x59"),
	HX_HCSTRING("_buttons","\xc2","\xab","\x2d","\x04"),
	HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("selectedButton","\xad","\xb6","\x3e","\x5d"),
	HX_HCSTRING("get_selectedButton","\x76","\x97","\xd8","\xf8"),
	HX_HCSTRING("getButton","\x28","\xeb","\x36","\x56"),
	HX_HCSTRING("showPage","\xec","\x9d","\xd8","\xb1"),
	HX_HCSTRING("_onButtonClick","\x58","\x4a","\x45","\x37"),
	HX_HCSTRING("showPanel","\xc7","\xe0","\xb6","\xeb"),
	HX_HCSTRING("unselectButton","\xe7","\x5d","\x05","\xb0"),
	HX_HCSTRING("_onTweenUpdate","\x36","\xd4","\x9a","\xcc"),
	HX_HCSTRING("_onTweenComplete","\x26","\xf4","\xee","\x4f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accordion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accordion_obj::__mClass,"__mClass");
};

#endif

hx::Class Accordion_obj::__mClass;

void Accordion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.Accordion","\xce","\x92","\x06","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Accordion_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Accordion_obj >;
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
