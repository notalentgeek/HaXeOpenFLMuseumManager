#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IStyleableDisplayObject_obj : public ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj{
	public:
		typedef ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj super;
		typedef IStyleableDisplayObject_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::haxe::ui::toolkit::style::Style get_baseStyle( )=0;
		virtual Dynamic get_baseStyle_dyn()=0;
		virtual ::haxe::ui::toolkit::style::Style set_baseStyle( ::haxe::ui::toolkit::style::Style value)=0;
		virtual Dynamic set_baseStyle_dyn()=0;
		virtual ::haxe::ui::toolkit::style::Style get_style( )=0;
		virtual Dynamic get_style_dyn()=0;
		virtual ::haxe::ui::toolkit::style::Style set_style( ::haxe::ui::toolkit::style::Style value)=0;
		virtual Dynamic set_style_dyn()=0;
		virtual ::String get_styleName( )=0;
		virtual Dynamic get_styleName_dyn()=0;
		virtual ::String set_styleName( ::String value)=0;
		virtual Dynamic set_styleName_dyn()=0;
		virtual ::String get_styleString( )=0;
		virtual Dynamic get_styleString_dyn()=0;
		virtual ::String set_styleString( ::String value)=0;
		virtual Dynamic set_styleString_dyn()=0;
		virtual Void storeStyle( ::String id,::haxe::ui::toolkit::style::Style value)=0;
		virtual Dynamic storeStyle_dyn()=0;
		virtual ::haxe::ui::toolkit::style::Style retrieveStyle( ::String id)=0;
		virtual Dynamic retrieveStyle_dyn()=0;
		virtual Void applyStyle( )=0;
		virtual Dynamic applyStyle_dyn()=0;
		virtual Void buildStyles( )=0;
		virtual Dynamic buildStyles_dyn()=0;
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject \
virtual ::haxe::ui::toolkit::style::Style get_baseStyle( ) { return mDelegate->get_baseStyle();}  \
virtual Dynamic get_baseStyle_dyn() { return mDelegate->get_baseStyle_dyn();}  \
virtual ::haxe::ui::toolkit::style::Style set_baseStyle( ::haxe::ui::toolkit::style::Style value) { return mDelegate->set_baseStyle(value);}  \
virtual Dynamic set_baseStyle_dyn() { return mDelegate->set_baseStyle_dyn();}  \
virtual ::haxe::ui::toolkit::style::Style get_style( ) { return mDelegate->get_style();}  \
virtual Dynamic get_style_dyn() { return mDelegate->get_style_dyn();}  \
virtual ::haxe::ui::toolkit::style::Style set_style( ::haxe::ui::toolkit::style::Style value) { return mDelegate->set_style(value);}  \
virtual Dynamic set_style_dyn() { return mDelegate->set_style_dyn();}  \
virtual ::String get_styleName( ) { return mDelegate->get_styleName();}  \
virtual Dynamic get_styleName_dyn() { return mDelegate->get_styleName_dyn();}  \
virtual ::String set_styleName( ::String value) { return mDelegate->set_styleName(value);}  \
virtual Dynamic set_styleName_dyn() { return mDelegate->set_styleName_dyn();}  \
virtual ::String get_styleString( ) { return mDelegate->get_styleString();}  \
virtual Dynamic get_styleString_dyn() { return mDelegate->get_styleString_dyn();}  \
virtual ::String set_styleString( ::String value) { return mDelegate->set_styleString(value);}  \
virtual Dynamic set_styleString_dyn() { return mDelegate->set_styleString_dyn();}  \
virtual Void storeStyle( ::String id,::haxe::ui::toolkit::style::Style value) { return mDelegate->storeStyle(id,value);}  \
virtual Dynamic storeStyle_dyn() { return mDelegate->storeStyle_dyn();}  \
virtual ::haxe::ui::toolkit::style::Style retrieveStyle( ::String id) { return mDelegate->retrieveStyle(id);}  \
virtual Dynamic retrieveStyle_dyn() { return mDelegate->retrieveStyle_dyn();}  \
virtual Void applyStyle( ) { return mDelegate->applyStyle();}  \
virtual Dynamic applyStyle_dyn() { return mDelegate->applyStyle_dyn();}  \
virtual Void buildStyles( ) { return mDelegate->buildStyles();}  \
virtual Dynamic buildStyles_dyn() { return mDelegate->buildStyles_dyn();}  \


template<typename IMPL>
class IStyleableDisplayObject_delegate_ : public IStyleableDisplayObject_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IStyleableDisplayObject_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObject
		DELEGATE_haxe_ui_toolkit_core_interfaces_IClonable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject */ 
