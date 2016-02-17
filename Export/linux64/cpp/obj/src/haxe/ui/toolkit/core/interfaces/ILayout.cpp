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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


static ::String sMemberFields[] = {
	HX_HCSTRING("get_container","\x18","\x49","\xd7","\x80"),
	HX_HCSTRING("set_container","\x24","\x2b","\xdd","\xc5"),
	HX_HCSTRING("get_padding","\xe8","\xb9","\x77","\x56"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	HX_HCSTRING("get_spacingX","\x7e","\x93","\x2b","\xa7"),
	HX_HCSTRING("set_spacingX","\xf2","\xb6","\x24","\xbc"),
	HX_HCSTRING("get_spacingY","\x7f","\x93","\x2b","\xa7"),
	HX_HCSTRING("set_spacingY","\xf3","\xb6","\x24","\xbc"),
	HX_HCSTRING("get_innerWidth","\xd9","\xfc","\x1f","\xe6"),
	HX_HCSTRING("get_innerHeight","\xb4","\xb9","\x2c","\x2c"),
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	HX_HCSTRING("get_usableHeight","\x88","\x4d","\xc8","\x51"),
	HX_HCSTRING("innerWidth","\x90","\x74","\x2a","\x70"),
	HX_HCSTRING("innerHeight","\x1d","\x02","\x4b","\x6b"),
	HX_HCSTRING("usableWidth","\xee","\x07","\x8d","\x64"),
	HX_HCSTRING("usableHeight","\xff","\x60","\x29","\x4d"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ILayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ILayout_obj::__mClass,"__mClass");
};

#endif

hx::Class ILayout_obj::__mClass;

void ILayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.interfaces.ILayout","\x2c","\xcf","\x73","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ILayout_obj >;
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
