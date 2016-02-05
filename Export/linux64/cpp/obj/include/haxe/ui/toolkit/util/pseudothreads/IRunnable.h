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



template<typename IMPL>
class IRunnable_delegate_ : public IRunnable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IRunnable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		bool get_isComplete( ) { return mDelegate->get_isComplete();}
		Dynamic get_isComplete_dyn() { return mDelegate->get_isComplete_dyn();}
		int get_progress( ) { return mDelegate->get_progress();}
		Dynamic get_progress_dyn() { return mDelegate->get_progress_dyn();}
		int get_total( ) { return mDelegate->get_total();}
		Dynamic get_total_dyn() { return mDelegate->get_total_dyn();}
		Float get_runningTimeShare( ) { return mDelegate->get_runningTimeShare();}
		Dynamic get_runningTimeShare_dyn() { return mDelegate->get_runningTimeShare_dyn();}
		Dynamic set_needToExit( Dynamic value) { return mDelegate->set_needToExit(value);}
		Dynamic set_needToExit_dyn() { return mDelegate->set_needToExit_dyn();}
		Dynamic get_data( ) { return mDelegate->get_data();}
		Dynamic get_data_dyn() { return mDelegate->get_data_dyn();}
		Void run( ) { return mDelegate->run();}
		Dynamic run_dyn() { return mDelegate->run_dyn();}
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads

#endif /* INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable */ 
