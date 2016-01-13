#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptInterp
#define INCLUDED_haxe_ui_toolkit_hscript_ScriptInterp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,hscript,ScriptInterp)
HX_DECLARE_CLASS1(hscript,Interp)
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  ScriptInterp_obj : public ::hscript::Interp_obj{
	public:
		typedef ::hscript::Interp_obj super;
		typedef ScriptInterp_obj OBJ_;
		ScriptInterp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.hscript.ScriptInterp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ScriptInterp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScriptInterp_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ScriptInterp","\x5f","\x22","\x28","\xfe"); }

		virtual Dynamic get( Dynamic o,::String f);

		virtual Dynamic set( Dynamic o,::String f,Dynamic v);

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript

#endif /* INCLUDED_haxe_ui_toolkit_hscript_ScriptInterp */ 
