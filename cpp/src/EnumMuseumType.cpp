#include <hxcpp.h>

#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif

::EnumMuseumType EnumMuseumType_obj::EXH;

::EnumMuseumType EnumMuseumType_obj::FLR;

::EnumMuseumType EnumMuseumType_obj::ROM;

HX_DEFINE_CREATE_ENUM(EnumMuseumType_obj)

int EnumMuseumType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00")) return 0;
	if (inName==HX_HCSTRING("FLR","\x4c","\x60","\x35","\x00")) return 1;
	if (inName==HX_HCSTRING("ROM","\xf0","\x7d","\x3e","\x00")) return 2;
	return super::__FindIndex(inName);
}

int EnumMuseumType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00")) return 0;
	if (inName==HX_HCSTRING("FLR","\x4c","\x60","\x35","\x00")) return 0;
	if (inName==HX_HCSTRING("ROM","\xf0","\x7d","\x3e","\x00")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumMuseumType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00")) return EXH;
	if (inName==HX_HCSTRING("FLR","\x4c","\x60","\x35","\x00")) return FLR;
	if (inName==HX_HCSTRING("ROM","\xf0","\x7d","\x3e","\x00")) return ROM;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00"),
	HX_HCSTRING("FLR","\x4c","\x60","\x35","\x00"),
	HX_HCSTRING("ROM","\xf0","\x7d","\x3e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumMuseumType_obj::EXH,"EXH");
	HX_MARK_MEMBER_NAME(EnumMuseumType_obj::FLR,"FLR");
	HX_MARK_MEMBER_NAME(EnumMuseumType_obj::ROM,"ROM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumMuseumType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumMuseumType_obj::EXH,"EXH");
	HX_VISIT_MEMBER_NAME(EnumMuseumType_obj::FLR,"FLR");
	HX_VISIT_MEMBER_NAME(EnumMuseumType_obj::ROM,"ROM");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnumMuseumType_obj::__mClass;

Dynamic __Create_EnumMuseumType_obj() { return new EnumMuseumType_obj; }

void EnumMuseumType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnumMuseumType","\x2d","\xe5","\x4a","\x77"), hx::TCanCast< EnumMuseumType_obj >,sStaticFields,sMemberFields,
	&__Create_EnumMuseumType_obj, &__Create,
	&super::__SGetClass(), &CreateEnumMuseumType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnumMuseumType_obj::__boot()
{
hx::Static(EXH) = hx::CreateEnum< EnumMuseumType_obj >(HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00"),0);
hx::Static(FLR) = hx::CreateEnum< EnumMuseumType_obj >(HX_HCSTRING("FLR","\x4c","\x60","\x35","\x00"),1);
hx::Static(ROM) = hx::CreateEnum< EnumMuseumType_obj >(HX_HCSTRING("ROM","\xf0","\x7d","\x3e","\x00"),2);
}


