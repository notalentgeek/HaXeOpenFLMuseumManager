#ifndef INCLUDED_ObjectTag
#define INCLUDED_ObjectTag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ObjectTag)


class HXCPP_CLASS_ATTRIBUTES  ObjectTag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectTag_obj OBJ_;
		ObjectTag_obj();
		Void __construct(::String _nameAltString,::String _nameFullString,Array< ::String > _tagStringArray,::String _typeString);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectTag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectTag_obj > __new(::String _nameAltString,::String _nameFullString,Array< ::String > _tagStringArray,::String _typeString);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectTag_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectTag","\xbb","\xf4","\x55","\xe5"); }

		Dynamic nameStruct;
		Array< ::String > tagStringArray;
		::String typeString;
		virtual Dynamic GetNameStruct( );
		Dynamic GetNameStruct_dyn();

		virtual Array< ::String > GetTagStringArray( );
		Dynamic GetTagStringArray_dyn();

		virtual ::String GetTypeString( );
		Dynamic GetTypeString_dyn();

		virtual Void SetNameAltStringVoid( ::String _nameAltString);
		Dynamic SetNameAltStringVoid_dyn();

		virtual Void SetNameFullStringVoid( ::String _nameFullString);
		Dynamic SetNameFullStringVoid_dyn();

		virtual Void SetTagStringArrayVoid( Array< ::String > _tagStringArray);
		Dynamic SetTagStringArrayVoid_dyn();

		virtual Void SetTypeStringVoid( ::String _typeString);
		Dynamic SetTypeStringVoid_dyn();

};


#endif /* INCLUDED_ObjectTag */ 
