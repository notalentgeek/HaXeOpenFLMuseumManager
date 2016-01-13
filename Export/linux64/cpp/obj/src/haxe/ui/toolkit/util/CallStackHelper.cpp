#include <hxcpp.h>

#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_CallStackHelper
#include <haxe/ui/toolkit/util/CallStackHelper.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void CallStackHelper_obj::__construct()
{
	return null();
}

//CallStackHelper_obj::~CallStackHelper_obj() { }

Dynamic CallStackHelper_obj::__CreateEmpty() { return  new CallStackHelper_obj; }
hx::ObjectPtr< CallStackHelper_obj > CallStackHelper_obj::__new()
{  hx::ObjectPtr< CallStackHelper_obj > _result_ = new CallStackHelper_obj();
	_result_->__construct();
	return _result_;}

Dynamic CallStackHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CallStackHelper_obj > _result_ = new CallStackHelper_obj();
	_result_->__construct();
	return _result_;}

Void CallStackHelper_obj::traceCallStack( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.CallStackHelper","traceCallStack",0x26ffb0e5,"haxe.ui.toolkit.util.CallStackHelper.traceCallStack","haxe/ui/toolkit/util/CallStackHelper.hx",6,0x52135330)
		HX_STACK_LINE(7)
		Array< ::Dynamic > arr = ::haxe::CallStack_obj::callStack();		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(8)
		bool tmp = (arr == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8)
		if ((tmp)){
			HX_STACK_LINE(9)
			Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("CallStackHelper.hx","\x06","\x17","\xe3","\xd3"),9,HX_HCSTRING("haxe.ui.toolkit.util.CallStackHelper","\x0e","\x9e","\x67","\xfd"),HX_HCSTRING("traceCallStack","\x85","\x9a","\x4c","\x95"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(9)
			::haxe::Log_obj::trace(HX_HCSTRING("Callstack is null!","\x1a","\x30","\xee","\x6f"),tmp1);
			HX_STACK_LINE(10)
			return null();
		}
		HX_STACK_LINE(12)
		::String tmp1 = ::haxe::CallStack_obj::toString(arr);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12)
		Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("CallStackHelper.hx","\x06","\x17","\xe3","\xd3"),12,HX_HCSTRING("haxe.ui.toolkit.util.CallStackHelper","\x0e","\x9e","\x67","\xfd"),HX_HCSTRING("traceCallStack","\x85","\x9a","\x4c","\x95"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12)
		::haxe::Log_obj::trace(tmp1,tmp2);
		HX_STACK_LINE(13)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("CallStackHelper.hx","\x06","\x17","\xe3","\xd3"),13,HX_HCSTRING("haxe.ui.toolkit.util.CallStackHelper","\x0e","\x9e","\x67","\xfd"),HX_HCSTRING("traceCallStack","\x85","\x9a","\x4c","\x95"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		::haxe::Log_obj::trace(HX_HCSTRING(">>>>>>>>>>>>>>>>>>>>>>>>>>>> END >>>>>>>>>>>>>>>>>>>>>>>>>>>>","\xa5","\xc1","\x02","\xa0"),tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CallStackHelper_obj,traceCallStack,(void))


CallStackHelper_obj::CallStackHelper_obj()
{
}

bool CallStackHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"traceCallStack") ) { outValue = traceCallStack_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallStackHelper_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallStackHelper_obj::__mClass,"__mClass");
};

#endif

hx::Class CallStackHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("traceCallStack","\x85","\x9a","\x4c","\x95"),
	::String(null()) };

void CallStackHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.CallStackHelper","\x0e","\x9e","\x67","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CallStackHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CallStackHelper_obj >;
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
