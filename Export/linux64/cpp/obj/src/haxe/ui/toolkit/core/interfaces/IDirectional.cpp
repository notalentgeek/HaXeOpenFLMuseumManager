#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDirectional_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDirectional_obj::__mClass,"__mClass");
};

#endif

hx::Class IDirectional_obj::__mClass;

void IDirectional_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.interfaces.IDirectional","\x28","\xcd","\x22","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IDirectional_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces
