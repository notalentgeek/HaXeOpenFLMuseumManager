#ifndef INCLUDED_haxe_ui_toolkit_layout_BoxLayout
#define INCLUDED_haxe_ui_toolkit_layout_BoxLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,BoxLayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES  BoxLayout_obj : public ::haxe::ui::toolkit::layout::Layout_obj{
	public:
		typedef ::haxe::ui::toolkit::layout::Layout_obj super;
		typedef BoxLayout_obj OBJ_;
		BoxLayout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.layout.BoxLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BoxLayout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoxLayout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BoxLayout","\xf5","\x5a","\x79","\x3a"); }

		virtual Void resizeChildren( );

		virtual Void repositionChildren( );

		virtual Float get_usableWidth( );

		virtual Float get_usableHeight( );

		virtual ::haxe::ui::toolkit::layout::Layout clone( );

		virtual ::haxe::ui::toolkit::layout::Layout self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout

#endif /* INCLUDED_haxe_ui_toolkit_layout_BoxLayout */ 
