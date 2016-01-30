#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectVisitor
#include <UIPopupEditObjectVisitor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Grid
#include <haxe/ui/toolkit/containers/Grid.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
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

Void UIPopupEditObjectVisitor_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupEditObjectVisitor","new",0x7abab75f,"UIPopupEditObjectVisitor.new","UIPopupEditObjectVisitor.hx",19,0x96ef98f1)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(46)
	this->selectVisitorListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(45)
	this->selectVisitorListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(44)
	this->selectVisitorListSelectorObject = null();
	HX_STACK_LINE(43)
	this->selectModeListSelectorObject = null();
	HX_STACK_LINE(42)
	this->selectedVisitorSentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(41)
	this->selectedVisitorPopularTagObjectStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(40)
	this->selectedVisitorPopularTagCountIntArray = Array_obj< int >::__new();
	HX_STACK_LINE(39)
	this->selectedVisitorObject = null();
	HX_STACK_LINE(38)
	this->selectedVisitorExplanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(37)
	this->selectCurrentExhibitionListSelectorObject = null();
	HX_STACK_LINE(36)
	this->resetButtonObject = null();
	HX_STACK_LINE(35)
	this->popupObject = null();
	HX_STACK_LINE(34)
	this->mainButtonObject = null();
	HX_STACK_LINE(33)
	this->inputNameTextInputObject = null();
	HX_STACK_LINE(32)
	this->gridObject = null();
	HX_STACK_LINE(31)
	this->displayVisitorIndexTextObject = null();
	HX_STACK_LINE(30)
	this->displayTargetExhibitionTextObject = null();
	HX_STACK_LINE(29)
	this->displaySentencePopupObject = null();
	HX_STACK_LINE(28)
	this->displaySentenceButtonObject = null();
	HX_STACK_LINE(27)
	this->displayPreviousVisitorTextObject = null();
	HX_STACK_LINE(26)
	this->displayPopularTagPopupObject = null();
	HX_STACK_LINE(25)
	this->displayPopularTagButtonObject = null();
	HX_STACK_LINE(24)
	this->displayExplanationTextObject = null();
	HX_STACK_LINE(23)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(48)
	::UIPopupEditObjectVisitor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(54)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditVisitorObjectButton","\x9d","\x96","\xbf","\x99"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	this->mainButtonObject = tmp;
	HX_STACK_LINE(55)
	::haxe::ui::toolkit::controls::Button tmp1 = this->mainButtonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectVisitor,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectVisitor.hx",55,0x96ef98f1)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(57)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(58)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(59)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectVisitor.xml","\x9b","\xe8","\x07","\x44"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectVisitor.hx",62,0x96ef98f1)
				HX_STACK_ARG(_button,"_button")
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(62)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Visitor","\x98","\xbf","\x3a","\x1a"),tmp5, Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			_g->popupObject = tmp6;
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::controls::Text tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayExplanation","\xa9","\x1e","\x14","\xdf"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(68)
			_g->displayExplanationTextObject = tmp8;
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::Button tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplayPopularTag","\x9f","\xff","\x37","\xc2"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			_g->displayPopularTagButtonObject = tmp10;
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::Text tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPreviousVisitor","\x87","\x41","\x94","\x69"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			_g->displayPreviousVisitorTextObject = tmp12;
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::Button tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplaySentence","\x01","\x12","\x5e","\xee"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			_g->displaySentenceButtonObject = tmp14;
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::Text tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayTargetExhibition","\xb0","\x47","\x47","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(72)
			_g->displayTargetExhibitionTextObject = tmp16;
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::Text tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayVisitorIndex","\x34","\xb1","\xaf","\x60"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(73)
			_g->displayVisitorIndexTextObject = tmp18;
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::containers::Grid tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_Grid","\xb8","\xa7","\x8a","\x05"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(74)
			_g->gridObject = tmp20;
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp21 = _g->popupObject->get_content();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::TextInput tmp22 = tmp21->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_InputName","\x43","\xb1","\xb6","\x7f"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(75)
			_g->inputNameTextInputObject = tmp22;
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp23 = _g->popupObject->get_content();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::Button tmp24 = tmp23->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonReset","\xcb","\x1b","\x7e","\x01"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(76)
			_g->resetButtonObject = tmp24;
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp25 = _g->popupObject->get_content();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = tmp25->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectCurrentExhibition","\x9a","\x81","\xb0","\x5a"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(77)
			_g->selectCurrentExhibitionListSelectorObject = tmp26;
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = _g->popupObject->get_content();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = tmp27->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectMode","\xf1","\x5a","\x61","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(78)
			_g->selectModeListSelectorObject = tmp28;
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp29 = _g->popupObject->get_content();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = tmp29->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectVisitor","\xe0","\x48","\xdc","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(79)
			_g->selectVisitorListSelectorObject = tmp30;
			HX_STACK_LINE(81)
			_g->selectCurrentExhibitionListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(82)
			_g->selectModeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(83)
			_g->selectVisitorListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","UIPopupEditObjectVisitor.hx",85,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(87)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(88)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(90)
					Array< ::String > displayStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(displayStringArray,"displayStringArray");
					HX_STACK_LINE(91)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(92)
					while((true)){
						HX_STACK_LINE(92)
						int tmp31 = loopCounter1Int;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(92)
						int tmp32 = _g->selectedVisitorObject->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(92)
						bool tmp33 = (tmp31 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(92)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(92)
						if ((tmp34)){
							HX_STACK_LINE(92)
							break;
						}
						HX_STACK_LINE(94)
						Dynamic tmp35 = _g->selectedVisitorObject->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(94)
						int tmp36 = tmp35->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(94)
						::String tmp37 = (tmp36 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(96)
						Dynamic tmp38 = _g->selectedVisitorObject->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(96)
						::String tmp39 = tmp38->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(94)
						::String tmp40 = (tmp37 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(94)
						::String displayString = tmp40;		HX_STACK_VAR(displayString,"displayString");
						HX_STACK_LINE(97)
						::String tmp41 = displayString;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(97)
						displayStringArray->push(tmp41);
						HX_STACK_LINE(98)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(102)
					::haxe::ui::toolkit::core::PopupManager tmp31 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(102)
					int tmp32 = buttonControlInt1;		HX_STACK_VAR(tmp32,"tmp32");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",102,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(102)
					::haxe::ui::toolkit::controls::popups::Popup tmp33 = tmp31->showList(displayStringArray,null(),HX_HCSTRING("Display Popular Tag","\x95","\x68","\x05","\xc9"),tmp32, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(102)
					_g->displayPopularTagPopupObject = tmp33;
					HX_STACK_LINE(103)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp34 = _g->displayPopularTagPopupObject->GetContentObject();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(103)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp35 = ::Std_obj::instance(tmp34,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(103)
					::haxe::ui::toolkit::containers::ListView tmp36 = tmp35->GetListObject();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(103)
					tmp36->set_height((int)205);
					HX_STACK_LINE(104)
					Float tmp37 = _g->popupObject->get_y();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(104)
					_g->displayPopularTagPopupObject->set_y(tmp37);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(85)
			_g->displayPopularTagButtonObject->set_onClick( Dynamic(new _Function_2_2(_g)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","UIPopupEditObjectVisitor.hx",107,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(109)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(110)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(112)
					::haxe::ui::toolkit::core::PopupManager tmp31 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(112)
					int tmp32 = buttonControlInt1;		HX_STACK_VAR(tmp32,"tmp32");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",112,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(112)
					::haxe::ui::toolkit::controls::popups::Popup tmp33 = tmp31->showList(_g->selectedVisitorObject->GetSentenceStringArray(),null(),HX_HCSTRING("Display Sentence","\x81","\xaa","\xa1","\xca"),tmp32, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(112)
					_g->displaySentencePopupObject = tmp33;
					HX_STACK_LINE(113)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp34 = _g->displaySentencePopupObject->GetContentObject();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(113)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp35 = ::Std_obj::instance(tmp34,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(113)
					::haxe::ui::toolkit::containers::ListView tmp36 = tmp35->GetListObject();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(113)
					tmp36->set_height((int)205);
					HX_STACK_LINE(114)
					Float tmp37 = _g->popupObject->get_y();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(114)
					_g->displaySentencePopupObject->set_y(tmp37);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(107)
			_g->displaySentenceButtonObject->set_onClick( Dynamic(new _Function_2_3(_g)));
			HX_STACK_LINE(118)
			_g->ResetDisplayExplanationTextObjectVoid();
			HX_STACK_LINE(119)
			_g->ResetDisplayPopularTagListSelectorObjectVoid();
			HX_STACK_LINE(120)
			_g->ResetDisplaySentenceListViewObjectVoid();
			HX_STACK_LINE(122)
			_g->ResetSelectVisitorListSelectorObjectVoid();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(55)
	tmp1->set_onClick( Dynamic(new _Function_1_1(_g)));
}
;
	return null();
}

//UIPopupEditObjectVisitor_obj::~UIPopupEditObjectVisitor_obj() { }

Dynamic UIPopupEditObjectVisitor_obj::__CreateEmpty() { return  new UIPopupEditObjectVisitor_obj; }
hx::ObjectPtr< UIPopupEditObjectVisitor_obj > UIPopupEditObjectVisitor_obj::__new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{  hx::ObjectPtr< UIPopupEditObjectVisitor_obj > _result_ = new UIPopupEditObjectVisitor_obj();
	_result_->__construct(_collectionGlobalObject,_root);
	return _result_;}

Dynamic UIPopupEditObjectVisitor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPopupEditObjectVisitor_obj > _result_ = new UIPopupEditObjectVisitor_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void UIPopupEditObjectVisitor_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateVoid",0x87db38fe,"UIPopupEditObjectVisitor.UpdateVoid","UIPopupEditObjectVisitor.hx",128,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		if ((tmp1)){
			HX_STACK_LINE(133)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(133)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(133)
			this->selectVisitorListSelectorString = tmp3;
			HX_STACK_LINE(134)
			::String tmp4 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			::String tmp5 = this->selectVisitorListSelectorPrevString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			if ((tmp6)){
				HX_STACK_LINE(136)
				this->ResetDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(137)
				this->ResetDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(138)
				this->ResetDisplaySentenceListViewObjectVoid();
				HX_STACK_LINE(140)
				this->ResetSelectVisitorListSelectorObjectVoid();
				HX_STACK_LINE(142)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				::String tmp8 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(142)
				::ObjectVisitor tmp9 = ::CollectionFunction_obj::FindVisitorObject(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				this->selectedVisitorObject = tmp9;
				HX_STACK_LINE(143)
				::String tmp10 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(143)
				this->selectVisitorListSelectorPrevString = tmp10;
			}
			HX_STACK_LINE(147)
			::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			if ((tmp8)){
				HX_STACK_LINE(149)
				::haxe::ui::toolkit::controls::Text tmp9 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(149)
				tmp9->set_disabled(false);
				HX_STACK_LINE(150)
				::haxe::ui::toolkit::controls::Button tmp10 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(150)
				tmp10->set_disabled(false);
				HX_STACK_LINE(151)
				::haxe::ui::toolkit::controls::Button tmp11 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(151)
				tmp11->set_disabled(false);
				HX_STACK_LINE(152)
				::haxe::ui::toolkit::controls::Text tmp12 = this->displayPreviousVisitorTextObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(152)
				tmp12->set_disabled(false);
				HX_STACK_LINE(153)
				::haxe::ui::toolkit::controls::Button tmp13 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(153)
				tmp13->set_disabled(false);
				HX_STACK_LINE(154)
				::haxe::ui::toolkit::controls::Button tmp14 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(154)
				tmp14->set_disabled(false);
				HX_STACK_LINE(155)
				::haxe::ui::toolkit::controls::Text tmp15 = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(155)
				tmp15->set_disabled(false);
				HX_STACK_LINE(156)
				::haxe::ui::toolkit::controls::Text tmp16 = this->displayVisitorIndexTextObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(156)
				tmp16->set_disabled(false);
				HX_STACK_LINE(157)
				::haxe::ui::toolkit::controls::TextInput tmp17 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(157)
				tmp17->set_disabled(false);
				HX_STACK_LINE(158)
				::haxe::ui::toolkit::controls::Button tmp18 = this->resetButtonObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(158)
				tmp18->set_disabled(false);
				HX_STACK_LINE(159)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(159)
				tmp19->set_disabled(false);
				HX_STACK_LINE(160)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(160)
				tmp20->set_disabled(false);
				HX_STACK_LINE(162)
				this->UpdateDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(163)
				this->UpdateDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(164)
				this->UpdateDisplaySentenceListViewObjectVoid();
			}
			HX_STACK_LINE(170)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(170)
			int tmp10 = tmp9->get_selectedIndex();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(170)
			bool tmp11 = (tmp10 == (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(170)
			if ((tmp11)){
				HX_STACK_LINE(172)
				::haxe::ui::toolkit::controls::Text tmp12 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(172)
				tmp12->set_disabled(true);
				HX_STACK_LINE(173)
				::haxe::ui::toolkit::controls::Button tmp13 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(173)
				tmp13->set_disabled(true);
				HX_STACK_LINE(174)
				::haxe::ui::toolkit::controls::Button tmp14 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(174)
				tmp14->set_disabled(true);
				HX_STACK_LINE(175)
				::haxe::ui::toolkit::controls::Text tmp15 = this->displayPreviousVisitorTextObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(175)
				tmp15->set_disabled(true);
				HX_STACK_LINE(176)
				::haxe::ui::toolkit::controls::Button tmp16 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(176)
				tmp16->set_disabled(true);
				HX_STACK_LINE(177)
				::haxe::ui::toolkit::controls::Button tmp17 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(177)
				tmp17->set_disabled(true);
				HX_STACK_LINE(178)
				::haxe::ui::toolkit::controls::Text tmp18 = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(178)
				tmp18->set_disabled(true);
				HX_STACK_LINE(179)
				::haxe::ui::toolkit::controls::Text tmp19 = this->displayVisitorIndexTextObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(179)
				tmp19->set_disabled(true);
				HX_STACK_LINE(180)
				::haxe::ui::toolkit::controls::TextInput tmp20 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(180)
				tmp20->set_disabled(true);
				HX_STACK_LINE(181)
				::haxe::ui::toolkit::controls::Button tmp21 = this->resetButtonObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(181)
				tmp21->set_disabled(true);
				HX_STACK_LINE(182)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(182)
				tmp22->set_disabled(true);
				HX_STACK_LINE(183)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(183)
				tmp23->set_disabled(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayExplanationTextObjectVoid",0xfca467e5,"UIPopupEditObjectVisitor.ResetDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",191,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		::haxe::ui::toolkit::controls::Text tmp = this->displayExplanationTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		if ((tmp1)){
			HX_STACK_LINE(193)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			tmp2->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayPopularTagListSelectorObjectVoid",0x1a5d22e5,"UIPopupEditObjectVisitor.ResetDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",196,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(197)
		if ((tmp1)){
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(198)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayPopularTagListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplaySentenceListViewObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplaySentenceListViewObjectVoid",0xe132d98d,"UIPopupEditObjectVisitor.ResetDisplaySentenceListViewObjectVoid","UIPopupEditObjectVisitor.hx",201,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(202)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displaySentencePopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		if ((tmp1)){
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplaySentenceListViewObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetSelectVisitorListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetSelectVisitorListSelectorObjectVoid",0xa21dd194,"UIPopupEditObjectVisitor.ResetSelectVisitorListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",207,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(209)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		::haxe::ui::toolkit::data::IDataSource tmp1 = tmp->get_dataSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		tmp1->removeAll();
		HX_STACK_LINE(210)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(211)
		while((true)){
			HX_STACK_LINE(211)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(211)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(211)
			int tmp4 = tmp3->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(211)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(211)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(211)
			if ((tmp6)){
				HX_STACK_LINE(211)
				break;
			}
			HX_STACK_LINE(213)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(213)
			::haxe::ui::toolkit::data::IDataSource tmp8 = tmp7->get_dataSource();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(213)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(213)
			::ObjectVisitor tmp10 = tmp9->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(213)
			::String tmp11 = tmp10->GetNameString();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			tmp8->createFromString(tmp11,null());
			HX_STACK_LINE(214)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetSelectVisitorListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayExplanationTextObjectVoid",0x6412f601,"UIPopupEditObjectVisitor.UpdateDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",220,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		bool updateExplanationBool = false;		HX_STACK_VAR(updateExplanationBool,"updateExplanationBool");
		HX_STACK_LINE(222)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(223)
		int tmp = this->selectedVisitorExplanationStringArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		::ObjectVisitor tmp1 = this->selectedVisitorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		int tmp2 = tmp1->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		if ((tmp3)){
			HX_STACK_LINE(223)
			updateExplanationBool = true;
		}
		HX_STACK_LINE(224)
		while((true)){
			HX_STACK_LINE(224)
			int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(224)
			::ObjectVisitor tmp5 = this->selectedVisitorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(224)
			int tmp6 = tmp5->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(224)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(224)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			if ((tmp8)){
				HX_STACK_LINE(224)
				break;
			}
			HX_STACK_LINE(225)
			bool tmp9 = (updateExplanationBool == true);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(225)
			if ((tmp9)){
				HX_STACK_LINE(225)
				break;
			}
			HX_STACK_LINE(226)
			::String tmp10 = this->selectedVisitorExplanationStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(226)
			::ObjectVisitor tmp11 = this->selectedVisitorObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(226)
			::String tmp12 = tmp11->GetExplanationStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(226)
			bool tmp13 = (tmp10 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(226)
			if ((tmp13)){
				HX_STACK_LINE(227)
				updateExplanationBool = true;
				HX_STACK_LINE(228)
				break;
			}
			HX_STACK_LINE(230)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(232)
		bool tmp4 = (updateExplanationBool == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(232)
		if ((tmp4)){
			HX_STACK_LINE(233)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorExplanationStringArray);
			HX_STACK_LINE(234)
			::haxe::ui::toolkit::controls::Text tmp5 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(234)
			tmp5->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			HX_STACK_LINE(235)
			::String displayExplanationString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(displayExplanationString,"displayExplanationString");
			HX_STACK_LINE(236)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(237)
			while((true)){
				HX_STACK_LINE(237)
				int tmp6 = loopCounter1Int1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(237)
				::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(237)
				int tmp8 = tmp7->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(237)
				bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(237)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(237)
				if ((tmp10)){
					HX_STACK_LINE(237)
					break;
				}
				HX_STACK_LINE(238)
				::String tmp11 = displayExplanationString;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(238)
				::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(238)
				::String tmp13 = tmp12->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(238)
				::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(238)
				::String tmp15 = (tmp14 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(238)
				displayExplanationString = tmp15;
				HX_STACK_LINE(239)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(241)
			::haxe::ui::toolkit::controls::Text tmp6 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(241)
			::String tmp7 = displayExplanationString;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(241)
			tmp6->set_text(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayPopularTagListSelectorObjectVoid",0xd980d049,"UIPopupEditObjectVisitor.UpdateDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",245,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(246)
		if ((tmp1)){
			HX_STACK_LINE(247)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(247)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(247)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			tmp5->set_height((int)205);
			HX_STACK_LINE(248)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(248)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->popupObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(248)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(249)
			bool updateTagBool = false;		HX_STACK_VAR(updateTagBool,"updateTagBool");
			HX_STACK_LINE(250)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(252)
			int tmp9 = this->selectedVisitorPopularTagCountIntArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(252)
			int tmp11 = tmp10->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(252)
			bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(252)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(252)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(252)
			if ((tmp13)){
				HX_STACK_LINE(253)
				int tmp15 = this->selectedVisitorPopularTagObjectStringArray->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(253)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(253)
				::ObjectVisitor tmp17 = this->selectedVisitorObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(253)
				::ObjectVisitor tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(253)
				int tmp19 = tmp18->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(253)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(253)
				tmp14 = (tmp16 != tmp20);
			}
			else{
				HX_STACK_LINE(252)
				tmp14 = true;
			}
			HX_STACK_LINE(251)
			if ((tmp14)){
				HX_STACK_LINE(254)
				updateTagBool = true;
			}
			HX_STACK_LINE(255)
			while((true)){
				HX_STACK_LINE(255)
				int tmp15 = loopCounter1Int;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(255)
				::ObjectVisitor tmp16 = this->selectedVisitorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(255)
				int tmp17 = tmp16->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(255)
				bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(255)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(255)
				if ((tmp19)){
					HX_STACK_LINE(255)
					break;
				}
				HX_STACK_LINE(256)
				bool tmp20 = (updateTagBool == true);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				if ((tmp20)){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(257)
				int tmp21 = this->selectedVisitorPopularTagCountIntArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(257)
				::ObjectVisitor tmp22 = this->selectedVisitorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(257)
				Dynamic tmp23 = tmp22->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(257)
				int tmp24 = tmp23->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(257)
				bool tmp25 = (tmp21 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(257)
				if ((tmp25)){
					HX_STACK_LINE(257)
					updateTagBool = true;
					HX_STACK_LINE(257)
					break;
				}
				HX_STACK_LINE(258)
				::String tmp26 = this->selectedVisitorPopularTagObjectStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(258)
				::ObjectVisitor tmp27 = this->selectedVisitorObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(258)
				Dynamic tmp28 = tmp27->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(258)
				::String tmp29 = tmp28->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(258)
				bool tmp30 = (tmp26 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(258)
				if ((tmp30)){
					HX_STACK_LINE(258)
					updateTagBool = true;
					HX_STACK_LINE(258)
					break;
				}
				HX_STACK_LINE(259)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(261)
			bool tmp15 = (updateTagBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(261)
			if ((tmp15)){
				HX_STACK_LINE(262)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagCountIntArray);
				HX_STACK_LINE(263)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagObjectStringArray);
				HX_STACK_LINE(264)
				::haxe::ui::toolkit::controls::popups::Popup tmp16 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(264)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = tmp16->GetContentObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(264)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp18 = ::Std_obj::instance(tmp17,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(264)
				::haxe::ui::toolkit::containers::ListView tmp19 = tmp18->GetListObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(264)
				::haxe::ui::toolkit::data::IDataSource tmp20 = tmp19->get_dataSource();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(264)
				tmp20->removeAll();
				HX_STACK_LINE(265)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(266)
				while((true)){
					HX_STACK_LINE(266)
					int tmp21 = loopCounter1Int1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(266)
					::ObjectVisitor tmp22 = this->selectedVisitorObject;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(266)
					int tmp23 = tmp22->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(266)
					bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(266)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(266)
					if ((tmp25)){
						HX_STACK_LINE(266)
						break;
					}
					HX_STACK_LINE(268)
					::ObjectVisitor tmp26 = this->selectedVisitorObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(268)
					Dynamic tmp27 = tmp26->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(268)
					int tmp28 = tmp27->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(268)
					this->selectedVisitorPopularTagCountIntArray->push(tmp28);
					HX_STACK_LINE(269)
					::ObjectVisitor tmp29 = this->selectedVisitorObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(269)
					Dynamic tmp30 = tmp29->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(269)
					::String tmp31 = tmp30->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(269)
					this->selectedVisitorPopularTagObjectStringArray->push(tmp31);
					HX_STACK_LINE(271)
					::haxe::ui::toolkit::controls::popups::Popup tmp32 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(271)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp33 = tmp32->GetContentObject();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(271)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp34 = ::Std_obj::instance(tmp33,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(271)
					::haxe::ui::toolkit::containers::ListView tmp35 = tmp34->GetListObject();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(271)
					::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(272)
					::ObjectVisitor tmp37 = this->selectedVisitorObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(272)
					Dynamic tmp38 = tmp37->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(272)
					int tmp39 = tmp38->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(272)
					::String tmp40 = (tmp39 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(274)
					::ObjectVisitor tmp41 = this->selectedVisitorObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(274)
					Dynamic tmp42 = tmp41->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(274)
					::String tmp43 = tmp42->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(272)
					::String tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(271)
					tmp36->createFromString(tmp44,null());
					HX_STACK_LINE(276)
					(loopCounter1Int1)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayPopularTagListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplaySentenceListViewObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplaySentenceListViewObjectVoid",0xfa80a3f1,"UIPopupEditObjectVisitor.UpdateDisplaySentenceListViewObjectVoid","UIPopupEditObjectVisitor.hx",282,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displaySentencePopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		if ((tmp1)){
			HX_STACK_LINE(284)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(284)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(284)
			tmp5->set_height((int)205);
			HX_STACK_LINE(285)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(285)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->popupObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(285)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(285)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(286)
			bool updateSentenceBool = false;		HX_STACK_VAR(updateSentenceBool,"updateSentenceBool");
			HX_STACK_LINE(287)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(288)
			int tmp9 = this->selectedVisitorSentenceStringArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(288)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(288)
			int tmp11 = tmp10->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(288)
			bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(288)
			if ((tmp12)){
				HX_STACK_LINE(288)
				updateSentenceBool = true;
			}
			HX_STACK_LINE(289)
			while((true)){
				HX_STACK_LINE(289)
				int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(289)
				::ObjectVisitor tmp14 = this->selectedVisitorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(289)
				int tmp15 = tmp14->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(289)
				bool tmp16 = (tmp13 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(289)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(289)
				if ((tmp17)){
					HX_STACK_LINE(289)
					break;
				}
				HX_STACK_LINE(290)
				bool tmp18 = (updateSentenceBool == true);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(290)
				if ((tmp18)){
					HX_STACK_LINE(290)
					break;
				}
				HX_STACK_LINE(291)
				::String tmp19 = this->selectedVisitorSentenceStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(291)
				::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(291)
				::String tmp21 = tmp20->GetSentenceStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(291)
				bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(291)
				if ((tmp22)){
					HX_STACK_LINE(292)
					updateSentenceBool = true;
					HX_STACK_LINE(293)
					break;
				}
				HX_STACK_LINE(295)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(297)
			bool tmp13 = (updateSentenceBool == true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(297)
			if ((tmp13)){
				HX_STACK_LINE(298)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorSentenceStringArray);
				HX_STACK_LINE(299)
				::haxe::ui::toolkit::controls::popups::Popup tmp14 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(299)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = tmp14->GetContentObject();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(299)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp16 = ::Std_obj::instance(tmp15,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(299)
				::haxe::ui::toolkit::containers::ListView tmp17 = tmp16->GetListObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(299)
				::haxe::ui::toolkit::data::IDataSource tmp18 = tmp17->get_dataSource();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(299)
				tmp18->removeAll();
				HX_STACK_LINE(300)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(301)
				while((true)){
					HX_STACK_LINE(301)
					int tmp19 = loopCounter1Int1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(301)
					::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(301)
					int tmp21 = tmp20->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(301)
					bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(301)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(301)
					if ((tmp23)){
						HX_STACK_LINE(301)
						break;
					}
					HX_STACK_LINE(302)
					::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(302)
					::String tmp25 = tmp24->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(302)
					this->selectedVisitorSentenceStringArray->push(tmp25);
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::controls::popups::Popup tmp26 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = tmp26->GetContentObject();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp28 = ::Std_obj::instance(tmp27,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::containers::ListView tmp29 = tmp28->GetListObject();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::data::IDataSource tmp30 = tmp29->get_dataSource();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(303)
					::ObjectVisitor tmp31 = this->selectedVisitorObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(303)
					::String tmp32 = tmp31->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(303)
					tmp30->createFromString(tmp32,null());
					HX_STACK_LINE(304)
					(loopCounter1Int1)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplaySentenceListViewObjectVoid,(void))


UIPopupEditObjectVisitor_obj::UIPopupEditObjectVisitor_obj()
{
}

void UIPopupEditObjectVisitor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupEditObjectVisitor);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(displayExplanationTextObject,"displayExplanationTextObject");
	HX_MARK_MEMBER_NAME(displayPopularTagButtonObject,"displayPopularTagButtonObject");
	HX_MARK_MEMBER_NAME(displayPopularTagPopupObject,"displayPopularTagPopupObject");
	HX_MARK_MEMBER_NAME(displayPreviousVisitorTextObject,"displayPreviousVisitorTextObject");
	HX_MARK_MEMBER_NAME(displaySentenceButtonObject,"displaySentenceButtonObject");
	HX_MARK_MEMBER_NAME(displaySentencePopupObject,"displaySentencePopupObject");
	HX_MARK_MEMBER_NAME(displayTargetExhibitionTextObject,"displayTargetExhibitionTextObject");
	HX_MARK_MEMBER_NAME(displayVisitorIndexTextObject,"displayVisitorIndexTextObject");
	HX_MARK_MEMBER_NAME(gridObject,"gridObject");
	HX_MARK_MEMBER_NAME(inputNameTextInputObject,"inputNameTextInputObject");
	HX_MARK_MEMBER_NAME(mainButtonObject,"mainButtonObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(resetButtonObject,"resetButtonObject");
	HX_MARK_MEMBER_NAME(selectCurrentExhibitionListSelectorObject,"selectCurrentExhibitionListSelectorObject");
	HX_MARK_MEMBER_NAME(selectedVisitorExplanationStringArray,"selectedVisitorExplanationStringArray");
	HX_MARK_MEMBER_NAME(selectedVisitorObject,"selectedVisitorObject");
	HX_MARK_MEMBER_NAME(selectedVisitorPopularTagCountIntArray,"selectedVisitorPopularTagCountIntArray");
	HX_MARK_MEMBER_NAME(selectedVisitorPopularTagObjectStringArray,"selectedVisitorPopularTagObjectStringArray");
	HX_MARK_MEMBER_NAME(selectedVisitorSentenceStringArray,"selectedVisitorSentenceStringArray");
	HX_MARK_MEMBER_NAME(selectModeListSelectorObject,"selectModeListSelectorObject");
	HX_MARK_MEMBER_NAME(selectVisitorListSelectorObject,"selectVisitorListSelectorObject");
	HX_MARK_MEMBER_NAME(selectVisitorListSelectorPrevString,"selectVisitorListSelectorPrevString");
	HX_MARK_MEMBER_NAME(selectVisitorListSelectorString,"selectVisitorListSelectorString");
	HX_MARK_END_CLASS();
}

void UIPopupEditObjectVisitor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(displayExplanationTextObject,"displayExplanationTextObject");
	HX_VISIT_MEMBER_NAME(displayPopularTagButtonObject,"displayPopularTagButtonObject");
	HX_VISIT_MEMBER_NAME(displayPopularTagPopupObject,"displayPopularTagPopupObject");
	HX_VISIT_MEMBER_NAME(displayPreviousVisitorTextObject,"displayPreviousVisitorTextObject");
	HX_VISIT_MEMBER_NAME(displaySentenceButtonObject,"displaySentenceButtonObject");
	HX_VISIT_MEMBER_NAME(displaySentencePopupObject,"displaySentencePopupObject");
	HX_VISIT_MEMBER_NAME(displayTargetExhibitionTextObject,"displayTargetExhibitionTextObject");
	HX_VISIT_MEMBER_NAME(displayVisitorIndexTextObject,"displayVisitorIndexTextObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(inputNameTextInputObject,"inputNameTextInputObject");
	HX_VISIT_MEMBER_NAME(mainButtonObject,"mainButtonObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(resetButtonObject,"resetButtonObject");
	HX_VISIT_MEMBER_NAME(selectCurrentExhibitionListSelectorObject,"selectCurrentExhibitionListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectedVisitorExplanationStringArray,"selectedVisitorExplanationStringArray");
	HX_VISIT_MEMBER_NAME(selectedVisitorObject,"selectedVisitorObject");
	HX_VISIT_MEMBER_NAME(selectedVisitorPopularTagCountIntArray,"selectedVisitorPopularTagCountIntArray");
	HX_VISIT_MEMBER_NAME(selectedVisitorPopularTagObjectStringArray,"selectedVisitorPopularTagObjectStringArray");
	HX_VISIT_MEMBER_NAME(selectedVisitorSentenceStringArray,"selectedVisitorSentenceStringArray");
	HX_VISIT_MEMBER_NAME(selectModeListSelectorObject,"selectModeListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectVisitorListSelectorObject,"selectVisitorListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectVisitorListSelectorPrevString,"selectVisitorListSelectorPrevString");
	HX_VISIT_MEMBER_NAME(selectVisitorListSelectorString,"selectVisitorListSelectorString");
}

Dynamic UIPopupEditObjectVisitor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"gridObject") ) { return gridObject; }
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { return popupObject; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mainButtonObject") ) { return mainButtonObject; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetButtonObject") ) { return resetButtonObject; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"selectedVisitorObject") ) { return selectedVisitorObject; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"inputNameTextInputObject") ) { return inputNameTextInputObject; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"displaySentencePopupObject") ) { return displaySentencePopupObject; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"displaySentenceButtonObject") ) { return displaySentenceButtonObject; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"displayExplanationTextObject") ) { return displayExplanationTextObject; }
		if (HX_FIELD_EQ(inName,"displayPopularTagPopupObject") ) { return displayPopularTagPopupObject; }
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { return selectModeListSelectorObject; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"displayPopularTagButtonObject") ) { return displayPopularTagButtonObject; }
		if (HX_FIELD_EQ(inName,"displayVisitorIndexTextObject") ) { return displayVisitorIndexTextObject; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorObject") ) { return selectVisitorListSelectorObject; }
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorString") ) { return selectVisitorListSelectorString; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"displayPreviousVisitorTextObject") ) { return displayPreviousVisitorTextObject; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"displayTargetExhibitionTextObject") ) { return displayTargetExhibitionTextObject; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"selectedVisitorSentenceStringArray") ) { return selectedVisitorSentenceStringArray; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorPrevString") ) { return selectVisitorListSelectorPrevString; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"selectedVisitorExplanationStringArray") ) { return selectedVisitorExplanationStringArray; }
		if (HX_FIELD_EQ(inName,"ResetDisplayExplanationTextObjectVoid") ) { return ResetDisplayExplanationTextObjectVoid_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"selectedVisitorPopularTagCountIntArray") ) { return selectedVisitorPopularTagCountIntArray; }
		if (HX_FIELD_EQ(inName,"ResetDisplaySentenceListViewObjectVoid") ) { return ResetDisplaySentenceListViewObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateDisplayExplanationTextObjectVoid") ) { return UpdateDisplayExplanationTextObjectVoid_dyn(); }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"UpdateDisplaySentenceListViewObjectVoid") ) { return UpdateDisplaySentenceListViewObjectVoid_dyn(); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"ResetSelectVisitorListSelectorObjectVoid") ) { return ResetSelectVisitorListSelectorObjectVoid_dyn(); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"selectCurrentExhibitionListSelectorObject") ) { return selectCurrentExhibitionListSelectorObject; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"selectedVisitorPopularTagObjectStringArray") ) { return selectedVisitorPopularTagObjectStringArray; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"ResetDisplayPopularTagListSelectorObjectVoid") ) { return ResetDisplayPopularTagListSelectorObjectVoid_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"UpdateDisplayPopularTagListSelectorObjectVoid") ) { return UpdateDisplayPopularTagListSelectorObjectVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupEditObjectVisitor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"gridObject") ) { gridObject=inValue.Cast< ::haxe::ui::toolkit::containers::Grid >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { popupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mainButtonObject") ) { mainButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetButtonObject") ) { resetButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"selectedVisitorObject") ) { selectedVisitorObject=inValue.Cast< ::ObjectVisitor >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"inputNameTextInputObject") ) { inputNameTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"displaySentencePopupObject") ) { displaySentencePopupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"displaySentenceButtonObject") ) { displaySentenceButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"displayExplanationTextObject") ) { displayExplanationTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayPopularTagPopupObject") ) { displayPopularTagPopupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { selectModeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"displayPopularTagButtonObject") ) { displayPopularTagButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayVisitorIndexTextObject") ) { displayVisitorIndexTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorObject") ) { selectVisitorListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorString") ) { selectVisitorListSelectorString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"displayPreviousVisitorTextObject") ) { displayPreviousVisitorTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"displayTargetExhibitionTextObject") ) { displayTargetExhibitionTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"selectedVisitorSentenceStringArray") ) { selectedVisitorSentenceStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorPrevString") ) { selectVisitorListSelectorPrevString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"selectedVisitorExplanationStringArray") ) { selectedVisitorExplanationStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"selectedVisitorPopularTagCountIntArray") ) { selectedVisitorPopularTagCountIntArray=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"selectCurrentExhibitionListSelectorObject") ) { selectCurrentExhibitionListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"selectedVisitorPopularTagObjectStringArray") ) { selectedVisitorPopularTagObjectStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UIPopupEditObjectVisitor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UIPopupEditObjectVisitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("displayExplanationTextObject","\x63","\xd8","\x76","\x52"));
	outFields->push(HX_HCSTRING("displayPopularTagButtonObject","\x94","\x2e","\x59","\xb1"));
	outFields->push(HX_HCSTRING("displayPopularTagPopupObject","\x28","\x07","\x1e","\x43"));
	outFields->push(HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14"));
	outFields->push(HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24"));
	outFields->push(HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5"));
	outFields->push(HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72"));
	outFields->push(HX_HCSTRING("displayVisitorIndexTextObject","\xd2","\x40","\x86","\x95"));
	outFields->push(HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"));
	outFields->push(HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac"));
	outFields->push(HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("resetButtonObject","\xc0","\xe6","\x46","\xc2"));
	outFields->push(HX_HCSTRING("selectCurrentExhibitionListSelectorObject","\xa8","\xba","\xdf","\x70"));
	outFields->push(HX_HCSTRING("selectedVisitorExplanationStringArray","\x22","\x87","\x84","\x62"));
	outFields->push(HX_HCSTRING("selectedVisitorObject","\xb2","\x95","\x06","\x2b"));
	outFields->push(HX_HCSTRING("selectedVisitorPopularTagCountIntArray","\x45","\xfa","\xe2","\xf3"));
	outFields->push(HX_HCSTRING("selectedVisitorPopularTagObjectStringArray","\xb5","\xcc","\x09","\x38"));
	outFields->push(HX_HCSTRING("selectedVisitorSentenceStringArray","\x52","\xdc","\xe8","\xc2"));
	outFields->push(HX_HCSTRING("selectModeListSelectorObject","\x9b","\x98","\x96","\x42"));
	outFields->push(HX_HCSTRING("selectVisitorListSelectorObject","\xee","\x78","\xd8","\x97"));
	outFields->push(HX_HCSTRING("selectVisitorListSelectorPrevString","\xd3","\xd1","\x18","\xfd"));
	outFields->push(HX_HCSTRING("selectVisitorListSelectorString","\x00","\x23","\xc9","\x93"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayExplanationTextObject),HX_HCSTRING("displayExplanationTextObject","\x63","\xd8","\x76","\x52")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayPopularTagButtonObject),HX_HCSTRING("displayPopularTagButtonObject","\x94","\x2e","\x59","\xb1")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayPopularTagPopupObject),HX_HCSTRING("displayPopularTagPopupObject","\x28","\x07","\x1e","\x43")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayPreviousVisitorTextObject),HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displaySentenceButtonObject),HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displaySentencePopupObject),HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayTargetExhibitionTextObject),HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayVisitorIndexTextObject),HX_HCSTRING("displayVisitorIndexTextObject","\xd2","\x40","\x86","\x95")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,inputNameTextInputObject),HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,mainButtonObject),HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,resetButtonObject),HX_HCSTRING("resetButtonObject","\xc0","\xe6","\x46","\xc2")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectCurrentExhibitionListSelectorObject),HX_HCSTRING("selectCurrentExhibitionListSelectorObject","\xa8","\xba","\xdf","\x70")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorExplanationStringArray),HX_HCSTRING("selectedVisitorExplanationStringArray","\x22","\x87","\x84","\x62")},
	{hx::fsObject /*::ObjectVisitor*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorObject),HX_HCSTRING("selectedVisitorObject","\xb2","\x95","\x06","\x2b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorPopularTagCountIntArray),HX_HCSTRING("selectedVisitorPopularTagCountIntArray","\x45","\xfa","\xe2","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorPopularTagObjectStringArray),HX_HCSTRING("selectedVisitorPopularTagObjectStringArray","\xb5","\xcc","\x09","\x38")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorSentenceStringArray),HX_HCSTRING("selectedVisitorSentenceStringArray","\x52","\xdc","\xe8","\xc2")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectModeListSelectorObject),HX_HCSTRING("selectModeListSelectorObject","\x9b","\x98","\x96","\x42")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectVisitorListSelectorObject),HX_HCSTRING("selectVisitorListSelectorObject","\xee","\x78","\xd8","\x97")},
	{hx::fsString,(int)offsetof(UIPopupEditObjectVisitor_obj,selectVisitorListSelectorPrevString),HX_HCSTRING("selectVisitorListSelectorPrevString","\xd3","\xd1","\x18","\xfd")},
	{hx::fsString,(int)offsetof(UIPopupEditObjectVisitor_obj,selectVisitorListSelectorString),HX_HCSTRING("selectVisitorListSelectorString","\x00","\x23","\xc9","\x93")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("displayExplanationTextObject","\x63","\xd8","\x76","\x52"),
	HX_HCSTRING("displayPopularTagButtonObject","\x94","\x2e","\x59","\xb1"),
	HX_HCSTRING("displayPopularTagPopupObject","\x28","\x07","\x1e","\x43"),
	HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14"),
	HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24"),
	HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5"),
	HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72"),
	HX_HCSTRING("displayVisitorIndexTextObject","\xd2","\x40","\x86","\x95"),
	HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"),
	HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac"),
	HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("resetButtonObject","\xc0","\xe6","\x46","\xc2"),
	HX_HCSTRING("selectCurrentExhibitionListSelectorObject","\xa8","\xba","\xdf","\x70"),
	HX_HCSTRING("selectedVisitorExplanationStringArray","\x22","\x87","\x84","\x62"),
	HX_HCSTRING("selectedVisitorObject","\xb2","\x95","\x06","\x2b"),
	HX_HCSTRING("selectedVisitorPopularTagCountIntArray","\x45","\xfa","\xe2","\xf3"),
	HX_HCSTRING("selectedVisitorPopularTagObjectStringArray","\xb5","\xcc","\x09","\x38"),
	HX_HCSTRING("selectedVisitorSentenceStringArray","\x52","\xdc","\xe8","\xc2"),
	HX_HCSTRING("selectModeListSelectorObject","\x9b","\x98","\x96","\x42"),
	HX_HCSTRING("selectVisitorListSelectorObject","\xee","\x78","\xd8","\x97"),
	HX_HCSTRING("selectVisitorListSelectorPrevString","\xd3","\xd1","\x18","\xfd"),
	HX_HCSTRING("selectVisitorListSelectorString","\x00","\x23","\xc9","\x93"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	HX_HCSTRING("ResetDisplayExplanationTextObjectVoid","\x26","\x27","\xd7","\xf8"),
	HX_HCSTRING("ResetDisplayPopularTagListSelectorObjectVoid","\xc4","\x3d","\x5f","\x11"),
	HX_HCSTRING("ResetDisplaySentenceListViewObjectVoid","\x2c","\x73","\x67","\x91"),
	HX_HCSTRING("ResetSelectVisitorListSelectorObjectVoid","\xf3","\x50","\xe3","\x3b"),
	HX_HCSTRING("UpdateDisplayExplanationTextObjectVoid","\xa0","\x8f","\x47","\x14"),
	HX_HCSTRING("UpdateDisplayPopularTagListSelectorObjectVoid","\x8a","\x38","\x56","\x04"),
	HX_HCSTRING("UpdateDisplaySentenceListViewObjectVoid","\x72","\x75","\x52","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPopupEditObjectVisitor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPopupEditObjectVisitor_obj::__mClass,"__mClass");
};

#endif

hx::Class UIPopupEditObjectVisitor_obj::__mClass;

void UIPopupEditObjectVisitor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIPopupEditObjectVisitor","\xed","\x1b","\x5e","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UIPopupEditObjectVisitor_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIPopupEditObjectVisitor_obj >;
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

