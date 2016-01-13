#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_Timer
#include <openfl/_legacy/utils/Timer.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace openfl{
namespace _legacy{
namespace utils{

Void Timer_obj::__construct(Float delay,hx::Null< int >  __o_repeatCount)
{
HX_STACK_FRAME("openfl._legacy.utils.Timer","new",0x936f5b36,"openfl._legacy.utils.Timer.new","openfl/_legacy/utils/Timer.hx",21,0x3ee24e7d)
HX_STACK_THIS(this)
HX_STACK_ARG(delay,"delay")
HX_STACK_ARG(__o_repeatCount,"repeatCount")
int repeatCount = __o_repeatCount.Default(0);
{
	HX_STACK_LINE(23)
	Float tmp = delay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	Float tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	bool tmp2 = ::Math_obj::isNaN(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	if ((tmp3)){
		HX_STACK_LINE(23)
		tmp4 = (delay < (int)0);
	}
	else{
		HX_STACK_LINE(23)
		tmp4 = true;
	}
	HX_STACK_LINE(23)
	if ((tmp4)){
		HX_STACK_LINE(25)
		::openfl::errors::Error tmp5 = ::openfl::errors::Error_obj::__new(HX_HCSTRING("The delay specified is negative or not a finite number","\x42","\x5b","\x8b","\xe3"),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(29)
	super::__construct(null());
	HX_STACK_LINE(31)
	this->__delay = delay;
	HX_STACK_LINE(32)
	this->repeatCount = repeatCount;
	HX_STACK_LINE(33)
	this->currentCount = (int)0;
	HX_STACK_LINE(34)
	this->running = false;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float delay,hx::Null< int >  __o_repeatCount)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(delay,__o_repeatCount);
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Timer_obj::reset( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.Timer","reset",0x1ffcb625,"openfl._legacy.utils.Timer.reset","openfl/_legacy/utils/Timer.hx",39,0x3ee24e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		bool tmp = this->running;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		if ((tmp)){
			HX_STACK_LINE(43)
			this->stop();
		}
		HX_STACK_LINE(47)
		this->currentCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,reset,(void))

Void Timer_obj::start( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.Timer","start",0xbd3fe0b8,"openfl._legacy.utils.Timer.start","openfl/_legacy/utils/Timer.hx",52,0x3ee24e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		bool tmp = this->running;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(54)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		if ((tmp1)){
			HX_STACK_LINE(56)
			this->running = true;
			HX_STACK_LINE(57)
			Float tmp2 = this->__delay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			::haxe::Timer tmp3 = ::haxe::Timer_obj::__new(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			this->__timer = tmp3;
			HX_STACK_LINE(58)
			Dynamic tmp4 = this->timer_onTimer_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			::haxe::Timer tmp5 = this->__timer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			tmp5->run = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,start,(void))

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.Timer","stop",0x7159e06c,"openfl._legacy.utils.Timer.stop","openfl/_legacy/utils/Timer.hx",65,0x3ee24e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		this->running = false;
		HX_STACK_LINE(69)
		::haxe::Timer tmp = this->__timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(71)
			::haxe::Timer tmp2 = this->__timer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			tmp2->stop();
			HX_STACK_LINE(72)
			this->__timer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Float Timer_obj::get_delay( ){
	HX_STACK_FRAME("openfl._legacy.utils.Timer","get_delay",0xc9208330,"openfl._legacy.utils.Timer.get_delay","openfl/_legacy/utils/Timer.hx",86,0x3ee24e7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	Float tmp = this->__delay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,get_delay,return )

Float Timer_obj::set_delay( Float value){
	HX_STACK_FRAME("openfl._legacy.utils.Timer","set_delay",0xac716f3c,"openfl._legacy.utils.Timer.set_delay","openfl/_legacy/utils/Timer.hx",93,0x3ee24e7d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(95)
	this->__delay = value;
	HX_STACK_LINE(97)
	bool tmp = this->running;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	if ((tmp)){
		HX_STACK_LINE(99)
		this->stop();
		HX_STACK_LINE(100)
		this->start();
	}
	HX_STACK_LINE(104)
	Float tmp1 = this->__delay;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,set_delay,return )

Void Timer_obj::timer_onTimer( ){
{
		HX_STACK_FRAME("openfl._legacy.utils.Timer","timer_onTimer",0x6117f6c2,"openfl._legacy.utils.Timer.timer_onTimer","openfl/_legacy/utils/Timer.hx",116,0x3ee24e7d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		(this->currentCount)++;
		HX_STACK_LINE(120)
		int tmp = this->repeatCount;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		if ((tmp1)){
			HX_STACK_LINE(120)
			int tmp3 = this->currentCount;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(120)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			int tmp5 = this->repeatCount;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			tmp2 = (tmp4 >= tmp6);
		}
		else{
			HX_STACK_LINE(120)
			tmp2 = false;
		}
		HX_STACK_LINE(120)
		if ((tmp2)){
			HX_STACK_LINE(122)
			this->stop();
			HX_STACK_LINE(123)
			::String tmp3 = ::openfl::events::TimerEvent_obj::TIMER;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(123)
			::openfl::events::TimerEvent tmp4 = ::openfl::events::TimerEvent_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(123)
			this->dispatchEvent(tmp4);
			HX_STACK_LINE(124)
			::String tmp5 = ::openfl::events::TimerEvent_obj::TIMER_COMPLETE;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			::openfl::events::TimerEvent tmp6 = ::openfl::events::TimerEvent_obj::__new(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			this->dispatchEvent(tmp6);
		}
		else{
			HX_STACK_LINE(128)
			::String tmp3 = ::openfl::events::TimerEvent_obj::TIMER;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(128)
			::openfl::events::TimerEvent tmp4 = ::openfl::events::TimerEvent_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(128)
			this->dispatchEvent(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,timer_onTimer,(void))


Timer_obj::Timer_obj()
{
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(currentCount,"currentCount");
	HX_MARK_MEMBER_NAME(repeatCount,"repeatCount");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(__delay,"__delay");
	HX_MARK_MEMBER_NAME(__timer,"__timer");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentCount,"currentCount");
	HX_VISIT_MEMBER_NAME(repeatCount,"repeatCount");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(__delay,"__delay");
	HX_VISIT_MEMBER_NAME(__timer,"__timer");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == hx::paccAlways) return get_delay(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		if (HX_FIELD_EQ(inName,"__delay") ) { return __delay; }
		if (HX_FIELD_EQ(inName,"__timer") ) { return __timer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_delay") ) { return get_delay_dyn(); }
		if (HX_FIELD_EQ(inName,"set_delay") ) { return set_delay_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"repeatCount") ) { return repeatCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentCount") ) { return currentCount; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timer_onTimer") ) { return timer_onTimer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { if (inCallProp == hx::paccAlways) return set_delay(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__delay") ) { __delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__timer") ) { __timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"repeatCount") ) { repeatCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentCount") ) { currentCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentCount","\xd6","\x29","\x6f","\x91"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("repeatCount","\x74","\x93","\x8a","\x1b"));
	outFields->push(HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"));
	outFields->push(HX_HCSTRING("__delay","\x63","\x30","\x85","\x41"));
	outFields->push(HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Timer_obj,currentCount),HX_HCSTRING("currentCount","\xd6","\x29","\x6f","\x91")},
	{hx::fsInt,(int)offsetof(Timer_obj,repeatCount),HX_HCSTRING("repeatCount","\x74","\x93","\x8a","\x1b")},
	{hx::fsBool,(int)offsetof(Timer_obj,running),HX_HCSTRING("running","\xff","\x6d","\x69","\xeb")},
	{hx::fsFloat,(int)offsetof(Timer_obj,__delay),HX_HCSTRING("__delay","\x63","\x30","\x85","\x41")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Timer_obj,__timer),HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentCount","\xd6","\x29","\x6f","\x91"),
	HX_HCSTRING("repeatCount","\x74","\x93","\x8a","\x1b"),
	HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"),
	HX_HCSTRING("__delay","\x63","\x30","\x85","\x41"),
	HX_HCSTRING("__timer","\xa5","\x18","\x94","\x7a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_delay","\xda","\x33","\xd0","\x1a"),
	HX_HCSTRING("set_delay","\xe6","\x1f","\x21","\xfe"),
	HX_HCSTRING("timer_onTimer","\x6c","\x44","\x7e","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.Timer","\x44","\x48","\xb0","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
