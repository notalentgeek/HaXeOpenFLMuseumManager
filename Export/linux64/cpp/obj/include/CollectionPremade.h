#ifndef INCLUDED_CollectionPremade
#define INCLUDED_CollectionPremade

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(CollectionPremade)


class HXCPP_CLASS_ATTRIBUTES  CollectionPremade_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollectionPremade_obj OBJ_;
		CollectionPremade_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="CollectionPremade")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CollectionPremade_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollectionPremade_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CollectionPremade","\x9a","\xa2","\xd1","\xe1"); }

		static void __boot();
		static Array< ::String > explanationGenericStringArray;
		static Void PremadeExhibitionObjectVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeExhibitionObjectVoid_dyn();

		static Void PremadeFloorObjectVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeFloorObjectVoid_dyn();

		static Void PremadeRoomObjectVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeRoomObjectVoid_dyn();

		static Void PremadeVisitorObjectVoid( int _amountInt,::CollectionGlobal _collectionGlobalObject);
		static Dynamic PremadeVisitorObjectVoid_dyn();

};


#endif /* INCLUDED_CollectionPremade */ 
