#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript__Interp_Stop
#include <hscript/_Interp/Stop.h>
#endif
namespace hscript{

Void Interp_obj::__construct()
{
HX_STACK_FRAME("hscript.Interp","new",0xf7e71101,"hscript.Interp.new","hscript/Interp.hx",54,0xf078416e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(56)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		tmp = tmp2;
	}
	HX_STACK_LINE(56)
	this->variables = tmp;
	HX_STACK_LINE(57)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(57)
	this->locals = tmp1;
	HX_STACK_LINE(62)
	::haxe::ds::StringMap tmp2 = this->variables;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	tmp2->set(HX_HCSTRING("null","\x87","\x9e","\x0e","\x49"),null());
	HX_STACK_LINE(63)
	::haxe::ds::StringMap tmp3 = this->variables;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	tmp3->set(HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"),true);
	HX_STACK_LINE(64)
	::haxe::ds::StringMap tmp4 = this->variables;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	tmp4->set(HX_HCSTRING("false","\xa3","\x35","\x4f","\xfb"),false);
	HX_STACK_LINE(65)
	::haxe::ds::StringMap tmp5 = this->variables;		HX_STACK_VAR(tmp5,"tmp5");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",65,0xf078416e)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(65)
			Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",65,0xf078416e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62") , HX_HCSTRING("hscript","\x73","\x8c","\x18","\x2c"),false);
						__result->Add(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(65)
			Dynamic tmp8 = _Function_2_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			::haxe::Log_obj::trace(tmp7,tmp9);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(65)
	tmp5->set(HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"), Dynamic(new _Function_1_1()));
	HX_STACK_LINE(66)
	this->initOps();
}
;
	return null();
}

//Interp_obj::~Interp_obj() { }

Dynamic Interp_obj::__CreateEmpty() { return  new Interp_obj; }
hx::ObjectPtr< Interp_obj > Interp_obj::__new()
{  hx::ObjectPtr< Interp_obj > _result_ = new Interp_obj();
	_result_->__construct();
	return _result_;}

Dynamic Interp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Interp_obj > _result_ = new Interp_obj();
	_result_->__construct();
	return _result_;}

Void Interp_obj::initOps( ){
{
		HX_STACK_FRAME("hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",69,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(72)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			tmp = tmp2;
		}
		HX_STACK_LINE(72)
		this->binops = tmp;
		HX_STACK_LINE(76)
		::haxe::ds::StringMap tmp1 = this->binops;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Dynamic run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",76,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(76)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(76)
				Dynamic tmp3 = me->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(76)
				::hscript::Expr tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(76)
				Dynamic tmp5 = me->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				Dynamic tmp6 = (tmp3 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				return tmp6;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(76)
		tmp1->set(HX_HCSTRING("+","\x2b","\x00","\x00","\x00"), Dynamic(new _Function_1_1(me)));
		HX_STACK_LINE(77)
		::haxe::ds::StringMap tmp2 = this->binops;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Float run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","hscript/Interp.hx",77,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(77)
				::hscript::Expr tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(77)
				Dynamic tmp4 = me->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				::hscript::Expr tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				Dynamic tmp6 = me->expr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(77)
				Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(77)
				return tmp7;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(77)
		tmp2->set(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"), Dynamic(new _Function_1_2(me)));
		HX_STACK_LINE(78)
		::haxe::ds::StringMap tmp3 = this->binops;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Float run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","hscript/Interp.hx",78,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(78)
				::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				Dynamic tmp5 = me->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				::hscript::Expr tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(78)
				Dynamic tmp7 = me->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(78)
				Float tmp8 = (tmp5 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(78)
				return tmp8;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(78)
		tmp3->set(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"), Dynamic(new _Function_1_3(me)));
		HX_STACK_LINE(79)
		::haxe::ds::StringMap tmp4 = this->binops;		HX_STACK_VAR(tmp4,"tmp4");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Float run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","hscript/Interp.hx",79,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(79)
				::hscript::Expr tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(79)
				Dynamic tmp6 = me->expr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(79)
				::hscript::Expr tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				Dynamic tmp8 = me->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				Float tmp9 = (Float(tmp6) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(79)
				return tmp9;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(79)
		tmp4->set(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"), Dynamic(new _Function_1_4(me)));
		HX_STACK_LINE(80)
		::haxe::ds::StringMap tmp5 = this->binops;		HX_STACK_VAR(tmp5,"tmp5");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_5,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		Float run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","hscript/Interp.hx",80,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(80)
				::hscript::Expr tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				Dynamic tmp7 = me->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(80)
				::hscript::Expr tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(80)
				Dynamic tmp9 = me->expr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(80)
				Float tmp10 = hx::Mod(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(80)
				return tmp10;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(80)
		tmp5->set(HX_HCSTRING("%","\x25","\x00","\x00","\x00"), Dynamic(new _Function_1_5(me)));
		HX_STACK_LINE(81)
		::haxe::ds::StringMap tmp6 = this->binops;		HX_STACK_VAR(tmp6,"tmp6");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_6,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_6",0x5200ed3c,"*._Function_1_6","hscript/Interp.hx",81,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(81)
				::hscript::Expr tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(81)
				Dynamic tmp8 = me->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(81)
				::hscript::Expr tmp9 = e2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(81)
				Dynamic tmp10 = me->expr(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(81)
				int tmp11 = (int(tmp8) & int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(81)
				return tmp11;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(81)
		tmp6->set(HX_HCSTRING("&","\x26","\x00","\x00","\x00"), Dynamic(new _Function_1_6(me)));
		HX_STACK_LINE(82)
		::haxe::ds::StringMap tmp7 = this->binops;		HX_STACK_VAR(tmp7,"tmp7");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_7",0x5200ed3d,"*._Function_1_7","hscript/Interp.hx",82,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(82)
				::hscript::Expr tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(82)
				Dynamic tmp9 = me->expr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(82)
				::hscript::Expr tmp10 = e2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(82)
				Dynamic tmp11 = me->expr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(82)
				int tmp12 = (int(tmp9) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(82)
				return tmp12;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(82)
		tmp7->set(HX_HCSTRING("|","\x7c","\x00","\x00","\x00"), Dynamic(new _Function_1_7(me)));
		HX_STACK_LINE(83)
		::haxe::ds::StringMap tmp8 = this->binops;		HX_STACK_VAR(tmp8,"tmp8");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_8,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_8",0x5200ed3e,"*._Function_1_8","hscript/Interp.hx",83,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(83)
				::hscript::Expr tmp9 = e1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(83)
				Dynamic tmp10 = me->expr(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(83)
				::hscript::Expr tmp11 = e2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(83)
				Dynamic tmp12 = me->expr(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(83)
				int tmp13 = (int(tmp10) ^ int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(83)
				return tmp13;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(83)
		tmp8->set(HX_HCSTRING("^","\x5e","\x00","\x00","\x00"), Dynamic(new _Function_1_8(me)));
		HX_STACK_LINE(84)
		::haxe::ds::StringMap tmp9 = this->binops;		HX_STACK_VAR(tmp9,"tmp9");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_9,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_9",0x5200ed3f,"*._Function_1_9","hscript/Interp.hx",84,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(84)
				::hscript::Expr tmp10 = e1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(84)
				Dynamic tmp11 = me->expr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(84)
				::hscript::Expr tmp12 = e2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(84)
				Dynamic tmp13 = me->expr(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				int tmp14 = (int(tmp11) << int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(84)
				return tmp14;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(84)
		tmp9->set(HX_HCSTRING("<<","\x80","\x34","\x00","\x00"), Dynamic(new _Function_1_9(me)));
		HX_STACK_LINE(85)
		::haxe::ds::StringMap tmp10 = this->binops;		HX_STACK_VAR(tmp10,"tmp10");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_10,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_10",0x6ecea319,"*._Function_1_10","hscript/Interp.hx",85,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(85)
				::hscript::Expr tmp11 = e1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(85)
				Dynamic tmp12 = me->expr(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(85)
				::hscript::Expr tmp13 = e2;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(85)
				Dynamic tmp14 = me->expr(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				int tmp15 = (int(tmp12) >> int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(85)
				return tmp15;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(85)
		tmp10->set(HX_HCSTRING(">>","\x40","\x36","\x00","\x00"), Dynamic(new _Function_1_10(me)));
		HX_STACK_LINE(86)
		::haxe::ds::StringMap tmp11 = this->binops;		HX_STACK_VAR(tmp11,"tmp11");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_11,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_11",0x6ecea31a,"*._Function_1_11","hscript/Interp.hx",86,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(86)
				::hscript::Expr tmp12 = e1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(86)
				Dynamic tmp13 = me->expr(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(86)
				::hscript::Expr tmp14 = e2;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(86)
				Dynamic tmp15 = me->expr(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(86)
				int tmp16 = hx::UShr(tmp13,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(86)
				return tmp16;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(86)
		tmp11->set(HX_HCSTRING(">>>","\xfe","\x41","\x2f","\x00"), Dynamic(new _Function_1_11(me)));
		HX_STACK_LINE(87)
		::haxe::ds::StringMap tmp12 = this->binops;		HX_STACK_VAR(tmp12,"tmp12");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_12,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_12",0x6ecea31b,"*._Function_1_12","hscript/Interp.hx",87,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(87)
				::hscript::Expr tmp13 = e1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(87)
				Dynamic tmp14 = me->expr(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(87)
				::hscript::Expr tmp15 = e2;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(87)
				Dynamic tmp16 = me->expr(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(87)
				bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(87)
				return tmp17;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(87)
		tmp12->set(HX_HCSTRING("==","\x60","\x35","\x00","\x00"), Dynamic(new _Function_1_12(me)));
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp13 = this->binops;		HX_STACK_VAR(tmp13,"tmp13");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_13,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_13",0x6ecea31c,"*._Function_1_13","hscript/Interp.hx",88,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(88)
				::hscript::Expr tmp14 = e1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(88)
				Dynamic tmp15 = me->expr(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(88)
				::hscript::Expr tmp16 = e2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(88)
				Dynamic tmp17 = me->expr(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(88)
				bool tmp18 = (tmp15 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(88)
				return tmp18;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(88)
		tmp13->set(HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"), Dynamic(new _Function_1_13(me)));
		HX_STACK_LINE(89)
		::haxe::ds::StringMap tmp14 = this->binops;		HX_STACK_VAR(tmp14,"tmp14");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_14,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_14",0x6ecea31d,"*._Function_1_14","hscript/Interp.hx",89,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(89)
				::hscript::Expr tmp15 = e1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(89)
				Dynamic tmp16 = me->expr(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(89)
				::hscript::Expr tmp17 = e2;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(89)
				Dynamic tmp18 = me->expr(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(89)
				bool tmp19 = (tmp16 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(89)
				return tmp19;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(89)
		tmp14->set(HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"), Dynamic(new _Function_1_14(me)));
		HX_STACK_LINE(90)
		::haxe::ds::StringMap tmp15 = this->binops;		HX_STACK_VAR(tmp15,"tmp15");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_15,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_15",0x6ecea31e,"*._Function_1_15","hscript/Interp.hx",90,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(90)
				::hscript::Expr tmp16 = e1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(90)
				Dynamic tmp17 = me->expr(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(90)
				::hscript::Expr tmp18 = e2;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(90)
				Dynamic tmp19 = me->expr(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(90)
				bool tmp20 = (tmp17 <= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(90)
				return tmp20;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(90)
		tmp15->set(HX_HCSTRING("<=","\x81","\x34","\x00","\x00"), Dynamic(new _Function_1_15(me)));
		HX_STACK_LINE(91)
		::haxe::ds::StringMap tmp16 = this->binops;		HX_STACK_VAR(tmp16,"tmp16");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_16,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_16",0x6ecea31f,"*._Function_1_16","hscript/Interp.hx",91,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(91)
				::hscript::Expr tmp17 = e1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(91)
				Dynamic tmp18 = me->expr(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(91)
				::hscript::Expr tmp19 = e2;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(91)
				Dynamic tmp20 = me->expr(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(91)
				bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(91)
				return tmp21;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(91)
		tmp16->set(HX_HCSTRING(">","\x3e","\x00","\x00","\x00"), Dynamic(new _Function_1_16(me)));
		HX_STACK_LINE(92)
		::haxe::ds::StringMap tmp17 = this->binops;		HX_STACK_VAR(tmp17,"tmp17");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_17,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_17",0x6ecea320,"*._Function_1_17","hscript/Interp.hx",92,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(92)
				::hscript::Expr tmp18 = e1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(92)
				Dynamic tmp19 = me->expr(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(92)
				::hscript::Expr tmp20 = e2;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(92)
				Dynamic tmp21 = me->expr(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(92)
				bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(92)
				return tmp22;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(92)
		tmp17->set(HX_HCSTRING("<","\x3c","\x00","\x00","\x00"), Dynamic(new _Function_1_17(me)));
		HX_STACK_LINE(93)
		::haxe::ds::StringMap tmp18 = this->binops;		HX_STACK_VAR(tmp18,"tmp18");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_18,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_18",0x6ecea321,"*._Function_1_18","hscript/Interp.hx",93,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(93)
				::hscript::Expr tmp19 = e1;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(93)
				Dynamic tmp20 = me->expr(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(93)
				bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(93)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(93)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(93)
				if ((tmp22)){
					HX_STACK_LINE(93)
					::hscript::Expr tmp24 = e2;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(93)
					::hscript::Expr tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(93)
					Dynamic tmp26 = me->expr(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(93)
					Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(93)
					tmp23 = (tmp27 == true);
				}
				else{
					HX_STACK_LINE(93)
					tmp23 = true;
				}
				HX_STACK_LINE(93)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(93)
		tmp18->set(HX_HCSTRING("||","\x80","\x6c","\x00","\x00"), Dynamic(new _Function_1_18(me)));
		HX_STACK_LINE(94)
		::haxe::ds::StringMap tmp19 = this->binops;		HX_STACK_VAR(tmp19,"tmp19");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_19,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_19",0x6ecea322,"*._Function_1_19","hscript/Interp.hx",94,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(94)
				::hscript::Expr tmp20 = e1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(94)
				Dynamic tmp21 = me->expr(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(94)
				bool tmp22 = (tmp21 == true);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(94)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(94)
				if ((tmp22)){
					HX_STACK_LINE(94)
					::hscript::Expr tmp24 = e2;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(94)
					::hscript::Expr tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(94)
					Dynamic tmp26 = me->expr(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(94)
					Dynamic tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(94)
					tmp23 = (tmp27 == true);
				}
				else{
					HX_STACK_LINE(94)
					tmp23 = false;
				}
				HX_STACK_LINE(94)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(94)
		tmp19->set(HX_HCSTRING("&&","\x40","\x21","\x00","\x00"), Dynamic(new _Function_1_19(me)));
		HX_STACK_LINE(95)
		::haxe::ds::StringMap tmp20 = this->binops;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(95)
		Dynamic tmp21 = this->assign_dyn();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(95)
		tmp20->set(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"),tmp21);
		HX_STACK_LINE(96)
		::haxe::ds::StringMap tmp22 = this->binops;		HX_STACK_VAR(tmp22,"tmp22");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_20,::hscript::Interp,me)
		int __ArgCount() const { return 2; }
		::IntIterator run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_20",0x6ecea3f8,"*._Function_1_20","hscript/Interp.hx",96,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(96)
				::hscript::Expr tmp23 = e1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(96)
				Dynamic tmp24 = me->expr(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(96)
				::hscript::Expr tmp25 = e2;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(96)
				Dynamic tmp26 = me->expr(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(96)
				::IntIterator tmp27 = ::IntIterator_obj::__new(tmp24,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(96)
				return tmp27;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(96)
		tmp22->set(HX_HCSTRING("...","\xee","\x0f","\x23","\x00"), Dynamic(new _Function_1_20(me)));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_21)
		int __ArgCount() const { return 2; }
		Dynamic run(Dynamic v1,Dynamic v2){
			HX_STACK_FRAME("*","_Function_1_21",0x6ecea3f9,"*._Function_1_21","hscript/Interp.hx",97,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(97)
				Dynamic tmp23 = (v1 + v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(97)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(97)
		this->assignOp(HX_HCSTRING("+=","\xb2","\x25","\x00","\x00"), Dynamic(new _Function_1_21()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_22)
		int __ArgCount() const { return 2; }
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_22",0x6ecea3fa,"*._Function_1_22","hscript/Interp.hx",98,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(98)
				Float tmp23 = (v1 - v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(98)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(98)
		this->assignOp(HX_HCSTRING("-=","\x70","\x27","\x00","\x00"), Dynamic(new _Function_1_22()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_23)
		int __ArgCount() const { return 2; }
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_23",0x6ecea3fb,"*._Function_1_23","hscript/Interp.hx",99,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(99)
				Float tmp23 = (v1 * v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(99)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(99)
		this->assignOp(HX_HCSTRING("*=","\xd3","\x24","\x00","\x00"), Dynamic(new _Function_1_23()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_24)
		int __ArgCount() const { return 2; }
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_24",0x6ecea3fc,"*._Function_1_24","hscript/Interp.hx",100,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(100)
				Float tmp23 = (Float(v1) / Float(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(100)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(100)
		this->assignOp(HX_HCSTRING("/=","\x2e","\x29","\x00","\x00"), Dynamic(new _Function_1_24()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_25)
		int __ArgCount() const { return 2; }
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_25",0x6ecea3fd,"*._Function_1_25","hscript/Interp.hx",101,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(101)
				Float tmp23 = hx::Mod(v1,v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(101)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(101)
		this->assignOp(HX_HCSTRING("%=","\x78","\x20","\x00","\x00"), Dynamic(new _Function_1_25()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_26)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_26",0x6ecea3fe,"*._Function_1_26","hscript/Interp.hx",102,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(102)
				int tmp23 = (int(v1) & int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(102)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(102)
		this->assignOp(HX_HCSTRING("&=","\x57","\x21","\x00","\x00"), Dynamic(new _Function_1_26()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_27)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_27",0x6ecea3ff,"*._Function_1_27","hscript/Interp.hx",103,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(103)
				int tmp23 = (int(v1) | int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(103)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(103)
		this->assignOp(HX_HCSTRING("|=","\x41","\x6c","\x00","\x00"), Dynamic(new _Function_1_27()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_28)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_28",0x6ecea400,"*._Function_1_28","hscript/Interp.hx",104,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(104)
				int tmp23 = (int(v1) ^ int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(104)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(104)
		this->assignOp(HX_HCSTRING("^=","\x1f","\x52","\x00","\x00"), Dynamic(new _Function_1_28()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_29)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_29",0x6ecea401,"*._Function_1_29","hscript/Interp.hx",105,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(105)
				int tmp23 = (int(v1) << int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(105)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(105)
		this->assignOp(HX_HCSTRING("<<=","\xbd","\xbb","\x2d","\x00"), Dynamic(new _Function_1_29()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_30)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_30",0x6ecea4d7,"*._Function_1_30","hscript/Interp.hx",106,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(106)
				int tmp23 = (int(v1) >> int(v2));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(106)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(106)
		this->assignOp(HX_HCSTRING(">>=","\xfd","\x41","\x2f","\x00"), Dynamic(new _Function_1_30()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_31)
		int __ArgCount() const { return 2; }
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_31",0x6ecea4d8,"*._Function_1_31","hscript/Interp.hx",107,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(107)
				int tmp23 = hx::UShr(v1,v2);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(107)
				return tmp23;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(107)
		this->assignOp(HX_HCSTRING(">>>=","\x7f","\x7c","\x2a","\x29"), Dynamic(new _Function_1_31()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,initOps,(void))

Dynamic Interp_obj::assign( ::hscript::Expr e1,::hscript::Expr e2){
	HX_STACK_FRAME("hscript.Interp","assign",0xca66602e,"hscript.Interp.assign","hscript/Interp.hx",110,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_LINE(111)
	::hscript::Expr tmp = e2;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	Dynamic tmp1 = this->expr(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	Dynamic v = tmp1;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(112)
	switch( (int)(e1->__Index())){
		case (int)1: {
			HX_STACK_LINE(112)
			::String tmp2 = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			::String id = tmp2;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(113)
			{
				HX_STACK_LINE(114)
				::haxe::ds::StringMap tmp3 = this->locals;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(114)
				::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(114)
				Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(114)
				Dynamic l = tmp5;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(115)
				bool tmp6 = (l == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(115)
				if ((tmp6)){
					HX_STACK_LINE(116)
					::haxe::ds::StringMap tmp7 = this->variables;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(116)
					::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(116)
					Dynamic tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(116)
					tmp7->set(tmp8,tmp9);
				}
				else{
					HX_STACK_LINE(118)
					l->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = v;
				}
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(112)
			::String tmp2 = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			::String f = tmp2;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(112)
			::hscript::Expr tmp3 = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			::hscript::Expr e = tmp3;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(119)
			{
				HX_STACK_LINE(120)
				::hscript::Expr tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(120)
				::String tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(120)
				Dynamic tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(120)
				Dynamic tmp8 = this->set(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				v = tmp8;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(112)
			::hscript::Expr tmp2 = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(112)
			::hscript::Expr index = tmp2;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(112)
			::hscript::Expr tmp3 = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			::hscript::Expr e = tmp3;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(122)
				::hscript::Expr tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(122)
				Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				::hscript::Expr tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(122)
				Dynamic tmp7 = this->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(122)
				Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(122)
				hx::IndexRef((tmp5).mPtr,tmp7) = tmp8;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(124)
			::hscript::Error tmp2 = ::hscript::Error_obj::EInvalidOp(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			::hscript::Error e = tmp2;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(124)
			::hscript::Error tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(124)
			HX_STACK_DO_THROW(tmp3);
			HX_STACK_LINE(124)
			Dynamic();
		}
	}
	HX_STACK_LINE(126)
	Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assign,return )

Void Interp_obj::assignOp( ::String op,Dynamic fop){
{
		HX_STACK_FRAME("hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",129,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(op,"op")
		HX_STACK_ARG(fop,"fop")
		HX_STACK_LINE(130)
		::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(131)
		::haxe::ds::StringMap tmp = this->binops;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::String tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Dynamic,fop,::hscript::Interp,me,::String,op)
		int __ArgCount() const { return 2; }
		Dynamic run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",131,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(131)
				::String tmp2 = op;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(131)
				Dynamic tmp3 = fop;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(131)
				::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(131)
				::hscript::Expr tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(131)
				Dynamic tmp6 = me->evalAssignOp(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(131)
				return tmp6;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(131)
		tmp->set(tmp1, Dynamic(new _Function_1_1(fop,me,op)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assignOp,(void))

Dynamic Interp_obj::evalAssignOp( ::String op,Dynamic fop,::hscript::Expr e1,::hscript::Expr e2){
	HX_STACK_FRAME("hscript.Interp","evalAssignOp",0xa46efc2b,"hscript.Interp.evalAssignOp","hscript/Interp.hx",134,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(fop,"fop")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_LINE(135)
	Dynamic v;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(136)
	switch( (int)(e1->__Index())){
		case (int)1: {
			HX_STACK_LINE(136)
			::String tmp = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			::String id = tmp;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(138)
				::haxe::ds::StringMap tmp1 = this->locals;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(138)
				::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(138)
				Dynamic tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(138)
				Dynamic l = tmp3;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(139)
				::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(139)
				::hscript::Expr tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(139)
				Dynamic tmp7 = this->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(139)
				Dynamic tmp8 = fop(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(139)
				v = tmp8;
				HX_STACK_LINE(140)
				bool tmp9 = (l == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(140)
				if ((tmp9)){
					HX_STACK_LINE(141)
					::haxe::ds::StringMap tmp10 = this->variables;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(141)
					::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(141)
					Dynamic tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(141)
					tmp10->set(tmp11,tmp12);
				}
				else{
					HX_STACK_LINE(143)
					l->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = v;
				}
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(136)
			::String tmp = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			::String f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(136)
			::hscript::Expr tmp1 = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			::hscript::Expr e = tmp1;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(145)
				::hscript::Expr tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(145)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(145)
				Dynamic obj = tmp3;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(146)
				Dynamic tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(146)
				::String tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(146)
				Dynamic tmp6 = this->get(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(146)
				::hscript::Expr tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(146)
				Dynamic tmp8 = this->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				Dynamic tmp9 = fop(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(146)
				v = tmp9;
				HX_STACK_LINE(147)
				Dynamic tmp10 = obj;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				::String tmp11 = f;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(147)
				Dynamic tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(147)
				Dynamic tmp13 = this->set(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(147)
				v = tmp13;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(136)
			::hscript::Expr tmp = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(136)
			::hscript::Expr index = tmp;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(136)
			::hscript::Expr tmp1 = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(136)
			::hscript::Expr e = tmp1;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(149)
				::hscript::Expr tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(149)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(149)
				cpp::ArrayBase arr = tmp3;		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(150)
				::hscript::Expr tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(150)
				Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(150)
				int index1 = tmp5;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(151)
				Dynamic tmp6 = arr->__GetItem(index1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(151)
				::hscript::Expr tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(151)
				Dynamic tmp8 = this->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				Dynamic tmp9 = fop(tmp6,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(151)
				v = tmp9;
				HX_STACK_LINE(152)
				Dynamic tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(152)
				hx::IndexRef((arr).mPtr,index1) = tmp10;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(154)
			Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(154)
			{
				HX_STACK_LINE(154)
				::String tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(154)
				::hscript::Error tmp2 = ::hscript::Error_obj::EInvalidOp(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(154)
				::hscript::Error e = tmp2;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(154)
				::hscript::Error tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(154)
				HX_STACK_DO_THROW(tmp3);
				HX_STACK_LINE(154)
				tmp = null();
			}
			HX_STACK_LINE(154)
			return tmp;
		}
	}
	HX_STACK_LINE(156)
	Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,evalAssignOp,return )

Dynamic Interp_obj::increment( ::hscript::Expr e,bool prefix,int delta){
	HX_STACK_FRAME("hscript.Interp","increment",0x1e81f590,"hscript.Interp.increment","hscript/Interp.hx",164,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(prefix,"prefix")
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(164)
	switch( (int)(e->__Index())){
		case (int)1: {
			HX_STACK_LINE(164)
			::String tmp = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(164)
			::String id = tmp;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(165)
			{
				HX_STACK_LINE(166)
				::haxe::ds::StringMap tmp1 = this->locals;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(166)
				::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(166)
				Dynamic tmp3 = tmp1->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(166)
				Dynamic l = tmp3;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(167)
				bool tmp4 = (l == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(167)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				if ((tmp4)){
					HX_STACK_LINE(167)
					::haxe::ds::StringMap tmp6 = this->variables;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(167)
					::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(167)
					Dynamic tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(167)
					tmp5 = tmp8;
				}
				else{
					HX_STACK_LINE(167)
					tmp5 = l->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );
				}
				HX_STACK_LINE(167)
				Dynamic v = tmp5;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(168)
				bool tmp6 = prefix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(168)
				if ((tmp6)){
					HX_STACK_LINE(169)
					hx::AddEq(v,delta);
					HX_STACK_LINE(170)
					bool tmp7 = (l == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(170)
					if ((tmp7)){
						HX_STACK_LINE(170)
						Dynamic value = v;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(170)
						::haxe::ds::StringMap tmp8 = this->variables;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(170)
						::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(170)
						Dynamic tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(170)
						tmp8->set(tmp9,tmp10);
					}
					else{
						HX_STACK_LINE(170)
						l->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = v;
					}
				}
				else{
					HX_STACK_LINE(172)
					bool tmp7 = (l == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(172)
					if ((tmp7)){
						HX_STACK_LINE(172)
						Dynamic tmp8 = (v + delta);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(172)
						Dynamic value = tmp8;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(172)
						::haxe::ds::StringMap tmp9 = this->variables;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(172)
						::String tmp10 = id;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(172)
						Dynamic tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(172)
						tmp9->set(tmp10,tmp11);
					}
					else{
						HX_STACK_LINE(172)
						Dynamic tmp8 = (v + delta);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(172)
						l->__FieldRef(HX_HCSTRING("r","\x72","\x00","\x00","\x00")) = tmp8;
					}
				}
				HX_STACK_LINE(173)
				Dynamic tmp7 = v;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(173)
				return tmp7;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(164)
			::String tmp = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(164)
			::String f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(164)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(164)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(174)
			{
				HX_STACK_LINE(175)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(175)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(175)
				Dynamic obj = tmp3;		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(176)
				Dynamic tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(176)
				::String tmp5 = f;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(176)
				Dynamic tmp6 = this->get(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(176)
				Dynamic v = tmp6;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(177)
				bool tmp7 = prefix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(177)
				if ((tmp7)){
					HX_STACK_LINE(178)
					hx::AddEq(v,delta);
					HX_STACK_LINE(179)
					Dynamic tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(179)
					::String tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(179)
					Dynamic tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(179)
					this->set(tmp8,tmp9,tmp10);
				}
				else{
					HX_STACK_LINE(181)
					Dynamic tmp8 = obj;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(181)
					::String tmp9 = f;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(181)
					Dynamic tmp10 = (v + delta);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(181)
					this->set(tmp8,tmp9,tmp10);
				}
				HX_STACK_LINE(182)
				Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(182)
				return tmp8;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(164)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(164)
			::hscript::Expr index = tmp;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(164)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(164)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(184)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(184)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(184)
				Array< int > arr = tmp3;		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(185)
				::hscript::Expr tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(185)
				Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(185)
				int index1 = tmp5;		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(186)
				int tmp6 = arr->__get(index1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(186)
				int v = tmp6;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(187)
				bool tmp7 = prefix;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(187)
				if ((tmp7)){
					HX_STACK_LINE(188)
					hx::AddEq(v,delta);
					HX_STACK_LINE(189)
					int tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(189)
					arr[index1] = tmp8;
				}
				else{
					HX_STACK_LINE(191)
					int tmp8 = (v + delta);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(191)
					arr[index1] = tmp8;
				}
				HX_STACK_LINE(192)
				int tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(192)
				return tmp8;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(194)
			Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				bool tmp1 = (delta > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(194)
				::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(194)
				if ((tmp1)){
					HX_STACK_LINE(194)
					tmp2 = HX_HCSTRING("++","\xa0","\x25","\x00","\x00");
				}
				else{
					HX_STACK_LINE(194)
					tmp2 = HX_HCSTRING("--","\x60","\x27","\x00","\x00");
				}
				HX_STACK_LINE(194)
				::hscript::Error tmp3 = ::hscript::Error_obj::EInvalidOp(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(194)
				::hscript::Error e1 = tmp3;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(194)
				::hscript::Error tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(194)
				HX_STACK_DO_THROW(tmp4);
				HX_STACK_LINE(194)
				tmp = null();
			}
			HX_STACK_LINE(194)
			return tmp;
		}
	}
	HX_STACK_LINE(164)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,increment,return )

Dynamic Interp_obj::execute( ::hscript::Expr expr){
	HX_STACK_FRAME("hscript.Interp","execute",0xe1c3af56,"hscript.Interp.execute","hscript/Interp.hx",198,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(expr,"expr")
	HX_STACK_LINE(199)
	this->depth = (int)0;
	HX_STACK_LINE(201)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		tmp = tmp2;
	}
	HX_STACK_LINE(201)
	this->locals = tmp;
	HX_STACK_LINE(205)
	this->declared = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(206)
	::hscript::Expr tmp1 = expr;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	Dynamic tmp2 = this->exprReturn(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,execute,return )

Dynamic Interp_obj::exprReturn( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Interp","exprReturn",0x8cfbf144,"hscript.Interp.exprReturn","hscript/Interp.hx",209,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(210)
	try
	{
	HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
	{
		HX_STACK_LINE(211)
		::hscript::Expr tmp = e;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		Dynamic tmp1 = this->expr(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		return tmp1;
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::hscript::_Interp::Stop >() ){
			HX_STACK_BEGIN_CATCH
			::hscript::_Interp::Stop e1 = __e;{
				HX_STACK_LINE(213)
				switch( (int)(e1->__Index())){
					case (int)0: {
						HX_STACK_LINE(214)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid break","\xb6","\xee","\x24","\x9d"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(215)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid continue","\xd0","\x6a","\xb7","\x3f"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(213)
						Dynamic tmp = (::hscript::_Interp::Stop(e1))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(213)
						Dynamic v = tmp;		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(216)
						{
							HX_STACK_LINE(216)
							Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
							HX_STACK_LINE(216)
							return tmp1;
						}
					}
					;break;
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(219)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,exprReturn,return )

::haxe::ds::StringMap Interp_obj::duplicate( ::haxe::ds::StringMap h){
	HX_STACK_FRAME("hscript.Interp","duplicate",0x8d9a10ec,"hscript.Interp.duplicate","hscript/Interp.hx",222,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(224)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	{
		HX_STACK_LINE(224)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		tmp = tmp2;
	}
	HX_STACK_LINE(224)
	::haxe::ds::StringMap h2 = tmp;		HX_STACK_VAR(h2,"h2");
	HX_STACK_LINE(228)
	Dynamic tmp1 = h->keys();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(228)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
		::String k = __it->next();
		{
			HX_STACK_LINE(229)
			::String tmp2 = k;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(229)
			Dynamic tmp3 = h->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(229)
			::String tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(229)
			h2->set(tmp4,tmp5);
		}
;
	}
	HX_STACK_LINE(230)
	::haxe::ds::StringMap tmp2 = h2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,duplicate,return )

Void Interp_obj::restore( int old){
{
		HX_STACK_FRAME("hscript.Interp","restore",0x80670c6f,"hscript.Interp.restore","hscript/Interp.hx",234,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(old,"old")
		HX_STACK_LINE(234)
		while((true)){
			HX_STACK_LINE(234)
			int tmp = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(234)
			int tmp1 = old;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(234)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(234)
			if ((tmp3)){
				HX_STACK_LINE(234)
				break;
			}
			HX_STACK_LINE(235)
			Dynamic tmp4 = this->declared->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			Dynamic d = tmp4;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(236)
			::haxe::ds::StringMap tmp5 = this->locals;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			::String tmp6 = d->__Field(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			Dynamic tmp7 = d->__Field(HX_HCSTRING("old","\xa7","\x98","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			tmp5->set(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,restore,(void))

::hscript::Expr Interp_obj::edef( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Interp","edef",0xec5412bf,"hscript.Interp.edef","hscript/Interp.hx",240,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(244)
	::hscript::Expr tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,edef,return )

Dynamic Interp_obj::error( ::hscript::Error e){
	HX_STACK_FRAME("hscript.Interp","error",0xe68736a9,"hscript.Interp.error","hscript/Interp.hx",248,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(252)
	::hscript::Error tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	HX_STACK_DO_THROW(tmp);
	HX_STACK_LINE(254)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,error,return )

Dynamic Interp_obj::resolve( ::String id){
	HX_STACK_FRAME("hscript.Interp","resolve",0x7d16b80d,"hscript.Interp.resolve","hscript/Interp.hx",257,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(258)
	::haxe::ds::StringMap tmp = this->locals;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	Dynamic l = tmp2;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(259)
	bool tmp3 = (l != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(259)
	if ((tmp3)){
		HX_STACK_LINE(260)
		Dynamic tmp4 = l->__Field(HX_HCSTRING("r","\x72","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(260)
		return tmp4;
	}
	HX_STACK_LINE(261)
	::haxe::ds::StringMap tmp4 = this->variables;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(261)
	::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(261)
	Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(261)
	Dynamic v = tmp6;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(262)
	bool tmp7 = (v == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(262)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(262)
	if ((tmp7)){
		HX_STACK_LINE(262)
		::haxe::ds::StringMap tmp9 = this->variables;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(262)
		::haxe::ds::StringMap tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(262)
		::String tmp11 = id;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(262)
		::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(262)
		bool tmp13 = tmp10->exists(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(262)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(262)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(262)
		tmp8 = !(tmp15);
	}
	else{
		HX_STACK_LINE(262)
		tmp8 = false;
	}
	HX_STACK_LINE(262)
	if ((tmp8)){
		HX_STACK_LINE(263)
		::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(263)
		::hscript::Error tmp10 = ::hscript::Error_obj::EUnknownVariable(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(263)
		::hscript::Error e = tmp10;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(263)
		::hscript::Error tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(263)
		HX_STACK_DO_THROW(tmp11);
		HX_STACK_LINE(263)
		Dynamic();
	}
	HX_STACK_LINE(264)
	Dynamic tmp9 = v;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(264)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,resolve,return )

Dynamic Interp_obj::expr( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",267,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(267)
	::hscript::Interp _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(272)
	switch( (int)(e->__Index())){
		case (int)0: {
			HX_STACK_LINE(272)
			::hscript::Const tmp = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Const c = tmp;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(274)
			switch( (int)(c->__Index())){
				case (int)0: {
					HX_STACK_LINE(274)
					int tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(274)
					int v = tmp1;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(275)
					{
						HX_STACK_LINE(275)
						int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(275)
						return tmp2;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(274)
					Float tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(274)
					Float f = tmp1;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(276)
					{
						HX_STACK_LINE(276)
						Float tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(276)
						return tmp2;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(274)
					::String tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(274)
					::String s = tmp1;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(277)
					{
						HX_STACK_LINE(277)
						::String tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(277)
						return tmp2;
					}
				}
				;break;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(272)
			::String tmp = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::String id = tmp;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(282)
			{
				HX_STACK_LINE(283)
				::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(283)
				Dynamic tmp2 = this->resolve(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(283)
				return tmp2;
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(272)
			::String tmp1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::String n = tmp1;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(284)
			{
				HX_STACK_LINE(285)
				::String tmp2 = n;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(285)
				::haxe::ds::StringMap tmp3 = this->locals;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(285)
				::String tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(285)
				Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(285)
				Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &tmp6,::String &tmp2){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",285,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp2,false);
							__result->Add(HX_HCSTRING("old","\xa7","\x98","\x54","\x00") , tmp6,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(285)
				Dynamic tmp7 = _Function_3_1::Block(tmp6,tmp2);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(285)
				this->declared->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp7);
				HX_STACK_LINE(286)
				{
					HX_STACK_LINE(286)
					bool tmp8 = (e1 == null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(286)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(286)
					if ((tmp8)){
						HX_STACK_LINE(286)
						tmp9 = null();
					}
					else{
						HX_STACK_LINE(286)
						::hscript::Expr tmp10 = e1;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(286)
						tmp9 = this->expr(tmp10);
					}
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &tmp9){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",286,0xf078416e)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp9,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(286)
					Dynamic tmp10 = _Function_4_1::Block(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(286)
					Dynamic value = tmp10;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(286)
					::haxe::ds::StringMap tmp11 = this->locals;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(286)
					::String tmp12 = n;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(286)
					Dynamic tmp13 = value;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(286)
					tmp11->set(tmp12,tmp13);
				}
				HX_STACK_LINE(287)
				return null();
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(288)
			{
				HX_STACK_LINE(289)
				::hscript::Expr tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(289)
				Dynamic tmp2 = this->expr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(289)
				return tmp2;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(272)
			Array< ::Dynamic > exprs = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(exprs,"exprs");
			HX_STACK_LINE(290)
			{
				HX_STACK_LINE(291)
				int tmp = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(291)
				int old = tmp;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(292)
				Dynamic v = null();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(293)
				{
					HX_STACK_LINE(293)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(293)
					while((true)){
						HX_STACK_LINE(293)
						bool tmp1 = (_g1 < exprs->length);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(293)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(293)
						if ((tmp2)){
							HX_STACK_LINE(293)
							break;
						}
						HX_STACK_LINE(293)
						::hscript::Expr tmp3 = exprs->__get(_g1).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(293)
						::hscript::Expr e1 = tmp3;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(293)
						++(_g1);
						HX_STACK_LINE(294)
						::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(294)
						Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(294)
						v = tmp5;
					}
				}
				HX_STACK_LINE(295)
				int tmp1 = old;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(295)
				this->restore(tmp1);
				HX_STACK_LINE(296)
				Dynamic tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(296)
				return tmp2;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(272)
			::String tmp = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::String f = tmp;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(297)
			{
				HX_STACK_LINE(298)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(298)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(298)
				::String tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(298)
				Dynamic tmp5 = this->get(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(298)
				return tmp5;
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(272)
			::String tmp2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			::String op = tmp2;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(299)
			{
				HX_STACK_LINE(300)
				::haxe::ds::StringMap tmp3 = this->binops;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(300)
				::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(300)
				Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(300)
				Dynamic fop = tmp5;		HX_STACK_VAR(fop,"fop");
				HX_STACK_LINE(301)
				bool tmp6 = (fop == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(301)
				if ((tmp6)){
					HX_STACK_LINE(301)
					::String tmp7 = op;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					::hscript::Error tmp8 = ::hscript::Error_obj::EInvalidOp(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(301)
					::hscript::Error e3 = tmp8;		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(301)
					::hscript::Error tmp9 = e3;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(301)
					HX_STACK_DO_THROW(tmp9);
					HX_STACK_LINE(301)
					Dynamic();
				}
				HX_STACK_LINE(302)
				::hscript::Expr tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(302)
				::hscript::Expr tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(302)
				Dynamic tmp9 = fop(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(302)
				return tmp9;
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(272)
			bool tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			bool prefix = tmp1;		HX_STACK_VAR(prefix,"prefix");
			HX_STACK_LINE(272)
			::String tmp2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			::String op = tmp2;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(304)
				::String tmp3 = op;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(304)
				::String _switch_1 = (tmp3);
				if (  ( _switch_1==HX_HCSTRING("!","\x21","\x00","\x00","\x00"))){
					HX_STACK_LINE(306)
					::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(306)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(306)
					bool tmp6 = (tmp5 != true);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(306)
					return tmp6;
				}
				else if (  ( _switch_1==HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))){
					HX_STACK_LINE(308)
					::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(308)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(308)
					Float tmp6 = -(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(308)
					return tmp6;
				}
				else if (  ( _switch_1==HX_HCSTRING("++","\xa0","\x25","\x00","\x00"))){
					HX_STACK_LINE(310)
					::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(310)
					bool tmp5 = prefix;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(310)
					Dynamic tmp6 = this->increment(tmp4,tmp5,(int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(310)
					return tmp6;
				}
				else if (  ( _switch_1==HX_HCSTRING("--","\x60","\x27","\x00","\x00"))){
					HX_STACK_LINE(312)
					::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(312)
					bool tmp5 = prefix;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(312)
					Dynamic tmp6 = this->increment(tmp4,tmp5,(int)-1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(312)
					return tmp6;
				}
				else if (  ( _switch_1==HX_HCSTRING("~","\x7e","\x00","\x00","\x00"))){
					HX_STACK_LINE(317)
					::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(317)
					Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(317)
					Float tmp6 = ~(int)(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(317)
					return tmp6;
				}
				else  {
					HX_STACK_LINE(320)
					::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(320)
					::hscript::Error tmp5 = ::hscript::Error_obj::EInvalidOp(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(320)
					::hscript::Error e2 = tmp5;		HX_STACK_VAR(e2,"e2");
					HX_STACK_LINE(320)
					::hscript::Error tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(320)
					HX_STACK_DO_THROW(tmp6);
					HX_STACK_LINE(320)
					Dynamic();
				}
;
;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(272)
			Array< ::Dynamic > params = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(322)
			{
				HX_STACK_LINE(323)
				cpp::ArrayBase args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
				HX_STACK_LINE(324)
				{
					HX_STACK_LINE(324)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(324)
					while((true)){
						HX_STACK_LINE(324)
						bool tmp1 = (_g1 < params->length);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(324)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(324)
						if ((tmp2)){
							HX_STACK_LINE(324)
							break;
						}
						HX_STACK_LINE(324)
						::hscript::Expr tmp3 = params->__get(_g1).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(324)
						::hscript::Expr p = tmp3;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(324)
						++(_g1);
						HX_STACK_LINE(325)
						::hscript::Expr tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(325)
						Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(325)
						args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
					}
				}
				HX_STACK_LINE(327)
				switch( (int)(e1->__Index())){
					case (int)5: {
						HX_STACK_LINE(327)
						::String tmp1 = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(327)
						::String f = tmp1;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(327)
						::hscript::Expr tmp2 = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(327)
						::hscript::Expr e2 = tmp2;		HX_STACK_VAR(e2,"e2");
						HX_STACK_LINE(328)
						{
							HX_STACK_LINE(329)
							::hscript::Expr tmp3 = e2;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(329)
							Dynamic tmp4 = this->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(329)
							Dynamic obj = tmp4;		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(330)
							bool tmp5 = (obj == null());		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(330)
							if ((tmp5)){
								HX_STACK_LINE(330)
								::String tmp6 = f;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(330)
								::hscript::Error tmp7 = ::hscript::Error_obj::EInvalidAccess(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(330)
								::hscript::Error e3 = tmp7;		HX_STACK_VAR(e3,"e3");
								HX_STACK_LINE(330)
								::hscript::Error tmp8 = e3;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(330)
								HX_STACK_DO_THROW(tmp8);
								HX_STACK_LINE(330)
								Dynamic();
							}
							HX_STACK_LINE(331)
							Dynamic tmp6 = obj;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(331)
							::String tmp7 = f;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(331)
							Dynamic tmp8 = this->fcall(tmp6,tmp7,args);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(331)
							return tmp8;
						}
					}
					;break;
					default: {
						HX_STACK_LINE(333)
						::hscript::Expr tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(333)
						Dynamic tmp2 = this->expr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(333)
						Dynamic tmp3 = this->call(null(),tmp2,args);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(333)
						return tmp3;
					}
				}
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(272)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			::hscript::Expr econd = tmp2;		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(335)
			{
				HX_STACK_LINE(336)
				::hscript::Expr tmp3 = econd;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(336)
				Dynamic tmp4 = this->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(336)
				bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(336)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(336)
				if ((tmp5)){
					HX_STACK_LINE(336)
					::hscript::Expr tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(336)
					tmp6 = this->expr(tmp7);
				}
				else{
					HX_STACK_LINE(336)
					bool tmp7 = (e2 == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(336)
					if ((tmp7)){
						HX_STACK_LINE(336)
						tmp6 = null();
					}
					else{
						HX_STACK_LINE(336)
						::hscript::Expr tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(336)
						tmp6 = this->expr(tmp8);
					}
				}
				HX_STACK_LINE(336)
				return tmp6;
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr econd = tmp1;		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(338)
				::hscript::Expr tmp2 = econd;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(338)
				::hscript::Expr tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(338)
				this->whileLoop(tmp2,tmp3);
				HX_STACK_LINE(339)
				return null();
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr it = tmp1;		HX_STACK_VAR(it,"it");
			HX_STACK_LINE(272)
			::String tmp2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			::String v = tmp2;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(340)
			{
				HX_STACK_LINE(341)
				::String tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(341)
				::hscript::Expr tmp4 = it;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(341)
				::hscript::Expr tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(341)
				this->forLoop(tmp3,tmp4,tmp5);
				HX_STACK_LINE(342)
				return null();
			}
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(344)
			HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SBreak);
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(346)
			HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SContinue);
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(348)
				bool tmp1 = (e1 == null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(348)
				Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(348)
				if ((tmp1)){
					HX_STACK_LINE(348)
					tmp2 = null();
				}
				else{
					HX_STACK_LINE(348)
					::hscript::Expr tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(348)
					tmp2 = this->expr(tmp3);
				}
				HX_STACK_LINE(348)
				::hscript::_Interp::Stop tmp3 = ::hscript::_Interp::Stop_obj::SReturn(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(348)
				HX_STACK_DO_THROW(tmp3);
			}
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(272)
			::String tmp = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::String name = tmp;		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr fexpr = tmp1;		HX_STACK_VAR(fexpr,"fexpr");
			HX_STACK_LINE(272)
			cpp::ArrayBase params = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(350)
				::haxe::ds::StringMap tmp2 = this->locals;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(350)
				::haxe::ds::StringMap tmp3 = this->duplicate(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(350)
				::haxe::ds::StringMap capturedLocals = tmp3;		HX_STACK_VAR(capturedLocals,"capturedLocals");
				HX_STACK_LINE(351)
				::hscript::Interp me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");
				HX_STACK_LINE(352)
				bool hasOpt = false;		HX_STACK_VAR(hasOpt,"hasOpt");
				HX_STACK_LINE(352)
				int minParams = (int)0;		HX_STACK_VAR(minParams,"minParams");
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(353)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(353)
					while((true)){
						HX_STACK_LINE(353)
						bool tmp4 = (_g1 < params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(353)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(353)
						if ((tmp5)){
							HX_STACK_LINE(353)
							break;
						}
						HX_STACK_LINE(353)
						Dynamic tmp6 = params->__GetItem(_g1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(353)
						Dynamic p = tmp6;		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(353)
						++(_g1);
						HX_STACK_LINE(354)
						Dynamic tmp7 = p->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(354)
						if ((tmp7)){
							HX_STACK_LINE(355)
							hasOpt = true;
						}
						else{
							HX_STACK_LINE(357)
							(minParams)++;
						}
					}
				}

				HX_BEGIN_LOCAL_FUNC_S7(hx::LocalFunc,_Function_3_1,::hscript::Interp,_g,::haxe::ds::StringMap,capturedLocals,cpp::ArrayBase,params,::hscript::Interp,me,int,minParams,::hscript::Expr,fexpr,::String,name)
				int __ArgCount() const { return 1; }
				Dynamic run(cpp::ArrayBase args){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","hscript/Interp.hx",358,0xf078416e)
					HX_STACK_ARG(args,"args")
					{
						HX_STACK_LINE(359)
						bool tmp4 = (args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) != params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(359)
						if ((tmp4)){
							HX_STACK_LINE(360)
							bool tmp5 = (args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) < minParams);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(360)
							if ((tmp5)){
								HX_STACK_LINE(361)
								::String tmp6 = (HX_HCSTRING("Invalid number of parameters. Got ","\xcb","\x2b","\xd9","\xb1") + args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(361)
								::String tmp7 = (tmp6 + HX_HCSTRING(", required ","\xed","\x0c","\x66","\x93"));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(361)
								int tmp8 = minParams;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(361)
								::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(361)
								::String str = tmp9;		HX_STACK_VAR(str,"str");
								HX_STACK_LINE(362)
								bool tmp10 = (name != null());		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(362)
								if ((tmp10)){
									HX_STACK_LINE(362)
									::String tmp11 = (HX_HCSTRING(" for function '","\xf6","\x90","\xab","\xa0") + name);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(362)
									::String tmp12 = (tmp11 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(362)
									hx::AddEq(str,tmp12);
								}
								HX_STACK_LINE(363)
								::String tmp11 = str;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(363)
								HX_STACK_DO_THROW(tmp11);
							}
							HX_STACK_LINE(366)
							cpp::ArrayBase args2 = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(args2,"args2");
							HX_STACK_LINE(367)
							int tmp6 = (args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - minParams);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(367)
							int extraParams = tmp6;		HX_STACK_VAR(extraParams,"extraParams");
							HX_STACK_LINE(368)
							int pos = (int)0;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(369)
							{
								HX_STACK_LINE(369)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(369)
								while((true)){
									HX_STACK_LINE(369)
									bool tmp7 = (_g1 < params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(369)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(369)
									if ((tmp8)){
										HX_STACK_LINE(369)
										break;
									}
									HX_STACK_LINE(369)
									Dynamic tmp9 = params->__GetItem(_g1);		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(369)
									Dynamic p = tmp9;		HX_STACK_VAR(p,"p");
									HX_STACK_LINE(369)
									++(_g1);
									HX_STACK_LINE(370)
									Dynamic tmp10 = p->__Field(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(370)
									if ((tmp10)){
										HX_STACK_LINE(371)
										bool tmp11 = (extraParams > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(371)
										if ((tmp11)){
											HX_STACK_LINE(372)
											int tmp12 = (pos)++;		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(372)
											Dynamic tmp13 = args->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(372)
											args2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
											HX_STACK_LINE(373)
											(extraParams)--;
										}
										else{
											HX_STACK_LINE(375)
											args2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(null());
										}
									}
									else{
										HX_STACK_LINE(377)
										int tmp11 = (pos)++;		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(377)
										Dynamic tmp12 = args->__GetItem(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(377)
										args2->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
									}
								}
							}
							HX_STACK_LINE(378)
							args = args2;
						}
						HX_STACK_LINE(380)
						::haxe::ds::StringMap old = me->locals;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(380)
						int depth = me->depth;		HX_STACK_VAR(depth,"depth");
						HX_STACK_LINE(381)
						(me->depth)++;
						HX_STACK_LINE(382)
						::haxe::ds::StringMap tmp5 = capturedLocals;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(382)
						::haxe::ds::StringMap tmp6 = me->duplicate(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(382)
						me->locals = tmp6;
						HX_STACK_LINE(383)
						{
							HX_STACK_LINE(383)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(383)
							int _g2 = params->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(383)
							while((true)){
								HX_STACK_LINE(383)
								bool tmp7 = (_g1 < _g2);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(383)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(383)
								if ((tmp8)){
									HX_STACK_LINE(383)
									break;
								}
								HX_STACK_LINE(383)
								int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(383)
								int i = tmp9;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(384)
								Dynamic tmp10 = params->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(384)
								::String tmp11 = tmp10->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(384)
								Dynamic tmp12 = args->__GetItem(i);		HX_STACK_VAR(tmp12,"tmp12");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &tmp12){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",384,0xf078416e)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp12,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(384)
								Dynamic tmp13 = _Function_6_1::Block(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(384)
								me->locals->set(tmp11,tmp13);
							}
						}
						HX_STACK_LINE(385)
						Dynamic r = null();		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(386)
						bool tmp7 = _g->inTry;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(386)
						if ((tmp7)){
							HX_STACK_LINE(387)
							try
							{
							HX_STACK_CATCHABLE(Dynamic, 0);
							{
								HX_STACK_LINE(388)
								::hscript::Expr tmp8 = fexpr;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(388)
								Dynamic tmp9 = me->exprReturn(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(388)
								r = tmp9;
							}
							}
							catch(Dynamic __e){
								{
									HX_STACK_BEGIN_CATCH
									Dynamic e1 = __e;{
										HX_STACK_LINE(390)
										me->locals = old;
										HX_STACK_LINE(391)
										me->depth = depth;
										HX_STACK_LINE(395)
										Dynamic tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(395)
										HX_STACK_DO_THROW(tmp8);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(399)
							::hscript::Expr tmp8 = fexpr;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(399)
							Dynamic tmp9 = me->exprReturn(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(399)
							r = tmp9;
						}
						HX_STACK_LINE(400)
						me->locals = old;
						HX_STACK_LINE(401)
						me->depth = depth;
						HX_STACK_LINE(402)
						Dynamic tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(402)
						return tmp8;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(358)
				Dynamic f =  Dynamic(new _Function_3_1(_g,capturedLocals,params,me,minParams,fexpr,name));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(404)
				Dynamic tmp4 = f;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(404)
				Dynamic tmp5 = ::Reflect_obj::makeVarArgs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(404)
				Dynamic f1 = tmp5;		HX_STACK_VAR(f1,"f1");
				HX_STACK_LINE(405)
				bool tmp6 = (name != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(405)
				if ((tmp6)){
					HX_STACK_LINE(406)
					int tmp7 = this->depth;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(406)
					bool tmp8 = (tmp7 == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(406)
					if ((tmp8)){
						HX_STACK_LINE(408)
						::haxe::ds::StringMap tmp9 = this->variables;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(408)
						::String tmp10 = name;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(408)
						Dynamic tmp11 = f1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(408)
						tmp9->set(tmp10,tmp11);
					}
					else{
						HX_STACK_LINE(411)
						::String tmp9 = name;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(411)
						::haxe::ds::StringMap tmp10 = this->locals;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(411)
						::String tmp11 = name;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(411)
						Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(411)
						Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						struct _Function_5_1{
							inline static Dynamic Block( Dynamic &tmp13,::String &tmp9){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",411,0xf078416e)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp9,false);
									__result->Add(HX_HCSTRING("old","\xa7","\x98","\x54","\x00") , tmp13,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(411)
						Dynamic tmp14 = _Function_5_1::Block(tmp13,tmp9);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(411)
						this->declared->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp14);
						struct _Function_5_2{
							inline static Dynamic Block( Dynamic &f1){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",412,0xf078416e)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , f1,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(412)
						Dynamic tmp15 = _Function_5_2::Block(f1);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(412)
						Dynamic ref = tmp15;		HX_STACK_VAR(ref,"ref");
						HX_STACK_LINE(413)
						::haxe::ds::StringMap tmp16 = this->locals;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(413)
						::String tmp17 = name;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(413)
						Dynamic tmp18 = ref;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(413)
						tmp16->set(tmp17,tmp18);
						HX_STACK_LINE(414)
						::String tmp19 = name;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(414)
						Dynamic tmp20 = ref;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(414)
						capturedLocals->set(tmp19,tmp20);
					}
				}
				HX_STACK_LINE(417)
				Dynamic tmp7 = f1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(417)
				return tmp7;
			}
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(272)
			Array< ::Dynamic > arr = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(418)
			{
				HX_STACK_LINE(419)
				cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(420)
				{
					HX_STACK_LINE(420)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(420)
					while((true)){
						HX_STACK_LINE(420)
						bool tmp = (_g1 < arr->length);		HX_STACK_VAR(tmp,"tmp");
						HX_STACK_LINE(420)
						bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(420)
						if ((tmp1)){
							HX_STACK_LINE(420)
							break;
						}
						HX_STACK_LINE(420)
						::hscript::Expr tmp2 = arr->__get(_g1).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(420)
						::hscript::Expr e1 = tmp2;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(420)
						++(_g1);
						HX_STACK_LINE(421)
						::hscript::Expr tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(421)
						Dynamic tmp4 = this->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(421)
						a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
					}
				}
				HX_STACK_LINE(422)
				return a;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr index = tmp;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(423)
			{
				HX_STACK_LINE(424)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(424)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(424)
				::hscript::Expr tmp4 = index;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(424)
				Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(424)
				Dynamic tmp6 = tmp3->__GetItem(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(424)
				return tmp6;
			}
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(272)
			Array< ::Dynamic > params = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(272)
			::String tmp = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::String cl = tmp;		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(425)
			{
				HX_STACK_LINE(426)
				cpp::ArrayBase a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(427)
				{
					HX_STACK_LINE(427)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(427)
					while((true)){
						HX_STACK_LINE(427)
						bool tmp1 = (_g1 < params->length);		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(427)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(427)
						if ((tmp2)){
							HX_STACK_LINE(427)
							break;
						}
						HX_STACK_LINE(427)
						::hscript::Expr tmp3 = params->__get(_g1).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(427)
						::hscript::Expr e1 = tmp3;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(427)
						++(_g1);
						HX_STACK_LINE(428)
						::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(428)
						Dynamic tmp5 = this->expr(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(428)
						a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
					}
				}
				HX_STACK_LINE(429)
				::String tmp1 = cl;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(429)
				Dynamic tmp2 = this->cnew(tmp1,a);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(429)
				return tmp2;
			}
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(430)
			{
				HX_STACK_LINE(431)
				::hscript::Expr tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(431)
				Dynamic tmp2 = this->expr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(431)
				HX_STACK_DO_THROW(tmp2);
			}
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(3);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr ecatch = tmp;		HX_STACK_VAR(ecatch,"ecatch");
			HX_STACK_LINE(272)
			::String tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::String n = tmp1;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(272)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp2;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(432)
			{
				HX_STACK_LINE(433)
				int tmp3 = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(433)
				int old = tmp3;		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(434)
				bool tmp4 = this->inTry;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(434)
				bool oldTry = tmp4;		HX_STACK_VAR(oldTry,"oldTry");
				HX_STACK_LINE(435)
				try
				{
				HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
				HX_STACK_CATCHABLE(Dynamic, 1);
				{
					HX_STACK_LINE(436)
					this->inTry = true;
					HX_STACK_LINE(437)
					::hscript::Expr tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(437)
					Dynamic tmp6 = this->expr(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(437)
					Dynamic v = tmp6;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(438)
					int tmp7 = old;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(438)
					this->restore(tmp7);
					HX_STACK_LINE(439)
					this->inTry = oldTry;
					HX_STACK_LINE(440)
					Dynamic tmp8 = v;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(440)
					return tmp8;
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::hscript::_Interp::Stop >() ){
						HX_STACK_BEGIN_CATCH
						::hscript::_Interp::Stop err = __e;{
							HX_STACK_LINE(442)
							this->inTry = oldTry;
							HX_STACK_LINE(443)
							::hscript::_Interp::Stop tmp5 = err;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(443)
							HX_STACK_DO_THROW(tmp5);
						}
					}
					else {
						HX_STACK_BEGIN_CATCH
						Dynamic err = __e;{
							HX_STACK_LINE(446)
							int tmp5 = old;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(446)
							this->restore(tmp5);
							HX_STACK_LINE(447)
							this->inTry = oldTry;
							HX_STACK_LINE(449)
							::String tmp6 = n;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(449)
							::haxe::ds::StringMap tmp7 = this->locals;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(449)
							::String tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(449)
							Dynamic tmp9 = tmp7->get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(449)
							Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
							struct _Function_4_1{
								inline static Dynamic Block( ::String &tmp6,Dynamic &tmp10){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",449,0xf078416e)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp6,false);
										__result->Add(HX_HCSTRING("old","\xa7","\x98","\x54","\x00") , tmp10,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(449)
							Dynamic tmp11 = _Function_4_1::Block(tmp6,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(449)
							this->declared->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp11);
							HX_STACK_LINE(450)
							::haxe::ds::StringMap tmp12 = this->locals;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(450)
							::String tmp13 = n;		HX_STACK_VAR(tmp13,"tmp13");
							struct _Function_4_2{
								inline static Dynamic Block( Dynamic &err){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",450,0xf078416e)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , err,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(450)
							Dynamic tmp14 = _Function_4_2::Block(err);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(450)
							tmp12->set(tmp13,tmp14);
							HX_STACK_LINE(451)
							::hscript::Expr tmp15 = ecatch;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(451)
							Dynamic tmp16 = this->expr(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(451)
							Dynamic v = tmp16;		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(452)
							int tmp17 = old;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(452)
							this->restore(tmp17);
							HX_STACK_LINE(453)
							Dynamic tmp18 = v;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(453)
							return tmp18;
						}
					}
				}
			}
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(272)
			cpp::ArrayBase fl = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(fl,"fl");
			HX_STACK_LINE(455)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",456,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(456)
				Dynamic tmp = _Function_3_1::Block();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(456)
				Dynamic o = tmp;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(457)
				{
					HX_STACK_LINE(457)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(457)
					while((true)){
						HX_STACK_LINE(457)
						bool tmp1 = (_g1 < fl->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
						HX_STACK_LINE(457)
						bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(457)
						if ((tmp2)){
							HX_STACK_LINE(457)
							break;
						}
						HX_STACK_LINE(457)
						Dynamic tmp3 = fl->__GetItem(_g1);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(457)
						Dynamic f = tmp3;		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(457)
						++(_g1);
						HX_STACK_LINE(458)
						Dynamic tmp4 = o;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(458)
						::String tmp5 = f->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(458)
						::hscript::Expr tmp6 = f->__Field(HX_HCSTRING("e","\x65","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(458)
						Dynamic tmp7 = this->expr(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(458)
						this->set(tmp4,tmp5,tmp7);
					}
				}
				HX_STACK_LINE(459)
				Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(459)
				return tmp1;
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr e2 = tmp;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(272)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			::hscript::Expr econd = tmp2;		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(460)
			{
				HX_STACK_LINE(461)
				::hscript::Expr tmp3 = econd;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(461)
				Dynamic tmp4 = this->expr(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(461)
				bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(461)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(461)
				if ((tmp5)){
					HX_STACK_LINE(461)
					::hscript::Expr tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(461)
					tmp6 = this->expr(tmp7);
				}
				else{
					HX_STACK_LINE(461)
					::hscript::Expr tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(461)
					tmp6 = this->expr(tmp7);
				}
				HX_STACK_LINE(461)
				return tmp6;
			}
		}
		;break;
		case (int)23: {
			HX_STACK_LINE(272)
			::hscript::Expr tmp = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(272)
			::hscript::Expr def = tmp;		HX_STACK_VAR(def,"def");
			HX_STACK_LINE(272)
			cpp::ArrayBase cases = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(cases,"cases");
			HX_STACK_LINE(272)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(462)
			{
				HX_STACK_LINE(463)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(463)
				Dynamic tmp3 = this->expr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(463)
				Dynamic val = tmp3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(464)
				bool match = false;		HX_STACK_VAR(match,"match");
				HX_STACK_LINE(465)
				{
					HX_STACK_LINE(465)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(465)
					while((true)){
						HX_STACK_LINE(465)
						bool tmp4 = (_g1 < cases->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(465)
						bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(465)
						if ((tmp5)){
							HX_STACK_LINE(465)
							break;
						}
						HX_STACK_LINE(465)
						Dynamic tmp6 = cases->__GetItem(_g1);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(465)
						Dynamic c = tmp6;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(465)
						++(_g1);
						HX_STACK_LINE(466)
						{
							HX_STACK_LINE(466)
							int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(466)
							Array< ::Dynamic > _g2 = c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(466)
							while((true)){
								HX_STACK_LINE(466)
								bool tmp7 = (_g11 < _g2->length);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(466)
								bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(466)
								if ((tmp8)){
									HX_STACK_LINE(466)
									break;
								}
								HX_STACK_LINE(466)
								::hscript::Expr tmp9 = _g2->__get(_g11).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(466)
								::hscript::Expr v = tmp9;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(466)
								++(_g11);
								HX_STACK_LINE(467)
								::hscript::Expr tmp10 = v;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(467)
								Dynamic tmp11 = this->expr(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(467)
								Dynamic tmp12 = val;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(467)
								bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(467)
								if ((tmp13)){
									HX_STACK_LINE(468)
									match = true;
									HX_STACK_LINE(469)
									break;
								}
							}
						}
						HX_STACK_LINE(471)
						bool tmp7 = match;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(471)
						if ((tmp7)){
							HX_STACK_LINE(472)
							::hscript::Expr tmp8 = c->__Field(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(472)
							Dynamic tmp9 = this->expr(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(472)
							val = tmp9;
							HX_STACK_LINE(473)
							break;
						}
					}
				}
				HX_STACK_LINE(476)
				bool tmp4 = match;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(476)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(476)
				if ((tmp5)){
					HX_STACK_LINE(477)
					bool tmp6 = (def == null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(477)
					Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(477)
					if ((tmp6)){
						HX_STACK_LINE(477)
						tmp7 = null();
					}
					else{
						HX_STACK_LINE(477)
						::hscript::Expr tmp8 = def;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(477)
						tmp7 = this->expr(tmp8);
					}
					HX_STACK_LINE(477)
					val = tmp7;
				}
				HX_STACK_LINE(478)
				Dynamic tmp6 = val;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(478)
				return tmp6;
			}
		}
		;break;
	}
	HX_STACK_LINE(480)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,expr,return )

Void Interp_obj::whileLoop( ::hscript::Expr econd,::hscript::Expr e){
{
		HX_STACK_FRAME("hscript.Interp","whileLoop",0xce1b3216,"hscript.Interp.whileLoop","hscript/Interp.hx",483,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(econd,"econd")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(484)
		int tmp = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(484)
		int old = tmp;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(485)
		while((true)){
			HX_STACK_LINE(485)
			::hscript::Expr tmp1 = econd;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(485)
			Dynamic tmp2 = this->expr(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(485)
			bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(485)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(485)
			if ((tmp4)){
				HX_STACK_LINE(485)
				break;
			}
			HX_STACK_LINE(486)
			try
			{
			HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
			{
				HX_STACK_LINE(487)
				::hscript::Expr tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(487)
				this->expr(tmp5);
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::hscript::_Interp::Stop >() ){
					HX_STACK_BEGIN_CATCH
					::hscript::_Interp::Stop err = __e;{
						HX_STACK_LINE(489)
						int _switch_2 = (err->__Index());
						if (  ( _switch_2==(int)1)){
						}
						else if (  ( _switch_2==(int)0)){
							HX_STACK_LINE(491)
							break;
						}
						else if (  ( _switch_2==(int)2)){
							HX_STACK_LINE(492)
							::hscript::_Interp::Stop tmp5 = err;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(492)
							HX_STACK_DO_THROW(tmp5);
						}
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		HX_STACK_LINE(496)
		int tmp1 = old;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(496)
		this->restore(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,whileLoop,(void))

Dynamic Interp_obj::makeIterator( Dynamic v){
	HX_STACK_FRAME("hscript.Interp","makeIterator",0x634d013b,"hscript.Interp.makeIterator","hscript/Interp.hx",499,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(503)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(503)
		Dynamic tmp = v->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		v = tmp;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(505)
	bool tmp = (v->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(505)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(505)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(505)
	if ((tmp1)){
		HX_STACK_LINE(505)
		tmp2 = (v->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic ) == null());
	}
	else{
		HX_STACK_LINE(505)
		tmp2 = true;
	}
	HX_STACK_LINE(505)
	if ((tmp2)){
		HX_STACK_LINE(505)
		Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(505)
		::hscript::Error tmp4 = ::hscript::Error_obj::EInvalidIterator(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(505)
		::hscript::Error e = tmp4;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(505)
		::hscript::Error tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(505)
		HX_STACK_DO_THROW(tmp5);
		HX_STACK_LINE(505)
		Dynamic();
	}
	HX_STACK_LINE(506)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(506)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,makeIterator,return )

Void Interp_obj::forLoop( ::String n,::hscript::Expr it,::hscript::Expr e){
{
		HX_STACK_FRAME("hscript.Interp","forLoop",0xdf1ff72e,"hscript.Interp.forLoop","hscript/Interp.hx",509,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(it,"it")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(510)
		int tmp = this->declared->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(510)
		int old = tmp;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(511)
		::String tmp1 = n;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(511)
		::haxe::ds::StringMap tmp2 = this->locals;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(511)
		::String tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(511)
		Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &tmp5,::String &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",511,0xf078416e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("n","\x6e","\x00","\x00","\x00") , tmp1,false);
					__result->Add(HX_HCSTRING("old","\xa7","\x98","\x54","\x00") , tmp5,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(511)
		Dynamic tmp6 = _Function_1_1::Block(tmp5,tmp1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(511)
		this->declared->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		HX_STACK_LINE(512)
		::hscript::Expr tmp7 = it;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(512)
		Dynamic tmp8 = this->expr(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(512)
		Dynamic tmp9 = this->makeIterator(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(512)
		Dynamic it1 = tmp9;		HX_STACK_VAR(it1,"it1");
		HX_STACK_LINE(513)
		while((true)){
			HX_STACK_LINE(513)
			bool tmp10 = it1->__Field(HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(513)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(513)
			if ((tmp11)){
				HX_STACK_LINE(513)
				break;
			}
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				Dynamic tmp12 = it1->__Field(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"), hx::paccDynamic )();		HX_STACK_VAR(tmp12,"tmp12");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &tmp12){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",514,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("r","\x72","\x00","\x00","\x00") , tmp12,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(514)
				Dynamic tmp13 = _Function_3_1::Block(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(514)
				Dynamic value = tmp13;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(514)
				::haxe::ds::StringMap tmp14 = this->locals;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(514)
				::String tmp15 = n;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(514)
				Dynamic tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(514)
				tmp14->set(tmp15,tmp16);
			}
			HX_STACK_LINE(515)
			try
			{
			HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
			{
				HX_STACK_LINE(516)
				::hscript::Expr tmp12 = e;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(516)
				this->expr(tmp12);
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::hscript::_Interp::Stop >() ){
					HX_STACK_BEGIN_CATCH
					::hscript::_Interp::Stop err = __e;{
						HX_STACK_LINE(518)
						int _switch_3 = (err->__Index());
						if (  ( _switch_3==(int)1)){
						}
						else if (  ( _switch_3==(int)0)){
							HX_STACK_LINE(520)
							break;
						}
						else if (  ( _switch_3==(int)2)){
							HX_STACK_LINE(521)
							::hscript::_Interp::Stop tmp12 = err;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(521)
							HX_STACK_DO_THROW(tmp12);
						}
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		HX_STACK_LINE(525)
		int tmp10 = old;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(525)
		this->restore(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,forLoop,(void))

Dynamic Interp_obj::get( Dynamic o,::String f){
	HX_STACK_FRAME("hscript.Interp","get",0xf7e1c137,"hscript.Interp.get","hscript/Interp.hx",528,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(529)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(529)
	if ((tmp)){
		HX_STACK_LINE(529)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(529)
		::hscript::Error tmp2 = ::hscript::Error_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(529)
		::hscript::Error e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(529)
		::hscript::Error tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(529)
		HX_STACK_DO_THROW(tmp3);
		HX_STACK_LINE(529)
		Dynamic();
	}
	HX_STACK_LINE(530)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(530)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(530)
	Dynamic tmp3 = ::Reflect_obj::field(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(530)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,get,return )

Dynamic Interp_obj::set( Dynamic o,::String f,Dynamic v){
	HX_STACK_FRAME("hscript.Interp","set",0xf7eadc43,"hscript.Interp.set","hscript/Interp.hx",533,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(534)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	if ((tmp)){
		HX_STACK_LINE(534)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		::hscript::Error tmp2 = ::hscript::Error_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(534)
		::hscript::Error e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(534)
		::hscript::Error tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		HX_STACK_DO_THROW(tmp3);
		HX_STACK_LINE(534)
		Dynamic();
	}
	HX_STACK_LINE(535)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(535)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(535)
	::Reflect_obj::setField(tmp1,tmp2,tmp3);
	HX_STACK_LINE(536)
	Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(536)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,set,return )

Dynamic Interp_obj::fcall( Dynamic o,::String f,cpp::ArrayBase args){
	HX_STACK_FRAME("hscript.Interp","fcall",0x6ff6aee5,"hscript.Interp.fcall","hscript/Interp.hx",539,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(540)
	Dynamic tmp = o;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(540)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(540)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(540)
	Dynamic tmp3 = ::Reflect_obj::field(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(540)
	Dynamic tmp4 = this->call(tmp,tmp3,args);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(540)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,fcall,return )

Dynamic Interp_obj::call( Dynamic o,Dynamic f,cpp::ArrayBase args){
	HX_STACK_FRAME("hscript.Interp","call",0xeaff64dd,"hscript.Interp.call","hscript/Interp.hx",543,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(544)
	Dynamic tmp = o;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(544)
	Dynamic tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(544)
	Dynamic tmp2 = ::Reflect_obj::callMethod(tmp,tmp1,args);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(544)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,call,return )

Dynamic Interp_obj::cnew( ::String cl,cpp::ArrayBase args){
	HX_STACK_FRAME("hscript.Interp","cnew",0xeb093c1c,"hscript.Interp.cnew","hscript/Interp.hx",547,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(548)
	::String tmp = cl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(548)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	::hx::Class c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(549)
	bool tmp2 = (c == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(549)
	if ((tmp2)){
		HX_STACK_LINE(549)
		::String tmp3 = cl;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(549)
		Dynamic tmp4 = this->resolve(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		c = tmp4;
	}
	HX_STACK_LINE(550)
	::hx::Class tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(550)
	Dynamic tmp4 = ::Type_obj::createInstance(tmp3,args);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(550)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,cnew,return )


Interp_obj::Interp_obj()
{
}

void Interp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interp);
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(binops,"binops");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(inTry,"inTry");
	HX_MARK_MEMBER_NAME(declared,"declared");
	HX_MARK_END_CLASS();
}

void Interp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(binops,"binops");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(inTry,"inTry");
	HX_VISIT_MEMBER_NAME(declared,"declared");
}

Dynamic Interp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"edef") ) { return edef_dyn(); }
		if (HX_FIELD_EQ(inName,"expr") ) { return expr_dyn(); }
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		if (HX_FIELD_EQ(inName,"cnew") ) { return cnew_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		if (HX_FIELD_EQ(inName,"inTry") ) { return inTry; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"fcall") ) { return fcall_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { return locals; }
		if (HX_FIELD_EQ(inName,"binops") ) { return binops; }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initOps") ) { return initOps_dyn(); }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		if (HX_FIELD_EQ(inName,"forLoop") ) { return forLoop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { return declared; }
		if (HX_FIELD_EQ(inName,"assignOp") ) { return assignOp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return variables; }
		if (HX_FIELD_EQ(inName,"increment") ) { return increment_dyn(); }
		if (HX_FIELD_EQ(inName,"duplicate") ) { return duplicate_dyn(); }
		if (HX_FIELD_EQ(inName,"whileLoop") ) { return whileLoop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprReturn") ) { return exprReturn_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"evalAssignOp") ) { return evalAssignOp_dyn(); }
		if (HX_FIELD_EQ(inName,"makeIterator") ) { return makeIterator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Interp_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inTry") ) { inTry=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binops") ) { binops=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { declared=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"));
	outFields->push(HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("binops","\xcb","\x59","\x16","\xed"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe"));
	outFields->push(HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,variables),HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,locals),HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,binops),HX_HCSTRING("binops","\xcb","\x59","\x16","\xed")},
	{hx::fsInt,(int)offsetof(Interp_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsBool,(int)offsetof(Interp_obj,inTry),HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Interp_obj,declared),HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("variables","\xb7","\xe2","\x62","\x82"),
	HX_HCSTRING("locals","\xa8","\x74","\xbf","\x59"),
	HX_HCSTRING("binops","\xcb","\x59","\x16","\xed"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("inTry","\x56","\x82","\x08","\xbe"),
	HX_HCSTRING("declared","\xfa","\x58","\xbc","\xc4"),
	HX_HCSTRING("initOps","\x02","\x63","\x8b","\xcb"),
	HX_HCSTRING("assign","\x2f","\x46","\x06","\x4c"),
	HX_HCSTRING("assignOp","\x30","\xb5","\xc7","\x0e"),
	HX_HCSTRING("evalAssignOp","\xec","\xd8","\x94","\x19"),
	HX_HCSTRING("increment","\x2f","\x06","\xff","\x31"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("exprReturn","\xc5","\x6b","\xed","\x86"),
	HX_HCSTRING("duplicate","\x8b","\x21","\x17","\xa1"),
	HX_HCSTRING("restore","\x4e","\x67","\xb0","\x6a"),
	HX_HCSTRING("edef","\x80","\xc6","\x0e","\x43"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"),
	HX_HCSTRING("whileLoop","\xb5","\x42","\x98","\xe1"),
	HX_HCSTRING("makeIterator","\xfc","\xdd","\x72","\xd8"),
	HX_HCSTRING("forLoop","\x0d","\x52","\x69","\xc9"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("fcall","\x04","\x44","\x99","\xfc"),
	HX_HCSTRING("call","\x9e","\x18","\xba","\x41"),
	HX_HCSTRING("cnew","\xdd","\xef","\xc3","\x41"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#endif

hx::Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hscript.Interp","\x8f","\x7c","\xf0","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Interp_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hscript
