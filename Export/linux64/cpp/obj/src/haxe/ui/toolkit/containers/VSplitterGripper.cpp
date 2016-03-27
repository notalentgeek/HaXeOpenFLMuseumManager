#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_VSplitterGripper
#include <haxe/ui/toolkit/containers/VSplitterGripper.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void VSplitterGripper_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitterGripper","new",0x9aad025a,"haxe.ui.toolkit.containers.VSplitterGripper.new","haxe/ui/toolkit/containers/VSplitter.hx",132,0x6bc3d37b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(133)
	super::__construct();
	HX_STACK_LINE(134)
	this->set_remainPressed(true);
	HX_STACK_LINE(135)
	this->set_useHandCursor(true);
}
;
	return null();
}

//VSplitterGripper_obj::~VSplitterGripper_obj() { }

Dynamic VSplitterGripper_obj::__CreateEmpty() { return  new VSplitterGripper_obj; }
hx::ObjectPtr< VSplitterGripper_obj > VSplitterGripper_obj::__new()
{  hx::ObjectPtr< VSplitterGripper_obj > _result_ = new VSplitterGripper_obj();
	_result_->__construct();
	return _result_;}

Dynamic VSplitterGripper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VSplitterGripper_obj > _result_ = new VSplitterGripper_obj();
	_result_->__construct();
	return _result_;}

::haxe::ui::toolkit::core::DisplayObject VSplitterGripper_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitterGripper","clone",0x10e837d7,"haxe.ui.toolkit.containers.VSplitterGripper.clone","src/haxe/ui/toolkit/containers/VSplitterGripper.hx",1,0xd51d2561)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button tmp = hx::TCast< ::haxe::ui::toolkit::controls::Button >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VSplitterGripper c = ((::haxe::ui::toolkit::containers::VSplitterGripper)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::VSplitterGripper tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject VSplitterGripper_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.VSplitterGripper","self",0xc0031452,"haxe.ui.toolkit.containers.VSplitterGripper.self","src/haxe/ui/toolkit/containers/VSplitterGripper.hx",1,0xd51d2561)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VSplitterGripper tmp = ::haxe::ui::toolkit::containers::VSplitterGripper_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



VSplitterGripper_obj::VSplitterGripper_obj()
{
}

Dynamic VSplitterGripper_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(VSplitterGripper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VSplitterGripper_obj::__mClass,"__mClass");
};

#endif

hx::Class VSplitterGripper_obj::__mClass;

void VSplitterGripper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.VSplitterGripper","\x68","\x8d","\x7a","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VSplitterGripper_obj >;
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
