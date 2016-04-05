#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataManager
#include <haxe/ui/toolkit/data/DataManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Identifier
#include <haxe/ui/toolkit/util/Identifier.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{

Void DataManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","new",0x28b3b133,"haxe.ui.toolkit.data.DataManager.new","haxe/ui/toolkit/data/DataManager.hx",26,0xfa43c75d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->_dataSourceMap = tmp;
}
;
	return null();
}

//DataManager_obj::~DataManager_obj() { }

Dynamic DataManager_obj::__CreateEmpty() { return  new DataManager_obj; }
hx::ObjectPtr< DataManager_obj > DataManager_obj::__new()
{  hx::ObjectPtr< DataManager_obj > _result_ = new DataManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic DataManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataManager_obj > _result_ = new DataManager_obj();
	_result_->__construct();
	return _result_;}

Void DataManager_obj::registerDataSource( ::haxe::ui::toolkit::data::IDataSource dataSource){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","registerDataSource",0xfca11f75,"haxe.ui.toolkit.data.DataManager.registerDataSource","haxe/ui/toolkit/data/DataManager.hx",34,0xfa43c75d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dataSource,"dataSource")
		HX_STACK_LINE(35)
		::String tmp = dataSource->get_id();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::String dataSourceId = tmp;		HX_STACK_VAR(dataSourceId,"dataSourceId");
		HX_STACK_LINE(36)
		bool tmp1 = (dataSourceId == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		if ((tmp2)){
			HX_STACK_LINE(36)
			tmp3 = (dataSourceId.length == (int)0);
		}
		else{
			HX_STACK_LINE(36)
			tmp3 = true;
		}
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(37)
			::String tmp4 = ::haxe::ui::toolkit::util::Identifier_obj::guid();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			dataSourceId = tmp4;
			HX_STACK_LINE(38)
			::String tmp5 = dataSourceId;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			dataSource->set_id(tmp5);
		}
		HX_STACK_LINE(40)
		::haxe::ds::StringMap tmp4 = this->_dataSourceMap;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::String tmp5 = dataSourceId;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::data::IDataSource tmp6 = dataSource;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		tmp4->set(tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DataManager_obj,registerDataSource,(void))

::haxe::ui::toolkit::data::IDataSource DataManager_obj::getRegisteredDataSource( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","getRegisteredDataSource",0x421b26d0,"haxe.ui.toolkit.data.DataManager.getRegisteredDataSource","haxe/ui/toolkit/data/DataManager.hx",43,0xfa43c75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(44)
	::haxe::ds::StringMap tmp = this->_dataSourceMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	::haxe::ui::toolkit::data::IDataSource tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DataManager_obj,getRegisteredDataSource,return )

Array< ::haxe::ui::toolkit::data::IDataSource > DataManager_obj::get_dataSources( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","get_dataSources",0x626d6318,"haxe.ui.toolkit.data.DataManager.get_dataSources","haxe/ui/toolkit/data/DataManager.hx",47,0xfa43c75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	Array< ::haxe::ui::toolkit::data::IDataSource > arr = Array_obj< ::haxe::ui::toolkit::data::IDataSource >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(49)
	::haxe::ds::StringMap tmp = this->_dataSourceMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	for(::cpp::FastIterator_obj< ::haxe::ui::toolkit::data::IDataSource > *__it = ::cpp::CreateFastIterator< ::haxe::ui::toolkit::data::IDataSource >(tmp1);  __it->hasNext(); ){
		::haxe::ui::toolkit::data::IDataSource ds = __it->next();
		{
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::data::IDataSource tmp2 = ds;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			arr->push(tmp2);
		}
;
	}
	HX_STACK_LINE(52)
	return arr;
}


HX_DEFINE_DYNAMIC_FUNC0(DataManager_obj,get_dataSources,return )

::haxe::ui::toolkit::data::DataManager DataManager_obj::_instance;

::haxe::ui::toolkit::data::DataManager DataManager_obj::instance;

::haxe::ui::toolkit::data::DataManager DataManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","get_instance",0x08ffc06b,"haxe.ui.toolkit.data.DataManager.get_instance","haxe/ui/toolkit/data/DataManager.hx",9,0xfa43c75d)
	HX_STACK_LINE(10)
	::haxe::ui::toolkit::data::DataManager tmp = ::haxe::ui::toolkit::data::DataManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	if ((tmp1)){
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::data::DataManager tmp2 = ::haxe::ui::toolkit::data::DataManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::data::DataManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(13)
	::haxe::ui::toolkit::data::DataManager tmp2 = ::haxe::ui::toolkit::data::DataManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(13)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DataManager_obj,get_instance,return )


DataManager_obj::DataManager_obj()
{
}

void DataManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataManager);
	HX_MARK_MEMBER_NAME(_dataSourceMap,"_dataSourceMap");
	HX_MARK_MEMBER_NAME(dataSources,"dataSources");
	HX_MARK_END_CLASS();
}

void DataManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataSourceMap,"_dataSourceMap");
	HX_VISIT_MEMBER_NAME(dataSources,"dataSources");
}

Dynamic DataManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"dataSources") ) { return inCallProp == hx::paccAlways ? get_dataSources() : dataSources; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dataSourceMap") ) { return _dataSourceMap; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_dataSources") ) { return get_dataSources_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerDataSource") ) { return registerDataSource_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRegisteredDataSource") ) { return getRegisteredDataSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DataManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic DataManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"dataSources") ) { dataSources=inValue.Cast< Array< ::haxe::ui::toolkit::data::IDataSource > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dataSourceMap") ) { _dataSourceMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DataManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::data::DataManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::data::DataManager >(); return true; }
	}
	return false;
}

void DataManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dataSourceMap","\x38","\x31","\xd7","\xb2"));
	outFields->push(HX_HCSTRING("dataSources","\x2e","\x5a","\x34","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DataManager_obj,_dataSourceMap),HX_HCSTRING("_dataSourceMap","\x38","\x31","\xd7","\xb2")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::data::IDataSource >*/ ,(int)offsetof(DataManager_obj,dataSources),HX_HCSTRING("dataSources","\x2e","\x5a","\x34","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::data::DataManager*/ ,(void *) &DataManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::data::DataManager*/ ,(void *) &DataManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_dataSourceMap","\x38","\x31","\xd7","\xb2"),
	HX_HCSTRING("dataSources","\x2e","\x5a","\x34","\xfb"),
	HX_HCSTRING("registerDataSource","\xe8","\x1a","\x73","\x91"),
	HX_HCSTRING("getRegisteredDataSource","\x7d","\xca","\x45","\x26"),
	HX_HCSTRING("get_dataSources","\xc5","\x11","\x16","\xbc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DataManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(DataManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DataManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(DataManager_obj::instance,"instance");
};

#endif

hx::Class DataManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void DataManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.data.DataManager","\xc1","\x9b","\xb8","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataManager_obj::__GetStatic;
	__mClass->mSetStaticField = &DataManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DataManager_obj >;
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
