#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuSeparator
#include <haxe/ui/toolkit/controls/MenuSeparator.h>
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

Void MenuSeparator_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuSeparator","new",0x5ad59fe2,"haxe.ui.toolkit.controls.MenuSeparator.new","haxe/ui/toolkit/controls/MenuSeparator.hx",9,0x4fcabf0e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	::haxe::ui::toolkit::layout::VerticalLayout tmp = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	this->set_layout(tmp);
}
;
	return null();
}

//MenuSeparator_obj::~MenuSeparator_obj() { }

Dynamic MenuSeparator_obj::__CreateEmpty() { return  new MenuSeparator_obj; }
hx::ObjectPtr< MenuSeparator_obj > MenuSeparator_obj::__new()
{  hx::ObjectPtr< MenuSeparator_obj > _result_ = new MenuSeparator_obj();
	_result_->__construct();
	return _result_;}

Dynamic MenuSeparator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuSeparator_obj > _result_ = new MenuSeparator_obj();
	_result_->__construct();
	return _result_;}

hx::Object *MenuSeparator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

MenuSeparator_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< MenuSeparator_obj >(this); }
Void MenuSeparator_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuSeparator","initialize",0x2a3f360e,"haxe.ui.toolkit.controls.MenuSeparator.initialize","haxe/ui/toolkit/controls/MenuSeparator.hx",14,0x4fcabf0e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		this->super::initialize();
		HX_STACK_LINE(17)
		::haxe::ui::toolkit::core::Component tmp = ::haxe::ui::toolkit::core::Component_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		this->_line = tmp;
		HX_STACK_LINE(18)
		::haxe::ui::toolkit::core::Component tmp1 = this->_line;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		tmp1->set_id(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
		HX_STACK_LINE(19)
		::haxe::ui::toolkit::core::Component tmp2 = this->_line;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		tmp2->set_percentWidth((int)100);
		HX_STACK_LINE(20)
		::haxe::ui::toolkit::core::Component tmp3 = this->_line;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		this->addChild(tmp3);
	}
return null();
}


::haxe::ui::toolkit::core::DisplayObject MenuSeparator_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuSeparator","clone",0xa299475f,"haxe.ui.toolkit.controls.MenuSeparator.clone","src/haxe/ui/toolkit/controls/MenuSeparator.hx",1,0x4054e0e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuSeparator c = ((::haxe::ui::toolkit::controls::MenuSeparator)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::MenuSeparator tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject MenuSeparator_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuSeparator","self",0x23644dca,"haxe.ui.toolkit.controls.MenuSeparator.self","src/haxe/ui/toolkit/controls/MenuSeparator.hx",1,0x4054e0e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuSeparator tmp = ::haxe::ui::toolkit::controls::MenuSeparator_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



MenuSeparator_obj::MenuSeparator_obj()
{
}

void MenuSeparator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuSeparator);
	HX_MARK_MEMBER_NAME(_line,"_line");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuSeparator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_line,"_line");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuSeparator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_line") ) { return _line; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuSeparator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_line") ) { _line=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuSeparator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MenuSeparator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_line","\xd3","\x33","\xc4","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(MenuSeparator_obj,_line),HX_HCSTRING("_line","\xd3","\x33","\xc4","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_line","\xd3","\x33","\xc4","\xfa"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuSeparator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuSeparator_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuSeparator_obj::__mClass;

void MenuSeparator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.MenuSeparator","\xf0","\xc6","\x93","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MenuSeparator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuSeparator_obj >;
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
