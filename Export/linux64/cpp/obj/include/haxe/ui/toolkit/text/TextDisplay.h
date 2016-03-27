#ifndef INCLUDED_haxe_ui_toolkit_text_TextDisplay
#define INCLUDED_haxe_ui_toolkit_text_TextDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,text,ITextDisplay)
HX_DECLARE_CLASS4(haxe,ui,toolkit,text,TextDisplay)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
namespace haxe{
namespace ui{
namespace toolkit{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextDisplay_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextDisplay_obj OBJ_;
		TextDisplay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.text.TextDisplay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextDisplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextDisplay_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::text::ITextDisplay_obj *();
		::String __ToString() const { return HX_HCSTRING("TextDisplay","\xf5","\xbc","\xfc","\x7a"); }

		static void __boot();
		static int X_PADDING;
		static int Y_PADDING;
		::haxe::ui::toolkit::style::Style _style;
		::openfl::_legacy::text::TextField _tf;
		bool _autoSize;
		::openfl::_legacy::display::DisplayObject display;
		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual ::haxe::ui::toolkit::style::Style get_style( );
		Dynamic get_style_dyn();

		virtual ::haxe::ui::toolkit::style::Style set_style( ::haxe::ui::toolkit::style::Style value);
		Dynamic set_style_dyn();

		virtual ::openfl::_legacy::display::DisplayObject get_display( );
		Dynamic get_display_dyn();

		virtual bool get_interactive( );
		Dynamic get_interactive_dyn();

		virtual bool set_interactive( bool value);
		Dynamic set_interactive_dyn();

		virtual bool get_multiline( );
		Dynamic get_multiline_dyn();

		virtual bool set_multiline( bool value);
		Dynamic set_multiline_dyn();

		virtual bool get_wrapLines( );
		Dynamic get_wrapLines_dyn();

		virtual bool set_wrapLines( bool value);
		Dynamic set_wrapLines_dyn();

		virtual bool get_displayAsPassword( );
		Dynamic get_displayAsPassword_dyn();

		virtual bool set_displayAsPassword( bool value);
		Dynamic set_displayAsPassword_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual bool get_selectable( );
		Dynamic get_selectable_dyn();

		virtual bool set_selectable( bool value);
		Dynamic set_selectable_dyn();

		virtual bool get_autoSize( );
		Dynamic get_autoSize_dyn();

		virtual bool set_autoSize( bool value);
		Dynamic set_autoSize_dyn();

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

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace text

#endif /* INCLUDED_haxe_ui_toolkit_text_TextDisplay */ 
