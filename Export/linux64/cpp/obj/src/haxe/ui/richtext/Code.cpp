#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_Code
#include <haxe/ui/richtext/Code.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext__Code_SyntaxHighlightRunner
#include <haxe/ui/richtext/_Code/SyntaxHighlightRunner.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_syntax_CodeSyntax
#include <haxe/ui/richtext/syntax/CodeSyntax.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller
#include <haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
namespace haxe{
namespace ui{
namespace richtext{

Void Code_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.richtext.Code","new",0x07e47db2,"haxe.ui.richtext.Code.new","haxe/ui/richtext/Code.hx",14,0x3e2126bd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->_async = false;
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->set_multiline(true);
	HX_STACK_LINE(21)
	this->set_wrapLines(false);
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
	HX_STACK_LINE(22)
	::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(26)
	::haxe::ui::richtext::syntax::CodeSyntax tmp3 = ::haxe::ui::richtext::syntax::CodeSyntax_obj::getSyntax(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(26)
	this->_syntax = tmp3;
}
;
	return null();
}

//Code_obj::~Code_obj() { }

Dynamic Code_obj::__CreateEmpty() { return  new Code_obj; }
hx::ObjectPtr< Code_obj > Code_obj::__new()
{  hx::ObjectPtr< Code_obj > _result_ = new Code_obj();
	_result_->__construct();
	return _result_;}

Dynamic Code_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Code_obj > _result_ = new Code_obj();
	_result_->__construct();
	return _result_;}

Void Code_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.Code","initialize",0x6072b23e,"haxe.ui.richtext.Code.initialize","haxe/ui/richtext/Code.hx",32,0x3e2126bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::initialize();
		HX_STACK_LINE(34)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		Dynamic tmp3 = this->_onCodeChange_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		tmp1->addEventListener(tmp2,tmp3,null(),null(),null());
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::openfl::_legacy::display::DisplayObject tmp5 = tmp4->get_display();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		::String tmp6 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		Dynamic tmp7 = this->_onCodeKeyDown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		tmp5->addEventListener(tmp6,tmp7,null(),null(),null());
		HX_STACK_LINE(37)
		this->applyRules();
	}
return null();
}


Void Code_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.Code","dispose",0x54133ef1,"haxe.ui.richtext.Code.dispose","haxe/ui/richtext/Code.hx",40,0x3e2126bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::String tmp2 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		Dynamic tmp3 = this->_onCodeChange_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		tmp1->removeEventListener(tmp2,tmp3,null());
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::text::ITextDisplay tmp4 = this->_textDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(42)
		::openfl::_legacy::display::DisplayObject tmp5 = tmp4->get_display();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		::String tmp6 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		Dynamic tmp7 = this->_onCodeKeyDown_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		tmp5->removeEventListener(tmp6,tmp7,null());
		HX_STACK_LINE(43)
		this->super::dispose();
	}
return null();
}


::String Code_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.richtext.Code","set_text",0x9031ab18,"haxe.ui.richtext.Code.set_text","haxe/ui/richtext/Code.hx",46,0x3e2126bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(47)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	if ((tmp)){
		HX_STACK_LINE(48)
		::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::String tmp2 = this->super::set_text(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		value = tmp2;
		HX_STACK_LINE(49)
		::String tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::String tmp4 = ::StringTools_obj::replace(tmp3,HX_HCSTRING("\t","\x09","\x00","\x00","\x00"),HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		value = tmp4;
		HX_STACK_LINE(50)
		::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		this->super::set_text(tmp5);
		HX_STACK_LINE(51)
		this->applyRules();
	}
	HX_STACK_LINE(53)
	::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	return tmp1;
}


::String Code_obj::get_syntax( ){
	HX_STACK_FRAME("haxe.ui.richtext.Code","get_syntax",0x53d3731a,"haxe.ui.richtext.Code.get_syntax","haxe/ui/richtext/Code.hx",67,0x3e2126bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::haxe::ui::richtext::syntax::CodeSyntax tmp = this->_syntax;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	::String tmp1 = tmp->get_identifier();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Code_obj,get_syntax,return )

::String Code_obj::set_syntax( ::String value){
	HX_STACK_FRAME("haxe.ui.richtext.Code","set_syntax",0x5751118e,"haxe.ui.richtext.Code.set_syntax","haxe/ui/richtext/Code.hx",71,0x3e2126bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(72)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::haxe::ui::richtext::syntax::CodeSyntax tmp1 = ::haxe::ui::richtext::syntax::CodeSyntax_obj::getSyntax(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	this->_syntax = tmp1;
	HX_STACK_LINE(73)
	this->applyRules();
	HX_STACK_LINE(74)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Code_obj,set_syntax,return )

bool Code_obj::get_async( ){
	HX_STACK_FRAME("haxe.ui.richtext.Code","get_async",0xd097d265,"haxe.ui.richtext.Code.get_async","haxe/ui/richtext/Code.hx",77,0x3e2126bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	bool tmp = this->_async;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Code_obj,get_async,return )

bool Code_obj::set_async( bool value){
	HX_STACK_FRAME("haxe.ui.richtext.Code","set_async",0xb3e8be71,"haxe.ui.richtext.Code.set_async","haxe/ui/richtext/Code.hx",81,0x3e2126bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(82)
	this->_async = value;
	HX_STACK_LINE(83)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Code_obj,set_async,return )

Void Code_obj::_onCodeChange( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.richtext.Code","_onCodeChange",0xeb27d32d,"haxe.ui.richtext.Code._onCodeChange","haxe/ui/richtext/Code.hx",90,0x3e2126bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(90)
		this->applyRules();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Code_obj,_onCodeChange,(void))

Void Code_obj::_onCodeKeyDown( ::openfl::_legacy::events::KeyboardEvent event){
{
		HX_STACK_FRAME("haxe.ui.richtext.Code","_onCodeKeyDown",0xa72bad44,"haxe.ui.richtext.Code._onCodeKeyDown","haxe/ui/richtext/Code.hx",93,0x3e2126bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(94)
		bool tmp = (event->keyCode == (int)9);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(94)
			tmp2 = (event->ctrlKey == false);
		}
		else{
			HX_STACK_LINE(94)
			tmp2 = false;
		}
		HX_STACK_LINE(94)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		if ((tmp3)){
			HX_STACK_LINE(94)
			tmp4 = (event->altKey == false);
		}
		else{
			HX_STACK_LINE(94)
			tmp4 = false;
		}
		HX_STACK_LINE(94)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		if ((tmp4)){
			HX_STACK_LINE(94)
			tmp5 = (event->shiftKey == false);
		}
		else{
			HX_STACK_LINE(94)
			tmp5 = false;
		}
		HX_STACK_LINE(94)
		if ((tmp5)){
			HX_STACK_LINE(95)
			this->replaceSelectedText(HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
			HX_STACK_LINE(96)
			this->applyRules();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Code_obj,_onCodeKeyDown,(void))

Void Code_obj::applyRules( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.Code","applyRules",0x105f6097,"haxe.ui.richtext.Code.applyRules","haxe/ui/richtext/Code.hx",105,0x3e2126bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
		HX_STACK_LINE(106)
		::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(107)
		bool tmp3 = this->_async;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		bool tmp4 = (tmp3 == false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		if ((tmp4)){
			HX_STACK_LINE(108)
			::openfl::_legacy::text::TextField tmp5 = tf;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			::haxe::ui::richtext::syntax::CodeSyntax tmp6 = this->_syntax;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			::haxe::ui::richtext::_Code::SyntaxHighlightRunner tmp7 = ::haxe::ui::richtext::_Code::SyntaxHighlightRunner_obj::__new(tmp5,tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(108)
			::haxe::ui::richtext::_Code::SyntaxHighlightRunner runner = tmp7;		HX_STACK_VAR(runner,"runner");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 0; }
			bool run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/richtext/Code.hx",109,0x3e2126bd)
				{
					HX_STACK_LINE(109)
					return false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			HX_STACK_LINE(109)
			runner->set_needToExit( Dynamic(new _Function_2_1()));
			HX_STACK_LINE(110)
			runner->run();
		}
		else{
			HX_STACK_LINE(112)
			::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller tmp5 = this->_caller;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(112)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(112)
			if ((tmp6)){
				HX_STACK_LINE(113)
				::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller tmp7 = this->_caller;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(113)
				tmp7->cancel();
			}
			HX_STACK_LINE(116)
			::openfl::_legacy::text::TextField tmp7 = tf;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(116)
			::haxe::ui::richtext::syntax::CodeSyntax tmp8 = this->_syntax;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(116)
			::haxe::ui::richtext::_Code::SyntaxHighlightRunner tmp9 = ::haxe::ui::richtext::_Code::SyntaxHighlightRunner_obj::__new(tmp7,tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller tmp10 = ::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller_obj::__new(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(116)
			this->_caller = tmp10;
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller tmp11 = this->_caller;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(117)
			tmp11->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Code_obj,applyRules,(void))

::haxe::ui::toolkit::core::DisplayObject Code_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.richtext.Code","clone",0xd777392f,"haxe.ui.richtext.Code.clone","src/haxe/ui/richtext/Code.hx",1,0x27575088)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TextInput tmp = hx::TCast< ::haxe::ui::toolkit::controls::TextInput >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::richtext::Code c = ((::haxe::ui::richtext::Code)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::richtext::Code tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject Code_obj::self( ){
	HX_STACK_FRAME("haxe.ui.richtext.Code","self",0xe35785fa,"haxe.ui.richtext.Code.self","src/haxe/ui/richtext/Code.hx",1,0x27575088)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::richtext::Code tmp = ::haxe::ui::richtext::Code_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



Code_obj::Code_obj()
{
}

void Code_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Code);
	HX_MARK_MEMBER_NAME(_syntax,"_syntax");
	HX_MARK_MEMBER_NAME(_async,"_async");
	HX_MARK_MEMBER_NAME(_caller,"_caller");
	::haxe::ui::toolkit::controls::TextInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Code_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_syntax,"_syntax");
	HX_VISIT_MEMBER_NAME(_async,"_async");
	HX_VISIT_MEMBER_NAME(_caller,"_caller");
	::haxe::ui::toolkit::controls::TextInput_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Code_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { if (inCallProp == hx::paccAlways) return get_async(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_async") ) { return _async; }
		if (HX_FIELD_EQ(inName,"syntax") ) { if (inCallProp == hx::paccAlways) return get_syntax(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_syntax") ) { return _syntax; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"_caller") ) { return _caller; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_async") ) { return get_async_dyn(); }
		if (HX_FIELD_EQ(inName,"set_async") ) { return set_async_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_syntax") ) { return get_syntax_dyn(); }
		if (HX_FIELD_EQ(inName,"set_syntax") ) { return set_syntax_dyn(); }
		if (HX_FIELD_EQ(inName,"applyRules") ) { return applyRules_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onCodeChange") ) { return _onCodeChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onCodeKeyDown") ) { return _onCodeKeyDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Code_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { if (inCallProp == hx::paccAlways) return set_async(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_async") ) { _async=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"syntax") ) { if (inCallProp == hx::paccAlways) return set_syntax(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_syntax") ) { _syntax=inValue.Cast< ::haxe::ui::richtext::syntax::CodeSyntax >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_caller") ) { _caller=inValue.Cast< ::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Code_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Code_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_syntax","\x02","\x94","\x0b","\x5e"));
	outFields->push(HX_HCSTRING("_async","\x7d","\x46","\x25","\x22"));
	outFields->push(HX_HCSTRING("syntax","\x63","\x82","\x94","\xef"));
	outFields->push(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"));
	outFields->push(HX_HCSTRING("_caller","\x2a","\x66","\x5f","\x25"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::richtext::syntax::CodeSyntax*/ ,(int)offsetof(Code_obj,_syntax),HX_HCSTRING("_syntax","\x02","\x94","\x0b","\x5e")},
	{hx::fsBool,(int)offsetof(Code_obj,_async),HX_HCSTRING("_async","\x7d","\x46","\x25","\x22")},
	{hx::fsObject /*::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller*/ ,(int)offsetof(Code_obj,_caller),HX_HCSTRING("_caller","\x2a","\x66","\x5f","\x25")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_syntax","\x02","\x94","\x0b","\x5e"),
	HX_HCSTRING("_async","\x7d","\x46","\x25","\x22"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_syntax","\x2c","\xf2","\x1b","\xe0"),
	HX_HCSTRING("set_syntax","\xa0","\x90","\x99","\xe3"),
	HX_HCSTRING("get_async","\x93","\x5b","\xe7","\x69"),
	HX_HCSTRING("set_async","\x9f","\x47","\x38","\x4d"),
	HX_HCSTRING("_onCodeChange","\x5b","\x8b","\xde","\x39"),
	HX_HCSTRING("_onCodeKeyDown","\x56","\x1d","\x56","\x38"),
	HX_HCSTRING("_caller","\x2a","\x66","\x5f","\x25"),
	HX_HCSTRING("applyRules","\xa9","\xdf","\xa7","\x9c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Code_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Code_obj::__mClass,"__mClass");
};

#endif

hx::Class Code_obj::__mClass;

void Code_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext.Code","\xc0","\x7c","\xcb","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Code_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Code_obj >;
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
} // end namespace richtext
