#ifndef INCLUDED_haxe_ui_toolkit_style_DefaultStyles
#define INCLUDED_haxe_ui_toolkit_style_DefaultStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,DefaultStyles)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Styles)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  DefaultStyles_obj : public ::haxe::ui::toolkit::style::Styles_obj{
	public:
		typedef ::haxe::ui::toolkit::style::Styles_obj super;
		typedef DefaultStyles_obj OBJ_;
		DefaultStyles_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.style.DefaultStyles")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DefaultStyles_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultStyles_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DefaultStyles","\xa3","\x09","\x3c","\x58"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_DefaultStyles */ 
