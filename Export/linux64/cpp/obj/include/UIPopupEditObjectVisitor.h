#ifndef INCLUDED_UIPopupEditObjectVisitor
#define INCLUDED_UIPopupEditObjectVisitor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CollectionGlobal)
HX_DECLARE_CLASS0(ObjectVisitor)
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

		::haxe::ui::toolkit::controls::Button changeAllHardwareManualButtonObject;
		::haxe::ui::toolkit::controls::Button changeAllSoftwareAutoButtonObject;
		::haxe::ui::toolkit::controls::Button changeAllSoftwareManualButtonObject;
		::CollectionGlobal collectionGlobalObject;
		::haxe::ui::toolkit::controls::Text displayCurrentExhibitionTextObject;
		::haxe::ui::toolkit::controls::Button displayExplanationButtonObject;
		::haxe::ui::toolkit::controls::popups::Popup displayExplanationPopupObject;
		::haxe::ui::toolkit::controls::Button displayPopularTagButtonObject;
		::haxe::ui::toolkit::controls::popups::Popup displayPopularTagPopupObject;
		::haxe::ui::toolkit::controls::Text displayPreviousVisitorTextObject;
		::haxe::ui::toolkit::controls::Button displaySentenceButtonObject;
		::haxe::ui::toolkit::controls::popups::Popup displaySentencePopupObject;
		::haxe::ui::toolkit::controls::Text displayTargetExhibitionTextObject;
		::haxe::ui::toolkit::controls::Text displayVisitorIndexGlobalTextObject;
		::haxe::ui::toolkit::controls::Text displayVisitorIndexLocalTextObject;
		::haxe::ui::toolkit::containers::Grid gridObject;
		::haxe::ui::toolkit::controls::TextInput inputNameTextInputObject;
		::haxe::ui::toolkit::controls::Button mainButtonObject;
		::haxe::ui::toolkit::controls::popups::Popup popupObject;
		::haxe::ui::toolkit::controls::Button resetAllButtonObject;
		::haxe::ui::toolkit::controls::Button resetButtonObject;
		::haxe::ui::toolkit::controls::selection::ListSelector selectCurrentExhibitionListSelectorObject;
		Array< ::String > selectedVisitorExplanationStringArray;
		::ObjectVisitor selectedVisitorObject;
		Array< int > selectedVisitorPopularTagCountIntArray;
		Array< ::String > selectedVisitorPopularTagObjectStringArray;
		Array< ::String > selectedVisitorSentenceStringArray;
		::haxe::ui::toolkit::controls::selection::ListSelector selectModeListSelectorObject;
		::haxe::ui::toolkit::controls::selection::ListSelector selectVisitorListSelectorObject;
		::String selectVisitorListSelectorPrevString;
		::String selectVisitorListSelectorString;
		Array< ::Dynamic > visitorButtonObjectArray;
		::String visitorModePrevString;
		virtual Void UpdateVoid( );
		Dynamic UpdateVoid_dyn();

		virtual Void ResetDisplayCurrentExhibitionTextObjectVoid( );
		Dynamic ResetDisplayCurrentExhibitionTextObjectVoid_dyn();

		virtual Void ResetDisplayExplanationTextObjectVoid( );
		Dynamic ResetDisplayExplanationTextObjectVoid_dyn();

		virtual Void ResetDisplayPopularTagListSelectorObjectVoid( );
		Dynamic ResetDisplayPopularTagListSelectorObjectVoid_dyn();

		virtual Void ResetDisplaySentenceListViewObjectVoid( );
		Dynamic ResetDisplaySentenceListViewObjectVoid_dyn();

		virtual Void ResetDisplayTargetExhibitionTextObjectVoid( );
		Dynamic ResetDisplayTargetExhibitionTextObjectVoid_dyn();

		virtual Void ResetDisplayVisitorIndexGlobalTextObjectVoid( );
		Dynamic ResetDisplayVisitorIndexGlobalTextObjectVoid_dyn();

		virtual Void ResetDisplayVisitorIndexLocalTextObjectVoid( );
		Dynamic ResetDisplayVisitorIndexLocalTextObjectVoid_dyn();

		virtual Void ResetInputNameTextInputObjectVoid( );
		Dynamic ResetInputNameTextInputObjectVoid_dyn();

		virtual Void ResetSelectCurrentExhibitionListSelectorObject( );
		Dynamic ResetSelectCurrentExhibitionListSelectorObject_dyn();

		virtual Void ResetSelectModeListSelectorObjectVoid( );
		Dynamic ResetSelectModeListSelectorObjectVoid_dyn();

		virtual Void ResetSelectVisitorListSelectorObjectVoid( );
		Dynamic ResetSelectVisitorListSelectorObjectVoid_dyn();

		virtual Void UpdateDisplayCurrentExhibitionTextObjectVoid( );
		Dynamic UpdateDisplayCurrentExhibitionTextObjectVoid_dyn();

		virtual Void UpdateDisplayExplanationTextObjectVoid( );
		Dynamic UpdateDisplayExplanationTextObjectVoid_dyn();

		virtual Void UpdateDisplayPopularTagListSelectorObjectVoid( );
		Dynamic UpdateDisplayPopularTagListSelectorObjectVoid_dyn();

		virtual Void UpdateDisplaySentenceListViewObjectVoid( );
		Dynamic UpdateDisplaySentenceListViewObjectVoid_dyn();

		virtual Void UpdateDisplayTargetExhibitionTextObjectVoid( );
		Dynamic UpdateDisplayTargetExhibitionTextObjectVoid_dyn();

		virtual Void UpdateDisplayVisitorIndexGlobalTextObjectVoid( );
		Dynamic UpdateDisplayVisitorIndexGlobalTextObjectVoid_dyn();

		virtual Void UpdateDisplayVisitorIndexLocalTextObjectVoid( );
		Dynamic UpdateDisplayVisitorIndexLocalTextObjectVoid_dyn();

		virtual Void UpdateSelectCurrentExhibitionListSelectorObjectVoid( );
		Dynamic UpdateSelectCurrentExhibitionListSelectorObjectVoid_dyn();

		virtual Void UpdateSelectModeListSelectorObjectVoid( );
		Dynamic UpdateSelectModeListSelectorObjectVoid_dyn();

		virtual Void UpdateVisitorButtonObjectArrayVoid( );
		Dynamic UpdateVisitorButtonObjectArrayVoid_dyn();

};


#endif /* INCLUDED_UIPopupEditObjectVisitor */ 
