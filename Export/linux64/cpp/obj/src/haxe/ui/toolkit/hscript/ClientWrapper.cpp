#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#include <haxe/ui/toolkit/core/Client.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper
#include <haxe/ui/toolkit/hscript/ClientWrapper.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{

Void ClientWrapper_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.hscript.ClientWrapper","new",0xe56b295d,"haxe.ui.toolkit.hscript.ClientWrapper.new","haxe/ui/toolkit/hscript/ClientWrapper.hx",16,0x658eb455)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	::haxe::ui::toolkit::core::Client tmp = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	::String tmp1 = tmp->get_language();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	this->language = tmp1;
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::core::Client tmp2 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	Float tmp3 = tmp2->get_dpi();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	this->dpi = tmp3;
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::core::Client tmp4 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(19)
	::String tmp5 = tmp4->get_platform();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(19)
	this->platform = tmp5;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::core::Client tmp6 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(20)
	::String tmp7 = tmp6->get_target();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(20)
	this->target = tmp7;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::core::Client tmp8 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(21)
	bool tmp9 = tmp8->get_mobile();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(21)
	this->mobile = tmp9;
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::core::Client tmp10 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(22)
	Float tmp11 = tmp10->get_screenWidth();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(22)
	this->screenWidth = tmp11;
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::core::Client tmp12 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(23)
	Float tmp13 = tmp12->get_screenHeight();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(23)
	this->screenHeight = tmp13;
	HX_STACK_LINE(24)
	::haxe::ui::toolkit::core::Client tmp14 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(24)
	Float tmp15 = tmp14->get_windowWidth();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(24)
	this->windowWidth = tmp15;
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::core::Client tmp16 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(25)
	Float tmp17 = tmp16->get_windowHeight();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(25)
	this->windowHeight = tmp17;
}
;
	return null();
}

//ClientWrapper_obj::~ClientWrapper_obj() { }

Dynamic ClientWrapper_obj::__CreateEmpty() { return  new ClientWrapper_obj; }
hx::ObjectPtr< ClientWrapper_obj > ClientWrapper_obj::__new()
{  hx::ObjectPtr< ClientWrapper_obj > _result_ = new ClientWrapper_obj();
	_result_->__construct();
	return _result_;}

Dynamic ClientWrapper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClientWrapper_obj > _result_ = new ClientWrapper_obj();
	_result_->__construct();
	return _result_;}


ClientWrapper_obj::ClientWrapper_obj()
{
}

void ClientWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClientWrapper);
	HX_MARK_MEMBER_NAME(language,"language");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(mobile,"mobile");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(windowHeight,"windowHeight");
	HX_MARK_END_CLASS();
}

void ClientWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(language,"language");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(mobile,"mobile");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(windowHeight,"windowHeight");
}

Dynamic ClientWrapper_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return dpi; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"mobile") ) { return mobile; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { return language; }
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return screenWidth; }
		if (HX_FIELD_EQ(inName,"windowWidth") ) { return windowWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return screenHeight; }
		if (HX_FIELD_EQ(inName,"windowHeight") ) { return windowHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClientWrapper_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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

void ClientWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("language","\x58","\x80","\x11","\x7a"));
	outFields->push(HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"));
	outFields->push(HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"));
	outFields->push(HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81"));
	outFields->push(HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf"));
	outFields->push(HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"));
	outFields->push(HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ClientWrapper_obj,language),HX_HCSTRING("language","\x58","\x80","\x11","\x7a")},
	{hx::fsFloat,(int)offsetof(ClientWrapper_obj,dpi),HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00")},
	{hx::fsString,(int)offsetof(ClientWrapper_obj,platform),HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67")},
	{hx::fsString,(int)offsetof(ClientWrapper_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsBool,(int)offsetof(ClientWrapper_obj,mobile),HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf")},
	{hx::fsFloat,(int)offsetof(ClientWrapper_obj,screenWidth),HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81")},
	{hx::fsFloat,(int)offsetof(ClientWrapper_obj,screenHeight),HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf")},
	{hx::fsFloat,(int)offsetof(ClientWrapper_obj,windowWidth),HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb")},
	{hx::fsFloat,(int)offsetof(ClientWrapper_obj,windowHeight),HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("language","\x58","\x80","\x11","\x7a"),
	HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"),
	HX_HCSTRING("platform","\xb3","\xb2","\xf9","\x67"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("mobile","\x62","\xac","\x77","\xbf"),
	HX_HCSTRING("screenWidth","\xfa","\x02","\xe8","\x81"),
	HX_HCSTRING("screenHeight","\x73","\x10","\x6a","\xdf"),
	HX_HCSTRING("windowWidth","\xf6","\x4b","\x35","\xbb"),
	HX_HCSTRING("windowHeight","\xf7","\xa3","\xbc","\xc9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientWrapper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientWrapper_obj::__mClass,"__mClass");
};

#endif

hx::Class ClientWrapper_obj::__mClass;

void ClientWrapper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.hscript.ClientWrapper","\xeb","\x36","\x32","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClientWrapper_obj >;
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
} // end namespace hscript
