#ifndef INCLUDED_haxe_ui_toolkit_core_xml_UIProcessor
#define INCLUDED_haxe_ui_toolkit_core_xml_UIProcessor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,IXMLProcessor)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,UIProcessor)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,XMLProcessor)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  UIProcessor_obj : public ::haxe::ui::toolkit::core::xml::XMLProcessor_obj{
	public:
		typedef ::haxe::ui::toolkit::core::xml::XMLProcessor_obj super;
		typedef UIProcessor_obj OBJ_;
		UIProcessor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.xml.UIProcessor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UIProcessor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIProcessor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UIProcessor","\x5e","\x68","\xf4","\x13"); }

		virtual Dynamic process( ::Xml node);

		static ::haxe::ui::toolkit::core::interfaces::IDisplayObject createComponent( ::String className,::Xml config);
		static Dynamic createComponent_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml

#endif /* INCLUDED_haxe_ui_toolkit_core_xml_UIProcessor */ 
