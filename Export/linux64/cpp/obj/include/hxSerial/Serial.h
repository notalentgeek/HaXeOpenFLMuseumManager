#ifndef INCLUDED_hxSerial_Serial
#define INCLUDED_hxSerial_Serial

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxSerial,Serial)
namespace hxSerial{


class HXCPP_CLASS_ATTRIBUTES  Serial_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Serial_obj OBJ_;
		Serial_obj();
		Void __construct(::String portName,Dynamic __o_baud,Dynamic __o_setupImmediately);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="hxSerial.Serial")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Serial_obj > __new(::String portName,Dynamic __o_baud,Dynamic __o_setupImmediately);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Serial_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Serial","\x14","\xde","\xc1","\xa2"); }

		static void __boot();
		static Array< ::String > getDeviceList( );
		static Dynamic getDeviceList_dyn();

		static Void init( );
		static Dynamic init_dyn();

		static bool isInit;
		static Dynamic _enumerateDevices;
		static Dynamic &_enumerateDevices_dyn() { return _enumerateDevices;}
		static Dynamic _setup;
		static Dynamic &_setup_dyn() { return _setup;}
		static Dynamic _writeBytes;
		static Dynamic &_writeBytes_dyn() { return _writeBytes;}
		static Dynamic _readBytes;
		static Dynamic &_readBytes_dyn() { return _readBytes;}
		static Dynamic _writeByte;
		static Dynamic &_writeByte_dyn() { return _writeByte;}
		static Dynamic _readByte;
		static Dynamic &_readByte_dyn() { return _readByte;}
		static Dynamic _flush;
		static Dynamic &_flush_dyn() { return _flush;}
		static Dynamic _available;
		static Dynamic &_available_dyn() { return _available;}
		static Dynamic _breakdown;
		static Dynamic &_breakdown_dyn() { return _breakdown;}
		::String portName;
		int baud;
		bool isSetup;
		virtual bool setup( );
		Dynamic setup_dyn();

		virtual int writeBytes( ::String buffer);
		Dynamic writeBytes_dyn();

		virtual ::String readBytes( int length);
		Dynamic readBytes_dyn();

		virtual bool writeByte( int byte);
		Dynamic writeByte_dyn();

		virtual int readByte( );
		Dynamic readByte_dyn();

		virtual Void flush( Dynamic flushIn,Dynamic flushOut);
		Dynamic flush_dyn();

		virtual int available( );
		Dynamic available_dyn();

		virtual int close( );
		Dynamic close_dyn();

		Dynamic handle;
};

} // end namespace hxSerial

#endif /* INCLUDED_hxSerial_Serial */ 
