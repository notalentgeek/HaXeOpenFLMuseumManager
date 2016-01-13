#ifndef INCLUDED_haxe_ui_toolkit_core_base_State
#define INCLUDED_haxe_ui_toolkit_core_base_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,base,State)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  State_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef State_obj OBJ_;
		State_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.base.State")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< State_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~State_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"); }

		static void __boot();
		static ::String NORMAL;
		static ::String OVER;
		static ::String DOWN;
		static ::String DISABLED;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace base

#endif /* INCLUDED_haxe_ui_toolkit_core_base_State */ 
