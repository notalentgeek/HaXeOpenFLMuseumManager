#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#include <haxe/ui/toolkit/hscript/ScriptUtils.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{

Void ScriptUtils_obj::__construct()
{
	return null();
}

//ScriptUtils_obj::~ScriptUtils_obj() { }

Dynamic ScriptUtils_obj::__CreateEmpty() { return  new ScriptUtils_obj; }
hx::ObjectPtr< ScriptUtils_obj > ScriptUtils_obj::__new()
{  hx::ObjectPtr< ScriptUtils_obj > _result_ = new ScriptUtils_obj();
	_result_->__construct();
	return _result_;}

Dynamic ScriptUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScriptUtils_obj > _result_ = new ScriptUtils_obj();
	_result_->__construct();
	return _result_;}

bool ScriptUtils_obj::isScript( ::String data){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptUtils","isScript",0x1bf3e49a,"haxe.ui.toolkit.hscript.ScriptUtils.isScript","haxe/ui/toolkit/hscript/ScriptUtils.hx",4,0x8cddcb77)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(5)
	int tmp = data.indexOf(HX_HCSTRING("+","\x2b","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(5)
	int tmp1 = (int)-1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(5)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(5)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(5)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(5)
	if ((tmp4)){
		HX_STACK_LINE(6)
		int tmp6 = data.indexOf(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(6)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(6)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(6)
		int tmp9 = (int)-1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(6)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(6)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(6)
		tmp5 = (tmp8 != tmp11);
	}
	else{
		HX_STACK_LINE(5)
		tmp5 = true;
	}
	HX_STACK_LINE(5)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(5)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(5)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(5)
	if ((tmp7)){
		HX_STACK_LINE(7)
		int tmp9 = data.indexOf(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(7)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(7)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(7)
		int tmp12 = (int)-1;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(7)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(7)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(7)
		tmp8 = (tmp11 != tmp14);
	}
	else{
		HX_STACK_LINE(5)
		tmp8 = true;
	}
	HX_STACK_LINE(5)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(5)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(5)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(5)
	if ((tmp10)){
		HX_STACK_LINE(8)
		int tmp12 = data.indexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(8)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(8)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(8)
		int tmp15 = (int)-1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(8)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(8)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(8)
		tmp11 = (tmp14 != tmp17);
	}
	else{
		HX_STACK_LINE(5)
		tmp11 = true;
	}
	HX_STACK_LINE(5)
	bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(5)
	bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(5)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(5)
	if ((tmp13)){
		HX_STACK_LINE(9)
		int tmp15 = data.indexOf(HX_HCSTRING("(","\x28","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(9)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(9)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(9)
		int tmp18 = (int)-1;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(9)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(9)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(9)
		tmp14 = (tmp17 != tmp20);
	}
	else{
		HX_STACK_LINE(5)
		tmp14 = true;
	}
	HX_STACK_LINE(5)
	bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(5)
	bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(5)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(5)
	if ((tmp16)){
		HX_STACK_LINE(10)
		int tmp18 = data.indexOf(HX_HCSTRING(")","\x29","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(10)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(10)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(10)
		int tmp21 = (int)-1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(10)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(10)
		int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(10)
		tmp17 = (tmp20 != tmp23);
	}
	else{
		HX_STACK_LINE(5)
		tmp17 = true;
	}
	HX_STACK_LINE(5)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(5)
	bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(5)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(5)
	if ((tmp19)){
		HX_STACK_LINE(11)
		int tmp21 = data.indexOf(HX_HCSTRING("[","\x5b","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(11)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(11)
		int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(11)
		int tmp24 = (int)-1;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(11)
		int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(11)
		int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(11)
		tmp20 = (tmp23 != tmp26);
	}
	else{
		HX_STACK_LINE(5)
		tmp20 = true;
	}
	HX_STACK_LINE(5)
	bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(5)
	bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(5)
	if ((tmp21)){
		HX_STACK_LINE(12)
		int tmp23 = data.indexOf(HX_HCSTRING("]","\x5d","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(12)
		int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(12)
		tmp22 = (tmp24 != (int)-1);
	}
	else{
		HX_STACK_LINE(5)
		tmp22 = true;
	}
	HX_STACK_LINE(5)
	if ((tmp22)){
		HX_STACK_LINE(13)
		return true;
	}
	HX_STACK_LINE(15)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScriptUtils_obj,isScript,return )

bool ScriptUtils_obj::isCssException( ::String name){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptUtils","isCssException",0x70b7c7db,"haxe.ui.toolkit.hscript.ScriptUtils.isCssException","haxe/ui/toolkit/hscript/ScriptUtils.hx",18,0x8cddcb77)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(19)
	bool tmp = (name == HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(19)
	if ((tmp2)){
		HX_STACK_LINE(20)
		tmp3 = (name == HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	}
	else{
		HX_STACK_LINE(19)
		tmp3 = true;
	}
	HX_STACK_LINE(19)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(19)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(19)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(19)
	if ((tmp5)){
		HX_STACK_LINE(21)
		tmp6 = (name == HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80"));
	}
	else{
		HX_STACK_LINE(19)
		tmp6 = true;
	}
	HX_STACK_LINE(19)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(19)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(19)
	if ((tmp7)){
		HX_STACK_LINE(22)
		tmp8 = (name == HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	}
	else{
		HX_STACK_LINE(19)
		tmp8 = true;
	}
	HX_STACK_LINE(19)
	if ((tmp8)){
		HX_STACK_LINE(23)
		return true;
	}
	HX_STACK_LINE(25)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScriptUtils_obj,isCssException,return )


ScriptUtils_obj::ScriptUtils_obj()
{
}

bool ScriptUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isScript") ) { outValue = isScript_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isCssException") ) { outValue = isCssException_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptUtils_obj::__mClass,"__mClass");
};

#endif

hx::Class ScriptUtils_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("isScript","\x95","\xe9","\xc9","\x9f"),
	HX_HCSTRING("isCssException","\x16","\x3b","\x74","\x94"),
	::String(null()) };

void ScriptUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.hscript.ScriptUtils","\x09","\xda","\xc9","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ScriptUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ScriptUtils_obj >;
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
} // end namespace hscript
