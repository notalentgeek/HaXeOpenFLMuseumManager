#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButton
#define INCLUDED_haxe_ui_toolkit_core_PopupButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,PopupButton)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  PopupButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PopupButton_obj OBJ_;
		PopupButton_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.PopupButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PopupButton_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PopupButton_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PopupButton","\x1e","\x61","\x50","\x53"); }

		static void __boot();
		static int OK;
		static int YES;
		static int NO;
		static int CANCEL;
		static int CONFIRM;
		static int CLOSE;
		static int CUSTOM;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_PopupButton */ 
