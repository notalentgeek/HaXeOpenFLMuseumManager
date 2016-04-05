#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
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
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IDisplayObject_obj : public ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj{
	public:
		typedef ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj super;
		typedef IDisplayObject_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer get_parent( )=0;
virtual Dynamic get_parent_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer set_parent( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value)=0;
virtual Dynamic set_parent_dyn()=0;
		virtual ::haxe::ui::toolkit::core::Root get_root( )=0;
virtual Dynamic get_root_dyn()=0;
		virtual ::haxe::ui::toolkit::core::Root set_root( ::haxe::ui::toolkit::core::Root value)=0;
virtual Dynamic set_root_dyn()=0;
		virtual ::String get_id( )=0;
virtual Dynamic get_id_dyn()=0;
		virtual ::String set_id( ::String value)=0;
virtual Dynamic set_id_dyn()=0;
		virtual Float get_x( )=0;
virtual Dynamic get_x_dyn()=0;
		virtual Float set_x( Float value)=0;
virtual Dynamic set_x_dyn()=0;
		virtual Float get_y( )=0;
virtual Dynamic get_y_dyn()=0;
		virtual Float set_y( Float value)=0;
virtual Dynamic set_y_dyn()=0;
		virtual Float get_width( )=0;
virtual Dynamic get_width_dyn()=0;
		virtual Float set_width( Float value)=0;
virtual Dynamic set_width_dyn()=0;
		virtual Float get_height( )=0;
virtual Dynamic get_height_dyn()=0;
		virtual Float set_height( Float value)=0;
virtual Dynamic set_height_dyn()=0;
		virtual Float get_percentWidth( )=0;
virtual Dynamic get_percentWidth_dyn()=0;
		virtual Float set_percentWidth( Float value)=0;
virtual Dynamic set_percentWidth_dyn()=0;
		virtual Float get_percentHeight( )=0;
virtual Dynamic get_percentHeight_dyn()=0;
		virtual Float set_percentHeight( Float value)=0;
virtual Dynamic set_percentHeight_dyn()=0;
		virtual Float get_minWidth( )=0;
virtual Dynamic get_minWidth_dyn()=0;
		virtual Float set_minWidth( Float value)=0;
virtual Dynamic set_minWidth_dyn()=0;
		virtual Float get_minHeight( )=0;
virtual Dynamic get_minHeight_dyn()=0;
		virtual Float set_minHeight( Float value)=0;
virtual Dynamic set_minHeight_dyn()=0;
		virtual bool get_ready( )=0;
virtual Dynamic get_ready_dyn()=0;
		virtual ::openfl::_legacy::display::Sprite get_sprite( )=0;
virtual Dynamic get_sprite_dyn()=0;
		virtual Float get_stageX( )=0;
virtual Dynamic get_stageX_dyn()=0;
		virtual Float get_stageY( )=0;
virtual Dynamic get_stageY_dyn()=0;
		virtual bool get_visible( )=0;
virtual Dynamic get_visible_dyn()=0;
		virtual bool set_visible( bool value)=0;
virtual Dynamic set_visible_dyn()=0;
		virtual Float get_alpha( )=0;
virtual Dynamic get_alpha_dyn()=0;
		virtual Float set_alpha( Float value)=0;
virtual Dynamic set_alpha_dyn()=0;
		virtual bool get_includeInLayout( )=0;
virtual Dynamic get_includeInLayout_dyn()=0;
		virtual bool set_includeInLayout( bool value)=0;
virtual Dynamic set_includeInLayout_dyn()=0;
		virtual ::String get_horizontalAlign( )=0;
virtual Dynamic get_horizontalAlign_dyn()=0;
		virtual ::String set_horizontalAlign( ::String value)=0;
virtual Dynamic set_horizontalAlign_dyn()=0;
		virtual ::String get_verticalAlign( )=0;
virtual Dynamic get_verticalAlign_dyn()=0;
		virtual ::String set_verticalAlign( ::String value)=0;
virtual Dynamic set_verticalAlign_dyn()=0;
		virtual bool get_useHandCursor( )=0;
virtual Dynamic get_useHandCursor_dyn()=0;
		virtual bool set_useHandCursor( bool value)=0;
virtual Dynamic set_useHandCursor_dyn()=0;
		virtual bool hitTest( Float stageX,Float stageY)=0;
virtual Dynamic hitTest_dyn()=0;
		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive)=0;
virtual Dynamic invalidate_dyn()=0;
		virtual Void dispose( )=0;
virtual Dynamic dispose_dyn()=0;
};



template<typename IMPL>
class IDisplayObject_delegate_ : public IDisplayObject_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDisplayObject_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer get_parent( ) { return mDelegate->get_parent();}
		Dynamic get_parent_dyn() { return mDelegate->get_parent_dyn();}
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer set_parent( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value) { return mDelegate->set_parent(value);}
		Dynamic set_parent_dyn() { return mDelegate->set_parent_dyn();}
		::haxe::ui::toolkit::core::Root get_root( ) { return mDelegate->get_root();}
		Dynamic get_root_dyn() { return mDelegate->get_root_dyn();}
		::haxe::ui::toolkit::core::Root set_root( ::haxe::ui::toolkit::core::Root value) { return mDelegate->set_root(value);}
		Dynamic set_root_dyn() { return mDelegate->set_root_dyn();}
		::String get_id( ) { return mDelegate->get_id();}
		Dynamic get_id_dyn() { return mDelegate->get_id_dyn();}
		::String set_id( ::String value) { return mDelegate->set_id(value);}
		Dynamic set_id_dyn() { return mDelegate->set_id_dyn();}
		Float get_x( ) { return mDelegate->get_x();}
		Dynamic get_x_dyn() { return mDelegate->get_x_dyn();}
		Float set_x( Float value) { return mDelegate->set_x(value);}
		Dynamic set_x_dyn() { return mDelegate->set_x_dyn();}
		Float get_y( ) { return mDelegate->get_y();}
		Dynamic get_y_dyn() { return mDelegate->get_y_dyn();}
		Float set_y( Float value) { return mDelegate->set_y(value);}
		Dynamic set_y_dyn() { return mDelegate->set_y_dyn();}
		Float get_width( ) { return mDelegate->get_width();}
		Dynamic get_width_dyn() { return mDelegate->get_width_dyn();}
		Float set_width( Float value) { return mDelegate->set_width(value);}
		Dynamic set_width_dyn() { return mDelegate->set_width_dyn();}
		Float get_height( ) { return mDelegate->get_height();}
		Dynamic get_height_dyn() { return mDelegate->get_height_dyn();}
		Float set_height( Float value) { return mDelegate->set_height(value);}
		Dynamic set_height_dyn() { return mDelegate->set_height_dyn();}
		Float get_percentWidth( ) { return mDelegate->get_percentWidth();}
		Dynamic get_percentWidth_dyn() { return mDelegate->get_percentWidth_dyn();}
		Float set_percentWidth( Float value) { return mDelegate->set_percentWidth(value);}
		Dynamic set_percentWidth_dyn() { return mDelegate->set_percentWidth_dyn();}
		Float get_percentHeight( ) { return mDelegate->get_percentHeight();}
		Dynamic get_percentHeight_dyn() { return mDelegate->get_percentHeight_dyn();}
		Float set_percentHeight( Float value) { return mDelegate->set_percentHeight(value);}
		Dynamic set_percentHeight_dyn() { return mDelegate->set_percentHeight_dyn();}
		Float get_minWidth( ) { return mDelegate->get_minWidth();}
		Dynamic get_minWidth_dyn() { return mDelegate->get_minWidth_dyn();}
		Float set_minWidth( Float value) { return mDelegate->set_minWidth(value);}
		Dynamic set_minWidth_dyn() { return mDelegate->set_minWidth_dyn();}
		Float get_minHeight( ) { return mDelegate->get_minHeight();}
		Dynamic get_minHeight_dyn() { return mDelegate->get_minHeight_dyn();}
		Float set_minHeight( Float value) { return mDelegate->set_minHeight(value);}
		Dynamic set_minHeight_dyn() { return mDelegate->set_minHeight_dyn();}
		bool get_ready( ) { return mDelegate->get_ready();}
		Dynamic get_ready_dyn() { return mDelegate->get_ready_dyn();}
		::openfl::_legacy::display::Sprite get_sprite( ) { return mDelegate->get_sprite();}
		Dynamic get_sprite_dyn() { return mDelegate->get_sprite_dyn();}
		Float get_stageX( ) { return mDelegate->get_stageX();}
		Dynamic get_stageX_dyn() { return mDelegate->get_stageX_dyn();}
		Float get_stageY( ) { return mDelegate->get_stageY();}
		Dynamic get_stageY_dyn() { return mDelegate->get_stageY_dyn();}
		bool get_visible( ) { return mDelegate->get_visible();}
		Dynamic get_visible_dyn() { return mDelegate->get_visible_dyn();}
		bool set_visible( bool value) { return mDelegate->set_visible(value);}
		Dynamic set_visible_dyn() { return mDelegate->set_visible_dyn();}
		Float get_alpha( ) { return mDelegate->get_alpha();}
		Dynamic get_alpha_dyn() { return mDelegate->get_alpha_dyn();}
		Float set_alpha( Float value) { return mDelegate->set_alpha(value);}
		Dynamic set_alpha_dyn() { return mDelegate->set_alpha_dyn();}
		bool get_includeInLayout( ) { return mDelegate->get_includeInLayout();}
		Dynamic get_includeInLayout_dyn() { return mDelegate->get_includeInLayout_dyn();}
		bool set_includeInLayout( bool value) { return mDelegate->set_includeInLayout(value);}
		Dynamic set_includeInLayout_dyn() { return mDelegate->set_includeInLayout_dyn();}
		::String get_horizontalAlign( ) { return mDelegate->get_horizontalAlign();}
		Dynamic get_horizontalAlign_dyn() { return mDelegate->get_horizontalAlign_dyn();}
		::String set_horizontalAlign( ::String value) { return mDelegate->set_horizontalAlign(value);}
		Dynamic set_horizontalAlign_dyn() { return mDelegate->set_horizontalAlign_dyn();}
		::String get_verticalAlign( ) { return mDelegate->get_verticalAlign();}
		Dynamic get_verticalAlign_dyn() { return mDelegate->get_verticalAlign_dyn();}
		::String set_verticalAlign( ::String value) { return mDelegate->set_verticalAlign(value);}
		Dynamic set_verticalAlign_dyn() { return mDelegate->set_verticalAlign_dyn();}
		bool get_useHandCursor( ) { return mDelegate->get_useHandCursor();}
		Dynamic get_useHandCursor_dyn() { return mDelegate->get_useHandCursor_dyn();}
		bool set_useHandCursor( bool value) { return mDelegate->set_useHandCursor(value);}
		Dynamic set_useHandCursor_dyn() { return mDelegate->set_useHandCursor_dyn();}
		bool hitTest( Float stageX,Float stageY) { return mDelegate->hitTest(stageX,stageY);}
		Dynamic hitTest_dyn() { return mDelegate->hitTest_dyn();}
		Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive) { return mDelegate->invalidate(type,recursive);}
		Dynamic invalidate_dyn() { return mDelegate->invalidate_dyn();}
		Void dispose( ) { return mDelegate->dispose();}
		Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}
		Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference) { return mDelegate->addEventListener(type,listener,useCapture,priority,useWeakReference);}
		Dynamic addEventListener_dyn() { return mDelegate->addEventListener_dyn();}
		bool dispatchEvent( ::openfl::_legacy::events::Event event) { return mDelegate->dispatchEvent(event);}
		Dynamic dispatchEvent_dyn() { return mDelegate->dispatchEvent_dyn();}
		bool hasEventListener( ::String type) { return mDelegate->hasEventListener(type);}
		Dynamic hasEventListener_dyn() { return mDelegate->hasEventListener_dyn();}
		Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture) { return mDelegate->removeEventListener(type,listener,useCapture);}
		Dynamic removeEventListener_dyn() { return mDelegate->removeEventListener_dyn();}
		bool willTrigger( ::String type) { return mDelegate->willTrigger(type);}
		Dynamic willTrigger_dyn() { return mDelegate->willTrigger_dyn();}
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject */ 
