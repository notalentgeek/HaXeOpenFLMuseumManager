#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_baseStyle","\x37","\x23","\x66","\x55"),
	HX_HCSTRING("set_baseStyle","\x43","\x05","\x6c","\x9a"),
	HX_HCSTRING("get_style","\x88","\x01","\xc7","\xc7"),
	HX_HCSTRING("set_style","\x94","\xed","\x17","\xab"),
	HX_HCSTRING("get_styleName","\xf3","\x03","\x33","\xa0"),
	HX_HCSTRING("set_styleName","\xff","\xe5","\x38","\xe5"),
	HX_HCSTRING("get_styleString","\x79","\x74","\xa9","\x49"),
	HX_HCSTRING("set_styleString","\x85","\xf1","\x74","\x45"),
	HX_HCSTRING("storeStyle","\x90","\x51","\x9c","\xc1"),
	HX_HCSTRING("retrieveStyle","\x15","\x79","\x56","\xc0"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("buildStyles","\xf0","\xcb","\x43","\x66"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IStyleableDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IStyleableDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class IStyleableDisplayObject_obj::__mClass;

void IStyleableDisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.interfaces.IStyleableDisplayObject","\xd8","\x5c","\x13","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IStyleableDisplayObject_obj >;
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
