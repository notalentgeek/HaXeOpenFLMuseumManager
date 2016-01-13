#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#define INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,hscript,ScriptUtils)
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  ScriptUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScriptUtils_obj OBJ_;
		ScriptUtils_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.hscript.ScriptUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ScriptUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScriptUtils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ScriptUtils","\x06","\x9c","\xf0","\x5a"); }

		static bool isScript( ::String data);
		static Dynamic isScript_dyn();

		static bool isCssException( ::String name);
		static Dynamic isCssException_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript

#endif /* INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils */ 
