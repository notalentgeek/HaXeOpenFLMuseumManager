#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Scroll_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","new",0x7cecad15,"haxe.ui.toolkit.controls.Scroll.new","haxe/ui/toolkit/controls/Scroll.hx",13,0x373cd6bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->_direction = HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a");
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->addStates(Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")),null());
}
;
	return null();
}

//Scroll_obj::~Scroll_obj() { }

Dynamic Scroll_obj::__CreateEmpty() { return  new Scroll_obj; }
hx::ObjectPtr< Scroll_obj > Scroll_obj::__new()
{  hx::ObjectPtr< Scroll_obj > _result_ = new Scroll_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scroll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scroll_obj > _result_ = new Scroll_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Scroll_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDirectional_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDirectional_obj *();
	return super::__ToInterface(inType);
}

Scroll_obj::operator ::haxe::ui::toolkit::core::interfaces::IDirectional_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDirectional_delegate_< Scroll_obj >(this); }
::String Scroll_obj::get_direction( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","get_direction",0x3da9e70b,"haxe.ui.toolkit.controls.Scroll.get_direction","haxe/ui/toolkit/controls/Scroll.hx",29,0x373cd6bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::String tmp = this->_direction;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_direction,return )

::String Scroll_obj::set_direction( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","set_direction",0x82afc917,"haxe.ui.toolkit.controls.Scroll.set_direction","haxe/ui/toolkit/controls/Scroll.hx",33,0x373cd6bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(34)
	this->_direction = value;
	HX_STACK_LINE(35)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_direction,return )

::haxe::ui::toolkit::core::DisplayObject Scroll_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","clone",0xc2744752,"haxe.ui.toolkit.controls.Scroll.clone","src/haxe/ui/toolkit/controls/Scroll.hx",1,0xcf7f4c46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Scroll c = ((::haxe::ui::toolkit::controls::Scroll)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::Scroll tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Scroll_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","self",0xd578cd37,"haxe.ui.toolkit.controls.Scroll.self","src/haxe/ui/toolkit/controls/Scroll.hx",1,0xcf7f4c46)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Scroll tmp = ::haxe::ui::toolkit::controls::Scroll_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Scroll_obj::Scroll_obj()
{
}

void Scroll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scroll);
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scroll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scroll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return get_direction(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { return _direction; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scroll_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return set_direction(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Scroll_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Scroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_direction","\x00","\xde","\xe2","\x6b"));
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Scroll_obj,_direction),HX_HCSTRING("_direction","\x00","\xde","\xe2","\x6b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_direction","\x00","\xde","\xe2","\x6b"),
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scroll_obj::__mClass,"__mClass");
};

#endif

hx::Class Scroll_obj::__mClass;

void Scroll_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Scroll","\xa3","\x7e","\x49","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Scroll_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Scroll_obj >;
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
