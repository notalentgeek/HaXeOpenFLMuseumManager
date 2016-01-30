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
HX_STACK_FRAME("UIPopupEditObjectVisitor","new",0x7abab75f,"UIPopupEditObjectVisitor.new","UIPopupEditObjectVisitor.hx",18,0x96ef98f1)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(45)
	this->selectVisitorListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(44)
	this->selectVisitorListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(43)
	this->selectVisitorListSelectorObject = null();
	HX_STACK_LINE(42)
	this->selectModeListSelectorObject = null();
	HX_STACK_LINE(41)
	this->selectedVisitorSentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(40)
	this->selectedVisitorPopularTagObjectStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(39)
	this->selectedVisitorPopularTagCountIntArray = Array_obj< int >::__new();
	HX_STACK_LINE(38)
	this->selectedVisitorObject = null();
	HX_STACK_LINE(37)
	this->selectedVisitorExplanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(36)
	this->selectCurrentExhibitionListSelectorObject = null();
	HX_STACK_LINE(35)
	this->resetButtonObject = null();
	HX_STACK_LINE(34)
	this->popupObject = null();
	HX_STACK_LINE(33)
	this->mainButtonObject = null();
	HX_STACK_LINE(32)
	this->inputNameTextInputObject = null();
	HX_STACK_LINE(31)
	this->gridObject = null();
	HX_STACK_LINE(30)
	this->displayVisitorIndexTextObject = null();
	HX_STACK_LINE(29)
	this->displayTargetExhibitionTextObject = null();
	HX_STACK_LINE(28)
	this->displaySentencePopupObject = null();
	HX_STACK_LINE(27)
	this->displaySentenceListViewObject = null();
	HX_STACK_LINE(26)
	this->displaySentenceButtonObject = null();
	HX_STACK_LINE(25)
	this->displayPreviousVisitorTextObject = null();
	HX_STACK_LINE(24)
	this->displayPopularTagListSelectorObject = null();
	HX_STACK_LINE(23)
	this->displayExplanationTextObject = null();
	HX_STACK_LINE(22)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(47)
	::UIPopupEditObjectVisitor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(53)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditVisitorObjectButton","\x9d","\x96","\xbf","\x99"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	this->mainButtonObject = tmp;
	HX_STACK_LINE(54)
	::haxe::ui::toolkit::controls::Button tmp1 = this->mainButtonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectVisitor,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectVisitor.hx",54,0x96ef98f1)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(56)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(57)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(58)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectVisitor.xml","\x9b","\xe8","\x07","\x44"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectVisitor.hx",61,0x96ef98f1)
				HX_STACK_ARG(_button,"_button")
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(61)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Visitor","\x98","\xbf","\x3a","\x1a"),tmp5, Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			_g->popupObject = tmp6;
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::controls::Text tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayExplanation","\xa9","\x1e","\x14","\xdf"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			_g->displayExplanationTextObject = tmp8;
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPopularTag","\x71","\x23","\xc9","\x5b"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			_g->displayPopularTagListSelectorObject = tmp10;
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::Text tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPreviousVisitor","\x87","\x41","\x94","\x69"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(69)
			_g->displayPreviousVisitorTextObject = tmp12;
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::Button tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonDisplaySentence","\x01","\x12","\x5e","\xee"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(70)
			_g->displaySentenceButtonObject = tmp14;
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::Text tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayTargetExhibition","\xb0","\x47","\x47","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(71)
			_g->displayTargetExhibitionTextObject = tmp16;
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::Text tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayVisitorIndex","\x34","\xb1","\xaf","\x60"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(72)
			_g->displayVisitorIndexTextObject = tmp18;
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::containers::Grid tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_Grid","\xb8","\xa7","\x8a","\x05"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(73)
			_g->gridObject = tmp20;
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp21 = _g->popupObject->get_content();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::TextInput tmp22 = tmp21->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_InputName","\x43","\xb1","\xb6","\x7f"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(74)
			_g->inputNameTextInputObject = tmp22;
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp23 = _g->popupObject->get_content();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::Button tmp24 = tmp23->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonReset","\xcb","\x1b","\x7e","\x01"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(75)
			_g->resetButtonObject = tmp24;
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp25 = _g->popupObject->get_content();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = tmp25->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectCurrentExhibition","\x9a","\x81","\xb0","\x5a"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(76)
			_g->selectCurrentExhibitionListSelectorObject = tmp26;
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = _g->popupObject->get_content();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = tmp27->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectMode","\xf1","\x5a","\x61","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(77)
			_g->selectModeListSelectorObject = tmp28;
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp29 = _g->popupObject->get_content();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = tmp29->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectVisitor","\xe0","\x48","\xdc","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(78)
			_g->selectVisitorListSelectorObject = tmp30;
			HX_STACK_LINE(80)
			_g->displayPopularTagListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
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
					::haxe::ui::toolkit::core::PopupManager tmp31 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(90)
					int tmp32 = buttonControlInt1;		HX_STACK_VAR(tmp32,"tmp32");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",90,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(90)
					::haxe::ui::toolkit::controls::popups::Popup tmp33 = tmp31->showList(_g->selectedVisitorObject->GetSentenceStringArray(),null(),HX_HCSTRING("Display Sentence","\x81","\xaa","\xa1","\xca"),tmp32, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(90)
					_g->displaySentencePopupObject = tmp33;
					HX_STACK_LINE(91)
					_g->displaySentencePopupObject->set_height((int)200);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(85)
			_g->displaySentenceButtonObject->set_onClick( Dynamic(new _Function_2_2(_g)));
			HX_STACK_LINE(95)
			_g->ResetDisplayExplanationTextObjectVoid();
			HX_STACK_LINE(96)
			_g->ResetDisplayPopularTagListSelectorObjectVoid();
			HX_STACK_LINE(97)
			_g->ResetDisplaySentenceListViewObjectVoid();
			HX_STACK_LINE(99)
			_g->ResetSelectVisitorListSelectorObjectVoid();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(54)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateVoid",0x87db38fe,"UIPopupEditObjectVisitor.UpdateVoid","UIPopupEditObjectVisitor.hx",105,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		if ((tmp1)){
			HX_STACK_LINE(109)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			this->selectVisitorListSelectorString = tmp3;
			HX_STACK_LINE(110)
			::String tmp4 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(110)
			::String tmp5 = this->selectVisitorListSelectorPrevString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(110)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(110)
			if ((tmp6)){
				HX_STACK_LINE(112)
				this->ResetDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(113)
				this->ResetDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(114)
				this->ResetDisplaySentenceListViewObjectVoid();
				HX_STACK_LINE(116)
				this->ResetSelectVisitorListSelectorObjectVoid();
				HX_STACK_LINE(118)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(118)
				::String tmp8 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(118)
				::ObjectVisitor tmp9 = ::CollectionFunction_obj::FindVisitorObject(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(118)
				this->selectedVisitorObject = tmp9;
				HX_STACK_LINE(119)
				::String tmp10 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(119)
				this->selectVisitorListSelectorPrevString = tmp10;
			}
			HX_STACK_LINE(123)
			::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(123)
			if ((tmp8)){
				HX_STACK_LINE(125)
				::haxe::ui::toolkit::controls::Text tmp9 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(125)
				tmp9->set_disabled(false);
				HX_STACK_LINE(126)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(126)
				tmp10->set_disabled(false);
				HX_STACK_LINE(127)
				::haxe::ui::toolkit::controls::Text tmp11 = this->displayPreviousVisitorTextObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(127)
				tmp11->set_disabled(false);
				HX_STACK_LINE(128)
				::haxe::ui::toolkit::controls::Button tmp12 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(128)
				tmp12->set_disabled(false);
				HX_STACK_LINE(129)
				::haxe::ui::toolkit::controls::Button tmp13 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(129)
				tmp13->set_disabled(false);
				HX_STACK_LINE(130)
				::haxe::ui::toolkit::controls::Text tmp14 = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(130)
				tmp14->set_disabled(false);
				HX_STACK_LINE(131)
				::haxe::ui::toolkit::controls::Text tmp15 = this->displayVisitorIndexTextObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(131)
				tmp15->set_disabled(false);
				HX_STACK_LINE(132)
				::haxe::ui::toolkit::controls::TextInput tmp16 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(132)
				tmp16->set_disabled(false);
				HX_STACK_LINE(133)
				::haxe::ui::toolkit::controls::Button tmp17 = this->resetButtonObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(133)
				tmp17->set_disabled(false);
				HX_STACK_LINE(134)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(134)
				tmp18->set_disabled(false);
				HX_STACK_LINE(135)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(135)
				tmp19->set_disabled(false);
				HX_STACK_LINE(137)
				this->UpdateDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(138)
				this->UpdateDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(139)
				this->UpdateDisplaySentenceListViewObjectVoid();
			}
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(143)
			int tmp10 = tmp9->get_selectedIndex();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(143)
			bool tmp11 = (tmp10 == (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(143)
			if ((tmp11)){
				HX_STACK_LINE(145)
				::haxe::ui::toolkit::controls::Text tmp12 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(145)
				tmp12->set_disabled(true);
				HX_STACK_LINE(146)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(146)
				tmp13->set_disabled(true);
				HX_STACK_LINE(147)
				::haxe::ui::toolkit::controls::Text tmp14 = this->displayPreviousVisitorTextObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(147)
				tmp14->set_disabled(true);
				HX_STACK_LINE(148)
				::haxe::ui::toolkit::controls::Button tmp15 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(148)
				tmp15->set_disabled(true);
				HX_STACK_LINE(149)
				::haxe::ui::toolkit::controls::Button tmp16 = this->displaySentenceButtonObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(149)
				tmp16->set_disabled(true);
				HX_STACK_LINE(150)
				::haxe::ui::toolkit::controls::Text tmp17 = this->displayTargetExhibitionTextObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(150)
				tmp17->set_disabled(true);
				HX_STACK_LINE(151)
				::haxe::ui::toolkit::controls::Text tmp18 = this->displayVisitorIndexTextObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(151)
				tmp18->set_disabled(true);
				HX_STACK_LINE(152)
				::haxe::ui::toolkit::controls::TextInput tmp19 = this->inputNameTextInputObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(152)
				tmp19->set_disabled(true);
				HX_STACK_LINE(153)
				::haxe::ui::toolkit::controls::Button tmp20 = this->resetButtonObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(153)
				tmp20->set_disabled(true);
				HX_STACK_LINE(154)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->selectCurrentExhibitionListSelectorObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(154)
				tmp21->set_disabled(true);
				HX_STACK_LINE(155)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->selectModeListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(155)
				tmp22->set_disabled(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayExplanationTextObjectVoid",0xfca467e5,"UIPopupEditObjectVisitor.ResetDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",163,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		::haxe::ui::toolkit::controls::Text tmp = this->displayExplanationTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		if ((tmp1)){
			HX_STACK_LINE(165)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			tmp2->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayPopularTagListSelectorObjectVoid",0x1a5d22e5,"UIPopupEditObjectVisitor.ResetDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",168,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		if ((tmp1)){
			HX_STACK_LINE(170)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(170)
			::haxe::ui::toolkit::data::IDataSource tmp3 = tmp2->get_dataSource();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			tmp3->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayPopularTagListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplaySentenceListViewObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplaySentenceListViewObjectVoid",0xe132d98d,"UIPopupEditObjectVisitor.ResetDisplaySentenceListViewObjectVoid","UIPopupEditObjectVisitor.hx",173,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(174)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displaySentencePopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		if ((tmp1)){
			HX_STACK_LINE(175)
			::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(175)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp3 = tmp2->GetContentObject();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			::haxe::ui::toolkit::controls::popups::ListPopupContent tmp4 = ::Std_obj::instance(tmp3,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			::haxe::ui::toolkit::containers::ListView tmp5 = tmp4->GetListObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(175)
			::haxe::ui::toolkit::data::IDataSource tmp6 = tmp5->get_dataSource();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			tmp6->removeAll();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplaySentenceListViewObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetSelectVisitorListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetSelectVisitorListSelectorObjectVoid",0xa21dd194,"UIPopupEditObjectVisitor.ResetSelectVisitorListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",179,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		::haxe::ui::toolkit::data::IDataSource tmp1 = tmp->get_dataSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		tmp1->removeAll();
		HX_STACK_LINE(182)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(183)
		while((true)){
			HX_STACK_LINE(183)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(183)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(183)
			int tmp4 = tmp3->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(183)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			if ((tmp6)){
				HX_STACK_LINE(183)
				break;
			}
			HX_STACK_LINE(185)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(185)
			::haxe::ui::toolkit::data::IDataSource tmp8 = tmp7->get_dataSource();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(185)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(185)
			::ObjectVisitor tmp10 = tmp9->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(185)
			::String tmp11 = tmp10->GetNameString();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(185)
			tmp8->createFromString(tmp11,null());
			HX_STACK_LINE(186)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetSelectVisitorListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayExplanationTextObjectVoid",0x6412f601,"UIPopupEditObjectVisitor.UpdateDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",192,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		bool updateExplanationBool = false;		HX_STACK_VAR(updateExplanationBool,"updateExplanationBool");
		HX_STACK_LINE(194)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(195)
		int tmp = this->selectedVisitorExplanationStringArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		::ObjectVisitor tmp1 = this->selectedVisitorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		int tmp2 = tmp1->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		if ((tmp3)){
			HX_STACK_LINE(195)
			updateExplanationBool = true;
		}
		HX_STACK_LINE(196)
		while((true)){
			HX_STACK_LINE(196)
			int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(196)
			::ObjectVisitor tmp5 = this->selectedVisitorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			int tmp6 = tmp5->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(196)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(196)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(196)
			if ((tmp8)){
				HX_STACK_LINE(196)
				break;
			}
			HX_STACK_LINE(197)
			bool tmp9 = (updateExplanationBool == true);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(197)
			if ((tmp9)){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(198)
			::String tmp10 = this->selectedVisitorExplanationStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(198)
			::ObjectVisitor tmp11 = this->selectedVisitorObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(198)
			::String tmp12 = tmp11->GetExplanationStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(198)
			bool tmp13 = (tmp10 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(198)
			if ((tmp13)){
				HX_STACK_LINE(199)
				updateExplanationBool = true;
				HX_STACK_LINE(200)
				break;
			}
			HX_STACK_LINE(202)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(204)
		bool tmp4 = (updateExplanationBool == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(204)
		if ((tmp4)){
			HX_STACK_LINE(205)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorExplanationStringArray);
			HX_STACK_LINE(206)
			::haxe::ui::toolkit::controls::Text tmp5 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(206)
			tmp5->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			HX_STACK_LINE(207)
			::String displayExplanationString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(displayExplanationString,"displayExplanationString");
			HX_STACK_LINE(208)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(209)
			while((true)){
				HX_STACK_LINE(209)
				int tmp6 = loopCounter1Int1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(209)
				::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(209)
				int tmp8 = tmp7->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(209)
				bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(209)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(209)
				if ((tmp10)){
					HX_STACK_LINE(209)
					break;
				}
				HX_STACK_LINE(210)
				::String tmp11 = displayExplanationString;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(210)
				::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(210)
				::String tmp13 = tmp12->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(210)
				::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(210)
				::String tmp15 = (tmp14 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(210)
				displayExplanationString = tmp15;
				HX_STACK_LINE(211)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(213)
			::haxe::ui::toolkit::controls::Text tmp6 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(213)
			::String tmp7 = displayExplanationString;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(213)
			tmp6->set_text(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayPopularTagListSelectorObjectVoid",0xd980d049,"UIPopupEditObjectVisitor.UpdateDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",217,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(218)
		tmp->set_selectedIndex((int)-1);
		HX_STACK_LINE(219)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp1 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		tmp1->set_text(HX_HCSTRING("Popular Tag","\x93","\xb7","\x38","\x20"));
		HX_STACK_LINE(220)
		bool updateTagBool = false;		HX_STACK_VAR(updateTagBool,"updateTagBool");
		HX_STACK_LINE(221)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(223)
		int tmp2 = this->selectedVisitorPopularTagCountIntArray->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		int tmp4 = tmp3->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(223)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(223)
		if ((tmp6)){
			HX_STACK_LINE(224)
			int tmp8 = this->selectedVisitorPopularTagObjectStringArray->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(224)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(224)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			::ObjectVisitor tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			int tmp12 = tmp11->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(224)
			tmp7 = (tmp9 != tmp13);
		}
		else{
			HX_STACK_LINE(223)
			tmp7 = true;
		}
		HX_STACK_LINE(222)
		if ((tmp7)){
			HX_STACK_LINE(225)
			updateTagBool = true;
		}
		HX_STACK_LINE(226)
		while((true)){
			HX_STACK_LINE(226)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(226)
			::ObjectVisitor tmp9 = this->selectedVisitorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(226)
			int tmp10 = tmp9->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(226)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(226)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(226)
			if ((tmp12)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(227)
			bool tmp13 = (updateTagBool == true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(227)
			if ((tmp13)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(228)
			int tmp14 = this->selectedVisitorPopularTagCountIntArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(228)
			::ObjectVisitor tmp15 = this->selectedVisitorObject;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(228)
			Dynamic tmp16 = tmp15->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(228)
			int tmp17 = tmp16->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(228)
			bool tmp18 = (tmp14 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(228)
			if ((tmp18)){
				HX_STACK_LINE(228)
				updateTagBool = true;
				HX_STACK_LINE(228)
				break;
			}
			HX_STACK_LINE(229)
			::String tmp19 = this->selectedVisitorPopularTagObjectStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(229)
			::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(229)
			Dynamic tmp21 = tmp20->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(229)
			::String tmp22 = tmp21->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(229)
			bool tmp23 = (tmp19 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(229)
			if ((tmp23)){
				HX_STACK_LINE(229)
				updateTagBool = true;
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(230)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(232)
		bool tmp8 = (updateTagBool == true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(232)
		if ((tmp8)){
			HX_STACK_LINE(233)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagCountIntArray);
			HX_STACK_LINE(234)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagObjectStringArray);
			HX_STACK_LINE(235)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(235)
			::haxe::ui::toolkit::data::IDataSource tmp10 = tmp9->get_dataSource();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(235)
			tmp10->removeAll();
			HX_STACK_LINE(236)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(237)
			while((true)){
				HX_STACK_LINE(237)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(237)
				::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(237)
				int tmp13 = tmp12->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(237)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(237)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(237)
				if ((tmp15)){
					HX_STACK_LINE(237)
					break;
				}
				HX_STACK_LINE(239)
				::ObjectVisitor tmp16 = this->selectedVisitorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(239)
				Dynamic tmp17 = tmp16->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(239)
				int tmp18 = tmp17->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(239)
				this->selectedVisitorPopularTagCountIntArray->push(tmp18);
				HX_STACK_LINE(240)
				::ObjectVisitor tmp19 = this->selectedVisitorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(240)
				Dynamic tmp20 = tmp19->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(240)
				::String tmp21 = tmp20->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(240)
				this->selectedVisitorPopularTagObjectStringArray->push(tmp21);
				HX_STACK_LINE(242)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(242)
				::haxe::ui::toolkit::data::IDataSource tmp23 = tmp22->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(243)
				::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(243)
				Dynamic tmp25 = tmp24->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(243)
				int tmp26 = tmp25->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(243)
				::String tmp27 = (tmp26 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(245)
				::ObjectVisitor tmp28 = this->selectedVisitorObject;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(245)
				Dynamic tmp29 = tmp28->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(245)
				::String tmp30 = tmp29->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(243)
				::String tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(242)
				tmp23->createFromString(tmp31,null());
				HX_STACK_LINE(247)
				(loopCounter1Int1)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayPopularTagListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplaySentenceListViewObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplaySentenceListViewObjectVoid",0xfa80a3f1,"UIPopupEditObjectVisitor.UpdateDisplaySentenceListViewObjectVoid","UIPopupEditObjectVisitor.hx",252,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(254)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->displaySentencePopupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		if ((tmp1)){
			HX_STACK_LINE(255)
			bool updateSentenceBool = false;		HX_STACK_VAR(updateSentenceBool,"updateSentenceBool");
			HX_STACK_LINE(256)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(257)
			int tmp2 = this->selectedVisitorSentenceStringArray->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(257)
			::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			int tmp4 = tmp3->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(257)
			bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(257)
			if ((tmp5)){
				HX_STACK_LINE(257)
				updateSentenceBool = true;
			}
			HX_STACK_LINE(258)
			while((true)){
				HX_STACK_LINE(258)
				int tmp6 = loopCounter1Int;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(258)
				::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(258)
				int tmp8 = tmp7->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(258)
				bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(258)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(258)
				if ((tmp10)){
					HX_STACK_LINE(258)
					break;
				}
				HX_STACK_LINE(259)
				bool tmp11 = (updateSentenceBool == true);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(259)
				if ((tmp11)){
					HX_STACK_LINE(259)
					break;
				}
				HX_STACK_LINE(260)
				::String tmp12 = this->selectedVisitorSentenceStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(260)
				::ObjectVisitor tmp13 = this->selectedVisitorObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(260)
				::String tmp14 = tmp13->GetSentenceStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(260)
				bool tmp15 = (tmp12 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(260)
				if ((tmp15)){
					HX_STACK_LINE(261)
					updateSentenceBool = true;
					HX_STACK_LINE(262)
					break;
				}
				HX_STACK_LINE(264)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(266)
			bool tmp6 = (updateSentenceBool == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			if ((tmp6)){
				HX_STACK_LINE(267)
				::CollectionFunction_obj::ClearArray(this->selectedVisitorSentenceStringArray);
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::controls::popups::Popup tmp7 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::controls::popups::PopupContent tmp8 = tmp7->GetContentObject();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::controls::popups::ListPopupContent tmp9 = ::Std_obj::instance(tmp8,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::containers::ListView tmp10 = tmp9->GetListObject();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::data::IDataSource tmp11 = tmp10->get_dataSource();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(268)
				tmp11->removeAll();
				HX_STACK_LINE(269)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(270)
				while((true)){
					HX_STACK_LINE(270)
					int tmp12 = loopCounter1Int1;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(270)
					::ObjectVisitor tmp13 = this->selectedVisitorObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(270)
					int tmp14 = tmp13->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(270)
					bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(270)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(270)
					if ((tmp16)){
						HX_STACK_LINE(270)
						break;
					}
					HX_STACK_LINE(271)
					::ObjectVisitor tmp17 = this->selectedVisitorObject;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(271)
					::String tmp18 = tmp17->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(271)
					this->selectedVisitorSentenceStringArray->push(tmp18);
					HX_STACK_LINE(272)
					::haxe::ui::toolkit::controls::popups::Popup tmp19 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(272)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp20 = tmp19->GetContentObject();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(272)
					::haxe::ui::toolkit::controls::popups::ListPopupContent tmp21 = ::Std_obj::instance(tmp20,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::ListPopupContent >());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(272)
					::haxe::ui::toolkit::containers::ListView tmp22 = tmp21->GetListObject();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(272)
					::haxe::ui::toolkit::data::IDataSource tmp23 = tmp22->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(272)
					::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(272)
					::String tmp25 = tmp24->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(272)
					tmp23->createFromString(tmp25,null());
					HX_STACK_LINE(273)
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
	HX_MARK_MEMBER_NAME(displayPopularTagListSelectorObject,"displayPopularTagListSelectorObject");
	HX_MARK_MEMBER_NAME(displayPreviousVisitorTextObject,"displayPreviousVisitorTextObject");
	HX_MARK_MEMBER_NAME(displaySentenceButtonObject,"displaySentenceButtonObject");
	HX_MARK_MEMBER_NAME(displaySentenceListViewObject,"displaySentenceListViewObject");
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
	HX_VISIT_MEMBER_NAME(displayPopularTagListSelectorObject,"displayPopularTagListSelectorObject");
	HX_VISIT_MEMBER_NAME(displayPreviousVisitorTextObject,"displayPreviousVisitorTextObject");
	HX_VISIT_MEMBER_NAME(displaySentenceButtonObject,"displaySentenceButtonObject");
	HX_VISIT_MEMBER_NAME(displaySentenceListViewObject,"displaySentenceListViewObject");
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
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { return selectModeListSelectorObject; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"displaySentenceListViewObject") ) { return displaySentenceListViewObject; }
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
		if (HX_FIELD_EQ(inName,"displayPopularTagListSelectorObject") ) { return displayPopularTagListSelectorObject; }
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
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { selectModeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"displaySentenceListViewObject") ) { displaySentenceListViewObject=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"displayPopularTagListSelectorObject") ) { displayPopularTagListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
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
	outFields->push(HX_HCSTRING("displayPopularTagListSelectorObject","\xbf","\x0c","\xd5","\x62"));
	outFields->push(HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14"));
	outFields->push(HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24"));
	outFields->push(HX_HCSTRING("displaySentenceListViewObject","\xe7","\xe0","\x82","\x63"));
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
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayPopularTagListSelectorObject),HX_HCSTRING("displayPopularTagListSelectorObject","\xbf","\x0c","\xd5","\x62")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayPreviousVisitorTextObject),HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displaySentenceButtonObject),HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displaySentenceListViewObject),HX_HCSTRING("displaySentenceListViewObject","\xe7","\xe0","\x82","\x63")},
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
	HX_HCSTRING("displayPopularTagListSelectorObject","\xbf","\x0c","\xd5","\x62"),
	HX_HCSTRING("displayPreviousVisitorTextObject","\xc1","\x1b","\x1b","\x14"),
	HX_HCSTRING("displaySentenceButtonObject","\xf6","\x02","\xa9","\x24"),
	HX_HCSTRING("displaySentenceListViewObject","\xe7","\xe0","\x82","\x63"),
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

