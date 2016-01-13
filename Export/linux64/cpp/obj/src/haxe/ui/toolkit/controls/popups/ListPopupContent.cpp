#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_ListPopupContent
#include <haxe/ui/toolkit/controls/popups/ListPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
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
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_Timer
#include <openfl/_legacy/utils/Timer.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void ListPopupContent_obj::__construct(::haxe::ui::toolkit::data::IDataSource dataSource,hx::Null< int >  __o_selectedIndex,Dynamic fn)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","new",0x0105994e,"haxe.ui.toolkit.controls.popups.ListPopupContent.new","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",14,0x70518bc1)
HX_STACK_THIS(this)
HX_STACK_ARG(dataSource,"dataSource")
HX_STACK_ARG(__o_selectedIndex,"selectedIndex")
HX_STACK_ARG(fn,"fn")
int selectedIndex = __o_selectedIndex.Default(-1);
{
	HX_STACK_LINE(89)
	this->DELAY = (int)0;
	HX_STACK_LINE(21)
	this->_selectedIndex = (int)-1;
	HX_STACK_LINE(17)
	this->_maxListSize = (int)4;
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(26)
	this->_selectedIndex = selectedIndex;
	HX_STACK_LINE(27)
	this->_fn = fn;
	HX_STACK_LINE(29)
	::haxe::ui::toolkit::containers::ListView tmp = ::haxe::ui::toolkit::containers::ListView_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	this->_list = tmp;
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::containers::ListView tmp1 = this->_list;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	tmp1->set_percentWidth((int)100);
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::containers::ListView tmp2 = this->_list;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::data::IDataSource tmp3 = dataSource;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	tmp2->set_dataSource(tmp3);
}
;
	return null();
}

//ListPopupContent_obj::~ListPopupContent_obj() { }

Dynamic ListPopupContent_obj::__CreateEmpty() { return  new ListPopupContent_obj; }
hx::ObjectPtr< ListPopupContent_obj > ListPopupContent_obj::__new(::haxe::ui::toolkit::data::IDataSource dataSource,hx::Null< int >  __o_selectedIndex,Dynamic fn)
{  hx::ObjectPtr< ListPopupContent_obj > _result_ = new ListPopupContent_obj();
	_result_->__construct(dataSource,__o_selectedIndex,fn);
	return _result_;}

Dynamic ListPopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListPopupContent_obj > _result_ = new ListPopupContent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ListPopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","initialize",0x6a388222,"haxe.ui.toolkit.controls.popups.ListPopupContent.initialize","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",37,0x70518bc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::initialize();
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		::String tmp1 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		Dynamic tmp2 = this->_onListChange_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		tmp->addEventListener(tmp1,tmp2,null(),null(),null());
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::containers::ListView tmp3 = this->_list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		this->addChild(tmp3);
		HX_STACK_LINE(43)
		int tmp4 = this->_maxListSize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		int n = tmp4;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(44)
		int tmp5 = n;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		::haxe::ui::toolkit::containers::ListView tmp6 = this->_list;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(44)
		int tmp7 = tmp6->get_listSize();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(44)
		bool tmp8 = (tmp5 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		if ((tmp8)){
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::containers::ListView tmp9 = this->_list;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			int tmp10 = tmp9->get_listSize();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			n = tmp10;
		}
		HX_STACK_LINE(48)
		int tmp9 = n;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::containers::ListView tmp10 = this->_list;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(48)
		Float tmp11 = tmp10->get_itemHeight();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(48)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::containers::ListView tmp13 = this->_list;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp14 = tmp13->get_layout();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(48)
		::openfl::_legacy::geom::Rectangle tmp15 = tmp14->get_padding();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(48)
		Float tmp16 = tmp15->get_top();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::containers::ListView tmp17 = this->_list;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::core::interfaces::ILayout tmp18 = tmp17->get_layout();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(48)
		::openfl::_legacy::geom::Rectangle tmp19 = tmp18->get_padding();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(48)
		Float tmp20 = tmp19->get_bottom();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(48)
		Float tmp21 = (tmp16 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(48)
		Float tmp22 = (tmp12 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(48)
		Float listHeight = tmp22;		HX_STACK_VAR(listHeight,"listHeight");
		HX_STACK_LINE(49)
		::haxe::ui::toolkit::containers::ListView tmp23 = this->_list;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(49)
		Float tmp24 = listHeight;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(49)
		tmp23->set_height(tmp24);
		HX_STACK_LINE(50)
		Float tmp25 = listHeight;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(50)
		this->set_height(tmp25);
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::containers::ListView tmp26 = this->_list;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(51)
		int tmp27 = this->_selectedIndex;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(51)
		tmp26->setSelectedIndexNoEvent(tmp27);
	}
return null();
}


int ListPopupContent_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","get_selectedIndex",0x45f4cf7c,"haxe.ui.toolkit.controls.popups.ListPopupContent.get_selectedIndex","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",60,0x70518bc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	int tmp = this->_selectedIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	int index = tmp;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(62)
	::haxe::ui::toolkit::containers::ListView tmp1 = this->_list;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	bool tmp2 = tmp1->get_ready();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	if ((tmp2)){
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::containers::ListView tmp3 = this->_list;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		int tmp4 = tmp3->get_selectedIndex();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		index = tmp4;
	}
	HX_STACK_LINE(65)
	int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ListPopupContent_obj,get_selectedIndex,return )

int ListPopupContent_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","set_selectedIndex",0x6962a788,"haxe.ui.toolkit.controls.popups.ListPopupContent.set_selectedIndex","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",68,0x70518bc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	this->_selectedIndex = value;
	HX_STACK_LINE(70)
	::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1 = tmp->get_ready();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(71)
		::haxe::ui::toolkit::containers::ListView tmp2 = this->_list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		tmp2->set_selectedIndex(tmp3);
	}
	HX_STACK_LINE(73)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ListPopupContent_obj,set_selectedIndex,return )

int ListPopupContent_obj::get_listSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","get_listSize",0xb572cd9a,"haxe.ui.toolkit.controls.popups.ListPopupContent.get_listSize","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",76,0x70518bc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(77)
	bool tmp1 = tmp->get_ready();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	bool tmp2 = (tmp1 == false);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	if ((tmp2)){
		HX_STACK_LINE(78)
		return (int)-1;
	}
	HX_STACK_LINE(80)
	::haxe::ui::toolkit::containers::ListView tmp3 = this->_list;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	int tmp4 = tmp3->get_listSize();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ListPopupContent_obj,get_listSize,return )

Void ListPopupContent_obj::_onListChange( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","_onListChange",0x8f0e6fba,"haxe.ui.toolkit.controls.popups.ListPopupContent._onListChange","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",91,0x70518bc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(92)
		int tmp = this->DELAY;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::openfl::_legacy::utils::Timer tmp1 = ::openfl::_legacy::utils::Timer_obj::__new(tmp,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		this->hideTimer = tmp1;
		HX_STACK_LINE(93)
		::openfl::_legacy::utils::Timer tmp2 = this->hideTimer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		::String tmp3 = ::openfl::events::TimerEvent_obj::TIMER_COMPLETE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		Dynamic tmp4 = this->_onTimerComplete_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
		HX_STACK_LINE(94)
		::openfl::_legacy::utils::Timer tmp5 = this->hideTimer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		tmp5->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListPopupContent_obj,_onListChange,(void))

Void ListPopupContent_obj::_onTimerComplete( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","_onTimerComplete",0x1524add2,"haxe.ui.toolkit.controls.popups.ListPopupContent._onTimerComplete","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",97,0x70518bc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(98)
		::openfl::_legacy::utils::Timer tmp = this->hideTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::String tmp1 = ::openfl::events::TimerEvent_obj::TIMER_COMPLETE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		Dynamic tmp2 = this->_onTimerComplete_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		tmp->removeEventListener(tmp1,tmp2,null());
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp3 = this->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		if ((tmp4)){
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::core::PopupManager tmp5 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer tmp6 = this->get_parent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::controls::popups::Popup tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(100)
			tmp7 = hx::TCast< ::haxe::ui::toolkit::controls::popups::Popup >::cast(tmp6);
			HX_STACK_LINE(100)
			tmp5->hidePopup(tmp7,null());
		}
		HX_STACK_LINE(103)
		Dynamic tmp5 = this->_fn_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		if ((tmp6)){
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::containers::ListView tmp7 = this->_list;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp8 = tmp7->get_selectedItems()->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = tmp8;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(105)
			::haxe::ui::toolkit::containers::ListView tmp9 = this->_list;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp10 = item;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			int tmp11 = tmp9->getItemIndex(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(105)
			int index = tmp11;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(106)
			Dynamic tmp12 = item->get_data();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			tmp12->__FieldRef(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")) = index;
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp13 = item;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(107)
			this->_fn(tmp13);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListPopupContent_obj,_onTimerComplete,(void))

Void ListPopupContent_obj::setSelectedIndexNoEvent( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","setSelectedIndexNoEvent",0x8f95cad2,"haxe.ui.toolkit.controls.popups.ListPopupContent.setSelectedIndexNoEvent","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",114,0x70518bc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(115)
		this->_selectedIndex = index;
		HX_STACK_LINE(116)
		::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		bool tmp1 = tmp->get_ready();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		if ((tmp1)){
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::containers::ListView tmp2 = this->_list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(117)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			tmp2->setSelectedIndexNoEvent(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListPopupContent_obj,setSelectedIndexNoEvent,(void))

::haxe::ui::toolkit::core::DisplayObject ListPopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","clone",0x2fcb73cb,"haxe.ui.toolkit.controls.popups.ListPopupContent.clone","src/haxe/ui/toolkit/controls/popups/ListPopupContent.hx",1,0x163e29d6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::PopupContent tmp = hx::TCast< ::haxe::ui::toolkit::controls::popups::PopupContent >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::ListPopupContent c = ((::haxe::ui::toolkit::controls::popups::ListPopupContent)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::popups::ListPopupContent tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ListPopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","self",0xe72e92de,"haxe.ui.toolkit.controls.popups.ListPopupContent.self","src/haxe/ui/toolkit/controls/popups/ListPopupContent.hx",1,0x163e29d6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::ListPopupContent tmp = ::haxe::ui::toolkit::controls::popups::ListPopupContent_obj::__new(null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ListPopupContent_obj::ListPopupContent_obj()
{
}

void ListPopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListPopupContent);
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_maxListSize,"_maxListSize");
	HX_MARK_MEMBER_NAME(hideTimer,"hideTimer");
	HX_MARK_MEMBER_NAME(_fn,"_fn");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(listSize,"listSize");
	HX_MARK_MEMBER_NAME(DELAY,"DELAY");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListPopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_maxListSize,"_maxListSize");
	HX_VISIT_MEMBER_NAME(hideTimer,"hideTimer");
	HX_VISIT_MEMBER_NAME(_fn,"_fn");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(listSize,"listSize");
	HX_VISIT_MEMBER_NAME(DELAY,"DELAY");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ListPopupContent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { return _fn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return _list; }
		if (HX_FIELD_EQ(inName,"DELAY") ) { return DELAY; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listSize") ) { return inCallProp == hx::paccAlways ? get_listSize() : listSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hideTimer") ) { return hideTimer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxListSize") ) { return _maxListSize; }
		if (HX_FIELD_EQ(inName,"get_listSize") ) { return get_listSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"_onListChange") ) { return _onListChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onTimerComplete") ) { return _onTimerComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setSelectedIndexNoEvent") ) { return setSelectedIndexNoEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListPopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { _fn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DELAY") ) { DELAY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listSize") ) { listSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hideTimer") ) { hideTimer=inValue.Cast< ::openfl::_legacy::utils::Timer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxListSize") ) { _maxListSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ListPopupContent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void ListPopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa"));
	outFields->push(HX_HCSTRING("_maxListSize","\x04","\x29","\x18","\x08"));
	outFields->push(HX_HCSTRING("hideTimer","\xa3","\x7b","\x94","\x6b"));
	outFields->push(HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	outFields->push(HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"));
	outFields->push(HX_HCSTRING("DELAY","\x63","\x0f","\x15","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(ListPopupContent_obj,_list),HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa")},
	{hx::fsInt,(int)offsetof(ListPopupContent_obj,_maxListSize),HX_HCSTRING("_maxListSize","\x04","\x29","\x18","\x08")},
	{hx::fsObject /*::openfl::_legacy::utils::Timer*/ ,(int)offsetof(ListPopupContent_obj,hideTimer),HX_HCSTRING("hideTimer","\xa3","\x7b","\x94","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListPopupContent_obj,_fn),HX_HCSTRING("_fn","\x67","\x6f","\x48","\x00")},
	{hx::fsInt,(int)offsetof(ListPopupContent_obj,_selectedIndex),HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2")},
	{hx::fsInt,(int)offsetof(ListPopupContent_obj,listSize),HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c")},
	{hx::fsInt,(int)offsetof(ListPopupContent_obj,DELAY),HX_HCSTRING("DELAY","\x63","\x0f","\x15","\x55")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa"),
	HX_HCSTRING("_maxListSize","\x04","\x29","\x18","\x08"),
	HX_HCSTRING("hideTimer","\xa3","\x7b","\x94","\x6b"),
	HX_HCSTRING("_fn","\x67","\x6f","\x48","\x00"),
	HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("get_listSize","\x48","\x24","\x62","\xe1"),
	HX_HCSTRING("DELAY","\x63","\x0f","\x15","\x55"),
	HX_HCSTRING("_onListChange","\x4c","\xf1","\x8a","\xd4"),
	HX_HCSTRING("_onTimerComplete","\x80","\xf3","\x2f","\x0a"),
	HX_HCSTRING("setSelectedIndexNoEvent","\xe4","\xb6","\xf6","\x9a"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListPopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListPopupContent_obj::__mClass,"__mClass");
};

#endif

hx::Class ListPopupContent_obj::__mClass;

void ListPopupContent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.popups.ListPopupContent","\x5c","\x9a","\x97","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &ListPopupContent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListPopupContent_obj >;
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
} // end namespace popups
