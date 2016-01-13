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
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalContinuousLayout
#include <haxe/ui/toolkit/layout/HorizontalContinuousLayout.h>
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

Void HorizontalContinuousLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","new",0x8639f8f1,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.new","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",8,0xe075d01f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//HorizontalContinuousLayout_obj::~HorizontalContinuousLayout_obj() { }

Dynamic HorizontalContinuousLayout_obj::__CreateEmpty() { return  new HorizontalContinuousLayout_obj; }
hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__new()
{  hx::ObjectPtr< HorizontalContinuousLayout_obj > _result_ = new HorizontalContinuousLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic HorizontalContinuousLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HorizontalContinuousLayout_obj > _result_ = new HorizontalContinuousLayout_obj();
	_result_->__construct();
	return _result_;}

Void HorizontalContinuousLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","repositionChildren",0x0255234a,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.repositionChildren","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",11,0xe075d01f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::repositionChildren();
		HX_STACK_LINE(14)
		::openfl::_legacy::geom::Rectangle tmp = this->get_padding();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		Float tmp1 = tmp->get_left();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		Float xpos = tmp1;		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(15)
		::openfl::_legacy::geom::Rectangle tmp2 = this->get_padding();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		Float tmp3 = tmp2->get_top();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		Float ypos = tmp3;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(16)
		::openfl::_legacy::geom::Rectangle tmp4 = this->get_padding();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		Float tmp5 = tmp4->get_left();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		::openfl::_legacy::geom::Rectangle tmp6 = this->get_padding();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		Float tmp7 = tmp6->get_right();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16)
		Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(16)
		Float usedCX = tmp8;		HX_STACK_VAR(usedCX,"usedCX");
		HX_STACK_LINE(17)
		::openfl::_legacy::geom::Rectangle tmp9 = this->get_padding();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(17)
		Float tmp10 = tmp9->get_top();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(17)
		::openfl::_legacy::geom::Rectangle tmp11 = this->get_padding();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(17)
		Float tmp12 = tmp11->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(17)
		Float tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(17)
		Float usedCY = tmp13;		HX_STACK_VAR(usedCY,"usedCY");
		HX_STACK_LINE(18)
		Float rowCY = (int)0;		HX_STACK_VAR(rowCY,"rowCY");
		HX_STACK_LINE(19)
		Array< Float > rowHeights = Array_obj< Float >::__new();		HX_STACK_VAR(rowHeights,"rowHeights");
		HX_STACK_LINE(20)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > rowChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(rowChildren,"rowChildren");
		HX_STACK_LINE(21)
		rowHeights->push((int)0);
		HX_STACK_LINE(22)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp14 = this->get_container();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(23)
		Float tmp15 = tmp14->get_width();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(23)
		Float maxCX = tmp15;		HX_STACK_VAR(maxCX,"maxCX");
		HX_STACK_LINE(24)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp16 = this->get_container();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(24)
		bool tmp17 = tmp16->get_autoSize();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(24)
		bool tmp18 = (tmp17 == true);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(24)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(24)
		if ((tmp18)){
			HX_STACK_LINE(24)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp20 = this->get_container();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(24)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(24)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp22 = tmp21->get_parent();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(24)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(24)
			tmp19 = (tmp23 != null());
		}
		else{
			HX_STACK_LINE(24)
			tmp19 = false;
		}
		HX_STACK_LINE(24)
		if ((tmp19)){
			HX_STACK_LINE(25)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp20 = this->get_container();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(25)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp21 = tmp20->get_parent();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(25)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp22 = tmp21->get_layout();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(25)
			Float tmp23 = tmp22->get_usableWidth();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(25)
			maxCX = tmp23;
		}
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp20 = this->get_container();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(27)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp20->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(27)
			while((true)){
				HX_STACK_LINE(27)
				bool tmp21 = (_g < _g1->length);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(27)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(27)
				if ((tmp22)){
					HX_STACK_LINE(27)
					break;
				}
				HX_STACK_LINE(27)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp23 = _g1->__get(_g);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(27)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp23;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(27)
				++(_g);
				HX_STACK_LINE(29)
				bool tmp24 = child->get_visible();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(29)
				bool tmp25 = (tmp24 == false);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(29)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(29)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(29)
				if ((tmp26)){
					HX_STACK_LINE(29)
					bool tmp28 = child->get_includeInLayout();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(29)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(29)
					tmp27 = (tmp29 == false);
				}
				else{
					HX_STACK_LINE(29)
					tmp27 = true;
				}
				HX_STACK_LINE(29)
				if ((tmp27)){
					HX_STACK_LINE(30)
					continue;
				}
				HX_STACK_LINE(33)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp28 = child;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(33)
				rowChildren->push(tmp28);
				HX_STACK_LINE(35)
				Float tmp29 = child->get_percentWidth();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(35)
				bool tmp30 = (tmp29 > (int)-1);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(35)
				if ((tmp30)){
					HX_STACK_LINE(36)
					Float tmp31 = maxCX;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(36)
					int tmp32 = this->get_spacingX();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(36)
					Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(36)
					Float tmp34 = child->get_percentWidth();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(36)
					Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(36)
					Float tmp36 = (Float(tmp35) / Float((int)100));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(36)
					child->set_width(tmp36);
				}
				HX_STACK_LINE(39)
				Float tmp31 = child->get_width();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(39)
				int tmp32 = this->get_spacingX();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(39)
				Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(39)
				hx::AddEq(usedCX,tmp33);
				HX_STACK_LINE(40)
				Float tmp34 = usedCX;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(40)
				int tmp35 = this->get_spacingX();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(40)
				Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(40)
				Float tmp37 = maxCX;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(40)
				bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(40)
				if ((tmp38)){
					HX_STACK_LINE(41)
					::openfl::_legacy::geom::Rectangle tmp39 = this->get_padding();		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(41)
					Float tmp40 = tmp39->get_left();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(41)
					xpos = tmp40;
					HX_STACK_LINE(42)
					rowHeights->push((int)0);
					HX_STACK_LINE(43)
					Float tmp41 = rowHeights->__get(row);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(43)
					int tmp42 = this->get_spacingY();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(43)
					Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(43)
					hx::AddEq(ypos,tmp43);
					HX_STACK_LINE(44)
					(row)++;
					HX_STACK_LINE(45)
					::openfl::_legacy::geom::Rectangle tmp44 = this->get_padding();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(45)
					Float tmp45 = tmp44->get_left();		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(45)
					::openfl::_legacy::geom::Rectangle tmp46 = this->get_padding();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(45)
					Float tmp47 = tmp46->get_right();		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(45)
					Float tmp48 = (tmp45 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(45)
					Float tmp49 = child->get_width();		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(45)
					Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(45)
					int tmp51 = this->get_spacingX();		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(45)
					Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(45)
					usedCX = tmp52;
					HX_STACK_LINE(47)
					rowChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();
					HX_STACK_LINE(48)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp53 = child;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(48)
					rowChildren->push(tmp53);
				}
				HX_STACK_LINE(51)
				bool reposition = false;		HX_STACK_VAR(reposition,"reposition");
				HX_STACK_LINE(52)
				Float tmp39 = child->get_height();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(52)
				Float tmp40 = rowHeights->__get(row);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(52)
				bool tmp41 = (tmp39 > tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(52)
				if ((tmp41)){
					HX_STACK_LINE(53)
					Float tmp42 = child->get_height();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(53)
					rowHeights[row] = tmp42;
					HX_STACK_LINE(54)
					reposition = true;
				}
				HX_STACK_LINE(57)
				::openfl::_legacy::geom::Rectangle tmp42 = this->get_padding();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(57)
				Float tmp43 = tmp42->get_top();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(57)
				::openfl::_legacy::geom::Rectangle tmp44 = this->get_padding();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(57)
				Float tmp45 = tmp44->get_bottom();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(57)
				Float tmp46 = (tmp43 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(57)
				usedCY = tmp46;
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(58)
					while((true)){
						HX_STACK_LINE(58)
						bool tmp47 = (_g2 < rowHeights->length);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(58)
						bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(58)
						if ((tmp48)){
							HX_STACK_LINE(58)
							break;
						}
						HX_STACK_LINE(58)
						Float tmp49 = rowHeights->__get(_g2);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(58)
						Float cy = tmp49;		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(58)
						++(_g2);
						HX_STACK_LINE(59)
						Float tmp50 = cy;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(59)
						int tmp51 = this->get_spacingY();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(59)
						Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(59)
						hx::AddEq(usedCY,tmp52);
					}
				}
				HX_STACK_LINE(61)
				int tmp47 = this->get_spacingY();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(61)
				hx::SubEq(usedCY,tmp47);
				HX_STACK_LINE(63)
				bool tmp48 = reposition;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(63)
				if ((tmp48)){
					HX_STACK_LINE(64)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(64)
					while((true)){
						HX_STACK_LINE(64)
						bool tmp49 = (_g2 < rowChildren->length);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(64)
						bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(64)
						if ((tmp50)){
							HX_STACK_LINE(64)
							break;
						}
						HX_STACK_LINE(64)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp51 = rowChildren->__get(_g2);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(64)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject temp = tmp51;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(64)
						++(_g2);
						HX_STACK_LINE(65)
						::String tmp52 = temp->get_verticalAlign();		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(65)
						::String valign = tmp52;		HX_STACK_VAR(valign,"valign");
						HX_STACK_LINE(66)
						Float tmp53 = temp->get_y();		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(66)
						Float tempYpos = tmp53;		HX_STACK_VAR(tempYpos,"tempYpos");
						HX_STACK_LINE(67)
						::String tmp54 = valign;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(67)
						::String _switch_1 = (tmp54);
						if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
							HX_STACK_LINE(69)
							Float tmp55 = usedCY;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(69)
							Float tmp56 = temp->get_height();		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(69)
							Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(69)
							::openfl::_legacy::geom::Rectangle tmp58 = this->get_padding();		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(69)
							Float tmp59 = tmp58->get_top();		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(69)
							Float tmp60 = (tmp57 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(69)
							Float tmp61 = rowHeights->__get(row);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(69)
							Float tmp62 = (Float(tmp61) / Float((int)2));		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(69)
							Float tmp63 = temp->get_height();		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(69)
							Float tmp64 = (Float(tmp63) / Float((int)2));		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(69)
							Float tmp65 = (tmp62 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(69)
							Float tmp66 = (tmp60 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(69)
							tempYpos = tmp66;
						}
						else if (  ( _switch_1==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
							HX_STACK_LINE(71)
							Float tmp55 = usedCY;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(71)
							Float tmp56 = temp->get_height();		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(71)
							Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(71)
							::openfl::_legacy::geom::Rectangle tmp58 = this->get_padding();		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(71)
							Float tmp59 = tmp58->get_top();		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(71)
							Float tmp60 = (tmp57 - tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(71)
							tempYpos = tmp60;
						}
						else  {
						}
;
;
						HX_STACK_LINE(74)
						Float tmp55 = tempYpos;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(74)
						temp->set_y(tmp55);
					}
				}
				HX_STACK_LINE(78)
				Float tmp49 = usedCX;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(78)
				int tmp50 = this->get_spacingX();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(78)
				Float tmp51 = (tmp49 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(78)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp52 = this->get_container();		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(78)
				Float tmp53 = tmp52->get_width();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(78)
				bool tmp54 = (tmp51 > tmp53);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(78)
				bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(78)
				if ((tmp54)){
					HX_STACK_LINE(78)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp56 = this->get_container();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(78)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(78)
					tmp55 = tmp57->get_autoSize();
				}
				else{
					HX_STACK_LINE(78)
					tmp55 = false;
				}
				HX_STACK_LINE(78)
				if ((tmp55)){
					HX_STACK_LINE(79)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp56 = this->get_container();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(79)
					Float tmp57 = usedCX;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(79)
					int tmp58 = this->get_spacingX();		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(79)
					Float tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(79)
					tmp56->set_width(tmp59);
				}
				HX_STACK_LINE(82)
				Float tmp56 = usedCY;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(82)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp57 = this->get_container();		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(82)
				Float tmp58 = tmp57->get_height();		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(82)
				bool tmp59 = (tmp56 > tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(82)
				bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(82)
				if ((tmp59)){
					HX_STACK_LINE(82)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp61 = this->get_container();		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(82)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(82)
					tmp60 = tmp62->get_autoSize();
				}
				else{
					HX_STACK_LINE(82)
					tmp60 = false;
				}
				HX_STACK_LINE(82)
				if ((tmp60)){
					HX_STACK_LINE(83)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp61 = this->get_container();		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(83)
					Float tmp62 = usedCY;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(83)
					tmp61->set_height(tmp62);
				}
				HX_STACK_LINE(86)
				::String tmp61 = child->get_verticalAlign();		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(86)
				::String valign = tmp61;		HX_STACK_VAR(valign,"valign");
				HX_STACK_LINE(87)
				Float tempYPos = ypos;		HX_STACK_VAR(tempYPos,"tempYPos");
				HX_STACK_LINE(88)
				::String tmp62 = valign;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(88)
				::String _switch_2 = (tmp62);
				if (  ( _switch_2==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(90)
					Float tmp63 = usedCY;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(90)
					Float tmp64 = child->get_height();		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(90)
					Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(90)
					::openfl::_legacy::geom::Rectangle tmp66 = this->get_padding();		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(90)
					Float tmp67 = tmp66->get_top();		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(90)
					Float tmp68 = (tmp65 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(90)
					Float tmp69 = rowHeights->__get(row);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(90)
					Float tmp70 = (Float(tmp69) / Float((int)2));		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(90)
					Float tmp71 = child->get_height();		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(90)
					Float tmp72 = (Float(tmp71) / Float((int)2));		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(90)
					Float tmp73 = (tmp70 - tmp72);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(90)
					Float tmp74 = (tmp68 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(90)
					tempYPos = tmp74;
				}
				else if (  ( _switch_2==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
					HX_STACK_LINE(92)
					Float tmp63 = usedCY;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(92)
					Float tmp64 = child->get_height();		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(92)
					Float tmp65 = (tmp63 - tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(92)
					::openfl::_legacy::geom::Rectangle tmp66 = this->get_padding();		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(92)
					Float tmp67 = tmp66->get_top();		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(92)
					Float tmp68 = (tmp65 - tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(92)
					tempYPos = tmp68;
				}
				else  {
				}
;
;
				HX_STACK_LINE(96)
				Float tmp63 = xpos;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(96)
				child->set_x(tmp63);
				HX_STACK_LINE(97)
				Float tmp64 = tempYPos;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(97)
				child->set_y(tmp64);
				HX_STACK_LINE(99)
				Float tmp65 = child->get_width();		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(99)
				int tmp66 = this->get_spacingX();		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(99)
				Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(99)
				hx::AddEq(xpos,tmp67);
			}
		}
	}
return null();
}


::haxe::ui::toolkit::layout::Layout HorizontalContinuousLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","clone",0xb291422e,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.clone","src/haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",1,0x6993846a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::HorizontalContinuousLayout c = ((::haxe::ui::toolkit::layout::HorizontalContinuousLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::layout::HorizontalContinuousLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout HorizontalContinuousLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","self",0xefcde1db,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.self","src/haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",1,0x6993846a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::HorizontalContinuousLayout tmp = ::haxe::ui::toolkit::layout::HorizontalContinuousLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



HorizontalContinuousLayout_obj::HorizontalContinuousLayout_obj()
{
}

Dynamic HorizontalContinuousLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
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
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalContinuousLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalContinuousLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class HorizontalContinuousLayout_obj::__mClass;

void HorizontalContinuousLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.layout.HorizontalContinuousLayout","\x7f","\xac","\xd4","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HorizontalContinuousLayout_obj >;
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
