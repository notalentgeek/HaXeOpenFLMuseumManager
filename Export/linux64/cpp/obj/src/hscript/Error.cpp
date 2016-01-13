#include <hxcpp.h>

#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
namespace hscript{

::hscript::Error  Error_obj::EInvalidAccess(::String f)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("EInvalidAccess","\x76","\xc0","\x1f","\xd1"),7,hx::DynamicArray(0,1).Add(f)); }

::hscript::Error  Error_obj::EInvalidChar(int c)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("EInvalidChar","\x28","\xd1","\x99","\x46"),0,hx::DynamicArray(0,1).Add(c)); }

::hscript::Error  Error_obj::EInvalidIterator(::String v)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("EInvalidIterator","\x40","\x4d","\x71","\xf2"),5,hx::DynamicArray(0,1).Add(v)); }

::hscript::Error  Error_obj::EInvalidOp(::String op)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("EInvalidOp","\xf3","\x3a","\x13","\xf7"),6,hx::DynamicArray(0,1).Add(op)); }

::hscript::Error  Error_obj::EUnexpected(::String s)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("EUnexpected","\x76","\x02","\x98","\x78"),1,hx::DynamicArray(0,1).Add(s)); }

::hscript::Error  Error_obj::EUnknownVariable(::String v)
	{ return hx::CreateEnum< Error_obj >(HX_HCSTRING("EUnknownVariable","\x21","\xa9","\x3e","\x5f"),4,hx::DynamicArray(0,1).Add(v)); }

::hscript::Error Error_obj::EUnterminatedComment;

::hscript::Error Error_obj::EUnterminatedString;

HX_DEFINE_CREATE_ENUM(Error_obj)

int Error_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("EInvalidAccess","\x76","\xc0","\x1f","\xd1")) return 7;
	if (inName==HX_HCSTRING("EInvalidChar","\x28","\xd1","\x99","\x46")) return 0;
	if (inName==HX_HCSTRING("EInvalidIterator","\x40","\x4d","\x71","\xf2")) return 5;
	if (inName==HX_HCSTRING("EInvalidOp","\xf3","\x3a","\x13","\xf7")) return 6;
	if (inName==HX_HCSTRING("EUnexpected","\x76","\x02","\x98","\x78")) return 1;
	if (inName==HX_HCSTRING("EUnknownVariable","\x21","\xa9","\x3e","\x5f")) return 4;
	if (inName==HX_HCSTRING("EUnterminatedComment","\xfe","\xed","\xab","\x07")) return 3;
	if (inName==HX_HCSTRING("EUnterminatedString","\x12","\x4e","\x75","\x07")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidAccess,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidChar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidIterator,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidOp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EUnexpected,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EUnknownVariable,return)

int Error_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("EInvalidAccess","\x76","\xc0","\x1f","\xd1")) return 1;
	if (inName==HX_HCSTRING("EInvalidChar","\x28","\xd1","\x99","\x46")) return 1;
	if (inName==HX_HCSTRING("EInvalidIterator","\x40","\x4d","\x71","\xf2")) return 1;
	if (inName==HX_HCSTRING("EInvalidOp","\xf3","\x3a","\x13","\xf7")) return 1;
	if (inName==HX_HCSTRING("EUnexpected","\x76","\x02","\x98","\x78")) return 1;
	if (inName==HX_HCSTRING("EUnknownVariable","\x21","\xa9","\x3e","\x5f")) return 1;
	if (inName==HX_HCSTRING("EUnterminatedComment","\xfe","\xed","\xab","\x07")) return 0;
	if (inName==HX_HCSTRING("EUnterminatedString","\x12","\x4e","\x75","\x07")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Error_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("EInvalidAccess","\x76","\xc0","\x1f","\xd1")) return EInvalidAccess_dyn();
	if (inName==HX_HCSTRING("EInvalidChar","\x28","\xd1","\x99","\x46")) return EInvalidChar_dyn();
	if (inName==HX_HCSTRING("EInvalidIterator","\x40","\x4d","\x71","\xf2")) return EInvalidIterator_dyn();
	if (inName==HX_HCSTRING("EInvalidOp","\xf3","\x3a","\x13","\xf7")) return EInvalidOp_dyn();
	if (inName==HX_HCSTRING("EUnexpected","\x76","\x02","\x98","\x78")) return EUnexpected_dyn();
	if (inName==HX_HCSTRING("EUnknownVariable","\x21","\xa9","\x3e","\x5f")) return EUnknownVariable_dyn();
	if (inName==HX_HCSTRING("EUnterminatedComment","\xfe","\xed","\xab","\x07")) return EUnterminatedComment;
	if (inName==HX_HCSTRING("EUnterminatedString","\x12","\x4e","\x75","\x07")) return EUnterminatedString;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("EInvalidChar","\x28","\xd1","\x99","\x46"),
	HX_HCSTRING("EUnexpected","\x76","\x02","\x98","\x78"),
	HX_HCSTRING("EUnterminatedString","\x12","\x4e","\x75","\x07"),
	HX_HCSTRING("EUnterminatedComment","\xfe","\xed","\xab","\x07"),
	HX_HCSTRING("EUnknownVariable","\x21","\xa9","\x3e","\x5f"),
	HX_HCSTRING("EInvalidIterator","\x40","\x4d","\x71","\xf2"),
	HX_HCSTRING("EInvalidOp","\xf3","\x3a","\x13","\xf7"),
	HX_HCSTRING("EInvalidAccess","\x76","\xc0","\x1f","\xd1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Error_obj::EUnterminatedComment,"EUnterminatedComment");
	HX_MARK_MEMBER_NAME(Error_obj::EUnterminatedString,"EUnterminatedString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Error_obj::EUnterminatedComment,"EUnterminatedComment");
	HX_VISIT_MEMBER_NAME(Error_obj::EUnterminatedString,"EUnterminatedString");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Error_obj::__mClass;

Dynamic __Create_Error_obj() { return new Error_obj; }

void Error_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hscript.Error","\x6d","\xb9","\xef","\x23"), hx::TCanCast< Error_obj >,sStaticFields,sMemberFields,
	&__Create_Error_obj, &__Create,
	&super::__SGetClass(), &CreateError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Error_obj::__boot()
{
hx::Static(EUnterminatedComment) = hx::CreateEnum< Error_obj >(HX_HCSTRING("EUnterminatedComment","\xfe","\xed","\xab","\x07"),3);
hx::Static(EUnterminatedString) = hx::CreateEnum< Error_obj >(HX_HCSTRING("EUnterminatedString","\x12","\x4e","\x75","\x07"),2);
}


} // end namespace hscript
