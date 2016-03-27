#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsDefaults
#define INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsDefaults

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,ToolTipOptionsDefaults)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ToolTipOptionsDefaults_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ToolTipOptionsDefaults_obj OBJ_;
		ToolTipOptionsDefaults_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.ToolTipOptionsDefaults")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ToolTipOptionsDefaults_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ToolTipOptionsDefaults_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ToolTipOptionsDefaults","\x8d","\x9c","\x6c","\xe2"); }

		static Void applyDefaults( Dynamic to);
		static Dynamic applyDefaults_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsDefaults */ 
