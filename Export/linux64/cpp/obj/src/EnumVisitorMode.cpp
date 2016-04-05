#include <hxcpp.h>

#ifndef INCLUDED_EnumVisitorMode
#include <EnumVisitorMode.h>
#endif

::EnumVisitorMode EnumVisitorMode_obj::HARDWARE_MANUAL;

::EnumVisitorMode EnumVisitorMode_obj::SOFTWARE_AUTO;

::EnumVisitorMode EnumVisitorMode_obj::SOFTWARE_MANUAL;

HX_DEFINE_CREATE_ENUM(EnumVisitorMode_obj)

int EnumVisitorMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("HARDWARE_MANUAL","\x3d","\x9e","\x80","\x96")) return 0;
	if (inName==HX_HCSTRING("SOFTWARE_AUTO","\xc7","\x89","\x5e","\x39")) return 1;
	if (inName==HX_HCSTRING("SOFTWARE_MANUAL","\x9e","\x02","\xbc","\x79")) return 2;
	return super::__FindIndex(inName);
}

int EnumVisitorMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("HARDWARE_MANUAL","\x3d","\x9e","\x80","\x96")) return 0;
	if (inName==HX_HCSTRING("SOFTWARE_AUTO","\xc7","\x89","\x5e","\x39")) return 0;
	if (inName==HX_HCSTRING("SOFTWARE_MANUAL","\x9e","\x02","\xbc","\x79")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumVisitorMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("HARDWARE_MANUAL","\x3d","\x9e","\x80","\x96")) return HARDWARE_MANUAL;
	if (inName==HX_HCSTRING("SOFTWARE_AUTO","\xc7","\x89","\x5e","\x39")) return SOFTWARE_AUTO;
	if (inName==HX_HCSTRING("SOFTWARE_MANUAL","\x9e","\x02","\xbc","\x79")) return SOFTWARE_MANUAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("HARDWARE_MANUAL","\x3d","\x9e","\x80","\x96"),
	HX_HCSTRING("SOFTWARE_AUTO","\xc7","\x89","\x5e","\x39"),
	HX_HCSTRING("SOFTWARE_MANUAL","\x9e","\x02","\xbc","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumVisitorMode_obj::HARDWARE_MANUAL,"HARDWARE_MANUAL");
	HX_MARK_MEMBER_NAME(EnumVisitorMode_obj::SOFTWARE_AUTO,"SOFTWARE_AUTO");
	HX_MARK_MEMBER_NAME(EnumVisitorMode_obj::SOFTWARE_MANUAL,"SOFTWARE_MANUAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumVisitorMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumVisitorMode_obj::HARDWARE_MANUAL,"HARDWARE_MANUAL");
	HX_VISIT_MEMBER_NAME(EnumVisitorMode_obj::SOFTWARE_AUTO,"SOFTWARE_AUTO");
	HX_VISIT_MEMBER_NAME(EnumVisitorMode_obj::SOFTWARE_MANUAL,"SOFTWARE_MANUAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnumVisitorMode_obj::__mClass;

Dynamic __Create_EnumVisitorMode_obj() { return new EnumVisitorMode_obj; }

void EnumVisitorMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnumVisitorMode","\x90","\x14","\x6c","\x1f"), hx::TCanCast< EnumVisitorMode_obj >,sStaticFields,sMemberFields,
	&__Create_EnumVisitorMode_obj, &__Create,
	&super::__SGetClass(), &CreateEnumVisitorMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnumVisitorMode_obj::__boot()
{
hx::Static(HARDWARE_MANUAL) = hx::CreateEnum< EnumVisitorMode_obj >(HX_HCSTRING("HARDWARE_MANUAL","\x3d","\x9e","\x80","\x96"),0);
hx::Static(SOFTWARE_AUTO) = hx::CreateEnum< EnumVisitorMode_obj >(HX_HCSTRING("SOFTWARE_AUTO","\xc7","\x89","\x5e","\x39"),1);
hx::Static(SOFTWARE_MANUAL) = hx::CreateEnum< EnumVisitorMode_obj >(HX_HCSTRING("SOFTWARE_MANUAL","\x9e","\x02","\xbc","\x79"),2);
}


