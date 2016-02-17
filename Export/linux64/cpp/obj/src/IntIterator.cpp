#include <hxcpp.h>

#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif

Void IntIterator_obj::__construct(int min,int max)
{
HX_STACK_FRAME("IntIterator","new",0x5692054f,"IntIterator.new","/usr/share/haxe/std/IntIterator.hx",44,0x062523fc)
HX_STACK_THIS(this)
HX_STACK_ARG(min,"min")
HX_STACK_ARG(max,"max")
{
	HX_STACK_LINE(45)
	this->min = min;
	HX_STACK_LINE(46)
	this->max = max;
}
;
	return null();
}

//IntIterator_obj::~IntIterator_obj() { }

Dynamic IntIterator_obj::__CreateEmpty() { return  new IntIterator_obj; }
hx::ObjectPtr< IntIterator_obj > IntIterator_obj::__new(int min,int max)
{  hx::ObjectPtr< IntIterator_obj > _result_ = new IntIterator_obj();
	_result_->__construct(min,max);
	return _result_;}

Dynamic IntIterator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntIterator_obj > _result_ = new IntIterator_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


IntIterator_obj::IntIterator_obj()
{
}

Dynamic IntIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IntIterator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("min","\x92","\x11","\x53","\x00"));
	outFields->push(HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(IntIterator_obj,min),HX_HCSTRING("min","\x92","\x11","\x53","\x00")},
	{hx::fsInt,(int)offsetof(IntIterator_obj,max),HX_HCSTRING("max","\xa4","\x0a","\x53","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class IntIterator_obj::__mClass;

void IntIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("IntIterator","\xdd","\xb1","\x1b","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntIterator_obj >;
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

