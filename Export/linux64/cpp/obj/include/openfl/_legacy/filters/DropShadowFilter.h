#ifndef INCLUDED_openfl__legacy_filters_DropShadowFilter
#define INCLUDED_openfl__legacy_filters_DropShadowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_legacy,filters,DropShadowFilter)
namespace openfl{
namespace _legacy{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  DropShadowFilter_obj : public ::openfl::_legacy::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::_legacy::filters::BitmapFilter_obj super;
		typedef DropShadowFilter_obj OBJ_;
		DropShadowFilter_obj();
		Void __construct(hx::Null< Float >  __o_distance,hx::Null< Float >  __o_angle,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout,hx::Null< bool >  __o_hideObject);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.filters.DropShadowFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DropShadowFilter_obj > __new(hx::Null< Float >  __o_distance,hx::Null< Float >  __o_angle,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout,hx::Null< bool >  __o_hideObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DropShadowFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DropShadowFilter","\xa7","\xee","\x49","\xf7"); }

		Float alpha;
		Float angle;
		Float blurX;
		Float blurY;
		int color;
		Float distance;
		bool hideObject;
		bool inner;
		bool knockout;
		int quality;
		Float strength;
		virtual ::openfl::_legacy::filters::BitmapFilter clone( );

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace filters

#endif /* INCLUDED_openfl__legacy_filters_DropShadowFilter */ 
