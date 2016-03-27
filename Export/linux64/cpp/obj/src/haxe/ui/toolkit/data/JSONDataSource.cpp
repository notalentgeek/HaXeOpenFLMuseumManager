#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_JSONDataSource
#include <haxe/ui/toolkit/data/JSONDataSource.h>
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

Void JSONDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.JSONDataSource","new",0xa178a7a1,"haxe.ui.toolkit.data.JSONDataSource.new","haxe/ui/toolkit/data/JSONDataSource.hx",8,0x9c8b6d2f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//JSONDataSource_obj::~JSONDataSource_obj() { }

Dynamic JSONDataSource_obj::__CreateEmpty() { return  new JSONDataSource_obj; }
hx::ObjectPtr< JSONDataSource_obj > JSONDataSource_obj::__new()
{  hx::ObjectPtr< JSONDataSource_obj > _result_ = new JSONDataSource_obj();
	_result_->__construct();
	return _result_;}

Dynamic JSONDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JSONDataSource_obj > _result_ = new JSONDataSource_obj();
	_result_->__construct();
	return _result_;}

Void JSONDataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.JSONDataSource","create",0x7141ce5b,"haxe.ui.toolkit.data.JSONDataSource.create","haxe/ui/toolkit/data/JSONDataSource.hx",14,0x9c8b6d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(16)
		bool tmp = (config == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		if ((tmp)){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(20)
		::String tmp1 = config->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		this->_id = tmp1;
		HX_STACK_LINE(22)
		::String tmp2 = config->get(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		::String resource = tmp2;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(23)
		bool tmp3 = (resource != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		if ((tmp3)){
			HX_STACK_LINE(24)
			::String tmp4 = resource;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			this->createFromResource(tmp4,null());
		}
		HX_STACK_LINE(27)
		::String nodeText = null();		HX_STACK_VAR(nodeText,"nodeText");
		HX_STACK_LINE(28)
		::Xml tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				int tmp5 = config->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(28)
				int tmp6 = ::Xml_obj::Document;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(28)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(28)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(28)
				if ((tmp7)){
					HX_STACK_LINE(28)
					int tmp9 = config->nodeType;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(28)
					int tmp10 = ::Xml_obj::Element;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(28)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(28)
					tmp8 = (tmp9 != tmp11);
				}
				else{
					HX_STACK_LINE(28)
					tmp8 = false;
				}
				HX_STACK_LINE(28)
				if ((tmp8)){
					HX_STACK_LINE(28)
					::String tmp9 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + config->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(28)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(28)
			tmp4 = config->children->__get((int)0).StaticCast< ::Xml >();
		}
		HX_STACK_LINE(28)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		if ((tmp5)){
			HX_STACK_LINE(29)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(29)
			{
				HX_STACK_LINE(29)
				::Xml tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(29)
				{
					HX_STACK_LINE(29)
					{
						HX_STACK_LINE(29)
						int tmp8 = config->nodeType;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(29)
						int tmp9 = ::Xml_obj::Document;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(29)
						bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(29)
						bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(29)
						if ((tmp10)){
							HX_STACK_LINE(29)
							int tmp12 = config->nodeType;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(29)
							int tmp13 = ::Xml_obj::Element;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(29)
							int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(29)
							tmp11 = (tmp12 != tmp14);
						}
						else{
							HX_STACK_LINE(29)
							tmp11 = false;
						}
						HX_STACK_LINE(29)
						if ((tmp11)){
							HX_STACK_LINE(29)
							::String tmp12 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + config->nodeType);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(29)
							HX_STACK_DO_THROW(tmp12);
						}
					}
					HX_STACK_LINE(29)
					tmp7 = config->children->__get((int)0).StaticCast< ::Xml >();
				}
				HX_STACK_LINE(29)
				::Xml _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(29)
				int tmp8 = _this->nodeType;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(29)
				int tmp9 = ::Xml_obj::Document;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(29)
				bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(29)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(29)
				if ((tmp11)){
					HX_STACK_LINE(29)
					int tmp13 = _this->nodeType;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(29)
					int tmp14 = ::Xml_obj::Element;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(29)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(29)
					tmp12 = (tmp13 == tmp15);
				}
				else{
					HX_STACK_LINE(29)
					tmp12 = true;
				}
				HX_STACK_LINE(29)
				if ((tmp12)){
					HX_STACK_LINE(29)
					::String tmp13 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + _this->nodeType);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(29)
					HX_STACK_DO_THROW(tmp13);
				}
				HX_STACK_LINE(29)
				tmp6 = _this->nodeValue;
			}
			HX_STACK_LINE(29)
			nodeText = tmp6;
		}
		HX_STACK_LINE(32)
		bool tmp6 = (nodeText != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(32)
		if ((tmp6)){
			HX_STACK_LINE(33)
			::String tmp7 = nodeText;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			this->createFromString(tmp7,null());
		}
	}
return null();
}


Void JSONDataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.JSONDataSource","createFromString",0x0104a016,"haxe.ui.toolkit.data.JSONDataSource.createFromString","haxe/ui/toolkit/data/JSONDataSource.hx",40,0x9c8b6d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(41)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		if ((tmp)){
			HX_STACK_LINE(42)
			::haxe::format::JsonParser tmp1 = ::haxe::format::JsonParser_obj::__new(data);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(42)
			Dynamic tmp2 = tmp1->parseRec();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			Dynamic jsonObject = tmp2;		HX_STACK_VAR(jsonObject,"jsonObject");
			HX_STACK_LINE(43)
			cpp::ArrayBase arr = null();		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(44)
			Dynamic tmp3 = jsonObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			if ((tmp4)){
				HX_STACK_LINE(45)
				arr = hx::TCastToArray(jsonObject);
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(46)
					while((true)){
						HX_STACK_LINE(46)
						bool tmp5 = (_g < arr->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(46)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(46)
						if ((tmp6)){
							HX_STACK_LINE(46)
							break;
						}
						HX_STACK_LINE(46)
						Dynamic tmp7 = arr->__GetItem(_g);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(46)
						Dynamic o = tmp7;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(46)
						++(_g);
						HX_STACK_LINE(47)
						Dynamic tmp8 = o;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(47)
						this->add(tmp8);
					}
				}
			}
		}
	}
return null();
}



JSONDataSource_obj::JSONDataSource_obj()
{
}

Dynamic JSONDataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("createFromString","\xf7","\xab","\xa1","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JSONDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JSONDataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class JSONDataSource_obj::__mClass;

void JSONDataSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.data.JSONDataSource","\x2f","\x43","\x0a","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JSONDataSource_obj >;
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
