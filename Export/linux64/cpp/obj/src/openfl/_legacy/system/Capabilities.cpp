#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_Capabilities
#include <openfl/_legacy/system/Capabilities.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_PixelFormat
#include <openfl/_legacy/system/PixelFormat.h>
#endif
#ifndef INCLUDED_openfl__legacy_system_ScreenMode
#include <openfl/_legacy/system/ScreenMode.h>
#endif
#ifndef INCLUDED_openfl_system_TouchscreenType
#include <openfl/system/TouchscreenType.h>
#endif
namespace openfl{
namespace _legacy{
namespace _system{

Void Capabilities_obj::__construct()
{
	return null();
}

//Capabilities_obj::~Capabilities_obj() { }

Dynamic Capabilities_obj::__CreateEmpty() { return  new Capabilities_obj; }
hx::ObjectPtr< Capabilities_obj > Capabilities_obj::__new()
{  hx::ObjectPtr< Capabilities_obj > _result_ = new Capabilities_obj();
	_result_->__construct();
	return _result_;}

Dynamic Capabilities_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Capabilities_obj > _result_ = new Capabilities_obj();
	_result_->__construct();
	return _result_;}

bool Capabilities_obj::avHardwareDisable;

::String Capabilities_obj::cpuArchitecture;

bool Capabilities_obj::hasAccessibility;

bool Capabilities_obj::hasAudio;

bool Capabilities_obj::hasAudioEncoder;

bool Capabilities_obj::hasEmbeddedVideo;

bool Capabilities_obj::hasIME;

bool Capabilities_obj::hasMP3;

bool Capabilities_obj::hasPrinting;

bool Capabilities_obj::hasScreenBroadcast;

bool Capabilities_obj::hasScreenPlayback;

bool Capabilities_obj::hasStreamingAudio;

bool Capabilities_obj::hasStreamingVideo;

bool Capabilities_obj::hasTLS;

bool Capabilities_obj::hasVideoEncoder;

bool Capabilities_obj::isDebugger;

bool Capabilities_obj::isEmbeddedInAcrobat;

::String Capabilities_obj::language;

bool Capabilities_obj::localFileReadDisable;

::String Capabilities_obj::manufacturer;

int Capabilities_obj::maxLevelIDC;

::String Capabilities_obj::os;

Float Capabilities_obj::pixelAspectRatio;

::String Capabilities_obj::playerType;

::String Capabilities_obj::screenColor;

Float Capabilities_obj::screenDPI;

Float Capabilities_obj::screenResolutionX;

Float Capabilities_obj::screenResolutionY;

::String Capabilities_obj::serverString;

bool Capabilities_obj::supports32BitProcesses;

bool Capabilities_obj::supports64BitProcesses;

::openfl::_system::TouchscreenType Capabilities_obj::touchscreenType;

::String Capabilities_obj::version;

Array< ::Dynamic > Capabilities_obj::screenModes;

Array< ::Dynamic > Capabilities_obj::screenResolutions;

bool Capabilities_obj::hasMultiChannelAudio( ::String type){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","hasMultiChannelAudio",0x96f7ce2f,"openfl._legacy.system.Capabilities.hasMultiChannelAudio","openfl/_legacy/system/Capabilities.hx",52,0x2d33a12e)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(52)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Capabilities_obj,hasMultiChannelAudio,return )

::String Capabilities_obj::get_os( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_os",0x1134dd6a,"openfl._legacy.system.Capabilities.get_os","openfl/_legacy/system/Capabilities.hx",64,0x2d33a12e)
	HX_STACK_LINE(79)
	::String tmp = ::Sys_obj::systemName();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(79)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_os,return )

::String Capabilities_obj::get_language( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_language",0x2ea9751e,"openfl._legacy.system.Capabilities.get_language","openfl/_legacy/system/Capabilities.hx",87,0x2d33a12e)
	HX_STACK_LINE(89)
	::String tmp = ::openfl::_legacy::_system::Capabilities_obj::lime_capabilities_get_language();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	::String locale = tmp;		HX_STACK_VAR(locale,"locale");
	HX_STACK_LINE(91)
	bool tmp1 = (locale == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	if ((tmp3)){
		HX_STACK_LINE(91)
		tmp4 = (locale == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(91)
		tmp4 = true;
	}
	HX_STACK_LINE(91)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(91)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(91)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	if ((tmp6)){
		HX_STACK_LINE(91)
		tmp7 = (locale == HX_HCSTRING("C","\x43","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(91)
		tmp7 = true;
	}
	HX_STACK_LINE(91)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(91)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(91)
	if ((tmp8)){
		HX_STACK_LINE(91)
		tmp9 = (locale == HX_HCSTRING("POSIX","\x63","\x7e","\x85","\x44"));
	}
	else{
		HX_STACK_LINE(91)
		tmp9 = true;
	}
	HX_STACK_LINE(91)
	if ((tmp9)){
		HX_STACK_LINE(93)
		return HX_HCSTRING("en-US","\x02","\x7f","\x50","\x70");
	}
	else{
		HX_STACK_LINE(97)
		::String formattedLocale = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(formattedLocale,"formattedLocale");
		HX_STACK_LINE(98)
		int length = locale.length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(100)
		bool tmp10 = (length > (int)5);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(100)
		if ((tmp10)){
			HX_STACK_LINE(102)
			length = (int)5;
		}
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			while((true)){
				HX_STACK_LINE(106)
				bool tmp11 = (_g < length);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(106)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(106)
				if ((tmp12)){
					HX_STACK_LINE(106)
					break;
				}
				HX_STACK_LINE(106)
				int tmp13 = (_g)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(106)
				int i = tmp13;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(108)
				int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(108)
				::String tmp15 = locale.charAt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(108)
				::String _char = tmp15;		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(110)
				bool tmp16 = (i < (int)2);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(110)
				if ((tmp16)){
					HX_STACK_LINE(112)
					::String tmp17 = _char.toLowerCase();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(112)
					hx::AddEq(formattedLocale,tmp17);
				}
				else{
					HX_STACK_LINE(114)
					bool tmp17 = (i == (int)2);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(114)
					if ((tmp17)){
						HX_STACK_LINE(116)
						hx::AddEq(formattedLocale,HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));
					}
					else{
						HX_STACK_LINE(120)
						::String tmp18 = _char.toUpperCase();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(120)
						hx::AddEq(formattedLocale,tmp18);
					}
				}
			}
		}
		HX_STACK_LINE(126)
		::String tmp11 = formattedLocale;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(126)
		return tmp11;
	}
	HX_STACK_LINE(91)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_language,return )

Float Capabilities_obj::get_pixelAspectRatio( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_pixelAspectRatio",0x8792fdf3,"openfl._legacy.system.Capabilities.get_pixelAspectRatio","openfl/_legacy/system/Capabilities.hx",133,0x2d33a12e)
	HX_STACK_LINE(133)
	Float tmp = ::openfl::_legacy::_system::Capabilities_obj::lime_capabilities_get_pixel_aspect_ratio();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_pixelAspectRatio,return )

Float Capabilities_obj::get_screenDPI( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_screenDPI",0x884ec7cb,"openfl._legacy.system.Capabilities.get_screenDPI","openfl/_legacy/system/Capabilities.hx",134,0x2d33a12e)
	HX_STACK_LINE(134)
	Float tmp = ::openfl::_legacy::_system::Capabilities_obj::lime_capabilities_get_screen_dpi();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenDPI,return )

Array< ::Dynamic > Capabilities_obj::get_screenResolutions( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_screenResolutions",0x12231035,"openfl._legacy.system.Capabilities.get_screenResolutions","openfl/_legacy/system/Capabilities.hx",137,0x2d33a12e)
	HX_STACK_LINE(139)
	Array< int > res = ::openfl::_legacy::_system::Capabilities_obj::lime_capabilities_get_screen_resolutions();		HX_STACK_VAR(res,"res");
	HX_STACK_LINE(141)
	bool tmp = (res == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	if ((tmp)){
		HX_STACK_LINE(143)
		return Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(147)
	Array< ::Dynamic > out = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(149)
	{
		HX_STACK_LINE(149)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(149)
		Float tmp1 = (Float(res->length) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		while((true)){
			HX_STACK_LINE(149)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			if ((tmp4)){
				HX_STACK_LINE(149)
				break;
			}
			HX_STACK_LINE(149)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			int c = tmp5;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(151)
			int tmp6 = (c * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			int tmp7 = res->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			int tmp8 = (c * (int)2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(151)
			int tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			int tmp10 = res->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(151)
			out->push(Array_obj< int >::__new().Add(tmp7).Add(tmp10));
		}
	}
	HX_STACK_LINE(155)
	return out;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutions,return )

Float Capabilities_obj::get_screenResolutionX( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_screenResolutionX",0x1223101a,"openfl._legacy.system.Capabilities.get_screenResolutionX","openfl/_legacy/system/Capabilities.hx",160,0x2d33a12e)
	HX_STACK_LINE(160)
	Float tmp = ::openfl::_legacy::_system::Capabilities_obj::lime_capabilities_get_screen_resolution_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionX,return )

Float Capabilities_obj::get_screenResolutionY( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_screenResolutionY",0x1223101b,"openfl._legacy.system.Capabilities.get_screenResolutionY","openfl/_legacy/system/Capabilities.hx",161,0x2d33a12e)
	HX_STACK_LINE(161)
	Float tmp = ::openfl::_legacy::_system::Capabilities_obj::lime_capabilities_get_screen_resolution_y();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenResolutionY,return )

Array< ::Dynamic > Capabilities_obj::get_screenModes( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_screenModes",0x92963b9e,"openfl._legacy.system.Capabilities.get_screenModes","openfl/_legacy/system/Capabilities.hx",163,0x2d33a12e)
	HX_STACK_LINE(164)
	Array< int > modes = ::openfl::_legacy::_system::Capabilities_obj::lime_capabilities_get_screen_modes();		HX_STACK_VAR(modes,"modes");
	HX_STACK_LINE(165)
	Array< ::Dynamic > out = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(out,"out");
	HX_STACK_LINE(167)
	bool tmp = (modes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	if ((tmp)){
		HX_STACK_LINE(168)
		return out;
	}
	HX_STACK_LINE(171)
	{
		HX_STACK_LINE(171)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		Float tmp1 = (Float(modes->length) / Float((int)4));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(171)
		while((true)){
			HX_STACK_LINE(171)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(171)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			if ((tmp4)){
				HX_STACK_LINE(171)
				break;
			}
			HX_STACK_LINE(171)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			int c = tmp5;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(172)
			::openfl::_legacy::_system::ScreenMode tmp6 = ::openfl::_legacy::_system::ScreenMode_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			::openfl::_legacy::_system::ScreenMode mode = tmp6;		HX_STACK_VAR(mode,"mode");
			HX_STACK_LINE(173)
			int tmp7 = (c * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			int tmp9 = modes->__get(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(173)
			mode->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp9;
			HX_STACK_LINE(174)
			int tmp10 = (c * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			int tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			int tmp12 = modes->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(174)
			mode->__FieldRef(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")) = tmp12;
			HX_STACK_LINE(175)
			int tmp13 = (c * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(175)
			int tmp14 = (tmp13 + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(175)
			int tmp15 = modes->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(175)
			mode->__FieldRef(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")) = tmp15;
			HX_STACK_LINE(176)
			int tmp16 = (c * (int)4);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(176)
			int tmp17 = (tmp16 + (int)3);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(176)
			int tmp18 = modes->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(176)
			::openfl::_legacy::_system::PixelFormat tmp19 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::_legacy::_system::PixelFormat >(),tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(176)
			mode->__FieldRef(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")) = tmp19;
			HX_STACK_LINE(177)
			::openfl::_legacy::_system::ScreenMode tmp20 = mode;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(177)
			out->push(tmp20);
		}
	}
	HX_STACK_LINE(180)
	return out;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_screenModes,return )

::String Capabilities_obj::get_version( ){
	HX_STACK_FRAME("openfl._legacy.system.Capabilities","get_version",0xccf72d12,"openfl._legacy.system.Capabilities.get_version","openfl/_legacy/system/Capabilities.hx",184,0x2d33a12e)
	HX_STACK_LINE(191)
	::String value = HX_HCSTRING("LNX","\x96","\xef","\x39","\x00");		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(202)
	bool tmp = true;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(202)
	if ((tmp)){
		HX_STACK_LINE(204)
		::String tmp1 = ::StringTools_obj::replace(HX_HCSTRING("3.5.2","\xfe","\xc5","\xff","\x7b"),HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		::String tmp2 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		::String tmp3 = (tmp2 + HX_HCSTRING(",0","\x84","\x26","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		hx::AddEq(value,tmp3);
	}
	HX_STACK_LINE(208)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Capabilities_obj,get_version,return )

Dynamic Capabilities_obj::lime_capabilities_get_pixel_aspect_ratio;

Dynamic Capabilities_obj::lime_capabilities_get_screen_dpi;

Dynamic Capabilities_obj::lime_capabilities_get_screen_resolution_x;

Dynamic Capabilities_obj::lime_capabilities_get_screen_resolution_y;

Dynamic Capabilities_obj::lime_capabilities_get_screen_resolutions;

Dynamic Capabilities_obj::lime_capabilities_get_screen_modes;

Dynamic Capabilities_obj::lime_capabilities_get_language;


Capabilities_obj::Capabilities_obj()
{
}

bool Capabilities_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"os") ) { outValue = inCallProp == hx::paccAlways ? get_os() : os; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"hasIME") ) { outValue = hasIME; return true;  }
		if (HX_FIELD_EQ(inName,"hasMP3") ) { outValue = hasMP3; return true;  }
		if (HX_FIELD_EQ(inName,"hasTLS") ) { outValue = hasTLS; return true;  }
		if (HX_FIELD_EQ(inName,"get_os") ) { outValue = get_os_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { outValue = inCallProp == hx::paccAlways ? get_version() : version; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAudio") ) { outValue = hasAudio; return true;  }
		if (HX_FIELD_EQ(inName,"language") ) { outValue = inCallProp == hx::paccAlways ? get_language() : language; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"screenDPI") ) { outValue = inCallProp == hx::paccAlways ? get_screenDPI() : screenDPI; return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isDebugger") ) { outValue = isDebugger; return true;  }
		if (HX_FIELD_EQ(inName,"playerType") ) { outValue = playerType; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPrinting") ) { outValue = hasPrinting; return true;  }
		if (HX_FIELD_EQ(inName,"maxLevelIDC") ) { outValue = maxLevelIDC; return true;  }
		if (HX_FIELD_EQ(inName,"screenColor") ) { outValue = screenColor; return true;  }
		if (HX_FIELD_EQ(inName,"screenModes") ) { outValue = inCallProp == hx::paccAlways ? get_screenModes() : screenModes; return true; }
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"manufacturer") ) { outValue = manufacturer; return true;  }
		if (HX_FIELD_EQ(inName,"serverString") ) { outValue = serverString; return true;  }
		if (HX_FIELD_EQ(inName,"get_language") ) { outValue = get_language_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_screenDPI") ) { outValue = get_screenDPI_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cpuArchitecture") ) { outValue = cpuArchitecture; return true;  }
		if (HX_FIELD_EQ(inName,"hasAudioEncoder") ) { outValue = hasAudioEncoder; return true;  }
		if (HX_FIELD_EQ(inName,"hasVideoEncoder") ) { outValue = hasVideoEncoder; return true;  }
		if (HX_FIELD_EQ(inName,"touchscreenType") ) { outValue = touchscreenType; return true;  }
		if (HX_FIELD_EQ(inName,"get_screenModes") ) { outValue = get_screenModes_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasAccessibility") ) { outValue = hasAccessibility; return true;  }
		if (HX_FIELD_EQ(inName,"hasEmbeddedVideo") ) { outValue = hasEmbeddedVideo; return true;  }
		if (HX_FIELD_EQ(inName,"pixelAspectRatio") ) { outValue = inCallProp == hx::paccAlways ? get_pixelAspectRatio() : pixelAspectRatio; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"avHardwareDisable") ) { outValue = avHardwareDisable; return true;  }
		if (HX_FIELD_EQ(inName,"hasScreenPlayback") ) { outValue = hasScreenPlayback; return true;  }
		if (HX_FIELD_EQ(inName,"hasStreamingAudio") ) { outValue = hasStreamingAudio; return true;  }
		if (HX_FIELD_EQ(inName,"hasStreamingVideo") ) { outValue = hasStreamingVideo; return true;  }
		if (HX_FIELD_EQ(inName,"screenResolutionX") ) { outValue = inCallProp == hx::paccAlways ? get_screenResolutionX() : screenResolutionX; return true; }
		if (HX_FIELD_EQ(inName,"screenResolutionY") ) { outValue = inCallProp == hx::paccAlways ? get_screenResolutionY() : screenResolutionY; return true; }
		if (HX_FIELD_EQ(inName,"screenResolutions") ) { outValue = inCallProp == hx::paccAlways ? get_screenResolutions() : screenResolutions; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasScreenBroadcast") ) { outValue = hasScreenBroadcast; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isEmbeddedInAcrobat") ) { outValue = isEmbeddedInAcrobat; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"localFileReadDisable") ) { outValue = localFileReadDisable; return true;  }
		if (HX_FIELD_EQ(inName,"hasMultiChannelAudio") ) { outValue = hasMultiChannelAudio_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_pixelAspectRatio") ) { outValue = get_pixelAspectRatio_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_screenResolutions") ) { outValue = get_screenResolutions_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_screenResolutionX") ) { outValue = get_screenResolutionX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_screenResolutionY") ) { outValue = get_screenResolutionY_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"supports32BitProcesses") ) { outValue = supports32BitProcesses; return true;  }
		if (HX_FIELD_EQ(inName,"supports64BitProcesses") ) { outValue = supports64BitProcesses; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_capabilities_get_language") ) { outValue = lime_capabilities_get_language; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_capabilities_get_screen_dpi") ) { outValue = lime_capabilities_get_screen_dpi; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_capabilities_get_screen_modes") ) { outValue = lime_capabilities_get_screen_modes; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"lime_capabilities_get_pixel_aspect_ratio") ) { outValue = lime_capabilities_get_pixel_aspect_ratio; return true;  }
		if (HX_FIELD_EQ(inName,"lime_capabilities_get_screen_resolutions") ) { outValue = lime_capabilities_get_screen_resolutions; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_capabilities_get_screen_resolution_x") ) { outValue = lime_capabilities_get_screen_resolution_x; return true;  }
		if (HX_FIELD_EQ(inName,"lime_capabilities_get_screen_resolution_y") ) { outValue = lime_capabilities_get_screen_resolution_y; return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Capabilities_obj::avHardwareDisable,HX_HCSTRING("avHardwareDisable","\xab","\x62","\x32","\x9a")},
	{hx::fsString,(void *) &Capabilities_obj::cpuArchitecture,HX_HCSTRING("cpuArchitecture","\x1b","\xa2","\xc9","\xca")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAccessibility,HX_HCSTRING("hasAccessibility","\xd4","\x3e","\x39","\x17")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAudio,HX_HCSTRING("hasAudio","\x1c","\xc3","\xd8","\xb3")},
	{hx::fsBool,(void *) &Capabilities_obj::hasAudioEncoder,HX_HCSTRING("hasAudioEncoder","\xe0","\x21","\x7b","\x20")},
	{hx::fsBool,(void *) &Capabilities_obj::hasEmbeddedVideo,HX_HCSTRING("hasEmbeddedVideo","\xd7","\x96","\x81","\xbc")},
	{hx::fsBool,(void *) &Capabilities_obj::hasIME,HX_HCSTRING("hasIME","\xc7","\xfc","\x36","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasMP3,HX_HCSTRING("hasMP3","\x56","\x08","\x3a","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasPrinting,HX_HCSTRING("hasPrinting","\x4f","\x34","\xe1","\xfb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasScreenBroadcast,HX_HCSTRING("hasScreenBroadcast","\xbb","\x97","\x24","\x21")},
	{hx::fsBool,(void *) &Capabilities_obj::hasScreenPlayback,HX_HCSTRING("hasScreenPlayback","\xa1","\x92","\x10","\x71")},
	{hx::fsBool,(void *) &Capabilities_obj::hasStreamingAudio,HX_HCSTRING("hasStreamingAudio","\x0e","\xba","\x1a","\x5c")},
	{hx::fsBool,(void *) &Capabilities_obj::hasStreamingVideo,HX_HCSTRING("hasStreamingVideo","\xb3","\x55","\x96","\x6b")},
	{hx::fsBool,(void *) &Capabilities_obj::hasTLS,HX_HCSTRING("hasTLS","\xc1","\x54","\x3f","\xbb")},
	{hx::fsBool,(void *) &Capabilities_obj::hasVideoEncoder,HX_HCSTRING("hasVideoEncoder","\xdb","\x74","\xfc","\x2e")},
	{hx::fsBool,(void *) &Capabilities_obj::isDebugger,HX_HCSTRING("isDebugger","\x2b","\x36","\x9a","\x0b")},
	{hx::fsBool,(void *) &Capabilities_obj::isEmbeddedInAcrobat,HX_HCSTRING("isEmbeddedInAcrobat","\x7d","\x1e","\x22","\xf6")},
	{hx::fsString,(void *) &Capabilities_obj::language,HX_HCSTRING("language","\x58","\x80","\x11","\x7a")},
	{hx::fsBool,(void *) &Capabilities_obj::localFileReadDisable,HX_HCSTRING("localFileReadDisable","\xeb","\x2e","\x91","\x02")},
	{hx::fsString,(void *) &Capabilities_obj::manufacturer,HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14")},
	{hx::fsInt,(void *) &Capabilities_obj::maxLevelIDC,HX_HCSTRING("maxLevelIDC","\xc8","\xdf","\x35","\x9c")},
	{hx::fsString,(void *) &Capabilities_obj::os,HX_HCSTRING("os","\x24","\x61","\x00","\x00")},
	{hx::fsFloat,(void *) &Capabilities_obj::pixelAspectRatio,HX_HCSTRING("pixelAspectRatio","\x2d","\xd3","\x2f","\xa5")},
	{hx::fsString,(void *) &Capabilities_obj::playerType,HX_HCSTRING("playerType","\xbb","\xce","\xca","\xaf")},
	{hx::fsString,(void *) &Capabilities_obj::screenColor,HX_HCSTRING("screenColor","\x57","\xbe","\xe1","\x01")},
	{hx::fsFloat,(void *) &Capabilities_obj::screenDPI,HX_HCSTRING("screenDPI","\x51","\x8f","\xf0","\x37")},
	{hx::fsFloat,(void *) &Capabilities_obj::screenResolutionX,HX_HCSTRING("screenResolutionX","\xa0","\xcd","\xc0","\xdd")},
	{hx::fsFloat,(void *) &Capabilities_obj::screenResolutionY,HX_HCSTRING("screenResolutionY","\xa1","\xcd","\xc0","\xdd")},
	{hx::fsString,(void *) &Capabilities_obj::serverString,HX_HCSTRING("serverString","\xf4","\xdb","\x68","\x98")},
	{hx::fsBool,(void *) &Capabilities_obj::supports32BitProcesses,HX_HCSTRING("supports32BitProcesses","\xd3","\xe5","\x56","\xaa")},
	{hx::fsBool,(void *) &Capabilities_obj::supports64BitProcesses,HX_HCSTRING("supports64BitProcesses","\xf2","\xda","\xdf","\x7d")},
	{hx::fsObject /*::openfl::_system::TouchscreenType*/ ,(void *) &Capabilities_obj::touchscreenType,HX_HCSTRING("touchscreenType","\xc5","\x5c","\xc7","\x58")},
	{hx::fsString,(void *) &Capabilities_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Capabilities_obj::screenModes,HX_HCSTRING("screenModes","\xa4","\x70","\xdd","\xc3")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Capabilities_obj::screenResolutions,HX_HCSTRING("screenResolutions","\xbb","\xcd","\xc0","\xdd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::lime_capabilities_get_pixel_aspect_ratio,HX_HCSTRING("lime_capabilities_get_pixel_aspect_ratio","\xc5","\x88","\xc2","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::lime_capabilities_get_screen_dpi,HX_HCSTRING("lime_capabilities_get_screen_dpi","\xd2","\x75","\x92","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::lime_capabilities_get_screen_resolution_x,HX_HCSTRING("lime_capabilities_get_screen_resolution_x","\x50","\x82","\x4e","\x0b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::lime_capabilities_get_screen_resolution_y,HX_HCSTRING("lime_capabilities_get_screen_resolution_y","\x51","\x82","\x4e","\x0b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::lime_capabilities_get_screen_resolutions,HX_HCSTRING("lime_capabilities_get_screen_resolutions","\x3c","\x81","\xe2","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::lime_capabilities_get_screen_modes,HX_HCSTRING("lime_capabilities_get_screen_modes","\x65","\x9d","\x67","\x13")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Capabilities_obj::lime_capabilities_get_language,HX_HCSTRING("lime_capabilities_get_language","\x60","\x7a","\x76","\x12")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Capabilities_obj::avHardwareDisable,"avHardwareDisable");
	HX_MARK_MEMBER_NAME(Capabilities_obj::cpuArchitecture,"cpuArchitecture");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAccessibility,"hasAccessibility");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAudio,"hasAudio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasAudioEncoder,"hasAudioEncoder");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasEmbeddedVideo,"hasEmbeddedVideo");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasIME,"hasIME");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasMP3,"hasMP3");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasPrinting,"hasPrinting");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasScreenBroadcast,"hasScreenBroadcast");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasScreenPlayback,"hasScreenPlayback");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasStreamingAudio,"hasStreamingAudio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasStreamingVideo,"hasStreamingVideo");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasTLS,"hasTLS");
	HX_MARK_MEMBER_NAME(Capabilities_obj::hasVideoEncoder,"hasVideoEncoder");
	HX_MARK_MEMBER_NAME(Capabilities_obj::isDebugger,"isDebugger");
	HX_MARK_MEMBER_NAME(Capabilities_obj::isEmbeddedInAcrobat,"isEmbeddedInAcrobat");
	HX_MARK_MEMBER_NAME(Capabilities_obj::language,"language");
	HX_MARK_MEMBER_NAME(Capabilities_obj::localFileReadDisable,"localFileReadDisable");
	HX_MARK_MEMBER_NAME(Capabilities_obj::manufacturer,"manufacturer");
	HX_MARK_MEMBER_NAME(Capabilities_obj::maxLevelIDC,"maxLevelIDC");
	HX_MARK_MEMBER_NAME(Capabilities_obj::os,"os");
	HX_MARK_MEMBER_NAME(Capabilities_obj::pixelAspectRatio,"pixelAspectRatio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::playerType,"playerType");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenColor,"screenColor");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenDPI,"screenDPI");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutionX,"screenResolutionX");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutionY,"screenResolutionY");
	HX_MARK_MEMBER_NAME(Capabilities_obj::serverString,"serverString");
	HX_MARK_MEMBER_NAME(Capabilities_obj::supports32BitProcesses,"supports32BitProcesses");
	HX_MARK_MEMBER_NAME(Capabilities_obj::supports64BitProcesses,"supports64BitProcesses");
	HX_MARK_MEMBER_NAME(Capabilities_obj::touchscreenType,"touchscreenType");
	HX_MARK_MEMBER_NAME(Capabilities_obj::version,"version");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenModes,"screenModes");
	HX_MARK_MEMBER_NAME(Capabilities_obj::screenResolutions,"screenResolutions");
	HX_MARK_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_pixel_aspect_ratio,"lime_capabilities_get_pixel_aspect_ratio");
	HX_MARK_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_dpi,"lime_capabilities_get_screen_dpi");
	HX_MARK_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_resolution_x,"lime_capabilities_get_screen_resolution_x");
	HX_MARK_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_resolution_y,"lime_capabilities_get_screen_resolution_y");
	HX_MARK_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_resolutions,"lime_capabilities_get_screen_resolutions");
	HX_MARK_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_modes,"lime_capabilities_get_screen_modes");
	HX_MARK_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_language,"lime_capabilities_get_language");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Capabilities_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::avHardwareDisable,"avHardwareDisable");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::cpuArchitecture,"cpuArchitecture");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAccessibility,"hasAccessibility");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAudio,"hasAudio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasAudioEncoder,"hasAudioEncoder");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasEmbeddedVideo,"hasEmbeddedVideo");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasIME,"hasIME");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasMP3,"hasMP3");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasPrinting,"hasPrinting");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasScreenBroadcast,"hasScreenBroadcast");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasScreenPlayback,"hasScreenPlayback");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasStreamingAudio,"hasStreamingAudio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasStreamingVideo,"hasStreamingVideo");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasTLS,"hasTLS");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::hasVideoEncoder,"hasVideoEncoder");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::isDebugger,"isDebugger");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::isEmbeddedInAcrobat,"isEmbeddedInAcrobat");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::language,"language");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::localFileReadDisable,"localFileReadDisable");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::manufacturer,"manufacturer");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::maxLevelIDC,"maxLevelIDC");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::os,"os");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::pixelAspectRatio,"pixelAspectRatio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::playerType,"playerType");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenColor,"screenColor");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenDPI,"screenDPI");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenResolutionX,"screenResolutionX");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenResolutionY,"screenResolutionY");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::serverString,"serverString");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::supports32BitProcesses,"supports32BitProcesses");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::supports64BitProcesses,"supports64BitProcesses");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::touchscreenType,"touchscreenType");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenModes,"screenModes");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::screenResolutions,"screenResolutions");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_pixel_aspect_ratio,"lime_capabilities_get_pixel_aspect_ratio");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_dpi,"lime_capabilities_get_screen_dpi");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_resolution_x,"lime_capabilities_get_screen_resolution_x");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_resolution_y,"lime_capabilities_get_screen_resolution_y");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_resolutions,"lime_capabilities_get_screen_resolutions");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_screen_modes,"lime_capabilities_get_screen_modes");
	HX_VISIT_MEMBER_NAME(Capabilities_obj::lime_capabilities_get_language,"lime_capabilities_get_language");
};

#endif

hx::Class Capabilities_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("avHardwareDisable","\xab","\x62","\x32","\x9a"),
	HX_HCSTRING("cpuArchitecture","\x1b","\xa2","\xc9","\xca"),
	HX_HCSTRING("hasAccessibility","\xd4","\x3e","\x39","\x17"),
	HX_HCSTRING("hasAudio","\x1c","\xc3","\xd8","\xb3"),
	HX_HCSTRING("hasAudioEncoder","\xe0","\x21","\x7b","\x20"),
	HX_HCSTRING("hasEmbeddedVideo","\xd7","\x96","\x81","\xbc"),
	HX_HCSTRING("hasIME","\xc7","\xfc","\x36","\xbb"),
	HX_HCSTRING("hasMP3","\x56","\x08","\x3a","\xbb"),
	HX_HCSTRING("hasPrinting","\x4f","\x34","\xe1","\xfb"),
	HX_HCSTRING("hasScreenBroadcast","\xbb","\x97","\x24","\x21"),
	HX_HCSTRING("hasScreenPlayback","\xa1","\x92","\x10","\x71"),
	HX_HCSTRING("hasStreamingAudio","\x0e","\xba","\x1a","\x5c"),
	HX_HCSTRING("hasStreamingVideo","\xb3","\x55","\x96","\x6b"),
	HX_HCSTRING("hasTLS","\xc1","\x54","\x3f","\xbb"),
	HX_HCSTRING("hasVideoEncoder","\xdb","\x74","\xfc","\x2e"),
	HX_HCSTRING("isDebugger","\x2b","\x36","\x9a","\x0b"),
	HX_HCSTRING("isEmbeddedInAcrobat","\x7d","\x1e","\x22","\xf6"),
	HX_HCSTRING("language","\x58","\x80","\x11","\x7a"),
	HX_HCSTRING("localFileReadDisable","\xeb","\x2e","\x91","\x02"),
	HX_HCSTRING("manufacturer","\x51","\x1a","\x55","\x14"),
	HX_HCSTRING("maxLevelIDC","\xc8","\xdf","\x35","\x9c"),
	HX_HCSTRING("os","\x24","\x61","\x00","\x00"),
	HX_HCSTRING("pixelAspectRatio","\x2d","\xd3","\x2f","\xa5"),
	HX_HCSTRING("playerType","\xbb","\xce","\xca","\xaf"),
	HX_HCSTRING("screenColor","\x57","\xbe","\xe1","\x01"),
	HX_HCSTRING("screenDPI","\x51","\x8f","\xf0","\x37"),
	HX_HCSTRING("screenResolutionX","\xa0","\xcd","\xc0","\xdd"),
	HX_HCSTRING("screenResolutionY","\xa1","\xcd","\xc0","\xdd"),
	HX_HCSTRING("serverString","\xf4","\xdb","\x68","\x98"),
	HX_HCSTRING("supports32BitProcesses","\xd3","\xe5","\x56","\xaa"),
	HX_HCSTRING("supports64BitProcesses","\xf2","\xda","\xdf","\x7d"),
	HX_HCSTRING("touchscreenType","\xc5","\x5c","\xc7","\x58"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("screenModes","\xa4","\x70","\xdd","\xc3"),
	HX_HCSTRING("screenResolutions","\xbb","\xcd","\xc0","\xdd"),
	HX_HCSTRING("hasMultiChannelAudio","\x72","\x08","\xff","\xd2"),
	HX_HCSTRING("get_os","\x6d","\xf8","\x2f","\xa3"),
	HX_HCSTRING("get_language","\x61","\x34","\x2b","\x2f"),
	HX_HCSTRING("get_pixelAspectRatio","\x36","\x38","\x9a","\xc3"),
	HX_HCSTRING("get_screenDPI","\x28","\x63","\x54","\xf9"),
	HX_HCSTRING("get_screenResolutions","\x92","\xd0","\x6e","\x5c"),
	HX_HCSTRING("get_screenResolutionX","\x77","\xd0","\x6e","\x5c"),
	HX_HCSTRING("get_screenResolutionY","\x78","\xd0","\x6e","\x5c"),
	HX_HCSTRING("get_screenModes","\x3b","\x28","\xbf","\x84"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("lime_capabilities_get_pixel_aspect_ratio","\xc5","\x88","\xc2","\xa1"),
	HX_HCSTRING("lime_capabilities_get_screen_dpi","\xd2","\x75","\x92","\x03"),
	HX_HCSTRING("lime_capabilities_get_screen_resolution_x","\x50","\x82","\x4e","\x0b"),
	HX_HCSTRING("lime_capabilities_get_screen_resolution_y","\x51","\x82","\x4e","\x0b"),
	HX_HCSTRING("lime_capabilities_get_screen_resolutions","\x3c","\x81","\xe2","\x7a"),
	HX_HCSTRING("lime_capabilities_get_screen_modes","\x65","\x9d","\x67","\x13"),
	HX_HCSTRING("lime_capabilities_get_language","\x60","\x7a","\x76","\x12"),
	::String(null()) };

void Capabilities_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.system.Capabilities","\xd1","\x3d","\x17","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Capabilities_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Capabilities_obj >;
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

void Capabilities_obj::__boot()
{
	avHardwareDisable= true;
	cpuArchitecture= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	hasAccessibility= false;
	hasAudio= true;
	hasAudioEncoder= false;
	hasEmbeddedVideo= false;
	hasIME= false;
	hasMP3= false;
	hasPrinting= false;
	hasScreenBroadcast= false;
	hasScreenPlayback= false;
	hasStreamingAudio= false;
	hasStreamingVideo= false;
	hasTLS= true;
	hasVideoEncoder= false;
	isDebugger= true;
	isEmbeddedInAcrobat= false;
	localFileReadDisable= false;
	manufacturer= HX_HCSTRING("OpenFL Contributors","\xc8","\xce","\x85","\xc7");
	maxLevelIDC= (int)0;
	playerType= HX_HCSTRING("OpenFL","\xb0","\xbb","\x28","\x56");
	screenColor= HX_HCSTRING("color","\x63","\x71","\x5c","\x4a");
	serverString= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	supports32BitProcesses= true;
	supports64BitProcesses= true;
	touchscreenType= ::openfl::_system::TouchscreenType_obj::FINGER;
	lime_capabilities_get_pixel_aspect_ratio= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_capabilities_get_pixel_aspect_ratio","\x23","\xe2","\xa3","\xad"),(int)0);
	lime_capabilities_get_screen_dpi= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_capabilities_get_screen_dpi","\x30","\x41","\x8c","\x0b"),(int)0);
	lime_capabilities_get_screen_resolution_x= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_capabilities_get_screen_resolution_x","\x32","\x5b","\x9b","\x64"),(int)0);
	lime_capabilities_get_screen_resolution_y= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_capabilities_get_screen_resolution_y","\x33","\x5b","\x9b","\x64"),(int)0);
	lime_capabilities_get_screen_resolutions= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_capabilities_get_screen_resolutions","\x9a","\xda","\xc3","\x86"),(int)0);
	lime_capabilities_get_screen_modes= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_capabilities_get_screen_modes","\x43","\x7c","\xf1","\x65"),(int)0);
	lime_capabilities_get_language= ::openfl::_legacy::Lib_obj::load(HX_HCSTRING("lime-legacy","\xc1","\x7f","\xb9","\x87"),HX_HCSTRING("lime_legacy_capabilities_get_language","\x3e","\x12","\xf4","\x0d"),(int)0);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace system
