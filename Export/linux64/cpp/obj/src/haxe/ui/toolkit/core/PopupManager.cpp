#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_BusyPopupContent
#include <haxe/ui/toolkit/controls/popups/BusyPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CalendarPopupContent
#include <haxe/ui/toolkit/controls/popups/CalendarPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CustomPopupContent
#include <haxe/ui/toolkit/controls/popups/CustomPopupContent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_SimplePopupContent
#include <haxe/ui/toolkit/controls/popups/SimplePopupContent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo
#include <haxe/ui/toolkit/core/PopupButtonInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#include <haxe/ui/toolkit/core/RootManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
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
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void PopupManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","new",0xa4c2ad20,"haxe.ui.toolkit.core.PopupManager.new","haxe/ui/toolkit/core/PopupManager.hx",23,0xc348cc90)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->_modalPopups = ::List_obj::__new();
	HX_STACK_LINE(37)
	this->defaultWidth = (int)300;
	HX_STACK_LINE(36)
	this->defaultTitle = HX_HCSTRING("HaxeUI","\x1a","\xc8","\x2e","\xf3");
}
;
	return null();
}

//PopupManager_obj::~PopupManager_obj() { }

Dynamic PopupManager_obj::__CreateEmpty() { return  new PopupManager_obj; }
hx::ObjectPtr< PopupManager_obj > PopupManager_obj::__new()
{  hx::ObjectPtr< PopupManager_obj > _result_ = new PopupManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic PopupManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupManager_obj > _result_ = new PopupManager_obj();
	_result_->__construct();
	return _result_;}

Void PopupManager_obj::onKeyPress( ::openfl::_legacy::events::KeyboardEvent e){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","onKeyPress",0x0fe308e3,"haxe.ui.toolkit.core.PopupManager.onKeyPress","haxe/ui/toolkit/core/PopupManager.hx",44,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(45)
		::List tmp = this->_modalPopups;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		if ((tmp2)){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(47)
		::List tmp3 = this->_modalPopups;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::controls::popups::Popup tmp4 = tmp3->first();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::controls::popups::Popup p = tmp4;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(48)
		Dynamic tmp5 = p->get_config();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		bool tmp6 = (tmp5->__Field(HX_HCSTRING("dismiss","\x4a","\x4f","\x4c","\xb9"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(48)
		if ((tmp6)){
			HX_STACK_LINE(49)
			bool tmp7 = (e->keyCode == (int)27);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			if ((tmp7)){
				HX_STACK_LINE(49)
				Dynamic tmp9 = p->get_config();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(49)
				Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(49)
				tmp8 = (tmp10->__Field(HX_HCSTRING("dismiss","\x4a","\x4f","\x4c","\xb9"), hx::paccDynamic ) == (int)1);
			}
			else{
				HX_STACK_LINE(49)
				tmp8 = false;
			}
			HX_STACK_LINE(49)
			if ((tmp8)){
				HX_STACK_LINE(50)
				e->stopImmediatePropagation();
				HX_STACK_LINE(51)
				int tmp9 = (int)257;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(51)
				this->dismissModal(tmp9);
			}
			else{
				HX_STACK_LINE(52)
				bool tmp9 = (e->keyCode == (int)13);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(52)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(52)
				if ((tmp9)){
					HX_STACK_LINE(52)
					Dynamic tmp11 = p->get_config();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(52)
					Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(52)
					tmp10 = (tmp12->__Field(HX_HCSTRING("dismiss","\x4a","\x4f","\x4c","\xb9"), hx::paccDynamic ) == (int)16);
				}
				else{
					HX_STACK_LINE(52)
					tmp10 = false;
				}
				HX_STACK_LINE(52)
				if ((tmp10)){
					HX_STACK_LINE(53)
					e->stopImmediatePropagation();
					HX_STACK_LINE(54)
					int tmp11 = (int)272;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(54)
					this->dismissModal(tmp11);
				}
				else{
					HX_STACK_LINE(55)
					Dynamic tmp11 = p->get_config();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(55)
					bool tmp12 = (tmp11->__Field(HX_HCSTRING("dismiss","\x4a","\x4f","\x4c","\xb9"), hx::paccDynamic ) == (int)256);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(55)
					if ((tmp12)){
						HX_STACK_LINE(56)
						e->stopImmediatePropagation();
						HX_STACK_LINE(57)
						this->dismissModal((int)256);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,onKeyPress,(void))

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showSimple( ::String text,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showSimple",0x472de44f,"haxe.ui.toolkit.core.PopupManager.showSimple","haxe/ui/toolkit/core/PopupManager.hx",62,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::controls::popups::SimplePopupContent tmp = ::haxe::ui::toolkit::controls::popups::SimplePopupContent_obj::__new(text);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		Dynamic tmp2 = config;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		Dynamic tmp3 = fn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::controls::popups::Popup tmp4 = this->buildPopup(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::controls::popups::Popup p = tmp4;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(64)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		this->showPopup(tmp5);
		HX_STACK_LINE(65)
		::haxe::ui::toolkit::controls::popups::Popup tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,showSimple,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showCustom( ::haxe::ui::toolkit::core::interfaces::IDisplayObject display,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showCustom",0xce4167ce,"haxe.ui.toolkit.core.PopupManager.showCustom","haxe/ui/toolkit/core/PopupManager.hx",68,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(69)
		::haxe::ui::toolkit::controls::popups::CustomPopupContent tmp = ::haxe::ui::toolkit::controls::popups::CustomPopupContent_obj::__new(display);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::String tmp1 = title;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		Dynamic tmp2 = config;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		Dynamic tmp3 = fn;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		::haxe::ui::toolkit::controls::popups::Popup tmp4 = this->buildPopup(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		::haxe::ui::toolkit::controls::popups::Popup p = tmp4;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(70)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		this->showPopup(tmp5);
		HX_STACK_LINE(71)
		::haxe::ui::toolkit::controls::popups::Popup tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,showCustom,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showList( Dynamic items,hx::Null< int >  __o_selectedIndex,::String title,Dynamic config,Dynamic fn){
int selectedIndex = __o_selectedIndex.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showList",0x83f2cb3b,"haxe.ui.toolkit.core.PopupManager.showList","haxe/ui/toolkit/core/PopupManager.hx",74,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(items,"items")
	HX_STACK_ARG(selectedIndex,"selectedIndex")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(75)
		::haxe::ui::toolkit::data::IDataSource ds = null();		HX_STACK_VAR(ds,"ds");
		HX_STACK_LINE(76)
		Dynamic tmp = items;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		if ((tmp1)){
			HX_STACK_LINE(77)
			cpp::ArrayBase arr;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(77)
			arr = hx::TCastToArray(items);
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::data::ArrayDataSource tmp2 = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			ds = tmp2;
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(79)
				while((true)){
					HX_STACK_LINE(79)
					bool tmp3 = (_g < arr->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(79)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(79)
					if ((tmp4)){
						HX_STACK_LINE(79)
						break;
					}
					HX_STACK_LINE(79)
					Dynamic tmp5 = arr->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					Dynamic item = tmp5;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(79)
					++(_g);
					HX_STACK_LINE(80)
					Dynamic tmp6 = item;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(80)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					if ((tmp7)){
						struct _Function_5_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",81,0xc348cc90)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(81)
						Dynamic tmp8 = _Function_5_1::Block();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(81)
						Dynamic o = tmp8;		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(82)
						::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(82)
						tmp9 = hx::TCast< ::String >::cast(item);
						HX_STACK_LINE(82)
						o->__FieldRef(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")) = tmp9;
						HX_STACK_LINE(83)
						Dynamic tmp10 = o;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(83)
						ds->add(tmp10);
					}
					else{
						HX_STACK_LINE(85)
						Dynamic tmp8 = item;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(85)
						ds->add(tmp8);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(88)
			Dynamic tmp2 = items;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(88)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::haxe::ui::toolkit::data::IDataSource >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(88)
			if ((tmp3)){
				HX_STACK_LINE(89)
				::haxe::ui::toolkit::data::IDataSource tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(89)
				tmp4 = hx::TCast< ::haxe::ui::toolkit::data::IDataSource >::cast(items);
				HX_STACK_LINE(89)
				ds = tmp4;
			}
		}
		HX_STACK_LINE(92)
		::haxe::ui::toolkit::controls::popups::ListPopupContent tmp2 = ::haxe::ui::toolkit::controls::popups::ListPopupContent_obj::__new(ds,selectedIndex,fn);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		::String tmp3 = title;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		Dynamic tmp4 = config;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		Dynamic tmp5 = fn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->buildPopup(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		::haxe::ui::toolkit::controls::popups::Popup p = tmp6;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(93)
		::haxe::ui::toolkit::controls::popups::Popup tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		this->showPopup(tmp7);
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::controls::popups::Popup tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(PopupManager_obj,showList,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showCalendar( ::String title,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showCalendar",0x3f66401b,"haxe.ui.toolkit.core.PopupManager.showCalendar","haxe/ui/toolkit/core/PopupManager.hx",97,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(98)
	int tmp = (int)69632;		HX_STACK_VAR(tmp,"tmp");
	struct _Function_1_1{
		inline static Dynamic Block( int &tmp){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",98,0xc348cc90)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("modal","\x2d","\x20","\x58","\x0c") , true,false);
				__result->Add(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca") , tmp,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(98)
	Dynamic tmp1 = _Function_1_1::Block(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Dynamic config = tmp1;		HX_STACK_VAR(config,"config");
	HX_STACK_LINE(99)
	::haxe::ui::toolkit::controls::popups::CalendarPopupContent tmp2 = ::haxe::ui::toolkit::controls::popups::CalendarPopupContent_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	::haxe::ui::toolkit::controls::popups::CalendarPopupContent content = tmp2;		HX_STACK_VAR(content,"content");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,::haxe::ui::toolkit::controls::popups::CalendarPopupContent,content,Dynamic,fn)
	int __ArgCount() const { return 1; }
	Void run(Dynamic button){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/toolkit/core/PopupManager.hx",100,0xc348cc90)
		HX_STACK_ARG(button,"button")
		{
			HX_STACK_LINE(101)
			bool tmp3 = (fn != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			if ((tmp3)){
				HX_STACK_LINE(102)
				bool tmp4 = (button == (int)65536);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(102)
				if ((tmp4)){
					HX_STACK_LINE(103)
					Dynamic tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(103)
					::Date tmp6 = content->get_selectedDate();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(103)
					fn(tmp5,tmp6).Cast< Void >();
				}
				else{
					HX_STACK_LINE(105)
					Dynamic tmp5 = button;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(105)
					fn(tmp5,null()).Cast< Void >();
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(100)
	Dynamic tempFn =  Dynamic(new _Function_1_2(content,fn));		HX_STACK_VAR(tempFn,"tempFn");
	HX_STACK_LINE(110)
	::haxe::ui::toolkit::controls::popups::CalendarPopupContent tmp3 = content;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(110)
	::String tmp4 = title;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(110)
	Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(110)
	Dynamic tmp6 = tempFn;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(110)
	::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->buildPopup(tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(110)
	::haxe::ui::toolkit::controls::popups::Popup p = tmp7;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(111)
	::haxe::ui::toolkit::controls::popups::Popup tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(111)
	this->showPopup(tmp8);
	HX_STACK_LINE(112)
	::haxe::ui::toolkit::controls::popups::Popup tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(112)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC2(PopupManager_obj,showCalendar,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showBusy( ::String text,hx::Null< int >  __o_delay,::String title,Dynamic config,Dynamic fn){
int delay = __o_delay.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showBusy",0x7d5fc416,"haxe.ui.toolkit.core.PopupManager.showBusy","haxe/ui/toolkit/core/PopupManager.hx",115,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(115)
		::haxe::ui::toolkit::core::PopupManager _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		bool tmp = (config == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		if ((tmp)){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",117,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(117)
			Dynamic tmp1 = _Function_2_1::Block();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(117)
			config = tmp1;
		}
		HX_STACK_LINE(119)
		config->__FieldRef(HX_HCSTRING("useDefaultTitle","\xfe","\x97","\x76","\x9d")) = false;
		HX_STACK_LINE(120)
		::haxe::ui::toolkit::controls::popups::BusyPopupContent tmp1 = ::haxe::ui::toolkit::controls::popups::BusyPopupContent_obj::__new(text);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::String tmp2 = title;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		Dynamic tmp3 = config;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		Dynamic tmp4 = fn;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = this->buildPopup(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		::haxe::ui::toolkit::controls::popups::Popup p = tmp5;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(121)
		::haxe::ui::toolkit::controls::popups::Popup tmp6 = p;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		this->showPopup(tmp6);
		HX_STACK_LINE(123)
		bool tmp7 = (delay > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		if ((tmp7)){
			HX_STACK_LINE(124)
			::haxe::Timer tmp8 = ::haxe::Timer_obj::__new(delay);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			::haxe::Timer timer = tmp8;		HX_STACK_VAR(timer,"timer");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::haxe::ui::toolkit::core::PopupManager,_g,::haxe::Timer,timer,::haxe::ui::toolkit::controls::popups::Popup,p)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/core/PopupManager.hx",125,0xc348cc90)
				{
					HX_STACK_LINE(126)
					timer->stop();
					HX_STACK_LINE(127)
					::haxe::ui::toolkit::controls::popups::Popup tmp9 = p;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(127)
					_g->hidePopup(tmp9,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(125)
			timer->run =  Dynamic(new _Function_2_1(_g,timer,p));
		}
		HX_STACK_LINE(131)
		::haxe::ui::toolkit::controls::popups::Popup tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(131)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(PopupManager_obj,showBusy,return )

Void PopupManager_obj::showPopup( ::haxe::ui::toolkit::controls::popups::Popup p){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showPopup",0x420e5caf,"haxe.ui.toolkit.core.PopupManager.showPopup","haxe/ui/toolkit/core/PopupManager.hx",134,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(135)
		bool modal = true;		HX_STACK_VAR(modal,"modal");
		HX_STACK_LINE(136)
		Dynamic tmp = p->get_config();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		bool tmp1 = (tmp->__Field(HX_HCSTRING("modal","\x2d","\x20","\x58","\x0c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(136)
		if ((tmp1)){
			HX_STACK_LINE(137)
			Dynamic tmp2 = p->get_config();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			modal = tmp2->__Field(HX_HCSTRING("modal","\x2d","\x20","\x58","\x0c"), hx::paccDynamic );
		}
		HX_STACK_LINE(139)
		bool tmp2 = (modal == true);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		if ((tmp2)){
			HX_STACK_LINE(140)
			::List tmp3 = this->_modalPopups;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			int tmp4 = tmp3->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			if ((tmp5)){
				HX_STACK_LINE(141)
				::openfl::_legacy::display::MovieClip tmp6 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(141)
				::openfl::_legacy::display::Stage tmp7 = tmp6->get_stage();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(141)
				::String tmp8 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(141)
				Dynamic tmp9 = this->onKeyPress_dyn();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(141)
				tmp7->addEventListener(tmp8,tmp9,null(),null(),null());
			}
			HX_STACK_LINE(142)
			::List tmp6 = this->_modalPopups;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			tmp6->push(tmp7);
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::core::Root tmp8 = p->get_root();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(143)
			tmp8->showModalOverlay();
		}
		HX_STACK_LINE(145)
		::haxe::ui::toolkit::core::Root tmp3 = p->get_root();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		::haxe::ui::toolkit::controls::popups::Popup tmp4 = p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		tmp3->addChild(tmp4);
		HX_STACK_LINE(146)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(146)
		this->centerPopup(tmp5);
		HX_STACK_LINE(148)
		::String tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(148)
		::String transition = tmp6;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(149)
		Float tmp7 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(149)
		Float transitionTime = tmp7;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(150)
		bool tmp8 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		if ((tmp8)){
			HX_STACK_LINE(151)
			Float tmp9 = p->get_y();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(151)
			Float ypos = tmp9;		HX_STACK_VAR(ypos,"ypos");
			HX_STACK_LINE(152)
			Float tmp10 = p->get_height();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(152)
			Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(152)
			p->set_y(tmp11);
			HX_STACK_LINE(153)
			p->set_visible(true);
			HX_STACK_LINE(154)
			::haxe::ui::toolkit::controls::popups::Popup tmp12 = p;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(154)
			Float tmp13 = transitionTime;		HX_STACK_VAR(tmp13,"tmp13");
			struct _Function_2_1{
				inline static Dynamic Block( Float &ypos){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",154,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , ypos,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(154)
			Dynamic tmp14 = _Function_2_1::Block(ypos);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(154)
			::motion::actuators::GenericActuator tmp15 = ::motion::Actuate_obj::tween(tmp12,tmp13,tmp14,true,null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(154)
			::motion::easing::IEasing tmp16 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(154)
			::motion::actuators::GenericActuator tmp17 = tmp15->ease(tmp16);		HX_STACK_VAR(tmp17,"tmp17");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/core/PopupManager.hx",154,0xc348cc90)
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(154)
			tmp17->onComplete( Dynamic(new _Function_2_2()),null());
		}
		else{
			HX_STACK_LINE(156)
			bool tmp9 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			if ((tmp9)){
				HX_STACK_LINE(157)
				::openfl::_legacy::display::Sprite tmp10 = p->get_sprite();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(157)
				tmp10->set_alpha((int)0);
				HX_STACK_LINE(158)
				p->set_visible(true);
				HX_STACK_LINE(159)
				::openfl::_legacy::display::Sprite tmp11 = p->get_sprite();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(159)
				Float tmp12 = transitionTime;		HX_STACK_VAR(tmp12,"tmp12");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",159,0xc348cc90)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(159)
				Dynamic tmp13 = _Function_3_1::Block();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(159)
				::motion::actuators::GenericActuator tmp14 = ::motion::Actuate_obj::tween(tmp11,tmp12,tmp13,true,null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(159)
				::motion::easing::IEasing tmp15 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(159)
				::motion::actuators::GenericActuator tmp16 = tmp14->ease(tmp15);		HX_STACK_VAR(tmp16,"tmp16");

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/core/PopupManager.hx",159,0xc348cc90)
					{
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(159)
				tmp16->onComplete( Dynamic(new _Function_3_2()),null());
			}
			else{
				HX_STACK_LINE(162)
				p->set_visible(true);
			}
		}
		HX_STACK_LINE(165)
		::haxe::ui::toolkit::core::Screen tmp9 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(165)
		::String tmp10 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(165)
		Dynamic tmp11 = this->_onScreenResize_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(165)
		tmp9->addEventListener(tmp10,tmp11,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,showPopup,(void))

Void PopupManager_obj::hidePopup( ::haxe::ui::toolkit::controls::popups::Popup p,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","hidePopup",0x6f08b2ca,"haxe.ui.toolkit.core.PopupManager.hidePopup","haxe/ui/toolkit/core/PopupManager.hx",168,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(169)
		::List tmp = this->_modalPopups;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		::haxe::ui::toolkit::controls::popups::Popup tmp1 = p;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		tmp->remove(tmp1);
		HX_STACK_LINE(170)
		::List tmp2 = this->_modalPopups;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		int tmp3 = tmp2->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		bool tmp4 = (tmp3 == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		if ((tmp4)){
			HX_STACK_LINE(171)
			::openfl::_legacy::display::MovieClip tmp5 = ::openfl::_legacy::Lib_obj::get_current();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			::openfl::_legacy::display::Stage tmp6 = tmp5->get_stage();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			::String tmp7 = ::openfl::_legacy::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			Dynamic tmp8 = this->onKeyPress_dyn();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			tmp6->removeEventListener(tmp7,tmp8,null());
		}
		HX_STACK_LINE(173)
		::String tmp5 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		::String transition = tmp5;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(174)
		Float tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(174)
		Float transitionTime = tmp6;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(175)
		bool tmp7 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		if ((tmp7)){
			HX_STACK_LINE(176)
			::haxe::ui::toolkit::controls::popups::Popup tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(176)
			Float tmp9 = transitionTime;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(176)
			::haxe::ui::toolkit::core::Root tmp10 = p->get_root();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(176)
			Float tmp11 = tmp10->get_height();		HX_STACK_VAR(tmp11,"tmp11");
			struct _Function_2_1{
				inline static Dynamic Block( Float &tmp11){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",176,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp11,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(176)
			Dynamic tmp12 = _Function_2_1::Block(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(176)
			::motion::actuators::GenericActuator tmp13 = ::motion::Actuate_obj::tween(tmp8,tmp9,tmp12,true,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			::motion::easing::IEasing tmp14 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(176)
			::motion::actuators::GenericActuator tmp15 = tmp13->ease(tmp14);		HX_STACK_VAR(tmp15,"tmp15");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,bool,dispose,::haxe::ui::toolkit::controls::popups::Popup,p)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/core/PopupManager.hx",176,0xc348cc90)
				{
					HX_STACK_LINE(177)
					::haxe::ui::toolkit::core::Root tmp16 = p->get_root();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(177)
					::haxe::ui::toolkit::controls::popups::Popup tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(177)
					bool tmp18 = dispose;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(177)
					tmp16->removeChild(tmp17,tmp18);
					HX_STACK_LINE(178)
					::haxe::ui::toolkit::core::Root tmp19 = p->get_root();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(178)
					tmp19->hideModalOverlay();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(176)
			tmp15->onComplete( Dynamic(new _Function_2_2(dispose,p)),null());
		}
		else{
			HX_STACK_LINE(180)
			bool tmp8 = (transition == HX_HCSTRING("fade","\x7c","\xb5","\xb5","\x43"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(180)
			if ((tmp8)){
				HX_STACK_LINE(181)
				::openfl::_legacy::display::Sprite tmp9 = p->get_sprite();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(181)
				Float tmp10 = transitionTime;		HX_STACK_VAR(tmp10,"tmp10");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",181,0xc348cc90)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(181)
				Dynamic tmp11 = _Function_3_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				::motion::actuators::GenericActuator tmp12 = ::motion::Actuate_obj::tween(tmp9,tmp10,tmp11,true,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(181)
				::motion::easing::IEasing tmp13 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(181)
				::motion::actuators::GenericActuator tmp14 = tmp12->ease(tmp13);		HX_STACK_VAR(tmp14,"tmp14");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_2,bool,dispose,::haxe::ui::toolkit::controls::popups::Popup,p)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/core/PopupManager.hx",181,0xc348cc90)
					{
						HX_STACK_LINE(182)
						::haxe::ui::toolkit::core::Root tmp15 = p->get_root();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						::haxe::ui::toolkit::controls::popups::Popup tmp16 = p;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(182)
						bool tmp17 = dispose;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						tmp15->removeChild(tmp16,tmp17);
						HX_STACK_LINE(183)
						::haxe::ui::toolkit::core::Root tmp18 = p->get_root();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(183)
						tmp18->hideModalOverlay();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(181)
				tmp14->onComplete( Dynamic(new _Function_3_2(dispose,p)),null());
			}
			else{
				HX_STACK_LINE(186)
				::haxe::ui::toolkit::core::Root tmp9 = p->get_root();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(186)
				::haxe::ui::toolkit::controls::popups::Popup tmp10 = p;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(186)
				bool tmp11 = dispose;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(186)
				tmp9->removeChild(tmp10,tmp11);
				HX_STACK_LINE(187)
				::haxe::ui::toolkit::core::Root tmp12 = p->get_root();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(187)
				tmp12->hideModalOverlay();
			}
		}
		HX_STACK_LINE(190)
		::haxe::ui::toolkit::core::Screen tmp8 = ::haxe::ui::toolkit::core::Screen_obj::get_instance();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(190)
		::String tmp9 = ::openfl::_legacy::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(190)
		Dynamic tmp10 = this->_onScreenResize_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(190)
		tmp8->removeEventListener(tmp9,tmp10,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PopupManager_obj,hidePopup,(void))

Void PopupManager_obj::_onScreenResize( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","_onScreenResize",0xa690079e,"haxe.ui.toolkit.core.PopupManager._onScreenResize","haxe/ui/toolkit/core/PopupManager.hx",194,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(194)
		::List tmp = this->_modalPopups;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		::_List::ListIterator tmp1 = ::_List::ListIterator_obj::__new(tmp->h);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		::_List::ListIterator _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		while((true)){
			HX_STACK_LINE(194)
			bool tmp2 = (_g->head != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(194)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(194)
			if ((tmp3)){
				HX_STACK_LINE(194)
				break;
			}
			HX_STACK_LINE(194)
			Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(194)
			{
				HX_STACK_LINE(194)
				Dynamic tmp5 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(194)
				_g->val = tmp5;
				HX_STACK_LINE(194)
				Dynamic tmp6 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(194)
				_g->head = tmp6;
				HX_STACK_LINE(194)
				tmp4 = _g->val;
			}
			HX_STACK_LINE(194)
			::haxe::ui::toolkit::controls::popups::Popup p = ((::haxe::ui::toolkit::controls::popups::Popup)(tmp4));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(195)
			::haxe::ui::toolkit::controls::popups::Popup tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(195)
			this->centerPopup(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,_onScreenResize,(void))

Void PopupManager_obj::centerPopup( ::haxe::ui::toolkit::controls::popups::Popup p){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","centerPopup",0x061eacd7,"haxe.ui.toolkit.core.PopupManager.centerPopup","haxe/ui/toolkit/core/PopupManager.hx",199,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(200)
		Float tmp = p->get_width();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		Float cx = tmp;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(201)
		Float tmp1 = p->get_percentWidth();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(201)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		if ((tmp2)){
			HX_STACK_LINE(202)
			::haxe::ui::toolkit::core::Root tmp3 = p->get_root();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			Float tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			Float tmp5 = p->get_percentWidth();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			Float tmp7 = (Float(tmp6) / Float((int)100));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			cx = tmp7;
		}
		HX_STACK_LINE(204)
		::haxe::ui::toolkit::core::Root tmp3 = p->get_root();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(204)
		Float tmp4 = tmp3->get_width();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(204)
		Float tmp6 = (Float(cx) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(204)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(204)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(204)
		p->set_x(tmp8);
		HX_STACK_LINE(205)
		::haxe::ui::toolkit::core::Root tmp9 = p->get_root();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(205)
		Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(205)
		Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(205)
		Float tmp12 = p->get_height();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(205)
		Float tmp13 = (Float(tmp12) / Float((int)2));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(205)
		Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(205)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(205)
		p->set_y(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,centerPopup,(void))

Void PopupManager_obj::dismissModal( int action){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","dismissModal",0x0f531fc3,"haxe.ui.toolkit.core.PopupManager.dismissModal","haxe/ui/toolkit/core/PopupManager.hx",208,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(209)
		::List tmp = this->_modalPopups;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		if ((tmp2)){
			HX_STACK_LINE(210)
			return null();
		}
		HX_STACK_LINE(211)
		::List tmp3 = this->_modalPopups;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		::haxe::ui::toolkit::controls::popups::Popup tmp4 = tmp3->first();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		::haxe::ui::toolkit::controls::popups::Popup p = tmp4;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(212)
		Dynamic tmp5 = p->get_config();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		bool tmp6 = (tmp5->__Field(HX_HCSTRING("dismiss","\x4a","\x4f","\x4c","\xb9"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(212)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(212)
		if ((tmp6)){
			HX_STACK_LINE(212)
			Dynamic tmp8 = p->get_config();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(212)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(212)
			int tmp10 = (int(tmp9->__Field(HX_HCSTRING("dismiss","\x4a","\x4f","\x4c","\xb9"), hx::paccDynamic )) & int(action));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(212)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(212)
			tmp7 = (tmp11 > (int)0);
		}
		else{
			HX_STACK_LINE(212)
			tmp7 = false;
		}
		HX_STACK_LINE(212)
		if ((tmp7)){
			HX_STACK_LINE(213)
			::haxe::ui::toolkit::controls::popups::Popup tmp8 = p;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(213)
			this->hidePopup(tmp8,null());
			HX_STACK_LINE(214)
			p->callClosingCallback((int)4096);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,dismissModal,(void))

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::buildPopup( ::haxe::ui::toolkit::controls::popups::PopupContent content,::String title,Dynamic config,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildPopup",0x8042935e,"haxe.ui.toolkit.core.PopupManager.buildPopup","haxe/ui/toolkit/core/PopupManager.hx",218,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(content,"content")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(219)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	Dynamic tmp1 = this->buildConfig(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(219)
	config = tmp1;
	HX_STACK_LINE(220)
	bool tmp2 = (title == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(220)
	if ((tmp2)){
		HX_STACK_LINE(220)
		tmp3 = (config->__Field(HX_HCSTRING("useDefaultTitle","\xfe","\x97","\x76","\x9d"), hx::paccDynamic ) == true);
	}
	else{
		HX_STACK_LINE(220)
		tmp3 = false;
	}
	HX_STACK_LINE(220)
	if ((tmp3)){
		HX_STACK_LINE(221)
		::haxe::ui::toolkit::core::PopupManager tmp4 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		title = tmp4->defaultTitle;
	}
	HX_STACK_LINE(223)
	::haxe::ui::toolkit::controls::popups::Popup tmp4 = ::haxe::ui::toolkit::controls::popups::Popup_obj::__new(title,content,config,fn);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(223)
	::haxe::ui::toolkit::controls::popups::Popup p = tmp4;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(224)
	p->set_root(config->__Field(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"), hx::paccDynamic ));
	HX_STACK_LINE(225)
	p->set_visible(false);
	HX_STACK_LINE(227)
	::haxe::ui::toolkit::controls::popups::Popup tmp5 = p;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(227)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,buildPopup,return )

Dynamic PopupManager_obj::buildConfig( Dynamic config){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildConfig",0x85fcd950,"haxe.ui.toolkit.core.PopupManager.buildConfig","haxe/ui/toolkit/core/PopupManager.hx",230,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(231)
	Dynamic c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(232)
	Dynamic tmp = config;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(232)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(232)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(232)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(232)
	if ((tmp3)){
		HX_STACK_LINE(232)
		Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(232)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(232)
		tmp4 = ::Std_obj::is(tmp6,hx::ClassOf< Array<int> >());
	}
	else{
		HX_STACK_LINE(232)
		tmp4 = true;
	}
	HX_STACK_LINE(232)
	if ((tmp4)){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",233,0xc348cc90)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(233)
		Dynamic tmp5 = _Function_2_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(233)
		c = tmp5;
	}
	else{
		HX_STACK_LINE(235)
		Dynamic tmp5 = config;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(235)
		Dynamic tmp6 = ::Reflect_obj::copy(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(235)
		c = tmp6;
	}
	HX_STACK_LINE(237)
	c->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = null();
	HX_STACK_LINE(238)
	c->__FieldRef(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde")) = null();
	HX_STACK_LINE(239)
	c->__FieldRef(HX_HCSTRING("modal","\x2d","\x20","\x58","\x0c")) = true;
	HX_STACK_LINE(240)
	::haxe::ui::toolkit::core::PopupManager tmp5 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(240)
	c->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp5->defaultWidth;
	HX_STACK_LINE(241)
	c->__FieldRef(HX_HCSTRING("useDefaultTitle","\xfe","\x97","\x76","\x9d")) = true;
	HX_STACK_LINE(242)
	::haxe::ui::toolkit::core::RootManager tmp6 = ::haxe::ui::toolkit::core::RootManager_obj::get_instance();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(242)
	::haxe::ui::toolkit::core::Root tmp7 = tmp6->get_currentRoot();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(242)
	c->__FieldRef(HX_HCSTRING("root","\x22","\xee","\xae","\x4b")) = tmp7;
	HX_STACK_LINE(244)
	bool tmp8 = (config != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(244)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(244)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(244)
	if ((tmp9)){
		HX_STACK_LINE(244)
		Dynamic tmp11 = config;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(244)
		Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(244)
		Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(244)
		bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(244)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(244)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(244)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(244)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(244)
		tmp10 = !(tmp18);
	}
	else{
		HX_STACK_LINE(244)
		tmp10 = false;
	}
	HX_STACK_LINE(244)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(244)
	if ((tmp10)){
		HX_STACK_LINE(244)
		Dynamic tmp12 = config;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(244)
		Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(244)
		bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(244)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(244)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(244)
		tmp11 = !(tmp16);
	}
	else{
		HX_STACK_LINE(244)
		tmp11 = false;
	}
	HX_STACK_LINE(244)
	if ((tmp11)){
		HX_STACK_LINE(245)
		bool tmp12 = (config->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(245)
		Dynamic tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(245)
		if ((tmp12)){
			HX_STACK_LINE(245)
			tmp13 = config->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(245)
			tmp13 = null();
		}
		HX_STACK_LINE(245)
		c->__FieldRef(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")) = tmp13;
		HX_STACK_LINE(246)
		bool tmp14 = (config->__Field(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(246)
		Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(246)
		if ((tmp14)){
			HX_STACK_LINE(246)
			tmp15 = config->__Field(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(246)
			tmp15 = null();
		}
		HX_STACK_LINE(246)
		c->__FieldRef(HX_HCSTRING("styleName","\x1c","\x30","\xcf","\xde")) = tmp15;
		HX_STACK_LINE(247)
		bool tmp16 = (config->__Field(HX_HCSTRING("modal","\x2d","\x20","\x58","\x0c"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(247)
		Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(247)
		if ((tmp16)){
			HX_STACK_LINE(247)
			tmp17 = config->__Field(HX_HCSTRING("modal","\x2d","\x20","\x58","\x0c"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(247)
			tmp17 = true;
		}
		HX_STACK_LINE(247)
		c->__FieldRef(HX_HCSTRING("modal","\x2d","\x20","\x58","\x0c")) = tmp17;
		HX_STACK_LINE(248)
		bool tmp18 = (config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(248)
		Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(248)
		if ((tmp18)){
			HX_STACK_LINE(248)
			tmp19 = config->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(248)
			::haxe::ui::toolkit::core::PopupManager tmp20 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(248)
			tmp19 = tmp20->defaultWidth;
		}
		HX_STACK_LINE(248)
		c->__FieldRef(HX_HCSTRING("width","\x06","\xb6","\x62","\xca")) = tmp19;
		HX_STACK_LINE(249)
		bool tmp20 = (config->__Field(HX_HCSTRING("useDefaultTitle","\xfe","\x97","\x76","\x9d"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(249)
		Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(249)
		if ((tmp20)){
			HX_STACK_LINE(249)
			tmp21 = config->__Field(HX_HCSTRING("useDefaultTitle","\xfe","\x97","\x76","\x9d"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(249)
			tmp21 = true;
		}
		HX_STACK_LINE(249)
		c->__FieldRef(HX_HCSTRING("useDefaultTitle","\xfe","\x97","\x76","\x9d")) = tmp21;
		HX_STACK_LINE(250)
		bool tmp22 = (config->__Field(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(250)
		Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(250)
		if ((tmp22)){
			HX_STACK_LINE(250)
			tmp23 = config->__Field(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"), hx::paccDynamic );
		}
		else{
			HX_STACK_LINE(250)
			::haxe::ui::toolkit::core::RootManager tmp24 = ::haxe::ui::toolkit::core::RootManager_obj::get_instance();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(250)
			tmp23 = tmp24->get_currentRoot();
		}
		HX_STACK_LINE(250)
		c->__FieldRef(HX_HCSTRING("root","\x22","\xee","\xae","\x4b")) = tmp23;
	}
	HX_STACK_LINE(253)
	c->__FieldRef(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")) = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(254)
	bool tmp12 = (config != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(254)
	if ((tmp12)){
		HX_STACK_LINE(255)
		Dynamic tmp13 = config;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(255)
		bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(255)
		if ((tmp14)){
			HX_STACK_LINE(256)
			Dynamic tmp15 = config;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(256)
			c->__FieldRef(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")) = this->buildButtonArray(tmp15);
		}
		else{
			HX_STACK_LINE(257)
			Dynamic tmp15 = config;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(257)
			bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(257)
			if ((tmp16)){
				HX_STACK_LINE(258)
				Dynamic tmp17 = config;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(258)
				c->__FieldRef(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")) = this->buildButtonArray(tmp17);
			}
			else{
				HX_STACK_LINE(260)
				bool tmp17 = (config->__Field(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(260)
				if ((tmp17)){
					HX_STACK_LINE(261)
					c->__FieldRef(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")) = this->buildButtonArray(config->__Field(HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"), hx::paccDynamic ));
				}
			}
		}
	}
	HX_STACK_LINE(266)
	Dynamic tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(266)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,buildConfig,return )

Array< ::Dynamic > PopupManager_obj::buildButtonArray( Dynamic data){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildButtonArray",0x4865a8f9,"haxe.ui.toolkit.core.PopupManager.buildButtonArray","haxe/ui/toolkit/core/PopupManager.hx",269,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(270)
	Array< ::Dynamic > buttons = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(buttons,"buttons");
	HX_STACK_LINE(271)
	Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	if ((tmp1)){
		HX_STACK_LINE(272)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(272)
		tmp2 = hx::TCast< ::Int >::cast(data);
		HX_STACK_LINE(272)
		int n = tmp2;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(273)
		int tmp3 = (int(n) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		bool tmp4 = (tmp3 == (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		if ((tmp4)){
			HX_STACK_LINE(274)
			::haxe::ui::toolkit::core::PopupButtonInfo tmp5 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)1,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			buttons->push(tmp5);
		}
		HX_STACK_LINE(276)
		int tmp5 = (int(n) & int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(276)
		bool tmp6 = (tmp5 == (int)16);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(276)
		if ((tmp6)){
			HX_STACK_LINE(277)
			::haxe::ui::toolkit::core::PopupButtonInfo tmp7 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)16,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(277)
			buttons->push(tmp7);
		}
		HX_STACK_LINE(279)
		int tmp7 = (int(n) & int((int)256));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(279)
		bool tmp8 = (tmp7 == (int)256);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(279)
		if ((tmp8)){
			HX_STACK_LINE(280)
			::haxe::ui::toolkit::core::PopupButtonInfo tmp9 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)256,null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(280)
			buttons->push(tmp9);
		}
		HX_STACK_LINE(282)
		int tmp9 = (int(n) & int((int)4096));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(282)
		bool tmp10 = (tmp9 == (int)4096);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(282)
		if ((tmp10)){
			HX_STACK_LINE(283)
			::haxe::ui::toolkit::core::PopupButtonInfo tmp11 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)4096,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(283)
			buttons->push(tmp11);
		}
		HX_STACK_LINE(285)
		int tmp11 = (int(n) & int((int)65536));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(285)
		bool tmp12 = (tmp11 == (int)65536);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(285)
		if ((tmp12)){
			HX_STACK_LINE(286)
			::haxe::ui::toolkit::core::PopupButtonInfo tmp13 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)65536,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(286)
			buttons->push(tmp13);
		}
		HX_STACK_LINE(288)
		int tmp13 = (int(n) & int((int)1048576));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(288)
		bool tmp14 = (tmp13 == (int)1048576);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(288)
		if ((tmp14)){
			HX_STACK_LINE(289)
			::haxe::ui::toolkit::core::PopupButtonInfo tmp15 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)1048576,null(),null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(289)
			buttons->push(tmp15);
		}
	}
	else{
		HX_STACK_LINE(291)
		Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		if ((tmp3)){
			HX_STACK_LINE(292)
			cpp::ArrayBase arr = ((cpp::ArrayBase)(data));		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(293)
			{
				HX_STACK_LINE(293)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(293)
				while((true)){
					HX_STACK_LINE(293)
					bool tmp4 = (_g < arr->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(293)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(293)
					if ((tmp5)){
						HX_STACK_LINE(293)
						break;
					}
					HX_STACK_LINE(293)
					Dynamic tmp6 = arr->__GetItem(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(293)
					Dynamic item = tmp6;		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(293)
					++(_g);
					HX_STACK_LINE(294)
					Dynamic tmp7 = item;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(294)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::Int >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(294)
					if ((tmp8)){
						HX_STACK_LINE(295)
						int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(295)
						tmp9 = hx::TCast< ::Int >::cast(item);
						HX_STACK_LINE(295)
						::haxe::ui::toolkit::core::PopupButtonInfo tmp10 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(295)
						buttons->push(tmp10);
					}
					else{
						HX_STACK_LINE(297)
						int type = (int)16777216;		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(298)
						bool tmp9 = (item->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(298)
						if ((tmp9)){
							HX_STACK_LINE(299)
							type = item->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );
						}
						HX_STACK_LINE(301)
						::String text = item->__Field(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"), hx::paccDynamic );		HX_STACK_VAR(text,"text");
						HX_STACK_LINE(302)
						Dynamic fn = item->__Field(HX_HCSTRING("fn","\x48","\x59","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(303)
						::haxe::ui::toolkit::core::PopupButtonInfo tmp10 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new(type,text,fn);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(303)
						buttons->push(tmp10);
					}
				}
			}
		}
	}
	HX_STACK_LINE(307)
	return buttons;
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,buildButtonArray,return )

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::_instance;

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::instance;

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","get_instance",0xa3aa5ede,"haxe.ui.toolkit.core.PopupManager.get_instance","haxe/ui/toolkit/core/PopupManager.hx",26,0xc348cc90)
	HX_STACK_LINE(27)
	::haxe::ui::toolkit::core::PopupManager tmp = ::haxe::ui::toolkit::core::PopupManager_obj::_instance;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	if ((tmp1)){
		HX_STACK_LINE(28)
		::haxe::ui::toolkit::core::PopupManager tmp2 = ::haxe::ui::toolkit::core::PopupManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		::haxe::ui::toolkit::core::PopupManager_obj::_instance = tmp2;
	}
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::core::PopupManager tmp2 = ::haxe::ui::toolkit::core::PopupManager_obj::_instance;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PopupManager_obj,get_instance,return )


PopupManager_obj::PopupManager_obj()
{
}

void PopupManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PopupManager);
	HX_MARK_MEMBER_NAME(defaultTitle,"defaultTitle");
	HX_MARK_MEMBER_NAME(defaultWidth,"defaultWidth");
	HX_MARK_MEMBER_NAME(_modalPopups,"_modalPopups");
	HX_MARK_END_CLASS();
}

void PopupManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultTitle,"defaultTitle");
	HX_VISIT_MEMBER_NAME(defaultWidth,"defaultWidth");
	HX_VISIT_MEMBER_NAME(_modalPopups,"_modalPopups");
}

Dynamic PopupManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"showList") ) { return showList_dyn(); }
		if (HX_FIELD_EQ(inName,"showBusy") ) { return showBusy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showPopup") ) { return showPopup_dyn(); }
		if (HX_FIELD_EQ(inName,"hidePopup") ) { return hidePopup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onKeyPress") ) { return onKeyPress_dyn(); }
		if (HX_FIELD_EQ(inName,"showSimple") ) { return showSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"showCustom") ) { return showCustom_dyn(); }
		if (HX_FIELD_EQ(inName,"buildPopup") ) { return buildPopup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"centerPopup") ) { return centerPopup_dyn(); }
		if (HX_FIELD_EQ(inName,"buildConfig") ) { return buildConfig_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultTitle") ) { return defaultTitle; }
		if (HX_FIELD_EQ(inName,"defaultWidth") ) { return defaultWidth; }
		if (HX_FIELD_EQ(inName,"_modalPopups") ) { return _modalPopups; }
		if (HX_FIELD_EQ(inName,"showCalendar") ) { return showCalendar_dyn(); }
		if (HX_FIELD_EQ(inName,"dismissModal") ) { return dismissModal_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onScreenResize") ) { return _onScreenResize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buildButtonArray") ) { return buildButtonArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool PopupManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = inCallProp == hx::paccAlways ? get_instance() : instance; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { outValue = _instance; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { outValue = get_instance_dyn(); return true;  }
	}
	return false;
}

Dynamic PopupManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"defaultTitle") ) { defaultTitle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultWidth") ) { defaultWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_modalPopups") ) { _modalPopups=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PopupManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::haxe::ui::toolkit::core::PopupManager >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=ioValue.Cast< ::haxe::ui::toolkit::core::PopupManager >(); return true; }
	}
	return false;
}

void PopupManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("defaultTitle","\x17","\x51","\x96","\xc5"));
	outFields->push(HX_HCSTRING("defaultWidth","\x85","\xf1","\xbd","\x7f"));
	outFields->push(HX_HCSTRING("_modalPopups","\xd5","\xfe","\xe7","\x72"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(PopupManager_obj,defaultTitle),HX_HCSTRING("defaultTitle","\x17","\x51","\x96","\xc5")},
	{hx::fsInt,(int)offsetof(PopupManager_obj,defaultWidth),HX_HCSTRING("defaultWidth","\x85","\xf1","\xbd","\x7f")},
	{hx::fsObject /*::List*/ ,(int)offsetof(PopupManager_obj,_modalPopups),HX_HCSTRING("_modalPopups","\xd5","\xfe","\xe7","\x72")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::PopupManager*/ ,(void *) &PopupManager_obj::_instance,HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1")},
	{hx::fsObject /*::haxe::ui::toolkit::core::PopupManager*/ ,(void *) &PopupManager_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("defaultTitle","\x17","\x51","\x96","\xc5"),
	HX_HCSTRING("defaultWidth","\x85","\xf1","\xbd","\x7f"),
	HX_HCSTRING("_modalPopups","\xd5","\xfe","\xe7","\x72"),
	HX_HCSTRING("onKeyPress","\xa3","\xcd","\xa8","\xea"),
	HX_HCSTRING("showSimple","\x0f","\xa9","\xf3","\x21"),
	HX_HCSTRING("showCustom","\x8e","\x2c","\x07","\xa9"),
	HX_HCSTRING("showList","\xfb","\xdf","\x39","\xaf"),
	HX_HCSTRING("showCalendar","\xdb","\xb4","\xb6","\xaa"),
	HX_HCSTRING("showBusy","\xd6","\xd8","\xa6","\xa8"),
	HX_HCSTRING("showPopup","\xef","\x6f","\xf9","\xf4"),
	HX_HCSTRING("hidePopup","\x0a","\xc6","\xf3","\x21"),
	HX_HCSTRING("_onScreenResize","\xde","\x0a","\xe9","\x58"),
	HX_HCSTRING("centerPopup","\x17","\x10","\x65","\x98"),
	HX_HCSTRING("dismissModal","\x83","\x94","\xa3","\x7a"),
	HX_HCSTRING("buildPopup","\x1e","\x58","\x08","\x5b"),
	HX_HCSTRING("buildConfig","\x90","\x3c","\x43","\x18"),
	HX_HCSTRING("buildButtonArray","\xb9","\x7d","\xef","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PopupManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(PopupManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PopupManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(PopupManager_obj::instance,"instance");
};

#endif

hx::Class PopupManager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_instance","\xf4","\x16","\x77","\xa1"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("get_instance","\x9e","\xd3","\xfa","\x0e"),
	::String(null()) };

void PopupManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.core.PopupManager","\x2e","\xdd","\xe5","\xa4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PopupManager_obj::__GetStatic;
	__mClass->mSetStaticField = &PopupManager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PopupManager_obj >;
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
} // end namespace core
