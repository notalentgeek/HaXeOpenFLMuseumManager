#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
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
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFieldAutoSize
#include <openfl/_legacy/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace text{

Void TextDisplay_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","new",0x28faa668,"haxe.ui.toolkit.text.TextDisplay.new","haxe/ui/toolkit/text/TextDisplay.hx",12,0x5bd82fc8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->_autoSize = true;
	HX_STACK_LINE(26)
	::openfl::_legacy::text::TextField tmp = ::openfl::_legacy::text::TextField_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->_tf = tmp;
	HX_STACK_LINE(27)
	::openfl::_legacy::text::TextField tmp1 = this->_tf;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	tmp1->set_type(((Dynamic)((int)0)));
	HX_STACK_LINE(28)
	::openfl::_legacy::text::TextField tmp2 = this->_tf;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	tmp2->set_selectable(false);
	HX_STACK_LINE(29)
	::openfl::_legacy::text::TextField tmp3 = this->_tf;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	tmp3->set_multiline(false);
	HX_STACK_LINE(30)
	::openfl::_legacy::text::TextField tmp4 = this->_tf;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	tmp4->set_mouseEnabled(false);
	HX_STACK_LINE(31)
	::openfl::_legacy::text::TextField tmp5 = this->_tf;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	tmp5->set_wordWrap(false);
	HX_STACK_LINE(32)
	::openfl::_legacy::text::TextField tmp6 = this->_tf;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	tmp6->set_autoSize(::openfl::_legacy::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(33)
	::openfl::_legacy::text::TextField tmp7 = this->_tf;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	tmp7->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
}
;
	return null();
}

//TextDisplay_obj::~TextDisplay_obj() { }

Dynamic TextDisplay_obj::__CreateEmpty() { return  new TextDisplay_obj; }
hx::ObjectPtr< TextDisplay_obj > TextDisplay_obj::__new()
{  hx::ObjectPtr< TextDisplay_obj > _result_ = new TextDisplay_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextDisplay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextDisplay_obj > _result_ = new TextDisplay_obj();
	_result_->__construct();
	return _result_;}

hx::Object *TextDisplay_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::text::ITextDisplay_obj)) return operator ::haxe::ui::toolkit::text::ITextDisplay_obj *();
	return super::__ToInterface(inType);
}

TextDisplay_obj::operator ::haxe::ui::toolkit::text::ITextDisplay_obj *()
	{ return new ::haxe::ui::toolkit::text::ITextDisplay_delegate_< TextDisplay_obj >(this); }
::String TextDisplay_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_text",0x1c60d52e,"haxe.ui.toolkit.text.TextDisplay.get_text","haxe/ui/toolkit/text/TextDisplay.hx",53,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_text,return )

::String TextDisplay_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_text",0xcabe2ea2,"haxe.ui.toolkit.text.TextDisplay.set_text","haxe/ui/toolkit/text/TextDisplay.hx",57,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	if ((tmp)){
		HX_STACK_LINE(66)
		::openfl::_legacy::text::TextField tmp1 = this->_tf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::String tmp3 = ::StringTools_obj::replace(tmp2,HX_HCSTRING("\\n","\x92","\x50","\x00","\x00"),HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		tmp1->set_text(tmp3);
	}
	HX_STACK_LINE(70)
	::haxe::ui::toolkit::style::Style tmp1 = this->_style;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	this->set_style(tmp1);
	HX_STACK_LINE(84)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_text,return )

::haxe::ui::toolkit::style::Style TextDisplay_obj::get_style( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_style",0x2ede0d90,"haxe.ui.toolkit.text.TextDisplay.get_style","haxe/ui/toolkit/text/TextDisplay.hx",87,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	::haxe::ui::toolkit::style::Style tmp = this->_style;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_style,return )

::haxe::ui::toolkit::style::Style TextDisplay_obj::set_style( ::haxe::ui::toolkit::style::Style value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_style",0x122ef99c,"haxe.ui.toolkit.text.TextDisplay.set_style","haxe/ui/toolkit/text/TextDisplay.hx",91,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(92)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	if ((tmp)){
		HX_STACK_LINE(93)
		::haxe::ui::toolkit::style::Style tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		return tmp1;
	}
	HX_STACK_LINE(96)
	this->_style = value;
	HX_STACK_LINE(97)
	::openfl::_legacy::text::TextField tmp1 = this->_tf;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	::openfl::_legacy::text::TextFormat tmp2 = tmp1->getTextFormat(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	::openfl::_legacy::text::TextFormat format = tmp2;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(98)
	::haxe::ui::toolkit::style::Style tmp3 = this->_style;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	::String tmp4 = tmp3->get_fontName();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(98)
	::String fontName = tmp4;		HX_STACK_VAR(fontName,"fontName");
	HX_STACK_LINE(99)
	bool tmp5 = (fontName != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	if ((tmp5)){
		HX_STACK_LINE(105)
		::openfl::_legacy::text::TextField tmp6 = this->_tf;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		::haxe::ui::toolkit::style::Style tmp7 = this->_style;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		bool tmp8 = tmp7->get_fontEmbedded();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		tmp6->set_embedFonts(tmp8);
		HX_STACK_LINE(106)
		format->font = fontName;
	}
	HX_STACK_LINE(108)
	::haxe::ui::toolkit::style::Style tmp6 = this->_style;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(108)
	Float tmp7 = tmp6->get_fontSize();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(108)
	bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(108)
	if ((tmp8)){
		HX_STACK_LINE(109)
		::haxe::ui::toolkit::style::Style tmp9 = this->_style;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(109)
		Float tmp10 = tmp9->get_fontSize();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(109)
		format->size = ((Dynamic)(tmp10));
	}
	HX_STACK_LINE(111)
	::haxe::ui::toolkit::style::Style tmp9 = this->_style;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(111)
	int tmp10 = tmp9->get_color();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(111)
	bool tmp11 = (tmp10 != (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(111)
	if ((tmp11)){
		HX_STACK_LINE(112)
		::haxe::ui::toolkit::style::Style tmp12 = this->_style;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(112)
		int tmp13 = tmp12->get_color();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(112)
		format->color = tmp13;
	}
	HX_STACK_LINE(114)
	::haxe::ui::toolkit::style::Style tmp12 = this->_style;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(114)
	bool tmp13 = tmp12->get_fontBold();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(114)
	format->bold = tmp13;
	HX_STACK_LINE(115)
	::haxe::ui::toolkit::style::Style tmp14 = this->_style;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(115)
	bool tmp15 = tmp14->get_fontItalic();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(115)
	format->italic = tmp15;
	HX_STACK_LINE(116)
	::haxe::ui::toolkit::style::Style tmp16 = this->_style;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(116)
	bool tmp17 = tmp16->get_fontUnderline();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(116)
	format->underline = tmp17;
	HX_STACK_LINE(117)
	::openfl::_legacy::text::TextField tmp18 = this->_tf;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(117)
	::openfl::_legacy::text::TextFormat tmp19 = format;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(117)
	tmp18->set_defaultTextFormat(tmp19);
	HX_STACK_LINE(118)
	::openfl::_legacy::text::TextField tmp20 = this->_tf;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(118)
	::openfl::_legacy::text::TextFormat tmp21 = format;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(118)
	tmp20->setTextFormat(tmp21,null(),null());
	HX_STACK_LINE(119)
	::haxe::ui::toolkit::style::Style tmp22 = this->_style;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(119)
	::String tmp23 = tmp22->get_textAlign();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(119)
	bool tmp24 = (tmp23 != null());		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(119)
	if ((tmp24)){
		HX_STACK_LINE(120)
		::haxe::ui::toolkit::style::Style tmp25 = this->_style;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(120)
		::String tmp26 = tmp25->get_textAlign();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(120)
		this->set_textAlign(tmp26);
	}
	HX_STACK_LINE(122)
	::haxe::ui::toolkit::style::Style tmp25 = value;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(122)
	return tmp25;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_style,return )

::openfl::_legacy::display::DisplayObject TextDisplay_obj::get_display( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_display",0xe53ca861,"haxe.ui.toolkit.text.TextDisplay.get_display","haxe/ui/toolkit/text/TextDisplay.hx",125,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_display,return )

bool TextDisplay_obj::get_interactive( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_interactive",0x9dceb781,"haxe.ui.toolkit.text.TextDisplay.get_interactive","haxe/ui/toolkit/text/TextDisplay.hx",129,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	Dynamic tmp1 = tmp->get_type();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	bool tmp2 = (tmp1 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_interactive,return )

bool TextDisplay_obj::set_interactive( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_interactive",0x999a348d,"haxe.ui.toolkit.text.TextDisplay.set_interactive","haxe/ui/toolkit/text/TextDisplay.hx",133,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(134)
	bool tmp = (value == true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	if ((tmp)){
		HX_STACK_LINE(135)
		::openfl::_legacy::text::TextField tmp1 = this->_tf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		tmp1->set_type(((Dynamic)((int)1)));
		HX_STACK_LINE(136)
		::openfl::_legacy::text::TextField tmp2 = this->_tf;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(136)
		tmp2->set_selectable(true);
		HX_STACK_LINE(137)
		::openfl::_legacy::text::TextField tmp3 = this->_tf;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		tmp3->set_mouseEnabled(true);
	}
	else{
		HX_STACK_LINE(139)
		::openfl::_legacy::text::TextField tmp1 = this->_tf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		tmp1->set_type(((Dynamic)((int)0)));
		HX_STACK_LINE(140)
		::openfl::_legacy::text::TextField tmp2 = this->_tf;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		tmp2->set_selectable(false);
		HX_STACK_LINE(141)
		::openfl::_legacy::text::TextField tmp3 = this->_tf;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		tmp3->set_mouseEnabled(false);
	}
	HX_STACK_LINE(143)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_interactive,return )

bool TextDisplay_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_multiline",0x083756cc,"haxe.ui.toolkit.text.TextDisplay.get_multiline","haxe/ui/toolkit/text/TextDisplay.hx",146,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	bool tmp1 = tmp->get_multiline();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_multiline,return )

bool TextDisplay_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_multiline",0x4d3d38d8,"haxe.ui.toolkit.text.TextDisplay.set_multiline","haxe/ui/toolkit/text/TextDisplay.hx",150,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(151)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	tmp->set_multiline(tmp1);
	HX_STACK_LINE(152)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_multiline,return )

bool TextDisplay_obj::get_wrapLines( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_wrapLines",0x829ddbb4,"haxe.ui.toolkit.text.TextDisplay.get_wrapLines","haxe/ui/toolkit/text/TextDisplay.hx",155,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	bool tmp1 = tmp->get_wordWrap();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_wrapLines,return )

bool TextDisplay_obj::set_wrapLines( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_wrapLines",0xc7a3bdc0,"haxe.ui.toolkit.text.TextDisplay.set_wrapLines","haxe/ui/toolkit/text/TextDisplay.hx",159,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(160)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	tmp->set_wordWrap(tmp1);
	HX_STACK_LINE(161)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(161)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_wrapLines,return )

bool TextDisplay_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_displayAsPassword",0xcac1c5ee,"haxe.ui.toolkit.text.TextDisplay.get_displayAsPassword","haxe/ui/toolkit/text/TextDisplay.hx",164,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	bool tmp1 = tmp->get_displayAsPassword();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_displayAsPassword,return )

bool TextDisplay_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_displayAsPassword",0x1eca93fa,"haxe.ui.toolkit.text.TextDisplay.set_displayAsPassword","haxe/ui/toolkit/text/TextDisplay.hx",168,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(169)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	tmp->set_displayAsPassword(tmp1);
	HX_STACK_LINE(170)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(170)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_displayAsPassword,return )

bool TextDisplay_obj::get_visible( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_visible",0xcd16f691,"haxe.ui.toolkit.text.TextDisplay.get_visible","haxe/ui/toolkit/text/TextDisplay.hx",173,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(174)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	bool tmp1 = tmp->get_visible();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(174)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_visible,return )

bool TextDisplay_obj::set_visible( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_visible",0xd783fd9d,"haxe.ui.toolkit.text.TextDisplay.set_visible","haxe/ui/toolkit/text/TextDisplay.hx",177,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(178)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	tmp->set_visible(tmp1);
	HX_STACK_LINE(179)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(179)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_visible,return )

bool TextDisplay_obj::get_selectable( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_selectable",0x3ad895d7,"haxe.ui.toolkit.text.TextDisplay.get_selectable","haxe/ui/toolkit/text/TextDisplay.hx",182,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	bool tmp1 = tmp->get_selectable();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_selectable,return )

bool TextDisplay_obj::set_selectable( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_selectable",0x5af87e4b,"haxe.ui.toolkit.text.TextDisplay.set_selectable","haxe/ui/toolkit/text/TextDisplay.hx",186,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(187)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	tmp->set_mouseEnabled(tmp1);
	HX_STACK_LINE(188)
	::openfl::_legacy::text::TextField tmp2 = this->_tf;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(188)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(188)
	bool tmp4 = tmp2->set_selectable(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(188)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_selectable,return )

bool TextDisplay_obj::get_autoSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_autoSize",0xb9b56cd1,"haxe.ui.toolkit.text.TextDisplay.get_autoSize","haxe/ui/toolkit/text/TextDisplay.hx",191,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	::openfl::_legacy::text::TextFieldAutoSize tmp1 = tmp->get_autoSize();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	bool tmp2 = (tmp1 != ::openfl::_legacy::text::TextFieldAutoSize_obj::NONE);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_autoSize,return )

bool TextDisplay_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_autoSize",0xceae9045,"haxe.ui.toolkit.text.TextDisplay.set_autoSize","haxe/ui/toolkit/text/TextDisplay.hx",195,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(196)
	bool tmp = (value == true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	if ((tmp)){
		HX_STACK_LINE(197)
		::openfl::_legacy::text::TextField tmp1 = this->_tf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		tmp1->set_autoSize(::openfl::_legacy::text::TextFieldAutoSize_obj::LEFT);
	}
	else{
		HX_STACK_LINE(199)
		::openfl::_legacy::text::TextField tmp1 = this->_tf;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		tmp1->set_autoSize(::openfl::_legacy::text::TextFieldAutoSize_obj::NONE);
	}
	HX_STACK_LINE(201)
	bool tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_autoSize,return )

::String TextDisplay_obj::get_textAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_textAlign",0x24a46ab7,"haxe.ui.toolkit.text.TextDisplay.get_textAlign","haxe/ui/toolkit/text/TextDisplay.hx",204,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	::openfl::_legacy::text::TextFormat tmp1 = tmp->getTextFormat(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(205)
	::openfl::_legacy::text::TextFormat format = tmp1;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(206)
	::String align = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");		HX_STACK_VAR(align,"align");
	HX_STACK_LINE(207)
	{
		HX_STACK_LINE(207)
		::String _g = format->align;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(207)
		::String tmp2 = _g;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(207)
		::String _switch_1 = (tmp2);
		if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
			HX_STACK_LINE(209)
			align = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
		}
		else if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
			HX_STACK_LINE(211)
			align = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
		}
		else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
			HX_STACK_LINE(213)
			align = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
		}
		else  {
			HX_STACK_LINE(215)
			align = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
		}
;
;
	}
	HX_STACK_LINE(217)
	::String tmp2 = align;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(217)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_textAlign,return )

::String TextDisplay_obj::set_textAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_textAlign",0x69aa4cc3,"haxe.ui.toolkit.text.TextDisplay.set_textAlign","haxe/ui/toolkit/text/TextDisplay.hx",220,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(221)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(221)
	::openfl::_legacy::text::TextFormat tmp1 = tmp->getTextFormat(null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	::openfl::_legacy::text::TextFormat format = tmp1;		HX_STACK_VAR(format,"format");
	HX_STACK_LINE(222)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	::String _switch_2 = (tmp2);
	if (  ( _switch_2==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
		HX_STACK_LINE(224)
		format->align = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	}
	else if (  ( _switch_2==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
		HX_STACK_LINE(226)
		format->align = HX_HCSTRING("center","\xd5","\x25","\xdb","\x05");
	}
	else if (  ( _switch_2==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
		HX_STACK_LINE(228)
		format->align = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
	}
	else  {
		HX_STACK_LINE(230)
		format->align = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
	}
;
;
	HX_STACK_LINE(232)
	::openfl::_legacy::text::TextField tmp3 = this->_tf;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	::openfl::_legacy::text::TextFormat tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(232)
	tmp3->set_defaultTextFormat(tmp4);
	HX_STACK_LINE(233)
	::openfl::_legacy::text::TextField tmp5 = this->_tf;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(233)
	::openfl::_legacy::text::TextFormat tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(233)
	tmp5->setTextFormat(tmp6,null(),null());
	HX_STACK_LINE(234)
	::String tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(234)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_textAlign,return )

int TextDisplay_obj::get_maxChars( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_maxChars",0x7a0ccc9a,"haxe.ui.toolkit.text.TextDisplay.get_maxChars","haxe/ui/toolkit/text/TextDisplay.hx",237,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	int tmp1 = tmp->get_maxChars();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_maxChars,return )

int TextDisplay_obj::set_maxChars( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_maxChars",0x8f05f00e,"haxe.ui.toolkit.text.TextDisplay.set_maxChars","haxe/ui/toolkit/text/TextDisplay.hx",241,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(242)
	::openfl::_legacy::text::TextField tmp = this->_tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	int tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	int tmp2 = tmp->set_maxChars(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_maxChars,return )

::String TextDisplay_obj::get_restrictChars( ){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","get_restrictChars",0x7f2a6760,"haxe.ui.toolkit.text.TextDisplay.get_restrictChars","haxe/ui/toolkit/text/TextDisplay.hx",250,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(250)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextDisplay_obj,get_restrictChars,return )

::String TextDisplay_obj::set_restrictChars( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.text.TextDisplay","set_restrictChars",0xa2983f6c,"haxe.ui.toolkit.text.TextDisplay.set_restrictChars","haxe/ui/toolkit/text/TextDisplay.hx",254,0x5bd82fc8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(258)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(TextDisplay_obj,set_restrictChars,return )

int TextDisplay_obj::X_PADDING;

int TextDisplay_obj::Y_PADDING;


TextDisplay_obj::TextDisplay_obj()
{
}

void TextDisplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextDisplay);
	HX_MARK_MEMBER_NAME(_style,"_style");
	HX_MARK_MEMBER_NAME(_tf,"_tf");
	HX_MARK_MEMBER_NAME(_autoSize,"_autoSize");
	HX_MARK_MEMBER_NAME(display,"display");
	HX_MARK_END_CLASS();
}

void TextDisplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_style,"_style");
	HX_VISIT_MEMBER_NAME(_tf,"_tf");
	HX_VISIT_MEMBER_NAME(_autoSize,"_autoSize");
	HX_VISIT_MEMBER_NAME(display,"display");
}

Dynamic TextDisplay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { return _tf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == hx::paccAlways) return get_style(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { return _style; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return inCallProp == hx::paccAlways ? get_display() : display; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSize") ) { return _autoSize; }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { if (inCallProp == hx::paccAlways) return get_wrapLines(); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return get_textAlign(); }
		if (HX_FIELD_EQ(inName,"get_style") ) { return get_style_dyn(); }
		if (HX_FIELD_EQ(inName,"set_style") ) { return set_style_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return get_selectable(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { if (inCallProp == hx::paccAlways) return get_interactive(); }
		if (HX_FIELD_EQ(inName,"get_display") ) { return get_display_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == hx::paccAlways) return get_restrictChars(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wrapLines") ) { return get_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapLines") ) { return set_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return set_textAlign_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactive") ) { return get_interactive_dyn(); }
		if (HX_FIELD_EQ(inName,"set_interactive") ) { return set_interactive_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"get_restrictChars") ) { return get_restrictChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restrictChars") ) { return set_restrictChars_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextDisplay_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_tf") ) { _tf=inValue.Cast< ::openfl::_legacy::text::TextField >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { if (inCallProp == hx::paccAlways) return set_style(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { _style=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< ::openfl::_legacy::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp == hx::paccAlways) return set_maxChars(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSize") ) { _autoSize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp == hx::paccAlways) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { if (inCallProp == hx::paccAlways) return set_wrapLines(inValue); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { if (inCallProp == hx::paccAlways) return set_textAlign(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp == hx::paccAlways) return set_selectable(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { if (inCallProp == hx::paccAlways) return set_interactive(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { if (inCallProp == hx::paccAlways) return set_restrictChars(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp == hx::paccAlways) return set_displayAsPassword(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextDisplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_style","\x72","\xec","\x04","\x80"));
	outFields->push(HX_HCSTRING("_tf","\x91","\x7b","\x48","\x00"));
	outFields->push(HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("style","\x31","\xa5","\x1d","\x84"));
	outFields->push(HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"));
	outFields->push(HX_HCSTRING("interactive","\xe2","\x3d","\x59","\x3c"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("wrapLines","\xd5","\x57","\x78","\x18"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("textAlign","\xd8","\xe6","\x7e","\xba"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("restrictChars","\x01","\x08","\x2c","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(TextDisplay_obj,_style),HX_HCSTRING("_style","\x72","\xec","\x04","\x80")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(TextDisplay_obj,_tf),HX_HCSTRING("_tf","\x91","\x7b","\x48","\x00")},
	{hx::fsBool,(int)offsetof(TextDisplay_obj,_autoSize),HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77")},
	{hx::fsObject /*::openfl::_legacy::display::DisplayObject*/ ,(int)offsetof(TextDisplay_obj,display),HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TextDisplay_obj::X_PADDING,HX_HCSTRING("X_PADDING","\x8a","\x9f","\x05","\x0d")},
	{hx::fsInt,(void *) &TextDisplay_obj::Y_PADDING,HX_HCSTRING("Y_PADDING","\x8b","\x08","\xf7","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_style","\x72","\xec","\x04","\x80"),
	HX_HCSTRING("_tf","\x91","\x7b","\x48","\x00"),
	HX_HCSTRING("_autoSize","\x2f","\x87","\x0f","\x77"),
	HX_HCSTRING("display","\x42","\x2a","\x4a","\xbb"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_style","\x88","\x01","\xc7","\xc7"),
	HX_HCSTRING("set_style","\x94","\xed","\x17","\xab"),
	HX_HCSTRING("get_display","\x59","\x8a","\x44","\x41"),
	HX_HCSTRING("get_interactive","\x79","\xf5","\x3a","\xfd"),
	HX_HCSTRING("set_interactive","\x85","\x72","\x06","\xf9"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_wrapLines","\xac","\x2b","\xdc","\xd9"),
	HX_HCSTRING("set_wrapLines","\xb8","\x0d","\xe2","\x1e"),
	HX_HCSTRING("get_displayAsPassword","\xe6","\xcd","\x44","\x69"),
	HX_HCSTRING("set_displayAsPassword","\xf2","\x9b","\x4d","\xbd"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_selectable","\xdf","\x3e","\x20","\x3a"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_textAlign","\xaf","\xba","\xe2","\x7b"),
	HX_HCSTRING("set_textAlign","\xbb","\x9c","\xe8","\xc0"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("get_restrictChars","\x58","\x13","\x9c","\xc0"),
	HX_HCSTRING("set_restrictChars","\x64","\xeb","\x09","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextDisplay_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextDisplay_obj::X_PADDING,"X_PADDING");
	HX_MARK_MEMBER_NAME(TextDisplay_obj::Y_PADDING,"Y_PADDING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextDisplay_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextDisplay_obj::X_PADDING,"X_PADDING");
	HX_VISIT_MEMBER_NAME(TextDisplay_obj::Y_PADDING,"Y_PADDING");
};

#endif

hx::Class TextDisplay_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("X_PADDING","\x8a","\x9f","\x05","\x0d"),
	HX_HCSTRING("Y_PADDING","\x8b","\x08","\xf7","\xdf"),
	::String(null()) };

void TextDisplay_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.text.TextDisplay","\x76","\x92","\xc5","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextDisplay_obj >;
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

void TextDisplay_obj::__boot()
{
	X_PADDING= (int)4;
	Y_PADDING= (int)4;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace text
