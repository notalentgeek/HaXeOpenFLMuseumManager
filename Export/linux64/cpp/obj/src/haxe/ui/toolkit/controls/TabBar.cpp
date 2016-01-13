#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TabBar
#include <haxe/ui/toolkit/controls/TabBar.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void TabBar_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","new",0xc361d406,"haxe.ui.toolkit.controls.TabBar.new","haxe/ui/toolkit/controls/TabBar.hx",15,0xaef198ea)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->_selectedIndex = (int)-1;
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->set_autoSize(false);
	HX_STACK_LINE(23)
	this->_scrollSensitivity = (int)5;
	HX_STACK_LINE(24)
	bool tmp = this->_showVScroll = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	this->_showHScroll = tmp;
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::containers::HBox tmp1 = ::haxe::ui::toolkit::containers::HBox_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	this->_content = tmp1;
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::containers::HBox tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	tmp2->set_id(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	HX_STACK_LINE(27)
	::haxe::ui::toolkit::containers::HBox tmp3 = this->_content;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	tmp3->set_percentHeight((int)100);
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::containers::HBox tmp4 = this->_content;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	::String tmp5 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	Dynamic tmp6 = this->_onMouseWheel_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	tmp4->addEventListener(tmp5,tmp6,null(),null(),null());
	HX_STACK_LINE(29)
	::haxe::ui::toolkit::containers::HBox tmp7 = this->_content;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(29)
	this->addChild(tmp7);
}
;
	return null();
}

//TabBar_obj::~TabBar_obj() { }

Dynamic TabBar_obj::__CreateEmpty() { return  new TabBar_obj; }
hx::ObjectPtr< TabBar_obj > TabBar_obj::__new()
{  hx::ObjectPtr< TabBar_obj > _result_ = new TabBar_obj();
	_result_->__construct();
	return _result_;}

Dynamic TabBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TabBar_obj > _result_ = new TabBar_obj();
	_result_->__construct();
	return _result_;}

Void TabBar_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","initialize",0x75798e6a,"haxe.ui.toolkit.controls.TabBar.initialize","haxe/ui/toolkit/controls/TabBar.hx",36,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::initialize();
	}
return null();
}


int TabBar_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","get_selectedIndex",0x085d5c34,"haxe.ui.toolkit.controls.TabBar.get_selectedIndex","haxe/ui/toolkit/controls/TabBar.hx",48,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	int tmp = this->_selectedIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedIndex,return )

int TabBar_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","set_selectedIndex",0x2bcb3440,"haxe.ui.toolkit.controls.TabBar.set_selectedIndex","haxe/ui/toolkit/controls/TabBar.hx",52,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(53)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	int tmp1 = this->_selectedIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	if ((tmp2)){
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			::haxe::ui::toolkit::containers::HBox tmp3 = this->_content;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(54)
			int tmp4 = tmp3->get_children()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(54)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			while((true)){
				HX_STACK_LINE(54)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(54)
					break;
				}
				HX_STACK_LINE(54)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(54)
				int n = tmp7;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(55)
				::haxe::ui::toolkit::containers::HBox tmp8 = this->_content;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(55)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp9 = tmp8->get_children()->__get(n);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(55)
				::haxe::ui::toolkit::controls::Button tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(55)
				tmp10 = hx::TCast< ::haxe::ui::toolkit::controls::Button >::cast(tmp9);
				HX_STACK_LINE(55)
				::haxe::ui::toolkit::controls::Button button = tmp10;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(56)
				bool tmp11 = (n == value);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(56)
				if ((tmp11)){
					HX_STACK_LINE(57)
					button->set_selected(true);
				}
				else{
					HX_STACK_LINE(59)
					button->set_selected(false);
				}
			}
		}
		HX_STACK_LINE(62)
		this->_selectedIndex = value;
		HX_STACK_LINE(64)
		::String tmp3 = ::openfl::_legacy::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		::openfl::_legacy::events::Event tmp4 = ::openfl::_legacy::events::Event_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		::openfl::_legacy::events::Event event = tmp4;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(65)
		::openfl::_legacy::events::Event tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		this->dispatchEvent(tmp5);
	}
	HX_STACK_LINE(67)
	int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(67)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedIndex,return )

int TabBar_obj::get_numTabs( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","get_numTabs",0x4444cfa1,"haxe.ui.toolkit.controls.TabBar.get_numTabs","haxe/ui/toolkit/controls/TabBar.hx",70,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	::haxe::ui::toolkit::containers::HBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	int tmp1 = tmp->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_numTabs,return )

::haxe::ui::toolkit::controls::Button TabBar_obj::addTab( ::String text){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","addTab",0x2218b2ce,"haxe.ui.toolkit.controls.TabBar.addTab","haxe/ui/toolkit/controls/TabBar.hx",80,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(80)
	::haxe::ui::toolkit::controls::TabBar _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::controls::Button tmp = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::controls::Button button = tmp;		HX_STACK_VAR(button,"button");
	HX_STACK_LINE(82)
	::String tmp1 = text;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	button->set_text(tmp1);
	HX_STACK_LINE(83)
	button->set_toggle(true);
	HX_STACK_LINE(84)
	button->set_id(HX_HCSTRING("tabButton","\x27","\x1e","\x2d","\x3b"));
	HX_STACK_LINE(85)
	button->set_verticalAlign(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	HX_STACK_LINE(86)
	button->set_allowSelection(false);
	HX_STACK_LINE(87)
	::haxe::ui::toolkit::containers::HBox tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	::haxe::ui::toolkit::controls::Button tmp3 = button;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(87)
	tmp2->addChild(tmp3);
	HX_STACK_LINE(88)
	::haxe::ui::toolkit::containers::HBox tmp4 = this->_content;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(88)
	int tmp5 = tmp4->get_children()->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(88)
	int tmp7 = this->_selectedIndex;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(88)
	button->set_selected(tmp8);
	HX_STACK_LINE(89)
	::String tmp9 = HX_HCSTRING("haxeui_click","\x03","\x6b","\xd3","\x5c");		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(89)
	Dynamic tmp10 = this->tabButtonClick_dyn();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(89)
	button->addEventListener(tmp9,tmp10,false,(int)1,null());
	HX_STACK_LINE(90)
	::String tmp11 = HX_HCSTRING("haxeui_glyphClick","\x61","\xaa","\x5c","\x02");		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(90)
	Dynamic tmp12 = this->tabGlyphClick_dyn();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(90)
	button->addEventListener(tmp11,tmp12,null(),null(),null());
	HX_STACK_LINE(91)
	::String tmp13 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp13,"tmp13");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::ui::toolkit::controls::TabBar,_g,::haxe::ui::toolkit::controls::Button,button)
	int __ArgCount() const { return 1; }
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/TabBar.hx",91,0xaef198ea)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(92)
			Float tmp14 = _g->get_height();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(92)
			Float cy = tmp14;		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(93)
			Float tmp15 = button->get_height();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(93)
			::haxe::ui::toolkit::style::Style tmp16 = _g->get_baseStyle();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(93)
			int tmp17 = tmp16->get_paddingTop();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(93)
			Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(93)
			::haxe::ui::toolkit::style::Style tmp19 = _g->get_baseStyle();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(93)
			int tmp20 = tmp19->get_paddingBottom();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(93)
			Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(93)
			Float newCY = tmp21;		HX_STACK_VAR(newCY,"newCY");
			HX_STACK_LINE(94)
			bool tmp22 = (newCY > cy);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(94)
			if ((tmp22)){
				HX_STACK_LINE(95)
				Float tmp23 = newCY;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(95)
				_g->set_height(tmp23);
			}
			HX_STACK_LINE(97)
			::String tmp23 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(97)
			button->removeEventListenerType(tmp23);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(91)
	button->addEventListener(tmp13, Dynamic(new _Function_1_1(_g,button)),null(),null(),null());
	HX_STACK_LINE(99)
	::haxe::ui::toolkit::controls::Button tmp14 = button;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(99)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,addTab,return )

Void TabBar_obj::removeTab( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","removeTab",0x03d0bc97,"haxe.ui.toolkit.controls.TabBar.removeTab","haxe/ui/toolkit/controls/TabBar.hx",102,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(103)
		::haxe::ui::toolkit::containers::HBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		tmp->removeChildAt(tmp1,null());
		HX_STACK_LINE(104)
		int tmp2 = this->get_selectedIndex();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		int newIndex = tmp2;		HX_STACK_VAR(newIndex,"newIndex");
		HX_STACK_LINE(105)
		int tmp3 = newIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		::haxe::ui::toolkit::containers::HBox tmp4 = this->_content;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		int tmp5 = tmp4->get_numChildren();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		bool tmp7 = (tmp3 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		if ((tmp7)){
			HX_STACK_LINE(106)
			::haxe::ui::toolkit::containers::HBox tmp8 = this->_content;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(106)
			int tmp9 = tmp8->get_numChildren();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(106)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(106)
			newIndex = tmp10;
		}
		HX_STACK_LINE(108)
		this->set_selectedIndex((int)-1);
		HX_STACK_LINE(109)
		int tmp8 = newIndex;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		this->set_selectedIndex(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,removeTab,(void))

::haxe::ui::toolkit::controls::Button TabBar_obj::getTabButton( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","getTabButton",0x4567124b,"haxe.ui.toolkit.controls.TabBar.getTabButton","haxe/ui/toolkit/controls/TabBar.hx",112,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::containers::HBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = tmp->getChildAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	::haxe::ui::toolkit::controls::Button tmp3 = ((::haxe::ui::toolkit::controls::Button)(tmp2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,getTabButton,return )

Void TabBar_obj::removeAllTabs( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","removeAllTabs",0xbc072581,"haxe.ui.toolkit.controls.TabBar.removeAllTabs","haxe/ui/toolkit/controls/TabBar.hx",116,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		::haxe::ui::toolkit::containers::HBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(117)
		tmp->removeAllChildren(null());
		HX_STACK_LINE(118)
		this->_selectedIndex = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,removeAllTabs,(void))

Void TabBar_obj::setTabText( int index,::String text){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","setTabText",0x210d233a,"haxe.ui.toolkit.controls.TabBar.setTabText","haxe/ui/toolkit/controls/TabBar.hx",121,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(122)
		::haxe::ui::toolkit::containers::HBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		int tmp1 = index;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = tmp->getChildAt(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		::haxe::ui::toolkit::controls::Button tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		tmp3 = hx::TCast< ::haxe::ui::toolkit::controls::Button >::cast(tmp2);
		HX_STACK_LINE(122)
		::haxe::ui::toolkit::controls::Button button = tmp3;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(123)
		::String tmp4 = text;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		button->set_text(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TabBar_obj,setTabText,(void))

Void TabBar_obj::tabButtonClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","tabButtonClick",0x461912bb,"haxe.ui.toolkit.controls.TabBar.tabButtonClick","haxe/ui/toolkit/controls/TabBar.hx",126,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::containers::HBox tmp = this->_content;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = event->displayObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		int tmp2 = tmp->indexOfChild(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(127)
		this->set_selectedIndex(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabButtonClick,(void))

Void TabBar_obj::tabGlyphClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","tabGlyphClick",0x6354a8d7,"haxe.ui.toolkit.controls.TabBar.tabGlyphClick","haxe/ui/toolkit/controls/TabBar.hx",130,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(131)
		::String tmp = HX_HCSTRING("haxeui_glyphClick","\x61","\xaa","\x5c","\x02");		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::haxe::ui::toolkit::events::UIEvent tmp1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp,null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		::haxe::ui::toolkit::events::UIEvent newEvent = tmp1;		HX_STACK_VAR(newEvent,"newEvent");
		HX_STACK_LINE(132)
		::haxe::ui::toolkit::containers::HBox tmp2 = this->_content;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = event->displayObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		int tmp4 = tmp2->indexOfChild(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		newEvent->data = tmp4;
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::events::UIEvent tmp5 = newEvent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(133)
		this->dispatchEvent(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabGlyphClick,(void))

Void TabBar_obj::_onMouseWheel( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","_onMouseWheel",0x2e42ac3a,"haxe.ui.toolkit.controls.TabBar._onMouseWheel","haxe/ui/toolkit/controls/TabBar.hx",136,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(137)
		::haxe::ui::toolkit::controls::HScroll tmp = this->_hscroll;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		if ((tmp1)){
			HX_STACK_LINE(137)
			::haxe::ui::toolkit::containers::HBox tmp3 = this->_content;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			::haxe::ui::toolkit::containers::HBox tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp7 = this->get_layout();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			Float tmp9 = tmp8->get_usableWidth();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(137)
			tmp2 = (tmp6 > tmp10);
		}
		else{
			HX_STACK_LINE(137)
			tmp2 = false;
		}
		HX_STACK_LINE(137)
		if ((tmp2)){
			HX_STACK_LINE(138)
			bool tmp3 = (event->delta != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			if ((tmp3)){
				HX_STACK_LINE(139)
				bool tmp4 = (event->delta < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(139)
				if ((tmp4)){
					HX_STACK_LINE(140)
					::haxe::ui::toolkit::controls::HScroll tmp5 = this->_hscroll;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(140)
					tmp5->incrementValue();
				}
				else{
					HX_STACK_LINE(141)
					bool tmp5 = (event->delta > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(141)
					if ((tmp5)){
						HX_STACK_LINE(142)
						::haxe::ui::toolkit::controls::HScroll tmp6 = this->_hscroll;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(142)
						tmp6->deincrementValue();
					}
				}
			}
		}
	}
return null();
}


::haxe::ui::toolkit::core::DisplayObject TabBar_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","clone",0x6db5cc83,"haxe.ui.toolkit.controls.TabBar.clone","src/haxe/ui/toolkit/controls/TabBar.hx",1,0x47340e75)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollView tmp = hx::TCast< ::haxe::ui::toolkit::containers::ScrollView >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TabBar c = ((::haxe::ui::toolkit::controls::TabBar)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::TabBar tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject TabBar_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","self",0x3585b926,"haxe.ui.toolkit.controls.TabBar.self","src/haxe/ui/toolkit/controls/TabBar.hx",1,0x47340e75)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TabBar tmp = ::haxe::ui::toolkit::controls::TabBar_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



TabBar_obj::TabBar_obj()
{
}

void TabBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabBar);
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(numTabs,"numTabs");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(numTabs,"numTabs");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TabBar_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addTab") ) { return addTab_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numTabs") ) { return inCallProp == hx::paccAlways ? get_numTabs() : numTabs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { return _content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeTab") ) { return removeTab_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"setTabText") ) { return setTabText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numTabs") ) { return get_numTabs_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTabButton") ) { return getTabButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"removeAllTabs") ) { return removeAllTabs_dyn(); }
		if (HX_FIELD_EQ(inName,"tabGlyphClick") ) { return tabGlyphClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseWheel") ) { return _onMouseWheel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		if (HX_FIELD_EQ(inName,"tabButtonClick") ) { return tabButtonClick_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TabBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numTabs") ) { numTabs=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast< ::haxe::ui::toolkit::containers::HBox >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TabBar_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void TabBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53"));
	outFields->push(HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("numTabs","\xe4","\x55","\x77","\xa0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::HBox*/ ,(int)offsetof(TabBar_obj,_content),HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53")},
	{hx::fsInt,(int)offsetof(TabBar_obj,_selectedIndex),HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2")},
	{hx::fsInt,(int)offsetof(TabBar_obj,numTabs),HX_HCSTRING("numTabs","\xe4","\x55","\x77","\xa0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_content","\xba","\xe6","\x2f","\x53"),
	HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("numTabs","\xe4","\x55","\x77","\xa0"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("get_numTabs","\xfb","\xb5","\x71","\x26"),
	HX_HCSTRING("addTab","\xb4","\x6a","\x09","\x9f"),
	HX_HCSTRING("removeTab","\x71","\x78","\xf3","\xca"),
	HX_HCSTRING("getTabButton","\xb1","\xba","\x83","\x4a"),
	HX_HCSTRING("removeAllTabs","\x5b","\xd6","\xfd","\x2f"),
	HX_HCSTRING("setTabText","\x20","\xc6","\x4e","\x98"),
	HX_HCSTRING("tabButtonClick","\xa1","\x20","\xfd","\x49"),
	HX_HCSTRING("tabGlyphClick","\xb1","\x59","\x4b","\xd7"),
	HX_HCSTRING("_onMouseWheel","\x14","\x5d","\x39","\xa2"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabBar_obj::__mClass,"__mClass");
};

#endif

hx::Class TabBar_obj::__mClass;

void TabBar_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.TabBar","\x14","\x19","\x22","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &TabBar_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TabBar_obj >;
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
