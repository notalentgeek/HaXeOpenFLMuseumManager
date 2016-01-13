#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#define INCLUDED_haxe_ui_toolkit_core_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Screen)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Screen_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Screen_obj OBJ_;
		Screen_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.ui.toolkit.core.Screen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Screen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Screen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Screen","\x8c","\xaf","\xf1","\x7b"); }

		Float _cursorX;
		Float _cursorY;
		Float width;
		Float height;
		Float cursorX;
		Float cursorY;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);
		Dynamic addEventListener_dyn();

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);
		Dynamic removeEventListener_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float get_cursorX( );
		Dynamic get_cursorX_dyn();

		virtual Float get_cursorY( );
		Dynamic get_cursorY_dyn();

		virtual Void _onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onScreenMouseMove_dyn();

		static ::haxe::ui::toolkit::core::Screen _instance;
		static ::haxe::ui::toolkit::core::Screen instance;
		static ::haxe::ui::toolkit::core::Screen get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Screen */ 
