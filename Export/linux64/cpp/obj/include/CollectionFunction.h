#ifndef INCLUDED_CollectionFunction
#define INCLUDED_CollectionFunction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionFunction)
HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(EnumMuseumType)
HX_DECLARE_CLASS0(ObjectMuseum)
HX_DECLARE_CLASS0(ObjectTag)


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

		static ::ObjectMuseum FindMuseumObject( ::CollectionGlobal _collectionGlobalObject,::EnumMuseumType _enumMuseumType,::String _nameAlt);
		static Dynamic FindMuseumObject_dyn();

		static ::ObjectTag FindTagObject( ::CollectionGlobal _collectionGlobalObject,::String _nameString);
		static Dynamic FindTagObject_dyn();

		static bool IsExistInArrayBool( cpp::ArrayBase _dynamicArray,Dynamic _dynamicElement);
		static Dynamic IsExistInArrayBool_dyn();

		static Dynamic PickRandomFromArrayT( cpp::ArrayBase _tArray);
		static Dynamic PickRandomFromArrayT_dyn();

		static Array< ::Dynamic > PickRandomTagObjectArray( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PickRandomTagObjectArray_dyn();

		static Float GenerateGreatestCommonDivisorFloat( Float _number1Float,Float _number2Float);
		static Dynamic GenerateGreatestCommonDivisorFloat_dyn();

		static Float GenerateLeastCommonMultipleFloat( Float _number1Float,Float _number2Float);
		static Dynamic GenerateLeastCommonMultipleFloat_dyn();

};


#endif /* INCLUDED_CollectionFunction */ 
