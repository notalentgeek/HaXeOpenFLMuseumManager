#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#define INCLUDED_haxe_ui_toolkit_controls_Slider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Progress)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Slider)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDirectional)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  Slider_obj : public ::haxe::ui::toolkit::controls::Progress_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Progress_obj super;
		typedef Slider_obj OBJ_;
		Slider_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.Slider")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Slider_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Slider_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Slider","\x41","\x3a","\x99","\xa4"); }

		::haxe::ui::toolkit::controls::Button _thumb;
		Float _mouseDownOffset;
		virtual Void initialize( );

		virtual Dynamic get_value( );

		virtual Dynamic set_value( Dynamic newValue);

		virtual Void _onMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseDown_dyn();

		virtual Void _onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onScreenMouseMove_dyn();

		virtual Void _onScreenMouseUp( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onScreenMouseUp_dyn();

		virtual Void _onBackgroundMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onBackgroundMouseDown_dyn();

		virtual Float calcPosFromCoord( Float coord);
		Dynamic calcPosFromCoord_dyn();

		virtual Void _onMouseWheel( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseWheel_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_Slider */ 
