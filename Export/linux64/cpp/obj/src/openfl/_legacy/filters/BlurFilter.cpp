#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BlurFilter
#include <openfl/_legacy/filters/BlurFilter.h>
#endif
namespace openfl{
namespace _legacy{
namespace filters{

Void BlurFilter_obj::__construct(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality)
{
HX_STACK_FRAME("openfl._legacy.filters.BlurFilter","new",0x0d0cfe88,"openfl._legacy.filters.BlurFilter.new","openfl/_legacy/filters/BlurFilter.hx",12,0x74d60905)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_blurX,"blurX")
HX_STACK_ARG(__o_blurY,"blurY")
HX_STACK_ARG(__o_quality,"quality")
Float blurX = __o_blurX.Default(((Float)4.0));
Float blurY = __o_blurY.Default(((Float)4.0));
int quality = __o_quality.Default(1);
{
	HX_STACK_LINE(14)
	super::__construct(HX_HCSTRING("BlurFilter","\xdf","\xd1","\x71","\xf3"));
	HX_STACK_LINE(16)
	this->blurX = blurX;
	HX_STACK_LINE(17)
	this->blurY = blurY;
	HX_STACK_LINE(18)
	this->quality = quality;
}
;
	return null();
}

//BlurFilter_obj::~BlurFilter_obj() { }

Dynamic BlurFilter_obj::__CreateEmpty() { return  new BlurFilter_obj; }
hx::ObjectPtr< BlurFilter_obj > BlurFilter_obj::__new(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality)
{  hx::ObjectPtr< BlurFilter_obj > _result_ = new BlurFilter_obj();
	_result_->__construct(__o_blurX,__o_blurY,__o_quality);
	return _result_;}

Dynamic BlurFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlurFilter_obj > _result_ = new BlurFilter_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::openfl::_legacy::filters::BitmapFilter BlurFilter_obj::clone( ){
	HX_STACK_FRAME("openfl._legacy.filters.BlurFilter","clone",0xd8621b85,"openfl._legacy.filters.BlurFilter.clone","openfl/_legacy/filters/BlurFilter.hx",23,0x74d60905)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	Float tmp = this->blurX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	Float tmp1 = this->blurY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	int tmp2 = this->quality;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	::openfl::_legacy::filters::BlurFilter tmp3 = ::openfl::_legacy::filters::BlurFilter_obj::__new(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	return tmp3;
}



BlurFilter_obj::BlurFilter_obj()
{
}

Dynamic BlurFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blurX") ) { return blurX; }
		if (HX_FIELD_EQ(inName,"blurY") ) { return blurY; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlurFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blurX") ) { blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { blurY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlurFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BlurFilter_obj,blurX),HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5")},
	{hx::fsFloat,(int)offsetof(BlurFilter_obj,blurY),HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5")},
	{hx::fsInt,(int)offsetof(BlurFilter_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"),
	HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlurFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlurFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class BlurFilter_obj::__mClass;

void BlurFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.filters.BlurFilter","\x96","\x5a","\x81","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlurFilter_obj >;
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
} // end namespace filters
