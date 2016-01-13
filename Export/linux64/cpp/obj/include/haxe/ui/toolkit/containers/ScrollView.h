#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#define INCLUDED_haxe_ui_toolkit_containers_ScrollView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Box)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollViewRefreshPrompt)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollViewRefreshing)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,HScroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Scroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,VScroll)
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
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
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  ScrollView_obj : public ::haxe::ui::toolkit::core::StateComponent_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StateComponent_obj super;
		typedef ScrollView_obj OBJ_;
		ScrollView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.ScrollView")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ScrollView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScrollView_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ScrollView","\x32","\xc5","\xbf","\x02"); }

		::haxe::ui::toolkit::controls::HScroll _hscroll;
		::haxe::ui::toolkit::controls::VScroll _vscroll;
		::haxe::ui::toolkit::containers::Box _container;
		bool _showHScroll;
		bool _showVScroll;
		::openfl::_legacy::display::Sprite _eventTarget;
		::openfl::_legacy::geom::Point _downPos;
		::openfl::_legacy::geom::Point _inertiaSpeed;
		Float _inertiaTime;
		Float _inertiaSensitivity;
		bool _inertialScrolling;
		int _scrollSensitivity;
		bool _autoHideScrolls;
		bool _virtualScrolling;
		virtual Void preInitialize( );

		virtual Void initialize( );

		virtual Void postInitialize( );

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child);

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index);

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  dispose);

		virtual Void dispose( );

		virtual bool get_inertialScrolling( );
		Dynamic get_inertialScrolling_dyn();

		virtual bool set_inertialScrolling( bool value);
		Dynamic set_inertialScrolling_dyn();

		virtual bool get_virtualScrolling( );
		Dynamic get_virtualScrolling_dyn();

		virtual bool set_virtualScrolling( bool value);
		Dynamic set_virtualScrolling_dyn();

		virtual bool get_showHScroll( );
		Dynamic get_showHScroll_dyn();

		virtual bool set_showHScroll( bool value);
		Dynamic set_showHScroll_dyn();

		virtual bool get_showVScroll( );
		Dynamic get_showVScroll_dyn();

		virtual bool set_showVScroll( bool value);
		Dynamic set_showVScroll_dyn();

		virtual Float get_hscrollPos( );
		Dynamic get_hscrollPos_dyn();

		virtual Float set_hscrollPos( Float value);
		Dynamic set_hscrollPos_dyn();

		virtual Float get_hscrollMin( );
		Dynamic get_hscrollMin_dyn();

		virtual Float set_hscrollMin( Float value);
		Dynamic set_hscrollMin_dyn();

		virtual Float get_hscrollMax( );
		Dynamic get_hscrollMax_dyn();

		virtual Float set_hscrollMax( Float value);
		Dynamic set_hscrollMax_dyn();

		virtual Float get_hscrollPageSize( );
		Dynamic get_hscrollPageSize_dyn();

		virtual Float set_hscrollPageSize( Float value);
		Dynamic set_hscrollPageSize_dyn();

		virtual Float get_vscrollPos( );
		Dynamic get_vscrollPos_dyn();

		virtual Float set_vscrollPos( Float value);
		Dynamic set_vscrollPos_dyn();

		virtual Float get_vscrollMin( );
		Dynamic get_vscrollMin_dyn();

		virtual Float set_vscrollMin( Float value);
		Dynamic set_vscrollMin_dyn();

		virtual Float get_vscrollMax( );
		Dynamic get_vscrollMax_dyn();

		virtual Float set_vscrollMax( Float value);
		Dynamic set_vscrollMax_dyn();

		virtual Float get_vscrollPageSize( );
		Dynamic get_vscrollPageSize_dyn();

		virtual Float set_vscrollPageSize( Float value);
		Dynamic set_vscrollPageSize_dyn();

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual Void _onInertiaEnterFrame( ::openfl::_legacy::events::Event event);
		Dynamic _onInertiaEnterFrame_dyn();

		virtual Void _onHScrollChange( ::openfl::_legacy::events::Event event);
		Dynamic _onHScrollChange_dyn();

		virtual Void _onVScrollChange( ::openfl::_legacy::events::Event event);
		Dynamic _onVScrollChange_dyn();

		virtual Void _onMouseWheel( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseWheel_dyn();

		virtual Void _onMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onMouseDown_dyn();

		bool _pulling;
		::haxe::ui::toolkit::containers::ScrollViewRefreshPrompt _refreshPromptView;
		::String _refreshString;
		virtual ::String get_refreshString( );
		Dynamic get_refreshString_dyn();

		virtual ::String set_refreshString( ::String value);
		Dynamic set_refreshString_dyn();

		::haxe::ui::toolkit::containers::ScrollViewRefreshing _refreshingView;
		::String _refreshingString;
		virtual ::String get_refreshingString( );
		Dynamic get_refreshingString_dyn();

		virtual ::String set_refreshingString( ::String value);
		Dynamic set_refreshingString_dyn();

		virtual Void _onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onScreenMouseMove_dyn();

		virtual bool allowPull( );
		Dynamic allowPull_dyn();

		virtual Void _onScreenMouseUp( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onScreenMouseUp_dyn();

		virtual Void refreshComplete( );
		Dynamic refreshComplete_dyn();

		virtual Void checkScrolls( );
		Dynamic checkScrolls_dyn();

		virtual bool createHScroll( hx::Null< bool >  invalidateLayout);
		Dynamic createHScroll_dyn();

		virtual bool createVScroll( hx::Null< bool >  invalidateLayout);
		Dynamic createVScroll_dyn();

		virtual Void updateScrollRect( );
		Dynamic updateScrollRect_dyn();

		virtual Void resizeEventTarget( );
		Dynamic resizeEventTarget_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_ScrollView */ 
