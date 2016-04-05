#ifndef INCLUDED_CollectionTagGeneral
#define INCLUDED_CollectionTagGeneral

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(CollectionTagGeneral)


class HXCPP_CLASS_ATTRIBUTES  CollectionTagGeneral_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollectionTagGeneral_obj OBJ_;
		CollectionTagGeneral_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="CollectionTagGeneral")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CollectionTagGeneral_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollectionTagGeneral_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CollectionTagGeneral","\x0c","\xb8","\x47","\x72"); }

		static Void TagGeneralStructVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructVoid_dyn();

		static Void TagGeneralStructAdjVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructAdjVoid_dyn();

		static Void TagGeneralStructAdvVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructAdvVoid_dyn();

		static Void TagGeneralStructNounAliveAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounAliveAbstractVoid_dyn();

		static Void TagGeneralStructNounAliveConcreteVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounAliveConcreteVoid_dyn();

		static Void TagGeneralStructNounInanimateHoldAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimateHoldAbstractVoid_dyn();

		static Void TagGeneralStructNounInanimateHoldConcreteVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimateHoldConcreteVoid_dyn();

		static Void TagGeneralStructNounInanimatePlaceAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimatePlaceAbstractVoid_dyn();

		static Void TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid_dyn();

		static Void TagGeneralStructNounInanimatePlaceConcreteOwnerVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimatePlaceConcreteOwnerVoid_dyn();

		static Void TagGeneralStructNounInanimateSeeAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimateSeeAbstractVoid_dyn();

		static Void TagGeneralStructNounInanimateSeeConcreteVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimateSeeConcreteVoid_dyn();

		static Void TagGeneralStructNounInanimateTitleAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimateTitleAbstractVoid_dyn();

		static Void TagGeneralStructNounInanimateWearAbstractVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimateWearAbstractVoid_dyn();

		static Void TagGeneralStructNounInanimateWearConcreteVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructNounInanimateWearConcreteVoid_dyn();

		static Void TagGeneralStructVerbVoidIntransitiveVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructVerbVoidIntransitiveVoid_dyn();

		static Void TagGeneralStructVerbVoidTransitiveVoid( ::CollectionGlobal _collectionGlobalObject);
		static Dynamic TagGeneralStructVerbVoidTransitiveVoid_dyn();

};


#endif /* INCLUDED_CollectionTagGeneral */ 
