#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#define INCLUDED_haxe_ui_toolkit_style_StyleParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,style,StyleParser)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Styles)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  StyleParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StyleParser_obj OBJ_;
		StyleParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.style.StyleParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StyleParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleParser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StyleParser","\xd0","\xc8","\x52","\x49"); }

		static ::haxe::ui::toolkit::style::Styles fromString( ::String styleString,hx::Null< bool >  storeRaw);
		static Dynamic fromString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_StyleParser */ 
