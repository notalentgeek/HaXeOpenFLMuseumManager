#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IComponent_obj : public ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj{
	public:
		typedef ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj super;
		typedef IComponent_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::String get_text( )=0;
		virtual Dynamic get_text_dyn()=0;
		virtual ::String set_text( ::String value)=0;
		virtual Dynamic set_text_dyn()=0;
		virtual Float get_clipWidth( )=0;
		virtual Dynamic get_clipWidth_dyn()=0;
		virtual Float set_clipWidth( Float value)=0;
		virtual Dynamic set_clipWidth_dyn()=0;
		virtual Float get_clipHeight( )=0;
		virtual Dynamic get_clipHeight_dyn()=0;
		virtual Float set_clipHeight( Float value)=0;
		virtual Dynamic set_clipHeight_dyn()=0;
		virtual bool get_clipContent( )=0;
		virtual Dynamic get_clipContent_dyn()=0;
		virtual bool set_clipContent( bool value)=0;
		virtual Dynamic set_clipContent_dyn()=0;
		virtual bool get_disabled( )=0;
		virtual Dynamic get_disabled_dyn()=0;
		virtual bool set_disabled( bool value)=0;
		virtual Dynamic set_disabled_dyn()=0;
		virtual Void addScriptlet( ::String scriptlet)=0;
		virtual Dynamic addScriptlet_dyn()=0;
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IComponent \
virtual ::String get_text( ) { return mDelegate->get_text();}  \
virtual Dynamic get_text_dyn() { return mDelegate->get_text_dyn();}  \
virtual ::String set_text( ::String value) { return mDelegate->set_text(value);}  \
virtual Dynamic set_text_dyn() { return mDelegate->set_text_dyn();}  \
virtual Float get_clipWidth( ) { return mDelegate->get_clipWidth();}  \
virtual Dynamic get_clipWidth_dyn() { return mDelegate->get_clipWidth_dyn();}  \
virtual Float set_clipWidth( Float value) { return mDelegate->set_clipWidth(value);}  \
virtual Dynamic set_clipWidth_dyn() { return mDelegate->set_clipWidth_dyn();}  \
virtual Float get_clipHeight( ) { return mDelegate->get_clipHeight();}  \
virtual Dynamic get_clipHeight_dyn() { return mDelegate->get_clipHeight_dyn();}  \
virtual Float set_clipHeight( Float value) { return mDelegate->set_clipHeight(value);}  \
virtual Dynamic set_clipHeight_dyn() { return mDelegate->set_clipHeight_dyn();}  \
virtual bool get_clipContent( ) { return mDelegate->get_clipContent();}  \
virtual Dynamic get_clipContent_dyn() { return mDelegate->get_clipContent_dyn();}  \
virtual bool set_clipContent( bool value) { return mDelegate->set_clipContent(value);}  \
virtual Dynamic set_clipContent_dyn() { return mDelegate->set_clipContent_dyn();}  \
virtual bool get_disabled( ) { return mDelegate->get_disabled();}  \
virtual Dynamic get_disabled_dyn() { return mDelegate->get_disabled_dyn();}  \
virtual bool set_disabled( bool value) { return mDelegate->set_disabled(value);}  \
virtual Dynamic set_disabled_dyn() { return mDelegate->set_disabled_dyn();}  \
virtual Void addScriptlet( ::String scriptlet) { return mDelegate->addScriptlet(scriptlet);}  \
virtual Dynamic addScriptlet_dyn() { return mDelegate->addScriptlet_dyn();}  \


template<typename IMPL>
class IComponent_delegate_ : public IComponent_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IComponent_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IComponent
		DELEGATE_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObject
		DELEGATE_haxe_ui_toolkit_core_interfaces_IEventDispatcher
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent */ 
