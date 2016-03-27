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
		Void __construct(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameOriginalString,::EnumTagType _typeEnum);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectTag")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectTag_obj > __new(::CollectionGlobal _collectionGlobalObject,::EnumTagFeelType _feelEnum,bool _generalTagBool,::String _nameOriginalString,::EnumTagType _typeEnum);
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

		::String adjectiveString;
		::String adverbString;
		::CollectionGlobal collectionGlobalObject;
		Array< ::String > companyWordStringArray;
		cpp::ArrayBase companyWordStructArray;
		::EnumTagFeelType feelEnum;
		bool generalTagBool;
		::String nameOriginalString;
		::String nameString;
		::String nounPosString;
		::String nounSPosString;
		::String nounSString;
		::String nounString;
		::EnumTagType typeEnum;
		::String verb1String;
		::String verb2String;
		::String verb3String;
		::String verbIngString;
		::String verbSString;
		virtual Void GenerateCompanyWordVoid( );
		Dynamic GenerateCompanyWordVoid_dyn();

		virtual Void AddToArrayVoid( );
		Dynamic AddToArrayVoid_dyn();

		virtual ::String GetAdjectiveString( );
		Dynamic GetAdjectiveString_dyn();

		virtual ::String GetAdverbString( );
		Dynamic GetAdverbString_dyn();

		virtual cpp::ArrayBase GetCompanyWordStructArray( );
		Dynamic GetCompanyWordStructArray_dyn();

		virtual ::EnumTagFeelType GetFeelEnum( );
		Dynamic GetFeelEnum_dyn();

		virtual bool GetGeneralTagBool( );
		Dynamic GetGeneralTagBool_dyn();

		virtual ::String GetNameOriginalString( );
		Dynamic GetNameOriginalString_dyn();

		virtual ::String GetNameString( );
		Dynamic GetNameString_dyn();

		virtual ::String GetNounPosString( );
		Dynamic GetNounPosString_dyn();

		virtual ::String GetNounSPosString( );
		Dynamic GetNounSPosString_dyn();

		virtual ::String GetNounSString( );
		Dynamic GetNounSString_dyn();

		virtual ::String GetNounString( );
		Dynamic GetNounString_dyn();

		virtual ::EnumTagType GetTypeEnum( );
		Dynamic GetTypeEnum_dyn();

		virtual ::String GetVerb1String( );
		Dynamic GetVerb1String_dyn();

		virtual ::String GetVerb2String( );
		Dynamic GetVerb2String_dyn();

		virtual ::String GetVerb3String( );
		Dynamic GetVerb3String_dyn();

		virtual ::String GetVerbIngString( );
		Dynamic GetVerbIngString_dyn();

		virtual ::String GetVerbSString( );
		Dynamic GetVerbSString_dyn();

		virtual Void RemoveFromArray( );
		Dynamic RemoveFromArray_dyn();

		virtual ::ObjectTag SetAdjectiveStringObject( ::String _adjectiveString);
		Dynamic SetAdjectiveStringObject_dyn();

		virtual ::ObjectTag SetAdverbStringObject( ::String _adverbString);
		Dynamic SetAdverbStringObject_dyn();

		virtual ::ObjectTag SetFeelEnumObject( ::EnumTagFeelType _feelEnum);
		Dynamic SetFeelEnumObject_dyn();

		virtual ::ObjectTag SetGeneralTagBoolObject( bool _generalTagBool);
		Dynamic SetGeneralTagBoolObject_dyn();

		virtual ::ObjectTag SetNameStringObject( ::String _nameString);
		Dynamic SetNameStringObject_dyn();

		virtual ::ObjectTag SetNounPosStringObject( ::String _nounPosString);
		Dynamic SetNounPosStringObject_dyn();

		virtual ::ObjectTag SetNounSPosStringObject( ::String _nounSPosString);
		Dynamic SetNounSPosStringObject_dyn();

		virtual ::ObjectTag SetNounSStringObject( ::String _nounSString);
		Dynamic SetNounSStringObject_dyn();

		virtual ::ObjectTag SetNounStringObject( ::String _nounString);
		Dynamic SetNounStringObject_dyn();

		virtual Void SetTypeEnumVoid( ::EnumTagType _typeEnum);
		Dynamic SetTypeEnumVoid_dyn();

		virtual ::ObjectTag SetVerb1StringObject( ::String _verb1String);
		Dynamic SetVerb1StringObject_dyn();

		virtual ::ObjectTag SetVerb2StringObject( ::String _verb2String);
		Dynamic SetVerb2StringObject_dyn();

		virtual ::ObjectTag SetVerb3StringObject( ::String _verb3String);
		Dynamic SetVerb3StringObject_dyn();

		virtual ::ObjectTag SetVerbIngStringObject( ::String _verbIngString);
		Dynamic SetVerbIngStringObject_dyn();

		virtual ::ObjectTag SetVerbSStringObject( ::String _verbSString);
		Dynamic SetVerbSStringObject_dyn();

};


#endif /* INCLUDED_ObjectTag */ 
