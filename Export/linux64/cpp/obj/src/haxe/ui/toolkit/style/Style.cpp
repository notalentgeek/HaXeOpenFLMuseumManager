#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_FilterParser
#include <haxe/ui/toolkit/util/FilterParser.h>
#endif
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void Style_obj::__construct(Dynamic defaults)
{
HX_STACK_FRAME("haxe.ui.toolkit.style.Style","new",0x25ab1084,"haxe.ui.toolkit.style.Style.new","haxe/ui/toolkit/style/Style.hx",12,0x9c43a2ce)
HX_STACK_THIS(this)
HX_STACK_ARG(defaults,"defaults")
{
	HX_STACK_LINE(69)
	this->_listSize = (int)-1;
	HX_STACK_LINE(67)
	this->_inlineScrolls = (int)-1;
	HX_STACK_LINE(66)
	this->_autoHideScrolls = (int)-1;
	HX_STACK_LINE(63)
	this->_hasButtons = (int)-1;
	HX_STACK_LINE(62)
	this->_iconHeight = ((Float)-1);
	HX_STACK_LINE(61)
	this->_iconWidth = ((Float)-1);
	HX_STACK_LINE(57)
	this->_fontUnderline = ((Float)-1);
	HX_STACK_LINE(56)
	this->_fontItalic = ((Float)-1);
	HX_STACK_LINE(55)
	this->_fontBold = ((Float)-1);
	HX_STACK_LINE(54)
	this->_fontEmbedded = ((Float)-1);
	HX_STACK_LINE(53)
	this->_fontScale = ((Float)-1);
	HX_STACK_LINE(52)
	this->_fontSize = ((Float)-1);
	HX_STACK_LINE(50)
	this->_alpha = ((Float)-1);
	HX_STACK_LINE(49)
	this->_filterSet = false;
	HX_STACK_LINE(47)
	this->_cornerRadiusBottomRight = (int)-1;
	HX_STACK_LINE(46)
	this->_cornerRadiusBottomLeft = (int)-1;
	HX_STACK_LINE(45)
	this->_cornerRadiusTopRight = (int)-1;
	HX_STACK_LINE(44)
	this->_cornerRadiusTopLeft = (int)-1;
	HX_STACK_LINE(41)
	this->_rotationZ = ((Float)-1);
	HX_STACK_LINE(40)
	this->_rotationY = ((Float)-1);
	HX_STACK_LINE(39)
	this->_rotationX = ((Float)-1);
	HX_STACK_LINE(38)
	this->_spacingY = (int)-1;
	HX_STACK_LINE(37)
	this->_spacingX = (int)-1;
	HX_STACK_LINE(36)
	this->_paddingBottom = (int)-1;
	HX_STACK_LINE(35)
	this->_paddingTop = (int)-1;
	HX_STACK_LINE(34)
	this->_paddingRight = (int)-1;
	HX_STACK_LINE(33)
	this->_paddingLeft = (int)-1;
	HX_STACK_LINE(32)
	this->_color = (int)-1;
	HX_STACK_LINE(31)
	this->_borderAlpha = ((Float)-1);
	HX_STACK_LINE(30)
	this->_borderSize = (int)-1;
	HX_STACK_LINE(29)
	this->_borderColor = (int)-1;
	HX_STACK_LINE(28)
	this->_backgroundAlpha = ((Float)-1);
	HX_STACK_LINE(27)
	this->_backgroundColorGradientEnd = (int)-1;
	HX_STACK_LINE(26)
	this->_backgroundColor = (int)-1;
	HX_STACK_LINE(22)
	this->_autoSize = (int)-1;
	HX_STACK_LINE(21)
	this->_percentHeight = (int)-1;
	HX_STACK_LINE(20)
	this->_percentWidth = (int)-1;
	HX_STACK_LINE(19)
	this->_height = (int)-1;
	HX_STACK_LINE(18)
	this->_width = (int)-1;
	HX_STACK_LINE(17)
	this->_visible = ((Float)-1);
	HX_STACK_LINE(15)
	this->_autoApply = true;
	HX_STACK_LINE(130)
	int _g = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(130)
	Dynamic tmp = defaults;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(130)
	while((true)){
		HX_STACK_LINE(130)
		bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		if ((tmp2)){
			HX_STACK_LINE(130)
			break;
		}
		HX_STACK_LINE(130)
		::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		::String field = tmp3;		HX_STACK_VAR(field,"field");
		HX_STACK_LINE(130)
		++(_g);
		HX_STACK_LINE(131)
		::String tmp4 = (HX_HCSTRING("set_","\x7d","\x92","\x50","\x4c") + field);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		Dynamic tmp5 = ::Reflect_obj::getProperty(hx::ObjectPtr<OBJ_>(this),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(131)
		if ((tmp6)){
			HX_STACK_LINE(132)
			::String tmp7 = field;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			Dynamic tmp8 = defaults;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(132)
			::String tmp9 = field;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			Dynamic tmp10 = ::Reflect_obj::field(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			::Reflect_obj::setProperty(hx::ObjectPtr<OBJ_>(this),tmp7,tmp10);
		}
	}
}
;
	return null();
}

//Style_obj::~Style_obj() { }

Dynamic Style_obj::__CreateEmpty() { return  new Style_obj; }
hx::ObjectPtr< Style_obj > Style_obj::__new(Dynamic defaults)
{  hx::ObjectPtr< Style_obj > _result_ = new Style_obj();
	_result_->__construct(defaults);
	return _result_;}

Dynamic Style_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Style_obj > _result_ = new Style_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Style_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Style_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Style_obj >(this); }
::haxe::ui::toolkit::core::interfaces::IDisplayObject Style_obj::get_target( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_target",0x629d2f76,"haxe.ui.toolkit.style.Style.get_target","haxe/ui/toolkit/style/Style.hx",137,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = this->_target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_target,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject Style_obj::set_target( ::haxe::ui::toolkit::core::interfaces::IDisplayObject value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_target",0x661acdea,"haxe.ui.toolkit.style.Style.set_target","haxe/ui/toolkit/style/Style.hx",141,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(142)
	this->_target = value;
	HX_STACK_LINE(143)
	this->apply();
	HX_STACK_LINE(144)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_target,return )

bool Style_obj::get_autoApply( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_autoApply",0x55d8ec7a,"haxe.ui.toolkit.style.Style.get_autoApply","haxe/ui/toolkit/style/Style.hx",147,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	bool tmp = this->_autoApply;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_autoApply,return )

bool Style_obj::set_autoApply( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_autoApply",0x9adece86,"haxe.ui.toolkit.style.Style.set_autoApply","haxe/ui/toolkit/style/Style.hx",151,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(152)
	this->_autoApply = value;
	HX_STACK_LINE(153)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_autoApply,return )

bool Style_obj::get_visible( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_visible",0x01a8dcad,"haxe.ui.toolkit.style.Style.get_visible","haxe/ui/toolkit/style/Style.hx",156,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	if ((tmp)){
		HX_STACK_LINE(158)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		return tmp1;
	}
	HX_STACK_LINE(160)
	Float tmp1 = this->_visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	if ((tmp2)){
		HX_STACK_LINE(161)
		return false;
	}
	HX_STACK_LINE(163)
	Float tmp3 = this->_visible;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(163)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(163)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_visible,return )

bool Style_obj::set_visible( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_visible",0x0c15e3b9,"haxe.ui.toolkit.style.Style.set_visible","haxe/ui/toolkit/style/Style.hx",166,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(167)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	if ((tmp)){
		HX_STACK_LINE(167)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(167)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(167)
	this->_visible = tmp1;
	HX_STACK_LINE(168)
	this->apply();
	HX_STACK_LINE(169)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_visible,return )

bool Style_obj::get_visibleSet( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_visibleSet",0x54e1e0f5,"haxe.ui.toolkit.style.Style.get_visibleSet","haxe/ui/toolkit/style/Style.hx",172,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	if ((tmp)){
		HX_STACK_LINE(174)
		return true;
	}
	HX_STACK_LINE(176)
	Float tmp1 = this->_visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	if ((tmp2)){
		HX_STACK_LINE(177)
		return true;
	}
	HX_STACK_LINE(179)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_visibleSet,return )

int Style_obj::get_width( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_width",0x85580581,"haxe.ui.toolkit.style.Style.get_width","haxe/ui/toolkit/style/Style.hx",182,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	if ((tmp)){
		HX_STACK_LINE(184)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		return tmp1;
	}
	HX_STACK_LINE(186)
	int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_width,return )

int Style_obj::set_width( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_width",0x68a8f18d,"haxe.ui.toolkit.style.Style.set_width","haxe/ui/toolkit/style/Style.hx",189,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	int tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	if ((tmp2)){
		HX_STACK_LINE(191)
		this->_width = value;
		HX_STACK_LINE(192)
		this->apply();
	}
	HX_STACK_LINE(194)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_width,return )

int Style_obj::get_height( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_height",0xddfc440c,"haxe.ui.toolkit.style.Style.get_height","haxe/ui/toolkit/style/Style.hx",197,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	if ((tmp)){
		HX_STACK_LINE(199)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		return tmp1;
	}
	HX_STACK_LINE(201)
	int tmp1 = this->_height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_height,return )

int Style_obj::set_height( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_height",0xe179e280,"haxe.ui.toolkit.style.Style.set_height","haxe/ui/toolkit/style/Style.hx",204,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(205)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	int tmp1 = this->_height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(205)
	if ((tmp2)){
		HX_STACK_LINE(206)
		this->_height = value;
		HX_STACK_LINE(207)
		this->apply();
	}
	HX_STACK_LINE(209)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_height,return )

int Style_obj::get_percentWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_percentWidth",0xc83ab6e6,"haxe.ui.toolkit.style.Style.get_percentWidth","haxe/ui/toolkit/style/Style.hx",212,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(213)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	if ((tmp)){
		HX_STACK_LINE(214)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		return tmp1;
	}
	HX_STACK_LINE(216)
	int tmp1 = this->_percentWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_percentWidth,return )

int Style_obj::set_percentWidth( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_percentWidth",0x1e7ca45a,"haxe.ui.toolkit.style.Style.set_percentWidth","haxe/ui/toolkit/style/Style.hx",219,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(220)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(220)
	int tmp1 = this->_percentWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(220)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	if ((tmp2)){
		HX_STACK_LINE(221)
		this->_percentWidth = value;
		HX_STACK_LINE(222)
		this->apply();
	}
	HX_STACK_LINE(224)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(224)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_percentWidth,return )

int Style_obj::get_percentHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_percentHeight",0x2174cb07,"haxe.ui.toolkit.style.Style.get_percentHeight","haxe/ui/toolkit/style/Style.hx",227,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(228)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(228)
	if ((tmp)){
		HX_STACK_LINE(229)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		return tmp1;
	}
	HX_STACK_LINE(231)
	int tmp1 = this->_percentHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_percentHeight,return )

int Style_obj::set_percentHeight( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_percentHeight",0x44e2a313,"haxe.ui.toolkit.style.Style.set_percentHeight","haxe/ui/toolkit/style/Style.hx",234,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(235)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	int tmp1 = this->_percentHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	if ((tmp2)){
		HX_STACK_LINE(236)
		this->_percentHeight = value;
		HX_STACK_LINE(237)
		this->apply();
	}
	HX_STACK_LINE(239)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(239)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_percentHeight,return )

bool Style_obj::get_autoSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_autoSize",0x84ccdf35,"haxe.ui.toolkit.style.Style.get_autoSize","haxe/ui/toolkit/style/Style.hx",242,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	if ((tmp)){
		HX_STACK_LINE(244)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		return tmp1;
	}
	HX_STACK_LINE(246)
	int tmp1 = this->_autoSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	if ((tmp2)){
		HX_STACK_LINE(247)
		return true;
	}
	HX_STACK_LINE(249)
	int tmp3 = this->_autoSize;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(249)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_autoSize,return )

bool Style_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_autoSize",0x99c602a9,"haxe.ui.toolkit.style.Style.set_autoSize","haxe/ui/toolkit/style/Style.hx",252,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(253)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(253)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	if ((tmp)){
		HX_STACK_LINE(253)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(253)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(253)
	this->_autoSize = tmp1;
	HX_STACK_LINE(254)
	this->apply();
	HX_STACK_LINE(255)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_autoSize,return )

bool Style_obj::get_autoSizeSet( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_autoSizeSet",0x0c90236d,"haxe.ui.toolkit.style.Style.get_autoSizeSet","haxe/ui/toolkit/style/Style.hx",258,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(259)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	if ((tmp)){
		HX_STACK_LINE(260)
		return true;
	}
	HX_STACK_LINE(262)
	int tmp1 = this->_autoSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(262)
	bool tmp2 = (tmp1 != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(262)
	if ((tmp2)){
		HX_STACK_LINE(263)
		return true;
	}
	HX_STACK_LINE(265)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_autoSizeSet,return )

::String Style_obj::get_backgroundImage( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundImage",0xed7f93c8,"haxe.ui.toolkit.style.Style.get_backgroundImage","haxe/ui/toolkit/style/Style.hx",268,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	if ((tmp)){
		HX_STACK_LINE(270)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		return tmp1;
	}
	HX_STACK_LINE(272)
	::String tmp1 = this->_backgroundImage;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundImage,return )

::String Style_obj::set_backgroundImage( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundImage",0x2a1c86d4,"haxe.ui.toolkit.style.Style.set_backgroundImage","haxe/ui/toolkit/style/Style.hx",275,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(276)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(276)
	::String tmp1 = this->_backgroundImage;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(276)
	if ((tmp2)){
		HX_STACK_LINE(277)
		this->_backgroundImage = value;
		HX_STACK_LINE(278)
		this->apply();
	}
	HX_STACK_LINE(280)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundImage,return )

::openfl::_legacy::geom::Rectangle Style_obj::get_backgroundImageScale9( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundImageScale9",0x576ef857,"haxe.ui.toolkit.style.Style.get_backgroundImageScale9","haxe/ui/toolkit/style/Style.hx",283,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("backgroundImageScale9","\xdc","\xc2","\x85","\x79"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	if ((tmp)){
		HX_STACK_LINE(285)
		::openfl::_legacy::geom::Rectangle tmp1 = this->getDynamicValue(HX_HCSTRING("backgroundImageScale9","\xdc","\xc2","\x85","\x79"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(285)
		return tmp1;
	}
	HX_STACK_LINE(287)
	::openfl::_legacy::geom::Rectangle tmp1 = this->_backgroundImageScale9;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(287)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundImageScale9,return )

::openfl::_legacy::geom::Rectangle Style_obj::set_backgroundImageScale9( ::openfl::_legacy::geom::Rectangle value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundImageScale9",0xc3c5bc63,"haxe.ui.toolkit.style.Style.set_backgroundImageScale9","haxe/ui/toolkit/style/Style.hx",290,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(291)
	::openfl::_legacy::geom::Rectangle tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	::openfl::_legacy::geom::Rectangle tmp1 = this->_backgroundImageScale9;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(291)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(291)
	if ((tmp2)){
		HX_STACK_LINE(292)
		this->_backgroundImageScale9 = value;
		HX_STACK_LINE(293)
		this->apply();
	}
	HX_STACK_LINE(295)
	::openfl::_legacy::geom::Rectangle tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(295)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundImageScale9,return )

::openfl::_legacy::geom::Rectangle Style_obj::get_backgroundImageRect( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundImageRect",0x5ee9910c,"haxe.ui.toolkit.style.Style.get_backgroundImageRect","haxe/ui/toolkit/style/Style.hx",298,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(299)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("backgroundImageRect","\x51","\x40","\x02","\x06"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	if ((tmp)){
		HX_STACK_LINE(300)
		::openfl::_legacy::geom::Rectangle tmp1 = this->getDynamicValue(HX_HCSTRING("backgroundImageRect","\x51","\x40","\x02","\x06"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(300)
		return tmp1;
	}
	HX_STACK_LINE(302)
	::openfl::_legacy::geom::Rectangle tmp1 = this->_backgroundImageRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(302)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundImageRect,return )

::openfl::_legacy::geom::Rectangle Style_obj::set_backgroundImageRect( ::openfl::_legacy::geom::Rectangle value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundImageRect",0x614afa18,"haxe.ui.toolkit.style.Style.set_backgroundImageRect","haxe/ui/toolkit/style/Style.hx",305,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(306)
	::openfl::_legacy::geom::Rectangle tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(306)
	::openfl::_legacy::geom::Rectangle tmp1 = this->_backgroundImageRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(306)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(306)
	if ((tmp2)){
		HX_STACK_LINE(307)
		this->_backgroundImageRect = value;
		HX_STACK_LINE(308)
		this->apply();
	}
	HX_STACK_LINE(310)
	::openfl::_legacy::geom::Rectangle tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(310)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundImageRect,return )

int Style_obj::get_backgroundColor( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundColor",0x7a72e5d0,"haxe.ui.toolkit.style.Style.get_backgroundColor","haxe/ui/toolkit/style/Style.hx",313,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(314)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	if ((tmp)){
		HX_STACK_LINE(315)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		return tmp1;
	}
	HX_STACK_LINE(317)
	int tmp1 = this->_backgroundColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundColor,return )

int Style_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundColor",0xb70fd8dc,"haxe.ui.toolkit.style.Style.set_backgroundColor","haxe/ui/toolkit/style/Style.hx",320,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(321)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	int tmp1 = this->_backgroundColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(321)
	if ((tmp2)){
		HX_STACK_LINE(322)
		this->_backgroundColor = value;
		HX_STACK_LINE(323)
		this->apply();
	}
	HX_STACK_LINE(325)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(325)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundColor,return )

int Style_obj::get_backgroundColorGradientEnd( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundColorGradientEnd",0xf6bb3bdb,"haxe.ui.toolkit.style.Style.get_backgroundColorGradientEnd","haxe/ui/toolkit/style/Style.hx",328,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(329)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(329)
	if ((tmp)){
		HX_STACK_LINE(330)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		return tmp1;
	}
	HX_STACK_LINE(332)
	int tmp1 = this->_backgroundColorGradientEnd;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundColorGradientEnd,return )

int Style_obj::set_backgroundColorGradientEnd( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundColorGradientEnd",0xd1a64c4f,"haxe.ui.toolkit.style.Style.set_backgroundColorGradientEnd","haxe/ui/toolkit/style/Style.hx",335,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(336)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	int tmp1 = this->_backgroundColorGradientEnd;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(336)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	if ((tmp2)){
		HX_STACK_LINE(337)
		this->_backgroundColorGradientEnd = value;
		HX_STACK_LINE(338)
		this->apply();
	}
	HX_STACK_LINE(340)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(340)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundColorGradientEnd,return )

Float Style_obj::get_backgroundAlpha( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundAlpha",0x51ad1bcb,"haxe.ui.toolkit.style.Style.get_backgroundAlpha","haxe/ui/toolkit/style/Style.hx",343,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(344)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("backgroundAlpha","\x90","\x84","\x81","\xe4"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(344)
	if ((tmp)){
		HX_STACK_LINE(345)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("backgroundAlpha","\x90","\x84","\x81","\xe4"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(345)
		return tmp1;
	}
	HX_STACK_LINE(347)
	Float tmp1 = this->_backgroundAlpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(347)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundAlpha,return )

Float Style_obj::set_backgroundAlpha( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundAlpha",0x8e4a0ed7,"haxe.ui.toolkit.style.Style.set_backgroundAlpha","haxe/ui/toolkit/style/Style.hx",350,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(351)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	Float tmp1 = this->_backgroundAlpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(351)
	if ((tmp2)){
		HX_STACK_LINE(352)
		this->_backgroundAlpha = value;
		HX_STACK_LINE(353)
		this->apply();
	}
	HX_STACK_LINE(355)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundAlpha,return )

int Style_obj::get_borderColor( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_borderColor",0xd1ffda92,"haxe.ui.toolkit.style.Style.get_borderColor","haxe/ui/toolkit/style/Style.hx",358,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(359)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	if ((tmp)){
		HX_STACK_LINE(360)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(360)
		return tmp1;
	}
	HX_STACK_LINE(362)
	int tmp1 = this->_borderColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_borderColor,return )

int Style_obj::set_borderColor( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_borderColor",0xcdcb579e,"haxe.ui.toolkit.style.Style.set_borderColor","haxe/ui/toolkit/style/Style.hx",365,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(366)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(366)
	int tmp1 = this->_borderColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(366)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(366)
	if ((tmp2)){
		HX_STACK_LINE(367)
		this->_borderColor = value;
		HX_STACK_LINE(368)
		this->apply();
	}
	HX_STACK_LINE(370)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(370)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_borderColor,return )

int Style_obj::get_borderSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_borderSize",0xd33fb272,"haxe.ui.toolkit.style.Style.get_borderSize","haxe/ui/toolkit/style/Style.hx",373,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(374)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(374)
	if ((tmp)){
		HX_STACK_LINE(375)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		return tmp1;
	}
	HX_STACK_LINE(377)
	int tmp1 = this->_borderSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(377)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_borderSize,return )

int Style_obj::set_borderSize( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_borderSize",0xf35f9ae6,"haxe.ui.toolkit.style.Style.set_borderSize","haxe/ui/toolkit/style/Style.hx",380,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(381)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(381)
	int tmp1 = this->_borderSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(381)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(381)
	if ((tmp2)){
		HX_STACK_LINE(382)
		this->_borderSize = value;
		HX_STACK_LINE(383)
		this->apply();
	}
	HX_STACK_LINE(385)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(385)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_borderSize,return )

Float Style_obj::get_borderAlpha( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_borderAlpha",0xa93a108d,"haxe.ui.toolkit.style.Style.get_borderAlpha","haxe/ui/toolkit/style/Style.hx",388,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(389)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("borderAlpha","\xd2","\x72","\x0f","\xae"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	if ((tmp)){
		HX_STACK_LINE(390)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("borderAlpha","\xd2","\x72","\x0f","\xae"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(390)
		return tmp1;
	}
	HX_STACK_LINE(392)
	Float tmp1 = this->_borderAlpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(392)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_borderAlpha,return )

Float Style_obj::set_borderAlpha( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_borderAlpha",0xa5058d99,"haxe.ui.toolkit.style.Style.set_borderAlpha","haxe/ui/toolkit/style/Style.hx",395,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(396)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(396)
	Float tmp1 = this->_borderAlpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(396)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(396)
	if ((tmp2)){
		HX_STACK_LINE(397)
		this->_borderAlpha = value;
		HX_STACK_LINE(398)
		this->apply();
	}
	HX_STACK_LINE(400)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(400)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_borderAlpha,return )

int Style_obj::get_color( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_color",0x0551c0de,"haxe.ui.toolkit.style.Style.get_color","haxe/ui/toolkit/style/Style.hx",403,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(404)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(404)
	if ((tmp)){
		HX_STACK_LINE(405)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		return tmp1;
	}
	HX_STACK_LINE(407)
	int tmp1 = this->_color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(407)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_color,return )

int Style_obj::set_color( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_color",0xe8a2acea,"haxe.ui.toolkit.style.Style.set_color","haxe/ui/toolkit/style/Style.hx",410,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(411)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(411)
	int tmp1 = this->_color;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(411)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(411)
	if ((tmp2)){
		HX_STACK_LINE(412)
		this->_color = value;
		HX_STACK_LINE(413)
		this->apply();
	}
	HX_STACK_LINE(415)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(415)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_color,return )

int Style_obj::get_paddingLeft( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_paddingLeft",0x8110e833,"haxe.ui.toolkit.style.Style.get_paddingLeft","haxe/ui/toolkit/style/Style.hx",418,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(419)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(419)
	if ((tmp)){
		HX_STACK_LINE(420)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(420)
		return tmp1;
	}
	HX_STACK_LINE(422)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(422)
	if ((tmp1)){
		HX_STACK_LINE(423)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(423)
		return tmp2;
	}
	HX_STACK_LINE(425)
	int tmp2 = this->_paddingLeft;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(425)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_paddingLeft,return )

int Style_obj::set_paddingLeft( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_paddingLeft",0x7cdc653f,"haxe.ui.toolkit.style.Style.set_paddingLeft","haxe/ui/toolkit/style/Style.hx",428,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(429)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(429)
	int tmp1 = this->_paddingLeft;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(429)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(429)
	if ((tmp2)){
		HX_STACK_LINE(430)
		this->_paddingLeft = value;
		HX_STACK_LINE(431)
		this->apply();
	}
	HX_STACK_LINE(433)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(433)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_paddingLeft,return )

int Style_obj::get_paddingRight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_paddingRight",0xe4c75230,"haxe.ui.toolkit.style.Style.get_paddingRight","haxe/ui/toolkit/style/Style.hx",436,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(437)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(437)
	if ((tmp)){
		HX_STACK_LINE(438)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		return tmp1;
	}
	HX_STACK_LINE(440)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	if ((tmp1)){
		HX_STACK_LINE(441)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(441)
		return tmp2;
	}
	HX_STACK_LINE(443)
	int tmp2 = this->_paddingRight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(443)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_paddingRight,return )

int Style_obj::set_paddingRight( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_paddingRight",0x3b093fa4,"haxe.ui.toolkit.style.Style.set_paddingRight","haxe/ui/toolkit/style/Style.hx",446,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(447)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(447)
	int tmp1 = this->_paddingRight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(447)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(447)
	if ((tmp2)){
		HX_STACK_LINE(448)
		this->_paddingRight = value;
		HX_STACK_LINE(449)
		this->apply();
	}
	HX_STACK_LINE(451)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(451)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_paddingRight,return )

int Style_obj::get_paddingTop( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_paddingTop",0x0657afe9,"haxe.ui.toolkit.style.Style.get_paddingTop","haxe/ui/toolkit/style/Style.hx",454,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(455)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	if ((tmp)){
		HX_STACK_LINE(456)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(456)
		return tmp1;
	}
	HX_STACK_LINE(458)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(458)
	if ((tmp1)){
		HX_STACK_LINE(459)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(459)
		return tmp2;
	}
	HX_STACK_LINE(461)
	int tmp2 = this->_paddingTop;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(461)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_paddingTop,return )

int Style_obj::set_paddingTop( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_paddingTop",0x2677985d,"haxe.ui.toolkit.style.Style.set_paddingTop","haxe/ui/toolkit/style/Style.hx",464,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(465)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(465)
	int tmp1 = this->_paddingTop;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(465)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(465)
	if ((tmp2)){
		HX_STACK_LINE(466)
		this->_paddingTop = value;
		HX_STACK_LINE(467)
		this->apply();
	}
	HX_STACK_LINE(469)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(469)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_paddingTop,return )

int Style_obj::get_paddingBottom( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_paddingBottom",0x60f32a17,"haxe.ui.toolkit.style.Style.get_paddingBottom","haxe/ui/toolkit/style/Style.hx",472,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(473)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(473)
	if ((tmp)){
		HX_STACK_LINE(474)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(474)
		return tmp1;
	}
	HX_STACK_LINE(476)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	if ((tmp1)){
		HX_STACK_LINE(477)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(477)
		return tmp2;
	}
	HX_STACK_LINE(479)
	int tmp2 = this->_paddingBottom;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(479)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_paddingBottom,return )

int Style_obj::set_paddingBottom( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_paddingBottom",0x84610223,"haxe.ui.toolkit.style.Style.set_paddingBottom","haxe/ui/toolkit/style/Style.hx",482,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(483)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(483)
	int tmp1 = this->_paddingBottom;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(483)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(483)
	if ((tmp2)){
		HX_STACK_LINE(484)
		this->_paddingBottom = value;
		HX_STACK_LINE(485)
		this->apply();
	}
	HX_STACK_LINE(487)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(487)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_paddingBottom,return )

int Style_obj::get_padding( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_padding",0x2f01be0c,"haxe.ui.toolkit.style.Style.get_padding","haxe/ui/toolkit/style/Style.hx",490,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(491)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(491)
	if ((tmp)){
		HX_STACK_LINE(492)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(492)
		return tmp1;
	}
	HX_STACK_LINE(494)
	int tmp1 = this->_paddingLeft;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(494)
	int tmp2 = this->_paddingRight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(494)
	int tmp3 = (int(tmp1) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(494)
	int tmp4 = this->_paddingTop;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(494)
	int tmp5 = (int(tmp3) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(494)
	int tmp6 = this->_paddingBottom;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(494)
	int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(494)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(494)
	tmp8 = hx::TCast< ::Int >::cast(tmp7);
	HX_STACK_LINE(494)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_padding,return )

int Style_obj::set_padding( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_padding",0x396ec518,"haxe.ui.toolkit.style.Style.set_padding","haxe/ui/toolkit/style/Style.hx",497,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(498)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	int tmp1 = this->_paddingLeft;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(498)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(498)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(498)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(498)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(498)
	if ((tmp4)){
		HX_STACK_LINE(498)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		int tmp7 = this->_paddingRight;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		tmp5 = (tmp6 != tmp9);
	}
	else{
		HX_STACK_LINE(498)
		tmp5 = true;
	}
	HX_STACK_LINE(498)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(498)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(498)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(498)
	if ((tmp7)){
		HX_STACK_LINE(498)
		int tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(498)
		int tmp10 = this->_paddingTop;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(498)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(498)
		tmp8 = (tmp9 != tmp12);
	}
	else{
		HX_STACK_LINE(498)
		tmp8 = true;
	}
	HX_STACK_LINE(498)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(498)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(498)
	if ((tmp9)){
		HX_STACK_LINE(498)
		int tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(498)
		int tmp12 = this->_paddingBottom;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(498)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(498)
		tmp10 = (tmp11 != tmp13);
	}
	else{
		HX_STACK_LINE(498)
		tmp10 = true;
	}
	HX_STACK_LINE(498)
	if ((tmp10)){
		HX_STACK_LINE(499)
		this->_paddingLeft = value;
		HX_STACK_LINE(500)
		this->_paddingRight = value;
		HX_STACK_LINE(501)
		this->_paddingTop = value;
		HX_STACK_LINE(502)
		this->_paddingBottom = value;
		HX_STACK_LINE(503)
		this->apply();
	}
	HX_STACK_LINE(505)
	int tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(505)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_padding,return )

int Style_obj::get_spacingX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_spacingX",0x47652eda,"haxe.ui.toolkit.style.Style.get_spacingX","haxe/ui/toolkit/style/Style.hx",508,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(509)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	if ((tmp)){
		HX_STACK_LINE(510)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(510)
		return tmp1;
	}
	HX_STACK_LINE(512)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(512)
	if ((tmp1)){
		HX_STACK_LINE(513)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(513)
		return tmp2;
	}
	HX_STACK_LINE(515)
	int tmp2 = this->_spacingX;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(515)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_spacingX,return )

int Style_obj::set_spacingX( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_spacingX",0x5c5e524e,"haxe.ui.toolkit.style.Style.set_spacingX","haxe/ui/toolkit/style/Style.hx",518,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(519)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(519)
	int tmp1 = this->_spacingX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(519)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(519)
	if ((tmp2)){
		HX_STACK_LINE(520)
		this->_spacingX = value;
		HX_STACK_LINE(521)
		this->apply();
	}
	HX_STACK_LINE(523)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(523)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_spacingX,return )

int Style_obj::get_spacingY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_spacingY",0x47652edb,"haxe.ui.toolkit.style.Style.get_spacingY","haxe/ui/toolkit/style/Style.hx",526,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(527)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	if ((tmp)){
		HX_STACK_LINE(528)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(528)
		return tmp1;
	}
	HX_STACK_LINE(530)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(530)
	if ((tmp1)){
		HX_STACK_LINE(531)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(531)
		return tmp2;
	}
	HX_STACK_LINE(533)
	int tmp2 = this->_spacingY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(533)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_spacingY,return )

int Style_obj::set_spacingY( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_spacingY",0x5c5e524f,"haxe.ui.toolkit.style.Style.set_spacingY","haxe/ui/toolkit/style/Style.hx",536,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(537)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	int tmp1 = this->_spacingY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(537)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(537)
	if ((tmp2)){
		HX_STACK_LINE(538)
		this->_spacingY = value;
		HX_STACK_LINE(539)
		this->apply();
	}
	HX_STACK_LINE(541)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(541)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_spacingY,return )

int Style_obj::get_spacing( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_spacing",0xf03f97be,"haxe.ui.toolkit.style.Style.get_spacing","haxe/ui/toolkit/style/Style.hx",544,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(545)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(545)
	if ((tmp)){
		HX_STACK_LINE(546)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(546)
		return tmp1;
	}
	HX_STACK_LINE(548)
	int tmp1 = this->_spacingX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(548)
	int tmp2 = this->_spacingY;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(548)
	int tmp3 = (int(tmp1) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(548)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_spacing,return )

int Style_obj::set_spacing( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_spacing",0xfaac9eca,"haxe.ui.toolkit.style.Style.set_spacing","haxe/ui/toolkit/style/Style.hx",551,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(552)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	int tmp1 = this->_spacingX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(552)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(552)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(552)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(552)
	if ((tmp3)){
		HX_STACK_LINE(552)
		int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(552)
		int tmp6 = this->_spacingY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(552)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(552)
		tmp4 = (tmp5 != tmp7);
	}
	else{
		HX_STACK_LINE(552)
		tmp4 = true;
	}
	HX_STACK_LINE(552)
	if ((tmp4)){
		HX_STACK_LINE(553)
		this->_spacingX = value;
		HX_STACK_LINE(554)
		this->_spacingY = value;
		HX_STACK_LINE(555)
		this->apply();
	}
	HX_STACK_LINE(557)
	int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(557)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_spacing,return )

Float Style_obj::get_rotationX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_rotationX",0xc0818255,"haxe.ui.toolkit.style.Style.get_rotationX","haxe/ui/toolkit/style/Style.hx",560,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(561)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(561)
	if ((tmp)){
		HX_STACK_LINE(562)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(562)
		return tmp1;
	}
	HX_STACK_LINE(564)
	Float tmp1 = this->_rotationX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_rotationX,return )

Float Style_obj::set_rotationX( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_rotationX",0x05876461,"haxe.ui.toolkit.style.Style.set_rotationX","haxe/ui/toolkit/style/Style.hx",567,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(568)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(568)
	Float tmp1 = this->_rotationX;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(568)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(568)
	if ((tmp2)){
		HX_STACK_LINE(569)
		this->_rotationX = value;
		HX_STACK_LINE(570)
		this->apply();
	}
	HX_STACK_LINE(572)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(572)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_rotationX,return )

Float Style_obj::get_rotationY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_rotationY",0xc0818256,"haxe.ui.toolkit.style.Style.get_rotationY","haxe/ui/toolkit/style/Style.hx",575,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(576)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(576)
	if ((tmp)){
		HX_STACK_LINE(577)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(577)
		return tmp1;
	}
	HX_STACK_LINE(579)
	Float tmp1 = this->_rotationY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(579)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_rotationY,return )

Float Style_obj::set_rotationY( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_rotationY",0x05876462,"haxe.ui.toolkit.style.Style.set_rotationY","haxe/ui/toolkit/style/Style.hx",582,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(583)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(583)
	Float tmp1 = this->_rotationY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(583)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(583)
	if ((tmp2)){
		HX_STACK_LINE(584)
		this->_rotationY = value;
		HX_STACK_LINE(585)
		this->apply();
	}
	HX_STACK_LINE(587)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(587)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_rotationY,return )

Float Style_obj::get_rotationZ( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_rotationZ",0xc0818257,"haxe.ui.toolkit.style.Style.get_rotationZ","haxe/ui/toolkit/style/Style.hx",590,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(591)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("rotationZ","\x5c","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(591)
	if ((tmp)){
		HX_STACK_LINE(592)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("rotationZ","\x5c","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(592)
		return tmp1;
	}
	HX_STACK_LINE(594)
	Float tmp1 = this->_rotationY;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(594)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_rotationZ,return )

Float Style_obj::set_rotationZ( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_rotationZ",0x05876463,"haxe.ui.toolkit.style.Style.set_rotationZ","haxe/ui/toolkit/style/Style.hx",597,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(598)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(598)
	Float tmp1 = this->_rotationZ;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(598)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(598)
	if ((tmp2)){
		HX_STACK_LINE(599)
		this->_rotationZ = value;
		HX_STACK_LINE(600)
		this->apply();
	}
	HX_STACK_LINE(602)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(602)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_rotationZ,return )

::String Style_obj::get_horizontalAlignment( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_horizontalAlignment",0x0f275a1a,"haxe.ui.toolkit.style.Style.get_horizontalAlignment","haxe/ui/toolkit/style/Style.hx",605,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(606)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("horizontalAlignment","\x5f","\x09","\x40","\xb6"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(606)
	if ((tmp)){
		HX_STACK_LINE(607)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("horizontalAlignment","\x5f","\x09","\x40","\xb6"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		return tmp1;
	}
	HX_STACK_LINE(609)
	::String tmp1 = this->_horizontalAlignment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(609)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_horizontalAlignment,return )

::String Style_obj::set_horizontalAlignment( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_horizontalAlignment",0x1188c326,"haxe.ui.toolkit.style.Style.set_horizontalAlignment","haxe/ui/toolkit/style/Style.hx",612,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(613)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(613)
	::String tmp1 = this->_horizontalAlignment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(613)
	if ((tmp2)){
		HX_STACK_LINE(614)
		this->_horizontalAlignment = value;
		HX_STACK_LINE(615)
		this->apply();
	}
	HX_STACK_LINE(617)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(617)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_horizontalAlignment,return )

::String Style_obj::get_verticalAlignment( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_verticalAlignment",0xca62e388,"haxe.ui.toolkit.style.Style.get_verticalAlignment","haxe/ui/toolkit/style/Style.hx",620,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(621)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("verticalAlignment","\x8d","\xc7","\xb6","\x09"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	if ((tmp)){
		HX_STACK_LINE(622)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("verticalAlignment","\x8d","\xc7","\xb6","\x09"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(622)
		return tmp1;
	}
	HX_STACK_LINE(624)
	::String tmp1 = this->_verticalAlignment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(624)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_verticalAlignment,return )

::String Style_obj::set_verticalAlignment( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_verticalAlignment",0x1e6bb194,"haxe.ui.toolkit.style.Style.set_verticalAlignment","haxe/ui/toolkit/style/Style.hx",627,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(628)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(628)
	::String tmp1 = this->_verticalAlignment;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(628)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(628)
	if ((tmp2)){
		HX_STACK_LINE(629)
		this->_verticalAlignment = value;
		HX_STACK_LINE(630)
		this->apply();
	}
	HX_STACK_LINE(632)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(632)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_verticalAlignment,return )

int Style_obj::get_cornerRadiusTopLeft( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadiusTopLeft",0xecb34eb0,"haxe.ui.toolkit.style.Style.get_cornerRadiusTopLeft","haxe/ui/toolkit/style/Style.hx",635,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(636)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("cornerRadiusTopLeft","\xf5","\xfd","\xcb","\x93"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(636)
	if ((tmp)){
		HX_STACK_LINE(637)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("cornerRadiusTopLeft","\xf5","\xfd","\xcb","\x93"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(637)
		return tmp1;
	}
	HX_STACK_LINE(639)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(639)
	if ((tmp1)){
		HX_STACK_LINE(640)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(640)
		return tmp2;
	}
	HX_STACK_LINE(642)
	int tmp2 = this->_cornerRadiusTopLeft;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(642)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadiusTopLeft,return )

int Style_obj::set_cornerRadiusTopLeft( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadiusTopLeft",0xef14b7bc,"haxe.ui.toolkit.style.Style.set_cornerRadiusTopLeft","haxe/ui/toolkit/style/Style.hx",645,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(646)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(646)
	int tmp1 = this->_cornerRadiusTopLeft;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(646)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(646)
	if ((tmp2)){
		HX_STACK_LINE(647)
		this->_cornerRadiusTopLeft = value;
		HX_STACK_LINE(648)
		this->apply();
	}
	HX_STACK_LINE(650)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(650)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadiusTopLeft,return )

int Style_obj::get_cornerRadiusTopRight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadiusTopRight",0xa73e9913,"haxe.ui.toolkit.style.Style.get_cornerRadiusTopRight","haxe/ui/toolkit/style/Style.hx",653,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(654)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("cornerRadiusTopRight","\x2e","\x46","\xbf","\x35"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(654)
	if ((tmp)){
		HX_STACK_LINE(655)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("cornerRadiusTopRight","\x2e","\x46","\xbf","\x35"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(655)
		return tmp1;
	}
	HX_STACK_LINE(657)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(657)
	if ((tmp1)){
		HX_STACK_LINE(658)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(658)
		return tmp2;
	}
	HX_STACK_LINE(660)
	int tmp2 = this->_cornerRadiusTopRight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(660)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadiusTopRight,return )

int Style_obj::set_cornerRadiusTopRight( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadiusTopRight",0xba191a87,"haxe.ui.toolkit.style.Style.set_cornerRadiusTopRight","haxe/ui/toolkit/style/Style.hx",663,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(664)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(664)
	int tmp1 = this->_cornerRadiusTopRight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(664)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(664)
	if ((tmp2)){
		HX_STACK_LINE(665)
		this->_cornerRadiusTopRight = value;
		HX_STACK_LINE(666)
		this->apply();
	}
	HX_STACK_LINE(668)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(668)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadiusTopRight,return )

int Style_obj::get_cornerRadiusBottomLeft( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadiusBottomLeft",0x944b079e,"haxe.ui.toolkit.style.Style.get_cornerRadiusBottomLeft","haxe/ui/toolkit/style/Style.hx",671,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(672)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("cornerRadiusBottomLeft","\x79","\x71","\x25","\x46"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	if ((tmp)){
		HX_STACK_LINE(673)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("cornerRadiusBottomLeft","\x79","\x71","\x25","\x46"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(673)
		return tmp1;
	}
	HX_STACK_LINE(675)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(675)
	if ((tmp1)){
		HX_STACK_LINE(676)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(676)
		return tmp2;
	}
	HX_STACK_LINE(678)
	int tmp2 = this->_cornerRadiusBottomLeft;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(678)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadiusBottomLeft,return )

int Style_obj::set_cornerRadiusBottomLeft( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadiusBottomLeft",0xf3dfce12,"haxe.ui.toolkit.style.Style.set_cornerRadiusBottomLeft","haxe/ui/toolkit/style/Style.hx",681,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(682)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(682)
	int tmp1 = this->_cornerRadiusBottomLeft;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(682)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(682)
	if ((tmp2)){
		HX_STACK_LINE(683)
		this->_cornerRadiusBottomLeft = value;
		HX_STACK_LINE(684)
		this->apply();
	}
	HX_STACK_LINE(686)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(686)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadiusBottomLeft,return )

int Style_obj::get_cornerRadiusBottomRight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadiusBottomRight",0xa468b065,"haxe.ui.toolkit.style.Style.get_cornerRadiusBottomRight","haxe/ui/toolkit/style/Style.hx",689,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(690)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("cornerRadiusBottomRight","\x2a","\xe6","\xaa","\x91"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(690)
	if ((tmp)){
		HX_STACK_LINE(691)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("cornerRadiusBottomRight","\x2a","\xe6","\xaa","\x91"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(691)
		return tmp1;
	}
	HX_STACK_LINE(693)
	bool tmp1 = this->hasDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(693)
	if ((tmp1)){
		HX_STACK_LINE(694)
		Dynamic tmp2 = this->getDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(694)
		return tmp2;
	}
	HX_STACK_LINE(696)
	int tmp2 = this->_cornerRadiusBottomRight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(696)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadiusBottomRight,return )

int Style_obj::set_cornerRadiusBottomRight( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadiusBottomRight",0xe7018f71,"haxe.ui.toolkit.style.Style.set_cornerRadiusBottomRight","haxe/ui/toolkit/style/Style.hx",699,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(700)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(700)
	int tmp1 = this->_cornerRadiusBottomRight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(700)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(700)
	if ((tmp2)){
		HX_STACK_LINE(701)
		this->_cornerRadiusBottomRight = value;
		HX_STACK_LINE(702)
		this->apply();
	}
	HX_STACK_LINE(704)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(704)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadiusBottomRight,return )

int Style_obj::get_cornerRadius( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadius",0x577cf7ec,"haxe.ui.toolkit.style.Style.get_cornerRadius","haxe/ui/toolkit/style/Style.hx",707,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(708)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(708)
	if ((tmp)){
		HX_STACK_LINE(709)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(709)
		return tmp1;
	}
	HX_STACK_LINE(711)
	int tmp1 = this->_cornerRadiusTopLeft;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(711)
	int tmp2 = this->_cornerRadiusTopRight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(711)
	int tmp3 = (int(tmp1) | int(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(711)
	int tmp4 = this->_cornerRadiusBottomLeft;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(711)
	int tmp5 = (int(tmp3) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(711)
	int tmp6 = this->_cornerRadiusBottomRight;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(711)
	int tmp7 = (int(tmp5) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(711)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadius,return )

int Style_obj::set_cornerRadius( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadius",0xadbee560,"haxe.ui.toolkit.style.Style.set_cornerRadius","haxe/ui/toolkit/style/Style.hx",714,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(715)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(715)
	int tmp1 = this->_cornerRadiusTopLeft;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(715)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(715)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(715)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(715)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(715)
	if ((tmp4)){
		HX_STACK_LINE(715)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(715)
		int tmp7 = this->_cornerRadiusTopRight;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(715)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(715)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(715)
		tmp5 = (tmp6 != tmp9);
	}
	else{
		HX_STACK_LINE(715)
		tmp5 = true;
	}
	HX_STACK_LINE(715)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(715)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(715)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(715)
	if ((tmp7)){
		HX_STACK_LINE(715)
		int tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(715)
		int tmp10 = this->_cornerRadiusBottomLeft;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(715)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(715)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(715)
		tmp8 = (tmp9 != tmp12);
	}
	else{
		HX_STACK_LINE(715)
		tmp8 = true;
	}
	HX_STACK_LINE(715)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(715)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(715)
	if ((tmp9)){
		HX_STACK_LINE(715)
		int tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(715)
		int tmp12 = this->_cornerRadiusBottomRight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(715)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(715)
		tmp10 = (tmp11 != tmp13);
	}
	else{
		HX_STACK_LINE(715)
		tmp10 = true;
	}
	HX_STACK_LINE(715)
	if ((tmp10)){
		HX_STACK_LINE(716)
		this->_cornerRadiusTopLeft = value;
		HX_STACK_LINE(717)
		this->_cornerRadiusTopRight = value;
		HX_STACK_LINE(718)
		this->_cornerRadiusBottomLeft = value;
		HX_STACK_LINE(719)
		this->_cornerRadiusBottomRight = value;
		HX_STACK_LINE(720)
		this->apply();
	}
	HX_STACK_LINE(722)
	int tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(722)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadius,return )

::openfl::_legacy::filters::BitmapFilter Style_obj::get_filter( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_filter",0x60e55bdd,"haxe.ui.toolkit.style.Style.get_filter","haxe/ui/toolkit/style/Style.hx",725,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(729)
	::openfl::_legacy::filters::BitmapFilter filter = null();		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(730)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(730)
	if ((tmp)){
		HX_STACK_LINE(731)
		::openfl::_legacy::filters::BitmapFilter tmp1 = this->getDynamicValue(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(731)
		filter = tmp1;
	}
	else{
		HX_STACK_LINE(733)
		::openfl::_legacy::filters::BitmapFilter tmp1 = this->_filter;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(733)
		filter = tmp1;
	}
	HX_STACK_LINE(736)
	int overrideQuality = (int)-1;		HX_STACK_VAR(overrideQuality,"overrideQuality");
	HX_STACK_LINE(746)
	bool tmp1 = (overrideQuality != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(746)
	if ((tmp1)){
		HX_STACK_LINE(747)
		::openfl::_legacy::filters::BitmapFilter tmp2 = filter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(747)
		int tmp3 = overrideQuality;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(747)
		::openfl::_legacy::filters::BitmapFilter tmp4 = ::haxe::ui::toolkit::util::FilterParser_obj::changeFilterQuality(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(747)
		filter = tmp4;
	}
	HX_STACK_LINE(749)
	::openfl::_legacy::filters::BitmapFilter tmp2 = filter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(749)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_filter,return )

::openfl::_legacy::filters::BitmapFilter Style_obj::set_filter( ::openfl::_legacy::filters::BitmapFilter value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_filter",0x6462fa51,"haxe.ui.toolkit.style.Style.set_filter","haxe/ui/toolkit/style/Style.hx",752,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(753)
	this->_filterSet = true;
	HX_STACK_LINE(755)
	this->_filter = value;
	HX_STACK_LINE(756)
	this->apply();
	HX_STACK_LINE(758)
	::openfl::_legacy::filters::BitmapFilter tmp = this->_filter;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(758)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_filter,return )

Float Style_obj::get_alpha( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_alpha",0xdc8bf6d9,"haxe.ui.toolkit.style.Style.get_alpha","haxe/ui/toolkit/style/Style.hx",761,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(762)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(762)
	if ((tmp)){
		HX_STACK_LINE(763)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(763)
		return tmp1;
	}
	HX_STACK_LINE(765)
	Float tmp1 = this->_alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(765)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_alpha,return )

Float Style_obj::set_alpha( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_alpha",0xbfdce2e5,"haxe.ui.toolkit.style.Style.set_alpha","haxe/ui/toolkit/style/Style.hx",768,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(769)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(769)
	Float tmp1 = this->_alpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(769)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(769)
	if ((tmp2)){
		HX_STACK_LINE(770)
		this->_alpha = value;
		HX_STACK_LINE(771)
		this->apply();
	}
	HX_STACK_LINE(773)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(773)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_alpha,return )

::String Style_obj::get_fontName( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontName",0x20d0df1f,"haxe.ui.toolkit.style.Style.get_fontName","haxe/ui/toolkit/style/Style.hx",776,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(777)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(777)
	if ((tmp)){
		HX_STACK_LINE(778)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(778)
		return tmp1;
	}
	HX_STACK_LINE(780)
	::String tmp1 = this->_fontName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(780)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontName,return )

::String Style_obj::set_fontName( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontName",0x35ca0293,"haxe.ui.toolkit.style.Style.set_fontName","haxe/ui/toolkit/style/Style.hx",783,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(784)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(784)
	::String tmp1 = this->_fontName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(784)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(784)
	if ((tmp2)){
		HX_STACK_LINE(785)
		this->_fontName = value;
		HX_STACK_LINE(786)
		this->apply();
	}
	HX_STACK_LINE(788)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(788)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontName,return )

Float Style_obj::get_fontSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontSize",0x24250d95,"haxe.ui.toolkit.style.Style.get_fontSize","haxe/ui/toolkit/style/Style.hx",791,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(792)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(792)
	if ((tmp)){
		HX_STACK_LINE(793)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(793)
		return tmp1;
	}
	HX_STACK_LINE(795)
	Float tmp1 = this->_fontSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(795)
	Float size = tmp1;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(796)
	Float tmp2 = this->_fontScale;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(796)
	bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(796)
	if ((tmp3)){
		HX_STACK_LINE(797)
		Float tmp4 = this->_fontSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(797)
		Float tmp5 = this->_fontScale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(797)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(797)
		size = tmp6;
	}
	HX_STACK_LINE(799)
	Float tmp4 = size;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(799)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontSize,return )

Float Style_obj::set_fontSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontSize",0x391e3109,"haxe.ui.toolkit.style.Style.set_fontSize","haxe/ui/toolkit/style/Style.hx",802,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(803)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(803)
	Float tmp1 = this->_fontSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(803)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(803)
	if ((tmp2)){
		HX_STACK_LINE(804)
		this->_fontSize = value;
		HX_STACK_LINE(805)
		this->apply();
	}
	HX_STACK_LINE(807)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(807)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontSize,return )

Float Style_obj::get_fontScale( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontScale",0x783c9b36,"haxe.ui.toolkit.style.Style.get_fontScale","haxe/ui/toolkit/style/Style.hx",810,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(811)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("fontScale","\x3b","\x72","\xaa","\x24"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(811)
	if ((tmp)){
		HX_STACK_LINE(812)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("fontScale","\x3b","\x72","\xaa","\x24"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		return tmp1;
	}
	HX_STACK_LINE(814)
	Float tmp1 = this->_fontScale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(814)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontScale,return )

Float Style_obj::set_fontScale( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontScale",0xbd427d42,"haxe.ui.toolkit.style.Style.set_fontScale","haxe/ui/toolkit/style/Style.hx",817,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(818)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	Float tmp1 = this->_fontScale;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(818)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(818)
	if ((tmp2)){
		HX_STACK_LINE(819)
		this->_fontScale = value;
		HX_STACK_LINE(820)
		this->apply();
	}
	HX_STACK_LINE(822)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(822)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontScale,return )

bool Style_obj::get_fontEmbedded( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontEmbedded",0xca4c805e,"haxe.ui.toolkit.style.Style.get_fontEmbedded","haxe/ui/toolkit/style/Style.hx",825,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(826)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(826)
	if ((tmp)){
		HX_STACK_LINE(827)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(827)
		return tmp1;
	}
	HX_STACK_LINE(829)
	Float tmp1 = this->_fontEmbedded;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(829)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(829)
	if ((tmp2)){
		HX_STACK_LINE(830)
		return false;
	}
	HX_STACK_LINE(832)
	Float tmp3 = this->_fontEmbedded;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(832)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(832)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontEmbedded,return )

bool Style_obj::set_fontEmbedded( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontEmbedded",0x208e6dd2,"haxe.ui.toolkit.style.Style.set_fontEmbedded","haxe/ui/toolkit/style/Style.hx",835,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(836)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(836)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(836)
	if ((tmp)){
		HX_STACK_LINE(836)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(836)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(836)
	this->_fontEmbedded = tmp1;
	HX_STACK_LINE(837)
	this->apply();
	HX_STACK_LINE(838)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(838)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontEmbedded,return )

bool Style_obj::get_fontBold( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontBold",0x18ecee59,"haxe.ui.toolkit.style.Style.get_fontBold","haxe/ui/toolkit/style/Style.hx",841,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(842)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("fontBold","\xf4","\x9e","\x99","\xc3"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(842)
	if ((tmp)){
		HX_STACK_LINE(843)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("fontBold","\xf4","\x9e","\x99","\xc3"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(843)
		return tmp1;
	}
	HX_STACK_LINE(845)
	Float tmp1 = this->_fontBold;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(845)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(845)
	if ((tmp2)){
		HX_STACK_LINE(846)
		return false;
	}
	HX_STACK_LINE(848)
	Float tmp3 = this->_fontBold;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(848)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(848)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontBold,return )

bool Style_obj::set_fontBold( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontBold",0x2de611cd,"haxe.ui.toolkit.style.Style.set_fontBold","haxe/ui/toolkit/style/Style.hx",851,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(852)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(852)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(852)
	if ((tmp)){
		HX_STACK_LINE(852)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(852)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(852)
	this->_fontBold = tmp1;
	HX_STACK_LINE(853)
	this->apply();
	HX_STACK_LINE(854)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(854)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontBold,return )

bool Style_obj::get_fontItalic( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontItalic",0x870978c4,"haxe.ui.toolkit.style.Style.get_fontItalic","haxe/ui/toolkit/style/Style.hx",857,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(858)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("fontItalic","\x1f","\xc6","\xb7","\xba"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(858)
	if ((tmp)){
		HX_STACK_LINE(859)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("fontItalic","\x1f","\xc6","\xb7","\xba"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(859)
		return tmp1;
	}
	HX_STACK_LINE(861)
	Float tmp1 = this->_fontItalic;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(861)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(861)
	if ((tmp2)){
		HX_STACK_LINE(862)
		return false;
	}
	HX_STACK_LINE(864)
	Float tmp3 = this->_fontItalic;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(864)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(864)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontItalic,return )

bool Style_obj::set_fontItalic( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontItalic",0xa7296138,"haxe.ui.toolkit.style.Style.set_fontItalic","haxe/ui/toolkit/style/Style.hx",867,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(868)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(868)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(868)
	if ((tmp)){
		HX_STACK_LINE(868)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(868)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(868)
	this->_fontItalic = tmp1;
	HX_STACK_LINE(869)
	this->apply();
	HX_STACK_LINE(870)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(870)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontItalic,return )

bool Style_obj::get_fontUnderline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontUnderline",0x0900a7b8,"haxe.ui.toolkit.style.Style.get_fontUnderline","haxe/ui/toolkit/style/Style.hx",873,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(874)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("fontUnderline","\x3d","\xe5","\xa6","\xf7"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(874)
	if ((tmp)){
		HX_STACK_LINE(875)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("fontUnderline","\x3d","\xe5","\xa6","\xf7"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(875)
		return tmp1;
	}
	HX_STACK_LINE(877)
	Float tmp1 = this->_fontUnderline;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(877)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(877)
	if ((tmp2)){
		HX_STACK_LINE(878)
		return false;
	}
	HX_STACK_LINE(880)
	Float tmp3 = this->_fontUnderline;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(880)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(880)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontUnderline,return )

bool Style_obj::set_fontUnderline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontUnderline",0x2c6e7fc4,"haxe.ui.toolkit.style.Style.set_fontUnderline","haxe/ui/toolkit/style/Style.hx",883,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(884)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(884)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(884)
	if ((tmp)){
		HX_STACK_LINE(884)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(884)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(884)
	this->_fontUnderline = tmp1;
	HX_STACK_LINE(885)
	this->apply();
	HX_STACK_LINE(886)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(886)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontUnderline,return )

::String Style_obj::get_textAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_textAlign",0x0e110fd3,"haxe.ui.toolkit.style.Style.get_textAlign","haxe/ui/toolkit/style/Style.hx",889,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(890)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(890)
	if ((tmp)){
		HX_STACK_LINE(891)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(891)
		return tmp1;
	}
	HX_STACK_LINE(893)
	::String tmp1 = this->_textAlign;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(893)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_textAlign,return )

::String Style_obj::set_textAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_textAlign",0x5316f1df,"haxe.ui.toolkit.style.Style.set_textAlign","haxe/ui/toolkit/style/Style.hx",896,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(897)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(897)
	::String tmp1 = this->_textAlign;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(897)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(897)
	if ((tmp2)){
		HX_STACK_LINE(898)
		this->_textAlign = value;
		HX_STACK_LINE(899)
		this->apply();
	}
	HX_STACK_LINE(901)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(901)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_textAlign,return )

::String Style_obj::get_iconPosition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_iconPosition",0x40584b27,"haxe.ui.toolkit.style.Style.get_iconPosition","haxe/ui/toolkit/style/Style.hx",904,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(905)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(905)
	if ((tmp)){
		HX_STACK_LINE(906)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(906)
		return tmp1;
	}
	HX_STACK_LINE(908)
	::String tmp1 = this->_iconPosition;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(908)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_iconPosition,return )

::String Style_obj::set_iconPosition( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_iconPosition",0x969a389b,"haxe.ui.toolkit.style.Style.set_iconPosition","haxe/ui/toolkit/style/Style.hx",911,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(912)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(912)
	::String tmp1 = this->_iconPosition;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(912)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(912)
	if ((tmp2)){
		HX_STACK_LINE(913)
		this->_iconPosition = value;
		HX_STACK_LINE(914)
		this->apply();
	}
	HX_STACK_LINE(916)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(916)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_iconPosition,return )

::String Style_obj::get_icon( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_icon",0x20a7605e,"haxe.ui.toolkit.style.Style.get_icon","haxe/ui/toolkit/style/Style.hx",919,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(920)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(920)
	if ((tmp)){
		HX_STACK_LINE(921)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(921)
		return tmp1;
	}
	HX_STACK_LINE(923)
	::String tmp1 = this->_icon;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(923)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_icon,return )

::String Style_obj::set_icon( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_icon",0xcf04b9d2,"haxe.ui.toolkit.style.Style.set_icon","haxe/ui/toolkit/style/Style.hx",926,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(927)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(927)
	::String tmp1 = this->_icon;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(927)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(927)
	if ((tmp2)){
		HX_STACK_LINE(928)
		this->_icon = value;
		HX_STACK_LINE(929)
		this->apply();
	}
	HX_STACK_LINE(931)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(931)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_icon,return )

Float Style_obj::get_iconWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_iconWidth",0x57b8b0c8,"haxe.ui.toolkit.style.Style.get_iconWidth","haxe/ui/toolkit/style/Style.hx",934,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(935)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("iconWidth","\xcd","\x87","\x26","\x04"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(935)
	if ((tmp)){
		HX_STACK_LINE(936)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("iconWidth","\xcd","\x87","\x26","\x04"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(936)
		return tmp1;
	}
	HX_STACK_LINE(938)
	Float tmp1 = this->_iconWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(938)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_iconWidth,return )

Float Style_obj::set_iconWidth( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_iconWidth",0x9cbe92d4,"haxe.ui.toolkit.style.Style.set_iconWidth","haxe/ui/toolkit/style/Style.hx",941,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(942)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(942)
	Float tmp1 = this->_iconWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(942)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(942)
	if ((tmp2)){
		HX_STACK_LINE(943)
		this->_iconWidth = value;
		HX_STACK_LINE(944)
		this->apply();
	}
	HX_STACK_LINE(946)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(946)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_iconWidth,return )

Float Style_obj::get_iconHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_iconHeight",0x203176e5,"haxe.ui.toolkit.style.Style.get_iconHeight","haxe/ui/toolkit/style/Style.hx",949,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(950)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("iconHeight","\x40","\xc4","\xdf","\x53"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(950)
	if ((tmp)){
		HX_STACK_LINE(951)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("iconHeight","\x40","\xc4","\xdf","\x53"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(951)
		return tmp1;
	}
	HX_STACK_LINE(953)
	Float tmp1 = this->_iconHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(953)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_iconHeight,return )

Float Style_obj::set_iconHeight( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_iconHeight",0x40515f59,"haxe.ui.toolkit.style.Style.set_iconHeight","haxe/ui/toolkit/style/Style.hx",956,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(957)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(957)
	Float tmp1 = this->_iconHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(957)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(957)
	if ((tmp2)){
		HX_STACK_LINE(958)
		this->_iconHeight = value;
		HX_STACK_LINE(959)
		this->apply();
	}
	HX_STACK_LINE(961)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(961)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_iconHeight,return )

bool Style_obj::get_hasButtons( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_hasButtons",0x217aecac,"haxe.ui.toolkit.style.Style.get_hasButtons","haxe/ui/toolkit/style/Style.hx",964,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(965)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("hasButtons","\x07","\x3a","\x29","\x55"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(965)
	if ((tmp)){
		HX_STACK_LINE(966)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("hasButtons","\x07","\x3a","\x29","\x55"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(966)
		return tmp1;
	}
	HX_STACK_LINE(968)
	int tmp1 = this->_hasButtons;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(968)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(968)
	if ((tmp2)){
		HX_STACK_LINE(969)
		return true;
	}
	HX_STACK_LINE(971)
	int tmp3 = this->_hasButtons;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(971)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(971)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_hasButtons,return )

bool Style_obj::set_hasButtons( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_hasButtons",0x419ad520,"haxe.ui.toolkit.style.Style.set_hasButtons","haxe/ui/toolkit/style/Style.hx",974,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(975)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(975)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(975)
	if ((tmp)){
		HX_STACK_LINE(975)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(975)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(975)
	this->_hasButtons = tmp1;
	HX_STACK_LINE(976)
	this->apply();
	HX_STACK_LINE(977)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(977)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_hasButtons,return )

::String Style_obj::get_gradientType( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_gradientType",0xbefc76af,"haxe.ui.toolkit.style.Style.get_gradientType","haxe/ui/toolkit/style/Style.hx",980,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(981)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("gradientType","\xca","\x10","\xdd","\xf4"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(981)
	if ((tmp)){
		HX_STACK_LINE(982)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("gradientType","\xca","\x10","\xdd","\xf4"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(982)
		return tmp1;
	}
	HX_STACK_LINE(984)
	::String tmp1 = this->_gradientType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(984)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_gradientType,return )

::String Style_obj::set_gradientType( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_gradientType",0x153e6423,"haxe.ui.toolkit.style.Style.set_gradientType","haxe/ui/toolkit/style/Style.hx",987,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(988)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(988)
	::String tmp1 = this->_gradientType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(988)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(988)
	if ((tmp2)){
		HX_STACK_LINE(989)
		this->_gradientType = value;
		HX_STACK_LINE(990)
		this->apply();
	}
	HX_STACK_LINE(992)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(992)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_gradientType,return )

::String Style_obj::get_selectionMethod( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_selectionMethod",0xec1f3b88,"haxe.ui.toolkit.style.Style.get_selectionMethod","haxe/ui/toolkit/style/Style.hx",995,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(996)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("selectionMethod","\x4d","\xa4","\xf3","\x7e"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(996)
	if ((tmp)){
		HX_STACK_LINE(997)
		::String tmp1 = this->getDynamicValue(HX_HCSTRING("selectionMethod","\x4d","\xa4","\xf3","\x7e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(997)
		return tmp1;
	}
	HX_STACK_LINE(999)
	::String tmp1 = this->_selectionMethod;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(999)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_selectionMethod,return )

::String Style_obj::set_selectionMethod( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_selectionMethod",0x28bc2e94,"haxe.ui.toolkit.style.Style.set_selectionMethod","haxe/ui/toolkit/style/Style.hx",1002,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1003)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1003)
	::String tmp1 = this->_selectionMethod;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1003)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1003)
	if ((tmp2)){
		HX_STACK_LINE(1004)
		this->_selectionMethod = value;
		HX_STACK_LINE(1005)
		this->apply();
	}
	HX_STACK_LINE(1007)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1007)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_selectionMethod,return )

bool Style_obj::get_autoHideScrolls( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_autoHideScrolls",0x096a5b30,"haxe.ui.toolkit.style.Style.get_autoHideScrolls","haxe/ui/toolkit/style/Style.hx",1010,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1011)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("autoHideScrolls","\xf5","\xc3","\x3e","\x9c"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1011)
	if ((tmp)){
		HX_STACK_LINE(1012)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("autoHideScrolls","\xf5","\xc3","\x3e","\x9c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1012)
		return tmp1;
	}
	HX_STACK_LINE(1014)
	int tmp1 = this->_autoHideScrolls;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1014)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1014)
	if ((tmp2)){
		HX_STACK_LINE(1015)
		return false;
	}
	HX_STACK_LINE(1017)
	int tmp3 = this->_autoHideScrolls;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1017)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1017)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_autoHideScrolls,return )

bool Style_obj::set_autoHideScrolls( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_autoHideScrolls",0x46074e3c,"haxe.ui.toolkit.style.Style.set_autoHideScrolls","haxe/ui/toolkit/style/Style.hx",1020,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1021)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1021)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1021)
	if ((tmp)){
		HX_STACK_LINE(1021)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(1021)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(1021)
	this->_autoHideScrolls = tmp1;
	HX_STACK_LINE(1022)
	this->apply();
	HX_STACK_LINE(1023)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1023)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_autoHideScrolls,return )

bool Style_obj::get_inlineScrolls( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_inlineScrolls",0x5cba40e8,"haxe.ui.toolkit.style.Style.get_inlineScrolls","haxe/ui/toolkit/style/Style.hx",1026,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1027)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("inlineScrolls","\x6d","\x7e","\x60","\x4b"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1027)
	if ((tmp)){
		HX_STACK_LINE(1028)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("inlineScrolls","\x6d","\x7e","\x60","\x4b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1028)
		return tmp1;
	}
	HX_STACK_LINE(1030)
	int tmp1 = this->_inlineScrolls;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1030)
	bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1030)
	if ((tmp2)){
		HX_STACK_LINE(1031)
		return false;
	}
	HX_STACK_LINE(1033)
	int tmp3 = this->_inlineScrolls;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1033)
	bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1033)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_inlineScrolls,return )

bool Style_obj::set_inlineScrolls( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_inlineScrolls",0x802818f4,"haxe.ui.toolkit.style.Style.set_inlineScrolls","haxe/ui/toolkit/style/Style.hx",1036,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1037)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1037)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1037)
	if ((tmp)){
		HX_STACK_LINE(1037)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(1037)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(1037)
	this->_inlineScrolls = tmp1;
	HX_STACK_LINE(1038)
	this->apply();
	HX_STACK_LINE(1039)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1039)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_inlineScrolls,return )

int Style_obj::get_listSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_listSize",0x819bbfa4,"haxe.ui.toolkit.style.Style.get_listSize","haxe/ui/toolkit/style/Style.hx",1042,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1043)
	bool tmp = this->hasDynamicValue(HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1043)
	if ((tmp)){
		HX_STACK_LINE(1044)
		Dynamic tmp1 = this->getDynamicValue(HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1044)
		return tmp1;
	}
	HX_STACK_LINE(1047)
	int tmp1 = this->_listSize;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1047)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_listSize,return )

int Style_obj::set_listSize( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_listSize",0x9694e318,"haxe.ui.toolkit.style.Style.set_listSize","haxe/ui/toolkit/style/Style.hx",1050,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1051)
	this->_listSize = value;
	HX_STACK_LINE(1052)
	this->apply();
	HX_STACK_LINE(1054)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1054)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_listSize,return )

Void Style_obj::apply( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.Style","apply",0xbdfe1692,"haxe.ui.toolkit.style.Style.apply","haxe/ui/toolkit/style/Style.hx",1057,0x9c43a2ce)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1058)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = this->_target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1058)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1058)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1058)
		if ((tmp1)){
			HX_STACK_LINE(1058)
			bool tmp3 = this->_autoApply;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1058)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1058)
			tmp2 = (tmp4 == true);
		}
		else{
			HX_STACK_LINE(1058)
			tmp2 = false;
		}
		HX_STACK_LINE(1058)
		if ((tmp2)){
			HX_STACK_LINE(1059)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = this->_target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1059)
			bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1059)
			if ((tmp4)){
				HX_STACK_LINE(1060)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = this->_target;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1060)
				::haxe::ui::toolkit::core::StyleableDisplayObject tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1060)
				tmp6 = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(tmp5);
				HX_STACK_LINE(1060)
				tmp6->applyStyle();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,apply,(void))

Void Style_obj::addDynamicValue( ::String property,::String script){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.Style","addDynamicValue",0xa8fb1557,"haxe.ui.toolkit.style.Style.addDynamicValue","haxe/ui/toolkit/style/Style.hx",1065,0x9c43a2ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(property,"property")
		HX_STACK_ARG(script,"script")
		HX_STACK_LINE(1066)
		::haxe::ds::StringMap tmp = this->_dynamicValues;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1066)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1066)
		if ((tmp1)){
			HX_STACK_LINE(1067)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1067)
			{
				HX_STACK_LINE(1067)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1067)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1067)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(1067)
			this->_dynamicValues = tmp2;
		}
		HX_STACK_LINE(1069)
		::haxe::ds::StringMap tmp2 = this->_dynamicValues;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1069)
		::String tmp3 = property;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1069)
		::String tmp4 = script;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1069)
		tmp2->set(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Style_obj,addDynamicValue,(void))

bool Style_obj::hasDynamicValue( ::String property){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","hasDynamicValue",0x8a1bd410,"haxe.ui.toolkit.style.Style.hasDynamicValue","haxe/ui/toolkit/style/Style.hx",1072,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(property,"property")
	HX_STACK_LINE(1073)
	::haxe::ds::StringMap tmp = this->_dynamicValues;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1073)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1073)
	if ((tmp1)){
		HX_STACK_LINE(1074)
		return false;
	}
	HX_STACK_LINE(1076)
	::haxe::ds::StringMap tmp2 = this->_dynamicValues;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1076)
	::String tmp3 = property;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1076)
	::String tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1076)
	::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1076)
	bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1076)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,hasDynamicValue,return )

Dynamic Style_obj::getDynamicValue( ::String property){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","getDynamicValue",0x4595ff4c,"haxe.ui.toolkit.style.Style.getDynamicValue","haxe/ui/toolkit/style/Style.hx",1079,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(property,"property")
	HX_STACK_LINE(1080)
	::haxe::ds::StringMap tmp = this->_dynamicValues;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1080)
	::String tmp1 = property;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1080)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1080)
	::String script = tmp2;		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(1081)
	::haxe::ui::toolkit::hscript::ScriptManager tmp3 = ::haxe::ui::toolkit::hscript::ScriptManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1081)
	::String tmp4 = script;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1081)
	Dynamic tmp5 = tmp3->executeScript(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1081)
	Dynamic retVal = tmp5;		HX_STACK_VAR(retVal,"retVal");
	HX_STACK_LINE(1082)
	Dynamic tmp6 = retVal;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1082)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,getDynamicValue,return )

Void Style_obj::merge( ::haxe::ui::toolkit::style::Style with){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.Style","merge",0x9f8933dc,"haxe.ui.toolkit.style.Style.merge","haxe/ui/toolkit/style/Style.hx",1085,0x9c43a2ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(with,"with")
		HX_STACK_LINE(1086)
		bool tmp = (with == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1086)
		if ((tmp)){
			HX_STACK_LINE(1087)
			return null();
		}
		HX_STACK_LINE(1089)
		bool tmp1 = (with->_visible != (int)-1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1089)
		if ((tmp1)){
			HX_STACK_LINE(1089)
			this->_visible = with->_visible;
		}
		HX_STACK_LINE(1090)
		bool tmp2 = (with->_width != (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1090)
		if ((tmp2)){
			HX_STACK_LINE(1090)
			this->_width = with->_width;
		}
		HX_STACK_LINE(1091)
		bool tmp3 = (with->_height != (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1091)
		if ((tmp3)){
			HX_STACK_LINE(1091)
			this->_height = with->_height;
		}
		HX_STACK_LINE(1092)
		bool tmp4 = (with->_percentWidth != (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1092)
		if ((tmp4)){
			HX_STACK_LINE(1092)
			this->_percentWidth = with->_percentWidth;
		}
		HX_STACK_LINE(1093)
		bool tmp5 = (with->_percentHeight != (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1093)
		if ((tmp5)){
			HX_STACK_LINE(1093)
			this->_percentHeight = with->_percentHeight;
		}
		HX_STACK_LINE(1094)
		bool tmp6 = (with->_autoSize != (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1094)
		if ((tmp6)){
			HX_STACK_LINE(1094)
			this->_autoSize = with->_autoSize;
		}
		HX_STACK_LINE(1095)
		bool tmp7 = (with->_backgroundImage != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1095)
		if ((tmp7)){
			HX_STACK_LINE(1096)
			this->_backgroundImage = with->_backgroundImage;
			HX_STACK_LINE(1097)
			this->_backgroundImageScale9 = null();
			HX_STACK_LINE(1098)
			this->_backgroundImageRect = null();
		}
		HX_STACK_LINE(1100)
		bool tmp8 = (with->_backgroundImageScale9 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1100)
		if ((tmp8)){
			HX_STACK_LINE(1100)
			this->_backgroundImageScale9 = with->_backgroundImageScale9;
		}
		HX_STACK_LINE(1101)
		bool tmp9 = (with->_backgroundImageRect != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1101)
		if ((tmp9)){
			HX_STACK_LINE(1101)
			this->_backgroundImageRect = with->_backgroundImageRect;
		}
		HX_STACK_LINE(1102)
		bool tmp10 = (with->_backgroundColor != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1102)
		if ((tmp10)){
			HX_STACK_LINE(1102)
			this->_backgroundColor = with->_backgroundColor;
		}
		HX_STACK_LINE(1103)
		bool tmp11 = (with->_backgroundColor != (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1103)
		if ((tmp11)){
			HX_STACK_LINE(1103)
			this->_backgroundColorGradientEnd = with->_backgroundColor;
		}
		HX_STACK_LINE(1104)
		bool tmp12 = (with->_backgroundColorGradientEnd != (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1104)
		if ((tmp12)){
			HX_STACK_LINE(1104)
			this->_backgroundColorGradientEnd = with->_backgroundColorGradientEnd;
		}
		HX_STACK_LINE(1105)
		bool tmp13 = (with->_backgroundAlpha != (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1105)
		if ((tmp13)){
			HX_STACK_LINE(1105)
			this->_backgroundAlpha = with->_backgroundAlpha;
		}
		HX_STACK_LINE(1106)
		bool tmp14 = (with->_borderColor != (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1106)
		if ((tmp14)){
			HX_STACK_LINE(1106)
			this->_borderColor = with->_borderColor;
		}
		HX_STACK_LINE(1107)
		bool tmp15 = (with->_borderSize != (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1107)
		if ((tmp15)){
			HX_STACK_LINE(1107)
			this->_borderSize = with->_borderSize;
		}
		HX_STACK_LINE(1108)
		bool tmp16 = (with->_borderAlpha != (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1108)
		if ((tmp16)){
			HX_STACK_LINE(1108)
			this->_borderAlpha = with->_borderAlpha;
		}
		HX_STACK_LINE(1109)
		bool tmp17 = (with->_color != (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1109)
		if ((tmp17)){
			HX_STACK_LINE(1109)
			this->_color = with->_color;
		}
		HX_STACK_LINE(1110)
		bool tmp18 = (with->_paddingLeft != (int)-1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1110)
		if ((tmp18)){
			HX_STACK_LINE(1110)
			this->_paddingLeft = with->_paddingLeft;
		}
		HX_STACK_LINE(1111)
		bool tmp19 = (with->_paddingRight != (int)-1);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1111)
		if ((tmp19)){
			HX_STACK_LINE(1111)
			this->_paddingRight = with->_paddingRight;
		}
		HX_STACK_LINE(1112)
		bool tmp20 = (with->_paddingTop != (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1112)
		if ((tmp20)){
			HX_STACK_LINE(1112)
			this->_paddingTop = with->_paddingTop;
		}
		HX_STACK_LINE(1113)
		bool tmp21 = (with->_paddingBottom != (int)-1);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1113)
		if ((tmp21)){
			HX_STACK_LINE(1113)
			this->_paddingBottom = with->_paddingBottom;
		}
		HX_STACK_LINE(1114)
		bool tmp22 = (with->_spacingX != (int)-1);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1114)
		if ((tmp22)){
			HX_STACK_LINE(1114)
			this->_spacingX = with->_spacingX;
		}
		HX_STACK_LINE(1115)
		bool tmp23 = (with->_spacingY != (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1115)
		if ((tmp23)){
			HX_STACK_LINE(1115)
			this->_spacingY = with->_spacingY;
		}
		HX_STACK_LINE(1116)
		bool tmp24 = (with->_horizontalAlignment != null());		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1116)
		if ((tmp24)){
			HX_STACK_LINE(1116)
			this->_horizontalAlignment = with->_horizontalAlignment;
		}
		HX_STACK_LINE(1117)
		bool tmp25 = (with->_verticalAlignment != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1117)
		if ((tmp25)){
			HX_STACK_LINE(1117)
			this->_verticalAlignment = with->_verticalAlignment;
		}
		HX_STACK_LINE(1118)
		bool tmp26 = (with->_cornerRadiusTopLeft != (int)-1);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1118)
		if ((tmp26)){
			HX_STACK_LINE(1118)
			this->_cornerRadiusTopLeft = with->_cornerRadiusTopLeft;
		}
		HX_STACK_LINE(1119)
		bool tmp27 = (with->_cornerRadiusTopRight != (int)-1);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1119)
		if ((tmp27)){
			HX_STACK_LINE(1119)
			this->_cornerRadiusTopRight = with->_cornerRadiusTopRight;
		}
		HX_STACK_LINE(1120)
		bool tmp28 = (with->_cornerRadiusBottomLeft != (int)-1);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1120)
		if ((tmp28)){
			HX_STACK_LINE(1120)
			this->_cornerRadiusBottomLeft = with->_cornerRadiusBottomLeft;
		}
		HX_STACK_LINE(1121)
		bool tmp29 = (with->_cornerRadiusBottomRight != (int)-1);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1121)
		if ((tmp29)){
			HX_STACK_LINE(1121)
			this->_cornerRadiusBottomRight = with->_cornerRadiusBottomRight;
		}
		HX_STACK_LINE(1122)
		bool tmp30 = (with->_filterSet == true);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1122)
		if ((tmp30)){
			HX_STACK_LINE(1123)
			this->_filter = with->_filter;
			HX_STACK_LINE(1124)
			this->_filterSet = with->_filterSet;
		}
		HX_STACK_LINE(1126)
		bool tmp31 = (with->_alpha != (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1126)
		if ((tmp31)){
			HX_STACK_LINE(1126)
			this->_alpha = with->_alpha;
		}
		HX_STACK_LINE(1127)
		bool tmp32 = (with->_fontName != null());		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1127)
		if ((tmp32)){
			HX_STACK_LINE(1127)
			this->_fontName = with->_fontName;
		}
		HX_STACK_LINE(1128)
		bool tmp33 = (with->_fontSize != (int)-1);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1128)
		if ((tmp33)){
			HX_STACK_LINE(1128)
			this->_fontSize = with->_fontSize;
		}
		HX_STACK_LINE(1129)
		bool tmp34 = (with->_fontScale != (int)-1);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1129)
		if ((tmp34)){
			HX_STACK_LINE(1129)
			this->_fontScale = with->_fontScale;
		}
		HX_STACK_LINE(1130)
		bool tmp35 = (with->_fontEmbedded != (int)-1);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1130)
		if ((tmp35)){
			HX_STACK_LINE(1130)
			this->_fontEmbedded = with->_fontEmbedded;
		}
		HX_STACK_LINE(1131)
		bool tmp36 = (with->_fontBold != (int)-1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1131)
		if ((tmp36)){
			HX_STACK_LINE(1131)
			this->_fontBold = with->_fontBold;
		}
		HX_STACK_LINE(1132)
		bool tmp37 = (with->_fontItalic != (int)-1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1132)
		if ((tmp37)){
			HX_STACK_LINE(1132)
			this->_fontItalic = with->_fontItalic;
		}
		HX_STACK_LINE(1133)
		bool tmp38 = (with->_fontUnderline != (int)-1);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1133)
		if ((tmp38)){
			HX_STACK_LINE(1133)
			this->_fontUnderline = with->_fontUnderline;
		}
		HX_STACK_LINE(1134)
		bool tmp39 = (with->_textAlign != null());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1134)
		if ((tmp39)){
			HX_STACK_LINE(1134)
			this->_textAlign = with->_textAlign;
		}
		HX_STACK_LINE(1135)
		bool tmp40 = (with->_iconPosition != null());		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(1135)
		if ((tmp40)){
			HX_STACK_LINE(1135)
			this->_iconPosition = with->_iconPosition;
		}
		HX_STACK_LINE(1136)
		bool tmp41 = (with->_icon != null());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(1136)
		if ((tmp41)){
			HX_STACK_LINE(1136)
			this->_icon = with->_icon;
		}
		HX_STACK_LINE(1137)
		bool tmp42 = (with->_iconWidth != (int)-1);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(1137)
		if ((tmp42)){
			HX_STACK_LINE(1137)
			this->_iconWidth = with->_iconWidth;
		}
		HX_STACK_LINE(1138)
		bool tmp43 = (with->_iconHeight != (int)-1);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(1138)
		if ((tmp43)){
			HX_STACK_LINE(1138)
			this->_iconHeight = with->_iconHeight;
		}
		HX_STACK_LINE(1139)
		bool tmp44 = (with->_hasButtons != (int)-1);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(1139)
		if ((tmp44)){
			HX_STACK_LINE(1139)
			this->_hasButtons = with->_hasButtons;
		}
		HX_STACK_LINE(1140)
		bool tmp45 = (with->_gradientType != null());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(1140)
		if ((tmp45)){
			HX_STACK_LINE(1140)
			this->_gradientType = with->_gradientType;
		}
		HX_STACK_LINE(1141)
		bool tmp46 = (with->_selectionMethod != null());		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(1141)
		if ((tmp46)){
			HX_STACK_LINE(1141)
			this->_selectionMethod = with->_selectionMethod;
		}
		HX_STACK_LINE(1142)
		bool tmp47 = (with->_autoHideScrolls != (int)-1);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(1142)
		if ((tmp47)){
			HX_STACK_LINE(1142)
			this->_autoHideScrolls = with->_autoHideScrolls;
		}
		HX_STACK_LINE(1143)
		bool tmp48 = (with->_inlineScrolls != (int)-1);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(1143)
		if ((tmp48)){
			HX_STACK_LINE(1143)
			this->_inlineScrolls = with->_inlineScrolls;
		}
		HX_STACK_LINE(1144)
		bool tmp49 = (with->_listSize != (int)-1);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(1144)
		if ((tmp49)){
			HX_STACK_LINE(1144)
			this->_listSize = with->_listSize;
		}
		HX_STACK_LINE(1146)
		bool tmp50 = (with->_dynamicValues != null());		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(1146)
		if ((tmp50)){
			HX_STACK_LINE(1147)
			::haxe::ds::StringMap tmp51 = this->_dynamicValues;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1147)
			bool tmp52 = (tmp51 == null());		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1147)
			if ((tmp52)){
				HX_STACK_LINE(1148)
				::haxe::ds::StringMap tmp53;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1148)
				{
					HX_STACK_LINE(1148)
					::haxe::ds::StringMap tmp54 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1148)
					::haxe::ds::StringMap tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1148)
					tmp53 = tmp55;
				}
				HX_STACK_LINE(1148)
				this->_dynamicValues = tmp53;
			}
			HX_STACK_LINE(1150)
			Dynamic tmp53 = with->_dynamicValues->keys();		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1150)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp53);  __it->hasNext(); ){
				::String property = __it->next();
				{
					HX_STACK_LINE(1151)
					::String tmp54 = property;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(1151)
					::String tmp55 = with->_dynamicValues->get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(1151)
					::String script = tmp55;		HX_STACK_VAR(script,"script");
					HX_STACK_LINE(1152)
					::haxe::ds::StringMap tmp56 = this->_dynamicValues;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(1152)
					::String tmp57 = property;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(1152)
					::String tmp58 = script;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(1152)
					tmp56->set(tmp57,tmp58);
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,merge,(void))

::String Style_obj::toString( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","toString",0x93a88e08,"haxe.ui.toolkit.style.Style.toString","haxe/ui/toolkit/style/Style.hx",1158,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1159)
	::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1160)
	int tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1160)
	int tmp1 = (int)-1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1160)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1160)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1160)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1160)
	if ((tmp3)){
		HX_STACK_LINE(1160)
		tmp4 = this->hasDynamicValue(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	}
	else{
		HX_STACK_LINE(1160)
		tmp4 = true;
	}
	HX_STACK_LINE(1160)
	if ((tmp4)){
		HX_STACK_LINE(1160)
		int tmp5 = this->_width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1160)
		int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1160)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1160)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1160)
		if ((tmp7)){
			HX_STACK_LINE(1160)
			int tmp9 = this->_width;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1160)
			tmp8 = ::Std_obj::string(tmp9);
		}
		else{
			HX_STACK_LINE(1160)
			::haxe::ds::StringMap tmp9 = this->_dynamicValues;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1160)
			::String tmp10 = tmp9->get(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1160)
			tmp8 = tmp10;
		}
		HX_STACK_LINE(1160)
		::String tmp9 = (HX_HCSTRING("width: ","\x2c","\xf6","\x00","\x31") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1160)
		::String tmp10 = (tmp9 + HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1160)
		hx::AddEq(s,tmp10);
	}
	HX_STACK_LINE(1161)
	int tmp5 = this->_height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1161)
	int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1161)
	bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1161)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1161)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1161)
	if ((tmp8)){
		HX_STACK_LINE(1161)
		tmp9 = this->hasDynamicValue(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	}
	else{
		HX_STACK_LINE(1161)
		tmp9 = true;
	}
	HX_STACK_LINE(1161)
	if ((tmp9)){
		HX_STACK_LINE(1161)
		int tmp10 = this->_height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1161)
		int tmp11 = (int)-1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1161)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1161)
		::String tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1161)
		if ((tmp12)){
			HX_STACK_LINE(1161)
			int tmp14 = this->_height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1161)
			tmp13 = ::Std_obj::string(tmp14);
		}
		else{
			HX_STACK_LINE(1161)
			::haxe::ds::StringMap tmp14 = this->_dynamicValues;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1161)
			::String tmp15 = tmp14->get(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1161)
			tmp13 = tmp15;
		}
		HX_STACK_LINE(1161)
		::String tmp14 = (HX_HCSTRING("height: ","\x4d","\x42","\x4b","\x33") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1161)
		::String tmp15 = (tmp14 + HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1161)
		hx::AddEq(s,tmp15);
	}
	HX_STACK_LINE(1162)
	int tmp10 = this->_percentWidth;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1162)
	int tmp11 = (int)-1;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1162)
	bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1162)
	bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1162)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1162)
	if ((tmp13)){
		HX_STACK_LINE(1162)
		tmp14 = this->hasDynamicValue(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"));
	}
	else{
		HX_STACK_LINE(1162)
		tmp14 = true;
	}
	HX_STACK_LINE(1162)
	if ((tmp14)){
		HX_STACK_LINE(1162)
		int tmp15 = this->_percentWidth;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1162)
		int tmp16 = (int)-1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1162)
		bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1162)
		::String tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1162)
		if ((tmp17)){
			HX_STACK_LINE(1162)
			int tmp19 = this->_percentWidth;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1162)
			tmp18 = ::Std_obj::string(tmp19);
		}
		else{
			HX_STACK_LINE(1162)
			::haxe::ds::StringMap tmp19 = this->_dynamicValues;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1162)
			::String tmp20 = tmp19->get(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1162)
			tmp18 = tmp20;
		}
		HX_STACK_LINE(1162)
		::String tmp19 = (HX_HCSTRING("width: ","\x2c","\xf6","\x00","\x31") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1162)
		::String tmp20 = (tmp19 + HX_HCSTRING("%;\n","\xd4","\x46","\x1c","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1162)
		hx::AddEq(s,tmp20);
	}
	HX_STACK_LINE(1163)
	int tmp15 = this->_percentHeight;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(1163)
	int tmp16 = (int)-1;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(1163)
	bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(1163)
	bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(1163)
	bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(1163)
	if ((tmp18)){
		HX_STACK_LINE(1163)
		tmp19 = this->hasDynamicValue(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"));
	}
	else{
		HX_STACK_LINE(1163)
		tmp19 = true;
	}
	HX_STACK_LINE(1163)
	if ((tmp19)){
		HX_STACK_LINE(1163)
		int tmp20 = this->_percentHeight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1163)
		int tmp21 = (int)-1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1163)
		bool tmp22 = (tmp20 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1163)
		::String tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1163)
		if ((tmp22)){
			HX_STACK_LINE(1163)
			int tmp24 = this->_percentHeight;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1163)
			tmp23 = ::Std_obj::string(tmp24);
		}
		else{
			HX_STACK_LINE(1163)
			::haxe::ds::StringMap tmp24 = this->_dynamicValues;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1163)
			::String tmp25 = tmp24->get(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1163)
			tmp23 = tmp25;
		}
		HX_STACK_LINE(1163)
		::String tmp24 = (HX_HCSTRING("height: ","\x4d","\x42","\x4b","\x33") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1163)
		::String tmp25 = (tmp24 + HX_HCSTRING("%;\n","\xd4","\x46","\x1c","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1163)
		hx::AddEq(s,tmp25);
	}
	HX_STACK_LINE(1164)
	::String tmp20 = this->_backgroundImage;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(1164)
	bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(1164)
	bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(1164)
	bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(1164)
	if ((tmp22)){
		HX_STACK_LINE(1164)
		tmp23 = this->hasDynamicValue(HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80"));
	}
	else{
		HX_STACK_LINE(1164)
		tmp23 = true;
	}
	HX_STACK_LINE(1164)
	if ((tmp23)){
		HX_STACK_LINE(1164)
		::String tmp24 = this->_backgroundImage;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1164)
		bool tmp25 = (tmp24 != null());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1164)
		::String tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1164)
		if ((tmp25)){
			HX_STACK_LINE(1164)
			::String tmp27 = this->_backgroundImage;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1164)
			tmp26 = ::Std_obj::string(tmp27);
		}
		else{
			HX_STACK_LINE(1164)
			::haxe::ds::StringMap tmp27 = this->_dynamicValues;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1164)
			::String tmp28 = tmp27->get(HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1164)
			tmp26 = tmp28;
		}
		HX_STACK_LINE(1164)
		::String tmp27 = (HX_HCSTRING("backgroundImage: \"","\x4f","\xb8","\xb0","\x24") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1164)
		::String tmp28 = (tmp27 + HX_HCSTRING("\";\n","\x11","\x00","\x1a","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1164)
		hx::AddEq(s,tmp28);
	}
	HX_STACK_LINE(1165)
	int tmp24 = this->_backgroundColor;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(1165)
	int tmp25 = (int)-1;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(1165)
	bool tmp26 = (tmp24 != tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(1165)
	bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(1165)
	bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(1165)
	if ((tmp27)){
		HX_STACK_LINE(1165)
		tmp28 = this->hasDynamicValue(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	}
	else{
		HX_STACK_LINE(1165)
		tmp28 = true;
	}
	HX_STACK_LINE(1165)
	if ((tmp28)){
		HX_STACK_LINE(1165)
		int tmp29 = this->_backgroundColor;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1165)
		int tmp30 = (int)-1;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(1165)
		bool tmp31 = (tmp29 != tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(1165)
		::String tmp32;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(1165)
		if ((tmp31)){
			HX_STACK_LINE(1165)
			int tmp33 = this->_backgroundColor;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1165)
			tmp32 = ::StringTools_obj::hex(tmp33,(int)6);
		}
		else{
			HX_STACK_LINE(1165)
			::haxe::ds::StringMap tmp33 = this->_dynamicValues;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1165)
			::String tmp34 = tmp33->get(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1165)
			tmp32 = tmp34;
		}
		HX_STACK_LINE(1165)
		::String tmp33 = (HX_HCSTRING("backgroundColor: #","\x48","\x5b","\x66","\x2a") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(1165)
		::String tmp34 = (tmp33 + HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1165)
		hx::AddEq(s,tmp34);
	}
	HX_STACK_LINE(1166)
	int tmp29 = this->_backgroundColorGradientEnd;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(1166)
	int tmp30 = (int)-1;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(1166)
	bool tmp31 = (tmp29 != tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(1166)
	bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(1166)
	bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(1166)
	if ((tmp32)){
		HX_STACK_LINE(1166)
		tmp33 = this->hasDynamicValue(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9"));
	}
	else{
		HX_STACK_LINE(1166)
		tmp33 = true;
	}
	HX_STACK_LINE(1166)
	if ((tmp33)){
		HX_STACK_LINE(1166)
		int tmp34 = this->_backgroundColorGradientEnd;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(1166)
		int tmp35 = (int)-1;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(1166)
		bool tmp36 = (tmp34 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(1166)
		::String tmp37;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(1166)
		if ((tmp36)){
			HX_STACK_LINE(1166)
			int tmp38 = this->_backgroundColorGradientEnd;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1166)
			tmp37 = ::StringTools_obj::hex(tmp38,(int)6);
		}
		else{
			HX_STACK_LINE(1166)
			::haxe::ds::StringMap tmp38 = this->_dynamicValues;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1166)
			::String tmp39 = tmp38->get(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1166)
			tmp37 = tmp39;
		}
		HX_STACK_LINE(1166)
		::String tmp38 = (HX_HCSTRING("backgroundColorGradientEnd: #","\x47","\xd5","\x05","\x7d") + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(1166)
		::String tmp39 = (tmp38 + HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(1166)
		hx::AddEq(s,tmp39);
	}
	HX_STACK_LINE(1167)
	::String tmp34 = s;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(1167)
	return tmp34;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,toString,return )

Void Style_obj::addRawProperty( ::String prop){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.Style","addRawProperty",0xbf983418,"haxe.ui.toolkit.style.Style.addRawProperty","haxe/ui/toolkit/style/Style.hx",1171,0x9c43a2ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prop,"prop")
		HX_STACK_LINE(1172)
		bool tmp = (this->_rawProperties == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1172)
		if ((tmp)){
			HX_STACK_LINE(1173)
			this->_rawProperties = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(1175)
		::String tmp1 = prop;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1175)
		this->_rawProperties->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,addRawProperty,(void))

Array< ::String > Style_obj::get_rawProperties( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_rawProperties",0x49be0a76,"haxe.ui.toolkit.style.Style.get_rawProperties","haxe/ui/toolkit/style/Style.hx",1180,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1180)
	return this->_rawProperties;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_rawProperties,return )

::haxe::ui::toolkit::style::Style Style_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","self",0xd3516ae8,"haxe.ui.toolkit.style.Style.self","haxe/ui/toolkit/style/Style.hx",1186,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1186)
	::haxe::ui::toolkit::style::Style tmp = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1186)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,self,return )

::haxe::ui::toolkit::style::Style Style_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","clone",0xe225a481,"haxe.ui.toolkit.style.Style.clone","haxe/ui/toolkit/style/Style.hx",1187,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1188)
	::haxe::ui::toolkit::style::Style tmp = this->self();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1188)
	::haxe::ui::toolkit::style::Style c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(1189)
	c->merge(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(1190)
	::haxe::ui::toolkit::style::Style tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1190)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,clone,return )


Style_obj::Style_obj()
{
}

void Style_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Style);
	HX_MARK_MEMBER_NAME(_dynamicValues,"_dynamicValues");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_autoApply,"_autoApply");
	HX_MARK_MEMBER_NAME(_visible,"_visible");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_MARK_MEMBER_NAME(_autoSize,"_autoSize");
	HX_MARK_MEMBER_NAME(_backgroundImage,"_backgroundImage");
	HX_MARK_MEMBER_NAME(_backgroundImageScale9,"_backgroundImageScale9");
	HX_MARK_MEMBER_NAME(_backgroundImageRect,"_backgroundImageRect");
	HX_MARK_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_MARK_MEMBER_NAME(_backgroundColorGradientEnd,"_backgroundColorGradientEnd");
	HX_MARK_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_MARK_MEMBER_NAME(_borderColor,"_borderColor");
	HX_MARK_MEMBER_NAME(_borderSize,"_borderSize");
	HX_MARK_MEMBER_NAME(_borderAlpha,"_borderAlpha");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_MARK_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_MARK_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_MARK_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_MARK_MEMBER_NAME(_spacingX,"_spacingX");
	HX_MARK_MEMBER_NAME(_spacingY,"_spacingY");
	HX_MARK_MEMBER_NAME(_rotationX,"_rotationX");
	HX_MARK_MEMBER_NAME(_rotationY,"_rotationY");
	HX_MARK_MEMBER_NAME(_rotationZ,"_rotationZ");
	HX_MARK_MEMBER_NAME(_verticalAlignment,"_verticalAlignment");
	HX_MARK_MEMBER_NAME(_horizontalAlignment,"_horizontalAlignment");
	HX_MARK_MEMBER_NAME(_cornerRadiusTopLeft,"_cornerRadiusTopLeft");
	HX_MARK_MEMBER_NAME(_cornerRadiusTopRight,"_cornerRadiusTopRight");
	HX_MARK_MEMBER_NAME(_cornerRadiusBottomLeft,"_cornerRadiusBottomLeft");
	HX_MARK_MEMBER_NAME(_cornerRadiusBottomRight,"_cornerRadiusBottomRight");
	HX_MARK_MEMBER_NAME(_filter,"_filter");
	HX_MARK_MEMBER_NAME(_filterSet,"_filterSet");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_fontName,"_fontName");
	HX_MARK_MEMBER_NAME(_fontSize,"_fontSize");
	HX_MARK_MEMBER_NAME(_fontScale,"_fontScale");
	HX_MARK_MEMBER_NAME(_fontEmbedded,"_fontEmbedded");
	HX_MARK_MEMBER_NAME(_fontBold,"_fontBold");
	HX_MARK_MEMBER_NAME(_fontItalic,"_fontItalic");
	HX_MARK_MEMBER_NAME(_fontUnderline,"_fontUnderline");
	HX_MARK_MEMBER_NAME(_textAlign,"_textAlign");
	HX_MARK_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_iconWidth,"_iconWidth");
	HX_MARK_MEMBER_NAME(_iconHeight,"_iconHeight");
	HX_MARK_MEMBER_NAME(_hasButtons,"_hasButtons");
	HX_MARK_MEMBER_NAME(_gradientType,"_gradientType");
	HX_MARK_MEMBER_NAME(_selectionMethod,"_selectionMethod");
	HX_MARK_MEMBER_NAME(_autoHideScrolls,"_autoHideScrolls");
	HX_MARK_MEMBER_NAME(_inlineScrolls,"_inlineScrolls");
	HX_MARK_MEMBER_NAME(_listSize,"_listSize");
	HX_MARK_MEMBER_NAME(visibleSet,"visibleSet");
	HX_MARK_MEMBER_NAME(autoSizeSet,"autoSizeSet");
	HX_MARK_MEMBER_NAME(_rawProperties,"_rawProperties");
	HX_MARK_MEMBER_NAME(rawProperties,"rawProperties");
	HX_MARK_END_CLASS();
}

void Style_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dynamicValues,"_dynamicValues");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_autoApply,"_autoApply");
	HX_VISIT_MEMBER_NAME(_visible,"_visible");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_VISIT_MEMBER_NAME(_autoSize,"_autoSize");
	HX_VISIT_MEMBER_NAME(_backgroundImage,"_backgroundImage");
	HX_VISIT_MEMBER_NAME(_backgroundImageScale9,"_backgroundImageScale9");
	HX_VISIT_MEMBER_NAME(_backgroundImageRect,"_backgroundImageRect");
	HX_VISIT_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_VISIT_MEMBER_NAME(_backgroundColorGradientEnd,"_backgroundColorGradientEnd");
	HX_VISIT_MEMBER_NAME(_backgroundAlpha,"_backgroundAlpha");
	HX_VISIT_MEMBER_NAME(_borderColor,"_borderColor");
	HX_VISIT_MEMBER_NAME(_borderSize,"_borderSize");
	HX_VISIT_MEMBER_NAME(_borderAlpha,"_borderAlpha");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_VISIT_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_VISIT_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_VISIT_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_VISIT_MEMBER_NAME(_spacingX,"_spacingX");
	HX_VISIT_MEMBER_NAME(_spacingY,"_spacingY");
	HX_VISIT_MEMBER_NAME(_rotationX,"_rotationX");
	HX_VISIT_MEMBER_NAME(_rotationY,"_rotationY");
	HX_VISIT_MEMBER_NAME(_rotationZ,"_rotationZ");
	HX_VISIT_MEMBER_NAME(_verticalAlignment,"_verticalAlignment");
	HX_VISIT_MEMBER_NAME(_horizontalAlignment,"_horizontalAlignment");
	HX_VISIT_MEMBER_NAME(_cornerRadiusTopLeft,"_cornerRadiusTopLeft");
	HX_VISIT_MEMBER_NAME(_cornerRadiusTopRight,"_cornerRadiusTopRight");
	HX_VISIT_MEMBER_NAME(_cornerRadiusBottomLeft,"_cornerRadiusBottomLeft");
	HX_VISIT_MEMBER_NAME(_cornerRadiusBottomRight,"_cornerRadiusBottomRight");
	HX_VISIT_MEMBER_NAME(_filter,"_filter");
	HX_VISIT_MEMBER_NAME(_filterSet,"_filterSet");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_fontName,"_fontName");
	HX_VISIT_MEMBER_NAME(_fontSize,"_fontSize");
	HX_VISIT_MEMBER_NAME(_fontScale,"_fontScale");
	HX_VISIT_MEMBER_NAME(_fontEmbedded,"_fontEmbedded");
	HX_VISIT_MEMBER_NAME(_fontBold,"_fontBold");
	HX_VISIT_MEMBER_NAME(_fontItalic,"_fontItalic");
	HX_VISIT_MEMBER_NAME(_fontUnderline,"_fontUnderline");
	HX_VISIT_MEMBER_NAME(_textAlign,"_textAlign");
	HX_VISIT_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_iconWidth,"_iconWidth");
	HX_VISIT_MEMBER_NAME(_iconHeight,"_iconHeight");
	HX_VISIT_MEMBER_NAME(_hasButtons,"_hasButtons");
	HX_VISIT_MEMBER_NAME(_gradientType,"_gradientType");
	HX_VISIT_MEMBER_NAME(_selectionMethod,"_selectionMethod");
	HX_VISIT_MEMBER_NAME(_autoHideScrolls,"_autoHideScrolls");
	HX_VISIT_MEMBER_NAME(_inlineScrolls,"_inlineScrolls");
	HX_VISIT_MEMBER_NAME(_listSize,"_listSize");
	HX_VISIT_MEMBER_NAME(visibleSet,"visibleSet");
	HX_VISIT_MEMBER_NAME(autoSizeSet,"autoSizeSet");
	HX_VISIT_MEMBER_NAME(_rawProperties,"_rawProperties");
	HX_VISIT_MEMBER_NAME(rawProperties,"rawProperties");
}

Dynamic Style_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return get_icon(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp == hx::paccAlways) return get_filter(); }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == hx::paccAlways) return get_target(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_filter") ) { return _filter; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return get_padding(); }
		if (HX_FIELD_EQ(inName,"spacing") ) { if (inCallProp == hx::paccAlways) return get_spacing(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_visible") ) { return _visible; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"spacingX") ) { if (inCallProp == hx::paccAlways) return get_spacingX(); }
		if (HX_FIELD_EQ(inName,"spacingY") ) { if (inCallProp == hx::paccAlways) return get_spacingY(); }
		if (HX_FIELD_EQ(inName,"fontName") ) { if (inCallProp == hx::paccAlways) return get_fontName(); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { if (inCallProp == hx::paccAlways) return get_fontSize(); }
		if (HX_FIELD_EQ(inName,"fontBold") ) { if (inCallProp == hx::paccAlways) return get_fontBold(); }
		if (HX_FIELD_EQ(inName,"listSize") ) { if (inCallProp == hx::paccAlways) return get_listSize(); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return get_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return set_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSize") ) { return _autoSize; }
		if (HX_FIELD_EQ(inName,"_spacingX") ) { return _spacingX; }
		if (HX_FIELD_EQ(inName,"_spacingY") ) { return _spacingY; }
		if (HX_FIELD_EQ(inName,"_fontName") ) { return _fontName; }
		if (HX_FIELD_EQ(inName,"_fontSize") ) { return _fontSize; }
		if (HX_FIELD_EQ(inName,"_fontBold") ) { return _fontBold; }
		if (HX_FIELD_EQ(inName,"_listSize") ) { return _listSize; }
		if (HX_FIELD_EQ(inName,"fontScale") ) { if (inCallProp == hx::paccAlways) return get_fontScale(); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return get_textAlign(); }
		if (HX_FIELD_EQ(inName,"iconWidth") ) { if (inCallProp == hx::paccAlways) return get_iconWidth(); }
		if (HX_FIELD_EQ(inName,"autoApply") ) { if (inCallProp == hx::paccAlways) return get_autoApply(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoApply") ) { return _autoApply; }
		if (HX_FIELD_EQ(inName,"_rotationX") ) { return _rotationX; }
		if (HX_FIELD_EQ(inName,"_rotationY") ) { return _rotationY; }
		if (HX_FIELD_EQ(inName,"_rotationZ") ) { return _rotationZ; }
		if (HX_FIELD_EQ(inName,"_filterSet") ) { return _filterSet; }
		if (HX_FIELD_EQ(inName,"_fontScale") ) { return _fontScale; }
		if (HX_FIELD_EQ(inName,"_textAlign") ) { return _textAlign; }
		if (HX_FIELD_EQ(inName,"_iconWidth") ) { return _iconWidth; }
		if (HX_FIELD_EQ(inName,"visibleSet") ) { return inCallProp == hx::paccAlways ? get_visibleSet() : visibleSet; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == hx::paccAlways) return get_borderSize(); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == hx::paccAlways) return get_paddingTop(); }
		if (HX_FIELD_EQ(inName,"fontItalic") ) { if (inCallProp == hx::paccAlways) return get_fontItalic(); }
		if (HX_FIELD_EQ(inName,"iconHeight") ) { if (inCallProp == hx::paccAlways) return get_iconHeight(); }
		if (HX_FIELD_EQ(inName,"hasButtons") ) { if (inCallProp == hx::paccAlways) return get_hasButtons(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filter") ) { return get_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filter") ) { return set_filter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_borderSize") ) { return _borderSize; }
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { return _paddingTop; }
		if (HX_FIELD_EQ(inName,"_fontItalic") ) { return _fontItalic; }
		if (HX_FIELD_EQ(inName,"_iconHeight") ) { return _iconHeight; }
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { return _hasButtons; }
		if (HX_FIELD_EQ(inName,"autoSizeSet") ) { return inCallProp == hx::paccAlways ? get_autoSizeSet() : autoSizeSet; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"borderAlpha") ) { if (inCallProp == hx::paccAlways) return get_borderAlpha(); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == hx::paccAlways) return get_paddingLeft(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spacing") ) { return get_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacing") ) { return set_spacing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_borderColor") ) { return _borderColor; }
		if (HX_FIELD_EQ(inName,"_borderAlpha") ) { return _borderAlpha; }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { return _paddingLeft; }
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == hx::paccAlways) return get_percentWidth(); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == hx::paccAlways) return get_paddingRight(); }
		if (HX_FIELD_EQ(inName,"cornerRadius") ) { if (inCallProp == hx::paccAlways) return get_cornerRadius(); }
		if (HX_FIELD_EQ(inName,"fontEmbedded") ) { if (inCallProp == hx::paccAlways) return get_fontEmbedded(); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { if (inCallProp == hx::paccAlways) return get_iconPosition(); }
		if (HX_FIELD_EQ(inName,"gradientType") ) { if (inCallProp == hx::paccAlways) return get_gradientType(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spacingX") ) { return get_spacingX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacingX") ) { return set_spacingX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spacingY") ) { return get_spacingY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacingY") ) { return set_spacingY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontName") ) { return get_fontName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontName") ) { return set_fontName_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontSize") ) { return get_fontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontSize") ) { return set_fontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontBold") ) { return get_fontBold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontBold") ) { return set_fontBold_dyn(); }
		if (HX_FIELD_EQ(inName,"get_listSize") ) { return get_listSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_listSize") ) { return set_listSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { return _percentWidth; }
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { return _paddingRight; }
		if (HX_FIELD_EQ(inName,"_fontEmbedded") ) { return _fontEmbedded; }
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { return _iconPosition; }
		if (HX_FIELD_EQ(inName,"_gradientType") ) { return _gradientType; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == hx::paccAlways) return get_percentHeight(); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == hx::paccAlways) return get_paddingBottom(); }
		if (HX_FIELD_EQ(inName,"fontUnderline") ) { if (inCallProp == hx::paccAlways) return get_fontUnderline(); }
		if (HX_FIELD_EQ(inName,"inlineScrolls") ) { if (inCallProp == hx::paccAlways) return get_inlineScrolls(); }
		if (HX_FIELD_EQ(inName,"get_autoApply") ) { return get_autoApply_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoApply") ) { return set_autoApply_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotationX") ) { return get_rotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationX") ) { return set_rotationX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotationY") ) { return get_rotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationY") ) { return set_rotationY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotationZ") ) { return get_rotationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotationZ") ) { return set_rotationZ_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontScale") ) { return get_fontScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontScale") ) { return set_fontScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return set_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"get_iconWidth") ) { return get_iconWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconWidth") ) { return set_iconWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"rawProperties") ) { return inCallProp == hx::paccAlways ? get_rawProperties() : rawProperties; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dynamicValues") ) { return _dynamicValues; }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { return _percentHeight; }
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { return _paddingBottom; }
		if (HX_FIELD_EQ(inName,"_fontUnderline") ) { return _fontUnderline; }
		if (HX_FIELD_EQ(inName,"_inlineScrolls") ) { return _inlineScrolls; }
		if (HX_FIELD_EQ(inName,"get_visibleSet") ) { return get_visibleSet_dyn(); }
		if (HX_FIELD_EQ(inName,"get_borderSize") ) { return get_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return get_paddingTop_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return set_paddingTop_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontItalic") ) { return get_fontItalic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontItalic") ) { return set_fontItalic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_iconHeight") ) { return get_iconHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconHeight") ) { return set_iconHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasButtons") ) { return get_hasButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hasButtons") ) { return set_hasButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"_rawProperties") ) { return _rawProperties; }
		if (HX_FIELD_EQ(inName,"addRawProperty") ) { return addRawProperty_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { if (inCallProp == hx::paccAlways) return get_backgroundImage(); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { if (inCallProp == hx::paccAlways) return get_backgroundAlpha(); }
		if (HX_FIELD_EQ(inName,"selectionMethod") ) { if (inCallProp == hx::paccAlways) return get_selectionMethod(); }
		if (HX_FIELD_EQ(inName,"autoHideScrolls") ) { if (inCallProp == hx::paccAlways) return get_autoHideScrolls(); }
		if (HX_FIELD_EQ(inName,"get_autoSizeSet") ) { return get_autoSizeSet_dyn(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_borderAlpha") ) { return get_borderAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderAlpha") ) { return set_borderAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return get_paddingLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return set_paddingLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"addDynamicValue") ) { return addDynamicValue_dyn(); }
		if (HX_FIELD_EQ(inName,"hasDynamicValue") ) { return hasDynamicValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getDynamicValue") ) { return getDynamicValue_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_backgroundImage") ) { return _backgroundImage; }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { return _backgroundColor; }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { return _backgroundAlpha; }
		if (HX_FIELD_EQ(inName,"_selectionMethod") ) { return _selectionMethod; }
		if (HX_FIELD_EQ(inName,"_autoHideScrolls") ) { return _autoHideScrolls; }
		if (HX_FIELD_EQ(inName,"get_percentWidth") ) { return get_percentWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percentWidth") ) { return set_percentWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return get_paddingRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return set_paddingRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cornerRadius") ) { return get_cornerRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadius") ) { return set_cornerRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontEmbedded") ) { return get_fontEmbedded_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontEmbedded") ) { return set_fontEmbedded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return get_iconPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconPosition") ) { return set_iconPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gradientType") ) { return get_gradientType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gradientType") ) { return set_gradientType_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"verticalAlignment") ) { if (inCallProp == hx::paccAlways) return get_verticalAlignment(); }
		if (HX_FIELD_EQ(inName,"get_percentHeight") ) { return get_percentHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percentHeight") ) { return set_percentHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return get_paddingBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return set_paddingBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontUnderline") ) { return get_fontUnderline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontUnderline") ) { return set_fontUnderline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inlineScrolls") ) { return get_inlineScrolls_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inlineScrolls") ) { return set_inlineScrolls_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rawProperties") ) { return get_rawProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_verticalAlignment") ) { return _verticalAlignment; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backgroundImageRect") ) { if (inCallProp == hx::paccAlways) return get_backgroundImageRect(); }
		if (HX_FIELD_EQ(inName,"horizontalAlignment") ) { if (inCallProp == hx::paccAlways) return get_horizontalAlignment(); }
		if (HX_FIELD_EQ(inName,"cornerRadiusTopLeft") ) { if (inCallProp == hx::paccAlways) return get_cornerRadiusTopLeft(); }
		if (HX_FIELD_EQ(inName,"get_backgroundImage") ) { return get_backgroundImage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundImage") ) { return set_backgroundImage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundAlpha") ) { return get_backgroundAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundAlpha") ) { return set_backgroundAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionMethod") ) { return get_selectionMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectionMethod") ) { return set_selectionMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoHideScrolls") ) { return get_autoHideScrolls_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoHideScrolls") ) { return set_autoHideScrolls_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_backgroundImageRect") ) { return _backgroundImageRect; }
		if (HX_FIELD_EQ(inName,"_horizontalAlignment") ) { return _horizontalAlignment; }
		if (HX_FIELD_EQ(inName,"_cornerRadiusTopLeft") ) { return _cornerRadiusTopLeft; }
		if (HX_FIELD_EQ(inName,"cornerRadiusTopRight") ) { if (inCallProp == hx::paccAlways) return get_cornerRadiusTopRight(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cornerRadiusTopRight") ) { return _cornerRadiusTopRight; }
		if (HX_FIELD_EQ(inName,"backgroundImageScale9") ) { if (inCallProp == hx::paccAlways) return get_backgroundImageScale9(); }
		if (HX_FIELD_EQ(inName,"get_verticalAlignment") ) { return get_verticalAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_verticalAlignment") ) { return set_verticalAlignment_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_backgroundImageScale9") ) { return _backgroundImageScale9; }
		if (HX_FIELD_EQ(inName,"cornerRadiusBottomLeft") ) { if (inCallProp == hx::paccAlways) return get_cornerRadiusBottomLeft(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_cornerRadiusBottomLeft") ) { return _cornerRadiusBottomLeft; }
		if (HX_FIELD_EQ(inName,"cornerRadiusBottomRight") ) { if (inCallProp == hx::paccAlways) return get_cornerRadiusBottomRight(); }
		if (HX_FIELD_EQ(inName,"get_backgroundImageRect") ) { return get_backgroundImageRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundImageRect") ) { return set_backgroundImageRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_horizontalAlignment") ) { return get_horizontalAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlignment") ) { return set_horizontalAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cornerRadiusTopLeft") ) { return get_cornerRadiusTopLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusTopLeft") ) { return set_cornerRadiusTopLeft_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_cornerRadiusBottomRight") ) { return _cornerRadiusBottomRight; }
		if (HX_FIELD_EQ(inName,"get_cornerRadiusTopRight") ) { return get_cornerRadiusTopRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusTopRight") ) { return set_cornerRadiusTopRight_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_backgroundImageScale9") ) { return get_backgroundImageScale9_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundImageScale9") ) { return set_backgroundImageScale9_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backgroundColorGradientEnd") ) { if (inCallProp == hx::paccAlways) return get_backgroundColorGradientEnd(); }
		if (HX_FIELD_EQ(inName,"get_cornerRadiusBottomLeft") ) { return get_cornerRadiusBottomLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusBottomLeft") ) { return set_cornerRadiusBottomLeft_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundColorGradientEnd") ) { return _backgroundColorGradientEnd; }
		if (HX_FIELD_EQ(inName,"get_cornerRadiusBottomRight") ) { return get_cornerRadiusBottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusBottomRight") ) { return set_cornerRadiusBottomRight_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_backgroundColorGradientEnd") ) { return get_backgroundColorGradientEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColorGradientEnd") ) { return set_backgroundColorGradientEnd_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Style_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return set_icon(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"filter") ) { if (inCallProp == hx::paccAlways) return set_filter(inValue); }
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == hx::paccAlways) return set_target(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filter") ) { _filter=inValue.Cast< ::openfl::_legacy::filters::BitmapFilter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return set_padding(inValue); }
		if (HX_FIELD_EQ(inName,"spacing") ) { if (inCallProp == hx::paccAlways) return set_spacing(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_visible") ) { _visible=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"spacingX") ) { if (inCallProp == hx::paccAlways) return set_spacingX(inValue); }
		if (HX_FIELD_EQ(inName,"spacingY") ) { if (inCallProp == hx::paccAlways) return set_spacingY(inValue); }
		if (HX_FIELD_EQ(inName,"fontName") ) { if (inCallProp == hx::paccAlways) return set_fontName(inValue); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { if (inCallProp == hx::paccAlways) return set_fontSize(inValue); }
		if (HX_FIELD_EQ(inName,"fontBold") ) { if (inCallProp == hx::paccAlways) return set_fontBold(inValue); }
		if (HX_FIELD_EQ(inName,"listSize") ) { if (inCallProp == hx::paccAlways) return set_listSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSize") ) { _autoSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spacingX") ) { _spacingX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spacingY") ) { _spacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontName") ) { _fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontSize") ) { _fontSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontBold") ) { _fontBold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_listSize") ) { _listSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontScale") ) { if (inCallProp == hx::paccAlways) return set_fontScale(inValue); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return set_textAlign(inValue); }
		if (HX_FIELD_EQ(inName,"iconWidth") ) { if (inCallProp == hx::paccAlways) return set_iconWidth(inValue); }
		if (HX_FIELD_EQ(inName,"autoApply") ) { if (inCallProp == hx::paccAlways) return set_autoApply(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoApply") ) { _autoApply=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationX") ) { _rotationX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationY") ) { _rotationY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotationZ") ) { _rotationZ=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filterSet") ) { _filterSet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontScale") ) { _fontScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textAlign") ) { _textAlign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconWidth") ) { _iconWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visibleSet") ) { visibleSet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == hx::paccAlways) return set_borderSize(inValue); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == hx::paccAlways) return set_paddingTop(inValue); }
		if (HX_FIELD_EQ(inName,"fontItalic") ) { if (inCallProp == hx::paccAlways) return set_fontItalic(inValue); }
		if (HX_FIELD_EQ(inName,"iconHeight") ) { if (inCallProp == hx::paccAlways) return set_iconHeight(inValue); }
		if (HX_FIELD_EQ(inName,"hasButtons") ) { if (inCallProp == hx::paccAlways) return set_hasButtons(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_borderSize") ) { _borderSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { _paddingTop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontItalic") ) { _fontItalic=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconHeight") ) { _iconHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { _hasButtons=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoSizeSet") ) { autoSizeSet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == hx::paccAlways) return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"borderAlpha") ) { if (inCallProp == hx::paccAlways) return set_borderAlpha(inValue); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == hx::paccAlways) return set_paddingLeft(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_borderColor") ) { _borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_borderAlpha") ) { _borderAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { _paddingLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentWidth") ) { if (inCallProp == hx::paccAlways) return set_percentWidth(inValue); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == hx::paccAlways) return set_paddingRight(inValue); }
		if (HX_FIELD_EQ(inName,"cornerRadius") ) { if (inCallProp == hx::paccAlways) return set_cornerRadius(inValue); }
		if (HX_FIELD_EQ(inName,"fontEmbedded") ) { if (inCallProp == hx::paccAlways) return set_fontEmbedded(inValue); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { if (inCallProp == hx::paccAlways) return set_iconPosition(inValue); }
		if (HX_FIELD_EQ(inName,"gradientType") ) { if (inCallProp == hx::paccAlways) return set_gradientType(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { _percentWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { _paddingRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontEmbedded") ) { _fontEmbedded=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { _iconPosition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gradientType") ) { _gradientType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { if (inCallProp == hx::paccAlways) return set_percentHeight(inValue); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == hx::paccAlways) return set_paddingBottom(inValue); }
		if (HX_FIELD_EQ(inName,"fontUnderline") ) { if (inCallProp == hx::paccAlways) return set_fontUnderline(inValue); }
		if (HX_FIELD_EQ(inName,"inlineScrolls") ) { if (inCallProp == hx::paccAlways) return set_inlineScrolls(inValue); }
		if (HX_FIELD_EQ(inName,"rawProperties") ) { rawProperties=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dynamicValues") ) { _dynamicValues=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { _percentHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { _paddingBottom=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontUnderline") ) { _fontUnderline=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inlineScrolls") ) { _inlineScrolls=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rawProperties") ) { _rawProperties=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { if (inCallProp == hx::paccAlways) return set_backgroundImage(inValue); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == hx::paccAlways) return set_backgroundColor(inValue); }
		if (HX_FIELD_EQ(inName,"backgroundAlpha") ) { if (inCallProp == hx::paccAlways) return set_backgroundAlpha(inValue); }
		if (HX_FIELD_EQ(inName,"selectionMethod") ) { if (inCallProp == hx::paccAlways) return set_selectionMethod(inValue); }
		if (HX_FIELD_EQ(inName,"autoHideScrolls") ) { if (inCallProp == hx::paccAlways) return set_autoHideScrolls(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_backgroundImage") ) { _backgroundImage=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { _backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundAlpha") ) { _backgroundAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectionMethod") ) { _selectionMethod=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoHideScrolls") ) { _autoHideScrolls=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"verticalAlignment") ) { if (inCallProp == hx::paccAlways) return set_verticalAlignment(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_verticalAlignment") ) { _verticalAlignment=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backgroundImageRect") ) { if (inCallProp == hx::paccAlways) return set_backgroundImageRect(inValue); }
		if (HX_FIELD_EQ(inName,"horizontalAlignment") ) { if (inCallProp == hx::paccAlways) return set_horizontalAlignment(inValue); }
		if (HX_FIELD_EQ(inName,"cornerRadiusTopLeft") ) { if (inCallProp == hx::paccAlways) return set_cornerRadiusTopLeft(inValue); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_backgroundImageRect") ) { _backgroundImageRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_horizontalAlignment") ) { _horizontalAlignment=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cornerRadiusTopLeft") ) { _cornerRadiusTopLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cornerRadiusTopRight") ) { if (inCallProp == hx::paccAlways) return set_cornerRadiusTopRight(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cornerRadiusTopRight") ) { _cornerRadiusTopRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageScale9") ) { if (inCallProp == hx::paccAlways) return set_backgroundImageScale9(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_backgroundImageScale9") ) { _backgroundImageScale9=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cornerRadiusBottomLeft") ) { if (inCallProp == hx::paccAlways) return set_cornerRadiusBottomLeft(inValue); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_cornerRadiusBottomLeft") ) { _cornerRadiusBottomLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cornerRadiusBottomRight") ) { if (inCallProp == hx::paccAlways) return set_cornerRadiusBottomRight(inValue); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_cornerRadiusBottomRight") ) { _cornerRadiusBottomRight=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backgroundColorGradientEnd") ) { if (inCallProp == hx::paccAlways) return set_backgroundColorGradientEnd(inValue); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundColorGradientEnd") ) { _backgroundColorGradientEnd=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Style_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dynamicValues","\x02","\x31","\x5a","\xac"));
	outFields->push(HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"));
	outFields->push(HX_HCSTRING("_autoApply","\x40","\x3f","\xe9","\x5d"));
	outFields->push(HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_percentWidth","\xe0","\xe3","\x89","\xe0"));
	outFields->push(HX_HCSTRING("_percentHeight","\xcd","\xf8","\x6c","\x4e"));
	outFields->push(HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77"));
	outFields->push(HX_HCSTRING("_backgroundImage","\x0e","\x3f","\x33","\x6b"));
	outFields->push(HX_HCSTRING("_backgroundImageScale9","\x1d","\x5c","\x93","\xd2"));
	outFields->push(HX_HCSTRING("_backgroundImageRect","\x52","\x57","\x5b","\x05"));
	outFields->push(HX_HCSTRING("_backgroundColor","\x16","\x91","\x26","\xf8"));
	outFields->push(HX_HCSTRING("_backgroundColorGradientEnd","\x55","\x6a","\x79","\x18"));
	outFields->push(HX_HCSTRING("_backgroundAlpha","\x11","\xc7","\x60","\xcf"));
	outFields->push(HX_HCSTRING("_borderColor","\xd8","\xea","\xde","\x3c"));
	outFields->push(HX_HCSTRING("_borderSize","\xec","\xcc","\x77","\xd9"));
	outFields->push(HX_HCSTRING("_borderAlpha","\xd3","\x20","\x19","\x14"));
	outFields->push(HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46"));
	outFields->push(HX_HCSTRING("_paddingLeft","\x79","\xf8","\xef","\xeb"));
	outFields->push(HX_HCSTRING("_paddingRight","\x2a","\x7f","\x16","\xfd"));
	outFields->push(HX_HCSTRING("_paddingTop","\x63","\xca","\x8f","\x0c"));
	outFields->push(HX_HCSTRING("_paddingBottom","\xdd","\x57","\xeb","\x8d"));
	outFields->push(HX_HCSTRING("_spacingX","\xd4","\xd6","\xa7","\x39"));
	outFields->push(HX_HCSTRING("_spacingY","\xd5","\xd6","\xa7","\x39"));
	outFields->push(HX_HCSTRING("_rotationX","\x1b","\xd5","\x91","\xc8"));
	outFields->push(HX_HCSTRING("_rotationY","\x1c","\xd5","\x91","\xc8"));
	outFields->push(HX_HCSTRING("_rotationZ","\x1d","\xd5","\x91","\xc8"));
	outFields->push(HX_HCSTRING("_verticalAlignment","\x4e","\x6c","\xcc","\xdc"));
	outFields->push(HX_HCSTRING("_horizontalAlignment","\x60","\x20","\x99","\xb5"));
	outFields->push(HX_HCSTRING("_cornerRadiusTopLeft","\xf6","\x14","\x25","\x93"));
	outFields->push(HX_HCSTRING("_cornerRadiusTopRight","\x0d","\x50","\x5a","\xa4"));
	outFields->push(HX_HCSTRING("_cornerRadiusBottomLeft","\x18","\xf1","\xfd","\xd8"));
	outFields->push(HX_HCSTRING("_cornerRadiusBottomRight","\xab","\x11","\x42","\x7c"));
	outFields->push(HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3"));
	outFields->push(HX_HCSTRING("_filterSet","\x8b","\x52","\x09","\x3d"));
	outFields->push(HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));
	outFields->push(HX_HCSTRING("_fontName","\x19","\x87","\x13","\x13"));
	outFields->push(HX_HCSTRING("_fontSize","\x8f","\xb5","\x67","\x16"));
	outFields->push(HX_HCSTRING("_fontScale","\xfc","\xed","\x4c","\x80"));
	outFields->push(HX_HCSTRING("_fontEmbedded","\x58","\xad","\x9b","\xe2"));
	outFields->push(HX_HCSTRING("_fontBold","\x53","\x96","\x2f","\x0b"));
	outFields->push(HX_HCSTRING("_fontItalic","\x3e","\x93","\x41","\x8d"));
	outFields->push(HX_HCSTRING("_fontUnderline","\x7e","\xd5","\xf8","\x35"));
	outFields->push(HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16"));
	outFields->push(HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58"));
	outFields->push(HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"));
	outFields->push(HX_HCSTRING("_iconWidth","\x8e","\x03","\xc9","\x5f"));
	outFields->push(HX_HCSTRING("_iconHeight","\x5f","\x91","\x69","\x26"));
	outFields->push(HX_HCSTRING("_hasButtons","\x26","\x07","\xb3","\x27"));
	outFields->push(HX_HCSTRING("_gradientType","\xa9","\xa3","\x4b","\xd7"));
	outFields->push(HX_HCSTRING("_selectionMethod","\xce","\xe6","\xd2","\x69"));
	outFields->push(HX_HCSTRING("_autoHideScrolls","\x76","\x06","\x1e","\x87"));
	outFields->push(HX_HCSTRING("_inlineScrolls","\xae","\x6e","\xb2","\x89"));
	outFields->push(HX_HCSTRING("_listSize","\x9e","\x67","\xde","\x73"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("visibleSet","\x50","\x2e","\x90","\x88"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("percentWidth","\x01","\x51","\x1b","\xfe"));
	outFields->push(HX_HCSTRING("percentHeight","\x8c","\x08","\x1b","\x10"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("autoSizeSet","\xb2","\x85","\x65","\x11"));
	outFields->push(HX_HCSTRING("backgroundImage","\x8d","\xfc","\x53","\x80"));
	outFields->push(HX_HCSTRING("backgroundImageScale9","\xdc","\xc2","\x85","\x79"));
	outFields->push(HX_HCSTRING("backgroundImageRect","\x51","\x40","\x02","\x06"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("backgroundColorGradientEnd","\x36","\x2f","\x3f","\xc9"));
	outFields->push(HX_HCSTRING("backgroundAlpha","\x90","\x84","\x81","\xe4"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("borderSize","\xcd","\xff","\xed","\x06"));
	outFields->push(HX_HCSTRING("borderAlpha","\xd2","\x72","\x0f","\xae"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"));
	outFields->push(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"));
	outFields->push(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"));
	outFields->push(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"));
	outFields->push(HX_HCSTRING("spacing","\x83","\x33","\xbb","\x91"));
	outFields->push(HX_HCSTRING("verticalAlignment","\x8d","\xc7","\xb6","\x09"));
	outFields->push(HX_HCSTRING("horizontalAlignment","\x5f","\x09","\x40","\xb6"));
	outFields->push(HX_HCSTRING("cornerRadiusTopLeft","\xf5","\xfd","\xcb","\x93"));
	outFields->push(HX_HCSTRING("cornerRadiusTopRight","\x2e","\x46","\xbf","\x35"));
	outFields->push(HX_HCSTRING("cornerRadiusBottomLeft","\x79","\x71","\x25","\x46"));
	outFields->push(HX_HCSTRING("cornerRadiusBottomRight","\x2a","\xe6","\xaa","\x91"));
	outFields->push(HX_HCSTRING("cornerRadius","\x07","\x92","\x5d","\x8d"));
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	outFields->push(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"));
	outFields->push(HX_HCSTRING("fontScale","\x3b","\x72","\xaa","\x24"));
	outFields->push(HX_HCSTRING("fontEmbedded","\x79","\x1a","\x2d","\x00"));
	outFields->push(HX_HCSTRING("fontBold","\xf4","\x9e","\x99","\xc3"));
	outFields->push(HX_HCSTRING("fontItalic","\x1f","\xc6","\xb7","\xba"));
	outFields->push(HX_HCSTRING("fontUnderline","\x3d","\xe5","\xa6","\xf7"));
	outFields->push(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));
	outFields->push(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"));
	outFields->push(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	outFields->push(HX_HCSTRING("iconWidth","\xcd","\x87","\x26","\x04"));
	outFields->push(HX_HCSTRING("iconHeight","\x40","\xc4","\xdf","\x53"));
	outFields->push(HX_HCSTRING("hasButtons","\x07","\x3a","\x29","\x55"));
	outFields->push(HX_HCSTRING("gradientType","\xca","\x10","\xdd","\xf4"));
	outFields->push(HX_HCSTRING("selectionMethod","\x4d","\xa4","\xf3","\x7e"));
	outFields->push(HX_HCSTRING("autoHideScrolls","\xf5","\xc3","\x3e","\x9c"));
	outFields->push(HX_HCSTRING("inlineScrolls","\x6d","\x7e","\x60","\x4b"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("autoApply","\x7f","\xc3","\x46","\x02"));
	outFields->push(HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"));
	outFields->push(HX_HCSTRING("_rawProperties","\x3c","\x38","\xb6","\x76"));
	outFields->push(HX_HCSTRING("rawProperties","\xfb","\x47","\x64","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Style_obj,_dynamicValues),HX_HCSTRING("_dynamicValues","\x02","\x31","\x5a","\xac")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObject*/ ,(int)offsetof(Style_obj,_target),HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5")},
	{hx::fsBool,(int)offsetof(Style_obj,_autoApply),HX_HCSTRING("_autoApply","\x40","\x3f","\xe9","\x5d")},
	{hx::fsFloat,(int)offsetof(Style_obj,_visible),HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc")},
	{hx::fsInt,(int)offsetof(Style_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(Style_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsInt,(int)offsetof(Style_obj,_percentWidth),HX_HCSTRING("_percentWidth","\xe0","\xe3","\x89","\xe0")},
	{hx::fsInt,(int)offsetof(Style_obj,_percentHeight),HX_HCSTRING("_percentHeight","\xcd","\xf8","\x6c","\x4e")},
	{hx::fsInt,(int)offsetof(Style_obj,_autoSize),HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77")},
	{hx::fsString,(int)offsetof(Style_obj,_backgroundImage),HX_HCSTRING("_backgroundImage","\x0e","\x3f","\x33","\x6b")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Style_obj,_backgroundImageScale9),HX_HCSTRING("_backgroundImageScale9","\x1d","\x5c","\x93","\xd2")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Style_obj,_backgroundImageRect),HX_HCSTRING("_backgroundImageRect","\x52","\x57","\x5b","\x05")},
	{hx::fsInt,(int)offsetof(Style_obj,_backgroundColor),HX_HCSTRING("_backgroundColor","\x16","\x91","\x26","\xf8")},
	{hx::fsInt,(int)offsetof(Style_obj,_backgroundColorGradientEnd),HX_HCSTRING("_backgroundColorGradientEnd","\x55","\x6a","\x79","\x18")},
	{hx::fsFloat,(int)offsetof(Style_obj,_backgroundAlpha),HX_HCSTRING("_backgroundAlpha","\x11","\xc7","\x60","\xcf")},
	{hx::fsInt,(int)offsetof(Style_obj,_borderColor),HX_HCSTRING("_borderColor","\xd8","\xea","\xde","\x3c")},
	{hx::fsInt,(int)offsetof(Style_obj,_borderSize),HX_HCSTRING("_borderSize","\xec","\xcc","\x77","\xd9")},
	{hx::fsFloat,(int)offsetof(Style_obj,_borderAlpha),HX_HCSTRING("_borderAlpha","\xd3","\x20","\x19","\x14")},
	{hx::fsInt,(int)offsetof(Style_obj,_color),HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46")},
	{hx::fsInt,(int)offsetof(Style_obj,_paddingLeft),HX_HCSTRING("_paddingLeft","\x79","\xf8","\xef","\xeb")},
	{hx::fsInt,(int)offsetof(Style_obj,_paddingRight),HX_HCSTRING("_paddingRight","\x2a","\x7f","\x16","\xfd")},
	{hx::fsInt,(int)offsetof(Style_obj,_paddingTop),HX_HCSTRING("_paddingTop","\x63","\xca","\x8f","\x0c")},
	{hx::fsInt,(int)offsetof(Style_obj,_paddingBottom),HX_HCSTRING("_paddingBottom","\xdd","\x57","\xeb","\x8d")},
	{hx::fsInt,(int)offsetof(Style_obj,_spacingX),HX_HCSTRING("_spacingX","\xd4","\xd6","\xa7","\x39")},
	{hx::fsInt,(int)offsetof(Style_obj,_spacingY),HX_HCSTRING("_spacingY","\xd5","\xd6","\xa7","\x39")},
	{hx::fsFloat,(int)offsetof(Style_obj,_rotationX),HX_HCSTRING("_rotationX","\x1b","\xd5","\x91","\xc8")},
	{hx::fsFloat,(int)offsetof(Style_obj,_rotationY),HX_HCSTRING("_rotationY","\x1c","\xd5","\x91","\xc8")},
	{hx::fsFloat,(int)offsetof(Style_obj,_rotationZ),HX_HCSTRING("_rotationZ","\x1d","\xd5","\x91","\xc8")},
	{hx::fsString,(int)offsetof(Style_obj,_verticalAlignment),HX_HCSTRING("_verticalAlignment","\x4e","\x6c","\xcc","\xdc")},
	{hx::fsString,(int)offsetof(Style_obj,_horizontalAlignment),HX_HCSTRING("_horizontalAlignment","\x60","\x20","\x99","\xb5")},
	{hx::fsInt,(int)offsetof(Style_obj,_cornerRadiusTopLeft),HX_HCSTRING("_cornerRadiusTopLeft","\xf6","\x14","\x25","\x93")},
	{hx::fsInt,(int)offsetof(Style_obj,_cornerRadiusTopRight),HX_HCSTRING("_cornerRadiusTopRight","\x0d","\x50","\x5a","\xa4")},
	{hx::fsInt,(int)offsetof(Style_obj,_cornerRadiusBottomLeft),HX_HCSTRING("_cornerRadiusBottomLeft","\x18","\xf1","\xfd","\xd8")},
	{hx::fsInt,(int)offsetof(Style_obj,_cornerRadiusBottomRight),HX_HCSTRING("_cornerRadiusBottomRight","\xab","\x11","\x42","\x7c")},
	{hx::fsObject /*::openfl::_legacy::filters::BitmapFilter*/ ,(int)offsetof(Style_obj,_filter),HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3")},
	{hx::fsBool,(int)offsetof(Style_obj,_filterSet),HX_HCSTRING("_filterSet","\x8b","\x52","\x09","\x3d")},
	{hx::fsFloat,(int)offsetof(Style_obj,_alpha),HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d")},
	{hx::fsString,(int)offsetof(Style_obj,_fontName),HX_HCSTRING("_fontName","\x19","\x87","\x13","\x13")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontSize),HX_HCSTRING("_fontSize","\x8f","\xb5","\x67","\x16")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontScale),HX_HCSTRING("_fontScale","\xfc","\xed","\x4c","\x80")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontEmbedded),HX_HCSTRING("_fontEmbedded","\x58","\xad","\x9b","\xe2")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontBold),HX_HCSTRING("_fontBold","\x53","\x96","\x2f","\x0b")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontItalic),HX_HCSTRING("_fontItalic","\x3e","\x93","\x41","\x8d")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontUnderline),HX_HCSTRING("_fontUnderline","\x7e","\xd5","\xf8","\x35")},
	{hx::fsString,(int)offsetof(Style_obj,_textAlign),HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16")},
	{hx::fsString,(int)offsetof(Style_obj,_iconPosition),HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58")},
	{hx::fsString,(int)offsetof(Style_obj,_icon),HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8")},
	{hx::fsFloat,(int)offsetof(Style_obj,_iconWidth),HX_HCSTRING("_iconWidth","\x8e","\x03","\xc9","\x5f")},
	{hx::fsFloat,(int)offsetof(Style_obj,_iconHeight),HX_HCSTRING("_iconHeight","\x5f","\x91","\x69","\x26")},
	{hx::fsInt,(int)offsetof(Style_obj,_hasButtons),HX_HCSTRING("_hasButtons","\x26","\x07","\xb3","\x27")},
	{hx::fsString,(int)offsetof(Style_obj,_gradientType),HX_HCSTRING("_gradientType","\xa9","\xa3","\x4b","\xd7")},
	{hx::fsString,(int)offsetof(Style_obj,_selectionMethod),HX_HCSTRING("_selectionMethod","\xce","\xe6","\xd2","\x69")},
	{hx::fsInt,(int)offsetof(Style_obj,_autoHideScrolls),HX_HCSTRING("_autoHideScrolls","\x76","\x06","\x1e","\x87")},
	{hx::fsInt,(int)offsetof(Style_obj,_inlineScrolls),HX_HCSTRING("_inlineScrolls","\xae","\x6e","\xb2","\x89")},
	{hx::fsInt,(int)offsetof(Style_obj,_listSize),HX_HCSTRING("_listSize","\x9e","\x67","\xde","\x73")},
	{hx::fsBool,(int)offsetof(Style_obj,visibleSet),HX_HCSTRING("visibleSet","\x50","\x2e","\x90","\x88")},
	{hx::fsBool,(int)offsetof(Style_obj,autoSizeSet),HX_HCSTRING("autoSizeSet","\xb2","\x85","\x65","\x11")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Style_obj,_rawProperties),HX_HCSTRING("_rawProperties","\x3c","\x38","\xb6","\x76")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Style_obj,rawProperties),HX_HCSTRING("rawProperties","\xfb","\x47","\x64","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_dynamicValues","\x02","\x31","\x5a","\xac"),
	HX_HCSTRING("_target","\xf0","\x04","\x64","\xf5"),
	HX_HCSTRING("_autoApply","\x40","\x3f","\xe9","\x5d"),
	HX_HCSTRING("_visible","\xf3","\xd1","\xdc","\xdc"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_percentWidth","\xe0","\xe3","\x89","\xe0"),
	HX_HCSTRING("_percentHeight","\xcd","\xf8","\x6c","\x4e"),
	HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77"),
	HX_HCSTRING("_backgroundImage","\x0e","\x3f","\x33","\x6b"),
	HX_HCSTRING("_backgroundImageScale9","\x1d","\x5c","\x93","\xd2"),
	HX_HCSTRING("_backgroundImageRect","\x52","\x57","\x5b","\x05"),
	HX_HCSTRING("_backgroundColor","\x16","\x91","\x26","\xf8"),
	HX_HCSTRING("_backgroundColorGradientEnd","\x55","\x6a","\x79","\x18"),
	HX_HCSTRING("_backgroundAlpha","\x11","\xc7","\x60","\xcf"),
	HX_HCSTRING("_borderColor","\xd8","\xea","\xde","\x3c"),
	HX_HCSTRING("_borderSize","\xec","\xcc","\x77","\xd9"),
	HX_HCSTRING("_borderAlpha","\xd3","\x20","\x19","\x14"),
	HX_HCSTRING("_color","\xa4","\xb8","\x43","\x46"),
	HX_HCSTRING("_paddingLeft","\x79","\xf8","\xef","\xeb"),
	HX_HCSTRING("_paddingRight","\x2a","\x7f","\x16","\xfd"),
	HX_HCSTRING("_paddingTop","\x63","\xca","\x8f","\x0c"),
	HX_HCSTRING("_paddingBottom","\xdd","\x57","\xeb","\x8d"),
	HX_HCSTRING("_spacingX","\xd4","\xd6","\xa7","\x39"),
	HX_HCSTRING("_spacingY","\xd5","\xd6","\xa7","\x39"),
	HX_HCSTRING("_rotationX","\x1b","\xd5","\x91","\xc8"),
	HX_HCSTRING("_rotationY","\x1c","\xd5","\x91","\xc8"),
	HX_HCSTRING("_rotationZ","\x1d","\xd5","\x91","\xc8"),
	HX_HCSTRING("_verticalAlignment","\x4e","\x6c","\xcc","\xdc"),
	HX_HCSTRING("_horizontalAlignment","\x60","\x20","\x99","\xb5"),
	HX_HCSTRING("_cornerRadiusTopLeft","\xf6","\x14","\x25","\x93"),
	HX_HCSTRING("_cornerRadiusTopRight","\x0d","\x50","\x5a","\xa4"),
	HX_HCSTRING("_cornerRadiusBottomLeft","\x18","\xf1","\xfd","\xd8"),
	HX_HCSTRING("_cornerRadiusBottomRight","\xab","\x11","\x42","\x7c"),
	HX_HCSTRING("_filter","\x57","\x31","\xac","\xf3"),
	HX_HCSTRING("_filterSet","\x8b","\x52","\x09","\x3d"),
	HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"),
	HX_HCSTRING("_fontName","\x19","\x87","\x13","\x13"),
	HX_HCSTRING("_fontSize","\x8f","\xb5","\x67","\x16"),
	HX_HCSTRING("_fontScale","\xfc","\xed","\x4c","\x80"),
	HX_HCSTRING("_fontEmbedded","\x58","\xad","\x9b","\xe2"),
	HX_HCSTRING("_fontBold","\x53","\x96","\x2f","\x0b"),
	HX_HCSTRING("_fontItalic","\x3e","\x93","\x41","\x8d"),
	HX_HCSTRING("_fontUnderline","\x7e","\xd5","\xf8","\x35"),
	HX_HCSTRING("_textAlign","\x99","\x62","\x21","\x16"),
	HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58"),
	HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"),
	HX_HCSTRING("_iconWidth","\x8e","\x03","\xc9","\x5f"),
	HX_HCSTRING("_iconHeight","\x5f","\x91","\x69","\x26"),
	HX_HCSTRING("_hasButtons","\x26","\x07","\xb3","\x27"),
	HX_HCSTRING("_gradientType","\xa9","\xa3","\x4b","\xd7"),
	HX_HCSTRING("_selectionMethod","\xce","\xe6","\xd2","\x69"),
	HX_HCSTRING("_autoHideScrolls","\x76","\x06","\x1e","\x87"),
	HX_HCSTRING("_inlineScrolls","\xae","\x6e","\xb2","\x89"),
	HX_HCSTRING("_listSize","\x9e","\x67","\xde","\x73"),
	HX_HCSTRING("visibleSet","\x50","\x2e","\x90","\x88"),
	HX_HCSTRING("autoSizeSet","\xb2","\x85","\x65","\x11"),
	HX_HCSTRING("get_target","\x1a","\x63","\x74","\x77"),
	HX_HCSTRING("set_target","\x8e","\x01","\xf2","\x7a"),
	HX_HCSTRING("get_autoApply","\x56","\x97","\xaa","\xc3"),
	HX_HCSTRING("set_autoApply","\x62","\x79","\xb0","\x08"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_visibleSet","\x99","\xb6","\x85","\xfe"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_percentWidth","\x8a","\x3d","\xba","\x02"),
	HX_HCSTRING("set_percentWidth","\xfe","\x2a","\xfc","\x58"),
	HX_HCSTRING("get_percentHeight","\xe3","\x13","\x8b","\x16"),
	HX_HCSTRING("set_percentHeight","\xef","\xeb","\xf8","\x39"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_autoSizeSet","\x49","\x3d","\x47","\xd2"),
	HX_HCSTRING("get_backgroundImage","\xa4","\xcb","\x5e","\x0b"),
	HX_HCSTRING("set_backgroundImage","\xb0","\xbe","\xfb","\x47"),
	HX_HCSTRING("get_backgroundImageScale9","\x33","\x7d","\x83","\x7f"),
	HX_HCSTRING("set_backgroundImageScale9","\x3f","\x41","\xda","\xeb"),
	HX_HCSTRING("get_backgroundImageRect","\xe8","\xe6","\x57","\x0e"),
	HX_HCSTRING("set_backgroundImageRect","\xf4","\x4f","\xb9","\x10"),
	HX_HCSTRING("get_backgroundColor","\xac","\x1d","\x52","\x98"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("get_backgroundColorGradientEnd","\x7f","\x99","\x4b","\x18"),
	HX_HCSTRING("set_backgroundColorGradientEnd","\xf3","\xa9","\x36","\xf3"),
	HX_HCSTRING("get_backgroundAlpha","\xa7","\x53","\x8c","\x6f"),
	HX_HCSTRING("set_backgroundAlpha","\xb3","\x46","\x29","\xac"),
	HX_HCSTRING("get_borderColor","\x6e","\xf4","\xb6","\x97"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("get_borderSize","\x16","\x88","\xe3","\x7c"),
	HX_HCSTRING("set_borderSize","\x8a","\x70","\x03","\x9d"),
	HX_HCSTRING("get_borderAlpha","\x69","\x2a","\xf1","\x6e"),
	HX_HCSTRING("set_borderAlpha","\x75","\xa7","\xbc","\x6a"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_paddingLeft","\x0f","\x02","\xc8","\x46"),
	HX_HCSTRING("set_paddingLeft","\x1b","\x7f","\x93","\x42"),
	HX_HCSTRING("get_paddingRight","\xd4","\xd8","\x46","\x1f"),
	HX_HCSTRING("set_paddingRight","\x48","\xc6","\x88","\x75"),
	HX_HCSTRING("get_paddingTop","\x8d","\x85","\xfb","\xaf"),
	HX_HCSTRING("set_paddingTop","\x01","\x6e","\x1b","\xd0"),
	HX_HCSTRING("get_paddingBottom","\xf3","\x72","\x09","\x56"),
	HX_HCSTRING("set_paddingBottom","\xff","\x4a","\x77","\x79"),
	HX_HCSTRING("get_padding","\xe8","\xb9","\x77","\x56"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	HX_HCSTRING("get_spacingX","\x7e","\x93","\x2b","\xa7"),
	HX_HCSTRING("set_spacingX","\xf2","\xb6","\x24","\xbc"),
	HX_HCSTRING("get_spacingY","\x7f","\x93","\x2b","\xa7"),
	HX_HCSTRING("set_spacingY","\xf3","\xb6","\x24","\xbc"),
	HX_HCSTRING("get_spacing","\x9a","\x93","\xb5","\x17"),
	HX_HCSTRING("set_spacing","\xa6","\x9a","\x22","\x22"),
	HX_HCSTRING("get_rotationX","\x31","\x2d","\x53","\x2e"),
	HX_HCSTRING("set_rotationX","\x3d","\x0f","\x59","\x73"),
	HX_HCSTRING("get_rotationY","\x32","\x2d","\x53","\x2e"),
	HX_HCSTRING("set_rotationY","\x3e","\x0f","\x59","\x73"),
	HX_HCSTRING("get_rotationZ","\x33","\x2d","\x53","\x2e"),
	HX_HCSTRING("set_rotationZ","\x3f","\x0f","\x59","\x73"),
	HX_HCSTRING("get_horizontalAlignment","\xf6","\xaf","\x95","\xbe"),
	HX_HCSTRING("set_horizontalAlignment","\x02","\x19","\xf7","\xc0"),
	HX_HCSTRING("get_verticalAlignment","\x64","\xca","\x64","\x88"),
	HX_HCSTRING("set_verticalAlignment","\x70","\x98","\x6d","\xdc"),
	HX_HCSTRING("get_cornerRadiusTopLeft","\x8c","\xa4","\x21","\x9c"),
	HX_HCSTRING("set_cornerRadiusTopLeft","\x98","\x0d","\x83","\x9e"),
	HX_HCSTRING("get_cornerRadiusTopRight","\xb7","\x63","\x5b","\x78"),
	HX_HCSTRING("set_cornerRadiusTopRight","\x2b","\xe5","\x35","\x8b"),
	HX_HCSTRING("get_cornerRadiusBottomLeft","\x42","\xc3","\x2a","\x7e"),
	HX_HCSTRING("set_cornerRadiusBottomLeft","\xb6","\x89","\xbf","\xdd"),
	HX_HCSTRING("get_cornerRadiusBottomRight","\x41","\x24","\x4d","\x5e"),
	HX_HCSTRING("set_cornerRadiusBottomRight","\x4d","\x03","\xe6","\xa0"),
	HX_HCSTRING("get_cornerRadius","\x90","\x7e","\xfc","\x91"),
	HX_HCSTRING("set_cornerRadius","\x04","\x6c","\x3e","\xe8"),
	HX_HCSTRING("get_filter","\x81","\x8f","\xbc","\x75"),
	HX_HCSTRING("set_filter","\xf5","\x2d","\x3a","\x79"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_fontName","\xc3","\x43","\x97","\x80"),
	HX_HCSTRING("set_fontName","\x37","\x67","\x90","\x95"),
	HX_HCSTRING("get_fontSize","\x39","\x72","\xeb","\x83"),
	HX_HCSTRING("set_fontSize","\xad","\x95","\xe4","\x98"),
	HX_HCSTRING("get_fontScale","\x12","\x46","\x0e","\xe6"),
	HX_HCSTRING("set_fontScale","\x1e","\x28","\x14","\x2b"),
	HX_HCSTRING("get_fontEmbedded","\x02","\x07","\xcc","\x04"),
	HX_HCSTRING("set_fontEmbedded","\x76","\xf4","\x0d","\x5b"),
	HX_HCSTRING("get_fontBold","\xfd","\x52","\xb3","\x78"),
	HX_HCSTRING("set_fontBold","\x71","\x76","\xac","\x8d"),
	HX_HCSTRING("get_fontItalic","\x68","\x4e","\xad","\x30"),
	HX_HCSTRING("set_fontItalic","\xdc","\x36","\xcd","\x50"),
	HX_HCSTRING("get_fontUnderline","\x94","\xf0","\x16","\xfe"),
	HX_HCSTRING("set_fontUnderline","\xa0","\xc8","\x84","\x21"),
	HX_HCSTRING("get_textAlign","\xaf","\xba","\xe2","\x7b"),
	HX_HCSTRING("set_textAlign","\xbb","\x9c","\xe8","\xc0"),
	HX_HCSTRING("get_iconPosition","\xcb","\xd1","\xd7","\x7a"),
	HX_HCSTRING("set_iconPosition","\x3f","\xbf","\x19","\xd1"),
	HX_HCSTRING("get_icon","\x02","\xa3","\x6d","\xc5"),
	HX_HCSTRING("set_icon","\x76","\xfc","\xca","\x73"),
	HX_HCSTRING("get_iconWidth","\xa4","\x5b","\x8a","\xc5"),
	HX_HCSTRING("set_iconWidth","\xb0","\x3d","\x90","\x0a"),
	HX_HCSTRING("get_iconHeight","\x89","\x4c","\xd5","\xc9"),
	HX_HCSTRING("set_iconHeight","\xfd","\x34","\xf5","\xe9"),
	HX_HCSTRING("get_hasButtons","\x50","\xc2","\x1e","\xcb"),
	HX_HCSTRING("set_hasButtons","\xc4","\xaa","\x3e","\xeb"),
	HX_HCSTRING("get_gradientType","\x53","\xfd","\x7b","\xf9"),
	HX_HCSTRING("set_gradientType","\xc7","\xea","\xbd","\x4f"),
	HX_HCSTRING("get_selectionMethod","\x64","\x73","\xfe","\x09"),
	HX_HCSTRING("set_selectionMethod","\x70","\x66","\x9b","\x46"),
	HX_HCSTRING("get_autoHideScrolls","\x0c","\x93","\x49","\x27"),
	HX_HCSTRING("set_autoHideScrolls","\x18","\x86","\xe6","\x63"),
	HX_HCSTRING("get_inlineScrolls","\xc4","\x89","\xd0","\x51"),
	HX_HCSTRING("set_inlineScrolls","\xd0","\x61","\x3e","\x75"),
	HX_HCSTRING("get_listSize","\x48","\x24","\x62","\xe1"),
	HX_HCSTRING("set_listSize","\xbc","\x47","\x5b","\xf6"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("addDynamicValue","\x33","\x2f","\xb2","\x6e"),
	HX_HCSTRING("hasDynamicValue","\xec","\xed","\xd2","\x4f"),
	HX_HCSTRING("getDynamicValue","\x28","\x19","\x4d","\x0b"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("_rawProperties","\x3c","\x38","\xb6","\x76"),
	HX_HCSTRING("addRawProperty","\xbc","\x09","\x3c","\x69"),
	HX_HCSTRING("rawProperties","\xfb","\x47","\x64","\x38"),
	HX_HCSTRING("get_rawProperties","\x52","\x53","\xd4","\x3e"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Style_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Style_obj::__mClass,"__mClass");
};

#endif

hx::Class Style_obj::__mClass;

void Style_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.style.Style","\x92","\xbe","\xb7","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Style_obj >;
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
} // end namespace style
