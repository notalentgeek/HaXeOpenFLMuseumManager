#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IScrollable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IScrollable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Float get_pos( )=0;
		virtual Dynamic get_pos_dyn()=0;
		virtual Float set_pos( Float value)=0;
		virtual Dynamic set_pos_dyn()=0;
		virtual Float get_min( )=0;
		virtual Dynamic get_min_dyn()=0;
		virtual Float set_min( Float value)=0;
		virtual Dynamic set_min_dyn()=0;
		virtual Float get_max( )=0;
		virtual Dynamic get_max_dyn()=0;
		virtual Float set_max( Float value)=0;
		virtual Dynamic set_max_dyn()=0;
		virtual Float get_pageSize( )=0;
		virtual Dynamic get_pageSize_dyn()=0;
		virtual Float set_pageSize( Float value)=0;
		virtual Dynamic set_pageSize_dyn()=0;
		virtual Float get_incrementSize( )=0;
		virtual Dynamic get_incrementSize_dyn()=0;
		virtual Float set_incrementSize( Float value)=0;
		virtual Dynamic set_incrementSize_dyn()=0;
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IScrollable \
virtual Float get_pos( ) { return mDelegate->get_pos();}  \
virtual Dynamic get_pos_dyn() { return mDelegate->get_pos_dyn();}  \
virtual Float set_pos( Float value) { return mDelegate->set_pos(value);}  \
virtual Dynamic set_pos_dyn() { return mDelegate->set_pos_dyn();}  \
virtual Float get_min( ) { return mDelegate->get_min();}  \
virtual Dynamic get_min_dyn() { return mDelegate->get_min_dyn();}  \
virtual Float set_min( Float value) { return mDelegate->set_min(value);}  \
virtual Dynamic set_min_dyn() { return mDelegate->set_min_dyn();}  \
virtual Float get_max( ) { return mDelegate->get_max();}  \
virtual Dynamic get_max_dyn() { return mDelegate->get_max_dyn();}  \
virtual Float set_max( Float value) { return mDelegate->set_max(value);}  \
virtual Dynamic set_max_dyn() { return mDelegate->set_max_dyn();}  \
virtual Float get_pageSize( ) { return mDelegate->get_pageSize();}  \
virtual Dynamic get_pageSize_dyn() { return mDelegate->get_pageSize_dyn();}  \
virtual Float set_pageSize( Float value) { return mDelegate->set_pageSize(value);}  \
virtual Dynamic set_pageSize_dyn() { return mDelegate->set_pageSize_dyn();}  \
virtual Float get_incrementSize( ) { return mDelegate->get_incrementSize();}  \
virtual Dynamic get_incrementSize_dyn() { return mDelegate->get_incrementSize_dyn();}  \
virtual Float set_incrementSize( Float value) { return mDelegate->set_incrementSize(value);}  \
virtual Dynamic set_incrementSize_dyn() { return mDelegate->set_incrementSize_dyn();}  \


template<typename IMPL>
class IScrollable_delegate_ : public IScrollable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IScrollable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IScrollable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable */ 
