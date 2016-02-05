#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#define INCLUDED_haxe_ui_toolkit_core_Client

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Client)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Client_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Client_obj OBJ_;
		Client_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.Client")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Client_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Client_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"); }

		static ::haxe::ui::toolkit::core::Client _instance;
		static ::haxe::ui::toolkit::core::Client instance;
		static ::haxe::ui::toolkit::core::Client get_instance( );
		static Dynamic get_instance_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		::String language;
		Float dpi;
		::String platform;
		Float screenWidth;
		Float screenHeight;
		Float windowWidth;
		Float windowHeight;
		::String target;
		bool mobile;
		virtual ::String get_language( );
		Dynamic get_language_dyn();

		virtual Float get_dpi( );
		Dynamic get_dpi_dyn();

		virtual ::String get_platform( );
		Dynamic get_platform_dyn();

		virtual ::String get_target( );
		Dynamic get_target_dyn();

		virtual bool get_mobile( );
		Dynamic get_mobile_dyn();

		virtual Float get_screenWidth( );
		Dynamic get_screenWidth_dyn();

		virtual Float get_screenHeight( );
		Dynamic get_screenHeight_dyn();

		virtual Float get_windowWidth( );
		Dynamic get_windowWidth_dyn();

		virtual Float get_windowHeight( );
		Dynamic get_windowHeight_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Client */ 
