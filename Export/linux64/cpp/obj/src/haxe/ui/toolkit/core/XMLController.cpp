#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#include <haxe/ui/toolkit/core/XMLController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void XMLController_obj::__construct(::String xmlResourceId)
{
HX_STACK_FRAME("haxe.ui.toolkit.core.XMLController","new",0x89c4b918,"haxe.ui.toolkit.core.XMLController.new","haxe/ui/toolkit/core/XMLController.hx",7,0xe67ef318)
HX_STACK_THIS(this)
HX_STACK_ARG(xmlResourceId,"xmlResourceId")
{
	HX_STACK_LINE(8)
	::haxe::ui::toolkit::resources::ResourceManager tmp = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	::String tmp1 = xmlResourceId;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8)
	::String tmp2 = tmp->getText(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8)
	::Xml tmp3 = ::Xml_obj::parse(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(8)
	Dynamic tmp4 = ::haxe::ui::toolkit::core::Toolkit_obj::processXml(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(8)
	super::__construct(tmp4,null());
}
;
	return null();
}

//XMLController_obj::~XMLController_obj() { }

Dynamic XMLController_obj::__CreateEmpty() { return  new XMLController_obj; }
hx::ObjectPtr< XMLController_obj > XMLController_obj::__new(::String xmlResourceId)
{  hx::ObjectPtr< XMLController_obj > _result_ = new XMLController_obj();
	_result_->__construct(xmlResourceId);
	return _result_;}

Dynamic XMLController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XMLController_obj > _result_ = new XMLController_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


XMLController_obj::XMLController_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XMLController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLController_obj::__mClass,"__mClass");
};

#endif

hx::Class XMLController_obj::__mClass;

void XMLController_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.XMLController","\x26","\x8d","\x04","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< XMLController_obj >;
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
