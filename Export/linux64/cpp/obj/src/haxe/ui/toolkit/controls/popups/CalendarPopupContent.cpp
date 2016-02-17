#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_CalendarView
#include <haxe/ui/toolkit/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CalendarPopupContent
#include <haxe/ui/toolkit/controls/popups/CalendarPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
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
namespace controls{
namespace popups{

Void CalendarPopupContent_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","new",0x29b0682e,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.new","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",8,0x98ae1461)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
	HX_STACK_LINE(11)
	::haxe::ui::toolkit::containers::CalendarView tmp = ::haxe::ui::toolkit::containers::CalendarView_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	this->_cal = tmp;
	HX_STACK_LINE(12)
	::haxe::ui::toolkit::containers::CalendarView tmp1 = this->_cal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	tmp1->set_percentWidth((int)100);
}
;
	return null();
}

//CalendarPopupContent_obj::~CalendarPopupContent_obj() { }

Dynamic CalendarPopupContent_obj::__CreateEmpty() { return  new CalendarPopupContent_obj; }
hx::ObjectPtr< CalendarPopupContent_obj > CalendarPopupContent_obj::__new()
{  hx::ObjectPtr< CalendarPopupContent_obj > _result_ = new CalendarPopupContent_obj();
	_result_->__construct();
	return _result_;}

Dynamic CalendarPopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CalendarPopupContent_obj > _result_ = new CalendarPopupContent_obj();
	_result_->__construct();
	return _result_;}

Void CalendarPopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","initialize",0xaec74f42,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.initialize","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",18,0x98ae1461)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		this->super::initialize();
		HX_STACK_LINE(21)
		::haxe::ui::toolkit::containers::CalendarView tmp = this->_cal;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(21)
		this->addChild(tmp);
		HX_STACK_LINE(22)
		::haxe::ui::toolkit::containers::CalendarView tmp1 = this->_cal;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		Float tmp2 = tmp1->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		this->set_height(tmp2);
	}
return null();
}


::Date CalendarPopupContent_obj::get_selectedDate( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","get_selectedDate",0xe8668224,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.get_selectedDate","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",30,0x98ae1461)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::containers::CalendarView tmp = this->_cal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	::Date tmp1 = tmp->get_selectedDate();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(CalendarPopupContent_obj,get_selectedDate,return )

::Date CalendarPopupContent_obj::set_selectedDate( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","set_selectedDate",0x3ea86f98,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.set_selectedDate","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",34,0x98ae1461)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(35)
	::haxe::ui::toolkit::containers::CalendarView tmp = this->_cal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::Date tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	tmp->set_selectedDate(tmp1);
	HX_STACK_LINE(36)
	::Date tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarPopupContent_obj,set_selectedDate,return )

::haxe::ui::toolkit::core::DisplayObject CalendarPopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","clone",0xf3efbaab,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.clone","src/haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",1,0x0babe0f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::PopupContent tmp = hx::TCast< ::haxe::ui::toolkit::controls::popups::PopupContent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::CalendarPopupContent c = ((::haxe::ui::toolkit::controls::popups::CalendarPopupContent)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::popups::CalendarPopupContent tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject CalendarPopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","self",0x53f8c7fe,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.self","src/haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",1,0x0babe0f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::CalendarPopupContent tmp = ::haxe::ui::toolkit::controls::popups::CalendarPopupContent_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



CalendarPopupContent_obj::CalendarPopupContent_obj()
{
}

void CalendarPopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CalendarPopupContent);
	HX_MARK_MEMBER_NAME(_cal,"_cal");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CalendarPopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cal,"_cal");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CalendarPopupContent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_cal") ) { return _cal; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == hx::paccAlways) return get_selectedDate(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedDate") ) { return get_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedDate") ) { return set_selectedDate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CalendarPopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_cal") ) { _cal=inValue.Cast< ::haxe::ui::toolkit::containers::CalendarView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { if (inCallProp == hx::paccAlways) return set_selectedDate(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CalendarPopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_cal","\x0f","\xb9","\x16","\x3f"));
	outFields->push(HX_HCSTRING("selectedDate","\x29","\x76","\xfd","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::CalendarView*/ ,(int)offsetof(CalendarPopupContent_obj,_cal),HX_HCSTRING("_cal","\x0f","\xb9","\x16","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_cal","\x0f","\xb9","\x16","\x3f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("get_selectedDate","\xb2","\x62","\x9c","\xd7"),
	HX_HCSTRING("set_selectedDate","\x26","\x50","\xde","\x2d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CalendarPopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarPopupContent_obj::__mClass,"__mClass");
};

#endif

hx::Class CalendarPopupContent_obj::__mClass;

void CalendarPopupContent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.popups.CalendarPopupContent","\x3c","\x79","\x39","\xf2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CalendarPopupContent_obj >;
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
} // end namespace popups
