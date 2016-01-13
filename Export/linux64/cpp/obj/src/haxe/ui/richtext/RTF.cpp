#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_richtext_RTF
#include <haxe/ui/richtext/RTF.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
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
#ifndef INCLUDED_openfl__legacy_text_TextFormat
#include <openfl/_legacy/text/TextFormat.h>
#endif
namespace haxe{
namespace ui{
namespace richtext{

Void RTF_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.richtext.RTF","new",0x5585dfa3,"haxe.ui.richtext.RTF.new","haxe/ui/richtext/RTF.hx",15,0x2791d94e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->set_multiline(true);
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
	HX_STACK_LINE(18)
	::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
}
;
	return null();
}

//RTF_obj::~RTF_obj() { }

Dynamic RTF_obj::__CreateEmpty() { return  new RTF_obj; }
hx::ObjectPtr< RTF_obj > RTF_obj::__new()
{  hx::ObjectPtr< RTF_obj > _result_ = new RTF_obj();
	_result_->__construct();
	return _result_;}

Dynamic RTF_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RTF_obj > _result_ = new RTF_obj();
	_result_->__construct();
	return _result_;}

::String RTF_obj::get_htmlText( ){
	HX_STACK_FRAME("haxe.ui.richtext.RTF","get_htmlText",0xea63441e,"haxe.ui.richtext.RTF.get_htmlText","haxe/ui/richtext/RTF.hx",32,0x2791d94e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::haxe::ui::toolkit::text::ITextDisplay tmp = this->_textDisplay;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	::openfl::_legacy::display::DisplayObject tmp1 = tmp->get_display();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	::openfl::_legacy::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	tmp2 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp1);
	HX_STACK_LINE(33)
	::openfl::_legacy::text::TextField tf = tmp2;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(34)
	::String tmp3 = tf->get_htmlText();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,get_htmlText,return )

::String RTF_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("haxe.ui.richtext.RTF","set_htmlText",0xff5c6792,"haxe.ui.richtext.RTF.set_htmlText","haxe/ui/richtext/RTF.hx",37,0x2791d94e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(38)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	bool tmp1 = ::StringTools_obj::startsWith(tmp,HX_HCSTRING("asset://","\xea","\x97","\x9d","\xc9"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	if ((tmp1)){
		HX_STACK_LINE(39)
		int tmp2 = value.length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		::String tmp3 = value.substr((int)8,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		::String assetId = tmp3;		HX_STACK_VAR(assetId,"assetId");
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::resources::ResourceManager tmp4 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::String tmp5 = assetId;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(40)
		::String tmp6 = tmp4->getText(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		value = tmp6;
		HX_STACK_LINE(41)
		::String tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		::String tmp8 = ::StringTools_obj::replace(tmp7,HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(41)
		value = tmp8;
	}
	HX_STACK_LINE(43)
	::haxe::ui::toolkit::text::ITextDisplay tmp2 = this->_textDisplay;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	::openfl::_legacy::display::DisplayObject tmp3 = tmp2->get_display();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(43)
	::openfl::_legacy::text::TextField tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	tmp4 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp3);
	HX_STACK_LINE(43)
	::openfl::_legacy::text::TextField tf = tmp4;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(44)
	::String tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	tf->set_htmlText(tmp5);
	HX_STACK_LINE(45)
	::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(RTF_obj,set_htmlText,return )

Void RTF_obj::bold( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","bold",0x77b6cce2,"haxe.ui.richtext.RTF.bold","haxe/ui/richtext/RTF.hx",55,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->applyRTFStyle(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,bold,(void))

Void RTF_obj::italic( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","italic",0x92eecb8d,"haxe.ui.richtext.RTF.italic","haxe/ui/richtext/RTF.hx",62,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		this->applyRTFStyle(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,italic,(void))

Void RTF_obj::underline( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","underline",0x7296788f,"haxe.ui.richtext.RTF.underline","haxe/ui/richtext/RTF.hx",69,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		this->applyRTFStyle(HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,underline,(void))

Void RTF_obj::fontSize( int size){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","fontSize",0x88b27c0d,"haxe.ui.richtext.RTF.fontSize","haxe/ui/richtext/RTF.hx",75,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(76)
		int tmp = size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		this->applyRTFStyle(HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTF_obj,fontSize,(void))

Void RTF_obj::fontName( ::String name){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","fontName",0x855e4d97,"haxe.ui.richtext.RTF.fontName","haxe/ui/richtext/RTF.hx",82,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(83)
		::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		this->applyRTFStyle(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RTF_obj,fontName,(void))

Void RTF_obj::bullet( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","bullet",0x611b2edf,"haxe.ui.richtext.RTF.bullet","haxe/ui/richtext/RTF.hx",90,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->applyRTFStyle(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,bullet,(void))

Void RTF_obj::alignLeft( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","alignLeft",0xbf3334ef,"haxe.ui.richtext.RTF.alignLeft","haxe/ui/richtext/RTF.hx",97,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->applyRTFStyle(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,alignLeft,(void))

Void RTF_obj::alignCenter( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","alignCenter",0xc6315cbd,"haxe.ui.richtext.RTF.alignCenter","haxe/ui/richtext/RTF.hx",104,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->applyRTFStyle(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,alignCenter,(void))

Void RTF_obj::alignRight( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","alignRight",0x04a829f4,"haxe.ui.richtext.RTF.alignRight","haxe/ui/richtext/RTF.hx",111,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		this->applyRTFStyle(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,alignRight,(void))

Void RTF_obj::alignJustify( ){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","alignJustify",0x0ecfb368,"haxe.ui.richtext.RTF.alignJustify","haxe/ui/richtext/RTF.hx",118,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->applyRTFStyle(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),HX_HCSTRING("justify","\x50","\xdf","\xb5","\x83"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RTF_obj,alignJustify,(void))

Void RTF_obj::applyRTFStyle( ::String what,Dynamic value){
{
		HX_STACK_FRAME("haxe.ui.richtext.RTF","applyRTFStyle",0xbc2e60be,"haxe.ui.richtext.RTF.applyRTFStyle","haxe/ui/richtext/RTF.hx",121,0x2791d94e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(what,"what")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(122)
		int tmp = this->get_selectionBeginIndex();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		if ((tmp1)){
			HX_STACK_LINE(122)
			int tmp3 = this->get_selectionEndIndex();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			tmp2 = (tmp4 == (int)0);
		}
		else{
			HX_STACK_LINE(122)
			tmp2 = false;
		}
		HX_STACK_LINE(122)
		if ((tmp2)){
			HX_STACK_LINE(123)
			return null();
		}
		HX_STACK_LINE(126)
		int tmp3 = this->get_selectionBeginIndex();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		int tmp4 = this->get_selectionEndIndex();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(126)
		if ((tmp5)){
			HX_STACK_LINE(127)
			return null();
		}
		HX_STACK_LINE(130)
		::haxe::ui::toolkit::text::ITextDisplay tmp6 = this->_textDisplay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		::openfl::_legacy::display::DisplayObject tmp7 = tmp6->get_display();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		::openfl::_legacy::text::TextField tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		tmp8 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(tmp7);
		HX_STACK_LINE(130)
		::openfl::_legacy::text::TextField tf = tmp8;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(131)
		int tmp9 = this->get_selectionBeginIndex();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(131)
		int tmp10 = this->get_selectionEndIndex();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(131)
		::openfl::_legacy::text::TextFormat tmp11 = tf->getTextFormat(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(131)
		::openfl::_legacy::text::TextFormat format = tmp11;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(132)
		::String tmp12 = what;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(132)
		::String _switch_1 = (tmp12);
		if (  ( _switch_1==HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"))){
			HX_STACK_LINE(134)
			Dynamic tmp13 = format->bold;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(134)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(134)
			format->bold = tmp14;
		}
		else if (  ( _switch_1==HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"))){
			HX_STACK_LINE(136)
			Dynamic tmp13 = format->italic;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(136)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(136)
			format->italic = tmp14;
		}
		else if (  ( _switch_1==HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87"))){
			HX_STACK_LINE(138)
			Dynamic tmp13 = format->underline;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(138)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(138)
			format->underline = tmp14;
		}
		else if (  ( _switch_1==HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"))){
			HX_STACK_LINE(140)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(140)
			tmp13 = hx::TCast< ::Int >::cast(value);
			HX_STACK_LINE(140)
			format->size = tmp13;
		}
		else if (  ( _switch_1==HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"))){
			HX_STACK_LINE(142)
			::String tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(142)
			tmp13 = hx::TCast< ::String >::cast(value);
			HX_STACK_LINE(142)
			format->font = tmp13;
		}
		else if (  ( _switch_1==HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"))){
			HX_STACK_LINE(144)
			Dynamic tmp13 = format->bullet;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(144)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(144)
			format->bullet = tmp14;
		}
		else if (  ( _switch_1==HX_HCSTRING("align","\xc5","\x56","\x91","\x21"))){
			HX_STACK_LINE(157)
			::String tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(157)
			tmp13 = hx::TCast< ::String >::cast(value);
			HX_STACK_LINE(157)
			::String align = tmp13;		HX_STACK_VAR(align,"align");
			HX_STACK_LINE(159)
			format->align = align;
		}
		else  {
		}
;
;
		HX_STACK_LINE(163)
		::openfl::_legacy::text::TextFormat tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(163)
		int tmp14 = this->get_selectionBeginIndex();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(163)
		int tmp15 = this->get_selectionEndIndex();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(163)
		tf->setTextFormat(tmp13,tmp14,tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RTF_obj,applyRTFStyle,(void))

::haxe::ui::toolkit::core::DisplayObject RTF_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.richtext.RTF","clone",0xd9a9b960,"haxe.ui.richtext.RTF.clone","src/haxe/ui/richtext/RTF.hx",1,0x8ec931e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TextInput tmp = hx::TCast< ::haxe::ui::toolkit::controls::TextInput >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::richtext::RTF c = ((::haxe::ui::richtext::RTF)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::richtext::RTF tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject RTF_obj::self( ){
	HX_STACK_FRAME("haxe.ui.richtext.RTF","self",0x82ebd6e9,"haxe.ui.richtext.RTF.self","src/haxe/ui/richtext/RTF.hx",1,0x8ec931e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::richtext::RTF tmp = ::haxe::ui::richtext::RTF_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



RTF_obj::RTF_obj()
{
}

Dynamic RTF_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return bold_dyn(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { return italic_dyn(); }
		if (HX_FIELD_EQ(inName,"bullet") ) { return bullet_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return fontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return fontName_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { return underline_dyn(); }
		if (HX_FIELD_EQ(inName,"alignLeft") ) { return alignLeft_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"alignRight") ) { return alignRight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alignCenter") ) { return alignCenter_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"alignJustify") ) { return alignJustify_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"applyRTFStyle") ) { return applyRTFStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RTF_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp == hx::paccAlways) return set_htmlText(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool RTF_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void RTF_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"),
	HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"),
	HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87"),
	HX_HCSTRING("fontSize","\x30","\xbe","\xd1","\xce"),
	HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"),
	HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"),
	HX_HCSTRING("alignLeft","\x6c","\xd1","\x6d","\xd4"),
	HX_HCSTRING("alignCenter","\x7a","\xd2","\xa9","\x94"),
	HX_HCSTRING("alignRight","\xd7","\x7a","\xb6","\x82"),
	HX_HCSTRING("alignJustify","\x0b","\x43","\xbe","\xe9"),
	HX_HCSTRING("applyRTFStyle","\xbb","\x7f","\xfd","\x71"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RTF_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RTF_obj::__mClass,"__mClass");
};

#endif

hx::Class RTF_obj::__mClass;

void RTF_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.richtext.RTF","\x31","\xd2","\x56","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &RTF_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RTF_obj >;
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
