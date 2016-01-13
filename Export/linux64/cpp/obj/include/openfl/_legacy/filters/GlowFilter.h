#ifndef INCLUDED_openfl__legacy_filters_GlowFilter
#define INCLUDED_openfl__legacy_filters_GlowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_legacy,filters,GlowFilter)
namespace openfl{
namespace _legacy{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  GlowFilter_obj : public ::openfl::_legacy::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::_legacy::filters::BitmapFilter_obj super;
		typedef GlowFilter_obj OBJ_;
		GlowFilter_obj();
		Void __construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.filters.GlowFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GlowFilter_obj > __new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlowFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GlowFilter","\x45","\xce","\xa2","\x2d"); }

		Float alpha;
		Float blurX;
		Float blurY;
		int color;
		bool inner;
		bool knockout;
		int quality;
		Float strength;
		Float angle;
		Float distance;
		bool hideObject;
		virtual ::openfl::_legacy::filters::BitmapFilter clone( );

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace filters

#endif /* INCLUDED_openfl__legacy_filters_GlowFilter */ 
