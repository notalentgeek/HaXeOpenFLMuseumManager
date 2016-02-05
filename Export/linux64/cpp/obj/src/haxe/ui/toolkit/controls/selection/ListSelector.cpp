#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector
#include <haxe/ui/toolkit/controls/selection/ListSelector.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
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
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace selection{

Void ListSelector_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","new",0x4331c907,"haxe.ui.toolkit.controls.selection.ListSelector.new","haxe/ui/toolkit/controls/selection/ListSelector.hx",33,0x5c9ca828)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	this->_selectedIndex = (int)-1;
	HX_STACK_LINE(37)
	this->_maxListSize = (int)4;
	HX_STACK_LINE(46)
	super::__construct();
	HX_STACK_LINE(47)
	this->set_toggle(true);
	HX_STACK_LINE(48)
	this->set_allowSelection(false);
	HX_STACK_LINE(49)
	this->dispatchChangeEvents = false;
	HX_STACK_LINE(50)
	this->set_autoSize(false);
}
;
	return null();
}

//ListSelector_obj::~ListSelector_obj() { }

Dynamic ListSelector_obj::__CreateEmpty() { return  new ListSelector_obj; }
hx::ObjectPtr< ListSelector_obj > ListSelector_obj::__new()
{  hx::ObjectPtr< ListSelector_obj > _result_ = new ListSelector_obj();
	_result_->__construct();
	return _result_;}

Dynamic ListSelector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListSelector_obj > _result_ = new ListSelector_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ListSelector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
	return super::__ToInterface(inType);
}

ListSelector_obj::operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *()
	{ return new ::haxe::ui::toolkit::core::interfaces::IDataComponent_delegate_< ListSelector_obj >(this); }
Void ListSelector_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","preInitialize",0x68be2eba,"haxe.ui.toolkit.controls.selection.ListSelector.preInitialize","haxe/ui/toolkit/controls/selection/ListSelector.hx",56,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::preInitialize();
		HX_STACK_LINE(59)
		::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			::String tmp3 = tmp2->get_selectionMethod();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			if ((tmp4)){
				HX_STACK_LINE(61)
				::haxe::ui::toolkit::style::Style tmp5 = this->_baseStyle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				::String tmp6 = tmp5->get_selectionMethod();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				this->_method = tmp6;
			}
		}
	}
return null();
}


Void ListSelector_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","initialize",0x9df4ab89,"haxe.ui.toolkit.controls.selection.ListSelector.initialize","haxe/ui/toolkit/controls/selection/ListSelector.hx",67,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		this->super::initialize();
	}
return null();
}


Void ListSelector_obj::_onMouseClick( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","_onMouseClick",0x02f99428,"haxe.ui.toolkit.controls.selection.ListSelector._onMouseClick","haxe/ui/toolkit/controls/selection/ListSelector.hx",70,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(72)
		::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		if ((tmp2)){
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::containers::ListView tmp4 = this->_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			bool tmp6 = tmp5->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(72)
			tmp3 = (tmp7 == false);
		}
		else{
			HX_STACK_LINE(72)
			tmp3 = true;
		}
		HX_STACK_LINE(72)
		if ((tmp3)){
			HX_STACK_LINE(73)
			this->showList();
		}
		else{
			HX_STACK_LINE(75)
			this->hideList();
		}
	}
return null();
}


Void ListSelector_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","applyStyle",0xe0a89b1c,"haxe.ui.toolkit.controls.selection.ListSelector.applyStyle","haxe/ui/toolkit/controls/selection/ListSelector.hx",79,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		this->super::applyStyle();
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::style::Style tmp = this->_baseStyle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		if ((tmp1)){
			HX_STACK_LINE(83)
			::haxe::ui::toolkit::style::Style tmp2 = this->_baseStyle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			::String tmp3 = tmp2->get_selectionMethod();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(83)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			if ((tmp4)){
				HX_STACK_LINE(83)
				::String tmp6 = this->_method;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(83)
				::String tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(83)
				tmp5 = (tmp7 == null());
			}
			else{
				HX_STACK_LINE(83)
				tmp5 = false;
			}
			HX_STACK_LINE(83)
			if ((tmp5)){
				HX_STACK_LINE(84)
				::haxe::ui::toolkit::style::Style tmp6 = this->_baseStyle;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(84)
				::String tmp7 = tmp6->get_selectionMethod();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				this->_method = tmp7;
			}
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::style::Style tmp6 = this->_baseStyle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			int tmp7 = tmp6->get_listSize();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			bool tmp8 = (tmp7 != (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			if ((tmp8)){
				HX_STACK_LINE(88)
				::haxe::ui::toolkit::style::Style tmp9 = this->_baseStyle;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(88)
				int tmp10 = tmp9->get_listSize();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(88)
				this->set_listSize(tmp10);
			}
		}
	}
return null();
}


::haxe::ui::toolkit::data::IDataSource ListSelector_obj::get_dataSource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_dataSource",0x8a1e89a7,"haxe.ui.toolkit.controls.selection.ListSelector.get_dataSource","haxe/ui/toolkit/controls/selection/ListSelector.hx",101,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	::haxe::ui::toolkit::data::IDataSource tmp = this->_dataSource;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	if ((tmp1)){
		HX_STACK_LINE(103)
		::haxe::ui::toolkit::data::ArrayDataSource tmp2 = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		this->_dataSource = tmp2;
	}
	HX_STACK_LINE(105)
	::haxe::ui::toolkit::data::IDataSource tmp2 = this->_dataSource;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_dataSource,return )

::haxe::ui::toolkit::data::IDataSource ListSelector_obj::set_dataSource( ::haxe::ui::toolkit::data::IDataSource value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","set_dataSource",0xaa3e721b,"haxe.ui.toolkit.controls.selection.ListSelector.set_dataSource","haxe/ui/toolkit/controls/selection/ListSelector.hx",108,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(109)
	this->_dataSource = value;
	HX_STACK_LINE(110)
	::haxe::ui::toolkit::data::IDataSource tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,set_dataSource,return )

Void ListSelector_obj::showList( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","showList",0x325229f4,"haxe.ui.toolkit.controls.selection.ListSelector.showList","haxe/ui/toolkit/controls/selection/ListSelector.hx",119,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::haxe::ui::toolkit::controls::selection::ListSelector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		::String tmp = this->_method;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		bool tmp1 = (tmp == HX_HCSTRING("popup","\x2c","\x0a","\x95","\xc6"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		if ((tmp1)){
			HX_STACK_LINE(121)
			::haxe::ui::toolkit::core::PopupManager tmp2 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(121)
			::haxe::ui::toolkit::data::IDataSource tmp3 = this->get_dataSource();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(121)
			int tmp4 = this->_selectedIndex;		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",121,0x5c9ca828)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(121)
			Dynamic tmp5 = _Function_2_1::Block();		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::controls::selection::ListSelector,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",121,0x5c9ca828)
				HX_STACK_ARG(item,"item")
				{
					HX_STACK_LINE(122)
					Dynamic tmp6 = item->get_data();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(122)
					_g->_selectedIndex = tmp6->__Field(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"), hx::paccDynamic );
					HX_STACK_LINE(123)
					Dynamic tmp7 = item->get_data();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(123)
					_g->set_text(tmp7->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ));
					HX_STACK_LINE(124)
					_g->_selectedItems = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();
					HX_STACK_LINE(125)
					::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp8 = item;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(125)
					_g->_selectedItems->push(tmp8);
					HX_STACK_LINE(126)
					_g->set_selected(false);
					HX_STACK_LINE(127)
					::String tmp9 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(127)
					::haxe::ui::toolkit::events::UIEvent tmp10 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp9,null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(127)
					::haxe::ui::toolkit::events::UIEvent event = tmp10;		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(128)
					::haxe::ui::toolkit::events::UIEvent tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(128)
					_g->dispatchEvent(tmp11);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(121)
			tmp2->showList(tmp3,tmp4,HX_HCSTRING("Select Item","\xb7","\xac","\xdb","\x47"),tmp5, Dynamic(new _Function_2_2(_g)));
		}
		else{
			HX_STACK_LINE(131)
			::haxe::ui::toolkit::containers::ListView tmp2 = this->_list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			if ((tmp3)){
				HX_STACK_LINE(132)
				::haxe::ui::toolkit::containers::ListView tmp4 = ::haxe::ui::toolkit::containers::ListView_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(132)
				this->_list = tmp4;
				HX_STACK_LINE(133)
				::haxe::ui::toolkit::containers::ListView tmp5 = this->_list;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(133)
				tmp5->set_styleName(HX_HCSTRING("dropDown","\x31","\xa0","\x08","\xe8"));
				HX_STACK_LINE(134)
				::String tmp6 = this->get_id();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(134)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(134)
				if ((tmp7)){
					HX_STACK_LINE(135)
					::haxe::ui::toolkit::containers::ListView tmp8 = this->_list;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(135)
					::String tmp9 = this->get_id();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(135)
					::String tmp10 = (tmp9 + HX_HCSTRING("_dropDown","\x90","\x97","\x9e","\x2f"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(135)
					tmp8->set_id(tmp10);
				}
				HX_STACK_LINE(137)
				::haxe::ui::toolkit::containers::ListView tmp8 = this->_list;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				::String tmp9 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(137)
				Dynamic tmp10 = this->_onListChange_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(137)
				tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
				HX_STACK_LINE(138)
				::haxe::ui::toolkit::containers::ListView tmp11 = this->_list;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(138)
				::haxe::ui::toolkit::core::Component tmp12 = tmp11->get_content();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(138)
				::String tmp13 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp13,"tmp13");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,::haxe::ui::toolkit::controls::selection::ListSelector,_g)
				int __ArgCount() const { return 1; }
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","haxe/ui/toolkit/controls/selection/ListSelector.hx",139,0x5c9ca828)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(139)
						_g->showList();
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(138)
				tmp12->addEventListener(tmp13, Dynamic(new _Function_3_1(_g)),null(),null(),null());
				HX_STACK_LINE(141)
				::haxe::ui::toolkit::core::Root tmp14 = this->get_root();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(141)
				::haxe::ui::toolkit::containers::ListView tmp15 = this->_list;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(141)
				tmp14->addChild(tmp15);
				HX_STACK_LINE(142)
				return null();
			}
			HX_STACK_LINE(145)
			::haxe::ui::toolkit::containers::ListView tmp4 = this->_list;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			::haxe::ui::toolkit::data::IDataSource tmp5 = this->_dataSource;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			tmp4->set_dataSource(tmp5);
			HX_STACK_LINE(146)
			::haxe::ui::toolkit::core::Root tmp6 = this->get_root();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			::String tmp7 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			Dynamic tmp8 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			tmp6->addEventListener(tmp7,tmp8,null(),null(),null());
			HX_STACK_LINE(147)
			::haxe::ui::toolkit::core::Root tmp9 = this->get_root();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(147)
			Dynamic tmp11 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(147)
			tmp9->addEventListener(tmp10,tmp11,null(),null(),null());
			HX_STACK_LINE(149)
			::haxe::ui::toolkit::containers::ListView tmp12 = this->_list;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(149)
			Float tmp13 = this->get_stageX();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(149)
			::haxe::ui::toolkit::core::Root tmp14 = this->get_root();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(149)
			Float tmp15 = tmp14->get_stageX();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(149)
			Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(149)
			tmp12->set_x(tmp16);
			HX_STACK_LINE(150)
			::haxe::ui::toolkit::containers::ListView tmp17 = this->_list;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(150)
			Float tmp18 = this->get_stageY();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(150)
			Float tmp19 = this->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(150)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(150)
			::haxe::ui::toolkit::core::Root tmp21 = this->get_root();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(150)
			Float tmp22 = tmp21->get_stageY();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(150)
			Float tmp23 = (tmp20 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(150)
			tmp17->set_y(tmp23);
			HX_STACK_LINE(152)
			::haxe::ui::toolkit::containers::ListView tmp24 = this->_list;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(152)
			Float tmp25 = this->get_width();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(152)
			tmp24->set_width(tmp25);
			HX_STACK_LINE(155)
			int tmp26 = this->_maxListSize;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(155)
			int n = tmp26;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(156)
			int tmp27 = n;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::containers::ListView tmp28 = this->_list;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(156)
			int tmp29 = tmp28->get_listSize();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(156)
			bool tmp30 = (tmp27 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(156)
			if ((tmp30)){
				HX_STACK_LINE(157)
				::haxe::ui::toolkit::containers::ListView tmp31 = this->_list;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(157)
				int tmp32 = tmp31->get_listSize();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(157)
				n = tmp32;
			}
			HX_STACK_LINE(160)
			int tmp31 = n;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(160)
			::haxe::ui::toolkit::containers::ListView tmp32 = this->_list;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(160)
			Float tmp33 = tmp32->get_itemHeight();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(160)
			Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(160)
			::haxe::ui::toolkit::containers::ListView tmp35 = this->_list;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(160)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp36 = tmp35->get_layout();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(160)
			::openfl::_legacy::geom::Rectangle tmp37 = tmp36->get_padding();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(160)
			Float tmp38 = tmp37->get_top();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(160)
			::haxe::ui::toolkit::containers::ListView tmp39 = this->_list;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(160)
			::haxe::ui::toolkit::core::interfaces::ILayout tmp40 = tmp39->get_layout();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(160)
			::openfl::_legacy::geom::Rectangle tmp41 = tmp40->get_padding();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(160)
			Float tmp42 = tmp41->get_bottom();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(160)
			Float tmp43 = (tmp38 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(160)
			Float tmp44 = (tmp34 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(160)
			Float listHeight = tmp44;		HX_STACK_VAR(listHeight,"listHeight");
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::containers::ListView tmp45 = this->_list;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(161)
			Float tmp46 = listHeight;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(161)
			tmp45->set_height(tmp46);
			HX_STACK_LINE(162)
			::haxe::ui::toolkit::containers::ListView tmp47 = this->_list;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(162)
			int tmp48 = this->_selectedIndex;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(162)
			tmp47->setSelectedIndexNoEvent(tmp48);
			HX_STACK_LINE(163)
			::haxe::ui::toolkit::containers::ListView tmp49 = this->_list;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(163)
			Float tmp50 = tmp49->get_stageY();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(163)
			Float tmp51 = listHeight;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(163)
			Float tmp52 = (tmp50 + tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(163)
			::haxe::ui::toolkit::core::Screen tmp53 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(163)
			Float tmp54 = tmp53->get_height();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(163)
			Float tmp55 = ::haxe::ui::toolkit::core::Toolkit_obj::get_scaleFactor();		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(163)
			Float tmp56 = (Float(tmp54) / Float(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(163)
			bool tmp57 = (tmp52 > tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(163)
			if ((tmp57)){
				HX_STACK_LINE(164)
				::haxe::ui::toolkit::containers::ListView tmp58 = this->_list;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(164)
				Float tmp59 = this->get_stageY();		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(164)
				::haxe::ui::toolkit::containers::ListView tmp60 = this->_list;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(164)
				Float tmp61 = tmp60->get_height();		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(164)
				Float tmp62 = (tmp59 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(164)
				tmp58->set_y(tmp62);
				HX_STACK_LINE(165)
				this->set_styleName(HX_HCSTRING("dropUp","\x6a","\x2c","\x12","\xe9"));
			}
			else{
				HX_STACK_LINE(167)
				this->set_styleName(null());
			}
			HX_STACK_LINE(170)
			::String tmp58 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >());		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(170)
			::String transition = tmp58;		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(171)
			Float tmp59 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >());		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(171)
			Float transitionTime = tmp59;		HX_STACK_VAR(transitionTime,"transitionTime");
			HX_STACK_LINE(172)
			bool tmp60 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(172)
			if ((tmp60)){
				HX_STACK_LINE(173)
				::haxe::ui::toolkit::containers::ListView tmp61 = this->_list;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(173)
				tmp61->set_clipHeight((int)0);
				HX_STACK_LINE(174)
				::haxe::ui::toolkit::containers::ListView tmp62 = this->_list;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(174)
				::openfl::_legacy::display::Sprite tmp63 = tmp62->get_sprite();		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(174)
				tmp63->set_alpha((int)1);
				HX_STACK_LINE(175)
				::haxe::ui::toolkit::containers::ListView tmp64 = this->_list;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(175)
				tmp64->set_visible(true);
				HX_STACK_LINE(176)
				::haxe::ui::toolkit::containers::ListView tmp65 = this->_list;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(176)
				Float tmp66 = transitionTime;		HX_STACK_VAR(tmp66,"tmp66");
				struct _Function_3_1{
					inline static Dynamic Block( Float &listHeight){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",176,0x5c9ca828)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , listHeight,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(176)
				Dynamic tmp67 = _Function_3_1::Block(listHeight);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(176)
				::motion::actuators::GenericActuator tmp68 = ::motion::Actuate_obj::tween(tmp65,tmp66,tmp67,true,null());		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(176)
				::motion::easing::IEasing tmp69 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(176)
				::motion::actuators::GenericActuator tmp70 = tmp68->ease(tmp69);		HX_STACK_VAR(tmp70,"tmp70");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,::haxe::ui::toolkit::controls::selection::ListSelector,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",177,0x5c9ca828)
					{
						HX_STACK_LINE(177)
						_g->_list->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(176)
				tmp70->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(179)
				bool tmp61 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(179)
				if ((tmp61)){
					HX_STACK_LINE(180)
					::haxe::ui::toolkit::containers::ListView tmp62 = this->_list;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(180)
					::openfl::_legacy::display::Sprite tmp63 = tmp62->get_sprite();		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(180)
					tmp63->set_alpha((int)0);
					HX_STACK_LINE(181)
					::haxe::ui::toolkit::containers::ListView tmp64 = this->_list;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(181)
					tmp64->set_visible(true);
					HX_STACK_LINE(182)
					::haxe::ui::toolkit::containers::ListView tmp65 = this->_list;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(182)
					::openfl::_legacy::display::Sprite tmp66 = tmp65->get_sprite();		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(182)
					Float tmp67 = transitionTime;		HX_STACK_VAR(tmp67,"tmp67");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",182,0x5c9ca828)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(182)
					Dynamic tmp68 = _Function_4_1::Block();		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(182)
					::motion::actuators::GenericActuator tmp69 = ::motion::Actuate_obj::tween(tmp66,tmp67,tmp68,true,null());		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(182)
					::motion::easing::IEasing tmp70 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(182)
					::motion::actuators::GenericActuator tmp71 = tmp69->ease(tmp70);		HX_STACK_VAR(tmp71,"tmp71");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",182,0x5c9ca828)
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(182)
					tmp71->onComplete( Dynamic(new _Function_4_2()),null());
				}
				else{
					HX_STACK_LINE(185)
					::haxe::ui::toolkit::containers::ListView tmp62 = this->_list;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(185)
					::openfl::_legacy::display::Sprite tmp63 = tmp62->get_sprite();		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(185)
					tmp63->set_alpha((int)1);
					HX_STACK_LINE(186)
					::haxe::ui::toolkit::containers::ListView tmp64 = this->_list;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(186)
					tmp64->set_visible(true);
				}
			}
			HX_STACK_LINE(189)
			this->set_selected(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,showList,(void))

Void ListSelector_obj::hideList( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","hideList",0x23995039,"haxe.ui.toolkit.controls.selection.ListSelector.hideList","haxe/ui/toolkit/controls/selection/ListSelector.hx",196,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		::haxe::ui::toolkit::controls::selection::ListSelector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		if ((tmp1)){
			HX_STACK_LINE(198)
			::String tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			::String transition = tmp2;		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(199)
			Float tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(199)
			Float transitionTime = tmp3;		HX_STACK_VAR(transitionTime,"transitionTime");
			HX_STACK_LINE(200)
			bool tmp4 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(200)
			if ((tmp4)){
				HX_STACK_LINE(201)
				::haxe::ui::toolkit::containers::ListView tmp5 = this->_list;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(201)
				::openfl::_legacy::display::Sprite tmp6 = tmp5->get_sprite();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(201)
				tmp6->set_alpha((int)1);
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::containers::ListView tmp7 = this->_list;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(202)
				Float tmp8 = transitionTime;		HX_STACK_VAR(tmp8,"tmp8");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",202,0x5c9ca828)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(202)
				Dynamic tmp9 = _Function_3_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(202)
				::motion::actuators::GenericActuator tmp10 = ::motion::Actuate_obj::tween(tmp7,tmp8,tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(202)
				::motion::easing::IEasing tmp11 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(202)
				::motion::actuators::GenericActuator tmp12 = tmp10->ease(tmp11);		HX_STACK_VAR(tmp12,"tmp12");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,::haxe::ui::toolkit::controls::selection::ListSelector,_g)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",202,0x5c9ca828)
					{
						HX_STACK_LINE(203)
						_g->_list->set_visible(false);
						HX_STACK_LINE(204)
						_g->_list->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(202)
				tmp12->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(206)
				bool tmp5 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(206)
				if ((tmp5)){
					HX_STACK_LINE(207)
					::haxe::ui::toolkit::containers::ListView tmp6 = this->_list;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(207)
					::openfl::_legacy::display::Sprite tmp7 = tmp6->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(207)
					Float tmp8 = transitionTime;		HX_STACK_VAR(tmp8,"tmp8");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",207,0x5c9ca828)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(207)
					Dynamic tmp9 = _Function_4_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(207)
					::motion::actuators::GenericActuator tmp10 = ::motion::Actuate_obj::tween(tmp7,tmp8,tmp9,true,null());		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(207)
					::motion::easing::IEasing tmp11 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(207)
					::motion::actuators::GenericActuator tmp12 = tmp10->ease(tmp11);		HX_STACK_VAR(tmp12,"tmp12");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_2,::haxe::ui::toolkit::controls::selection::ListSelector,_g)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",208,0x5c9ca828)
						{
							HX_STACK_LINE(208)
							_g->_list->set_visible(false);
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(207)
					tmp12->onComplete( Dynamic(new _Function_4_2(_g)),null());
				}
				else{
					HX_STACK_LINE(211)
					::haxe::ui::toolkit::containers::ListView tmp6 = this->_list;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(211)
					::openfl::_legacy::display::Sprite tmp7 = tmp6->get_sprite();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(211)
					tmp7->set_alpha((int)1);
					HX_STACK_LINE(212)
					::haxe::ui::toolkit::containers::ListView tmp8 = this->_list;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(212)
					tmp8->set_visible(false);
				}
			}
			HX_STACK_LINE(215)
			this->set_selected(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,hideList,(void))

::String ListSelector_obj::get_method( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_method",0xab1be0e3,"haxe.ui.toolkit.controls.selection.ListSelector.get_method","haxe/ui/toolkit/controls/selection/ListSelector.hx",231,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	::String tmp = this->_method;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_method,return )

::String ListSelector_obj::set_method( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","set_method",0xae997f57,"haxe.ui.toolkit.controls.selection.ListSelector.set_method","haxe/ui/toolkit/controls/selection/ListSelector.hx",235,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(236)
	this->_method = value;
	HX_STACK_LINE(237)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(237)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,set_method,return )

int ListSelector_obj::get_listSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_listSize",0x6f995ec1,"haxe.ui.toolkit.controls.selection.ListSelector.get_listSize","haxe/ui/toolkit/controls/selection/ListSelector.hx",242,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	int tmp = this->_maxListSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_listSize,return )

int ListSelector_obj::set_listSize( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","set_listSize",0x84928235,"haxe.ui.toolkit.controls.selection.ListSelector.set_listSize","haxe/ui/toolkit/controls/selection/ListSelector.hx",246,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(247)
	this->_maxListSize = value;
	HX_STACK_LINE(248)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,set_listSize,return )

Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > ListSelector_obj::get_selectedItems( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_selectedItems",0x5d43c1e3,"haxe.ui.toolkit.controls.selection.ListSelector.get_selectedItems","haxe/ui/toolkit/controls/selection/ListSelector.hx",260,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(260)
	return this->_selectedItems;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_selectedItems,return )

int ListSelector_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_selectedIndex",0x594bb0f5,"haxe.ui.toolkit.controls.selection.ListSelector.get_selectedIndex","haxe/ui/toolkit/controls/selection/ListSelector.hx",264,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	int tmp = this->_selectedIndex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_selectedIndex,return )

int ListSelector_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","set_selectedIndex",0x7cb98901,"haxe.ui.toolkit.controls.selection.ListSelector.set_selectedIndex","haxe/ui/toolkit/controls/selection/ListSelector.hx",268,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(269)
	this->_selectedIndex = value;
	HX_STACK_LINE(270)
	::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	if ((tmp1)){
		HX_STACK_LINE(271)
		::haxe::ui::toolkit::containers::ListView tmp2 = this->_list;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		tmp2->set_selectedIndex(tmp3);
		HX_STACK_LINE(272)
		::haxe::ui::toolkit::containers::ListView tmp4 = this->_list;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(272)
		this->_selectedItems = tmp4->get_selectedItems();
	}
	HX_STACK_LINE(274)
	int tmp2 = this->_selectedIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(274)
	bool tmp3 = (tmp2 < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(274)
	if ((tmp3)){
		HX_STACK_LINE(275)
		this->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(277)
		::haxe::ui::toolkit::data::IDataSource tmp4 = this->_dataSource;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		if ((tmp5)){
			HX_STACK_LINE(278)
			int n = (int)0;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(279)
			::haxe::ui::toolkit::data::IDataSource tmp6 = this->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(279)
			bool tmp7 = tmp6->moveFirst();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(279)
			if ((tmp7)){
				HX_STACK_LINE(280)
				while((true)){
					HX_STACK_LINE(281)
					int tmp8 = n;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(281)
					int tmp9 = this->_selectedIndex;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(281)
					bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(281)
					if ((tmp10)){
						HX_STACK_LINE(282)
						::haxe::ui::toolkit::data::IDataSource tmp11 = this->_dataSource;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(282)
						Dynamic tmp12 = tmp11->get();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(282)
						this->set_text(tmp12->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ));
						HX_STACK_LINE(283)
						break;
					}
					HX_STACK_LINE(285)
					(n)++;
					HX_STACK_LINE(286)
					::haxe::ui::toolkit::data::IDataSource tmp11 = this->get_dataSource();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(286)
					bool tmp12 = tmp11->moveNext();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(286)
					bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(280)
					if ((tmp13)){
						HX_STACK_LINE(280)
						break;
					}
				}
			}
		}
	}
	HX_STACK_LINE(290)
	int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(290)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,set_selectedIndex,return )

Void ListSelector_obj::_onRootMouseDown( ::openfl::_legacy::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","_onRootMouseDown",0xf5b8e380,"haxe.ui.toolkit.controls.selection.ListSelector._onRootMouseDown","haxe/ui/toolkit/controls/selection/ListSelector.hx",296,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(297)
		bool mouseInList = false;		HX_STACK_VAR(mouseInList,"mouseInList");
		HX_STACK_LINE(298)
		::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(298)
		if ((tmp1)){
			HX_STACK_LINE(299)
			::haxe::ui::toolkit::containers::ListView tmp2 = this->_list;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(299)
			Float tmp3 = event->stageX;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			Float tmp4 = event->stageY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			bool tmp5 = tmp2->hitTest(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(299)
			mouseInList = tmp5;
		}
		HX_STACK_LINE(302)
		Float tmp2 = event->stageX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(302)
		Float tmp3 = event->stageY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(302)
		bool tmp4 = this->hitTest(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(302)
		bool mouseIn = tmp4;		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(303)
		bool tmp5 = (mouseInList == false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(303)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(303)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(303)
		if ((tmp6)){
			HX_STACK_LINE(303)
			::haxe::ui::toolkit::containers::ListView tmp8 = this->_list;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(303)
			::haxe::ui::toolkit::containers::ListView tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(303)
			::haxe::ui::toolkit::containers::ListView tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(303)
			tmp7 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(303)
			tmp7 = false;
		}
		HX_STACK_LINE(303)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(303)
		if ((tmp7)){
			HX_STACK_LINE(303)
			tmp8 = (mouseIn == false);
		}
		else{
			HX_STACK_LINE(303)
			tmp8 = false;
		}
		HX_STACK_LINE(303)
		if ((tmp8)){
			HX_STACK_LINE(304)
			::haxe::ui::toolkit::core::Root tmp9 = this->get_root();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(304)
			::String tmp10 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(304)
			Dynamic tmp11 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(304)
			tmp9->removeEventListener(tmp10,tmp11,null());
			HX_STACK_LINE(305)
			::haxe::ui::toolkit::core::Root tmp12 = this->get_root();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(305)
			::String tmp13 = ::openfl::_legacy::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(305)
			Dynamic tmp14 = this->_onRootMouseDown_dyn();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(305)
			tmp12->removeEventListener(tmp13,tmp14,null());
			HX_STACK_LINE(306)
			this->hideList();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,_onRootMouseDown,(void))

Void ListSelector_obj::_onListChange( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","_onListChange",0xb6a6e0b3,"haxe.ui.toolkit.controls.selection.ListSelector._onListChange","haxe/ui/toolkit/controls/selection/ListSelector.hx",310,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(311)
		::haxe::ui::toolkit::containers::ListView tmp = this->_list;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		bool tmp1 = (tmp->get_selectedItems() != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(311)
		if ((tmp1)){
			HX_STACK_LINE(311)
			::haxe::ui::toolkit::containers::ListView tmp3 = this->_list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(311)
			::haxe::ui::toolkit::containers::ListView tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(311)
			int tmp5 = tmp4->get_selectedItems()->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(311)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			tmp2 = (tmp6 > (int)0);
		}
		else{
			HX_STACK_LINE(311)
			tmp2 = false;
		}
		HX_STACK_LINE(311)
		if ((tmp2)){
			HX_STACK_LINE(312)
			::haxe::ui::toolkit::containers::ListView tmp3 = this->_list;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(312)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer tmp4 = tmp3->get_selectedItems()->__get((int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			Dynamic tmp5 = tmp4->get_data();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(312)
			this->set_text(tmp5->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic ));
			HX_STACK_LINE(313)
			::haxe::ui::toolkit::containers::ListView tmp6 = this->_list;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(313)
			int tmp7 = tmp6->get_selectedIndex();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(313)
			this->_selectedIndex = tmp7;
			HX_STACK_LINE(314)
			::haxe::ui::toolkit::containers::ListView tmp8 = this->_list;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(314)
			this->_selectedItems = tmp8->get_selectedItems();
			HX_STACK_LINE(315)
			this->hideList();
			HX_STACK_LINE(317)
			::String tmp9 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(317)
			::haxe::ui::toolkit::events::UIEvent tmp10 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(tmp9,null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(317)
			::haxe::ui::toolkit::events::UIEvent event1 = tmp10;		HX_STACK_VAR(event1,"event1");
			HX_STACK_LINE(318)
			::haxe::ui::toolkit::events::UIEvent tmp11 = event1;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(318)
			this->dispatchEvent(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,_onListChange,(void))

::haxe::ui::toolkit::core::DisplayObject ListSelector_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","clone",0x792dc3c4,"haxe.ui.toolkit.controls.selection.ListSelector.clone","src/haxe/ui/toolkit/controls/selection/ListSelector.hx",1,0xa23c23b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button tmp = hx::TCast< ::haxe::ui::toolkit::controls::Button >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::selection::ListSelector c = ((::haxe::ui::toolkit::controls::selection::ListSelector)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::controls::selection::ListSelector tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ListSelector_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","self",0x8bac2505,"haxe.ui.toolkit.controls.selection.ListSelector.self","src/haxe/ui/toolkit/controls/selection/ListSelector.hx",1,0xa23c23b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::selection::ListSelector tmp = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ListSelector_obj::ListSelector_obj()
{
}

void ListSelector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListSelector);
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_maxListSize,"_maxListSize");
	HX_MARK_MEMBER_NAME(_method,"_method");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_MARK_MEMBER_NAME(selectedItems,"selectedItems");
	::haxe::ui::toolkit::controls::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListSelector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_maxListSize,"_maxListSize");
	HX_VISIT_MEMBER_NAME(_method,"_method");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_VISIT_MEMBER_NAME(selectedItems,"selectedItems");
	::haxe::ui::toolkit::controls::Button_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ListSelector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return _list; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { if (inCallProp == hx::paccAlways) return get_method(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_method") ) { return _method; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"showList") ) { return showList_dyn(); }
		if (HX_FIELD_EQ(inName,"hideList") ) { return hideList_dyn(); }
		if (HX_FIELD_EQ(inName,"listSize") ) { if (inCallProp == hx::paccAlways) return get_listSize(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return get_dataSource(); }
		if (HX_FIELD_EQ(inName,"get_method") ) { return get_method_dyn(); }
		if (HX_FIELD_EQ(inName,"set_method") ) { return set_method_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return _dataSource; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxListSize") ) { return _maxListSize; }
		if (HX_FIELD_EQ(inName,"get_listSize") ) { return get_listSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_listSize") ) { return set_listSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { return inCallProp == hx::paccAlways ? get_selectedItems() : selectedItems; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"_onListChange") ) { return _onListChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { return _selectedItems; }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return get_dataSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return set_dataSource_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedItems") ) { return get_selectedItems_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListSelector_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { if (inCallProp == hx::paccAlways) return set_method(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_method") ) { _method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listSize") ) { if (inCallProp == hx::paccAlways) return set_listSize(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == hx::paccAlways) return set_dataSource(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast< ::haxe::ui::toolkit::data::IDataSource >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxListSize") ) { _maxListSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedItems") ) { selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == hx::paccAlways) return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { _selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListSelector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"));
	outFields->push(HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa"));
	outFields->push(HX_HCSTRING("_maxListSize","\x04","\x29","\x18","\x08"));
	outFields->push(HX_HCSTRING("_method","\x80","\x08","\xd2","\x77"));
	outFields->push(HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"));
	outFields->push(HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6"));
	outFields->push(HX_HCSTRING("dataSource","\xa5","\x76","\xd3","\x1d"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("listSize","\x3f","\x70","\x48","\x2c"));
	outFields->push(HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"));
	outFields->push(HX_HCSTRING("selectedIndex","\xb7","\x76","\x56","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::data::IDataSource*/ ,(int)offsetof(ListSelector_obj,_dataSource),HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(ListSelector_obj,_list),HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa")},
	{hx::fsInt,(int)offsetof(ListSelector_obj,_maxListSize),HX_HCSTRING("_maxListSize","\x04","\x29","\x18","\x08")},
	{hx::fsString,(int)offsetof(ListSelector_obj,_method),HX_HCSTRING("_method","\x80","\x08","\xd2","\x77")},
	{hx::fsInt,(int)offsetof(ListSelector_obj,_selectedIndex),HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListSelector_obj,_selectedItems),HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListSelector_obj,selectedItems),HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_dataSource","\xc4","\x43","\x5d","\xf0"),
	HX_HCSTRING("_list","\x3d","\x38","\xc4","\xfa"),
	HX_HCSTRING("_maxListSize","\x04","\x29","\x18","\x08"),
	HX_HCSTRING("_method","\x80","\x08","\xd2","\x77"),
	HX_HCSTRING("_selectedIndex","\xf8","\x66","\xa8","\xf2"),
	HX_HCSTRING("_selectedItems","\xe6","\x77","\xa0","\xf6"),
	HX_HCSTRING("preInitialize","\x53","\x3f","\xa2","\x86"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("_onMouseClick","\xc1","\xa4","\xdd","\x20"),
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("get_dataSource","\xee","\xfe","\xc8","\x93"),
	HX_HCSTRING("set_dataSource","\x62","\xe7","\xe8","\xb3"),
	HX_HCSTRING("showList","\xfb","\xdf","\x39","\xaf"),
	HX_HCSTRING("hideList","\x40","\x06","\x81","\xa0"),
	HX_HCSTRING("get_method","\xaa","\x66","\xe2","\xf9"),
	HX_HCSTRING("set_method","\x1e","\x05","\x60","\xfd"),
	HX_HCSTRING("get_listSize","\x48","\x24","\x62","\xe1"),
	HX_HCSTRING("set_listSize","\xbc","\x47","\x5b","\xf6"),
	HX_HCSTRING("selectedItems","\xa5","\x87","\x4e","\xb8"),
	HX_HCSTRING("get_selectedItems","\xfc","\x92","\xbe","\xbe"),
	HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"),
	HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"),
	HX_HCSTRING("_onRootMouseDown","\x87","\x78","\xe0","\x96"),
	HX_HCSTRING("_onListChange","\x4c","\xf1","\x8a","\xd4"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListSelector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListSelector_obj::__mClass,"__mClass");
};

#endif

hx::Class ListSelector_obj::__mClass;

void ListSelector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.controls.selection.ListSelector","\x95","\x39","\x31","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListSelector_obj >;
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
} // end namespace selection
