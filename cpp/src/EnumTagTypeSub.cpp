#include <hxcpp.h>

#ifndef INCLUDED_EnumTagTypeSub
#include <EnumTagTypeSub.h>
#endif

::EnumTagTypeSub EnumTagTypeSub_obj::BASIC;

::EnumTagTypeSub EnumTagTypeSub_obj::NOUN;

::EnumTagTypeSub EnumTagTypeSub_obj::NOUN_POS;

::EnumTagTypeSub EnumTagTypeSub_obj::NOUN_S;

::EnumTagTypeSub EnumTagTypeSub_obj::VERB_1;

::EnumTagTypeSub EnumTagTypeSub_obj::VERB_2;

::EnumTagTypeSub EnumTagTypeSub_obj::VERB_3;

::EnumTagTypeSub EnumTagTypeSub_obj::VERB_ING;

::EnumTagTypeSub EnumTagTypeSub_obj::VERB_S;

HX_DEFINE_CREATE_ENUM(EnumTagTypeSub_obj)

int EnumTagTypeSub_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BASIC","\x8e","\x62","\xa8","\x2b")) return 0;
	if (inName==HX_HCSTRING("NOUN","\xda","\xe0","\xca","\x33")) return 1;
	if (inName==HX_HCSTRING("NOUN_POS","\x4f","\x94","\x1d","\x67")) return 2;
	if (inName==HX_HCSTRING("NOUN_S","\x6e","\x9e","\xe8","\xe4")) return 3;
	if (inName==HX_HCSTRING("VERB_1","\x51","\xf5","\xbc","\x53")) return 4;
	if (inName==HX_HCSTRING("VERB_2","\x52","\xf5","\xbc","\x53")) return 5;
	if (inName==HX_HCSTRING("VERB_3","\x53","\xf5","\xbc","\x53")) return 6;
	if (inName==HX_HCSTRING("VERB_ING","\xe2","\x25","\xf4","\x74")) return 7;
	if (inName==HX_HCSTRING("VERB_S","\x73","\xf5","\xbc","\x53")) return 8;
	return super::__FindIndex(inName);
}

int EnumTagTypeSub_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BASIC","\x8e","\x62","\xa8","\x2b")) return 0;
	if (inName==HX_HCSTRING("NOUN","\xda","\xe0","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("NOUN_POS","\x4f","\x94","\x1d","\x67")) return 0;
	if (inName==HX_HCSTRING("NOUN_S","\x6e","\x9e","\xe8","\xe4")) return 0;
	if (inName==HX_HCSTRING("VERB_1","\x51","\xf5","\xbc","\x53")) return 0;
	if (inName==HX_HCSTRING("VERB_2","\x52","\xf5","\xbc","\x53")) return 0;
	if (inName==HX_HCSTRING("VERB_3","\x53","\xf5","\xbc","\x53")) return 0;
	if (inName==HX_HCSTRING("VERB_ING","\xe2","\x25","\xf4","\x74")) return 0;
	if (inName==HX_HCSTRING("VERB_S","\x73","\xf5","\xbc","\x53")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumTagTypeSub_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BASIC","\x8e","\x62","\xa8","\x2b")) return BASIC;
	if (inName==HX_HCSTRING("NOUN","\xda","\xe0","\xca","\x33")) return NOUN;
	if (inName==HX_HCSTRING("NOUN_POS","\x4f","\x94","\x1d","\x67")) return NOUN_POS;
	if (inName==HX_HCSTRING("NOUN_S","\x6e","\x9e","\xe8","\xe4")) return NOUN_S;
	if (inName==HX_HCSTRING("VERB_1","\x51","\xf5","\xbc","\x53")) return VERB_1;
	if (inName==HX_HCSTRING("VERB_2","\x52","\xf5","\xbc","\x53")) return VERB_2;
	if (inName==HX_HCSTRING("VERB_3","\x53","\xf5","\xbc","\x53")) return VERB_3;
	if (inName==HX_HCSTRING("VERB_ING","\xe2","\x25","\xf4","\x74")) return VERB_ING;
	if (inName==HX_HCSTRING("VERB_S","\x73","\xf5","\xbc","\x53")) return VERB_S;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BASIC","\x8e","\x62","\xa8","\x2b"),
	HX_HCSTRING("NOUN","\xda","\xe0","\xca","\x33"),
	HX_HCSTRING("NOUN_POS","\x4f","\x94","\x1d","\x67"),
	HX_HCSTRING("NOUN_S","\x6e","\x9e","\xe8","\xe4"),
	HX_HCSTRING("VERB_1","\x51","\xf5","\xbc","\x53"),
	HX_HCSTRING("VERB_2","\x52","\xf5","\xbc","\x53"),
	HX_HCSTRING("VERB_3","\x53","\xf5","\xbc","\x53"),
	HX_HCSTRING("VERB_ING","\xe2","\x25","\xf4","\x74"),
	HX_HCSTRING("VERB_S","\x73","\xf5","\xbc","\x53"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::BASIC,"BASIC");
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::NOUN,"NOUN");
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::NOUN_POS,"NOUN_POS");
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::NOUN_S,"NOUN_S");
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::VERB_1,"VERB_1");
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::VERB_2,"VERB_2");
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::VERB_3,"VERB_3");
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::VERB_ING,"VERB_ING");
	HX_MARK_MEMBER_NAME(EnumTagTypeSub_obj::VERB_S,"VERB_S");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::BASIC,"BASIC");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::NOUN,"NOUN");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::NOUN_POS,"NOUN_POS");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::NOUN_S,"NOUN_S");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::VERB_1,"VERB_1");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::VERB_2,"VERB_2");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::VERB_3,"VERB_3");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::VERB_ING,"VERB_ING");
	HX_VISIT_MEMBER_NAME(EnumTagTypeSub_obj::VERB_S,"VERB_S");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnumTagTypeSub_obj::__mClass;

Dynamic __Create_EnumTagTypeSub_obj() { return new EnumTagTypeSub_obj; }

void EnumTagTypeSub_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnumTagTypeSub","\x2d","\xba","\xee","\x2b"), hx::TCanCast< EnumTagTypeSub_obj >,sStaticFields,sMemberFields,
	&__Create_EnumTagTypeSub_obj, &__Create,
	&super::__SGetClass(), &CreateEnumTagTypeSub_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnumTagTypeSub_obj::__boot()
{
hx::Static(BASIC) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("BASIC","\x8e","\x62","\xa8","\x2b"),0);
hx::Static(NOUN) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("NOUN","\xda","\xe0","\xca","\x33"),1);
hx::Static(NOUN_POS) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("NOUN_POS","\x4f","\x94","\x1d","\x67"),2);
hx::Static(NOUN_S) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("NOUN_S","\x6e","\x9e","\xe8","\xe4"),3);
hx::Static(VERB_1) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("VERB_1","\x51","\xf5","\xbc","\x53"),4);
hx::Static(VERB_2) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("VERB_2","\x52","\xf5","\xbc","\x53"),5);
hx::Static(VERB_3) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("VERB_3","\x53","\xf5","\xbc","\x53"),6);
hx::Static(VERB_ING) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("VERB_ING","\xe2","\x25","\xf4","\x74"),7);
hx::Static(VERB_S) = hx::CreateEnum< EnumTagTypeSub_obj >(HX_HCSTRING("VERB_S","\x73","\xf5","\xbc","\x53"),8);
}


