#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#define INCLUDED_haxe_ui_richtext_syntax_CodeSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,CodeSyntax)
HX_DECLARE_CLASS3(openfl,_legacy,text,TextFormat)
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{


class HXCPP_CLASS_ATTRIBUTES  CodeSyntax_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CodeSyntax_obj OBJ_;
		CodeSyntax_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.richtext.syntax.CodeSyntax")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CodeSyntax_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CodeSyntax_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CodeSyntax","\x90","\x4b","\xff","\xad"); }

		::haxe::ds::StringMap _rules;
		Array< ::String > _rulesArray;
		::haxe::ds::StringMap _compiledRules;
		::openfl::_legacy::text::TextFormat _defaultFormat;
		::String _identifier;
		virtual Void addRule( ::String regex,int color,hx::Null< bool >  bold);
		Dynamic addRule_dyn();

		::String identifier;
		::haxe::ds::StringMap rules;
		Array< ::String > rulesArray;
		virtual ::String get_identifier( );
		Dynamic get_identifier_dyn();

		virtual ::openfl::_legacy::text::TextFormat get_defaultFormat( );
		Dynamic get_defaultFormat_dyn();

		virtual ::openfl::_legacy::text::TextFormat set_defaultFormat( ::openfl::_legacy::text::TextFormat value);
		Dynamic set_defaultFormat_dyn();

		virtual ::haxe::ds::StringMap get_rules( );
		Dynamic get_rules_dyn();

		virtual Array< ::String > get_rulesArray( );
		Dynamic get_rulesArray_dyn();

		virtual ::EReg getCompiledRule( ::String rule);
		Dynamic getCompiledRule_dyn();

		static ::haxe::ui::richtext::syntax::CodeSyntax getSyntax( ::String id);
		static Dynamic getSyntax_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace richtext
} // end namespace syntax

#endif /* INCLUDED_haxe_ui_richtext_syntax_CodeSyntax */ 
