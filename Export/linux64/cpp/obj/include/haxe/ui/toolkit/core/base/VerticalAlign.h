#ifndef INCLUDED_haxe_ui_toolkit_core_base_VerticalAlign
#define INCLUDED_haxe_ui_toolkit_core_base_VerticalAlign

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,base,VerticalAlign)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace base{


class HXCPP_CLASS_ATTRIBUTES  VerticalAlign_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VerticalAlign_obj OBJ_;
		VerticalAlign_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.base.VerticalAlign")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VerticalAlign_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VerticalAlign_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("VerticalAlign","\x4f","\x6e","\x6c","\x2c"); }

		static void __boot();
		static ::String TOP;
		static ::String BOTTOM;
		static ::String CENTER;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace base

#endif /* INCLUDED_haxe_ui_toolkit_core_base_VerticalAlign */ 
