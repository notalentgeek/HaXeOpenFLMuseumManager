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
#ifndef INCLUDED_haxe_ui_toolkit_controls_VSlider
#include <haxe/ui/toolkit/controls/VSlider.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void VSlider_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.VSlider","new",0xeb14b953,"haxe.ui.toolkit.controls.VSlider.new","haxe/ui/toolkit/controls/VSlider.hx",13,0xd135eebd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	this->set_direction(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));
}
;
	return null();
}

//VSlider_obj::~VSlider_obj() { }

Dynamic VSlider_obj::__CreateEmpty() { return  new VSlider_obj; }
hx::ObjectPtr< VSlider_obj > VSlider_obj::__new()
{  hx::ObjectPtr< VSlider_obj > _result_ = new VSlider_obj();
	_result_->__construct();
	return _result_;}

Dynamic VSlider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VSlider_obj > _result_ = new VSlider_obj();
	_result_->__construct();
	return _result_;}

hx::Object *VSlider_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

VSlider_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< VSlider_obj >(this); }
Void VSlider_obj::_onMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VSlider","_onMouseDown",0x37a122b6,"haxe.ui.toolkit.controls.VSlider._onMouseDown","haxe/ui/toolkit/controls/VSlider.hx",21,0xd135eebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(22)
		Float tmp = event->stageY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		Float tmp1 = ::haxe::ui::toolkit::core::Toolkit_obj::get_scaleFactor();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		::haxe::ui::toolkit::controls::Button tmp3 = this->_thumb;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		Float tmp4 = tmp3->get_stageY();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		Float tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		this->startTracking(tmp5);
	}
return null();
}


Void VSlider_obj::_onScreenMouseMove( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VSlider","_onScreenMouseMove",0xbbdcf999,"haxe.ui.toolkit.controls.VSlider._onScreenMouseMove","haxe/ui/toolkit/controls/VSlider.hx",25,0xd135eebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(26)
		Float tmp = event->stageY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		Float tmp1 = ::haxe::ui::toolkit::core::Toolkit_obj::get_scaleFactor();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		Float tmp3 = this->get_stageY();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(26)
		Float tmp5 = this->_mouseDownOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		Float ypos = tmp6;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(27)
		Float tmp7 = ypos;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(27)
		Float tmp8 = this->calcPosFromCoord(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(27)
		this->set_pos(tmp8);
	}
return null();
}


Void VSlider_obj::_onBackgroundMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VSlider","_onBackgroundMouseDown",0x3adca9a8,"haxe.ui.toolkit.controls.VSlider._onBackgroundMouseDown","haxe/ui/toolkit/controls/VSlider.hx",30,0xd135eebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(31)
		::haxe::ui::toolkit::controls::Button tmp = this->_thumb;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		Float tmp1 = event->stageX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		Float tmp2 = event->stageY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		bool tmp3 = tmp->hitTest(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(31)
		bool tmp4 = (tmp3 == false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		if ((tmp4)){
			HX_STACK_LINE(32)
			Float tmp5 = event->stageY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(32)
			Float tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::get_scaleFactor();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(32)
			Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			Float tmp8 = this->get_stageY();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(32)
			Float ypos = tmp9;		HX_STACK_VAR(ypos,"ypos");
			HX_STACK_LINE(33)
			::haxe::ui::toolkit::controls::Button tmp10 = this->_thumb;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			Float tmp11 = tmp10->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(33)
			Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(33)
			hx::SubEq(ypos,tmp12);
			HX_STACK_LINE(34)
			Float tmp13 = ypos;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(34)
			Float tmp14 = this->calcPosFromCoord(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(34)
			int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(34)
			this->set_pos(tmp15);
			HX_STACK_LINE(35)
			::haxe::ui::toolkit::controls::Button tmp16 = this->_thumb;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(35)
			tmp16->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			HX_STACK_LINE(36)
			::haxe::ui::toolkit::controls::Button tmp17 = this->_thumb;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(36)
			Float tmp18 = tmp17->get_height();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(36)
			Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(36)
			this->startTracking(tmp19);
		}
	}
return null();
}


Void VSlider_obj::startTracking( Float offset){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VSlider","startTracking",0x438c006c,"haxe.ui.toolkit.controls.VSlider.startTracking","haxe/ui/toolkit/controls/VSlider.hx",43,0xd135eebd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(44)
		this->_mouseDownOffset = offset;
		HX_STACK_LINE(46)
		::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		Dynamic tmp2 = this->_onScreenMouseUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		tmp->addEventListener(tmp1,tmp2,null(),null(),null());
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::core::Screen tmp3 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		Dynamic tmp5 = this->_onScreenMouseMove_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		tmp3->addEventListener(tmp4,tmp5,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VSlider_obj,startTracking,(void))

Float VSlider_obj::calcPosFromCoord( Float ypos){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VSlider","calcPosFromCoord",0x3f4c8019,"haxe.ui.toolkit.controls.VSlider.calcPosFromCoord","haxe/ui/toolkit/controls/VSlider.hx",53,0xd135eebd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ypos,"ypos")
	HX_STACK_LINE(54)
	Float minY = (int)0;		HX_STACK_VAR(minY,"minY");
	HX_STACK_LINE(55)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp = this->get_layout();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	Float tmp1 = tmp->get_usableHeight();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	::haxe::ui::toolkit::controls::Button tmp2 = this->_thumb;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	Float tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	Float tmp4 = (tmp1 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(55)
	Float maxY = tmp4;		HX_STACK_VAR(maxY,"maxY");
	HX_STACK_LINE(57)
	bool tmp5 = (ypos < minY);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	if ((tmp5)){
		HX_STACK_LINE(58)
		ypos = minY;
	}
	else{
		HX_STACK_LINE(59)
		bool tmp6 = (ypos > maxY);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		if ((tmp6)){
			HX_STACK_LINE(60)
			ypos = maxY;
		}
	}
	HX_STACK_LINE(63)
	::haxe::ui::toolkit::core::interfaces::ILayout tmp6 = this->get_layout();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(63)
	Float tmp7 = tmp6->get_usableHeight();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(63)
	Float ucy = tmp7;		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(64)
	::haxe::ui::toolkit::controls::Button tmp8 = this->_thumb;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(64)
	Float tmp9 = tmp8->get_height();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(64)
	hx::SubEq(ucy,tmp9);
	HX_STACK_LINE(65)
	Float tmp10 = this->get_max();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(65)
	Float tmp11 = this->get_min();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(65)
	Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(65)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(65)
	int m = tmp13;		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(66)
	Float tmp14 = (ypos - minY);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(66)
	Float v = tmp14;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(67)
	Float tmp15 = this->get_max();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(67)
	Float tmp16 = (Float(v) / Float(ucy));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(67)
	int tmp17 = m;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(67)
	Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(67)
	Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(67)
	Float newValue = tmp19;		HX_STACK_VAR(newValue,"newValue");
	HX_STACK_LINE(68)
	Float tmp20 = newValue;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(68)
	return tmp20;
}


::haxe::ui::toolkit::core::DisplayObject VSlider_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VSlider","clone",0x13e65f10,"haxe.ui.toolkit.controls.VSlider.clone","src/haxe/ui/toolkit/controls/VSlider.hx",1,0x731a52d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Slider tmp = hx::TCast< ::haxe::ui::toolkit::controls::Slider >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VSlider c = ((::haxe::ui::toolkit::controls::VSlider)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::VSlider tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject VSlider_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VSlider","self",0xca5b7739,"haxe.ui.toolkit.controls.VSlider.self","src/haxe/ui/toolkit/controls/VSlider.hx",1,0x731a52d2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VSlider tmp = ::haxe::ui::toolkit::controls::VSlider_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



VSlider_obj::VSlider_obj()
{
}

Dynamic VSlider_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startTracking") ) { return startTracking_dyn(); }
		break;
	case 16:
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

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onScreenMouseMove","\x2c","\xd9","\xa1","\xd6"),
	HX_HCSTRING("_onBackgroundMouseDown","\xbb","\x4e","\xe4","\x06"),
	HX_HCSTRING("startTracking","\xb9","\x49","\x79","\x84"),
	HX_HCSTRING("calcPosFromCoord","\xec","\x44","\xf8","\x03"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VSlider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VSlider_obj::__mClass,"__mClass");
};

#endif

hx::Class VSlider_obj::__mClass;

void VSlider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.VSlider","\xe1","\x13","\xab","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VSlider_obj >;
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
