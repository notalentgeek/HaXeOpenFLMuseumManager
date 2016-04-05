#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#define INCLUDED_haxe_ui_toolkit_core_XMLController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,XMLController)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  XMLController_obj : public ::haxe::ui::toolkit::core::Controller_obj{
	public:
		typedef ::haxe::ui::toolkit::core::Controller_obj super;
		typedef XMLController_obj OBJ_;
		XMLController_obj();
		Void __construct(::String xmlResourceId);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.XMLController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< XMLController_obj > __new(::String xmlResourceId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XMLController_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("XMLController","\x33","\x91","\x36","\xfe"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_XMLController */ 
