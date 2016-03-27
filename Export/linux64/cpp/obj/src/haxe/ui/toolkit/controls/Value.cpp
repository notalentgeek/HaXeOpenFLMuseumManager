#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Value
#include <haxe/ui/toolkit/controls/Value.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Value_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","new",0x9c94480d,"haxe.ui.toolkit.controls.Value.new","haxe/ui/toolkit/controls/Value.hx",14,0xe74a4543)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->_interactive = true;
	HX_STACK_LINE(17)
	this->_value = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	this->addStates(Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")),null());
	HX_STACK_LINE(24)
	this->_autoSize = false;
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::layout::AbsoluteLayout tmp = ::haxe::ui::toolkit::layout::AbsoluteLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	this->_layout = tmp;
	HX_STACK_LINE(26)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(26)
	this->_values = tmp1;
	HX_STACK_LINE(27)
	this->_valuesList = Array_obj< ::String >::__new();
	HX_STACK_LINE(29)
	::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	Dynamic tmp3 = this->_onMouseClick_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	this->addEventListener(tmp2,tmp3,null(),null(),null());
}
;
	return null();
}

//Value_obj::~Value_obj() { }

Dynamic Value_obj::__CreateEmpty() { return  new Value_obj; }
hx::ObjectPtr< Value_obj > Value_obj::__new()
{  hx::ObjectPtr< Value_obj > _result_ = new Value_obj();
	_result_->__construct();
	return _result_;}

Dynamic Value_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Value_obj > _result_ = new Value_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Value_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Value_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Value_obj >(this); }
Void Value_obj::addValue( ::String value){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","addValue",0x4a833ac3,"haxe.ui.toolkit.controls.Value.addValue","haxe/ui/toolkit/controls/Value.hx",35,0xe74a4543)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(36)
		::haxe::ds::StringMap tmp = this->_values;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::controls::Button tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::controls::Button tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		if ((tmp4)){
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::controls::Button tmp5 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::controls::Button valueControl = tmp5;		HX_STACK_VAR(valueControl,"valueControl");
			HX_STACK_LINE(38)
			::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			valueControl->set_id(tmp6);
			HX_STACK_LINE(39)
			valueControl->set_percentWidth((int)100);
			HX_STACK_LINE(40)
			valueControl->set_percentHeight((int)100);
			HX_STACK_LINE(41)
			::haxe::ds::StringMap tmp7 = this->_values;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			::String tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(41)
			::haxe::ui::toolkit::controls::Button tmp9 = valueControl;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(41)
			tmp7->set(tmp8,tmp9);
			HX_STACK_LINE(42)
			::String tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			this->_valuesList->push(tmp10);
			HX_STACK_LINE(43)
			::String tmp11 = this->_value;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			::String tmp12 = value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(43)
			bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			valueControl->set_visible(tmp13);
			HX_STACK_LINE(44)
			::haxe::ui::toolkit::controls::Button tmp14 = valueControl;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(44)
			this->addChild(tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Value_obj,addValue,(void))

Void Value_obj::cycleValues( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","cycleValues",0xfb50a1d5,"haxe.ui.toolkit.controls.Value.cycleValues","haxe/ui/toolkit/controls/Value.hx",48,0xe74a4543)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::String tmp = this->_value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		int tmp1 = ::Lambda_obj::indexOf(this->_valuesList,tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		int currentIndex = tmp1;		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(50)
		(currentIndex)++;
		HX_STACK_LINE(51)
		int tmp2 = currentIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		int tmp3 = this->_valuesList->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		if ((tmp5)){
			HX_STACK_LINE(52)
			currentIndex = (int)0;
		}
		HX_STACK_LINE(54)
		::String tmp6 = this->_valuesList->__get(currentIndex);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		this->set_value(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Value_obj,cycleValues,(void))

Void Value_obj::_onMouseClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","_onMouseClick",0x074756ae,"haxe.ui.toolkit.controls.Value._onMouseClick","haxe/ui/toolkit/controls/Value.hx",60,0xe74a4543)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(61)
		bool tmp = this->_interactive;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(62)
			this->cycleValues();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Value_obj,_onMouseClick,(void))

Dynamic Value_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","get_value",0x55d6d335,"haxe.ui.toolkit.controls.Value.get_value","haxe/ui/toolkit/controls/Value.hx",72,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	::String tmp = this->_value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	return tmp;
}


Dynamic Value_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","set_value",0x3927bf41,"haxe.ui.toolkit.controls.Value.set_value","haxe/ui/toolkit/controls/Value.hx",76,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(77)
	Dynamic tmp = newValue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	::String tmp1 = this->_value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	if ((tmp2)){
		HX_STACK_LINE(78)
		::haxe::ui::toolkit::controls::Button tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::String key = newValue;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(78)
			::haxe::ds::StringMap tmp4 = this->_values;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(78)
			::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(78)
			tmp3 = tmp4->get(tmp5);
		}
		HX_STACK_LINE(78)
		::haxe::ui::toolkit::controls::Button valueControl = tmp3;		HX_STACK_VAR(valueControl,"valueControl");
		HX_STACK_LINE(79)
		bool tmp4 = (valueControl != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(79)
		if ((tmp4)){
			HX_STACK_LINE(80)
			::haxe::ds::StringMap tmp5 = this->_values;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			::String tmp6 = this->_value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::controls::Button tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::controls::Button currentControl = tmp7;		HX_STACK_VAR(currentControl,"currentControl");
			HX_STACK_LINE(81)
			bool tmp8 = (currentControl != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			if ((tmp8)){
				HX_STACK_LINE(82)
				currentControl->set_visible(false);
			}
			HX_STACK_LINE(84)
			this->_value = newValue;
			HX_STACK_LINE(85)
			valueControl->set_visible(true);
		}
		HX_STACK_LINE(88)
		::String tmp5 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::events::UIEvent tmp6 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp5,null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		this->dispatchEvent(tmp6);
	}
	HX_STACK_LINE(90)
	Dynamic tmp3 = newValue;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(90)
	return tmp3;
}


bool Value_obj::get_interactive( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","get_interactive",0x96e6bca6,"haxe.ui.toolkit.controls.Value.get_interactive","haxe/ui/toolkit/controls/Value.hx",93,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	bool tmp = this->_interactive;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Value_obj,get_interactive,return )

bool Value_obj::set_interactive( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","set_interactive",0x92b239b2,"haxe.ui.toolkit.controls.Value.set_interactive","haxe/ui/toolkit/controls/Value.hx",97,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	this->_interactive = value;
	HX_STACK_LINE(99)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Value_obj,set_interactive,return )

::haxe::ui::toolkit::core::DisplayObject Value_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","clone",0xcf72904a,"haxe.ui.toolkit.controls.Value.clone","haxe/ui/toolkit/core/Macros.hx",543,0x3fba9eca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::controls::Value c = ((::haxe::ui::toolkit::controls::Value)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		Array< ::String > _g1 = this->_valuesList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		while((true)){
			HX_STACK_LINE(106)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			if ((tmp2)){
				HX_STACK_LINE(106)
				break;
			}
			HX_STACK_LINE(106)
			::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			::String v = tmp3;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(106)
			++(_g);
			HX_STACK_LINE(107)
			::String tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			c->addValue(tmp4);
		}
	}
	HX_STACK_LINE(109)
	::haxe::ui::toolkit::controls::Value tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	return tmp1;
	HX_STACK_LINE(1)
	bool tmp2 = this->get_interactive();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1)
	c->set_interactive(tmp2);
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::controls::Value tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1)
	return tmp3;
}


::haxe::ui::toolkit::core::DisplayObject Value_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","self",0x6878cb3f,"haxe.ui.toolkit.controls.Value.self","src/haxe/ui/toolkit/controls/Value.hx",1,0x8f940a18)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::controls::Value tmp = ::haxe::ui::toolkit::controls::Value_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	return tmp;
}



Value_obj::Value_obj()
{
}

void Value_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Value);
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_valuesList,"_valuesList");
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_interactive,"_interactive");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Value_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_valuesList,"_valuesList");
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_interactive,"_interactive");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Value_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return _value; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addValue") ) { return addValue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_valuesList") ) { return _valuesList; }
		if (HX_FIELD_EQ(inName,"cycleValues") ) { return cycleValues_dyn(); }
		if (HX_FIELD_EQ(inName,"interactive") ) { if (inCallProp == hx::paccAlways) return get_interactive(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_interactive") ) { return _interactive; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactive") ) { return get_interactive_dyn(); }
		if (HX_FIELD_EQ(inName,"set_interactive") ) { return set_interactive_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Value_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_valuesList") ) { _valuesList=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interactive") ) { if (inCallProp == hx::paccAlways) return set_interactive(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_interactive") ) { _interactive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Value_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe"));
	outFields->push(HX_HCSTRING("_valuesList","\x7f","\xb2","\x99","\x50"));
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	outFields->push(HX_HCSTRING("_interactive","\xe3","\xeb","\x62","\xa2"));
	outFields->push(HX_HCSTRING("interactive","\xe2","\x3d","\x59","\x3c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Value_obj,_values),HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Value_obj,_valuesList),HX_HCSTRING("_valuesList","\x7f","\xb2","\x99","\x50")},
	{hx::fsString,(int)offsetof(Value_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{hx::fsBool,(int)offsetof(Value_obj,_interactive),HX_HCSTRING("_interactive","\xe3","\xeb","\x62","\xa2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_values","\x81","\x15","\x2e","\xbe"),
	HX_HCSTRING("_valuesList","\x7f","\xb2","\x99","\x50"),
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("_interactive","\xe3","\xeb","\x62","\xa2"),
	HX_HCSTRING("addValue","\x90","\xa5","\x15","\xab"),
	HX_HCSTRING("cycleValues","\x28","\x35","\x1d","\x5a"),
	HX_HCSTRING("_onMouseClick","\xc1","\xa4","\xdd","\x20"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("get_interactive","\x79","\xf5","\x3a","\xfd"),
	HX_HCSTRING("set_interactive","\x85","\x72","\x06","\xf9"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Value_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Value_obj::__mClass,"__mClass");
};

#endif

hx::Class Value_obj::__mClass;

void Value_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Value","\x9b","\x3d","\x5a","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Value_obj >;
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
