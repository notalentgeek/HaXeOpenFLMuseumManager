#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#define INCLUDED_haxe_ui_toolkit_core_Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,Popup)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDraggable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Controller_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Controller_obj OBJ_;
		Controller_obj();
		Void __construct(Dynamic view,Dynamic options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.Controller")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Controller_obj > __new(Dynamic view,Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Controller_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Controller","\xbc","\x9c","\x6f","\xfb"); }

		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _view;
		::haxe::ds::StringMap _namedComponents;
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer view;
		::haxe::ui::toolkit::core::Root root;
		::haxe::ui::toolkit::controls::popups::Popup popup;
		virtual Void onReady( );
		Dynamic onReady_dyn();

		virtual Dynamic addChild( Dynamic child,Dynamic options);
		Dynamic addChild_dyn();

		virtual Void attachView( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer newView);
		Dynamic attachView_dyn();

		virtual Void attachEvent( ::String id,::String type,Dynamic listener);
		Dynamic attachEvent_dyn();

		virtual Void detachEvent( ::String id,::String type,Dynamic listener);
		Dynamic detachEvent_dyn();

		virtual Void detachEvents( ::String id,::String type);
		Dynamic detachEvents_dyn();

		virtual ::haxe::ui::toolkit::core::Component getComponent( ::String id);
		Dynamic getComponent_dyn();

		virtual Dynamic getComponentAs( ::String id,::hx::Class type);
		Dynamic getComponentAs_dyn();

		virtual Void refereshNamedComponents( );
		Dynamic refereshNamedComponents_dyn();

		virtual Void addNamedComponentsFrom( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer parent);
		Dynamic addNamedComponentsFrom_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer get_view( );
		Dynamic get_view_dyn();

		virtual ::haxe::ui::toolkit::core::Root get_root( );
		Dynamic get_root_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup get_popup( );
		Dynamic get_popup_dyn();

		::haxe::ds::StringMap namedComponents;
		virtual ::haxe::ds::StringMap get_namedComponents( );
		Dynamic get_namedComponents_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showPopup( ::String text,::String title,Dynamic config,Dynamic fn);
		Dynamic showPopup_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showSimplePopup( ::String text,::String title,Dynamic config,Dynamic fn);
		Dynamic showSimplePopup_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showCustomPopup( Dynamic content,::String title,Dynamic config,Dynamic fn);
		Dynamic showCustomPopup_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showListPopup( Dynamic items,hx::Null< int >  selectedIndex,::String title,Dynamic fn);
		Dynamic showListPopup_dyn();

		::haxe::ui::toolkit::controls::popups::Popup _currentBusyPopup;
		virtual ::haxe::ui::toolkit::controls::popups::Popup showBusyPopup( ::String text,hx::Null< int >  delay,::String title,Dynamic config,Dynamic fn);
		Dynamic showBusyPopup_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showBusy( ::String text,hx::Null< int >  delay,::String title,Dynamic config,Dynamic fn);
		Dynamic showBusy_dyn();

		virtual Void hideBusy( );
		Dynamic hideBusy_dyn();

		virtual ::haxe::ui::toolkit::controls::popups::Popup showCalendarPopup( ::String title,Dynamic fn);
		Dynamic showCalendarPopup_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Controller */ 
