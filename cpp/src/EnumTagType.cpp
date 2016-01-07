#include <hxcpp.h>

#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif

::EnumTagType EnumTagType_obj::ADJ;

::EnumTagType EnumTagType_obj::ADV;

::EnumTagType EnumTagType_obj::NOUN_ALIVE_ABSTRACT;

::EnumTagType EnumTagType_obj::NOUN_ALIVE_CONCRETE;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_ABSTRACT;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_CONCRETE;

::EnumTagType EnumTagType_obj::VERB;

HX_DEFINE_CREATE_ENUM(EnumTagType_obj)

int EnumTagType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00")) return 1;
	if (inName==HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6")) return 2;
	if (inName==HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc")) return 3;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_ABSTRACT","\x0a","\x2f","\x53","\x67")) return 4;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_CONCRETE","\x6d","\x88","\xb9","\x2c")) return 5;
	if (inName==HX_HCSTRING("VERB","\x9f","\xfc","\x0c","\x39")) return 6;
	return super::__FindIndex(inName);
}

int EnumTagType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6")) return 0;
	if (inName==HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_ABSTRACT","\x0a","\x2f","\x53","\x67")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_CONCRETE","\x6d","\x88","\xb9","\x2c")) return 0;
	if (inName==HX_HCSTRING("VERB","\x9f","\xfc","\x0c","\x39")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumTagType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00")) return ADJ;
	if (inName==HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00")) return ADV;
	if (inName==HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6")) return NOUN_ALIVE_ABSTRACT;
	if (inName==HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc")) return NOUN_ALIVE_CONCRETE;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_ABSTRACT","\x0a","\x2f","\x53","\x67")) return NOUN_INANIMATE_ABSTRACT;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_CONCRETE","\x6d","\x88","\xb9","\x2c")) return NOUN_INANIMATE_CONCRETE;
	if (inName==HX_HCSTRING("VERB","\x9f","\xfc","\x0c","\x39")) return VERB;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00"),
	HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00"),
	HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6"),
	HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc"),
	HX_HCSTRING("NOUN_INANIMATE_ABSTRACT","\x0a","\x2f","\x53","\x67"),
	HX_HCSTRING("NOUN_INANIMATE_CONCRETE","\x6d","\x88","\xb9","\x2c"),
	HX_HCSTRING("VERB","\x9f","\xfc","\x0c","\x39"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumTagType_obj::ADJ,"ADJ");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::ADV,"ADV");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_ALIVE_ABSTRACT,"NOUN_ALIVE_ABSTRACT");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_ALIVE_CONCRETE,"NOUN_ALIVE_CONCRETE");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_ABSTRACT,"NOUN_INANIMATE_ABSTRACT");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_CONCRETE,"NOUN_INANIMATE_CONCRETE");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::VERB,"VERB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::ADJ,"ADJ");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::ADV,"ADV");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_ALIVE_ABSTRACT,"NOUN_ALIVE_ABSTRACT");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_ALIVE_CONCRETE,"NOUN_ALIVE_CONCRETE");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_ABSTRACT,"NOUN_INANIMATE_ABSTRACT");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_CONCRETE,"NOUN_INANIMATE_CONCRETE");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::VERB,"VERB");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnumTagType_obj::__mClass;

Dynamic __Create_EnumTagType_obj() { return new EnumTagType_obj; }

void EnumTagType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnumTagType","\x13","\xd5","\x92","\x12"), hx::TCanCast< EnumTagType_obj >,sStaticFields,sMemberFields,
	&__Create_EnumTagType_obj, &__Create,
	&super::__SGetClass(), &CreateEnumTagType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnumTagType_obj::__boot()
{
hx::Static(ADJ) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00"),0);
hx::Static(ADV) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00"),1);
hx::Static(NOUN_ALIVE_ABSTRACT) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6"),2);
hx::Static(NOUN_ALIVE_CONCRETE) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc"),3);
hx::Static(NOUN_INANIMATE_ABSTRACT) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_ABSTRACT","\x0a","\x2f","\x53","\x67"),4);
hx::Static(NOUN_INANIMATE_CONCRETE) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_CONCRETE","\x6d","\x88","\xb9","\x2c"),5);
hx::Static(VERB) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("VERB","\x9f","\xfc","\x0c","\x39"),6);
}


