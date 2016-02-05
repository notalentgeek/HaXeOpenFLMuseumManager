#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IDisplayObjectContainer_obj : public ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj{
	public:
		typedef ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj super;
		typedef IDisplayObjectContainer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int get_numChildren( )=0;
virtual Dynamic get_numChildren_dyn()=0;
		virtual Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > get_children( )=0;
virtual Dynamic get_children_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::ILayout get_layout( )=0;
virtual Dynamic get_layout_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::ILayout set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value)=0;
virtual Dynamic set_layout_dyn()=0;
		virtual bool get_autoSize( )=0;
virtual Dynamic get_autoSize_dyn()=0;
		virtual bool set_autoSize( bool value)=0;
virtual Dynamic set_autoSize_dyn()=0;
		virtual int indexOfChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child)=0;
virtual Dynamic indexOfChild_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject getChildAt( int index)=0;
virtual Dynamic getChildAt_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index)=0;
virtual Dynamic addChildAt_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child)=0;
virtual Dynamic addChild_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  dispose)=0;
virtual Dynamic removeChild_dyn()=0;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChildAt( int index,hx::Null< bool >  dispose)=0;
virtual Dynamic removeChildAt_dyn()=0;
		virtual Dynamic findChild( ::String id,::hx::Class type,hx::Null< bool >  recursive)=0;
virtual Dynamic findChild_dyn()=0;
		virtual Dynamic findChildAs( ::hx::Class type)=0;
virtual Dynamic findChildAs_dyn()=0;
		virtual Void removeAllChildren( hx::Null< bool >  dispose)=0;
virtual Dynamic removeAllChildren_dyn()=0;
		virtual bool contains( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child)=0;
virtual Dynamic contains_dyn()=0;
		virtual Void setChildIndex( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index)=0;
virtual Dynamic setChildIndex_dyn()=0;
};



template<typename IMPL>
class IDisplayObjectContainer_delegate_ : public IDisplayObjectContainer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDisplayObjectContainer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		int get_numChildren( ) { return mDelegate->get_numChildren();}
		Dynamic get_numChildren_dyn() { return mDelegate->get_numChildren_dyn();}
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > get_children( ) { return mDelegate->get_children();}
		Dynamic get_children_dyn() { return mDelegate->get_children_dyn();}
		::haxe::ui::toolkit::core::interfaces::ILayout get_layout( ) { return mDelegate->get_layout();}
		Dynamic get_layout_dyn() { return mDelegate->get_layout_dyn();}
		::haxe::ui::toolkit::core::interfaces::ILayout set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value) { return mDelegate->set_layout(value);}
		Dynamic set_layout_dyn() { return mDelegate->set_layout_dyn();}
		bool get_autoSize( ) { return mDelegate->get_autoSize();}
		Dynamic get_autoSize_dyn() { return mDelegate->get_autoSize_dyn();}
		bool set_autoSize( bool value) { return mDelegate->set_autoSize(value);}
		Dynamic set_autoSize_dyn() { return mDelegate->set_autoSize_dyn();}
		int indexOfChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->indexOfChild(child);}
		Dynamic indexOfChild_dyn() { return mDelegate->indexOfChild_dyn();}
		::haxe::ui::toolkit::core::interfaces::IDisplayObject getChildAt( int index) { return mDelegate->getChildAt(index);}
		Dynamic getChildAt_dyn() { return mDelegate->getChildAt_dyn();}
		::haxe::ui::toolkit::core::interfaces::IDisplayObject addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index) { return mDelegate->addChildAt(child,index);}
		Dynamic addChildAt_dyn() { return mDelegate->addChildAt_dyn();}
		::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->addChild(child);}
		Dynamic addChild_dyn() { return mDelegate->addChild_dyn();}
		::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  dispose) { return mDelegate->removeChild(child,dispose);}
		Dynamic removeChild_dyn() { return mDelegate->removeChild_dyn();}
		::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChildAt( int index,hx::Null< bool >  dispose) { return mDelegate->removeChildAt(index,dispose);}
		Dynamic removeChildAt_dyn() { return mDelegate->removeChildAt_dyn();}
		Dynamic findChild( ::String id,::hx::Class type,hx::Null< bool >  recursive) { return mDelegate->findChild(id,type,recursive);}
		Dynamic findChild_dyn() { return mDelegate->findChild_dyn();}
		Dynamic findChildAs( ::hx::Class type) { return mDelegate->findChildAs(type);}
		Dynamic findChildAs_dyn() { return mDelegate->findChildAs_dyn();}
		Void removeAllChildren( hx::Null< bool >  dispose) { return mDelegate->removeAllChildren(dispose);}
		Dynamic removeAllChildren_dyn() { return mDelegate->removeAllChildren_dyn();}
		bool contains( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->contains(child);}
		Dynamic contains_dyn() { return mDelegate->contains_dyn();}
		Void setChildIndex( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index) { return mDelegate->setChildIndex(child,index);}
		Dynamic setChildIndex_dyn() { return mDelegate->setChildIndex_dyn();}
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

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer */ 
