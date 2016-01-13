#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ContinuousHBox
#include <haxe/ui/toolkit/containers/ContinuousHBox.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalContinuousLayout
#include <haxe/ui/toolkit/layout/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ContinuousHBox_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousHBox","new",0xa4bdcc1e,"haxe.ui.toolkit.containers.ContinuousHBox.new","haxe/ui/toolkit/containers/ContinuousHBox.hx",7,0x54b66612)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
	HX_STACK_LINE(10)
	this->set_autoSize(true);
	HX_STACK_LINE(11)
	::haxe::ui::toolkit::layout::HorizontalContinuousLayout tmp = ::haxe::ui::toolkit::layout::HorizontalContinuousLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	this->_layout = tmp;
}
;
	return null();
}

//ContinuousHBox_obj::~ContinuousHBox_obj() { }

Dynamic ContinuousHBox_obj::__CreateEmpty() { return  new ContinuousHBox_obj; }
hx::ObjectPtr< ContinuousHBox_obj > ContinuousHBox_obj::__new()
{  hx::ObjectPtr< ContinuousHBox_obj > _result_ = new ContinuousHBox_obj();
	_result_->__construct();
	return _result_;}

Dynamic ContinuousHBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContinuousHBox_obj > _result_ = new ContinuousHBox_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ContinuousHBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

ContinuousHBox_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< ContinuousHBox_obj >(this); }
::haxe::ui::toolkit::core::DisplayObject ContinuousHBox_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousHBox","clone",0x5811fa9b,"haxe.ui.toolkit.containers.ContinuousHBox.clone","src/haxe/ui/toolkit/containers/ContinuousHBox.hx",1,0x3341575d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::Container tmp = hx::TCast< ::haxe::ui::toolkit::containers::Container >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ContinuousHBox c = ((::haxe::ui::toolkit::containers::ContinuousHBox)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::ContinuousHBox tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ContinuousHBox_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousHBox","self",0x84a2d60e,"haxe.ui.toolkit.containers.ContinuousHBox.self","src/haxe/ui/toolkit/containers/ContinuousHBox.hx",1,0x3341575d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ContinuousHBox tmp = ::haxe::ui::toolkit::containers::ContinuousHBox_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ContinuousHBox_obj::ContinuousHBox_obj()
{
}

Dynamic ContinuousHBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContinuousHBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContinuousHBox_obj::__mClass,"__mClass");
};

#endif

hx::Class ContinuousHBox_obj::__mClass;

void ContinuousHBox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.ContinuousHBox","\x2c","\x25","\xea","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ContinuousHBox_obj >;
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
