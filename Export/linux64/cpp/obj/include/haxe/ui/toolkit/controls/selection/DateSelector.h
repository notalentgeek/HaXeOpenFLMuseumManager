#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_DateSelector
#define INCLUDED_haxe_ui_toolkit_controls_selection_DateSelector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,CalendarView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,selection,DateSelector)
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace selection{


class HXCPP_CLASS_ATTRIBUTES  DateSelector_obj : public ::haxe::ui::toolkit::controls::Button_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Button_obj super;
		typedef DateSelector_obj OBJ_;
		DateSelector_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.selection.DateSelector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DateSelector_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DateSelector_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DateSelector","\x8d","\x6f","\x3b","\x31"); }

		::haxe::ui::toolkit::containers::CalendarView _cal;
		::String _method;
		virtual Void preInitialize( );

		virtual Void initialize( );

		virtual Void _onMouseClick( ::openfl::_legacy::events::MouseEvent event);

		virtual Void applyStyle( );

		virtual Void showCalendar( );
		Dynamic showCalendar_dyn();

		virtual Void hideCalendar( );
		Dynamic hideCalendar_dyn();

		virtual ::String get_method( );
		Dynamic get_method_dyn();

		virtual ::String set_method( ::String value);
		Dynamic set_method_dyn();

		virtual ::Date get_date( );
		Dynamic get_date_dyn();

		::String dateFormat;
		virtual ::String set_dateFormat( ::String value);
		Dynamic set_dateFormat_dyn();

		virtual Void _onRootMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onRootMouseDown_dyn();

		virtual Void onDateChange( ::openfl::_legacy::events::Event event);
		Dynamic onDateChange_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace selection

#endif /* INCLUDED_haxe_ui_toolkit_controls_selection_DateSelector */ 
