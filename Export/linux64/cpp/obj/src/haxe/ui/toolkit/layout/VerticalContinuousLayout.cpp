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
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout
#include <haxe/ui/toolkit/layout/VerticalContinuousLayout.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void VerticalContinuousLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","new",0x6c53b103,"haxe.ui.toolkit.layout.VerticalContinuousLayout.new","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",8,0xd83d204d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//VerticalContinuousLayout_obj::~VerticalContinuousLayout_obj() { }

Dynamic VerticalContinuousLayout_obj::__CreateEmpty() { return  new VerticalContinuousLayout_obj; }
hx::ObjectPtr< VerticalContinuousLayout_obj > VerticalContinuousLayout_obj::__new()
{  hx::ObjectPtr< VerticalContinuousLayout_obj > _result_ = new VerticalContinuousLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic VerticalContinuousLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VerticalContinuousLayout_obj > _result_ = new VerticalContinuousLayout_obj();
	_result_->__construct();
	return _result_;}

Void VerticalContinuousLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","repositionChildren",0x7f4d4f78,"haxe.ui.toolkit.layout.VerticalContinuousLayout.repositionChildren","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",11,0xd83d204d)
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
		Float colCX = (int)0;		HX_STACK_VAR(colCX,"colCX");
		HX_STACK_LINE(19)
		Array< Float > colWidths = Array_obj< Float >::__new();		HX_STACK_VAR(colWidths,"colWidths");
		HX_STACK_LINE(20)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > colChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(colChildren,"colChildren");
		HX_STACK_LINE(21)
		colWidths->push((int)0);
		HX_STACK_LINE(22)
		int col = (int)0;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp14 = this->get_container();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(23)
		Float tmp15 = tmp14->get_height();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(23)
		Float maxCY = tmp15;		HX_STACK_VAR(maxCY,"maxCY");
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
			Float tmp23 = tmp22->get_usableHeight();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(25)
			maxCY = tmp23;
		}
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(28)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp20 = this->get_container();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(28)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp20->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(28)
			while((true)){
				HX_STACK_LINE(28)
				bool tmp21 = (_g < _g1->length);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(28)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(28)
				if ((tmp22)){
					HX_STACK_LINE(28)
					break;
				}
				HX_STACK_LINE(28)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp23 = _g1->__get(_g);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(28)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp23;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(28)
				++(_g);
				HX_STACK_LINE(30)
				bool tmp24 = child->get_visible();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(30)
				bool tmp25 = (tmp24 == false);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(30)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(30)
				bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(30)
				if ((tmp26)){
					HX_STACK_LINE(30)
					bool tmp28 = child->get_includeInLayout();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(30)
					bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(30)
					tmp27 = (tmp29 == false);
				}
				else{
					HX_STACK_LINE(30)
					tmp27 = true;
				}
				HX_STACK_LINE(30)
				if ((tmp27)){
					HX_STACK_LINE(31)
					continue;
				}
				HX_STACK_LINE(34)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp28 = child;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(34)
				colChildren->push(tmp28);
				HX_STACK_LINE(35)
				Float tmp29 = child->get_height();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(35)
				int tmp30 = this->get_spacingY();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(35)
				Float tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(35)
				hx::AddEq(usedCY,tmp31);
				HX_STACK_LINE(36)
				Float tmp32 = usedCY;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(36)
				int tmp33 = this->get_spacingY();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(36)
				Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(36)
				Float tmp35 = maxCY;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(36)
				bool tmp36 = (tmp34 > tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(36)
				if ((tmp36)){
					HX_STACK_LINE(37)
					::openfl::_legacy::geom::Rectangle tmp37 = this->get_padding();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(37)
					Float tmp38 = tmp37->get_top();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(37)
					ypos = tmp38;
					HX_STACK_LINE(38)
					colWidths->push((int)0);
					HX_STACK_LINE(39)
					Float tmp39 = colWidths->__get(col);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(39)
					int tmp40 = this->get_spacingX();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(39)
					Float tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(39)
					hx::AddEq(xpos,tmp41);
					HX_STACK_LINE(40)
					(col)++;
					HX_STACK_LINE(41)
					::openfl::_legacy::geom::Rectangle tmp42 = this->get_padding();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(41)
					Float tmp43 = tmp42->get_top();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(41)
					::openfl::_legacy::geom::Rectangle tmp44 = this->get_padding();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(41)
					Float tmp45 = tmp44->get_bottom();		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(41)
					Float tmp46 = (tmp43 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(41)
					Float tmp47 = child->get_height();		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(41)
					Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(41)
					int tmp49 = this->get_spacingY();		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(41)
					Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(41)
					usedCY = tmp50;
					HX_STACK_LINE(43)
					colChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();
					HX_STACK_LINE(44)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp51 = child;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(44)
					colChildren->push(tmp51);
				}
				HX_STACK_LINE(47)
				bool reposition = false;		HX_STACK_VAR(reposition,"reposition");
				HX_STACK_LINE(48)
				Float tmp37 = child->get_width();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(48)
				Float tmp38 = colWidths->__get(col);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(48)
				bool tmp39 = (tmp37 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(48)
				if ((tmp39)){
					HX_STACK_LINE(49)
					Float tmp40 = child->get_width();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(49)
					colWidths[col] = tmp40;
					HX_STACK_LINE(50)
					reposition = true;
				}
				HX_STACK_LINE(53)
				::openfl::_legacy::geom::Rectangle tmp40 = this->get_padding();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(53)
				Float tmp41 = tmp40->get_left();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(53)
				::openfl::_legacy::geom::Rectangle tmp42 = this->get_padding();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(53)
				Float tmp43 = tmp42->get_right();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(53)
				Float tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(53)
				usedCX = tmp44;
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(54)
					while((true)){
						HX_STACK_LINE(54)
						bool tmp45 = (_g2 < colWidths->length);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(54)
						bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(54)
						if ((tmp46)){
							HX_STACK_LINE(54)
							break;
						}
						HX_STACK_LINE(54)
						Float tmp47 = colWidths->__get(_g2);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(54)
						Float cx = tmp47;		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(54)
						++(_g2);
						HX_STACK_LINE(55)
						Float tmp48 = cx;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(55)
						int tmp49 = this->get_spacingX();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(55)
						Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(55)
						hx::AddEq(usedCX,tmp50);
					}
				}
				HX_STACK_LINE(57)
				int tmp45 = this->get_spacingX();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(57)
				hx::SubEq(usedCX,tmp45);
				HX_STACK_LINE(59)
				bool tmp46 = reposition;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(59)
				if ((tmp46)){
					HX_STACK_LINE(60)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(60)
					while((true)){
						HX_STACK_LINE(60)
						bool tmp47 = (_g2 < colChildren->length);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(60)
						bool tmp48 = !(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(60)
						if ((tmp48)){
							HX_STACK_LINE(60)
							break;
						}
						HX_STACK_LINE(60)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp49 = colChildren->__get(_g2);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(60)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject temp = tmp49;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(60)
						++(_g2);
						HX_STACK_LINE(61)
						::String tmp50 = child->get_horizontalAlign();		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(61)
						::String halign = tmp50;		HX_STACK_VAR(halign,"halign");
						HX_STACK_LINE(62)
						Float tmp51 = temp->get_x();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(62)
						Float tempXpos = tmp51;		HX_STACK_VAR(tempXpos,"tempXpos");
						HX_STACK_LINE(63)
						::String tmp52 = halign;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(63)
						::String _switch_1 = (tmp52);
						if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
							HX_STACK_LINE(65)
							Float tmp53 = usedCX;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(65)
							Float tmp54 = temp->get_width();		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(65)
							Float tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(65)
							::openfl::_legacy::geom::Rectangle tmp56 = this->get_padding();		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(65)
							Float tmp57 = tmp56->get_left();		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(65)
							Float tmp58 = (tmp55 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(65)
							Float tmp59 = colWidths->__get(col);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(65)
							Float tmp60 = (Float(tmp59) / Float((int)2));		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(65)
							Float tmp61 = temp->get_width();		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(65)
							Float tmp62 = (Float(tmp61) / Float((int)2));		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(65)
							Float tmp63 = (tmp60 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(65)
							Float tmp64 = (tmp58 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(65)
							tempXpos = tmp64;
						}
						else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
							HX_STACK_LINE(67)
							Float tmp53 = usedCX;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(67)
							Float tmp54 = temp->get_width();		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(67)
							Float tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(67)
							::openfl::_legacy::geom::Rectangle tmp56 = this->get_padding();		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(67)
							Float tmp57 = tmp56->get_left();		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(67)
							Float tmp58 = (tmp55 - tmp57);		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(67)
							tempXpos = tmp58;
						}
						else  {
						}
;
;
						HX_STACK_LINE(70)
						Float tmp53 = tempXpos;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(70)
						temp->set_x(tmp53);
					}
				}
				HX_STACK_LINE(74)
				Float tmp47 = usedCY;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(74)
				int tmp48 = this->get_spacingY();		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(74)
				Float tmp49 = (tmp47 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(74)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp50 = this->get_container();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(74)
				Float tmp51 = tmp50->get_height();		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(74)
				bool tmp52 = (tmp49 > tmp51);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(74)
				bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(74)
				if ((tmp52)){
					HX_STACK_LINE(74)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp54 = this->get_container();		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(74)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(74)
					tmp53 = tmp55->get_autoSize();
				}
				else{
					HX_STACK_LINE(74)
					tmp53 = false;
				}
				HX_STACK_LINE(74)
				if ((tmp53)){
					HX_STACK_LINE(75)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp54 = this->get_container();		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(75)
					Float tmp55 = usedCY;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(75)
					int tmp56 = this->get_spacingY();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(75)
					Float tmp57 = (tmp55 - tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(75)
					tmp54->set_height(tmp57);
				}
				HX_STACK_LINE(78)
				Float tmp54 = usedCX;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(78)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp55 = this->get_container();		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(78)
				Float tmp56 = tmp55->get_width();		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(78)
				bool tmp57 = (tmp54 > tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(78)
				bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(78)
				if ((tmp57)){
					HX_STACK_LINE(78)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp59 = this->get_container();		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(78)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(78)
					tmp58 = tmp60->get_autoSize();
				}
				else{
					HX_STACK_LINE(78)
					tmp58 = false;
				}
				HX_STACK_LINE(78)
				if ((tmp58)){
					HX_STACK_LINE(79)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp59 = this->get_container();		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(79)
					Float tmp60 = usedCX;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(79)
					tmp59->set_width(tmp60);
				}
				HX_STACK_LINE(82)
				::String tmp59 = child->get_horizontalAlign();		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(82)
				::String halign = tmp59;		HX_STACK_VAR(halign,"halign");
				HX_STACK_LINE(83)
				Float tempXPos = xpos;		HX_STACK_VAR(tempXPos,"tempXPos");
				HX_STACK_LINE(84)
				::String tmp60 = halign;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(84)
				::String _switch_2 = (tmp60);
				if (  ( _switch_2==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(86)
					Float tmp61 = usedCX;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(86)
					Float tmp62 = child->get_width();		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(86)
					Float tmp63 = (tmp61 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(86)
					::openfl::_legacy::geom::Rectangle tmp64 = this->get_padding();		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(86)
					Float tmp65 = tmp64->get_left();		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(86)
					Float tmp66 = (tmp63 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(86)
					Float tmp67 = colWidths->__get(col);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(86)
					Float tmp68 = (Float(tmp67) / Float((int)2));		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(86)
					Float tmp69 = child->get_width();		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(86)
					Float tmp70 = (Float(tmp69) / Float((int)2));		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(86)
					Float tmp71 = (tmp68 - tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(86)
					Float tmp72 = (tmp66 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(86)
					tempXPos = tmp72;
				}
				else if (  ( _switch_2==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
					HX_STACK_LINE(88)
					Float tmp61 = usedCX;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(88)
					Float tmp62 = child->get_width();		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(88)
					Float tmp63 = (tmp61 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(88)
					::openfl::_legacy::geom::Rectangle tmp64 = this->get_padding();		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(88)
					Float tmp65 = tmp64->get_left();		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(88)
					Float tmp66 = (tmp63 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(88)
					tempXPos = tmp66;
				}
				else  {
				}
;
;
				HX_STACK_LINE(92)
				Float tmp61 = tempXPos;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(92)
				child->set_x(tmp61);
				HX_STACK_LINE(93)
				Float tmp62 = ypos;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(93)
				child->set_y(tmp62);
				HX_STACK_LINE(95)
				Float tmp63 = child->get_height();		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(95)
				int tmp64 = this->get_spacingY();		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(95)
				Float tmp65 = (tmp63 + tmp64);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(95)
				hx::AddEq(ypos,tmp65);
			}
		}
	}
return null();
}


::haxe::ui::toolkit::layout::Layout VerticalContinuousLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","clone",0x9c96a2c0,"haxe.ui.toolkit.layout.VerticalContinuousLayout.clone","src/haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",1,0x1ddc9bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::VerticalContinuousLayout c = ((::haxe::ui::toolkit::layout::VerticalContinuousLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::layout::VerticalContinuousLayout tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::layout::Layout VerticalContinuousLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","self",0x60353989,"haxe.ui.toolkit.layout.VerticalContinuousLayout.self","src/haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",1,0x1ddc9bd8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::VerticalContinuousLayout tmp = ::haxe::ui::toolkit::layout::VerticalContinuousLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



VerticalContinuousLayout_obj::VerticalContinuousLayout_obj()
{
}

Dynamic VerticalContinuousLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(VerticalContinuousLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalContinuousLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class VerticalContinuousLayout_obj::__mClass;

void VerticalContinuousLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.layout.VerticalContinuousLayout","\x91","\x73","\xc8","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VerticalContinuousLayout_obj >;
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
