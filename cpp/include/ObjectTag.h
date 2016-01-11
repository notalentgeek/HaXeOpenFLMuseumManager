#ifndef INCLUDED_ObjectTag
#define INCLUDED_ObjectTag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(EnumTagFeelType)
HX_DECLARE_CLASS0(EnumTagType)
HX_DECLARE_CLASS0(ObjectTag)


class HXCPP_CLASS_ATTRIBUTES  ObjectTag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectTag_obj OBJ_;
		ObjectTag_obj();
		Void __construct(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameString,::EnumTagType _typeEnum);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ObjectTag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectTag_obj > __new(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameString,::EnumTagType _typeEnum);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectTag_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ObjectTag","\xbb","\xf4","\x55","\xe5"); }

		static void __boot();
		static ::CollectionGlobal collectionGlobalObject;
		static ::String adjectiveString;
		static ::String adverbString;
		static ::EnumTagFeelType feelEnum;
		static bool generalTagBool;
		static ::String nameString;
		static ::String nounPosString;
		static ::String nounSPosString;
		static ::String nounSString;
		static ::String nounString;
		static ::EnumTagType typeEnum;
		static ::String verb1String;
		static ::String verb2String;
		static ::String verb3String;
		static ::String verbIngString;
		static ::String verbSString;
		static ::String GetAdjectiveString( );
		static Dynamic GetAdjectiveString_dyn();

		static ::String GetAdverbString( );
		static Dynamic GetAdverbString_dyn();

		static bool GetGeneralTagBool( );
		static Dynamic GetGeneralTagBool_dyn();

		static ::String GetNounPosString( );
		static Dynamic GetNounPosString_dyn();

		static ::String GetNounSPosString( );
		static Dynamic GetNounSPosString_dyn();

		static ::String GetNounSString( );
		static Dynamic GetNounSString_dyn();

		static ::String GetNounString( );
		static Dynamic GetNounString_dyn();

		static ::String GetVerb1String( );
		static Dynamic GetVerb1String_dyn();

		static ::String GetVerb2String( );
		static Dynamic GetVerb2String_dyn();

		static ::String GetVerb3String( );
		static Dynamic GetVerb3String_dyn();

		static ::String GetVerbIngString( );
		static Dynamic GetVerbIngString_dyn();

		static ::String GetVerbSString( );
		static Dynamic GetVerbSString_dyn();

		virtual Void AddToArrayVoid( );
		Dynamic AddToArrayVoid_dyn();

		virtual ::EnumTagFeelType GetFeelEnum( );
		Dynamic GetFeelEnum_dyn();

		virtual ::String GetNameString( );
		Dynamic GetNameString_dyn();

		virtual ::EnumTagType GetTypeEnum( );
		Dynamic GetTypeEnum_dyn();

		virtual Void SetAdjectiveStringVoid( ::String _adjectiveString);
		Dynamic SetAdjectiveStringVoid_dyn();

		virtual Void SetAdverbStringVoid( ::String _adverbString);
		Dynamic SetAdverbStringVoid_dyn();

		virtual Void SetFeelEnumVoid( ::EnumTagFeelType _feelEnum);
		Dynamic SetFeelEnumVoid_dyn();

		virtual Void SetGeneralTagBoolVoid( bool _generalTagBool);
		Dynamic SetGeneralTagBoolVoid_dyn();

		virtual Void SetNameStringVoid( ::String _nameString);
		Dynamic SetNameStringVoid_dyn();

		virtual Void SetNounPosStringVoid( ::String _nounPosString);
		Dynamic SetNounPosStringVoid_dyn();

		virtual Void SetNounSPosStringVoid( ::String _nounSPosString);
		Dynamic SetNounSPosStringVoid_dyn();

		virtual Void SetNounSStringVoid( ::String _nounSString);
		Dynamic SetNounSStringVoid_dyn();

		virtual Void SetNounStringVoid( ::String _nounString);
		Dynamic SetNounStringVoid_dyn();

		virtual Void SetTypeEnumVoid( ::EnumTagType _typeEnum);
		Dynamic SetTypeEnumVoid_dyn();

		virtual Void SetVerb1StringVoid( ::String _verb1String);
		Dynamic SetVerb1StringVoid_dyn();

		virtual Void SetVerb2StringVoid( ::String _verb2String);
		Dynamic SetVerb2StringVoid_dyn();

		virtual Void SetVerb3StringVoid( ::String _verb3String);
		Dynamic SetVerb3StringVoid_dyn();

		virtual Void SetVerbIngStringVoid( ::String _verbIngString);
		Dynamic SetVerbIngStringVoid_dyn();

		virtual Void SetVerbSStringVoid( ::String _verbSString);
		Dynamic SetVerbSStringVoid_dyn();

};


#endif /* INCLUDED_ObjectTag */ 
