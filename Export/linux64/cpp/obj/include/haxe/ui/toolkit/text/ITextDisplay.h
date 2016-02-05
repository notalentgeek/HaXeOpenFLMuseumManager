#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#define INCLUDED_haxe_ui_toolkit_text_ITextDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,text,ITextDisplay)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  ITextDisplay_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ITextDisplay_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::String get_text( )=0;
virtual Dynamic get_text_dyn()=0;
		virtual ::String set_text( ::String value)=0;
virtual Dynamic set_text_dyn()=0;
		virtual ::haxe::ui::toolkit::style::Style get_style( )=0;
virtual Dynamic get_style_dyn()=0;
		virtual ::haxe::ui::toolkit::style::Style set_style( ::haxe::ui::toolkit::style::Style value)=0;
virtual Dynamic set_style_dyn()=0;
		virtual ::openfl::_legacy::display::DisplayObject get_display( )=0;
virtual Dynamic get_display_dyn()=0;
		virtual bool get_interactive( )=0;
virtual Dynamic get_interactive_dyn()=0;
		virtual bool set_interactive( bool value)=0;
virtual Dynamic set_interactive_dyn()=0;
		virtual bool get_multiline( )=0;
virtual Dynamic get_multiline_dyn()=0;
		virtual bool set_multiline( bool value)=0;
virtual Dynamic set_multiline_dyn()=0;
		virtual bool get_wrapLines( )=0;
virtual Dynamic get_wrapLines_dyn()=0;
		virtual bool set_wrapLines( bool value)=0;
virtual Dynamic set_wrapLines_dyn()=0;
		virtual bool get_displayAsPassword( )=0;
virtual Dynamic get_displayAsPassword_dyn()=0;
		virtual bool set_displayAsPassword( bool value)=0;
virtual Dynamic set_displayAsPassword_dyn()=0;
		virtual bool get_visible( )=0;
virtual Dynamic get_visible_dyn()=0;
		virtual bool set_visible( bool value)=0;
virtual Dynamic set_visible_dyn()=0;
		virtual bool get_selectable( )=0;
virtual Dynamic get_selectable_dyn()=0;
		virtual bool set_selectable( bool value)=0;
virtual Dynamic set_selectable_dyn()=0;
		virtual bool get_autoSize( )=0;
virtual Dynamic get_autoSize_dyn()=0;
		virtual bool set_autoSize( bool value)=0;
virtual Dynamic set_autoSize_dyn()=0;
		virtual ::String get_textAlign( )=0;
virtual Dynamic get_textAlign_dyn()=0;
		virtual ::String set_textAlign( ::String value)=0;
virtual Dynamic set_textAlign_dyn()=0;
		virtual int get_maxChars( )=0;
virtual Dynamic get_maxChars_dyn()=0;
		virtual int set_maxChars( int value)=0;
virtual Dynamic set_maxChars_dyn()=0;
		virtual ::String get_restrictChars( )=0;
virtual Dynamic get_restrictChars_dyn()=0;
		virtual ::String set_restrictChars( ::String value)=0;
virtual Dynamic set_restrictChars_dyn()=0;
};



template<typename IMPL>
class ITextDisplay_delegate_ : public ITextDisplay_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ITextDisplay_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::String get_text( ) { return mDelegate->get_text();}
		Dynamic get_text_dyn() { return mDelegate->get_text_dyn();}
		::String set_text( ::String value) { return mDelegate->set_text(value);}
		Dynamic set_text_dyn() { return mDelegate->set_text_dyn();}
		::haxe::ui::toolkit::style::Style get_style( ) { return mDelegate->get_style();}
		Dynamic get_style_dyn() { return mDelegate->get_style_dyn();}
		::haxe::ui::toolkit::style::Style set_style( ::haxe::ui::toolkit::style::Style value) { return mDelegate->set_style(value);}
		Dynamic set_style_dyn() { return mDelegate->set_style_dyn();}
		::openfl::_legacy::display::DisplayObject get_display( ) { return mDelegate->get_display();}
		Dynamic get_display_dyn() { return mDelegate->get_display_dyn();}
		bool get_interactive( ) { return mDelegate->get_interactive();}
		Dynamic get_interactive_dyn() { return mDelegate->get_interactive_dyn();}
		bool set_interactive( bool value) { return mDelegate->set_interactive(value);}
		Dynamic set_interactive_dyn() { return mDelegate->set_interactive_dyn();}
		bool get_multiline( ) { return mDelegate->get_multiline();}
		Dynamic get_multiline_dyn() { return mDelegate->get_multiline_dyn();}
		bool set_multiline( bool value) { return mDelegate->set_multiline(value);}
		Dynamic set_multiline_dyn() { return mDelegate->set_multiline_dyn();}
		bool get_wrapLines( ) { return mDelegate->get_wrapLines();}
		Dynamic get_wrapLines_dyn() { return mDelegate->get_wrapLines_dyn();}
		bool set_wrapLines( bool value) { return mDelegate->set_wrapLines(value);}
		Dynamic set_wrapLines_dyn() { return mDelegate->set_wrapLines_dyn();}
		bool get_displayAsPassword( ) { return mDelegate->get_displayAsPassword();}
		Dynamic get_displayAsPassword_dyn() { return mDelegate->get_displayAsPassword_dyn();}
		bool set_displayAsPassword( bool value) { return mDelegate->set_displayAsPassword(value);}
		Dynamic set_displayAsPassword_dyn() { return mDelegate->set_displayAsPassword_dyn();}
		bool get_visible( ) { return mDelegate->get_visible();}
		Dynamic get_visible_dyn() { return mDelegate->get_visible_dyn();}
		bool set_visible( bool value) { return mDelegate->set_visible(value);}
		Dynamic set_visible_dyn() { return mDelegate->set_visible_dyn();}
		bool get_selectable( ) { return mDelegate->get_selectable();}
		Dynamic get_selectable_dyn() { return mDelegate->get_selectable_dyn();}
		bool set_selectable( bool value) { return mDelegate->set_selectable(value);}
		Dynamic set_selectable_dyn() { return mDelegate->set_selectable_dyn();}
		bool get_autoSize( ) { return mDelegate->get_autoSize();}
		Dynamic get_autoSize_dyn() { return mDelegate->get_autoSize_dyn();}
		bool set_autoSize( bool value) { return mDelegate->set_autoSize(value);}
		Dynamic set_autoSize_dyn() { return mDelegate->set_autoSize_dyn();}
		::String get_textAlign( ) { return mDelegate->get_textAlign();}
		Dynamic get_textAlign_dyn() { return mDelegate->get_textAlign_dyn();}
		::String set_textAlign( ::String value) { return mDelegate->set_textAlign(value);}
		Dynamic set_textAlign_dyn() { return mDelegate->set_textAlign_dyn();}
		int get_maxChars( ) { return mDelegate->get_maxChars();}
		Dynamic get_maxChars_dyn() { return mDelegate->get_maxChars_dyn();}
		int set_maxChars( int value) { return mDelegate->set_maxChars(value);}
		Dynamic set_maxChars_dyn() { return mDelegate->set_maxChars_dyn();}
		::String get_restrictChars( ) { return mDelegate->get_restrictChars();}
		Dynamic get_restrictChars_dyn() { return mDelegate->get_restrictChars_dyn();}
		::String set_restrictChars( ::String value) { return mDelegate->set_restrictChars(value);}
		Dynamic set_restrictChars_dyn() { return mDelegate->set_restrictChars_dyn();}
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace text

#endif /* INCLUDED_haxe_ui_toolkit_text_ITextDisplay */ 
