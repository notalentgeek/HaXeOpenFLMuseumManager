#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_OptionBox
#include <haxe/ui/toolkit/controls/OptionBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_OptionBoxValue
#include <haxe/ui/toolkit/controls/OptionBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Value
#include <haxe/ui/toolkit/controls/Value.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void OptionBox_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","new",0xd80595b2,"haxe.ui.toolkit.controls.OptionBox.new","haxe/ui/toolkit/controls/OptionBox.hx",18,0xfe98d33e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->_down = false;
	HX_STACK_LINE(41)
	super::__construct();
	HX_STACK_LINE(42)
	::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	tmp->buttonMode = true;
	HX_STACK_LINE(43)
	::openfl::_legacy::display::Sprite tmp1 = this->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	tmp1->useHandCursor = true;
	HX_STACK_LINE(44)
	::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	if ((tmp3)){
		HX_STACK_LINE(45)
		::haxe::ds::StringMap tmp4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::controls::OptionBox_obj::_groups = tmp4;
	}
	HX_STACK_LINE(48)
	::haxe::ui::toolkit::controls::OptionBoxValue tmp4 = ::haxe::ui::toolkit::controls::OptionBoxValue_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	this->_value = tmp4;
	HX_STACK_LINE(49)
	::haxe::ui::toolkit::controls::OptionBoxValue tmp5 = this->_value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(49)
	tmp5->set_interactive(false);
	HX_STACK_LINE(50)
	::haxe::ui::toolkit::controls::Text tmp6 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(50)
	this->_label = tmp6;
	HX_STACK_LINE(51)
	::haxe::ui::toolkit::layout::HorizontalLayout tmp7 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	this->_layout = tmp7;
	HX_STACK_LINE(52)
	this->_autoSize = true;
}
;
	return null();
}

//OptionBox_obj::~OptionBox_obj() { }

Dynamic OptionBox_obj::__CreateEmpty() { return  new OptionBox_obj; }
hx::ObjectPtr< OptionBox_obj > OptionBox_obj::__new()
{  hx::ObjectPtr< OptionBox_obj > _result_ = new OptionBox_obj();
	_result_->__construct();
	return _result_;}

Dynamic OptionBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionBox_obj > _result_ = new OptionBox_obj();
	_result_->__construct();
	return _result_;}

hx::Object *OptionBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

OptionBox_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< OptionBox_obj >(this); }
Void OptionBox_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","dispose",0xe6a056f1,"haxe.ui.toolkit.controls.OptionBox.dispose","haxe/ui/toolkit/controls/OptionBox.hx",55,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		::String tmp = this->get_group();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		if ((tmp1)){
			HX_STACK_LINE(59)
			::haxe::ds::StringMap tmp2 = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			::String tmp3 = this->_group;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			Array< ::Dynamic > arr = tmp2->get(tmp3);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(60)
			arr->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(63)
		this->super::dispose();
	}
return null();
}


Void OptionBox_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","initialize",0x01249a3e,"haxe.ui.toolkit.controls.OptionBox.initialize","haxe/ui/toolkit/controls/OptionBox.hx",69,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::haxe::ui::toolkit::controls::OptionBox _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		this->super::initialize();
		HX_STACK_LINE(72)
		::haxe::ui::toolkit::controls::OptionBoxValue tmp = this->_value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		tmp->set_verticalAlign(HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::controls::OptionBoxValue tmp1 = this->_value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		this->addChild(tmp1);
		HX_STACK_LINE(74)
		::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		this->addChild(tmp2);
		HX_STACK_LINE(76)
		::String tmp3 = ::openfl::_legacy::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp3,"tmp3");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::controls::OptionBox,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/OptionBox.hx",76,0xfe98d33e)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(77)
				bool tmp4 = _g->get_selected();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				if ((tmp5)){
					HX_STACK_LINE(78)
					bool tmp6 = _g->get_selected();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(78)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(78)
					_g->set_selected(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(76)
		this->addEventListener(tmp3, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(82)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		Dynamic tmp5 = this->_onMouseOver_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		this->addEventListener(tmp4,tmp5,null(),null(),null());
		HX_STACK_LINE(83)
		::String tmp6 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		Dynamic tmp7 = this->_onMouseOut_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		this->addEventListener(tmp6,tmp7,null(),null(),null());
		HX_STACK_LINE(84)
		::String tmp8 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		Dynamic tmp9 = this->_onMouseDown_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(84)
		this->addEventListener(tmp8,tmp9,null(),null(),null());
		HX_STACK_LINE(85)
		::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		Dynamic tmp11 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		this->addEventListener(tmp10,tmp11,null(),null(),null());
	}
return null();
}


Void OptionBox_obj::_onMouseOver( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","_onMouseOver",0x8ea1db69,"haxe.ui.toolkit.controls.OptionBox._onMouseOver","haxe/ui/toolkit/controls/OptionBox.hx",91,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(92)
		bool tmp = (event->buttonDown == false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		if ((tmp)){
			HX_STACK_LINE(93)
			this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(94)
			bool tmp1 = this->_down;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(94)
			bool tmp2 = (tmp1 == true);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(94)
			if ((tmp2)){
				HX_STACK_LINE(95)
				this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,_onMouseOver,(void))

Void OptionBox_obj::_onMouseOut( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","_onMouseOut",0x1c30f019,"haxe.ui.toolkit.controls.OptionBox._onMouseOut","haxe/ui/toolkit/controls/OptionBox.hx",99,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(100)
		bool tmp = (event->buttonDown == false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		if ((tmp)){
			HX_STACK_LINE(101)
			this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,_onMouseOut,(void))

Void OptionBox_obj::_onMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","_onMouseDown",0x87574277,"haxe.ui.toolkit.controls.OptionBox._onMouseDown","haxe/ui/toolkit/controls/OptionBox.hx",107,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(108)
		this->_down = true;
		HX_STACK_LINE(109)
		this->set_state(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
		HX_STACK_LINE(110)
		::haxe::ui::toolkit::core::Screen tmp = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		::String tmp1 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		Dynamic tmp2 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		tmp->addEventListener(tmp1,tmp2,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,_onMouseDown,(void))

Void OptionBox_obj::_onMouseUp( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","_onMouseUp",0x08299130,"haxe.ui.toolkit.controls.OptionBox._onMouseUp","haxe/ui/toolkit/controls/OptionBox.hx",113,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(114)
		this->_down = false;
		HX_STACK_LINE(115)
		Float tmp = event->stageX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		Float tmp1 = event->stageY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		bool tmp2 = this->hitTest(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		if ((tmp2)){
			HX_STACK_LINE(117)
			this->set_state(HX_HCSTRING("over","\x54","\x91","\xb8","\x49"));
		}
		else{
			HX_STACK_LINE(122)
			this->set_state(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
		}
		HX_STACK_LINE(125)
		::haxe::ui::toolkit::core::Screen tmp3 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		::String tmp4 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		Dynamic tmp5 = this->_onMouseUp_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		tmp3->removeEventListener(tmp4,tmp5,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,_onMouseUp,(void))

::String OptionBox_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","get_text",0x8abc39a4,"haxe.ui.toolkit.controls.OptionBox.get_text","haxe/ui/toolkit/controls/OptionBox.hx",131,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	return tmp1;
}


::String OptionBox_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","set_text",0x39199318,"haxe.ui.toolkit.controls.OptionBox.set_text","haxe/ui/toolkit/controls/OptionBox.hx",135,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(136)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(136)
	value = tmp1;
	HX_STACK_LINE(137)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_label;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(137)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(138)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(138)
	return tmp4;
}


bool OptionBox_obj::get_selected( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","get_selected",0x76ceded2,"haxe.ui.toolkit.controls.OptionBox.get_selected","haxe/ui/toolkit/controls/OptionBox.hx",155,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	::haxe::ui::toolkit::controls::OptionBoxValue tmp = this->_value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	Dynamic tmp1 = tmp->get_value();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	bool tmp2 = (tmp1 == HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_selected,return )

bool OptionBox_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","set_selected",0x8bc80246,"haxe.ui.toolkit.controls.OptionBox.set_selected","haxe/ui/toolkit/controls/OptionBox.hx",159,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(160)
	bool tmp = this->get_selected();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	if ((tmp2)){
		HX_STACK_LINE(161)
		bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		return tmp3;
	}
	HX_STACK_LINE(164)
	::String tmp3 = this->_group;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(164)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(164)
	if ((tmp4)){
		HX_STACK_LINE(164)
		tmp5 = (value == false);
	}
	else{
		HX_STACK_LINE(164)
		tmp5 = false;
	}
	HX_STACK_LINE(164)
	if ((tmp5)){
		HX_STACK_LINE(165)
		::haxe::ds::StringMap tmp6 = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(165)
		::String tmp7 = this->_group;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(165)
		Array< ::Dynamic > arr = tmp6->get(tmp7);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(166)
		bool hasSelection = false;		HX_STACK_VAR(hasSelection,"hasSelection");
		HX_STACK_LINE(167)
		bool tmp8 = (arr != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(167)
		if ((tmp8)){
			HX_STACK_LINE(168)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(168)
			while((true)){
				HX_STACK_LINE(168)
				bool tmp9 = (_g < arr->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(168)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(168)
				if ((tmp10)){
					HX_STACK_LINE(168)
					break;
				}
				HX_STACK_LINE(168)
				::haxe::ui::toolkit::controls::OptionBox tmp11 = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::OptionBox >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(168)
				::haxe::ui::toolkit::controls::OptionBox option = tmp11;		HX_STACK_VAR(option,"option");
				HX_STACK_LINE(168)
				++(_g);
				HX_STACK_LINE(169)
				bool tmp12 = (option != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(169)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(169)
				if ((tmp12)){
					HX_STACK_LINE(169)
					bool tmp14 = option->get_selected();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(169)
					bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(169)
					tmp13 = (tmp15 == true);
				}
				else{
					HX_STACK_LINE(169)
					tmp13 = false;
				}
				HX_STACK_LINE(169)
				if ((tmp13)){
					HX_STACK_LINE(170)
					hasSelection = true;
					HX_STACK_LINE(171)
					break;
				}
			}
		}
		HX_STACK_LINE(175)
		bool tmp9 = (hasSelection == false);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		if ((tmp9)){
			HX_STACK_LINE(176)
			bool tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			return tmp10;
		}
	}
	HX_STACK_LINE(180)
	::haxe::ui::toolkit::controls::OptionBoxValue tmp6 = this->_value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(180)
	bool tmp7 = (value == true);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(180)
	Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(180)
	if ((tmp7)){
		HX_STACK_LINE(180)
		tmp8 = HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1");
	}
	else{
		HX_STACK_LINE(180)
		tmp8 = HX_HCSTRING("unselected","\xb4","\x11","\x31","\x37");
	}
	HX_STACK_LINE(180)
	tmp6->set_value(tmp8);
	HX_STACK_LINE(181)
	::String tmp9 = this->_group;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(181)
	bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(181)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(181)
	if ((tmp10)){
		HX_STACK_LINE(181)
		tmp11 = (value == true);
	}
	else{
		HX_STACK_LINE(181)
		tmp11 = false;
	}
	HX_STACK_LINE(181)
	if ((tmp11)){
		HX_STACK_LINE(182)
		::haxe::ds::StringMap tmp12 = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(182)
		::String tmp13 = this->_group;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(182)
		Array< ::Dynamic > arr = tmp12->get(tmp13);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(183)
		bool tmp14 = (arr != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(183)
		if ((tmp14)){
			HX_STACK_LINE(184)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(184)
			while((true)){
				HX_STACK_LINE(184)
				bool tmp15 = (_g < arr->length);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(184)
				bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(184)
				if ((tmp16)){
					HX_STACK_LINE(184)
					break;
				}
				HX_STACK_LINE(184)
				::haxe::ui::toolkit::controls::OptionBox tmp17 = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::OptionBox >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(184)
				::haxe::ui::toolkit::controls::OptionBox option = tmp17;		HX_STACK_VAR(option,"option");
				HX_STACK_LINE(184)
				++(_g);
				HX_STACK_LINE(185)
				bool tmp18 = (option != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(185)
				if ((tmp18)){
					HX_STACK_LINE(186)
					option->set_selected(false);
				}
			}
		}
	}
	HX_STACK_LINE(192)
	::String tmp12 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(192)
	::openfl::_legacy::events::Event tmp13 = ::openfl::_legacy::events::Event_obj::__new(tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(192)
	::openfl::_legacy::events::Event event = tmp13;		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(193)
	::openfl::_legacy::events::Event tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(193)
	this->dispatchEvent(tmp14);
	HX_STACK_LINE(195)
	bool tmp15 = value;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(195)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,set_selected,return )

::String OptionBox_obj::get_group( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","get_group",0x66519e68,"haxe.ui.toolkit.controls.OptionBox.get_group","haxe/ui/toolkit/controls/OptionBox.hx",198,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	::String tmp = this->_group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(OptionBox_obj,get_group,return )

::String OptionBox_obj::set_group( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","set_group",0x49a28a74,"haxe.ui.toolkit.controls.OptionBox.set_group","haxe/ui/toolkit/controls/OptionBox.hx",202,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(203)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	if ((tmp)){
		HX_STACK_LINE(204)
		::haxe::ds::StringMap tmp1 = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(204)
		Array< ::Dynamic > arr = tmp1->get(tmp2);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(205)
		bool tmp3 = (arr != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		if ((tmp3)){
			HX_STACK_LINE(206)
			arr->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(210)
	this->_group = value;
	HX_STACK_LINE(211)
	::haxe::ds::StringMap tmp1 = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	Array< ::Dynamic > arr = tmp1->get(tmp2);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(212)
	bool tmp3 = (arr == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	if ((tmp3)){
		HX_STACK_LINE(213)
		arr = Array_obj< ::Dynamic >::__new();
	}
	HX_STACK_LINE(216)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(216)
	bool tmp5 = ::haxe::ui::toolkit::controls::OptionBox_obj::optionInGroup(tmp4,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(216)
	bool tmp6 = (tmp5 == false);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(216)
	if ((tmp6)){
		HX_STACK_LINE(217)
		arr->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(219)
	::haxe::ds::StringMap tmp7 = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(219)
	::String tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(219)
	tmp7->set(tmp8,arr);
	HX_STACK_LINE(221)
	::String tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(221)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(OptionBox_obj,set_group,return )

Void OptionBox_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","applyStyle",0x43d889d1,"haxe.ui.toolkit.controls.OptionBox.applyStyle","haxe/ui/toolkit/controls/OptionBox.hx",244,0xfe98d33e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		this->super::applyStyle();
		HX_STACK_LINE(248)
		::haxe::ui::toolkit::controls::Text tmp = this->_label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(249)
			::haxe::ui::toolkit::style::Style tmp2 = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(249)
			::haxe::ui::toolkit::style::Style labelStyle = tmp2;		HX_STACK_VAR(labelStyle,"labelStyle");
			HX_STACK_LINE(250)
			::haxe::ui::toolkit::style::Style tmp3 = this->_baseStyle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(250)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(250)
			if ((tmp4)){
				HX_STACK_LINE(251)
				::haxe::ui::toolkit::style::Style tmp5 = this->_baseStyle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(251)
				::String tmp6 = tmp5->get_fontName();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(251)
				labelStyle->set_fontName(tmp6);
				HX_STACK_LINE(252)
				::haxe::ui::toolkit::style::Style tmp7 = this->_baseStyle;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(252)
				Float tmp8 = tmp7->get_fontSize();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(252)
				labelStyle->set_fontSize(tmp8);
				HX_STACK_LINE(253)
				::haxe::ui::toolkit::style::Style tmp9 = this->_baseStyle;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(253)
				bool tmp10 = tmp9->get_fontEmbedded();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(253)
				labelStyle->set_fontEmbedded(tmp10);
				HX_STACK_LINE(254)
				::haxe::ui::toolkit::style::Style tmp11 = this->_baseStyle;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(254)
				int tmp12 = tmp11->get_color();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(254)
				labelStyle->set_color(tmp12);
			}
			HX_STACK_LINE(256)
			::haxe::ui::toolkit::controls::Text tmp5 = this->_label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			::haxe::ui::toolkit::style::Style tmp6 = labelStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			tmp5->set_baseStyle(tmp6);
		}
	}
return null();
}


Array< ::String > OptionBox_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","get_states",0x0aecb1f9,"haxe.ui.toolkit.controls.OptionBox.get_states","haxe/ui/toolkit/controls/OptionBox.hx",264,0xfe98d33e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(264)
	return Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("over","\x54","\x91","\xb8","\x49")).Add(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
}


::haxe::ui::toolkit::core::DisplayObject OptionBox_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","clone",0xc40e512f,"haxe.ui.toolkit.controls.OptionBox.clone","src/haxe/ui/toolkit/controls/OptionBox.hx",1,0x2d6e2693)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::OptionBox c = ((::haxe::ui::toolkit::controls::OptionBox)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool tmp1 = this->get_selected();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_selected(tmp1);
	HX_STACK_LINE(4)
	::String tmp2 = this->get_group();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_group(tmp2);
	HX_STACK_LINE(5)
	::haxe::ui::toolkit::controls::OptionBox tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	return tmp3;
}


::haxe::ui::toolkit::core::DisplayObject OptionBox_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","self",0x302b6dfa,"haxe.ui.toolkit.controls.OptionBox.self","src/haxe/ui/toolkit/controls/OptionBox.hx",1,0x2d6e2693)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::OptionBox tmp = ::haxe::ui::toolkit::controls::OptionBox_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


::String OptionBox_obj::STATE_NORMAL;

::String OptionBox_obj::STATE_OVER;

::String OptionBox_obj::STATE_DOWN;

::haxe::ds::StringMap OptionBox_obj::_groups;

bool OptionBox_obj::optionInGroup( ::String value,::haxe::ui::toolkit::controls::OptionBox option){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBox","optionInGroup",0x829ec5f7,"haxe.ui.toolkit.controls.OptionBox.optionInGroup","haxe/ui/toolkit/controls/OptionBox.hx",227,0xfe98d33e)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(option,"option")
	HX_STACK_LINE(228)
	bool exists = false;		HX_STACK_VAR(exists,"exists");
	HX_STACK_LINE(229)
	::haxe::ds::StringMap tmp = ::haxe::ui::toolkit::controls::OptionBox_obj::_groups;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	Array< ::Dynamic > arr = tmp->get(tmp1);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(230)
	bool tmp2 = (arr != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	if ((tmp2)){
		HX_STACK_LINE(231)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(231)
		while((true)){
			HX_STACK_LINE(231)
			bool tmp3 = (_g < arr->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(231)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(231)
			if ((tmp4)){
				HX_STACK_LINE(231)
				break;
			}
			HX_STACK_LINE(231)
			::haxe::ui::toolkit::controls::OptionBox tmp5 = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::OptionBox >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			::haxe::ui::toolkit::controls::OptionBox test = tmp5;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(231)
			++(_g);
			HX_STACK_LINE(232)
			bool tmp6 = (test == option);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(232)
			if ((tmp6)){
				HX_STACK_LINE(233)
				exists = true;
				HX_STACK_LINE(234)
				break;
			}
		}
	}
	HX_STACK_LINE(238)
	bool tmp3 = exists;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionBox_obj,optionInGroup,return )


OptionBox_obj::OptionBox_obj()
{
}

void OptionBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionBox);
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_group,"_group");
	HX_MARK_MEMBER_NAME(_down,"_down");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_group,"_group");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OptionBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return get_group(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return _value; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"_group") ) { return _group; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return get_selected(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return get_selected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionBox_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

Dynamic OptionBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { if (inCallProp == hx::paccAlways) return set_group(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::haxe::ui::toolkit::controls::OptionBoxValue >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_group") ) { _group=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { if (inCallProp == hx::paccAlways) return set_selected(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionBox_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void OptionBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"));
	outFields->push(HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"));
	outFields->push(HX_HCSTRING("_group","\x80","\xfa","\xdb","\x95"));
	outFields->push(HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"));
	outFields->push(HX_HCSTRING("selected","\x5b","\x2a","\x6d","\xb1"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::OptionBoxValue*/ ,(int)offsetof(OptionBox_obj,_value),HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(OptionBox_obj,_label),HX_HCSTRING("_label","\x35","\x55","\x96","\x6b")},
	{hx::fsString,(int)offsetof(OptionBox_obj,_group),HX_HCSTRING("_group","\x80","\xfa","\xdb","\x95")},
	{hx::fsBool,(int)offsetof(OptionBox_obj,_down),HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &OptionBox_obj::STATE_NORMAL,HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60")},
	{hx::fsString,(void *) &OptionBox_obj::STATE_OVER,HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38")},
	{hx::fsString,(void *) &OptionBox_obj::STATE_DOWN,HX_HCSTRING("STATE_DOWN","\xb0","\x04","\x15","\x31")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &OptionBox_obj::_groups,HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_value","\xb2","\xc6","\x9f","\x2d"),
	HX_HCSTRING("_label","\x35","\x55","\x96","\x6b"),
	HX_HCSTRING("_group","\x80","\xfa","\xdb","\x95"),
	HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("_onMouseOver","\xfb","\xda","\x59","\x7e"),
	HX_HCSTRING("_onMouseOut","\xc7","\x88","\x5e","\x54"),
	HX_HCSTRING("_onMouseDown","\x09","\x42","\x0f","\x77"),
	HX_HCSTRING("_onMouseUp","\x42","\x28","\xc0","\xf3"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_selected","\x64","\xde","\x86","\x66"),
	HX_HCSTRING("set_selected","\xd8","\x01","\x80","\x7b"),
	HX_HCSTRING("get_group","\x96","\x0f","\x9e","\xdd"),
	HX_HCSTRING("set_group","\xa2","\xfb","\xee","\xc0"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("get_states","\x0b","\x49","\x83","\xf6"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(OptionBox_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(OptionBox_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(OptionBox_obj::STATE_DOWN,"STATE_DOWN");
	HX_MARK_MEMBER_NAME(OptionBox_obj::_groups,"_groups");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(OptionBox_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(OptionBox_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(OptionBox_obj::STATE_DOWN,"STATE_DOWN");
	HX_VISIT_MEMBER_NAME(OptionBox_obj::_groups,"_groups");
};

#endif

hx::Class OptionBox_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STATE_NORMAL","\xf5","\x91","\x26","\x60"),
	HX_HCSTRING("STATE_OVER","\xa2","\x9d","\x5f","\x38"),
	HX_HCSTRING("STATE_DOWN","\xb0","\x04","\x15","\x31"),
	HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a"),
	HX_HCSTRING("optionInGroup","\x25","\x66","\xe6","\x53"),
	::String(null()) };

void OptionBox_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.OptionBox","\xc0","\x94","\x80","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionBox_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionBox_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OptionBox_obj >;
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

void OptionBox_obj::__boot()
{
	STATE_NORMAL= HX_HCSTRING("normal","\x27","\x72","\x69","\x30");
	STATE_OVER= HX_HCSTRING("over","\x54","\x91","\xb8","\x49");
	STATE_DOWN= HX_HCSTRING("down","\x62","\xf8","\x6d","\x42");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
