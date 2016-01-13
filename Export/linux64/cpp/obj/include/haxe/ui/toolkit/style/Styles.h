#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#define INCLUDED_haxe_ui_toolkit_style_Styles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Styles)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  Styles_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Styles_obj OBJ_;
		Styles_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.style.Styles")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Styles_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Styles_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Styles","\x42","\x5a","\x67","\x4a"); }

		::haxe::ds::StringMap _styles;
		Array< ::String > _styleRules;
		Dynamic rules;
		virtual ::haxe::ui::toolkit::style::Style addStyle( ::String rule,::haxe::ui::toolkit::style::Style style);
		Dynamic addStyle_dyn();

		virtual ::haxe::ui::toolkit::style::Style getStyle( ::String rule);
		Dynamic getStyle_dyn();

		virtual Dynamic get_rules( );
		Dynamic get_rules_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_Styles */ 
