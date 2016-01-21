#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewRefreshPrompt
#include <haxe/ui/toolkit/containers/ScrollViewRefreshPrompt.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ScrollViewRefreshPrompt_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewRefreshPrompt","new",0xad64cea5,"haxe.ui.toolkit.containers.ScrollViewRefreshPrompt.new","haxe/ui/toolkit/containers/ScrollView.hx",818,0x89f00132)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(818)
	super::__construct();
}
;
	return null();
}

//ScrollViewRefreshPrompt_obj::~ScrollViewRefreshPrompt_obj() { }

Dynamic ScrollViewRefreshPrompt_obj::__CreateEmpty() { return  new ScrollViewRefreshPrompt_obj; }
hx::ObjectPtr< ScrollViewRefreshPrompt_obj > ScrollViewRefreshPrompt_obj::__new()
{  hx::ObjectPtr< ScrollViewRefreshPrompt_obj > _result_ = new ScrollViewRefreshPrompt_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScrollViewRefreshPrompt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScrollViewRefreshPrompt_obj > _result_ = new ScrollViewRefreshPrompt_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ScrollViewRefreshPrompt_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

ScrollViewRefreshPrompt_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< ScrollViewRefreshPrompt_obj >(this); }
ScrollViewRefreshPrompt_obj::operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< ScrollViewRefreshPrompt_obj >(this); }
ScrollViewRefreshPrompt_obj::operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IComponent_delegate_< ScrollViewRefreshPrompt_obj >(this); }
ScrollViewRefreshPrompt_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< ScrollViewRefreshPrompt_obj >(this); }
ScrollViewRefreshPrompt_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< ScrollViewRefreshPrompt_obj >(this); }
ScrollViewRefreshPrompt_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< ScrollViewRefreshPrompt_obj >(this); }
::haxe::ui::toolkit::core::DisplayObject ScrollViewRefreshPrompt_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewRefreshPrompt","clone",0x1a63ece2,"haxe.ui.toolkit.containers.ScrollViewRefreshPrompt.clone","src/haxe/ui/toolkit/containers/ScrollViewRefreshPrompt.hx",1,0x847734c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt c = ((::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ScrollViewRefreshPrompt_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewRefreshPrompt","self",0x0e1e09a7,"haxe.ui.toolkit.containers.ScrollViewRefreshPrompt.self","src/haxe/ui/toolkit/containers/ScrollViewRefreshPrompt.hx",1,0x847734c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt tmp = ::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ScrollViewRefreshPrompt_obj::ScrollViewRefreshPrompt_obj()
{
}

Dynamic ScrollViewRefreshPrompt_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(ScrollViewRefreshPrompt_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollViewRefreshPrompt_obj::__mClass,"__mClass");
};

#endif

hx::Class ScrollViewRefreshPrompt_obj::__mClass;

void ScrollViewRefreshPrompt_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.ScrollViewRefreshPrompt","\x33","\x98","\x8d","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScrollViewRefreshPrompt_obj >;
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
