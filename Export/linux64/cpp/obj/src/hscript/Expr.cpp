#include <hxcpp.h>

#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
namespace hscript{

::hscript::Expr  Expr_obj::EArray(::hscript::Expr e,::hscript::Expr index)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f"),16,hx::DynamicArray(0,2).Add(e).Add(index)); }

::hscript::Expr  Expr_obj::EArrayDecl(Array< ::Dynamic > e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01"),17,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr  Expr_obj::EBinop(::String op,::hscript::Expr e1,::hscript::Expr e2)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc"),6,hx::DynamicArray(0,3).Add(op).Add(e1).Add(e2)); }

::hscript::Expr  Expr_obj::EBlock(Array< ::Dynamic > e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde"),4,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr Expr_obj::EBreak;

::hscript::Expr  Expr_obj::ECall(::hscript::Expr e,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7"),8,hx::DynamicArray(0,2).Add(e).Add(params)); }

::hscript::Expr  Expr_obj::EConst(::hscript::Const c)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74"),0,hx::DynamicArray(0,1).Add(c)); }

::hscript::Expr Expr_obj::EContinue;

::hscript::Expr  Expr_obj::EField(::hscript::Expr e,::String f)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EField","\x35","\xea","\x60","\x2a"),5,hx::DynamicArray(0,2).Add(e).Add(f)); }

::hscript::Expr  Expr_obj::EFor(::String v,::hscript::Expr it,::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d"),11,hx::DynamicArray(0,3).Add(v).Add(it).Add(e)); }

::hscript::Expr  Expr_obj::EFunction(cpp::ArrayBase args,::hscript::Expr e,::String name,::hscript::CType ret)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9"),14,hx::DynamicArray(0,4).Add(args).Add(e).Add(name).Add(ret)); }

::hscript::Expr  Expr_obj::EIdent(::String v)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1"),1,hx::DynamicArray(0,1).Add(v)); }

::hscript::Expr  Expr_obj::EIf(::hscript::Expr cond,::hscript::Expr e1,::hscript::Expr e2)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00"),9,hx::DynamicArray(0,3).Add(cond).Add(e1).Add(e2)); }

::hscript::Expr  Expr_obj::ENew(::String cl,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d"),18,hx::DynamicArray(0,2).Add(cl).Add(params)); }

::hscript::Expr  Expr_obj::EObject(cpp::ArrayBase fl)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f"),21,hx::DynamicArray(0,1).Add(fl)); }

::hscript::Expr  Expr_obj::EParent(::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57"),3,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr  Expr_obj::EReturn(::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73"),15,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr  Expr_obj::ESwitch(::hscript::Expr e,cpp::ArrayBase cases,::hscript::Expr defaultExpr)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f"),23,hx::DynamicArray(0,3).Add(e).Add(cases).Add(defaultExpr)); }

::hscript::Expr  Expr_obj::ETernary(::hscript::Expr cond,::hscript::Expr e1,::hscript::Expr e2)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e"),22,hx::DynamicArray(0,3).Add(cond).Add(e1).Add(e2)); }

::hscript::Expr  Expr_obj::EThrow(::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39"),19,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr  Expr_obj::ETry(::hscript::Expr e,::String v,::hscript::CType t,::hscript::Expr ecatch)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d"),20,hx::DynamicArray(0,4).Add(e).Add(v).Add(t).Add(ecatch)); }

::hscript::Expr  Expr_obj::EUnop(::String op,bool prefix,::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3"),7,hx::DynamicArray(0,3).Add(op).Add(prefix).Add(e)); }

::hscript::Expr  Expr_obj::EVar(::String n,::hscript::CType t,::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d"),2,hx::DynamicArray(0,3).Add(n).Add(t).Add(e)); }

::hscript::Expr  Expr_obj::EWhile(::hscript::Expr cond,::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3"),10,hx::DynamicArray(0,2).Add(cond).Add(e)); }

HX_DEFINE_CREATE_ENUM(Expr_obj)

int Expr_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return 16;
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return 17;
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return 6;
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return 4;
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return 12;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return 8;
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return 0;
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return 13;
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return 5;
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return 11;
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return 14;
	if (inName==HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1")) return 1;
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return 9;
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return 18;
	if (inName==HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f")) return 21;
	if (inName==HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57")) return 3;
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return 15;
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return 23;
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return 22;
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return 19;
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return 20;
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return 7;
	if (inName==HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d")) return 2;
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,ECall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(Expr_obj,EFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,ENew,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,ESwitch,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,ETernary,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EThrow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(Expr_obj,ETry,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EVar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EWhile,return)

int Expr_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return 2;
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return 1;
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return 3;
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return 1;
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return 0;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return 2;
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return 1;
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return 0;
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return 2;
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return 3;
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return 4;
	if (inName==HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1")) return 1;
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return 3;
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return 2;
	if (inName==HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f")) return 1;
	if (inName==HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57")) return 1;
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return 1;
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return 3;
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return 3;
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return 1;
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return 4;
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return 3;
	if (inName==HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d")) return 3;
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic Expr_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f")) return EArray_dyn();
	if (inName==HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01")) return EArrayDecl_dyn();
	if (inName==HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc")) return EBinop_dyn();
	if (inName==HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde")) return EBlock_dyn();
	if (inName==HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2")) return EBreak;
	if (inName==HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7")) return ECall_dyn();
	if (inName==HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74")) return EConst_dyn();
	if (inName==HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6")) return EContinue;
	if (inName==HX_HCSTRING("EField","\x35","\xea","\x60","\x2a")) return EField_dyn();
	if (inName==HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d")) return EFor_dyn();
	if (inName==HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9")) return EFunction_dyn();
	if (inName==HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1")) return EIdent_dyn();
	if (inName==HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00")) return EIf_dyn();
	if (inName==HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d")) return ENew_dyn();
	if (inName==HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f")) return EObject_dyn();
	if (inName==HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57")) return EParent_dyn();
	if (inName==HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73")) return EReturn_dyn();
	if (inName==HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f")) return ESwitch_dyn();
	if (inName==HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e")) return ETernary_dyn();
	if (inName==HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39")) return EThrow_dyn();
	if (inName==HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d")) return ETry_dyn();
	if (inName==HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3")) return EUnop_dyn();
	if (inName==HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d")) return EVar_dyn();
	if (inName==HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3")) return EWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("EConst","\xde","\x4e","\x2b","\x74"),
	HX_HCSTRING("EIdent","\x6b","\x98","\x46","\xe1"),
	HX_HCSTRING("EVar","\xa2","\x4f","\xdd","\x2d"),
	HX_HCSTRING("EParent","\x4f","\x7b","\x5b","\x57"),
	HX_HCSTRING("EBlock","\xc8","\xca","\xc9","\xde"),
	HX_HCSTRING("EField","\x35","\xea","\x60","\x2a"),
	HX_HCSTRING("EBinop","\x23","\x6f","\xcd","\xdc"),
	HX_HCSTRING("EUnop","\x9f","\x02","\x29","\xf3"),
	HX_HCSTRING("ECall","\x83","\x4b","\x39","\xe7"),
	HX_HCSTRING("EIf","\x82","\x9b","\x34","\x00"),
	HX_HCSTRING("EWhile","\x2c","\x99","\x8a","\xf3"),
	HX_HCSTRING("EFor","\xc4","\x37","\xd1","\x2d"),
	HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2"),
	HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6"),
	HX_HCSTRING("EFunction","\x7d","\xb4","\x15","\xc9"),
	HX_HCSTRING("EReturn","\xd5","\x1a","\x0b","\x73"),
	HX_HCSTRING("EArray","\x14","\xc3","\x5c","\x4f"),
	HX_HCSTRING("EArrayDecl","\x9e","\x59","\xbd","\x01"),
	HX_HCSTRING("ENew","\x1b","\x41","\xd7","\x2d"),
	HX_HCSTRING("EThrow","\xa1","\xb2","\x5d","\x39"),
	HX_HCSTRING("ETry","\xf6","\xd9","\xdb","\x2d"),
	HX_HCSTRING("EObject","\xe4","\xf4","\x1c","\x7f"),
	HX_HCSTRING("ETernary","\x56","\xc3","\x5c","\x5e"),
	HX_HCSTRING("ESwitch","\x19","\xc0","\x56","\x2f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Expr_obj::EBreak,"EBreak");
	HX_MARK_MEMBER_NAME(Expr_obj::EContinue,"EContinue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Expr_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Expr_obj::EBreak,"EBreak");
	HX_VISIT_MEMBER_NAME(Expr_obj::EContinue,"EContinue");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Expr_obj::__mClass;

Dynamic __Create_Expr_obj() { return new Expr_obj; }

void Expr_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("hscript.Expr","\x30","\x4b","\xdc","\x98"), hx::TCanCast< Expr_obj >,sStaticFields,sMemberFields,
	&__Create_Expr_obj, &__Create,
	&super::__SGetClass(), &CreateExpr_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Expr_obj::__boot()
{
hx::Static(EBreak) = hx::CreateEnum< Expr_obj >(HX_HCSTRING("EBreak","\x3a","\x7a","\xb9","\xe2"),12);
hx::Static(EContinue) = hx::CreateEnum< Expr_obj >(HX_HCSTRING("EContinue","\xcc","\xe9","\x8b","\xe6"),13);
}


} // end namespace hscript
