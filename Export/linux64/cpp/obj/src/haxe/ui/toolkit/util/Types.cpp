#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Types
#include <haxe/ui/toolkit/util/Types.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void Types_obj::__construct()
{
	return null();
}

//Types_obj::~Types_obj() { }

Dynamic Types_obj::__CreateEmpty() { return  new Types_obj; }
hx::ObjectPtr< Types_obj > Types_obj::__new()
{  hx::ObjectPtr< Types_obj > _result_ = new Types_obj();
	_result_->__construct();
	return _result_;}

Dynamic Types_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Types_obj > _result_ = new Types_obj();
	_result_->__construct();
	return _result_;}

::hx::Class Types_obj::resolveClass( ::String className){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Types","resolveClass",0x19e1b14b,"haxe.ui.toolkit.util.Types.resolveClass","haxe/ui/toolkit/util/Types.hx",10,0xb875a3af)
	HX_STACK_ARG(className,"className")
	HX_STACK_LINE(11)
	::String tmp = className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::hx::Class clazz = tmp1;		HX_STACK_VAR(clazz,"clazz");
	HX_STACK_LINE(12)
	bool tmp2 = (clazz == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	if ((tmp2)){
		HX_STACK_LINE(12)
		::String tmp3 = (HX_HCSTRING("Cannot find class with name [","\xee","\xed","\x18","\x83") + className);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(12)
		::String tmp4 = (tmp3 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(12)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(13)
	::hx::Class tmp3 = clazz;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Types_obj,resolveClass,return )


Types_obj::Types_obj()
{
}

bool Types_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Types_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Types_obj::__mClass,"__mClass");
};

#endif

hx::Class Types_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	::String(null()) };

void Types_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.Types","\x2f","\xe8","\x13","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Types_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Types_obj >;
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
} // end namespace util
