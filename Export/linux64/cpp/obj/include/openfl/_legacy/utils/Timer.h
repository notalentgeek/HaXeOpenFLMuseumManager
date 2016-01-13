#ifndef INCLUDED_openfl__legacy_utils_Timer
#define INCLUDED_openfl__legacy_utils_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,utils,Timer)
namespace openfl{
namespace _legacy{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  Timer_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(Float delay,hx::Null< int >  __o_repeatCount);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl._legacy.utils.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Timer_obj > __new(Float delay,hx::Null< int >  __o_repeatCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		int currentCount;
		int repeatCount;
		bool running;
		Float __delay;
		::haxe::Timer __timer;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Float get_delay( );
		Dynamic get_delay_dyn();

		virtual Float set_delay( Float value);
		Dynamic set_delay_dyn();

		virtual Void timer_onTimer( );
		Dynamic timer_onTimer_dyn();

};

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils

#endif /* INCLUDED_openfl__legacy_utils_Timer */ 
