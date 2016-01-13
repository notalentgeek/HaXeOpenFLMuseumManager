#ifndef INCLUDED_haxe_ui_richtext_RTFView
#define INCLUDED_haxe_ui_richtext_RTFView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,richtext,RTF)
HX_DECLARE_CLASS3(haxe,ui,richtext,RTFToolButton)
HX_DECLARE_CLASS3(haxe,ui,richtext,RTFView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,selection,ListSelector)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace richtext{


class HXCPP_CLASS_ATTRIBUTES  RTFView_obj : public ::haxe::ui::toolkit::containers::VBox_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::VBox_obj super;
		typedef RTFView_obj OBJ_;
		RTFView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.richtext.RTFView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< RTFView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RTFView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("RTFView","\xc9","\x52","\x0f","\x6f"); }

		::haxe::ui::richtext::RTF _rtf;
		::haxe::ui::toolkit::controls::selection::ListSelector _fontNameList;
		::haxe::ui::toolkit::controls::selection::ListSelector _fontSizeList;
		::haxe::ui::richtext::RTFToolButton _boldButton;
		::haxe::ui::richtext::RTFToolButton _italicButton;
		::haxe::ui::richtext::RTFToolButton _underlineButton;
		::haxe::ui::richtext::RTFToolButton _bulletButton;
		::haxe::ui::richtext::RTFToolButton _leftAlignButton;
		::haxe::ui::richtext::RTFToolButton _centerAlignButton;
		::haxe::ui::richtext::RTFToolButton _rightAlignButton;
		::haxe::ui::richtext::RTFToolButton _justifyAlignButton;
		bool _systemFonts;
		virtual Void initialize( );

		virtual ::String get_htmlText( );
		Dynamic get_htmlText_dyn();

		virtual ::String set_htmlText( ::String value);
		Dynamic set_htmlText_dyn();

		virtual ::String set_text( ::String value);

		virtual Void _onBoldClick( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onBoldClick_dyn();

		virtual Void _onItalicClick( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onItalicClick_dyn();

		virtual Void _onUnderlineClick( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onUnderlineClick_dyn();

		virtual Void _onBulletClick( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onBulletClick_dyn();

		virtual Void _onFontNameChange( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onFontNameChange_dyn();

		virtual Void _onFontSizeChange( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onFontSizeChange_dyn();

		virtual Void _onLeftAlignClick( ::openfl::_legacy::events::Event event);
		Dynamic _onLeftAlignClick_dyn();

		virtual Void _onCenterAlignClick( ::openfl::_legacy::events::Event event);
		Dynamic _onCenterAlignClick_dyn();

		virtual Void _onRightAlignClick( ::openfl::_legacy::events::Event event);
		Dynamic _onRightAlignClick_dyn();

		virtual Void _onJustifyAlignClick( ::openfl::_legacy::events::Event event);
		Dynamic _onJustifyAlignClick_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace richtext

#endif /* INCLUDED_haxe_ui_richtext_RTFView */ 
