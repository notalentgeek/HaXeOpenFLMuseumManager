#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

Void Sys_obj::__construct()
{
	return null();
}

//Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Void Sys_obj::print( Dynamic v){
{
		HX_STACK_FRAME("Sys","print",0x483745ec,"Sys.print","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",25,0x9640115b)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(25)
		::__hxcpp_print(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

Void Sys_obj::println( Dynamic v){
{
		HX_STACK_FRAME("Sys","println",0x3905f76e,"Sys.println","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",28,0x9640115b)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(29)
		Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::Sys_obj::print(tmp);
		HX_STACK_LINE(30)
		::Sys_obj::print(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

::haxe::io::Output Sys_obj::_stderr( ){
	HX_STACK_FRAME("Sys","stderr",0x3eb04003,"Sys.stderr","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",41,0x9640115b)
	HX_STACK_LINE(42)
	Dynamic tmp = ::Sys_obj::file_stderr();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::haxe::io::Output tmp1 = ::sys::io::FileOutput_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_stderr,return )

Array< ::String > Sys_obj::args( ){
	HX_STACK_FRAME("Sys","args",0xeaeddc7e,"Sys.args","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",50,0x9640115b)
	HX_STACK_LINE(50)
	return ::__get_args();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

Void Sys_obj::sleep( Float seconds){
{
		HX_STACK_FRAME("Sys","sleep",0xfe70aad6,"Sys.sleep","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",64,0x9640115b)
		HX_STACK_ARG(seconds,"seconds")
		HX_STACK_LINE(65)
		Float tmp = seconds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::Sys_obj::_sleep(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

::String Sys_obj::getCwd( ){
	HX_STACK_FRAME("Sys","getCwd",0xd9ded99b,"Sys.getCwd","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",72,0x9640115b)
	HX_STACK_LINE(73)
	::String tmp = ::Sys_obj::get_cwd();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::String tmp1 = ::String(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,getCwd,return )

Void Sys_obj::setCwd( ::String s){
{
		HX_STACK_FRAME("Sys","setCwd",0xa6272e0f,"Sys.setCwd","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",76,0x9640115b)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(77)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		::Sys_obj::set_cwd(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setCwd,(void))

::String Sys_obj::systemName( ){
	HX_STACK_FRAME("Sys","systemName",0xbea5b6bb,"Sys.systemName","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",80,0x9640115b)
	HX_STACK_LINE(81)
	::String tmp = ::Sys_obj::sys_string();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

::String Sys_obj::escapeArgument( ::String arg){
	HX_STACK_FRAME("Sys","escapeArgument",0xb9d4397f,"Sys.escapeArgument","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",84,0x9640115b)
	HX_STACK_ARG(arg,"arg")
	HX_STACK_LINE(85)
	bool ok = true;		HX_STACK_VAR(ok,"ok");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		int _g = arg.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(86)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(86)
			if ((tmp1)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(87)
			int tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			Dynamic tmp4 = arg.charCodeAt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(87)
			Dynamic _g2 = tmp4;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(87)
			bool tmp5 = (_g2 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(87)
			if ((tmp5)){
				HX_STACK_LINE(87)
				Dynamic tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				switch( (int)(tmp6)){
					case (int)32: case (int)9: case (int)34: case (int)38: case (int)124: case (int)60: case (int)62: case (int)35: case (int)59: case (int)42: case (int)63: case (int)40: case (int)41: case (int)123: case (int)125: case (int)36: {
						HX_STACK_LINE(89)
						ok = false;
					}
					;break;
					case (int)0: case (int)13: case (int)10: {
						HX_STACK_LINE(91)
						int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(91)
						::String tmp8 = arg.substr((int)0,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(91)
						arg = tmp8;
					}
					;break;
				}
			}
		}
	}
	HX_STACK_LINE(93)
	bool tmp = ok;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	if ((tmp)){
		HX_STACK_LINE(94)
		::String tmp1 = arg;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		return tmp1;
	}
	HX_STACK_LINE(95)
	::String tmp1 = arg.split(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"))->join(HX_HCSTRING("\\\\","\x80","\x50","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	::String tmp2 = tmp1.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->join(HX_HCSTRING("\\\"","\x46","\x50","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	::String tmp3 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,escapeArgument,return )

int Sys_obj::command( ::String cmd,Array< ::String > args){
	HX_STACK_FRAME("Sys","command",0x363f8cca,"Sys.command","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",98,0x9640115b)
	HX_STACK_ARG(cmd,"cmd")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(99)
	bool tmp = (args != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(100)
		::String tmp1 = cmd;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		::String tmp2 = ::Sys_obj::escapeArgument(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		cmd = tmp2;
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				bool tmp3 = (_g < args->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(101)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(101)
				if ((tmp4)){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				::String tmp5 = args->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				::String a = tmp5;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(101)
				++(_g);
				HX_STACK_LINE(102)
				::String tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(102)
				::String tmp7 = ::Sys_obj::escapeArgument(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(102)
				::String tmp8 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(102)
				hx::AddEq(cmd,tmp8);
			}
		}
	}
	HX_STACK_LINE(104)
	::String tmp1 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	bool tmp2 = (tmp1 == HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	if ((tmp2)){
		HX_STACK_LINE(104)
		::String tmp3 = (HX_HCSTRING("\"","\x22","\x00","\x00","\x00") + cmd);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		cmd = tmp4;
	}
	HX_STACK_LINE(105)
	::String tmp3 = cmd;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(105)
	int tmp4 = ::Sys_obj::sys_command(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(105)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,command,return )

Void Sys_obj::exit( int code){
{
		HX_STACK_FRAME("Sys","exit",0xed97463f,"Sys.exit","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",109,0x9640115b)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(109)
		::__hxcpp_exit(code);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,exit,(void))

::String Sys_obj::executablePath( ){
	HX_STACK_FRAME("Sys","executablePath",0xfc9406f0,"Sys.executablePath","/home/notalentgeek//Mikael Data/Programming Resouce/SDK/haxe-3.2.1/std/cpp/_std/Sys.hx",120,0x9640115b)
	HX_STACK_LINE(121)
	::String tmp = ::Sys_obj::sys_exe_path();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	::String tmp1 = ::String(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,executablePath,return )

Dynamic Sys_obj::_sleep;

Dynamic Sys_obj::get_cwd;

Dynamic Sys_obj::set_cwd;

Dynamic Sys_obj::sys_string;

Dynamic Sys_obj::sys_command;

Dynamic Sys_obj::sys_exe_path;

Dynamic Sys_obj::file_stderr;


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stderr") ) { outValue = _stderr_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getCwd") ) { outValue = getCwd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setCwd") ) { outValue = setCwd_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_sleep") ) { outValue = _sleep; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"command") ) { outValue = command_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_cwd") ) { outValue = get_cwd; return true;  }
		if (HX_FIELD_EQ(inName,"set_cwd") ) { outValue = set_cwd; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_string") ) { outValue = sys_string; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sys_command") ) { outValue = sys_command; return true;  }
		if (HX_FIELD_EQ(inName,"file_stderr") ) { outValue = file_stderr; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sys_exe_path") ) { outValue = sys_exe_path; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"escapeArgument") ) { outValue = escapeArgument_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"executablePath") ) { outValue = executablePath_dyn(); return true;  }
	}
	return false;
}

bool Sys_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_sleep") ) { _sleep=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_cwd") ) { get_cwd=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"set_cwd") ) { set_cwd=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sys_string") ) { sys_string=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sys_command") ) { sys_command=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_stderr") ) { file_stderr=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sys_exe_path") ) { sys_exe_path=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::_sleep,HX_HCSTRING("_sleep","\x58","\x04","\xac","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::get_cwd,HX_HCSTRING("get_cwd","\xc7","\x4f","\xc0","\x26")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::set_cwd,HX_HCSTRING("set_cwd","\xd3","\xe0","\xc1","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_string,HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_command,HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_exe_path,HX_HCSTRING("sys_exe_path","\x64","\xe4","\x8d","\x89")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::file_stderr,HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sys_obj::_sleep,"_sleep");
	HX_MARK_MEMBER_NAME(Sys_obj::get_cwd,"get_cwd");
	HX_MARK_MEMBER_NAME(Sys_obj::set_cwd,"set_cwd");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_command,"sys_command");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_exe_path,"sys_exe_path");
	HX_MARK_MEMBER_NAME(Sys_obj::file_stderr,"file_stderr");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sys_obj::_sleep,"_sleep");
	HX_VISIT_MEMBER_NAME(Sys_obj::get_cwd,"get_cwd");
	HX_VISIT_MEMBER_NAME(Sys_obj::set_cwd,"set_cwd");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_command,"sys_command");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_exe_path,"sys_exe_path");
	HX_VISIT_MEMBER_NAME(Sys_obj::file_stderr,"file_stderr");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	HX_HCSTRING("getCwd","\x3a","\xc0","\x1a","\xa3"),
	HX_HCSTRING("setCwd","\xae","\x14","\x63","\x6f"),
	HX_HCSTRING("systemName","\xda","\xd8","\x82","\xf7"),
	HX_HCSTRING("escapeArgument","\x1e","\x57","\x56","\x9e"),
	HX_HCSTRING("command","\x4b","\x71","\x6d","\x81"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("executablePath","\x8f","\x24","\x16","\xe1"),
	HX_HCSTRING("_sleep","\x58","\x04","\xac","\x7a"),
	HX_HCSTRING("get_cwd","\xc7","\x4f","\xc0","\x26"),
	HX_HCSTRING("set_cwd","\xd3","\xe0","\xc1","\x19"),
	HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),
	HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44"),
	HX_HCSTRING("sys_exe_path","\x64","\xe4","\x8d","\x89"),
	HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c"),
	::String(null()) };

void Sys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &Sys_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
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

void Sys_obj::__boot()
{
	_sleep= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_sleep","\x25","\x79","\x1a","\xf4"),(int)1);
	get_cwd= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_cwd","\xc7","\x4f","\xc0","\x26"),(int)0);
	set_cwd= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("set_cwd","\xd3","\xe0","\xc1","\x19"),(int)1);
	sys_string= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);
	sys_command= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_command","\xd9","\xcc","\xb4","\x44"),(int)1);
	sys_exe_path= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_exe_path","\x64","\xe4","\x8d","\x89"),(int)0);
	file_stderr= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_stderr","\x45","\x71","\x4c","\x3c"),(int)0);
}

