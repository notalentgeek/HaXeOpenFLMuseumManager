#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#define INCLUDED_haxe_ui_toolkit_hscript_ScriptManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,hscript,ScriptManager)
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  ScriptManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScriptManager_obj OBJ_;
		ScriptManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.hscript.ScriptManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ScriptManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScriptManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ScriptManager","\x82","\x63","\x93","\x61"); }

		static ::haxe::ui::toolkit::hscript::ScriptManager _instance;
		static ::haxe::ui::toolkit::hscript::ScriptManager instance;
		static ::haxe::ui::toolkit::hscript::ScriptManager get_instance( );
		static Dynamic get_instance_dyn();

		::haxe::ds::StringMap _defaultClasses;
		::haxe::ds::StringMap classes;
		virtual ::haxe::ds::StringMap get_classes( );
		Dynamic get_classes_dyn();

		virtual Void addClass( ::String name,Dynamic cls);
		Dynamic addClass_dyn();

		virtual Dynamic executeScript( ::String script);
		Dynamic executeScript_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript

#endif /* INCLUDED_haxe_ui_toolkit_hscript_ScriptManager */ 
