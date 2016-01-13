#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IStateComponent_obj : public ::haxe::ui::toolkit::core::interfaces::IComponent_obj{
	public:
		typedef ::haxe::ui::toolkit::core::interfaces::IComponent_obj super;
		typedef IStateComponent_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::String get_state( )=0;
		virtual Dynamic get_state_dyn()=0;
		virtual ::String set_state( ::String value)=0;
		virtual Dynamic set_state_dyn()=0;
		virtual Array< ::String > get_states( )=0;
		virtual Dynamic get_states_dyn()=0;
		virtual bool hasState( ::String state)=0;
		virtual Dynamic hasState_dyn()=0;
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IStateComponent \
virtual ::String get_state( ) { return mDelegate->get_state();}  \
virtual Dynamic get_state_dyn() { return mDelegate->get_state_dyn();}  \
virtual ::String set_state( ::String value) { return mDelegate->set_state(value);}  \
virtual Dynamic set_state_dyn() { return mDelegate->set_state_dyn();}  \
virtual Array< ::String > get_states( ) { return mDelegate->get_states();}  \
virtual Dynamic get_states_dyn() { return mDelegate->get_states_dyn();}  \
virtual bool hasState( ::String state) { return mDelegate->hasState(state);}  \
virtual Dynamic hasState_dyn() { return mDelegate->hasState_dyn();}  \


template<typename IMPL>
class IStateComponent_delegate_ : public IStateComponent_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IStateComponent_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IStateComponent
		DELEGATE_haxe_ui_toolkit_core_interfaces_IComponent
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

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent */ 
