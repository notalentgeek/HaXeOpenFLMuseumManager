#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#define INCLUDED_haxe_ui_toolkit_controls_HScroll

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,HScroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Scroll)
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
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,utils,Timer)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  HScroll_obj : public ::haxe::ui::toolkit::controls::Scroll_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Scroll_obj super;
		typedef HScroll_obj OBJ_;
		HScroll_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.HScroll")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< HScroll_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HScroll_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *();
		::String __ToString() const { return HX_HCSTRING("HScroll","\x75","\xb2","\x02","\x2e"); }

		Float _pos;
		Float _min;
		Float _max;
		Float _pageSize;
		Float _incrementSize;
		::haxe::ui::toolkit::controls::Button _deincButton;
		::haxe::ui::toolkit::controls::Button _incButton;
		::haxe::ui::toolkit::controls::Button _thumb;
		Float _mouseDownOffset;
		int _scrollDirection;
		::openfl::_legacy::utils::Timer _scrollTimer;
		bool _hasButtons;
		virtual Void preInitialize( );

		virtual Void initialize( );

		virtual Void _onThumbMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onThumbMouseDown_dyn();

		virtual Void _onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onScreenMouseMove_dyn();

		virtual Void _onScreenMouseUp( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onScreenMouseUp_dyn();

		virtual Void _onDeinc( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onDeinc_dyn();

		virtual Void _onInc( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onInc_dyn();

		virtual Void _onScrollTimerComplete( ::openfl::events::TimerEvent event);
		Dynamic _onScrollTimerComplete_dyn();

		virtual Void _onMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseDown_dyn();

		virtual Float get_pos( );
		Dynamic get_pos_dyn();

		virtual Float set_pos( Float value);
		Dynamic set_pos_dyn();

		virtual Float get_min( );
		Dynamic get_min_dyn();

		virtual Float set_min( Float value);
		Dynamic set_min_dyn();

		virtual Float get_max( );
		Dynamic get_max_dyn();

		virtual Float set_max( Float value);
		Dynamic set_max_dyn();

		virtual Float get_pageSize( );
		Dynamic get_pageSize_dyn();

		virtual Float set_pageSize( Float value);
		Dynamic set_pageSize_dyn();

		virtual Float get_incrementSize( );
		Dynamic get_incrementSize_dyn();

		virtual Float set_incrementSize( Float value);
		Dynamic set_incrementSize_dyn();

		virtual Void deincrementValue( );
		Dynamic deincrementValue_dyn();

		virtual Void incrementValue( );
		Dynamic incrementValue_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_HScroll */ 
