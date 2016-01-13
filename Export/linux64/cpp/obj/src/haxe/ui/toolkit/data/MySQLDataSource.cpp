#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_MySQLDataSource
#include <haxe/ui/toolkit/data/MySQLDataSource.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{

Void MySQLDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.MySQLDataSource","new",0x035ebc17,"haxe.ui.toolkit.data.MySQLDataSource.new","haxe/ui/toolkit/data/MySQLDataSource.hx",15,0x526684f9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//MySQLDataSource_obj::~MySQLDataSource_obj() { }

Dynamic MySQLDataSource_obj::__CreateEmpty() { return  new MySQLDataSource_obj; }
hx::ObjectPtr< MySQLDataSource_obj > MySQLDataSource_obj::__new()
{  hx::ObjectPtr< MySQLDataSource_obj > _result_ = new MySQLDataSource_obj();
	_result_->__construct();
	return _result_;}

Dynamic MySQLDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MySQLDataSource_obj > _result_ = new MySQLDataSource_obj();
	_result_->__construct();
	return _result_;}


MySQLDataSource_obj::MySQLDataSource_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MySQLDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MySQLDataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class MySQLDataSource_obj::__mClass;

void MySQLDataSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.data.MySQLDataSource","\xa5","\x64","\x03","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MySQLDataSource_obj >;
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
} // end namespace data
