#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_Direction
#define INCLUDED_haxe_ui_toolkit_core_interfaces_Direction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,Direction)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  Direction_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Direction_obj OBJ_;
		Direction_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.interfaces.Direction")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Direction_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Direction_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Direction","\x1f","\x42","\x13","\xb2"); }

		static void __boot();
		static ::String HORIZONTAL;
		static ::String VERTICAL;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_Direction */ 
