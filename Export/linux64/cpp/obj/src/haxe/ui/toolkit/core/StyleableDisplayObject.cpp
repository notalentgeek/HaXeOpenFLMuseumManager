#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
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
#ifndef INCLUDED_openfl__legacy_filters_BitmapFilter
#include <openfl/_legacy/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void StyleableDisplayObject_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","new",0x55efa895,"haxe.ui.toolkit.core.StyleableDisplayObject.new","haxe/ui/toolkit/core/StyleableDisplayObject.hx",13,0xd6d306bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->_lazyLoadStyles = true;
	HX_STACK_LINE(23)
	super::__construct();
}
;
	return null();
}

//StyleableDisplayObject_obj::~StyleableDisplayObject_obj() { }

Dynamic StyleableDisplayObject_obj::__CreateEmpty() { return  new StyleableDisplayObject_obj; }
hx::ObjectPtr< StyleableDisplayObject_obj > StyleableDisplayObject_obj::__new()
{  hx::ObjectPtr< StyleableDisplayObject_obj > _result_ = new StyleableDisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic StyleableDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleableDisplayObject_obj > _result_ = new StyleableDisplayObject_obj();
	_result_->__construct();
	return _result_;}

hx::Object *StyleableDisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

StyleableDisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< StyleableDisplayObject_obj >(this); }
StyleableDisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< StyleableDisplayObject_obj >(this); }
StyleableDisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< StyleableDisplayObject_obj >(this); }
StyleableDisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< StyleableDisplayObject_obj >(this); }
StyleableDisplayObject_obj::operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< StyleableDisplayObject_obj >(this); }
Void StyleableDisplayObject_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","preInitialize",0x64884bc8,"haxe.ui.toolkit.core.StyleableDisplayObject.preInitialize","haxe/ui/toolkit/core/StyleableDisplayObject.hx",29,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::preInitialize();
		HX_STACK_LINE(31)
		this->refreshStyle();
	}
return null();
}


Void StyleableDisplayObject_obj::paint( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","paint",0x93b8c713,"haxe.ui.toolkit.core.StyleableDisplayObject.paint","haxe/ui/toolkit/core/StyleableDisplayObject.hx",34,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		Float tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		if ((tmp3)){
			HX_STACK_LINE(36)
			Float tmp5 = this->_height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(36)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			tmp4 = (tmp7 == (int)0);
		}
		else{
			HX_STACK_LINE(36)
			tmp4 = true;
		}
		HX_STACK_LINE(36)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		if ((tmp5)){
			HX_STACK_LINE(36)
			bool tmp7 = this->_ready;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(36)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(36)
			tmp6 = (tmp8 == false);
		}
		else{
			HX_STACK_LINE(36)
			tmp6 = true;
		}
		HX_STACK_LINE(36)
		if ((tmp6)){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(40)
		Float tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		Float tmp8 = this->_height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		::openfl::_legacy::geom::Rectangle tmp9 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		::openfl::_legacy::geom::Rectangle rc = tmp9;		HX_STACK_VAR(rc,"rc");
		HX_STACK_LINE(41)
		::openfl::_legacy::display::Graphics tmp10 = this->get_graphics();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::style::Style tmp11 = this->_baseStyle;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		::openfl::_legacy::geom::Rectangle tmp12 = rc;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::style::StyleHelper_obj::paintStyle(tmp10,tmp11,tmp12);
	}
return null();
}


Void StyleableDisplayObject_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","invalidate",0x52aae1e6,"haxe.ui.toolkit.core.StyleableDisplayObject.invalidate","haxe/ui/toolkit/core/StyleableDisplayObject.hx",44,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(45)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		if ((tmp3)){
			HX_STACK_LINE(45)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(45)
			tmp4 = true;
		}
		HX_STACK_LINE(45)
		if ((tmp4)){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(49)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		bool tmp6 = recursive;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		this->super::invalidate(tmp5,tmp6);
		HX_STACK_LINE(50)
		int tmp7 = (int(type) & int((int)1048576));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		bool tmp8 = (tmp7 == (int)1048576);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		if ((tmp8)){
			HX_STACK_LINE(51)
			this->refreshStyle();
		}
	}
return null();
}


::String StyleableDisplayObject_obj::set_id( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_id",0x35dbbe83,"haxe.ui.toolkit.core.StyleableDisplayObject.set_id","haxe/ui/toolkit/core/StyleableDisplayObject.hx",55,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(56)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(56)
	::String tmp1 = this->get_id();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(56)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(56)
	if ((tmp2)){
		HX_STACK_LINE(57)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		return tmp3;
	}
	HX_STACK_LINE(59)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	::String tmp4 = this->super::set_id(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(59)
	::String v = tmp4;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(60)
	bool tmp5 = this->_ready;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	if ((tmp5)){
		HX_STACK_LINE(61)
		bool tmp6 = this->_lazyLoadStyles;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(61)
		bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		if ((tmp7)){
			HX_STACK_LINE(62)
			this->buildStyles();
		}
		else{
			HX_STACK_LINE(64)
			this->clearStyles(null());
		}
		HX_STACK_LINE(66)
		::haxe::ui::toolkit::style::StyleManager tmp8 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		::haxe::ui::toolkit::style::Style tmp9 = tmp8->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(66)
		this->_baseStyle = tmp9;
		HX_STACK_LINE(67)
		this->invalidate((int)16,null());
	}
	HX_STACK_LINE(69)
	::String tmp6 = v;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(69)
	return tmp6;
}


::haxe::ui::toolkit::core::interfaces::ILayout StyleableDisplayObject_obj::set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_layout",0x183e8552,"haxe.ui.toolkit.core.StyleableDisplayObject.set_layout","haxe/ui/toolkit/core/StyleableDisplayObject.hx",72,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(73)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp1 = this->super::set_layout(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	value = tmp1;
	HX_STACK_LINE(74)
	::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	if ((tmp3)){
		HX_STACK_LINE(76)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp4 = this->get_layout();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(76)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(76)
		if ((tmp5)){
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::style::Style tmp6 = this->_baseStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			int tmp7 = tmp6->get_paddingLeft();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			if ((tmp8)){
				HX_STACK_LINE(78)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp9 = this->get_layout();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(78)
				::openfl::_legacy::geom::Rectangle tmp10 = tmp9->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				::haxe::ui::toolkit::style::Style tmp11 = this->_baseStyle;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(78)
				int tmp12 = tmp11->get_paddingLeft();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(78)
				tmp10->set_left(tmp12);
			}
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::style::Style tmp9 = this->_baseStyle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(80)
			int tmp10 = tmp9->get_paddingTop();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(80)
			bool tmp11 = (tmp10 != (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(80)
			if ((tmp11)){
				HX_STACK_LINE(81)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp12 = this->get_layout();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(81)
				::openfl::_legacy::geom::Rectangle tmp13 = tmp12->get_padding();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(81)
				::haxe::ui::toolkit::style::Style tmp14 = this->_baseStyle;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(81)
				int tmp15 = tmp14->get_paddingTop();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(81)
				tmp13->set_top(tmp15);
			}
			HX_STACK_LINE(83)
			::haxe::ui::toolkit::style::Style tmp12 = this->_baseStyle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			int tmp13 = tmp12->get_paddingRight();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			bool tmp14 = (tmp13 != (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			if ((tmp14)){
				HX_STACK_LINE(84)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp15 = this->get_layout();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(84)
				::openfl::_legacy::geom::Rectangle tmp16 = tmp15->get_padding();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(84)
				::haxe::ui::toolkit::style::Style tmp17 = this->_baseStyle;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(84)
				int tmp18 = tmp17->get_paddingRight();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(84)
				tmp16->set_right(tmp18);
			}
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::style::Style tmp15 = this->_baseStyle;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(86)
			int tmp16 = tmp15->get_paddingBottom();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(86)
			bool tmp17 = (tmp16 != (int)-1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(86)
			if ((tmp17)){
				HX_STACK_LINE(87)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp18 = this->get_layout();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(87)
				::openfl::_legacy::geom::Rectangle tmp19 = tmp18->get_padding();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(87)
				::haxe::ui::toolkit::style::Style tmp20 = this->_baseStyle;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(87)
				int tmp21 = tmp20->get_paddingBottom();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(87)
				tmp19->set_bottom(tmp21);
			}
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::style::Style tmp18 = this->_baseStyle;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(89)
			int tmp19 = tmp18->get_spacingX();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(89)
			bool tmp20 = (tmp19 != (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(89)
			if ((tmp20)){
				HX_STACK_LINE(90)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp21 = this->_layout;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(90)
				::haxe::ui::toolkit::style::Style tmp22 = this->_baseStyle;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(90)
				int tmp23 = tmp22->get_spacingX();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(90)
				tmp21->set_spacingX(tmp23);
			}
			HX_STACK_LINE(92)
			::haxe::ui::toolkit::style::Style tmp21 = this->_baseStyle;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(92)
			int tmp22 = tmp21->get_spacingY();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(92)
			bool tmp23 = (tmp22 != (int)-1);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(92)
			if ((tmp23)){
				HX_STACK_LINE(93)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp24 = this->_layout;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(93)
				::haxe::ui::toolkit::style::Style tmp25 = this->_baseStyle;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(93)
				int tmp26 = tmp25->get_spacingY();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(93)
				tmp24->set_spacingY(tmp26);
			}
		}
	}
	HX_STACK_LINE(97)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	return tmp4;
}


::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::get_baseStyle( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_baseStyle",0x334c2fac,"haxe.ui.toolkit.core.StyleableDisplayObject.get_baseStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",112,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	if ((tmp1)){
		HX_STACK_LINE(114)
		::haxe::ui::toolkit::style::Style tmp2 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		this->_baseStyle = tmp2;
		HX_STACK_LINE(115)
		::haxe::ui::toolkit::style::Style tmp3 = this->_baseStyle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(115)
		tmp3->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(117)
	::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_baseStyle,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::set_baseStyle( ::haxe::ui::toolkit::style::Style value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_baseStyle",0x785211b8,"haxe.ui.toolkit.core.StyleableDisplayObject.set_baseStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",120,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(121)
	this->_baseStyle = value;
	HX_STACK_LINE(122)
	::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	tmp->set_target(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(124)
	::haxe::ui::toolkit::style::Style tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_baseStyle,return )

::String StyleableDisplayObject_obj::get_styleName( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_styleName",0x7e191068,"haxe.ui.toolkit.core.StyleableDisplayObject.get_styleName","haxe/ui/toolkit/core/StyleableDisplayObject.hx",127,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	::String tmp = this->_styleName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_styleName,return )

::String StyleableDisplayObject_obj::set_styleName( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_styleName",0xc31ef274,"haxe.ui.toolkit.core.StyleableDisplayObject.set_styleName","haxe/ui/toolkit/core/StyleableDisplayObject.hx",131,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(132)
	this->_styleName = value;
	HX_STACK_LINE(133)
	bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	if ((tmp)){
		HX_STACK_LINE(134)
		bool tmp1 = this->_lazyLoadStyles;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		if ((tmp2)){
			HX_STACK_LINE(135)
			this->buildStyles();
		}
		else{
			HX_STACK_LINE(137)
			this->clearStyles(null());
		}
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::style::StyleManager tmp3 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::style::Style tmp4 = tmp3->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		this->_baseStyle = tmp4;
		HX_STACK_LINE(140)
		int tmp5 = (int)1048592;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		this->invalidate(tmp5,null());
	}
	HX_STACK_LINE(142)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_styleName,return )

::String StyleableDisplayObject_obj::get_styleString( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_styleString",0xf683482e,"haxe.ui.toolkit.core.StyleableDisplayObject.get_styleString","haxe/ui/toolkit/core/StyleableDisplayObject.hx",145,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	::String tmp = this->_styleString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_styleString,return )

::String StyleableDisplayObject_obj::set_styleString( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_styleString",0xf24ec53a,"haxe.ui.toolkit.core.StyleableDisplayObject.set_styleString","haxe/ui/toolkit/core/StyleableDisplayObject.hx",149,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(150)
	this->_styleString = value;
	HX_STACK_LINE(151)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_styleString,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::get_style( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_style",0x7bc66f7d,"haxe.ui.toolkit.core.StyleableDisplayObject.get_style","haxe/ui/toolkit/core/StyleableDisplayObject.hx",154,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	::haxe::ui::toolkit::style::Style tmp = this->_inlineStyle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	if ((tmp1)){
		HX_STACK_LINE(156)
		::haxe::ui::toolkit::style::Style tmp2 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		this->_inlineStyle = tmp2;
		HX_STACK_LINE(157)
		::haxe::ui::toolkit::style::Style tmp3 = this->_inlineStyle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		tmp3->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(159)
	::haxe::ui::toolkit::style::Style tmp2 = this->_inlineStyle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(159)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_style,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::set_style( ::haxe::ui::toolkit::style::Style value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_style",0x5f175b89,"haxe.ui.toolkit.core.StyleableDisplayObject.set_style","haxe/ui/toolkit/core/StyleableDisplayObject.hx",162,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(163)
	this->_inlineStyle = value;
	HX_STACK_LINE(164)
	::haxe::ui::toolkit::style::Style tmp = this->_inlineStyle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	if ((tmp1)){
		HX_STACK_LINE(165)
		::haxe::ui::toolkit::style::Style tmp2 = this->_inlineStyle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		tmp2->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(167)
	bool tmp2 = this->_ready;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	if ((tmp2)){
		HX_STACK_LINE(168)
		bool tmp3 = this->_lazyLoadStyles;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		bool tmp4 = (tmp3 == false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		if ((tmp4)){
			HX_STACK_LINE(169)
			this->buildStyles();
		}
		else{
			HX_STACK_LINE(171)
			this->clearStyles(null());
		}
		HX_STACK_LINE(173)
		::haxe::ui::toolkit::style::StyleManager tmp5 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		::haxe::ui::toolkit::style::Style tmp6 = tmp5->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		this->_baseStyle = tmp6;
		HX_STACK_LINE(174)
		this->invalidate((int)16,null());
	}
	HX_STACK_LINE(176)
	::haxe::ui::toolkit::style::Style tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(176)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_style,return )

Void StyleableDisplayObject_obj::storeStyle( ::String id,::haxe::ui::toolkit::style::Style value){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","storeStyle",0x8d1d19fb,"haxe.ui.toolkit.core.StyleableDisplayObject.storeStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",179,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(180)
		::haxe::ds::StringMap tmp = this->_storedStyles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(181)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(181)
			this->_storedStyles = tmp2;
		}
		HX_STACK_LINE(183)
		::haxe::ds::StringMap tmp2 = this->_storedStyles;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		::haxe::ui::toolkit::style::Style tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		tmp2->set(tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StyleableDisplayObject_obj,storeStyle,(void))

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::retrieveStyle( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","retrieveStyle",0x9e3c858a,"haxe.ui.toolkit.core.StyleableDisplayObject.retrieveStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",186,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(187)
	::haxe::ui::toolkit::style::Style storedStyle = null();		HX_STACK_VAR(storedStyle,"storedStyle");
	HX_STACK_LINE(189)
	bool tmp = this->_lazyLoadStyles;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	if ((tmp1)){
		HX_STACK_LINE(190)
		::haxe::ds::StringMap tmp2 = this->_storedStyles;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(190)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(190)
		if ((tmp3)){
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(193)
		::haxe::ds::StringMap tmp4 = this->_storedStyles;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(193)
		::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(193)
		::haxe::ui::toolkit::style::Style tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(193)
		storedStyle = tmp6;
	}
	else{
		HX_STACK_LINE(195)
		bool tmp2 = this->_ready;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		if ((tmp2)){
			HX_STACK_LINE(196)
			::haxe::ds::StringMap tmp3 = this->_storedStyles;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(196)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			if ((tmp4)){
				HX_STACK_LINE(197)
				::haxe::ds::StringMap tmp5 = this->_storedStyles;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(197)
				::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(197)
				::haxe::ui::toolkit::style::Style tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(197)
				storedStyle = tmp7;
			}
			HX_STACK_LINE(199)
			bool tmp5 = (storedStyle == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(199)
			if ((tmp5)){
				HX_STACK_LINE(200)
				::haxe::ui::toolkit::style::StyleManager tmp6 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(200)
				::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(200)
				::haxe::ui::toolkit::style::Style tmp8 = tmp6->buildStyleFor(hx::ObjectPtr<OBJ_>(this),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(200)
				storedStyle = tmp8;
				HX_STACK_LINE(201)
				::String tmp9 = id;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(201)
				::haxe::ui::toolkit::style::Style tmp10 = storedStyle;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(201)
				this->storeStyle(tmp9,tmp10);
			}
		}
	}
	HX_STACK_LINE(206)
	::haxe::ui::toolkit::style::Style tmp2 = storedStyle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(206)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,retrieveStyle,return )

Void StyleableDisplayObject_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","applyStyle",0xfaefe94e,"haxe.ui.toolkit.core.StyleableDisplayObject.applyStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",209,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		if ((tmp1)){
			HX_STACK_LINE(211)
			return null();
		}
		HX_STACK_LINE(214)
		::haxe::ui::toolkit::style::Style tmp2 = this->_inlineStyle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		if ((tmp3)){
			HX_STACK_LINE(215)
			::haxe::ui::toolkit::style::Style tmp4 = this->_baseStyle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			::haxe::ui::toolkit::style::Style tmp5 = this->_inlineStyle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			tmp4->merge(tmp5);
		}
		HX_STACK_LINE(217)
		::haxe::ui::toolkit::style::Style tmp4 = this->_baseStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(217)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(217)
		if ((tmp5)){
			HX_STACK_LINE(218)
			::haxe::ui::toolkit::style::Style tmp6 = this->_baseStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(218)
			Float tmp7 = tmp6->get_alpha();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			if ((tmp8)){
				HX_STACK_LINE(219)
				::openfl::_legacy::display::Sprite tmp9 = this->_sprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(219)
				::haxe::ui::toolkit::style::Style tmp10 = this->_baseStyle;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(219)
				Float tmp11 = tmp10->get_alpha();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(219)
				tmp9->set_alpha(tmp11);
			}
			else{
				HX_STACK_LINE(221)
				::openfl::_legacy::display::Sprite tmp9 = this->_sprite;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(221)
				Float tmp10 = this->get_alpha();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				tmp9->set_alpha(tmp10);
			}
			HX_STACK_LINE(224)
			::haxe::ui::toolkit::style::Style tmp9 = this->_baseStyle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			::String tmp10 = tmp9->get_horizontalAlignment();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			if ((tmp11)){
				HX_STACK_LINE(225)
				::haxe::ui::toolkit::style::Style tmp12 = this->_baseStyle;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				::String tmp13 = tmp12->get_horizontalAlignment();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(225)
				this->set_horizontalAlign(tmp13);
			}
			HX_STACK_LINE(227)
			::haxe::ui::toolkit::style::Style tmp12 = this->_baseStyle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			::String tmp13 = tmp12->get_verticalAlignment();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(227)
			if ((tmp14)){
				HX_STACK_LINE(228)
				::haxe::ui::toolkit::style::Style tmp15 = this->_baseStyle;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(228)
				::String tmp16 = tmp15->get_verticalAlignment();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(228)
				this->set_verticalAlign(tmp16);
			}
			HX_STACK_LINE(232)
			::haxe::ui::toolkit::style::Style tmp15 = this->_baseStyle;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(232)
			::openfl::_legacy::filters::BitmapFilter tmp16 = tmp15->get_filter();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(232)
			bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(232)
			if ((tmp17)){
				HX_STACK_LINE(233)
				::openfl::_legacy::display::Sprite tmp18 = this->_sprite;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(233)
				::haxe::ui::toolkit::style::Style tmp19 = this->_baseStyle;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(233)
				::openfl::_legacy::filters::BitmapFilter tmp20 = tmp19->get_filter();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(233)
				tmp18->set_filters(Array_obj< ::Dynamic >::__new().Add(tmp20));
			}
			else{
				HX_STACK_LINE(235)
				::openfl::_legacy::display::Sprite tmp18 = this->_sprite;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(235)
				tmp18->set_filters(Array_obj< ::Dynamic >::__new());
			}
			HX_STACK_LINE(239)
			::haxe::ui::toolkit::style::Style tmp18 = this->_baseStyle;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(239)
			bool tmp19 = tmp18->get_visibleSet();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(239)
			bool tmp20 = (tmp19 == true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(239)
			if ((tmp20)){
				HX_STACK_LINE(240)
				::haxe::ui::toolkit::style::Style tmp21 = this->_baseStyle;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(240)
				bool tmp22 = tmp21->get_visible();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(240)
				this->set_visible(tmp22);
			}
		}
		HX_STACK_LINE(244)
		this->invalidate((int)16,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,applyStyle,(void))

Void StyleableDisplayObject_obj::buildStyles( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","buildStyles",0xab726125,"haxe.ui.toolkit.core.StyleableDisplayObject.buildStyles","haxe/ui/toolkit/core/StyleableDisplayObject.hx",247,0xd6d306bb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,buildStyles,(void))

Void StyleableDisplayObject_obj::clearStyles( hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","clearStyles",0xeeee88c4,"haxe.ui.toolkit.core.StyleableDisplayObject.clearStyles","haxe/ui/toolkit/core/StyleableDisplayObject.hx",251,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(252)
		::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(252)
		this->_storedStyles = tmp;
		HX_STACK_LINE(253)
		bool tmp1 = (recursive == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(253)
		if ((tmp1)){
			HX_STACK_LINE(253)
			tmp2 = (this->get_children() != null());
		}
		else{
			HX_STACK_LINE(253)
			tmp2 = false;
		}
		HX_STACK_LINE(253)
		if ((tmp2)){
			HX_STACK_LINE(254)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(254)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(254)
			while((true)){
				HX_STACK_LINE(254)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(254)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(254)
				if ((tmp4)){
					HX_STACK_LINE(254)
					break;
				}
				HX_STACK_LINE(254)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(254)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp5;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(254)
				++(_g);
				HX_STACK_LINE(255)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(255)
				bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(255)
				if ((tmp7)){
					HX_STACK_LINE(256)
					::haxe::ui::toolkit::core::StyleableDisplayObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(256)
					tmp8 = hx::TCast< ::haxe::ui::toolkit::core::StyleableDisplayObject >::cast(c);
					HX_STACK_LINE(256)
					bool tmp9 = recursive;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(256)
					tmp8->clearStyles(tmp9);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,clearStyles,(void))

Void StyleableDisplayObject_obj::refreshStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","refreshStyle",0xdb339a81,"haxe.ui.toolkit.core.StyleableDisplayObject.refreshStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",262,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(263)
		bool tmp = this->_lazyLoadStyles;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		if ((tmp1)){
			HX_STACK_LINE(264)
			this->buildStyles();
		}
		HX_STACK_LINE(266)
		bool tmp2 = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		if ((tmp2)){
			HX_STACK_LINE(267)
			::haxe::ui::toolkit::core::StateComponent tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(267)
			tmp3 = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(267)
			::String tmp4 = tmp3->get_state();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(267)
			::String state = tmp4;		HX_STACK_VAR(state,"state");
			HX_STACK_LINE(268)
			bool tmp5 = (state == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(268)
			if ((tmp5)){
				HX_STACK_LINE(269)
				state = HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
			}
			HX_STACK_LINE(271)
			::String tmp6 = state;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(271)
			::haxe::ui::toolkit::style::Style tmp7 = this->retrieveStyle(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(271)
			this->_baseStyle = tmp7;
			HX_STACK_LINE(272)
			::haxe::ui::toolkit::style::Style tmp8 = this->_baseStyle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(272)
			bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(272)
			if ((tmp9)){
				HX_STACK_LINE(273)
				::haxe::ui::toolkit::style::StyleManager tmp10 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(273)
				::haxe::ui::toolkit::core::StateComponent tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(273)
				tmp11 = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(273)
				::String tmp12 = tmp11->get_state();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(273)
				::haxe::ui::toolkit::style::Style tmp13 = tmp10->buildStyleFor(hx::ObjectPtr<OBJ_>(this),tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(273)
				this->_baseStyle = tmp13;
			}
		}
		else{
			HX_STACK_LINE(276)
			::haxe::ui::toolkit::style::StyleManager tmp3 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(276)
			::haxe::ui::toolkit::style::Style tmp4 = tmp3->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(276)
			this->_baseStyle = tmp4;
		}
		HX_STACK_LINE(279)
		::haxe::ui::toolkit::style::Style tmp3 = this->_baseStyle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		::haxe::ui::toolkit::style::Style tmp4 = this->_inlineStyle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(279)
		tmp3->merge(tmp4);
		HX_STACK_LINE(281)
		::haxe::ui::toolkit::style::Style tmp5 = this->_baseStyle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(281)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(281)
		if ((tmp6)){
			HX_STACK_LINE(283)
			::haxe::ui::toolkit::style::Style tmp7 = this->_baseStyle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(283)
			int tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(283)
			int tmp9 = (int)-1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(283)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(283)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(283)
			if ((tmp10)){
				HX_STACK_LINE(283)
				Float tmp12 = this->get_width();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(283)
				tmp11 = (tmp13 == (int)0);
			}
			else{
				HX_STACK_LINE(283)
				tmp11 = false;
			}
			HX_STACK_LINE(283)
			if ((tmp11)){
				HX_STACK_LINE(284)
				::haxe::ui::toolkit::style::Style tmp12 = this->_baseStyle;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(284)
				int tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(284)
				this->set_width(tmp13);
			}
			HX_STACK_LINE(286)
			::haxe::ui::toolkit::style::Style tmp12 = this->_baseStyle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(286)
			int tmp13 = tmp12->get_height();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(286)
			int tmp14 = (int)-1;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(286)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(286)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(286)
			if ((tmp15)){
				HX_STACK_LINE(286)
				Float tmp17 = this->get_height();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(286)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(286)
				tmp16 = (tmp18 == (int)0);
			}
			else{
				HX_STACK_LINE(286)
				tmp16 = false;
			}
			HX_STACK_LINE(286)
			if ((tmp16)){
				HX_STACK_LINE(287)
				::haxe::ui::toolkit::style::Style tmp17 = this->_baseStyle;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(287)
				int tmp18 = tmp17->get_height();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(287)
				this->set_height(tmp18);
			}
			HX_STACK_LINE(290)
			::haxe::ui::toolkit::style::Style tmp17 = this->_baseStyle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(290)
			int tmp18 = tmp17->get_percentWidth();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(290)
			int tmp19 = (int)-1;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(290)
			bool tmp20 = (tmp18 != tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(290)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(290)
			if ((tmp20)){
				HX_STACK_LINE(290)
				Float tmp22 = this->get_percentWidth();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(290)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(290)
				tmp21 = (tmp23 == (int)-1);
			}
			else{
				HX_STACK_LINE(290)
				tmp21 = false;
			}
			HX_STACK_LINE(290)
			if ((tmp21)){
				HX_STACK_LINE(291)
				::haxe::ui::toolkit::style::Style tmp22 = this->_baseStyle;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(291)
				int tmp23 = tmp22->get_percentWidth();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(291)
				this->set_percentWidth(tmp23);
			}
			HX_STACK_LINE(293)
			::haxe::ui::toolkit::style::Style tmp22 = this->_baseStyle;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(293)
			int tmp23 = tmp22->get_percentHeight();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(293)
			int tmp24 = (int)-1;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(293)
			bool tmp25 = (tmp23 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(293)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(293)
			if ((tmp25)){
				HX_STACK_LINE(293)
				Float tmp27 = this->get_percentHeight();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(293)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(293)
				tmp26 = (tmp28 == (int)-1);
			}
			else{
				HX_STACK_LINE(293)
				tmp26 = false;
			}
			HX_STACK_LINE(293)
			if ((tmp26)){
				HX_STACK_LINE(294)
				::haxe::ui::toolkit::style::Style tmp27 = this->_baseStyle;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(294)
				int tmp28 = tmp27->get_percentHeight();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(294)
				this->set_percentHeight(tmp28);
			}
			HX_STACK_LINE(296)
			::haxe::ui::toolkit::style::Style tmp27 = this->_baseStyle;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(296)
			bool tmp28 = tmp27->get_autoSizeSet();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(296)
			if ((tmp28)){
				HX_STACK_LINE(297)
				::haxe::ui::toolkit::style::Style tmp29 = this->_baseStyle;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(297)
				bool tmp30 = tmp29->get_autoSize();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(297)
				this->set_autoSize(tmp30);
			}
			HX_STACK_LINE(301)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp29 = this->get_layout();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(301)
			bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(301)
			if ((tmp30)){
				HX_STACK_LINE(302)
				::haxe::ui::toolkit::style::Style tmp31 = this->_baseStyle;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(302)
				int tmp32 = tmp31->get_paddingLeft();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(302)
				bool tmp33 = (tmp32 != (int)-1);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(302)
				if ((tmp33)){
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::core::interfaces::ILayout tmp34 = this->get_layout();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(303)
					::openfl::_legacy::geom::Rectangle tmp35 = tmp34->get_padding();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::style::Style tmp36 = this->_baseStyle;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(303)
					int tmp37 = tmp36->get_paddingLeft();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(303)
					tmp35->set_left(tmp37);
				}
				HX_STACK_LINE(305)
				::haxe::ui::toolkit::style::Style tmp34 = this->_baseStyle;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(305)
				int tmp35 = tmp34->get_paddingTop();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(305)
				bool tmp36 = (tmp35 != (int)-1);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(305)
				if ((tmp36)){
					HX_STACK_LINE(306)
					::haxe::ui::toolkit::core::interfaces::ILayout tmp37 = this->get_layout();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(306)
					::openfl::_legacy::geom::Rectangle tmp38 = tmp37->get_padding();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(306)
					::haxe::ui::toolkit::style::Style tmp39 = this->_baseStyle;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(306)
					int tmp40 = tmp39->get_paddingTop();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(306)
					tmp38->set_top(tmp40);
				}
				HX_STACK_LINE(308)
				::haxe::ui::toolkit::style::Style tmp37 = this->_baseStyle;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(308)
				int tmp38 = tmp37->get_paddingRight();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(308)
				bool tmp39 = (tmp38 != (int)-1);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(308)
				if ((tmp39)){
					HX_STACK_LINE(309)
					::haxe::ui::toolkit::core::interfaces::ILayout tmp40 = this->get_layout();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(309)
					::openfl::_legacy::geom::Rectangle tmp41 = tmp40->get_padding();		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(309)
					::haxe::ui::toolkit::style::Style tmp42 = this->_baseStyle;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(309)
					int tmp43 = tmp42->get_paddingRight();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(309)
					tmp41->set_right(tmp43);
				}
				HX_STACK_LINE(311)
				::haxe::ui::toolkit::style::Style tmp40 = this->_baseStyle;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(311)
				int tmp41 = tmp40->get_paddingBottom();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(311)
				bool tmp42 = (tmp41 != (int)-1);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(311)
				if ((tmp42)){
					HX_STACK_LINE(312)
					::haxe::ui::toolkit::core::interfaces::ILayout tmp43 = this->get_layout();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(312)
					::openfl::_legacy::geom::Rectangle tmp44 = tmp43->get_padding();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(312)
					::haxe::ui::toolkit::style::Style tmp45 = this->_baseStyle;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(312)
					int tmp46 = tmp45->get_paddingBottom();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(312)
					tmp44->set_bottom(tmp46);
				}
				HX_STACK_LINE(314)
				::haxe::ui::toolkit::style::Style tmp43 = this->_baseStyle;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(314)
				int tmp44 = tmp43->get_spacingX();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(314)
				bool tmp45 = (tmp44 != (int)-1);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(314)
				if ((tmp45)){
					HX_STACK_LINE(315)
					::haxe::ui::toolkit::core::interfaces::ILayout tmp46 = this->_layout;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(315)
					::haxe::ui::toolkit::style::Style tmp47 = this->_baseStyle;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(315)
					int tmp48 = tmp47->get_spacingX();		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(315)
					tmp46->set_spacingX(tmp48);
				}
				HX_STACK_LINE(317)
				::haxe::ui::toolkit::style::Style tmp46 = this->_baseStyle;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(317)
				int tmp47 = tmp46->get_spacingY();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(317)
				bool tmp48 = (tmp47 != (int)-1);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(317)
				if ((tmp48)){
					HX_STACK_LINE(318)
					::haxe::ui::toolkit::core::interfaces::ILayout tmp49 = this->_layout;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(318)
					::haxe::ui::toolkit::style::Style tmp50 = this->_baseStyle;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(318)
					int tmp51 = tmp50->get_spacingY();		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(318)
					tmp49->set_spacingY(tmp51);
				}
			}
		}
		HX_STACK_LINE(323)
		this->applyStyle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,refreshStyle,(void))

::haxe::ui::toolkit::core::DisplayObject StyleableDisplayObject_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","clone",0x1ecd22d2,"haxe.ui.toolkit.core.StyleableDisplayObject.clone","src/haxe/ui/toolkit/core/StyleableDisplayObject.hx",1,0xa2f520c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObjectContainer tmp = hx::TCast< ::haxe::ui::toolkit::core::DisplayObjectContainer >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StyleableDisplayObject c = ((::haxe::ui::toolkit::core::StyleableDisplayObject)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::style::Style tmp1 = this->get_baseStyle();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_baseStyle(tmp1);
	HX_STACK_LINE(4)
	::String tmp2 = this->get_styleName();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_styleName(tmp2);
	HX_STACK_LINE(5)
	::haxe::ui::toolkit::style::Style tmp3 = this->get_style();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_style(tmp3);
	HX_STACK_LINE(6)
	::String tmp4 = this->get_styleString();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	c->set_styleString(tmp4);
	HX_STACK_LINE(7)
	::haxe::ui::toolkit::core::StyleableDisplayObject tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(7)
	return tmp5;
}


::haxe::ui::toolkit::core::DisplayObject StyleableDisplayObject_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","self",0xdf11e1b7,"haxe.ui.toolkit.core.StyleableDisplayObject.self","src/haxe/ui/toolkit/core/StyleableDisplayObject.hx",1,0xa2f520c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StyleableDisplayObject tmp = ::haxe::ui::toolkit::core::StyleableDisplayObject_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



StyleableDisplayObject_obj::StyleableDisplayObject_obj()
{
}

void StyleableDisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleableDisplayObject);
	HX_MARK_MEMBER_NAME(_baseStyle,"_baseStyle");
	HX_MARK_MEMBER_NAME(_storedStyles,"_storedStyles");
	HX_MARK_MEMBER_NAME(_styleName,"_styleName");
	HX_MARK_MEMBER_NAME(_styleString,"_styleString");
	HX_MARK_MEMBER_NAME(_inlineStyle,"_inlineStyle");
	HX_MARK_MEMBER_NAME(_lazyLoadStyles,"_lazyLoadStyles");
	::haxe::ui::toolkit::core::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StyleableDisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_baseStyle,"_baseStyle");
	HX_VISIT_MEMBER_NAME(_storedStyles,"_storedStyles");
	HX_VISIT_MEMBER_NAME(_styleName,"_styleName");
	HX_VISIT_MEMBER_NAME(_styleString,"_styleString");
	HX_VISIT_MEMBER_NAME(_inlineStyle,"_inlineStyle");
	HX_VISIT_MEMBER_NAME(_lazyLoadStyles,"_lazyLoadStyles");
	::haxe::ui::toolkit::core::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StyleableDisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == hx::paccAlways) return get_style(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"baseStyle") ) { if (inCallProp == hx::paccAlways) return get_baseStyle(); }
		if (HX_FIELD_EQ(inName,"styleName") ) { if (inCallProp == hx::paccAlways) return get_styleName(); }
		if (HX_FIELD_EQ(inName,"get_style") ) { return get_style_dyn(); }
		if (HX_FIELD_EQ(inName,"set_style") ) { return set_style_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_baseStyle") ) { return _baseStyle; }
		if (HX_FIELD_EQ(inName,"_styleName") ) { return _styleName; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return set_layout_dyn(); }
		if (HX_FIELD_EQ(inName,"storeStyle") ) { return storeStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == hx::paccAlways) return get_styleString(); }
		if (HX_FIELD_EQ(inName,"buildStyles") ) { return buildStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"clearStyles") ) { return clearStyles_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_styleString") ) { return _styleString; }
		if (HX_FIELD_EQ(inName,"_inlineStyle") ) { return _inlineStyle; }
		if (HX_FIELD_EQ(inName,"refreshStyle") ) { return refreshStyle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_storedStyles") ) { return _storedStyles; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_baseStyle") ) { return get_baseStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_baseStyle") ) { return set_baseStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_styleName") ) { return get_styleName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_styleName") ) { return set_styleName_dyn(); }
		if (HX_FIELD_EQ(inName,"retrieveStyle") ) { return retrieveStyle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lazyLoadStyles") ) { return _lazyLoadStyles; }
		if (HX_FIELD_EQ(inName,"get_styleString") ) { return get_styleString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_styleString") ) { return set_styleString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleableDisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == hx::paccAlways) return set_style(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"baseStyle") ) { if (inCallProp == hx::paccAlways) return set_baseStyle(inValue); }
		if (HX_FIELD_EQ(inName,"styleName") ) { if (inCallProp == hx::paccAlways) return set_styleName(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_baseStyle") ) { _baseStyle=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_styleName") ) { _styleName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"styleString") ) { if (inCallProp == hx::paccAlways) return set_styleString(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_styleString") ) { _styleString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inlineStyle") ) { _inlineStyle=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_storedStyles") ) { _storedStyles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_lazyLoadStyles") ) { _lazyLoadStyles=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StyleableDisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StyleableDisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_baseStyle","\x21","\xcb","\xa4","\xef"));
	outFields->push(HX_HCSTRING("_storedStyles","\xc4","\xea","\xb0","\x39"));
	outFields->push(HX_HCSTRING("_styleName","\xdd","\xab","\x71","\x3a"));
	outFields->push(HX_HCSTRING("_styleString","\xe3","\x6a","\xd1","\xee"));
	outFields->push(HX_HCSTRING("_inlineStyle","\x19","\xd6","\x5b","\xac"));
	outFields->push(HX_HCSTRING("_lazyLoadStyles","\x1b","\x0b","\x79","\xd8"));
	outFields->push(HX_HCSTRING("baseStyle","\x60","\x4f","\x02","\x94"));
	outFields->push(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("styleString","\xe2","\xbc","\xc7","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleableDisplayObject_obj,_baseStyle),HX_HCSTRING("_baseStyle","\x21","\xcb","\xa4","\xef")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleableDisplayObject_obj,_storedStyles),HX_HCSTRING("_storedStyles","\xc4","\xea","\xb0","\x39")},
	{hx::fsString,(int)offsetof(StyleableDisplayObject_obj,_styleName),HX_HCSTRING("_styleName","\xdd","\xab","\x71","\x3a")},
	{hx::fsString,(int)offsetof(StyleableDisplayObject_obj,_styleString),HX_HCSTRING("_styleString","\xe3","\x6a","\xd1","\xee")},
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleableDisplayObject_obj,_inlineStyle),HX_HCSTRING("_inlineStyle","\x19","\xd6","\x5b","\xac")},
	{hx::fsBool,(int)offsetof(StyleableDisplayObject_obj,_lazyLoadStyles),HX_HCSTRING("_lazyLoadStyles","\x1b","\x0b","\x79","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_baseStyle","\x21","\xcb","\xa4","\xef"),
	HX_HCSTRING("_storedStyles","\xc4","\xea","\xb0","\x39"),
	HX_HCSTRING("_styleName","\xdd","\xab","\x71","\x3a"),
	HX_HCSTRING("_styleString","\xe3","\x6a","\xd1","\xee"),
	HX_HCSTRING("_inlineStyle","\x19","\xd6","\x5b","\xac"),
	HX_HCSTRING("_lazyLoadStyles","\x1b","\x0b","\x79","\xd8"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("paint","\x9e","\xb7","\x4e","\xbd"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"),
	HX_HCSTRING("set_layout","\xe7","\xbc","\xbd","\x4c"),
	HX_HCSTRING("get_baseStyle","\x37","\x23","\x66","\x55"),
	HX_HCSTRING("set_baseStyle","\x43","\x05","\x6c","\x9a"),
	HX_HCSTRING("get_styleName","\xf3","\x03","\x33","\xa0"),
	HX_HCSTRING("set_styleName","\xff","\xe5","\x38","\xe5"),
	HX_HCSTRING("get_styleString","\x79","\x74","\xa9","\x49"),
	HX_HCSTRING("set_styleString","\x85","\xf1","\x74","\x45"),
	HX_HCSTRING("get_style","\x88","\x01","\xc7","\xc7"),
	HX_HCSTRING("set_style","\x94","\xed","\x17","\xab"),
	HX_HCSTRING("storeStyle","\x90","\x51","\x9c","\xc1"),
	HX_HCSTRING("retrieveStyle","\x15","\x79","\x56","\xc0"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("buildStyles","\xf0","\xcb","\x43","\x66"),
	HX_HCSTRING("clearStyles","\x8f","\xf3","\xbf","\xa9"),
	HX_HCSTRING("refreshStyle","\x56","\xa1","\x9f","\x97"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleableDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleableDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class StyleableDisplayObject_obj::__mClass;

void StyleableDisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.StyleableDisplayObject","\x23","\xba","\x48","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StyleableDisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StyleableDisplayObject_obj >;
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

void StyleableDisplayObject_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/StyleableDisplayObject.hx",13,0xd6d306bb)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/StyleableDisplayObject.hx",13,0xd6d306bb)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/StyleableDisplayObject.hx",13,0xd6d306bb)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("clonable","\xa2","\x85","\xa9","\xa1") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("baseStyle","\x60","\x4f","\x02","\x94") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/StyleableDisplayObject.hx",13,0xd6d306bb)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("clonable","\xa2","\x85","\xa9","\xa1") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84") , _Function_2_2::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
