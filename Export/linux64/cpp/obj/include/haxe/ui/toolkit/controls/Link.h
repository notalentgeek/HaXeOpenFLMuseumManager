#ifndef INCLUDED_haxe_ui_toolkit_controls_Link
#define INCLUDED_haxe_ui_toolkit_controls_Link

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Link)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  Link_obj : public ::haxe::ui::toolkit::controls::Text_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Text_obj super;
		typedef Link_obj OBJ_;
		Link_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.Link")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Link_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Link_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Link","\x1a","\x44","\x8c","\x32"); }

		static void __boot();
		static ::String STATE_NORMAL;
		static ::String STATE_OVER;
		static ::String STATE_DOWN;
		bool _isDown;
		bool _isOver;
		virtual Void initialize( );

		virtual Void _onScreenMouseDown( ::openfl::_legacy::events::MouseEvent e);
		Dynamic _onScreenMouseDown_dyn();

		virtual Void _onScreenMouseMove( ::openfl::_legacy::events::MouseEvent e);
		Dynamic _onScreenMouseMove_dyn();

		virtual Void _onScreenMouseUp( ::openfl::_legacy::events::MouseEvent e);
		Dynamic _onScreenMouseUp_dyn();

		::String url;
		virtual Array< ::String > get_states( );

		virtual bool ensureVisible( );
		Dynamic ensureVisible_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_Link */ 
