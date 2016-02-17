#ifndef INCLUDED_haxe_ui_toolkit_util_FilterParser
#define INCLUDED_haxe_ui_toolkit_util_FilterParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,util,FilterParser)
HX_DECLARE_CLASS3(openfl,_legacy,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_legacy,filters,BlurFilter)
HX_DECLARE_CLASS3(openfl,_legacy,filters,DropShadowFilter)
HX_DECLARE_CLASS3(openfl,_legacy,filters,GlowFilter)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  FilterParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FilterParser_obj OBJ_;
		FilterParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.util.FilterParser")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FilterParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FilterParser_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FilterParser","\xd7","\x16","\xf3","\xc1"); }

		static void __boot();
		static Dynamic filterParamDefaults;
		static ::openfl::_legacy::filters::BitmapFilter parseFilter( ::String filterString);
		static Dynamic parseFilter_dyn();

		static ::openfl::_legacy::filters::BitmapFilter createFilter( ::String filterName,::String filterParams);
		static Dynamic createFilter_dyn();

		static ::openfl::_legacy::filters::BlurFilter createBlurFilter( Array< ::String > params);
		static Dynamic createBlurFilter_dyn();

		static ::openfl::_legacy::filters::DropShadowFilter createDropShadowFilter( Array< ::String > params);
		static Dynamic createDropShadowFilter_dyn();

		static ::openfl::_legacy::filters::GlowFilter createGlowFilter( Array< ::String > params);
		static Dynamic createGlowFilter_dyn();

		static Array< ::String > copyFilterDefaults( ::String filterName,Array< ::String > params);
		static Dynamic copyFilterDefaults_dyn();

		static ::openfl::_legacy::filters::BitmapFilter changeFilterQuality( ::openfl::_legacy::filters::BitmapFilter filter,int quality);
		static Dynamic changeFilterQuality_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_FilterParser */ 
