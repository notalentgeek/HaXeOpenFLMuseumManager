#ifndef INCLUDED_ObjectGeneratorSentence
#define INCLUDED_ObjectGeneratorSentence

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(EnumTagType)
HX_DECLARE_CLASS0(ObjectGeneratorSentence)
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
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"); }

		virtual ::String AddWordString( ::CollectionGlobal _collectionGlobalObject,Dynamic _tagGetFunction,::EnumTagType _tagTypeEnum,::ObjectVisitor _visitorObject);
		Dynamic AddWordString_dyn();

		virtual ::String GenerateSentenceString( ::CollectionGlobal _collectionGlobalObject,::String _patternString,::ObjectVisitor _visitorObject);
		Dynamic GenerateSentenceString_dyn();

		virtual int RandomNumberGeneratorInt( int _randomNumberInt);
		Dynamic RandomNumberGeneratorInt_dyn();

		virtual ::String WordFixString( ::String _fixString);
		Dynamic WordFixString_dyn();

		virtual ::String GenerateSentence3String( ::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject);
		Dynamic GenerateSentence3String_dyn();

};


#endif /* INCLUDED_ObjectGeneratorSentence */ 
