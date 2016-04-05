#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ClassManager{

Void ClassRegistryEntry_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core._ClassManager.ClassRegistryEntry","new",0x98d0a536,"haxe.ui.toolkit.core._ClassManager.ClassRegistryEntry.new","haxe/ui/toolkit/core/ClassManager.hx",107,0xd34ec19c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ClassRegistryEntry_obj::~ClassRegistryEntry_obj() { }

Dynamic ClassRegistryEntry_obj::__CreateEmpty() { return  new ClassRegistryEntry_obj; }
hx::ObjectPtr< ClassRegistryEntry_obj > ClassRegistryEntry_obj::__new()
{  hx::ObjectPtr< ClassRegistryEntry_obj > _result_ = new ClassRegistryEntry_obj();
	_result_->__construct();
	return _result_;}

Dynamic ClassRegistryEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClassRegistryEntry_obj > _result_ = new ClassRegistryEntry_obj();
	_result_->__construct();
	return _result_;}


ClassRegistryEntry_obj::ClassRegistryEntry_obj()
{
}

void ClassRegistryEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassRegistryEntry);
	HX_MARK_MEMBER_NAME(simpleName,"simpleName");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_END_CLASS();
}

void ClassRegistryEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(simpleName,"simpleName");
	HX_VISIT_MEMBER_NAME(className,"className");
}

Dynamic ClassRegistryEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"simpleName") ) { return simpleName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClassRegistryEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"simpleName") ) { simpleName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassRegistryEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("simpleName","\x9d","\xa3","\x32","\xfc"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ClassRegistryEntry_obj,simpleName),HX_HCSTRING("simpleName","\x9d","\xa3","\x32","\xfc")},
	{hx::fsString,(int)offsetof(ClassRegistryEntry_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("simpleName","\x9d","\xa3","\x32","\xfc"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClassRegistryEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClassRegistryEntry_obj::__mClass,"__mClass");
};

#endif

hx::Class ClassRegistryEntry_obj::__mClass;

void ClassRegistryEntry_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core._ClassManager.ClassRegistryEntry","\x44","\x92","\x24","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClassRegistryEntry_obj >;
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
