#ifndef INCLUDED_haxe_ui_richtext_syntax_HaxeSyntax
#define INCLUDED_haxe_ui_richtext_syntax_HaxeSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,CodeSyntax)
HX_DECLARE_CLASS4(haxe,ui,richtext,syntax,HaxeSyntax)
namespace haxe{
namespace ui{
namespace richtext{
namespace syntax{


class HXCPP_CLASS_ATTRIBUTES  HaxeSyntax_obj : public ::haxe::ui::richtext::syntax::CodeSyntax_obj{
	public:
		typedef ::haxe::ui::richtext::syntax::CodeSyntax_obj super;
		typedef HaxeSyntax_obj OBJ_;
		HaxeSyntax_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.richtext.syntax.HaxeSyntax")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HaxeSyntax_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxeSyntax_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("HaxeSyntax","\x49","\xcf","\x30","\x5e"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace richtext
} // end namespace syntax

#endif /* INCLUDED_haxe_ui_richtext_syntax_HaxeSyntax */ 
