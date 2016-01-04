#ifndef INCLUDED_ObjectVisitor
#define INCLUDED_ObjectVisitor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(ObjectMuseum)
HX_DECLARE_CLASS0(ObjectVisitor)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)


class HXCPP_CLASS_ATTRIBUTES  ObjectVisitor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectVisitor_obj OBJ_;
		ObjectVisitor_obj();
		Void __construct(::CollectionGlobal _collectionGlobalObject,::String _exhibitionCurrentNameAltString,int _indexGlobalInt,::String _nameString);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ObjectVisitor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ObjectVisitor_obj > __new(::CollectionGlobal _collectionGlobalObject,::String _exhibitionCurrentNameAltString,int _indexGlobalInt,::String _nameString);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ObjectVisitor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9"); }

		::CollectionGlobal collectionGlobalObject;
		::ObjectMuseum exhibitionCurrentObject;
		Array< ::Dynamic > exhibitionTargetObjectArray;
		Array< ::Dynamic > exhibitionVisitedObjectArray;
		Array< ::String > explanationStringArray;
		bool finishedBool;
		::ObjectMuseum floorCurrentObject;
		int indexGlobalInt;
		int indexLocalInt;
		::String nameString;
		::ObjectMuseum roomCurrentObject;
		int scoreInt;
		Array< ::String > sentenceStringArray;
		cpp::ArrayBase tagCounterStructArray;
		::haxe::ds::ObjectMap tagObjectMap;
		int targetInt;
		Float timeAIAutoExhibitionChangeFloat;
		int timeExhibitionInt;
		int timeMuseumInt;
		bool visitedCorrectExhibitionBool;
		cpp::ArrayBase visitExhibitionStructArray;
		cpp::ArrayBase visitMuseumStructArray;
		virtual Void AddRemoveVisitorFromExhibitionVoid( bool _isAdd);
		Dynamic AddRemoveVisitorFromExhibitionVoid_dyn();

		virtual Void AddTagCounterVoid( );
		Dynamic AddTagCounterVoid_dyn();

		virtual Void ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject);
		Dynamic ChangeExhibitionCurrentVoid_dyn();

		virtual Void AIAutoExhibitionChangeVoid( );
		Dynamic AIAutoExhibitionChangeVoid_dyn();

		virtual Void DetermineIndexLocalVoid( );
		Dynamic DetermineIndexLocalVoid_dyn();

		virtual Void GenerateExhibitionTargetVoid( int _targetInt);
		Dynamic GenerateExhibitionTargetVoid_dyn();

		virtual ::String GenerateSentenceVoid( int _amount);
		Dynamic GenerateSentenceVoid_dyn();

		virtual Void SortTagCounterVoid( );
		Dynamic SortTagCounterVoid_dyn();

		virtual ::ObjectMuseum GetExhibitionCurrentObject( );
		Dynamic GetExhibitionCurrentObject_dyn();

};


#endif /* INCLUDED_ObjectVisitor */ 
