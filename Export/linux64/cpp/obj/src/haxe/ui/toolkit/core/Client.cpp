#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#include <haxe/ui/toolkit/core/Client.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_Capabilities
#include <openfl/_legacy/system/Capabilities.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Client_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Client","new",0xbed64f0a,"haxe.ui.toolkit.core.Client.new","haxe/ui/toolkit/core/Client.hx",19,0xab9725e6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Client_obj::~Client_obj() { }

Dynamic Client_obj::__CreateEmpty() { return  new Client_obj; }
hx::ObjectPtr< Client_obj > Client_obj::__new()
{  hx::ObjectPtr< Client_obj > _result_ = new Client_obj();
	_result_->__construct();
	return _result_;}

Dynamic Client_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Client_obj > _result_ = new Client_obj();
	_result_->__construct();
	return _result_;}

Void Client_obj::init( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Client","init",0x39679126,"haxe.ui.toolkit.core.Client.init","haxe/ui/toolkit/core/Client.hx",23,0xab9725e6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,init,(void))

::String Client_obj::get_language( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_language",0xe8dc9077,"haxe.ui.toolkit.core.Client.get_language","haxe/ui/toolkit/core/Client.hx",36,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::String tmp = ::openfl::_legacy::_system::Capabilities_obj::get_language();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_language,return )

Float Client_obj::get_dpi( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_dpi",0xad79279e,"haxe.ui.toolkit.core.Client.get_dpi","haxe/ui/toolkit/core/Client.hx",40,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	Float tmp = ::openfl::_legacy::_system::Capabilities_obj::get_screenDPI();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_dpi,return )

::String Client_obj::get_platform( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_platform",0xd6c4c2d2,"haxe.ui.toolkit.core.Client.get_platform","haxe/ui/toolkit/core/Client.hx",44,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	return HX_HCSTRING("linux","\xf4","\xeb","\x01","\x75");
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_platform,return )

::String Client_obj::get_target( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_target",0x3cdd6db0,"haxe.ui.toolkit.core.Client.get_target","haxe/ui/toolkit/core/Client.hx",56,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return HX_HCSTRING("cpp","\x23","\x81","\x4b","\x00");
	HX_STACK_LINE(63)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_target,return )

bool Client_obj::get_mobile( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_mobile",0x756826c1,"haxe.ui.toolkit.core.Client.get_mobile","haxe/ui/toolkit/core/Client.hx",70,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_mobile,return )

Float Client_obj::get_screenWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_screenWidth",0xcbe4903b,"haxe.ui.toolkit.core.Client.get_screenWidth","haxe/ui/toolkit/core/Client.hx",74,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	Float tmp = ::openfl::_legacy::_system::Capabilities_obj::get_screenResolutionX();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_screenWidth,return )

Float Client_obj::get_screenHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_screenHeight",0x52691c12,"haxe.ui.toolkit.core.Client.get_screenHeight","haxe/ui/toolkit/core/Client.hx",78,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	Float tmp = ::openfl::_legacy::_system::Capabilities_obj::get_screenResolutionY();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_screenHeight,return )

Float Client_obj::get_windowWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_windowWidth",0x0531d937,"haxe.ui.toolkit.core.Client.get_windowWidth","haxe/ui/toolkit/core/Client.hx",82,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	int tmp2 = tmp1->get_stageWidth();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_windowWidth,return )

Float Client_obj::get_windowHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_windowHeight",0x3cbbaf96,"haxe.ui.toolkit.core.Client.get_windowHeight","haxe/ui/toolkit/core/Client.hx",86,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	int tmp2 = tmp1->get_stageHeight();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_windowHeight,return )

::haxe::ui::toolkit::core::Client Client_obj::_instance;

::haxe::ui::toolkit::core::Client Client_obj::instance;

::haxe::ui::toolkit::core::Client Client_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_instance",0xc8ac2fb4,"haxe.ui.toolkit.core.Client.get_instance","haxe/ui/toolkit/core/Client.hx",8,0xab9725e6)
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::core::Client tmp = ::haxe::ui::toolkit::core::Client_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(9)
	if ((tmp1)){
		HX_STACK_LINE(10)
		::haxe::ui::toolkit::core::Client tmp2 = ::haxe::ui::toolkit::core::Client_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(10)
		::haxe::ui::toolkit::core::Client_obj::_instance = tmp2;
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::core::Client tmp3 = ::haxe::ui::toolkit::core::Client_obj::_instance;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(11)
		tmp3->init();
	}
	HX_STACK_LINE(13)
	::haxe::ui::toolkit::core::Client tmp2 = ::haxe::ui::toolkit::core::Client_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_instance,return )


Client_obj::Client_obj()
{
}

void Client_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Client);
	HX_MARK_MEMBER_NAME(language,"language");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(mobile,"mobile");
	HX_MARK_END_CLASS();
}

void Client_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(language,"language");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(mobile,"mobile");
}

Dynamic Client_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return inCallProp == hx::paccAlways ? get_dpi() : dpi; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp == hx::paccAlways ? get_target() : target; }
		if (HX_FIELD_EQ(inName,"mobile") ) { return inCallProp == hx::paccAlways ? get_mobile() : mobile; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return get_dpi_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { return inCallProp == hx::paccAlways ? get_language() : language; }
		if (HX_FIELD_EQ(inName,"platform") ) { return inCallProp == hx::paccAlways ? get_platform() : platform; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mobile") ) { return get_mobile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return inCallProp == hx::paccAlways ? get_screenWidth() : screenWidth; }
		if (HX_FIELD_EQ(inName,"windowWidth") ) { return inCallProp == hx::paccAlways ? get_windowWidth() : windowWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return inCallProp == hx::paccAlways ? get_screenHeight() : screenHeight; }
		if (HX_FIELD_EQ(inName,"windowHeight") ) { return inCallProp == hx::paccAlways ? get_windowHeight() : windowHeight; }
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		if (HX_FIELD_EQ(inName,"get_platform") ) { return get_platform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_screenWidth") ) { return get_screenWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_windowWidth") ) { return get_windowWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_screenHeight") ) { return get_screenHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_windowHeight") ) { return get_windowHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Client_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic Client_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mobile") ) { mobile=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { language=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowWidth") ) { windowWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowHeight") ) { windowHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Client_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::core::Client >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::core::Client >(); return true; }
	}
	return false;
}

void Client_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("language","\x58","\x80","\x11","\x7a"));
	outFields->push(HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"));
	outFields->push(HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"));
	outFields->push(HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81"));
	outFields->push(HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf"));
	outFields->push(HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"));
	outFields->push(HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Client_obj,language),HX_HCSTRING("language","\x58","\x80","\x11","\x7a")},
	{hx::fsFloat,(int)offsetof(Client_obj,dpi),HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00")},
	{hx::fsString,(int)offsetof(Client_obj,platform),HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67")},
	{hx::fsFloat,(int)offsetof(Client_obj,screenWidth),HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81")},
	{hx::fsFloat,(int)offsetof(Client_obj,screenHeight),HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf")},
	{hx::fsFloat,(int)offsetof(Client_obj,windowWidth),HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb")},
	{hx::fsFloat,(int)offsetof(Client_obj,windowHeight),HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9")},
	{hx::fsString,(int)offsetof(Client_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsBool,(int)offsetof(Client_obj,mobile),HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::Client*/ ,(void *) &Client_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Client*/ ,(void *) &Client_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("language","\x58","\x80","\x11","\x7a"),
	HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81"),
	HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf"),
	HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"),
	HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"),
	HX_HCSTRING("get_language","\x61","\x34","\x2b","\x2f"),
	HX_HCSTRING("get_dpi","\xf4","\x0b","\xc1","\x26"),
	HX_HCSTRING("get_platform","\xbc","\x66","\x13","\x1d"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("get_mobile","\x2b","\x1c","\xff","\xaf"),
	HX_HCSTRING("get_screenWidth","\x91","\xba","\xc9","\x42"),
	HX_HCSTRING("get_screenHeight","\xfc","\xfc","\x08","\xe4"),
	HX_HCSTRING("get_windowWidth","\x8d","\x03","\x17","\x7c"),
	HX_HCSTRING("get_windowHeight","\x80","\x90","\x5b","\xce"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Client_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Client_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Client_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Client_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Client_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Client_obj::instance,"instance");
};

#endif

hx::Class Client_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void Client_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.Client","\x18","\xc2","\x73","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Client_obj::__GetStatic;
	__mClass->mSetStaticField = &Client_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Client_obj >;
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
