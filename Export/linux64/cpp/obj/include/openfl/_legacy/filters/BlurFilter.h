#ifndef INCLUDED_openfl__legacy_filters_BlurFilter
#define INCLUDED_openfl__legacy_filters_BlurFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
HX_DECLARE_CLASS3(openfl,_legacy,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_legacy,filters,BlurFilter)
namespace openfl{
namespace _legacy{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  BlurFilter_obj : public ::openfl::_legacy::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::_legacy::filters::BitmapFilter_obj super;
		typedef BlurFilter_obj OBJ_;
		BlurFilter_obj();
		Void __construct(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.filters.BlurFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BlurFilter_obj > __new(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlurFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BlurFilter","\xdf","\xd1","\x71","\xf3"); }

		Float blurX;
		Float blurY;
		int quality;
		virtual ::openfl::_legacy::filters::BitmapFilter clone( );

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace filters

#endif /* INCLUDED_openfl__legacy_filters_BlurFilter */ 
