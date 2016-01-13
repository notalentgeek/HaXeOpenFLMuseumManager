#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#define INCLUDED_haxe_ui_toolkit_core_Toolkit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Toolkit)
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


class HXCPP_CLASS_ATTRIBUTES  Toolkit_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Toolkit_obj OBJ_;
		Toolkit_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.Toolkit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Toolkit_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Toolkit_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Toolkit","\x9e","\x00","\xd7","\x37"); }

		static void __boot();
		virtual Void initInstance( );
		Dynamic initInstance_dyn();

		static int DPI_THRESHOLD;
		static ::haxe::ui::toolkit::core::Toolkit _instance;
		static ::haxe::ui::toolkit::core::Toolkit instance;
		static ::haxe::ui::toolkit::core::Toolkit get_instance( );
		static Dynamic get_instance_dyn();

		static Void init( );
		static Dynamic init_dyn();

		static ::haxe::ds::StringMap _versionInfo;
		static ::haxe::ds::StringMap versionInfo;
		static ::haxe::ds::StringMap get_versionInfo( );
		static Dynamic get_versionInfo_dyn();

		static ::String versionString;
		static ::String get_versionString( );
		static Dynamic get_versionString_dyn();

		static ::haxe::ds::StringMap _registeredProcessors;
		static Void registerXMLProcessor( ::hx::Class cls,::String prefix);
		static Dynamic registerXMLProcessor_dyn();

		static bool useDefaultTheme;
		static Dynamic theme;
		static bool autoScale;
		static Dynamic processXmlResource( ::String resourceId);
		static Dynamic processXmlResource_dyn();

		static Dynamic processXml( ::Xml xml);
		static Dynamic processXml_dyn();

		static Dynamic processXmlNode( ::Xml node);
		static Dynamic processXmlNode_dyn();

		static Dynamic postProcessXmlNode( ::Xml node,Dynamic parentObject);
		static Dynamic postProcessXmlNode_dyn();

		static ::String _defaultTransition;
		static Float _defaultTransitionTime;
		static ::haxe::ds::StringMap _transitionRegister;
		static ::haxe::ds::StringMap _transitionTimeRegister;
		static ::String get_defaultTransition( );
		static Dynamic get_defaultTransition_dyn();

		static ::String set_defaultTransition( ::String value);
		static Dynamic set_defaultTransition_dyn();

		static Float get_defaultTransitionTime( );
		static Dynamic get_defaultTransitionTime_dyn();

		static Float set_defaultTransitionTime( Float value);
		static Dynamic set_defaultTransitionTime_dyn();

		static ::String getTransitionForClass( ::hx::Class cls);
		static Dynamic getTransitionForClass_dyn();

		static Void setTransitionForClass( ::hx::Class cls,::String transition);
		static Dynamic setTransitionForClass_dyn();

		static Float getTransitionTimeForClass( ::hx::Class cls);
		static Dynamic getTransitionTimeForClass_dyn();

		static Void setTransitionTimeForClass( ::hx::Class cls,Float transitionTime);
		static Dynamic setTransitionTimeForClass_dyn();

		static Void addScriptletClass( ::String name,::hx::Class cls);
		static Dynamic addScriptletClass_dyn();

		static Void addStyleSheet( ::String resourceId);
		static Dynamic addStyleSheet_dyn();

		static ::haxe::ui::toolkit::core::Root open( Dynamic fn,Dynamic options);
		static Dynamic open_dyn();

		static ::haxe::ui::toolkit::core::Root openFullscreen( Dynamic fn);
		static Dynamic openFullscreen_dyn();

		static ::haxe::ui::toolkit::core::Root openPopup( Dynamic options,Dynamic fn);
		static Dynamic openPopup_dyn();

		static Float _scaleFactor;
		static Float get_scaleFactor( );
		static Dynamic get_scaleFactor_dyn();

		static Float set_scaleFactor( Float value);
		static Dynamic set_scaleFactor_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Toolkit */ 
