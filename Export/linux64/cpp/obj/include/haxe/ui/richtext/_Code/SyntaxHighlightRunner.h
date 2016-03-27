#ifndef INCLUDED_haxe_ui_richtext__Code_SyntaxHighlightRunner
#define INCLUDED_haxe_ui_richtext__Code_SyntaxHighlightRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,richtext,_Code,SyntaxHighlightRunner)
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,CodeSyntax)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,IRunnable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,Runner)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextField)
namespace haxe{
namespace ui{
namespace richtext{
namespace _Code{


class HXCPP_CLASS_ATTRIBUTES  SyntaxHighlightRunner_obj : public ::haxe::ui::toolkit::util::pseudothreads::Runner_obj{
	public:
		typedef ::haxe::ui::toolkit::util::pseudothreads::Runner_obj super;
		typedef SyntaxHighlightRunner_obj OBJ_;
		SyntaxHighlightRunner_obj();
		Void __construct(::openfl::_legacy::text::TextField tf,::haxe::ui::richtext::syntax::CodeSyntax syntax,hx::Null< Float >  __o_timeShare);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.richtext._Code.SyntaxHighlightRunner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SyntaxHighlightRunner_obj > __new(::openfl::_legacy::text::TextField tf,::haxe::ui::richtext::syntax::CodeSyntax syntax,hx::Null< Float >  __o_timeShare);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SyntaxHighlightRunner_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SyntaxHighlightRunner","\x01","\x90","\xfc","\x23"); }

		::openfl::_legacy::text::TextField _tf;
		::haxe::ui::richtext::syntax::CodeSyntax _syntax;
		Array< ::String > _syntaxRules;
		::haxe::ds::StringMap _matches;
		::String _txt;
		bool _matchedSyntax;
		int _matchIndex;
		int _ruleIndex;
		virtual Void run( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace richtext
} // end namespace _Code

#endif /* INCLUDED_haxe_ui_richtext__Code_SyntaxHighlightRunner */ 
