#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_EnumVisitorMode
#include <EnumVisitorMode.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_ObjectVisitorUI
#include <ObjectVisitorUI.h>
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

Void UIPopupEditObjectVisitor_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupEditObjectVisitor","new",0x7abab75f,"UIPopupEditObjectVisitor.new","UIPopupEditObjectVisitor.hx",19,0x96ef98f1)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(55)
	this->visitorModePrevString = HX_HCSTRING("asd","\x32","\xff","\x49","\x00");
	HX_STACK_LINE(54)
	this->visitorButtonObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(53)
	this->selectVisitorListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(52)
	this->selectVisitorListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(51)
	this->selectVisitorListSelectorObject = null();
	HX_STACK_LINE(50)
	this->selectModeListSelectorObject = null();
	HX_STACK_LINE(49)
	this->selectedVisitorSentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(48)
	this->selectedVisitorPopularTagObjectStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(47)
	this->selectedVisitorPopularTagCountIntArray = Array_obj< int >::__new();
	HX_STACK_LINE(46)
	this->selectedVisitorObject = null();
	HX_STACK_LINE(45)
	this->selectedVisitorExplanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(44)
	this->selectCurrentExhibitionListSelectorObject = null();
	HX_STACK_LINE(43)
	this->resetButtonObject = null();
	HX_STACK_LINE(42)
	this->resetAllButtonObject = null();
	HX_STACK_LINE(41)
	this->popupObject = null();
	HX_STACK_LINE(40)
	this->mainButtonObject = null();
	HX_STACK_LINE(39)
	this->inputNameTextInputObject = null();
	HX_STACK_LINE(38)
	this->gridObject = null();
	HX_STACK_LINE(37)
	this->displayVisitorIndexLocalTextObject = null();
	HX_STACK_LINE(36)
	this->displayVisitorIndexGlobalTextObject = null();
	HX_STACK_LINE(35)
	this->displayTargetExhibitionTextObject = null();
	HX_STACK_LINE(34)
	this->displaySentencePopupObject = null();
	HX_STACK_LINE(33)
	this->displaySentenceButtonObject = null();
	HX_STACK_LINE(32)
	this->displayPreviousVisitorTextObject = null();
	HX_STACK_LINE(31)
	this->displayPopularTagPopupObject = null();
	HX_STACK_LINE(30)
	this->displayPopularTagButtonObject = null();
	HX_STACK_LINE(29)
	this->displayExplanationPopupObject = null();
	HX_STACK_LINE(28)
	this->displayExplanationButtonObject = null();
	HX_STACK_LINE(27)
	this->displayCurrentExhibitionTextObject = null();
	HX_STACK_LINE(26)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(25)
	this->changeAllSoftwareManualButtonObject = null();
	HX_STACK_LINE(24)
	this->changeAllSoftwareAutoButtonObject = null();
	HX_STACK_LINE(23)
	this->changeAllHardwareManualButtonObject = null();
	HX_STACK_LINE(57)
	::UIPopupEditObjectVisitor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(63)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditVisitorObjectButton","\x9d","\x96","\xbf","\x99"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	this->mainButtonObject = tmp;
	HX_STACK_LINE(64)
	::haxe::ui::toolkit::controls::Button tmp1 = this->mainButtonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectVisitor,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectVisitor.hx",64,0x96ef98f1)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(66)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(67)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(68)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectVisitor.xml","\x9b","\xe8","\x07","\x44"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectVisitor.hx",71,0x96ef98f1)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(73)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					if ((tmp6)){
						HX_STACK_LINE(74)
						bool tmp7 = (_g->selectedVisitorObject != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(74)
						if ((tmp7)){
							HX_STACK_LINE(76)
							::String tmp8 = _g->inputNameTextInputObject->get_text();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(76)
							::UIPopupEditObjectVisitor tmp9 = _g;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(76)
							_g->selectedVisitorObject->SetNameStringVoid(tmp8,tmp9);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Visitor","\x98","\xbf","\x3a","\x1a"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			_g->popupObject = tmp6;
			HX_STACK_LINE(84)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			::haxe::ui::toolkit::controls::Button tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonChangeAllHardwareManual","\x7b","\x69","\xce","\x0c"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(84)
			_g->changeAllHardwareManualButtonObject = tmp8;
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::controls::Button tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonChangeAllSoftwareAuto","\x63","\xf8","\xa9","\x76"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			_g->changeAllSoftwareAutoButtonObject = tmp10;
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			::haxe::ui::toolkit::controls::Button tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonChangeAllSoftwareManual","\x3a","\x6c","\xb5","\x33"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(86)
			_g->changeAllSoftwareManualButtonObject = tmp12;
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::controls::Text tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayCurrentExhibition","\x38","\xcb","\xf2","\x02"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			_g->displayCurrentExhibitionTextObject = tmp14;
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::controls::Button tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplayExplanation","\xbb","\xea","\xa5","\x19"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(88)
			_g->displayExplanationButtonObject = tmp16;
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::controls::Button tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplayPopularTag","\x9f","\xff","\x37","\xc2"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(89)
			_g->displayPopularTagButtonObject = tmp18;
			HX_STACK_LINE(90)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(90)
			::haxe::ui::toolkit::controls::Text tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPreviousVisitor","\x87","\x41","\x94","\x69"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(90)
			_g->displayPreviousVisitorTextObject = tmp20;
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp21 = _g->popupObject->get_content();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::controls::Button tmp22 = tmp21->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplaySentence","\x01","\x12","\x5e","\xee"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(91)
			_g->displaySentenceButtonObject = tmp22;
			HX_STACK_LINE(92)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp23 = _g->popupObject->get_content();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(92)
			::haxe::ui::toolkit::controls::Text tmp24 = tmp23->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayTargetExhibition","\xb0","\x47","\x47","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(92)
			_g->displayTargetExhibitionTextObject = tmp24;
			HX_STACK_LINE(93)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp25 = _g->popupObject->get_content();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(93)
			::haxe::ui::toolkit::controls::Text tmp26 = tmp25->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayVisitorIndexGlobal","\xb7","\x35","\xad","\x33"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(93)
			_g->displayVisitorIndexGlobalTextObject = tmp26;
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = _g->popupObject->get_content();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::controls::Text tmp28 = tmp27->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayVisitorIndexLocal","\x97","\xab","\x7b","\xc6"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(94)
			_g->displayVisitorIndexLocalTextObject = tmp28;
			HX_STACK_LINE(95)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp29 = _g->popupObject->get_content();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(95)
			::haxe::ui::toolkit::containers::Grid tmp30 = tmp29->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_Grid","\xb8","\xa7","\x8a","\x05"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(95)
			_g->gridObject = tmp30;
			HX_STACK_LINE(96)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp31 = _g->popupObject->get_content();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(96)
			::haxe::ui::toolkit::controls::TextInput tmp32 = tmp31->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_InputName","\x43","\xb1","\xb6","\x7f"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(96)
			_g->inputNameTextInputObject = tmp32;
			HX_STACK_LINE(97)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp33 = _g->popupObject->get_content();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(97)
			::haxe::ui::toolkit::controls::Button tmp34 = tmp33->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonResetAll","\x16","\xc6","\x64","\xe0"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(97)
			_g->resetAllButtonObject = tmp34;
			HX_STACK_LINE(98)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp35 = _g->popupObject->get_content();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(98)
			::haxe::ui::toolkit::controls::Button tmp36 = tmp35->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonReset","\xcb","\x1b","\x7e","\x01"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(98)
			_g->resetButtonObject = tmp36;
			HX_STACK_LINE(99)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp37 = _g->popupObject->get_content();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(99)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp38 = tmp37->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectCurrentExhibition","\x9a","\x81","\xb0","\x5a"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(99)
			_g->selectCurrentExhibitionListSelectorObject = tmp38;
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp39 = _g->popupObject->get_content();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp40 = tmp39->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectMode","\xf1","\x5a","\x61","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(100)
			_g->selectModeListSelectorObject = tmp40;
			HX_STACK_LINE(101)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp41 = _g->popupObject->get_content();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(101)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp42 = tmp41->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectVisitor","\xe0","\x48","\xdc","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(101)
			_g->selectVisitorListSelectorObject = tmp42;
			HX_STACK_LINE(103)
			_g->selectCurrentExhibitionListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(104)
			_g->selectModeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(105)
			_g->selectVisitorListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::core::Component tmp43 = _e->get_component();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(107)
			Dynamic tmp44 = tmp43->userData;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(107)
			bool tmp45 = (tmp44 != null());		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(107)
			if ((tmp45)){
				HX_STACK_LINE(108)
				::haxe::ui::toolkit::core::Component tmp46 = _e->get_component();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(108)
				Dynamic tmp47 = tmp46->userData;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(108)
				::String tmp48 = ::Std_obj::string(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(108)
				::String tmp49 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(108)
				::String string = tmp49;		HX_STACK_VAR(string,"string");
				HX_STACK_LINE(109)
				Array< ::String > stringArray = string.split(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));		HX_STACK_VAR(stringArray,"stringArray");
				HX_STACK_LINE(110)
				::String tmp50 = stringArray->__get((int)1);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(110)
				::String nameString = tmp50;		HX_STACK_VAR(nameString,"nameString");
				HX_STACK_LINE(111)
				::CollectionGlobal tmp51 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(111)
				::String tmp52 = nameString;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(111)
				::ObjectVisitor tmp53 = ::CollectionFunction_obj::FindVisitorObject(tmp51,tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(111)
				::ObjectVisitor visitorObject = tmp53;		HX_STACK_VAR(visitorObject,"visitorObject");
				HX_STACK_LINE(113)
				bool tmp54 = (visitorObject != null());		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(113)
				if ((tmp54)){
					HX_STACK_LINE(115)
					_g->selectedVisitorObject = visitorObject;
					HX_STACK_LINE(116)
					::String tmp55 = _g->selectedVisitorObject->GetNameString();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(116)
					_g->inputNameTextInputObject->set_text(tmp55);
					HX_STACK_LINE(117)
					_g->selectCurrentExhibitionListSelectorObject->set_selectedIndex((int)0);
					HX_STACK_LINE(118)
					_g->selectVisitorListSelectorObject->set_selectedIndex((int)0);
					HX_STACK_LINE(119)
					::String tmp56 = _g->selectedVisitorObject->GetNameString();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(119)
					_g->selectVisitorListSelectorObject->set_text(tmp56);
					HX_STACK_LINE(120)
					::String tmp57 = _g->selectVisitorListSelectorObject->get_text();		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(120)
					_g->selectVisitorListSelectorString = tmp57;
					HX_STACK_LINE(121)
					::String tmp58 = _g->selectVisitorListSelectorObject->get_text();		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(121)
					_g->selectVisitorListSelectorPrevString = tmp58;
					HX_STACK_LINE(123)
					_g->ResetSelectVisitorListSelectorObjectVoid();
				}
			}

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","UIPopupEditObjectVisitor.hx",128,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(129)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(130)
					while((true)){
						HX_STACK_LINE(130)
						int tmp46 = loopCounter1Int;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(130)
						int tmp47 = _g->collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(130)
						bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(130)
						bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(130)
						if ((tmp49)){
							HX_STACK_LINE(130)
							break;
						}
						HX_STACK_LINE(131)
						::ObjectVisitor tmp50 = _g->collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(131)
						tmp50->SetVisitorModeEnumVoid(::EnumVisitorMode_obj::HARDWARE_MANUAL);
						HX_STACK_LINE(132)
						_g->selectModeListSelectorObject->set_text(HX_HCSTRING("Hardware Manual","\xbe","\xc4","\x09","\xcc"));
						HX_STACK_LINE(133)
						(loopCounter1Int)++;
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(128)
			_g->changeAllHardwareManualButtonObject->set_onClick( Dynamic(new _Function_2_2(_g)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","UIPopupEditObjectVisitor.hx",136,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(137)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(138)
					while((true)){
						HX_STACK_LINE(138)
						int tmp46 = loopCounter1Int;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(138)
						int tmp47 = _g->collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(138)
						bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(138)
						bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(138)
						if ((tmp49)){
							HX_STACK_LINE(138)
							break;
						}
						HX_STACK_LINE(139)
						::ObjectVisitor tmp50 = _g->collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(139)
						tmp50->SetVisitorModeEnumVoid(::EnumVisitorMode_obj::SOFTWARE_AUTO);
						HX_STACK_LINE(140)
						_g->selectModeListSelectorObject->set_text(HX_HCSTRING("Software Auto","\x08","\x42","\xd8","\xd2"));
						HX_STACK_LINE(141)
						(loopCounter1Int)++;
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(136)
			_g->changeAllSoftwareAutoButtonObject->set_onClick( Dynamic(new _Function_2_3(_g)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_4,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","UIPopupEditObjectVisitor.hx",144,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(145)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(146)
					while((true)){
						HX_STACK_LINE(146)
						int tmp46 = loopCounter1Int;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(146)
						int tmp47 = _g->collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(146)
						bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(146)
						bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(146)
						if ((tmp49)){
							HX_STACK_LINE(146)
							break;
						}
						HX_STACK_LINE(147)
						::ObjectVisitor tmp50 = _g->collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(147)
						tmp50->SetVisitorModeEnumVoid(::EnumVisitorMode_obj::SOFTWARE_MANUAL);
						HX_STACK_LINE(148)
						_g->selectModeListSelectorObject->set_text(HX_HCSTRING("Software Manual","\x1f","\x29","\x45","\xaf"));
						HX_STACK_LINE(149)
						(loopCounter1Int)++;
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(144)
			_g->changeAllSoftwareManualButtonObject->set_onClick( Dynamic(new _Function_2_4(_g)));
			HX_STACK_LINE(152)
			_g->UpdateDisplayCurrentExhibitionTextObjectVoid();

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_5,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_5",0x5201af7c,"*._Function_2_5","UIPopupEditObjectVisitor.hx",153,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(155)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(156)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(158)
					::haxe::ui::toolkit::core::PopupManager tmp46 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(158)
					int tmp47 = buttonControlInt1;		HX_STACK_VAR(tmp47,"tmp47");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",158,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(158)
					::haxe::ui::toolkit::controls::popups::Popup tmp48 = tmp46->showList(_g->selectedVisitorObject->GetExplanationStringArray(),null(),HX_HCSTRING("Display Explanation","\x3b","\xa2","\x4c","\xd6"),tmp47, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(158)
					_g->displayExplanationPopupObject = tmp48;
					HX_STACK_LINE(159)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp49 = _g->displayExplanationPopupObject->GetContentObject();		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(159)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp50 = ::Std_obj::instance(tmp49,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(159)
					::haxe::ui::toolkit::containers::ListView tmp51 = tmp50->GetListObject();		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(159)
					tmp51->set_height((int)205);
					HX_STACK_LINE(160)
					Float tmp52 = _g->popupObject->get_y();		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(160)
					_g->displayExplanationPopupObject->set_y(tmp52);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(153)
			_g->displayExplanationButtonObject->set_onClick( Dynamic(new _Function_2_5(_g)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_6,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_6",0x5201af7d,"*._Function_2_6","UIPopupEditObjectVisitor.hx",163,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(165)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(166)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(168)
					Array< ::String > displayStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(displayStringArray,"displayStringArray");
					HX_STACK_LINE(169)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(170)
					while((true)){
						HX_STACK_LINE(170)
						int tmp46 = loopCounter1Int;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(170)
						int tmp47 = _g->selectedVisitorObject->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(170)
						bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(170)
						bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(170)
						if ((tmp49)){
							HX_STACK_LINE(170)
							break;
						}
						HX_STACK_LINE(172)
						Dynamic tmp50 = _g->selectedVisitorObject->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(172)
						int tmp51 = tmp50->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(172)
						::String tmp52 = (tmp51 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(174)
						Dynamic tmp53 = _g->selectedVisitorObject->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(174)
						::String tmp54 = tmp53->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(172)
						::String tmp55 = (tmp52 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(172)
						::String displayString = tmp55;		HX_STACK_VAR(displayString,"displayString");
						HX_STACK_LINE(175)
						::String tmp56 = displayString;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(175)
						displayStringArray->push(tmp56);
						HX_STACK_LINE(176)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(180)
					::haxe::ui::toolkit::core::PopupManager tmp46 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(180)
					int tmp47 = buttonControlInt1;		HX_STACK_VAR(tmp47,"tmp47");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",180,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(180)
					::haxe::ui::toolkit::controls::popups::Popup tmp48 = tmp46->showList(displayStringArray,null(),HX_HCSTRING("Display Popular Tag","\x95","\x68","\x05","\xc9"),tmp47, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(180)
					_g->displayPopularTagPopupObject = tmp48;
					HX_STACK_LINE(181)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp49 = _g->displayPopularTagPopupObject->GetContentObject();		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(181)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp50 = ::Std_obj::instance(tmp49,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(181)
					::haxe::ui::toolkit::containers::ListView tmp51 = tmp50->GetListObject();		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(181)
					tmp51->set_height((int)205);
					HX_STACK_LINE(182)
					Float tmp52 = _g->popupObject->get_y();		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(182)
					_g->displayPopularTagPopupObject->set_y(tmp52);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(163)
			_g->displayPopularTagButtonObject->set_onClick( Dynamic(new _Function_2_6(_g)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_7,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_7",0x5201af7e,"*._Function_2_7","UIPopupEditObjectVisitor.hx",185,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(187)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(188)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(190)
					::haxe::ui::toolkit::core::PopupManager tmp46 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(190)
					int tmp47 = buttonControlInt1;		HX_STACK_VAR(tmp47,"tmp47");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",190,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(190)
					::haxe::ui::toolkit::controls::popups::Popup tmp48 = tmp46->showList(_g->selectedVisitorObject->GetSentenceStringArray(),null(),HX_HCSTRING("Display Sentence","\x81","\xaa","\xa1","\xca"),tmp47, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(190)
					_g->displaySentencePopupObject = tmp48;
					HX_STACK_LINE(191)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp49 = _g->displaySentencePopupObject->GetContentObject();		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(191)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp50 = ::Std_obj::instance(tmp49,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(191)
					::haxe::ui::toolkit::containers::ListView tmp51 = tmp50->GetListObject();		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(191)
					tmp51->set_height((int)205);
					HX_STACK_LINE(192)
					Float tmp52 = _g->popupObject->get_y();		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(192)
					_g->displaySentencePopupObject->set_y(tmp52);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(185)
			_g->displaySentenceButtonObject->set_onClick( Dynamic(new _Function_2_7(_g)));
			HX_STACK_LINE(195)
			_g->UpdateDisplayTargetExhibitionTextObjectVoid();
			HX_STACK_LINE(196)
			_g->UpdateDisplayVisitorIndexGlobalTextObjectVoid();
			HX_STACK_LINE(197)
			_g->UpdateDisplayVisitorIndexLocalTextObjectVoid();

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_8,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_8",0x5201af7f,"*._Function_2_8","UIPopupEditObjectVisitor.hx",198,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(200)
					bool tmp46 = (_g->selectedVisitorObject != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(200)
					if ((tmp46)){
						HX_STACK_LINE(201)
						_g->selectedVisitorObject->ResetVoid();
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(198)
			_g->resetButtonObject->set_onClick( Dynamic(new _Function_2_8(_g)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_9,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_9",0x5201af80,"*._Function_2_9","UIPopupEditObjectVisitor.hx",205,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(207)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(208)
					while((true)){
						HX_STACK_LINE(208)
						int tmp46 = loopCounter1Int;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(208)
						int tmp47 = _g->collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(208)
						bool tmp48 = (tmp46 < tmp47);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(208)
						bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(208)
						if ((tmp49)){
							HX_STACK_LINE(208)
							break;
						}
						HX_STACK_LINE(209)
						::ObjectVisitor tmp50 = _g->collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(209)
						tmp50->ResetVoid();
						HX_STACK_LINE(210)
						(loopCounter1Int)++;
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(205)
			_g->resetAllButtonObject->set_onClick( Dynamic(new _Function_2_9(_g)));
			HX_STACK_LINE(214)
			_g->UpdateSelectCurrentExhibitionListSelectorObjectVoid();
			HX_STACK_LINE(215)
			_g->ResetSelectModeListSelectorObjectVoid();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(64)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateVoid",0x87db38fe,"UIPopupEditObjectVisitor.UpdateVoid","UIPopupEditObjectVisitor.hx",221,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(222)
		bool updateVisitorButtonBool = false;		HX_STACK_VAR(updateVisitorButtonBool,"updateVisitorButtonBool");
		HX_STACK_LINE(223)
		int tmp = this->visitorButtonObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		int tmp2 = tmp1->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		if ((tmp3)){
			HX_STACK_LINE(223)
			updateVisitorButtonBool = true;
		}
		HX_STACK_LINE(224)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(225)
		while((true)){
			HX_STACK_LINE(225)
			int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(225)
			int tmp6 = tmp5->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(225)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(225)
			if ((tmp8)){
				HX_STACK_LINE(225)
				break;
			}
			HX_STACK_LINE(226)
			::haxe::ui::toolkit::controls::Button tmp9 = this->visitorButtonObjectArray->__get(loopCounter1Int).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(226)
			::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(226)
			::ObjectVisitor tmp11 = tmp10->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(226)
			::ObjectVisitorUI tmp12 = tmp11->GetVisitorUIObject();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(226)
			::haxe::ui::toolkit::controls::Button tmp13 = tmp12->GetButtonObject();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(226)
			bool tmp14 = (tmp9 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(226)
			if ((tmp14)){
				HX_STACK_LINE(227)
				::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(227)
				::ObjectVisitor tmp16 = tmp15->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(227)
				::ObjectVisitorUI tmp17 = tmp16->GetVisitorUIObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(227)
				::haxe::ui::toolkit::controls::Button tmp18 = tmp17->GetButtonObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(227)
				::String tmp19 = tmp18->get_id();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(227)
				bool tmp20 = (tmp19 != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(227)
				if ((tmp20)){
					HX_STACK_LINE(227)
					updateVisitorButtonBool = true;
				}
				else{
					HX_STACK_LINE(228)
					::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(228)
					::ObjectVisitor tmp22 = tmp21->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(228)
					::ObjectVisitorUI tmp23 = tmp22->GetVisitorUIObject();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(228)
					::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(228)
					::String tmp25 = tmp24->get_id();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(228)
					bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(228)
					if ((tmp26)){
						HX_STACK_LINE(228)
						updateVisitorButtonBool = false;
					}
				}
			}
			else{
				HX_STACK_LINE(230)
				updateVisitorButtonBool = false;
			}
			HX_STACK_LINE(231)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(233)
		bool tmp4 = (updateVisitorButtonBool == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(233)
		if ((tmp4)){
			HX_STACK_LINE(234)
			this->UpdateVisitorButtonObjectArrayVoid();
		}
		HX_STACK_LINE(236)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = this->popupObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(236)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(236)
		if ((tmp6)){
			HX_STACK_LINE(238)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(238)
			::String tmp8 = tmp7->get_text();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(238)
			this->selectVisitorListSelectorString = tmp8;
			HX_STACK_LINE(239)
			::String tmp9 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(239)
			::String tmp10 = this->selectVisitorListSelectorPrevString;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(239)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(239)
			if ((tmp11)){
				HX_STACK_LINE(241)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(241)
				::String tmp13 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(241)
				::ObjectVisitor tmp14 = ::CollectionFunction_obj::FindVisitorObject(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(241)
				this->selectedVisitorObject = tmp14;
				HX_STACK_LINE(242)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(242)
				bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(242)
				bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(242)
				if ((tmp16)){
					HX_STACK_LINE(242)
					::ObjectVisitor tmp18 = this->selectedVisitorObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(242)
					::ObjectVisitor tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(242)
					tmp17 = (tmp19 != null());
				}
				else{
					HX_STACK_LINE(242)
					tmp17 = false;
				}
				HX_STACK_LINE(242)
				if ((tmp17)){
					HX_STACK_LINE(243)
					::ObjectVisitor tmp18 = this->selectedVisitorObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(243)
					::ObjectMuseum tmp19 = tmp18->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(243)
					bool tmp20 = (tmp19 == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(243)
					if ((tmp20)){
						HX_STACK_LINE(244)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(244)
						tmp21->set_text(HX_HCSTRING("In Lobby","\x9b","\x95","\x24","\x05"));
					}
					else{
						HX_STACK_LINE(247)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(247)
						::ObjectVisitor tmp22 = this->selectedVisitorObject;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(247)
						::ObjectMuseum tmp23 = tmp22->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(247)
						Dynamic tmp24 = tmp23->GetNameStruct();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(247)
						::String tmp25 = tmp24->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(247)
						tmp21->set_text(tmp25);
					}
				}
				HX_STACK_LINE(250)
				::String tmp18 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(250)
				this->selectVisitorListSelectorPrevString = tmp18;
				HX_STACK_LINE(252)
				this->ResetDisplayCurrentExhibitionTextObjectVoid();
				HX_STACK_LINE(253)
				this->ResetDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(254)
				this->ResetDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(255)
				this->ResetDisplaySentenceListViewObjectVoid();
				HX_STACK_LINE(256)
				this->ResetDisplayTargetExhibitionTextObjectVoid();
				HX_STACK_LINE(257)
				this->ResetDisplayVisitorIndexGlobalTextObjectVoid();
				HX_STACK_LINE(258)
				this->ResetDisplayVisitorIndexLocalTextObjectVoid();
				HX_STACK_LINE(259)
				this->ResetInputNameTextInputObjectVoid();
				HX_STACK_LINE(260)
				this->ResetSelectCurrentExhibitionListSelectorObject();
				HX_STACK_LINE(261)
				this->ResetSelectModeListSelectorObjectVoid();
				HX_STACK_LINE(263)
				this->ResetSelectVisitorListSelectorObjectVoid();
			}
			HX_STACK_LINE(267)
			::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(267)
			bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(267)
			if ((tmp13)){
				HX_STACK_LINE(269)
				::haxe::ui::toolkit::controls::Button tmp14 = this->displayExplanationButtonObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(269)
				tmp14->set_disabled(false);
				HX_STACK_LINE(270)
				::haxe::ui::toolkit::controls::Button tmp15 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(270)
				tmp15->set_disabled(false);
				HX_STACK_LINE(271)
				::haxe::ui::toolkit::controls::Button tmp16 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(271)
				tmp16->set_disabled(false);
				HX_STACK_LINE(272)
				::haxe::ui::toolkit::controls::Button tmp17 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(272)
				tmp17->set_disabled(false);
				HX_STACK_LINE(273)
				::haxe::ui::toolkit::controls::Button tmp18 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(273)
				tmp18->set_disabled(false);
				HX_STACK_LINE(274)
				::haxe::ui::toolkit::controls::TextInput tmp19 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(274)
				tmp19->set_disabled(false);
				HX_STACK_LINE(275)
				::haxe::ui::toolkit::controls::Button tmp20 = this->resetButtonObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(275)
				tmp20->set_disabled(false);
				HX_STACK_LINE(276)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(276)
				tmp21->set_disabled(false);
				HX_STACK_LINE(277)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(277)
				tmp22->set_disabled(false);
				HX_STACK_LINE(279)
				this->UpdateDisplayCurrentExhibitionTextObjectVoid();
				HX_STACK_LINE(280)
				this->UpdateDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(281)
				this->UpdateDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(282)
				this->UpdateDisplaySentenceListViewObjectVoid();
				HX_STACK_LINE(283)
				this->UpdateDisplayTargetExhibitionTextObjectVoid();
				HX_STACK_LINE(284)
				this->UpdateDisplayVisitorIndexGlobalTextObjectVoid();
				HX_STACK_LINE(285)
				this->UpdateDisplayVisitorIndexLocalTextObjectVoid();
				HX_STACK_LINE(286)
				this->UpdateSelectCurrentExhibitionListSelectorObjectVoid();
				HX_STACK_LINE(287)
				this->UpdateSelectModeListSelectorObjectVoid();
			}
			HX_STACK_LINE(291)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(291)
			int tmp15 = tmp14->get_selectedIndex();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(291)
			bool tmp16 = (tmp15 == (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(291)
			if ((tmp16)){
				HX_STACK_LINE(293)
				::haxe::ui::toolkit::controls::Button tmp17 = this->displayExplanationButtonObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(293)
				tmp17->set_disabled(true);
				HX_STACK_LINE(294)
				::haxe::ui::toolkit::controls::Button tmp18 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(294)
				tmp18->set_disabled(true);
				HX_STACK_LINE(295)
				::haxe::ui::toolkit::controls::Button tmp19 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(295)
				tmp19->set_disabled(true);
				HX_STACK_LINE(296)
				::haxe::ui::toolkit::controls::Button tmp20 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(296)
				tmp20->set_disabled(true);
				HX_STACK_LINE(297)
				::haxe::ui::toolkit::controls::Button tmp21 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(297)
				tmp21->set_disabled(true);
				HX_STACK_LINE(298)
				::haxe::ui::toolkit::controls::TextInput tmp22 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(298)
				tmp22->set_disabled(true);
				HX_STACK_LINE(299)
				::haxe::ui::toolkit::controls::Button tmp23 = this->resetButtonObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(299)
				tmp23->set_disabled(true);
				HX_STACK_LINE(300)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(300)
				tmp24->set_disabled(true);
				HX_STACK_LINE(301)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(301)
				tmp25->set_disabled(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayCurrentExhibitionTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayCurrentExhibitionTextObjectVoid",0x69a22db4,"UIPopupEditObjectVisitor.ResetDisplayCurrentExhibitionTextObjectVoid","UIPopupEditObjectVisitor.hx",309,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(310)
		::haxe::ui::toolkit::controls::Text tmp = this->displayCurrentExhibitionTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		if ((tmp1)){
			HX_STACK_LINE(311)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayCurrentExhibitionTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(311)
			tmp2->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayCurrentExhibitionTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayExplanationTextObjectVoid",0xfca467e5,"UIPopupEditObjectVisitor.ResetDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",314,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(315)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		if ((tmp1)){
			HX_STACK_LINE(316)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(316)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(316)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(316)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(316)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(316)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayPopularTagListSelectorObjectVoid",0x1a5d22e5,"UIPopupEditObjectVisitor.ResetDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",319,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		if ((tmp1)){
			HX_STACK_LINE(321)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(321)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(321)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(321)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(321)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(321)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayPopularTagListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplaySentenceListViewObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplaySentenceListViewObjectVoid",0xe132d98d,"UIPopupEditObjectVisitor.ResetDisplaySentenceListViewObjectVoid","UIPopupEditObjectVisitor.hx",324,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(325)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displaySentencePopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		if ((tmp1)){
			HX_STACK_LINE(326)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(326)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(326)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(326)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(326)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(326)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplaySentenceListViewObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayTargetExhibitionTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayTargetExhibitionTextObjectVoid",0x62364474,"UIPopupEditObjectVisitor.ResetDisplayTargetExhibitionTextObjectVoid","UIPopupEditObjectVisitor.hx",329,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		::haxe::ui::toolkit::controls::Text tmp = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(330)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		if ((tmp1)){
			HX_STACK_LINE(330)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(330)
			tmp2->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayTargetExhibitionTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayVisitorIndexGlobalTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayVisitorIndexGlobalTextObjectVoid",0xcb80d1bb,"UIPopupEditObjectVisitor.ResetDisplayVisitorIndexGlobalTextObjectVoid","UIPopupEditObjectVisitor.hx",332,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(333)
		::haxe::ui::toolkit::controls::Text tmp = this->displayVisitorIndexGlobalTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(333)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(333)
		if ((tmp1)){
			HX_STACK_LINE(333)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayVisitorIndexGlobalTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(333)
			tmp2->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayVisitorIndexGlobalTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayVisitorIndexLocalTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayVisitorIndexLocalTextObjectVoid",0xc0535653,"UIPopupEditObjectVisitor.ResetDisplayVisitorIndexLocalTextObjectVoid","UIPopupEditObjectVisitor.hx",335,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(336)
		::haxe::ui::toolkit::controls::Text tmp = this->displayVisitorIndexLocalTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		if ((tmp1)){
			HX_STACK_LINE(336)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayVisitorIndexLocalTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(336)
			tmp2->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayVisitorIndexLocalTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetInputNameTextInputObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetInputNameTextInputObjectVoid",0x8d94f149,"UIPopupEditObjectVisitor.ResetInputNameTextInputObjectVoid","UIPopupEditObjectVisitor.hx",338,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(339)
		::haxe::ui::toolkit::controls::TextInput tmp = this->inputNameTextInputObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(339)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(339)
		if ((tmp1)){
			HX_STACK_LINE(339)
			::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			::ObjectVisitor tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(339)
			tmp2 = false;
		}
		HX_STACK_LINE(339)
		if ((tmp2)){
			HX_STACK_LINE(339)
			::haxe::ui::toolkit::controls::TextInput tmp3 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			::ObjectVisitor tmp4 = this->selectedVisitorObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			::String tmp5 = tmp4->GetNameString();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(339)
			tmp3->set_text(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetInputNameTextInputObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetSelectCurrentExhibitionListSelectorObject( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetSelectCurrentExhibitionListSelectorObject",0x6c6ec65a,"UIPopupEditObjectVisitor.ResetSelectCurrentExhibitionListSelectorObject","UIPopupEditObjectVisitor.hx",341,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(342)
		if ((tmp1)){
			HX_STACK_LINE(342)
			::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(342)
			::ObjectVisitor tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(342)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(342)
			tmp2 = false;
		}
		HX_STACK_LINE(342)
		if ((tmp2)){
			HX_STACK_LINE(343)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp3 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(343)
			tmp3->set_selectedIndex((int)-1);
			HX_STACK_LINE(344)
			::ObjectVisitor tmp4 = this->selectedVisitorObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(344)
			::ObjectMuseum tmp5 = tmp4->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(344)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(344)
			if ((tmp6)){
				HX_STACK_LINE(345)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(345)
				::ObjectVisitor tmp8 = this->selectedVisitorObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(345)
				::ObjectMuseum tmp9 = tmp8->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(345)
				Dynamic tmp10 = tmp9->GetNameStruct();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(345)
				::String tmp11 = tmp10->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(345)
				tmp7->set_text(tmp11);
			}
			else{
				HX_STACK_LINE(348)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(348)
				tmp7->set_text(HX_HCSTRING("In Lobby","\x9b","\x95","\x24","\x05"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetSelectCurrentExhibitionListSelectorObject,(void))

Void UIPopupEditObjectVisitor_obj::ResetSelectModeListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetSelectModeListSelectorObjectVoid",0x1614a41d,"UIPopupEditObjectVisitor.ResetSelectModeListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",353,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(354)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(354)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(354)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(354)
		if ((tmp1)){
			HX_STACK_LINE(354)
			::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(354)
			::ObjectVisitor tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(354)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(354)
			tmp2 = false;
		}
		HX_STACK_LINE(354)
		if ((tmp2)){
			HX_STACK_LINE(355)
			::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(355)
			::EnumVisitorMode tmp4 = tmp3->GetVisitorModeEnum();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(355)
			bool tmp5 = (tmp4 == ::EnumVisitorMode_obj::HARDWARE_MANUAL);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(355)
			if ((tmp5)){
				HX_STACK_LINE(355)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(355)
				tmp6->set_text(HX_HCSTRING("Hardware Manual","\xbe","\xc4","\x09","\xcc"));
			}
			else{
				HX_STACK_LINE(356)
				::ObjectVisitor tmp6 = this->selectedVisitorObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(356)
				::EnumVisitorMode tmp7 = tmp6->GetVisitorModeEnum();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(356)
				bool tmp8 = (tmp7 == ::EnumVisitorMode_obj::SOFTWARE_AUTO);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(356)
				if ((tmp8)){
					HX_STACK_LINE(356)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(356)
					tmp9->set_text(HX_HCSTRING("Software Auto","\x08","\x42","\xd8","\xd2"));
				}
				else{
					HX_STACK_LINE(357)
					::ObjectVisitor tmp9 = this->selectedVisitorObject;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(357)
					::EnumVisitorMode tmp10 = tmp9->GetVisitorModeEnum();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(357)
					bool tmp11 = (tmp10 == ::EnumVisitorMode_obj::SOFTWARE_MANUAL);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(357)
					if ((tmp11)){
						HX_STACK_LINE(357)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(357)
						tmp12->set_text(HX_HCSTRING("Software Manual","\x1f","\x29","\x45","\xaf"));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetSelectModeListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetSelectVisitorListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetSelectVisitorListSelectorObjectVoid",0xa21dd194,"UIPopupEditObjectVisitor.ResetSelectVisitorListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",361,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(363)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		::haxe::ui::toolkit::data::IDataSource tmp1 = tmp->get_dataSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(363)
		tmp1->removeAll();
		HX_STACK_LINE(364)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(365)
		while((true)){
			HX_STACK_LINE(365)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(365)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(365)
			int tmp4 = tmp3->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(365)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(365)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(365)
			if ((tmp6)){
				HX_STACK_LINE(365)
				break;
			}
			HX_STACK_LINE(367)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(367)
			::haxe::ui::toolkit::data::IDataSource tmp8 = tmp7->get_dataSource();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(367)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(367)
			::ObjectVisitor tmp10 = tmp9->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(367)
			::String tmp11 = tmp10->GetNameString();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(367)
			tmp8->createFromString(tmp11,null());
			HX_STACK_LINE(368)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetSelectVisitorListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayCurrentExhibitionTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayCurrentExhibitionTextObjectVoid",0x8bc838d0,"UIPopupEditObjectVisitor.UpdateDisplayCurrentExhibitionTextObjectVoid","UIPopupEditObjectVisitor.hx",374,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		::ObjectVisitor tmp = this->selectedVisitorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		if ((tmp1)){
			HX_STACK_LINE(376)
			::ObjectVisitor tmp2 = this->selectedVisitorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(376)
			::ObjectMuseum tmp3 = tmp2->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(376)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			if ((tmp4)){
				HX_STACK_LINE(377)
				::haxe::ui::toolkit::controls::Text tmp5 = this->displayCurrentExhibitionTextObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(377)
				tmp5->set_text(HX_HCSTRING("In Lobby","\x9b","\x95","\x24","\x05"));
			}
			else{
				HX_STACK_LINE(380)
				::haxe::ui::toolkit::controls::Text tmp5 = this->displayCurrentExhibitionTextObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(380)
				::ObjectVisitor tmp6 = this->selectedVisitorObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(380)
				::ObjectMuseum tmp7 = tmp6->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(380)
				Dynamic tmp8 = tmp7->GetNameStruct();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(380)
				::String tmp9 = tmp8->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(380)
				tmp5->set_text(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayCurrentExhibitionTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayExplanationTextObjectVoid",0x6412f601,"UIPopupEditObjectVisitor.UpdateDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",384,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(385)
		if ((tmp1)){
			HX_STACK_LINE(386)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(386)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(386)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(386)
			tmp5->set_height((int)205);
			HX_STACK_LINE(387)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(387)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->popupObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(387)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(387)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(388)
			bool updateExplanationBool = false;		HX_STACK_VAR(updateExplanationBool,"updateExplanationBool");
			HX_STACK_LINE(389)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(390)
			int tmp9 = this->selectedVisitorExplanationStringArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(390)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(390)
			int tmp11 = tmp10->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(390)
			bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(390)
			if ((tmp12)){
				HX_STACK_LINE(390)
				updateExplanationBool = true;
			}
			HX_STACK_LINE(391)
			while((true)){
				HX_STACK_LINE(391)
				int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(391)
				::ObjectVisitor tmp14 = this->selectedVisitorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(391)
				int tmp15 = tmp14->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(391)
				bool tmp16 = (tmp13 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(391)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(391)
				if ((tmp17)){
					HX_STACK_LINE(391)
					break;
				}
				HX_STACK_LINE(392)
				bool tmp18 = (updateExplanationBool == true);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(392)
				if ((tmp18)){
					HX_STACK_LINE(392)
					break;
				}
				HX_STACK_LINE(393)
				::String tmp19 = this->selectedVisitorExplanationStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(393)
				::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(393)
				::String tmp21 = tmp20->GetExplanationStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(393)
				bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(393)
				if ((tmp22)){
					HX_STACK_LINE(394)
					updateExplanationBool = true;
					HX_STACK_LINE(395)
					break;
				}
				HX_STACK_LINE(397)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(399)
			bool tmp13 = (updateExplanationBool == true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(399)
			if ((tmp13)){
				HX_STACK_LINE(400)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorExplanationStringArray);
				HX_STACK_LINE(401)
				::haxe::ui::toolkit::controls::popups::Popup tmp14 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(401)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = tmp14->GetContentObject();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(401)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp16 = ::Std_obj::instance(tmp15,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(401)
				::haxe::ui::toolkit::containers::ListView tmp17 = tmp16->GetListObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(401)
				::haxe::ui::toolkit::data::IDataSource tmp18 = tmp17->get_dataSource();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(401)
				tmp18->removeAll();
				HX_STACK_LINE(402)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(403)
				while((true)){
					HX_STACK_LINE(403)
					int tmp19 = loopCounter1Int1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(403)
					::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(403)
					int tmp21 = tmp20->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(403)
					bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(403)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(403)
					if ((tmp23)){
						HX_STACK_LINE(403)
						break;
					}
					HX_STACK_LINE(404)
					::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(404)
					::String tmp25 = tmp24->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(404)
					this->selectedVisitorExplanationStringArray->push(tmp25);
					HX_STACK_LINE(405)
					::haxe::ui::toolkit::controls::popups::Popup tmp26 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(405)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = tmp26->GetContentObject();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(405)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp28 = ::Std_obj::instance(tmp27,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(405)
					::haxe::ui::toolkit::containers::ListView tmp29 = tmp28->GetListObject();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(405)
					::haxe::ui::toolkit::data::IDataSource tmp30 = tmp29->get_dataSource();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(405)
					::ObjectVisitor tmp31 = this->selectedVisitorObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(405)
					::String tmp32 = tmp31->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(405)
					tmp30->createFromString(tmp32,null());
					HX_STACK_LINE(406)
					(loopCounter1Int1)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayPopularTagListSelectorObjectVoid",0xd980d049,"UIPopupEditObjectVisitor.UpdateDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",412,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(413)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(413)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(413)
		if ((tmp1)){
			HX_STACK_LINE(414)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(414)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(414)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(414)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(414)
			tmp5->set_height((int)205);
			HX_STACK_LINE(415)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(415)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->popupObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(415)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(415)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(416)
			bool updateTagBool = false;		HX_STACK_VAR(updateTagBool,"updateTagBool");
			HX_STACK_LINE(417)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(419)
			int tmp9 = this->selectedVisitorPopularTagCountIntArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(419)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(419)
			int tmp11 = tmp10->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(419)
			bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(419)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(419)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(419)
			if ((tmp13)){
				HX_STACK_LINE(420)
				int tmp15 = this->selectedVisitorPopularTagObjectStringArray->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(420)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(420)
				::ObjectVisitor tmp17 = this->selectedVisitorObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(420)
				::ObjectVisitor tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(420)
				int tmp19 = tmp18->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(420)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(420)
				tmp14 = (tmp16 != tmp20);
			}
			else{
				HX_STACK_LINE(419)
				tmp14 = true;
			}
			HX_STACK_LINE(418)
			if ((tmp14)){
				HX_STACK_LINE(421)
				updateTagBool = true;
			}
			HX_STACK_LINE(422)
			while((true)){
				HX_STACK_LINE(422)
				int tmp15 = loopCounter1Int;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(422)
				::ObjectVisitor tmp16 = this->selectedVisitorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(422)
				int tmp17 = tmp16->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(422)
				bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(422)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(422)
				if ((tmp19)){
					HX_STACK_LINE(422)
					break;
				}
				HX_STACK_LINE(423)
				bool tmp20 = (updateTagBool == true);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(423)
				if ((tmp20)){
					HX_STACK_LINE(423)
					break;
				}
				HX_STACK_LINE(424)
				int tmp21 = this->selectedVisitorPopularTagCountIntArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(424)
				::ObjectVisitor tmp22 = this->selectedVisitorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(424)
				Dynamic tmp23 = tmp22->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(424)
				int tmp24 = tmp23->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(424)
				bool tmp25 = (tmp21 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(424)
				if ((tmp25)){
					HX_STACK_LINE(424)
					updateTagBool = true;
					HX_STACK_LINE(424)
					break;
				}
				HX_STACK_LINE(425)
				::String tmp26 = this->selectedVisitorPopularTagObjectStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(425)
				::ObjectVisitor tmp27 = this->selectedVisitorObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(425)
				Dynamic tmp28 = tmp27->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(425)
				::String tmp29 = tmp28->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(425)
				bool tmp30 = (tmp26 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(425)
				if ((tmp30)){
					HX_STACK_LINE(425)
					updateTagBool = true;
					HX_STACK_LINE(425)
					break;
				}
				HX_STACK_LINE(426)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(428)
			bool tmp15 = (updateTagBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(428)
			if ((tmp15)){
				HX_STACK_LINE(429)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagCountIntArray);
				HX_STACK_LINE(430)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagObjectStringArray);
				HX_STACK_LINE(431)
				::haxe::ui::toolkit::controls::popups::Popup tmp16 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(431)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = tmp16->GetContentObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(431)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp18 = ::Std_obj::instance(tmp17,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(431)
				::haxe::ui::toolkit::containers::ListView tmp19 = tmp18->GetListObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(431)
				::haxe::ui::toolkit::data::IDataSource tmp20 = tmp19->get_dataSource();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(431)
				tmp20->removeAll();
				HX_STACK_LINE(432)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(433)
				while((true)){
					HX_STACK_LINE(433)
					int tmp21 = loopCounter1Int1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(433)
					::ObjectVisitor tmp22 = this->selectedVisitorObject;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(433)
					int tmp23 = tmp22->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(433)
					bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(433)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(433)
					if ((tmp25)){
						HX_STACK_LINE(433)
						break;
					}
					HX_STACK_LINE(435)
					::ObjectVisitor tmp26 = this->selectedVisitorObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(435)
					Dynamic tmp27 = tmp26->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(435)
					int tmp28 = tmp27->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(435)
					this->selectedVisitorPopularTagCountIntArray->push(tmp28);
					HX_STACK_LINE(436)
					::ObjectVisitor tmp29 = this->selectedVisitorObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(436)
					Dynamic tmp30 = tmp29->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(436)
					::String tmp31 = tmp30->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(436)
					this->selectedVisitorPopularTagObjectStringArray->push(tmp31);
					HX_STACK_LINE(438)
					::haxe::ui::toolkit::controls::popups::Popup tmp32 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(438)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp33 = tmp32->GetContentObject();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(438)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp34 = ::Std_obj::instance(tmp33,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(438)
					::haxe::ui::toolkit::containers::ListView tmp35 = tmp34->GetListObject();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(438)
					::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(439)
					::ObjectVisitor tmp37 = this->selectedVisitorObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(439)
					Dynamic tmp38 = tmp37->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(439)
					int tmp39 = tmp38->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(439)
					::String tmp40 = (tmp39 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(441)
					::ObjectVisitor tmp41 = this->selectedVisitorObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(441)
					Dynamic tmp42 = tmp41->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(441)
					::String tmp43 = tmp42->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(439)
					::String tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(438)
					tmp36->createFromString(tmp44,null());
					HX_STACK_LINE(443)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplaySentenceListViewObjectVoid",0xfa80a3f1,"UIPopupEditObjectVisitor.UpdateDisplaySentenceListViewObjectVoid","UIPopupEditObjectVisitor.hx",449,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(450)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displaySentencePopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(450)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(450)
		if ((tmp1)){
			HX_STACK_LINE(451)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(451)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(451)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(451)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(451)
			tmp5->set_height((int)205);
			HX_STACK_LINE(452)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(452)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->popupObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(452)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(452)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(453)
			bool updateSentenceBool = false;		HX_STACK_VAR(updateSentenceBool,"updateSentenceBool");
			HX_STACK_LINE(454)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(455)
			int tmp9 = this->selectedVisitorSentenceStringArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(455)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(455)
			int tmp11 = tmp10->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(455)
			bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(455)
			if ((tmp12)){
				HX_STACK_LINE(455)
				updateSentenceBool = true;
			}
			HX_STACK_LINE(456)
			while((true)){
				HX_STACK_LINE(456)
				int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(456)
				::ObjectVisitor tmp14 = this->selectedVisitorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(456)
				int tmp15 = tmp14->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(456)
				bool tmp16 = (tmp13 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(456)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(456)
				if ((tmp17)){
					HX_STACK_LINE(456)
					break;
				}
				HX_STACK_LINE(457)
				bool tmp18 = (updateSentenceBool == true);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(457)
				if ((tmp18)){
					HX_STACK_LINE(457)
					break;
				}
				HX_STACK_LINE(458)
				::String tmp19 = this->selectedVisitorSentenceStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(458)
				::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(458)
				::String tmp21 = tmp20->GetSentenceStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(458)
				bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(458)
				if ((tmp22)){
					HX_STACK_LINE(459)
					updateSentenceBool = true;
					HX_STACK_LINE(460)
					break;
				}
				HX_STACK_LINE(462)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(464)
			bool tmp13 = (updateSentenceBool == true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(464)
			if ((tmp13)){
				HX_STACK_LINE(465)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorSentenceStringArray);
				HX_STACK_LINE(466)
				::haxe::ui::toolkit::controls::popups::Popup tmp14 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(466)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = tmp14->GetContentObject();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(466)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp16 = ::Std_obj::instance(tmp15,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(466)
				::haxe::ui::toolkit::containers::ListView tmp17 = tmp16->GetListObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(466)
				::haxe::ui::toolkit::data::IDataSource tmp18 = tmp17->get_dataSource();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(466)
				tmp18->removeAll();
				HX_STACK_LINE(467)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(468)
				while((true)){
					HX_STACK_LINE(468)
					int tmp19 = loopCounter1Int1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(468)
					::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(468)
					int tmp21 = tmp20->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(468)
					bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(468)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(468)
					if ((tmp23)){
						HX_STACK_LINE(468)
						break;
					}
					HX_STACK_LINE(469)
					::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(469)
					::String tmp25 = tmp24->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(469)
					this->selectedVisitorSentenceStringArray->push(tmp25);
					HX_STACK_LINE(470)
					::haxe::ui::toolkit::controls::popups::Popup tmp26 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(470)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = tmp26->GetContentObject();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(470)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp28 = ::Std_obj::instance(tmp27,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(470)
					::haxe::ui::toolkit::containers::ListView tmp29 = tmp28->GetListObject();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(470)
					::haxe::ui::toolkit::data::IDataSource tmp30 = tmp29->get_dataSource();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(470)
					::ObjectVisitor tmp31 = this->selectedVisitorObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(470)
					::String tmp32 = tmp31->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(470)
					tmp30->createFromString(tmp32,null());
					HX_STACK_LINE(471)
					(loopCounter1Int1)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplaySentenceListViewObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayTargetExhibitionTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayTargetExhibitionTextObjectVoid",0x2b4310d8,"UIPopupEditObjectVisitor.UpdateDisplayTargetExhibitionTextObjectVoid","UIPopupEditObjectVisitor.hx",477,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(478)
		::ObjectVisitor tmp = this->selectedVisitorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(478)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(478)
		if ((tmp1)){
			HX_STACK_LINE(479)
			::String targetExhibitionNameFullString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(targetExhibitionNameFullString,"targetExhibitionNameFullString");
			HX_STACK_LINE(480)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(481)
			while((true)){
				HX_STACK_LINE(481)
				int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(481)
				::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(481)
				int tmp4 = tmp3->GetExhibitionTargetObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(481)
				bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(481)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(481)
				if ((tmp6)){
					HX_STACK_LINE(481)
					break;
				}
				HX_STACK_LINE(482)
				int tmp7 = loopCounter1Int;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(482)
				::ObjectVisitor tmp8 = this->selectedVisitorObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(482)
				int tmp9 = tmp8->GetExhibitionTargetObjectArray()->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(482)
				int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(482)
				bool tmp11 = (tmp7 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(482)
				if ((tmp11)){
					HX_STACK_LINE(483)
					::String tmp12 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(483)
					::ObjectVisitor tmp13 = this->selectedVisitorObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(483)
					::ObjectMuseum tmp14 = tmp13->GetExhibitionTargetObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(483)
					Dynamic tmp15 = tmp14->GetNameStruct();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(483)
					::String tmp16 = tmp15->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(483)
					::String tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(483)
					targetExhibitionNameFullString = tmp17;
				}
				else{
					HX_STACK_LINE(486)
					::String tmp12 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(486)
					::ObjectVisitor tmp13 = this->selectedVisitorObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(486)
					::ObjectMuseum tmp14 = tmp13->GetExhibitionTargetObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(486)
					Dynamic tmp15 = tmp14->GetNameStruct();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(486)
					::String tmp16 = tmp15->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(486)
					::String tmp17 = (tmp12 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(486)
					::String tmp18 = (tmp17 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(486)
					targetExhibitionNameFullString = tmp18;
				}
				HX_STACK_LINE(488)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(490)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(490)
			::String tmp3 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(490)
			tmp2->set_text(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayTargetExhibitionTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayVisitorIndexGlobalTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayVisitorIndexGlobalTextObjectVoid",0x8aa47f1f,"UIPopupEditObjectVisitor.UpdateDisplayVisitorIndexGlobalTextObjectVoid","UIPopupEditObjectVisitor.hx",494,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(495)
		::ObjectVisitor tmp = this->selectedVisitorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		if ((tmp1)){
			HX_STACK_LINE(495)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayVisitorIndexGlobalTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(495)
			::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(495)
			int tmp4 = tmp3->GetIndexGlobalInt();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(495)
			::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(495)
			tmp2->set_text(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayVisitorIndexGlobalTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayVisitorIndexLocalTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayVisitorIndexLocalTextObjectVoid",0xe279616f,"UIPopupEditObjectVisitor.UpdateDisplayVisitorIndexLocalTextObjectVoid","UIPopupEditObjectVisitor.hx",498,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(499)
		::ObjectVisitor tmp = this->selectedVisitorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(499)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(499)
		if ((tmp1)){
			HX_STACK_LINE(499)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayVisitorIndexLocalTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(499)
			::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(499)
			int tmp4 = tmp3->GetIndexLocalInt();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(499)
			::String tmp5 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(499)
			tmp2->set_text(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayVisitorIndexLocalTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateSelectCurrentExhibitionListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateSelectCurrentExhibitionListSelectorObjectVoid",0x188cbb32,"UIPopupEditObjectVisitor.UpdateSelectCurrentExhibitionListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",502,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(503)
		::ObjectVisitor tmp = this->selectedVisitorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(503)
		if ((tmp1)){
			HX_STACK_LINE(504)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(504)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(504)
			bool tmp4 = (tmp3 != HX_HCSTRING("Software Manual","\x1f","\x29","\x45","\xaf"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(504)
			if ((tmp4)){
				HX_STACK_LINE(505)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(505)
				tmp5->set_disabled(true);
				HX_STACK_LINE(506)
				this->ResetSelectCurrentExhibitionListSelectorObject();
				HX_STACK_LINE(507)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(507)
				tmp6->set_text(HX_HCSTRING("Please change to Software Manual.","\x1a","\x7c","\x77","\x5c"));
			}
			else{
				HX_STACK_LINE(510)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(510)
				tmp5->set_disabled(false);
				HX_STACK_LINE(511)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(511)
				::haxe::ui::toolkit::data::IDataSource tmp7 = tmp6->get_dataSource();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(511)
				int tmp8 = tmp7->size();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(511)
				::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(511)
				int tmp10 = tmp9->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(511)
				bool tmp11 = (tmp8 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(511)
				if ((tmp11)){
					HX_STACK_LINE(512)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(512)
					::haxe::ui::toolkit::data::IDataSource tmp13 = tmp12->get_dataSource();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(512)
					tmp13->removeAll();
					HX_STACK_LINE(513)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(514)
					while((true)){
						HX_STACK_LINE(514)
						int tmp14 = loopCounter1Int;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(514)
						::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(514)
						int tmp16 = tmp15->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(514)
						bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(514)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(514)
						if ((tmp18)){
							HX_STACK_LINE(514)
							break;
						}
						HX_STACK_LINE(515)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(515)
						::haxe::ui::toolkit::data::IDataSource tmp20 = tmp19->get_dataSource();		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(515)
						::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(515)
						::ObjectMuseum tmp22 = tmp21->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(515)
						Dynamic tmp23 = tmp22->GetNameStruct();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(515)
						::String tmp24 = tmp23->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(515)
						tmp20->createFromString(tmp24,null());
						HX_STACK_LINE(516)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(516)
						tmp25->set_selectedIndex((int)-1);
						HX_STACK_LINE(517)
						::ObjectVisitor tmp26 = this->selectedVisitorObject;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(517)
						::ObjectMuseum tmp27 = tmp26->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(517)
						bool tmp28 = (tmp27 == null());		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(517)
						if ((tmp28)){
							HX_STACK_LINE(518)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(518)
							tmp29->set_text(HX_HCSTRING("In Lobby","\x9b","\x95","\x24","\x05"));
						}
						else{
							HX_STACK_LINE(521)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(521)
							::ObjectVisitor tmp30 = this->selectedVisitorObject;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(521)
							::ObjectMuseum tmp31 = tmp30->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(521)
							Dynamic tmp32 = tmp31->GetNameStruct();		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(521)
							::String tmp33 = tmp32->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(521)
							tmp29->set_text(tmp33);
						}
						HX_STACK_LINE(523)
						(loopCounter1Int)++;
					}
				}
				HX_STACK_LINE(526)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(526)
				::String tmp13 = tmp12->get_text();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(526)
				::ObjectVisitor tmp14 = this->selectedVisitorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(526)
				::ObjectMuseum tmp15 = tmp14->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(526)
				Dynamic tmp16 = tmp15->GetNameStruct();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(526)
				::String tmp17 = tmp16->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(526)
				bool tmp18 = (tmp13 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(526)
				if ((tmp18)){
					HX_STACK_LINE(527)
					::ObjectVisitor tmp19 = this->selectedVisitorObject;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(527)
					::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(527)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(527)
					::String tmp22 = tmp21->get_text();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(527)
					::ObjectMuseum tmp23 = ::CollectionFunction_obj::FindMuseumObject(tmp20,::EnumMuseumType_obj::EXH,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(527)
					tmp19->ChangeExhibitionCurrentVoid(tmp23);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateSelectCurrentExhibitionListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateSelectModeListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateSelectModeListSelectorObjectVoid",0x7d833239,"UIPopupEditObjectVisitor.UpdateSelectModeListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",533,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(534)
		::ObjectVisitor tmp = this->selectedVisitorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(534)
		if ((tmp1)){
			HX_STACK_LINE(535)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(535)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(535)
			bool tmp4 = (tmp3 == HX_HCSTRING("Hardware Manual","\xbe","\xc4","\x09","\xcc"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(535)
			if ((tmp4)){
				HX_STACK_LINE(535)
				::ObjectVisitor tmp5 = this->selectedVisitorObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(535)
				tmp5->SetVisitorModeEnumVoid(::EnumVisitorMode_obj::HARDWARE_MANUAL);
			}
			else{
				HX_STACK_LINE(536)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(536)
				::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(536)
				bool tmp7 = (tmp6 == HX_HCSTRING("Software Auto","\x08","\x42","\xd8","\xd2"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(536)
				if ((tmp7)){
					HX_STACK_LINE(536)
					::ObjectVisitor tmp8 = this->selectedVisitorObject;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(536)
					tmp8->SetVisitorModeEnumVoid(::EnumVisitorMode_obj::SOFTWARE_AUTO);
				}
				else{
					HX_STACK_LINE(537)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(537)
					::String tmp9 = tmp8->get_text();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(537)
					bool tmp10 = (tmp9 == HX_HCSTRING("Software Manual","\x1f","\x29","\x45","\xaf"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(537)
					if ((tmp10)){
						HX_STACK_LINE(537)
						::ObjectVisitor tmp11 = this->selectedVisitorObject;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(537)
						tmp11->SetVisitorModeEnumVoid(::EnumVisitorMode_obj::SOFTWARE_MANUAL);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateSelectModeListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateVisitorButtonObjectArrayVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateVisitorButtonObjectArrayVoid",0xe39eb218,"UIPopupEditObjectVisitor.UpdateVisitorButtonObjectArrayVoid","UIPopupEditObjectVisitor.hx",541,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(542)
		::CollectionFunction_obj::ClearArray(this->visitorButtonObjectArray);
		HX_STACK_LINE(543)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(544)
		while((true)){
			HX_STACK_LINE(544)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(544)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(544)
			int tmp2 = tmp1->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(544)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(544)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(544)
			if ((tmp4)){
				HX_STACK_LINE(544)
				break;
			}
			HX_STACK_LINE(546)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(546)
			::ObjectVisitor tmp6 = tmp5->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(546)
			::ObjectVisitorUI tmp7 = tmp6->GetVisitorUIObject();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(546)
			::haxe::ui::toolkit::controls::Button tmp8 = tmp7->GetButtonObject();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(546)
			::String tmp9 = tmp8->get_id();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(545)
			::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(545)
			::ObjectVisitor tmp11 = tmp10->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(545)
			::ObjectVisitorUI tmp12 = tmp11->GetVisitorUIObject();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(545)
			::haxe::ui::toolkit::controls::Button tmp13 = tmp12->GetButtonObject();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(545)
			tmp13->userData = tmp9;
			HX_STACK_LINE(547)
			::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(547)
			::ObjectVisitor tmp15 = tmp14->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(547)
			::ObjectVisitorUI tmp16 = tmp15->GetVisitorUIObject();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(547)
			::haxe::ui::toolkit::controls::Button tmp17 = tmp16->GetButtonObject();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(547)
			this->visitorButtonObjectArray->push(tmp17);
			HX_STACK_LINE(548)
			::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(548)
			::ObjectVisitor tmp19 = tmp18->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(548)
			::ObjectVisitorUI tmp20 = tmp19->GetVisitorUIObject();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(548)
			::haxe::ui::toolkit::controls::Button tmp21 = tmp20->GetButtonObject();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(548)
			::haxe::ui::toolkit::controls::Button tmp22 = this->mainButtonObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(548)
			Dynamic tmp23 = tmp22->onClick;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(548)
			tmp21->set_onClick(tmp23);
			HX_STACK_LINE(549)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateVisitorButtonObjectArrayVoid,(void))


UIPopupEditObjectVisitor_obj::UIPopupEditObjectVisitor_obj()
{
}

void UIPopupEditObjectVisitor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupEditObjectVisitor);
	HX_MARK_MEMBER_NAME(changeAllHardwareManualButtonObject,"changeAllHardwareManualButtonObject");
	HX_MARK_MEMBER_NAME(changeAllSoftwareAutoButtonObject,"changeAllSoftwareAutoButtonObject");
	HX_MARK_MEMBER_NAME(changeAllSoftwareManualButtonObject,"changeAllSoftwareManualButtonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(displayCurrentExhibitionTextObject,"displayCurrentExhibitionTextObject");
	HX_MARK_MEMBER_NAME(displayExplanationButtonObject,"displayExplanationButtonObject");
	HX_MARK_MEMBER_NAME(displayExplanationPopupObject,"displayExplanationPopupObject");
	HX_MARK_MEMBER_NAME(displayPopularTagButtonObject,"displayPopularTagButtonObject");
	HX_MARK_MEMBER_NAME(displayPopularTagPopupObject,"displayPopularTagPopupObject");
	HX_MARK_MEMBER_NAME(displayPreviousVisitorTextObject,"displayPreviousVisitorTextObject");
	HX_MARK_MEMBER_NAME(displaySentenceButtonObject,"displaySentenceButtonObject");
	HX_MARK_MEMBER_NAME(displaySentencePopupObject,"displaySentencePopupObject");
	HX_MARK_MEMBER_NAME(displayTargetExhibitionTextObject,"displayTargetExhibitionTextObject");
	HX_MARK_MEMBER_NAME(displayVisitorIndexGlobalTextObject,"displayVisitorIndexGlobalTextObject");
	HX_MARK_MEMBER_NAME(displayVisitorIndexLocalTextObject,"displayVisitorIndexLocalTextObject");
	HX_MARK_MEMBER_NAME(gridObject,"gridObject");
	HX_MARK_MEMBER_NAME(inputNameTextInputObject,"inputNameTextInputObject");
	HX_MARK_MEMBER_NAME(mainButtonObject,"mainButtonObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(resetAllButtonObject,"resetAllButtonObject");
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
	HX_MARK_MEMBER_NAME(visitorButtonObjectArray,"visitorButtonObjectArray");
	HX_MARK_MEMBER_NAME(visitorModePrevString,"visitorModePrevString");
	HX_MARK_END_CLASS();
}

void UIPopupEditObjectVisitor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(changeAllHardwareManualButtonObject,"changeAllHardwareManualButtonObject");
	HX_VISIT_MEMBER_NAME(changeAllSoftwareAutoButtonObject,"changeAllSoftwareAutoButtonObject");
	HX_VISIT_MEMBER_NAME(changeAllSoftwareManualButtonObject,"changeAllSoftwareManualButtonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(displayCurrentExhibitionTextObject,"displayCurrentExhibitionTextObject");
	HX_VISIT_MEMBER_NAME(displayExplanationButtonObject,"displayExplanationButtonObject");
	HX_VISIT_MEMBER_NAME(displayExplanationPopupObject,"displayExplanationPopupObject");
	HX_VISIT_MEMBER_NAME(displayPopularTagButtonObject,"displayPopularTagButtonObject");
	HX_VISIT_MEMBER_NAME(displayPopularTagPopupObject,"displayPopularTagPopupObject");
	HX_VISIT_MEMBER_NAME(displayPreviousVisitorTextObject,"displayPreviousVisitorTextObject");
	HX_VISIT_MEMBER_NAME(displaySentenceButtonObject,"displaySentenceButtonObject");
	HX_VISIT_MEMBER_NAME(displaySentencePopupObject,"displaySentencePopupObject");
	HX_VISIT_MEMBER_NAME(displayTargetExhibitionTextObject,"displayTargetExhibitionTextObject");
	HX_VISIT_MEMBER_NAME(displayVisitorIndexGlobalTextObject,"displayVisitorIndexGlobalTextObject");
	HX_VISIT_MEMBER_NAME(displayVisitorIndexLocalTextObject,"displayVisitorIndexLocalTextObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(inputNameTextInputObject,"inputNameTextInputObject");
	HX_VISIT_MEMBER_NAME(mainButtonObject,"mainButtonObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(resetAllButtonObject,"resetAllButtonObject");
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
	HX_VISIT_MEMBER_NAME(visitorButtonObjectArray,"visitorButtonObjectArray");
	HX_VISIT_MEMBER_NAME(visitorModePrevString,"visitorModePrevString");
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
	case 20:
		if (HX_FIELD_EQ(inName,"resetAllButtonObject") ) { return resetAllButtonObject; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"selectedVisitorObject") ) { return selectedVisitorObject; }
		if (HX_FIELD_EQ(inName,"visitorModePrevString") ) { return visitorModePrevString; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"inputNameTextInputObject") ) { return inputNameTextInputObject; }
		if (HX_FIELD_EQ(inName,"visitorButtonObjectArray") ) { return visitorButtonObjectArray; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"displaySentencePopupObject") ) { return displaySentencePopupObject; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"displaySentenceButtonObject") ) { return displaySentenceButtonObject; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"displayPopularTagPopupObject") ) { return displayPopularTagPopupObject; }
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { return selectModeListSelectorObject; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"displayExplanationPopupObject") ) { return displayExplanationPopupObject; }
		if (HX_FIELD_EQ(inName,"displayPopularTagButtonObject") ) { return displayPopularTagButtonObject; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"displayExplanationButtonObject") ) { return displayExplanationButtonObject; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorObject") ) { return selectVisitorListSelectorObject; }
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorString") ) { return selectVisitorListSelectorString; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"displayPreviousVisitorTextObject") ) { return displayPreviousVisitorTextObject; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"changeAllSoftwareAutoButtonObject") ) { return changeAllSoftwareAutoButtonObject; }
		if (HX_FIELD_EQ(inName,"displayTargetExhibitionTextObject") ) { return displayTargetExhibitionTextObject; }
		if (HX_FIELD_EQ(inName,"ResetInputNameTextInputObjectVoid") ) { return ResetInputNameTextInputObjectVoid_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"displayCurrentExhibitionTextObject") ) { return displayCurrentExhibitionTextObject; }
		if (HX_FIELD_EQ(inName,"displayVisitorIndexLocalTextObject") ) { return displayVisitorIndexLocalTextObject; }
		if (HX_FIELD_EQ(inName,"selectedVisitorSentenceStringArray") ) { return selectedVisitorSentenceStringArray; }
		if (HX_FIELD_EQ(inName,"UpdateVisitorButtonObjectArrayVoid") ) { return UpdateVisitorButtonObjectArrayVoid_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"changeAllHardwareManualButtonObject") ) { return changeAllHardwareManualButtonObject; }
		if (HX_FIELD_EQ(inName,"changeAllSoftwareManualButtonObject") ) { return changeAllSoftwareManualButtonObject; }
		if (HX_FIELD_EQ(inName,"displayVisitorIndexGlobalTextObject") ) { return displayVisitorIndexGlobalTextObject; }
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorPrevString") ) { return selectVisitorListSelectorPrevString; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"selectedVisitorExplanationStringArray") ) { return selectedVisitorExplanationStringArray; }
		if (HX_FIELD_EQ(inName,"ResetDisplayExplanationTextObjectVoid") ) { return ResetDisplayExplanationTextObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"ResetSelectModeListSelectorObjectVoid") ) { return ResetSelectModeListSelectorObjectVoid_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"selectedVisitorPopularTagCountIntArray") ) { return selectedVisitorPopularTagCountIntArray; }
		if (HX_FIELD_EQ(inName,"ResetDisplaySentenceListViewObjectVoid") ) { return ResetDisplaySentenceListViewObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateDisplayExplanationTextObjectVoid") ) { return UpdateDisplayExplanationTextObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateSelectModeListSelectorObjectVoid") ) { return UpdateSelectModeListSelectorObjectVoid_dyn(); }
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
		if (HX_FIELD_EQ(inName,"ResetDisplayTargetExhibitionTextObjectVoid") ) { return ResetDisplayTargetExhibitionTextObjectVoid_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"ResetDisplayCurrentExhibitionTextObjectVoid") ) { return ResetDisplayCurrentExhibitionTextObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"ResetDisplayVisitorIndexLocalTextObjectVoid") ) { return ResetDisplayVisitorIndexLocalTextObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateDisplayTargetExhibitionTextObjectVoid") ) { return UpdateDisplayTargetExhibitionTextObjectVoid_dyn(); }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"ResetDisplayPopularTagListSelectorObjectVoid") ) { return ResetDisplayPopularTagListSelectorObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"ResetDisplayVisitorIndexGlobalTextObjectVoid") ) { return ResetDisplayVisitorIndexGlobalTextObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateDisplayCurrentExhibitionTextObjectVoid") ) { return UpdateDisplayCurrentExhibitionTextObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateDisplayVisitorIndexLocalTextObjectVoid") ) { return UpdateDisplayVisitorIndexLocalTextObjectVoid_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"UpdateDisplayPopularTagListSelectorObjectVoid") ) { return UpdateDisplayPopularTagListSelectorObjectVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateDisplayVisitorIndexGlobalTextObjectVoid") ) { return UpdateDisplayVisitorIndexGlobalTextObjectVoid_dyn(); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"ResetSelectCurrentExhibitionListSelectorObject") ) { return ResetSelectCurrentExhibitionListSelectorObject_dyn(); }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"UpdateSelectCurrentExhibitionListSelectorObjectVoid") ) { return UpdateSelectCurrentExhibitionListSelectorObjectVoid_dyn(); }
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
	case 20:
		if (HX_FIELD_EQ(inName,"resetAllButtonObject") ) { resetAllButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"selectedVisitorObject") ) { selectedVisitorObject=inValue.Cast< ::ObjectVisitor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitorModePrevString") ) { visitorModePrevString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"inputNameTextInputObject") ) { inputNameTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitorButtonObjectArray") ) { visitorButtonObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"displaySentencePopupObject") ) { displaySentencePopupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"displaySentenceButtonObject") ) { displaySentenceButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"displayPopularTagPopupObject") ) { displayPopularTagPopupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { selectModeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"displayExplanationPopupObject") ) { displayExplanationPopupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayPopularTagButtonObject") ) { displayPopularTagButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"displayExplanationButtonObject") ) { displayExplanationButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorObject") ) { selectVisitorListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorString") ) { selectVisitorListSelectorString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"displayPreviousVisitorTextObject") ) { displayPreviousVisitorTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"changeAllSoftwareAutoButtonObject") ) { changeAllSoftwareAutoButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayTargetExhibitionTextObject") ) { displayTargetExhibitionTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"displayCurrentExhibitionTextObject") ) { displayCurrentExhibitionTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayVisitorIndexLocalTextObject") ) { displayVisitorIndexLocalTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedVisitorSentenceStringArray") ) { selectedVisitorSentenceStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"changeAllHardwareManualButtonObject") ) { changeAllHardwareManualButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeAllSoftwareManualButtonObject") ) { changeAllSoftwareManualButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayVisitorIndexGlobalTextObject") ) { displayVisitorIndexGlobalTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
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

void UIPopupEditObjectVisitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("changeAllHardwareManualButtonObject","\x70","\x4d","\xfa","\xb4"));
	outFields->push(HX_HCSTRING("changeAllSoftwareAutoButtonObject","\x58","\x8f","\x6e","\xf9"));
	outFields->push(HX_HCSTRING("changeAllSoftwareManualButtonObject","\xaf","\xf2","\xf9","\xa5"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("displayCurrentExhibitionTextObject","\x32","\xac","\x43","\xbe"));
	outFields->push(HX_HCSTRING("displayExplanationButtonObject","\x28","\xe3","\x7d","\x05"));
	outFields->push(HX_HCSTRING("displayExplanationPopupObject","\x14","\x01","\x34","\x22"));
	outFields->push(HX_HCSTRING("displayPopularTagButtonObject","\x94","\x2e","\x59","\xb1"));
	outFields->push(HX_HCSTRING("displayPopularTagPopupObject","\x28","\x07","\x1e","\x43"));
	outFields->push(HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14"));
	outFields->push(HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24"));
	outFields->push(HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5"));
	outFields->push(HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72"));
	outFields->push(HX_HCSTRING("displayVisitorIndexGlobalTextObject","\x95","\x18","\xd7","\x4a"));
	outFields->push(HX_HCSTRING("displayVisitorIndexLocalTextObject","\x51","\x59","\x2e","\xac"));
	outFields->push(HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"));
	outFields->push(HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac"));
	outFields->push(HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("resetAllButtonObject","\x03","\x68","\x2a","\xad"));
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
	outFields->push(HX_HCSTRING("visitorButtonObjectArray","\xfa","\x99","\x38","\x4a"));
	outFields->push(HX_HCSTRING("visitorModePrevString","\xb5","\x31","\x06","\x1c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,changeAllHardwareManualButtonObject),HX_HCSTRING("changeAllHardwareManualButtonObject","\x70","\x4d","\xfa","\xb4")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,changeAllSoftwareAutoButtonObject),HX_HCSTRING("changeAllSoftwareAutoButtonObject","\x58","\x8f","\x6e","\xf9")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,changeAllSoftwareManualButtonObject),HX_HCSTRING("changeAllSoftwareManualButtonObject","\xaf","\xf2","\xf9","\xa5")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayCurrentExhibitionTextObject),HX_HCSTRING("displayCurrentExhibitionTextObject","\x32","\xac","\x43","\xbe")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayExplanationButtonObject),HX_HCSTRING("displayExplanationButtonObject","\x28","\xe3","\x7d","\x05")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayExplanationPopupObject),HX_HCSTRING("displayExplanationPopupObject","\x14","\x01","\x34","\x22")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayPopularTagButtonObject),HX_HCSTRING("displayPopularTagButtonObject","\x94","\x2e","\x59","\xb1")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayPopularTagPopupObject),HX_HCSTRING("displayPopularTagPopupObject","\x28","\x07","\x1e","\x43")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayPreviousVisitorTextObject),HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displaySentenceButtonObject),HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displaySentencePopupObject),HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayTargetExhibitionTextObject),HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayVisitorIndexGlobalTextObject),HX_HCSTRING("displayVisitorIndexGlobalTextObject","\x95","\x18","\xd7","\x4a")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayVisitorIndexLocalTextObject),HX_HCSTRING("displayVisitorIndexLocalTextObject","\x51","\x59","\x2e","\xac")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,inputNameTextInputObject),HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,mainButtonObject),HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,resetAllButtonObject),HX_HCSTRING("resetAllButtonObject","\x03","\x68","\x2a","\xad")},
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
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,visitorButtonObjectArray),HX_HCSTRING("visitorButtonObjectArray","\xfa","\x99","\x38","\x4a")},
	{hx::fsString,(int)offsetof(UIPopupEditObjectVisitor_obj,visitorModePrevString),HX_HCSTRING("visitorModePrevString","\xb5","\x31","\x06","\x1c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("changeAllHardwareManualButtonObject","\x70","\x4d","\xfa","\xb4"),
	HX_HCSTRING("changeAllSoftwareAutoButtonObject","\x58","\x8f","\x6e","\xf9"),
	HX_HCSTRING("changeAllSoftwareManualButtonObject","\xaf","\xf2","\xf9","\xa5"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("displayCurrentExhibitionTextObject","\x32","\xac","\x43","\xbe"),
	HX_HCSTRING("displayExplanationButtonObject","\x28","\xe3","\x7d","\x05"),
	HX_HCSTRING("displayExplanationPopupObject","\x14","\x01","\x34","\x22"),
	HX_HCSTRING("displayPopularTagButtonObject","\x94","\x2e","\x59","\xb1"),
	HX_HCSTRING("displayPopularTagPopupObject","\x28","\x07","\x1e","\x43"),
	HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14"),
	HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24"),
	HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5"),
	HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72"),
	HX_HCSTRING("displayVisitorIndexGlobalTextObject","\x95","\x18","\xd7","\x4a"),
	HX_HCSTRING("displayVisitorIndexLocalTextObject","\x51","\x59","\x2e","\xac"),
	HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"),
	HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac"),
	HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("resetAllButtonObject","\x03","\x68","\x2a","\xad"),
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
	HX_HCSTRING("visitorButtonObjectArray","\xfa","\x99","\x38","\x4a"),
	HX_HCSTRING("visitorModePrevString","\xb5","\x31","\x06","\x1c"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	HX_HCSTRING("ResetDisplayCurrentExhibitionTextObjectVoid","\xb5","\x53","\xe1","\xa9"),
	HX_HCSTRING("ResetDisplayExplanationTextObjectVoid","\x26","\x27","\xd7","\xf8"),
	HX_HCSTRING("ResetDisplayPopularTagListSelectorObjectVoid","\xc4","\x3d","\x5f","\x11"),
	HX_HCSTRING("ResetDisplaySentenceListViewObjectVoid","\x2c","\x73","\x67","\x91"),
	HX_HCSTRING("ResetDisplayTargetExhibitionTextObjectVoid","\x93","\x99","\xe1","\x17"),
	HX_HCSTRING("ResetDisplayVisitorIndexGlobalTextObjectVoid","\x9a","\xec","\x82","\xc2"),
	HX_HCSTRING("ResetDisplayVisitorIndexLocalTextObjectVoid","\x54","\x7c","\x92","\x00"),
	HX_HCSTRING("ResetInputNameTextInputObjectVoid","\x0a","\xbc","\xc4","\xb4"),
	HX_HCSTRING("ResetSelectCurrentExhibitionListSelectorObject","\xf9","\x96","\x54","\xbc"),
	HX_HCSTRING("ResetSelectModeListSelectorObjectVoid","\x5e","\x63","\x47","\x12"),
	HX_HCSTRING("ResetSelectVisitorListSelectorObjectVoid","\xf3","\x50","\xe3","\x3b"),
	HX_HCSTRING("UpdateDisplayCurrentExhibitionTextObjectVoid","\xaf","\x53","\xca","\x82"),
	HX_HCSTRING("UpdateDisplayExplanationTextObjectVoid","\xa0","\x8f","\x47","\x14"),
	HX_HCSTRING("UpdateDisplayPopularTagListSelectorObjectVoid","\x8a","\x38","\x56","\x04"),
	HX_HCSTRING("UpdateDisplaySentenceListViewObjectVoid","\x72","\x75","\x52","\x78"),
	HX_HCSTRING("UpdateDisplayTargetExhibitionTextObjectVoid","\xd9","\x36","\x82","\x6b"),
	HX_HCSTRING("UpdateDisplayVisitorIndexGlobalTextObjectVoid","\x60","\xe7","\x79","\xb5"),
	HX_HCSTRING("UpdateDisplayVisitorIndexLocalTextObjectVoid","\x4e","\x7c","\x7b","\xd9"),
	HX_HCSTRING("UpdateSelectCurrentExhibitionListSelectorObjectVoid","\x33","\x4a","\x53","\xd8"),
	HX_HCSTRING("UpdateSelectModeListSelectorObjectVoid","\xd8","\xcb","\xb7","\x2d"),
	HX_HCSTRING("UpdateVisitorButtonObjectArrayVoid","\x37","\x50","\x40","\x06"),
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
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
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

