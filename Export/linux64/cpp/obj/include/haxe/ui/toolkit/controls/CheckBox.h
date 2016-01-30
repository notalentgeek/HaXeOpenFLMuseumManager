#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBox
#define INCLUDED_haxe_ui_toolkit_controls_CheckBox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,CheckBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,CheckBoxValue)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Value)
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
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  CheckBox_obj : public ::haxe::ui::toolkit::core::StateComponent_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StateComponent_obj super;
		typedef CheckBox_obj OBJ_;
		CheckBox_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.CheckBox")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CheckBox_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CheckBox_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		::String __ToString() const { return HX_HCSTRING("CheckBox","\x43","\x46","\x8f","\x86"); }

		static void __boot();
		::haxe::ui::toolkit::controls::CheckBoxValue _value;
		::haxe::ui::toolkit::controls::Text _label;
		bool _selected;
		::openfl::_legacy::display::Sprite _eventTarget;
		bool _down;
		virtual Void initialize( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual Void dispose( );

		virtual Void _onMouseOver( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseOver_dyn();

		virtual Void _onMouseOut( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseOut_dyn();

		virtual Void _onMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseDown_dyn();

		virtual Void _onMouseUp( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseUp_dyn();

		virtual bool set_autoSize( bool value);

		virtual ::String get_text( );

		virtual ::String set_text( ::String value);

		virtual Dynamic get_value( );

		virtual Dynamic set_value( Dynamic newValue);

		virtual Float get_height( );

		virtual bool get_multiline( );
		Dynamic get_multiline_dyn();

		virtual bool set_multiline( bool value);
		Dynamic set_multiline_dyn();

		virtual bool get_wrapLines( );
		Dynamic get_wrapLines_dyn();

		virtual bool set_wrapLines( bool value);
		Dynamic set_wrapLines_dyn();

		virtual bool get_selected( );
		Dynamic get_selected_dyn();

		virtual bool set_selected( bool value);
		Dynamic set_selected_dyn();

		virtual Void applyStyle( );

		virtual Array< ::String > get_states( );

		virtual Void resizeEventTarget( );
		Dynamic resizeEventTarget_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

		static ::String STATE_NORMAL;
		static ::String STATE_OVER;
		static ::String STATE_DOWN;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_CheckBox */ 
