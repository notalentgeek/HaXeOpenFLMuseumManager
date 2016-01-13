#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core__ToolTipManager_ToolTipRelativeTo_Impl_
#include <haxe/ui/toolkit/core/_ToolTipManager/ToolTipRelativeTo_Impl_.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ToolTipManager{

Void ToolTipRelativeTo_Impl__obj::__construct()
{
	return null();
}

//ToolTipRelativeTo_Impl__obj::~ToolTipRelativeTo_Impl__obj() { }

Dynamic ToolTipRelativeTo_Impl__obj::__CreateEmpty() { return  new ToolTipRelativeTo_Impl__obj; }
hx::ObjectPtr< ToolTipRelativeTo_Impl__obj > ToolTipRelativeTo_Impl__obj::__new()
{  hx::ObjectPtr< ToolTipRelativeTo_Impl__obj > _result_ = new ToolTipRelativeTo_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ToolTipRelativeTo_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ToolTipRelativeTo_Impl__obj > _result_ = new ToolTipRelativeTo_Impl__obj();
	_result_->__construct();
	return _result_;}

::String ToolTipRelativeTo_Impl__obj::Cursor;

::String ToolTipRelativeTo_Impl__obj::Target;

::String ToolTipRelativeTo_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.core._ToolTipManager.ToolTipRelativeTo_Impl_","fromString",0xe81e9591,"haxe.ui.toolkit.core._ToolTipManager.ToolTipRelativeTo_Impl_.fromString","haxe/ui/toolkit/core/ToolTipManager.hx",35,0xe81a6cc7)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(36)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"))){
		HX_STACK_LINE(37)
		tmp1 = HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e");
	}
	else if (  ( _switch_1==HX_HCSTRING("target","\x51","\xf3","\xec","\x86"))){
		HX_STACK_LINE(38)
		tmp1 = HX_HCSTRING("target","\x51","\xf3","\xec","\x86");
	}
	else  {
		HX_STACK_LINE(40)
		::String tmp2 = (HX_HCSTRING("Invalid value for enum ToolTipRelativeTo: ","\x40","\xa6","\x64","\xd4") + s);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		HX_STACK_DO_THROW(tmp2);
	}
;
;
	HX_STACK_LINE(36)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipRelativeTo_Impl__obj,fromString,return )


ToolTipRelativeTo_Impl__obj::ToolTipRelativeTo_Impl__obj()
{
}

bool ToolTipRelativeTo_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ToolTipRelativeTo_Impl__obj::Cursor,HX_HCSTRING("Cursor","\xf6","\x02","\x7d","\x73")},
	{hx::fsString,(void *) &ToolTipRelativeTo_Impl__obj::Target,HX_HCSTRING("Target","\x71","\x67","\x81","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTipRelativeTo_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ToolTipRelativeTo_Impl__obj::Cursor,"Cursor");
	HX_MARK_MEMBER_NAME(ToolTipRelativeTo_Impl__obj::Target,"Target");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTipRelativeTo_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ToolTipRelativeTo_Impl__obj::Cursor,"Cursor");
	HX_VISIT_MEMBER_NAME(ToolTipRelativeTo_Impl__obj::Target,"Target");
};

#endif

hx::Class ToolTipRelativeTo_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Cursor","\xf6","\x02","\x7d","\x73"),
	HX_HCSTRING("Target","\x71","\x67","\x81","\xbb"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	::String(null()) };

void ToolTipRelativeTo_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core._ToolTipManager.ToolTipRelativeTo_Impl_","\xf8","\x10","\x39","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolTipRelativeTo_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ToolTipRelativeTo_Impl__obj >;
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

void ToolTipRelativeTo_Impl__obj::__boot()
{
	Cursor= HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e");
	Target= HX_HCSTRING("target","\x51","\xf3","\xec","\x86");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ToolTipManager
