#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipManager
#define INCLUDED_haxe_ui_toolkit_core_ToolTipManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Box)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,ToolTip)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,ToolTipManager)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ToolTipManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ToolTipManager_obj OBJ_;
		ToolTipManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.ToolTipManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ToolTipManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ToolTipManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ToolTipManager","\xea","\x9b","\xc3","\x83"); }

		Dynamic defaults;
		::haxe::ui::toolkit::controls::ToolTip _currentToolTip;
		virtual Void showToolTip( ::haxe::ui::toolkit::core::Component c,Dynamic options,::haxe::ui::toolkit::events::UIEvent event);
		Dynamic showToolTip_dyn();

		virtual Void _onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onScreenMouseMove_dyn();

		virtual Void positionTooltip( ::haxe::ui::toolkit::controls::ToolTip tooltip,Dynamic options);
		Dynamic positionTooltip_dyn();

		virtual Void hideCurrentToolTip( );
		Dynamic hideCurrentToolTip_dyn();

		virtual bool toolTipVisible( ::haxe::ui::toolkit::core::Component c);
		Dynamic toolTipVisible_dyn();

		static ::haxe::ui::toolkit::core::ToolTipManager _instance;
		static ::haxe::ui::toolkit::core::ToolTipManager instance;
		static ::haxe::ui::toolkit::core::ToolTipManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_ToolTipManager */ 
