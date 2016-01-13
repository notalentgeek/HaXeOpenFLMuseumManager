#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Identifier
#include <haxe/ui/toolkit/util/Identifier.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void Identifier_obj::__construct()
{
	return null();
}

//Identifier_obj::~Identifier_obj() { }

Dynamic Identifier_obj::__CreateEmpty() { return  new Identifier_obj; }
hx::ObjectPtr< Identifier_obj > Identifier_obj::__new()
{  hx::ObjectPtr< Identifier_obj > _result_ = new Identifier_obj();
	_result_->__construct();
	return _result_;}

Dynamic Identifier_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Identifier_obj > _result_ = new Identifier_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap Identifier_obj::_objectCount;

::String Identifier_obj::createObjectId( Dynamic instance){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Identifier","createObjectId",0xf79b4cb1,"haxe.ui.toolkit.util.Identifier.createObjectId","haxe/ui/toolkit/util/Identifier.hx",6,0x9ac865eb)
	HX_STACK_ARG(instance,"instance")
	HX_STACK_LINE(7)
	Dynamic tmp = instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	::hx::Class tmp1 = ::Type_obj::getClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(7)
	::String tmp2 = ::haxe::ui::toolkit::util::Identifier_obj::createClassId(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(7)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Identifier_obj,createObjectId,return )

::String Identifier_obj::createClassId( ::hx::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Identifier","createClassId",0x2af349dc,"haxe.ui.toolkit.util.Identifier.createClassId","haxe/ui/toolkit/util/Identifier.hx",10,0x9ac865eb)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(11)
	::hx::Class tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String className = tmp1;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(12)
	::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::util::Identifier_obj::_objectCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	::String tmp3 = className;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(12)
	Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(12)
	int c = tmp4;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(13)
	::haxe::ds::StringMap tmp5 = ::haxe::ui::toolkit::util::Identifier_obj::_objectCount;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(13)
	::String tmp6 = className;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(13)
	bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(13)
	bool tmp8 = (tmp7 == false);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(13)
	if ((tmp8)){
		HX_STACK_LINE(14)
		::haxe::ds::StringMap tmp9 = ::haxe::ui::toolkit::util::Identifier_obj::_objectCount;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(14)
		::String tmp10 = className;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(14)
		tmp9->set(tmp10,(int)-1);
		HX_STACK_LINE(15)
		c = (int)-1;
	}
	HX_STACK_LINE(17)
	(c)++;
	HX_STACK_LINE(18)
	::haxe::ds::StringMap tmp9 = ::haxe::ui::toolkit::util::Identifier_obj::_objectCount;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(18)
	::String tmp10 = className;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(18)
	int tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(18)
	tmp9->set(tmp10,tmp11);
	HX_STACK_LINE(19)
	::String tmp12 = (className + c);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(19)
	::String id = tmp12;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(20)
	::String tmp13 = id;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(20)
	return tmp13;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Identifier_obj,createClassId,return )

::String Identifier_obj::guid( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Identifier","guid",0x51175ee4,"haxe.ui.toolkit.util.Identifier.guid","haxe/ui/toolkit/util/Identifier.hx",23,0x9ac865eb)
	HX_STACK_LINE(24)
	::String tmp = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::String tmp1 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	::String tmp3 = (tmp2 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::String tmp4 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(24)
	::String tmp6 = (tmp5 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	::String tmp7 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	::String tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(24)
	::String tmp9 = (tmp8 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(24)
	::String tmp10 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(24)
	::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(24)
	::String tmp12 = (tmp11 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(24)
	::String tmp13 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(24)
	::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(24)
	::String tmp15 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(24)
	::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(24)
	::String tmp17 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(24)
	::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(24)
	return tmp18;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Identifier_obj,guid,return )

::String Identifier_obj::S4( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Identifier","S4",0xbb42ed1c,"haxe.ui.toolkit.util.Identifier.S4","haxe/ui/toolkit/util/Identifier.hx",27,0x9ac865eb)
	HX_STACK_LINE(28)
	int tmp = ::Std_obj::random((int)65536);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	int tmp1 = ((int)1 + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	int tmp2 = (tmp1 * (int)65536);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	int tmp3 = (int(tmp2) | int((int)0));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	int n = tmp3;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(29)
	int tmp4 = n;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	::String tmp5 = ::StringTools_obj::hex(tmp4,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	::String tmp6 = tmp5.substr((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Identifier_obj,S4,return )


Identifier_obj::Identifier_obj()
{
}

bool Identifier_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"S4") ) { outValue = S4_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { outValue = guid_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectCount") ) { outValue = _objectCount; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createClassId") ) { outValue = createClassId_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createObjectId") ) { outValue = createObjectId_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Identifier_obj::_objectCount,HX_HCSTRING("_objectCount","\x91","\x0f","\x9c","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Identifier_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Identifier_obj::_objectCount,"_objectCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Identifier_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Identifier_obj::_objectCount,"_objectCount");
};

#endif

hx::Class Identifier_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_objectCount","\x91","\x0f","\x9c","\x1f"),
	HX_HCSTRING("createObjectId","\x96","\xab","\x66","\xd5"),
	HX_HCSTRING("createClassId","\x97","\x0e","\xd4","\x51"),
	HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"),
	HX_HCSTRING("S4","\x81","\x48","\x00","\x00"),
	::String(null()) };

void Identifier_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.util.Identifier","\xf3","\x9c","\xc8","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Identifier_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Identifier_obj >;
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

void Identifier_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/util/Identifier.hx",4,0x9ac865eb)
		{
			HX_STACK_LINE(4)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(4)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(4)
			return tmp1;
		}
		return null();
	}
};
	_objectCount= _Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
