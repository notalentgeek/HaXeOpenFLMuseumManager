#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#include <haxe/ui/toolkit/util/StringUtil.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void StringUtil_obj::__construct()
{
	return null();
}

//StringUtil_obj::~StringUtil_obj() { }

Dynamic StringUtil_obj::__CreateEmpty() { return  new StringUtil_obj; }
hx::ObjectPtr< StringUtil_obj > StringUtil_obj::__new()
{  hx::ObjectPtr< StringUtil_obj > _result_ = new StringUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic StringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringUtil_obj > _result_ = new StringUtil_obj();
	_result_->__construct();
	return _result_;}

::String StringUtil_obj::capitalizeFirstLetter( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.StringUtil","capitalizeFirstLetter",0x3b77f3b9,"haxe.ui.toolkit.util.StringUtil.capitalizeFirstLetter","haxe/ui/toolkit/util/StringUtil.hx",4,0xc2b10721)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(5)
	::String tmp = s.substr((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5)
	::String tmp1 = tmp.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5)
	int tmp2 = s.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5)
	::String tmp3 = s.substr((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(5)
	s = tmp4;
	HX_STACK_LINE(6)
	::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(6)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeFirstLetter,return )

::String StringUtil_obj::capitalizeHyphens( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.StringUtil","capitalizeHyphens",0xd18bed44,"haxe.ui.toolkit.util.StringUtil.capitalizeHyphens","haxe/ui/toolkit/util/StringUtil.hx",9,0xc2b10721)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(10)
	::String r = s;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(11)
	int tmp = r.indexOf(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	int n = tmp;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(12)
	while((true)){
		HX_STACK_LINE(12)
		bool tmp1 = (n != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12)
		if ((tmp2)){
			HX_STACK_LINE(12)
			break;
		}
		HX_STACK_LINE(13)
		int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(13)
		::String tmp4 = r.substr((int)0,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(13)
		::String before = tmp4;		HX_STACK_VAR(before,"before");
		HX_STACK_LINE(14)
		int tmp5 = (n + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(14)
		int tmp6 = r.length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(14)
		::String tmp7 = r.substr(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(14)
		::String after = tmp7;		HX_STACK_VAR(after,"after");
		HX_STACK_LINE(15)
		::String tmp8 = before;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(15)
		::String tmp9 = after;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(15)
		::String tmp10 = ::haxe::ui::toolkit::util::StringUtil_obj::capitalizeFirstLetter(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(15)
		::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(15)
		r = tmp11;
		HX_STACK_LINE(16)
		int tmp12 = (n + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(16)
		int tmp13 = r.indexOf(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(16)
		n = tmp13;
	}
	HX_STACK_LINE(18)
	::String tmp1 = r;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeHyphens,return )


StringUtil_obj::StringUtil_obj()
{
}

bool StringUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"capitalizeHyphens") ) { outValue = capitalizeHyphens_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"capitalizeFirstLetter") ) { outValue = capitalizeFirstLetter_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class StringUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("capitalizeFirstLetter","\xea","\xb2","\x39","\xdf"),
	HX_HCSTRING("capitalizeHyphens","\xf5","\xff","\xef","\xd2"),
	::String(null()) };

void StringUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.StringUtil","\xfd","\xbd","\x46","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringUtil_obj >;
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
