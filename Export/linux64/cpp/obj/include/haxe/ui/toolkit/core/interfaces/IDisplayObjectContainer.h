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

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer \
virtual int get_numChildren( ) { return mDelegate->get_numChildren();}  \
virtual Dynamic get_numChildren_dyn() { return mDelegate->get_numChildren_dyn();}  \
virtual Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > get_children( ) { return mDelegate->get_children();}  \
virtual Dynamic get_children_dyn() { return mDelegate->get_children_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::ILayout get_layout( ) { return mDelegate->get_layout();}  \
virtual Dynamic get_layout_dyn() { return mDelegate->get_layout_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::ILayout set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value) { return mDelegate->set_layout(value);}  \
virtual Dynamic set_layout_dyn() { return mDelegate->set_layout_dyn();}  \
virtual bool get_autoSize( ) { return mDelegate->get_autoSize();}  \
virtual Dynamic get_autoSize_dyn() { return mDelegate->get_autoSize_dyn();}  \
virtual bool set_autoSize( bool value) { return mDelegate->set_autoSize(value);}  \
virtual Dynamic set_autoSize_dyn() { return mDelegate->set_autoSize_dyn();}  \
virtual int indexOfChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->indexOfChild(child);}  \
virtual Dynamic indexOfChild_dyn() { return mDelegate->indexOfChild_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject getChildAt( int index) { return mDelegate->getChildAt(index);}  \
virtual Dynamic getChildAt_dyn() { return mDelegate->getChildAt_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index) { return mDelegate->addChildAt(child,index);}  \
virtual Dynamic addChildAt_dyn() { return mDelegate->addChildAt_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->addChild(child);}  \
virtual Dynamic addChild_dyn() { return mDelegate->addChild_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  dispose) { return mDelegate->removeChild(child,dispose);}  \
virtual Dynamic removeChild_dyn() { return mDelegate->removeChild_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChildAt( int index,hx::Null< bool >  dispose) { return mDelegate->removeChildAt(index,dispose);}  \
virtual Dynamic removeChildAt_dyn() { return mDelegate->removeChildAt_dyn();}  \
virtual Dynamic findChild( ::String id,::hx::Class type,hx::Null< bool >  recursive) { return mDelegate->findChild(id,type,recursive);}  \
virtual Dynamic findChild_dyn() { return mDelegate->findChild_dyn();}  \
virtual Dynamic findChildAs( ::hx::Class type) { return mDelegate->findChildAs(type);}  \
virtual Dynamic findChildAs_dyn() { return mDelegate->findChildAs_dyn();}  \
virtual Void removeAllChildren( hx::Null< bool >  dispose) { return mDelegate->removeAllChildren(dispose);}  \
virtual Dynamic removeAllChildren_dyn() { return mDelegate->removeAllChildren_dyn();}  \
virtual bool contains( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->contains(child);}  \
virtual Dynamic contains_dyn() { return mDelegate->contains_dyn();}  \
virtual Void setChildIndex( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index) { return mDelegate->setChildIndex(child,index);}  \
virtual Dynamic setChildIndex_dyn() { return mDelegate->setChildIndex_dyn();}  \


template<typename IMPL>
class IDisplayObjectContainer_delegate_ : public IDisplayObjectContainer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDisplayObjectContainer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObject
		DELEGATE_haxe_ui_toolkit_core_interfaces_IEventDispatcher
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer */ 
