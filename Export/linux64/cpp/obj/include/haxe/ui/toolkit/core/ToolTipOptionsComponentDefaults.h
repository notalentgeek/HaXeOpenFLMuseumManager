#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsComponentDefaults
#define INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsComponentDefaults

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,ToolTipOptionsComponentDefaults)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ToolTipOptionsComponentDefaults_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ToolTipOptionsComponentDefaults_obj OBJ_;
		ToolTipOptionsComponentDefaults_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.ToolTipOptionsComponentDefaults")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ToolTipOptionsComponentDefaults_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ToolTipOptionsComponentDefaults_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ToolTipOptionsComponentDefaults","\x14","\x5f","\x49","\x2b"); }

		static Void applyDefaultsFromComponent( Dynamic to,::haxe::ui::toolkit::core::Component from);
		static Dynamic applyDefaultsFromComponent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsComponentDefaults */ 
