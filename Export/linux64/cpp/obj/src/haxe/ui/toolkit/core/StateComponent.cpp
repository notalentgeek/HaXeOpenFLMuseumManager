#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void StateComponent_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","new",0x8b57ceab,"haxe.ui.toolkit.core.StateComponent.new","haxe/ui/toolkit/core/StateComponent.hx",13,0xb5b37565)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->_states = Array_obj< ::String >::__new();
}
;
	return null();
}

//StateComponent_obj::~StateComponent_obj() { }

Dynamic StateComponent_obj::__CreateEmpty() { return  new StateComponent_obj; }
hx::ObjectPtr< StateComponent_obj > StateComponent_obj::__new()
{  hx::ObjectPtr< StateComponent_obj > _result_ = new StateComponent_obj();
	_result_->__construct();
	return _result_;}

Dynamic StateComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StateComponent_obj > _result_ = new StateComponent_obj();
	_result_->__construct();
	return _result_;}

hx::Object *StateComponent_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

StateComponent_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< StateComponent_obj >(this); }
StateComponent_obj::operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< StateComponent_obj >(this); }
StateComponent_obj::operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IComponent_delegate_< StateComponent_obj >(this); }
StateComponent_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< StateComponent_obj >(this); }
StateComponent_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< StateComponent_obj >(this); }
StateComponent_obj::operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStateComponent_delegate_< StateComponent_obj >(this); }
StateComponent_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< StateComponent_obj >(this); }
Void StateComponent_obj::buildStyles( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","buildStyles",0x7f2f8d3b,"haxe.ui.toolkit.core.StateComponent.buildStyles","haxe/ui/toolkit/core/StateComponent.hx",22,0xb5b37565)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		Array< ::String > _g1 = this->get_states();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		while((true)){
			HX_STACK_LINE(22)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(22)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(22)
			if ((tmp1)){
				HX_STACK_LINE(22)
				break;
			}
			HX_STACK_LINE(22)
			::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(22)
			::String s = tmp2;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(22)
			++(_g);
			HX_STACK_LINE(23)
			::haxe::ui::toolkit::style::StyleManager tmp3 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(23)
			::String tmp4 = s;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			::haxe::ui::toolkit::style::Style tmp5 = tmp3->buildStyleFor(hx::ObjectPtr<OBJ_>(this),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(23)
			::haxe::ui::toolkit::style::Style stateStyle = tmp5;		HX_STACK_VAR(stateStyle,"stateStyle");
			HX_STACK_LINE(24)
			bool tmp6 = (stateStyle != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			if ((tmp6)){
				HX_STACK_LINE(26)
				::String tmp7 = s;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(26)
				::haxe::ui::toolkit::style::Style tmp8 = stateStyle;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(26)
				this->storeStyle(tmp7,tmp8);
			}
		}
	}
return null();
}


Void StateComponent_obj::addStates( Array< ::String > stateNames,hx::Null< bool >  __o_rebuildStyles){
bool rebuildStyles = __o_rebuildStyles.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","addStates",0x680056ce,"haxe.ui.toolkit.core.StateComponent.addStates","haxe/ui/toolkit/core/StateComponent.hx",31,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stateNames,"stateNames")
	HX_STACK_ARG(rebuildStyles,"rebuildStyles")
{
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			while((true)){
				HX_STACK_LINE(32)
				bool tmp = (_g < stateNames->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(32)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(32)
				if ((tmp1)){
					HX_STACK_LINE(32)
					break;
				}
				HX_STACK_LINE(32)
				::String tmp2 = stateNames->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(32)
				::String stateName = tmp2;		HX_STACK_VAR(stateName,"stateName");
				HX_STACK_LINE(32)
				++(_g);
				HX_STACK_LINE(33)
				::String tmp3 = stateName;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(33)
				this->addState(tmp3,false);
			}
		}
		HX_STACK_LINE(35)
		bool tmp = (rebuildStyles == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		if ((tmp)){
			HX_STACK_LINE(35)
			tmp1 = this->_ready;
		}
		else{
			HX_STACK_LINE(35)
			tmp1 = false;
		}
		HX_STACK_LINE(35)
		if ((tmp1)){
			HX_STACK_LINE(36)
			bool tmp2 = this->_lazyLoadStyles;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(36)
			if ((tmp3)){
				HX_STACK_LINE(37)
				this->buildStyles();
			}
			else{
				HX_STACK_LINE(39)
				this->clearStyles(null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StateComponent_obj,addStates,(void))

Void StateComponent_obj::addState( ::String stateName,hx::Null< bool >  __o_rebuildStyles){
bool rebuildStyles = __o_rebuildStyles.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","addState",0x49efee05,"haxe.ui.toolkit.core.StateComponent.addState","haxe/ui/toolkit/core/StateComponent.hx",44,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stateName,"stateName")
	HX_STACK_ARG(rebuildStyles,"rebuildStyles")
{
		HX_STACK_LINE(45)
		::String tmp = stateName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1 = this->hasState(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		if ((tmp2)){
			HX_STACK_LINE(46)
			::String tmp3 = stateName;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			this->_states->push(tmp3);
			HX_STACK_LINE(47)
			bool tmp4 = (rebuildStyles == true);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(47)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(47)
			if ((tmp4)){
				HX_STACK_LINE(47)
				tmp5 = this->_ready;
			}
			else{
				HX_STACK_LINE(47)
				tmp5 = false;
			}
			HX_STACK_LINE(47)
			if ((tmp5)){
				HX_STACK_LINE(48)
				bool tmp6 = this->_lazyLoadStyles;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(48)
				bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(48)
				if ((tmp7)){
					HX_STACK_LINE(49)
					this->buildStyles();
				}
				else{
					HX_STACK_LINE(51)
					this->clearStyles(null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StateComponent_obj,addState,(void))

::String StateComponent_obj::get_state( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","get_state",0x71951af3,"haxe.ui.toolkit.core.StateComponent.get_state","haxe/ui/toolkit/core/StateComponent.hx",64,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	::String tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(StateComponent_obj,get_state,return )

::String StateComponent_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","set_state",0x54e606ff,"haxe.ui.toolkit.core.StateComponent.set_state","haxe/ui/toolkit/core/StateComponent.hx",68,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	::String tmp = this->_state;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	if ((tmp2)){
		HX_STACK_LINE(70)
		this->_state = value;
		HX_STACK_LINE(71)
		::String tmp3 = this->_state;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		::haxe::ui::toolkit::style::Style tmp4 = this->retrieveStyle(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		if ((tmp5)){
			HX_STACK_LINE(72)
			::String tmp6 = this->_state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::style::Style tmp7 = this->retrieveStyle(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			this->set_baseStyle(tmp7);
		}
		else{
			HX_STACK_LINE(74)
			this->invalidate((int)4096,null());
		}
	}
	HX_STACK_LINE(77)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(77)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(StateComponent_obj,set_state,return )

Array< ::String > StateComponent_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","get_states",0xf0e27a20,"haxe.ui.toolkit.core.StateComponent.get_states","haxe/ui/toolkit/core/StateComponent.hx",81,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	return this->_states;
}


HX_DEFINE_DYNAMIC_FUNC0(StateComponent_obj,get_states,return )

bool StateComponent_obj::hasState( ::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","hasState",0x5ceb122c,"haxe.ui.toolkit.core.StateComponent.hasState","haxe/ui/toolkit/core/StateComponent.hx",84,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(85)
	bool tmp = (this->get_states() == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	if ((tmp)){
		HX_STACK_LINE(86)
		return false;
	}
	HX_STACK_LINE(88)
	::String tmp1 = state;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	int tmp2 = ::Lambda_obj::indexOf(this->get_states(),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	bool tmp3 = (tmp2 != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(StateComponent_obj,hasState,return )

::haxe::ui::toolkit::core::DisplayObject StateComponent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","clone",0x9b1b7a68,"haxe.ui.toolkit.core.StateComponent.clone","src/haxe/ui/toolkit/core/StateComponent.hx",1,0x81870c70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent c = ((::haxe::ui::toolkit::core::StateComponent)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::String tmp1 = this->get_state();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_state(tmp1);
	HX_STACK_LINE(4)
	::haxe::ui::toolkit::core::StateComponent tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	return tmp2;
}


::haxe::ui::toolkit::core::DisplayObject StateComponent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","self",0x64cb0ee1,"haxe.ui.toolkit.core.StateComponent.self","src/haxe/ui/toolkit/core/StateComponent.hx",1,0x81870c70)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = ::haxe::ui::toolkit::core::StateComponent_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



StateComponent_obj::StateComponent_obj()
{
}

void StateComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StateComponent);
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_states,"_states");
	HX_MARK_MEMBER_NAME(states,"states");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StateComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_states,"_states");
	HX_VISIT_MEMBER_NAME(states,"states");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StateComponent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return get_state(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"states") ) { return inCallProp == hx::paccAlways ? get_states() : states; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { return _states; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addState") ) { return addState_dyn(); }
		if (HX_FIELD_EQ(inName,"hasState") ) { return hasState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addStates") ) { return addStates_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildStyles") ) { return buildStyles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StateComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { if (inCallProp == hx::paccAlways) return set_state(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { _states=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StateComponent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StateComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_states","\xe1","\xea","\x72","\x74"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StateComponent_obj,_state),HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StateComponent_obj,_states),HX_HCSTRING("_states","\xe1","\xea","\x72","\x74")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StateComponent_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_state","\x52","\xbd","\xf2","\x7f"),
	HX_HCSTRING("_states","\xe1","\xea","\x72","\x74"),
	HX_HCSTRING("buildStyles","\xf0","\xcb","\x43","\x66"),
	HX_HCSTRING("addStates","\x43","\x0e","\x20","\xbe"),
	HX_HCSTRING("addState","\x30","\x9c","\x68","\xfd"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("get_state","\x68","\xd2","\xb4","\xc7"),
	HX_HCSTRING("set_state","\x74","\xbe","\x05","\xab"),
	HX_HCSTRING("get_states","\x0b","\x49","\x83","\xf6"),
	HX_HCSTRING("hasState","\x57","\xc0","\x63","\x10"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StateComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StateComponent_obj::__mClass,"__mClass");
};

#endif

hx::Class StateComponent_obj::__mClass;

void StateComponent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.StateComponent","\x39","\x9d","\xb2","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StateComponent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StateComponent_obj >;
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
