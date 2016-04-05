#ifndef INCLUDED_haxe_ui_toolkit_core_Dismiss
#define INCLUDED_haxe_ui_toolkit_core_Dismiss

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Dismiss)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Dismiss_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Dismiss_obj OBJ_;
		Dismiss_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.Dismiss")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Dismiss_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dismiss_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Dismiss","\x2a","\x77","\x9d","\x86"); }

		static void __boot();
		static int ESCAPE;
		static int ENTER;
		static int ANYKEY;
		static int CLICK_OUTSIDE;
		static int CLICK_INSIDE;
		static int CLICK;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Dismiss */ 
