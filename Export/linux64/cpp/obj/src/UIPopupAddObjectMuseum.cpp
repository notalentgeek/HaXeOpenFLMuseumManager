#include <hxcpp.h>

#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectMuseum
#include <UIPopupAddObjectMuseum.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Grid
#include <haxe/ui/toolkit/containers/Grid.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
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

Void UIPopupAddObjectMuseum_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupAddObjectMuseum","new",0xeaecbc4c,"UIPopupAddObjectMuseum.new","UIPopupAddObjectMuseum.hx",21,0xbf9e50a4)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(35)
	this->textObject = null();
	HX_STACK_LINE(34)
	this->popupObject = null();
	HX_STACK_LINE(33)
	this->listSelectorTypePrevInt = (int)-1;
	HX_STACK_LINE(32)
	this->listSelectorTypeObject = null();
	HX_STACK_LINE(31)
	this->listSelectorTypeInt = (int)-1;
	HX_STACK_LINE(30)
	this->listSelectorTagObject = null();
	HX_STACK_LINE(29)
	this->listSelectorTagCurrentInt = (int)1;
	HX_STACK_LINE(28)
	this->listSelectorParentObject = null();
	HX_STACK_LINE(27)
	this->gridObject = null();
	HX_STACK_LINE(26)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(25)
	this->buttonObject = null();
	HX_STACK_LINE(39)
	::UIPopupAddObjectMuseum _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(43)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupAddMuseumObjectButton","\x2c","\x7c","\x7e","\xc7"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	this->buttonObject = tmp;
	HX_STACK_LINE(44)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupAddObjectMuseum,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupAddObjectMuseum.hx",44,0xbf9e50a4)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(46)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(47)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(48)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupAddObjectMuseum.xml","\x48","\x02","\xdb","\xee"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupAddObjectMuseum,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupAddObjectMuseum.hx",50,0xbf9e50a4)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(54)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(54)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(54)
					if ((tmp7)){
						HX_STACK_LINE(54)
						tmp8 = (_button == (int)4096);
					}
					else{
						HX_STACK_LINE(54)
						tmp8 = true;
					}
					HX_STACK_LINE(54)
					if ((tmp8)){
						HX_STACK_LINE(55)
						_g->listSelectorTagCurrentInt = (int)1;
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(50)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Add Museum Object","\xee","\xe7","\xad","\x9e"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			_g->popupObject = tmp6;
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::containers::Grid tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_Grid","\x2b","\xf2","\x1c","\xc1"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			_g->gridObject = tmp8;
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectParentObject","\xca","\x86","\x39","\xd2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(61)
			_g->listSelectorParentObject = tmp10;
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_1","\x6b","\xc6","\xb1","\x32"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(62)
			_g->listSelectorTagObject = tmp12;
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectType","\xfb","\x9c","\x93","\x7e"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(63)
			_g->listSelectorTypeObject = tmp14;
			HX_STACK_LINE(65)
			Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
			HX_STACK_LINE(66)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				int tmp15 = loopCounter1Int;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(67)
				int tmp16 = _g->collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(67)
				bool tmp17 = (tmp15 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(67)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(67)
				if ((tmp18)){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(68)
				::ObjectTag tmp19 = _g->collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(68)
				::String tmp20 = tmp19->GetNameString();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(68)
				tempUsedTagStringArray->push(tmp20);
				HX_STACK_LINE(69)
				::haxe::ui::toolkit::data::IDataSource tmp21 = _g->listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(69)
				::String tmp22 = tempUsedTagStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(69)
				tmp21->createFromString(tmp22,null());
				HX_STACK_LINE(70)
				(loopCounter1Int)++;
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(44)
	tmp1->set_onClick( Dynamic(new _Function_1_1(_g)));
}
;
	return null();
}

//UIPopupAddObjectMuseum_obj::~UIPopupAddObjectMuseum_obj() { }

Dynamic UIPopupAddObjectMuseum_obj::__CreateEmpty() { return  new UIPopupAddObjectMuseum_obj; }
hx::ObjectPtr< UIPopupAddObjectMuseum_obj > UIPopupAddObjectMuseum_obj::__new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{  hx::ObjectPtr< UIPopupAddObjectMuseum_obj > _result_ = new UIPopupAddObjectMuseum_obj();
	_result_->__construct(_collectionGlobalObject,_root);
	return _result_;}

Dynamic UIPopupAddObjectMuseum_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPopupAddObjectMuseum_obj > _result_ = new UIPopupAddObjectMuseum_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void UIPopupAddObjectMuseum_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("UIPopupAddObjectMuseum","UpdateVoid",0x1f655bb1,"UIPopupAddObjectMuseum.UpdateVoid","UIPopupAddObjectMuseum.hx",79,0xbf9e50a4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(81)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp4 = this->listSelectorParentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(81)
			tmp3 = false;
		}
		HX_STACK_LINE(81)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		if ((tmp3)){
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(81)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(81)
			tmp4 = false;
		}
		HX_STACK_LINE(81)
		if ((tmp4)){
			HX_STACK_LINE(83)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(83)
			int tmp6 = tmp5->get_selectedIndex();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			this->listSelectorTypeInt = tmp6;
			HX_STACK_LINE(84)
			int tmp7 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			bool tmp8 = (tmp7 == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			if ((tmp8)){
				HX_STACK_LINE(84)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->listSelectorParentObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				tmp9->set_disabled(true);
			}
			HX_STACK_LINE(86)
			int tmp9 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(86)
			int tmp10 = this->listSelectorTypePrevInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			if ((tmp11)){
				HX_STACK_LINE(87)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->listSelectorParentObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				::haxe::ui::toolkit::data::IDataSource tmp13 = tmp12->get_dataSource();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(87)
				tmp13->removeAll();
				HX_STACK_LINE(88)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorParentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(88)
				tmp14->set_selectedIndex((int)-1);
				HX_STACK_LINE(90)
				Array< ::Dynamic > tempObjectArray = null();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
				HX_STACK_LINE(91)
				int tmp15 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(91)
				bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(91)
				if ((tmp16)){
					HX_STACK_LINE(91)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->listSelectorParentObject;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(91)
					tmp17->set_disabled(false);
					HX_STACK_LINE(91)
					::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(91)
					tempObjectArray = tmp18->GetRoomObjectArray();
				}
				else{
					HX_STACK_LINE(92)
					int tmp17 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(92)
					bool tmp18 = (tmp17 == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(92)
					if ((tmp18)){
						HX_STACK_LINE(92)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->listSelectorParentObject;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(92)
						tmp19->set_disabled(true);
					}
					else{
						HX_STACK_LINE(93)
						int tmp19 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(93)
						bool tmp20 = (tmp19 == (int)2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						if ((tmp20)){
							HX_STACK_LINE(93)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->listSelectorParentObject;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(93)
							tmp21->set_disabled(false);
							HX_STACK_LINE(93)
							::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(93)
							tempObjectArray = tmp22->GetFloorObjectArray();
						}
					}
				}
				HX_STACK_LINE(95)
				int tmp17 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(95)
				bool tmp18 = (tmp17 != (int)1);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(95)
				if ((tmp18)){
					HX_STACK_LINE(96)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(97)
					while((true)){
						HX_STACK_LINE(97)
						bool tmp19 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(97)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(97)
						if ((tmp20)){
							HX_STACK_LINE(97)
							break;
						}
						HX_STACK_LINE(98)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->listSelectorParentObject;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(98)
						::haxe::ui::toolkit::data::IDataSource tmp22 = tmp21->get_dataSource();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(98)
						::ObjectMuseum tmp23 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(98)
						Dynamic tmp24 = tmp23->GetNameStruct();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(98)
						::String tmp25 = tmp24->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(98)
						tmp22->createFromString(tmp25,null());
						HX_STACK_LINE(99)
						(loopCounter1Int)++;
					}
				}
				HX_STACK_LINE(103)
				int tmp19 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(103)
				this->listSelectorTypePrevInt = tmp19;
			}
		}
		HX_STACK_LINE(108)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = this->popupObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(108)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		if ((tmp6)){
			HX_STACK_LINE(108)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = this->listSelectorTagObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(108)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			tmp7 = (tmp9 != null());
		}
		else{
			HX_STACK_LINE(108)
			tmp7 = false;
		}
		HX_STACK_LINE(108)
		if ((tmp7)){
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = this->listSelectorTagObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(110)
			int tmp9 = tmp8->get_selectedIndex();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			int tmp10 = (int)-1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(110)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(110)
			if ((tmp11)){
				HX_STACK_LINE(110)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->listSelectorTagObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(110)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(110)
				int tmp15 = tmp14->get_selectedIndex();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(110)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(110)
				tmp12 = (tmp16 != (int)0);
			}
			else{
				HX_STACK_LINE(110)
				tmp12 = false;
			}
			HX_STACK_LINE(110)
			if ((tmp12)){
				HX_STACK_LINE(112)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->listSelectorTagObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(112)
				::String tmp14 = tmp13->get_text();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(112)
				Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("UIPopupAddObjectMuseum.hx","\xa4","\x50","\x9e","\xbf"),112,HX_HCSTRING("UIPopupAddObjectMuseum","\x5a","\xe6","\x35","\x12"),HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(112)
				::haxe::Log_obj::trace(tmp14,tmp15);
				HX_STACK_LINE(113)
				(this->listSelectorTagCurrentInt)++;
				HX_STACK_LINE(115)
				::haxe::ui::toolkit::controls::Text tmp16 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(115)
				this->textObject = tmp16;
				HX_STACK_LINE(116)
				::haxe::ui::toolkit::controls::Text tmp17 = this->textObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(116)
				tmp17->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
				HX_STACK_LINE(117)
				::haxe::ui::toolkit::controls::Text tmp18 = this->textObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(117)
				int tmp19 = this->listSelectorTagCurrentInt;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(117)
				::String tmp20 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTagText_","\x19","\xf9","\x39","\xc6") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(117)
				tmp18->set_id(tmp20);
				HX_STACK_LINE(118)
				::haxe::ui::toolkit::containers::Grid tmp21 = this->gridObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(118)
				::haxe::ui::toolkit::controls::Text tmp22 = this->textObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(118)
				tmp21->addChild(tmp22);
				HX_STACK_LINE(120)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->listSelectorTagObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(120)
				tmp23->set_disabled(true);
				HX_STACK_LINE(121)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(121)
				this->listSelectorTagObject = tmp24;
				HX_STACK_LINE(122)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->listSelectorTagObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(122)
				::haxe::ui::toolkit::data::IDataSource tmp26 = tmp25->get_dataSource();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(122)
				tmp26->createFromString(HX_HCSTRING("None","\xd8","\x3e","\xe3","\x33"),null());
				HX_STACK_LINE(124)
				Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
				HX_STACK_LINE(125)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(126)
				while((true)){
					HX_STACK_LINE(126)
					int tmp27 = loopCounter1Int;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(126)
					::CollectionGlobal tmp28 = this->collectionGlobalObject;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(126)
					int tmp29 = tmp28->GetTagObjectArray()->length;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(126)
					bool tmp30 = (tmp27 < tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(126)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(126)
					if ((tmp31)){
						HX_STACK_LINE(126)
						break;
					}
					HX_STACK_LINE(127)
					::CollectionGlobal tmp32 = this->collectionGlobalObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(127)
					::ObjectTag tmp33 = tmp32->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(127)
					::String tmp34 = tmp33->GetNameString();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(127)
					tempUsedTagStringArray->push(tmp34);
					HX_STACK_LINE(128)
					(loopCounter1Int)++;
				}
				HX_STACK_LINE(130)
				int tmp27 = this->listSelectorTagCurrentInt;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(130)
				int tmp28 = (tmp27 - (int)1);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(130)
				loopCounter1Int = tmp28;
				HX_STACK_LINE(131)
				while((true)){
					HX_STACK_LINE(131)
					bool tmp29 = (loopCounter1Int > (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(131)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(131)
					if ((tmp30)){
						HX_STACK_LINE(131)
						break;
					}
					HX_STACK_LINE(133)
					::haxe::ui::toolkit::controls::popups::Popup tmp31 = this->popupObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(133)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp32 = tmp31->get_content();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(133)
					::String tmp33 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + loopCounter1Int);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(133)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = tmp32->findChild(tmp33,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(133)
					::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp34;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
					HX_STACK_LINE(134)
					::String tmp35 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(134)
					tempUsedTagStringArray->remove(tmp35);
					HX_STACK_LINE(135)
					(loopCounter1Int)--;
				}
				HX_STACK_LINE(138)
				loopCounter1Int = (int)0;
				HX_STACK_LINE(139)
				while((true)){
					HX_STACK_LINE(139)
					bool tmp29 = (loopCounter1Int < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(139)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(139)
					if ((tmp30)){
						HX_STACK_LINE(139)
						break;
					}
					HX_STACK_LINE(141)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp31 = this->listSelectorTagObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(141)
					::haxe::ui::toolkit::data::IDataSource tmp32 = tmp31->get_dataSource();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(141)
					::String tmp33 = tempUsedTagStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(141)
					tmp32->createFromString(tmp33,null());
					HX_STACK_LINE(142)
					(loopCounter1Int)++;
				}
				HX_STACK_LINE(146)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->listSelectorTagObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(146)
				int tmp30 = this->listSelectorTagCurrentInt;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(146)
				::String tmp31 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(146)
				tmp29->set_id(tmp31);
				HX_STACK_LINE(147)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp32 = this->listSelectorTagObject;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(147)
				tmp32->set_percentWidth((int)100);
				HX_STACK_LINE(148)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp33 = this->listSelectorTagObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(148)
				tmp33->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				HX_STACK_LINE(149)
				::haxe::ui::toolkit::containers::Grid tmp34 = this->gridObject;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(149)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->listSelectorTagObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(149)
				tmp34->addChild(tmp35);
			}
			else{
				HX_STACK_LINE(152)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->listSelectorTagObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(152)
				int tmp14 = tmp13->get_selectedIndex();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(152)
				int tmp15 = (int)-1;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(152)
				bool tmp16 = (tmp14 != tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(152)
				if ((tmp16)){
					HX_STACK_LINE(152)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->listSelectorTagObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(152)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(152)
					int tmp20 = tmp19->get_selectedIndex();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(152)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(152)
					tmp17 = (tmp21 == (int)0);
				}
				else{
					HX_STACK_LINE(152)
					tmp17 = false;
				}
				HX_STACK_LINE(152)
				if ((tmp17)){
					HX_STACK_LINE(154)
					(this->listSelectorTagCurrentInt)--;
					HX_STACK_LINE(155)
					::haxe::ui::toolkit::containers::Grid tmp18 = this->gridObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(155)
					::haxe::ui::toolkit::controls::Text tmp19 = this->textObject;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(155)
					tmp18->removeChild(tmp19,null());
					HX_STACK_LINE(156)
					::haxe::ui::toolkit::containers::Grid tmp20 = this->gridObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(156)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->listSelectorTagObject;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(156)
					tmp20->removeChild(tmp21,null());
					HX_STACK_LINE(157)
					::haxe::ui::toolkit::controls::popups::Popup tmp22 = this->popupObject;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(157)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp23 = tmp22->get_content();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(157)
					int tmp24 = this->listSelectorTagCurrentInt;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(157)
					::String tmp25 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTagText_","\x19","\xf9","\x39","\xc6") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(157)
					::haxe::ui::toolkit::controls::Text tmp26 = tmp23->findChild(tmp25,hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(157)
					this->textObject = tmp26;
					HX_STACK_LINE(158)
					::haxe::ui::toolkit::controls::popups::Popup tmp27 = this->popupObject;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(158)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp28 = tmp27->get_content();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(158)
					int tmp29 = this->listSelectorTagCurrentInt;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(158)
					::String tmp30 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(158)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp31 = tmp28->findChild(tmp30,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(158)
					this->listSelectorTagObject = tmp31;
					HX_STACK_LINE(159)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp32 = this->listSelectorTagObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(159)
					tmp32->set_disabled(false);
					HX_STACK_LINE(160)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp33 = this->listSelectorTagObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(160)
					tmp33->set_selectedIndex((int)-1);
					HX_STACK_LINE(161)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->listSelectorTagObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(161)
					::haxe::ui::toolkit::data::IDataSource tmp35 = tmp34->get_dataSource();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(161)
					tmp35->removeAll();
					HX_STACK_LINE(162)
					Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
					HX_STACK_LINE(163)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(164)
					while((true)){
						HX_STACK_LINE(164)
						int tmp36 = loopCounter1Int;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(164)
						::CollectionGlobal tmp37 = this->collectionGlobalObject;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(164)
						int tmp38 = tmp37->GetTagObjectArray()->length;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(164)
						bool tmp39 = (tmp36 < tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(164)
						bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(164)
						if ((tmp40)){
							HX_STACK_LINE(164)
							break;
						}
						HX_STACK_LINE(165)
						::CollectionGlobal tmp41 = this->collectionGlobalObject;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(165)
						::ObjectTag tmp42 = tmp41->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(165)
						::String tmp43 = tmp42->GetNameString();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(165)
						tempUsedTagStringArray->push(tmp43);
						HX_STACK_LINE(166)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(168)
					int tmp36 = this->listSelectorTagCurrentInt;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(168)
					int tmp37 = (tmp36 - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(168)
					loopCounter1Int = tmp37;
					HX_STACK_LINE(169)
					while((true)){
						HX_STACK_LINE(169)
						bool tmp38 = (loopCounter1Int > (int)0);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(169)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(169)
						if ((tmp39)){
							HX_STACK_LINE(169)
							break;
						}
						HX_STACK_LINE(171)
						::haxe::ui::toolkit::controls::popups::Popup tmp40 = this->popupObject;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(171)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp41 = tmp40->get_content();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(171)
						::String tmp42 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + loopCounter1Int);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(171)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp43 = tmp41->findChild(tmp42,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(171)
						::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp43;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
						HX_STACK_LINE(172)
						::String tmp44 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(172)
						tempUsedTagStringArray->remove(tmp44);
						HX_STACK_LINE(173)
						(loopCounter1Int)--;
					}
					HX_STACK_LINE(176)
					loopCounter1Int = (int)0;
					HX_STACK_LINE(177)
					while((true)){
						HX_STACK_LINE(177)
						bool tmp38 = (loopCounter1Int < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(177)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(177)
						if ((tmp39)){
							HX_STACK_LINE(177)
							break;
						}
						HX_STACK_LINE(179)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp40 = this->listSelectorTagObject;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(179)
						::haxe::ui::toolkit::data::IDataSource tmp41 = tmp40->get_dataSource();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(179)
						::String tmp42 = tempUsedTagStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(179)
						tmp41->createFromString(tmp42,null());
						HX_STACK_LINE(180)
						(loopCounter1Int)++;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupAddObjectMuseum_obj,UpdateVoid,(void))

::haxe::ui::toolkit::controls::popups::Popup UIPopupAddObjectMuseum_obj::GetPopupObject( ){
	HX_STACK_FRAME("UIPopupAddObjectMuseum","GetPopupObject",0x9ef2d0c9,"UIPopupAddObjectMuseum.GetPopupObject","UIPopupAddObjectMuseum.hx",190,0xbf9e50a4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupAddObjectMuseum_obj,GetPopupObject,return )


UIPopupAddObjectMuseum_obj::UIPopupAddObjectMuseum_obj()
{
}

void UIPopupAddObjectMuseum_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupAddObjectMuseum);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(gridObject,"gridObject");
	HX_MARK_MEMBER_NAME(listSelectorParentObject,"listSelectorParentObject");
	HX_MARK_MEMBER_NAME(listSelectorTagCurrentInt,"listSelectorTagCurrentInt");
	HX_MARK_MEMBER_NAME(listSelectorTagObject,"listSelectorTagObject");
	HX_MARK_MEMBER_NAME(listSelectorTypeInt,"listSelectorTypeInt");
	HX_MARK_MEMBER_NAME(listSelectorTypeObject,"listSelectorTypeObject");
	HX_MARK_MEMBER_NAME(listSelectorTypePrevInt,"listSelectorTypePrevInt");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(textObject,"textObject");
	HX_MARK_END_CLASS();
}

void UIPopupAddObjectMuseum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(listSelectorParentObject,"listSelectorParentObject");
	HX_VISIT_MEMBER_NAME(listSelectorTagCurrentInt,"listSelectorTagCurrentInt");
	HX_VISIT_MEMBER_NAME(listSelectorTagObject,"listSelectorTagObject");
	HX_VISIT_MEMBER_NAME(listSelectorTypeInt,"listSelectorTypeInt");
	HX_VISIT_MEMBER_NAME(listSelectorTypeObject,"listSelectorTypeObject");
	HX_VISIT_MEMBER_NAME(listSelectorTypePrevInt,"listSelectorTypePrevInt");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(textObject,"textObject");
}

Dynamic UIPopupAddObjectMuseum_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"gridObject") ) { return gridObject; }
		if (HX_FIELD_EQ(inName,"textObject") ) { return textObject; }
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { return popupObject; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { return buttonObject; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GetPopupObject") ) { return GetPopupObject_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"listSelectorTypeInt") ) { return listSelectorTypeInt; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"listSelectorTagObject") ) { return listSelectorTagObject; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"listSelectorTypeObject") ) { return listSelectorTypeObject; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"listSelectorTypePrevInt") ) { return listSelectorTypePrevInt; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"listSelectorParentObject") ) { return listSelectorParentObject; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listSelectorTagCurrentInt") ) { return listSelectorTagCurrentInt; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupAddObjectMuseum_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"gridObject") ) { gridObject=inValue.Cast< ::haxe::ui::toolkit::containers::Grid >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textObject") ) { textObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { popupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { buttonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"listSelectorTypeInt") ) { listSelectorTypeInt=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"listSelectorTagObject") ) { listSelectorTagObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listSelectorTypeObject") ) { listSelectorTypeObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"listSelectorTypePrevInt") ) { listSelectorTypePrevInt=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"listSelectorParentObject") ) { listSelectorParentObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"listSelectorTagCurrentInt") ) { listSelectorTagCurrentInt=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UIPopupAddObjectMuseum_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UIPopupAddObjectMuseum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"));
	outFields->push(HX_HCSTRING("listSelectorParentObject","\xc6","\x90","\xbc","\xfe"));
	outFields->push(HX_HCSTRING("listSelectorTagCurrentInt","\x53","\x9d","\xf8","\x75"));
	outFields->push(HX_HCSTRING("listSelectorTagObject","\x5c","\x37","\x68","\x6f"));
	outFields->push(HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8"));
	outFields->push(HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37"));
	outFields->push(HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorParentObject),HX_HCSTRING("listSelectorParentObject","\xc6","\x90","\xbc","\xfe")},
	{hx::fsInt,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTagCurrentInt),HX_HCSTRING("listSelectorTagCurrentInt","\x53","\x9d","\xf8","\x75")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTagObject),HX_HCSTRING("listSelectorTagObject","\x5c","\x37","\x68","\x6f")},
	{hx::fsInt,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypeInt),HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypeObject),HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37")},
	{hx::fsInt,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypePrevInt),HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,textObject),HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"),
	HX_HCSTRING("listSelectorParentObject","\xc6","\x90","\xbc","\xfe"),
	HX_HCSTRING("listSelectorTagCurrentInt","\x53","\x9d","\xf8","\x75"),
	HX_HCSTRING("listSelectorTagObject","\x5c","\x37","\x68","\x6f"),
	HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8"),
	HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37"),
	HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	HX_HCSTRING("GetPopupObject","\x35","\xcd","\x70","\xdc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPopupAddObjectMuseum_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPopupAddObjectMuseum_obj::__mClass,"__mClass");
};

#endif

hx::Class UIPopupAddObjectMuseum_obj::__mClass;

void UIPopupAddObjectMuseum_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIPopupAddObjectMuseum","\x5a","\xe6","\x35","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UIPopupAddObjectMuseum_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIPopupAddObjectMuseum_obj >;
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

