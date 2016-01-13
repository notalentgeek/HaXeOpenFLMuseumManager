#ifndef INCLUDED_haxe_ui_toolkit_themes_DefaultTheme
#define INCLUDED_haxe_ui_toolkit_themes_DefaultTheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,themes,DefaultTheme)
HX_DECLARE_CLASS4(haxe,ui,toolkit,themes,Theme)
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES  DefaultTheme_obj : public ::haxe::ui::toolkit::themes::Theme_obj{
	public:
		typedef ::haxe::ui::toolkit::themes::Theme_obj super;
		typedef DefaultTheme_obj OBJ_;
		DefaultTheme_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.themes.DefaultTheme")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DefaultTheme_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultTheme_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DefaultTheme","\xa8","\x05","\xf4","\x8c"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes

#endif /* INCLUDED_haxe_ui_toolkit_themes_DefaultTheme */ 
