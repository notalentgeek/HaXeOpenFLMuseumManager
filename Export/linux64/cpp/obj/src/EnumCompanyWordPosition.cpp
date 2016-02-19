#include <hxcpp.h>

#ifndef INCLUDED_EnumCompanyWordPosition
#include <EnumCompanyWordPosition.h>
#endif

::EnumCompanyWordPosition EnumCompanyWordPosition_obj::PRE;

::EnumCompanyWordPosition EnumCompanyWordPosition_obj::SUF;

HX_DEFINE_CREATE_ENUM(EnumCompanyWordPosition_obj)

int EnumCompanyWordPosition_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("PRE","\x03","\xfc","\x3c","\x00")) return 0;
	if (inName==HX_HCSTRING("SUF","\x64","\x45","\x3f","\x00")) return 1;
	return super::__FindIndex(inName);
}

int EnumCompanyWordPosition_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("PRE","\x03","\xfc","\x3c","\x00")) return 0;
	if (inName==HX_HCSTRING("SUF","\x64","\x45","\x3f","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumCompanyWordPosition_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("PRE","\x03","\xfc","\x3c","\x00")) return PRE;
	if (inName==HX_HCSTRING("SUF","\x64","\x45","\x3f","\x00")) return SUF;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("PRE","\x03","\xfc","\x3c","\x00"),
	HX_HCSTRING("SUF","\x64","\x45","\x3f","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumCompanyWordPosition_obj::PRE,"PRE");
	HX_MARK_MEMBER_NAME(EnumCompanyWordPosition_obj::SUF,"SUF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumCompanyWordPosition_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumCompanyWordPosition_obj::PRE,"PRE");
	HX_VISIT_MEMBER_NAME(EnumCompanyWordPosition_obj::SUF,"SUF");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnumCompanyWordPosition_obj::__mClass;

Dynamic __Create_EnumCompanyWordPosition_obj() { return new EnumCompanyWordPosition_obj; }

void EnumCompanyWordPosition_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnumCompanyWordPosition","\xcf","\x7a","\x95","\x5c"), hx::TCanCast< EnumCompanyWordPosition_obj >,sStaticFields,sMemberFields,
	&__Create_EnumCompanyWordPosition_obj, &__Create,
	&super::__SGetClass(), &CreateEnumCompanyWordPosition_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnumCompanyWordPosition_obj::__boot()
{
hx::Static(PRE) = hx::CreateEnum< EnumCompanyWordPosition_obj >(HX_HCSTRING("PRE","\x03","\xfc","\x3c","\x00"),0);
hx::Static(SUF) = hx::CreateEnum< EnumCompanyWordPosition_obj >(HX_HCSTRING("SUF","\x64","\x45","\x3f","\x00"),1);
}


