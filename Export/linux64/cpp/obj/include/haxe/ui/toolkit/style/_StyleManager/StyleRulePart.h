#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRulePart
#define INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRulePart

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,style,_StyleManager,StyleRulePart)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{
namespace _StyleManager{


class HXCPP_CLASS_ATTRIBUTES  StyleRulePart_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StyleRulePart_obj OBJ_;
		StyleRulePart_obj();
		Void __construct(::String rulePart);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.style._StyleManager.StyleRulePart")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StyleRulePart_obj > __new(::String rulePart);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleRulePart_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StyleRulePart","\x40","\x81","\x96","\x88"); }

		::String id;
		::String className;
		::String state;
		::String styleName;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
} // end namespace _StyleManager

#endif /* INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRulePart */ 
