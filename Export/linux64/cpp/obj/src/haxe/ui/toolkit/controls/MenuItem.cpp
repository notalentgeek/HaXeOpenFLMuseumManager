#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuItem
#include <haxe/ui/toolkit/controls/MenuItem.h>
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
namespace controls{

Void MenuItem_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuItem","new",0x3b9fdf5a,"haxe.ui.toolkit.controls.MenuItem.new","haxe/ui/toolkit/controls/MenuItem.hx",6,0xd97f8416)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	this->set_toggle(true);
	HX_STACK_LINE(9)
	this->set_allowSelection(false);
}
;
	return null();
}

//MenuItem_obj::~MenuItem_obj() { }

Dynamic MenuItem_obj::__CreateEmpty() { return  new MenuItem_obj; }
hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new()
{  hx::ObjectPtr< MenuItem_obj > _result_ = new MenuItem_obj();
	_result_->__construct();
	return _result_;}

Dynamic MenuItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuItem_obj > _result_ = new MenuItem_obj();
	_result_->__construct();
	return _result_;}

bool MenuItem_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuItem","set_selected",0x51fb439e,"haxe.ui.toolkit.controls.MenuItem.set_selected","haxe/ui/toolkit/controls/MenuItem.hx",12,0xd97f8416)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	this->_selected = value;
	HX_STACK_LINE(14)
	bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	if ((tmp1)){
		HX_STACK_LINE(15)
		this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
	}
	else{
		HX_STACK_LINE(17)
		this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	}
	HX_STACK_LINE(19)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	return tmp2;
}


::haxe::ui::toolkit::core::DisplayObject MenuItem_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuItem","clone",0xfa0c54d7,"haxe.ui.toolkit.controls.MenuItem.clone","src/haxe/ui/toolkit/controls/MenuItem.hx",1,0xdf72b261)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button tmp = hx::TCast< ::haxe::ui::toolkit::controls::Button >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuItem c = ((::haxe::ui::toolkit::controls::MenuItem)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::MenuItem tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject MenuItem_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuItem","self",0xf3919752,"haxe.ui.toolkit.controls.MenuItem.self","src/haxe/ui/toolkit/controls/MenuItem.hx",1,0xdf72b261)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuItem tmp = ::haxe::ui::toolkit::controls::MenuItem_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



MenuItem_obj::MenuItem_obj()
{
}

Dynamic MenuItem_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuItem_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.MenuItem","\x68","\xea","\x7a","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuItem_obj >;
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
