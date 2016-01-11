#ifndef INCLUDED_CollectionGlobal
#define INCLUDED_CollectionGlobal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(ObjectMuseum)
HX_DECLARE_CLASS0(ObjectTag)
HX_DECLARE_CLASS0(ObjectVisitor)


class HXCPP_CLASS_ATTRIBUTES  CollectionGlobal_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CollectionGlobal_obj OBJ_;
		CollectionGlobal_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="CollectionGlobal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CollectionGlobal_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CollectionGlobal_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CollectionGlobal","\x81","\x6a","\xb4","\x3d"); }

		::ObjectMuseum archiveExhibitionObject;
		int exhibitionFullThresholdInt;
		Array< ::Dynamic > exhibitionObjectArray;
		Array< ::Dynamic > floorObjectArray;
		int indexGlobalVisitorInt;
		Array< ::Dynamic > roomObjectArray;
		::ObjectMuseum selectedMuseumObject;
		::ObjectTag selectedTagObject;
		::ObjectVisitor selectedVisitorObject;
		Array< ::Dynamic > tagGeneralObjectArray;
		Array< ::Dynamic > tagObjectArray;
		Array< ::Dynamic > visitorObjectArray;
		virtual Void DetermineExhibitionFullThresholdInt( );
		Dynamic DetermineExhibitionFullThresholdInt_dyn();

		virtual ::ObjectMuseum GetArchiveExhibitionObject( );
		Dynamic GetArchiveExhibitionObject_dyn();

		virtual int GetExhibitionFullThresholdInt( );
		Dynamic GetExhibitionFullThresholdInt_dyn();

		virtual Array< ::Dynamic > GetExhibitionObjectArray( );
		Dynamic GetExhibitionObjectArray_dyn();

		virtual Array< ::Dynamic > GetFloorObjectArray( );
		Dynamic GetFloorObjectArray_dyn();

		virtual Array< ::Dynamic > GetRoomObjectArray( );
		Dynamic GetRoomObjectArray_dyn();

		virtual ::ObjectMuseum GetSelectedMuseumObject( );
		Dynamic GetSelectedMuseumObject_dyn();

		virtual ::ObjectTag GetSelectedTagObject( );
		Dynamic GetSelectedTagObject_dyn();

		virtual ::ObjectVisitor GetSelectedVisitorObject( );
		Dynamic GetSelectedVisitorObject_dyn();

		virtual Array< ::Dynamic > GetTagGeneralObjectArray( );
		Dynamic GetTagGeneralObjectArray_dyn();

		virtual Array< ::Dynamic > GetTagObjectArray( );
		Dynamic GetTagObjectArray_dyn();

		virtual Array< ::Dynamic > GetVisitorObjectArray( );
		Dynamic GetVisitorObjectArray_dyn();

		virtual int PutIndexGlobalVisitorInt( );
		Dynamic PutIndexGlobalVisitorInt_dyn();

		virtual Void SetExhibitionFullThresholdInt( int _exhibitionFullThresholdInt);
		Dynamic SetExhibitionFullThresholdInt_dyn();

		virtual Void SetExhibitionObjectArrayVoid( Array< ::Dynamic > _exhibitionObjectArray);
		Dynamic SetExhibitionObjectArrayVoid_dyn();

		virtual Void SetFloorObjectArrayVoid( Array< ::Dynamic > _floorObjectArray);
		Dynamic SetFloorObjectArrayVoid_dyn();

		virtual Void SetRoomObjectArrayVoid( Array< ::Dynamic > _roomObjectArray);
		Dynamic SetRoomObjectArrayVoid_dyn();

		virtual Void SetSelectedMuseumObjectVoid( ::ObjectMuseum _selectedMuseumObject);
		Dynamic SetSelectedMuseumObjectVoid_dyn();

		virtual Void SetSelectedTagObjectVoid( ::ObjectTag _selectedTagObject);
		Dynamic SetSelectedTagObjectVoid_dyn();

		virtual Void SetSelectedVisitorObjectVoid( ::ObjectVisitor _selectedVisitorObject);
		Dynamic SetSelectedVisitorObjectVoid_dyn();

		virtual Void SetTagObjectArrayVoid( Array< ::Dynamic > _tagObjectArray);
		Dynamic SetTagObjectArrayVoid_dyn();

		virtual Void SetVisitorObjectArrayVoid( Array< ::Dynamic > _visitorObjectArray);
		Dynamic SetVisitorObjectArrayVoid_dyn();

};


#endif /* INCLUDED_CollectionGlobal */ 
