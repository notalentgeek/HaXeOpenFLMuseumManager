#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsComponentDefaults
#include <haxe/ui/toolkit/core/ToolTipOptionsComponentDefaults.h>
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
namespace core{

Void ToolTipOptionsComponentDefaults_obj::__construct()
{
	return null();
}

//ToolTipOptionsComponentDefaults_obj::~ToolTipOptionsComponentDefaults_obj() { }

Dynamic ToolTipOptionsComponentDefaults_obj::__CreateEmpty() { return  new ToolTipOptionsComponentDefaults_obj; }
hx::ObjectPtr< ToolTipOptionsComponentDefaults_obj > ToolTipOptionsComponentDefaults_obj::__new()
{  hx::ObjectPtr< ToolTipOptionsComponentDefaults_obj > _result_ = new ToolTipOptionsComponentDefaults_obj();
	_result_->__construct();
	return _result_;}

Dynamic ToolTipOptionsComponentDefaults_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ToolTipOptionsComponentDefaults_obj > _result_ = new ToolTipOptionsComponentDefaults_obj();
	_result_->__construct();
	return _result_;}

Void ToolTipOptionsComponentDefaults_obj::applyDefaultsFromComponent( Dynamic to,::haxe::ui::toolkit::core::Component from){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipOptionsComponentDefaults","applyDefaultsFromComponent",0xae8000fa,"haxe.ui.toolkit.core.ToolTipOptionsComponentDefaults.applyDefaultsFromComponent","haxe/ui/toolkit/core/ToolTipManager.hx",70,0xe81a6cc7)
		HX_STACK_ARG(to,"to")
		HX_STACK_ARG(from,"from")
		HX_STACK_LINE(71)
		bool tmp = (from->toolTipPosition != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		if ((tmp)){
			HX_STACK_LINE(71)
			to->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = from->toolTipPosition;
		}
		HX_STACK_LINE(72)
		bool tmp1 = (from->toolTipRelativeTo != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(72)
			to->__FieldRef(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2")) = from->toolTipRelativeTo;
		}
		HX_STACK_LINE(73)
		bool tmp2 = (from->toolTipCenter != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		if ((tmp2)){
			HX_STACK_LINE(73)
			to->__FieldRef(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")) = from->toolTipCenter;
		}
		HX_STACK_LINE(74)
		bool tmp3 = (from->toolTipOffsetX != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		if ((tmp3)){
			HX_STACK_LINE(74)
			to->__FieldRef(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")) = from->toolTipOffsetX;
		}
		HX_STACK_LINE(75)
		bool tmp4 = (from->toolTipOffsetY != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		if ((tmp4)){
			HX_STACK_LINE(75)
			to->__FieldRef(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")) = from->toolTipOffsetY;
		}
		HX_STACK_LINE(76)
		bool tmp5 = (from->toolTipFollow != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		if ((tmp5)){
			HX_STACK_LINE(76)
			to->__FieldRef(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9")) = from->toolTipFollow;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ToolTipOptionsComponentDefaults_obj,applyDefaultsFromComponent,(void))


ToolTipOptionsComponentDefaults_obj::ToolTipOptionsComponentDefaults_obj()
{
}

bool ToolTipOptionsComponentDefaults_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"applyDefaultsFromComponent") ) { outValue = applyDefaultsFromComponent_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTipOptionsComponentDefaults_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTipOptionsComponentDefaults_obj::__mClass,"__mClass");
};

#endif

hx::Class ToolTipOptionsComponentDefaults_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("applyDefaultsFromComponent","\xb3","\xb9","\x4a","\xbb"),
	::String(null()) };

void ToolTipOptionsComponentDefaults_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.ToolTipOptionsComponentDefaults","\xc7","\x53","\x9c","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolTipOptionsComponentDefaults_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ToolTipOptionsComponentDefaults_obj >;
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
