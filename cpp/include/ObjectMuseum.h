#ifndef INCLUDED_ObjectMuseum
#define INCLUDED_ObjectMuseum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(EnumMuseumMode)
HX_DECLARE_CLASS0(EnumMuseumType)
HX_DECLARE_CLASS0(ObjectMuseum)
HX_DECLARE_CLASS0(ObjectVisitor)


class HXCPP_CLASS_ATTRIBUTES  ObjectMuseum_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectMuseum_obj OBJ_;
		ObjectMuseum_obj();
		Void __construct(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameAltString,::EnumMuseumType _typeEnum,cpp::ArrayBase _tagStructArray);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectMuseum")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectMuseum_obj > __new(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameAltString,::EnumMuseumType _typeEnum,cpp::ArrayBase _tagStructArray);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectMuseum_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectMuseum","\x11","\x1f","\x35","\xe1"); }

		Dynamic childStruct;
		::CollectionGlobal collectionGlobalObject;
		Array< ::String > explanationStringArray;
		bool fullBool;
		int indexGlobalInt;
		int indexLocalInt;
		::EnumMuseumMode museumModeEnum;
		Dynamic nameStruct;
		::ObjectMuseum parentObject;
		Array< ::Dynamic > siblingObjectArray;
		cpp::ArrayBase tagStructArray;
		::EnumMuseumType typeEnum;
		int visitorCurrentInt;
		int visitorTotalInt;
		virtual Void AddChildVisitorVoid( ::ObjectVisitor _visitorObject);
		Dynamic AddChildVisitorVoid_dyn();

		virtual Void AddTagVoid( Dynamic _tagStruct);
		Dynamic AddTagVoid_dyn();

		virtual Void AddThisToArray( ::EnumMuseumType _typeEnum);
		Dynamic AddThisToArray_dyn();

		virtual Void ChangeParentVoid( ::String _parentNameAltString);
		Dynamic ChangeParentVoid_dyn();

		virtual Void DetermineFullVoid( );
		Dynamic DetermineFullVoid_dyn();

		virtual Void DetermineIndexVoid( );
		Dynamic DetermineIndexVoid_dyn();

		virtual Void DetermineIndexGlobalVoid( );
		Dynamic DetermineIndexGlobalVoid_dyn();

		virtual Void DetermineIndexLocalVoid( );
		Dynamic DetermineIndexLocalVoid_dyn();

		virtual Void DetermineSiblingVoid( );
		Dynamic DetermineSiblingVoid_dyn();

		virtual Void RemoveTagByNameAltVoid( ::String _nameAltString);
		Dynamic RemoveTagByNameAltVoid_dyn();

		virtual Void RemoveTagByStructVoid( Dynamic _tagStruct);
		Dynamic RemoveTagByStructVoid_dyn();

		virtual Void ResetVoid( );
		Dynamic ResetVoid_dyn();

		virtual Void DetermineChildVoid( );
		Dynamic DetermineChildVoid_dyn();

		virtual Dynamic GetChildStruct( );
		Dynamic GetChildStruct_dyn();

		virtual Array< ::String > GetExplanationStringArray( );
		Dynamic GetExplanationStringArray_dyn();

		virtual bool GetFullBool( );
		Dynamic GetFullBool_dyn();

		virtual ::EnumMuseumMode GetMuseumModeEnum( );
		Dynamic GetMuseumModeEnum_dyn();

		virtual Dynamic GetNameStruct( );
		Dynamic GetNameStruct_dyn();

		virtual ::ObjectMuseum GetParentObject( );
		Dynamic GetParentObject_dyn();

		virtual cpp::ArrayBase GetTagStructArray( );
		Dynamic GetTagStructArray_dyn();

		virtual ::EnumMuseumType GetTypeEnum( );
		Dynamic GetTypeEnum_dyn();

		virtual int GetVisitorCurrentInt( );
		Dynamic GetVisitorCurrentInt_dyn();

		virtual int GetVisitorTotalInt( );
		Dynamic GetVisitorTotalInt_dyn();

		virtual Void SetNameAltStringVoid( ::String _nameAltString);
		Dynamic SetNameAltStringVoid_dyn();

		virtual Void SetNameFullStringVoid( ::String _nameFullString);
		Dynamic SetNameFullStringVoid_dyn();

		virtual Void SetParentObjectVoid( ::ObjectMuseum _parentObject);
		Dynamic SetParentObjectVoid_dyn();

		virtual Void Reset( );
		Dynamic Reset_dyn();

		virtual Void SetMuseumModeEnumVoid( ::EnumMuseumMode _museumModeEnum);
		Dynamic SetMuseumModeEnumVoid_dyn();

		virtual Void SetVisitorCurrentIntVoid( int _visitorCurrentInt);
		Dynamic SetVisitorCurrentIntVoid_dyn();

		virtual Void SetVisitorTotalIntVoid( int _visitorTotalInt);
		Dynamic SetVisitorTotalIntVoid_dyn();

		virtual Void Update( );
		Dynamic Update_dyn();

};


#endif /* INCLUDED_ObjectMuseum */ 
