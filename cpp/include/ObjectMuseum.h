#ifndef INCLUDED_ObjectMuseum
#define INCLUDED_ObjectMuseum

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(EnumMuseumType)
HX_DECLARE_CLASS0(ObjectMuseum)
HX_DECLARE_CLASS0(ObjectTag)
HX_DECLARE_CLASS0(ObjectVisitor)


class HXCPP_CLASS_ATTRIBUTES  ObjectMuseum_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectMuseum_obj OBJ_;
		ObjectMuseum_obj();
		Void __construct(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameAltString,::EnumMuseumType _typeEnum);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectMuseum")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectMuseum_obj > __new(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameAltString,::EnumMuseumType _typeEnum);
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

		Array< ::Dynamic > childObjectArray;
		::CollectionGlobal collectionGlobalObject;
		bool fullBool;
		int indexGlobalInt;
		int indexLocalInt;
		Dynamic nameStruct;
		::ObjectMuseum parentObject;
		Array< ::Dynamic > siblingObjectArray;
		Array< ::Dynamic > tagObjectArray;
		::EnumMuseumType typeEnum;
		int visitorCurrentInt;
		Array< ::Dynamic > visitorObjectArray;
		int visitorTotalInt;
		virtual Void ChangeParentVoid( ::String _parentNameAltString);
		Dynamic ChangeParentVoid_dyn();

		virtual Void DetermineChildVoid( );
		Dynamic DetermineChildVoid_dyn();

		virtual Void DetermineIndexVoid( );
		Dynamic DetermineIndexVoid_dyn();

		virtual Void DetermineIndexGlobalVoid( );
		Dynamic DetermineIndexGlobalVoid_dyn();

		virtual Void DetermineIndexLocalVoid( );
		Dynamic DetermineIndexLocalVoid_dyn();

		virtual Void DetermineSiblingVoid( );
		Dynamic DetermineSiblingVoid_dyn();

		virtual Void ResetVoid( );
		Dynamic ResetVoid_dyn();

		virtual Dynamic GetNameStruct( );
		Dynamic GetNameStruct_dyn();

		virtual ::ObjectMuseum GetParentObject( );
		Dynamic GetParentObject_dyn();

};


#endif /* INCLUDED_ObjectMuseum */ 
