#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{

Void Runner_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","new",0x077a25cf,"haxe.ui.toolkit.util.pseudothreads.Runner.new","haxe/ui/toolkit/util/pseudothreads/Runner.hx",3,0x1d7ff6a0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->_runningTimeShare = ((Float).6);
}
;
	return null();
}

//Runner_obj::~Runner_obj() { }

Dynamic Runner_obj::__CreateEmpty() { return  new Runner_obj; }
hx::ObjectPtr< Runner_obj > Runner_obj::__new()
{  hx::ObjectPtr< Runner_obj > _result_ = new Runner_obj();
	_result_->__construct();
	return _result_;}

Dynamic Runner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Runner_obj > _result_ = new Runner_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Runner_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::util::pseudothreads::IRunnable_obj)) return operator ::haxe::ui::toolkit::util::pseudothreads::IRunnable_obj *();
	return super::__ToInterface(inType);
}

Runner_obj::operator ::haxe::ui::toolkit::util::pseudothreads::IRunnable_obj *()
	{ return new ::haxe::ui::toolkit::util::pseudothreads::IRunnable_delegate_< Runner_obj >(this); }
Void Runner_obj::run( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","run",0x077d3cba,"haxe.ui.toolkit.util.pseudothreads.Runner.run","haxe/ui/toolkit/util/pseudothreads/Runner.hx",8,0x1d7ff6a0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,run,(void))

bool Runner_obj::get_isComplete( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_isComplete",0x206cedfd,"haxe.ui.toolkit.util.pseudothreads.Runner.get_isComplete","haxe/ui/toolkit/util/pseudothreads/Runner.hx",14,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	bool tmp = this->_isComplete;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_isComplete,return )

int Runner_obj::get_progress( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_progress",0x3975b067,"haxe.ui.toolkit.util.pseudothreads.Runner.get_progress","haxe/ui/toolkit/util/pseudothreads/Runner.hx",20,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	int tmp = this->_progress;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_progress,return )

int Runner_obj::get_total( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_total",0xe7be42ca,"haxe.ui.toolkit.util.pseudothreads.Runner.get_total","haxe/ui/toolkit/util/pseudothreads/Runner.hx",26,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	int tmp = this->_total;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_total,return )

Float Runner_obj::get_runningTimeShare( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_runningTimeShare",0xc5b7f64d,"haxe.ui.toolkit.util.pseudothreads.Runner.get_runningTimeShare","haxe/ui/toolkit/util/pseudothreads/Runner.hx",32,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	Float tmp = this->_runningTimeShare;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_runningTimeShare,return )

Dynamic Runner_obj::set_needToExit( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","set_needToExit",0x9c08f2dd,"haxe.ui.toolkit.util.pseudothreads.Runner.set_needToExit","haxe/ui/toolkit/util/pseudothreads/Runner.hx",38,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(39)
	this->_needToExit = value;
	HX_STACK_LINE(40)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,set_needToExit,return )

Dynamic Runner_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_data",0xc880a9e4,"haxe.ui.toolkit.util.pseudothreads.Runner.get_data","haxe/ui/toolkit/util/pseudothreads/Runner.hx",45,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	Dynamic tmp = this->_data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_data,return )


Runner_obj::Runner_obj()
{
}

void Runner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Runner);
	HX_MARK_MEMBER_NAME(_isComplete,"_isComplete");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(_progress,"_progress");
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(total,"total");
	HX_MARK_MEMBER_NAME(_runningTimeShare,"_runningTimeShare");
	HX_MARK_MEMBER_NAME(runningTimeShare,"runningTimeShare");
	HX_MARK_MEMBER_NAME(_needToExit,"_needToExit");
	HX_MARK_MEMBER_NAME(needToExit,"needToExit");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Runner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isComplete,"_isComplete");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(_progress,"_progress");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(total,"total");
	HX_VISIT_MEMBER_NAME(_runningTimeShare,"_runningTimeShare");
	HX_VISIT_MEMBER_NAME(runningTimeShare,"runningTimeShare");
	HX_VISIT_MEMBER_NAME(_needToExit,"_needToExit");
	HX_VISIT_MEMBER_NAME(needToExit,"needToExit");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic Runner_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return inCallProp == hx::paccAlways ? get_data() : data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"total") ) { return inCallProp == hx::paccAlways ? get_total() : total; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return inCallProp == hx::paccAlways ? get_progress() : progress; }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_progress") ) { return _progress; }
		if (HX_FIELD_EQ(inName,"get_total") ) { return get_total_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return inCallProp == hx::paccAlways ? get_isComplete() : isComplete; }
		if (HX_FIELD_EQ(inName,"needToExit") ) { return needToExit; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isComplete") ) { return _isComplete; }
		if (HX_FIELD_EQ(inName,"_needToExit") ) { return _needToExit; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_progress") ) { return get_progress_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isComplete") ) { return get_isComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"set_needToExit") ) { return set_needToExit_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"runningTimeShare") ) { return inCallProp == hx::paccAlways ? get_runningTimeShare() : runningTimeShare; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_runningTimeShare") ) { return _runningTimeShare; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_runningTimeShare") ) { return get_runningTimeShare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Runner_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"total") ) { total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_progress") ) { _progress=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needToExit") ) { if (inCallProp == hx::paccAlways) return set_needToExit(inValue);needToExit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isComplete") ) { _isComplete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_needToExit") ) { _needToExit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"runningTimeShare") ) { runningTimeShare=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_runningTimeShare") ) { _runningTimeShare=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Runner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_isComplete","\xe2","\xdf","\x00","\xcd"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("_progress","\x0c","\xef","\xc0","\xcd"));
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("_total","\x05","\x9b","\x19","\x10"));
	outFields->push(HX_HCSTRING("total","\xc4","\x53","\x32","\x14"));
	outFields->push(HX_HCSTRING("_runningTimeShare","\xf2","\xe1","\x09","\x8a"));
	outFields->push(HX_HCSTRING("runningTimeShare","\x93","\xf3","\x8e","\xf1"));
	outFields->push(HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Runner_obj,_isComplete),HX_HCSTRING("_isComplete","\xe2","\xdf","\x00","\xcd")},
	{hx::fsBool,(int)offsetof(Runner_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsInt,(int)offsetof(Runner_obj,_progress),HX_HCSTRING("_progress","\x0c","\xef","\xc0","\xcd")},
	{hx::fsInt,(int)offsetof(Runner_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{hx::fsInt,(int)offsetof(Runner_obj,_total),HX_HCSTRING("_total","\x05","\x9b","\x19","\x10")},
	{hx::fsInt,(int)offsetof(Runner_obj,total),HX_HCSTRING("total","\xc4","\x53","\x32","\x14")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_runningTimeShare),HX_HCSTRING("_runningTimeShare","\xf2","\xe1","\x09","\x8a")},
	{hx::fsFloat,(int)offsetof(Runner_obj,runningTimeShare),HX_HCSTRING("runningTimeShare","\x93","\xf3","\x8e","\xf1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runner_obj,_needToExit),HX_HCSTRING("_needToExit","\x4e","\xfc","\x7c","\x28")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runner_obj,needToExit),HX_HCSTRING("needToExit","\x2f","\x2f","\xf3","\x55")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runner_obj,_data),HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runner_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("_isComplete","\xe2","\xdf","\x00","\xcd"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("get_isComplete","\x0c","\x9b","\x6c","\x70"),
	HX_HCSTRING("_progress","\x0c","\xef","\xc0","\xcd"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("get_progress","\xb6","\xab","\x44","\x3b"),
	HX_HCSTRING("_total","\x05","\x9b","\x19","\x10"),
	HX_HCSTRING("total","\xc4","\x53","\x32","\x14"),
	HX_HCSTRING("get_total","\x1b","\xb0","\xdb","\x57"),
	HX_HCSTRING("_runningTimeShare","\xf2","\xe1","\x09","\x8a"),
	HX_HCSTRING("runningTimeShare","\x93","\xf3","\x8e","\xf1"),
	HX_HCSTRING("get_runningTimeShare","\x9c","\x58","\xf9","\x0f"),
	HX_HCSTRING("_needToExit","\x4e","\xfc","\x7c","\x28"),
	HX_HCSTRING("needToExit","\x2f","\x2f","\xf3","\x55"),
	HX_HCSTRING("set_needToExit","\xec","\x9f","\x08","\xec"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Runner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Runner_obj::__mClass,"__mClass");
};

#endif

hx::Class Runner_obj::__mClass;

void Runner_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.pseudothreads.Runner","\x5d","\x92","\x49","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Runner_obj >;
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
