#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptInterp
#include <haxe/ui/toolkit/hscript/ScriptInterp.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{

Void ScriptInterp_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptInterp","new",0xc8a5f5ee,"haxe.ui.toolkit.hscript.ScriptInterp.new","haxe/ui/toolkit/hscript/ScriptInterp.hx",6,0x0faea7e0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	::haxe::ui::toolkit::hscript::ScriptManager tmp = ::haxe::ui::toolkit::hscript::ScriptManager_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	::haxe::ds::StringMap tmp1 = tmp->get_classes();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8)
	::haxe::ds::StringMap defaultClasses = tmp1;		HX_STACK_VAR(defaultClasses,"defaultClasses");
	HX_STACK_LINE(9)
	Dynamic tmp2 = defaultClasses->keys();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(9)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp2);  __it->hasNext(); ){
		::String name = __it->next();
		{
			HX_STACK_LINE(10)
			::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(10)
			Dynamic tmp4 = defaultClasses->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(10)
			Dynamic c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(11)
			{
				HX_STACK_LINE(11)
				Dynamic value = c;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(11)
				::haxe::ds::StringMap tmp5 = this->variables;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(11)
				::String tmp6 = name;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(11)
				Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(11)
				tmp5->set(tmp6,tmp7);
			}
		}
;
	}
}
;
	return null();
}

//ScriptInterp_obj::~ScriptInterp_obj() { }

Dynamic ScriptInterp_obj::__CreateEmpty() { return  new ScriptInterp_obj; }
hx::ObjectPtr< ScriptInterp_obj > ScriptInterp_obj::__new()
{  hx::ObjectPtr< ScriptInterp_obj > _result_ = new ScriptInterp_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScriptInterp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScriptInterp_obj > _result_ = new ScriptInterp_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScriptInterp_obj::get( Dynamic o,::String f){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptInterp","get",0xc8a0a624,"haxe.ui.toolkit.hscript.ScriptInterp.get","haxe/ui/toolkit/hscript/ScriptInterp.hx",15,0x0faea7e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(16)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	if ((tmp)){
		HX_STACK_LINE(16)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		{
			HX_STACK_LINE(16)
			::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(16)
			::hscript::Error tmp3 = ::hscript::Error_obj::EInvalidAccess(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(16)
			::hscript::Error e = tmp3;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(16)
			::hscript::Error tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(16)
			HX_STACK_DO_THROW(tmp4);
			HX_STACK_LINE(16)
			tmp1 = null();
		}
		HX_STACK_LINE(16)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(17)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(17)
	Dynamic tmp3 = ::Reflect_obj::getProperty(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	return tmp3;
}


Dynamic ScriptInterp_obj::set( Dynamic o,::String f,Dynamic v){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptInterp","set",0xc8a9c130,"haxe.ui.toolkit.hscript.ScriptInterp.set","haxe/ui/toolkit/hscript/ScriptInterp.hx",20,0x0faea7e0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(21)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	if ((tmp)){
		HX_STACK_LINE(21)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			::hscript::Error tmp3 = ::hscript::Error_obj::EInvalidAccess(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			::hscript::Error e = tmp3;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(21)
			::hscript::Error tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			HX_STACK_DO_THROW(tmp4);
			HX_STACK_LINE(21)
			tmp1 = null();
		}
		HX_STACK_LINE(21)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(22)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	::Reflect_obj::setProperty(tmp1,tmp2,tmp3);
	HX_STACK_LINE(23)
	Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	return tmp4;
}



ScriptInterp_obj::ScriptInterp_obj()
{
}

Dynamic ScriptInterp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptInterp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptInterp_obj::__mClass,"__mClass");
};

#endif

hx::Class ScriptInterp_obj::__mClass;

void ScriptInterp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.hscript.ScriptInterp","\xfc","\x26","\x65","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScriptInterp_obj >;
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
