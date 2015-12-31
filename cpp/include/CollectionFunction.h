#ifndef INCLUDED_CollectionFunction
#define INCLUDED_CollectionFunction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionFunction)
HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(EnumMuseumType)
HX_DECLARE_CLASS0(ObjectMuseum)


class HXCPP_CLASS_ATTRIBUTES  CollectionFunction_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollectionFunction_obj OBJ_;
		CollectionFunction_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="CollectionFunction")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CollectionFunction_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollectionFunction_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CollectionFunction","\xb6","\xe7","\x2b","\xda"); }

		static Void ClearArray( cpp::ArrayBase _dynamicArray);
		static Dynamic ClearArray_dyn();

		static ::ObjectMuseum FindMuseumNameObject( ::CollectionGlobal _collectionGlobal,::EnumMuseumType _enumMuseumType,::String _nameAlt);
		static Dynamic FindMuseumNameObject_dyn();

};


#endif /* INCLUDED_CollectionFunction */ 
