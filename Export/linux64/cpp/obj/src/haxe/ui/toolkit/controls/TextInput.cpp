#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInputLayout
#include <haxe/ui/toolkit/controls/TextInputLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_TextDisplay
#include <haxe/ui/toolkit/text/TextDisplay.h>
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
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void TextInput_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","new",0xe9cabfb9,"haxe.ui.toolkit.controls.TextInput.new","haxe/ui/toolkit/controls/TextInput.hx",20,0x28010717)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(83)
	this->_lastKeyCode = (int)-1;
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(29)
	this->addStates(Array_obj< ::String >::__new().Add(HX_HCSTRING("normal","\x27","\x72","\x69","\x30")).Add(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")),null());
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::controls::TextInputLayout tmp = ::haxe::ui::toolkit::controls::TextInputLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->_layout = tmp;
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::text::TextDisplay tmp1 = ::haxe::ui::toolkit::text::TextDisplay_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	this->_textDisplay = tmp1;
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	tmp2->set_interactive(true);
	HX_STACK_LINE(33)
	::haxe::ui::toolkit::text::ITextDisplay tmp3 = this->_textDisplay;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	tmp3->set_autoSize(false);
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	tmp4->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
}
;
	return null();
}

//TextInput_obj::~TextInput_obj() { }

Dynamic TextInput_obj::__CreateEmpty() { return  new TextInput_obj; }
hx::ObjectPtr< TextInput_obj > TextInput_obj::__new()
{  hx::ObjectPtr< TextInput_obj > _result_ = new TextInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextInput_obj > _result_ = new TextInput_obj();
	_result_->__construct();
	return _result_;}

hx::Object *TextInput_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

TextInput_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< TextInput_obj >(this); }
Void TextInput_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","preInitialize",0x930d37ec,"haxe.ui.toolkit.controls.TextInput.preInitialize","haxe/ui/toolkit/controls/TextInput.hx",41,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->super::preInitialize();
	}
return null();
}


Void TextInput_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","initialize",0xb919cf17,"haxe.ui.toolkit.controls.TextInput.initialize","haxe/ui/toolkit/controls/TextInput.hx",44,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::haxe::ui::toolkit::controls::TextInput _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->super::initialize();
		HX_STACK_LINE(47)
		::openfl::_legacy::display::Sprite tmp = this->get_sprite();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::text::ITextDisplay tmp1 = this->_textDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		::openfl::_legacy::display::DisplayObject tmp2 = tmp1->get_display();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		tmp->addChild(tmp2);
		HX_STACK_LINE(49)
		bool tmp3 = this->get_multiline();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		bool tmp4 = (tmp3 == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		if ((tmp4)){
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::text::ITextDisplay tmp5 = this->_textDisplay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			::openfl::_legacy::display::DisplayObject tmp6 = tmp5->get_display();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->_layout;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(50)
			Float tmp8 = tmp7->get_innerWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(50)
			tmp6->set_width(tmp8);
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::text::ITextDisplay tmp9 = this->_textDisplay;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			::openfl::_legacy::display::DisplayObject tmp10 = tmp9->get_display();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp11 = this->_layout;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(51)
			Float tmp12 = tmp11->get_innerHeight();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			tmp10->set_height(tmp12);
		}
		HX_STACK_LINE(54)
		::haxe::ui::toolkit::text::ITextDisplay tmp5 = this->_textDisplay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		::openfl::_legacy::display::DisplayObject tmp6 = tmp5->get_display();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		::String tmp7 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Dynamic tmp8 = this->_onTextChange_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		tmp6->addEventListener(tmp7,tmp8,null(),null(),null());
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::text::ITextDisplay tmp9 = this->_textDisplay;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		::openfl::_legacy::display::DisplayObject tmp10 = tmp9->get_display();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		::String tmp11 = ::openfl::_legacy::events::Event_obj::SCROLL;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		Dynamic tmp12 = this->_onTextScroll_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(55)
		tmp10->addEventListener(tmp11,tmp12,null(),null(),null());
		HX_STACK_LINE(56)
		this->checkScrolls();
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::controls::Text tmp13 = this->_textPlaceHolder;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(58)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(58)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(58)
		if ((tmp14)){
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::controls::Text tmp16 = this->_textPlaceHolder;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::controls::Text tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::controls::Text tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(58)
			bool tmp19 = this->contains(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(58)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(58)
			tmp15 = (tmp20 == false);
		}
		else{
			HX_STACK_LINE(58)
			tmp15 = false;
		}
		HX_STACK_LINE(58)
		if ((tmp15)){
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::controls::Text tmp16 = this->_textPlaceHolder;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(59)
			this->addChild(tmp16);
		}
		HX_STACK_LINE(62)
		::haxe::ui::toolkit::controls::Text tmp16 = this->_textPlaceHolder;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(62)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(62)
		if ((tmp17)){
			HX_STACK_LINE(63)
			::String tmp18 = this->get_text();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(63)
			int tmp19 = tmp18.length;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(63)
			bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(63)
			if ((tmp20)){
				HX_STACK_LINE(64)
				::haxe::ui::toolkit::controls::Text tmp21 = this->_textPlaceHolder;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(64)
				tmp21->set_visible(false);
			}
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::Text tmp21 = this->_textPlaceHolder;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::text::ITextDisplay tmp22 = this->_textDisplay;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(66)
			::String tmp23 = tmp22->get_textAlign();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(66)
			tmp21->set_textAlign(tmp23);
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::controls::Text tmp24 = this->_textPlaceHolder;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(67)
			this->setChildIndex(tmp24,(int)0);
		}
		HX_STACK_LINE(71)
		::String tmp18 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp18,"tmp18");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::controls::TextInput,_g)
		int __ArgCount() const { return 1; }
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/TextInput.hx",71,0x28010717)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(72)
				::String tmp19 = _g->get_text();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(72)
				bool tmp20 = (tmp19 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(72)
				if ((tmp20)){
					HX_STACK_LINE(73)
					_g->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(74)
					_g->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(71)
		this->addEventListener(tmp18, Dynamic(new _Function_1_1(_g)),null(),null(),null());
		HX_STACK_LINE(78)
		::haxe::ui::toolkit::text::ITextDisplay tmp19 = this->_textDisplay;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(78)
		::openfl::_legacy::display::DisplayObject tmp20 = tmp19->get_display();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(78)
		::String tmp21 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(78)
		Dynamic tmp22 = this->_onTextDisplayKeyDown_dyn();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(78)
		tmp20->addEventListener(tmp21,tmp22,null(),null(),null());
	}
return null();
}


Void TextInput_obj::_onTextDisplayKeyDown( ::openfl::_legacy::events::KeyboardEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onTextDisplayKeyDown",0xc57a6583,"haxe.ui.toolkit.controls.TextInput._onTextDisplayKeyDown","haxe/ui/toolkit/controls/TextInput.hx",84,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(85)
		bool tmp = (event->keyCode == (int)13);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		if ((tmp)){
			HX_STACK_LINE(85)
			bool tmp2 = this->get_multiline();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			tmp1 = (tmp3 == true);
		}
		else{
			HX_STACK_LINE(85)
			tmp1 = false;
		}
		HX_STACK_LINE(85)
		if ((tmp1)){
			HX_STACK_LINE(86)
			int tmp2 = this->_lastKeyCode;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			bool tmp3 = (tmp2 != (int)13);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			if ((tmp3)){
				HX_STACK_LINE(87)
				::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				::haxe::ui::toolkit::text::ITextDisplay tmp5 = this->_textDisplay;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				::String tmp7 = ::StringTools_obj::rtrim(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				tmp4->set_text(tmp7);
			}
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::text::ITextDisplay tmp5 = this->_textDisplay;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(89)
			::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(89)
			::String tmp7 = (tmp6 + HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(89)
			tmp4->set_text(tmp7);
		}
		HX_STACK_LINE(92)
		this->_lastKeyCode = event->keyCode;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onTextDisplayKeyDown,(void))

Void TextInput_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","dispose",0x9b109078,"haxe.ui.toolkit.controls.TextInput.dispose","haxe/ui/toolkit/controls/TextInput.hx",96,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::SCROLL;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		Dynamic tmp3 = this->_onTextDisplayKeyDown_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		tmp1->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(100)
		::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		::openfl::_legacy::display::DisplayObject tmp5 = tmp4->get_display();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(100)
		::String tmp6 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		Dynamic tmp7 = this->_onTextChange_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		tmp5->removeEventListener(tmp6,tmp7,null());
		HX_STACK_LINE(101)
		::haxe::ui::toolkit::text::ITextDisplay tmp8 = this->_textDisplay;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		::openfl::_legacy::display::DisplayObject tmp9 = tmp8->get_display();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		::String tmp10 = ::openfl::_legacy::events::Event_obj::SCROLL;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		Dynamic tmp11 = this->_onTextScroll_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		tmp9->removeEventListener(tmp10,tmp11,null());
		HX_STACK_LINE(102)
		::openfl::_legacy::display::Sprite tmp12 = this->get_sprite();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(102)
		::haxe::ui::toolkit::text::ITextDisplay tmp13 = this->_textDisplay;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(102)
		::openfl::_legacy::display::DisplayObject tmp14 = tmp13->get_display();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		tmp12->removeChild(tmp14);
		HX_STACK_LINE(103)
		::haxe::ui::toolkit::controls::Text tmp15 = this->_textPlaceHolder;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(103)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(103)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(103)
		if ((tmp16)){
			HX_STACK_LINE(103)
			::haxe::ui::toolkit::controls::Text tmp18 = this->_textPlaceHolder;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(103)
			::haxe::ui::toolkit::controls::Text tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(103)
			::haxe::ui::toolkit::controls::Text tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(103)
			tmp17 = this->contains(tmp20);
		}
		else{
			HX_STACK_LINE(103)
			tmp17 = false;
		}
		HX_STACK_LINE(103)
		if ((tmp17)){
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::Text tmp18 = this->_textPlaceHolder;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(104)
			this->removeChild(tmp18,null());
		}
		HX_STACK_LINE(106)
		this->super::dispose();
	}
return null();
}


Void TextInput_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","invalidate",0x5388b742,"haxe.ui.toolkit.controls.TextInput.invalidate","haxe/ui/toolkit/controls/TextInput.hx",109,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(110)
		bool tmp = this->_ready;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		if ((tmp3)){
			HX_STACK_LINE(110)
			tmp4 = this->_invalidating;
		}
		else{
			HX_STACK_LINE(110)
			tmp4 = true;
		}
		HX_STACK_LINE(110)
		if ((tmp4)){
			HX_STACK_LINE(111)
			return null();
		}
		HX_STACK_LINE(114)
		int tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		bool tmp6 = recursive;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		this->super::invalidate(tmp5,tmp6);
		HX_STACK_LINE(115)
		this->_invalidating = true;
		HX_STACK_LINE(116)
		int tmp7 = (int(type) & int((int)256));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		bool tmp8 = (tmp7 == (int)256);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		if ((tmp8)){
			HX_STACK_LINE(117)
			this->checkScrolls();
			HX_STACK_LINE(118)
			::haxe::ui::toolkit::text::ITextDisplay tmp9 = this->_textDisplay;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			::openfl::_legacy::display::DisplayObject tmp10 = tmp9->get_display();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp11 = this->get_layout();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(118)
			Float tmp12 = tmp11->get_innerWidth();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			tmp10->set_width(tmp12);
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::text::ITextDisplay tmp13 = this->_textDisplay;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(119)
			::openfl::_legacy::display::DisplayObject tmp14 = tmp13->get_display();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp15 = this->get_layout();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(119)
			Float tmp16 = tmp15->get_innerHeight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(119)
			tmp14->set_height(tmp16);
		}
		HX_STACK_LINE(121)
		this->_invalidating = false;
	}
return null();
}


bool TextInput_obj::set_disabled( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_disabled",0xddadf680,"haxe.ui.toolkit.controls.TextInput.set_disabled","haxe/ui/toolkit/controls/TextInput.hx",124,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(125)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	this->super::set_disabled(tmp);
	HX_STACK_LINE(126)
	bool tmp1 = (value == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	if ((tmp1)){
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		tmp2->set_interactive(false);
	}
	else{
		HX_STACK_LINE(129)
		::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		tmp2->set_interactive(true);
	}
	HX_STACK_LINE(131)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	return tmp2;
}


Void TextInput_obj::_onTextChange( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onTextChange",0xb5803f74,"haxe.ui.toolkit.controls.TextInput._onTextChange","haxe/ui/toolkit/controls/TextInput.hx",137,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(138)
		this->checkScrolls();
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::controls::Text tmp = this->_textPlaceHolder;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		if ((tmp1)){
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::controls::Text tmp2 = this->_textPlaceHolder;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			::String tmp3 = this->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			int tmp4 = tmp3.length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			tmp2->set_visible(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onTextChange,(void))

Void TextInput_obj::_onTextScroll( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onTextScroll",0x45728611,"haxe.ui.toolkit.controls.TextInput._onTextScroll","haxe/ui/toolkit/controls/TextInput.hx",145,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(145)
		this->checkScrolls();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onTextScroll,(void))

Void TextInput_obj::_onVScrollChange( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onVScrollChange",0xd44661dc,"haxe.ui.toolkit.controls.TextInput._onVScrollChange","haxe/ui/toolkit/controls/TextInput.hx",148,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
		HX_STACK_LINE(149)
		::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(152)
		::haxe::ui::toolkit::controls::VScroll tmp3 = this->_vscroll;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		Float tmp4 = tmp3->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(152)
		tf->set_scrollV(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onVScrollChange,(void))

Void TextInput_obj::_onHScrollChange( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onHScrollChange",0x03bf84ce,"haxe.ui.toolkit.controls.TextInput._onHScrollChange","haxe/ui/toolkit/controls/TextInput.hx",156,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(157)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(157)
		tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
		HX_STACK_LINE(157)
		::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(159)
		::haxe::ui::toolkit::controls::HScroll tmp3 = this->_hscroll;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(159)
		Float tmp4 = tmp3->get_pos();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(159)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(159)
		tf->set_scrollH(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onHScrollChange,(void))

::String TextInput_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_text",0xb87e563d,"haxe.ui.toolkit.controls.TextInput.get_text","haxe/ui/toolkit/controls/TextInput.hx",166,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	return tmp1;
}


::String TextInput_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_text",0x66dbafb1,"haxe.ui.toolkit.controls.TextInput.set_text","haxe/ui/toolkit/controls/TextInput.hx",170,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(171)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	::String tmp1 = this->super::set_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(171)
	value = tmp1;
	HX_STACK_LINE(172)
	::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(173)
	::haxe::ui::toolkit::controls::Text tmp4 = this->_textPlaceHolder;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(173)
	if ((tmp5)){
		HX_STACK_LINE(174)
		::haxe::ui::toolkit::controls::Text tmp6 = this->_textPlaceHolder;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		bool tmp7 = (value.length == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(174)
		tmp6->set_visible(tmp7);
	}
	HX_STACK_LINE(177)
	::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(177)
	return tmp6;
}


Void TextInput_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","applyStyle",0xfbcdbeaa,"haxe.ui.toolkit.controls.TextInput.applyStyle","haxe/ui/toolkit/controls/TextInput.hx",183,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		this->super::applyStyle();
		HX_STACK_LINE(187)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(188)
			::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(188)
			::haxe::ui::toolkit::style::Style tmp3 = this->_baseStyle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			tmp2->set_style(tmp3);
		}
	}
return null();
}


bool TextInput_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_multiline",0x6be09f5d,"haxe.ui.toolkit.controls.TextInput.get_multiline","haxe/ui/toolkit/controls/TextInput.hx",236,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	bool tmp1 = tmp->get_multiline();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_multiline,return )

bool TextInput_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_multiline",0xb0e68169,"haxe.ui.toolkit.controls.TextInput.set_multiline","haxe/ui/toolkit/controls/TextInput.hx",240,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(241)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(241)
	tmp->set_wrapLines(tmp1);
	HX_STACK_LINE(242)
	::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(242)
	tmp2->set_multiline(tmp3);
	HX_STACK_LINE(243)
	bool tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(243)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_multiline,return )

int TextInput_obj::get_selectionBeginIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_selectionBeginIndex",0xd12c3805,"haxe.ui.toolkit.controls.TextInput.get_selectionBeginIndex","haxe/ui/toolkit/controls/TextInput.hx",246,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(247)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
	HX_STACK_LINE(247)
	::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(248)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(252)
	int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(252)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_selectionBeginIndex,return )

int TextInput_obj::get_selectionEndIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_selectionEndIndex",0x405aca13,"haxe.ui.toolkit.controls.TextInput.get_selectionEndIndex","haxe/ui/toolkit/controls/TextInput.hx",255,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(256)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(256)
	::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(256)
	::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(256)
	tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
	HX_STACK_LINE(256)
	::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(257)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(261)
	int tmp3 = n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(261)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_selectionEndIndex,return )

::openfl::_legacy::text::TextFormat TextInput_obj::get_selectedTextFormat( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_selectedTextFormat",0x9412038f,"haxe.ui.toolkit.controls.TextInput.get_selectedTextFormat","haxe/ui/toolkit/controls/TextInput.hx",264,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(265)
	::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(265)
	tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
	HX_STACK_LINE(265)
	::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(266)
	int tmp3 = this->get_selectionBeginIndex();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(266)
	int tmp5 = this->get_selectionEndIndex();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(266)
	::openfl::_legacy::text::TextFormat tmp6 = tf->getTextFormat(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(266)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_selectedTextFormat,return )

bool TextInput_obj::get_wrapLines( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_wrapLines",0xe6472445,"haxe.ui.toolkit.controls.TextInput.get_wrapLines","haxe/ui/toolkit/controls/TextInput.hx",269,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(270)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	bool tmp1 = tmp->get_wrapLines();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_wrapLines,return )

bool TextInput_obj::set_wrapLines( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_wrapLines",0x2b4d0651,"haxe.ui.toolkit.controls.TextInput.set_wrapLines","haxe/ui/toolkit/controls/TextInput.hx",273,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(274)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	tmp->set_wrapLines(tmp1);
	HX_STACK_LINE(275)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_wrapLines,return )

bool TextInput_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_displayAsPassword",0xdfaf877f,"haxe.ui.toolkit.controls.TextInput.get_displayAsPassword","haxe/ui/toolkit/controls/TextInput.hx",278,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	bool tmp1 = tmp->get_displayAsPassword();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_displayAsPassword,return )

bool TextInput_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_displayAsPassword",0x33b8558b,"haxe.ui.toolkit.controls.TextInput.set_displayAsPassword","haxe/ui/toolkit/controls/TextInput.hx",282,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(283)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	tmp->set_displayAsPassword(tmp1);
	HX_STACK_LINE(284)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(284)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_displayAsPassword,return )

::String TextInput_obj::get_placeholderText( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_placeholderText",0x9c646230,"haxe.ui.toolkit.controls.TextInput.get_placeholderText","haxe/ui/toolkit/controls/TextInput.hx",287,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	::haxe::ui::toolkit::controls::Text tmp = this->_textPlaceHolder;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	if ((tmp1)){
		HX_STACK_LINE(289)
		return null();
	}
	HX_STACK_LINE(291)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_textPlaceHolder;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(291)
	::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(291)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_placeholderText,return )

::String TextInput_obj::set_placeholderText( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_placeholderText",0xd901553c,"haxe.ui.toolkit.controls.TextInput.set_placeholderText","haxe/ui/toolkit/controls/TextInput.hx",294,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(295)
	::haxe::ui::toolkit::controls::Text tmp = this->_textPlaceHolder;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	if ((tmp1)){
		HX_STACK_LINE(296)
		::haxe::ui::toolkit::controls::Text tmp2 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		this->_textPlaceHolder = tmp2;
		HX_STACK_LINE(297)
		::haxe::ui::toolkit::controls::Text tmp3 = this->_textPlaceHolder;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(297)
		tmp3->set_autoSize(false);
		HX_STACK_LINE(298)
		::haxe::ui::toolkit::controls::Text tmp4 = this->_textPlaceHolder;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		tmp4->set_id(HX_HCSTRING("placeholder","\x73","\x73","\xf3","\xba"));
	}
	HX_STACK_LINE(300)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_textPlaceHolder;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(300)
	::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(300)
	tmp2->set_text(tmp3);
	HX_STACK_LINE(301)
	bool tmp4 = this->_ready;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(301)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(301)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(301)
	if ((tmp5)){
		HX_STACK_LINE(301)
		::haxe::ui::toolkit::controls::Text tmp7 = this->_textPlaceHolder;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(301)
		::haxe::ui::toolkit::controls::Text tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(301)
		::haxe::ui::toolkit::controls::Text tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(301)
		::haxe::ui::toolkit::controls::Text tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(301)
		::haxe::ui::toolkit::controls::Text tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(301)
		bool tmp12 = this->contains(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(301)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(301)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(301)
		tmp6 = (tmp14 == false);
	}
	else{
		HX_STACK_LINE(301)
		tmp6 = false;
	}
	HX_STACK_LINE(301)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(301)
	if ((tmp6)){
		HX_STACK_LINE(301)
		tmp7 = (value != null());
	}
	else{
		HX_STACK_LINE(301)
		tmp7 = false;
	}
	HX_STACK_LINE(301)
	if ((tmp7)){
		HX_STACK_LINE(302)
		::haxe::ui::toolkit::controls::Text tmp8 = this->_textPlaceHolder;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(302)
		this->addChild(tmp8);
	}
	HX_STACK_LINE(304)
	bool tmp8 = (value == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(304)
	if ((tmp8)){
		HX_STACK_LINE(305)
		::haxe::ui::toolkit::controls::Text tmp9 = this->_textPlaceHolder;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(305)
		bool tmp10 = this->contains(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(305)
		if ((tmp10)){
			HX_STACK_LINE(306)
			::haxe::ui::toolkit::controls::Text tmp11 = this->_textPlaceHolder;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(306)
			this->removeChild(tmp11,null());
		}
		HX_STACK_LINE(308)
		this->_textPlaceHolder = null();
	}
	HX_STACK_LINE(310)
	::haxe::ui::toolkit::controls::Text tmp9 = this->_textPlaceHolder;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(310)
	bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(310)
	if ((tmp10)){
		HX_STACK_LINE(311)
		::haxe::ui::toolkit::controls::Text tmp11 = this->_textPlaceHolder;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(311)
		::String tmp12 = this->get_text();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(311)
		int tmp13 = tmp12.length;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(311)
		bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(311)
		tmp11->set_visible(tmp14);
	}
	HX_STACK_LINE(313)
	::String tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(313)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_placeholderText,return )

::String TextInput_obj::get_textAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_textAlign",0x884db348,"haxe.ui.toolkit.controls.TextInput.get_textAlign","haxe/ui/toolkit/controls/TextInput.hx",316,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(317)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(317)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(317)
	if ((tmp1)){
		HX_STACK_LINE(318)
		return null();
	}
	HX_STACK_LINE(320)
	::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	::String tmp3 = tmp2->get_textAlign();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(320)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_textAlign,return )

::String TextInput_obj::set_textAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_textAlign",0xcd539554,"haxe.ui.toolkit.controls.TextInput.set_textAlign","haxe/ui/toolkit/controls/TextInput.hx",323,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(324)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	if ((tmp1)){
		HX_STACK_LINE(325)
		::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(325)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(325)
		tmp2->set_textAlign(tmp3);
	}
	HX_STACK_LINE(327)
	::haxe::ui::toolkit::controls::Text tmp2 = this->_textPlaceHolder;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	if ((tmp3)){
		HX_STACK_LINE(328)
		::haxe::ui::toolkit::controls::Text tmp4 = this->_textPlaceHolder;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(328)
		::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(328)
		tmp4->set_textAlign(tmp5);
	}
	HX_STACK_LINE(330)
	::String tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(330)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_textAlign,return )

int TextInput_obj::get_maxChars( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_maxChars",0x3c818129,"haxe.ui.toolkit.controls.TextInput.get_maxChars","haxe/ui/toolkit/controls/TextInput.hx",333,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(334)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(334)
	int tmp1 = tmp->get_maxChars();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(334)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_maxChars,return )

int TextInput_obj::set_maxChars( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_maxChars",0x517aa49d,"haxe.ui.toolkit.controls.TextInput.set_maxChars","haxe/ui/toolkit/controls/TextInput.hx",337,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(338)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(338)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(338)
	int tmp2 = tmp->set_maxChars(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(338)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_maxChars,return )

::String TextInput_obj::get_restrictChars( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_restrictChars",0xc231cc71,"haxe.ui.toolkit.controls.TextInput.get_restrictChars","haxe/ui/toolkit/controls/TextInput.hx",341,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(342)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	::String tmp1 = tmp->get_restrictChars();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_restrictChars,return )

::String TextInput_obj::set_restrictChars( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_restrictChars",0xe59fa47d,"haxe.ui.toolkit.controls.TextInput.set_restrictChars","haxe/ui/toolkit/controls/TextInput.hx",345,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(346)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(346)
	::String tmp2 = tmp->set_restrictChars(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(346)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_restrictChars,return )

Float TextInput_obj::get_vscrollPos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_vscrollPos",0x277e59e1,"haxe.ui.toolkit.controls.TextInput.get_vscrollPos","haxe/ui/toolkit/controls/TextInput.hx",353,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(354)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	if ((tmp1)){
		HX_STACK_LINE(355)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		Float tmp3 = tmp2->get_pos();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(355)
		return tmp3;
	}
	HX_STACK_LINE(357)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollPos,return )

Float TextInput_obj::set_vscrollPos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_vscrollPos",0x479e4255,"haxe.ui.toolkit.controls.TextInput.set_vscrollPos","haxe/ui/toolkit/controls/TextInput.hx",360,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(361)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(361)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(361)
	if ((tmp1)){
		HX_STACK_LINE(362)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(362)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(362)
		tmp2->set_pos(tmp3);
	}
	HX_STACK_LINE(364)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(364)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_vscrollPos,return )

Float TextInput_obj::get_vscrollMin( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_vscrollMin",0x277c0ddf,"haxe.ui.toolkit.controls.TextInput.get_vscrollMin","haxe/ui/toolkit/controls/TextInput.hx",367,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(368)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	if ((tmp1)){
		HX_STACK_LINE(369)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(369)
		Float tmp3 = tmp2->get_min();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(369)
		return tmp3;
	}
	HX_STACK_LINE(371)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollMin,return )

Float TextInput_obj::get_vscrollMax( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_vscrollMax",0x277c06f1,"haxe.ui.toolkit.controls.TextInput.get_vscrollMax","haxe/ui/toolkit/controls/TextInput.hx",374,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(375)
	::haxe::ui::toolkit::controls::VScroll tmp = this->_vscroll;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(375)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(375)
	if ((tmp1)){
		HX_STACK_LINE(376)
		::haxe::ui::toolkit::controls::VScroll tmp2 = this->_vscroll;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(376)
		Float tmp3 = tmp2->get_max();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		return tmp3;
	}
	HX_STACK_LINE(378)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollMax,return )

Void TextInput_obj::replaceSelectedText( ::String s){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","replaceSelectedText",0x987cf055,"haxe.ui.toolkit.controls.TextInput.replaceSelectedText","haxe/ui/toolkit/controls/TextInput.hx",387,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(388)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
		HX_STACK_LINE(388)
		::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,replaceSelectedText,(void))

Void TextInput_obj::focus( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","focus",0x6d1d9771,"haxe.ui.toolkit.controls.TextInput.focus","haxe/ui/toolkit/controls/TextInput.hx",394,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(395)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(395)
		::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(395)
		::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(395)
		tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
		HX_STACK_LINE(395)
		::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(396)
		::openfl::_legacy::display::Stage tmp3 = tf->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(396)
		::openfl::_legacy::text::TextField tmp4 = tf;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(396)
		tmp3->set_focus(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,focus,(void))

Void TextInput_obj::checkScrolls( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","checkScrolls",0xb5f5c965,"haxe.ui.toolkit.controls.TextInput.checkScrolls","haxe/ui/toolkit/controls/TextInput.hx",399,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(400)
		bool tmp = this->get_multiline();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(400)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(400)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(400)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(400)
		if ((tmp2)){
			HX_STACK_LINE(400)
			bool tmp4 = this->get_ready();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(400)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(400)
			tmp3 = (tmp5 == false);
		}
		else{
			HX_STACK_LINE(400)
			tmp3 = true;
		}
		HX_STACK_LINE(400)
		if ((tmp3)){
			HX_STACK_LINE(401)
			return null();
		}
		HX_STACK_LINE(405)
		::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(405)
		::openfl::_legacy::display::DisplayObject tmp5 = tmp4->get_display();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(405)
		::openfl::_legacy::text::TextField tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(405)
		tmp6 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp5);
		HX_STACK_LINE(405)
		::openfl::_legacy::text::TextField tf = tmp6;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(406)
		int tmp7 = tf->get_bottomScrollV();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(406)
		int tmp8 = tf->get_scrollV();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(406)
		int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(406)
		int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(406)
		int visibleLines = tmp10;		HX_STACK_VAR(visibleLines,"visibleLines");
		HX_STACK_LINE(407)
		int tmp11 = tf->get_maxScrollV();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(407)
		bool tmp12 = (tmp11 > (int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(407)
		if ((tmp12)){
			HX_STACK_LINE(408)
			::haxe::ui::toolkit::controls::VScroll tmp13 = this->_vscroll;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(408)
			bool tmp14 = (tmp13 == null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(408)
			if ((tmp14)){
				HX_STACK_LINE(409)
				::haxe::ui::toolkit::controls::VScroll tmp15 = ::haxe::ui::toolkit::controls::VScroll_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(409)
				this->_vscroll = tmp15;
				HX_STACK_LINE(410)
				::haxe::ui::toolkit::controls::VScroll tmp16 = this->_vscroll;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(410)
				tmp16->set_percentHeight((int)100);
				HX_STACK_LINE(411)
				::haxe::ui::toolkit::controls::VScroll tmp17 = this->_vscroll;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(411)
				::String tmp18 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(411)
				Dynamic tmp19 = this->_onVScrollChange_dyn();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(411)
				tmp17->addEventListener(tmp18,tmp19,null(),null(),null());
				HX_STACK_LINE(412)
				::haxe::ui::toolkit::controls::VScroll tmp20 = this->_vscroll;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(412)
				this->addChild(tmp20);
			}
			HX_STACK_LINE(414)
			::haxe::ui::toolkit::controls::VScroll tmp15 = this->_vscroll;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(414)
			int tmp16 = visibleLines;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(414)
			int tmp17 = tf->get_numLines();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(414)
			Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(414)
			int tmp19 = tf->get_maxScrollV();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(414)
			int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(414)
			Float tmp21 = (tmp18 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(414)
			tmp15->set_pageSize(tmp21);
			HX_STACK_LINE(415)
			::haxe::ui::toolkit::controls::VScroll tmp22 = this->_vscroll;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(415)
			tmp22->set_min((int)1);
			HX_STACK_LINE(416)
			::haxe::ui::toolkit::controls::VScroll tmp23 = this->_vscroll;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(416)
			int tmp24 = tf->get_maxScrollV();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(416)
			tmp23->set_max(tmp24);
			HX_STACK_LINE(417)
			::haxe::ui::toolkit::controls::VScroll tmp25 = this->_vscroll;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(417)
			tmp25->set_incrementSize((int)1);
			HX_STACK_LINE(418)
			::haxe::ui::toolkit::controls::VScroll tmp26 = this->_vscroll;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(418)
			int tmp27 = tf->get_scrollV();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(418)
			tmp26->set_pos(tmp27);
			HX_STACK_LINE(419)
			::haxe::ui::toolkit::controls::VScroll tmp28 = this->_vscroll;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(419)
			tmp28->set_visible(true);
		}
		else{
			HX_STACK_LINE(421)
			::haxe::ui::toolkit::controls::VScroll tmp13 = this->_vscroll;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(421)
			bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(421)
			if ((tmp14)){
				HX_STACK_LINE(422)
				::haxe::ui::toolkit::controls::VScroll tmp15 = this->_vscroll;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(422)
				tmp15->set_visible(false);
				HX_STACK_LINE(423)
				::haxe::ui::toolkit::controls::VScroll tmp16 = this->_vscroll;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(423)
				tmp16->set_pos((int)0);
			}
		}
		HX_STACK_LINE(427)
		int tmp13 = tf->get_maxScrollH();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(427)
		bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(427)
		if ((tmp14)){
			HX_STACK_LINE(428)
			::haxe::ui::toolkit::controls::HScroll tmp15 = this->_hscroll;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(428)
			bool tmp16 = (tmp15 == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(428)
			if ((tmp16)){
				HX_STACK_LINE(429)
				::haxe::ui::toolkit::controls::HScroll tmp17 = ::haxe::ui::toolkit::controls::HScroll_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(429)
				this->_hscroll = tmp17;
				HX_STACK_LINE(430)
				::haxe::ui::toolkit::controls::HScroll tmp18 = this->_hscroll;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(430)
				tmp18->set_percentWidth((int)100);
				HX_STACK_LINE(431)
				::haxe::ui::toolkit::controls::HScroll tmp19 = this->_hscroll;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(431)
				::String tmp20 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(431)
				Dynamic tmp21 = this->_onHScrollChange_dyn();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(431)
				tmp19->addEventListener(tmp20,tmp21,null(),null(),null());
				HX_STACK_LINE(432)
				::haxe::ui::toolkit::controls::HScroll tmp22 = this->_hscroll;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(432)
				this->addChild(tmp22);
			}
			HX_STACK_LINE(434)
			::haxe::ui::toolkit::controls::HScroll tmp17 = this->_hscroll;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(434)
			Float tmp18 = tf->get_width();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(434)
			int tmp19 = tf->get_maxScrollH();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(434)
			Float tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(434)
			Float tmp21 = tf->get_width();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(434)
			Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(434)
			int tmp23 = tf->get_maxScrollH();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(434)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(434)
			tmp17->set_pageSize(tmp24);
			HX_STACK_LINE(435)
			::haxe::ui::toolkit::controls::HScroll tmp25 = this->_hscroll;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(435)
			tmp25->set_min((int)0);
			HX_STACK_LINE(436)
			::haxe::ui::toolkit::controls::HScroll tmp26 = this->_hscroll;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(436)
			int tmp27 = tf->get_maxScrollH();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(436)
			tmp26->set_max(tmp27);
			HX_STACK_LINE(437)
			::haxe::ui::toolkit::controls::HScroll tmp28 = this->_hscroll;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(437)
			int tmp29 = tf->get_scrollH();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(437)
			tmp28->set_pos(tmp29);
			HX_STACK_LINE(438)
			::haxe::ui::toolkit::controls::HScroll tmp30 = this->_hscroll;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(438)
			tmp30->set_visible(true);
		}
		else{
			HX_STACK_LINE(440)
			::haxe::ui::toolkit::controls::HScroll tmp15 = this->_hscroll;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(440)
			bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(440)
			if ((tmp16)){
				HX_STACK_LINE(441)
				::haxe::ui::toolkit::controls::HScroll tmp17 = this->_hscroll;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(441)
				tmp17->set_visible(false);
				HX_STACK_LINE(442)
				::haxe::ui::toolkit::controls::HScroll tmp18 = this->_hscroll;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(442)
				tmp18->set_pos((int)0);
			}
		}
		HX_STACK_LINE(446)
		this->invalidate((int)1,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,checkScrolls,(void))

::haxe::ui::toolkit::core::DisplayObject TextInput_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","clone",0xb0f74af6,"haxe.ui.toolkit.controls.TextInput.clone","src/haxe/ui/toolkit/controls/TextInput.hx",1,0x56d65a6c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent tmp = hx::TCast< ::haxe::ui::toolkit::core::StateComponent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TextInput c = ((::haxe::ui::toolkit::controls::TextInput)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool tmp1 = this->get_multiline();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_multiline(tmp1);
	HX_STACK_LINE(4)
	bool tmp2 = this->get_wrapLines();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_wrapLines(tmp2);
	HX_STACK_LINE(5)
	bool tmp3 = this->get_displayAsPassword();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_displayAsPassword(tmp3);
	HX_STACK_LINE(6)
	::String tmp4 = this->get_placeholderText();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	c->set_placeholderText(tmp4);
	HX_STACK_LINE(7)
	::String tmp5 = this->get_textAlign();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(7)
	c->set_textAlign(tmp5);
	HX_STACK_LINE(8)
	int tmp6 = this->get_maxChars();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(8)
	c->set_maxChars(tmp6);
	HX_STACK_LINE(9)
	::String tmp7 = this->get_restrictChars();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(9)
	c->set_restrictChars(tmp7);
	HX_STACK_LINE(10)
	::haxe::ui::toolkit::controls::TextInput tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(10)
	return tmp8;
}


::haxe::ui::toolkit::core::DisplayObject TextInput_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","self",0xaaeb0a13,"haxe.ui.toolkit.controls.TextInput.self","src/haxe/ui/toolkit/controls/TextInput.hx",1,0x56d65a6c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TextInput tmp = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



TextInput_obj::TextInput_obj()
{
}

void TextInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextInput);
	HX_MARK_MEMBER_NAME(_textDisplay,"_textDisplay");
	HX_MARK_MEMBER_NAME(_textPlaceHolder,"_textPlaceHolder");
	HX_MARK_MEMBER_NAME(_vscroll,"_vscroll");
	HX_MARK_MEMBER_NAME(_hscroll,"_hscroll");
	HX_MARK_MEMBER_NAME(_lastKeyCode,"_lastKeyCode");
	HX_MARK_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_MARK_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_MARK_MEMBER_NAME(selectedTextFormat,"selectedTextFormat");
	HX_MARK_MEMBER_NAME(vscrollMin,"vscrollMin");
	HX_MARK_MEMBER_NAME(vscrollMax,"vscrollMax");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textDisplay,"_textDisplay");
	HX_VISIT_MEMBER_NAME(_textPlaceHolder,"_textPlaceHolder");
	HX_VISIT_MEMBER_NAME(_vscroll,"_vscroll");
	HX_VISIT_MEMBER_NAME(_hscroll,"_hscroll");
	HX_VISIT_MEMBER_NAME(_lastKeyCode,"_lastKeyCode");
	HX_VISIT_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_VISIT_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_VISIT_MEMBER_NAME(selectedTextFormat,"selectedTextFormat");
	HX_VISIT_MEMBER_NAME(vscrollMin,"vscrollMin");
	HX_VISIT_MEMBER_NAME(vscrollMax,"vscrollMax");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vscroll") ) { return _vscroll; }
		if (HX_FIELD_EQ(inName,"_hscroll") ) { return _hscroll; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return get_maxChars(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { if (inCallProp == hx::paccAlways) return get_wrapLines(); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return get_textAlign(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == hx::paccAlways) return get_vscrollPos(); }
		if (HX_FIELD_EQ(inName,"vscrollMin") ) { return inCallProp == hx::paccAlways ? get_vscrollMin() : vscrollMin; }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { return inCallProp == hx::paccAlways ? get_vscrollMax() : vscrollMax; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { return _textDisplay; }
		if (HX_FIELD_EQ(inName,"_lastKeyCode") ) { return _lastKeyCode; }
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return set_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"checkScrolls") ) { return checkScrolls_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTextChange") ) { return _onTextChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTextScroll") ) { return _onTextScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == hx::paccAlways) return get_restrictChars(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wrapLines") ) { return get_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapLines") ) { return set_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return set_textAlign_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_vscrollPos") ) { return get_vscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollPos") ) { return set_vscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollMin") ) { return get_vscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollMax") ) { return get_vscrollMax_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"placeholderText") ) { if (inCallProp == hx::paccAlways) return get_placeholderText(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_textPlaceHolder") ) { return _textPlaceHolder; }
		if (HX_FIELD_EQ(inName,"_onVScrollChange") ) { return _onVScrollChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onHScrollChange") ) { return _onHScrollChange_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { return inCallProp == hx::paccAlways ? get_selectionEndIndex() : selectionEndIndex; }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"get_restrictChars") ) { return get_restrictChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restrictChars") ) { return set_restrictChars_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"selectedTextFormat") ) { return inCallProp == hx::paccAlways ? get_selectedTextFormat() : selectedTextFormat; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { return inCallProp == hx::paccAlways ? get_selectionBeginIndex() : selectionBeginIndex; }
		if (HX_FIELD_EQ(inName,"get_placeholderText") ) { return get_placeholderText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_placeholderText") ) { return set_placeholderText_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceSelectedText") ) { return replaceSelectedText_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_onTextDisplayKeyDown") ) { return _onTextDisplayKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return get_selectionEndIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_selectedTextFormat") ) { return get_selectedTextFormat_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return get_selectionBeginIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_vscroll") ) { _vscroll=inValue.Cast< ::haxe::ui::toolkit::controls::VScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hscroll") ) { _hscroll=inValue.Cast< ::haxe::ui::toolkit::controls::HScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return set_maxChars(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { if (inCallProp == hx::paccAlways) return set_wrapLines(inValue); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return set_textAlign(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { if (inCallProp == hx::paccAlways) return set_vscrollPos(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollMin") ) { vscrollMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { vscrollMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { _textDisplay=inValue.Cast< ::haxe::ui::toolkit::text::ITextDisplay >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastKeyCode") ) { _lastKeyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == hx::paccAlways) return set_restrictChars(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"placeholderText") ) { if (inCallProp == hx::paccAlways) return set_placeholderText(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_textPlaceHolder") ) { _textPlaceHolder=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { selectionEndIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return set_displayAsPassword(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"selectedTextFormat") ) { selectedTextFormat=inValue.Cast< ::openfl::_legacy::text::TextFormat >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { selectionBeginIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_textDisplay","\x16","\xd3","\xd3","\xfc"));
	outFields->push(HX_HCSTRING("_textPlaceHolder","\x67","\x8a","\xf8","\x8b"));
	outFields->push(HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac"));
	outFields->push(HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65"));
	outFields->push(HX_HCSTRING("_lastKeyCode","\xb7","\x84","\x53","\xb6"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"));
	outFields->push(HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"));
	outFields->push(HX_HCSTRING("selectedTextFormat","\xff","\xdd","\x85","\x13"));
	outFields->push(HX_HCSTRING("wrapLines","\xd5","\x57","\x78","\x18"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("placeholderText","\xc0","\xa1","\x10","\x34"));
	outFields->push(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("restrictChars","\x01","\x08","\x2c","\xba"));
	outFields->push(HX_HCSTRING("vscrollPos","\x51","\x44","\x5a","\xe0"));
	outFields->push(HX_HCSTRING("vscrollMin","\x4f","\xf8","\x57","\xe0"));
	outFields->push(HX_HCSTRING("vscrollMax","\x61","\xf1","\x57","\xe0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::text::ITextDisplay*/ ,(int)offsetof(TextInput_obj,_textDisplay),HX_HCSTRING("_textDisplay","\x16","\xd3","\xd3","\xfc")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(TextInput_obj,_textPlaceHolder),HX_HCSTRING("_textPlaceHolder","\x67","\x8a","\xf8","\x8b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::VScroll*/ ,(int)offsetof(TextInput_obj,_vscroll),HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::HScroll*/ ,(int)offsetof(TextInput_obj,_hscroll),HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65")},
	{hx::fsInt,(int)offsetof(TextInput_obj,_lastKeyCode),HX_HCSTRING("_lastKeyCode","\xb7","\x84","\x53","\xb6")},
	{hx::fsInt,(int)offsetof(TextInput_obj,selectionBeginIndex),HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7")},
	{hx::fsInt,(int)offsetof(TextInput_obj,selectionEndIndex),HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b")},
	{hx::fsObject /*::openfl::_legacy::text::TextFormat*/ ,(int)offsetof(TextInput_obj,selectedTextFormat),HX_HCSTRING("selectedTextFormat","\xff","\xdd","\x85","\x13")},
	{hx::fsFloat,(int)offsetof(TextInput_obj,vscrollMin),HX_HCSTRING("vscrollMin","\x4f","\xf8","\x57","\xe0")},
	{hx::fsFloat,(int)offsetof(TextInput_obj,vscrollMax),HX_HCSTRING("vscrollMax","\x61","\xf1","\x57","\xe0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_textDisplay","\x16","\xd3","\xd3","\xfc"),
	HX_HCSTRING("_textPlaceHolder","\x67","\x8a","\xf8","\x8b"),
	HX_HCSTRING("_vscroll","\x84","\xee","\x01","\xac"),
	HX_HCSTRING("_hscroll","\xf6","\x6f","\xd5","\x65"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("_lastKeyCode","\xb7","\x84","\x53","\xb6"),
	HX_HCSTRING("_onTextDisplayKeyDown","\xea","\xab","\x0f","\x4f"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("set_disabled","\xf9","\x18","\x17","\x46"),
	HX_HCSTRING("_onTextChange","\xdb","\x46","\x15","\xa9"),
	HX_HCSTRING("_onTextScroll","\x78","\x8d","\x07","\x39"),
	HX_HCSTRING("_onVScrollChange","\xd5","\xb4","\x64","\x70"),
	HX_HCSTRING("_onHScrollChange","\xc7","\xd7","\xdd","\x9f"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("selectionBeginIndex","\x95","\x7f","\x17","\xd7"),
	HX_HCSTRING("selectionEndIndex","\xa3","\x0d","\x42","\x4b"),
	HX_HCSTRING("selectedTextFormat","\xff","\xdd","\x85","\x13"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_selectionBeginIndex","\x2c","\x26","\x6d","\xdf"),
	HX_HCSTRING("get_selectionEndIndex","\x7a","\x10","\xf0","\xc9"),
	HX_HCSTRING("get_selectedTextFormat","\x48","\x57","\x1a","\x6d"),
	HX_HCSTRING("get_wrapLines","\xac","\x2b","\xdc","\xd9"),
	HX_HCSTRING("set_wrapLines","\xb8","\x0d","\xe2","\x1e"),
	HX_HCSTRING("get_displayAsPassword","\xe6","\xcd","\x44","\x69"),
	HX_HCSTRING("set_displayAsPassword","\xf2","\x9b","\x4d","\xbd"),
	HX_HCSTRING("get_placeholderText","\xd7","\x70","\x1b","\xbf"),
	HX_HCSTRING("set_placeholderText","\xe3","\x63","\xb8","\xfb"),
	HX_HCSTRING("get_textAlign","\xaf","\xba","\xe2","\x7b"),
	HX_HCSTRING("set_textAlign","\xbb","\x9c","\xe8","\xc0"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("get_restrictChars","\x58","\x13","\x9c","\xc0"),
	HX_HCSTRING("set_restrictChars","\x64","\xeb","\x09","\xe4"),
	HX_HCSTRING("vscrollMin","\x4f","\xf8","\x57","\xe0"),
	HX_HCSTRING("vscrollMax","\x61","\xf1","\x57","\xe0"),
	HX_HCSTRING("get_vscrollPos","\x9a","\xcc","\x4f","\x56"),
	HX_HCSTRING("set_vscrollPos","\x0e","\xb5","\x6f","\x76"),
	HX_HCSTRING("get_vscrollMin","\x98","\x80","\x4d","\x56"),
	HX_HCSTRING("get_vscrollMax","\xaa","\x79","\x4d","\x56"),
	HX_HCSTRING("replaceSelectedText","\xfc","\xfe","\x33","\xbb"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("checkScrolls","\xde","\xeb","\x5e","\x1e"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextInput_obj::__mClass,"__mClass");
};

#endif

hx::Class TextInput_obj::__mClass;

void TextInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.TextInput","\x47","\x6f","\x38","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextInput_obj >;
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
