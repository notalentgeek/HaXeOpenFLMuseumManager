#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IClonable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IClonable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Dynamic clone( )=0;
virtual Dynamic clone_dyn()=0;
		virtual Dynamic self( )=0;
virtual Dynamic self_dyn()=0;
};



template<typename IMPL>
class IClonable_delegate_ : public IClonable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IClonable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Dynamic clone( ) { return mDelegate->clone();}
		Dynamic clone_dyn() { return mDelegate->clone_dyn();}
		Dynamic self( ) { return mDelegate->self();}
		Dynamic self_dyn() { return mDelegate->self_dyn();}
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable */ 
