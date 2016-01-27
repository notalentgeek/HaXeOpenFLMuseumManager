#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectTag
#include <UIPopupAddObjectTag.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif

Void UIPopupAddObjectTag_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupAddObjectTag","new",0xf3b7a7c4,"UIPopupAddObjectTag.new","UIPopupAddObjectTag.hx",25,0x52997c2c)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(57)
	this->textInputStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(56)
	this->selectTagTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(55)
	this->selectTagTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(54)
	this->selectTagTypeListSelectorObject = null();
	HX_STACK_LINE(53)
	this->popupObject = null();
	HX_STACK_LINE(52)
	this->inputVerbSTextObject = null();
	HX_STACK_LINE(51)
	this->inputVerbIngTextObject = null();
	HX_STACK_LINE(50)
	this->inputVerb3TextObject = null();
	HX_STACK_LINE(49)
	this->inputVerb2TextObject = null();
	HX_STACK_LINE(48)
	this->inputVerb1TextObject = null();
	HX_STACK_LINE(47)
	this->inputNounTextObject = null();
	HX_STACK_LINE(46)
	this->inputNounSTextObject = null();
	HX_STACK_LINE(45)
	this->inputNounSPosTextObject = null();
	HX_STACK_LINE(44)
	this->inputNounPosTextObject = null();
	HX_STACK_LINE(43)
	this->inputAdvTextObject = null();
	HX_STACK_LINE(42)
	this->inputAdjTextObject = null();
	HX_STACK_LINE(41)
	this->inputVerbSTextInputObject = null();
	HX_STACK_LINE(40)
	this->inputVerbIngTextInputObject = null();
	HX_STACK_LINE(39)
	this->inputVerb3TextInputObject = null();
	HX_STACK_LINE(38)
	this->inputVerb2TextInputObject = null();
	HX_STACK_LINE(37)
	this->inputVerb1TextInputObject = null();
	HX_STACK_LINE(36)
	this->inputTagNameTextInputObject = null();
	HX_STACK_LINE(35)
	this->inputNounTextInputObject = null();
	HX_STACK_LINE(34)
	this->inputNounSTextInputObject = null();
	HX_STACK_LINE(33)
	this->inputNounSPosTextInputObject = null();
	HX_STACK_LINE(32)
	this->inputNounPosTextInputObject = null();
	HX_STACK_LINE(31)
	this->inputAdvTextInputObject = null();
	HX_STACK_LINE(30)
	this->inputAdjTextInputObject = null();
	HX_STACK_LINE(29)
	this->gridObject = null();
	HX_STACK_LINE(28)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(27)
	this->buttonObject = null();
	HX_STACK_LINE(59)
	::UIPopupAddObjectTag _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(61)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(64)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupAddTagObjectButton","\xc2","\x67","\x62","\x5b"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	this->buttonObject = tmp;
	HX_STACK_LINE(66)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupAddObjectTag,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupAddObjectTag.hx",66,0x52997c2c)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(69)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(70)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(71)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupAddObjectTag.xml","\x96","\x47","\x8c","\x3c"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupAddObjectTag.hx",74,0x52997c2c)
				HX_STACK_ARG(_button,"_button")
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Add Visitor","\x6f","\xa2","\xae","\xd2"),tmp5, Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			_g->popupObject = tmp6;
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::containers::Grid tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupAddObjectTag_Grid","\xb3","\x0f","\xe0","\x69"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(76)
			_g->gridObject = tmp8;
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::controls::TextInput tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupAddObjectTag_InputName","\x68","\x7b","\xff","\x64"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(77)
			_g->inputTagNameTextInputObject = tmp10;
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(78)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupAddObjectTag_SelectTagType","\x0b","\x14","\x73","\xce"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(78)
			_g->selectTagTypeListSelectorObject = tmp12;
			HX_STACK_LINE(79)
			_g->selectTagTypeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(81)
			_g->CreateGUIObjectVoid();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(66)
	tmp1->set_onClick( Dynamic(new _Function_1_1(_g)));
}
;
	return null();
}

//UIPopupAddObjectTag_obj::~UIPopupAddObjectTag_obj() { }

Dynamic UIPopupAddObjectTag_obj::__CreateEmpty() { return  new UIPopupAddObjectTag_obj; }
hx::ObjectPtr< UIPopupAddObjectTag_obj > UIPopupAddObjectTag_obj::__new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{  hx::ObjectPtr< UIPopupAddObjectTag_obj > _result_ = new UIPopupAddObjectTag_obj();
	_result_->__construct(_collectionGlobalObject,_root);
	return _result_;}

Dynamic UIPopupAddObjectTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPopupAddObjectTag_obj > _result_ = new UIPopupAddObjectTag_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void UIPopupAddObjectTag_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("UIPopupAddObjectTag","UpdateVoid",0x42434f39,"UIPopupAddObjectTag.UpdateVoid","UIPopupAddObjectTag.hx",86,0x52997c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		if ((tmp1)){
			HX_STACK_LINE(90)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			this->selectTagTypeListSelectorString = tmp3;
			HX_STACK_LINE(91)
			::String tmp4 = this->selectTagTypeListSelectorString;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::String tmp5 = this->selectTagTypeListSelectorPrevString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			if ((tmp6)){
				HX_STACK_LINE(93)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(94)
				while((true)){
					HX_STACK_LINE(94)
					int tmp7 = loopCounter1Int;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(94)
					int tmp8 = this->textInputStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(94)
					bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(94)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(94)
					if ((tmp10)){
						HX_STACK_LINE(94)
						break;
					}
					HX_STACK_LINE(96)
					::haxe::ui::toolkit::containers::Grid tmp11 = this->gridObject;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(96)
					Dynamic tmp12 = this->textInputStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(96)
					::haxe::ui::toolkit::controls::Text tmp13 = tmp12->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(96)
					tmp11->removeChild(tmp13,null());
					HX_STACK_LINE(97)
					::haxe::ui::toolkit::containers::Grid tmp14 = this->gridObject;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(97)
					Dynamic tmp15 = this->textInputStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(97)
					::haxe::ui::toolkit::controls::TextInput tmp16 = tmp15->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(97)
					tmp14->removeChild(tmp16,null());
					HX_STACK_LINE(98)
					(loopCounter1Int)++;
				}
				HX_STACK_LINE(101)
				::CollectionFunction_obj::ClearArray(this->textInputStructArray);
				HX_STACK_LINE(102)
				this->CreateGUIObjectVoid();
				HX_STACK_LINE(104)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp7 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(104)
				::String tmp8 = tmp7->get_text();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(104)
				bool tmp9 = (tmp8 == HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(104)
				if ((tmp9)){
					HX_STACK_LINE(106)
					::haxe::ui::toolkit::controls::Text tmp10 = this->inputAdjTextObject;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(107)
					::haxe::ui::toolkit::controls::TextInput tmp11 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp11,"tmp11");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp11,::haxe::ui::toolkit::controls::Text &tmp10){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",105,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp10,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp11,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(105)
					Dynamic tmp12 = _Function_4_1::Block(tmp11,tmp10);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(105)
					Dynamic textInputStruct = tmp12;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(109)
					Dynamic tmp13 = textInputStruct;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(109)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp13);
					HX_STACK_LINE(110)
					::haxe::ui::toolkit::containers::Grid tmp14 = this->gridObject;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(110)
					::haxe::ui::toolkit::controls::Text tmp15 = this->inputAdjTextObject;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(110)
					tmp14->addChild(tmp15);
					HX_STACK_LINE(111)
					::haxe::ui::toolkit::containers::Grid tmp16 = this->gridObject;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(111)
					::haxe::ui::toolkit::controls::TextInput tmp17 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(111)
					tmp16->addChild(tmp17);
				}
				HX_STACK_LINE(113)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(113)
				::String tmp11 = tmp10->get_text();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(113)
				bool tmp12 = (tmp11 == HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(113)
				if ((tmp12)){
					HX_STACK_LINE(115)
					::haxe::ui::toolkit::controls::Text tmp13 = this->inputAdvTextObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(116)
					::haxe::ui::toolkit::controls::TextInput tmp14 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp14,"tmp14");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp13,::haxe::ui::toolkit::controls::TextInput &tmp14){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",114,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp13,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp14,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(114)
					Dynamic tmp15 = _Function_4_1::Block(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(114)
					Dynamic textInputStruct = tmp15;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(118)
					Dynamic tmp16 = textInputStruct;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(118)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp16);
					HX_STACK_LINE(119)
					::haxe::ui::toolkit::containers::Grid tmp17 = this->gridObject;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(119)
					::haxe::ui::toolkit::controls::Text tmp18 = this->inputAdvTextObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(119)
					tmp17->addChild(tmp18);
					HX_STACK_LINE(120)
					::haxe::ui::toolkit::containers::Grid tmp19 = this->gridObject;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(120)
					::haxe::ui::toolkit::controls::TextInput tmp20 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(120)
					tmp19->addChild(tmp20);
				}
				HX_STACK_LINE(122)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(122)
				::String tmp14 = tmp13->get_text();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(122)
				bool tmp15 = (tmp14 == HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(122)
				if ((tmp15)){
					HX_STACK_LINE(124)
					::haxe::ui::toolkit::controls::Text tmp16 = this->inputNounTextObject;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(125)
					::haxe::ui::toolkit::controls::TextInput tmp17 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp17,"tmp17");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp17,::haxe::ui::toolkit::controls::Text &tmp16){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",123,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp16,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp17,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(123)
					Dynamic tmp18 = _Function_4_1::Block(tmp17,tmp16);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(123)
					Dynamic textInputStruct = tmp18;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(127)
					Dynamic tmp19 = textInputStruct;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(127)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
					HX_STACK_LINE(129)
					::haxe::ui::toolkit::controls::Text tmp20 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(130)
					::haxe::ui::toolkit::controls::TextInput tmp21 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp21,"tmp21");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp20,::haxe::ui::toolkit::controls::TextInput &tmp21){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",128,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp20,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp21,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(128)
					Dynamic tmp22 = _Function_4_2::Block(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(128)
					Dynamic textInputStruct1 = tmp22;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(132)
					Dynamic tmp23 = textInputStruct1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(132)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
					HX_STACK_LINE(134)
					::haxe::ui::toolkit::controls::Text tmp24 = this->inputNounSTextObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(135)
					::haxe::ui::toolkit::controls::TextInput tmp25 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp25,"tmp25");
					struct _Function_4_3{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp24,::haxe::ui::toolkit::controls::TextInput &tmp25){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",133,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp24,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp25,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(133)
					Dynamic tmp26 = _Function_4_3::Block(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(133)
					Dynamic textInputStruct2 = tmp26;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
					HX_STACK_LINE(137)
					Dynamic tmp27 = textInputStruct2;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(137)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp27);
					HX_STACK_LINE(139)
					::haxe::ui::toolkit::controls::Text tmp28 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(140)
					::haxe::ui::toolkit::controls::TextInput tmp29 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp29,"tmp29");
					struct _Function_4_4{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp28,::haxe::ui::toolkit::controls::TextInput &tmp29){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",138,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp28,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp29,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(138)
					Dynamic tmp30 = _Function_4_4::Block(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(138)
					Dynamic textInputStruct3 = tmp30;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
					HX_STACK_LINE(142)
					Dynamic tmp31 = textInputStruct3;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(142)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp31);
					HX_STACK_LINE(143)
					::haxe::ui::toolkit::containers::Grid tmp32 = this->gridObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(143)
					::haxe::ui::toolkit::controls::Text tmp33 = this->inputNounTextObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(143)
					tmp32->addChild(tmp33);
					HX_STACK_LINE(144)
					::haxe::ui::toolkit::containers::Grid tmp34 = this->gridObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(144)
					::haxe::ui::toolkit::controls::TextInput tmp35 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(144)
					tmp34->addChild(tmp35);
					HX_STACK_LINE(145)
					::haxe::ui::toolkit::containers::Grid tmp36 = this->gridObject;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(145)
					::haxe::ui::toolkit::controls::Text tmp37 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(145)
					tmp36->addChild(tmp37);
					HX_STACK_LINE(146)
					::haxe::ui::toolkit::containers::Grid tmp38 = this->gridObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(146)
					::haxe::ui::toolkit::controls::TextInput tmp39 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(146)
					tmp38->addChild(tmp39);
					HX_STACK_LINE(147)
					::haxe::ui::toolkit::containers::Grid tmp40 = this->gridObject;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(147)
					::haxe::ui::toolkit::controls::Text tmp41 = this->inputNounSTextObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(147)
					tmp40->addChild(tmp41);
					HX_STACK_LINE(148)
					::haxe::ui::toolkit::containers::Grid tmp42 = this->gridObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(148)
					::haxe::ui::toolkit::controls::TextInput tmp43 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(148)
					tmp42->addChild(tmp43);
					HX_STACK_LINE(149)
					::haxe::ui::toolkit::containers::Grid tmp44 = this->gridObject;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(149)
					::haxe::ui::toolkit::controls::Text tmp45 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(149)
					tmp44->addChild(tmp45);
					HX_STACK_LINE(150)
					::haxe::ui::toolkit::containers::Grid tmp46 = this->gridObject;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(150)
					::haxe::ui::toolkit::controls::TextInput tmp47 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(150)
					tmp46->addChild(tmp47);
				}
				HX_STACK_LINE(152)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(152)
				::String tmp17 = tmp16->get_text();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(152)
				bool tmp18 = (tmp17 == HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(152)
				if ((tmp18)){
					HX_STACK_LINE(154)
					::haxe::ui::toolkit::controls::Text tmp19 = this->inputNounTextObject;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(155)
					::haxe::ui::toolkit::controls::TextInput tmp20 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp20,"tmp20");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp20,::haxe::ui::toolkit::controls::Text &tmp19){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",153,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp19,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp20,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(153)
					Dynamic tmp21 = _Function_4_1::Block(tmp20,tmp19);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(153)
					Dynamic textInputStruct = tmp21;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(157)
					Dynamic tmp22 = textInputStruct;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(157)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
					HX_STACK_LINE(159)
					::haxe::ui::toolkit::controls::Text tmp23 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(160)
					::haxe::ui::toolkit::controls::TextInput tmp24 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp24,"tmp24");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp23,::haxe::ui::toolkit::controls::TextInput &tmp24){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",158,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp23,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp24,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(158)
					Dynamic tmp25 = _Function_4_2::Block(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(158)
					Dynamic textInputStruct1 = tmp25;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(162)
					Dynamic tmp26 = textInputStruct1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(162)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
					HX_STACK_LINE(163)
					::haxe::ui::toolkit::containers::Grid tmp27 = this->gridObject;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(163)
					::haxe::ui::toolkit::controls::Text tmp28 = this->inputNounTextObject;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(163)
					tmp27->addChild(tmp28);
					HX_STACK_LINE(164)
					::haxe::ui::toolkit::containers::Grid tmp29 = this->gridObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(164)
					::haxe::ui::toolkit::controls::TextInput tmp30 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(164)
					tmp29->addChild(tmp30);
					HX_STACK_LINE(165)
					::haxe::ui::toolkit::containers::Grid tmp31 = this->gridObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(165)
					::haxe::ui::toolkit::controls::Text tmp32 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(165)
					tmp31->addChild(tmp32);
					HX_STACK_LINE(166)
					::haxe::ui::toolkit::containers::Grid tmp33 = this->gridObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(166)
					::haxe::ui::toolkit::controls::TextInput tmp34 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(166)
					tmp33->addChild(tmp34);
				}
				HX_STACK_LINE(168)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(168)
				::String tmp20 = tmp19->get_text();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(168)
				bool tmp21 = (tmp20 == HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(168)
				if ((tmp21)){
					HX_STACK_LINE(170)
					::haxe::ui::toolkit::controls::Text tmp22 = this->inputNounTextObject;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(171)
					::haxe::ui::toolkit::controls::TextInput tmp23 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp23,"tmp23");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp22,::haxe::ui::toolkit::controls::TextInput &tmp23){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",169,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp22,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp23,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(169)
					Dynamic tmp24 = _Function_4_1::Block(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(169)
					Dynamic textInputStruct = tmp24;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(173)
					Dynamic tmp25 = textInputStruct;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(173)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp25);
					HX_STACK_LINE(175)
					::haxe::ui::toolkit::controls::Text tmp26 = this->inputNounSTextObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(176)
					::haxe::ui::toolkit::controls::TextInput tmp27 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp27,"tmp27");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp26,::haxe::ui::toolkit::controls::TextInput &tmp27){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",174,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp26,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp27,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(174)
					Dynamic tmp28 = _Function_4_2::Block(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(174)
					Dynamic textInputStruct1 = tmp28;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(178)
					Dynamic tmp29 = textInputStruct1;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(178)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
					HX_STACK_LINE(179)
					::haxe::ui::toolkit::containers::Grid tmp30 = this->gridObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(179)
					::haxe::ui::toolkit::controls::Text tmp31 = this->inputNounTextObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(179)
					tmp30->addChild(tmp31);
					HX_STACK_LINE(180)
					::haxe::ui::toolkit::containers::Grid tmp32 = this->gridObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(180)
					::haxe::ui::toolkit::controls::TextInput tmp33 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(180)
					tmp32->addChild(tmp33);
					HX_STACK_LINE(181)
					::haxe::ui::toolkit::containers::Grid tmp34 = this->gridObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(181)
					::haxe::ui::toolkit::controls::Text tmp35 = this->inputNounSTextObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(181)
					tmp34->addChild(tmp35);
					HX_STACK_LINE(182)
					::haxe::ui::toolkit::containers::Grid tmp36 = this->gridObject;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(182)
					::haxe::ui::toolkit::controls::TextInput tmp37 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(182)
					tmp36->addChild(tmp37);
				}
				HX_STACK_LINE(184)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(184)
				::String tmp23 = tmp22->get_text();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(184)
				bool tmp24 = (tmp23 == HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25"));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(184)
				if ((tmp24)){
					HX_STACK_LINE(186)
					::haxe::ui::toolkit::controls::Text tmp25 = this->inputNounTextObject;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(187)
					::haxe::ui::toolkit::controls::TextInput tmp26 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp26,"tmp26");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp26,::haxe::ui::toolkit::controls::Text &tmp25){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",185,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp25,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp26,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(185)
					Dynamic tmp27 = _Function_4_1::Block(tmp26,tmp25);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(185)
					Dynamic textInputStruct = tmp27;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(189)
					Dynamic tmp28 = textInputStruct;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(189)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp28);
					HX_STACK_LINE(191)
					::haxe::ui::toolkit::controls::Text tmp29 = this->inputNounSTextObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(192)
					::haxe::ui::toolkit::controls::TextInput tmp30 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp30,"tmp30");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp29,::haxe::ui::toolkit::controls::TextInput &tmp30){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",190,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp29,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp30,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(190)
					Dynamic tmp31 = _Function_4_2::Block(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(190)
					Dynamic textInputStruct1 = tmp31;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(194)
					Dynamic tmp32 = textInputStruct1;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(194)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp32);
					HX_STACK_LINE(195)
					::haxe::ui::toolkit::containers::Grid tmp33 = this->gridObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(195)
					::haxe::ui::toolkit::controls::Text tmp34 = this->inputNounTextObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(195)
					tmp33->addChild(tmp34);
					HX_STACK_LINE(196)
					::haxe::ui::toolkit::containers::Grid tmp35 = this->gridObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(196)
					::haxe::ui::toolkit::controls::TextInput tmp36 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(196)
					tmp35->addChild(tmp36);
					HX_STACK_LINE(197)
					::haxe::ui::toolkit::containers::Grid tmp37 = this->gridObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(197)
					::haxe::ui::toolkit::controls::Text tmp38 = this->inputNounSTextObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(197)
					tmp37->addChild(tmp38);
					HX_STACK_LINE(198)
					::haxe::ui::toolkit::containers::Grid tmp39 = this->gridObject;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(198)
					::haxe::ui::toolkit::controls::TextInput tmp40 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(198)
					tmp39->addChild(tmp40);
				}
				HX_STACK_LINE(200)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(200)
				::String tmp26 = tmp25->get_text();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(200)
				bool tmp27 = (tmp26 == HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84"));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(200)
				if ((tmp27)){
					HX_STACK_LINE(202)
					::haxe::ui::toolkit::controls::Text tmp28 = this->inputNounTextObject;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(203)
					::haxe::ui::toolkit::controls::TextInput tmp29 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp29,"tmp29");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp28,::haxe::ui::toolkit::controls::TextInput &tmp29){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",201,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp28,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp29,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(201)
					Dynamic tmp30 = _Function_4_1::Block(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(201)
					Dynamic textInputStruct = tmp30;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(205)
					Dynamic tmp31 = textInputStruct;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(205)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp31);
					HX_STACK_LINE(207)
					::haxe::ui::toolkit::controls::Text tmp32 = this->inputNounSTextObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(208)
					::haxe::ui::toolkit::controls::TextInput tmp33 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp33,::haxe::ui::toolkit::controls::Text &tmp32){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",206,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp32,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp33,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(206)
					Dynamic tmp34 = _Function_4_2::Block(tmp33,tmp32);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(206)
					Dynamic textInputStruct1 = tmp34;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(210)
					Dynamic tmp35 = textInputStruct1;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(210)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp35);
					HX_STACK_LINE(211)
					::haxe::ui::toolkit::containers::Grid tmp36 = this->gridObject;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(211)
					::haxe::ui::toolkit::controls::Text tmp37 = this->inputNounTextObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(211)
					tmp36->addChild(tmp37);
					HX_STACK_LINE(212)
					::haxe::ui::toolkit::containers::Grid tmp38 = this->gridObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(212)
					::haxe::ui::toolkit::controls::TextInput tmp39 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(212)
					tmp38->addChild(tmp39);
					HX_STACK_LINE(213)
					::haxe::ui::toolkit::containers::Grid tmp40 = this->gridObject;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(213)
					::haxe::ui::toolkit::controls::Text tmp41 = this->inputNounSTextObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(213)
					tmp40->addChild(tmp41);
					HX_STACK_LINE(214)
					::haxe::ui::toolkit::containers::Grid tmp42 = this->gridObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(214)
					::haxe::ui::toolkit::controls::TextInput tmp43 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(214)
					tmp42->addChild(tmp43);
				}
				HX_STACK_LINE(216)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(216)
				::String tmp29 = tmp28->get_text();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(216)
				bool tmp30 = (tmp29 == HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14"));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(216)
				if ((tmp30)){
					HX_STACK_LINE(218)
					::haxe::ui::toolkit::controls::Text tmp31 = this->inputNounTextObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(219)
					::haxe::ui::toolkit::controls::TextInput tmp32 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp32,"tmp32");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp31,::haxe::ui::toolkit::controls::TextInput &tmp32){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",217,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp31,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp32,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(217)
					Dynamic tmp33 = _Function_4_1::Block(tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(217)
					Dynamic textInputStruct = tmp33;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(221)
					Dynamic tmp34 = textInputStruct;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(221)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp34);
					HX_STACK_LINE(222)
					::haxe::ui::toolkit::containers::Grid tmp35 = this->gridObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(222)
					::haxe::ui::toolkit::controls::Text tmp36 = this->inputNounTextObject;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(222)
					tmp35->addChild(tmp36);
					HX_STACK_LINE(223)
					::haxe::ui::toolkit::containers::Grid tmp37 = this->gridObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(223)
					::haxe::ui::toolkit::controls::TextInput tmp38 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(223)
					tmp37->addChild(tmp38);
				}
				HX_STACK_LINE(225)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp31 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(225)
				::String tmp32 = tmp31->get_text();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(225)
				bool tmp33 = (tmp32 == HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(225)
				if ((tmp33)){
					HX_STACK_LINE(227)
					::haxe::ui::toolkit::controls::Text tmp34 = this->inputNounTextObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(228)
					::haxe::ui::toolkit::controls::TextInput tmp35 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp35,"tmp35");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp34,::haxe::ui::toolkit::controls::TextInput &tmp35){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",226,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp34,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp35,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(226)
					Dynamic tmp36 = _Function_4_1::Block(tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(226)
					Dynamic textInputStruct = tmp36;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(230)
					Dynamic tmp37 = textInputStruct;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(230)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp37);
					HX_STACK_LINE(232)
					::haxe::ui::toolkit::controls::Text tmp38 = this->inputNounSTextObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(233)
					::haxe::ui::toolkit::controls::TextInput tmp39 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp39,"tmp39");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp38,::haxe::ui::toolkit::controls::TextInput &tmp39){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",231,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp38,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp39,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(231)
					Dynamic tmp40 = _Function_4_2::Block(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(231)
					Dynamic textInputStruct1 = tmp40;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(235)
					Dynamic tmp41 = textInputStruct1;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(235)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp41);
					HX_STACK_LINE(236)
					::haxe::ui::toolkit::containers::Grid tmp42 = this->gridObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(236)
					::haxe::ui::toolkit::controls::Text tmp43 = this->inputNounTextObject;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(236)
					tmp42->addChild(tmp43);
					HX_STACK_LINE(237)
					::haxe::ui::toolkit::containers::Grid tmp44 = this->gridObject;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(237)
					::haxe::ui::toolkit::controls::TextInput tmp45 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(237)
					tmp44->addChild(tmp45);
					HX_STACK_LINE(238)
					::haxe::ui::toolkit::containers::Grid tmp46 = this->gridObject;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(238)
					::haxe::ui::toolkit::controls::Text tmp47 = this->inputNounSTextObject;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(238)
					tmp46->addChild(tmp47);
					HX_STACK_LINE(239)
					::haxe::ui::toolkit::containers::Grid tmp48 = this->gridObject;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(239)
					::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(239)
					tmp48->addChild(tmp49);
				}
				HX_STACK_LINE(241)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(241)
				::String tmp35 = tmp34->get_text();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(241)
				bool tmp36 = (tmp35 == HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(241)
				if ((tmp36)){
					HX_STACK_LINE(243)
					::haxe::ui::toolkit::controls::Text tmp37 = this->inputNounTextObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(244)
					::haxe::ui::toolkit::controls::TextInput tmp38 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp38,"tmp38");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp38,::haxe::ui::toolkit::controls::Text &tmp37){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",242,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp37,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp38,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(242)
					Dynamic tmp39 = _Function_4_1::Block(tmp38,tmp37);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(242)
					Dynamic textInputStruct = tmp39;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(246)
					Dynamic tmp40 = textInputStruct;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(246)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp40);
					HX_STACK_LINE(247)
					::haxe::ui::toolkit::containers::Grid tmp41 = this->gridObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(247)
					::haxe::ui::toolkit::controls::Text tmp42 = this->inputNounTextObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(247)
					tmp41->addChild(tmp42);
					HX_STACK_LINE(248)
					::haxe::ui::toolkit::containers::Grid tmp43 = this->gridObject;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(248)
					::haxe::ui::toolkit::controls::TextInput tmp44 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(248)
					tmp43->addChild(tmp44);
				}
				HX_STACK_LINE(250)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp37 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(250)
				::String tmp38 = tmp37->get_text();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(250)
				bool tmp39 = (tmp38 == HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(250)
				if ((tmp39)){
					HX_STACK_LINE(252)
					::haxe::ui::toolkit::controls::Text tmp40 = this->inputNounTextObject;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(253)
					::haxe::ui::toolkit::controls::TextInput tmp41 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp41,"tmp41");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp40,::haxe::ui::toolkit::controls::TextInput &tmp41){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",251,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp40,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp41,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(251)
					Dynamic tmp42 = _Function_4_1::Block(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(251)
					Dynamic textInputStruct = tmp42;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(255)
					Dynamic tmp43 = textInputStruct;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(255)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp43);
					HX_STACK_LINE(256)
					::haxe::ui::toolkit::containers::Grid tmp44 = this->gridObject;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(256)
					::haxe::ui::toolkit::controls::Text tmp45 = this->inputNounTextObject;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(256)
					tmp44->addChild(tmp45);
					HX_STACK_LINE(257)
					::haxe::ui::toolkit::containers::Grid tmp46 = this->gridObject;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(257)
					::haxe::ui::toolkit::controls::TextInput tmp47 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(257)
					tmp46->addChild(tmp47);
				}
				HX_STACK_LINE(259)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp40 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(259)
				::String tmp41 = tmp40->get_text();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(259)
				bool tmp42 = (tmp41 == HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(259)
				if ((tmp42)){
					HX_STACK_LINE(261)
					::haxe::ui::toolkit::controls::Text tmp43 = this->inputNounTextObject;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(262)
					::haxe::ui::toolkit::controls::TextInput tmp44 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp44,"tmp44");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp44,::haxe::ui::toolkit::controls::Text &tmp43){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",260,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp43,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp44,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(260)
					Dynamic tmp45 = _Function_4_1::Block(tmp44,tmp43);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(260)
					Dynamic textInputStruct = tmp45;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(264)
					Dynamic tmp46 = textInputStruct;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(264)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp46);
					HX_STACK_LINE(266)
					::haxe::ui::toolkit::controls::Text tmp47 = this->inputNounSTextObject;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(267)
					::haxe::ui::toolkit::controls::TextInput tmp48 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp48,"tmp48");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp48,::haxe::ui::toolkit::controls::Text &tmp47){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",265,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp47,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp48,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(265)
					Dynamic tmp49 = _Function_4_2::Block(tmp48,tmp47);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(265)
					Dynamic textInputStruct1 = tmp49;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(269)
					Dynamic tmp50 = textInputStruct1;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(269)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp50);
					HX_STACK_LINE(270)
					::haxe::ui::toolkit::containers::Grid tmp51 = this->gridObject;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(270)
					::haxe::ui::toolkit::controls::Text tmp52 = this->inputNounTextObject;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(270)
					tmp51->addChild(tmp52);
					HX_STACK_LINE(271)
					::haxe::ui::toolkit::containers::Grid tmp53 = this->gridObject;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(271)
					::haxe::ui::toolkit::controls::TextInput tmp54 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(271)
					tmp53->addChild(tmp54);
					HX_STACK_LINE(272)
					::haxe::ui::toolkit::containers::Grid tmp55 = this->gridObject;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(272)
					::haxe::ui::toolkit::controls::Text tmp56 = this->inputNounSTextObject;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(272)
					tmp55->addChild(tmp56);
					HX_STACK_LINE(273)
					::haxe::ui::toolkit::containers::Grid tmp57 = this->gridObject;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(273)
					::haxe::ui::toolkit::controls::TextInput tmp58 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(273)
					tmp57->addChild(tmp58);
				}
				HX_STACK_LINE(275)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp43 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(275)
				::String tmp44 = tmp43->get_text();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(275)
				bool tmp45 = (tmp44 == HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(275)
				if ((tmp45)){
					HX_STACK_LINE(277)
					::haxe::ui::toolkit::controls::Text tmp46 = this->inputNounTextObject;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(278)
					::haxe::ui::toolkit::controls::TextInput tmp47 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp47,"tmp47");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp46,::haxe::ui::toolkit::controls::TextInput &tmp47){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",276,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp46,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp47,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(276)
					Dynamic tmp48 = _Function_4_1::Block(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(276)
					Dynamic textInputStruct = tmp48;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(280)
					Dynamic tmp49 = textInputStruct;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(280)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp49);
					HX_STACK_LINE(281)
					::haxe::ui::toolkit::containers::Grid tmp50 = this->gridObject;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(281)
					::haxe::ui::toolkit::controls::Text tmp51 = this->inputNounTextObject;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(281)
					tmp50->addChild(tmp51);
					HX_STACK_LINE(282)
					::haxe::ui::toolkit::containers::Grid tmp52 = this->gridObject;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(282)
					::haxe::ui::toolkit::controls::TextInput tmp53 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(282)
					tmp52->addChild(tmp53);
				}
				HX_STACK_LINE(284)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp46 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(284)
				::String tmp47 = tmp46->get_text();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(284)
				bool tmp48 = (tmp47 == HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4"));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(284)
				if ((tmp48)){
					HX_STACK_LINE(286)
					::haxe::ui::toolkit::controls::Text tmp49 = this->inputNounTextObject;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(287)
					::haxe::ui::toolkit::controls::TextInput tmp50 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp50,"tmp50");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp49,::haxe::ui::toolkit::controls::TextInput &tmp50){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",285,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp49,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp50,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(285)
					Dynamic tmp51 = _Function_4_1::Block(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(285)
					Dynamic textInputStruct = tmp51;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(289)
					Dynamic tmp52 = textInputStruct;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(289)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp52);
					HX_STACK_LINE(291)
					::haxe::ui::toolkit::controls::Text tmp53 = this->inputNounSTextObject;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(292)
					::haxe::ui::toolkit::controls::TextInput tmp54 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp54,"tmp54");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp54,::haxe::ui::toolkit::controls::Text &tmp53){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",290,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp53,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp54,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(290)
					Dynamic tmp55 = _Function_4_2::Block(tmp54,tmp53);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(290)
					Dynamic textInputStruct1 = tmp55;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(294)
					Dynamic tmp56 = textInputStruct1;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(294)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp56);
					HX_STACK_LINE(295)
					::haxe::ui::toolkit::containers::Grid tmp57 = this->gridObject;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(295)
					::haxe::ui::toolkit::controls::Text tmp58 = this->inputNounTextObject;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(295)
					tmp57->addChild(tmp58);
					HX_STACK_LINE(296)
					::haxe::ui::toolkit::containers::Grid tmp59 = this->gridObject;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(296)
					::haxe::ui::toolkit::controls::TextInput tmp60 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(296)
					tmp59->addChild(tmp60);
					HX_STACK_LINE(297)
					::haxe::ui::toolkit::containers::Grid tmp61 = this->gridObject;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(297)
					::haxe::ui::toolkit::controls::Text tmp62 = this->inputNounSTextObject;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(297)
					tmp61->addChild(tmp62);
					HX_STACK_LINE(298)
					::haxe::ui::toolkit::containers::Grid tmp63 = this->gridObject;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(298)
					::haxe::ui::toolkit::controls::TextInput tmp64 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(298)
					tmp63->addChild(tmp64);
				}
				HX_STACK_LINE(300)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp49 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(300)
				::String tmp50 = tmp49->get_text();		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(300)
				bool tmp51 = (tmp50 == HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7"));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(300)
				if ((tmp51)){
					HX_STACK_LINE(302)
					::haxe::ui::toolkit::controls::Text tmp52 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::controls::TextInput tmp53 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp53,"tmp53");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp52,::haxe::ui::toolkit::controls::TextInput &tmp53){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",301,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp52,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp53,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(301)
					Dynamic tmp54 = _Function_4_1::Block(tmp52,tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(301)
					Dynamic textInputStruct = tmp54;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(305)
					Dynamic tmp55 = textInputStruct;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(305)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp55);
					HX_STACK_LINE(307)
					::haxe::ui::toolkit::controls::Text tmp56 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(308)
					::haxe::ui::toolkit::controls::TextInput tmp57 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp57,"tmp57");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp56,::haxe::ui::toolkit::controls::TextInput &tmp57){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",306,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp56,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp57,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(306)
					Dynamic tmp58 = _Function_4_2::Block(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(306)
					Dynamic textInputStruct1 = tmp58;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(310)
					Dynamic tmp59 = textInputStruct1;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(310)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp59);
					HX_STACK_LINE(312)
					::haxe::ui::toolkit::controls::Text tmp60 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(313)
					::haxe::ui::toolkit::controls::TextInput tmp61 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp61,"tmp61");
					struct _Function_4_3{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp60,::haxe::ui::toolkit::controls::TextInput &tmp61){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",311,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp60,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp61,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(311)
					Dynamic tmp62 = _Function_4_3::Block(tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(311)
					Dynamic textInputStruct2 = tmp62;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
					HX_STACK_LINE(315)
					Dynamic tmp63 = textInputStruct2;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(315)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp63);
					HX_STACK_LINE(317)
					::haxe::ui::toolkit::controls::Text tmp64 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(318)
					::haxe::ui::toolkit::controls::TextInput tmp65 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp65,"tmp65");
					struct _Function_4_4{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp64,::haxe::ui::toolkit::controls::TextInput &tmp65){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",316,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp64,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp65,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(316)
					Dynamic tmp66 = _Function_4_4::Block(tmp64,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(316)
					Dynamic textInputStruct3 = tmp66;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
					HX_STACK_LINE(320)
					Dynamic tmp67 = textInputStruct3;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(320)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp67);
					HX_STACK_LINE(322)
					::haxe::ui::toolkit::controls::Text tmp68 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(323)
					::haxe::ui::toolkit::controls::TextInput tmp69 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp69,"tmp69");
					struct _Function_4_5{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp68,::haxe::ui::toolkit::controls::TextInput &tmp69){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",321,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp68,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp69,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(321)
					Dynamic tmp70 = _Function_4_5::Block(tmp68,tmp69);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(321)
					Dynamic textInputStruct4 = tmp70;		HX_STACK_VAR(textInputStruct4,"textInputStruct4");
					HX_STACK_LINE(325)
					Dynamic tmp71 = textInputStruct4;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(325)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp71);
					HX_STACK_LINE(326)
					::haxe::ui::toolkit::containers::Grid tmp72 = this->gridObject;		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(326)
					::haxe::ui::toolkit::controls::Text tmp73 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(326)
					tmp72->addChild(tmp73);
					HX_STACK_LINE(327)
					::haxe::ui::toolkit::containers::Grid tmp74 = this->gridObject;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(327)
					::haxe::ui::toolkit::controls::TextInput tmp75 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(327)
					tmp74->addChild(tmp75);
					HX_STACK_LINE(328)
					::haxe::ui::toolkit::containers::Grid tmp76 = this->gridObject;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(328)
					::haxe::ui::toolkit::controls::Text tmp77 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(328)
					tmp76->addChild(tmp77);
					HX_STACK_LINE(329)
					::haxe::ui::toolkit::containers::Grid tmp78 = this->gridObject;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(329)
					::haxe::ui::toolkit::controls::TextInput tmp79 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(329)
					tmp78->addChild(tmp79);
					HX_STACK_LINE(330)
					::haxe::ui::toolkit::containers::Grid tmp80 = this->gridObject;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(330)
					::haxe::ui::toolkit::controls::Text tmp81 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(330)
					tmp80->addChild(tmp81);
					HX_STACK_LINE(331)
					::haxe::ui::toolkit::containers::Grid tmp82 = this->gridObject;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(331)
					::haxe::ui::toolkit::controls::TextInput tmp83 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(331)
					tmp82->addChild(tmp83);
					HX_STACK_LINE(332)
					::haxe::ui::toolkit::containers::Grid tmp84 = this->gridObject;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(332)
					::haxe::ui::toolkit::controls::Text tmp85 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(332)
					tmp84->addChild(tmp85);
					HX_STACK_LINE(333)
					::haxe::ui::toolkit::containers::Grid tmp86 = this->gridObject;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(333)
					::haxe::ui::toolkit::controls::TextInput tmp87 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(333)
					tmp86->addChild(tmp87);
					HX_STACK_LINE(334)
					::haxe::ui::toolkit::containers::Grid tmp88 = this->gridObject;		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(334)
					::haxe::ui::toolkit::controls::Text tmp89 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(334)
					tmp88->addChild(tmp89);
					HX_STACK_LINE(335)
					::haxe::ui::toolkit::containers::Grid tmp90 = this->gridObject;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(335)
					::haxe::ui::toolkit::controls::TextInput tmp91 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(335)
					tmp90->addChild(tmp91);
				}
				HX_STACK_LINE(337)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp52 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(337)
				::String tmp53 = tmp52->get_text();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(337)
				bool tmp54 = (tmp53 == HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed"));		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(337)
				if ((tmp54)){
					HX_STACK_LINE(339)
					::haxe::ui::toolkit::controls::Text tmp55 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(340)
					::haxe::ui::toolkit::controls::TextInput tmp56 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp56,"tmp56");
					struct _Function_4_1{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp55,::haxe::ui::toolkit::controls::TextInput &tmp56){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",338,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp55,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp56,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(338)
					Dynamic tmp57 = _Function_4_1::Block(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(338)
					Dynamic textInputStruct = tmp57;		HX_STACK_VAR(textInputStruct,"textInputStruct");
					HX_STACK_LINE(342)
					Dynamic tmp58 = textInputStruct;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(342)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp58);
					HX_STACK_LINE(344)
					::haxe::ui::toolkit::controls::Text tmp59 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(345)
					::haxe::ui::toolkit::controls::TextInput tmp60 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp60,"tmp60");
					struct _Function_4_2{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp60,::haxe::ui::toolkit::controls::Text &tmp59){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",343,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp59,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp60,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(343)
					Dynamic tmp61 = _Function_4_2::Block(tmp60,tmp59);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(343)
					Dynamic textInputStruct1 = tmp61;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
					HX_STACK_LINE(347)
					Dynamic tmp62 = textInputStruct1;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(347)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp62);
					HX_STACK_LINE(349)
					::haxe::ui::toolkit::controls::Text tmp63 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(350)
					::haxe::ui::toolkit::controls::TextInput tmp64 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp64,"tmp64");
					struct _Function_4_3{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp63,::haxe::ui::toolkit::controls::TextInput &tmp64){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",348,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp63,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp64,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(348)
					Dynamic tmp65 = _Function_4_3::Block(tmp63,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(348)
					Dynamic textInputStruct2 = tmp65;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
					HX_STACK_LINE(352)
					Dynamic tmp66 = textInputStruct2;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(352)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp66);
					HX_STACK_LINE(354)
					::haxe::ui::toolkit::controls::Text tmp67 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(355)
					::haxe::ui::toolkit::controls::TextInput tmp68 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp68,"tmp68");
					struct _Function_4_4{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp68,::haxe::ui::toolkit::controls::Text &tmp67){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",353,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp67,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp68,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(353)
					Dynamic tmp69 = _Function_4_4::Block(tmp68,tmp67);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(353)
					Dynamic textInputStruct3 = tmp69;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
					HX_STACK_LINE(357)
					Dynamic tmp70 = textInputStruct3;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(357)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp70);
					HX_STACK_LINE(359)
					::haxe::ui::toolkit::controls::Text tmp71 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(360)
					::haxe::ui::toolkit::controls::TextInput tmp72 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp72,"tmp72");
					struct _Function_4_5{
						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp72,::haxe::ui::toolkit::controls::Text &tmp71){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectTag.hx",358,0x52997c2c)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp71,false);
								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp72,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(358)
					Dynamic tmp73 = _Function_4_5::Block(tmp72,tmp71);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(358)
					Dynamic textInputStruct4 = tmp73;		HX_STACK_VAR(textInputStruct4,"textInputStruct4");
					HX_STACK_LINE(362)
					Dynamic tmp74 = textInputStruct4;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(362)
					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp74);
					HX_STACK_LINE(363)
					::haxe::ui::toolkit::containers::Grid tmp75 = this->gridObject;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(363)
					::haxe::ui::toolkit::controls::Text tmp76 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(363)
					tmp75->addChild(tmp76);
					HX_STACK_LINE(364)
					::haxe::ui::toolkit::containers::Grid tmp77 = this->gridObject;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(364)
					::haxe::ui::toolkit::controls::TextInput tmp78 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(364)
					tmp77->addChild(tmp78);
					HX_STACK_LINE(365)
					::haxe::ui::toolkit::containers::Grid tmp79 = this->gridObject;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(365)
					::haxe::ui::toolkit::controls::Text tmp80 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp80,"tmp80");
					HX_STACK_LINE(365)
					tmp79->addChild(tmp80);
					HX_STACK_LINE(366)
					::haxe::ui::toolkit::containers::Grid tmp81 = this->gridObject;		HX_STACK_VAR(tmp81,"tmp81");
					HX_STACK_LINE(366)
					::haxe::ui::toolkit::controls::TextInput tmp82 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp82,"tmp82");
					HX_STACK_LINE(366)
					tmp81->addChild(tmp82);
					HX_STACK_LINE(367)
					::haxe::ui::toolkit::containers::Grid tmp83 = this->gridObject;		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(367)
					::haxe::ui::toolkit::controls::Text tmp84 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(367)
					tmp83->addChild(tmp84);
					HX_STACK_LINE(368)
					::haxe::ui::toolkit::containers::Grid tmp85 = this->gridObject;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(368)
					::haxe::ui::toolkit::controls::TextInput tmp86 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp86,"tmp86");
					HX_STACK_LINE(368)
					tmp85->addChild(tmp86);
					HX_STACK_LINE(369)
					::haxe::ui::toolkit::containers::Grid tmp87 = this->gridObject;		HX_STACK_VAR(tmp87,"tmp87");
					HX_STACK_LINE(369)
					::haxe::ui::toolkit::controls::Text tmp88 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp88,"tmp88");
					HX_STACK_LINE(369)
					tmp87->addChild(tmp88);
					HX_STACK_LINE(370)
					::haxe::ui::toolkit::containers::Grid tmp89 = this->gridObject;		HX_STACK_VAR(tmp89,"tmp89");
					HX_STACK_LINE(370)
					::haxe::ui::toolkit::controls::TextInput tmp90 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp90,"tmp90");
					HX_STACK_LINE(370)
					tmp89->addChild(tmp90);
					HX_STACK_LINE(371)
					::haxe::ui::toolkit::containers::Grid tmp91 = this->gridObject;		HX_STACK_VAR(tmp91,"tmp91");
					HX_STACK_LINE(371)
					::haxe::ui::toolkit::controls::Text tmp92 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp92,"tmp92");
					HX_STACK_LINE(371)
					tmp91->addChild(tmp92);
					HX_STACK_LINE(372)
					::haxe::ui::toolkit::containers::Grid tmp93 = this->gridObject;		HX_STACK_VAR(tmp93,"tmp93");
					HX_STACK_LINE(372)
					::haxe::ui::toolkit::controls::TextInput tmp94 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp94,"tmp94");
					HX_STACK_LINE(372)
					tmp93->addChild(tmp94);
				}
				HX_STACK_LINE(375)
				::String tmp55 = this->selectTagTypeListSelectorString;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(375)
				this->selectTagTypeListSelectorPrevString = tmp55;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupAddObjectTag_obj,UpdateVoid,(void))

Void UIPopupAddObjectTag_obj::CreateGUIObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupAddObjectTag","CreateGUIObjectVoid",0xc0604ab6,"UIPopupAddObjectTag.CreateGUIObjectVoid","UIPopupAddObjectTag.hx",383,0x52997c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(385)
		::haxe::ui::toolkit::controls::TextInput tmp = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(385)
		this->inputAdjTextInputObject = tmp;
		HX_STACK_LINE(386)
		::haxe::ui::toolkit::controls::TextInput tmp1 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(386)
		tmp1->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputAdj","\xaa","\x3b","\x8a","\x9c"));
		HX_STACK_LINE(387)
		::haxe::ui::toolkit::controls::TextInput tmp2 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(387)
		tmp2->set_percentWidth((int)100);
		HX_STACK_LINE(388)
		::haxe::ui::toolkit::controls::TextInput tmp3 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		tmp3->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(389)
		::haxe::ui::toolkit::controls::Text tmp4 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		this->inputAdjTextObject = tmp4;
		HX_STACK_LINE(390)
		::haxe::ui::toolkit::controls::Text tmp5 = this->inputAdjTextObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(390)
		tmp5->set_text(HX_HCSTRING("Adjective","\x89","\x1c","\x97","\xce"));
		HX_STACK_LINE(391)
		::haxe::ui::toolkit::controls::TextInput tmp6 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(391)
		this->inputAdvTextInputObject = tmp6;
		HX_STACK_LINE(392)
		::haxe::ui::toolkit::controls::TextInput tmp7 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(392)
		tmp7->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputAdv","\xb6","\x3b","\x8a","\x9c"));
		HX_STACK_LINE(393)
		::haxe::ui::toolkit::controls::TextInput tmp8 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(393)
		tmp8->set_percentWidth((int)100);
		HX_STACK_LINE(394)
		::haxe::ui::toolkit::controls::TextInput tmp9 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(394)
		tmp9->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(395)
		::haxe::ui::toolkit::controls::Text tmp10 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(395)
		this->inputAdvTextObject = tmp10;
		HX_STACK_LINE(396)
		::haxe::ui::toolkit::controls::Text tmp11 = this->inputAdvTextObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(396)
		tmp11->set_text(HX_HCSTRING("Adverb","\x22","\xab","\x90","\xdf"));
		HX_STACK_LINE(397)
		::haxe::ui::toolkit::controls::TextInput tmp12 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(397)
		this->inputNounPosTextInputObject = tmp12;
		HX_STACK_LINE(398)
		::haxe::ui::toolkit::controls::TextInput tmp13 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(398)
		tmp13->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputNounPos","\xdd","\x47","\xc1","\x50"));
		HX_STACK_LINE(399)
		::haxe::ui::toolkit::controls::TextInput tmp14 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(399)
		tmp14->set_percentWidth((int)100);
		HX_STACK_LINE(400)
		::haxe::ui::toolkit::controls::TextInput tmp15 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(400)
		tmp15->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(401)
		::haxe::ui::toolkit::controls::Text tmp16 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(401)
		this->inputNounPosTextObject = tmp16;
		HX_STACK_LINE(402)
		::haxe::ui::toolkit::controls::Text tmp17 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(402)
		tmp17->set_text(HX_HCSTRING("Noun Possesion","\x95","\x4e","\xef","\xd9"));
		HX_STACK_LINE(403)
		::haxe::ui::toolkit::controls::TextInput tmp18 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(403)
		this->inputNounSPosTextInputObject = tmp18;
		HX_STACK_LINE(404)
		::haxe::ui::toolkit::controls::TextInput tmp19 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(404)
		tmp19->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputNounSPos","\x78","\xb4","\x41","\x5a"));
		HX_STACK_LINE(405)
		::haxe::ui::toolkit::controls::TextInput tmp20 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(405)
		tmp20->set_percentWidth((int)100);
		HX_STACK_LINE(406)
		::haxe::ui::toolkit::controls::TextInput tmp21 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(406)
		tmp21->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(407)
		::haxe::ui::toolkit::controls::Text tmp22 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(407)
		this->inputNounSPosTextObject = tmp22;
		HX_STACK_LINE(408)
		::haxe::ui::toolkit::controls::Text tmp23 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(408)
		tmp23->set_text(HX_HCSTRING("Noun Plural Possesion","\xa5","\x14","\x5d","\x64"));
		HX_STACK_LINE(409)
		::haxe::ui::toolkit::controls::TextInput tmp24 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(409)
		this->inputNounSTextInputObject = tmp24;
		HX_STACK_LINE(410)
		::haxe::ui::toolkit::controls::TextInput tmp25 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(410)
		tmp25->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputNounS","\x7c","\x96","\xd3","\x03"));
		HX_STACK_LINE(411)
		::haxe::ui::toolkit::controls::TextInput tmp26 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(411)
		tmp26->set_percentWidth((int)100);
		HX_STACK_LINE(412)
		::haxe::ui::toolkit::controls::TextInput tmp27 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(412)
		tmp27->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(413)
		::haxe::ui::toolkit::controls::Text tmp28 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(413)
		this->inputNounSTextObject = tmp28;
		HX_STACK_LINE(414)
		::haxe::ui::toolkit::controls::Text tmp29 = this->inputNounSTextObject;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(414)
		tmp29->set_text(HX_HCSTRING("Noun Plural","\x0a","\xd7","\x3f","\x4c"));
		HX_STACK_LINE(415)
		::haxe::ui::toolkit::controls::TextInput tmp30 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(415)
		this->inputNounTextInputObject = tmp30;
		HX_STACK_LINE(416)
		::haxe::ui::toolkit::controls::TextInput tmp31 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(416)
		tmp31->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputNoun","\xf7","\x21","\x0a","\x65"));
		HX_STACK_LINE(417)
		::haxe::ui::toolkit::controls::TextInput tmp32 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(417)
		tmp32->set_percentWidth((int)100);
		HX_STACK_LINE(418)
		::haxe::ui::toolkit::controls::TextInput tmp33 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(418)
		tmp33->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(419)
		::haxe::ui::toolkit::controls::Text tmp34 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(419)
		this->inputNounTextObject = tmp34;
		HX_STACK_LINE(420)
		::haxe::ui::toolkit::controls::Text tmp35 = this->inputNounTextObject;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(420)
		tmp35->set_text(HX_HCSTRING("Noun","\xfa","\x44","\xe3","\x33"));
		HX_STACK_LINE(421)
		::haxe::ui::toolkit::controls::TextInput tmp36 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(421)
		this->inputVerb1TextInputObject = tmp36;
		HX_STACK_LINE(422)
		::haxe::ui::toolkit::controls::TextInput tmp37 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(422)
		tmp37->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputVerb1","\xf5","\xc6","\x69","\x98"));
		HX_STACK_LINE(423)
		::haxe::ui::toolkit::controls::TextInput tmp38 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(423)
		tmp38->set_percentWidth((int)100);
		HX_STACK_LINE(424)
		::haxe::ui::toolkit::controls::TextInput tmp39 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(424)
		tmp39->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(425)
		::haxe::ui::toolkit::controls::Text tmp40 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(425)
		this->inputVerb1TextObject = tmp40;
		HX_STACK_LINE(426)
		::haxe::ui::toolkit::controls::Text tmp41 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(426)
		tmp41->set_text(HX_HCSTRING("Verb 1","\x90","\x6a","\xce","\xd5"));
		HX_STACK_LINE(427)
		::haxe::ui::toolkit::controls::TextInput tmp42 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(427)
		this->inputVerb2TextInputObject = tmp42;
		HX_STACK_LINE(428)
		::haxe::ui::toolkit::controls::TextInput tmp43 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(428)
		tmp43->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputVerb2","\xf6","\xc6","\x69","\x98"));
		HX_STACK_LINE(429)
		::haxe::ui::toolkit::controls::TextInput tmp44 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(429)
		tmp44->set_percentWidth((int)100);
		HX_STACK_LINE(430)
		::haxe::ui::toolkit::controls::TextInput tmp45 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(430)
		tmp45->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(431)
		::haxe::ui::toolkit::controls::Text tmp46 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(431)
		this->inputVerb2TextObject = tmp46;
		HX_STACK_LINE(432)
		::haxe::ui::toolkit::controls::Text tmp47 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(432)
		tmp47->set_text(HX_HCSTRING("Verb 2","\x91","\x6a","\xce","\xd5"));
		HX_STACK_LINE(433)
		::haxe::ui::toolkit::controls::TextInput tmp48 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(433)
		this->inputVerb3TextInputObject = tmp48;
		HX_STACK_LINE(434)
		::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(434)
		tmp49->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputVerb3","\xf7","\xc6","\x69","\x98"));
		HX_STACK_LINE(435)
		::haxe::ui::toolkit::controls::TextInput tmp50 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(435)
		tmp50->set_percentWidth((int)100);
		HX_STACK_LINE(436)
		::haxe::ui::toolkit::controls::TextInput tmp51 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(436)
		tmp51->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(437)
		::haxe::ui::toolkit::controls::Text tmp52 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(437)
		this->inputVerb3TextObject = tmp52;
		HX_STACK_LINE(438)
		::haxe::ui::toolkit::controls::Text tmp53 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(438)
		tmp53->set_text(HX_HCSTRING("Verb 3","\x92","\x6a","\xce","\xd5"));
		HX_STACK_LINE(439)
		::haxe::ui::toolkit::controls::TextInput tmp54 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(439)
		this->inputVerbIngTextInputObject = tmp54;
		HX_STACK_LINE(440)
		::haxe::ui::toolkit::controls::TextInput tmp55 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(440)
		tmp55->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputVerbIng","\x86","\xc4","\xb3","\xdb"));
		HX_STACK_LINE(441)
		::haxe::ui::toolkit::controls::TextInput tmp56 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(441)
		tmp56->set_percentWidth((int)100);
		HX_STACK_LINE(442)
		::haxe::ui::toolkit::controls::TextInput tmp57 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(442)
		tmp57->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(443)
		::haxe::ui::toolkit::controls::Text tmp58 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(443)
		this->inputVerbIngTextObject = tmp58;
		HX_STACK_LINE(444)
		::haxe::ui::toolkit::controls::Text tmp59 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(444)
		tmp59->set_text(HX_HCSTRING("Verb + Ing","\x2c","\x10","\xf6","\xd8"));
		HX_STACK_LINE(445)
		::haxe::ui::toolkit::controls::TextInput tmp60 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(445)
		this->inputVerbSTextInputObject = tmp60;
		HX_STACK_LINE(446)
		::haxe::ui::toolkit::controls::TextInput tmp61 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(446)
		tmp61->set_id(HX_HCSTRING("UIPopupAddObjectTag_InputVerbS","\x17","\xc7","\x69","\x98"));
		HX_STACK_LINE(447)
		::haxe::ui::toolkit::controls::TextInput tmp62 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(447)
		tmp62->set_percentWidth((int)100);
		HX_STACK_LINE(448)
		::haxe::ui::toolkit::controls::TextInput tmp63 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(448)
		tmp63->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(449)
		::haxe::ui::toolkit::controls::Text tmp64 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(449)
		this->inputVerbSTextObject = tmp64;
		HX_STACK_LINE(450)
		::haxe::ui::toolkit::controls::Text tmp65 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(450)
		tmp65->set_text(HX_HCSTRING("Verb + S","\x3d","\xbd","\x25","\xb6"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupAddObjectTag_obj,CreateGUIObjectVoid,(void))


UIPopupAddObjectTag_obj::UIPopupAddObjectTag_obj()
{
}

void UIPopupAddObjectTag_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupAddObjectTag);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(gridObject,"gridObject");
	HX_MARK_MEMBER_NAME(inputAdjTextInputObject,"inputAdjTextInputObject");
	HX_MARK_MEMBER_NAME(inputAdvTextInputObject,"inputAdvTextInputObject");
	HX_MARK_MEMBER_NAME(inputNounPosTextInputObject,"inputNounPosTextInputObject");
	HX_MARK_MEMBER_NAME(inputNounSPosTextInputObject,"inputNounSPosTextInputObject");
	HX_MARK_MEMBER_NAME(inputNounSTextInputObject,"inputNounSTextInputObject");
	HX_MARK_MEMBER_NAME(inputNounTextInputObject,"inputNounTextInputObject");
	HX_MARK_MEMBER_NAME(inputTagNameTextInputObject,"inputTagNameTextInputObject");
	HX_MARK_MEMBER_NAME(inputVerb1TextInputObject,"inputVerb1TextInputObject");
	HX_MARK_MEMBER_NAME(inputVerb2TextInputObject,"inputVerb2TextInputObject");
	HX_MARK_MEMBER_NAME(inputVerb3TextInputObject,"inputVerb3TextInputObject");
	HX_MARK_MEMBER_NAME(inputVerbIngTextInputObject,"inputVerbIngTextInputObject");
	HX_MARK_MEMBER_NAME(inputVerbSTextInputObject,"inputVerbSTextInputObject");
	HX_MARK_MEMBER_NAME(inputAdjTextObject,"inputAdjTextObject");
	HX_MARK_MEMBER_NAME(inputAdvTextObject,"inputAdvTextObject");
	HX_MARK_MEMBER_NAME(inputNounPosTextObject,"inputNounPosTextObject");
	HX_MARK_MEMBER_NAME(inputNounSPosTextObject,"inputNounSPosTextObject");
	HX_MARK_MEMBER_NAME(inputNounSTextObject,"inputNounSTextObject");
	HX_MARK_MEMBER_NAME(inputNounTextObject,"inputNounTextObject");
	HX_MARK_MEMBER_NAME(inputVerb1TextObject,"inputVerb1TextObject");
	HX_MARK_MEMBER_NAME(inputVerb2TextObject,"inputVerb2TextObject");
	HX_MARK_MEMBER_NAME(inputVerb3TextObject,"inputVerb3TextObject");
	HX_MARK_MEMBER_NAME(inputVerbIngTextObject,"inputVerbIngTextObject");
	HX_MARK_MEMBER_NAME(inputVerbSTextObject,"inputVerbSTextObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(selectTagTypeListSelectorObject,"selectTagTypeListSelectorObject");
	HX_MARK_MEMBER_NAME(selectTagTypeListSelectorPrevString,"selectTagTypeListSelectorPrevString");
	HX_MARK_MEMBER_NAME(selectTagTypeListSelectorString,"selectTagTypeListSelectorString");
	HX_MARK_MEMBER_NAME(textInputStructArray,"textInputStructArray");
	HX_MARK_END_CLASS();
}

void UIPopupAddObjectTag_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(inputAdjTextInputObject,"inputAdjTextInputObject");
	HX_VISIT_MEMBER_NAME(inputAdvTextInputObject,"inputAdvTextInputObject");
	HX_VISIT_MEMBER_NAME(inputNounPosTextInputObject,"inputNounPosTextInputObject");
	HX_VISIT_MEMBER_NAME(inputNounSPosTextInputObject,"inputNounSPosTextInputObject");
	HX_VISIT_MEMBER_NAME(inputNounSTextInputObject,"inputNounSTextInputObject");
	HX_VISIT_MEMBER_NAME(inputNounTextInputObject,"inputNounTextInputObject");
	HX_VISIT_MEMBER_NAME(inputTagNameTextInputObject,"inputTagNameTextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerb1TextInputObject,"inputVerb1TextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerb2TextInputObject,"inputVerb2TextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerb3TextInputObject,"inputVerb3TextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerbIngTextInputObject,"inputVerbIngTextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerbSTextInputObject,"inputVerbSTextInputObject");
	HX_VISIT_MEMBER_NAME(inputAdjTextObject,"inputAdjTextObject");
	HX_VISIT_MEMBER_NAME(inputAdvTextObject,"inputAdvTextObject");
	HX_VISIT_MEMBER_NAME(inputNounPosTextObject,"inputNounPosTextObject");
	HX_VISIT_MEMBER_NAME(inputNounSPosTextObject,"inputNounSPosTextObject");
	HX_VISIT_MEMBER_NAME(inputNounSTextObject,"inputNounSTextObject");
	HX_VISIT_MEMBER_NAME(inputNounTextObject,"inputNounTextObject");
	HX_VISIT_MEMBER_NAME(inputVerb1TextObject,"inputVerb1TextObject");
	HX_VISIT_MEMBER_NAME(inputVerb2TextObject,"inputVerb2TextObject");
	HX_VISIT_MEMBER_NAME(inputVerb3TextObject,"inputVerb3TextObject");
	HX_VISIT_MEMBER_NAME(inputVerbIngTextObject,"inputVerbIngTextObject");
	HX_VISIT_MEMBER_NAME(inputVerbSTextObject,"inputVerbSTextObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(selectTagTypeListSelectorObject,"selectTagTypeListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectTagTypeListSelectorPrevString,"selectTagTypeListSelectorPrevString");
	HX_VISIT_MEMBER_NAME(selectTagTypeListSelectorString,"selectTagTypeListSelectorString");
	HX_VISIT_MEMBER_NAME(textInputStructArray,"textInputStructArray");
}

Dynamic UIPopupAddObjectTag_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"gridObject") ) { return gridObject; }
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { return popupObject; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { return buttonObject; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inputAdjTextObject") ) { return inputAdjTextObject; }
		if (HX_FIELD_EQ(inName,"inputAdvTextObject") ) { return inputAdvTextObject; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"inputNounTextObject") ) { return inputNounTextObject; }
		if (HX_FIELD_EQ(inName,"CreateGUIObjectVoid") ) { return CreateGUIObjectVoid_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inputNounSTextObject") ) { return inputNounSTextObject; }
		if (HX_FIELD_EQ(inName,"inputVerb1TextObject") ) { return inputVerb1TextObject; }
		if (HX_FIELD_EQ(inName,"inputVerb2TextObject") ) { return inputVerb2TextObject; }
		if (HX_FIELD_EQ(inName,"inputVerb3TextObject") ) { return inputVerb3TextObject; }
		if (HX_FIELD_EQ(inName,"inputVerbSTextObject") ) { return inputVerbSTextObject; }
		if (HX_FIELD_EQ(inName,"textInputStructArray") ) { return textInputStructArray; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"inputNounPosTextObject") ) { return inputNounPosTextObject; }
		if (HX_FIELD_EQ(inName,"inputVerbIngTextObject") ) { return inputVerbIngTextObject; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"inputAdjTextInputObject") ) { return inputAdjTextInputObject; }
		if (HX_FIELD_EQ(inName,"inputAdvTextInputObject") ) { return inputAdvTextInputObject; }
		if (HX_FIELD_EQ(inName,"inputNounSPosTextObject") ) { return inputNounSPosTextObject; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"inputNounTextInputObject") ) { return inputNounTextInputObject; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"inputNounSTextInputObject") ) { return inputNounSTextInputObject; }
		if (HX_FIELD_EQ(inName,"inputVerb1TextInputObject") ) { return inputVerb1TextInputObject; }
		if (HX_FIELD_EQ(inName,"inputVerb2TextInputObject") ) { return inputVerb2TextInputObject; }
		if (HX_FIELD_EQ(inName,"inputVerb3TextInputObject") ) { return inputVerb3TextInputObject; }
		if (HX_FIELD_EQ(inName,"inputVerbSTextInputObject") ) { return inputVerbSTextInputObject; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"inputNounPosTextInputObject") ) { return inputNounPosTextInputObject; }
		if (HX_FIELD_EQ(inName,"inputTagNameTextInputObject") ) { return inputTagNameTextInputObject; }
		if (HX_FIELD_EQ(inName,"inputVerbIngTextInputObject") ) { return inputVerbIngTextInputObject; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"inputNounSPosTextInputObject") ) { return inputNounSPosTextInputObject; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectTagTypeListSelectorObject") ) { return selectTagTypeListSelectorObject; }
		if (HX_FIELD_EQ(inName,"selectTagTypeListSelectorString") ) { return selectTagTypeListSelectorString; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"selectTagTypeListSelectorPrevString") ) { return selectTagTypeListSelectorPrevString; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupAddObjectTag_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"gridObject") ) { gridObject=inValue.Cast< ::haxe::ui::toolkit::containers::Grid >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { popupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { buttonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"inputAdjTextObject") ) { inputAdjTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputAdvTextObject") ) { inputAdvTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"inputNounTextObject") ) { inputNounTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"inputNounSTextObject") ) { inputNounSTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerb1TextObject") ) { inputVerb1TextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerb2TextObject") ) { inputVerb2TextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerb3TextObject") ) { inputVerb3TextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerbSTextObject") ) { inputVerbSTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textInputStructArray") ) { textInputStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputNounPosTextObject") ) { inputNounPosTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerbIngTextObject") ) { inputVerbIngTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"inputAdjTextInputObject") ) { inputAdjTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputAdvTextInputObject") ) { inputAdvTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputNounSPosTextObject") ) { inputNounSPosTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"inputNounTextInputObject") ) { inputNounTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"inputNounSTextInputObject") ) { inputNounSTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerb1TextInputObject") ) { inputVerb1TextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerb2TextInputObject") ) { inputVerb2TextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerb3TextInputObject") ) { inputVerb3TextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerbSTextInputObject") ) { inputVerbSTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"inputNounPosTextInputObject") ) { inputNounPosTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputTagNameTextInputObject") ) { inputTagNameTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputVerbIngTextInputObject") ) { inputVerbIngTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"inputNounSPosTextInputObject") ) { inputNounSPosTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectTagTypeListSelectorObject") ) { selectTagTypeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectTagTypeListSelectorString") ) { selectTagTypeListSelectorString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"selectTagTypeListSelectorPrevString") ) { selectTagTypeListSelectorPrevString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UIPopupAddObjectTag_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UIPopupAddObjectTag_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"));
	outFields->push(HX_HCSTRING("inputAdjTextInputObject","\xff","\x06","\x81","\x28"));
	outFields->push(HX_HCSTRING("inputAdvTextInputObject","\x73","\xf4","\xc2","\x7e"));
	outFields->push(HX_HCSTRING("inputNounPosTextInputObject","\xac","\x96","\x7c","\x4e"));
	outFields->push(HX_HCSTRING("inputNounSPosTextInputObject","\x37","\xfd","\xde","\xdc"));
	outFields->push(HX_HCSTRING("inputNounSTextInputObject","\xad","\x35","\xbe","\x46"));
	outFields->push(HX_HCSTRING("inputNounTextInputObject","\x18","\x51","\xfd","\xc5"));
	outFields->push(HX_HCSTRING("inputTagNameTextInputObject","\x21","\x2a","\xe8","\x43"));
	outFields->push(HX_HCSTRING("inputVerb1TextInputObject","\x54","\x75","\x61","\x78"));
	outFields->push(HX_HCSTRING("inputVerb2TextInputObject","\x73","\x9e","\x91","\x3f"));
	outFields->push(HX_HCSTRING("inputVerb3TextInputObject","\x92","\xc7","\xc1","\x06"));
	outFields->push(HX_HCSTRING("inputVerbIngTextInputObject","\x23","\xc0","\x80","\xb6"));
	outFields->push(HX_HCSTRING("inputVerbSTextInputObject","\x72","\xeb","\xc6","\xec"));
	outFields->push(HX_HCSTRING("inputAdjTextObject","\xe9","\x19","\xfd","\x45"));
	outFields->push(HX_HCSTRING("inputAdvTextObject","\xf5","\x20","\x6a","\x50"));
	outFields->push(HX_HCSTRING("inputNounPosTextObject","\x5c","\xa9","\xa5","\x42"));
	outFields->push(HX_HCSTRING("inputNounSPosTextObject","\xb1","\xce","\xd2","\xc1"));
	outFields->push(HX_HCSTRING("inputNounSTextObject","\xfb","\x69","\xea","\x4b"));
	outFields->push(HX_HCSTRING("inputNounTextObject","\x70","\x06","\x37","\x0d"));
	outFields->push(HX_HCSTRING("inputVerb1TextObject","\xb4","\x4b","\x3d","\x55"));
	outFields->push(HX_HCSTRING("inputVerb2TextObject","\xf5","\xb6","\x1b","\xd6"));
	outFields->push(HX_HCSTRING("inputVerb3TextObject","\x36","\x22","\xfa","\x56"));
	outFields->push(HX_HCSTRING("inputVerbIngTextObject","\x45","\xf3","\xdf","\x7e"));
	outFields->push(HX_HCSTRING("inputVerbSTextObject","\x56","\x8a","\xc7","\x72"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("selectTagTypeListSelectorObject","\xf4","\x1c","\x29","\xa4"));
	outFields->push(HX_HCSTRING("selectTagTypeListSelectorPrevString","\xd9","\xf0","\xf2","\x9c"));
	outFields->push(HX_HCSTRING("selectTagTypeListSelectorString","\x06","\xc7","\x19","\xa0"));
	outFields->push(HX_HCSTRING("textInputStructArray","\xe7","\x3d","\xd6","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupAddObjectTag_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupAddObjectTag_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupAddObjectTag_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputAdjTextInputObject),HX_HCSTRING("inputAdjTextInputObject","\xff","\x06","\x81","\x28")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputAdvTextInputObject),HX_HCSTRING("inputAdvTextInputObject","\x73","\xf4","\xc2","\x7e")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputNounPosTextInputObject),HX_HCSTRING("inputNounPosTextInputObject","\xac","\x96","\x7c","\x4e")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputNounSPosTextInputObject),HX_HCSTRING("inputNounSPosTextInputObject","\x37","\xfd","\xde","\xdc")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputNounSTextInputObject),HX_HCSTRING("inputNounSTextInputObject","\xad","\x35","\xbe","\x46")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputNounTextInputObject),HX_HCSTRING("inputNounTextInputObject","\x18","\x51","\xfd","\xc5")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputTagNameTextInputObject),HX_HCSTRING("inputTagNameTextInputObject","\x21","\x2a","\xe8","\x43")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerb1TextInputObject),HX_HCSTRING("inputVerb1TextInputObject","\x54","\x75","\x61","\x78")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerb2TextInputObject),HX_HCSTRING("inputVerb2TextInputObject","\x73","\x9e","\x91","\x3f")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerb3TextInputObject),HX_HCSTRING("inputVerb3TextInputObject","\x92","\xc7","\xc1","\x06")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerbIngTextInputObject),HX_HCSTRING("inputVerbIngTextInputObject","\x23","\xc0","\x80","\xb6")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerbSTextInputObject),HX_HCSTRING("inputVerbSTextInputObject","\x72","\xeb","\xc6","\xec")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputAdjTextObject),HX_HCSTRING("inputAdjTextObject","\xe9","\x19","\xfd","\x45")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputAdvTextObject),HX_HCSTRING("inputAdvTextObject","\xf5","\x20","\x6a","\x50")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputNounPosTextObject),HX_HCSTRING("inputNounPosTextObject","\x5c","\xa9","\xa5","\x42")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputNounSPosTextObject),HX_HCSTRING("inputNounSPosTextObject","\xb1","\xce","\xd2","\xc1")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputNounSTextObject),HX_HCSTRING("inputNounSTextObject","\xfb","\x69","\xea","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputNounTextObject),HX_HCSTRING("inputNounTextObject","\x70","\x06","\x37","\x0d")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerb1TextObject),HX_HCSTRING("inputVerb1TextObject","\xb4","\x4b","\x3d","\x55")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerb2TextObject),HX_HCSTRING("inputVerb2TextObject","\xf5","\xb6","\x1b","\xd6")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerb3TextObject),HX_HCSTRING("inputVerb3TextObject","\x36","\x22","\xfa","\x56")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerbIngTextObject),HX_HCSTRING("inputVerbIngTextObject","\x45","\xf3","\xdf","\x7e")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupAddObjectTag_obj,inputVerbSTextObject),HX_HCSTRING("inputVerbSTextObject","\x56","\x8a","\xc7","\x72")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupAddObjectTag_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectTag_obj,selectTagTypeListSelectorObject),HX_HCSTRING("selectTagTypeListSelectorObject","\xf4","\x1c","\x29","\xa4")},
	{hx::fsString,(int)offsetof(UIPopupAddObjectTag_obj,selectTagTypeListSelectorPrevString),HX_HCSTRING("selectTagTypeListSelectorPrevString","\xd9","\xf0","\xf2","\x9c")},
	{hx::fsString,(int)offsetof(UIPopupAddObjectTag_obj,selectTagTypeListSelectorString),HX_HCSTRING("selectTagTypeListSelectorString","\x06","\xc7","\x19","\xa0")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(UIPopupAddObjectTag_obj,textInputStructArray),HX_HCSTRING("textInputStructArray","\xe7","\x3d","\xd6","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"),
	HX_HCSTRING("inputAdjTextInputObject","\xff","\x06","\x81","\x28"),
	HX_HCSTRING("inputAdvTextInputObject","\x73","\xf4","\xc2","\x7e"),
	HX_HCSTRING("inputNounPosTextInputObject","\xac","\x96","\x7c","\x4e"),
	HX_HCSTRING("inputNounSPosTextInputObject","\x37","\xfd","\xde","\xdc"),
	HX_HCSTRING("inputNounSTextInputObject","\xad","\x35","\xbe","\x46"),
	HX_HCSTRING("inputNounTextInputObject","\x18","\x51","\xfd","\xc5"),
	HX_HCSTRING("inputTagNameTextInputObject","\x21","\x2a","\xe8","\x43"),
	HX_HCSTRING("inputVerb1TextInputObject","\x54","\x75","\x61","\x78"),
	HX_HCSTRING("inputVerb2TextInputObject","\x73","\x9e","\x91","\x3f"),
	HX_HCSTRING("inputVerb3TextInputObject","\x92","\xc7","\xc1","\x06"),
	HX_HCSTRING("inputVerbIngTextInputObject","\x23","\xc0","\x80","\xb6"),
	HX_HCSTRING("inputVerbSTextInputObject","\x72","\xeb","\xc6","\xec"),
	HX_HCSTRING("inputAdjTextObject","\xe9","\x19","\xfd","\x45"),
	HX_HCSTRING("inputAdvTextObject","\xf5","\x20","\x6a","\x50"),
	HX_HCSTRING("inputNounPosTextObject","\x5c","\xa9","\xa5","\x42"),
	HX_HCSTRING("inputNounSPosTextObject","\xb1","\xce","\xd2","\xc1"),
	HX_HCSTRING("inputNounSTextObject","\xfb","\x69","\xea","\x4b"),
	HX_HCSTRING("inputNounTextObject","\x70","\x06","\x37","\x0d"),
	HX_HCSTRING("inputVerb1TextObject","\xb4","\x4b","\x3d","\x55"),
	HX_HCSTRING("inputVerb2TextObject","\xf5","\xb6","\x1b","\xd6"),
	HX_HCSTRING("inputVerb3TextObject","\x36","\x22","\xfa","\x56"),
	HX_HCSTRING("inputVerbIngTextObject","\x45","\xf3","\xdf","\x7e"),
	HX_HCSTRING("inputVerbSTextObject","\x56","\x8a","\xc7","\x72"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("selectTagTypeListSelectorObject","\xf4","\x1c","\x29","\xa4"),
	HX_HCSTRING("selectTagTypeListSelectorPrevString","\xd9","\xf0","\xf2","\x9c"),
	HX_HCSTRING("selectTagTypeListSelectorString","\x06","\xc7","\x19","\xa0"),
	HX_HCSTRING("textInputStructArray","\xe7","\x3d","\xd6","\x2d"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	HX_HCSTRING("CreateGUIObjectVoid","\x52","\x6b","\x60","\xaa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPopupAddObjectTag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPopupAddObjectTag_obj::__mClass,"__mClass");
};

#endif

hx::Class UIPopupAddObjectTag_obj::__mClass;

void UIPopupAddObjectTag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIPopupAddObjectTag","\xd2","\xb5","\x57","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UIPopupAddObjectTag_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIPopupAddObjectTag_obj >;
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

