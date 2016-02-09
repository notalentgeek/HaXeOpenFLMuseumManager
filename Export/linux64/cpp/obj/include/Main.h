#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(UIPopupAddObjectMuseum)
HX_DECLARE_CLASS0(UIPopupAddObjectTag)
HX_DECLARE_CLASS0(UIPopupAddObjectVisitor)
HX_DECLARE_CLASS0(UIPopupEditObjectMuseum)
HX_DECLARE_CLASS0(UIPopupEditObjectTag)
HX_DECLARE_CLASS0(UIPopupEditObjectVisitor)
HX_DECLARE_CLASS0(UIPopupRemoveObjectMuseum)
HX_DECLARE_CLASS0(UIPopupRemoveObjectTag)
HX_DECLARE_CLASS0(UIPopupRemoveObjectVisitor)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::_legacy::display::Sprite_obj{
	public:
		typedef ::openfl::_legacy::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		::CollectionGlobal collectionGlobalObject;
		int loopCounterMainInt;
		::UIPopupAddObjectMuseum uiPopupAddMuseumObject;
		::UIPopupAddObjectTag uiPopupAddTagObject;
		::UIPopupAddObjectVisitor uiPopupAddVisitorObject;
		::UIPopupEditObjectMuseum uiPopupEditMuseumObject;
		::UIPopupEditObjectTag uiPopupEditTagObject;
		::UIPopupEditObjectVisitor uiPopupEditVisitorObject;
		::UIPopupRemoveObjectMuseum uiPopupRemoveMuseumObject;
		::UIPopupRemoveObjectTag uiPopupRemoveTagObject;
		::UIPopupRemoveObjectVisitor uiPopupRemoveVisitorObject;
		virtual Void UpdateVoid( ::openfl::_legacy::events::Event event);
		Dynamic UpdateVoid_dyn();

		virtual Void UpdateSlowVoid( );
		Dynamic UpdateSlowVoid_dyn();

		virtual Void UpdateNormalVoid( );
		Dynamic UpdateNormalVoid_dyn();

		virtual Void UpdateFastVoid( );
		Dynamic UpdateFastVoid_dyn();

};


#endif /* INCLUDED_Main */ 
