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
		Void __construct(::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectGeneratorSentence")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectGeneratorSentence_obj > __new(::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectGeneratorSentence_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"); }

		::CollectionGlobal collectionGlobalObject;
		::ObjectVisitor visitorObject;
		virtual ::String AddWordString( ::EnumTagType _tagTypeEnum,::EnumTagTypeSub _tagTypeSubEnum);
		Dynamic AddWordString_dyn();

		virtual Dynamic DetermineProperCallbackFunction( ::EnumTagTypeSub _tagTypeSubEnum,::ObjectTag _tagObject);
		Dynamic DetermineProperCallbackFunction_dyn();

		virtual ::String GenerateSentenceString( ::String _patternString);
		Dynamic GenerateSentenceString_dyn();

		virtual int RandomNumberGeneratorInt( int _randomNumberInt);
		Dynamic RandomNumberGeneratorInt_dyn();

		virtual ::String WordFixString( ::String _fixString);
		Dynamic WordFixString_dyn();

		virtual ::String GenerateSentence3String( ::CollectionGlobal collectionGlobalObject);
		Dynamic GenerateSentence3String_dyn();

};


#endif /* INCLUDED_ObjectGeneratorSentence */ 
