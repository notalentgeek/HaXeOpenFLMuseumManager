#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_isComplete","\x0c","\x9b","\x6c","\x70"),
	HX_HCSTRING("get_progress","\xb6","\xab","\x44","\x3b"),
	HX_HCSTRING("get_total","\x1b","\xb0","\xdb","\x57"),
	HX_HCSTRING("get_runningTimeShare","\x9c","\x58","\xf9","\x0f"),
	HX_HCSTRING("set_needToExit","\xec","\x9f","\x08","\xec"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("total","\xc4","\x53","\x32","\x14"),
	HX_HCSTRING("runningTimeShare","\x93","\xf3","\x8e","\xf1"),
	HX_HCSTRING("needToExit","\x2f","\x2f","\xf3","\x55"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IRunnable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IRunnable_obj::__mClass,"__mClass");
};

#endif

hx::Class IRunnable_obj::__mClass;

void IRunnable_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.pseudothreads.IRunnable","\x19","\xcd","\x53","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IRunnable_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads
