#ifndef INCLUDED_haxe_ui_richtext_syntax_HaxeUIXMLSyntax
#define INCLUDED_haxe_ui_richtext_syntax_HaxeUIXMLSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_richtext_syntax_XMLSyntax
#include <haxe/ui/richtext/syntax/XMLSyntax.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,CodeSyntax)
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,HaxeUIXMLSyntax)
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,XMLSyntax)
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{


class HXCPP_CLASS_ATTRIBUTES  HaxeUIXMLSyntax_obj : public ::haxe::ui::richtext::syntax::XMLSyntax_obj{
	public:
		typedef ::haxe::ui::richtext::syntax::XMLSyntax_obj super;
		typedef HaxeUIXMLSyntax_obj OBJ_;
		HaxeUIXMLSyntax_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.richtext.syntax.HaxeUIXMLSyntax")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HaxeUIXMLSyntax_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxeUIXMLSyntax_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HaxeUIXMLSyntax","\x20","\x08","\xf9","\x1f"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace richtext
} // end namespace syntax

#endif /* INCLUDED_haxe_ui_richtext_syntax_HaxeUIXMLSyntax */ 
