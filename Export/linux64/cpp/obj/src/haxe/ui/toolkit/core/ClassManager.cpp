#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ComponentRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ComponentRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_DataSourceRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/DataSourceRegistryEntry.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void ClassManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","new",0x99f32294,"haxe.ui.toolkit.core.ClassManager.new","haxe/ui/toolkit/core/ClassManager.hx",21,0xd34ec19c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->registerDefaults();
}
;
	return null();
}

//ClassManager_obj::~ClassManager_obj() { }

Dynamic ClassManager_obj::__CreateEmpty() { return  new ClassManager_obj; }
hx::ObjectPtr< ClassManager_obj > ClassManager_obj::__new()
{  hx::ObjectPtr< ClassManager_obj > _result_ = new ClassManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic ClassManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClassManager_obj > _result_ = new ClassManager_obj();
	_result_->__construct();
	return _result_;}

Void ClassManager_obj::registerDefaults( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDefaults",0x4d472b61,"haxe.ui.toolkit.core.ClassManager.registerDefaults","haxe/ui/toolkit/core/ClassManager.hx",24,0xd34ec19c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClassManager_obj,registerDefaults,(void))

::String ClassManager_obj::getComponentClassName( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","getComponentClassName",0x37577390,"haxe.ui.toolkit.core.ClassManager.getComponentClassName","haxe/ui/toolkit/core/ClassManager.hx",33,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(34)
	::haxe::ds::StringMap tmp = this->componentClassMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	if ((tmp1)){
		HX_STACK_LINE(35)
		return null();
	}
	HX_STACK_LINE(38)
	::String key = simpleName;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(40)
	::haxe::ds::StringMap tmp2 = this->componentClassMap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	::String tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry entry = tmp4;		HX_STACK_VAR(entry,"entry");
	HX_STACK_LINE(41)
	bool tmp5 = (entry == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	if ((tmp5)){
		HX_STACK_LINE(42)
		return null();
	}
	HX_STACK_LINE(44)
	::String tmp6 = entry->className;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,getComponentClassName,return )

Void ClassManager_obj::registerComponentClass( ::hx::Class cls,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerComponentClass",0x60670a4a,"haxe.ui.toolkit.core.ClassManager.registerComponentClass","haxe/ui/toolkit/core/ClassManager.hx",47,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(48)
		::hx::Class tmp = cls;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::String className = tmp1;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(49)
		::String tmp2 = className;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::String tmp3 = simpleName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		this->registerComponentClassName(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerComponentClass,(void))

Void ClassManager_obj::registerComponentClassName( ::String className,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerComponentClassName",0xf13395b5,"haxe.ui.toolkit.core.ClassManager.registerComponentClassName","haxe/ui/toolkit/core/ClassManager.hx",52,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(53)
		::haxe::ds::StringMap tmp = this->componentClassMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		if ((tmp1)){
			HX_STACK_LINE(54)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			this->componentClassMap = tmp2;
		}
		HX_STACK_LINE(57)
		::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry tmp2 = ::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(58)
		entry->simpleName = simpleName;
		HX_STACK_LINE(59)
		entry->className = className;
		HX_STACK_LINE(60)
		::haxe::ds::StringMap tmp3 = this->componentClassMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		::String tmp4 = simpleName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry tmp5 = entry;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		tmp3->set(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerComponentClassName,(void))

bool ClassManager_obj::hasDataSourceClass( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","hasDataSourceClass",0xbca8a165,"haxe.ui.toolkit.core.ClassManager.hasDataSourceClass","haxe/ui/toolkit/core/ClassManager.hx",68,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(69)
	::haxe::ds::StringMap tmp = this->dataSourceClassMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	if ((tmp1)){
		HX_STACK_LINE(70)
		return false;
	}
	HX_STACK_LINE(73)
	::haxe::ds::StringMap tmp2 = this->dataSourceClassMap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	::String tmp3 = simpleName;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(73)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,hasDataSourceClass,return )

::String ClassManager_obj::getDataSourceClassName( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","getDataSourceClassName",0xf8224a94,"haxe.ui.toolkit.core.ClassManager.getDataSourceClassName","haxe/ui/toolkit/core/ClassManager.hx",76,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(77)
	::haxe::ds::StringMap tmp = this->dataSourceClassMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	if ((tmp1)){
		HX_STACK_LINE(78)
		return null();
	}
	HX_STACK_LINE(81)
	::haxe::ds::StringMap tmp2 = this->dataSourceClassMap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	::String tmp3 = simpleName;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry entry = tmp4;		HX_STACK_VAR(entry,"entry");
	HX_STACK_LINE(82)
	bool tmp5 = (entry == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(82)
	if ((tmp5)){
		HX_STACK_LINE(83)
		return null();
	}
	HX_STACK_LINE(86)
	::String tmp6 = entry->className;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(86)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,getDataSourceClassName,return )

Void ClassManager_obj::registerDataSourceClass( ::hx::Class cls,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDataSourceClass",0xf4256864,"haxe.ui.toolkit.core.ClassManager.registerDataSourceClass","haxe/ui/toolkit/core/ClassManager.hx",89,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(90)
		::hx::Class tmp = cls;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		::String className = tmp1;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(91)
		::String tmp2 = className;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		::String tmp3 = simpleName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		this->registerDataSourceClassName(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerDataSourceClass,(void))

Void ClassManager_obj::registerDataSourceClassName( ::String className,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDataSourceClassName",0xdee408cf,"haxe.ui.toolkit.core.ClassManager.registerDataSourceClassName","haxe/ui/toolkit/core/ClassManager.hx",94,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(95)
		::haxe::ds::StringMap tmp = this->dataSourceClassMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(96)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			this->dataSourceClassMap = tmp2;
		}
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry tmp2 = ::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(100)
		entry->simpleName = simpleName;
		HX_STACK_LINE(101)
		entry->className = className;
		HX_STACK_LINE(102)
		::haxe::ds::StringMap tmp3 = this->dataSourceClassMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		::String tmp4 = simpleName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry tmp5 = entry;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		tmp3->set(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerDataSourceClassName,(void))

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::_instance;

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::instance;

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","get_instance",0xb3019aea,"haxe.ui.toolkit.core.ClassManager.get_instance","haxe/ui/toolkit/core/ClassManager.hx",10,0xd34ec19c)
	HX_STACK_LINE(11)
	::haxe::ui::toolkit::core::ClassManager tmp = ::haxe::ui::toolkit::core::ClassManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	if ((tmp1)){
		HX_STACK_LINE(12)
		::haxe::ui::toolkit::core::ClassManager tmp2 = ::haxe::ui::toolkit::core::ClassManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(12)
		::haxe::ui::toolkit::core::ClassManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(14)
	::haxe::ui::toolkit::core::ClassManager tmp2 = ::haxe::ui::toolkit::core::ClassManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClassManager_obj,get_instance,return )


ClassManager_obj::ClassManager_obj()
{
}

void ClassManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassManager);
	HX_MARK_MEMBER_NAME(componentClassMap,"componentClassMap");
	HX_MARK_MEMBER_NAME(dataSourceClassMap,"dataSourceClassMap");
	HX_MARK_END_CLASS();
}

void ClassManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentClassMap,"componentClassMap");
	HX_VISIT_MEMBER_NAME(dataSourceClassMap,"dataSourceClassMap");
}

Dynamic ClassManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"registerDefaults") ) { return registerDefaults_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentClassMap") ) { return componentClassMap; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dataSourceClassMap") ) { return dataSourceClassMap; }
		if (HX_FIELD_EQ(inName,"hasDataSourceClass") ) { return hasDataSourceClass_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getComponentClassName") ) { return getComponentClassName_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerComponentClass") ) { return registerComponentClass_dyn(); }
		if (HX_FIELD_EQ(inName,"getDataSourceClassName") ) { return getDataSourceClassName_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"registerDataSourceClass") ) { return registerDataSourceClass_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"registerComponentClassName") ) { return registerComponentClassName_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"registerDataSourceClassName") ) { return registerDataSourceClassName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ClassManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic ClassManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"componentClassMap") ) { componentClassMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dataSourceClassMap") ) { dataSourceClassMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ClassManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::core::ClassManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::core::ClassManager >(); return true; }
	}
	return false;
}

void ClassManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("componentClassMap","\x21","\x6f","\x31","\xf8"));
	outFields->push(HX_HCSTRING("dataSourceClassMap","\x09","\x1d","\x05","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ClassManager_obj,componentClassMap),HX_HCSTRING("componentClassMap","\x21","\x6f","\x31","\xf8")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ClassManager_obj,dataSourceClassMap),HX_HCSTRING("dataSourceClassMap","\x09","\x1d","\x05","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::ClassManager*/ ,(void *) &ClassManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::core::ClassManager*/ ,(void *) &ClassManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("registerDefaults","\x15","\xce","\x5c","\xae"),
	HX_HCSTRING("componentClassMap","\x21","\x6f","\x31","\xf8"),
	HX_HCSTRING("getComponentClassName","\x5c","\x84","\xd3","\x92"),
	HX_HCSTRING("registerComponentClass","\xfe","\xab","\x79","\x11"),
	HX_HCSTRING("registerComponentClassName","\x69","\x21","\xcb","\xba"),
	HX_HCSTRING("dataSourceClassMap","\x09","\x1d","\x05","\xb4"),
	HX_HCSTRING("hasDataSourceClass","\x19","\x59","\x73","\xc8"),
	HX_HCSTRING("getDataSourceClassName","\x48","\xec","\x34","\xa9"),
	HX_HCSTRING("registerDataSourceClass","\x30","\x44","\x60","\x33"),
	HX_HCSTRING("registerDataSourceClassName","\x9b","\xba","\xe6","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClassManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ClassManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ClassManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClassManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClassManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ClassManager_obj::instance,"instance");
};

#endif

hx::Class ClassManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void ClassManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.ClassManager","\xa2","\x88","\xe9","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ClassManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ClassManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClassManager_obj >;
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
