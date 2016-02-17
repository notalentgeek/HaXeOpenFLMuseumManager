#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#define INCLUDED_haxe_ui_toolkit_core_DisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  DisplayObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DisplayObject_obj OBJ_;
		DisplayObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.core.DisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DisplayObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObject_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IDrawable_obj *();
		::String __ToString() const { return HX_HCSTRING("DisplayObject","\x81","\x8a","\x92","\x1e"); }

		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _parent;
		::haxe::ui::toolkit::core::Root _root;
		::String _id;
		Float _x;
		Float _y;
		Float _z;
		Float _rotationX;
		Float _rotationY;
		Float _rotationZ;
		Float _width;
		Float _height;
		Float _percentWidth;
		Float _percentHeight;
		Float _minWidth;
		Float _minHeight;
		bool _ready;
		bool _invalidating;
		::openfl::_legacy::display::Sprite _sprite;
		::String _halign;
		::String _valign;
		bool _includeInLayout;
		Float _alpha;
		::haxe::ds::StringMap _eventListeners;
		virtual Void preInitialize( );
		Dynamic preInitialize_dyn();

		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual Void postInitialize( );
		Dynamic postInitialize_dyn();

		virtual Void _onAddedToStage( ::openfl::_legacy::events::Event event);
		Dynamic _onAddedToStage_dyn();

		bool ready;
		::openfl::_legacy::display::Sprite sprite;
		Float stageX;
		Float stageY;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer get_parent( );
		Dynamic get_parent_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer set_parent( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value);
		Dynamic set_parent_dyn();

		virtual ::haxe::ui::toolkit::core::Root get_root( );
		Dynamic get_root_dyn();

		virtual ::haxe::ui::toolkit::core::Root set_root( ::haxe::ui::toolkit::core::Root value);
		Dynamic set_root_dyn();

		virtual ::String get_id( );
		Dynamic get_id_dyn();

		virtual ::String set_id( ::String value);
		Dynamic set_id_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float value);
		Dynamic set_y_dyn();

		virtual Float get_z( );
		Dynamic get_z_dyn();

		virtual Float set_z( Float value);
		Dynamic set_z_dyn();

		virtual Float get_rotationX( );
		Dynamic get_rotationX_dyn();

		virtual Float set_rotationX( Float value);
		Dynamic set_rotationX_dyn();

		virtual Float get_rotationY( );
		Dynamic get_rotationY_dyn();

		virtual Float set_rotationY( Float value);
		Dynamic set_rotationY_dyn();

		virtual Float get_rotationZ( );
		Dynamic get_rotationZ_dyn();

		virtual Float set_rotationZ( Float value);
		Dynamic set_rotationZ_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_width( Float value);
		Dynamic set_width_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_height( Float value);
		Dynamic set_height_dyn();

		virtual Float get_percentWidth( );
		Dynamic get_percentWidth_dyn();

		virtual Float set_percentWidth( Float value);
		Dynamic set_percentWidth_dyn();

		virtual Float get_percentHeight( );
		Dynamic get_percentHeight_dyn();

		virtual Float set_percentHeight( Float value);
		Dynamic set_percentHeight_dyn();

		virtual Float get_minWidth( );
		Dynamic get_minWidth_dyn();

		virtual Float set_minWidth( Float value);
		Dynamic set_minWidth_dyn();

		virtual Float get_minHeight( );
		Dynamic get_minHeight_dyn();

		virtual Float set_minHeight( Float value);
		Dynamic set_minHeight_dyn();

		virtual bool get_ready( );
		Dynamic get_ready_dyn();

		virtual ::openfl::_legacy::display::Sprite get_sprite( );
		Dynamic get_sprite_dyn();

		virtual Float get_stageX( );
		Dynamic get_stageX_dyn();

		virtual Float get_stageY( );
		Dynamic get_stageY_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual bool get_includeInLayout( );
		Dynamic get_includeInLayout_dyn();

		virtual bool set_includeInLayout( bool value);
		Dynamic set_includeInLayout_dyn();

		virtual ::String get_horizontalAlign( );
		Dynamic get_horizontalAlign_dyn();

		virtual ::String set_horizontalAlign( ::String value);
		Dynamic set_horizontalAlign_dyn();

		virtual ::String get_verticalAlign( );
		Dynamic get_verticalAlign_dyn();

		virtual ::String set_verticalAlign( ::String value);
		Dynamic set_verticalAlign_dyn();

		virtual bool get_useHandCursor( );
		Dynamic get_useHandCursor_dyn();

		virtual bool set_useHandCursor( bool value);
		Dynamic set_useHandCursor_dyn();

		virtual bool hitTest( Float xpos,Float ypos);
		Dynamic hitTest_dyn();

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);
		Dynamic invalidate_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void interceptEvent( ::openfl::_legacy::events::Event event);
		Dynamic interceptEvent_dyn();

		::haxe::ds::StringMap _interceptMap;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);
		Dynamic addEventListener_dyn();

		virtual bool dispatchEvent( ::openfl::_legacy::events::Event event);
		Dynamic dispatchEvent_dyn();

		virtual bool hasEventListener( ::String type);
		Dynamic hasEventListener_dyn();

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);
		Dynamic removeEventListener_dyn();

		virtual bool willTrigger( ::String type);
		Dynamic willTrigger_dyn();

		::openfl::_legacy::display::Graphics graphics;
		virtual ::openfl::_legacy::display::Graphics get_graphics( );
		Dynamic get_graphics_dyn();

		virtual Void paint( );
		Dynamic paint_dyn();

		virtual Void removeEventListenerType( ::String eventType);
		Dynamic removeEventListenerType_dyn();

		virtual Void removeAllEventListeners( );
		Dynamic removeAllEventListeners_dyn();

		virtual int getListenerCount( ::String type,Dynamic listener);
		Dynamic getListenerCount_dyn();

		virtual bool removeEventFunction( cpp::ArrayBase arr,Dynamic fn);
		Dynamic removeEventFunction_dyn();

		virtual Void _handleEvent( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic _handleEvent_dyn();

		Dynamic onInit;
		Dynamic &onInit_dyn() { return onInit;}
		virtual Dynamic set_onInit( Dynamic value);
		Dynamic set_onInit_dyn();

		Dynamic onResize;
		Dynamic &onResize_dyn() { return onResize;}
		virtual Dynamic set_onResize( Dynamic value);
		Dynamic set_onResize_dyn();

		Dynamic onReady;
		Dynamic &onReady_dyn() { return onReady;}
		virtual Dynamic set_onReady( Dynamic value);
		Dynamic set_onReady_dyn();

		Dynamic onClick;
		Dynamic &onClick_dyn() { return onClick;}
		virtual Dynamic set_onClick( Dynamic value);
		Dynamic set_onClick_dyn();

		Dynamic onMouseDown;
		Dynamic &onMouseDown_dyn() { return onMouseDown;}
		virtual Dynamic set_onMouseDown( Dynamic value);
		Dynamic set_onMouseDown_dyn();

		Dynamic onMouseUp;
		Dynamic &onMouseUp_dyn() { return onMouseUp;}
		virtual Dynamic set_onMouseUp( Dynamic value);
		Dynamic set_onMouseUp_dyn();

		Dynamic onMouseOver;
		Dynamic &onMouseOver_dyn() { return onMouseOver;}
		virtual Dynamic set_onMouseOver( Dynamic value);
		Dynamic set_onMouseOver_dyn();

		Dynamic onMouseOut;
		Dynamic &onMouseOut_dyn() { return onMouseOut;}
		virtual Dynamic set_onMouseOut( Dynamic value);
		Dynamic set_onMouseOut_dyn();

		Dynamic onMouseMove;
		Dynamic &onMouseMove_dyn() { return onMouseMove;}
		virtual Dynamic set_onMouseMove( Dynamic value);
		Dynamic set_onMouseMove_dyn();

		Dynamic onDoubleClick;
		Dynamic &onDoubleClick_dyn() { return onDoubleClick;}
		virtual Dynamic set_onDoubleClick( Dynamic value);
		Dynamic set_onDoubleClick_dyn();

		Dynamic onRollOver;
		Dynamic &onRollOver_dyn() { return onRollOver;}
		virtual Dynamic set_onRollOver( Dynamic value);
		Dynamic set_onRollOver_dyn();

		Dynamic onRollOut;
		Dynamic &onRollOut_dyn() { return onRollOut;}
		virtual Dynamic set_onRollOut( Dynamic value);
		Dynamic set_onRollOut_dyn();

		Dynamic onChange;
		Dynamic &onChange_dyn() { return onChange;}
		virtual Dynamic set_onChange( Dynamic value);
		Dynamic set_onChange_dyn();

		Dynamic onAdded;
		Dynamic &onAdded_dyn() { return onAdded;}
		virtual Dynamic set_onAdded( Dynamic value);
		Dynamic set_onAdded_dyn();

		Dynamic onAddedToStage;
		Dynamic &onAddedToStage_dyn() { return onAddedToStage;}
		virtual Dynamic set_onAddedToStage( Dynamic value);
		Dynamic set_onAddedToStage_dyn();

		Dynamic onRemoved;
		Dynamic &onRemoved_dyn() { return onRemoved;}
		virtual Dynamic set_onRemoved( Dynamic value);
		Dynamic set_onRemoved_dyn();

		Dynamic onRemovedFromStage;
		Dynamic &onRemovedFromStage_dyn() { return onRemovedFromStage;}
		virtual Dynamic set_onRemovedFromStage( Dynamic value);
		Dynamic set_onRemovedFromStage_dyn();

		Dynamic onActivate;
		Dynamic &onActivate_dyn() { return onActivate;}
		virtual Dynamic set_onActivate( Dynamic value);
		Dynamic set_onActivate_dyn();

		Dynamic onDeactivate;
		Dynamic &onDeactivate_dyn() { return onDeactivate;}
		virtual Dynamic set_onDeactivate( Dynamic value);
		Dynamic set_onDeactivate_dyn();

		Dynamic onScroll;
		Dynamic &onScroll_dyn() { return onScroll;}
		virtual Dynamic set_onScroll( Dynamic value);
		Dynamic set_onScroll_dyn();

		Dynamic onScrollStart;
		Dynamic &onScrollStart_dyn() { return onScrollStart;}
		virtual Dynamic set_onScrollStart( Dynamic value);
		Dynamic set_onScrollStart_dyn();

		Dynamic onScrollStop;
		Dynamic &onScrollStop_dyn() { return onScrollStop;}
		virtual Dynamic set_onScrollStop( Dynamic value);
		Dynamic set_onScrollStop_dyn();

		Dynamic onGlyphClick;
		Dynamic &onGlyphClick_dyn() { return onGlyphClick;}
		virtual Dynamic set_onGlyphClick( Dynamic value);
		Dynamic set_onGlyphClick_dyn();

		Dynamic onMenuSelect;
		Dynamic &onMenuSelect_dyn() { return onMenuSelect;}
		virtual Dynamic set_onMenuSelect( Dynamic value);
		Dynamic set_onMenuSelect_dyn();

		Dynamic onMenuOpen;
		Dynamic &onMenuOpen_dyn() { return onMenuOpen;}
		virtual Dynamic set_onMenuOpen( Dynamic value);
		Dynamic set_onMenuOpen_dyn();

		Dynamic onRefresh;
		Dynamic &onRefresh_dyn() { return onRefresh;}
		virtual Dynamic set_onRefresh( Dynamic value);
		Dynamic set_onRefresh_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );
		Dynamic clone_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );
		Dynamic self_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_DisplayObject */ 
