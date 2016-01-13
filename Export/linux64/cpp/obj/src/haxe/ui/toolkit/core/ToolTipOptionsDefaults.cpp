#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipManager
#include <haxe/ui/toolkit/core/ToolTipManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ToolTipOptionsDefaults
#include <haxe/ui/toolkit/core/ToolTipOptionsDefaults.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void ToolTipOptionsDefaults_obj::__construct()
{
	return null();
}

//ToolTipOptionsDefaults_obj::~ToolTipOptionsDefaults_obj() { }

Dynamic ToolTipOptionsDefaults_obj::__CreateEmpty() { return  new ToolTipOptionsDefaults_obj; }
hx::ObjectPtr< ToolTipOptionsDefaults_obj > ToolTipOptionsDefaults_obj::__new()
{  hx::ObjectPtr< ToolTipOptionsDefaults_obj > _result_ = new ToolTipOptionsDefaults_obj();
	_result_->__construct();
	return _result_;}

Dynamic ToolTipOptionsDefaults_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ToolTipOptionsDefaults_obj > _result_ = new ToolTipOptionsDefaults_obj();
	_result_->__construct();
	return _result_;}

Void ToolTipOptionsDefaults_obj::applyDefaults( Dynamic to){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ToolTipOptionsDefaults","applyDefaults",0x23aae6ec,"haxe.ui.toolkit.core.ToolTipOptionsDefaults.applyDefaults","haxe/ui/toolkit/core/ToolTipManager.hx",57,0xe81a6cc7)
		HX_STACK_ARG(to,"to")
		HX_STACK_LINE(58)
		bool tmp = (to->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		if ((tmp)){
			HX_STACK_LINE(58)
			tmp1 = to->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::core::ToolTipManager tmp2 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			tmp1 = tmp2->defaults->__Field(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"), hx::paccDynamic );
		}
		HX_STACK_LINE(58)
		to->__FieldRef(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")) = tmp1;
		HX_STACK_LINE(59)
		bool tmp2 = (to->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		if ((tmp2)){
			HX_STACK_LINE(59)
			tmp3 = to->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::core::ToolTipManager tmp4 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			tmp3 = tmp4->defaults->__Field(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2"), hx::paccDynamic );
		}
		HX_STACK_LINE(59)
		to->__FieldRef(HX_HCSTRING("relativeTo","\x67","\xd1","\x16","\xe2")) = tmp3;
		HX_STACK_LINE(60)
		bool tmp4 = (to->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		if ((tmp4)){
			HX_STACK_LINE(60)
			tmp5 = to->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::ToolTipManager tmp6 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			tmp5 = tmp6->defaults->__Field(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"), hx::paccDynamic );
		}
		HX_STACK_LINE(60)
		to->__FieldRef(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05")) = tmp5;
		HX_STACK_LINE(61)
		bool tmp6 = (to->__Field(HX_HCSTRING("autoHide","\xd1","\x23","\x34","\x28"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		if ((tmp6)){
			HX_STACK_LINE(61)
			tmp7 = to->__Field(HX_HCSTRING("autoHide","\xd1","\x23","\x34","\x28"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(61)
			tmp7 = true;
		}
		HX_STACK_LINE(61)
		to->__FieldRef(HX_HCSTRING("autoHide","\xd1","\x23","\x34","\x28")) = tmp7;
		HX_STACK_LINE(62)
		bool tmp8 = (to->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		if ((tmp8)){
			HX_STACK_LINE(62)
			tmp9 = to->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::core::ToolTipManager tmp10 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			tmp9 = tmp10->defaults->__Field(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"), hx::paccDynamic );
		}
		HX_STACK_LINE(62)
		to->__FieldRef(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")) = tmp9;
		HX_STACK_LINE(63)
		bool tmp10 = (to->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(63)
		Dynamic tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(63)
		if ((tmp10)){
			HX_STACK_LINE(63)
			tmp11 = to->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::core::ToolTipManager tmp12 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			tmp11 = tmp12->defaults->__Field(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"), hx::paccDynamic );
		}
		HX_STACK_LINE(63)
		to->__FieldRef(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")) = tmp11;
		HX_STACK_LINE(64)
		bool tmp12 = (to->__Field(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(64)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(64)
		if ((tmp12)){
			HX_STACK_LINE(64)
			tmp13 = to->__Field(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(64)
			::haxe::ui::toolkit::core::ToolTipManager tmp14 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(64)
			tmp13 = tmp14->defaults->__Field(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"), hx::paccDynamic );
		}
		HX_STACK_LINE(64)
		to->__FieldRef(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")) = tmp13;
		HX_STACK_LINE(65)
		bool tmp14 = (to->__Field(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(65)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(65)
		if ((tmp14)){
			HX_STACK_LINE(65)
			tmp15 = to->__Field(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::core::ToolTipManager tmp16 = ::haxe::ui::toolkit::core::ToolTipManager_obj::get_instance();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(65)
			tmp15 = tmp16->defaults->__Field(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9"), hx::paccDynamic );
		}
		HX_STACK_LINE(65)
		to->__FieldRef(HX_HCSTRING("follow","\x71","\x91","\x96","\xf9")) = tmp15;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipOptionsDefaults_obj,applyDefaults,(void))


ToolTipOptionsDefaults_obj::ToolTipOptionsDefaults_obj()
{
}

bool ToolTipOptionsDefaults_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"applyDefaults") ) { outValue = applyDefaults_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTipOptionsDefaults_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTipOptionsDefaults_obj::__mClass,"__mClass");
};

#endif

hx::Class ToolTipOptionsDefaults_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("applyDefaults","\x20","\x30","\xcf","\xef"),
	::String(null()) };

void ToolTipOptionsDefaults_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.ToolTipOptionsDefaults","\x3a","\x0a","\x37","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolTipOptionsDefaults_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ToolTipOptionsDefaults_obj >;
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
} // end namespace core
