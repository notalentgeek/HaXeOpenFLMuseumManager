#ifndef INCLUDED_UIPopupEditObjectVisitor
#define INCLUDED_UIPopupEditObjectVisitor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(UIPopupEditObjectVisitor)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Grid)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,Popup)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,selection,ListSelector)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDraggable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)


class HXCPP_CLASS_ATTRIBUTES  UIPopupEditObjectVisitor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UIPopupEditObjectVisitor_obj OBJ_;
		UIPopupEditObjectVisitor_obj();
		Void __construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="UIPopupEditObjectVisitor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UIPopupEditObjectVisitor_obj > __new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIPopupEditObjectVisitor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("UIPopupEditObjectVisitor","\xed","\x1b","\x5e","\x0d"); }

		::CollectionGlobal collectionGlobalObject;
		::haxe::ui::toolkit::controls::Text displayExplanationTextObject;
		::haxe::ui::toolkit::controls::Text displayPopularTagTextObject;
		::haxe::ui::toolkit::controls::Text displayPreviousVisitorTextObject;
		::haxe::ui::toolkit::controls::Text displaySentenceTextObject;
		::haxe::ui::toolkit::controls::Text displayTargetExhibitionTextObject;
		::haxe::ui::toolkit::controls::Text displayVisitorIndexTextObject;
		::haxe::ui::toolkit::containers::Grid gridObject;
		::haxe::ui::toolkit::controls::TextInput inputNameTextInputObject;
		::haxe::ui::toolkit::controls::Button mainButtonObject;
		::haxe::ui::toolkit::controls::popups::Popup popupObject;
		::haxe::ui::toolkit::controls::Button resetButtonObject;
		::haxe::ui::toolkit::controls::selection::ListSelector selectCurrentExhibitionListSelectorObject;
		::haxe::ui::toolkit::controls::selection::ListSelector selectModeListSelectorObject;
		::haxe::ui::toolkit::controls::selection::ListSelector selectVisitorListSelectorObject;
		virtual Void UpdateVoid( );
		Dynamic UpdateVoid_dyn();

};


#endif /* INCLUDED_UIPopupEditObjectVisitor */ 
