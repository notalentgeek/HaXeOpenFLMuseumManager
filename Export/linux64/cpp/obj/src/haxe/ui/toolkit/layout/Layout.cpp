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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void Layout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","new",0x3c7676fe,"haxe.ui.toolkit.layout.Layout.new","haxe/ui/toolkit/layout/Layout.hx",11,0xbf2052b2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->_spacingY = (int)0;
	HX_STACK_LINE(14)
	this->_spacingX = (int)0;
	HX_STACK_LINE(18)
	::openfl::_legacy::geom::Rectangle tmp = ::openfl::_legacy::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	this->_padding = tmp;
}
;
	return null();
}

//Layout_obj::~Layout_obj() { }

Dynamic Layout_obj::__CreateEmpty() { return  new Layout_obj; }
hx::ObjectPtr< Layout_obj > Layout_obj::__new()
{  hx::ObjectPtr< Layout_obj > _result_ = new Layout_obj();
	_result_->__construct();
	return _result_;}

Dynamic Layout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layout_obj > _result_ = new Layout_obj();
	_result_->__construct();
	return _result_;}

hx::Object *Layout_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::ILayout_obj)) return operator ::haxe::ui::toolkit::core::interfaces::ILayout_obj *();
	return super::__ToInterface(inType);
}

Layout_obj::operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Layout_obj >(this); }
Layout_obj::operator ::haxe::ui::toolkit::core::interfaces::ILayout_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::ILayout_delegate_< Layout_obj >(this); }
::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer Layout_obj::get_container( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_container",0xbe4ba136,"haxe.ui.toolkit.layout.Layout.get_container","haxe/ui/toolkit/layout/Layout.hx",32,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->_container;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_container,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer Layout_obj::set_container( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","set_container",0x03518342,"haxe.ui.toolkit.layout.Layout.set_container","haxe/ui/toolkit/layout/Layout.hx",36,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(37)
	this->_container = value;
	HX_STACK_LINE(38)
	this->refresh();
	HX_STACK_LINE(39)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_container,return )

::openfl::_legacy::geom::Rectangle Layout_obj::get_padding( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_padding",0x3faf2e86,"haxe.ui.toolkit.layout.Layout.get_padding","haxe/ui/toolkit/layout/Layout.hx",42,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::openfl::_legacy::geom::Rectangle tmp = this->_padding;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_padding,return )

::openfl::_legacy::geom::Rectangle Layout_obj::set_padding( ::openfl::_legacy::geom::Rectangle value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","set_padding",0x4a1c3592,"haxe.ui.toolkit.layout.Layout.set_padding","haxe/ui/toolkit/layout/Layout.hx",46,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(47)
	this->_padding = value;
	HX_STACK_LINE(48)
	this->refresh();
	HX_STACK_LINE(49)
	::openfl::_legacy::geom::Rectangle tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_padding,return )

int Layout_obj::get_spacingX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_spacingX",0xce7a2920,"haxe.ui.toolkit.layout.Layout.get_spacingX","haxe/ui/toolkit/layout/Layout.hx",52,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	int tmp = this->_spacingX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_spacingX,return )

int Layout_obj::set_spacingX( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","set_spacingX",0xe3734c94,"haxe.ui.toolkit.layout.Layout.set_spacingX","haxe/ui/toolkit/layout/Layout.hx",56,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(57)
	this->_spacingX = value;
	HX_STACK_LINE(58)
	this->refresh();
	HX_STACK_LINE(59)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_spacingX,return )

int Layout_obj::get_spacingY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_spacingY",0xce7a2921,"haxe.ui.toolkit.layout.Layout.get_spacingY","haxe/ui/toolkit/layout/Layout.hx",62,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	int tmp = this->_spacingY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_spacingY,return )

int Layout_obj::set_spacingY( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","set_spacingY",0xe3734c95,"haxe.ui.toolkit.layout.Layout.set_spacingY","haxe/ui/toolkit/layout/Layout.hx",66,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(67)
	this->_spacingY = value;
	HX_STACK_LINE(68)
	this->refresh();
	HX_STACK_LINE(69)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_spacingY,return )

Void Layout_obj::refresh( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","refresh",0x5fde2779,"haxe.ui.toolkit.layout.Layout.refresh","haxe/ui/toolkit/layout/Layout.hx",72,0xbf2052b2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_container();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(73)
			tmp2 = tmp4->get_ready();
		}
		else{
			HX_STACK_LINE(73)
			tmp2 = false;
		}
		HX_STACK_LINE(73)
		if ((tmp2)){
			HX_STACK_LINE(74)
			this->resizeChildren();
			HX_STACK_LINE(75)
			this->repositionChildren();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,refresh,(void))

Void Layout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","resizeChildren",0x49890575,"haxe.ui.toolkit.layout.Layout.resizeChildren","haxe/ui/toolkit/layout/Layout.hx",79,0xbf2052b2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,resizeChildren,(void))

Void Layout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","repositionChildren",0x81487bdd,"haxe.ui.toolkit.layout.Layout.repositionChildren","haxe/ui/toolkit/layout/Layout.hx",82,0xbf2052b2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,repositionChildren,(void))

Void Layout_obj::autoSize( Float totalWidth,Float totalHeight){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","autoSize",0x22602c72,"haxe.ui.toolkit.layout.Layout.autoSize","haxe/ui/toolkit/layout/Layout.hx",85,0xbf2052b2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(totalWidth,"totalWidth")
		HX_STACK_ARG(totalHeight,"totalHeight")
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		bool tmp1 = tmp->get_autoSize();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(100)
			bool tmp2 = (totalWidth > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(100)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			if ((tmp3)){
				HX_STACK_LINE(100)
				Float tmp5 = totalWidth;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				Float tmp6 = this->get_innerWidth();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(100)
				Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(100)
				tmp4 = (tmp5 != tmp8);
			}
			else{
				HX_STACK_LINE(100)
				tmp4 = false;
			}
			HX_STACK_LINE(100)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			if ((tmp4)){
				HX_STACK_LINE(100)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(100)
				Float tmp8 = tmp7->get_percentWidth();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(100)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(100)
				tmp5 = (tmp9 == (int)-1);
			}
			else{
				HX_STACK_LINE(100)
				tmp5 = false;
			}
			HX_STACK_LINE(100)
			if ((tmp5)){
				HX_STACK_LINE(101)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				Float tmp7 = totalWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(101)
				::openfl::_legacy::geom::Rectangle tmp8 = this->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				Float tmp9 = tmp8->get_left();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				::openfl::_legacy::geom::Rectangle tmp10 = this->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(101)
				Float tmp11 = tmp10->get_right();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(101)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(101)
				Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(101)
				tmp6->set_width(tmp13);
			}
			HX_STACK_LINE(103)
			bool tmp6 = (totalHeight > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(103)
			if ((tmp7)){
				HX_STACK_LINE(103)
				Float tmp9 = totalHeight;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(103)
				Float tmp10 = this->get_innerHeight();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(103)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(103)
				tmp8 = (tmp9 != tmp12);
			}
			else{
				HX_STACK_LINE(103)
				tmp8 = false;
			}
			HX_STACK_LINE(103)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(103)
			if ((tmp8)){
				HX_STACK_LINE(103)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = this->get_container();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(103)
				Float tmp12 = tmp11->get_percentHeight();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(103)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(103)
				tmp9 = (tmp13 == (int)-1);
			}
			else{
				HX_STACK_LINE(103)
				tmp9 = false;
			}
			HX_STACK_LINE(103)
			if ((tmp9)){
				HX_STACK_LINE(104)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = this->get_container();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(104)
				Float tmp11 = totalHeight;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(104)
				::openfl::_legacy::geom::Rectangle tmp12 = this->get_padding();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(104)
				Float tmp13 = tmp12->get_top();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(104)
				::openfl::_legacy::geom::Rectangle tmp14 = this->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(104)
				Float tmp15 = tmp14->get_bottom();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(104)
				Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(104)
				Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(104)
				tmp10->set_height(tmp17);
			}
		}
		else{
			HX_STACK_LINE(107)
			bool tmp2 = (totalWidth > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			if ((tmp3)){
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp5 = this->get_container();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(107)
				Float tmp8 = tmp7->get_height();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(107)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(107)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(107)
				tmp4 = (tmp10 == (int)0);
			}
			else{
				HX_STACK_LINE(107)
				tmp4 = false;
			}
			HX_STACK_LINE(107)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			if ((tmp4)){
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(107)
				Float tmp8 = tmp7->get_percentWidth();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(107)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(107)
				tmp5 = (tmp9 > (int)-1);
			}
			else{
				HX_STACK_LINE(107)
				tmp5 = false;
			}
			HX_STACK_LINE(107)
			if ((tmp5)){
				HX_STACK_LINE(108)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_container();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				Float tmp7 = totalWidth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(108)
				::openfl::_legacy::geom::Rectangle tmp8 = this->get_padding();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(108)
				Float tmp9 = tmp8->get_left();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(108)
				::openfl::_legacy::geom::Rectangle tmp10 = this->get_padding();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(108)
				Float tmp11 = tmp10->get_right();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(108)
				Float tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(108)
				Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				tmp6->set_width(tmp13);
				HX_STACK_LINE(109)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp14 = this->get_container();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(109)
				Float tmp15 = totalHeight;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(109)
				::openfl::_legacy::geom::Rectangle tmp16 = this->get_padding();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(109)
				Float tmp17 = tmp16->get_top();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(109)
				::openfl::_legacy::geom::Rectangle tmp18 = this->get_padding();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(109)
				Float tmp19 = tmp18->get_bottom();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(109)
				Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(109)
				Float tmp21 = (tmp15 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(109)
				tmp14->set_height(tmp21);
			}
			else{
				HX_STACK_LINE(110)
				bool tmp6 = (totalHeight > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(110)
				bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(110)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(110)
				if ((tmp7)){
					HX_STACK_LINE(110)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp9 = this->get_container();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(110)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					Float tmp12 = tmp11->get_width();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(110)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(110)
					tmp8 = (tmp14 == (int)0);
				}
				else{
					HX_STACK_LINE(110)
					tmp8 = false;
				}
				HX_STACK_LINE(110)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(110)
				if ((tmp8)){
					HX_STACK_LINE(110)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = this->get_container();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					Float tmp12 = tmp11->get_percentHeight();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(110)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(110)
					tmp9 = (tmp13 > (int)-1);
				}
				else{
					HX_STACK_LINE(110)
					tmp9 = false;
				}
				HX_STACK_LINE(110)
				if ((tmp9)){
					HX_STACK_LINE(111)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp10 = this->get_container();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(111)
					Float tmp11 = totalWidth;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(111)
					::openfl::_legacy::geom::Rectangle tmp12 = this->get_padding();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(111)
					Float tmp13 = tmp12->get_left();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(111)
					::openfl::_legacy::geom::Rectangle tmp14 = this->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(111)
					Float tmp15 = tmp14->get_right();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(111)
					Float tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(111)
					Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(111)
					tmp10->set_width(tmp17);
					HX_STACK_LINE(112)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp18 = this->get_container();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(112)
					Float tmp19 = totalHeight;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(112)
					::openfl::_legacy::geom::Rectangle tmp20 = this->get_padding();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(112)
					Float tmp21 = tmp20->get_top();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(112)
					::openfl::_legacy::geom::Rectangle tmp22 = this->get_padding();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(112)
					Float tmp23 = tmp22->get_bottom();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(112)
					Float tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(112)
					Float tmp25 = (tmp19 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(112)
					tmp18->set_height(tmp25);
				}
				else{
					HX_STACK_LINE(114)
					bool tmp10 = (totalWidth > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(114)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(114)
					if ((tmp10)){
						HX_STACK_LINE(114)
						::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp12 = this->get_container();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(114)
						::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(114)
						Float tmp14 = tmp13->get_height();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(114)
						Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(114)
						tmp11 = (tmp15 == (int)0);
					}
					else{
						HX_STACK_LINE(114)
						tmp11 = false;
					}
					HX_STACK_LINE(114)
					if ((tmp11)){
						HX_STACK_LINE(115)
						::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp12 = this->get_container();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(115)
						Float tmp13 = totalHeight;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(115)
						::openfl::_legacy::geom::Rectangle tmp14 = this->get_padding();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(115)
						Float tmp15 = tmp14->get_top();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(115)
						::openfl::_legacy::geom::Rectangle tmp16 = this->get_padding();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(115)
						Float tmp17 = tmp16->get_bottom();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(115)
						Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(115)
						Float tmp19 = (tmp13 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(115)
						tmp12->set_height(tmp19);
					}
					else{
						HX_STACK_LINE(116)
						bool tmp12 = (totalHeight > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(116)
						bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(116)
						if ((tmp12)){
							HX_STACK_LINE(116)
							::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp14 = this->get_container();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(116)
							::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(116)
							Float tmp16 = tmp15->get_width();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(116)
							Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(116)
							tmp13 = (tmp17 == (int)0);
						}
						else{
							HX_STACK_LINE(116)
							tmp13 = false;
						}
						HX_STACK_LINE(116)
						if ((tmp13)){
							HX_STACK_LINE(117)
							::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp14 = this->get_container();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(117)
							Float tmp15 = totalWidth;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(117)
							::openfl::_legacy::geom::Rectangle tmp16 = this->get_padding();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(117)
							Float tmp17 = tmp16->get_left();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(117)
							::openfl::_legacy::geom::Rectangle tmp18 = this->get_padding();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(117)
							Float tmp19 = tmp18->get_right();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(117)
							Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(117)
							Float tmp21 = (tmp15 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(117)
							tmp14->set_width(tmp21);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Layout_obj,autoSize,(void))

Float Layout_obj::get_innerWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_innerWidth",0x6e78befb,"haxe.ui.toolkit.layout.Layout.get_innerWidth","haxe/ui/toolkit/layout/Layout.hx",132,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	if ((tmp1)){
		HX_STACK_LINE(134)
		return (int)0;
	}
	HX_STACK_LINE(136)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(136)
	Float tmp3 = tmp2->get_width();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(136)
	::openfl::_legacy::geom::Rectangle tmp4 = this->get_padding();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(136)
	Float tmp5 = tmp4->get_left();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(136)
	::openfl::_legacy::geom::Rectangle tmp6 = this->get_padding();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(136)
	Float tmp7 = tmp6->get_right();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(136)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(136)
	Float tmp9 = (tmp3 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(136)
	Float icx = tmp9;		HX_STACK_VAR(icx,"icx");
	HX_STACK_LINE(137)
	Float tmp10 = icx;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(137)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerWidth,return )

Float Layout_obj::get_innerHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_innerHeight",0xf17dd552,"haxe.ui.toolkit.layout.Layout.get_innerHeight","haxe/ui/toolkit/layout/Layout.hx",141,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp = this->get_container();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(142)
	if ((tmp1)){
		HX_STACK_LINE(143)
		return (int)0;
	}
	HX_STACK_LINE(145)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp2 = this->get_container();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	Float tmp3 = tmp2->get_height();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	::openfl::_legacy::geom::Rectangle tmp4 = this->get_padding();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	Float tmp5 = tmp4->get_top();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(145)
	::openfl::_legacy::geom::Rectangle tmp6 = this->get_padding();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(145)
	Float tmp7 = tmp6->get_bottom();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(145)
	Float tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(145)
	Float tmp9 = (tmp3 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(145)
	Float icy = tmp9;		HX_STACK_VAR(icy,"icy");
	HX_STACK_LINE(146)
	Float tmp10 = icy;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(146)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerHeight,return )

Float Layout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_usableWidth",0xeabfdb23,"haxe.ui.toolkit.layout.Layout.get_usableWidth","haxe/ui/toolkit/layout/Layout.hx",150,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	Float tmp = this->get_innerWidth();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	Float ucx = tmp;		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(152)
	Float tmp1 = ucx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableWidth,return )

Float Layout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_usableHeight",0x336f5c2a,"haxe.ui.toolkit.layout.Layout.get_usableHeight","haxe/ui/toolkit/layout/Layout.hx",156,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	Float tmp = this->get_innerHeight();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(157)
	Float ucy = tmp;		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(158)
	Float tmp1 = ucy;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableHeight,return )

::haxe::ui::toolkit::layout::Layout Layout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","clone",0xcf731d7b,"haxe.ui.toolkit.layout.Layout.clone","src/haxe/ui/toolkit/layout/Layout.hx",1,0xbd95bf7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = this->self();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::openfl::_legacy::geom::Rectangle tmp1 = this->get_padding();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	c->set_padding(tmp1);
	HX_STACK_LINE(4)
	int tmp2 = this->get_spacingX();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(4)
	c->set_spacingX(tmp2);
	HX_STACK_LINE(5)
	int tmp3 = this->get_spacingY();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(5)
	c->set_spacingY(tmp3);
	HX_STACK_LINE(6)
	::haxe::ui::toolkit::layout::Layout tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(6)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,clone,return )

::haxe::ui::toolkit::layout::Layout Layout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","self",0xae7faf2e,"haxe.ui.toolkit.layout.Layout.self","src/haxe/ui/toolkit/layout/Layout.hx",1,0xbd95bf7d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout tmp = ::haxe::ui::toolkit::layout::Layout_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,self,return )


Layout_obj::Layout_obj()
{
}

void Layout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layout);
	HX_MARK_MEMBER_NAME(_container,"_container");
	HX_MARK_MEMBER_NAME(_padding,"_padding");
	HX_MARK_MEMBER_NAME(_spacingX,"_spacingX");
	HX_MARK_MEMBER_NAME(_spacingY,"_spacingY");
	HX_MARK_MEMBER_NAME(innerWidth,"innerWidth");
	HX_MARK_MEMBER_NAME(innerHeight,"innerHeight");
	HX_MARK_MEMBER_NAME(usableWidth,"usableWidth");
	HX_MARK_MEMBER_NAME(usableHeight,"usableHeight");
	HX_MARK_END_CLASS();
}

void Layout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_container,"_container");
	HX_VISIT_MEMBER_NAME(_padding,"_padding");
	HX_VISIT_MEMBER_NAME(_spacingX,"_spacingX");
	HX_VISIT_MEMBER_NAME(_spacingY,"_spacingY");
	HX_VISIT_MEMBER_NAME(innerWidth,"innerWidth");
	HX_VISIT_MEMBER_NAME(innerHeight,"innerHeight");
	HX_VISIT_MEMBER_NAME(usableWidth,"usableWidth");
	HX_VISIT_MEMBER_NAME(usableHeight,"usableHeight");
}

Dynamic Layout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return get_padding(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_padding") ) { return _padding; }
		if (HX_FIELD_EQ(inName,"spacingX") ) { if (inCallProp == hx::paccAlways) return get_spacingX(); }
		if (HX_FIELD_EQ(inName,"spacingY") ) { if (inCallProp == hx::paccAlways) return get_spacingY(); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return autoSize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_spacingX") ) { return _spacingX; }
		if (HX_FIELD_EQ(inName,"_spacingY") ) { return _spacingY; }
		if (HX_FIELD_EQ(inName,"container") ) { if (inCallProp == hx::paccAlways) return get_container(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { return _container; }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { return inCallProp == hx::paccAlways ? get_innerWidth() : innerWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"innerHeight") ) { return inCallProp == hx::paccAlways ? get_innerHeight() : innerHeight; }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { return inCallProp == hx::paccAlways ? get_usableWidth() : usableWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_spacingX") ) { return get_spacingX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacingX") ) { return set_spacingX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spacingY") ) { return get_spacingY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacingY") ) { return set_spacingY_dyn(); }
		if (HX_FIELD_EQ(inName,"usableHeight") ) { return inCallProp == hx::paccAlways ? get_usableHeight() : usableHeight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_container") ) { return get_container_dyn(); }
		if (HX_FIELD_EQ(inName,"set_container") ) { return set_container_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_innerWidth") ) { return get_innerWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_innerHeight") ) { return get_innerHeight_dyn(); }
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

Dynamic Layout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return set_padding(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_padding") ) { _padding=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacingX") ) { if (inCallProp == hx::paccAlways) return set_spacingX(inValue); }
		if (HX_FIELD_EQ(inName,"spacingY") ) { if (inCallProp == hx::paccAlways) return set_spacingY(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_spacingX") ) { _spacingX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spacingY") ) { _spacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"container") ) { if (inCallProp == hx::paccAlways) return set_container(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { _container=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { innerWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"innerHeight") ) { innerHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { usableWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usableHeight") ) { usableHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Layout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Layout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b"));
	outFields->push(HX_HCSTRING("_padding","\x52","\xb3","\x35","\x0a"));
	outFields->push(HX_HCSTRING("_spacingX","\xd4","\xd6","\xa7","\x39"));
	outFields->push(HX_HCSTRING("_spacingY","\xd5","\xd6","\xa7","\x39"));
	outFields->push(HX_HCSTRING("container","\x41","\x75","\x73","\xbf"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("spacingX","\x75","\xdf","\x11","\xf2"));
	outFields->push(HX_HCSTRING("spacingY","\x76","\xdf","\x11","\xf2"));
	outFields->push(HX_HCSTRING("innerWidth","\x90","\x74","\x2a","\x70"));
	outFields->push(HX_HCSTRING("innerHeight","\x1d","\x02","\x4b","\x6b"));
	outFields->push(HX_HCSTRING("usableWidth","\xee","\x07","\x8d","\x64"));
	outFields->push(HX_HCSTRING("usableHeight","\xff","\x60","\x29","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer*/ ,(int)offsetof(Layout_obj,_container),HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Layout_obj,_padding),HX_HCSTRING("_padding","\x52","\xb3","\x35","\x0a")},
	{hx::fsInt,(int)offsetof(Layout_obj,_spacingX),HX_HCSTRING("_spacingX","\xd4","\xd6","\xa7","\x39")},
	{hx::fsInt,(int)offsetof(Layout_obj,_spacingY),HX_HCSTRING("_spacingY","\xd5","\xd6","\xa7","\x39")},
	{hx::fsFloat,(int)offsetof(Layout_obj,innerWidth),HX_HCSTRING("innerWidth","\x90","\x74","\x2a","\x70")},
	{hx::fsFloat,(int)offsetof(Layout_obj,innerHeight),HX_HCSTRING("innerHeight","\x1d","\x02","\x4b","\x6b")},
	{hx::fsFloat,(int)offsetof(Layout_obj,usableWidth),HX_HCSTRING("usableWidth","\xee","\x07","\x8d","\x64")},
	{hx::fsFloat,(int)offsetof(Layout_obj,usableHeight),HX_HCSTRING("usableHeight","\xff","\x60","\x29","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_container","\x02","\xf1","\x15","\x1b"),
	HX_HCSTRING("_padding","\x52","\xb3","\x35","\x0a"),
	HX_HCSTRING("_spacingX","\xd4","\xd6","\xa7","\x39"),
	HX_HCSTRING("_spacingY","\xd5","\xd6","\xa7","\x39"),
	HX_HCSTRING("get_container","\x18","\x49","\xd7","\x80"),
	HX_HCSTRING("set_container","\x24","\x2b","\xdd","\xc5"),
	HX_HCSTRING("get_padding","\xe8","\xb9","\x77","\x56"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	HX_HCSTRING("get_spacingX","\x7e","\x93","\x2b","\xa7"),
	HX_HCSTRING("set_spacingX","\xf2","\xb6","\x24","\xbc"),
	HX_HCSTRING("get_spacingY","\x7f","\x93","\x2b","\xa7"),
	HX_HCSTRING("set_spacingY","\xf3","\xb6","\x24","\xbc"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("resizeChildren","\x53","\x43","\x30","\xc1"),
	HX_HCSTRING("repositionChildren","\xbb","\x00","\xc7","\x9c"),
	HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"),
	HX_HCSTRING("innerWidth","\x90","\x74","\x2a","\x70"),
	HX_HCSTRING("innerHeight","\x1d","\x02","\x4b","\x6b"),
	HX_HCSTRING("usableWidth","\xee","\x07","\x8d","\x64"),
	HX_HCSTRING("usableHeight","\xff","\x60","\x29","\x4d"),
	HX_HCSTRING("get_innerWidth","\xd9","\xfc","\x1f","\xe6"),
	HX_HCSTRING("get_innerHeight","\xb4","\xb9","\x2c","\x2c"),
	HX_HCSTRING("get_usableWidth","\x85","\xbf","\x6e","\x25"),
	HX_HCSTRING("get_usableHeight","\x88","\x4d","\xc8","\x51"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#endif

hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.layout.Layout","\x0c","\xe0","\x7b","\x99");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Layout_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Layout_obj >;
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
