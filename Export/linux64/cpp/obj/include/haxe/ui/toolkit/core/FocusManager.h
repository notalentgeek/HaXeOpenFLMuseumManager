#ifndef INCLUDED_haxe_ui_toolkit_core_FocusManager
#define INCLUDED_haxe_ui_toolkit_core_FocusManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,FocusManager)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  FocusManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FocusManager_obj OBJ_;
		FocusManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.FocusManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FocusManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FocusManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FocusManager","\x95","\xd1","\xa5","\x32"); }

		static ::haxe::ui::toolkit::core::FocusManager _instance;
		static ::haxe::ui::toolkit::core::FocusManager instance;
		static ::haxe::ui::toolkit::core::FocusManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_FocusManager */ 
