#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_GridLayout
#include <haxe/ui/toolkit/layout/GridLayout.h>
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

Void GridLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","new",0xa8539e64,"haxe.ui.toolkit.layout.GridLayout.new","haxe/ui/toolkit/layout/GridLayout.hx",8,0x5e5bda0c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->_columns = (int)1;
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//GridLayout_obj::~GridLayout_obj() { }

Dynamic GridLayout_obj::__CreateEmpty() { return  new GridLayout_obj; }
hx::ObjectPtr< GridLayout_obj > GridLayout_obj::__new()
{  hx::ObjectPtr< GridLayout_obj > _result_ = new GridLayout_obj();
	_result_->__construct();
	return _result_;}

Dynamic GridLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GridLayout_obj > _result_ = new GridLayout_obj();
	_result_->__construct();
	return _result_;}

hx::Object *GridLayout_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

GridLayout_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< GridLayout_obj >(this); }
int GridLayout_obj::get_columns( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","get_columns",0x46977ef8,"haxe.ui.toolkit.layout.GridLayout.get_columns","haxe/ui/toolkit/layout/GridLayout.hx",21,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	int tmp = this->_columns;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GridLayout_obj,get_columns,return )

int GridLayout_obj::set_columns( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","set_columns",0x51048604,"haxe.ui.toolkit.layout.GridLayout.set_columns","haxe/ui/toolkit/layout/GridLayout.hx",25,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(26)
	this->_columns = value;
	HX_STACK_LINE(27)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(GridLayout_obj,set_columns,return )

Void GridLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","resizeChildren",0xbcc4ebcf,"haxe.ui.toolkit.layout.GridLayout.resizeChildren","haxe/ui/toolkit/layout/GridLayout.hx",33,0x5e5bda0c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->super::resizeChildren();
		HX_STACK_LINE(36)
		Array< Float > columnWidths = this->calcColumnWidths();		HX_STACK_VAR(columnWidths,"columnWidths");
		HX_STACK_LINE(37)
		Array< Float > rowHeights = this->calcRowHeights();		HX_STACK_VAR(rowHeights,"rowHeights");
		HX_STACK_LINE(38)
		Array< bool > explicitWidths = this->calcExplicitWidths();		HX_STACK_VAR(explicitWidths,"explicitWidths");
		HX_STACK_LINE(39)
		Array< bool > explicitHeights = this->calcExplicitHeights();		HX_STACK_VAR(explicitHeights,"explicitHeights");
		HX_STACK_LINE(40)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(41)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(43)
		int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(44)
		int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(45)
			while((true)){
				HX_STACK_LINE(45)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(45)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(45)
				if ((tmp2)){
					HX_STACK_LINE(45)
					break;
				}
				HX_STACK_LINE(45)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(45)
				++(_g);
				HX_STACK_LINE(47)
				bool tmp4 = child->get_visible();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(47)
				bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(47)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(47)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				if ((tmp6)){
					HX_STACK_LINE(47)
					bool tmp8 = child->get_includeInLayout();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(47)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(47)
					tmp7 = (tmp9 == false);
				}
				else{
					HX_STACK_LINE(47)
					tmp7 = true;
				}
				HX_STACK_LINE(47)
				if ((tmp7)){
					HX_STACK_LINE(48)
					continue;
				}
				HX_STACK_LINE(51)
				Float tmp8 = child->get_percentWidth();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(51)
				bool tmp9 = (tmp8 > (int)-1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(51)
				if ((tmp9)){
					HX_STACK_LINE(52)
					Float tmp10 = columnWidths->__get(columnIndex);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(52)
					Float ucx = tmp10;		HX_STACK_VAR(ucx,"ucx");
					HX_STACK_LINE(54)
					bool tmp11 = explicitWidths->__get(columnIndex);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					bool tmp12 = (tmp11 == false);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(54)
					if ((tmp12)){
						HX_STACK_LINE(55)
						Float tmp13 = ucx;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(55)
						child->set_width(tmp13);
					}
					else{
						HX_STACK_LINE(57)
						Float tmp13 = ucx;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(57)
						Float tmp14 = child->get_percentWidth();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(57)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(57)
						Float tmp16 = (Float(tmp15) / Float((int)100));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(57)
						child->set_width(tmp16);
					}
				}
				HX_STACK_LINE(61)
				Float tmp10 = child->get_percentHeight();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(61)
				bool tmp11 = (tmp10 > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(61)
				if ((tmp11)){
					HX_STACK_LINE(62)
					Float tmp12 = rowHeights->__get(rowIndex);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					Float ucy = tmp12;		HX_STACK_VAR(ucy,"ucy");
					HX_STACK_LINE(63)
					bool tmp13 = explicitHeights->__get(rowIndex);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(63)
					bool tmp14 = (tmp13 == false);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(63)
					if ((tmp14)){
						HX_STACK_LINE(64)
						Float tmp15 = ucy;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(64)
						child->set_height(tmp15);
					}
					else{
						HX_STACK_LINE(66)
						Float tmp15 = ucy;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(66)
						Float tmp16 = child->get_percentHeight();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(66)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(66)
						Float tmp18 = (Float(tmp17) / Float((int)100));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(66)
						child->set_height(tmp18);
					}
				}
				HX_STACK_LINE(70)
				(columnIndex)++;
				HX_STACK_LINE(71)
				int tmp12 = columnIndex;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(71)
				int tmp13 = this->_columns;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(71)
				bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(71)
				if ((tmp14)){
					HX_STACK_LINE(72)
					columnIndex = (int)0;
					HX_STACK_LINE(73)
					(rowIndex)++;
				}
			}
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			while((true)){
				HX_STACK_LINE(77)
				bool tmp = (_g < columnWidths->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(77)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(77)
				if ((tmp1)){
					HX_STACK_LINE(77)
					break;
				}
				HX_STACK_LINE(77)
				Float tmp2 = columnWidths->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(77)
				Float cx = tmp2;		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(77)
				++(_g);
				HX_STACK_LINE(78)
				hx::AddEq(totalWidth,cx);
			}
		}
		HX_STACK_LINE(80)
		bool tmp = (columnWidths->length > (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		if ((tmp)){
			HX_STACK_LINE(81)
			int tmp1 = this->get_spacingX();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			int tmp2 = (columnWidths->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(81)
			int tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			hx::AddEq(totalWidth,tmp3);
		}
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				bool tmp1 = (_g < rowHeights->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(84)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(84)
				if ((tmp2)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(84)
				Float tmp3 = rowHeights->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				Float cy = tmp3;		HX_STACK_VAR(cy,"cy");
				HX_STACK_LINE(84)
				++(_g);
				HX_STACK_LINE(85)
				hx::AddEq(totalHeight,cy);
			}
		}
		HX_STACK_LINE(87)
		bool tmp1 = (rowHeights->length > (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(88)
			int tmp2 = this->get_spacingY();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			int tmp3 = (rowHeights->length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			hx::AddEq(totalHeight,tmp4);
		}
		HX_STACK_LINE(91)
		Float tmp2 = totalWidth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		Float tmp3 = totalHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		this->autoSize(tmp2,tmp3);
	}
return null();
}


Void GridLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","repositionChildren",0xa97f9737,"haxe.ui.toolkit.layout.GridLayout.repositionChildren","haxe/ui/toolkit/layout/GridLayout.hx",94,0x5e5bda0c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		this->super::repositionChildren();
		HX_STACK_LINE(97)
		Array< Float > columnWidths = this->calcColumnWidths();		HX_STACK_VAR(columnWidths,"columnWidths");
		HX_STACK_LINE(98)
		Array< Float > rowHeights = this->calcRowHeights();		HX_STACK_VAR(rowHeights,"rowHeights");
		HX_STACK_LINE(99)
		int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(100)
		int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(101)
		::openfl::_legacy::geom::Rectangle tmp = this->get_padding();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		Float tmp1 = tmp->get_left();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		Float xpos = tmp1;		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(102)
		::openfl::_legacy::geom::Rectangle tmp2 = this->get_padding();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		Float tmp3 = tmp2->get_top();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		Float ypos = tmp3;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = this->get_container();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp4->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(104)
				if ((tmp6)){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(104)
				++(_g);
				HX_STACK_LINE(106)
				bool tmp8 = child->get_visible();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(106)
				bool tmp9 = (tmp8 == false);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(106)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(106)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(106)
				if ((tmp10)){
					HX_STACK_LINE(106)
					bool tmp12 = child->get_includeInLayout();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(106)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(106)
					tmp11 = (tmp13 == false);
				}
				else{
					HX_STACK_LINE(106)
					tmp11 = true;
				}
				HX_STACK_LINE(106)
				if ((tmp11)){
					HX_STACK_LINE(107)
					continue;
				}
				HX_STACK_LINE(110)
				::String tmp12 = child->get_horizontalAlign();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(110)
				::String halign = tmp12;		HX_STACK_VAR(halign,"halign");
				HX_STACK_LINE(111)
				::String tmp13 = child->get_verticalAlign();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(111)
				::String valign = tmp13;		HX_STACK_VAR(valign,"valign");
				HX_STACK_LINE(112)
				::String tmp14 = halign;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(112)
				::String _switch_1 = (tmp14);
				if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(114)
					Float tmp15 = xpos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(114)
					Float tmp16 = columnWidths->__get(columnIndex);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(114)
					Float tmp17 = child->get_width();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(114)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(114)
					Float tmp19 = (tmp18 * ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(114)
					Float tmp20 = (tmp15 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(114)
					child->set_x(tmp20);
				}
				else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
					HX_STACK_LINE(116)
					Float tmp15 = xpos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(116)
					Float tmp16 = columnWidths->__get(columnIndex);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(116)
					Float tmp17 = child->get_width();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(116)
					Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(116)
					Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(116)
					child->set_x(tmp19);
				}
				else  {
					HX_STACK_LINE(118)
					Float tmp15 = xpos;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(118)
					child->set_x(tmp15);
				}
;
;
				HX_STACK_LINE(120)
				::String tmp15 = valign;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(120)
				::String _switch_2 = (tmp15);
				if (  ( _switch_2==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(122)
					Float tmp16 = ypos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(122)
					Float tmp17 = rowHeights->__get(rowIndex);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(122)
					Float tmp18 = child->get_height();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(122)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(122)
					Float tmp20 = (tmp19 * ((Float)0.5));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(122)
					Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(122)
					child->set_y(tmp21);
				}
				else if (  ( _switch_2==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
					HX_STACK_LINE(124)
					Float tmp16 = ypos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(124)
					Float tmp17 = rowHeights->__get(rowIndex);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(124)
					Float tmp18 = child->get_height();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(124)
					Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(124)
					Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(124)
					child->set_y(tmp20);
				}
				else  {
					HX_STACK_LINE(126)
					Float tmp16 = ypos;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(126)
					child->set_y(tmp16);
				}
;
;
				HX_STACK_LINE(129)
				Float tmp16 = columnWidths->__get(columnIndex);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(129)
				int tmp17 = this->get_spacingX();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(129)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(129)
				hx::AddEq(xpos,tmp18);
				HX_STACK_LINE(131)
				(columnIndex)++;
				HX_STACK_LINE(132)
				int tmp19 = columnIndex;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(132)
				int tmp20 = this->_columns;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(132)
				bool tmp21 = (tmp19 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(132)
				if ((tmp21)){
					HX_STACK_LINE(133)
					::openfl::_legacy::geom::Rectangle tmp22 = this->get_padding();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(133)
					Float tmp23 = tmp22->get_left();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(133)
					xpos = tmp23;
					HX_STACK_LINE(134)
					Float tmp24 = rowHeights->__get(rowIndex);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(134)
					int tmp25 = this->get_spacingY();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(134)
					Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(134)
					hx::AddEq(ypos,tmp26);
					HX_STACK_LINE(135)
					columnIndex = (int)0;
					HX_STACK_LINE(136)
					(rowIndex)++;
				}
			}
		}
	}
return null();
}


Float GridLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","get_usableWidth",0x4bed8389,"haxe.ui.toolkit.layout.GridLayout.get_usableWidth","haxe/ui/toolkit/layout/GridLayout.hx",144,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	Float tmp = this->super::get_usableWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(147)
	Float tmp1 = ucx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	return tmp1;
}


Float GridLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","get_usableHeight",0xda350d04,"haxe.ui.toolkit.layout.GridLayout.get_usableHeight","haxe/ui/toolkit/layout/GridLayout.hx",150,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	Float tmp = this->super::get_usableHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	Float ucy = tmp;		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(153)
	Float tmp1 = ucy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	return tmp1;
}


Array< bool > GridLayout_obj::calcExplicitWidths( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","calcExplicitWidths",0xf9ca93b2,"haxe.ui.toolkit.layout.GridLayout.calcExplicitWidths","haxe/ui/toolkit/layout/GridLayout.hx",159,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(160)
	Array< bool > explicitWidths = Array_obj< bool >::__new();		HX_STACK_VAR(explicitWidths,"explicitWidths");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(161)
		int tmp = this->_columns;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(161)
		while((true)){
			HX_STACK_LINE(161)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(161)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(161)
			if ((tmp2)){
				HX_STACK_LINE(161)
				break;
			}
			HX_STACK_LINE(161)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			int n = tmp3;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(162)
			explicitWidths->push(false);
		}
	}
	HX_STACK_LINE(165)
	int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
	HX_STACK_LINE(166)
	int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(167)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			if ((tmp2)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(167)
			++(_g);
			HX_STACK_LINE(168)
			bool tmp4 = child->get_visible();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			if ((tmp6)){
				HX_STACK_LINE(168)
				bool tmp8 = child->get_includeInLayout();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(168)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(168)
				tmp7 = (tmp9 == false);
			}
			else{
				HX_STACK_LINE(168)
				tmp7 = true;
			}
			HX_STACK_LINE(168)
			if ((tmp7)){
				HX_STACK_LINE(169)
				continue;
			}
			HX_STACK_LINE(172)
			Float tmp8 = child->get_percentWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			bool tmp9 = (tmp8 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			if ((tmp9)){
				HX_STACK_LINE(172)
				Float tmp11 = child->get_width();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(172)
				tmp10 = (tmp12 > (int)0);
			}
			else{
				HX_STACK_LINE(172)
				tmp10 = false;
			}
			HX_STACK_LINE(172)
			if ((tmp10)){
				HX_STACK_LINE(173)
				explicitWidths[columnIndex] = true;
			}
			HX_STACK_LINE(176)
			(columnIndex)++;
			HX_STACK_LINE(177)
			int tmp11 = columnIndex;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(177)
			int tmp12 = this->_columns;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(177)
			bool tmp13 = (tmp11 >= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			if ((tmp13)){
				HX_STACK_LINE(178)
				columnIndex = (int)0;
				HX_STACK_LINE(179)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(183)
	return explicitWidths;
}


HX_DEFINE_DYNAMIC_FUNC0(GridLayout_obj,calcExplicitWidths,return )

Array< bool > GridLayout_obj::calcExplicitHeights( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","calcExplicitHeights",0x66b06307,"haxe.ui.toolkit.layout.GridLayout.calcExplicitHeights","haxe/ui/toolkit/layout/GridLayout.hx",186,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
	HX_STACK_LINE(188)
	{
		HX_STACK_LINE(188)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		while((true)){
			HX_STACK_LINE(188)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(188)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(188)
			if ((tmp2)){
				HX_STACK_LINE(188)
				break;
			}
			HX_STACK_LINE(188)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(188)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp3;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(188)
			++(_g);
			HX_STACK_LINE(189)
			bool tmp4 = c->get_visible();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			if ((tmp4)){
				HX_STACK_LINE(190)
				(visibleChildren)++;
			}
		}
	}
	HX_STACK_LINE(194)
	int tmp = visibleChildren;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	int tmp1 = this->_columns;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(194)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(194)
	int rowCount = tmp3;		HX_STACK_VAR(rowCount,"rowCount");
	HX_STACK_LINE(195)
	int tmp4 = visibleChildren;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(195)
	int tmp5 = this->_columns;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(195)
	int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(195)
	bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(195)
	if ((tmp7)){
		HX_STACK_LINE(196)
		(rowCount)++;
	}
	HX_STACK_LINE(198)
	Array< bool > explicitHeights = Array_obj< bool >::__new();		HX_STACK_VAR(explicitHeights,"explicitHeights");
	HX_STACK_LINE(199)
	{
		HX_STACK_LINE(199)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		while((true)){
			HX_STACK_LINE(199)
			bool tmp8 = (_g < rowCount);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(199)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(199)
			if ((tmp9)){
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(199)
			int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(199)
			int n = tmp10;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(200)
			explicitHeights->push(false);
		}
	}
	HX_STACK_LINE(203)
	int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
	HX_STACK_LINE(204)
	int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(205)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp8 = this->get_container();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(205)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp8->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(205)
		while((true)){
			HX_STACK_LINE(205)
			bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(205)
			if ((tmp10)){
				HX_STACK_LINE(205)
				break;
			}
			HX_STACK_LINE(205)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = _g1->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(205)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp11;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(205)
			++(_g);
			HX_STACK_LINE(206)
			bool tmp12 = child->get_visible();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(206)
			bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(206)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(206)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(206)
			if ((tmp14)){
				HX_STACK_LINE(206)
				bool tmp16 = child->get_includeInLayout();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(206)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(206)
				tmp15 = (tmp17 == false);
			}
			else{
				HX_STACK_LINE(206)
				tmp15 = true;
			}
			HX_STACK_LINE(206)
			if ((tmp15)){
				HX_STACK_LINE(207)
				continue;
			}
			HX_STACK_LINE(210)
			Float tmp16 = child->get_percentHeight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(210)
			bool tmp17 = (tmp16 < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(210)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(210)
			if ((tmp17)){
				HX_STACK_LINE(210)
				Float tmp19 = child->get_height();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(210)
				Float tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(210)
				tmp18 = (tmp20 > (int)0);
			}
			else{
				HX_STACK_LINE(210)
				tmp18 = false;
			}
			HX_STACK_LINE(210)
			if ((tmp18)){
				HX_STACK_LINE(211)
				int tmp19 = columnIndex;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				int tmp20 = this->_columns;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(211)
				int tmp21 = hx::Mod(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(211)
				explicitHeights[tmp21] = true;
			}
			HX_STACK_LINE(214)
			(columnIndex)++;
			HX_STACK_LINE(215)
			int tmp19 = columnIndex;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(215)
			int tmp20 = this->_columns;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(215)
			bool tmp21 = (tmp19 >= tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(215)
			if ((tmp21)){
				HX_STACK_LINE(216)
				columnIndex = (int)0;
				HX_STACK_LINE(217)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(221)
	return explicitHeights;
}


HX_DEFINE_DYNAMIC_FUNC0(GridLayout_obj,calcExplicitHeights,return )

Array< Float > GridLayout_obj::calcColumnWidths( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","calcColumnWidths",0x748246d4,"haxe.ui.toolkit.layout.GridLayout.calcColumnWidths","haxe/ui/toolkit/layout/GridLayout.hx",224,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	Array< Float > columnWidths = Array_obj< Float >::__new();		HX_STACK_VAR(columnWidths,"columnWidths");
	HX_STACK_LINE(226)
	{
		HX_STACK_LINE(226)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(226)
		int tmp = this->_columns;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(226)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			if ((tmp2)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(226)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			int n = tmp3;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(227)
			columnWidths->push((int)0);
		}
	}
	HX_STACK_LINE(230)
	int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
	HX_STACK_LINE(231)
	int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(232)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			if ((tmp2)){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(232)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(232)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(232)
			++(_g);
			HX_STACK_LINE(234)
			bool tmp4 = child->get_visible();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(234)
			bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(234)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(234)
			if ((tmp6)){
				HX_STACK_LINE(234)
				bool tmp8 = child->get_includeInLayout();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(234)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(234)
				tmp7 = (tmp9 == false);
			}
			else{
				HX_STACK_LINE(234)
				tmp7 = true;
			}
			HX_STACK_LINE(234)
			if ((tmp7)){
				HX_STACK_LINE(235)
				continue;
			}
			HX_STACK_LINE(238)
			Float tmp8 = child->get_percentWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			bool tmp9 = (tmp8 <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(238)
			if ((tmp9)){
				HX_STACK_LINE(239)
				Float tmp10 = child->get_width();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(239)
				Float tmp11 = columnWidths->__get(columnIndex);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(239)
				bool tmp12 = (tmp10 > tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(239)
				if ((tmp12)){
					HX_STACK_LINE(240)
					Float tmp13 = child->get_width();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(240)
					columnWidths[columnIndex] = tmp13;
				}
			}
			HX_STACK_LINE(243)
			(columnIndex)++;
			HX_STACK_LINE(244)
			int tmp10 = columnIndex;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(244)
			int tmp11 = this->_columns;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(244)
			bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(244)
			if ((tmp12)){
				HX_STACK_LINE(245)
				columnIndex = (int)0;
				HX_STACK_LINE(246)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(250)
	Array< Float > copy = columnWidths->copy();		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(252)
	rowIndex = (int)0;
	HX_STACK_LINE(253)
	columnIndex = (int)0;
	HX_STACK_LINE(254)
	{
		HX_STACK_LINE(254)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(254)
		while((true)){
			HX_STACK_LINE(254)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(254)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(254)
			if ((tmp2)){
				HX_STACK_LINE(254)
				break;
			}
			HX_STACK_LINE(254)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(254)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(254)
			++(_g);
			HX_STACK_LINE(256)
			bool tmp4 = child->get_visible();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(256)
			bool tmp5 = (tmp4 == false);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			if ((tmp6)){
				HX_STACK_LINE(256)
				bool tmp8 = child->get_includeInLayout();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(256)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(256)
				tmp7 = (tmp9 == false);
			}
			else{
				HX_STACK_LINE(256)
				tmp7 = true;
			}
			HX_STACK_LINE(256)
			if ((tmp7)){
				HX_STACK_LINE(257)
				continue;
			}
			HX_STACK_LINE(260)
			Float tmp8 = child->get_percentWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(260)
			if ((tmp9)){
				HX_STACK_LINE(261)
				Float tmp10 = this->get_usableWidth();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(261)
				int tmp11 = this->get_columns();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(261)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(261)
				int tmp13 = this->get_spacingX();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(261)
				int tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(261)
				Float tmp15 = (tmp10 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(261)
				Float ucx = tmp15;		HX_STACK_VAR(ucx,"ucx");
				HX_STACK_LINE(262)
				{
					HX_STACK_LINE(262)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(262)
					int _g2 = columnWidths->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(262)
					while((true)){
						HX_STACK_LINE(262)
						bool tmp16 = (_g3 < _g2);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(262)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(262)
						if ((tmp17)){
							HX_STACK_LINE(262)
							break;
						}
						HX_STACK_LINE(262)
						int tmp18 = (_g3)++;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(262)
						int n = tmp18;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(263)
						bool tmp19 = (n != columnIndex);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(263)
						if ((tmp19)){
							HX_STACK_LINE(264)
							Float tmp20 = copy->__get(n);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(264)
							hx::SubEq(ucx,tmp20);
						}
					}
				}
				HX_STACK_LINE(267)
				Float tmp16 = ucx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(267)
				Float tmp17 = child->get_percentWidth();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(267)
				Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(267)
				Float tmp19 = (Float(tmp18) / Float((int)100));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(267)
				Float cx = tmp19;		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(268)
				Float tmp20 = cx;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(268)
				Float tmp21 = columnWidths->__get(columnIndex);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(268)
				bool tmp22 = (tmp20 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(268)
				if ((tmp22)){
					HX_STACK_LINE(269)
					Float tmp23 = cx;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(269)
					columnWidths[columnIndex] = tmp23;
				}
			}
			HX_STACK_LINE(273)
			(columnIndex)++;
			HX_STACK_LINE(274)
			int tmp10 = columnIndex;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(274)
			int tmp11 = this->_columns;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(274)
			bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(274)
			if ((tmp12)){
				HX_STACK_LINE(275)
				columnIndex = (int)0;
				HX_STACK_LINE(276)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(280)
	return columnWidths;
}


HX_DEFINE_DYNAMIC_FUNC0(GridLayout_obj,calcColumnWidths,return )

Array< Float > GridLayout_obj::calcRowHeights( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","calcRowHeights",0xb7d73123,"haxe.ui.toolkit.layout.GridLayout.calcRowHeights","haxe/ui/toolkit/layout/GridLayout.hx",283,0x5e5bda0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
	HX_STACK_LINE(286)
	{
		HX_STACK_LINE(286)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(286)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(286)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(286)
		while((true)){
			HX_STACK_LINE(286)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			if ((tmp2)){
				HX_STACK_LINE(286)
				break;
			}
			HX_STACK_LINE(286)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(286)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject c = tmp3;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(286)
			++(_g);
			HX_STACK_LINE(287)
			bool tmp4 = c->get_visible();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			if ((tmp4)){
				HX_STACK_LINE(288)
				(visibleChildren)++;
			}
		}
	}
	HX_STACK_LINE(292)
	int tmp = visibleChildren;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	int tmp1 = this->_columns;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(292)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(292)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(292)
	int rowCount = tmp3;		HX_STACK_VAR(rowCount,"rowCount");
	HX_STACK_LINE(293)
	int tmp4 = visibleChildren;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(293)
	int tmp5 = this->_columns;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(293)
	int tmp6 = hx::Mod(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(293)
	bool tmp7 = (tmp6 != (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(293)
	if ((tmp7)){
		HX_STACK_LINE(294)
		(rowCount)++;
	}
	HX_STACK_LINE(296)
	Array< Float > rowHeights = Array_obj< Float >::__new();		HX_STACK_VAR(rowHeights,"rowHeights");
	HX_STACK_LINE(297)
	{
		HX_STACK_LINE(297)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(297)
		while((true)){
			HX_STACK_LINE(297)
			bool tmp8 = (_g < rowCount);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(297)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(297)
			if ((tmp9)){
				HX_STACK_LINE(297)
				break;
			}
			HX_STACK_LINE(297)
			int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(297)
			int n = tmp10;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(298)
			rowHeights->push((int)0);
		}
	}
	HX_STACK_LINE(301)
	int rowIndex = (int)0;		HX_STACK_VAR(rowIndex,"rowIndex");
	HX_STACK_LINE(302)
	int columnIndex = (int)0;		HX_STACK_VAR(columnIndex,"columnIndex");
	HX_STACK_LINE(303)
	{
		HX_STACK_LINE(303)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp8 = this->get_container();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(303)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp8->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(303)
		while((true)){
			HX_STACK_LINE(303)
			bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(303)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(303)
			if ((tmp10)){
				HX_STACK_LINE(303)
				break;
			}
			HX_STACK_LINE(303)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = _g1->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(303)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp11;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(303)
			++(_g);
			HX_STACK_LINE(305)
			bool tmp12 = child->get_visible();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(305)
			bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(305)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(305)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(305)
			if ((tmp14)){
				HX_STACK_LINE(305)
				bool tmp16 = child->get_includeInLayout();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(305)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(305)
				tmp15 = (tmp17 == false);
			}
			else{
				HX_STACK_LINE(305)
				tmp15 = true;
			}
			HX_STACK_LINE(305)
			if ((tmp15)){
				HX_STACK_LINE(306)
				continue;
			}
			HX_STACK_LINE(309)
			Float tmp16 = child->get_percentHeight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(309)
			bool tmp17 = (tmp16 <= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(309)
			if ((tmp17)){
				HX_STACK_LINE(310)
				Float tmp18 = child->get_height();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(310)
				Float tmp19 = rowHeights->__get(rowIndex);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(310)
				bool tmp20 = (tmp18 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(310)
				if ((tmp20)){
					HX_STACK_LINE(311)
					Float tmp21 = child->get_height();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(311)
					rowHeights[rowIndex] = tmp21;
				}
			}
			HX_STACK_LINE(314)
			(columnIndex)++;
			HX_STACK_LINE(315)
			int tmp18 = columnIndex;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(315)
			int tmp19 = this->_columns;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(315)
			bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(315)
			if ((tmp20)){
				HX_STACK_LINE(316)
				columnIndex = (int)0;
				HX_STACK_LINE(317)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(321)
	Array< Float > copy = rowHeights->copy();		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(323)
	rowIndex = (int)0;
	HX_STACK_LINE(324)
	columnIndex = (int)0;
	HX_STACK_LINE(325)
	{
		HX_STACK_LINE(325)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(325)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp8 = this->get_container();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(325)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = tmp8->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(325)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(325)
			if ((tmp10)){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(325)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = _g1->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(325)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = tmp11;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(325)
			++(_g);
			HX_STACK_LINE(327)
			bool tmp12 = child->get_visible();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(327)
			bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(327)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(327)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(327)
			if ((tmp14)){
				HX_STACK_LINE(327)
				bool tmp16 = child->get_includeInLayout();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(327)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(327)
				tmp15 = (tmp17 == false);
			}
			else{
				HX_STACK_LINE(327)
				tmp15 = true;
			}
			HX_STACK_LINE(327)
			if ((tmp15)){
				HX_STACK_LINE(328)
				continue;
			}
			HX_STACK_LINE(331)
			Float tmp16 = child->get_percentHeight();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(331)
			bool tmp17 = (tmp16 > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(331)
			if ((tmp17)){
				HX_STACK_LINE(332)
				Float tmp18 = this->get_usableHeight();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(332)
				int tmp19 = (rowCount - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(332)
				int tmp20 = this->get_spacingY();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(332)
				int tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(332)
				Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(332)
				Float ucy = tmp22;		HX_STACK_VAR(ucy,"ucy");
				HX_STACK_LINE(333)
				{
					HX_STACK_LINE(333)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(333)
					int _g2 = rowHeights->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(333)
					while((true)){
						HX_STACK_LINE(333)
						bool tmp23 = (_g3 < _g2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(333)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(333)
						if ((tmp24)){
							HX_STACK_LINE(333)
							break;
						}
						HX_STACK_LINE(333)
						int tmp25 = (_g3)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(333)
						int n = tmp25;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(334)
						bool tmp26 = (n != rowIndex);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(334)
						if ((tmp26)){
							HX_STACK_LINE(335)
							Float tmp27 = copy->__get(n);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(335)
							hx::SubEq(ucy,tmp27);
						}
					}
				}
				HX_STACK_LINE(339)
				Float tmp23 = ucy;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(339)
				Float tmp24 = child->get_percentHeight();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(339)
				Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(339)
				Float tmp26 = (Float(tmp25) / Float((int)100));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(339)
				Float cy = tmp26;		HX_STACK_VAR(cy,"cy");
				HX_STACK_LINE(340)
				Float tmp27 = cy;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(340)
				Float tmp28 = rowHeights->__get(rowIndex);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(340)
				bool tmp29 = (tmp27 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(340)
				bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(340)
				if ((tmp29)){
					HX_STACK_LINE(340)
					int tmp31 = this->_columns;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(340)
					int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(340)
					tmp30 = (tmp32 == (int)1);
				}
				else{
					HX_STACK_LINE(340)
					tmp30 = false;
				}
				HX_STACK_LINE(340)
				if ((tmp30)){
					HX_STACK_LINE(341)
					Float tmp31 = cy;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(341)
					rowHeights[rowIndex] = tmp31;
				}
				else{
					HX_STACK_LINE(342)
					Float tmp31 = ucy;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(342)
					Float tmp32 = rowHeights->__get(rowIndex);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(342)
					bool tmp33 = (tmp31 > tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(342)
					if ((tmp33)){
						HX_STACK_LINE(343)
						Float tmp34 = ucy;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(343)
						rowHeights[rowIndex] = tmp34;
					}
				}
			}
			HX_STACK_LINE(346)
			(columnIndex)++;
			HX_STACK_LINE(347)
			int tmp18 = columnIndex;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(347)
			int tmp19 = this->_columns;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(347)
			bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(347)
			if ((tmp20)){
				HX_STACK_LINE(348)
				columnIndex = (int)0;
				HX_STACK_LINE(349)
				(rowIndex)++;
			}
		}
	}
	HX_STACK_LINE(352)
	return rowHeights;
}


HX_DEFINE_DYNAMIC_FUNC0(GridLayout_obj,calcRowHeights,return )

::haxe::ui::toolkit::layout::Layout GridLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","clone",0xca756a61,"haxe.ui.toolkit.layout.GridLayout.clone","src/haxe/ui/toolkit/layout/GridLayout.hx",1,0x644f0857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->super::clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::GridLayout c = ((::haxe::ui::toolkit::layout::GridLayout)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	int tmp1 = this->get_columns();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_columns(tmp1);
	HX_STACK_LINE(4)
	::haxe::ui::toolkit::layout::GridLayout tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	return tmp2;
}


::haxe::ui::toolkit::layout::Layout GridLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.GridLayout","self",0xa4250108,"haxe.ui.toolkit.layout.GridLayout.self","src/haxe/ui/toolkit/layout/GridLayout.hx",1,0x644f0857)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::GridLayout tmp = ::haxe::ui::toolkit::layout::GridLayout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



GridLayout_obj::GridLayout_obj()
{
}

Dynamic GridLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return get_columns(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { return _columns; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return set_columns_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"calcRowHeights") ) { return calcRowHeights_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"calcColumnWidths") ) { return calcColumnWidths_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"calcExplicitWidths") ) { return calcExplicitWidths_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"calcExplicitHeights") ) { return calcExplicitHeights_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GridLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { if (inCallProp == hx::paccAlways) return set_columns(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_columns") ) { _columns=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GridLayout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void GridLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GridLayout_obj,_columns),HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_columns","\x5e","\x06","\x12","\x2d"),
	HX_HCSTRING("get_columns","\xf4","\x0c","\x54","\x79"),
	HX_HCSTRING("set_columns","\x00","\x14","\xc1","\x83"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	HX_HCSTRING("get_usableHeight","\x88","\x4d","\xc8","\x51"),
	HX_HCSTRING("calcExplicitWidths","\x36","\xfd","\x11","\xed"),
	HX_HCSTRING("calcExplicitHeights","\x03","\x4d","\xe5","\x51"),
	HX_HCSTRING("calcColumnWidths","\x58","\x87","\x15","\xec"),
	HX_HCSTRING("calcRowHeights","\xa7","\x88","\x42","\xbc"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class GridLayout_obj::__mClass;

void GridLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.layout.GridLayout","\x72","\xdc","\xcb","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &GridLayout_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GridLayout_obj >;
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
