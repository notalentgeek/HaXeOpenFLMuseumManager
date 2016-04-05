#ifndef INCLUDED_DateTools
#define INCLUDED_DateTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(DateTools)


class HXCPP_CLASS_ATTRIBUTES  DateTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DateTools_obj OBJ_;
		DateTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="DateTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DateTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DateTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DateTools","\xed","\x64","\x5e","\x95"); }

		static ::String __format_get( ::Date d,::String e);
		static Dynamic __format_get_dyn();

		static ::String __format( ::Date d,::String f);
		static Dynamic __format_dyn();

		static ::String format( ::Date d,::String f);
		static Dynamic format_dyn();

};


#endif /* INCLUDED_DateTools */ 
