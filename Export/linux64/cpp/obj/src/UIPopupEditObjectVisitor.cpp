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
#ifndef INCLUDED_UIPopupEditObjectVisitor
#include <UIPopupEditObjectVisitor.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
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
	HX_STACK_LINE(43)
	this->selectVisitorListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(42)
	this->selectVisitorListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(41)
	this->selectVisitorListSelectorObject = null();
	HX_STACK_LINE(40)
	this->selectModeListSelectorObject = null();
	HX_STACK_LINE(39)
	this->selectedVisitorPopularTagObjectStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(38)
	this->selectedVisitorPopularTagCountIntArray = Array_obj< int >::__new();
	HX_STACK_LINE(37)
	this->selectedVisitorObject = null();
	HX_STACK_LINE(36)
	this->selectedVisitorSentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(35)
	this->selectedVisitorExplanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(34)
	this->selectCurrentExhibitionListSelectorObject = null();
	HX_STACK_LINE(33)
	this->resetButtonObject = null();
	HX_STACK_LINE(32)
	this->popupObject = null();
	HX_STACK_LINE(31)
	this->mainButtonObject = null();
	HX_STACK_LINE(30)
	this->inputNameTextInputObject = null();
	HX_STACK_LINE(29)
	this->gridObject = null();
	HX_STACK_LINE(28)
	this->displayVisitorIndexTextObject = null();
	HX_STACK_LINE(27)
	this->displayTargetExhibitionTextObject = null();
	HX_STACK_LINE(26)
	this->displaySentenceTextObject = null();
	HX_STACK_LINE(25)
	this->displayPreviousVisitorTextObject = null();
	HX_STACK_LINE(24)
	this->displayPopularTagListSelectorObject = null();
	HX_STACK_LINE(23)
	this->displayExplanationTextObject = null();
	HX_STACK_LINE(22)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(45)
	::UIPopupEditObjectVisitor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(51)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditVisitorObjectButton","\x9d","\x96","\xbf","\x99"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	this->mainButtonObject = tmp;
	HX_STACK_LINE(52)
	::haxe::ui::toolkit::controls::Button tmp1 = this->mainButtonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectVisitor,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectVisitor.hx",52,0x96ef98f1)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(54)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(55)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(56)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectVisitor.xml","\x9b","\xe8","\x07","\x44"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectVisitor.hx",59,0x96ef98f1)
				HX_STACK_ARG(_button,"_button")
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(59)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Visitor","\x98","\xbf","\x3a","\x1a"),tmp5, Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			_g->popupObject = tmp6;
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::controls::Text tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayExplanation","\xa9","\x1e","\x14","\xdf"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			_g->displayExplanationTextObject = tmp8;
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPopularTag","\x71","\x23","\xc9","\x5b"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(66)
			_g->displayPopularTagListSelectorObject = tmp10;
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::controls::Text tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPreviousVisitor","\x87","\x41","\x94","\x69"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			_g->displayPreviousVisitorTextObject = tmp12;
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::controls::Text tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplaySentence","\x53","\x3d","\x90","\x76"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			_g->displaySentenceTextObject = tmp14;
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::Text tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayTargetExhibition","\xb0","\x47","\x47","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(69)
			_g->displayTargetExhibitionTextObject = tmp16;
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::Text tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayVisitorIndex","\x34","\xb1","\xaf","\x60"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(70)
			_g->displayVisitorIndexTextObject = tmp18;
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::containers::Grid tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_Grid","\xb8","\xa7","\x8a","\x05"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(71)
			_g->gridObject = tmp20;
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp21 = _g->popupObject->get_content();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(72)
			::haxe::ui::toolkit::controls::TextInput tmp22 = tmp21->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_InputName","\x43","\xb1","\xb6","\x7f"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(72)
			_g->inputNameTextInputObject = tmp22;
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp23 = _g->popupObject->get_content();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::Button tmp24 = tmp23->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_ButtonReset","\xcb","\x1b","\x7e","\x01"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(73)
			_g->resetButtonObject = tmp24;
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp25 = _g->popupObject->get_content();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = tmp25->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectCurrentExhibition","\x9a","\x81","\xb0","\x5a"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(74)
			_g->selectCurrentExhibitionListSelectorObject = tmp26;
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = _g->popupObject->get_content();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = tmp27->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectMode","\xf1","\x5a","\x61","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(75)
			_g->selectModeListSelectorObject = tmp28;
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp29 = _g->popupObject->get_content();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = tmp29->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_SelectVisitor","\xe0","\x48","\xdc","\xe2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(76)
			_g->selectVisitorListSelectorObject = tmp30;
			HX_STACK_LINE(78)
			_g->displayPopularTagListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(79)
			_g->selectCurrentExhibitionListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(80)
			_g->selectModeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(81)
			_g->selectVisitorListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(83)
			_g->ResetDisplayExplanationTextObjectVoid();
			HX_STACK_LINE(84)
			_g->ResetDisplayPopularTagListSelectorObjectVoid();
			HX_STACK_LINE(85)
			_g->ResetDisplaySentenceTextObjectVoid();
			HX_STACK_LINE(87)
			_g->ResetSelectVisitorListSelectorObjectVoid();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(52)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateVoid",0x87db38fe,"UIPopupEditObjectVisitor.UpdateVoid","UIPopupEditObjectVisitor.hx",93,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		if ((tmp1)){
			HX_STACK_LINE(97)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(97)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			this->selectVisitorListSelectorString = tmp3;
			HX_STACK_LINE(98)
			::String tmp4 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			::String tmp5 = this->selectVisitorListSelectorPrevString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			if ((tmp6)){
				HX_STACK_LINE(100)
				this->ResetDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(101)
				this->ResetDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(102)
				this->ResetDisplaySentenceTextObjectVoid();
				HX_STACK_LINE(104)
				this->ResetSelectVisitorListSelectorObjectVoid();
				HX_STACK_LINE(106)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(106)
				::String tmp8 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(106)
				::ObjectVisitor tmp9 = ::CollectionFunction_obj::FindVisitorObject(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(106)
				this->selectedVisitorObject = tmp9;
				HX_STACK_LINE(107)
				::String tmp10 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(107)
				this->selectVisitorListSelectorPrevString = tmp10;
			}
			HX_STACK_LINE(111)
			::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			if ((tmp8)){
				HX_STACK_LINE(113)
				this->UpdateDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(114)
				this->UpdateDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(116)
				bool updateSentenceBool = false;		HX_STACK_VAR(updateSentenceBool,"updateSentenceBool");
				HX_STACK_LINE(117)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(118)
				int tmp9 = this->selectedVisitorSentenceStringArray->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(118)
				::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(118)
				int tmp11 = tmp10->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				bool tmp12 = (tmp9 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				if ((tmp12)){
					HX_STACK_LINE(118)
					updateSentenceBool = true;
				}
				HX_STACK_LINE(119)
				while((true)){
					HX_STACK_LINE(119)
					int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(119)
					::ObjectVisitor tmp14 = this->selectedVisitorObject;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(119)
					int tmp15 = tmp14->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(119)
					bool tmp16 = (tmp13 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(119)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(119)
					if ((tmp17)){
						HX_STACK_LINE(119)
						break;
					}
					HX_STACK_LINE(120)
					bool tmp18 = (updateSentenceBool == true);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(120)
					if ((tmp18)){
						HX_STACK_LINE(120)
						break;
					}
					HX_STACK_LINE(121)
					::String tmp19 = this->selectedVisitorSentenceStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(121)
					::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(121)
					::String tmp21 = tmp20->GetSentenceStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(121)
					bool tmp22 = (tmp19 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(121)
					if ((tmp22)){
						HX_STACK_LINE(122)
						updateSentenceBool = true;
						HX_STACK_LINE(123)
						break;
					}
					HX_STACK_LINE(125)
					(loopCounter1Int)++;
				}
				HX_STACK_LINE(127)
				bool tmp13 = (updateSentenceBool == true);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(127)
				if ((tmp13)){
					HX_STACK_LINE(128)
					::CollectionFunction_obj::ClearArray(this->selectedVisitorSentenceStringArray);
					HX_STACK_LINE(129)
					::haxe::ui::toolkit::controls::Text tmp14 = this->displaySentenceTextObject;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(129)
					tmp14->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(130)
					::String displaySentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(displaySentenceString,"displaySentenceString");
					HX_STACK_LINE(131)
					int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
					HX_STACK_LINE(132)
					while((true)){
						HX_STACK_LINE(132)
						int tmp15 = loopCounter1Int1;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(132)
						::ObjectVisitor tmp16 = this->selectedVisitorObject;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(132)
						int tmp17 = tmp16->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(132)
						bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(132)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(132)
						if ((tmp19)){
							HX_STACK_LINE(132)
							break;
						}
						HX_STACK_LINE(133)
						::String tmp20 = displaySentenceString;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(133)
						::ObjectVisitor tmp21 = this->selectedVisitorObject;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(133)
						::String tmp22 = tmp21->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(133)
						::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(133)
						::String tmp24 = (tmp23 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(133)
						displaySentenceString = tmp24;
						HX_STACK_LINE(134)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(136)
					::haxe::ui::toolkit::controls::Text tmp15 = this->displaySentenceTextObject;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(136)
					::String tmp16 = displaySentenceString;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(136)
					tmp15->set_text(tmp16);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayExplanationTextObjectVoid",0xfca467e5,"UIPopupEditObjectVisitor.ResetDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",146,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		::haxe::ui::toolkit::controls::Text tmp = this->displayExplanationTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		tmp->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayPopularTagListSelectorObjectVoid",0x1a5d22e5,"UIPopupEditObjectVisitor.ResetDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",147,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		::haxe::ui::toolkit::data::IDataSource tmp1 = tmp->get_dataSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		tmp1->removeAll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayPopularTagListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplaySentenceTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplaySentenceTextObjectVoid",0xa9d42d57,"UIPopupEditObjectVisitor.ResetDisplaySentenceTextObjectVoid","UIPopupEditObjectVisitor.hx",148,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		::haxe::ui::toolkit::controls::Text tmp = this->displaySentenceTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		tmp->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplaySentenceTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetSelectVisitorListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetSelectVisitorListSelectorObjectVoid",0xa21dd194,"UIPopupEditObjectVisitor.ResetSelectVisitorListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",150,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		::haxe::ui::toolkit::data::IDataSource tmp1 = tmp->get_dataSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		tmp1->removeAll();
		HX_STACK_LINE(153)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(154)
		while((true)){
			HX_STACK_LINE(154)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			int tmp4 = tmp3->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			if ((tmp6)){
				HX_STACK_LINE(154)
				break;
			}
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::data::IDataSource tmp8 = tmp7->get_dataSource();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			::ObjectVisitor tmp10 = tmp9->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			::String tmp11 = tmp10->GetNameString();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(156)
			tmp8->createFromString(tmp11,null());
			HX_STACK_LINE(157)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetSelectVisitorListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayExplanationTextObjectVoid",0x6412f601,"UIPopupEditObjectVisitor.UpdateDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",163,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(164)
		bool updateExplanationBool = false;		HX_STACK_VAR(updateExplanationBool,"updateExplanationBool");
		HX_STACK_LINE(165)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(166)
		int tmp = this->selectedVisitorExplanationStringArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		::ObjectVisitor tmp1 = this->selectedVisitorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		int tmp2 = tmp1->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		if ((tmp3)){
			HX_STACK_LINE(166)
			updateExplanationBool = true;
		}
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			::ObjectVisitor tmp5 = this->selectedVisitorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(167)
			int tmp6 = tmp5->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(167)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(167)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(167)
			if ((tmp8)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(168)
			bool tmp9 = (updateExplanationBool == true);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			if ((tmp9)){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(169)
			::String tmp10 = this->selectedVisitorExplanationStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(169)
			::ObjectVisitor tmp11 = this->selectedVisitorObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(169)
			::String tmp12 = tmp11->GetExplanationStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(169)
			bool tmp13 = (tmp10 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(169)
			if ((tmp13)){
				HX_STACK_LINE(170)
				updateExplanationBool = true;
				HX_STACK_LINE(171)
				break;
			}
			HX_STACK_LINE(173)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(175)
		bool tmp4 = (updateExplanationBool == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		if ((tmp4)){
			HX_STACK_LINE(176)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorExplanationStringArray);
			HX_STACK_LINE(177)
			::haxe::ui::toolkit::controls::Text tmp5 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			tmp5->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			HX_STACK_LINE(178)
			::String displayExplanationString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(displayExplanationString,"displayExplanationString");
			HX_STACK_LINE(179)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(180)
			while((true)){
				HX_STACK_LINE(180)
				int tmp6 = loopCounter1Int1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(180)
				::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(180)
				int tmp8 = tmp7->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(180)
				bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(180)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(180)
				if ((tmp10)){
					HX_STACK_LINE(180)
					break;
				}
				HX_STACK_LINE(181)
				::String tmp11 = displayExplanationString;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(181)
				::String tmp13 = tmp12->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(181)
				::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(181)
				::String tmp15 = (tmp14 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(181)
				displayExplanationString = tmp15;
				HX_STACK_LINE(182)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(184)
			::haxe::ui::toolkit::controls::Text tmp6 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(184)
			::String tmp7 = displayExplanationString;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(184)
			tmp6->set_text(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayPopularTagListSelectorObjectVoid",0xd980d049,"UIPopupEditObjectVisitor.UpdateDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",188,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		tmp->set_selectedIndex((int)-1);
		HX_STACK_LINE(190)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp1 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		tmp1->set_text(HX_HCSTRING("Popular Tag","\x93","\xb7","\x38","\x20"));
		HX_STACK_LINE(191)
		bool updateTagBool = false;		HX_STACK_VAR(updateTagBool,"updateTagBool");
		HX_STACK_LINE(192)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(194)
		int tmp2 = this->selectedVisitorPopularTagCountIntArray->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(194)
		::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		int tmp4 = tmp3->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(194)
		if ((tmp6)){
			HX_STACK_LINE(195)
			int tmp8 = this->selectedVisitorPopularTagObjectStringArray->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(195)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(195)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(195)
			::ObjectVisitor tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(195)
			int tmp12 = tmp11->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(195)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(195)
			tmp7 = (tmp9 != tmp13);
		}
		else{
			HX_STACK_LINE(194)
			tmp7 = true;
		}
		HX_STACK_LINE(193)
		if ((tmp7)){
			HX_STACK_LINE(196)
			updateTagBool = true;
		}
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(197)
			::ObjectVisitor tmp9 = this->selectedVisitorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(197)
			int tmp10 = tmp9->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(197)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(197)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(197)
			if ((tmp12)){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(198)
			bool tmp13 = (updateTagBool == true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(198)
			if ((tmp13)){
				HX_STACK_LINE(198)
				break;
			}
			HX_STACK_LINE(199)
			int tmp14 = this->selectedVisitorPopularTagCountIntArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(199)
			::ObjectVisitor tmp15 = this->selectedVisitorObject;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(199)
			Dynamic tmp16 = tmp15->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(199)
			int tmp17 = tmp16->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(199)
			bool tmp18 = (tmp14 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(199)
			if ((tmp18)){
				HX_STACK_LINE(199)
				updateTagBool = true;
				HX_STACK_LINE(199)
				break;
			}
			HX_STACK_LINE(200)
			::String tmp19 = this->selectedVisitorPopularTagObjectStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(200)
			::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(200)
			Dynamic tmp21 = tmp20->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(200)
			::String tmp22 = tmp21->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(200)
			bool tmp23 = (tmp19 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(200)
			if ((tmp23)){
				HX_STACK_LINE(200)
				updateTagBool = true;
				HX_STACK_LINE(200)
				break;
			}
			HX_STACK_LINE(201)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(203)
		bool tmp8 = (updateTagBool == true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(203)
		if ((tmp8)){
			HX_STACK_LINE(204)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagCountIntArray);
			HX_STACK_LINE(205)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagObjectStringArray);
			HX_STACK_LINE(206)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(206)
			::haxe::ui::toolkit::data::IDataSource tmp10 = tmp9->get_dataSource();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			tmp10->removeAll();
			HX_STACK_LINE(207)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(208)
				::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(208)
				int tmp13 = tmp12->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(208)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(208)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(208)
				if ((tmp15)){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(210)
				::ObjectVisitor tmp16 = this->selectedVisitorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(210)
				Dynamic tmp17 = tmp16->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(210)
				int tmp18 = tmp17->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(210)
				this->selectedVisitorPopularTagCountIntArray->push(tmp18);
				HX_STACK_LINE(211)
				::ObjectVisitor tmp19 = this->selectedVisitorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(211)
				Dynamic tmp20 = tmp19->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(211)
				::String tmp21 = tmp20->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(211)
				this->selectedVisitorPopularTagObjectStringArray->push(tmp21);
				HX_STACK_LINE(213)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(213)
				::haxe::ui::toolkit::data::IDataSource tmp23 = tmp22->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(214)
				::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(214)
				Dynamic tmp25 = tmp24->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(214)
				int tmp26 = tmp25->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(214)
				::String tmp27 = (tmp26 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(216)
				::ObjectVisitor tmp28 = this->selectedVisitorObject;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(216)
				Dynamic tmp29 = tmp28->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(216)
				::String tmp30 = tmp29->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(214)
				::String tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(213)
				tmp23->createFromString(tmp31,null());
				HX_STACK_LINE(218)
				(loopCounter1Int1)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayPopularTagListSelectorObjectVoid,(void))


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
	HX_MARK_MEMBER_NAME(displaySentenceTextObject,"displaySentenceTextObject");
	HX_MARK_MEMBER_NAME(displayTargetExhibitionTextObject,"displayTargetExhibitionTextObject");
	HX_MARK_MEMBER_NAME(displayVisitorIndexTextObject,"displayVisitorIndexTextObject");
	HX_MARK_MEMBER_NAME(gridObject,"gridObject");
	HX_MARK_MEMBER_NAME(inputNameTextInputObject,"inputNameTextInputObject");
	HX_MARK_MEMBER_NAME(mainButtonObject,"mainButtonObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(resetButtonObject,"resetButtonObject");
	HX_MARK_MEMBER_NAME(selectCurrentExhibitionListSelectorObject,"selectCurrentExhibitionListSelectorObject");
	HX_MARK_MEMBER_NAME(selectedVisitorExplanationStringArray,"selectedVisitorExplanationStringArray");
	HX_MARK_MEMBER_NAME(selectedVisitorSentenceStringArray,"selectedVisitorSentenceStringArray");
	HX_MARK_MEMBER_NAME(selectedVisitorObject,"selectedVisitorObject");
	HX_MARK_MEMBER_NAME(selectedVisitorPopularTagCountIntArray,"selectedVisitorPopularTagCountIntArray");
	HX_MARK_MEMBER_NAME(selectedVisitorPopularTagObjectStringArray,"selectedVisitorPopularTagObjectStringArray");
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
	HX_VISIT_MEMBER_NAME(displaySentenceTextObject,"displaySentenceTextObject");
	HX_VISIT_MEMBER_NAME(displayTargetExhibitionTextObject,"displayTargetExhibitionTextObject");
	HX_VISIT_MEMBER_NAME(displayVisitorIndexTextObject,"displayVisitorIndexTextObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(inputNameTextInputObject,"inputNameTextInputObject");
	HX_VISIT_MEMBER_NAME(mainButtonObject,"mainButtonObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(resetButtonObject,"resetButtonObject");
	HX_VISIT_MEMBER_NAME(selectCurrentExhibitionListSelectorObject,"selectCurrentExhibitionListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectedVisitorExplanationStringArray,"selectedVisitorExplanationStringArray");
	HX_VISIT_MEMBER_NAME(selectedVisitorSentenceStringArray,"selectedVisitorSentenceStringArray");
	HX_VISIT_MEMBER_NAME(selectedVisitorObject,"selectedVisitorObject");
	HX_VISIT_MEMBER_NAME(selectedVisitorPopularTagCountIntArray,"selectedVisitorPopularTagCountIntArray");
	HX_VISIT_MEMBER_NAME(selectedVisitorPopularTagObjectStringArray,"selectedVisitorPopularTagObjectStringArray");
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
	case 25:
		if (HX_FIELD_EQ(inName,"displaySentenceTextObject") ) { return displaySentenceTextObject; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"displayExplanationTextObject") ) { return displayExplanationTextObject; }
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { return selectModeListSelectorObject; }
		break;
	case 29:
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
		if (HX_FIELD_EQ(inName,"ResetDisplaySentenceTextObjectVoid") ) { return ResetDisplaySentenceTextObjectVoid_dyn(); }
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
		if (HX_FIELD_EQ(inName,"UpdateDisplayExplanationTextObjectVoid") ) { return UpdateDisplayExplanationTextObjectVoid_dyn(); }
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
	case 25:
		if (HX_FIELD_EQ(inName,"displaySentenceTextObject") ) { displaySentenceTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"displayExplanationTextObject") ) { displayExplanationTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectModeListSelectorObject") ) { selectModeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 29:
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
	outFields->push(HX_HCSTRING("displaySentenceTextObject","\xb1","\xc8","\x8a","\xd0"));
	outFields->push(HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72"));
	outFields->push(HX_HCSTRING("displayVisitorIndexTextObject","\xd2","\x40","\x86","\x95"));
	outFields->push(HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"));
	outFields->push(HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac"));
	outFields->push(HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("resetButtonObject","\xc0","\xe6","\x46","\xc2"));
	outFields->push(HX_HCSTRING("selectCurrentExhibitionListSelectorObject","\xa8","\xba","\xdf","\x70"));
	outFields->push(HX_HCSTRING("selectedVisitorExplanationStringArray","\x22","\x87","\x84","\x62"));
	outFields->push(HX_HCSTRING("selectedVisitorSentenceStringArray","\x52","\xdc","\xe8","\xc2"));
	outFields->push(HX_HCSTRING("selectedVisitorObject","\xb2","\x95","\x06","\x2b"));
	outFields->push(HX_HCSTRING("selectedVisitorPopularTagCountIntArray","\x45","\xfa","\xe2","\xf3"));
	outFields->push(HX_HCSTRING("selectedVisitorPopularTagObjectStringArray","\xb5","\xcc","\x09","\x38"));
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
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displaySentenceTextObject),HX_HCSTRING("displaySentenceTextObject","\xb1","\xc8","\x8a","\xd0")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayTargetExhibitionTextObject),HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displayVisitorIndexTextObject),HX_HCSTRING("displayVisitorIndexTextObject","\xd2","\x40","\x86","\x95")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,inputNameTextInputObject),HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,mainButtonObject),HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,resetButtonObject),HX_HCSTRING("resetButtonObject","\xc0","\xe6","\x46","\xc2")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectCurrentExhibitionListSelectorObject),HX_HCSTRING("selectCurrentExhibitionListSelectorObject","\xa8","\xba","\xdf","\x70")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorExplanationStringArray),HX_HCSTRING("selectedVisitorExplanationStringArray","\x22","\x87","\x84","\x62")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorSentenceStringArray),HX_HCSTRING("selectedVisitorSentenceStringArray","\x52","\xdc","\xe8","\xc2")},
	{hx::fsObject /*::ObjectVisitor*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorObject),HX_HCSTRING("selectedVisitorObject","\xb2","\x95","\x06","\x2b")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorPopularTagCountIntArray),HX_HCSTRING("selectedVisitorPopularTagCountIntArray","\x45","\xfa","\xe2","\xf3")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,selectedVisitorPopularTagObjectStringArray),HX_HCSTRING("selectedVisitorPopularTagObjectStringArray","\xb5","\xcc","\x09","\x38")},
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
	HX_HCSTRING("displaySentenceTextObject","\xb1","\xc8","\x8a","\xd0"),
	HX_HCSTRING("displayTargetExhibitionTextObject","\x4e","\xcb","\x77","\x72"),
	HX_HCSTRING("displayVisitorIndexTextObject","\xd2","\x40","\x86","\x95"),
	HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"),
	HX_HCSTRING("inputNameTextInputObject","\xc7","\x3e","\x36","\xac"),
	HX_HCSTRING("mainButtonObject","\x2a","\xcc","\xb5","\x99"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("resetButtonObject","\xc0","\xe6","\x46","\xc2"),
	HX_HCSTRING("selectCurrentExhibitionListSelectorObject","\xa8","\xba","\xdf","\x70"),
	HX_HCSTRING("selectedVisitorExplanationStringArray","\x22","\x87","\x84","\x62"),
	HX_HCSTRING("selectedVisitorSentenceStringArray","\x52","\xdc","\xe8","\xc2"),
	HX_HCSTRING("selectedVisitorObject","\xb2","\x95","\x06","\x2b"),
	HX_HCSTRING("selectedVisitorPopularTagCountIntArray","\x45","\xfa","\xe2","\xf3"),
	HX_HCSTRING("selectedVisitorPopularTagObjectStringArray","\xb5","\xcc","\x09","\x38"),
	HX_HCSTRING("selectModeListSelectorObject","\x9b","\x98","\x96","\x42"),
	HX_HCSTRING("selectVisitorListSelectorObject","\xee","\x78","\xd8","\x97"),
	HX_HCSTRING("selectVisitorListSelectorPrevString","\xd3","\xd1","\x18","\xfd"),
	HX_HCSTRING("selectVisitorListSelectorString","\x00","\x23","\xc9","\x93"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	HX_HCSTRING("ResetDisplayExplanationTextObjectVoid","\x26","\x27","\xd7","\xf8"),
	HX_HCSTRING("ResetDisplayPopularTagListSelectorObjectVoid","\xc4","\x3d","\x5f","\x11"),
	HX_HCSTRING("ResetDisplaySentenceTextObjectVoid","\x76","\xcb","\x75","\xcc"),
	HX_HCSTRING("ResetSelectVisitorListSelectorObjectVoid","\xf3","\x50","\xe3","\x3b"),
	HX_HCSTRING("UpdateDisplayExplanationTextObjectVoid","\xa0","\x8f","\x47","\x14"),
	HX_HCSTRING("UpdateDisplayPopularTagListSelectorObjectVoid","\x8a","\x38","\x56","\x04"),
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

