#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Image_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","new",0x324424f7,"haxe.ui.toolkit.controls.Image.new","haxe/ui/toolkit/controls/Image.hx",33,0x7d32f399)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(254)
	this->_updatingContent = false;
	HX_STACK_LINE(38)
	this->_autoDisposeBitmapData = false;
	HX_STACK_LINE(37)
	this->_autoHeight = true;
	HX_STACK_LINE(36)
	this->_autoWidth = true;
	HX_STACK_LINE(49)
	super::__construct();
	HX_STACK_LINE(50)
	this->set_autoSize(true);
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new()
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct();
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Image_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Image_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Image_obj >(this); }
Void Image_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","initialize",0x22fead99,"haxe.ui.toolkit.controls.Image.initialize","haxe/ui/toolkit/controls/Image.hx",57,0x7d32f399)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->super::initialize();
		HX_STACK_LINE(59)
		this->updateContent();
	}
return null();
}


Void Image_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","dispose",0x3f786cb6,"haxe.ui.toolkit.controls.Image.dispose","haxe/ui/toolkit/controls/Image.hx",65,0x7d32f399)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->disposeContent();
		HX_STACK_LINE(67)
		this->super::dispose();
	}
return null();
}


Void Image_obj::disposeContent( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","disposeContent",0xf852eb23,"haxe.ui.toolkit.controls.Image.disposeContent","haxe/ui/toolkit/controls/Image.hx",70,0x7d32f399)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		::openfl::_legacy::display::Bitmap tmp = this->_bmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(72)
			bool tmp2 = this->_autoDisposeBitmapData;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			if ((tmp3)){
				HX_STACK_LINE(73)
				::openfl::_legacy::display::Bitmap tmp4 = this->_bmp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(73)
				tmp4->bitmapData->dispose();
			}
			HX_STACK_LINE(75)
			::openfl::_legacy::display::Sprite tmp4 = this->get_sprite();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			::openfl::_legacy::display::Bitmap tmp5 = this->_bmp;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			tmp4->removeChild(tmp5);
			HX_STACK_LINE(76)
			this->_bmp = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,disposeContent,(void))

Void Image_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","invalidate",0xbd6d95c4,"haxe.ui.toolkit.controls.Image.invalidate","haxe/ui/toolkit/controls/Image.hx",95,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(96)
		int tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		this->super::invalidate(tmp,tmp1);
		HX_STACK_LINE(98)
		int tmp2 = (int(type) & int((int)256));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		bool tmp3 = (tmp2 == (int)256);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		if ((tmp3)){
			HX_STACK_LINE(99)
			this->updateContent();
		}
	}
return null();
}


Dynamic Image_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","get_value",0x4d723b9f,"haxe.ui.toolkit.controls.Image.get_value","haxe/ui/toolkit/controls/Image.hx",103,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(104)
	Dynamic tmp = this->get_resource();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


Dynamic Image_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_value",0x30c327ab,"haxe.ui.toolkit.controls.Image.set_value","haxe/ui/toolkit/controls/Image.hx",107,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(108)
	Dynamic tmp = newValue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	this->set_resource(tmp);
	HX_STACK_LINE(109)
	Dynamic tmp1 = newValue;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	return tmp1;
}


Float Image_obj::set_width( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_width",0xc96d5e40,"haxe.ui.toolkit.controls.Image.set_width","haxe/ui/toolkit/controls/Image.hx",115,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(116)
	this->_autoWidth = false;
	HX_STACK_LINE(117)
	this->_autoSize = false;
	HX_STACK_LINE(118)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	Float tmp1 = this->super::set_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	return tmp1;
}


Float Image_obj::set_height( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_height",0x2c94926d,"haxe.ui.toolkit.controls.Image.set_height","haxe/ui/toolkit/controls/Image.hx",121,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(122)
	this->_autoHeight = false;
	HX_STACK_LINE(123)
	this->_autoSize = false;
	HX_STACK_LINE(124)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	Float tmp1 = this->super::set_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


Dynamic Image_obj::get_resource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","get_resource",0xb30bf160,"haxe.ui.toolkit.controls.Image.get_resource","haxe/ui/toolkit/controls/Image.hx",138,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	Dynamic tmp = this->_resource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_resource,return )

Dynamic Image_obj::set_resource( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_resource",0xc80514d4,"haxe.ui.toolkit.controls.Image.set_resource","haxe/ui/toolkit/controls/Image.hx",142,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(142)
	::haxe::ui::toolkit::controls::Image _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(143)
	this->disposeContent();
	HX_STACK_LINE(145)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	if ((tmp1)){
		HX_STACK_LINE(146)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		bool tmp3 = ::StringTools_obj::endsWith(tmp2,HX_HCSTRING(".gif","\x96","\x54","\xb6","\x1e"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		if ((tmp3)){
			HX_STACK_LINE(152)
			Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Image.hx","\x63","\xaa","\xcf","\x5d"),152,HX_HCSTRING("haxe.ui.toolkit.controls.Image","\x85","\xdd","\x0a","\x24"),HX_HCSTRING("set_resource","\x4b","\x34","\xb3","\xdc"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			::haxe::Log_obj::trace(HX_HCSTRING("YAGP lib not found for .gif decoding","\x69","\xe2","\x3b","\x1e"),tmp4);
		}
		else{
			HX_STACK_LINE(154)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			bool tmp5 = ::StringTools_obj::endsWith(tmp4,HX_HCSTRING(".svg","\xf6","\x7a","\xbf","\x1e"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			if ((tmp5)){
				HX_STACK_LINE(160)
				Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Image.hx","\x63","\xaa","\xcf","\x5d"),160,HX_HCSTRING("haxe.ui.toolkit.controls.Image","\x85","\xdd","\x0a","\x24"),HX_HCSTRING("set_resource","\x4b","\x34","\xb3","\xdc"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(160)
				::haxe::Log_obj::trace(HX_HCSTRING("SVG lib not found for .svg decoding","\x5c","\xd4","\x0a","\xae"),tmp6);
			}
			else{
				HX_STACK_LINE(163)
				Dynamic tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,::haxe::ui::toolkit::controls::Image,_g)
				int __ArgCount() const { return 1; }
				Void run(::openfl::_legacy::display::BitmapData bmpData){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","haxe/ui/toolkit/controls/Image.hx",163,0x7d32f399)
					HX_STACK_ARG(bmpData,"bmpData")
					{
						HX_STACK_LINE(164)
						::openfl::_legacy::display::BitmapData tmp7 = bmpData;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(164)
						_g->updateBitmap(tmp7);
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(163)
				this->loadBitmap(tmp6, Dynamic(new _Function_4_1(_g)));
			}
		}
	}
	else{
		HX_STACK_LINE(167)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::_legacy::display::Bitmap >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(167)
		if ((tmp3)){
			HX_STACK_LINE(168)
			::openfl::_legacy::display::Bitmap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			tmp4 = hx::TCast< ::openfl::_legacy::display::Bitmap >::cast(value);
			HX_STACK_LINE(168)
			::openfl::_legacy::display::BitmapData tmp5 = tmp4->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			this->updateBitmap(tmp5);
		}
		else{
			HX_STACK_LINE(169)
			Dynamic tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			if ((tmp5)){
				HX_STACK_LINE(170)
				::openfl::_legacy::display::BitmapData tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(170)
				tmp6 = hx::TCast< ::openfl::_legacy::display::BitmapData >::cast(value);
				HX_STACK_LINE(170)
				this->updateBitmap(tmp6);
			}
		}
	}
	HX_STACK_LINE(173)
	this->_resource = value;
	HX_STACK_LINE(174)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(174)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_resource,return )

Void Image_obj::loadBitmap( ::String res,Dynamic callback){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","loadBitmap",0xdc7abafe,"haxe.ui.toolkit.controls.Image.loadBitmap","haxe/ui/toolkit/controls/Image.hx",222,0x7d32f399)
		HX_STACK_THIS(this)
		HX_STACK_ARG(res,"res")
		HX_STACK_ARG(callback,"callback")
		HX_STACK_LINE(223)
		::String tmp = res;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		bool tmp1 = ::StringTools_obj::startsWith(tmp,HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		if ((tmp1)){
			HX_STACK_LINE(234)
			::haxe::Http tmp2 = ::haxe::Http_obj::__new(res);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(234)
			::haxe::Http r = tmp2;		HX_STACK_VAR(r,"r");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,callback)
			int __ArgCount() const { return 1; }
			Void run(::String imageData){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/Image.hx",235,0x7d32f399)
				HX_STACK_ARG(imageData,"imageData")
				{
					HX_STACK_LINE(236)
					::String tmp3 = imageData;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(236)
					::haxe::io::Bytes tmp4 = ::haxe::io::Bytes_obj::ofString(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(236)
					::openfl::_legacy::display::BitmapData tmp5 = ::openfl::_legacy::display::BitmapData_obj::loadFromHaxeBytes(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(236)
					callback(tmp5).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(235)
			r->onData =  Dynamic(new _Function_2_1(callback));
			HX_STACK_LINE(238)
			r->request(null());
		}
		else{
			HX_STACK_LINE(241)
			::haxe::ui::toolkit::resources::ResourceManager tmp2 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(241)
			::String tmp3 = res;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(241)
			::openfl::_legacy::display::BitmapData tmp4 = tmp2->getBitmapData(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(241)
			::openfl::_legacy::display::BitmapData data = tmp4;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(242)
			bool tmp5 = (data == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(242)
			if ((tmp5)){
				HX_STACK_LINE(243)
				::String tmp6 = (HX_HCSTRING("Image [","\x36","\x30","\xc5","\x8e") + res);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(243)
				::String tmp7 = (tmp6 + HX_HCSTRING("] not found!","\xef","\xc9","\x19","\x32"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(243)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(244)
			::openfl::_legacy::display::BitmapData tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(244)
			callback(tmp6).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,loadBitmap,(void))

Void Image_obj::updateBitmap( ::openfl::_legacy::display::BitmapData bmpData){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","updateBitmap",0xdc219761,"haxe.ui.toolkit.controls.Image.updateBitmap","haxe/ui/toolkit/controls/Image.hx",248,0x7d32f399)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmpData,"bmpData")
		HX_STACK_LINE(249)
		::openfl::_legacy::display::Bitmap tmp = ::openfl::_legacy::display::Bitmap_obj::__new(bmpData,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(249)
		this->_bmp = tmp;
		HX_STACK_LINE(250)
		::openfl::_legacy::display::Bitmap tmp1 = this->_bmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		tmp1->set_smoothing(true);
		HX_STACK_LINE(251)
		this->updateContent();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,updateBitmap,(void))

Void Image_obj::updateContent( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","updateContent",0xe1388987,"haxe.ui.toolkit.controls.Image.updateContent","haxe/ui/toolkit/controls/Image.hx",255,0x7d32f399)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		bool tmp = this->_updatingContent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		if ((tmp)){
			HX_STACK_LINE(257)
			return null();
		}
		HX_STACK_LINE(260)
		this->_updatingContent = true;
		HX_STACK_LINE(324)
		::openfl::_legacy::display::Bitmap tmp1 = this->_bmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		if ((tmp2)){
			HX_STACK_LINE(325)
			::openfl::_legacy::display::Sprite tmp3 = this->get_sprite();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			::openfl::_legacy::display::Bitmap tmp4 = this->_bmp;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(325)
			bool tmp5 = tmp3->contains(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(325)
			bool tmp6 = (tmp5 == false);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(325)
			if ((tmp6)){
				HX_STACK_LINE(326)
				::openfl::_legacy::display::Sprite tmp7 = this->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(326)
				::openfl::_legacy::display::Bitmap tmp8 = this->_bmp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(326)
				tmp7->addChild(tmp8);
			}
			HX_STACK_LINE(328)
			bool tmp7 = this->get_ready();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(328)
			if ((tmp7)){
				HX_STACK_LINE(329)
				bool tmp8 = this->_autoWidth;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(329)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(329)
				if ((tmp8)){
					HX_STACK_LINE(329)
					tmp9 = this->_autoHeight;
				}
				else{
					HX_STACK_LINE(329)
					tmp9 = false;
				}
				HX_STACK_LINE(329)
				if ((tmp9)){
					HX_STACK_LINE(330)
					::openfl::_legacy::display::Bitmap tmp10 = this->_bmp;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(330)
					int tmp11 = tmp10->bitmapData->get_width();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(330)
					this->set_width(tmp11);
					HX_STACK_LINE(331)
					::openfl::_legacy::display::Bitmap tmp12 = this->_bmp;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(331)
					int tmp13 = tmp12->bitmapData->get_height();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(331)
					this->set_height(tmp13);
					HX_STACK_LINE(332)
					this->_autoWidth = true;
					HX_STACK_LINE(333)
					this->_autoHeight = true;
				}
				else{
					HX_STACK_LINE(335)
					bool tmp10 = this->_autoWidth;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(335)
					if ((tmp10)){
						HX_STACK_LINE(336)
						::openfl::_legacy::display::Bitmap tmp11 = this->_bmp;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(336)
						Float tmp12 = this->get_height();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(336)
						tmp11->set_height(tmp12);
						HX_STACK_LINE(337)
						::openfl::_legacy::display::Bitmap tmp13 = this->_bmp;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(337)
						::openfl::_legacy::display::Bitmap tmp14 = this->_bmp;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(337)
						Float tmp15 = tmp14->get_scaleY();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(337)
						tmp13->set_scaleX(tmp15);
						HX_STACK_LINE(338)
						::openfl::_legacy::display::Bitmap tmp16 = this->_bmp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(338)
						Float tmp17 = tmp16->get_width();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(338)
						this->set_width(tmp17);
						HX_STACK_LINE(339)
						this->_autoWidth = true;
					}
					else{
						HX_STACK_LINE(340)
						bool tmp11 = this->_autoHeight;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(340)
						if ((tmp11)){
							HX_STACK_LINE(341)
							::openfl::_legacy::display::Bitmap tmp12 = this->_bmp;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(341)
							Float tmp13 = this->get_width();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(341)
							tmp12->set_width(tmp13);
							HX_STACK_LINE(342)
							::openfl::_legacy::display::Bitmap tmp14 = this->_bmp;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(342)
							::openfl::_legacy::display::Bitmap tmp15 = this->_bmp;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(342)
							Float tmp16 = tmp15->get_scaleX();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(342)
							tmp14->set_scaleY(tmp16);
							HX_STACK_LINE(343)
							::openfl::_legacy::display::Bitmap tmp17 = this->_bmp;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(343)
							Float tmp18 = tmp17->get_height();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(343)
							this->set_height(tmp18);
							HX_STACK_LINE(344)
							this->_autoHeight = true;
						}
						else{
							HX_STACK_LINE(346)
							::openfl::_legacy::display::Bitmap tmp12 = this->_bmp;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(346)
							Float tmp13 = this->get_width();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(346)
							tmp12->set_width(tmp13);
							HX_STACK_LINE(347)
							::openfl::_legacy::display::Bitmap tmp14 = this->_bmp;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(347)
							Float tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(347)
							tmp14->set_height(tmp15);
						}
					}
				}
			}
		}
		HX_STACK_LINE(353)
		this->_updatingContent = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,updateContent,(void))

bool Image_obj::get_autoDisposeBitmapData( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","get_autoDisposeBitmapData",0xb2fce2f7,"haxe.ui.toolkit.controls.Image.get_autoDisposeBitmapData","haxe/ui/toolkit/controls/Image.hx",356,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(357)
	bool tmp = this->_autoDisposeBitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_autoDisposeBitmapData,return )

bool Image_obj::set_autoDisposeBitmapData( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_autoDisposeBitmapData",0x1f53a703,"haxe.ui.toolkit.controls.Image.set_autoDisposeBitmapData","haxe/ui/toolkit/controls/Image.hx",360,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(361)
	this->_autoDisposeBitmapData = value;
	HX_STACK_LINE(362)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_autoDisposeBitmapData,return )

::haxe::ui::toolkit::core::DisplayObject Image_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","clone",0x1682fbb4,"haxe.ui.toolkit.controls.Image.clone","src/haxe/ui/toolkit/controls/Image.hx",1,0x257cb86e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::Component tmp = hx::TCast< ::haxe::ui::toolkit::core::Component >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Image c = ((::haxe::ui::toolkit::controls::Image)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	Dynamic tmp1 = this->get_resource();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_resource(tmp1);
	HX_STACK_LINE(4)
	bool tmp2 = this->get_autoDisposeBitmapData();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_autoDisposeBitmapData(tmp2);
	HX_STACK_LINE(5)
	::haxe::ui::toolkit::controls::Image tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	return tmp3;
}


::haxe::ui::toolkit::core::DisplayObject Image_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","self",0xccaa3b15,"haxe.ui.toolkit.controls.Image.self","src/haxe/ui/toolkit/controls/Image.hx",1,0x257cb86e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Image tmp = ::haxe::ui::toolkit::controls::Image_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(_bmp,"_bmp");
	HX_MARK_MEMBER_NAME(_resource,"_resource");
	HX_MARK_MEMBER_NAME(_autoWidth,"_autoWidth");
	HX_MARK_MEMBER_NAME(_autoHeight,"_autoHeight");
	HX_MARK_MEMBER_NAME(_autoDisposeBitmapData,"_autoDisposeBitmapData");
	HX_MARK_MEMBER_NAME(_updatingContent,"_updatingContent");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bmp,"_bmp");
	HX_VISIT_MEMBER_NAME(_resource,"_resource");
	HX_VISIT_MEMBER_NAME(_autoWidth,"_autoWidth");
	HX_VISIT_MEMBER_NAME(_autoHeight,"_autoHeight");
	HX_VISIT_MEMBER_NAME(_autoDisposeBitmapData,"_autoDisposeBitmapData");
	HX_VISIT_MEMBER_NAME(_updatingContent,"_updatingContent");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bmp") ) { return _bmp; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resource") ) { if (inCallProp == hx::paccAlways) return get_resource(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resource") ) { return _resource; }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoWidth") ) { return _autoWidth; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBitmap") ) { return loadBitmap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoHeight") ) { return _autoHeight; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_resource") ) { return get_resource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_resource") ) { return set_resource_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBitmap") ) { return updateBitmap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateContent") ) { return updateContent_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"disposeContent") ) { return disposeContent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_updatingContent") ) { return _updatingContent; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"autoDisposeBitmapData") ) { if (inCallProp == hx::paccAlways) return get_autoDisposeBitmapData(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_autoDisposeBitmapData") ) { return _autoDisposeBitmapData; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_autoDisposeBitmapData") ) { return get_autoDisposeBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoDisposeBitmapData") ) { return set_autoDisposeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bmp") ) { _bmp=inValue.Cast< ::openfl::_legacy::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resource") ) { if (inCallProp == hx::paccAlways) return set_resource(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resource") ) { _resource=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoWidth") ) { _autoWidth=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoHeight") ) { _autoHeight=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_updatingContent") ) { _updatingContent=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"autoDisposeBitmapData") ) { if (inCallProp == hx::paccAlways) return set_autoDisposeBitmapData(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_autoDisposeBitmapData") ) { _autoDisposeBitmapData=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Image_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_bmp","\x46","\x01","\x16","\x3f"));
	outFields->push(HX_HCSTRING("_resource","\x2d","\x54","\x36","\x5a"));
	outFields->push(HX_HCSTRING("_autoWidth","\xd8","\x6f","\x10","\x04"));
	outFields->push(HX_HCSTRING("_autoHeight","\xd5","\xe5","\xa0","\x40"));
	outFields->push(HX_HCSTRING("_autoDisposeBitmapData","\x0a","\x04","\x49","\x98"));
	outFields->push(HX_HCSTRING("resource","\xce","\x5c","\xa0","\x12"));
	outFields->push(HX_HCSTRING("autoDisposeBitmapData","\xc9","\x6a","\x3b","\x3f"));
	outFields->push(HX_HCSTRING("_updatingContent","\xd4","\xd0","\x90","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(Image_obj,_bmp),HX_HCSTRING("_bmp","\x46","\x01","\x16","\x3f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Image_obj,_resource),HX_HCSTRING("_resource","\x2d","\x54","\x36","\x5a")},
	{hx::fsBool,(int)offsetof(Image_obj,_autoWidth),HX_HCSTRING("_autoWidth","\xd8","\x6f","\x10","\x04")},
	{hx::fsBool,(int)offsetof(Image_obj,_autoHeight),HX_HCSTRING("_autoHeight","\xd5","\xe5","\xa0","\x40")},
	{hx::fsBool,(int)offsetof(Image_obj,_autoDisposeBitmapData),HX_HCSTRING("_autoDisposeBitmapData","\x0a","\x04","\x49","\x98")},
	{hx::fsBool,(int)offsetof(Image_obj,_updatingContent),HX_HCSTRING("_updatingContent","\xd4","\xd0","\x90","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_bmp","\x46","\x01","\x16","\x3f"),
	HX_HCSTRING("_resource","\x2d","\x54","\x36","\x5a"),
	HX_HCSTRING("_autoWidth","\xd8","\x6f","\x10","\x04"),
	HX_HCSTRING("_autoHeight","\xd5","\xe5","\xa0","\x40"),
	HX_HCSTRING("_autoDisposeBitmapData","\x0a","\x04","\x49","\x98"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("disposeContent","\x5a","\x16","\x61","\x2c"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_resource","\xd7","\x10","\xba","\xc7"),
	HX_HCSTRING("set_resource","\x4b","\x34","\xb3","\xdc"),
	HX_HCSTRING("loadBitmap","\xb5","\x3e","\x37","\xa6"),
	HX_HCSTRING("updateBitmap","\xd8","\xb6","\xcf","\xf0"),
	HX_HCSTRING("_updatingContent","\xd4","\xd0","\x90","\x27"),
	HX_HCSTRING("updateContent","\x30","\xf2","\xe5","\xe4"),
	HX_HCSTRING("get_autoDisposeBitmapData","\x20","\x25","\x39","\x45"),
	HX_HCSTRING("set_autoDisposeBitmapData","\x2c","\xe9","\x8f","\xb1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#endif

hx::Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Image","\x85","\xdd","\x0a","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Image_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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
} // end namespace controls
