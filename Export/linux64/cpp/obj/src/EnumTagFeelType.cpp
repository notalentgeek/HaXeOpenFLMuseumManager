#include <hxcpp.h>

#ifndef INCLUDED_EnumTagFeelType
#include <EnumTagFeelType.h>
#endif

::EnumTagFeelType EnumTagFeelType_obj::NEGATIVE;

::EnumTagFeelType EnumTagFeelType_obj::NEUTRAL;

::EnumTagFeelType EnumTagFeelType_obj::POSITIVE;

HX_DEFINE_CREATE_ENUM(EnumTagFeelType_obj)

int EnumTagFeelType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa")) return 0;
	if (inName==HX_HCSTRING("NEUTRAL","\x27","\xc1","\xfd","\x6a")) return 1;
	if (inName==HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24")) return 2;
	return super::__FindIndex(inName);
}

int EnumTagFeelType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa")) return 0;
	if (inName==HX_HCSTRING("NEUTRAL","\x27","\xc1","\xfd","\x6a")) return 0;
	if (inName==HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumTagFeelType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa")) return NEGATIVE;
	if (inName==HX_HCSTRING("NEUTRAL","\x27","\xc1","\xfd","\x6a")) return NEUTRAL;
	if (inName==HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24")) return POSITIVE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa"),
	HX_HCSTRING("NEUTRAL","\x27","\xc1","\xfd","\x6a"),
	HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumTagFeelType_obj::NEGATIVE,"NEGATIVE");
	HX_MARK_MEMBER_NAME(EnumTagFeelType_obj::NEUTRAL,"NEUTRAL");
	HX_MARK_MEMBER_NAME(EnumTagFeelType_obj::POSITIVE,"POSITIVE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumTagFeelType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumTagFeelType_obj::NEGATIVE,"NEGATIVE");
	HX_VISIT_MEMBER_NAME(EnumTagFeelType_obj::NEUTRAL,"NEUTRAL");
	HX_VISIT_MEMBER_NAME(EnumTagFeelType_obj::POSITIVE,"POSITIVE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnumTagFeelType_obj::__mClass;

Dynamic __Create_EnumTagFeelType_obj() { return new EnumTagFeelType_obj; }

void EnumTagFeelType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnumTagFeelType","\x19","\x0c","\x12","\x87"), hx::TCanCast< EnumTagFeelType_obj >,sStaticFields,sMemberFields,
	&__Create_EnumTagFeelType_obj, &__Create,
	&super::__SGetClass(), &CreateEnumTagFeelType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnumTagFeelType_obj::__boot()
{
hx::Static(NEGATIVE) = hx::CreateEnum< EnumTagFeelType_obj >(HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa"),0);
hx::Static(NEUTRAL) = hx::CreateEnum< EnumTagFeelType_obj >(HX_HCSTRING("NEUTRAL","\x27","\xc1","\xfd","\x6a"),1);
hx::Static(POSITIVE) = hx::CreateEnum< EnumTagFeelType_obj >(HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24"),2);
}


