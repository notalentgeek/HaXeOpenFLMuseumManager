#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#include <haxe/ui/toolkit/controls/Slider.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Slider_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","new",0xc31f3529,"haxe.ui.toolkit.controls.Slider.new","haxe/ui/toolkit/controls/Slider.hx",12,0x59fded27)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->_mouseDownOffset = ((Float)-1);
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::core::StateComponent tmp = this->_valueBgComp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::openfl::_legacy::display::Sprite tmp1 = tmp->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	tmp1->buttonMode = true;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::core::StateComponent tmp2 = this->_valueBgComp;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	::openfl::_legacy::display::Sprite tmp3 = tmp2->get_sprite();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(21)
	tmp3->useHandCursor = true;
}
;
	return null();
}

//Slider_obj::~Slider_obj() { }

Dynamic Slider_obj::__CreateEmpty() { return  new Slider_obj; }
hx::ObjectPtr< Slider_obj > Slider_obj::__new()
{  hx::ObjectPtr< Slider_obj > _result_ = new Slider_obj();
	_result_->__construct();
	return _result_;}

Dynamic Slider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Slider_obj > _result_ = new Slider_obj();
	_result_->__construct();
	return _result_;}

Void Slider_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","initialize",0x867fe7a7,"haxe.ui.toolkit.controls.Slider.initialize","haxe/ui/toolkit/controls/Slider.hx",27,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::initialize();
		HX_STACK_LINE(30)
		::haxe::ui::toolkit::controls::Button tmp = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		this->_thumb = tmp;
		HX_STACK_LINE(31)
		::haxe::ui::toolkit::controls::Button tmp1 = this->_thumb;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		tmp1->set_id(HX_HCSTRING("thumb","\x16","\xa2","\x92","\x0f"));
		HX_STACK_LINE(32)
		::haxe::ui::toolkit::controls::Button tmp2 = this->_thumb;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		tmp2->set_remainPressed(true);
		HX_STACK_LINE(33)
		::haxe::ui::toolkit::controls::Button tmp3 = this->_thumb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		tmp3->set_autoSize(false);
		HX_STACK_LINE(34)
		::haxe::ui::toolkit::controls::Button tmp4 = this->_thumb;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(34)
		::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		Dynamic tmp6 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		tmp4->addEventListener(tmp5,tmp6,null(),null(),null());
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::controls::Button tmp7 = this->_thumb;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		this->addChild(tmp7);
		HX_STACK_LINE(37)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		Dynamic tmp9 = this->_onMouseWheel_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(37)
		this->addEventListener(tmp8,tmp9,null(),null(),null());
		HX_STACK_LINE(38)
		::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		Dynamic tmp11 = this->_onBackgroundMouseDown_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		this->addEventListener(tmp10,tmp11,null(),null(),null());
	}
return null();
}


Dynamic Slider_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","get_value",0xeb2a7d51,"haxe.ui.toolkit.controls.Slider.get_value","haxe/ui/toolkit/controls/Slider.hx",41,0x59fded27)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	Float tmp = this->get_pos();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


Dynamic Slider_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","set_value",0xce7b695d,"haxe.ui.toolkit.controls.Slider.set_value","haxe/ui/toolkit/controls/Slider.hx",45,0x59fded27)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(46)
	Dynamic tmp = newValue;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	if ((tmp1)){
		HX_STACK_LINE(47)
		Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		Float tmp3 = ::Std_obj::parseFloat(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		this->set_pos(tmp3);
	}
	else{
		HX_STACK_LINE(49)
		Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		this->set_pos(tmp2);
	}
	HX_STACK_LINE(51)
	Dynamic tmp2 = newValue;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	return tmp2;
}


Void Slider_obj::_onMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onMouseDown",0x942f7c20,"haxe.ui.toolkit.controls.Slider._onMouseDown","haxe/ui/toolkit/controls/Slider.hx",57,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onMouseDown,(void))

Void Slider_obj::_onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onScreenMouseMove",0x25173e83,"haxe.ui.toolkit.controls.Slider._onScreenMouseMove","haxe/ui/toolkit/controls/Slider.hx",60,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onScreenMouseMove,(void))

Void Slider_obj::_onScreenMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onScreenMouseUp",0x78fca14d,"haxe.ui.toolkit.controls.Slider._onScreenMouseUp","haxe/ui/toolkit/controls/Slider.hx",63,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(64)
		this->_mouseDownOffset = (int)-1;
		HX_STACK_LINE(65)
		::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		Dynamic tmp2 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		tmp->removeEventListener(tmp1,tmp2,null());
		HX_STACK_LINE(66)
		::haxe::ui::toolkit::core::Screen tmp3 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		Dynamic tmp5 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		tmp3->removeEventListener(tmp4,tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onScreenMouseUp,(void))

Void Slider_obj::_onBackgroundMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onBackgroundMouseDown",0xc44cab92,"haxe.ui.toolkit.controls.Slider._onBackgroundMouseDown","haxe/ui/toolkit/controls/Slider.hx",69,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onBackgroundMouseDown,(void))

Float Slider_obj::calcPosFromCoord( Float coord){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","calcPosFromCoord",0xacf4d683,"haxe.ui.toolkit.controls.Slider.calcPosFromCoord","haxe/ui/toolkit/controls/Slider.hx",73,0x59fded27)
	HX_STACK_THIS(this)
	HX_STACK_ARG(coord,"coord")
	HX_STACK_LINE(73)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,calcPosFromCoord,return )

Void Slider_obj::_onMouseWheel( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onMouseWheel",0x014bf71d,"haxe.ui.toolkit.controls.Slider._onMouseWheel","haxe/ui/toolkit/controls/Slider.hx",76,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(77)
		bool tmp = (event->delta != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		if ((tmp)){
			HX_STACK_LINE(78)
			::String tmp1 = this->_direction;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			bool tmp2 = (tmp1 == HX_HCSTRING("horizontal","\xe4","\xfc","\xc3","\x15"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			if ((tmp2)){
				HX_STACK_LINE(79)
				bool tmp3 = (event->delta < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				if ((tmp3)){
					HX_STACK_LINE(80)
					::haxe::ui::toolkit::controls::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(80)
					Float tmp4 = _g->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(80)
					Float tmp5 = (tmp4 + (int)5);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(80)
					_g->set_pos(tmp5);
				}
				else{
					HX_STACK_LINE(81)
					bool tmp4 = (event->delta > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(81)
					if ((tmp4)){
						HX_STACK_LINE(82)
						::haxe::ui::toolkit::controls::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(82)
						Float tmp5 = _g->get_pos();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(82)
						Float tmp6 = (tmp5 - (int)5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(82)
						_g->set_pos(tmp6);
					}
				}
			}
			else{
				HX_STACK_LINE(84)
				::String tmp3 = this->_direction;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				bool tmp4 = (tmp3 == HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(84)
				if ((tmp4)){
					HX_STACK_LINE(85)
					bool tmp5 = (event->delta < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(85)
					if ((tmp5)){
						HX_STACK_LINE(86)
						::haxe::ui::toolkit::controls::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(86)
						Float tmp6 = _g->get_pos();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(86)
						Float tmp7 = (tmp6 - (int)5);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(86)
						_g->set_pos(tmp7);
					}
					else{
						HX_STACK_LINE(87)
						bool tmp6 = (event->delta > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(87)
						if ((tmp6)){
							HX_STACK_LINE(88)
							::haxe::ui::toolkit::controls::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(88)
							Float tmp7 = _g->get_pos();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(88)
							Float tmp8 = (tmp7 + (int)5);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(88)
							_g->set_pos(tmp8);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onMouseWheel,(void))

::haxe::ui::toolkit::core::DisplayObject Slider_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","clone",0xe067fc66,"haxe.ui.toolkit.controls.Slider.clone","src/haxe/ui/toolkit/controls/Slider.hx",1,0xf24062b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Progress tmp = hx::TCast< ::haxe::ui::toolkit::controls::Progress >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Slider c = ((::haxe::ui::toolkit::controls::Slider)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::Slider tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Slider_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","self",0xfb7d56a3,"haxe.ui.toolkit.controls.Slider.self","src/haxe/ui/toolkit/controls/Slider.hx",1,0xf24062b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Slider tmp = ::haxe::ui::toolkit::controls::Slider_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Slider_obj::Slider_obj()
{
}

void Slider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Slider);
	HX_MARK_MEMBER_NAME(_thumb,"_thumb");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	::haxe::ui::toolkit::controls::Progress_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Slider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_thumb,"_thumb");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	::haxe::ui::toolkit::controls::Progress_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Slider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { return _thumb; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseWheel") ) { return _onMouseWheel_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return _mouseDownOffset; }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return _onScreenMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"calcPosFromCoord") ) { return calcPosFromCoord_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_onBackgroundMouseDown") ) { return _onBackgroundMouseDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Slider_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { _thumb=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Slider_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Slider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b"));
	outFields->push(HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(Slider_obj,_thumb),HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b")},
	{hx::fsFloat,(int)offsetof(Slider_obj,_mouseDownOffset),HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_thumb","\x57","\xe9","\x79","\x0b"),
	HX_HCSTRING("_mouseDownOffset","\x9b","\xd6","\xd5","\x98"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("set_value","\xd4","\xc7","\xb2","\x58"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("_onScreenMouseUp","\xb6","\x0f","\x00","\xd0"),
	HX_HCSTRING("_onBackgroundMouseDown","\xbb","\x4e","\xe4","\x06"),
	HX_HCSTRING("calcPosFromCoord","\xec","\x44","\xf8","\x03"),
	HX_HCSTRING("_onMouseWheel","\x14","\x5d","\x39","\xa2"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
};

#endif

hx::Class Slider_obj::__mClass;

void Slider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.Slider","\xb7","\x6c","\xe9","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Slider_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Slider_obj >;
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
