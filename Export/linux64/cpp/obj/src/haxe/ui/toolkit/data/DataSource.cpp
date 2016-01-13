#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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

Void DataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","new",0xdd20de79,"haxe.ui.toolkit.data.DataSource.new","haxe/ui/toolkit/data/DataSource.hx",8,0x7931b957)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->_hasChanged = false;
	HX_STACK_LINE(15)
	this->_allowEvents = true;
	HX_STACK_LINE(14)
	this->allowDeletions = true;
	HX_STACK_LINE(13)
	this->allowUpdates = true;
	HX_STACK_LINE(12)
	this->allowAdditions = true;
	HX_STACK_LINE(19)
	super::__construct(null());
}
;
	return null();
}

//DataSource_obj::~DataSource_obj() { }

Dynamic DataSource_obj::__CreateEmpty() { return  new DataSource_obj; }
hx::ObjectPtr< DataSource_obj > DataSource_obj::__new()
{  hx::ObjectPtr< DataSource_obj > _result_ = new DataSource_obj();
	_result_->__construct();
	return _result_;}

Dynamic DataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataSource_obj > _result_ = new DataSource_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DataSource_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::data::IDataSource_obj)) return operator ::haxe::ui::toolkit::data::IDataSource_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

DataSource_obj::operator ::haxe::ui::toolkit::data::IDataSource_obj *()
	{ return new ::haxe::ui::toolkit::data::IDataSource_delegate_< DataSource_obj >(this); }
DataSource_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< DataSource_obj >(this); }
::Xml DataSource_obj::get_config( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get_config",0x17579d92,"haxe.ui.toolkit.data.DataSource.get_config","haxe/ui/toolkit/data/DataSource.hx",25,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::Xml tmp = this->_config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_config,return )

::haxe::ui::toolkit::data::DataSource DataSource_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","clone",0xbd2299b6,"haxe.ui.toolkit.data.DataSource.clone","haxe/ui/toolkit/data/DataSource.hx",29,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::data::DataSource newDS = null();		HX_STACK_VAR(newDS,"newDS");
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::data::DataSource tmp = newDS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clone,return )

bool DataSource_obj::get_allowEvents( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get_allowEvents",0x51b9fbb2,"haxe.ui.toolkit.data.DataSource.get_allowEvents","haxe/ui/toolkit/data/DataSource.hx",38,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	bool tmp = this->_allowEvents;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_allowEvents,return )

bool DataSource_obj::set_allowEvents( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","set_allowEvents",0x4d8578be,"haxe.ui.toolkit.data.DataSource.set_allowEvents","haxe/ui/toolkit/data/DataSource.hx",42,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(43)
	this->_allowEvents = value;
	HX_STACK_LINE(44)
	bool tmp = this->_allowEvents;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(44)
	if ((tmp1)){
		HX_STACK_LINE(45)
		bool tmp2 = this->_hasChanged;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		if ((tmp3)){
			HX_STACK_LINE(46)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(49)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_allowEvents,return )

::String DataSource_obj::get_id( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get_id",0x5605faab,"haxe.ui.toolkit.data.DataSource.get_id","haxe/ui/toolkit/data/DataSource.hx",57,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	::String tmp = this->_id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_id,return )

::String DataSource_obj::set_id( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","set_id",0x224e4f1f,"haxe.ui.toolkit.data.DataSource.set_id","haxe/ui/toolkit/data/DataSource.hx",61,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(62)
	this->_id = value;
	HX_STACK_LINE(63)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_id,return )

Void DataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","create",0x2ee56e83,"haxe.ui.toolkit.data.DataSource.create","haxe/ui/toolkit/data/DataSource.hx",66,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(67)
		this->_config = config;
		HX_STACK_LINE(69)
		::Xml tmp = this->_config;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(70)
			return null();
		}
		HX_STACK_LINE(73)
		::String tmp2 = config->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		this->_id = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,create,(void))

bool DataSource_obj::open( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","open",0xa0534b91,"haxe.ui.toolkit.data.DataSource.open","haxe/ui/toolkit/data/DataSource.hx",76,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	bool tmp = this->_open();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,open,return )

bool DataSource_obj::close( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","close",0xbd229e11,"haxe.ui.toolkit.data.DataSource.close","haxe/ui/toolkit/data/DataSource.hx",80,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	bool tmp = this->_close();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,close,return )

bool DataSource_obj::moveFirst( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","moveFirst",0xef086e38,"haxe.ui.toolkit.data.DataSource.moveFirst","haxe/ui/toolkit/data/DataSource.hx",84,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	bool tmp = this->_moveFirst();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,moveFirst,return )

bool DataSource_obj::moveNext( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","moveNext",0x85c627eb,"haxe.ui.toolkit.data.DataSource.moveNext","haxe/ui/toolkit/data/DataSource.hx",88,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	bool tmp = this->_moveNext();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,moveNext,return )

Dynamic DataSource_obj::get( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get",0xdd1b8eaf,"haxe.ui.toolkit.data.DataSource.get","haxe/ui/toolkit/data/DataSource.hx",92,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	Dynamic tmp = this->_get();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get,return )

bool DataSource_obj::add( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","add",0xdd17003a,"haxe.ui.toolkit.data.DataSource.add","haxe/ui/toolkit/data/DataSource.hx",96,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(97)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(98)
	bool tmp = this->allowAdditions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	if ((tmp)){
		HX_STACK_LINE(99)
		Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		bool tmp2 = this->_add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		b = tmp2;
		HX_STACK_LINE(100)
		bool tmp3 = (b == true);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		if ((tmp3)){
			HX_STACK_LINE(101)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(104)
	bool tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,add,return )

bool DataSource_obj::update( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","update",0x39db8d90,"haxe.ui.toolkit.data.DataSource.update","haxe/ui/toolkit/data/DataSource.hx",107,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(108)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(109)
	bool tmp = this->allowUpdates;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	if ((tmp)){
		HX_STACK_LINE(110)
		Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		bool tmp2 = this->_update(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		b = tmp2;
		HX_STACK_LINE(111)
		bool tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		if ((tmp3)){
			HX_STACK_LINE(112)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(115)
	bool tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,update,return )

bool DataSource_obj::remove( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","remove",0xb75ea3cb,"haxe.ui.toolkit.data.DataSource.remove","haxe/ui/toolkit/data/DataSource.hx",118,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(120)
	bool tmp = this->allowDeletions;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(121)
		bool tmp1 = this->_remove();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(121)
		b = tmp1;
		HX_STACK_LINE(122)
		bool tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		if ((tmp2)){
			HX_STACK_LINE(123)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(126)
	bool tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,remove,return )

Void DataSource_obj::removeAll( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","removeAll",0xfb893e16,"haxe.ui.toolkit.data.DataSource.removeAll","haxe/ui/toolkit/data/DataSource.hx",129,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		bool tmp = this->moveFirst();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		if ((tmp)){
			HX_STACK_LINE(131)
			while((true)){
				HX_STACK_LINE(132)
				this->remove();
				HX_STACK_LINE(133)
				bool tmp1 = this->moveFirst();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(133)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(131)
				if ((tmp2)){
					HX_STACK_LINE(131)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,removeAll,(void))

::String DataSource_obj::hash( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","hash",0x9ba77795,"haxe.ui.toolkit.data.DataSource.hash","haxe/ui/toolkit/data/DataSource.hx",137,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	Dynamic tmp = this->get();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	Dynamic o = tmp;		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(139)
	bool tmp1 = (o == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	if ((tmp1)){
		HX_STACK_LINE(140)
		return null();
	}
	HX_STACK_LINE(142)
	int tmp2 = ::__hxcpp_obj_id(o);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(142)
	::String tmp3 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,hash,return )

int DataSource_obj::size( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","size",0xa2f2e888,"haxe.ui.toolkit.data.DataSource.size","haxe/ui/toolkit/data/DataSource.hx",146,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,size,return )

bool DataSource_obj::_open( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_open",0x7184a602,"haxe.ui.toolkit.data.DataSource._open","haxe/ui/toolkit/data/DataSource.hx",153,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_open,return )

bool DataSource_obj::_close( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_close",0xf7206680,"haxe.ui.toolkit.data.DataSource._close","haxe/ui/toolkit/data/DataSource.hx",157,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_close,return )

bool DataSource_obj::_moveFirst( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_moveFirst",0x79049a27,"haxe.ui.toolkit.data.DataSource._moveFirst","haxe/ui/toolkit/data/DataSource.hx",161,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_moveFirst,return )

bool DataSource_obj::_moveNext( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_moveNext",0x63f40edc,"haxe.ui.toolkit.data.DataSource._moveNext","haxe/ui/toolkit/data/DataSource.hx",165,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_moveNext,return )

Dynamic DataSource_obj::_get( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_get",0x95b90d5e,"haxe.ui.toolkit.data.DataSource._get","haxe/ui/toolkit/data/DataSource.hx",169,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_get,return )

bool DataSource_obj::_add( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_add",0x95b47ee9,"haxe.ui.toolkit.data.DataSource._add","haxe/ui/toolkit/data/DataSource.hx",173,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(173)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,_add,return )

bool DataSource_obj::_update( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_update",0xbded2641,"haxe.ui.toolkit.data.DataSource._update","haxe/ui/toolkit/data/DataSource.hx",177,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(177)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,_update,return )

bool DataSource_obj::_remove( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_remove",0x3b703c7c,"haxe.ui.toolkit.data.DataSource._remove","haxe/ui/toolkit/data/DataSource.hx",181,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_remove,return )

Void DataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","createFromString",0x6e31023e,"haxe.ui.toolkit.data.DataSource.createFromString","haxe/ui/toolkit/data/DataSource.hx",187,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,createFromString,(void))

Void DataSource_obj::createFromResource( ::String resourceId,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","createFromResource",0x549c2b7b,"haxe.ui.toolkit.data.DataSource.createFromResource","haxe/ui/toolkit/data/DataSource.hx",191,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(192)
		bool tmp = (resourceId != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		if ((tmp)){
			HX_STACK_LINE(193)
			::haxe::ui::toolkit::resources::ResourceManager tmp1 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			::String tmp2 = resourceId;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			::String tmp3 = tmp1->getText(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			::String data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(194)
			::String tmp4 = data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(194)
			this->createFromString(tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,createFromResource,(void))

Void DataSource_obj::dispatchChanged( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","dispatchChanged",0x378d04f3,"haxe.ui.toolkit.data.DataSource.dispatchChanged","haxe/ui/toolkit/data/DataSource.hx",198,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		this->_hasChanged = true;
		HX_STACK_LINE(200)
		bool tmp = this->_allowEvents;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		if ((tmp1)){
			HX_STACK_LINE(201)
			this->_hasChanged = false;
			HX_STACK_LINE(202)
			::String tmp2 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			::openfl::_legacy::events::Event tmp3 = ::openfl::_legacy::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			this->dispatchEvent(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,dispatchChanged,(void))

int DataSource_obj::getObjectId( Dynamic obj){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","getObjectId",0x683e3e49,"haxe.ui.toolkit.data.DataSource.getObjectId","haxe/ui/toolkit/data/DataSource.hx",210,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(212)
	int tmp = ::__hxcpp_obj_id(obj);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,getObjectId,return )

int DataSource_obj::SAFE_NUM;

int DataSource_obj::clsId;


DataSource_obj::DataSource_obj()
{
}

void DataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSource);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(_config,"_config");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(allowAdditions,"allowAdditions");
	HX_MARK_MEMBER_NAME(allowUpdates,"allowUpdates");
	HX_MARK_MEMBER_NAME(allowDeletions,"allowDeletions");
	HX_MARK_MEMBER_NAME(_allowEvents,"_allowEvents");
	HX_MARK_MEMBER_NAME(_hasChanged,"_hasChanged");
	::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(_config,"_config");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(allowAdditions,"allowAdditions");
	HX_VISIT_MEMBER_NAME(allowUpdates,"allowUpdates");
	HX_VISIT_MEMBER_NAME(allowDeletions,"allowDeletions");
	HX_VISIT_MEMBER_NAME(_allowEvents,"_allowEvents");
	HX_VISIT_MEMBER_NAME(_hasChanged,"_hasChanged");
	::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return get_id(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return open_dyn(); }
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"_get") ) { return _get_dyn(); }
		if (HX_FIELD_EQ(inName,"_add") ) { return _add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"_open") ) { return _open_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return inCallProp == hx::paccAlways ? get_config() : config; }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_close") ) { return _close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { return _config; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moveNext") ) { return moveNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveFirst") ) { return moveFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_moveNext") ) { return _moveNext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_config") ) { return get_config_dyn(); }
		if (HX_FIELD_EQ(inName,"_moveFirst") ) { return _moveFirst_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasChanged") ) { return _hasChanged; }
		if (HX_FIELD_EQ(inName,"allowEvents") ) { if (inCallProp == hx::paccAlways) return get_allowEvents(); }
		if (HX_FIELD_EQ(inName,"getObjectId") ) { return getObjectId_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowUpdates") ) { return allowUpdates; }
		if (HX_FIELD_EQ(inName,"_allowEvents") ) { return _allowEvents; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowAdditions") ) { return allowAdditions; }
		if (HX_FIELD_EQ(inName,"allowDeletions") ) { return allowDeletions; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_allowEvents") ) { return get_allowEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowEvents") ) { return set_allowEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatchChanged") ) { return dispatchChanged_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createFromResource") ) { return createFromResource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DataSource_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clsId") ) { outValue = clsId; return true;  }
	}
	return false;
}

Dynamic DataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return set_id(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { _config=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasChanged") ) { _hasChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowEvents") ) { if (inCallProp == hx::paccAlways) return set_allowEvents(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowUpdates") ) { allowUpdates=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowEvents") ) { _allowEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowAdditions") ) { allowAdditions=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowDeletions") ) { allowDeletions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DataSource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clsId") ) { clsId=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"));
	outFields->push(HX_HCSTRING("_config","\x61","\x68","\x49","\x36"));
	outFields->push(HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"));
	outFields->push(HX_HCSTRING("allowAdditions","\x2e","\xd2","\xc4","\x61"));
	outFields->push(HX_HCSTRING("allowUpdates","\xc1","\xd8","\x08","\xdf"));
	outFields->push(HX_HCSTRING("allowDeletions","\xdc","\xc3","\x09","\xc7"));
	outFields->push(HX_HCSTRING("_allowEvents","\x83","\xa2","\xeb","\x43"));
	outFields->push(HX_HCSTRING("_hasChanged","\xd9","\x65","\x0a","\x2a"));
	outFields->push(HX_HCSTRING("allowEvents","\x82","\xf4","\xe1","\xdd"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(DataSource_obj,config),HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(DataSource_obj,_config),HX_HCSTRING("_config","\x61","\x68","\x49","\x36")},
	{hx::fsString,(int)offsetof(DataSource_obj,_id),HX_HCSTRING("_id","\xfa","\x71","\x48","\x00")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowAdditions),HX_HCSTRING("allowAdditions","\x2e","\xd2","\xc4","\x61")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowUpdates),HX_HCSTRING("allowUpdates","\xc1","\xd8","\x08","\xdf")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowDeletions),HX_HCSTRING("allowDeletions","\xdc","\xc3","\x09","\xc7")},
	{hx::fsBool,(int)offsetof(DataSource_obj,_allowEvents),HX_HCSTRING("_allowEvents","\x83","\xa2","\xeb","\x43")},
	{hx::fsBool,(int)offsetof(DataSource_obj,_hasChanged),HX_HCSTRING("_hasChanged","\xd9","\x65","\x0a","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DataSource_obj::SAFE_NUM,HX_HCSTRING("SAFE_NUM","\xf4","\x2e","\xf6","\x10")},
	{hx::fsInt,(void *) &DataSource_obj::clsId,HX_HCSTRING("clsId","\x25","\xfc","\x65","\x48")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("config","\xc2","\x56","\xd2","\xc7"),
	HX_HCSTRING("_config","\x61","\x68","\x49","\x36"),
	HX_HCSTRING("_id","\xfa","\x71","\x48","\x00"),
	HX_HCSTRING("allowAdditions","\x2e","\xd2","\xc4","\x61"),
	HX_HCSTRING("allowUpdates","\xc1","\xd8","\x08","\xdf"),
	HX_HCSTRING("allowDeletions","\xdc","\xc3","\x09","\xc7"),
	HX_HCSTRING("_allowEvents","\x83","\xa2","\xeb","\x43"),
	HX_HCSTRING("_hasChanged","\xd9","\x65","\x0a","\x2a"),
	HX_HCSTRING("get_config","\x8b","\xc6","\x59","\xb8"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_allowEvents","\x19","\xac","\xc3","\x9e"),
	HX_HCSTRING("set_allowEvents","\x25","\x29","\x8f","\x9a"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("open","\xca","\x03","\xb4","\x49"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("moveFirst","\x5f","\x47","\x64","\xbe"),
	HX_HCSTRING("moveNext","\xa4","\xf0","\xb9","\xeb"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeAll","\x3d","\x17","\xe5","\xca"),
	HX_HCSTRING("hash","\xce","\x2f","\x08","\x45"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("_open","\xa9","\x1f","\xc5","\xfc"),
	HX_HCSTRING("_close","\xf9","\x5e","\x4a","\x44"),
	HX_HCSTRING("_moveFirst","\x20","\xc3","\x06","\x1a"),
	HX_HCSTRING("_moveNext","\x03","\xe8","\x4f","\x33"),
	HX_HCSTRING("_get","\x97","\xc5","\x19","\x3f"),
	HX_HCSTRING("_add","\x22","\x37","\x15","\x3f"),
	HX_HCSTRING("_update","\xa8","\x97","\x7c","\xf5"),
	HX_HCSTRING("_remove","\xe3","\xad","\xff","\x72"),
	HX_HCSTRING("createFromString","\xf7","\xab","\xa1","\x89"),
	HX_HCSTRING("createFromResource","\x74","\x75","\xd5","\xac"),
	HX_HCSTRING("dispatchChanged","\x5a","\xb5","\x96","\x84"),
	HX_HCSTRING("getObjectId","\x30","\xef","\x1f","\xa9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataSource_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DataSource_obj::SAFE_NUM,"SAFE_NUM");
	HX_MARK_MEMBER_NAME(DataSource_obj::clsId,"clsId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataSource_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DataSource_obj::SAFE_NUM,"SAFE_NUM");
	HX_VISIT_MEMBER_NAME(DataSource_obj::clsId,"clsId");
};

#endif

hx::Class DataSource_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SAFE_NUM","\xf4","\x2e","\xf6","\x10"),
	HX_HCSTRING("clsId","\x25","\xfc","\x65","\x48"),
	::String(null()) };

void DataSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.data.DataSource","\x07","\x2e","\xe8","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DataSource_obj::__GetStatic;
	__mClass->mSetStaticField = &DataSource_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DataSource_obj >;
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

void DataSource_obj::__boot()
{
	SAFE_NUM= (int)2147483647;
	clsId= (int)0;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
