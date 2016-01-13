#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#define INCLUDED_haxe_ui_toolkit_controls_TextInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,HScroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Scroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,VScroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDirectional)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,text,ITextDisplay)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  TextInput_obj : public ::haxe::ui::toolkit::core::StateComponent_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StateComponent_obj super;
		typedef TextInput_obj OBJ_;
		TextInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.TextInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		::String __ToString() const { return HX_HCSTRING("TextInput","\xfd","\x33","\xde","\xf8"); }

		::haxe::ui::toolkit::text::ITextDisplay _textDisplay;
		::haxe::ui::toolkit::controls::Text _textPlaceHolder;
		::haxe::ui::toolkit::controls::VScroll _vscroll;
		::haxe::ui::toolkit::controls::HScroll _hscroll;
		virtual Void preInitialize( );

		virtual Void initialize( );

		int _lastKeyCode;
		virtual Void _onTextDisplayKeyDown( ::openfl::_legacy::events::KeyboardEvent event);
		Dynamic _onTextDisplayKeyDown_dyn();

		virtual Void dispose( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual bool set_disabled( bool value);

		virtual Void _onTextChange( ::openfl::_legacy::events::Event event);
		Dynamic _onTextChange_dyn();

		virtual Void _onTextScroll( ::openfl::_legacy::events::Event event);
		Dynamic _onTextScroll_dyn();

		virtual Void _onVScrollChange( ::openfl::_legacy::events::Event event);
		Dynamic _onVScrollChange_dyn();

		virtual Void _onHScrollChange( ::openfl::_legacy::events::Event event);
		Dynamic _onHScrollChange_dyn();

		virtual ::String get_text( );

		virtual ::String set_text( ::String value);

		virtual Void applyStyle( );

		int selectionBeginIndex;
		int selectionEndIndex;
		::openfl::_legacy::text::TextFormat selectedTextFormat;
		virtual bool get_multiline( );
		Dynamic get_multiline_dyn();

		virtual bool set_multiline( bool value);
		Dynamic set_multiline_dyn();

		virtual int get_selectionBeginIndex( );
		Dynamic get_selectionBeginIndex_dyn();

		virtual int get_selectionEndIndex( );
		Dynamic get_selectionEndIndex_dyn();

		virtual ::openfl::_legacy::text::TextFormat get_selectedTextFormat( );
		Dynamic get_selectedTextFormat_dyn();

		virtual bool get_wrapLines( );
		Dynamic get_wrapLines_dyn();

		virtual bool set_wrapLines( bool value);
		Dynamic set_wrapLines_dyn();

		virtual bool get_displayAsPassword( );
		Dynamic get_displayAsPassword_dyn();

		virtual bool set_displayAsPassword( bool value);
		Dynamic set_displayAsPassword_dyn();

		virtual ::String get_placeholderText( );
		Dynamic get_placeholderText_dyn();

		virtual ::String set_placeholderText( ::String value);
		Dynamic set_placeholderText_dyn();

		virtual ::String get_textAlign( );
		Dynamic get_textAlign_dyn();

		virtual ::String set_textAlign( ::String value);
		Dynamic set_textAlign_dyn();

		virtual int get_maxChars( );
		Dynamic get_maxChars_dyn();

		virtual int set_maxChars( int value);
		Dynamic set_maxChars_dyn();

		virtual ::String get_restrictChars( );
		Dynamic get_restrictChars_dyn();

		virtual ::String set_restrictChars( ::String value);
		Dynamic set_restrictChars_dyn();

		Float vscrollMin;
		Float vscrollMax;
		virtual Float get_vscrollPos( );
		Dynamic get_vscrollPos_dyn();

		virtual Float set_vscrollPos( Float value);
		Dynamic set_vscrollPos_dyn();

		virtual Float get_vscrollMin( );
		Dynamic get_vscrollMin_dyn();

		virtual Float get_vscrollMax( );
		Dynamic get_vscrollMax_dyn();

		virtual Void replaceSelectedText( ::String s);
		Dynamic replaceSelectedText_dyn();

		virtual Void focus( );
		Dynamic focus_dyn();

		virtual Void checkScrolls( );
		Dynamic checkScrolls_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_TextInput */ 
