#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#define INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,IRunnable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{


class HXCPP_CLASS_ATTRIBUTES  IRunnable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IRunnable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool get_isComplete( )=0;
		virtual Dynamic get_isComplete_dyn()=0;
		virtual int get_progress( )=0;
		virtual Dynamic get_progress_dyn()=0;
		virtual int get_total( )=0;
		virtual Dynamic get_total_dyn()=0;
		virtual Float get_runningTimeShare( )=0;
		virtual Dynamic get_runningTimeShare_dyn()=0;
		virtual Dynamic set_needToExit( Dynamic value)=0;
		virtual Dynamic set_needToExit_dyn()=0;
		virtual Dynamic get_data( )=0;
		virtual Dynamic get_data_dyn()=0;
		virtual Void run( )=0;
		virtual Dynamic run_dyn()=0;
};

#define DELEGATE_haxe_ui_toolkit_util_pseudothreads_IRunnable \
virtual bool get_isComplete( ) { return mDelegate->get_isComplete();}  \
virtual Dynamic get_isComplete_dyn() { return mDelegate->get_isComplete_dyn();}  \
virtual int get_progress( ) { return mDelegate->get_progress();}  \
virtual Dynamic get_progress_dyn() { return mDelegate->get_progress_dyn();}  \
virtual int get_total( ) { return mDelegate->get_total();}  \
virtual Dynamic get_total_dyn() { return mDelegate->get_total_dyn();}  \
virtual Float get_runningTimeShare( ) { return mDelegate->get_runningTimeShare();}  \
virtual Dynamic get_runningTimeShare_dyn() { return mDelegate->get_runningTimeShare_dyn();}  \
virtual Dynamic set_needToExit( Dynamic value) { return mDelegate->set_needToExit(value);}  \
virtual Dynamic set_needToExit_dyn() { return mDelegate->set_needToExit_dyn();}  \
virtual Dynamic get_data( ) { return mDelegate->get_data();}  \
virtual Dynamic get_data_dyn() { return mDelegate->get_data_dyn();}  \
virtual Void run( ) { return mDelegate->run();}  \
virtual Dynamic run_dyn() { return mDelegate->run_dyn();}  \


template<typename IMPL>
class IRunnable_delegate_ : public IRunnable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IRunnable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_util_pseudothreads_IRunnable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads

#endif /* INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable */ 
