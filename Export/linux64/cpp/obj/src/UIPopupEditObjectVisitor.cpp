#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectVisitor
#include <UIPopupEditObjectVisitor.h>
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
	HX_STACK_LINE(47)
	this->selectVisitorListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(46)
	this->selectVisitorListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(45)
	this->selectVisitorListSelectorObject = null();
	HX_STACK_LINE(44)
	this->selectModeListSelectorObject = null();
	HX_STACK_LINE(43)
	this->selectedVisitorSentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(42)
	this->selectedVisitorPopularTagObjectStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(41)
	this->selectedVisitorPopularTagCountIntArray = Array_obj< int >::__new();
	HX_STACK_LINE(40)
	this->selectedVisitorObject = null();
	HX_STACK_LINE(39)
	this->selectedVisitorExplanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(38)
	this->selectCurrentExhibitionListSelectorObject = null();
	HX_STACK_LINE(37)
	this->resetButtonObject = null();
	HX_STACK_LINE(36)
	this->popupObject = null();
	HX_STACK_LINE(35)
	this->mainButtonObject = null();
	HX_STACK_LINE(34)
	this->inputNameTextInputObject = null();
	HX_STACK_LINE(33)
	this->gridObject = null();
	HX_STACK_LINE(32)
	this->displayVisitorIndexTextObject = null();
	HX_STACK_LINE(31)
	this->displayTargetExhibitionTextObject = null();
	HX_STACK_LINE(30)
	this->displaySentencePopupObject = null();
	HX_STACK_LINE(29)
	this->displaySentenceButtonObject = null();
	HX_STACK_LINE(28)
	this->displayPreviousVisitorTextObject = null();
	HX_STACK_LINE(27)
	this->displayPopularTagPopupObject = null();
	HX_STACK_LINE(26)
	this->displayPopularTagButtonObject = null();
	HX_STACK_LINE(25)
	this->displayExplanationPopupObject = null();
	HX_STACK_LINE(24)
	this->displayExplanationButtonObject = null();
	HX_STACK_LINE(23)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(49)
	::UIPopupEditObjectVisitor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(55)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditVisitorObjectButton","\x9d","\x96","\xbf","\x99"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	this->mainButtonObject = tmp;
	HX_STACK_LINE(56)
	::haxe::ui::toolkit::controls::Button tmp1 = this->mainButtonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectVisitor,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectVisitor.hx",56,0x96ef98f1)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(58)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(59)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(60)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectVisitor.xml","\x9b","\xe8","\x07","\x44"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectVisitor.hx",63,0x96ef98f1)
				HX_STACK_ARG(_button,"_button")
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(63)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Visitor","\x98","\xbf","\x3a","\x1a"),tmp5, Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			_g->popupObject = tmp6;
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::Button tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplayExplanation","\xbb","\xea","\xa5","\x19"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			_g->displayExplanationButtonObject = tmp8;
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::Button tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplayPopularTag","\x9f","\xff","\x37","\xc2"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			_g->displayPopularTagButtonObject = tmp10;
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::Text tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPreviousVisitor","\x87","\x41","\x94","\x69"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(71)
			_g->displayPreviousVisitorTextObject = tmp12;
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::Button tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplaySentence","\x01","\x12","\x5e","\xee"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			_g->displaySentenceButtonObject = tmp14;
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::Text tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayTargetExhibition","\xb0","\x47","\x47","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(73)
			_g->displayTargetExhibitionTextObject = tmp16;
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::Text tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayVisitorIndex","\x34","\xb1","\xaf","\x60"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(74)
			_g->displayVisitorIndexTextObject = tmp18;
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::containers::Grid tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_Grid","\xb8","\xa7","\x8a","\x05"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(75)
			_g->gridObject = tmp20;
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp21 = _g->popupObject->get_content();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::TextInput tmp22 = tmp21->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_InputName","\x43","\xb1","\xb6","\x7f"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(76)
			_g->inputNameTextInputObject = tmp22;
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp23 = _g->popupObject->get_content();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::Button tmp24 = tmp23->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonReset","\xcb","\x1b","\x7e","\x01"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(77)
			_g->resetButtonObject = tmp24;
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp25 = _g->popupObject->get_content();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = tmp25->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectCurrentExhibition","\x9a","\x81","\xb0","\x5a"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(78)
			_g->selectCurrentExhibitionListSelectorObject = tmp26;
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = _g->popupObject->get_content();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = tmp27->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectMode","\xf1","\x5a","\x61","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(79)
			_g->selectModeListSelectorObject = tmp28;
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp29 = _g->popupObject->get_content();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = tmp29->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectVisitor","\xe0","\x48","\xdc","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(80)
			_g->selectVisitorListSelectorObject = tmp30;
			HX_STACK_LINE(82)
			_g->selectCurrentExhibitionListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(83)
			_g->selectModeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(84)
			_g->selectVisitorListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","UIPopupEditObjectVisitor.hx",86,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(86)
					Dynamic tmp31 = hx::SourceInfo(HX_HCSTRING("UIPopupEditObjectVisitor.hx","\xf1","\x98","\xef","\x96"),86,HX_HCSTRING("UIPopupEditObjectVisitor","\xed","\x1b","\x5e","\x0d"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(86)
					::haxe::Log_obj::trace(HX_HCSTRING("TEST.","\x9c","\xb7","\x83","\x8b"),tmp31);
					HX_STACK_LINE(88)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(89)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(91)
					::haxe::ui::toolkit::core::PopupManager tmp32 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(91)
					int tmp33 = buttonControlInt1;		HX_STACK_VAR(tmp33,"tmp33");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",91,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(91)
					::haxe::ui::toolkit::controls::popups::Popup tmp34 = tmp32->showList(_g->selectedVisitorObject->GetExplanationStringArray(),null(),HX_HCSTRING("Display Explanation","\x3b","\xa2","\x4c","\xd6"),tmp33, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(91)
					_g->displayExplanationPopupObject = tmp34;
					HX_STACK_LINE(92)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp35 = _g->displayExplanationPopupObject->GetContentObject();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(92)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp36 = ::Std_obj::instance(tmp35,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(92)
					::haxe::ui::toolkit::containers::ListView tmp37 = tmp36->GetListObject();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(92)
					tmp37->set_height((int)205);
					HX_STACK_LINE(93)
					Float tmp38 = _g->popupObject->get_y();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(93)
					_g->displayExplanationPopupObject->set_y(tmp38);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(86)
			_g->displayExplanationButtonObject->set_onClick( Dynamic(new _Function_2_2(_g)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","UIPopupEditObjectVisitor.hx",96,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(98)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(99)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(101)
					Array< ::String > displayStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(displayStringArray,"displayStringArray");
					HX_STACK_LINE(102)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(103)
					while((true)){
						HX_STACK_LINE(103)
						int tmp31 = loopCounter1Int;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(103)
						int tmp32 = _g->selectedVisitorObject->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(103)
						bool tmp33 = (tmp31 < tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(103)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(103)
						if ((tmp34)){
							HX_STACK_LINE(103)
							break;
						}
						HX_STACK_LINE(105)
						Dynamic tmp35 = _g->selectedVisitorObject->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(105)
						int tmp36 = tmp35->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(105)
						::String tmp37 = (tmp36 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(107)
						Dynamic tmp38 = _g->selectedVisitorObject->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(107)
						::String tmp39 = tmp38->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(105)
						::String tmp40 = (tmp37 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(105)
						::String displayString = tmp40;		HX_STACK_VAR(displayString,"displayString");
						HX_STACK_LINE(108)
						::String tmp41 = displayString;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(108)
						displayStringArray->push(tmp41);
						HX_STACK_LINE(109)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(113)
					::haxe::ui::toolkit::core::PopupManager tmp31 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(113)
					int tmp32 = buttonControlInt1;		HX_STACK_VAR(tmp32,"tmp32");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",113,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(113)
					::haxe::ui::toolkit::controls::popups::Popup tmp33 = tmp31->showList(displayStringArray,null(),HX_HCSTRING("Display Popular Tag","\x95","\x68","\x05","\xc9"),tmp32, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(113)
					_g->displayPopularTagPopupObject = tmp33;
					HX_STACK_LINE(114)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp34 = _g->displayPopularTagPopupObject->GetContentObject();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(114)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp35 = ::Std_obj::instance(tmp34,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(114)
					::haxe::ui::toolkit::containers::ListView tmp36 = tmp35->GetListObject();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(114)
					tmp36->set_height((int)205);
					HX_STACK_LINE(115)
					Float tmp37 = _g->popupObject->get_y();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(115)
					_g->displayPopularTagPopupObject->set_y(tmp37);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(96)
			_g->displayPopularTagButtonObject->set_onClick( Dynamic(new _Function_2_3(_g)));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_4,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","UIPopupEditObjectVisitor.hx",118,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(120)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(121)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(123)
					::haxe::ui::toolkit::core::PopupManager tmp31 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(123)
					int tmp32 = buttonControlInt1;		HX_STACK_VAR(tmp32,"tmp32");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",123,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(123)
					::haxe::ui::toolkit::controls::popups::Popup tmp33 = tmp31->showList(_g->selectedVisitorObject->GetSentenceStringArray(),null(),HX_HCSTRING("Display Sentence","\x81","\xaa","\xa1","\xca"),tmp32, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(123)
					_g->displaySentencePopupObject = tmp33;
					HX_STACK_LINE(124)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp34 = _g->displaySentencePopupObject->GetContentObject();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(124)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp35 = ::Std_obj::instance(tmp34,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(124)
					::haxe::ui::toolkit::containers::ListView tmp36 = tmp35->GetListObject();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(124)
					tmp36->set_height((int)205);
					HX_STACK_LINE(125)
					Float tmp37 = _g->popupObject->get_y();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(125)
					_g->displaySentencePopupObject->set_y(tmp37);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(118)
			_g->displaySentenceButtonObject->set_onClick( Dynamic(new _Function_2_4(_g)));
			HX_STACK_LINE(128)
			bool tmp31 = (_g->selectedVisitorObject != null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(128)
			if ((tmp31)){
				HX_STACK_LINE(129)
				::String targetExhibitionNameFullString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(targetExhibitionNameFullString,"targetExhibitionNameFullString");
				HX_STACK_LINE(130)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(131)
				while((true)){
					HX_STACK_LINE(131)
					int tmp32 = loopCounter1Int;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(131)
					int tmp33 = _g->selectedVisitorObject->GetExhibitionTargetObjectArray()->length;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(131)
					bool tmp34 = (tmp32 < tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(131)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(131)
					if ((tmp35)){
						HX_STACK_LINE(131)
						break;
					}
					HX_STACK_LINE(132)
					int tmp36 = loopCounter1Int;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(132)
					int tmp37 = _g->selectedVisitorObject->GetExhibitionTargetObjectArray()->length;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(132)
					int tmp38 = (tmp37 - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(132)
					bool tmp39 = (tmp36 == tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(132)
					if ((tmp39)){
						HX_STACK_LINE(133)
						::String tmp40 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(133)
						::ObjectMuseum tmp41 = _g->selectedVisitorObject->GetExhibitionTargetObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(133)
						Dynamic tmp42 = tmp41->GetNameStruct();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(133)
						::String tmp43 = tmp42->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(133)
						::String tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(133)
						targetExhibitionNameFullString = tmp44;
					}
					else{
						HX_STACK_LINE(136)
						::String tmp40 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(136)
						::ObjectMuseum tmp41 = _g->selectedVisitorObject->GetExhibitionTargetObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(136)
						Dynamic tmp42 = tmp41->GetNameStruct();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(136)
						::String tmp43 = tmp42->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(136)
						::String tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(136)
						::String tmp45 = (tmp44 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(136)
						targetExhibitionNameFullString = tmp45;
					}
					HX_STACK_LINE(138)
					(loopCounter1Int)++;
				}
				HX_STACK_LINE(140)
				::String tmp32 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(140)
				_g->displayTargetExhibitionTextObject->set_text(tmp32);
			}
			HX_STACK_LINE(143)
			_g->ResetDisplayExplanationTextObjectVoid();
			HX_STACK_LINE(144)
			_g->ResetDisplayPopularTagListSelectorObjectVoid();
			HX_STACK_LINE(145)
			_g->ResetDisplaySentenceListViewObjectVoid();
			HX_STACK_LINE(146)
			_g->ResetDisplayTargetExhibitionTextObjectVoid();
			HX_STACK_LINE(148)
			_g->ResetSelectVisitorListSelectorObjectVoid();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(56)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateVoid",0x87db38fe,"UIPopupEditObjectVisitor.UpdateVoid","UIPopupEditObjectVisitor.hx",154,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		if ((tmp1)){
			HX_STACK_LINE(158)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			this->selectVisitorListSelectorString = tmp3;
			HX_STACK_LINE(159)
			::String tmp4 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			::String tmp5 = this->selectVisitorListSelectorPrevString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			if ((tmp6)){
				HX_STACK_LINE(161)
				this->ResetDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(162)
				this->ResetDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(163)
				this->ResetDisplaySentenceListViewObjectVoid();
				HX_STACK_LINE(164)
				this->ResetDisplayTargetExhibitionTextObjectVoid();
				HX_STACK_LINE(166)
				this->ResetSelectVisitorListSelectorObjectVoid();
				HX_STACK_LINE(168)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(168)
				::String tmp8 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(168)
				::ObjectVisitor tmp9 = ::CollectionFunction_obj::FindVisitorObject(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(168)
				this->selectedVisitorObject = tmp9;
				HX_STACK_LINE(169)
				::String tmp10 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(169)
				this->selectVisitorListSelectorPrevString = tmp10;
			}
			HX_STACK_LINE(173)
			::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(173)
			if ((tmp8)){
				HX_STACK_LINE(175)
				::haxe::ui::toolkit::controls::Button tmp9 = this->displayExplanationButtonObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(175)
				tmp9->set_disabled(false);
				HX_STACK_LINE(176)
				::haxe::ui::toolkit::controls::Button tmp10 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(176)
				tmp10->set_disabled(false);
				HX_STACK_LINE(177)
				::haxe::ui::toolkit::controls::Button tmp11 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(177)
				tmp11->set_disabled(false);
				HX_STACK_LINE(178)
				::haxe::ui::toolkit::controls::Button tmp12 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(178)
				tmp12->set_disabled(false);
				HX_STACK_LINE(179)
				::haxe::ui::toolkit::controls::Button tmp13 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(179)
				tmp13->set_disabled(false);
				HX_STACK_LINE(180)
				::haxe::ui::toolkit::controls::TextInput tmp14 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(180)
				tmp14->set_disabled(false);
				HX_STACK_LINE(181)
				::haxe::ui::toolkit::controls::Button tmp15 = this->resetButtonObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(181)
				tmp15->set_disabled(false);
				HX_STACK_LINE(182)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(182)
				tmp16->set_disabled(false);
				HX_STACK_LINE(183)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(183)
				tmp17->set_disabled(false);
				HX_STACK_LINE(185)
				this->UpdateDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(186)
				this->UpdateDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(187)
				this->UpdateDisplaySentenceListViewObjectVoid();
				HX_STACK_LINE(188)
				this->UpdateDisplayTargetExhibitionTextObjectVoid();
			}
			HX_STACK_LINE(192)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(192)
			int tmp10 = tmp9->get_selectedIndex();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(192)
			bool tmp11 = (tmp10 == (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(192)
			if ((tmp11)){
				HX_STACK_LINE(194)
				::haxe::ui::toolkit::controls::Button tmp12 = this->displayExplanationButtonObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				tmp12->set_disabled(true);
				HX_STACK_LINE(195)
				::haxe::ui::toolkit::controls::Button tmp13 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(195)
				tmp13->set_disabled(true);
				HX_STACK_LINE(196)
				::haxe::ui::toolkit::controls::Button tmp14 = this->displayPopularTagButtonObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(196)
				tmp14->set_disabled(true);
				HX_STACK_LINE(197)
				::haxe::ui::toolkit::controls::Button tmp15 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(197)
				tmp15->set_disabled(true);
				HX_STACK_LINE(198)
				::haxe::ui::toolkit::controls::Button tmp16 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(198)
				tmp16->set_disabled(true);
				HX_STACK_LINE(199)
				::haxe::ui::toolkit::controls::TextInput tmp17 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(199)
				tmp17->set_disabled(true);
				HX_STACK_LINE(200)
				::haxe::ui::toolkit::controls::Button tmp18 = this->resetButtonObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(200)
				tmp18->set_disabled(true);
				HX_STACK_LINE(201)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(201)
				tmp19->set_disabled(true);
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(202)
				tmp20->set_disabled(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayExplanationTextObjectVoid",0xfca467e5,"UIPopupEditObjectVisitor.ResetDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",210,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(211)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		if ((tmp1)){
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayPopularTagListSelectorObjectVoid",0x1a5d22e5,"UIPopupEditObjectVisitor.ResetDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",215,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		if ((tmp1)){
			HX_STACK_LINE(217)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(217)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(217)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(217)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(217)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(217)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayPopularTagListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplaySentenceListViewObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplaySentenceListViewObjectVoid",0xe132d98d,"UIPopupEditObjectVisitor.ResetDisplaySentenceListViewObjectVoid","UIPopupEditObjectVisitor.hx",220,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displaySentencePopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		if ((tmp1)){
			HX_STACK_LINE(222)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(222)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(222)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(222)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(222)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(222)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplaySentenceListViewObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayTargetExhibitionTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayTargetExhibitionTextObjectVoid",0x62364474,"UIPopupEditObjectVisitor.ResetDisplayTargetExhibitionTextObjectVoid","UIPopupEditObjectVisitor.hx",225,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		::haxe::ui::toolkit::controls::Text tmp = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		if ((tmp1)){
			HX_STACK_LINE(226)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			tmp2->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayTargetExhibitionTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetSelectVisitorListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetSelectVisitorListSelectorObjectVoid",0xa21dd194,"UIPopupEditObjectVisitor.ResetSelectVisitorListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",229,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		::haxe::ui::toolkit::data::IDataSource tmp1 = tmp->get_dataSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		tmp1->removeAll();
		HX_STACK_LINE(232)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(233)
		while((true)){
			HX_STACK_LINE(233)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(233)
			int tmp4 = tmp3->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(233)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(233)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(233)
			if ((tmp6)){
				HX_STACK_LINE(233)
				break;
			}
			HX_STACK_LINE(235)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(235)
			::haxe::ui::toolkit::data::IDataSource tmp8 = tmp7->get_dataSource();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(235)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			::ObjectVisitor tmp10 = tmp9->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(235)
			::String tmp11 = tmp10->GetNameString();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(235)
			tmp8->createFromString(tmp11,null());
			HX_STACK_LINE(236)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetSelectVisitorListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayExplanationTextObjectVoid",0x6412f601,"UIPopupEditObjectVisitor.UpdateDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",242,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(243)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(243)
		if ((tmp1)){
			HX_STACK_LINE(244)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(244)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(244)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(244)
			tmp5->set_height((int)205);
			HX_STACK_LINE(245)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(245)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->popupObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(246)
			bool updateExplanationBool = false;		HX_STACK_VAR(updateExplanationBool,"updateExplanationBool");
			HX_STACK_LINE(247)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(248)
			int tmp9 = this->selectedVisitorExplanationStringArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			int tmp11 = tmp10->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(248)
			bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(248)
			if ((tmp12)){
				HX_STACK_LINE(248)
				updateExplanationBool = true;
			}
			HX_STACK_LINE(249)
			while((true)){
				HX_STACK_LINE(249)
				int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(249)
				::ObjectVisitor tmp14 = this->selectedVisitorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(249)
				int tmp15 = tmp14->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(249)
				bool tmp16 = (tmp13 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(249)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(249)
				if ((tmp17)){
					HX_STACK_LINE(249)
					break;
				}
				HX_STACK_LINE(250)
				bool tmp18 = (updateExplanationBool == true);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(250)
				if ((tmp18)){
					HX_STACK_LINE(250)
					break;
				}
				HX_STACK_LINE(251)
				::String tmp19 = this->selectedVisitorExplanationStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(251)
				::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(251)
				::String tmp21 = tmp20->GetExplanationStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(251)
				bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(251)
				if ((tmp22)){
					HX_STACK_LINE(252)
					updateExplanationBool = true;
					HX_STACK_LINE(253)
					break;
				}
				HX_STACK_LINE(255)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(257)
			bool tmp13 = (updateExplanationBool == true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(257)
			if ((tmp13)){
				HX_STACK_LINE(258)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorExplanationStringArray);
				HX_STACK_LINE(259)
				::haxe::ui::toolkit::controls::popups::Popup tmp14 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(259)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = tmp14->GetContentObject();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(259)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp16 = ::Std_obj::instance(tmp15,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(259)
				::haxe::ui::toolkit::containers::ListView tmp17 = tmp16->GetListObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(259)
				::haxe::ui::toolkit::data::IDataSource tmp18 = tmp17->get_dataSource();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(259)
				tmp18->removeAll();
				HX_STACK_LINE(260)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(261)
				while((true)){
					HX_STACK_LINE(261)
					int tmp19 = loopCounter1Int1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(261)
					::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(261)
					int tmp21 = tmp20->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(261)
					bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(261)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(261)
					if ((tmp23)){
						HX_STACK_LINE(261)
						break;
					}
					HX_STACK_LINE(262)
					::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(262)
					::String tmp25 = tmp24->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(262)
					Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("UIPopupEditObjectVisitor.hx","\xf1","\x98","\xef","\x96"),262,HX_HCSTRING("UIPopupEditObjectVisitor","\xed","\x1b","\x5e","\x0d"),HX_HCSTRING("UpdateDisplayExplanationTextObjectVoid","\xa0","\x8f","\x47","\x14"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(262)
					::haxe::Log_obj::trace(tmp25,tmp26);
					HX_STACK_LINE(263)
					::ObjectVisitor tmp27 = this->selectedVisitorObject;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(263)
					::String tmp28 = tmp27->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(263)
					this->selectedVisitorExplanationStringArray->push(tmp28);
					HX_STACK_LINE(264)
					::haxe::ui::toolkit::controls::popups::Popup tmp29 = this->displayExplanationPopupObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(264)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp30 = tmp29->GetContentObject();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(264)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp31 = ::Std_obj::instance(tmp30,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(264)
					::haxe::ui::toolkit::containers::ListView tmp32 = tmp31->GetListObject();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(264)
					::haxe::ui::toolkit::data::IDataSource tmp33 = tmp32->get_dataSource();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(264)
					::ObjectVisitor tmp34 = this->selectedVisitorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(264)
					::String tmp35 = tmp34->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(264)
					tmp33->createFromString(tmp35,null());
					HX_STACK_LINE(265)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayPopularTagListSelectorObjectVoid",0xd980d049,"UIPopupEditObjectVisitor.UpdateDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",271,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(272)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(272)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		if ((tmp1)){
			HX_STACK_LINE(273)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(273)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(273)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			tmp5->set_height((int)205);
			HX_STACK_LINE(274)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(274)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->popupObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(274)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(274)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(275)
			bool updateTagBool = false;		HX_STACK_VAR(updateTagBool,"updateTagBool");
			HX_STACK_LINE(276)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(278)
			int tmp9 = this->selectedVisitorPopularTagCountIntArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(278)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(278)
			int tmp11 = tmp10->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(278)
			bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(278)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(278)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(278)
			if ((tmp13)){
				HX_STACK_LINE(279)
				int tmp15 = this->selectedVisitorPopularTagObjectStringArray->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(279)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(279)
				::ObjectVisitor tmp17 = this->selectedVisitorObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(279)
				::ObjectVisitor tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(279)
				int tmp19 = tmp18->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(279)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(279)
				tmp14 = (tmp16 != tmp20);
			}
			else{
				HX_STACK_LINE(278)
				tmp14 = true;
			}
			HX_STACK_LINE(277)
			if ((tmp14)){
				HX_STACK_LINE(280)
				updateTagBool = true;
			}
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				int tmp15 = loopCounter1Int;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(281)
				::ObjectVisitor tmp16 = this->selectedVisitorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(281)
				int tmp17 = tmp16->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(281)
				bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(281)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(281)
				if ((tmp19)){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(282)
				bool tmp20 = (updateTagBool == true);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(282)
				if ((tmp20)){
					HX_STACK_LINE(282)
					break;
				}
				HX_STACK_LINE(283)
				int tmp21 = this->selectedVisitorPopularTagCountIntArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(283)
				::ObjectVisitor tmp22 = this->selectedVisitorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(283)
				Dynamic tmp23 = tmp22->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(283)
				int tmp24 = tmp23->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(283)
				bool tmp25 = (tmp21 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(283)
				if ((tmp25)){
					HX_STACK_LINE(283)
					updateTagBool = true;
					HX_STACK_LINE(283)
					break;
				}
				HX_STACK_LINE(284)
				::String tmp26 = this->selectedVisitorPopularTagObjectStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(284)
				::ObjectVisitor tmp27 = this->selectedVisitorObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(284)
				Dynamic tmp28 = tmp27->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(284)
				::String tmp29 = tmp28->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(284)
				bool tmp30 = (tmp26 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(284)
				if ((tmp30)){
					HX_STACK_LINE(284)
					updateTagBool = true;
					HX_STACK_LINE(284)
					break;
				}
				HX_STACK_LINE(285)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(287)
			bool tmp15 = (updateTagBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(287)
			if ((tmp15)){
				HX_STACK_LINE(288)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagCountIntArray);
				HX_STACK_LINE(289)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagObjectStringArray);
				HX_STACK_LINE(290)
				::haxe::ui::toolkit::controls::popups::Popup tmp16 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(290)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = tmp16->GetContentObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(290)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp18 = ::Std_obj::instance(tmp17,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(290)
				::haxe::ui::toolkit::containers::ListView tmp19 = tmp18->GetListObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(290)
				::haxe::ui::toolkit::data::IDataSource tmp20 = tmp19->get_dataSource();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(290)
				tmp20->removeAll();
				HX_STACK_LINE(291)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(292)
				while((true)){
					HX_STACK_LINE(292)
					int tmp21 = loopCounter1Int1;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(292)
					::ObjectVisitor tmp22 = this->selectedVisitorObject;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(292)
					int tmp23 = tmp22->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(292)
					bool tmp24 = (tmp21 < tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(292)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(292)
					if ((tmp25)){
						HX_STACK_LINE(292)
						break;
					}
					HX_STACK_LINE(294)
					::ObjectVisitor tmp26 = this->selectedVisitorObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(294)
					Dynamic tmp27 = tmp26->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(294)
					int tmp28 = tmp27->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(294)
					this->selectedVisitorPopularTagCountIntArray->push(tmp28);
					HX_STACK_LINE(295)
					::ObjectVisitor tmp29 = this->selectedVisitorObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(295)
					Dynamic tmp30 = tmp29->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(295)
					::String tmp31 = tmp30->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(295)
					this->selectedVisitorPopularTagObjectStringArray->push(tmp31);
					HX_STACK_LINE(297)
					::haxe::ui::toolkit::controls::popups::Popup tmp32 = this->displayPopularTagPopupObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(297)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp33 = tmp32->GetContentObject();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(297)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp34 = ::Std_obj::instance(tmp33,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(297)
					::haxe::ui::toolkit::containers::ListView tmp35 = tmp34->GetListObject();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(297)
					::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(298)
					::ObjectVisitor tmp37 = this->selectedVisitorObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(298)
					Dynamic tmp38 = tmp37->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(298)
					int tmp39 = tmp38->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(298)
					::String tmp40 = (tmp39 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(300)
					::ObjectVisitor tmp41 = this->selectedVisitorObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(300)
					Dynamic tmp42 = tmp41->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(300)
					::String tmp43 = tmp42->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(298)
					::String tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(297)
					tmp36->createFromString(tmp44,null());
					HX_STACK_LINE(302)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplaySentenceListViewObjectVoid",0xfa80a3f1,"UIPopupEditObjectVisitor.UpdateDisplaySentenceListViewObjectVoid","UIPopupEditObjectVisitor.hx",308,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displaySentencePopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		if ((tmp1)){
			HX_STACK_LINE(310)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(310)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(310)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(310)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(310)
			tmp5->set_height((int)205);
			HX_STACK_LINE(311)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(311)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->popupObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(311)
			Float tmp8 = tmp7->get_y();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(311)
			tmp6->set_y(tmp8);
			HX_STACK_LINE(312)
			bool updateSentenceBool = false;		HX_STACK_VAR(updateSentenceBool,"updateSentenceBool");
			HX_STACK_LINE(313)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(314)
			int tmp9 = this->selectedVisitorSentenceStringArray->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(314)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(314)
			int tmp11 = tmp10->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(314)
			bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(314)
			if ((tmp12)){
				HX_STACK_LINE(314)
				updateSentenceBool = true;
			}
			HX_STACK_LINE(315)
			while((true)){
				HX_STACK_LINE(315)
				int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(315)
				::ObjectVisitor tmp14 = this->selectedVisitorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(315)
				int tmp15 = tmp14->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(315)
				bool tmp16 = (tmp13 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(315)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(315)
				if ((tmp17)){
					HX_STACK_LINE(315)
					break;
				}
				HX_STACK_LINE(316)
				bool tmp18 = (updateSentenceBool == true);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(316)
				if ((tmp18)){
					HX_STACK_LINE(316)
					break;
				}
				HX_STACK_LINE(317)
				::String tmp19 = this->selectedVisitorSentenceStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(317)
				::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(317)
				::String tmp21 = tmp20->GetSentenceStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(317)
				bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(317)
				if ((tmp22)){
					HX_STACK_LINE(318)
					updateSentenceBool = true;
					HX_STACK_LINE(319)
					break;
				}
				HX_STACK_LINE(321)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(323)
			bool tmp13 = (updateSentenceBool == true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(323)
			if ((tmp13)){
				HX_STACK_LINE(324)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorSentenceStringArray);
				HX_STACK_LINE(325)
				::haxe::ui::toolkit::controls::popups::Popup tmp14 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(325)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = tmp14->GetContentObject();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(325)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp16 = ::Std_obj::instance(tmp15,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(325)
				::haxe::ui::toolkit::containers::ListView tmp17 = tmp16->GetListObject();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(325)
				::haxe::ui::toolkit::data::IDataSource tmp18 = tmp17->get_dataSource();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(325)
				tmp18->removeAll();
				HX_STACK_LINE(326)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(327)
				while((true)){
					HX_STACK_LINE(327)
					int tmp19 = loopCounter1Int1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(327)
					::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(327)
					int tmp21 = tmp20->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(327)
					bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(327)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(327)
					if ((tmp23)){
						HX_STACK_LINE(327)
						break;
					}
					HX_STACK_LINE(328)
					::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(328)
					::String tmp25 = tmp24->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(328)
					this->selectedVisitorSentenceStringArray->push(tmp25);
					HX_STACK_LINE(329)
					::haxe::ui::toolkit::controls::popups::Popup tmp26 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(329)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = tmp26->GetContentObject();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(329)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp28 = ::Std_obj::instance(tmp27,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(329)
					::haxe::ui::toolkit::containers::ListView tmp29 = tmp28->GetListObject();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(329)
					::haxe::ui::toolkit::data::IDataSource tmp30 = tmp29->get_dataSource();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(329)
					::ObjectVisitor tmp31 = this->selectedVisitorObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(329)
					::String tmp32 = tmp31->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(329)
					tmp30->createFromString(tmp32,null());
					HX_STACK_LINE(330)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayTargetExhibitionTextObjectVoid",0x2b4310d8,"UIPopupEditObjectVisitor.UpdateDisplayTargetExhibitionTextObjectVoid","UIPopupEditObjectVisitor.hx",336,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(337)
		::String targetExhibitionNameFullString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(targetExhibitionNameFullString,"targetExhibitionNameFullString");
		HX_STACK_LINE(338)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(339)
		while((true)){
			HX_STACK_LINE(339)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(339)
			::ObjectVisitor tmp1 = this->selectedVisitorObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(339)
			int tmp2 = tmp1->GetExhibitionTargetObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(339)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(339)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(339)
			if ((tmp4)){
				HX_STACK_LINE(339)
				break;
			}
			HX_STACK_LINE(340)
			int tmp5 = loopCounter1Int;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(340)
			::ObjectVisitor tmp6 = this->selectedVisitorObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(340)
			int tmp7 = tmp6->GetExhibitionTargetObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(340)
			int tmp8 = (tmp7 - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(340)
			bool tmp9 = (tmp5 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(340)
			if ((tmp9)){
				HX_STACK_LINE(341)
				::String tmp10 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(341)
				::ObjectVisitor tmp11 = this->selectedVisitorObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(341)
				::ObjectMuseum tmp12 = tmp11->GetExhibitionTargetObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(341)
				Dynamic tmp13 = tmp12->GetNameStruct();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(341)
				::String tmp14 = tmp13->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(341)
				::String tmp15 = (tmp10 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(341)
				targetExhibitionNameFullString = tmp15;
			}
			else{
				HX_STACK_LINE(344)
				::String tmp10 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(344)
				::ObjectVisitor tmp11 = this->selectedVisitorObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(344)
				::ObjectMuseum tmp12 = tmp11->GetExhibitionTargetObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(344)
				Dynamic tmp13 = tmp12->GetNameStruct();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(344)
				::String tmp14 = tmp13->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(344)
				::String tmp15 = (tmp10 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(344)
				::String tmp16 = (tmp15 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(344)
				targetExhibitionNameFullString = tmp16;
			}
			HX_STACK_LINE(346)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(348)
		::haxe::ui::toolkit::controls::Text tmp = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		::String tmp1 = targetExhibitionNameFullString;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(348)
		tmp->set_text(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayTargetExhibitionTextObjectVoid,(void))


UIPopupEditObjectVisitor_obj::UIPopupEditObjectVisitor_obj()
{
}

void UIPopupEditObjectVisitor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupEditObjectVisitor);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(displayExplanationButtonObject,"displayExplanationButtonObject");
	HX_MARK_MEMBER_NAME(displayExplanationPopupObject,"displayExplanationPopupObject");
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
	HX_VISIT_MEMBER_NAME(displayExplanationButtonObject,"displayExplanationButtonObject");
	HX_VISIT_MEMBER_NAME(displayExplanationPopupObject,"displayExplanationPopupObject");
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
		if (HX_FIELD_EQ(inName,"displayPopularTagPopupObject") ) { return displayPopularTagPopupObject; }
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { return selectModeListSelectorObject; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"displayExplanationPopupObject") ) { return displayExplanationPopupObject; }
		if (HX_FIELD_EQ(inName,"displayPopularTagButtonObject") ) { return displayPopularTagButtonObject; }
		if (HX_FIELD_EQ(inName,"displayVisitorIndexTextObject") ) { return displayVisitorIndexTextObject; }
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
		if (HX_FIELD_EQ(inName,"ResetDisplayTargetExhibitionTextObjectVoid") ) { return ResetDisplayTargetExhibitionTextObjectVoid_dyn(); }
		break;
	case 43:
		if (HX_FIELD_EQ(inName,"UpdateDisplayTargetExhibitionTextObjectVoid") ) { return UpdateDisplayTargetExhibitionTextObjectVoid_dyn(); }
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
		if (HX_FIELD_EQ(inName,"displayPopularTagPopupObject") ) { displayPopularTagPopupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { selectModeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"displayExplanationPopupObject") ) { displayExplanationPopupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayPopularTagButtonObject") ) { displayPopularTagButtonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayVisitorIndexTextObject") ) { displayVisitorIndexTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
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
	outFields->push(HX_HCSTRING("displayExplanationButtonObject","\x28","\xe3","\x7d","\x05"));
	outFields->push(HX_HCSTRING("displayExplanationPopupObject","\x14","\x01","\x34","\x22"));
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
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayExplanationButtonObject),HX_HCSTRING("displayExplanationButtonObject","\x28","\xe3","\x7d","\x05")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayExplanationPopupObject),HX_HCSTRING("displayExplanationPopupObject","\x14","\x01","\x34","\x22")},
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
	HX_HCSTRING("displayExplanationButtonObject","\x28","\xe3","\x7d","\x05"),
	HX_HCSTRING("displayExplanationPopupObject","\x14","\x01","\x34","\x22"),
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
	HX_HCSTRING("ResetDisplayTargetExhibitionTextObjectVoid","\x93","\x99","\xe1","\x17"),
	HX_HCSTRING("ResetSelectVisitorListSelectorObjectVoid","\xf3","\x50","\xe3","\x3b"),
	HX_HCSTRING("UpdateDisplayExplanationTextObjectVoid","\xa0","\x8f","\x47","\x14"),
	HX_HCSTRING("UpdateDisplayPopularTagListSelectorObjectVoid","\x8a","\x38","\x56","\x04"),
	HX_HCSTRING("UpdateDisplaySentenceListViewObjectVoid","\x72","\x75","\x52","\x78"),
	HX_HCSTRING("UpdateDisplayTargetExhibitionTextObjectVoid","\xd9","\x36","\x82","\x6b"),
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

