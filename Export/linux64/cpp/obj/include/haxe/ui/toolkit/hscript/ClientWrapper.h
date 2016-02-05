#ifndef INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper
#define INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,hscript,ClientWrapper)
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  ClientWrapper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClientWrapper_obj OBJ_;
		ClientWrapper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.hscript.ClientWrapper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ClientWrapper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClientWrapper_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ClientWrapper","\x28","\x32","\x0b","\x20"); }

		::String language;
		Float dpi;
		::String platform;
		::String target;
		bool mobile;
		Float screenWidth;
		Float screenHeight;
		Float windowWidth;
		Float windowHeight;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript

#endif /* INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper */ 
