#ifndef INCLUDED_haxe_ui_toolkit_controls_CalendarLayout
#define INCLUDED_haxe_ui_toolkit_controls_CalendarLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,CalendarLayout)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  CalendarLayout_obj : public ::haxe::ui::toolkit::layout::Layout_obj{
	public:
		typedef ::haxe::ui::toolkit::layout::Layout_obj super;
		typedef CalendarLayout_obj OBJ_;
		CalendarLayout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.CalendarLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CalendarLayout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CalendarLayout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CalendarLayout","\x28","\xb8","\x14","\xba"); }

		virtual Void resizeChildren( );

		virtual ::haxe::ui::toolkit::layout::Layout clone( );

		virtual ::haxe::ui::toolkit::layout::Layout self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_CalendarLayout */ 
