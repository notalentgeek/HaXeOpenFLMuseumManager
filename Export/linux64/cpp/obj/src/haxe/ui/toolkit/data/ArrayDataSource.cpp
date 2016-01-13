#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
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

Void ArrayDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","new",0xc4ca55ee,"haxe.ui.toolkit.data.ArrayDataSource.new","haxe/ui/toolkit/data/ArrayDataSource.hx",5,0x88133302)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	this->pos = (int)0;
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	this->array = Dynamic( Array_obj<Dynamic>::__new() );
}
;
	return null();
}

//ArrayDataSource_obj::~ArrayDataSource_obj() { }

Dynamic ArrayDataSource_obj::__CreateEmpty() { return  new ArrayDataSource_obj; }
hx::ObjectPtr< ArrayDataSource_obj > ArrayDataSource_obj::__new()
{  hx::ObjectPtr< ArrayDataSource_obj > _result_ = new ArrayDataSource_obj();
	_result_->__construct();
	return _result_;}

Dynamic ArrayDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayDataSource_obj > _result_ = new ArrayDataSource_obj();
	_result_->__construct();
	return _result_;}

Void ArrayDataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","create",0xac964e2e,"haxe.ui.toolkit.data.ArrayDataSource.create","haxe/ui/toolkit/data/ArrayDataSource.hx",17,0x88133302)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(18)
		::Xml tmp = config;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		this->super::create(tmp);
		HX_STACK_LINE(20)
		bool tmp1 = (config == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		if ((tmp1)){
			HX_STACK_LINE(21)
			return null();
		}
		HX_STACK_LINE(24)
		::String tmp2 = config->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		this->_id = tmp2;
		HX_STACK_LINE(26)
		::String tmp3 = config->get(HX_HCSTRING("delimeter","\x8b","\x2c","\x83","\x83"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		::String delimeter = tmp3;		HX_STACK_VAR(delimeter,"delimeter");
		HX_STACK_LINE(27)
		bool tmp4 = (delimeter == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		if ((tmp4)){
			HX_STACK_LINE(28)
			delimeter = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
		}
		HX_STACK_LINE(30)
		::String tmp5 = delimeter;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		::String tmp6 = ::StringTools_obj::replace(tmp5,HX_HCSTRING("\\n","\x92","\x50","\x00","\x00"),HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(30)
		delimeter = tmp6;
		HX_STACK_LINE(32)
		::String tmp7 = config->get(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(32)
		::String resource = tmp7;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(33)
		bool tmp8 = (resource != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		if ((tmp8)){
			HX_STACK_LINE(34)
			::String tmp9 = resource;		HX_STACK_VAR(tmp9,"tmp9");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &delimeter){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/ArrayDataSource.hx",34,0x88133302)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("delimeter","\x8b","\x2c","\x83","\x83") , delimeter,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			Dynamic tmp10 = _Function_2_1::Block(delimeter);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			this->createFromResource(tmp9,tmp10);
		}
		HX_STACK_LINE(37)
		::String nodeText = null();		HX_STACK_VAR(nodeText,"nodeText");
		HX_STACK_LINE(38)
		::Xml tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				int tmp10 = config->nodeType;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(38)
				int tmp11 = ::Xml_obj::Document;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(38)
				bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(38)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(38)
				if ((tmp12)){
					HX_STACK_LINE(38)
					int tmp14 = config->nodeType;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(38)
					int tmp15 = ::Xml_obj::Element;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(38)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(38)
					tmp13 = (tmp14 != tmp16);
				}
				else{
					HX_STACK_LINE(38)
					tmp13 = false;
				}
				HX_STACK_LINE(38)
				if ((tmp13)){
					HX_STACK_LINE(38)
					::String tmp14 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + config->nodeType);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(38)
					HX_STACK_DO_THROW(tmp14);
				}
			}
			HX_STACK_LINE(38)
			tmp9 = config->children->__get((int)0).StaticCast< ::Xml >();
		}
		HX_STACK_LINE(38)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		if ((tmp10)){
			HX_STACK_LINE(39)
			::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(39)
				::Xml tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(39)
				{
					HX_STACK_LINE(39)
					{
						HX_STACK_LINE(39)
						int tmp13 = config->nodeType;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(39)
						int tmp14 = ::Xml_obj::Document;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(39)
						bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(39)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(39)
						if ((tmp15)){
							HX_STACK_LINE(39)
							int tmp17 = config->nodeType;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(39)
							int tmp18 = ::Xml_obj::Element;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(39)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(39)
							tmp16 = (tmp17 != tmp19);
						}
						else{
							HX_STACK_LINE(39)
							tmp16 = false;
						}
						HX_STACK_LINE(39)
						if ((tmp16)){
							HX_STACK_LINE(39)
							::String tmp17 = (HX_HCSTRING("Bad node type, expected Element or Document but found ","\xa0","\xd6","\xba","\x79") + config->nodeType);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(39)
							HX_STACK_DO_THROW(tmp17);
						}
					}
					HX_STACK_LINE(39)
					tmp12 = config->children->__get((int)0).StaticCast< ::Xml >();
				}
				HX_STACK_LINE(39)
				::Xml _this = tmp12;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(39)
				int tmp13 = _this->nodeType;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(39)
				int tmp14 = ::Xml_obj::Document;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(39)
				bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(39)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(39)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(39)
				if ((tmp16)){
					HX_STACK_LINE(39)
					int tmp18 = _this->nodeType;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(39)
					int tmp19 = ::Xml_obj::Element;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(39)
					int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(39)
					tmp17 = (tmp18 == tmp20);
				}
				else{
					HX_STACK_LINE(39)
					tmp17 = true;
				}
				HX_STACK_LINE(39)
				if ((tmp17)){
					HX_STACK_LINE(39)
					::String tmp18 = (HX_HCSTRING("Bad node type, unexpected ","\xbe","\x79","\xd5","\x11") + _this->nodeType);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(39)
					HX_STACK_DO_THROW(tmp18);
				}
				HX_STACK_LINE(39)
				tmp11 = _this->nodeValue;
			}
			HX_STACK_LINE(39)
			nodeText = tmp11;
		}
		HX_STACK_LINE(42)
		bool tmp11 = (nodeText != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(42)
		if ((tmp11)){
			HX_STACK_LINE(43)
			::String tmp12 = nodeText;		HX_STACK_VAR(tmp12,"tmp12");
			struct _Function_2_1{
				inline static Dynamic Block( ::String &delimeter){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/ArrayDataSource.hx",43,0x88133302)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("delimeter","\x8b","\x2c","\x83","\x83") , delimeter,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(43)
			Dynamic tmp13 = _Function_2_1::Block(delimeter);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(43)
			this->createFromString(tmp12,tmp13);
		}
	}
return null();
}


bool ArrayDataSource_obj::_moveFirst( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_moveFirst",0x5f962b52,"haxe.ui.toolkit.data.ArrayDataSource._moveFirst","haxe/ui/toolkit/data/ArrayDataSource.hx",47,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	this->pos = (int)0;
	HX_STACK_LINE(49)
	bool tmp = (this->array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(49)
		int tmp3 = this->array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		tmp2 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(49)
		tmp2 = true;
	}
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(50)
		return false;
	}
	HX_STACK_LINE(52)
	return true;
}


bool ArrayDataSource_obj::_moveNext( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_moveNext",0x6be00c11,"haxe.ui.toolkit.data.ArrayDataSource._moveNext","haxe/ui/toolkit/data/ArrayDataSource.hx",55,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	bool tmp = (this->array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	if ((tmp1)){
		HX_STACK_LINE(56)
		int tmp3 = this->array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		tmp2 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(56)
		tmp2 = true;
	}
	HX_STACK_LINE(56)
	if ((tmp2)){
		HX_STACK_LINE(57)
		return false;
	}
	HX_STACK_LINE(59)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(60)
	int tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(60)
	int tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	int tmp5 = this->array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	if ((tmp6)){
		HX_STACK_LINE(61)
		hx::AddEq(this->pos,(int)1);
		HX_STACK_LINE(62)
		b = true;
	}
	HX_STACK_LINE(65)
	bool tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	return tmp7;
}


Dynamic ArrayDataSource_obj::_get( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_get",0x62581c49,"haxe.ui.toolkit.data.ArrayDataSource._get","haxe/ui/toolkit/data/ArrayDataSource.hx",68,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	bool tmp = (this->array == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	if ((tmp1)){
		HX_STACK_LINE(69)
		int tmp3 = this->array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		tmp2 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(69)
		tmp2 = true;
	}
	HX_STACK_LINE(69)
	if ((tmp2)){
		HX_STACK_LINE(70)
		return null();
	}
	HX_STACK_LINE(72)
	int tmp3 = this->pos;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	Dynamic tmp4 = this->array->__GetItem(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	return tmp4;
}


bool ArrayDataSource_obj::_add( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_add",0x62538dd4,"haxe.ui.toolkit.data.ArrayDataSource._add","haxe/ui/toolkit/data/ArrayDataSource.hx",75,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(76)
	Dynamic tmp = o;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->array->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	HX_STACK_LINE(77)
	return true;
}


bool ArrayDataSource_obj::_remove( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_remove",0xb8831271,"haxe.ui.toolkit.data.ArrayDataSource._remove","haxe/ui/toolkit/data/ArrayDataSource.hx",80,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Dynamic tmp = this->get();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	bool tmp1 = this->array->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	return tmp1;
}


int ArrayDataSource_obj::size( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","size",0x6f91f773,"haxe.ui.toolkit.data.ArrayDataSource.size","haxe/ui/toolkit/data/ArrayDataSource.hx",84,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	int tmp = this->array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	return tmp;
}


Void ArrayDataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","createFromString",0xbbe045a9,"haxe.ui.toolkit.data.ArrayDataSource.createFromString","haxe/ui/toolkit/data/ArrayDataSource.hx",91,0x88133302)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(92)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		if ((tmp)){
			HX_STACK_LINE(93)
			bool tmp1 = (config == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(93)
			if ((tmp1)){
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/ArrayDataSource.hx",94,0x88133302)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(94)
				Dynamic tmp2 = _Function_3_1::Block();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(94)
				config = tmp2;
			}
			HX_STACK_LINE(96)
			bool tmp2 = (config->__Field(HX_HCSTRING("delimeter","\x8b","\x2c","\x83","\x83"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			if ((tmp2)){
				HX_STACK_LINE(96)
				tmp3 = config->__Field(HX_HCSTRING("delimeter","\x8b","\x2c","\x83","\x83"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(96)
				tmp3 = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
			}
			HX_STACK_LINE(96)
			config->__FieldRef(HX_HCSTRING("delimeter","\x8b","\x2c","\x83","\x83")) = tmp3;
			HX_STACK_LINE(98)
			Array< ::String > arr = data.split(config->__Field(HX_HCSTRING("delimeter","\x8b","\x2c","\x83","\x83"), hx::paccDynamic ));		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(99)
			bool tmp4 = (arr != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			if ((tmp4)){
				HX_STACK_LINE(100)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(100)
				while((true)){
					HX_STACK_LINE(100)
					bool tmp5 = (_g < arr->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(100)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(100)
					if ((tmp6)){
						HX_STACK_LINE(100)
						break;
					}
					HX_STACK_LINE(100)
					::String tmp7 = arr->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(100)
					::String s = tmp7;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(100)
					++(_g);
					HX_STACK_LINE(101)
					::String tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(101)
					::String tmp9 = ::StringTools_obj::trim(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(101)
					s = tmp9;
					HX_STACK_LINE(102)
					bool tmp10 = (s.length > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(102)
					if ((tmp10)){
						struct _Function_5_1{
							inline static Dynamic Block( ::String &s){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/ArrayDataSource.hx",103,0x88133302)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , s,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(103)
						Dynamic tmp11 = _Function_5_1::Block(s);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(103)
						Dynamic o = tmp11;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(104)
						Dynamic tmp12 = o;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(104)
						this->add(tmp12);
					}
				}
			}
		}
	}
return null();
}



ArrayDataSource_obj::ArrayDataSource_obj()
{
}

void ArrayDataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayDataSource);
	HX_MARK_MEMBER_NAME(array,"array");
	HX_MARK_MEMBER_NAME(pos,"pos");
	::haxe::ui::toolkit::data::DataSource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayDataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(array,"array");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	::haxe::ui::toolkit::data::DataSource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ArrayDataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_get") ) { return _get_dyn(); }
		if (HX_FIELD_EQ(inName,"_add") ) { return _add_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { return array; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_moveNext") ) { return _moveNext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_moveFirst") ) { return _moveFirst_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayDataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { array=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ArrayDataSource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ArrayDataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("array","\x99","\x6d","\x8f","\x25"));
	outFields->push(HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ArrayDataSource_obj,array),HX_HCSTRING("array","\x99","\x6d","\x8f","\x25")},
	{hx::fsInt,(int)offsetof(ArrayDataSource_obj,pos),HX_HCSTRING("pos","\x94","\x5d","\x55","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("array","\x99","\x6d","\x8f","\x25"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("_moveFirst","\x20","\xc3","\x06","\x1a"),
	HX_HCSTRING("_moveNext","\x03","\xe8","\x4f","\x33"),
	HX_HCSTRING("_get","\x97","\xc5","\x19","\x3f"),
	HX_HCSTRING("_add","\x22","\x37","\x15","\x3f"),
	HX_HCSTRING("_remove","\xe3","\xad","\xff","\x72"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("createFromString","\xf7","\xab","\xa1","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayDataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayDataSource_obj::__mClass;

void ArrayDataSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.data.ArrayDataSource","\xfc","\x86","\xd9","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ArrayDataSource_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayDataSource_obj >;
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
