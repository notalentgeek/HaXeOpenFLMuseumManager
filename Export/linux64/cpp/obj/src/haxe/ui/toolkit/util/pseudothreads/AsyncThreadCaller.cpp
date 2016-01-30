#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller
#include <haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{

Void AsyncThreadCaller_obj::__construct(::haxe::ui::toolkit::util::pseudothreads::IRunnable runnable)
{
HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","new",0xba2783f6,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.new","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",8,0x524e847b)
HX_STACK_THIS(this)
HX_STACK_ARG(runnable,"runnable")
{
	HX_STACK_LINE(17)
	this->_cancel = false;
	HX_STACK_LINE(12)
	this->_runs = (int)0;
	HX_STACK_LINE(20)
	super::__construct(null());
	HX_STACK_LINE(21)
	this->_runnableWorker = runnable;
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::util::pseudothreads::IRunnable tmp = this->_runnableWorker;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	Dynamic tmp1 = this->needToExit_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	tmp->set_needToExit(tmp1);
}
;
	return null();
}

//AsyncThreadCaller_obj::~AsyncThreadCaller_obj() { }

Dynamic AsyncThreadCaller_obj::__CreateEmpty() { return  new AsyncThreadCaller_obj; }
hx::ObjectPtr< AsyncThreadCaller_obj > AsyncThreadCaller_obj::__new(::haxe::ui::toolkit::util::pseudothreads::IRunnable runnable)
{  hx::ObjectPtr< AsyncThreadCaller_obj > _result_ = new AsyncThreadCaller_obj();
	_result_->__construct(runnable);
	return _result_;}

Dynamic AsyncThreadCaller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncThreadCaller_obj > _result_ = new AsyncThreadCaller_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void AsyncThreadCaller_obj::start( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","start",0x20e3b978,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.start","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",25,0x524e847b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		int tmp = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		this->_startTime = tmp;
		HX_STACK_LINE(27)
		::openfl::_legacy::display::MovieClip tmp1 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::openfl::_legacy::display::Stage tmp2 = tmp1->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		::String tmp3 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		Dynamic tmp4 = this->run_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		tmp2->addEventListener(tmp3,tmp4,false,(int)100,null());
		HX_STACK_LINE(28)
		this->run(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,start,(void))

Void AsyncThreadCaller_obj::cancel( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","cancel",0x58981ba4,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.cancel","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",32,0x524e847b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		this->_cancel = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,cancel,(void))

bool AsyncThreadCaller_obj::needToExit( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","needToExit",0x95daba59,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.needToExit","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",35,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	bool tmp = this->_cancel;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	if ((tmp1)){
		HX_STACK_LINE(36)
		int tmp3 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		Float tmp5 = this->_workerExitTime;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		tmp2 = (tmp4 >= tmp6);
	}
	else{
		HX_STACK_LINE(36)
		tmp2 = true;
	}
	HX_STACK_LINE(36)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,needToExit,return )

Void AsyncThreadCaller_obj::run( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","run",0xba2a9ae1,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.run","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",39,0x524e847b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(40)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		Float tmp2 = tmp1->frameRate;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		Float tmp3 = (Float((int)1000) / Float(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		int tmp4 = ::Math_obj::floor(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		Float frameRate = tmp4;		HX_STACK_VAR(frameRate,"frameRate");
		HX_STACK_LINE(41)
		int tmp5 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		Float tmp6 = frameRate;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::util::pseudothreads::IRunnable tmp7 = this->_runnableWorker;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		Float tmp8 = tmp7->get_runningTimeShare();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		Float tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(41)
		Float tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		this->_workerExitTime = tmp10;
		HX_STACK_LINE(43)
		::haxe::ui::toolkit::util::pseudothreads::IRunnable tmp11 = this->_runnableWorker;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(43)
		tmp11->run();
		HX_STACK_LINE(44)
		(this->_runs)++;
		HX_STACK_LINE(46)
		bool tmp12 = this->_cancel;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		bool tmp13 = (tmp12 == true);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(46)
		if ((tmp13)){
			HX_STACK_LINE(47)
			int tmp14 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(47)
			this->_endTime = tmp14;
			HX_STACK_LINE(48)
			this->dispose();
			HX_STACK_LINE(49)
			::String tmp15 = ::openfl::_legacy::events::Event_obj::CANCEL;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(49)
			::openfl::_legacy::events::Event tmp16 = ::openfl::_legacy::events::Event_obj::__new(tmp15,null(),null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(49)
			this->dispatchEvent(tmp16);
		}
		else{
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::util::pseudothreads::IRunnable tmp14 = this->_runnableWorker;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(50)
			bool tmp15 = tmp14->get_isComplete();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(50)
			if ((tmp15)){
				HX_STACK_LINE(51)
				::haxe::ui::toolkit::util::pseudothreads::IRunnable tmp16 = this->_runnableWorker;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(51)
				Dynamic tmp17 = tmp16->get_data();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(51)
				this->_data = tmp17;
				HX_STACK_LINE(52)
				int tmp18 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(52)
				this->_endTime = tmp18;
				HX_STACK_LINE(53)
				this->dispose();
				HX_STACK_LINE(54)
				::String tmp19 = ::openfl::_legacy::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(54)
				::openfl::_legacy::events::Event tmp20 = ::openfl::_legacy::events::Event_obj::__new(tmp19,null(),null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(54)
				this->dispatchEvent(tmp20);
			}
			else{
				HX_STACK_LINE(56)
				::haxe::ui::toolkit::util::pseudothreads::IRunnable tmp16 = this->_runnableWorker;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(56)
				int tmp17 = tmp16->get_progress();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(56)
				::haxe::ui::toolkit::util::pseudothreads::IRunnable tmp18 = this->_runnableWorker;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(56)
				int tmp19 = tmp18->get_total();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(56)
				::openfl::events::ProgressEvent tmp20 = ::openfl::events::ProgressEvent_obj::__new(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),false,false,tmp17,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(56)
				this->dispatchEvent(tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncThreadCaller_obj,run,(void))

Void AsyncThreadCaller_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","dispose",0x7290b735,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.dispose","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",60,0x524e847b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::openfl::_legacy::display::MovieClip tmp = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		::openfl::_legacy::display::Stage tmp1 = tmp->get_stage();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Dynamic tmp3 = this->run_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		tmp1->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(62)
		this->_runnableWorker = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,dispose,(void))

Dynamic AsyncThreadCaller_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","get_data",0x66899e5d,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.get_data","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",66,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	Dynamic tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,get_data,return )

int AsyncThreadCaller_obj::get_runs( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","get_runs",0x6fd9c2fb,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.get_runs","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",71,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	int tmp = this->_runs;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,get_runs,return )

Float AsyncThreadCaller_obj::get_executionTime( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","get_executionTime",0x43e56932,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.get_executionTime","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",76,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	Float tmp = this->_endTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	Float tmp1 = this->_startTime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,get_executionTime,return )

::haxe::ui::toolkit::util::pseudothreads::IRunnable AsyncThreadCaller_obj::get_worker( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","get_worker",0xfa0d2b71,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.get_worker","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",81,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	::haxe::ui::toolkit::util::pseudothreads::IRunnable tmp = this->_runnableWorker;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,get_worker,return )


AsyncThreadCaller_obj::AsyncThreadCaller_obj()
{
}

void AsyncThreadCaller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncThreadCaller);
	HX_MARK_MEMBER_NAME(_workerExitTime,"_workerExitTime");
	HX_MARK_MEMBER_NAME(_runnableWorker,"_runnableWorker");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_runs,"_runs");
	HX_MARK_MEMBER_NAME(_startTime,"_startTime");
	HX_MARK_MEMBER_NAME(_endTime,"_endTime");
	HX_MARK_MEMBER_NAME(_cancel,"_cancel");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(runs,"runs");
	HX_MARK_MEMBER_NAME(executionTime,"executionTime");
	HX_MARK_MEMBER_NAME(worker,"worker");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AsyncThreadCaller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_workerExitTime,"_workerExitTime");
	HX_VISIT_MEMBER_NAME(_runnableWorker,"_runnableWorker");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_runs,"_runs");
	HX_VISIT_MEMBER_NAME(_startTime,"_startTime");
	HX_VISIT_MEMBER_NAME(_endTime,"_endTime");
	HX_VISIT_MEMBER_NAME(_cancel,"_cancel");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(runs,"runs");
	HX_VISIT_MEMBER_NAME(executionTime,"executionTime");
	HX_VISIT_MEMBER_NAME(worker,"worker");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AsyncThreadCaller_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return inCallProp == hx::paccAlways ? get_data() : data; }
		if (HX_FIELD_EQ(inName,"runs") ) { return inCallProp == hx::paccAlways ? get_runs() : runs; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_runs") ) { return _runs; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"worker") ) { return inCallProp == hx::paccAlways ? get_worker() : worker; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_cancel") ) { return _cancel; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_endTime") ) { return _endTime; }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_runs") ) { return get_runs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_startTime") ) { return _startTime; }
		if (HX_FIELD_EQ(inName,"needToExit") ) { return needToExit_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worker") ) { return get_worker_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionTime") ) { return inCallProp == hx::paccAlways ? get_executionTime() : executionTime; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_workerExitTime") ) { return _workerExitTime; }
		if (HX_FIELD_EQ(inName,"_runnableWorker") ) { return _runnableWorker; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_executionTime") ) { return get_executionTime_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AsyncThreadCaller_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"runs") ) { runs=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_runs") ) { _runs=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"worker") ) { worker=inValue.Cast< ::haxe::ui::toolkit::util::pseudothreads::IRunnable >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_cancel") ) { _cancel=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_endTime") ) { _endTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_startTime") ) { _startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionTime") ) { executionTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_workerExitTime") ) { _workerExitTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_runnableWorker") ) { _runnableWorker=inValue.Cast< ::haxe::ui::toolkit::util::pseudothreads::IRunnable >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AsyncThreadCaller_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void AsyncThreadCaller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_workerExitTime","\x88","\xb9","\xf2","\xdd"));
	outFields->push(HX_HCSTRING("_runnableWorker","\xda","\x36","\x70","\x9f"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("_runs","\xa7","\x96","\xc4","\xfe"));
	outFields->push(HX_HCSTRING("_startTime","\x50","\xc1","\x92","\x61"));
	outFields->push(HX_HCSTRING("_endTime","\x09","\xdf","\xd9","\x68"));
	outFields->push(HX_HCSTRING("_cancel","\x19","\xff","\xaa","\x26"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("runs","\xc8","\x7a","\xb3","\x4b"));
	outFields->push(HX_HCSTRING("executionTime","\xc5","\xcf","\x3e","\xdc"));
	outFields->push(HX_HCSTRING("worker","\x7e","\x30","\x9e","\xc9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AsyncThreadCaller_obj,_workerExitTime),HX_HCSTRING("_workerExitTime","\x88","\xb9","\xf2","\xdd")},
	{hx::fsObject /*::haxe::ui::toolkit::util::pseudothreads::IRunnable*/ ,(int)offsetof(AsyncThreadCaller_obj,_runnableWorker),HX_HCSTRING("_runnableWorker","\xda","\x36","\x70","\x9f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncThreadCaller_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsInt,(int)offsetof(AsyncThreadCaller_obj,_runs),HX_HCSTRING("_runs","\xa7","\x96","\xc4","\xfe")},
	{hx::fsFloat,(int)offsetof(AsyncThreadCaller_obj,_startTime),HX_HCSTRING("_startTime","\x50","\xc1","\x92","\x61")},
	{hx::fsFloat,(int)offsetof(AsyncThreadCaller_obj,_endTime),HX_HCSTRING("_endTime","\x09","\xdf","\xd9","\x68")},
	{hx::fsBool,(int)offsetof(AsyncThreadCaller_obj,_cancel),HX_HCSTRING("_cancel","\x19","\xff","\xaa","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncThreadCaller_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(AsyncThreadCaller_obj,runs),HX_HCSTRING("runs","\xc8","\x7a","\xb3","\x4b")},
	{hx::fsFloat,(int)offsetof(AsyncThreadCaller_obj,executionTime),HX_HCSTRING("executionTime","\xc5","\xcf","\x3e","\xdc")},
	{hx::fsObject /*::haxe::ui::toolkit::util::pseudothreads::IRunnable*/ ,(int)offsetof(AsyncThreadCaller_obj,worker),HX_HCSTRING("worker","\x7e","\x30","\x9e","\xc9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_workerExitTime","\x88","\xb9","\xf2","\xdd"),
	HX_HCSTRING("_runnableWorker","\xda","\x36","\x70","\x9f"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("_runs","\xa7","\x96","\xc4","\xfe"),
	HX_HCSTRING("_startTime","\x50","\xc1","\x92","\x61"),
	HX_HCSTRING("_endTime","\x09","\xdf","\xd9","\x68"),
	HX_HCSTRING("_cancel","\x19","\xff","\xaa","\x26"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("needToExit","\x2f","\x2f","\xf3","\x55"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("runs","\xc8","\x7a","\xb3","\x4b"),
	HX_HCSTRING("get_runs","\x51","\x36","\x6e","\xcb"),
	HX_HCSTRING("executionTime","\xc5","\xcf","\x3e","\xdc"),
	HX_HCSTRING("get_executionTime","\x1c","\xdb","\xae","\xe2"),
	HX_HCSTRING("worker","\x7e","\x30","\x9e","\xc9"),
	HX_HCSTRING("get_worker","\x47","\xa0","\x25","\xba"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncThreadCaller_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncThreadCaller_obj::__mClass,"__mClass");
};

#endif

hx::Class AsyncThreadCaller_obj::__mClass;

void AsyncThreadCaller_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","\x04","\x11","\x75","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &AsyncThreadCaller_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AsyncThreadCaller_obj >;
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

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads
