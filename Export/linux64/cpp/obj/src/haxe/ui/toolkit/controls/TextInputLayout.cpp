#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
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

Void TextInputLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","new",0x9c9bdec3,"haxe.ui.toolkit.controls.TextInputLayout.new","haxe/ui/toolkit/controls/TextInput.hx",456,0x28010717)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(456)
	super::__construct();
}
;
	return null();
}

//TextInputLayout_obj::~TextInputLayout_obj() { }

Dynamic TextInputLayout_obj::__CreateEmpty() { return  new TextInputLayout_obj; }
hx::ObjectPtr< TextInputLayout_obj > TextInputLayout_obj::__new()
{  hx::ObjectPtr< TextInputLayout_obj > _result_ = new TextInputLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextInputLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextInputLayout_obj > _result_ = new TextInputLayout_obj();
	_result_->__construct();
	return _result_;}

Void TextInputLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","resizeChildren",0x5eee59d0,"haxe.ui.toolkit.controls.TextInputLayout.resizeChildren","haxe/ui/toolkit/controls/TextInput.hx",459,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(460)
		this->super::resizeChildren();
		HX_STACK_LINE(461)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(461)
		::openfl::_legacy::display::Sprite tmp1 = tmp->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(461)
		int tmp2 = tmp1->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(461)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(461)
		if ((tmp3)){
			HX_STACK_LINE(462)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = this->get_container();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			::haxe::ui::toolkit::controls::VScroll tmp5 = tmp4->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(462)
			::haxe::ui::toolkit::controls::VScroll vscroll = tmp5;		HX_STACK_VAR(vscroll,"vscroll");
			HX_STACK_LINE(464)
			::openfl::_legacy::text::TextField tmp6 = this->findTextField();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(464)
			::openfl::_legacy::text::TextField text = tmp6;		HX_STACK_VAR(text,"text");
			HX_STACK_LINE(465)
			bool tmp7 = (text != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(465)
			if ((tmp7)){
				HX_STACK_LINE(466)
				::openfl::_legacy::geom::Rectangle tmp8 = this->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(466)
				Float tmp9 = tmp8->get_left();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(466)
				text->set_x(tmp9);
				HX_STACK_LINE(467)
				bool tmp10 = text->get_multiline();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(467)
				bool tmp11 = (tmp10 == true);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(467)
				if ((tmp11)){
					HX_STACK_LINE(468)
					::openfl::_legacy::geom::Rectangle tmp12 = this->get_padding();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(468)
					Float tmp13 = tmp12->get_top();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(468)
					text->set_y(tmp13);
					HX_STACK_LINE(469)
					Float tmp14 = this->get_usableHeight();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(469)
					text->set_height(tmp14);
				}
				else{
					HX_STACK_LINE(471)
					::openfl::_legacy::text::TextFormat tmp12 = text->get_defaultTextFormat();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(471)
					Dynamic tmp13 = tmp12->size;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(471)
					Float tmp14 = (tmp13 + (int)8);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(471)
					text->set_height(tmp14);
					HX_STACK_LINE(472)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp15 = this->get_container();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(472)
					Float tmp16 = tmp15->get_height();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(472)
					Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(472)
					Float tmp18 = text->get_height();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(472)
					Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(472)
					Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(472)
					text->set_y(tmp20);
				}
				HX_STACK_LINE(474)
				Float tmp12 = this->get_usableWidth();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(474)
				text->set_width(tmp12);
				HX_STACK_LINE(476)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp13 = this->get_container();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(476)
				::haxe::ui::toolkit::controls::Text tmp14 = tmp13->findChild(HX_HCSTRING("placeholder","\x73","\x73","\xf3","\xba"),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(476)
				::haxe::ui::toolkit::controls::Text placeholder = tmp14;		HX_STACK_VAR(placeholder,"placeholder");
				HX_STACK_LINE(477)
				bool tmp15 = (placeholder != null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(477)
				if ((tmp15)){
					HX_STACK_LINE(478)
					Float tmp16 = text->get_width();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(478)
					placeholder->set_width(tmp16);
					HX_STACK_LINE(479)
					Float tmp17 = text->get_height();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(479)
					placeholder->set_height(tmp17);
				}
			}
		}
	}
return null();
}


Void TextInputLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","repositionChildren",0xbb5e99b8,"haxe.ui.toolkit.controls.TextInputLayout.repositionChildren","haxe/ui/toolkit/controls/TextInput.hx",485,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(486)
		this->super::repositionChildren();
		HX_STACK_LINE(488)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		::haxe::ui::toolkit::controls::VScroll tmp1 = tmp->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		::haxe::ui::toolkit::controls::VScroll vscroll = tmp1;		HX_STACK_VAR(vscroll,"vscroll");
		HX_STACK_LINE(489)
		bool tmp2 = (vscroll != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(489)
		if ((tmp2)){
			HX_STACK_LINE(490)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(490)
			Float tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(490)
			Float tmp5 = vscroll->get_width();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(490)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(490)
			::openfl::_legacy::geom::Rectangle tmp7 = this->get_padding();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(490)
			Float tmp8 = tmp7->get_right();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(490)
			Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(490)
			vscroll->set_x(tmp9);
		}
		HX_STACK_LINE(492)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		::haxe::ui::toolkit::controls::HScroll tmp4 = tmp3->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(492)
		::haxe::ui::toolkit::controls::HScroll hscroll = tmp4;		HX_STACK_VAR(hscroll,"hscroll");
		HX_STACK_LINE(493)
		bool tmp5 = (hscroll != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(493)
		if ((tmp5)){
			HX_STACK_LINE(494)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(494)
			Float tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(494)
			Float tmp8 = hscroll->get_height();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(494)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(494)
			::openfl::_legacy::geom::Rectangle tmp10 = this->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(494)
			Float tmp11 = tmp10->get_bottom();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(494)
			Float tmp12 = (tmp9 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(494)
			hscroll->set_y(tmp12);
		}
		HX_STACK_LINE(497)
		::openfl::_legacy::text::TextField tmp6 = this->findTextField();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		::openfl::_legacy::text::TextField text = tmp6;		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(498)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = this->get_container();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		::haxe::ui::toolkit::controls::Text tmp8 = tmp7->findChild(HX_HCSTRING("placeholder","\x73","\x73","\xf3","\xba"),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(498)
		::haxe::ui::toolkit::controls::Text placeholder = tmp8;		HX_STACK_VAR(placeholder,"placeholder");
		HX_STACK_LINE(499)
		bool tmp9 = (text != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(499)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(499)
		if ((tmp9)){
			HX_STACK_LINE(499)
			tmp10 = (placeholder != null());
		}
		else{
			HX_STACK_LINE(499)
			tmp10 = false;
		}
		HX_STACK_LINE(499)
		if ((tmp10)){
			HX_STACK_LINE(500)
			Float tmp11 = text->get_x();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(500)
			placeholder->set_x(tmp11);
			HX_STACK_LINE(501)
			Float tmp12 = text->get_y();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(501)
			Float tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(501)
			placeholder->set_y(tmp13);
		}
	}
return null();
}


Float TextInputLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","get_usableWidth",0x8e045668,"haxe.ui.toolkit.controls.TextInputLayout.get_usableWidth","haxe/ui/toolkit/controls/TextInput.hx",506,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(507)
	Float tmp = this->get_innerWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(507)
	Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(508)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->get_container();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(508)
	::haxe::ui::toolkit::controls::VScroll tmp2 = tmp1->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(508)
	::haxe::ui::toolkit::controls::VScroll vscroll = tmp2;		HX_STACK_VAR(vscroll,"vscroll");
	HX_STACK_LINE(509)
	bool tmp3 = (vscroll != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(509)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(509)
	if ((tmp3)){
		HX_STACK_LINE(509)
		bool tmp5 = vscroll->get_visible();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(509)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(509)
		tmp4 = (tmp6 == true);
	}
	else{
		HX_STACK_LINE(509)
		tmp4 = false;
	}
	HX_STACK_LINE(509)
	if ((tmp4)){
		HX_STACK_LINE(510)
		Float tmp5 = vscroll->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(510)
		int tmp6 = this->get_spacingX();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(510)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(510)
		hx::SubEq(ucx,tmp7);
	}
	HX_STACK_LINE(512)
	Float tmp5 = ucx;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(512)
	return tmp5;
}


Float TextInputLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","get_usableHeight",0x6c16bd45,"haxe.ui.toolkit.controls.TextInputLayout.get_usableHeight","haxe/ui/toolkit/controls/TextInput.hx",515,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(516)
	Float tmp = this->get_innerHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(516)
	Float ucy = tmp;		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(517)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->get_container();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(517)
	::haxe::ui::toolkit::controls::HScroll tmp2 = tmp1->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(517)
	::haxe::ui::toolkit::controls::HScroll hscroll = tmp2;		HX_STACK_VAR(hscroll,"hscroll");
	HX_STACK_LINE(518)
	bool tmp3 = (hscroll != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(518)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(518)
	if ((tmp3)){
		HX_STACK_LINE(518)
		bool tmp5 = hscroll->get_visible();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(518)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(518)
		tmp4 = (tmp6 == true);
	}
	else{
		HX_STACK_LINE(518)
		tmp4 = false;
	}
	HX_STACK_LINE(518)
	if ((tmp4)){
		HX_STACK_LINE(519)
		Float tmp5 = hscroll->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(519)
		int tmp6 = this->get_spacingY();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(519)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(519)
		hx::SubEq(ucy,tmp7);
	}
	HX_STACK_LINE(521)
	Float tmp5 = ucy;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(521)
	return tmp5;
}


::openfl::_legacy::text::TextField TextInputLayout_obj::findTextField( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","findTextField",0x405bed77,"haxe.ui.toolkit.controls.TextInputLayout.findTextField","haxe/ui/toolkit/controls/TextInput.hx",524,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(525)
	::openfl::_legacy::text::TextField tf = null();		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(526)
	{
		HX_STACK_LINE(526)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(526)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(526)
		::openfl::_legacy::display::Sprite tmp1 = tmp->get_sprite();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(526)
		int tmp2 = tmp1->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(526)
		int _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(526)
		while((true)){
			HX_STACK_LINE(526)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(526)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(526)
			if ((tmp4)){
				HX_STACK_LINE(526)
				break;
			}
			HX_STACK_LINE(526)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(526)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(527)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(527)
			::openfl::_legacy::display::Sprite tmp7 = tmp6->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(527)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(527)
			::openfl::_legacy::display::DisplayObject tmp9 = tmp7->getChildAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(527)
			::openfl::_legacy::display::DisplayObject child = tmp9;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(528)
			::openfl::_legacy::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(528)
			bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::openfl::_legacy::text::TextField >());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(528)
			if ((tmp11)){
				HX_STACK_LINE(529)
				::openfl::_legacy::text::TextField tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(529)
				tmp12 = hx::TCast< ::openfl::_legacy::text::TextField >::cast(child);
				HX_STACK_LINE(529)
				tf = tmp12;
				HX_STACK_LINE(530)
				break;
			}
		}
	}
	HX_STACK_LINE(533)
	::openfl::_legacy::text::TextField tmp = tf;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(533)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInputLayout_obj,findTextField,return )

::haxe::ui::toolkit::layout::Layout TextInputLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","clone",0x9195c080,"haxe.ui.toolkit.controls.TextInputLayout.clone","src/haxe/ui/toolkit/controls/TextInputLayout.hx",1,0x8ff18862)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout tmp = hx::TCast< ::haxe::ui::toolkit::layout::DefaultLayout >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TextInputLayout c = ((::haxe::ui::toolkit::controls::TextInputLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::TextInputLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout TextInputLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInputLayout","self",0x6f1513c9,"haxe.ui.toolkit.controls.TextInputLayout.self","src/haxe/ui/toolkit/controls/TextInputLayout.hx",1,0x8ff18862)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TextInputLayout tmp = ::haxe::ui::toolkit::controls::TextInputLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



TextInputLayout_obj::TextInputLayout_obj()
{
}

Dynamic TextInputLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findTextField") ) { return findTextField_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	HX_HCSTRING("get_usableHeight","\x88","\x4d","\xc8","\x51"),
	HX_HCSTRING("findTextField","\x54","\xe5","\x32","\x7a"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextInputLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextInputLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class TextInputLayout_obj::__mClass;

void TextInputLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.TextInputLayout","\x51","\xc1","\x76","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextInputLayout_obj >;
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
