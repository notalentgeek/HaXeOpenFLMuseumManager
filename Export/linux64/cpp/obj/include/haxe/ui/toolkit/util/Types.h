#ifndef INCLUDED_haxe_ui_toolkit_util_Types
#define INCLUDED_haxe_ui_toolkit_util_Types

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,util,Types)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Types_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Types_obj OBJ_;
		Types_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.util.Types")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Types_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Types_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Types","\x59","\xe0","\xf8","\xad"); }

		static ::hx::Class resolveClass( ::String className);
		static Dynamic resolveClass_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_Types */ 
