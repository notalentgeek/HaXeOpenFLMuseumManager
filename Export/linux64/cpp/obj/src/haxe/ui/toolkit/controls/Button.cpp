#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_BoxLayout
#include <haxe/ui/toolkit/layout/BoxLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Button_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","new",0x29238d7a,"haxe.ui.toolkit.controls.Button.new","haxe/ui/toolkit/controls/Button.hx",44,0x493ac9f6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(503)
	this->dispatchChangeEvents = true;
	HX_STACK_LINE(179)
	this->_iconHeight = ((Float)-1);
	HX_STACK_LINE(161)
	this->_iconWidth = ((Float)-1);
	HX_STACK_LINE(72)
	this->_iconPosition = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	HX_STACK_LINE(71)
	this->_allowSelection = true;
	HX_STACK_LINE(70)
	this->_selected = false;
	HX_STACK_LINE(69)
	this->_toggle = false;
	HX_STACK_LINE(68)
	this->_down = false;
	HX_STACK_LINE(63)
	this->_remainPressed = false;
	HX_STACK_LINE(62)
	this->_allowFocus = true;
	HX_STACK_LINE(79)
	super::__construct();
	HX_STACK_LINE(81)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	tmp->buttonMode = true;
	HX_STACK_LINE(82)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	tmp1->useHandCursor = true;
	HX_STACK_LINE(83)
	this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	HX_STACK_LINE(84)
	::haxe::ui::toolkit::layout::HorizontalLayout tmp2 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	this->_layout = tmp2;
	HX_STACK_LINE(85)
	this->set_autoSize(true);
	HX_STACK_LINE(87)
	::haxe::ds::StringMap tmp3 = ::haxe::ui::toolkit::controls::Button_obj::_groups;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(87)
	if ((tmp4)){
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp5 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::controls::Button_obj::_groups = tmp5;
	}
}
;
	return null();
}

//Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new()
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct();
	return _result_;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Button_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IFocusable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IFocusable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Button_obj::operator ::haxe::ui::toolkit::core::interfaces::IFocusable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IFocusable_delegate_< Button_obj >(this); }
Button_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Button_obj >(this); }
Void Button_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","dispose",0xaba9d2b9,"haxe.ui.toolkit.controls.Button.dispose","haxe/ui/toolkit/controls/Button.hx",92,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		::String tmp = this->get_group();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(95)
			::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::controls::Button_obj::_groups;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(95)
			::String tmp3 = this->_group;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(95)
			Array< ::Dynamic > arr = tmp2->get(tmp3);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(96)
			arr->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(98)
		this->super::dispose();
	}
return null();
}


bool Button_obj::get_remainPressed( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_remainPressed",0x1d111087,"haxe.ui.toolkit.controls.Button.get_remainPressed","haxe/ui/toolkit/controls/Button.hx",115,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	bool tmp = this->_remainPressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_remainPressed,return )

bool Button_obj::set_remainPressed( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_remainPressed",0x407ee893,"haxe.ui.toolkit.controls.Button.set_remainPressed","haxe/ui/toolkit/controls/Button.hx",119,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(120)
	this->_remainPressed = value;
	HX_STACK_LINE(121)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_remainPressed,return )

Dynamic Button_obj::get_icon( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_icon",0x26b827a8,"haxe.ui.toolkit.controls.Button.get_icon","haxe/ui/toolkit/controls/Button.hx",124,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	::haxe::ui::toolkit::controls::Image tmp = this->_icon;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	if ((tmp1)){
		HX_STACK_LINE(126)
		return null();
	}
	HX_STACK_LINE(128)
	::haxe::ui::toolkit::controls::Image tmp2 = this->_icon;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	Dynamic tmp3 = tmp2->get_resource();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(128)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_icon,return )

Dynamic Button_obj::set_icon( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_icon",0xd515811c,"haxe.ui.toolkit.controls.Button.set_icon","haxe/ui/toolkit/controls/Button.hx",131,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(132)
	bool tmp = (value == HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	if ((tmp)){
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::controls::Image tmp1 = this->_icon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(133)
		if ((tmp2)){
			HX_STACK_LINE(134)
			::haxe::ui::toolkit::controls::Image tmp3 = this->_icon;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			tmp3->set_visible(false);
		}
		HX_STACK_LINE(136)
		Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(136)
		return tmp3;
	}
	HX_STACK_LINE(138)
	bool tmp1 = (value != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	if ((tmp1)){
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::controls::Image tmp2 = this->_icon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		if ((tmp3)){
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::controls::Image tmp4 = ::haxe::ui::toolkit::controls::Image_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			this->_icon = tmp4;
			HX_STACK_LINE(141)
			::haxe::ui::toolkit::controls::Image tmp5 = this->_icon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			tmp5->set_id(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
			HX_STACK_LINE(142)
			Float tmp6 = this->_iconWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			bool tmp7 = (tmp6 != (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			if ((tmp7)){
				HX_STACK_LINE(143)
				::haxe::ui::toolkit::controls::Image tmp8 = this->_icon;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(143)
				Float tmp9 = this->_iconWidth;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(143)
				tmp8->set_width(tmp9);
			}
			HX_STACK_LINE(145)
			Float tmp8 = this->_iconHeight;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(145)
			bool tmp9 = (tmp8 != (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(145)
			if ((tmp9)){
				HX_STACK_LINE(146)
				::haxe::ui::toolkit::controls::Image tmp10 = this->_icon;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(146)
				Float tmp11 = this->_iconHeight;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(146)
				tmp10->set_height(tmp11);
			}
		}
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::controls::Image tmp4 = this->_icon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		Dynamic tmp5 = tmp4->get_resource();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(149)
		Dynamic tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(149)
		bool tmp7 = (tmp5 != tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(149)
		if ((tmp7)){
			HX_STACK_LINE(150)
			::haxe::ui::toolkit::controls::Image tmp8 = this->_icon;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			Dynamic tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			tmp8->set_resource(tmp9);
			HX_STACK_LINE(151)
			this->organiseChildren();
		}
	}
	else{
		HX_STACK_LINE(154)
		::haxe::ui::toolkit::controls::Image tmp2 = this->_icon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		if ((tmp3)){
			HX_STACK_LINE(155)
			::haxe::ui::toolkit::controls::Image tmp4 = this->_icon;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			tmp4->set_visible(false);
		}
	}
	HX_STACK_LINE(158)
	Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icon,return )

Float Button_obj::get_iconWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_iconWidth",0xf2df3d3e,"haxe.ui.toolkit.controls.Button.get_iconWidth","haxe/ui/toolkit/controls/Button.hx",163,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	Float tmp = this->_iconWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_iconWidth,return )

Float Button_obj::set_iconWidth( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_iconWidth",0x37e51f4a,"haxe.ui.toolkit.controls.Button.set_iconWidth","haxe/ui/toolkit/controls/Button.hx",166,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(167)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	Float tmp1 = this->_iconWidth;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	if ((tmp2)){
		HX_STACK_LINE(168)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		return tmp3;
	}
	HX_STACK_LINE(171)
	this->_iconWidth = value;
	HX_STACK_LINE(172)
	::haxe::ui::toolkit::controls::Image tmp3 = this->_icon;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	if ((tmp4)){
		HX_STACK_LINE(173)
		::haxe::ui::toolkit::controls::Image tmp5 = this->_icon;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		Float tmp6 = this->_iconWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		tmp5->set_width(tmp6);
	}
	HX_STACK_LINE(176)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(176)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_iconWidth,return )

Float Button_obj::get_iconHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_iconHeight",0x46c5d1af,"haxe.ui.toolkit.controls.Button.get_iconHeight","haxe/ui/toolkit/controls/Button.hx",181,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(182)
	Float tmp = this->_iconHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_iconHeight,return )

Float Button_obj::set_iconHeight( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_iconHeight",0x66e5ba23,"haxe.ui.toolkit.controls.Button.set_iconHeight","haxe/ui/toolkit/controls/Button.hx",184,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(185)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	Float tmp1 = this->_iconHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	if ((tmp2)){
		HX_STACK_LINE(186)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		return tmp3;
	}
	HX_STACK_LINE(189)
	this->_iconHeight = value;
	HX_STACK_LINE(190)
	::haxe::ui::toolkit::controls::Image tmp3 = this->_icon;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	if ((tmp4)){
		HX_STACK_LINE(191)
		::haxe::ui::toolkit::controls::Image tmp5 = this->_icon;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		Float tmp6 = this->_iconHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		tmp5->set_height(tmp6);
	}
	HX_STACK_LINE(194)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(194)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_iconHeight,return )

Void Button_obj::organiseChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","organiseChildren",0x75dce00f,"haxe.ui.toolkit.controls.Button.organiseChildren","haxe/ui/toolkit/controls/Button.hx",198,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		if ((tmp1)){
			HX_STACK_LINE(200)
			return null();
		}
		HX_STACK_LINE(203)
		this->removeAllChildren(false);
		HX_STACK_LINE(205)
		::haxe::ui::toolkit::controls::Image tmp2 = this->_icon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		if ((tmp3)){
			HX_STACK_LINE(206)
			::haxe::ui::toolkit::controls::Image tmp4 = this->_icon;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(206)
			tmp4->set_horizontalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
			HX_STACK_LINE(207)
			::haxe::ui::toolkit::controls::Image tmp5 = this->_icon;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(207)
			tmp5->set_verticalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		}
		HX_STACK_LINE(210)
		::haxe::ui::toolkit::controls::Text tmp4 = this->_label;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		if ((tmp5)){
			HX_STACK_LINE(211)
			::haxe::ui::toolkit::controls::Text tmp6 = this->_label;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			tmp6->set_horizontalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::controls::Text tmp7 = this->_label;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			tmp7->set_verticalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		}
		HX_STACK_LINE(215)
		bool tmp6 = this->get_autoSize();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(215)
		bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(215)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(215)
		if ((tmp8)){
			HX_STACK_LINE(215)
			Float tmp10 = this->get_percentWidth();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(215)
			Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(215)
			tmp9 = (tmp11 > (int)0);
		}
		else{
			HX_STACK_LINE(215)
			tmp9 = true;
		}
		HX_STACK_LINE(215)
		if ((tmp9)){
			HX_STACK_LINE(216)
			::haxe::ui::toolkit::controls::Text tmp10 = this->_label;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(216)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(216)
			if ((tmp11)){
				HX_STACK_LINE(217)
				::haxe::ui::toolkit::controls::Text tmp12 = this->_label;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(217)
				tmp12->set_percentWidth((int)100);
				HX_STACK_LINE(219)
				::haxe::ui::toolkit::controls::Text tmp13 = this->_label;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(219)
				bool tmp14 = this->_multiline;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(219)
				tmp13->set_autoSize(tmp14);
			}
		}
		HX_STACK_LINE(223)
		::String tmp10 = this->_iconPosition;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		bool tmp11 = (tmp10 == HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(223)
		if ((tmp11)){
			HX_STACK_LINE(224)
			::haxe::ui::toolkit::layout::HorizontalLayout tmp12 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			this->set_layout(tmp12);
			HX_STACK_LINE(225)
			::haxe::ui::toolkit::controls::Image tmp13 = this->_icon;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(225)
			this->addChild(tmp13);
			HX_STACK_LINE(226)
			::haxe::ui::toolkit::controls::Text tmp14 = this->_label;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(226)
			this->addChild(tmp14);
		}
		else{
			HX_STACK_LINE(227)
			::String tmp12 = this->_iconPosition;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(227)
			bool tmp13 = (tmp12 == HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			if ((tmp13)){
				HX_STACK_LINE(228)
				::haxe::ui::toolkit::layout::HorizontalLayout tmp14 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(228)
				this->set_layout(tmp14);
				HX_STACK_LINE(229)
				::haxe::ui::toolkit::controls::Text tmp15 = this->_label;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(229)
				this->addChild(tmp15);
				HX_STACK_LINE(230)
				::haxe::ui::toolkit::controls::Image tmp16 = this->_icon;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(230)
				this->addChild(tmp16);
			}
			else{
				HX_STACK_LINE(231)
				::String tmp14 = this->_iconPosition;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(231)
				bool tmp15 = (tmp14 == HX_HCSTRING("top","\x95","\x66","\x58","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(231)
				if ((tmp15)){
					HX_STACK_LINE(232)
					::haxe::ui::toolkit::layout::VerticalLayout tmp16 = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(232)
					this->set_layout(tmp16);
					HX_STACK_LINE(233)
					::haxe::ui::toolkit::controls::Image tmp17 = this->_icon;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(233)
					this->addChild(tmp17);
					HX_STACK_LINE(234)
					::haxe::ui::toolkit::controls::Text tmp18 = this->_label;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(234)
					this->addChild(tmp18);
				}
				else{
					HX_STACK_LINE(235)
					::String tmp16 = this->_iconPosition;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(235)
					bool tmp17 = (tmp16 == HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(235)
					if ((tmp17)){
						HX_STACK_LINE(236)
						::haxe::ui::toolkit::layout::VerticalLayout tmp18 = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(236)
						this->set_layout(tmp18);
						HX_STACK_LINE(237)
						::haxe::ui::toolkit::controls::Text tmp19 = this->_label;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(237)
						this->addChild(tmp19);
						HX_STACK_LINE(238)
						::haxe::ui::toolkit::controls::Image tmp20 = this->_icon;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(238)
						this->addChild(tmp20);
					}
					else{
						HX_STACK_LINE(239)
						::String tmp18 = this->_iconPosition;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(239)
						bool tmp19 = (tmp18 == HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(239)
						if ((tmp19)){
							HX_STACK_LINE(240)
							::haxe::ui::toolkit::layout::BoxLayout tmp20 = ::haxe::ui::toolkit::layout::BoxLayout_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(240)
							this->set_layout(tmp20);
							HX_STACK_LINE(241)
							::haxe::ui::toolkit::controls::Text tmp21 = this->_label;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(241)
							this->addChild(tmp21);
							HX_STACK_LINE(242)
							::haxe::ui::toolkit::controls::Image tmp22 = this->_icon;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(242)
							this->addChild(tmp22);
						}
					}
				}
			}
		}
		HX_STACK_LINE(245)
		::String tmp12 = this->_iconPosition;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(245)
		bool tmp13 = (tmp12 == HX_HCSTRING("fill","\x83","\xce","\xbb","\x43"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(245)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(245)
		if ((tmp13)){
			HX_STACK_LINE(245)
			::haxe::ui::toolkit::controls::Image tmp15 = this->_icon;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(245)
			::haxe::ui::toolkit::controls::Image tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(245)
			tmp14 = (tmp16 != null());
		}
		else{
			HX_STACK_LINE(245)
			tmp14 = false;
		}
		HX_STACK_LINE(245)
		if ((tmp14)){
			HX_STACK_LINE(246)
			::haxe::ui::toolkit::controls::Image tmp15 = this->_icon;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(246)
			Float tmp16 = this->get_width();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(246)
			tmp15->set_width(tmp16);
			HX_STACK_LINE(247)
			::haxe::ui::toolkit::controls::Image tmp17 = this->_icon;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(247)
			Float tmp18 = this->get_height();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(247)
			tmp17->set_height(tmp18);
		}
		HX_STACK_LINE(250)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp15 = this->get_layout();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(250)
		Float tmp16 = tmp15->get_usableHeight();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(250)
		bool tmp17 = (tmp16 <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(250)
		if ((tmp17)){
			HX_STACK_LINE(251)
			Float cy = (int)0;		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(252)
			::haxe::ui::toolkit::controls::Text tmp18 = this->_label;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(252)
			bool tmp19 = (tmp18 != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(252)
			if ((tmp19)){
				HX_STACK_LINE(253)
				::haxe::ui::toolkit::controls::Text tmp20 = this->_label;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(253)
				Float tmp21 = tmp20->get_height();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(253)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp22 = this->get_layout();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(253)
				::openfl::_legacy::geom::Rectangle tmp23 = tmp22->get_padding();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(253)
				Float tmp24 = tmp23->get_top();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(253)
				Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(253)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp26 = this->get_layout();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(253)
				::openfl::_legacy::geom::Rectangle tmp27 = tmp26->get_padding();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(253)
				Float tmp28 = tmp27->get_bottom();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(253)
				Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(253)
				cy = tmp29;
			}
			HX_STACK_LINE(255)
			::haxe::ui::toolkit::controls::Image tmp20 = this->_icon;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(255)
			bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(255)
			if ((tmp21)){
				HX_STACK_LINE(256)
				::haxe::ui::toolkit::controls::Image tmp22 = this->_icon;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(256)
				Float tmp23 = tmp22->get_height();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(256)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp24 = this->get_layout();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(256)
				::openfl::_legacy::geom::Rectangle tmp25 = tmp24->get_padding();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(256)
				Float tmp26 = tmp25->get_top();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(256)
				Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(256)
				::haxe::ui::toolkit::core::interfaces::ILayout tmp28 = this->get_layout();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(256)
				::openfl::_legacy::geom::Rectangle tmp29 = tmp28->get_padding();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(256)
				Float tmp30 = tmp29->get_bottom();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(256)
				Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(256)
				Float temp = tmp31;		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(257)
				bool tmp32 = (temp > cy);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(257)
				if ((tmp32)){
					HX_STACK_LINE(258)
					cy = temp;
				}
			}
			HX_STACK_LINE(261)
			Float tmp22 = cy;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(261)
			this->set_height(tmp22);
		}
		HX_STACK_LINE(264)
		this->invalidate((int)1048576,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,organiseChildren,(void))

Void Button_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","preInitialize",0xb3f720ed,"haxe.ui.toolkit.controls.Button.preInitialize","haxe/ui/toolkit/controls/Button.hx",271,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		this->super::preInitialize();
	}
return null();
}


Void Button_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","initialize",0x192cab76,"haxe.ui.toolkit.controls.Button.initialize","haxe/ui/toolkit/controls/Button.hx",278,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(279)
		this->super::initialize();
		HX_STACK_LINE(281)
		::String tmp = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(281)
		Dynamic tmp1 = this->_onMouseOver_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(281)
		this->addEventListener(tmp,tmp1,null(),null(),null());
		HX_STACK_LINE(282)
		::String tmp2 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(282)
		Dynamic tmp3 = this->_onMouseOut_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		this->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(283)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		Dynamic tmp5 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		this->addEventListener(tmp4,tmp5,null(),null(),null());
		HX_STACK_LINE(284)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(284)
		Dynamic tmp7 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(284)
		this->addEventListener(tmp6,tmp7,null(),null(),null());
		HX_STACK_LINE(285)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(285)
		Dynamic tmp9 = this->_onMouseClick_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(285)
		this->addEventListener(tmp8,tmp9,null(),null(),null());
		HX_STACK_LINE(304)
		this->organiseChildren();
	}
return null();
}


bool Button_obj::set_disabled( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_disabled",0x8d77e89f,"haxe.ui.toolkit.controls.Button.set_disabled","haxe/ui/toolkit/controls/Button.hx",326,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(327)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	this->super::set_disabled(tmp);
	HX_STACK_LINE(328)
	bool tmp1 = (value == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	if ((tmp1)){
		HX_STACK_LINE(329)
		::openfl::_legacy::display::Sprite tmp2 = this->get_sprite();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(329)
		tmp2->buttonMode = false;
		HX_STACK_LINE(330)
		::openfl::_legacy::display::Sprite tmp3 = this->get_sprite();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(330)
		tmp3->useHandCursor = false;
	}
	else{
		HX_STACK_LINE(333)
		::openfl::_legacy::display::Sprite tmp2 = this->get_sprite();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		tmp2->buttonMode = true;
		HX_STACK_LINE(334)
		::openfl::_legacy::display::Sprite tmp3 = this->get_sprite();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		tmp3->useHandCursor = true;
	}
	HX_STACK_LINE(337)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(337)
	return tmp2;
}


::String Button_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_text",0x2dff0cdc,"haxe.ui.toolkit.controls.Button.get_text","haxe/ui/toolkit/controls/Button.hx",343,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(344)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(344)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(344)
	if ((tmp1)){
		HX_STACK_LINE(345)
		return null();
	}
	HX_STACK_LINE(347)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(347)
	::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(347)
	return tmp3;
}


::String Button_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_text",0xdc5c6650,"haxe.ui.toolkit.controls.Button.set_text","haxe/ui/toolkit/controls/Button.hx",350,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(351)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(351)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(351)
	value = tmp1;
	HX_STACK_LINE(353)
	bool tmp2 = (value != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(353)
	if ((tmp2)){
		HX_STACK_LINE(354)
		::haxe::ui::toolkit::controls::Text tmp3 = this->_label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(354)
		if ((tmp4)){
			HX_STACK_LINE(355)
			::haxe::ui::toolkit::controls::Text tmp5 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			this->_label = tmp5;
			HX_STACK_LINE(356)
			::haxe::ui::toolkit::controls::Text tmp6 = this->_label;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(356)
			tmp6->set_id(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
			HX_STACK_LINE(357)
			::haxe::ui::toolkit::controls::Text tmp7 = this->_label;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(357)
			bool tmp8 = this->_multiline;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(357)
			tmp7->set_multiline(tmp8);
			HX_STACK_LINE(358)
			::haxe::ui::toolkit::controls::Text tmp9 = this->_label;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(358)
			bool tmp10 = this->_multiline;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(358)
			tmp9->set_wrapLines(tmp10);
		}
		HX_STACK_LINE(360)
		::haxe::ui::toolkit::controls::Text tmp5 = this->_label;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(360)
		::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(360)
		tmp5->set_value(tmp6);
		HX_STACK_LINE(361)
		::haxe::ui::toolkit::controls::Text tmp7 = this->_label;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		tmp7->set_visible(true);
		HX_STACK_LINE(362)
		this->organiseChildren();
	}
	else{
		HX_STACK_LINE(364)
		::haxe::ui::toolkit::controls::Text tmp3 = this->_label;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(364)
		if ((tmp4)){
			HX_STACK_LINE(365)
			::haxe::ui::toolkit::controls::Text tmp5 = this->_label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			tmp5->set_visible(false);
		}
	}
	HX_STACK_LINE(368)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(368)
	return tmp3;
}


Void Button_obj::_onMouseOver( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseOver",0xc5baaaa1,"haxe.ui.toolkit.controls.Button._onMouseOver","haxe/ui/toolkit/controls/Button.hx",374,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(375)
		bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		if ((tmp1)){
			HX_STACK_LINE(376)
			bool tmp2 = (event->buttonDown == false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			if ((tmp3)){
				HX_STACK_LINE(376)
				bool tmp5 = this->_down;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(376)
				bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(376)
				tmp4 = (tmp6 == false);
			}
			else{
				HX_STACK_LINE(376)
				tmp4 = true;
			}
			HX_STACK_LINE(376)
			if ((tmp4)){
				HX_STACK_LINE(377)
				this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
			}
			else{
				HX_STACK_LINE(379)
				this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseOver,(void))

Void Button_obj::_onMouseOut( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseOut",0x0b37efe1,"haxe.ui.toolkit.controls.Button._onMouseOut","haxe/ui/toolkit/controls/Button.hx",384,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(385)
		bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		if ((tmp1)){
			HX_STACK_LINE(386)
			bool tmp2 = this->_remainPressed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(386)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(386)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(386)
			if ((tmp4)){
				HX_STACK_LINE(386)
				tmp5 = (event->buttonDown == false);
			}
			else{
				HX_STACK_LINE(386)
				tmp5 = true;
			}
			HX_STACK_LINE(386)
			if ((tmp5)){
				HX_STACK_LINE(387)
				this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
			}
			else{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseOut,(void))

Void Button_obj::_onMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseDown",0xbe7011af,"haxe.ui.toolkit.controls.Button._onMouseDown","haxe/ui/toolkit/controls/Button.hx",394,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(395)
		bool tmp = this->_allowSelection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(395)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(395)
		if ((tmp1)){
			HX_STACK_LINE(396)
			this->_down = true;
			HX_STACK_LINE(397)
			this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			HX_STACK_LINE(398)
			::haxe::ui::toolkit::core::Screen tmp2 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(398)
			::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(398)
			Dynamic tmp4 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(398)
			tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseDown,(void))

Void Button_obj::_onMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseUp",0x2031a268,"haxe.ui.toolkit.controls.Button._onMouseUp","haxe/ui/toolkit/controls/Button.hx",402,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(403)
		bool tmp = this->_allowSelection;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(403)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(403)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		if ((tmp1)){
			HX_STACK_LINE(403)
			bool tmp3 = this->get_toggle();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(403)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(403)
			tmp2 = (tmp4 == false);
		}
		else{
			HX_STACK_LINE(403)
			tmp2 = false;
		}
		HX_STACK_LINE(403)
		if ((tmp2)){
			HX_STACK_LINE(404)
			this->_down = false;
			HX_STACK_LINE(405)
			Float tmp3 = event->stageX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(405)
			Float tmp4 = event->stageY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(405)
			bool tmp5 = this->hitTest(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(405)
			if ((tmp5)){
				HX_STACK_LINE(407)
				this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
			}
			else{
				HX_STACK_LINE(412)
				this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
			}
			HX_STACK_LINE(416)
			::haxe::ui::toolkit::core::Screen tmp6 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(416)
			::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(416)
			Dynamic tmp8 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(416)
			tmp6->removeEventListener(tmp7,tmp8,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseUp,(void))

Void Button_obj::_onMouseClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseClick",0x4e32865b,"haxe.ui.toolkit.controls.Button._onMouseClick","haxe/ui/toolkit/controls/Button.hx",421,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(422)
		::haxe::ui::toolkit::controls::Image tmp = this->_icon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(422)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(422)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(422)
		if ((tmp1)){
			HX_STACK_LINE(422)
			::haxe::ui::toolkit::controls::Image tmp3 = this->_icon;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(422)
			::haxe::ui::toolkit::controls::Image tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(422)
			Float tmp5 = event->stageX;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(422)
			Float tmp6 = event->stageY;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(422)
			Float tmp7 = tmp5;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(422)
			Float tmp8 = tmp6;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(422)
			tmp2 = tmp4->hitTest(tmp7,tmp8);
		}
		else{
			HX_STACK_LINE(422)
			tmp2 = false;
		}
		HX_STACK_LINE(422)
		if ((tmp2)){
			HX_STACK_LINE(423)
			::String tmp3 = HX_HCSTRING("haxeui_glyphClick","\x61","\xaa","\x5c","\x02");		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(423)
			::haxe::ui::toolkit::events::UIEvent tmp4 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp3,null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(423)
			this->dispatchEvent(tmp4);
		}
		HX_STACK_LINE(425)
		bool tmp3 = this->_toggle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(425)
		bool tmp4 = (tmp3 == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(425)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(425)
		if ((tmp4)){
			HX_STACK_LINE(425)
			bool tmp6 = this->_allowSelection;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(425)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(425)
			tmp5 = (tmp7 == true);
		}
		else{
			HX_STACK_LINE(425)
			tmp5 = false;
		}
		HX_STACK_LINE(425)
		if ((tmp5)){
			HX_STACK_LINE(426)
			bool tmp6 = this->get_selected();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(426)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(426)
			this->set_selected(tmp7);
			HX_STACK_LINE(428)
			bool tmp8 = this->get_selected();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(428)
			bool tmp9 = (tmp8 == false);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(428)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(428)
			if ((tmp9)){
				HX_STACK_LINE(428)
				Float tmp11 = event->stageX;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(428)
				Float tmp12 = event->stageY;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(428)
				Float tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(428)
				Float tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(428)
				tmp10 = this->hitTest(tmp13,tmp14);
			}
			else{
				HX_STACK_LINE(428)
				tmp10 = false;
			}
			HX_STACK_LINE(428)
			if ((tmp10)){
				HX_STACK_LINE(429)
				this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseClick,(void))

Array< ::String > Button_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_states",0x22f4c331,"haxe.ui.toolkit.controls.Button.get_states","haxe/ui/toolkit/controls/Button.hx",439,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(439)
	return Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("over","\x54","\x91","\xb8","\x49")).Add(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"));
}


::String Button_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_state",0x6aef4b0e,"haxe.ui.toolkit.controls.Button.set_state","haxe/ui/toolkit/controls/Button.hx",442,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(443)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	this->super::set_state(tmp);
	HX_STACK_LINE(444)
	bool tmp1 = (value == HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(444)
	if ((tmp1)){
		HX_STACK_LINE(445)
		this->_down = true;
	}
	else{
		HX_STACK_LINE(447)
		this->_down = false;
	}
	HX_STACK_LINE(449)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(449)
	return tmp2;
}


bool Button_obj::get_allowFocus( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_allowFocus",0x223b27fe,"haxe.ui.toolkit.controls.Button.get_allowFocus","haxe/ui/toolkit/controls/Button.hx",461,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(462)
	bool tmp = this->_allowFocus;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_allowFocus,return )

bool Button_obj::set_allowFocus( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_allowFocus",0x425b1072,"haxe.ui.toolkit.controls.Button.set_allowFocus","haxe/ui/toolkit/controls/Button.hx",465,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(466)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_allowFocus,return )

::String Button_obj::get_iconPosition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_iconPosition",0x78d06c71,"haxe.ui.toolkit.controls.Button.get_iconPosition","haxe/ui/toolkit/controls/Button.hx",508,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(509)
	::String tmp = this->_iconPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(509)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_iconPosition,return )

::String Button_obj::set_iconPosition( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_iconPosition",0xcf1259e5,"haxe.ui.toolkit.controls.Button.set_iconPosition","haxe/ui/toolkit/controls/Button.hx",512,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(513)
	::String tmp = this->_iconPosition;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(513)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(513)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(513)
	if ((tmp2)){
		HX_STACK_LINE(514)
		this->_iconPosition = value;
		HX_STACK_LINE(515)
		this->organiseChildren();
	}
	HX_STACK_LINE(517)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(517)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_iconPosition,return )

bool Button_obj::get_toggle( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_toggle",0xac3ca983,"haxe.ui.toolkit.controls.Button.get_toggle","haxe/ui/toolkit/controls/Button.hx",520,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	bool tmp = this->_toggle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_toggle,return )

bool Button_obj::set_toggle( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_toggle",0xafba47f7,"haxe.ui.toolkit.controls.Button.set_toggle","haxe/ui/toolkit/controls/Button.hx",524,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(525)
	this->_toggle = value;
	HX_STACK_LINE(526)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(526)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_toggle,return )

bool Button_obj::get_selected( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_selected",0xade7ae0a,"haxe.ui.toolkit.controls.Button.get_selected","haxe/ui/toolkit/controls/Button.hx",529,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(530)
	bool tmp = this->_selected;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_selected,return )

bool Button_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_selected",0xc2e0d17e,"haxe.ui.toolkit.controls.Button.set_selected","haxe/ui/toolkit/controls/Button.hx",533,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(534)
	bool tmp = this->_toggle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(534)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(534)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(534)
	if ((tmp1)){
		HX_STACK_LINE(534)
		bool tmp3 = this->_selected;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(534)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(534)
		bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(534)
		tmp2 = (tmp4 != tmp5);
	}
	else{
		HX_STACK_LINE(534)
		tmp2 = false;
	}
	HX_STACK_LINE(534)
	if ((tmp2)){
		HX_STACK_LINE(535)
		::String tmp3 = this->_group;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(535)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(535)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(535)
		if ((tmp4)){
			HX_STACK_LINE(535)
			tmp5 = (value == false);
		}
		else{
			HX_STACK_LINE(535)
			tmp5 = false;
		}
		HX_STACK_LINE(535)
		if ((tmp5)){
			HX_STACK_LINE(536)
			::haxe::ds::StringMap tmp6 = ::haxe::ui::toolkit::controls::Button_obj::_groups;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(536)
			::String tmp7 = this->_group;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(536)
			Array< ::Dynamic > arr = tmp6->get(tmp7);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(537)
			bool hasSelection = false;		HX_STACK_VAR(hasSelection,"hasSelection");
			HX_STACK_LINE(538)
			bool tmp8 = (arr != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(538)
			if ((tmp8)){
				HX_STACK_LINE(539)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(539)
				while((true)){
					HX_STACK_LINE(539)
					bool tmp9 = (_g < arr->length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(539)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(539)
					if ((tmp10)){
						HX_STACK_LINE(539)
						break;
					}
					HX_STACK_LINE(539)
					::haxe::ui::toolkit::controls::Button tmp11 = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(539)
					::haxe::ui::toolkit::controls::Button button = tmp11;		HX_STACK_VAR(button,"button");
					HX_STACK_LINE(539)
					++(_g);
					HX_STACK_LINE(540)
					bool tmp12 = (button != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(540)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(540)
					if ((tmp12)){
						HX_STACK_LINE(540)
						bool tmp14 = button->get_selected();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(540)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(540)
						tmp13 = (tmp15 == true);
					}
					else{
						HX_STACK_LINE(540)
						tmp13 = false;
					}
					HX_STACK_LINE(540)
					if ((tmp13)){
						HX_STACK_LINE(541)
						hasSelection = true;
						HX_STACK_LINE(542)
						break;
					}
				}
			}
			HX_STACK_LINE(546)
			bool tmp9 = (hasSelection == false);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(546)
			if ((tmp9)){
				HX_STACK_LINE(547)
				bool tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(547)
				return tmp10;
			}
		}
		HX_STACK_LINE(551)
		this->_selected = value;
		HX_STACK_LINE(554)
		::String tmp6 = this->_group;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(554)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(554)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(554)
		if ((tmp7)){
			HX_STACK_LINE(554)
			tmp8 = (value == true);
		}
		else{
			HX_STACK_LINE(554)
			tmp8 = false;
		}
		HX_STACK_LINE(554)
		if ((tmp8)){
			HX_STACK_LINE(555)
			::haxe::ds::StringMap tmp9 = ::haxe::ui::toolkit::controls::Button_obj::_groups;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(555)
			::String tmp10 = this->_group;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(555)
			Array< ::Dynamic > arr = tmp9->get(tmp10);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(556)
			bool tmp11 = (arr != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(556)
			if ((tmp11)){
				HX_STACK_LINE(557)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(557)
				while((true)){
					HX_STACK_LINE(557)
					bool tmp12 = (_g < arr->length);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(557)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(557)
					if ((tmp13)){
						HX_STACK_LINE(557)
						break;
					}
					HX_STACK_LINE(557)
					::haxe::ui::toolkit::controls::Button tmp14 = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(557)
					::haxe::ui::toolkit::controls::Button button = tmp14;		HX_STACK_VAR(button,"button");
					HX_STACK_LINE(557)
					++(_g);
					HX_STACK_LINE(558)
					bool tmp15 = (button != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(558)
					if ((tmp15)){
						HX_STACK_LINE(559)
						button->set_selected(false);
					}
				}
			}
		}
		HX_STACK_LINE(565)
		bool tmp9 = this->dispatchChangeEvents;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(565)
		bool tmp10 = (tmp9 == true);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(565)
		if ((tmp10)){
			HX_STACK_LINE(566)
			::String tmp11 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(566)
			::haxe::ui::toolkit::events::UIEvent tmp12 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp11,null(),null(),null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(566)
			::haxe::ui::toolkit::events::UIEvent event = tmp12;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(567)
			::haxe::ui::toolkit::events::UIEvent tmp13 = event;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(567)
			this->dispatchEvent(tmp13);
		}
	}
	HX_STACK_LINE(571)
	this->_selected = value;
	HX_STACK_LINE(572)
	bool tmp3 = this->_selected;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(572)
	bool tmp4 = (tmp3 == true);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(572)
	if ((tmp4)){
		HX_STACK_LINE(573)
		this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
	}
	else{
		HX_STACK_LINE(576)
		::haxe::ui::toolkit::core::Root tmp5 = this->get_root();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(576)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(576)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(576)
		if ((tmp6)){
			HX_STACK_LINE(576)
			::haxe::ui::toolkit::core::Root tmp8 = this->get_root();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(576)
			::haxe::ui::toolkit::core::Root tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(576)
			::openfl::_legacy::geom::Point tmp10 = tmp9->get_mousePosition();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(576)
			::openfl::_legacy::geom::Point tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(576)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(576)
			::haxe::ui::toolkit::core::Root tmp13 = this->get_root();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(576)
			::haxe::ui::toolkit::core::Root tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(576)
			::openfl::_legacy::geom::Point tmp15 = tmp14->get_mousePosition();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(576)
			::openfl::_legacy::geom::Point tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(576)
			Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(576)
			Float tmp18 = tmp12;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(576)
			Float tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(576)
			bool tmp20 = this->hitTest(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(576)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(576)
			tmp7 = (tmp21 == true);
		}
		else{
			HX_STACK_LINE(576)
			tmp7 = false;
		}
		HX_STACK_LINE(576)
		if ((tmp7)){
			HX_STACK_LINE(577)
			this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(579)
			this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
		}
	}
	HX_STACK_LINE(586)
	bool tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(586)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_selected,return )

::String Button_obj::get_group( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_group",0x9d879c30,"haxe.ui.toolkit.controls.Button.get_group","haxe/ui/toolkit/controls/Button.hx",589,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(590)
	::String tmp = this->_group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_group,return )

::String Button_obj::set_group( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_group",0x80d8883c,"haxe.ui.toolkit.controls.Button.set_group","haxe/ui/toolkit/controls/Button.hx",593,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(594)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(594)
	if ((tmp)){
		HX_STACK_LINE(595)
		::haxe::ds::StringMap tmp1 = ::haxe::ui::toolkit::controls::Button_obj::_groups;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(595)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(595)
		Array< ::Dynamic > arr = tmp1->get(tmp2);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(596)
		bool tmp3 = (arr != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(596)
		if ((tmp3)){
			HX_STACK_LINE(597)
			arr->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(601)
	this->_group = value;
	HX_STACK_LINE(602)
	bool tmp1 = (value == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(602)
	if ((tmp1)){
		HX_STACK_LINE(603)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		return tmp2;
	}
	HX_STACK_LINE(606)
	::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::controls::Button_obj::_groups;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(606)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(606)
	Array< ::Dynamic > arr = tmp2->get(tmp3);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(607)
	bool tmp4 = (arr == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(607)
	if ((tmp4)){
		HX_STACK_LINE(608)
		arr = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(611)
	::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(611)
	bool tmp6 = ::haxe::ui::toolkit::controls::Button_obj::optionInGroup(tmp5,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(611)
	bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(611)
	if ((tmp7)){
		HX_STACK_LINE(612)
		arr->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(614)
	::haxe::ds::StringMap tmp8 = ::haxe::ui::toolkit::controls::Button_obj::_groups;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(614)
	::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(614)
	tmp8->set(tmp9,arr);
	HX_STACK_LINE(616)
	::String tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(616)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_group,return )

bool Button_obj::get_allowSelection( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_allowSelection",0xdd8acb72,"haxe.ui.toolkit.controls.Button.get_allowSelection","haxe/ui/toolkit/controls/Button.hx",620,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(621)
	bool tmp = this->_allowSelection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_allowSelection,return )

bool Button_obj::set_allowSelection( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_allowSelection",0xba39fde6,"haxe.ui.toolkit.controls.Button.set_allowSelection","haxe/ui/toolkit/controls/Button.hx",624,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(625)
	this->_allowSelection = value;
	HX_STACK_LINE(626)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(626)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_allowSelection,return )

bool Button_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_multiline",0x8cca885e,"haxe.ui.toolkit.controls.Button.get_multiline","haxe/ui/toolkit/controls/Button.hx",629,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(630)
	bool tmp = this->_multiline;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(630)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_multiline,return )

bool Button_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_multiline",0xd1d06a6a,"haxe.ui.toolkit.controls.Button.set_multiline","haxe/ui/toolkit/controls/Button.hx",633,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(634)
	this->_multiline = value;
	HX_STACK_LINE(635)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(635)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(635)
	if ((tmp1)){
		HX_STACK_LINE(636)
		::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(636)
		bool tmp3 = this->_multiline;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(636)
		tmp2->set_multiline(tmp3);
		HX_STACK_LINE(637)
		::haxe::ui::toolkit::controls::Text tmp4 = this->_label;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(637)
		bool tmp5 = this->_multiline;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(637)
		tmp4->set_wrapLines(tmp5);
	}
	HX_STACK_LINE(639)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(639)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_multiline,return )

Void Button_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","applyStyle",0x5be09b09,"haxe.ui.toolkit.controls.Button.applyStyle","haxe/ui/toolkit/controls/Button.hx",645,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(646)
		this->super::applyStyle();
		HX_STACK_LINE(649)
		::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		if ((tmp1)){
			HX_STACK_LINE(650)
			::haxe::ui::toolkit::style::Style tmp2 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(650)
			::haxe::ui::toolkit::style::Style labelStyle = tmp2;		HX_STACK_VAR(labelStyle,"labelStyle");
			HX_STACK_LINE(651)
			::haxe::ui::toolkit::style::Style tmp3 = this->_baseStyle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(651)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(651)
			if ((tmp4)){
				HX_STACK_LINE(652)
				::haxe::ui::toolkit::style::Style tmp5 = this->_baseStyle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(652)
				::String tmp6 = tmp5->get_fontName();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(652)
				labelStyle->set_fontName(tmp6);
				HX_STACK_LINE(653)
				::haxe::ui::toolkit::style::Style tmp7 = this->_baseStyle;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(653)
				Float tmp8 = tmp7->get_fontSize();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(653)
				labelStyle->set_fontSize(tmp8);
				HX_STACK_LINE(654)
				::haxe::ui::toolkit::style::Style tmp9 = this->_baseStyle;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(654)
				bool tmp10 = tmp9->get_fontEmbedded();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(654)
				labelStyle->set_fontEmbedded(tmp10);
				HX_STACK_LINE(655)
				::haxe::ui::toolkit::style::Style tmp11 = this->_baseStyle;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(655)
				bool tmp12 = tmp11->get_fontBold();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(655)
				labelStyle->set_fontBold(tmp12);
				HX_STACK_LINE(656)
				::haxe::ui::toolkit::style::Style tmp13 = this->_baseStyle;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(656)
				bool tmp14 = tmp13->get_fontItalic();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(656)
				labelStyle->set_fontItalic(tmp14);
				HX_STACK_LINE(657)
				::haxe::ui::toolkit::style::Style tmp15 = this->_baseStyle;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(657)
				bool tmp16 = tmp15->get_fontUnderline();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(657)
				labelStyle->set_fontUnderline(tmp16);
				HX_STACK_LINE(658)
				::haxe::ui::toolkit::style::Style tmp17 = this->_baseStyle;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(658)
				int tmp18 = tmp17->get_color();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(658)
				labelStyle->set_color(tmp18);
				HX_STACK_LINE(659)
				::haxe::ui::toolkit::style::Style tmp19 = this->_baseStyle;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(659)
				::String tmp20 = tmp19->get_textAlign();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(659)
				labelStyle->set_textAlign(tmp20);
			}
			HX_STACK_LINE(664)
			::haxe::ui::toolkit::controls::Text tmp5 = this->_label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(664)
			::haxe::ui::toolkit::style::Style tmp6 = labelStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(664)
			tmp5->set_baseStyle(tmp6);
		}
		HX_STACK_LINE(667)
		::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(667)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(667)
		if ((tmp3)){
			HX_STACK_LINE(668)
			::haxe::ui::toolkit::style::Style tmp4 = this->_baseStyle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(668)
			::String tmp5 = tmp4->get_icon();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(668)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(668)
			if ((tmp6)){
				HX_STACK_LINE(669)
				::haxe::ui::toolkit::style::Style tmp7 = this->_baseStyle;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(669)
				::String tmp8 = tmp7->get_icon();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(669)
				this->set_icon(tmp8);
			}
			HX_STACK_LINE(672)
			::haxe::ui::toolkit::style::Style tmp7 = this->_baseStyle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(672)
			::String tmp8 = tmp7->get_iconPosition();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(672)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(672)
			if ((tmp9)){
				HX_STACK_LINE(673)
				::haxe::ui::toolkit::style::Style tmp10 = this->_baseStyle;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(673)
				::String tmp11 = tmp10->get_iconPosition();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(673)
				this->set_iconPosition(tmp11);
			}
			HX_STACK_LINE(676)
			::haxe::ui::toolkit::style::Style tmp10 = this->_baseStyle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(676)
			Float tmp11 = tmp10->get_iconWidth();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(676)
			bool tmp12 = (tmp11 != (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(676)
			if ((tmp12)){
				HX_STACK_LINE(677)
				::haxe::ui::toolkit::style::Style tmp13 = this->_baseStyle;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(677)
				Float tmp14 = tmp13->get_iconWidth();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(677)
				this->set_iconWidth(tmp14);
			}
			HX_STACK_LINE(680)
			::haxe::ui::toolkit::style::Style tmp13 = this->_baseStyle;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(680)
			Float tmp14 = tmp13->get_iconHeight();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(680)
			bool tmp15 = (tmp14 != (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(680)
			if ((tmp15)){
				HX_STACK_LINE(681)
				::haxe::ui::toolkit::style::Style tmp16 = this->_baseStyle;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(681)
				Float tmp17 = tmp16->get_iconHeight();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(681)
				this->set_iconHeight(tmp17);
			}
		}
	}
return null();
}


::haxe::ui::toolkit::core::DisplayObject Button_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","clone",0x126fcaf7,"haxe.ui.toolkit.controls.Button.clone","src/haxe/ui/toolkit/controls/Button.hx",1,0xe17d3f81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button c = ((::haxe::ui::toolkit::controls::Button)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool tmp1 = this->get_remainPressed();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_remainPressed(tmp1);
	HX_STACK_LINE(4)
	Dynamic tmp2 = this->get_icon();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_icon(tmp2);
	HX_STACK_LINE(5)
	bool tmp3 = this->get_allowFocus();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_allowFocus(tmp3);
	HX_STACK_LINE(6)
	::String tmp4 = this->get_iconPosition();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	c->set_iconPosition(tmp4);
	HX_STACK_LINE(7)
	bool tmp5 = this->get_toggle();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(7)
	c->set_toggle(tmp5);
	HX_STACK_LINE(8)
	bool tmp6 = this->get_selected();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(8)
	c->set_selected(tmp6);
	HX_STACK_LINE(9)
	::String tmp7 = this->get_group();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(9)
	c->set_group(tmp7);
	HX_STACK_LINE(10)
	bool tmp8 = this->get_allowSelection();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(10)
	c->set_allowSelection(tmp8);
	HX_STACK_LINE(11)
	bool tmp9 = this->get_multiline();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(11)
	c->set_multiline(tmp9);
	HX_STACK_LINE(12)
	::haxe::ui::toolkit::controls::Button tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(12)
	return tmp10;
}


::haxe::ui::toolkit::core::DisplayObject Button_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","self",0xd9464532,"haxe.ui.toolkit.controls.Button.self","src/haxe/ui/toolkit/controls/Button.hx",1,0xe17d3f81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button tmp = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


::String Button_obj::STATE_NORMAL;

::String Button_obj::STATE_OVER;

::String Button_obj::STATE_DOWN;

::String Button_obj::STATE_DISABLED;

::haxe::ds::StringMap Button_obj::_groups;

bool Button_obj::optionInGroup( ::String value,::haxe::ui::toolkit::controls::Button option){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","optionInGroup",0x813b47bf,"haxe.ui.toolkit.controls.Button.optionInGroup","haxe/ui/toolkit/controls/Button.hx",689,0x493ac9f6)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(option,"option")
	HX_STACK_LINE(690)
	bool exists = false;		HX_STACK_VAR(exists,"exists");
	HX_STACK_LINE(691)
	::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::controls::Button_obj::_groups;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(691)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(691)
	Array< ::Dynamic > arr = tmp->get(tmp1);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(692)
	bool tmp2 = (arr != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(692)
	if ((tmp2)){
		HX_STACK_LINE(693)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(693)
		while((true)){
			HX_STACK_LINE(693)
			bool tmp3 = (_g < arr->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(693)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(693)
			if ((tmp4)){
				HX_STACK_LINE(693)
				break;
			}
			HX_STACK_LINE(693)
			::haxe::ui::toolkit::controls::Button tmp5 = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(693)
			::haxe::ui::toolkit::controls::Button test = tmp5;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(693)
			++(_g);
			HX_STACK_LINE(694)
			bool tmp6 = (test == option);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(694)
			if ((tmp6)){
				HX_STACK_LINE(695)
				exists = true;
				HX_STACK_LINE(696)
				break;
			}
		}
	}
	HX_STACK_LINE(700)
	bool tmp3 = exists;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(700)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Button_obj,optionInGroup,return )


Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(_allowFocus,"_allowFocus");
	HX_MARK_MEMBER_NAME(_remainPressed,"_remainPressed");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_toggle,"_toggle");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_allowSelection,"_allowSelection");
	HX_MARK_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_MARK_MEMBER_NAME(_multiline,"_multiline");
	HX_MARK_MEMBER_NAME(_group,"_group");
	HX_MARK_MEMBER_NAME(_iconWidth,"_iconWidth");
	HX_MARK_MEMBER_NAME(_iconHeight,"_iconHeight");
	HX_MARK_MEMBER_NAME(dispatchChangeEvents,"dispatchChangeEvents");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_allowFocus,"_allowFocus");
	HX_VISIT_MEMBER_NAME(_remainPressed,"_remainPressed");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_toggle,"_toggle");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_allowSelection,"_allowSelection");
	HX_VISIT_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_VISIT_MEMBER_NAME(_multiline,"_multiline");
	HX_VISIT_MEMBER_NAME(_group,"_group");
	HX_VISIT_MEMBER_NAME(_iconWidth,"_iconWidth");
	HX_VISIT_MEMBER_NAME(_iconHeight,"_iconHeight");
	HX_VISIT_MEMBER_NAME(dispatchChangeEvents,"dispatchChangeEvents");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return get_icon(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return get_group(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"_group") ) { return _group; }
		if (HX_FIELD_EQ(inName,"toggle") ) { if (inCallProp == hx::paccAlways) return get_toggle(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_toggle") ) { return _toggle; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_icon") ) { return get_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return set_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return get_selected(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		if (HX_FIELD_EQ(inName,"iconWidth") ) { if (inCallProp == hx::paccAlways) return get_iconWidth(); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_multiline") ) { return _multiline; }
		if (HX_FIELD_EQ(inName,"_iconWidth") ) { return _iconWidth; }
		if (HX_FIELD_EQ(inName,"iconHeight") ) { if (inCallProp == hx::paccAlways) return get_iconHeight(); }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		if (HX_FIELD_EQ(inName,"allowFocus") ) { if (inCallProp == hx::paccAlways) return get_allowFocus(); }
		if (HX_FIELD_EQ(inName,"get_toggle") ) { return get_toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_toggle") ) { return set_toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { return _allowFocus; }
		if (HX_FIELD_EQ(inName,"_iconHeight") ) { return _iconHeight; }
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return set_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { if (inCallProp == hx::paccAlways) return get_iconPosition(); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return get_selected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { return _iconPosition; }
		if (HX_FIELD_EQ(inName,"remainPressed") ) { if (inCallProp == hx::paccAlways) return get_remainPressed(); }
		if (HX_FIELD_EQ(inName,"get_iconWidth") ) { return get_iconWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconWidth") ) { return set_iconWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_remainPressed") ) { return _remainPressed; }
		if (HX_FIELD_EQ(inName,"get_iconHeight") ) { return get_iconHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconHeight") ) { return set_iconHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_allowFocus") ) { return get_allowFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowFocus") ) { return set_allowFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"allowSelection") ) { if (inCallProp == hx::paccAlways) return get_allowSelection(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowSelection") ) { return _allowSelection; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"organiseChildren") ) { return organiseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return get_iconPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconPosition") ) { return set_iconPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_remainPressed") ) { return get_remainPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_remainPressed") ) { return set_remainPressed_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_allowSelection") ) { return get_allowSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowSelection") ) { return set_allowSelection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dispatchChangeEvents") ) { return dispatchChangeEvents; }
	}
	return super::__Field(inName,inCallProp);
}

bool Button_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { outValue = _groups; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionInGroup") ) { outValue = optionInGroup_dyn(); return true;  }
	}
	return false;
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { if (inCallProp == hx::paccAlways) return set_icon(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::haxe::ui::toolkit::controls::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return set_group(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_group") ) { _group=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggle") ) { if (inCallProp == hx::paccAlways) return set_toggle(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_toggle") ) { _toggle=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return set_selected(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconWidth") ) { if (inCallProp == hx::paccAlways) return set_iconWidth(inValue); }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_multiline") ) { _multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconWidth") ) { _iconWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"iconHeight") ) { if (inCallProp == hx::paccAlways) return set_iconHeight(inValue); }
		if (HX_FIELD_EQ(inName,"allowFocus") ) { if (inCallProp == hx::paccAlways) return set_allowFocus(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { _allowFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconHeight") ) { _iconHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { if (inCallProp == hx::paccAlways) return set_iconPosition(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { _iconPosition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"remainPressed") ) { if (inCallProp == hx::paccAlways) return set_remainPressed(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_remainPressed") ) { _remainPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSelection") ) { if (inCallProp == hx::paccAlways) return set_allowSelection(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowSelection") ) { _allowSelection=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dispatchChangeEvents") ) { dispatchChangeEvents=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Button_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_allowFocus","\xae","\xe7","\xde","\x01"));
	outFields->push(HX_HCSTRING("_remainPressed","\xd7","\x3e","\x64","\x19"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	outFields->push(HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"));
	outFields->push(HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"));
	outFields->push(HX_HCSTRING("_toggle","\x33","\xd1","\xba","\xfd"));
	outFields->push(HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"));
	outFields->push(HX_HCSTRING("_allowSelection","\x22","\x23","\x00","\xaa"));
	outFields->push(HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58"));
	outFields->push(HX_HCSTRING("_multiline","\xae","\x4e","\xb4","\xf9"));
	outFields->push(HX_HCSTRING("_group","\x80","\xfa","\xdb","\x95"));
	outFields->push(HX_HCSTRING("remainPressed","\x96","\x4e","\x12","\xdb"));
	outFields->push(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"));
	outFields->push(HX_HCSTRING("_iconWidth","\x8e","\x03","\xc9","\x5f"));
	outFields->push(HX_HCSTRING("iconWidth","\xcd","\x87","\x26","\x04"));
	outFields->push(HX_HCSTRING("_iconHeight","\x5f","\x91","\x69","\x26"));
	outFields->push(HX_HCSTRING("iconHeight","\x40","\xc4","\xdf","\x53"));
	outFields->push(HX_HCSTRING("allowFocus","\x8f","\x1a","\x55","\x2f"));
	outFields->push(HX_HCSTRING("iconPosition","\x42","\xe5","\x38","\x76"));
	outFields->push(HX_HCSTRING("toggle","\x94","\xbf","\x43","\x8f"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("allowSelection","\x83","\xda","\x9f","\x60"));
	outFields->push(HX_HCSTRING("dispatchChangeEvents","\x83","\x52","\x66","\x7f"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Button_obj,_allowFocus),HX_HCSTRING("_allowFocus","\xae","\xe7","\xde","\x01")},
	{hx::fsBool,(int)offsetof(Button_obj,_remainPressed),HX_HCSTRING("_remainPressed","\xd7","\x3e","\x64","\x19")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(Button_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Image*/ ,(int)offsetof(Button_obj,_icon),HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8")},
	{hx::fsBool,(int)offsetof(Button_obj,_down),HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5")},
	{hx::fsBool,(int)offsetof(Button_obj,_toggle),HX_HCSTRING("_toggle","\x33","\xd1","\xba","\xfd")},
	{hx::fsBool,(int)offsetof(Button_obj,_selected),HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9")},
	{hx::fsBool,(int)offsetof(Button_obj,_allowSelection),HX_HCSTRING("_allowSelection","\x22","\x23","\x00","\xaa")},
	{hx::fsString,(int)offsetof(Button_obj,_iconPosition),HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58")},
	{hx::fsBool,(int)offsetof(Button_obj,_multiline),HX_HCSTRING("_multiline","\xae","\x4e","\xb4","\xf9")},
	{hx::fsString,(int)offsetof(Button_obj,_group),HX_HCSTRING("_group","\x80","\xfa","\xdb","\x95")},
	{hx::fsFloat,(int)offsetof(Button_obj,_iconWidth),HX_HCSTRING("_iconWidth","\x8e","\x03","\xc9","\x5f")},
	{hx::fsFloat,(int)offsetof(Button_obj,_iconHeight),HX_HCSTRING("_iconHeight","\x5f","\x91","\x69","\x26")},
	{hx::fsBool,(int)offsetof(Button_obj,dispatchChangeEvents),HX_HCSTRING("dispatchChangeEvents","\x83","\x52","\x66","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Button_obj::STATE_NORMAL,HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60")},
	{hx::fsString,(void *) &Button_obj::STATE_OVER,HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38")},
	{hx::fsString,(void *) &Button_obj::STATE_DOWN,HX_HCSTRING("STATE_DOWN","\xb0","\x04","\x15","\x31")},
	{hx::fsString,(void *) &Button_obj::STATE_DISABLED,HX_HCSTRING("STATE_DISABLED","\xca","\x54","\x23","\xed")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Button_obj::_groups,HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_allowFocus","\xae","\xe7","\xde","\x01"),
	HX_HCSTRING("_remainPressed","\xd7","\x3e","\x64","\x19"),
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
	HX_HCSTRING("_icon","\x58","\x03","\xc4","\xf8"),
	HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"),
	HX_HCSTRING("_toggle","\x33","\xd1","\xba","\xfd"),
	HX_HCSTRING("_selected","\xba","\x21","\x03","\xf9"),
	HX_HCSTRING("_allowSelection","\x22","\x23","\x00","\xaa"),
	HX_HCSTRING("_iconPosition","\x21","\x78","\xa7","\x58"),
	HX_HCSTRING("_multiline","\xae","\x4e","\xb4","\xf9"),
	HX_HCSTRING("_group","\x80","\xfa","\xdb","\x95"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("get_remainPressed","\xed","\x59","\x82","\xe1"),
	HX_HCSTRING("set_remainPressed","\xf9","\x31","\xf0","\x04"),
	HX_HCSTRING("get_icon","\x02","\xa3","\x6d","\xc5"),
	HX_HCSTRING("set_icon","\x76","\xfc","\xca","\x73"),
	HX_HCSTRING("_iconWidth","\x8e","\x03","\xc9","\x5f"),
	HX_HCSTRING("get_iconWidth","\xa4","\x5b","\x8a","\xc5"),
	HX_HCSTRING("set_iconWidth","\xb0","\x3d","\x90","\x0a"),
	HX_HCSTRING("_iconHeight","\x5f","\x91","\x69","\x26"),
	HX_HCSTRING("get_iconHeight","\x89","\x4c","\xd5","\xc9"),
	HX_HCSTRING("set_iconHeight","\xfd","\x34","\xf5","\xe9"),
	HX_HCSTRING("organiseChildren","\x69","\x45","\xe4","\x77"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("set_disabled","\xf9","\x18","\x17","\x46"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onMouseUp","\x42","\x28","\xc0","\xf3"),
	HX_HCSTRING("_onMouseClick","\xc1","\xa4","\xdd","\x20"),
	HX_HCSTRING("get_states","\x0b","\x49","\x83","\xf6"),
	HX_HCSTRING("set_state","\x74","\xbe","\x05","\xab"),
	HX_HCSTRING("get_allowFocus","\xd8","\xa2","\x4a","\xa5"),
	HX_HCSTRING("set_allowFocus","\x4c","\x8b","\x6a","\xc5"),
	HX_HCSTRING("dispatchChangeEvents","\x83","\x52","\x66","\x7f"),
	HX_HCSTRING("get_iconPosition","\xcb","\xd1","\xd7","\x7a"),
	HX_HCSTRING("set_iconPosition","\x3f","\xbf","\x19","\xd1"),
	HX_HCSTRING("get_toggle","\x5d","\x2f","\xcb","\x7f"),
	HX_HCSTRING("set_toggle","\xd1","\xcd","\x48","\x83"),
	HX_HCSTRING("get_selected","\x64","\xde","\x86","\x66"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	HX_HCSTRING("get_group","\x96","\x0f","\x9e","\xdd"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("get_allowSelection","\x4c","\xbb","\x39","\xfc"),
	HX_HCSTRING("set_allowSelection","\xc0","\xed","\xe8","\xd8"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_DOWN,"STATE_DOWN");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_DISABLED,"STATE_DISABLED");
	HX_MARK_MEMBER_NAME(Button_obj::_groups,"_groups");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_DOWN,"STATE_DOWN");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_DISABLED,"STATE_DISABLED");
	HX_VISIT_MEMBER_NAME(Button_obj::_groups,"_groups");
};

#endif

hx::Class Button_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60"),
	HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38"),
	HX_HCSTRING("STATE_DOWN","\xb0","\x04","\x15","\x31"),
	HX_HCSTRING("STATE_DISABLED","\xca","\x54","\x23","\xed"),
	HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a"),
	HX_HCSTRING("optionInGroup","\x25","\x66","\xe6","\x53"),
	::String(null()) };

void Button_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Button","\x88","\x08","\xc5","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Button_obj::__GetStatic;
	__mClass->mSetStaticField = &Button_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Button_obj >;
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

void Button_obj::__boot()
{
	STATE_NORMAL= HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
	STATE_OVER= HX_HCSTRING("over","\x54","\x91","\xb8","\x49");
	STATE_DOWN= HX_HCSTRING("down","\x62","\xf8","\x6d","\x42");
	STATE_DISABLED= HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
