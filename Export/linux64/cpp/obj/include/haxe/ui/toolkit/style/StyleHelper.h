#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#define INCLUDED_haxe_ui_toolkit_style_StyleHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,StyleHelper)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  StyleHelper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StyleHelper_obj OBJ_;
		StyleHelper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.style.StyleHelper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StyleHelper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("StyleHelper","\x5f","\xa9","\x18","\x60"); }

		static ::haxe::ds::StringMap sectionCache;
		static Void clearCache( );
		static Dynamic clearCache_dyn();

		static Void paintStyle( ::openfl::_legacy::display::Graphics g,::haxe::ui::toolkit::style::Style style,::openfl::_legacy::geom::Rectangle rc);
		static Dynamic paintStyle_dyn();

		static Void paintScale9( ::openfl::_legacy::display::Graphics g,::String resourceId,::openfl::_legacy::geom::Rectangle resourceRect,::openfl::_legacy::geom::Rectangle scale9,::openfl::_legacy::geom::Rectangle rc);
		static Dynamic paintScale9_dyn();

		static Void paintCompoundBitmap( ::openfl::_legacy::display::Graphics g,::String resourceId,::openfl::_legacy::geom::Rectangle resourceRect,::haxe::ds::StringMap sourceRects,::openfl::_legacy::geom::Rectangle targetRect);
		static Dynamic paintCompoundBitmap_dyn();

		static Void paintBitmapSection( ::openfl::_legacy::display::Graphics g,::String resourceId,::openfl::_legacy::geom::Rectangle resourceRect,::openfl::_legacy::geom::Rectangle src,::openfl::_legacy::geom::Rectangle dst);
		static Dynamic paintBitmapSection_dyn();

		static ::openfl::_legacy::display::BitmapData getBitmapSection( ::String resourceId,::openfl::_legacy::geom::Rectangle rc);
		static Dynamic getBitmapSection_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_StyleHelper */ 
