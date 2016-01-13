#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void HorizontalLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalLayout","new",0xa64b8b82,"haxe.ui.toolkit.layout.HorizontalLayout.new","haxe/ui/toolkit/layout/HorizontalLayout.hx",7,0x9963daae)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct();
}
;
	return null();
}

//HorizontalLayout_obj::~HorizontalLayout_obj() { }

Dynamic HorizontalLayout_obj::__CreateEmpty() { return  new HorizontalLayout_obj; }
hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__new()
{  hx::ObjectPtr< HorizontalLayout_obj > _result_ = new HorizontalLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic HorizontalLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HorizontalLayout_obj > _result_ = new HorizontalLayout_obj();
	_result_->__construct();
	return _result_;}

Void HorizontalLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalLayout","resizeChildren",0x9118f771,"haxe.ui.toolkit.layout.HorizontalLayout.resizeChildren","haxe/ui/toolkit/layout/HorizontalLayout.hx",13,0x9963daae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		this->super::resizeChildren();
		HX_STACK_LINE(15)
		Float tmp = this->get_usableWidth();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(15)
		Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(16)
		Float tmp1 = this->get_usableHeight();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		Float ucy = tmp1;		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(17)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(18)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(19)
		int numChildren = (int)0;		HX_STACK_VAR(numChildren,"numChildren");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(21)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(21)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp2->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(21)
			while((true)){
				HX_STACK_LINE(21)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(21)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(21)
				if ((tmp4)){
					HX_STACK_LINE(21)
					break;
				}
				HX_STACK_LINE(21)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(21)
				++(_g);
				HX_STACK_LINE(23)
				bool tmp6 = child->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(23)
				bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(23)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(23)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(23)
				if ((tmp8)){
					HX_STACK_LINE(23)
					bool tmp10 = child->get_includeInLayout();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(23)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(23)
					tmp9 = (tmp11 == false);
				}
				else{
					HX_STACK_LINE(23)
					tmp9 = true;
				}
				HX_STACK_LINE(23)
				if ((tmp9)){
					HX_STACK_LINE(24)
					continue;
				}
				HX_STACK_LINE(27)
				(numChildren)++;
				HX_STACK_LINE(29)
				Float tmp10 = child->get_percentWidth();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				bool tmp11 = (tmp10 > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(29)
				if ((tmp11)){
					HX_STACK_LINE(30)
					Float tmp12 = ucx;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(30)
					Float tmp13 = child->get_percentWidth();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(30)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(30)
					Float tmp15 = (Float(tmp14) / Float((int)100));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(30)
					child->set_width(tmp15);
				}
				HX_STACK_LINE(33)
				Float tmp12 = child->get_percentHeight();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(33)
				bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(33)
				if ((tmp13)){
					HX_STACK_LINE(34)
					Float tmp14 = ucy;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(34)
					Float tmp15 = child->get_percentHeight();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(34)
					Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(34)
					Float tmp17 = (Float(tmp16) / Float((int)100));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(34)
					child->set_height(tmp17);
				}
				HX_STACK_LINE(37)
				Float tmp14 = child->get_width();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(37)
				hx::AddEq(totalWidth,tmp14);
				HX_STACK_LINE(38)
				Float tmp15 = child->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(38)
				Float tmp16 = totalHeight;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(38)
				bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(38)
				if ((tmp17)){
					HX_STACK_LINE(39)
					Float tmp18 = child->get_height();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(39)
					totalHeight = tmp18;
				}
			}
		}
		HX_STACK_LINE(43)
		bool tmp2 = (numChildren > (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(43)
		if ((tmp2)){
			HX_STACK_LINE(44)
			int tmp3 = this->get_spacingX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(44)
			int tmp4 = (numChildren - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			int tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(44)
			hx::AddEq(totalWidth,tmp5);
		}
		HX_STACK_LINE(47)
		Float tmp3 = totalWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		Float tmp4 = totalHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		this->autoSize(tmp3,tmp4);
	}
return null();
}


Void HorizontalLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalLayout","repositionChildren",0xe71f1bd9,"haxe.ui.toolkit.layout.HorizontalLayout.repositionChildren","haxe/ui/toolkit/layout/HorizontalLayout.hx",50,0x9963daae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->super::repositionChildren();
		HX_STACK_LINE(52)
		::openfl::_legacy::geom::Rectangle tmp = this->get_padding();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		Float tmp1 = tmp->get_left();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		Float xpos = tmp1;		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp2->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(53)
				if ((tmp4)){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(53)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(53)
				++(_g);
				HX_STACK_LINE(55)
				bool tmp6 = child->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(55)
				bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(55)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				if ((tmp8)){
					HX_STACK_LINE(55)
					bool tmp10 = child->get_includeInLayout();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(55)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(55)
					tmp9 = (tmp11 == false);
				}
				else{
					HX_STACK_LINE(55)
					tmp9 = true;
				}
				HX_STACK_LINE(55)
				if ((tmp9)){
					HX_STACK_LINE(56)
					continue;
				}
				HX_STACK_LINE(59)
				::openfl::_legacy::geom::Rectangle tmp10 = this->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(59)
				Float tmp11 = tmp10->get_top();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(59)
				Float ypos = tmp11;		HX_STACK_VAR(ypos,"ypos");
				HX_STACK_LINE(60)
				::String tmp12 = child->get_verticalAlign();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				::String valign = tmp12;		HX_STACK_VAR(valign,"valign");
				HX_STACK_LINE(62)
				::String tmp13 = valign;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(62)
				::String _switch_1 = (tmp13);
				if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(64)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp14 = this->get_container();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(64)
					Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(64)
					Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(64)
					Float tmp17 = child->get_height();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(64)
					Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(64)
					Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(64)
					ypos = tmp19;
				}
				else if (  ( _switch_1==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
					HX_STACK_LINE(66)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp14 = this->get_container();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(66)
					Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(66)
					Float tmp16 = child->get_height();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(66)
					Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(66)
					::openfl::_legacy::geom::Rectangle tmp18 = this->get_padding();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(66)
					Float tmp19 = tmp18->get_bottom();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(66)
					Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(66)
					ypos = tmp20;
				}
				else  {
				}
;
;
				HX_STACK_LINE(70)
				Float tmp14 = xpos;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(70)
				child->set_x(tmp14);
				HX_STACK_LINE(71)
				Float tmp15 = ypos;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(71)
				child->set_y(tmp15);
				HX_STACK_LINE(73)
				Float tmp16 = child->get_width();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				int tmp17 = this->get_spacingX();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(73)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(73)
				hx::AddEq(xpos,tmp18);
			}
		}
	}
return null();
}


Float HorizontalLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalLayout","get_usableWidth",0x4123a5a7,"haxe.ui.toolkit.layout.HorizontalLayout.get_usableWidth","haxe/ui/toolkit/layout/HorizontalLayout.hx",80,0x9963daae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Float tmp = this->super::get_usableWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(83)
	int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp1 = this->get_container();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp1->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			if ((tmp3)){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(84)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(84)
			++(_g);
			HX_STACK_LINE(85)
			bool tmp5 = c->get_visible();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			if ((tmp5)){
				HX_STACK_LINE(86)
				(visibleChildren)++;
			}
		}
	}
	HX_STACK_LINE(90)
	bool tmp1 = (visibleChildren > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	if ((tmp1)){
		HX_STACK_LINE(91)
		int tmp2 = this->get_spacingX();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		int tmp3 = (visibleChildren - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		hx::SubEq(ucx,tmp4);
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp2->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		while((true)){
			HX_STACK_LINE(94)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(94)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			if ((tmp4)){
				HX_STACK_LINE(94)
				break;
			}
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(94)
			++(_g);
			HX_STACK_LINE(96)
			bool tmp6 = child->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(96)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			if ((tmp8)){
				HX_STACK_LINE(96)
				bool tmp10 = child->get_includeInLayout();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				tmp9 = (tmp11 == false);
			}
			else{
				HX_STACK_LINE(96)
				tmp9 = true;
			}
			HX_STACK_LINE(96)
			if ((tmp9)){
				HX_STACK_LINE(97)
				continue;
			}
			HX_STACK_LINE(100)
			Float tmp10 = child->get_width();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(100)
			bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			if ((tmp11)){
				HX_STACK_LINE(100)
				Float tmp13 = child->get_percentWidth();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(100)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(100)
				tmp12 = (tmp14 < (int)0);
			}
			else{
				HX_STACK_LINE(100)
				tmp12 = false;
			}
			HX_STACK_LINE(100)
			if ((tmp12)){
				HX_STACK_LINE(101)
				Float tmp13 = child->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(101)
				hx::SubEq(ucx,tmp13);
			}
		}
	}
	HX_STACK_LINE(105)
	bool tmp2 = (ucx < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	if ((tmp2)){
		HX_STACK_LINE(106)
		ucx = (int)0;
	}
	HX_STACK_LINE(109)
	Float tmp3 = ucx;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	return tmp3;
}


::haxe::ui::toolkit::layout::Layout HorizontalLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalLayout","clone",0x28195aff,"haxe.ui.toolkit.layout.HorizontalLayout.clone","src/haxe/ui/toolkit/layout/HorizontalLayout.hx",1,0x21b75339)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::HorizontalLayout c = ((::haxe::ui::toolkit::layout::HorizontalLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::layout::HorizontalLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout HorizontalLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalLayout","self",0xdf1c8e2a,"haxe.ui.toolkit.layout.HorizontalLayout.self","src/haxe/ui/toolkit/layout/HorizontalLayout.hx",1,0x21b75339)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::HorizontalLayout tmp = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



HorizontalLayout_obj::HorizontalLayout_obj()
{
}

Dynamic HorizontalLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
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
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HorizontalLayout_obj::__mClass;

void HorizontalLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.layout.HorizontalLayout","\x90","\x62","\x83","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HorizontalLayout_obj >;
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
} // end namespace layout
