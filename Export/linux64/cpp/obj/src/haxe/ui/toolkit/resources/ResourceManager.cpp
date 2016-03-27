#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_IResourceHook
#include <haxe/ui/toolkit/resources/IResourceHook.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_ByteConverter
#include <haxe/ui/toolkit/util/ByteConverter.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetType
#include <openfl/_legacy/AssetType.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Loader
#include <openfl/_legacy/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace resources{

Void ResourceManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","new",0x8fd45c86,"haxe.ui.toolkit.resources.ResourceManager.new","haxe/ui/toolkit/resources/ResourceManager.hx",29,0xfdcf000c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ResourceManager_obj::~ResourceManager_obj() { }

Dynamic ResourceManager_obj::__CreateEmpty() { return  new ResourceManager_obj; }
hx::ObjectPtr< ResourceManager_obj > ResourceManager_obj::__new()
{  hx::ObjectPtr< ResourceManager_obj > _result_ = new ResourceManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic ResourceManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResourceManager_obj > _result_ = new ResourceManager_obj();
	_result_->__construct();
	return _result_;}

bool ResourceManager_obj::hasAsset( ::String resouceId){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","hasAsset",0x1b255e50,"haxe.ui.toolkit.resources.ResourceManager.hasAsset","haxe/ui/toolkit/resources/ResourceManager.hx",33,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resouceId,"resouceId")
	HX_STACK_LINE(34)
	::String tmp = resouceId;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	bool tmp1 = ::openfl::_legacy::Assets_obj::exists(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,hasAsset,return )

::Xml ResourceManager_obj::getXML( ::String resourceId,::String locale){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","getXML",0x66a79a7b,"haxe.ui.toolkit.resources.ResourceManager.getXML","haxe/ui/toolkit/resources/ResourceManager.hx",37,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(locale,"locale")
	HX_STACK_LINE(38)
	::String tmp = resourceId;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	::String tmp1 = locale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	::String tmp2 = this->getText(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	::String text = tmp2;		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(39)
	::Xml xml = null();		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(40)
	bool tmp3 = (text != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	if ((tmp3)){
		HX_STACK_LINE(41)
		::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::Xml tmp5 = ::Xml_obj::parse(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		xml = tmp5;
	}
	HX_STACK_LINE(43)
	::Xml tmp4 = xml;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(ResourceManager_obj,getXML,return )

::String ResourceManager_obj::getText( ::String resourceId,::String locale){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","getText",0x696d1389,"haxe.ui.toolkit.resources.ResourceManager.getText","haxe/ui/toolkit/resources/ResourceManager.hx",46,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(locale,"locale")
	HX_STACK_LINE(47)
	::String str = null();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(49)
	::haxe::ui::toolkit::resources::IResourceHook tmp = this->resourceHook;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	if ((tmp1)){
		HX_STACK_LINE(50)
		::haxe::ui::toolkit::resources::IResourceHook tmp2 = this->resourceHook;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		::String tmp3 = resourceId;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		::String tmp4 = locale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::String tmp5 = tmp2->getText(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		str = tmp5;
		HX_STACK_LINE(51)
		bool tmp6 = (str != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		if ((tmp6)){
			HX_STACK_LINE(52)
			::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			return tmp7;
		}
	}
	HX_STACK_LINE(56)
	::String tmp2 = resourceId;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	::String tmp3 = ::haxe::Resource_obj::getString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(56)
	str = tmp3;
	HX_STACK_LINE(57)
	bool tmp4 = (str == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	if ((tmp4)){
		HX_STACK_LINE(58)
		::String tmp5 = resourceId;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		::String tmp6 = ::openfl::_legacy::Assets_obj::getText(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(58)
		str = tmp6;
	}
	HX_STACK_LINE(60)
	::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(ResourceManager_obj,getText,return )

::openfl::_legacy::display::BitmapData ResourceManager_obj::getBitmapData( ::String resourceId,::String locale){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","getBitmapData",0x435e8995,"haxe.ui.toolkit.resources.ResourceManager.getBitmapData","haxe/ui/toolkit/resources/ResourceManager.hx",74,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(locale,"locale")
	HX_STACK_LINE(75)
	bool tmp = (resourceId == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	if ((tmp1)){
		HX_STACK_LINE(75)
		tmp2 = (resourceId.length == (int)0);
	}
	else{
		HX_STACK_LINE(75)
		tmp2 = true;
	}
	HX_STACK_LINE(75)
	if ((tmp2)){
		HX_STACK_LINE(76)
		return null();
	}
	HX_STACK_LINE(79)
	::openfl::_legacy::display::BitmapData bmp = null();		HX_STACK_VAR(bmp,"bmp");
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::resources::IResourceHook tmp3 = this->resourceHook;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	if ((tmp4)){
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::resources::IResourceHook tmp5 = this->resourceHook;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		::String tmp6 = resourceId;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		::String tmp7 = locale;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		::openfl::_legacy::display::BitmapData tmp8 = tmp5->getBitmapData(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		bmp = tmp8;
		HX_STACK_LINE(83)
		bool tmp9 = (bmp != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(83)
		if ((tmp9)){
			HX_STACK_LINE(84)
			::openfl::_legacy::display::BitmapData tmp10 = bmp;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(84)
			return tmp10;
		}
	}
	HX_STACK_LINE(89)
	::String tmp5 = resourceId;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	::haxe::io::Bytes tmp6 = ::haxe::Resource_obj::getBytes(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(89)
	::haxe::io::Bytes bytes = tmp6;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(90)
	bool tmp7 = (bytes != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(90)
	if ((tmp7)){
		HX_STACK_LINE(91)
		::haxe::io::Bytes tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		::openfl::_legacy::utils::ByteArray tmp9 = ::haxe::ui::toolkit::util::ByteConverter_obj::fromHaxeBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(91)
		::openfl::_legacy::utils::ByteArray ba = tmp9;		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(92)
		::openfl::_legacy::display::Loader tmp10 = ::openfl::_legacy::display::Loader_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(92)
		::openfl::_legacy::display::Loader loader = tmp10;		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(93)
		::openfl::_legacy::utils::ByteArray tmp11 = ba;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		loader->loadBytes(tmp11,null());
		HX_STACK_LINE(94)
		bool tmp12 = (loader->content != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(94)
		if ((tmp12)){
			HX_STACK_LINE(95)
			::openfl::_legacy::display::Bitmap tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(95)
			tmp13 = hx::TCast< ::openfl::_legacy::display::Bitmap >::cast(loader->content);
			HX_STACK_LINE(95)
			bmp = tmp13->bitmapData;
		}
	}
	else{
		HX_STACK_LINE(98)
		::String tmp8 = resourceId;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		::openfl::_legacy::display::BitmapData tmp9 = ::openfl::_legacy::Assets_obj::getBitmapData(tmp8,true);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(98)
		bmp = tmp9;
	}
	HX_STACK_LINE(103)
	::openfl::_legacy::display::BitmapData tmp8 = bmp;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(103)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(ResourceManager_obj,getBitmapData,return )

::openfl::_legacy::utils::ByteArray ResourceManager_obj::getBytes( ::String resourceId,::String locale){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","getBytes",0x8602c20f,"haxe.ui.toolkit.resources.ResourceManager.getBytes","haxe/ui/toolkit/resources/ResourceManager.hx",106,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(locale,"locale")
	HX_STACK_LINE(107)
	::openfl::_legacy::utils::ByteArray ba = null();		HX_STACK_VAR(ba,"ba");
	HX_STACK_LINE(109)
	::haxe::ui::toolkit::resources::IResourceHook tmp = this->resourceHook;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	if ((tmp1)){
		HX_STACK_LINE(110)
		::haxe::ui::toolkit::resources::IResourceHook tmp2 = this->resourceHook;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		::String tmp3 = resourceId;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		::String tmp4 = locale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		::openfl::_legacy::utils::ByteArray tmp5 = tmp2->getBytes(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		ba = tmp5;
		HX_STACK_LINE(111)
		bool tmp6 = (ba != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		if ((tmp6)){
			HX_STACK_LINE(112)
			::openfl::_legacy::utils::ByteArray tmp7 = ba;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(112)
			return tmp7;
		}
	}
	HX_STACK_LINE(116)
	::String tmp2 = resourceId;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	::openfl::_legacy::utils::ByteArray tmp3 = ::openfl::_legacy::Assets_obj::getBytes(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	ba = tmp3;
	HX_STACK_LINE(117)
	::openfl::_legacy::utils::ByteArray tmp4 = ba;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(117)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(ResourceManager_obj,getBytes,return )

Void ResourceManager_obj::reset( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","reset",0xc0a0ab75,"haxe.ui.toolkit.resources.ResourceManager.reset","haxe/ui/toolkit/resources/ResourceManager.hx",120,0xfdcf000c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceManager_obj,reset,(void))

::haxe::ui::toolkit::resources::ResourceManager ResourceManager_obj::_instance;

::haxe::ui::toolkit::resources::ResourceManager ResourceManager_obj::instance;

::haxe::ui::toolkit::resources::ResourceManager ResourceManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","get_instance",0xd41692b8,"haxe.ui.toolkit.resources.ResourceManager.get_instance","haxe/ui/toolkit/resources/ResourceManager.hx",17,0xfdcf000c)
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::resources::ResourceManager tmp = ::haxe::ui::toolkit::resources::ResourceManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	if ((tmp1)){
		HX_STACK_LINE(19)
		::haxe::ui::toolkit::resources::ResourceManager tmp2 = ::haxe::ui::toolkit::resources::ResourceManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		::haxe::ui::toolkit::resources::ResourceManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::resources::ResourceManager tmp2 = ::haxe::ui::toolkit::resources::ResourceManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ResourceManager_obj,get_instance,return )


ResourceManager_obj::ResourceManager_obj()
{
}

void ResourceManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResourceManager);
	HX_MARK_MEMBER_NAME(resourceHook,"resourceHook");
	HX_MARK_END_CLASS();
}

void ResourceManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(resourceHook,"resourceHook");
}

Dynamic ResourceManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getXML") ) { return getXML_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasAsset") ) { return hasAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resourceHook") ) { return resourceHook; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ResourceManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic ResourceManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceHook") ) { resourceHook=inValue.Cast< ::haxe::ui::toolkit::resources::IResourceHook >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ResourceManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::resources::ResourceManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::resources::ResourceManager >(); return true; }
	}
	return false;
}

void ResourceManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("resourceHook","\xd1","\xd3","\x75","\x8c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::resources::IResourceHook*/ ,(int)offsetof(ResourceManager_obj,resourceHook),HX_HCSTRING("resourceHook","\xd1","\xd3","\x75","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::resources::ResourceManager*/ ,(void *) &ResourceManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::resources::ResourceManager*/ ,(void *) &ResourceManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resourceHook","\xd1","\xd3","\x75","\x8c"),
	HX_HCSTRING("hasAsset","\x36","\xb4","\x91","\xb2"),
	HX_HCSTRING("getXML","\xe1","\x8a","\x2a","\xa3"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ResourceManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ResourceManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ResourceManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ResourceManager_obj::instance,"instance");
};

#endif

hx::Class ResourceManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void ResourceManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.resources.ResourceManager","\x94","\x61","\x86","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ResourceManager_obj::__GetStatic;
	__mClass->mSetStaticField = &ResourceManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ResourceManager_obj >;
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
} // end namespace resources
