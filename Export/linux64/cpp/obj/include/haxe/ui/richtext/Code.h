#ifndef INCLUDED_haxe_ui_richtext_Code
#define INCLUDED_haxe_ui_richtext_Code

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,richtext,Code)
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,CodeSyntax)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,AsyncThreadCaller)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,KeyboardEvent)
namespace haxe{
namespace ui{
namespace richtext{


class HXCPP_CLASS_ATTRIBUTES  Code_obj : public ::haxe::ui::toolkit::controls::TextInput_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::TextInput_obj super;
		typedef Code_obj OBJ_;
		Code_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.richtext.Code")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Code_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Code_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Code","\x4d","\xdd","\x9d","\x2c"); }

		::haxe::ui::richtext::syntax::CodeSyntax _syntax;
		bool _async;
		virtual Void initialize( );

		virtual Void dispose( );

		virtual ::String set_text( ::String value);

		virtual ::String get_syntax( );
		Dynamic get_syntax_dyn();

		virtual ::String set_syntax( ::String value);
		Dynamic set_syntax_dyn();

		virtual bool get_async( );
		Dynamic get_async_dyn();

		virtual bool set_async( bool value);
		Dynamic set_async_dyn();

		virtual Void _onCodeChange( ::openfl::_legacy::events::Event event);
		Dynamic _onCodeChange_dyn();

		virtual Void _onCodeKeyDown( ::openfl::_legacy::events::KeyboardEvent event);
		Dynamic _onCodeKeyDown_dyn();

		::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller _caller;
		virtual Void applyRules( );
		Dynamic applyRules_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace richtext

#endif /* INCLUDED_haxe_ui_richtext_Code */ 
