#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFocusable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFocusable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool get_allowFocus( )=0;
virtual Dynamic get_allowFocus_dyn()=0;
		virtual bool set_allowFocus( bool value)=0;
virtual Dynamic set_allowFocus_dyn()=0;
};



template<typename IMPL>
class IFocusable_delegate_ : public IFocusable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFocusable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		bool get_allowFocus( ) { return mDelegate->get_allowFocus();}
		Dynamic get_allowFocus_dyn() { return mDelegate->get_allowFocus_dyn();}
		bool set_allowFocus( bool value) { return mDelegate->set_allowFocus(value);}
		Dynamic set_allowFocus_dyn() { return mDelegate->set_allowFocus_dyn();}
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable */ 
