#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller
#define INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,AsyncThreadCaller)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,IRunnable)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{


class HXCPP_CLASS_ATTRIBUTES  AsyncThreadCaller_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef AsyncThreadCaller_obj OBJ_;
		AsyncThreadCaller_obj();
		Void __construct(::haxe::ui::toolkit::util::pseudothreads::IRunnable runnable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AsyncThreadCaller_obj > __new(::haxe::ui::toolkit::util::pseudothreads::IRunnable runnable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AsyncThreadCaller_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AsyncThreadCaller","\x31","\x6c","\xf3","\x62"); }

		Float _workerExitTime;
		::haxe::ui::toolkit::util::pseudothreads::IRunnable _runnableWorker;
		Dynamic _data;
		int _runs;
		Float _startTime;
		Float _endTime;
		bool _cancel;
		virtual Void start( );
		Dynamic start_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual bool needToExit( );
		Dynamic needToExit_dyn();

		virtual Void run( ::openfl::_legacy::events::Event event);
		Dynamic run_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		Dynamic data;
		virtual Dynamic get_data( );
		Dynamic get_data_dyn();

		int runs;
		virtual int get_runs( );
		Dynamic get_runs_dyn();

		Float executionTime;
		virtual Float get_executionTime( );
		Dynamic get_executionTime_dyn();

		::haxe::ui::toolkit::util::pseudothreads::IRunnable worker;
		virtual ::haxe::ui::toolkit::util::pseudothreads::IRunnable get_worker( );
		Dynamic get_worker_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads

#endif /* INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller */ 
