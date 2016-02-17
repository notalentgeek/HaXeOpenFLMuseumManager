#ifndef INCLUDED_ObjectGeneratorSentence
#define INCLUDED_ObjectGeneratorSentence

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(EnumTagType)
HX_DECLARE_CLASS0(EnumTagTypeSub)
HX_DECLARE_CLASS0(ObjectGeneratorSentence)
HX_DECLARE_CLASS0(ObjectTag)
HX_DECLARE_CLASS0(ObjectVisitor)


class HXCPP_CLASS_ATTRIBUTES  ObjectGeneratorSentence_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectGeneratorSentence_obj OBJ_;
		ObjectGeneratorSentence_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ObjectGeneratorSentence")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectGeneratorSentence_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectGeneratorSentence_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"); }

		static ::String AddWordString( ::CollectionGlobal _collectionGlobalObject,::EnumTagType _tagTypeEnum,::EnumTagTypeSub _tagTypeSubEnum,::ObjectVisitor _visitorObject);
		static Dynamic AddWordString_dyn();

		static Dynamic DetermineProperCallbackFunction( ::EnumTagTypeSub _tagTypeSubEnum,::ObjectTag _tagObject);
		static Dynamic DetermineProperCallbackFunction_dyn();

		static ::String GenerateSentenceString( ::CollectionGlobal _collectionGlobalObject,::String _patternString,::ObjectVisitor _visitorObject);
		static Dynamic GenerateSentenceString_dyn();

		static int RandomNumberGeneratorInt( int _randomNumberInt);
		static Dynamic RandomNumberGeneratorInt_dyn();

		static ::String WordFixString( ::String _fixString);
		static Dynamic WordFixString_dyn();

		static ::String GenerateSentence3String( ::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject);
		static Dynamic GenerateSentence3String_dyn();

};


#endif /* INCLUDED_ObjectGeneratorSentence */ 
