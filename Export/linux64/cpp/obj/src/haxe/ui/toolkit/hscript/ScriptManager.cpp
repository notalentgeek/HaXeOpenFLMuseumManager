#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#include <haxe/ui/toolkit/core/Client.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptInterp
#include <haxe/ui/toolkit/hscript/ScriptInterp.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{

Void ScriptManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","new",0xff700fb7,"haxe.ui.toolkit.hscript.ScriptManager.new","haxe/ui/toolkit/hscript/ScriptManager.hx",19,0x67f8573b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		tmp = tmp2;
	}
	HX_STACK_LINE(20)
	this->_defaultClasses = tmp;
	HX_STACK_LINE(21)
	::haxe::ds::StringMap tmp1 = this->_defaultClasses;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	tmp1->set(HX_HCSTRING("Std","\x83","\x60","\x3f","\x00"),hx::ClassOf< ::Std >());
	HX_STACK_LINE(22)
	::haxe::ds::StringMap tmp2 = this->_defaultClasses;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	tmp2->set(HX_HCSTRING("Math","\xe8","\x6d","\x2f","\x33"),hx::ClassOf< ::Math >());
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::core::Client tmp3 = ::haxe::ui::toolkit::core::Client_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(23)
		::haxe::ds::StringMap tmp4 = this->_defaultClasses;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		tmp4->set(HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"),tmp5);
	}
	HX_STACK_LINE(24)
	::haxe::ds::StringMap tmp3 = this->_defaultClasses;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	tmp3->set(HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"),hx::ClassOf< ::haxe::Timer >());
}
;
	return null();
}

//ScriptManager_obj::~ScriptManager_obj() { }

Dynamic ScriptManager_obj::__CreateEmpty() { return  new ScriptManager_obj; }
hx::ObjectPtr< ScriptManager_obj > ScriptManager_obj::__new()
{  hx::ObjectPtr< ScriptManager_obj > _result_ = new ScriptManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScriptManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScriptManager_obj > _result_ = new ScriptManager_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap ScriptManager_obj::get_classes( ){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","get_classes",0x83899d14,"haxe.ui.toolkit.hscript.ScriptManager.get_classes","haxe/ui/toolkit/hscript/ScriptManager.hx",28,0x67f8573b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	::haxe::ds::StringMap tmp = this->_defaultClasses;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ScriptManager_obj,get_classes,return )

Void ScriptManager_obj::addClass( ::String name,Dynamic cls){
{
		HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","addClass",0xc1e163a0,"haxe.ui.toolkit.hscript.ScriptManager.addClass","haxe/ui/toolkit/hscript/ScriptManager.hx",33,0x67f8573b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(cls,"cls")
		HX_STACK_LINE(33)
		Dynamic value = cls;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(33)
		::haxe::ds::StringMap tmp = this->_defaultClasses;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		tmp->set(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ScriptManager_obj,addClass,(void))

Dynamic ScriptManager_obj::executeScript( ::String script){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","executeScript",0xc46e5437,"haxe.ui.toolkit.hscript.ScriptManager.executeScript","haxe/ui/toolkit/hscript/ScriptManager.hx",36,0x67f8573b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(script,"script")
	HX_STACK_LINE(37)
	::String fullScript = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(fullScript,"fullScript");
	HX_STACK_LINE(38)
	hx::AddEq(fullScript,script);
	HX_STACK_LINE(39)
	Dynamic retVal = null();		HX_STACK_VAR(retVal,"retVal");
	HX_STACK_LINE(41)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(42)
		::hscript::Parser tmp = ::hscript::Parser_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::hscript::Parser parser = tmp;		HX_STACK_VAR(parser,"parser");
		HX_STACK_LINE(43)
		::String tmp1 = fullScript;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(43)
		::hscript::Expr tmp2 = parser->parseString(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		::hscript::Expr program = tmp2;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(44)
		::haxe::ui::toolkit::hscript::ScriptInterp tmp3 = ::haxe::ui::toolkit::hscript::ScriptInterp_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		::haxe::ui::toolkit::hscript::ScriptInterp interp = tmp3;		HX_STACK_VAR(interp,"interp");
		HX_STACK_LINE(46)
		::hscript::Expr tmp4 = program;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		Dynamic tmp5 = interp->execute(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		retVal = tmp5;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(50)
				retVal = ((Dynamic)(script));
			}
		}
	}
	HX_STACK_LINE(52)
	Dynamic tmp = retVal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ScriptManager_obj,executeScript,return )

::haxe::ui::toolkit::hscript::ScriptManager ScriptManager_obj::_instance;

::haxe::ui::toolkit::hscript::ScriptManager ScriptManager_obj::instance;

::haxe::ui::toolkit::hscript::ScriptManager ScriptManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","get_instance",0xf92d7167,"haxe.ui.toolkit.hscript.ScriptManager.get_instance","haxe/ui/toolkit/hscript/ScriptManager.hx",7,0x67f8573b)
	HX_STACK_LINE(8)
	::haxe::ui::toolkit::hscript::ScriptManager tmp = ::haxe::ui::toolkit::hscript::ScriptManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8)
	if ((tmp1)){
		HX_STACK_LINE(9)
		::haxe::ui::toolkit::hscript::ScriptManager tmp2 = ::haxe::ui::toolkit::hscript::ScriptManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9)
		::haxe::ui::toolkit::hscript::ScriptManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(11)
	::haxe::ui::toolkit::hscript::ScriptManager tmp2 = ::haxe::ui::toolkit::hscript::ScriptManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ScriptManager_obj,get_instance,return )


ScriptManager_obj::ScriptManager_obj()
{
}

void ScriptManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScriptManager);
	HX_MARK_MEMBER_NAME(_defaultClasses,"_defaultClasses");
	HX_MARK_MEMBER_NAME(classes,"classes");
	HX_MARK_END_CLASS();
}

void ScriptManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_defaultClasses,"_defaultClasses");
	HX_VISIT_MEMBER_NAME(classes,"classes");
}

Dynamic ScriptManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { return inCallProp == hx::paccAlways ? get_classes() : classes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addClass") ) { return addClass_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_classes") ) { return get_classes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executeScript") ) { return executeScript_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultClasses") ) { return _defaultClasses; }
	}
	return super::__Field(inName,inCallProp);
}

bool ScriptManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic ScriptManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { classes=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_defaultClasses") ) { _defaultClasses=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ScriptManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::hscript::ScriptManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::hscript::ScriptManager >(); return true; }
	}
	return false;
}

void ScriptManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_defaultClasses","\x84","\xf0","\x31","\xe2"));
	outFields->push(HX_HCSTRING("classes","\xa6","\x4e","\x91","\x69"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ScriptManager_obj,_defaultClasses),HX_HCSTRING("_defaultClasses","\x84","\xf0","\x31","\xe2")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ScriptManager_obj,classes),HX_HCSTRING("classes","\xa6","\x4e","\x91","\x69")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::hscript::ScriptManager*/ ,(void *) &ScriptManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::hscript::ScriptManager*/ ,(void *) &ScriptManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_defaultClasses","\x84","\xf0","\x31","\xe2"),
	HX_HCSTRING("classes","\xa6","\x4e","\x91","\x69"),
	HX_HCSTRING("get_classes","\xbd","\xae","\x8b","\xef"),
	HX_HCSTRING("addClass","\x57","\x9e","\xb5","\xc1"),
	HX_HCSTRING("executeScript","\x20","\xe2","\x56","\xc2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScriptManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ScriptManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScriptManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ScriptManager_obj::instance,"instance");
};

#endif

hx::Class ScriptManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void ScriptManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.hscript.ScriptManager","\x45","\x68","\xba","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScriptManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ScriptManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScriptManager_obj >;
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

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript
