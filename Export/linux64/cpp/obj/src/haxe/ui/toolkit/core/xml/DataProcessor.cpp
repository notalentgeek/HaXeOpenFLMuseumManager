#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_DataProcessor
#include <haxe/ui/toolkit/core/xml/DataProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataManager
#include <haxe/ui/toolkit/data/DataManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Types
#include <haxe/ui/toolkit/util/Types.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{

Void DataProcessor_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.xml.DataProcessor","new",0xa1fd5936,"haxe.ui.toolkit.core.xml.DataProcessor.new","haxe/ui/toolkit/core/xml/DataProcessor.hx",10,0x80a1f2bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

//DataProcessor_obj::~DataProcessor_obj() { }

Dynamic DataProcessor_obj::__CreateEmpty() { return  new DataProcessor_obj; }
hx::ObjectPtr< DataProcessor_obj > DataProcessor_obj::__new()
{  hx::ObjectPtr< DataProcessor_obj > _result_ = new DataProcessor_obj();
	_result_->__construct();
	return _result_;}

Dynamic DataProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataProcessor_obj > _result_ = new DataProcessor_obj();
	_result_->__construct();
	return _result_;}

Dynamic DataProcessor_obj::process( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.DataProcessor","process",0xd2184e45,"haxe.ui.toolkit.core.xml.DataProcessor.process","haxe/ui/toolkit/core/xml/DataProcessor.hx",13,0x80a1f2bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(14)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(15)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int tmp1 = node->nodeType;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(15)
		int tmp2 = ::Xml_obj::Element;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		if ((tmp3)){
			HX_STACK_LINE(15)
			::String tmp4 = (HX_HCSTRING("Bad node type, expected Element but found ","\xd8","\x90","\x8b","\xbb") + node->nodeType);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(15)
			HX_STACK_DO_THROW(tmp4);
		}
		HX_STACK_LINE(15)
		tmp = node->nodeName;
	}
	HX_STACK_LINE(15)
	::String tmp1 = this->stripNamespace(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	::String nodeName = tmp1;		HX_STACK_VAR(nodeName,"nodeName");
	HX_STACK_LINE(16)
	::String tmp2 = nodeName.toLowerCase();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	nodeName = tmp2;
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::core::ClassManager tmp3 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	::String tmp4 = nodeName;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	::String tmp5 = tmp3->getDataSourceClassName(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(18)
	::String className = tmp5;		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(19)
	bool tmp6 = (className != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(19)
	if ((tmp6)){
		HX_STACK_LINE(20)
		::String tmp7 = className;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(20)
		::Xml tmp8 = node;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(20)
		::haxe::ui::toolkit::data::IDataSource tmp9 = ::haxe::ui::toolkit::core::xml::DataProcessor_obj::createDataSource(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		result = tmp9;
	}
	HX_STACK_LINE(22)
	Dynamic tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(22)
	return tmp7;
}


::haxe::ui::toolkit::data::IDataSource DataProcessor_obj::createDataSource( ::String className,::Xml config){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.DataProcessor","createDataSource",0xece61e2b,"haxe.ui.toolkit.core.xml.DataProcessor.createDataSource","haxe/ui/toolkit/core/xml/DataProcessor.hx",25,0x80a1f2bb)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(26)
	::String tmp = className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::hx::Class tmp1 = ::haxe::ui::toolkit::util::Types_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::data::IDataSource tmp2 = ::Type_obj::createInstance(tmp1,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::data::IDataSource ds = tmp2;		HX_STACK_VAR(ds,"ds");
	HX_STACK_LINE(27)
	bool tmp3 = (ds != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	if ((tmp3)){
		HX_STACK_LINE(28)
		::Xml tmp4 = config;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		ds->create(tmp4);
		HX_STACK_LINE(29)
		::haxe::ui::toolkit::data::DataManager tmp5 = ::haxe::ui::toolkit::data::DataManager_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		::haxe::ui::toolkit::data::IDataSource tmp6 = ds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		tmp5->registerDataSource(tmp6);
	}
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::data::IDataSource tmp4 = ds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataProcessor_obj,createDataSource,return )


DataProcessor_obj::DataProcessor_obj()
{
}

Dynamic DataProcessor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DataProcessor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"createDataSource") ) { outValue = createDataSource_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("process","\x6f","\xa2","\x4a","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataProcessor_obj::__mClass,"__mClass");
};

#endif

hx::Class DataProcessor_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("createDataSource","\xc1","\xf4","\x00","\x53"),
	::String(null()) };

void DataProcessor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.xml.DataProcessor","\x44","\x46","\xe7","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataProcessor_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DataProcessor_obj >;
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
} // end namespace xml
