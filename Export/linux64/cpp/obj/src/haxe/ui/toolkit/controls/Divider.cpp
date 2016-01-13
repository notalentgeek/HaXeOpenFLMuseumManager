#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Divider
#include <haxe/ui/toolkit/controls/Divider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Divider_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","new",0x9f4595f5,"haxe.ui.toolkit.controls.Divider.new","haxe/ui/toolkit/controls/Divider.hx",15,0xa8b0fc5b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->set_autoSize(true);
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::layout::VerticalLayout tmp = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->set_layout(tmp);
}
;
	return null();
}

//Divider_obj::~Divider_obj() { }

Dynamic Divider_obj::__CreateEmpty() { return  new Divider_obj; }
hx::ObjectPtr< Divider_obj > Divider_obj::__new()
{  hx::ObjectPtr< Divider_obj > _result_ = new Divider_obj();
	_result_->__construct();
	return _result_;}

Dynamic Divider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Divider_obj > _result_ = new Divider_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Divider_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Divider_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< Divider_obj >(this); }
Divider_obj::operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< Divider_obj >(this); }
Divider_obj::operator ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IItemRenderer_delegate_< Divider_obj >(this); }
Divider_obj::operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IComponent_delegate_< Divider_obj >(this); }
Divider_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< Divider_obj >(this); }
Divider_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Divider_obj >(this); }
Divider_obj::operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStateComponent_delegate_< Divider_obj >(this); }
Divider_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< Divider_obj >(this); }
Void Divider_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","initialize",0x9a18785b,"haxe.ui.toolkit.controls.Divider.initialize","haxe/ui/toolkit/controls/Divider.hx",21,0xa8b0fc5b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->super::initialize();
		HX_STACK_LINE(24)
		::haxe::ui::toolkit::core::Component tmp = ::haxe::ui::toolkit::core::Component_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		this->_line = tmp;
		HX_STACK_LINE(25)
		::haxe::ui::toolkit::core::Component tmp1 = this->_line;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		tmp1->set_id(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
		HX_STACK_LINE(26)
		::haxe::ui::toolkit::core::Component tmp2 = this->_line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		tmp2->set_percentWidth((int)100);
		HX_STACK_LINE(27)
		::haxe::ui::toolkit::core::Component tmp3 = this->_line;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		this->addChild(tmp3);
	}
return null();
}


::String Divider_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","get_text",0x45656681,"haxe.ui.toolkit.controls.Divider.get_text","haxe/ui/toolkit/controls/Divider.hx",30,0xa8b0fc5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	if ((tmp1)){
		HX_STACK_LINE(32)
		return null();
	}
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


::String Divider_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","set_text",0xf3c2bff5,"haxe.ui.toolkit.controls.Divider.set_text","haxe/ui/toolkit/controls/Divider.hx",37,0xa8b0fc5b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(38)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	if ((tmp1)){
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::controls::Text tmp2 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		this->_label = tmp2;
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::controls::Text tmp3 = this->_label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		tmp3->set_id(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::controls::Text tmp4 = this->_label;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		this->addChildAt(tmp4,(int)0);
	}
	HX_STACK_LINE(43)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	::String tmp4 = tmp2->set_text(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	return tmp4;
}


Dynamic Divider_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","get_data",0x3aceeffe,"haxe.ui.toolkit.controls.Divider.get_data","haxe/ui/toolkit/controls/Divider.hx",54,0xa8b0fc5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	Dynamic tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Divider_obj,get_data,return )

Dynamic Divider_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","set_data",0xe92c4972,"haxe.ui.toolkit.controls.Divider.set_data","haxe/ui/toolkit/controls/Divider.hx",57,0xa8b0fc5b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	this->_data = value;
	HX_STACK_LINE(59)
	Dynamic tmp = this->get_data();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1 = (tmp->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp1)){
		HX_STACK_LINE(60)
		Dynamic tmp2 = this->get_data();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		this->set_text(tmp2->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ));
	}
	HX_STACK_LINE(62)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Divider_obj,set_data,return )

bool Divider_obj::allowSelection( Float stageX,Float stageY){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","allowSelection",0x4915030e,"haxe.ui.toolkit.controls.Divider.allowSelection","haxe/ui/toolkit/controls/Divider.hx",66,0xa8b0fc5b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stageX,"stageX")
	HX_STACK_ARG(stageY,"stageY")
	HX_STACK_LINE(66)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Divider_obj,allowSelection,return )

Void Divider_obj::update( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","update",0xae39ab94,"haxe.ui.toolkit.controls.Divider.update","haxe/ui/toolkit/controls/Divider.hx",69,0xa8b0fc5b)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Divider_obj,update,(void))

::haxe::ui::toolkit::core::DisplayObject Divider_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","clone",0xdb812832,"haxe.ui.toolkit.controls.Divider.clone","src/haxe/ui/toolkit/controls/Divider.hx",1,0x4a956070)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Divider c = ((::haxe::ui::toolkit::controls::Divider)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::Divider tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Divider_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Divider","self",0xc0eba857,"haxe.ui.toolkit.controls.Divider.self","src/haxe/ui/toolkit/controls/Divider.hx",1,0x4a956070)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Divider tmp = ::haxe::ui::toolkit::controls::Divider_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Divider_obj::Divider_obj()
{
}

void Divider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Divider);
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_line,"_line");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(eventDispatcher,"eventDispatcher");
	HX_MARK_MEMBER_NAME(_data,"_data");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Divider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_line,"_line");
	HX_VISIT_MEMBER_NAME(hash,"hash");
	HX_VISIT_MEMBER_NAME(eventDispatcher,"eventDispatcher");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Divider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_line") ) { return _line; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSelection") ) { return allowSelection_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"eventDispatcher") ) { return eventDispatcher; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Divider_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_line") ) { _line=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"eventDispatcher") ) { eventDispatcher=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Divider_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Divider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	outFields->push(HX_HCSTRING("_line","\xd3","\x33","\xc4","\xfa"));
	outFields->push(HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"));
	outFields->push(HX_HCSTRING("eventDispatcher","\x61","\x7a","\xd7","\xfd"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(Divider_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(Divider_obj,_line),HX_HCSTRING("_line","\xd3","\x33","\xc4","\xfa")},
	{hx::fsString,(int)offsetof(Divider_obj,hash),HX_HCSTRING("hash","\xce","\x2f","\x08","\x45")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IEventDispatcher*/ ,(int)offsetof(Divider_obj,eventDispatcher),HX_HCSTRING("eventDispatcher","\x61","\x7a","\xd7","\xfd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Divider_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
	HX_HCSTRING("_line","\xd3","\x33","\xc4","\xfa"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	HX_HCSTRING("eventDispatcher","\x61","\x7a","\xd7","\xfd"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("allowSelection","\x83","\xda","\x9f","\x60"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Divider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Divider_obj::__mClass,"__mClass");
};

#endif

hx::Class Divider_obj::__mClass;

void Divider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Divider","\x83","\x77","\x04","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Divider_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Divider_obj >;
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
