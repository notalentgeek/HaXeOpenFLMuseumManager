#include <hxcpp.h>

#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif

::EnumTagType EnumTagType_obj::ADJ;

::EnumTagType EnumTagType_obj::ADV;

::EnumTagType EnumTagType_obj::NOUN_ALIVE_ABSTRACT;

::EnumTagType EnumTagType_obj::NOUN_ALIVE_CONCRETE;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_HOLD_ABSTRACT;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_SEE_ABSTRACT;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_TITLE;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT;

::EnumTagType EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE;

::EnumTagType EnumTagType_obj::VERB_INTRANSITIVE;

::EnumTagType EnumTagType_obj::VERB_TRANSITIVE;

HX_DEFINE_CREATE_ENUM(EnumTagType_obj)

int EnumTagType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00")) return 1;
	if (inName==HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6")) return 2;
	if (inName==HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc")) return 3;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f")) return 4;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25")) return 5;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84")) return 6;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14")) return 7;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba")) return 8;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b")) return 9;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11")) return 10;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1")) return 11;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf")) return 12;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4")) return 13;
	if (inName==HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7")) return 14;
	if (inName==HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed")) return 15;
	return super::__FindIndex(inName);
}

int EnumTagType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6")) return 0;
	if (inName==HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf")) return 0;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4")) return 0;
	if (inName==HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7")) return 0;
	if (inName==HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumTagType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00")) return ADJ;
	if (inName==HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00")) return ADV;
	if (inName==HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6")) return NOUN_ALIVE_ABSTRACT;
	if (inName==HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc")) return NOUN_ALIVE_CONCRETE;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f")) return NOUN_INANIMATE_HOLD_ABSTRACT;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25")) return NOUN_INANIMATE_HOLD_CONCRETE;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84")) return NOUN_INANIMATE_PLACE_ABSTRACT;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14")) return NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba")) return NOUN_INANIMATE_PLACE_CONCRETE_OWNER;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b")) return NOUN_INANIMATE_SEE_ABSTRACT;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11")) return NOUN_INANIMATE_SEE_CONCRETE;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1")) return NOUN_INANIMATE_TITLE;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf")) return NOUN_INANIMATE_WEAR_ABSTRACT;
	if (inName==HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4")) return NOUN_INANIMATE_WEAR_CONCRETE;
	if (inName==HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7")) return VERB_INTRANSITIVE;
	if (inName==HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed")) return VERB_TRANSITIVE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00"),
	HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00"),
	HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6"),
	HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc"),
	HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f"),
	HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25"),
	HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84"),
	HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14"),
	HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba"),
	HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b"),
	HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11"),
	HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1"),
	HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf"),
	HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4"),
	HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7"),
	HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumTagType_obj::ADJ,"ADJ");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::ADV,"ADV");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_ALIVE_ABSTRACT,"NOUN_ALIVE_ABSTRACT");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_ALIVE_CONCRETE,"NOUN_ALIVE_CONCRETE");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_HOLD_ABSTRACT,"NOUN_INANIMATE_HOLD_ABSTRACT");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,"NOUN_INANIMATE_HOLD_CONCRETE");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT,"NOUN_INANIMATE_PLACE_ABSTRACT");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER,"NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,"NOUN_INANIMATE_PLACE_CONCRETE_OWNER");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_SEE_ABSTRACT,"NOUN_INANIMATE_SEE_ABSTRACT");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE,"NOUN_INANIMATE_SEE_CONCRETE");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_TITLE,"NOUN_INANIMATE_TITLE");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT,"NOUN_INANIMATE_WEAR_ABSTRACT");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE,"NOUN_INANIMATE_WEAR_CONCRETE");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::VERB_INTRANSITIVE,"VERB_INTRANSITIVE");
	HX_MARK_MEMBER_NAME(EnumTagType_obj::VERB_TRANSITIVE,"VERB_TRANSITIVE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::ADJ,"ADJ");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::ADV,"ADV");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_ALIVE_ABSTRACT,"NOUN_ALIVE_ABSTRACT");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_ALIVE_CONCRETE,"NOUN_ALIVE_CONCRETE");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_HOLD_ABSTRACT,"NOUN_INANIMATE_HOLD_ABSTRACT");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,"NOUN_INANIMATE_HOLD_CONCRETE");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT,"NOUN_INANIMATE_PLACE_ABSTRACT");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER,"NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,"NOUN_INANIMATE_PLACE_CONCRETE_OWNER");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_SEE_ABSTRACT,"NOUN_INANIMATE_SEE_ABSTRACT");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE,"NOUN_INANIMATE_SEE_CONCRETE");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_TITLE,"NOUN_INANIMATE_TITLE");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT,"NOUN_INANIMATE_WEAR_ABSTRACT");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE,"NOUN_INANIMATE_WEAR_CONCRETE");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::VERB_INTRANSITIVE,"VERB_INTRANSITIVE");
	HX_VISIT_MEMBER_NAME(EnumTagType_obj::VERB_TRANSITIVE,"VERB_TRANSITIVE");
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
hx::Static(NOUN_INANIMATE_HOLD_ABSTRACT) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f"),4);
hx::Static(NOUN_INANIMATE_HOLD_CONCRETE) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25"),5);
hx::Static(NOUN_INANIMATE_PLACE_ABSTRACT) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84"),6);
hx::Static(NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14"),7);
hx::Static(NOUN_INANIMATE_PLACE_CONCRETE_OWNER) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba"),8);
hx::Static(NOUN_INANIMATE_SEE_ABSTRACT) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b"),9);
hx::Static(NOUN_INANIMATE_SEE_CONCRETE) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11"),10);
hx::Static(NOUN_INANIMATE_TITLE) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1"),11);
hx::Static(NOUN_INANIMATE_WEAR_ABSTRACT) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf"),12);
hx::Static(NOUN_INANIMATE_WEAR_CONCRETE) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4"),13);
hx::Static(VERB_INTRANSITIVE) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7"),14);
hx::Static(VERB_TRANSITIVE) = hx::CreateEnum< EnumTagType_obj >(HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed"),15);
}


