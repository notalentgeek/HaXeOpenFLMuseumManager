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
	this->displaySentenceTextObject = null();
	HX_STACK_LINE(28)
	this->displaySentencePopupObject = null();
	HX_STACK_LINE(27)
	this->displaySentenceButtonObject = null();
	HX_STACK_LINE(26)
	this->displayPreviousVisitorTextObject = null();
	HX_STACK_LINE(25)
	this->displayPopularTagListSelectorObject = null();
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
			::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPopularTag","\x71","\x23","\xc9","\x5b"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			_g->displayPopularTagListSelectorObject = tmp10;
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::Text tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectVisitor_DisplayPreviousVisitor","\x87","\x41","\x94","\x69"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
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
			_g->displayPopularTagListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(83)
			_g->selectCurrentExhibitionListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(84)
			_g->selectModeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(85)
			_g->selectVisitorListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::UIPopupEditObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(::haxe::ui::toolkit::events::UIEvent _e1){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","UIPopupEditObjectVisitor.hx",87,0x96ef98f1)
				HX_STACK_ARG(_e1,"_e1")
				{
					HX_STACK_LINE(89)
					int buttonControlInt1 = (int)0;		HX_STACK_VAR(buttonControlInt1,"buttonControlInt1");
					HX_STACK_LINE(90)
					hx::OrEq(buttonControlInt1,(int)1);
					HX_STACK_LINE(92)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp31 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupDisplaySentence.xml","\x1b","\x56","\xc1","\xf5"));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(92)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject1 = tmp31;		HX_STACK_VAR(iDisplayObject1,"iDisplayObject1");
					HX_STACK_LINE(93)
					::haxe::ui::toolkit::core::PopupManager tmp32 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(93)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp33 = iDisplayObject1;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(93)
					int tmp34 = buttonControlInt1;		HX_STACK_VAR(tmp34,"tmp34");

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_1)
					int __ArgCount() const { return 1; }
					Void run(Dynamic _button){
						HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","UIPopupEditObjectVisitor.hx",93,0x96ef98f1)
						HX_STACK_ARG(_button,"_button")
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(93)
					::haxe::ui::toolkit::controls::popups::Popup tmp35 = tmp32->showCustom(tmp33,HX_HCSTRING("Edit Visitor","\x98","\xbf","\x3a","\x1a"),tmp34, Dynamic(new _Function_3_1()));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(93)
					_g->displaySentencePopupObject = tmp35;
					HX_STACK_LINE(94)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp36 = _g->displaySentencePopupObject->get_content();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(94)
					::haxe::ui::toolkit::controls::Text tmp37 = tmp36->findChild(HX_HCSTRING("UIPopupDisplaySentence_DisplaySentence","\x13","\xb6","\x2a","\xad"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(94)
					_g->displaySentenceTextObject = tmp37;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(87)
			_g->displaySentenceButtonObject->set_onClick( Dynamic(new _Function_2_2(_g)));
			HX_STACK_LINE(99)
			_g->ResetDisplayExplanationTextObjectVoid();
			HX_STACK_LINE(100)
			_g->ResetDisplayPopularTagListSelectorObjectVoid();
			HX_STACK_LINE(101)
			_g->ResetDisplaySentenceTextObjectVoid();
			HX_STACK_LINE(103)
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
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateVoid",0x87db38fe,"UIPopupEditObjectVisitor.UpdateVoid","UIPopupEditObjectVisitor.hx",109,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(113)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			this->selectVisitorListSelectorString = tmp3;
			HX_STACK_LINE(114)
			::String tmp4 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			::String tmp5 = this->selectVisitorListSelectorPrevString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(114)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			if ((tmp6)){
				HX_STACK_LINE(116)
				this->ResetDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(117)
				this->ResetDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(118)
				this->ResetDisplaySentenceTextObjectVoid();
				HX_STACK_LINE(120)
				this->ResetSelectVisitorListSelectorObjectVoid();
				HX_STACK_LINE(122)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(122)
				::String tmp8 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(122)
				::ObjectVisitor tmp9 = ::CollectionFunction_obj::FindVisitorObject(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(122)
				this->selectedVisitorObject = tmp9;
				HX_STACK_LINE(123)
				::String tmp10 = this->selectVisitorListSelectorString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(123)
				this->selectVisitorListSelectorPrevString = tmp10;
			}
			HX_STACK_LINE(127)
			::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(127)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			if ((tmp8)){
				HX_STACK_LINE(129)
				this->UpdateDisplayExplanationTextObjectVoid();
				HX_STACK_LINE(130)
				this->UpdateDisplayPopularTagListSelectorObjectVoid();
				HX_STACK_LINE(132)
				::haxe::ui::toolkit::controls::popups::Popup tmp9 = this->displaySentencePopupObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(132)
				bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(132)
				if ((tmp10)){
					HX_STACK_LINE(133)
					bool updateSentenceBool = false;		HX_STACK_VAR(updateSentenceBool,"updateSentenceBool");
					HX_STACK_LINE(134)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(135)
					int tmp11 = this->selectedVisitorSentenceStringArray->length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(135)
					::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(135)
					int tmp13 = tmp12->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(135)
					bool tmp14 = (tmp11 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(135)
					if ((tmp14)){
						HX_STACK_LINE(135)
						updateSentenceBool = true;
					}
					HX_STACK_LINE(136)
					while((true)){
						HX_STACK_LINE(136)
						int tmp15 = loopCounter1Int;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(136)
						::ObjectVisitor tmp16 = this->selectedVisitorObject;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(136)
						int tmp17 = tmp16->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(136)
						bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(136)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(136)
						if ((tmp19)){
							HX_STACK_LINE(136)
							break;
						}
						HX_STACK_LINE(137)
						bool tmp20 = (updateSentenceBool == true);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(137)
						if ((tmp20)){
							HX_STACK_LINE(137)
							break;
						}
						HX_STACK_LINE(138)
						::String tmp21 = this->selectedVisitorSentenceStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(138)
						::ObjectVisitor tmp22 = this->selectedVisitorObject;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(138)
						::String tmp23 = tmp22->GetSentenceStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(138)
						bool tmp24 = (tmp21 != tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(138)
						if ((tmp24)){
							HX_STACK_LINE(139)
							updateSentenceBool = true;
							HX_STACK_LINE(140)
							break;
						}
						HX_STACK_LINE(142)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(144)
					bool tmp15 = (updateSentenceBool == true);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(144)
					if ((tmp15)){
						HX_STACK_LINE(145)
						::CollectionFunction_obj::ClearArray(this->selectedVisitorSentenceStringArray);
						HX_STACK_LINE(146)
						::haxe::ui::toolkit::controls::Text tmp16 = this->displaySentenceTextObject;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(146)
						bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(146)
						if ((tmp17)){
							HX_STACK_LINE(147)
							::haxe::ui::toolkit::controls::Text tmp18 = this->displaySentenceTextObject;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(147)
							tmp18->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
							HX_STACK_LINE(148)
							::String displaySentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(displaySentenceString,"displaySentenceString");
							HX_STACK_LINE(149)
							int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
							HX_STACK_LINE(150)
							while((true)){
								HX_STACK_LINE(150)
								int tmp19 = loopCounter1Int1;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(150)
								::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(150)
								int tmp21 = tmp20->GetSentenceStringArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(150)
								bool tmp22 = (tmp19 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(150)
								bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(150)
								if ((tmp23)){
									HX_STACK_LINE(150)
									break;
								}
								HX_STACK_LINE(151)
								::String tmp24 = displaySentenceString;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(151)
								::ObjectVisitor tmp25 = this->selectedVisitorObject;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(151)
								::String tmp26 = tmp25->GetSentenceStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(151)
								::String tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(151)
								displaySentenceString = tmp27;
								HX_STACK_LINE(152)
								(loopCounter1Int1)++;
							}
							HX_STACK_LINE(154)
							::haxe::ui::toolkit::controls::Text tmp19 = this->displaySentenceTextObject;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(154)
							::String tmp20 = displaySentenceString;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(154)
							tmp19->set_text(tmp20);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayExplanationTextObjectVoid",0xfca467e5,"UIPopupEditObjectVisitor.ResetDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",165,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		::haxe::ui::toolkit::controls::Text tmp = this->displayExplanationTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		tmp->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplayPopularTagListSelectorObjectVoid",0x1a5d22e5,"UIPopupEditObjectVisitor.ResetDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",166,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		::haxe::ui::toolkit::data::IDataSource tmp1 = tmp->get_dataSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		tmp1->removeAll();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplayPopularTagListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetDisplaySentenceTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetDisplaySentenceTextObjectVoid",0xa9d42d57,"UIPopupEditObjectVisitor.ResetDisplaySentenceTextObjectVoid","UIPopupEditObjectVisitor.hx",167,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(167)
		::haxe::ui::toolkit::controls::Text tmp = this->displaySentenceTextObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		if ((tmp1)){
			HX_STACK_LINE(167)
			::haxe::ui::toolkit::controls::Text tmp2 = this->displaySentenceTextObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			tmp2->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetDisplaySentenceTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::ResetSelectVisitorListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","ResetSelectVisitorListSelectorObjectVoid",0xa21dd194,"UIPopupEditObjectVisitor.ResetSelectVisitorListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",169,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(171)
		::haxe::ui::toolkit::data::IDataSource tmp1 = tmp->get_dataSource();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		tmp1->removeAll();
		HX_STACK_LINE(172)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(173)
		while((true)){
			HX_STACK_LINE(173)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			int tmp4 = tmp3->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(173)
			if ((tmp6)){
				HX_STACK_LINE(173)
				break;
			}
			HX_STACK_LINE(175)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			::haxe::ui::toolkit::data::IDataSource tmp8 = tmp7->get_dataSource();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(175)
			::ObjectVisitor tmp10 = tmp9->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(175)
			::String tmp11 = tmp10->GetNameString();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(175)
			tmp8->createFromString(tmp11,null());
			HX_STACK_LINE(176)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,ResetSelectVisitorListSelectorObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayExplanationTextObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayExplanationTextObjectVoid",0x6412f601,"UIPopupEditObjectVisitor.UpdateDisplayExplanationTextObjectVoid","UIPopupEditObjectVisitor.hx",182,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		bool updateExplanationBool = false;		HX_STACK_VAR(updateExplanationBool,"updateExplanationBool");
		HX_STACK_LINE(184)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(185)
		int tmp = this->selectedVisitorExplanationStringArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		::ObjectVisitor tmp1 = this->selectedVisitorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		int tmp2 = tmp1->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		if ((tmp3)){
			HX_STACK_LINE(185)
			updateExplanationBool = true;
		}
		HX_STACK_LINE(186)
		while((true)){
			HX_STACK_LINE(186)
			int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(186)
			::ObjectVisitor tmp5 = this->selectedVisitorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(186)
			int tmp6 = tmp5->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(186)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(186)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(186)
			if ((tmp8)){
				HX_STACK_LINE(186)
				break;
			}
			HX_STACK_LINE(187)
			bool tmp9 = (updateExplanationBool == true);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(187)
			if ((tmp9)){
				HX_STACK_LINE(187)
				break;
			}
			HX_STACK_LINE(188)
			::String tmp10 = this->selectedVisitorExplanationStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(188)
			::ObjectVisitor tmp11 = this->selectedVisitorObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(188)
			::String tmp12 = tmp11->GetExplanationStringArray()->__get(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(188)
			bool tmp13 = (tmp10 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(188)
			if ((tmp13)){
				HX_STACK_LINE(189)
				updateExplanationBool = true;
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(192)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(194)
		bool tmp4 = (updateExplanationBool == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		if ((tmp4)){
			HX_STACK_LINE(195)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorExplanationStringArray);
			HX_STACK_LINE(196)
			::haxe::ui::toolkit::controls::Text tmp5 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(196)
			tmp5->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			HX_STACK_LINE(197)
			::String displayExplanationString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(displayExplanationString,"displayExplanationString");
			HX_STACK_LINE(198)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(199)
			while((true)){
				HX_STACK_LINE(199)
				int tmp6 = loopCounter1Int1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(199)
				::ObjectVisitor tmp7 = this->selectedVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(199)
				int tmp8 = tmp7->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(199)
				bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(199)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(199)
				if ((tmp10)){
					HX_STACK_LINE(199)
					break;
				}
				HX_STACK_LINE(200)
				::String tmp11 = displayExplanationString;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(200)
				::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(200)
				::String tmp13 = tmp12->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(200)
				::String tmp14 = (tmp11 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(200)
				::String tmp15 = (tmp14 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(200)
				displayExplanationString = tmp15;
				HX_STACK_LINE(201)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(203)
			::haxe::ui::toolkit::controls::Text tmp6 = this->displayExplanationTextObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			::String tmp7 = displayExplanationString;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(203)
			tmp6->set_text(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectVisitor_obj,UpdateDisplayExplanationTextObjectVoid,(void))

Void UIPopupEditObjectVisitor_obj::UpdateDisplayPopularTagListSelectorObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectVisitor","UpdateDisplayPopularTagListSelectorObjectVoid",0xd980d049,"UIPopupEditObjectVisitor.UpdateDisplayPopularTagListSelectorObjectVoid","UIPopupEditObjectVisitor.hx",207,0x96ef98f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		tmp->set_selectedIndex((int)-1);
		HX_STACK_LINE(209)
		::haxe::ui::toolkit::controls::selection::ListSelector tmp1 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		tmp1->set_text(HX_HCSTRING("Popular Tag","\x93","\xb7","\x38","\x20"));
		HX_STACK_LINE(210)
		bool updateTagBool = false;		HX_STACK_VAR(updateTagBool,"updateTagBool");
		HX_STACK_LINE(211)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(213)
		int tmp2 = this->selectedVisitorPopularTagCountIntArray->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		::ObjectVisitor tmp3 = this->selectedVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(213)
		int tmp4 = tmp3->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		bool tmp5 = (tmp2 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(213)
		if ((tmp6)){
			HX_STACK_LINE(214)
			int tmp8 = this->selectedVisitorPopularTagObjectStringArray->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(214)
			::ObjectVisitor tmp10 = this->selectedVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			::ObjectVisitor tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			int tmp12 = tmp11->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(214)
			tmp7 = (tmp9 != tmp13);
		}
		else{
			HX_STACK_LINE(213)
			tmp7 = true;
		}
		HX_STACK_LINE(212)
		if ((tmp7)){
			HX_STACK_LINE(215)
			updateTagBool = true;
		}
		HX_STACK_LINE(216)
		while((true)){
			HX_STACK_LINE(216)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(216)
			::ObjectVisitor tmp9 = this->selectedVisitorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(216)
			int tmp10 = tmp9->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(216)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(216)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(216)
			if ((tmp12)){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(217)
			bool tmp13 = (updateTagBool == true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(217)
			if ((tmp13)){
				HX_STACK_LINE(217)
				break;
			}
			HX_STACK_LINE(218)
			int tmp14 = this->selectedVisitorPopularTagCountIntArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(218)
			::ObjectVisitor tmp15 = this->selectedVisitorObject;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(218)
			Dynamic tmp16 = tmp15->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(218)
			int tmp17 = tmp16->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(218)
			bool tmp18 = (tmp14 != tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(218)
			if ((tmp18)){
				HX_STACK_LINE(218)
				updateTagBool = true;
				HX_STACK_LINE(218)
				break;
			}
			HX_STACK_LINE(219)
			::String tmp19 = this->selectedVisitorPopularTagObjectStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(219)
			::ObjectVisitor tmp20 = this->selectedVisitorObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(219)
			Dynamic tmp21 = tmp20->GetTagCounterStructArray()->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(219)
			::String tmp22 = tmp21->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(219)
			bool tmp23 = (tmp19 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(219)
			if ((tmp23)){
				HX_STACK_LINE(219)
				updateTagBool = true;
				HX_STACK_LINE(219)
				break;
			}
			HX_STACK_LINE(220)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(222)
		bool tmp8 = (updateTagBool == true);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		if ((tmp8)){
			HX_STACK_LINE(223)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagCountIntArray);
			HX_STACK_LINE(224)
			::CollectionFunction_obj::ClearArray(this->selectedVisitorPopularTagObjectStringArray);
			HX_STACK_LINE(225)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(225)
			::haxe::ui::toolkit::data::IDataSource tmp10 = tmp9->get_dataSource();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(225)
			tmp10->removeAll();
			HX_STACK_LINE(226)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				::ObjectVisitor tmp12 = this->selectedVisitorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(227)
				int tmp13 = tmp12->GetTagCounterStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(227)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(227)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(227)
				if ((tmp15)){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(229)
				::ObjectVisitor tmp16 = this->selectedVisitorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(229)
				Dynamic tmp17 = tmp16->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(229)
				int tmp18 = tmp17->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(229)
				this->selectedVisitorPopularTagCountIntArray->push(tmp18);
				HX_STACK_LINE(230)
				::ObjectVisitor tmp19 = this->selectedVisitorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(230)
				Dynamic tmp20 = tmp19->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(230)
				::String tmp21 = tmp20->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(230)
				this->selectedVisitorPopularTagObjectStringArray->push(tmp21);
				HX_STACK_LINE(232)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->displayPopularTagListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(232)
				::haxe::ui::toolkit::data::IDataSource tmp23 = tmp22->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(233)
				::ObjectVisitor tmp24 = this->selectedVisitorObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(233)
				Dynamic tmp25 = tmp24->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(233)
				int tmp26 = tmp25->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(233)
				::String tmp27 = (tmp26 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(235)
				::ObjectVisitor tmp28 = this->selectedVisitorObject;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(235)
				Dynamic tmp29 = tmp28->GetTagCounterStructArray()->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(235)
				::String tmp30 = tmp29->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(233)
				::String tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(232)
				tmp23->createFromString(tmp31,null());
				HX_STACK_LINE(237)
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
	HX_MARK_MEMBER_NAME(displaySentenceButtonObject,"displaySentenceButtonObject");
	HX_MARK_MEMBER_NAME(displaySentencePopupObject,"displaySentencePopupObject");
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
	HX_VISIT_MEMBER_NAME(displaySentencePopupObject,"displaySentencePopupObject");
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
	case 25:
		if (HX_FIELD_EQ(inName,"displaySentenceTextObject") ) { return displaySentenceTextObject; }
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
	outFields->push(HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5"));
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
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectVisitor_obj,displaySentencePopupObject),HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5")},
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
	HX_HCSTRING("displaySentencePopupObject","\x06","\x55","\x92","\xf5"),
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

