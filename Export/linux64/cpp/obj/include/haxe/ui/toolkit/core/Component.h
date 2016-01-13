#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#define INCLUDED_haxe_ui_toolkit_core_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,hscript,ScriptInterp)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,MouseEvent)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Point)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Component_obj : public ::haxe::ui::toolkit::core::StyleableDisplayObject_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StyleableDisplayObject_obj super;
		typedef Component_obj OBJ_;
		Component_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.Component")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Component_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
		::String __ToString() const { return HX_HCSTRING("Component","\x9d","\xd0","\x26","\xb1"); }

		::String _text;
		bool _clipContent;
		bool _disabled;
		virtual Void initialize( );

		virtual Void postInitialize( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		Dynamic userData;
		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual Float get_clipWidth( );
		Dynamic get_clipWidth_dyn();

		virtual Float set_clipWidth( Float value);
		Dynamic set_clipWidth_dyn();

		virtual Float get_clipHeight( );
		Dynamic get_clipHeight_dyn();

		virtual Float set_clipHeight( Float value);
		Dynamic set_clipHeight_dyn();

		virtual bool get_clipContent( );
		Dynamic get_clipContent_dyn();

		virtual bool set_clipContent( bool value);
		Dynamic set_clipContent_dyn();

		virtual Void clearClip( );
		Dynamic clearClip_dyn();

		virtual bool get_disabled( );
		Dynamic get_disabled_dyn();

		virtual bool set_disabled( bool value);
		Dynamic set_disabled_dyn();

		virtual Dynamic get_value( );
		Dynamic get_value_dyn();

		virtual Dynamic set_value( Dynamic newValue);
		Dynamic set_value_dyn();

		Dynamic _toolTip;
		::String toolTipPosition;
		::String toolTipRelativeTo;
		Dynamic toolTipOffsetX;
		Dynamic toolTipOffsetY;
		Dynamic toolTipCenter;
		Dynamic toolTipFollow;
		virtual Dynamic get_toolTip( );
		Dynamic get_toolTip_dyn();

		virtual Dynamic set_toolTip( Dynamic value);
		Dynamic set_toolTip_dyn();

		::haxe::Timer _toolTipTimer;
		virtual Void _onComponentMouseOver( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onComponentMouseOver_dyn();

		virtual Void _onComponentMouseOut( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onComponentMouseOut_dyn();

		virtual Void _onComponentClick( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _onComponentClick_dyn();

		::haxe::ds::StringMap _cachedListeners;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);

		virtual bool disablableEventType( ::String type);
		Dynamic disablableEventType_dyn();

		::openfl::_legacy::geom::Point mouseDownPos;
		virtual Void _onComponentMouseDown( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onComponentMouseDown_dyn();

		virtual Void _onComponentMouseUp( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onComponentMouseUp_dyn();

		virtual Void _onComponentMouseMove( ::openfl::_legacy::events::MouseEvent event);
		Dynamic _onComponentMouseMove_dyn();

		virtual Void addScriptlet( ::String scriptlet);
		Dynamic addScriptlet_dyn();

		virtual ::haxe::ui::toolkit::hscript::ScriptInterp findInterp( );
		Dynamic findInterp_dyn();

		virtual Void executeScriptletExpr( ::String expr);
		Dynamic executeScriptletExpr_dyn();

		virtual Void addScriptletEventHandler( ::String event,::String scriptlet);
		Dynamic addScriptletEventHandler_dyn();

		::String _scriptletSource;
		virtual ::String get_scriptletSource( );
		Dynamic get_scriptletSource_dyn();

		virtual ::String set_scriptletSource( ::String value);
		Dynamic set_scriptletSource_dyn();

		::haxe::ui::toolkit::hscript::ScriptInterp _interp;
		virtual Void initScriplet( );
		Dynamic initScriplet_dyn();

		Array< ::haxe::ui::toolkit::core::interfaces::IComponent > namedComponents;
		virtual Array< ::haxe::ui::toolkit::core::interfaces::IComponent > get_namedComponents( );
		Dynamic get_namedComponents_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

		static Void addNamedComponentsFrom( ::haxe::ui::toolkit::core::interfaces::IComponent parent,Array< ::haxe::ui::toolkit::core::interfaces::IComponent > list);
		static Dynamic addNamedComponentsFrom_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Component */ 
