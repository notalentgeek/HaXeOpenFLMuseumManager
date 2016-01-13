#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_XMLDataSource
#include <haxe/ui/toolkit/data/XMLDataSource.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
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

Void XMLDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.XMLDataSource","new",0x25bf772c,"haxe.ui.toolkit.data.XMLDataSource.new","haxe/ui/toolkit/data/XMLDataSource.hx",5,0xcdf09384)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//XMLDataSource_obj::~XMLDataSource_obj() { }

Dynamic XMLDataSource_obj::__CreateEmpty() { return  new XMLDataSource_obj; }
hx::ObjectPtr< XMLDataSource_obj > XMLDataSource_obj::__new()
{  hx::ObjectPtr< XMLDataSource_obj > _result_ = new XMLDataSource_obj();
	_result_->__construct();
	return _result_;}

Dynamic XMLDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XMLDataSource_obj > _result_ = new XMLDataSource_obj();
	_result_->__construct();
	return _result_;}

Void XMLDataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.XMLDataSource","create",0x8bc707b0,"haxe.ui.toolkit.data.XMLDataSource.create","haxe/ui/toolkit/data/XMLDataSource.hx",11,0xcdf09384)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(13)
		bool tmp = (config == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(13)
		if ((tmp)){
			HX_STACK_LINE(14)
			return null();
		}
		HX_STACK_LINE(17)
		::String tmp1 = config->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		this->_id = tmp1;
		HX_STACK_LINE(19)
		::String tmp2 = config->get(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		::String resource = tmp2;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(20)
		bool tmp3 = (resource != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		if ((tmp3)){
			HX_STACK_LINE(21)
			::String tmp4 = resource;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			this->createFromResource(tmp4,null());
		}
		HX_STACK_LINE(24)
		::String nodeText = null();		HX_STACK_VAR(nodeText,"nodeText");
		HX_STACK_LINE(25)
		::Xml tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				int tmp5 = config->nodeType;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(25)
				int tmp6 = ::Xml_obj::Document;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(25)
				bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(25)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(25)
				if ((tmp7)){
					HX_STACK_LINE(25)
					int tmp9 = config->nodeType;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(25)
					int tmp10 = ::Xml_obj::Element;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(25)
					int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(25)
					tmp8 = (tmp9 != tmp11);
				}
				else{
					HX_STACK_LINE(25)
					tmp8 = false;
				}
				HX_STACK_LINE(25)
				if ((tmp8)){
					HX_STACK_LINE(25)
					::String tmp9 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + config->nodeType);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(25)
					HX_STACK_DO_THROW(tmp9);
				}
			}
			HX_STACK_LINE(25)
			tmp4 = config->children->__get((int)0).StaticCast< ::Xml >();
		}
		HX_STACK_LINE(25)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		if ((tmp5)){
			HX_STACK_LINE(26)
			::String tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::Xml tmp7 = config->firstElement();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(26)
				::Xml _this = tmp7;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(26)
				::Xml tmp8 = _this;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(26)
				tmp6 = ::haxe::xml::Printer_obj::print(tmp8,null());
			}
			HX_STACK_LINE(26)
			nodeText = tmp6;
		}
		HX_STACK_LINE(29)
		bool tmp6 = (nodeText != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(29)
		if ((tmp6)){
			HX_STACK_LINE(30)
			::String tmp7 = nodeText;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(30)
			this->createFromString(tmp7,null());
		}
	}
return null();
}


Void XMLDataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.XMLDataSource","createFromString",0xa384b5ab,"haxe.ui.toolkit.data.XMLDataSource.createFromString","haxe/ui/toolkit/data/XMLDataSource.hx",37,0xcdf09384)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(38)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		if ((tmp)){
			HX_STACK_LINE(39)
			::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(39)
			::Xml tmp2 = ::Xml_obj::parse(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(39)
			::Xml xml = tmp2;		HX_STACK_VAR(xml,"xml");
			HX_STACK_LINE(40)
			bool tmp3 = (xml != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			if ((tmp3)){
				HX_STACK_LINE(41)
				::Xml tmp4 = xml->firstElement();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(41)
				Dynamic tmp5 = tmp4->elements();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(41)
				Dynamic it = tmp5;		HX_STACK_VAR(it,"it");
				HX_STACK_LINE(42)
				Dynamic tmp6 = it;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(42)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(tmp6);  __it->hasNext(); ){
					::Xml e = __it->next();
					{
						struct _Function_4_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/XMLDataSource.hx",43,0xcdf09384)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(43)
						Dynamic tmp7 = _Function_4_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(43)
						Dynamic o = tmp7;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(44)
						Dynamic tmp8 = e->attributes();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(44)
						for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp8);  __it->hasNext(); ){
							::String attrName = __it->next();
							{
								HX_STACK_LINE(45)
								Dynamic tmp9 = o;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(45)
								::String tmp10 = attrName;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(45)
								::String tmp11 = attrName;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(45)
								::String tmp12 = e->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(45)
								::Reflect_obj::setField(tmp9,tmp10,tmp12);
							}
;
						}
						HX_STACK_LINE(47)
						Dynamic tmp9 = o;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(47)
						int tmp10 = ::Reflect_obj::fields(tmp9)->length;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(47)
						bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(47)
						if ((tmp11)){
							HX_STACK_LINE(48)
							Dynamic tmp12 = o;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(48)
							this->add(tmp12);
						}
					}
;
				}
			}
		}
	}
return null();
}



XMLDataSource_obj::XMLDataSource_obj()
{
}

Dynamic XMLDataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(XMLDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLDataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class XMLDataSource_obj::__mClass;

void XMLDataSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.data.XMLDataSource","\x3a","\xb1","\x99","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< XMLDataSource_obj >;
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
