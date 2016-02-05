#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IDataComponent_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDataComponent_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::haxe::ui::toolkit::data::IDataSource get_dataSource( )=0;
virtual Dynamic get_dataSource_dyn()=0;
		virtual ::haxe::ui::toolkit::data::IDataSource set_dataSource( ::haxe::ui::toolkit::data::IDataSource value)=0;
virtual Dynamic set_dataSource_dyn()=0;
};



template<typename IMPL>
class IDataComponent_delegate_ : public IDataComponent_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDataComponent_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::haxe::ui::toolkit::data::IDataSource get_dataSource( ) { return mDelegate->get_dataSource();}
		Dynamic get_dataSource_dyn() { return mDelegate->get_dataSource_dyn();}
		::haxe::ui::toolkit::data::IDataSource set_dataSource( ::haxe::ui::toolkit::data::IDataSource value) { return mDelegate->set_dataSource(value);}
		Dynamic set_dataSource_dyn() { return mDelegate->set_dataSource_dyn();}
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent */ 
