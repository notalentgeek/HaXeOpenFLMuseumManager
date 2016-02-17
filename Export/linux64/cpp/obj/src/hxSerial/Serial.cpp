#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxSerial_Serial
#include <hxSerial/Serial.h>
#endif
namespace hxSerial{

Void Serial_obj::__construct(::String portName,Dynamic __o_baud,Dynamic __o_setupImmediately)
{
HX_STACK_FRAME("hxSerial.Serial","new",0x69cb0410,"hxSerial.Serial.new","hxSerial/Serial.hx",37,0xaf8ba53f)
HX_STACK_THIS(this)
HX_STACK_ARG(portName,"portName")
HX_STACK_ARG(__o_baud,"baud")
HX_STACK_ARG(__o_setupImmediately,"setupImmediately")
Dynamic baud = __o_baud.Default(9600);
Dynamic setupImmediately = __o_setupImmediately.Default(false);
{
	HX_STACK_LINE(38)
	this->isSetup = false;
	HX_STACK_LINE(39)
	::hxSerial::Serial_obj::init();
	HX_STACK_LINE(41)
	this->portName = portName;
	HX_STACK_LINE(42)
	this->baud = baud;
	HX_STACK_LINE(44)
	Dynamic tmp = setupImmediately;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	if ((tmp)){
		HX_STACK_LINE(45)
		this->setup();
	}
}
;
	return null();
}

//Serial_obj::~Serial_obj() { }

Dynamic Serial_obj::__CreateEmpty() { return  new Serial_obj; }
hx::ObjectPtr< Serial_obj > Serial_obj::__new(::String portName,Dynamic __o_baud,Dynamic __o_setupImmediately)
{  hx::ObjectPtr< Serial_obj > _result_ = new Serial_obj();
	_result_->__construct(portName,__o_baud,__o_setupImmediately);
	return _result_;}

Dynamic Serial_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Serial_obj > _result_ = new Serial_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool Serial_obj::setup( ){
	HX_STACK_FRAME("hxSerial.Serial","setup",0x969f2e2d,"hxSerial.Serial.setup","hxSerial/Serial.hx",49,0xaf8ba53f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::String tmp = this->portName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = this->baud;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Dynamic tmp2 = ::hxSerial::Serial_obj::_setup(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	this->handle = tmp2;
	HX_STACK_LINE(51)
	Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(51)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	if ((tmp4)){
		HX_STACK_LINE(51)
		Dynamic tmp6 = this->handle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		tmp5 = (tmp7 > (int)0);
	}
	else{
		HX_STACK_LINE(51)
		tmp5 = false;
	}
	HX_STACK_LINE(51)
	this->isSetup = tmp5;
	HX_STACK_LINE(52)
	bool tmp6 = this->isSetup;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(52)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Serial_obj,setup,return )

int Serial_obj::writeBytes( ::String buffer){
	HX_STACK_FRAME("hxSerial.Serial","writeBytes",0x752da55c,"hxSerial.Serial.writeBytes","hxSerial/Serial.hx",55,0xaf8ba53f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(56)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = buffer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	int tmp2 = buffer.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	int tmp3 = ::hxSerial::Serial_obj::_writeBytes(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Serial_obj,writeBytes,return )

::String Serial_obj::readBytes( int length){
	HX_STACK_FRAME("hxSerial.Serial","readBytes",0x48a06ce5,"hxSerial.Serial.readBytes","hxSerial/Serial.hx",59,0xaf8ba53f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(63)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	::String tmp2 = ::hxSerial::Serial_obj::_readBytes(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Serial_obj,readBytes,return )

bool Serial_obj::writeByte( int byte){
	HX_STACK_FRAME("hxSerial.Serial","writeByte",0x03f82b37,"hxSerial.Serial.writeByte","hxSerial/Serial.hx",67,0xaf8ba53f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(byte,"byte")
	HX_STACK_LINE(68)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	int tmp1 = byte;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	bool tmp2 = ::hxSerial::Serial_obj::_writeByte(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Serial_obj,writeByte,return )

int Serial_obj::readByte( ){
	HX_STACK_FRAME("hxSerial.Serial","readByte",0xe27a67ce,"hxSerial.Serial.readByte","hxSerial/Serial.hx",71,0xaf8ba53f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	int tmp1 = ::hxSerial::Serial_obj::_readByte(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Serial_obj,readByte,return )

Void Serial_obj::flush( Dynamic __o_flushIn,Dynamic __o_flushOut){
Dynamic flushIn = __o_flushIn.Default(false);
Dynamic flushOut = __o_flushOut.Default(false);
	HX_STACK_FRAME("hxSerial.Serial","flush",0x1f0ae274,"hxSerial.Serial.flush","hxSerial/Serial.hx",75,0xaf8ba53f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(flushIn,"flushIn")
	HX_STACK_ARG(flushOut,"flushOut")
{
		HX_STACK_LINE(76)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		Dynamic tmp1 = flushIn;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		Dynamic tmp2 = flushOut;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		::hxSerial::Serial_obj::_flush(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Serial_obj,flush,(void))

int Serial_obj::available( ){
	HX_STACK_FRAME("hxSerial.Serial","available",0x31a47179,"hxSerial.Serial.available","hxSerial/Serial.hx",79,0xaf8ba53f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	int tmp1 = ::hxSerial::Serial_obj::_available(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Serial_obj,available,return )

int Serial_obj::close( ){
	HX_STACK_FRAME("hxSerial.Serial","close",0x64d29768,"hxSerial.Serial.close","hxSerial/Serial.hx",83,0xaf8ba53f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	this->isSetup = false;
	HX_STACK_LINE(85)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(85)
	int tmp1 = ::hxSerial::Serial_obj::_breakdown(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(85)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Serial_obj,close,return )

Array< ::String > Serial_obj::getDeviceList( ){
	HX_STACK_FRAME("hxSerial.Serial","getDeviceList",0x7a2e33fa,"hxSerial.Serial.getDeviceList","hxSerial/Serial.hx",10,0xaf8ba53f)
	HX_STACK_LINE(11)
	::hxSerial::Serial_obj::init();
	HX_STACK_LINE(12)
	::String tmp = ::hxSerial::Serial_obj::_enumerateDevices();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	::String str = tmp;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(13)
	bool tmp1 = (str == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	if ((tmp1)){
		HX_STACK_LINE(13)
		return Array_obj< ::String >::__new();
	}
	else{
		HX_STACK_LINE(13)
		return str.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(13)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Serial_obj,getDeviceList,return )

Void Serial_obj::init( ){
{
		HX_STACK_FRAME("hxSerial.Serial","init",0x24914160,"hxSerial.Serial.init","hxSerial/Serial.hx",17,0xaf8ba53f)
		HX_STACK_LINE(18)
		bool tmp = ::hxSerial::Serial_obj::isInit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		if ((tmp1)){
			HX_STACK_LINE(20)
			::hxSerial::Serial_obj::isInit = true;
			HX_STACK_LINE(21)
			Dynamic tmp2 = ::cpp::Lib_obj::loadLazy(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("neko_init","\x74","\x2b","\x84","\xf0"),(int)5);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			Dynamic initNeko = tmp2;		HX_STACK_VAR(initNeko,"initNeko");
			HX_STACK_LINE(22)
			bool tmp3 = (initNeko != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(22)
			if ((tmp3)){

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
				int __ArgCount() const { return 1; }
				::String run(::String s){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","hxSerial/Serial.hx",24,0xaf8ba53f)
					HX_STACK_ARG(s,"s")
					{
						HX_STACK_LINE(24)
						::String tmp4 = ::String(s);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(24)
						return tmp4;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)


				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 1; }
				cpp::ArrayBase run(int len){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","hxSerial/Serial.hx",25,0xaf8ba53f)
					HX_STACK_ARG(len,"len")
					{
						HX_STACK_LINE(25)
						cpp::ArrayBase r = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(25)
						bool tmp4 = (len > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(25)
						if ((tmp4)){
							HX_STACK_LINE(25)
							int tmp5 = (len - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(25)
							hx::IndexRef((r).mPtr,tmp5) = null();
						}
						HX_STACK_LINE(25)
						return r;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(23)
				initNeko( Dynamic(new _Function_3_1()), Dynamic(new _Function_3_2()),null(),true,false);
			}
			else{
				HX_STACK_LINE(29)
				Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Serial.hx","\x2a","\x69","\x98","\x96"),29,HX_HCSTRING("hxSerial.Serial","\x1e","\xfc","\x5b","\xc1"),HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(29)
				::haxe::Log_obj::trace(HX_HCSTRING("Could not init neko api for hxSerial","\xc2","\xdf","\x14","\x39"),tmp4);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Serial_obj,init,(void))

bool Serial_obj::isInit;

Dynamic Serial_obj::_enumerateDevices;

Dynamic Serial_obj::_setup;

Dynamic Serial_obj::_writeBytes;

Dynamic Serial_obj::_readBytes;

Dynamic Serial_obj::_writeByte;

Dynamic Serial_obj::_readByte;

Dynamic Serial_obj::_flush;

Dynamic Serial_obj::_available;

Dynamic Serial_obj::_breakdown;


Serial_obj::Serial_obj()
{
}

void Serial_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Serial);
	HX_MARK_MEMBER_NAME(portName,"portName");
	HX_MARK_MEMBER_NAME(baud,"baud");
	HX_MARK_MEMBER_NAME(isSetup,"isSetup");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Serial_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(portName,"portName");
	HX_VISIT_MEMBER_NAME(baud,"baud");
	HX_VISIT_MEMBER_NAME(isSetup,"isSetup");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic Serial_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"baud") ) { return baud; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSetup") ) { return isSetup; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"portName") ) { return portName; }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"available") ) { return available_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Serial_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isInit") ) { outValue = isInit; return true;  }
		if (HX_FIELD_EQ(inName,"_setup") ) { outValue = _setup; return true;  }
		if (HX_FIELD_EQ(inName,"_flush") ) { outValue = _flush; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_readByte") ) { outValue = _readByte; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_readBytes") ) { outValue = _readBytes; return true;  }
		if (HX_FIELD_EQ(inName,"_writeByte") ) { outValue = _writeByte; return true;  }
		if (HX_FIELD_EQ(inName,"_available") ) { outValue = _available; return true;  }
		if (HX_FIELD_EQ(inName,"_breakdown") ) { outValue = _breakdown; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_writeBytes") ) { outValue = _writeBytes; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDeviceList") ) { outValue = getDeviceList_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_enumerateDevices") ) { outValue = _enumerateDevices; return true;  }
	}
	return false;
}

Dynamic Serial_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"baud") ) { baud=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSetup") ) { isSetup=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"portName") ) { portName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Serial_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isInit") ) { isInit=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_setup") ) { _setup=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_flush") ) { _flush=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_readByte") ) { _readByte=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_readBytes") ) { _readBytes=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_writeByte") ) { _writeByte=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_available") ) { _available=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"_breakdown") ) { _breakdown=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_writeBytes") ) { _writeBytes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_enumerateDevices") ) { _enumerateDevices=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Serial_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("portName","\x6c","\x76","\xe3","\xa0"));
	outFields->push(HX_HCSTRING("baud","\xce","\xe9","\x10","\x41"));
	outFields->push(HX_HCSTRING("isSetup","\x33","\x52","\xb5","\x16"));
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Serial_obj,portName),HX_HCSTRING("portName","\x6c","\x76","\xe3","\xa0")},
	{hx::fsInt,(int)offsetof(Serial_obj,baud),HX_HCSTRING("baud","\xce","\xe9","\x10","\x41")},
	{hx::fsBool,(int)offsetof(Serial_obj,isSetup),HX_HCSTRING("isSetup","\x33","\x52","\xb5","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Serial_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Serial_obj::isInit,HX_HCSTRING("isInit","\x1a","\x00","\x22","\x63")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_enumerateDevices,HX_HCSTRING("_enumerateDevices","\xb8","\xae","\x94","\xd9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_setup,HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_writeBytes,HX_HCSTRING("_writeBytes","\x2b","\xd0","\xe3","\x24")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_readBytes,HX_HCSTRING("_readBytes","\xf6","\xd0","\x21","\xea")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_writeByte,HX_HCSTRING("_writeByte","\x48","\x8f","\x79","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_readByte,HX_HCSTRING("_readByte","\xdd","\xf0","\xb0","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_flush,HX_HCSTRING("_flush","\x05","\xaa","\x82","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_available,HX_HCSTRING("_available","\x8a","\xd5","\x25","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Serial_obj::_breakdown,HX_HCSTRING("_breakdown","\x62","\x64","\x67","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("portName","\x6c","\x76","\xe3","\xa0"),
	HX_HCSTRING("baud","\xce","\xe9","\x10","\x41"),
	HX_HCSTRING("isSetup","\x33","\x52","\xb5","\x16"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Serial_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Serial_obj::isInit,"isInit");
	HX_MARK_MEMBER_NAME(Serial_obj::_enumerateDevices,"_enumerateDevices");
	HX_MARK_MEMBER_NAME(Serial_obj::_setup,"_setup");
	HX_MARK_MEMBER_NAME(Serial_obj::_writeBytes,"_writeBytes");
	HX_MARK_MEMBER_NAME(Serial_obj::_readBytes,"_readBytes");
	HX_MARK_MEMBER_NAME(Serial_obj::_writeByte,"_writeByte");
	HX_MARK_MEMBER_NAME(Serial_obj::_readByte,"_readByte");
	HX_MARK_MEMBER_NAME(Serial_obj::_flush,"_flush");
	HX_MARK_MEMBER_NAME(Serial_obj::_available,"_available");
	HX_MARK_MEMBER_NAME(Serial_obj::_breakdown,"_breakdown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Serial_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Serial_obj::isInit,"isInit");
	HX_VISIT_MEMBER_NAME(Serial_obj::_enumerateDevices,"_enumerateDevices");
	HX_VISIT_MEMBER_NAME(Serial_obj::_setup,"_setup");
	HX_VISIT_MEMBER_NAME(Serial_obj::_writeBytes,"_writeBytes");
	HX_VISIT_MEMBER_NAME(Serial_obj::_readBytes,"_readBytes");
	HX_VISIT_MEMBER_NAME(Serial_obj::_writeByte,"_writeByte");
	HX_VISIT_MEMBER_NAME(Serial_obj::_readByte,"_readByte");
	HX_VISIT_MEMBER_NAME(Serial_obj::_flush,"_flush");
	HX_VISIT_MEMBER_NAME(Serial_obj::_available,"_available");
	HX_VISIT_MEMBER_NAME(Serial_obj::_breakdown,"_breakdown");
};

#endif

hx::Class Serial_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getDeviceList","\x4a","\x84","\xaf","\x0d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("isInit","\x1a","\x00","\x22","\x63"),
	HX_HCSTRING("_enumerateDevices","\xb8","\xae","\x94","\xd9"),
	HX_HCSTRING("_setup","\xbe","\xf5","\x16","\x76"),
	HX_HCSTRING("_writeBytes","\x2b","\xd0","\xe3","\x24"),
	HX_HCSTRING("_readBytes","\xf6","\xd0","\x21","\xea"),
	HX_HCSTRING("_writeByte","\x48","\x8f","\x79","\xa5"),
	HX_HCSTRING("_readByte","\xdd","\xf0","\xb0","\xb0"),
	HX_HCSTRING("_flush","\x05","\xaa","\x82","\xfe"),
	HX_HCSTRING("_available","\x8a","\xd5","\x25","\xd3"),
	HX_HCSTRING("_breakdown","\x62","\x64","\x67","\xa3"),
	::String(null()) };

void Serial_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hxSerial.Serial","\x1e","\xfc","\x5b","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Serial_obj::__GetStatic;
	__mClass->mSetStaticField = &Serial_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Serial_obj >;
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

void Serial_obj::__boot()
{
	isInit= true;
	_enumerateDevices= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("enumerateDevices","\x59","\xc0","\x19","\x41"),(int)0);
	_setup= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),(int)2);
	_writeBytes= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),(int)3);
	_readBytes= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),(int)2);
	_writeByte= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),(int)2);
	_readByte= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),(int)1);
	_flush= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),(int)3);
	_available= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("available","\xc9","\x59","\x83","\x77"),(int)1);
	_breakdown= ::cpp::Lib_obj::load(HX_HCSTRING("hxSerial","\x24","\xe5","\x4f","\x5d"),HX_HCSTRING("breakdown","\xa1","\xe8","\xc4","\x47"),(int)1);
}

} // end namespace hxSerial
