#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout
#define INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,VerticalContinuousLayout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES  VerticalContinuousLayout_obj : public ::haxe::ui::toolkit::layout::Layout_obj{
	public:
		typedef ::haxe::ui::toolkit::layout::Layout_obj super;
		typedef VerticalContinuousLayout_obj OBJ_;
		VerticalContinuousLayout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.layout.VerticalContinuousLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VerticalContinuousLayout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VerticalContinuousLayout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VerticalContinuousLayout","\xcf","\x3d","\xc7","\x92"); }

		virtual Void repositionChildren( );

		virtual ::haxe::ui::toolkit::layout::Layout clone( );

		virtual ::haxe::ui::toolkit::layout::Layout self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout

#endif /* INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout */ 
