#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_TypeParser
#include <haxe/ui/toolkit/util/TypeParser.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void TypeParser_obj::__construct()
{
	return null();
}

//TypeParser_obj::~TypeParser_obj() { }

Dynamic TypeParser_obj::__CreateEmpty() { return  new TypeParser_obj; }
hx::ObjectPtr< TypeParser_obj > TypeParser_obj::__new()
{  hx::ObjectPtr< TypeParser_obj > _result_ = new TypeParser_obj();
	_result_->__construct();
	return _result_;}

Dynamic TypeParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeParser_obj > _result_ = new TypeParser_obj();
	_result_->__construct();
	return _result_;}

int TypeParser_obj::parseInt( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.TypeParser","parseInt",0x8404c487,"haxe.ui.toolkit.util.TypeParser.parseInt","haxe/ui/toolkit/util/TypeParser.hx",4,0x44bf051b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(5)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(6)
	bool tmp = (s != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	if ((tmp)){
		HX_STACK_LINE(7)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(7)
		::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7)
		s = tmp2;
		HX_STACK_LINE(8)
		::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(8)
		i = tmp4;
	}
	HX_STACK_LINE(10)
	int tmp1 = i;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParser_obj,parseInt,return )

Float TypeParser_obj::parseFloat( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.TypeParser","parseFloat",0x669a9334,"haxe.ui.toolkit.util.TypeParser.parseFloat","haxe/ui/toolkit/util/TypeParser.hx",13,0x44bf051b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(14)
	Float f = (int)0;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(15)
	bool tmp = (s != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	if ((tmp)){
		HX_STACK_LINE(16)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(16)
		s = tmp2;
		HX_STACK_LINE(17)
		::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		Float tmp4 = ::Std_obj::parseFloat(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		f = tmp4;
	}
	HX_STACK_LINE(19)
	Float tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParser_obj,parseFloat,return )

bool TypeParser_obj::parseBool( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.TypeParser","parseBool",0xfb877192,"haxe.ui.toolkit.util.TypeParser.parseBool","haxe/ui/toolkit/util/TypeParser.hx",22,0x44bf051b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(23)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(24)
	bool tmp = (s != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	if ((tmp)){
		HX_STACK_LINE(25)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		s = tmp2;
		HX_STACK_LINE(26)
		::String tmp3 = s.toLowerCase();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		s = tmp3;
		HX_STACK_LINE(27)
		bool tmp4 = (s == HX_HCSTRING("true","\x4e","\xa7","\x03","\x4d"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(27)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		if ((tmp6)){
			HX_STACK_LINE(27)
			tmp7 = (s == HX_HCSTRING("yes","\x27","\x29","\x5c","\x00"));
		}
		else{
			HX_STACK_LINE(27)
			tmp7 = true;
		}
		HX_STACK_LINE(27)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(27)
		if ((tmp8)){
			HX_STACK_LINE(27)
			tmp9 = (s == HX_HCSTRING("1","\x31","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(27)
			tmp9 = true;
		}
		HX_STACK_LINE(27)
		if ((tmp9)){
			HX_STACK_LINE(28)
			b = true;
		}
	}
	HX_STACK_LINE(31)
	bool tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParser_obj,parseBool,return )

int TypeParser_obj::parseColor( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.TypeParser","parseColor",0xae603efb,"haxe.ui.toolkit.util.TypeParser.parseColor","haxe/ui/toolkit/util/TypeParser.hx",34,0x44bf051b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(35)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(36)
	bool tmp = (s != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	if ((tmp)){
		HX_STACK_LINE(37)
		::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(37)
		::String tmp2 = ::StringTools_obj::trim(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(37)
		s = tmp2;
		HX_STACK_LINE(38)
		::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		bool tmp4 = ::StringTools_obj::startsWith(tmp3,HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		if ((tmp4)){
			HX_STACK_LINE(39)
			int tmp5 = (s.length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(39)
			::String tmp6 = s.substr((int)1,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(39)
			::String tmp7 = (HX_HCSTRING("0x","\x48","\x2a","\x00","\x00") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			s = tmp7;
		}
		HX_STACK_LINE(41)
		::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		Dynamic tmp6 = ::Std_obj::parseInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		c = tmp6;
	}
	HX_STACK_LINE(43)
	int tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParser_obj,parseColor,return )


TypeParser_obj::TypeParser_obj()
{
}

bool TypeParser_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"parseInt") ) { outValue = parseInt_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseBool") ) { outValue = parseBool_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseFloat") ) { outValue = parseFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"parseColor") ) { outValue = parseColor_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeParser_obj::__mClass,"__mClass");
};

#endif

hx::Class TypeParser_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("parseInt","\x7c","\x16","\x72","\xd6"),
	HX_HCSTRING("parseFloat","\x69","\x0c","\x78","\x2c"),
	HX_HCSTRING("parseBool","\xfd","\xd5","\xc1","\xc8"),
	HX_HCSTRING("parseColor","\x30","\xb8","\x3d","\x74"),
	::String(null()) };

void TypeParser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.TypeParser","\xc3","\x9f","\x9b","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TypeParser_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TypeParser_obj >;
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
