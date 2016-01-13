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
#ifndef INCLUDED_haxe_ui_toolkit_data_FilesDataSource
#include <haxe/ui/toolkit/data/FilesDataSource.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{

Void FilesDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","new",0xc5ac4f4c,"haxe.ui.toolkit.data.FilesDataSource.new","haxe/ui/toolkit/data/FilesDataSource.hx",11,0x62320f64)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//FilesDataSource_obj::~FilesDataSource_obj() { }

Dynamic FilesDataSource_obj::__CreateEmpty() { return  new FilesDataSource_obj; }
hx::ObjectPtr< FilesDataSource_obj > FilesDataSource_obj::__new()
{  hx::ObjectPtr< FilesDataSource_obj > _result_ = new FilesDataSource_obj();
	_result_->__construct();
	return _result_;}

Dynamic FilesDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilesDataSource_obj > _result_ = new FilesDataSource_obj();
	_result_->__construct();
	return _result_;}

Void FilesDataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","create",0x82980390,"haxe.ui.toolkit.data.FilesDataSource.create","haxe/ui/toolkit/data/FilesDataSource.hx",17,0x62320f64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(19)
		bool tmp = (config == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		if ((tmp)){
			HX_STACK_LINE(20)
			return null();
		}
		HX_STACK_LINE(23)
		::String tmp1 = config->get(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		this->_id = tmp1;
		HX_STACK_LINE(25)
		::String tmp2 = config->get(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		::String resource = tmp2;		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(26)
		bool tmp3 = (resource != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		if ((tmp3)){
			HX_STACK_LINE(27)
			::String tmp4 = resource;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			this->createFromString(tmp4,null());
		}
	}
return null();
}


bool FilesDataSource_obj::_open( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","_open",0x286c3195,"haxe.ui.toolkit.data.FilesDataSource._open","haxe/ui/toolkit/data/FilesDataSource.hx",31,0x62320f64)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::String tmp = this->_dir;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	bool tmp1 = this->isDir(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(34)
		::String tmp2 = this->_dir;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		Array< ::String > files = ::sys::FileSystem_obj::readDirectory(tmp2);		HX_STACK_VAR(files,"files");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			while((true)){
				HX_STACK_LINE(36)
				bool tmp3 = (_g < files->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(36)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(36)
				if ((tmp4)){
					HX_STACK_LINE(36)
					break;
				}
				HX_STACK_LINE(36)
				::String tmp5 = files->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(36)
				::String file = tmp5;		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(36)
				++(_g);
				HX_STACK_LINE(37)
				::String tmp6 = this->_dir;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(37)
				::String tmp7 = (tmp6 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(37)
				::String tmp8 = file;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(37)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(37)
				bool tmp10 = this->isDir(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(37)
				if ((tmp10)){
					struct _Function_5_1{
						inline static Dynamic Block( ::String &file){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/FilesDataSource.hx",38,0x62320f64)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , file,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(38)
					Dynamic tmp11 = _Function_5_1::Block(file);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(38)
					Dynamic o = tmp11;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(39)
					Dynamic tmp12 = o;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(39)
					this->add(tmp12);
				}
			}
		}
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			while((true)){
				HX_STACK_LINE(43)
				bool tmp3 = (_g < files->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(43)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				if ((tmp4)){
					HX_STACK_LINE(43)
					break;
				}
				HX_STACK_LINE(43)
				::String tmp5 = files->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(43)
				::String file = tmp5;		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(43)
				++(_g);
				HX_STACK_LINE(44)
				::String tmp6 = this->_dir;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(44)
				::String tmp7 = (tmp6 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(44)
				::String tmp8 = file;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(44)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(44)
				bool tmp10 = this->isDir(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(44)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(44)
				if ((tmp11)){
					struct _Function_5_1{
						inline static Dynamic Block( ::String &file){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/FilesDataSource.hx",45,0x62320f64)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c") , file,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(45)
					Dynamic tmp12 = _Function_5_1::Block(file);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(45)
					Dynamic o = tmp12;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(46)
					Dynamic tmp13 = o;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(46)
					this->add(tmp13);
				}
			}
		}
	}
	HX_STACK_LINE(51)
	return true;
}


Void FilesDataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","createFromString",0x141b498b,"haxe.ui.toolkit.data.FilesDataSource.createFromString","haxe/ui/toolkit/data/FilesDataSource.hx",57,0x62320f64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(58)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		if ((tmp)){
			HX_STACK_LINE(59)
			::String tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(59)
			::String tmp2 = this->fixDir(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			this->_dir = tmp2;
		}
	}
return null();
}


Void FilesDataSource_obj::createFromResource( ::String resourceId,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","createFromResource",0xff20a008,"haxe.ui.toolkit.data.FilesDataSource.createFromResource","haxe/ui/toolkit/data/FilesDataSource.hx",63,0x62320f64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(64)
		::String tmp = resourceId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		Dynamic tmp1 = config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		this->createFromString(tmp,tmp1);
	}
return null();
}


bool FilesDataSource_obj::isDir( ::String dir){
	HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","isDir",0xecf1796f,"haxe.ui.toolkit.data.FilesDataSource.isDir","haxe/ui/toolkit/data/FilesDataSource.hx",67,0x62320f64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(68)
	bool isDir = false;		HX_STACK_VAR(isDir,"isDir");
	HX_STACK_LINE(71)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(72)
		::String tmp = dir;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		bool tmp1 = this->isRoot(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		if ((tmp1)){
			HX_STACK_LINE(73)
			hx::AddEq(dir,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(75)
		::String tmp2 = dir;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		bool tmp3 = ::sys::FileSystem_obj::isDirectory(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		isDir = tmp3;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic ex = __e;{
				HX_STACK_LINE(77)
				isDir = false;
			}
		}
	}
	HX_STACK_LINE(81)
	bool tmp = isDir;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(FilesDataSource_obj,isDir,return )

bool FilesDataSource_obj::isRoot( ::String dir){
	HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","isRoot",0x6f9e4fc0,"haxe.ui.toolkit.data.FilesDataSource.isRoot","haxe/ui/toolkit/data/FilesDataSource.hx",84,0x62320f64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(85)
	bool isRoot = false;		HX_STACK_VAR(isRoot,"isRoot");
	HX_STACK_LINE(88)
	int tmp = dir.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"))->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	isRoot = tmp1;
	HX_STACK_LINE(91)
	bool tmp2 = isRoot;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FilesDataSource_obj,isRoot,return )

::String FilesDataSource_obj::fixDir( ::String dir){
	HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","fixDir",0x9387e30c,"haxe.ui.toolkit.data.FilesDataSource.fixDir","haxe/ui/toolkit/data/FilesDataSource.hx",94,0x62320f64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(95)
	bool tmp = (dir == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	if ((tmp)){
		HX_STACK_LINE(96)
		return HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(99)
	::String fixedDir = dir;		HX_STACK_VAR(fixedDir,"fixedDir");
	HX_STACK_LINE(100)
	::String tmp1 = fixedDir;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	::String tmp2 = ::StringTools_obj::replace(tmp1,HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	fixedDir = tmp2;
	HX_STACK_LINE(102)
	int tmp3 = fixedDir.lastIndexOf(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	int tmp4 = (fixedDir.length - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(102)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(102)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(102)
	if ((tmp6)){
		HX_STACK_LINE(102)
		int tmp8 = fixedDir.lastIndexOf(HX_HCSTRING("\\","\x5c","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(102)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(102)
		int tmp10 = (fixedDir.length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(102)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(102)
		tmp7 = (tmp9 == tmp11);
	}
	else{
		HX_STACK_LINE(102)
		tmp7 = true;
	}
	HX_STACK_LINE(102)
	if ((tmp7)){
		HX_STACK_LINE(103)
		int tmp8 = (fixedDir.length - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(103)
		::String tmp9 = fixedDir.substr((int)0,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(103)
		fixedDir = tmp9;
	}
	HX_STACK_LINE(106)
	::String tmp8 = fixedDir;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(106)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(FilesDataSource_obj,fixDir,return )


FilesDataSource_obj::FilesDataSource_obj()
{
}

void FilesDataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilesDataSource);
	HX_MARK_MEMBER_NAME(_dir,"_dir");
	::haxe::ui::toolkit::data::ArrayDataSource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FilesDataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dir,"_dir");
	::haxe::ui::toolkit::data::ArrayDataSource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FilesDataSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_dir") ) { return _dir; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_open") ) { return _open_dyn(); }
		if (HX_FIELD_EQ(inName,"isDir") ) { return isDir_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"isRoot") ) { return isRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"fixDir") ) { return fixDir_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createFromResource") ) { return createFromResource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilesDataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_dir") ) { _dir=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FilesDataSource_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FilesDataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dir","\x4e","\x82","\x17","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FilesDataSource_obj,_dir),HX_HCSTRING("_dir","\x4e","\x82","\x17","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_dir","\x4e","\x82","\x17","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("_open","\xa9","\x1f","\xc5","\xfc"),
	HX_HCSTRING("createFromString","\xf7","\xab","\xa1","\x89"),
	HX_HCSTRING("createFromResource","\x74","\x75","\xd5","\xac"),
	HX_HCSTRING("isDir","\x83","\x67","\x4a","\xc1"),
	HX_HCSTRING("isRoot","\x2c","\xb3","\x15","\x69"),
	HX_HCSTRING("fixDir","\x78","\x46","\xff","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilesDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilesDataSource_obj::__mClass,"__mClass");
};

#endif

hx::Class FilesDataSource_obj::__mClass;

void FilesDataSource_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.data.FilesDataSource","\x5a","\xf9","\xef","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FilesDataSource_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FilesDataSource_obj >;
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
