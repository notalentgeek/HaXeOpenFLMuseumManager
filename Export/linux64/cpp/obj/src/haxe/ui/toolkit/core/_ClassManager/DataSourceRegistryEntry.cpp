#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_DataSourceRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/DataSourceRegistryEntry.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ClassManager{

Void DataSourceRegistryEntry_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core._ClassManager.DataSourceRegistryEntry","new",0xc8cc577b,"haxe.ui.toolkit.core._ClassManager.DataSourceRegistryEntry.new","haxe/ui/toolkit/core/ClassManager.hx",119,0xd34ec19c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(119)
	super::__construct();
}
;
	return null();
}

//DataSourceRegistryEntry_obj::~DataSourceRegistryEntry_obj() { }

Dynamic DataSourceRegistryEntry_obj::__CreateEmpty() { return  new DataSourceRegistryEntry_obj; }
hx::ObjectPtr< DataSourceRegistryEntry_obj > DataSourceRegistryEntry_obj::__new()
{  hx::ObjectPtr< DataSourceRegistryEntry_obj > _result_ = new DataSourceRegistryEntry_obj();
	_result_->__construct();
	return _result_;}

Dynamic DataSourceRegistryEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataSourceRegistryEntry_obj > _result_ = new DataSourceRegistryEntry_obj();
	_result_->__construct();
	return _result_;}


DataSourceRegistryEntry_obj::DataSourceRegistryEntry_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataSourceRegistryEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataSourceRegistryEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class DataSourceRegistryEntry_obj::__mClass;

void DataSourceRegistryEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core._ClassManager.DataSourceRegistryEntry","\x09","\x7e","\x5e","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DataSourceRegistryEntry_obj >;
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
} // end namespace _ClassManager
