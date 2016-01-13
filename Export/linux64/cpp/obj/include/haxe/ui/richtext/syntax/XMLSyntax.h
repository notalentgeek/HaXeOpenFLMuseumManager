#ifndef INCLUDED_haxe_ui_richtext_syntax_XMLSyntax
#define INCLUDED_haxe_ui_richtext_syntax_XMLSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,CodeSyntax)
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,XMLSyntax)
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{


class HXCPP_CLASS_ATTRIBUTES  XMLSyntax_obj : public ::haxe::ui::richtext::syntax::CodeSyntax_obj{
	public:
		typedef ::haxe::ui::richtext::syntax::CodeSyntax_obj super;
		typedef XMLSyntax_obj OBJ_;
		XMLSyntax_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.richtext.syntax.XMLSyntax")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XMLSyntax_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XMLSyntax_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("XMLSyntax","\x7a","\xa3","\xb0","\x33"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace richtext
} // end namespace syntax

#endif /* INCLUDED_haxe_ui_richtext_syntax_XMLSyntax */ 
