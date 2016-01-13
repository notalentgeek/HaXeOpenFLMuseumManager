#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core__ToolTipManager_ToolTipPosition_Impl_
#include <haxe/ui/toolkit/core/_ToolTipManager/ToolTipPosition_Impl_.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ToolTipManager{

Void ToolTipPosition_Impl__obj::__construct()
{
	return null();
}

//ToolTipPosition_Impl__obj::~ToolTipPosition_Impl__obj() { }

Dynamic ToolTipPosition_Impl__obj::__CreateEmpty() { return  new ToolTipPosition_Impl__obj; }
hx::ObjectPtr< ToolTipPosition_Impl__obj > ToolTipPosition_Impl__obj::__new()
{  hx::ObjectPtr< ToolTipPosition_Impl__obj > _result_ = new ToolTipPosition_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ToolTipPosition_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ToolTipPosition_Impl__obj > _result_ = new ToolTipPosition_Impl__obj();
	_result_->__construct();
	return _result_;}

::String ToolTipPosition_Impl__obj::Top;

::String ToolTipPosition_Impl__obj::Bottom;

::String ToolTipPosition_Impl__obj::Left;

::String ToolTipPosition_Impl__obj::Right;

::String ToolTipPosition_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.core._ToolTipManager.ToolTipPosition_Impl_","fromString",0x0694524f,"haxe.ui.toolkit.core._ToolTipManager.ToolTipPosition_Impl_.fromString","haxe/ui/toolkit/core/ToolTipManager.hx",19,0xe81a6cc7)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(20)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("top","\x95","\x66","\x58","\x00"))){
		HX_STACK_LINE(21)
		tmp1 = HX_HCSTRING("top","\x95","\x66","\x58","\x00");
	}
	else if (  ( _switch_1==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
		HX_STACK_LINE(22)
		tmp1 = HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65");
	}
	else if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(23)
		tmp1 = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	}
	else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(24)
		tmp1 = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
	}
	else  {
		HX_STACK_LINE(26)
		::String tmp2 = (HX_HCSTRING("Invalid value for enum ToolTipPosition: ","\x42","\xb7","\xcc","\xed") + s);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		HX_STACK_DO_THROW(tmp2);
	}
;
;
	HX_STACK_LINE(20)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ToolTipPosition_Impl__obj,fromString,return )


ToolTipPosition_Impl__obj::ToolTipPosition_Impl__obj()
{
}

bool ToolTipPosition_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsString,(void *) &ToolTipPosition_Impl__obj::Top,HX_HCSTRING("Top","\x75","\x1e","\x40","\x00")},
	{hx::fsString,(void *) &ToolTipPosition_Impl__obj::Bottom,HX_HCSTRING("Bottom","\x0b","\x5b","\x0d","\x9a")},
	{hx::fsString,(void *) &ToolTipPosition_Impl__obj::Left,HX_HCSTRING("Left","\x27","\x34","\x89","\x32")},
	{hx::fsString,(void *) &ToolTipPosition_Impl__obj::Right,HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToolTipPosition_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ToolTipPosition_Impl__obj::Top,"Top");
	HX_MARK_MEMBER_NAME(ToolTipPosition_Impl__obj::Bottom,"Bottom");
	HX_MARK_MEMBER_NAME(ToolTipPosition_Impl__obj::Left,"Left");
	HX_MARK_MEMBER_NAME(ToolTipPosition_Impl__obj::Right,"Right");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToolTipPosition_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ToolTipPosition_Impl__obj::Top,"Top");
	HX_VISIT_MEMBER_NAME(ToolTipPosition_Impl__obj::Bottom,"Bottom");
	HX_VISIT_MEMBER_NAME(ToolTipPosition_Impl__obj::Left,"Left");
	HX_VISIT_MEMBER_NAME(ToolTipPosition_Impl__obj::Right,"Right");
};

#endif

hx::Class ToolTipPosition_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Top","\x75","\x1e","\x40","\x00"),
	HX_HCSTRING("Bottom","\x0b","\x5b","\x0d","\x9a"),
	HX_HCSTRING("Left","\x27","\x34","\x89","\x32"),
	HX_HCSTRING("Right","\xbc","\x7b","\x91","\x7c"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	::String(null()) };

void ToolTipPosition_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core._ToolTipManager.ToolTipPosition_Impl_","\x7a","\xbf","\xbb","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ToolTipPosition_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ToolTipPosition_Impl__obj >;
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

void ToolTipPosition_Impl__obj::__boot()
{
	Top= HX_HCSTRING("top","\x95","\x66","\x58","\x00");
	Bottom= HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65");
	Left= HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	Right= HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ToolTipManager
