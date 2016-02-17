#include <hxcpp.h>

#ifndef INCLUDED_EnumMuseumMode
#include <EnumMuseumMode.h>
#endif

::EnumMuseumMode EnumMuseumMode_obj::MRK_DEL;

::EnumMuseumMode EnumMuseumMode_obj::REQ_CH_PARENT;

HX_DEFINE_CREATE_ENUM(EnumMuseumMode_obj)

int EnumMuseumMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("MRK_DEL","\xf2","\xea","\x44","\xb9")) return 1;
	if (inName==HX_HCSTRING("REQ_CH_PARENT","\x43","\x81","\x19","\x8c")) return 0;
	return super::__FindIndex(inName);
}

int EnumMuseumMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("MRK_DEL","\xf2","\xea","\x44","\xb9")) return 0;
	if (inName==HX_HCSTRING("REQ_CH_PARENT","\x43","\x81","\x19","\x8c")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnumMuseumMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("MRK_DEL","\xf2","\xea","\x44","\xb9")) return MRK_DEL;
	if (inName==HX_HCSTRING("REQ_CH_PARENT","\x43","\x81","\x19","\x8c")) return REQ_CH_PARENT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("REQ_CH_PARENT","\x43","\x81","\x19","\x8c"),
	HX_HCSTRING("MRK_DEL","\xf2","\xea","\x44","\xb9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumMuseumMode_obj::MRK_DEL,"MRK_DEL");
	HX_MARK_MEMBER_NAME(EnumMuseumMode_obj::REQ_CH_PARENT,"REQ_CH_PARENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumMuseumMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumMuseumMode_obj::MRK_DEL,"MRK_DEL");
	HX_VISIT_MEMBER_NAME(EnumMuseumMode_obj::REQ_CH_PARENT,"REQ_CH_PARENT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnumMuseumMode_obj::__mClass;

Dynamic __Create_EnumMuseumMode_obj() { return new EnumMuseumMode_obj; }

void EnumMuseumMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnumMuseumMode","\xd6","\xc5","\xa2","\x72"), hx::TCanCast< EnumMuseumMode_obj >,sStaticFields,sMemberFields,
	&__Create_EnumMuseumMode_obj, &__Create,
	&super::__SGetClass(), &CreateEnumMuseumMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnumMuseumMode_obj::__boot()
{
hx::Static(MRK_DEL) = hx::CreateEnum< EnumMuseumMode_obj >(HX_HCSTRING("MRK_DEL","\xf2","\xea","\x44","\xb9"),1);
hx::Static(REQ_CH_PARENT) = hx::CreateEnum< EnumMuseumMode_obj >(HX_HCSTRING("REQ_CH_PARENT","\x43","\x81","\x19","\x8c"),0);
}


