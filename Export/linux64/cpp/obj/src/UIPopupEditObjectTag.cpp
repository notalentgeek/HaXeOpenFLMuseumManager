#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumTagFeelType
#include <EnumTagFeelType.h>
#endif
#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectTag
#include <UIPopupEditObjectTag.h>
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

Void UIPopupEditObjectTag_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupEditObjectTag","new",0x7785288b,"UIPopupEditObjectTag.new","UIPopupEditObjectTag.hx",25,0x56a27145)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(63)
	this->textInputStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(62)
	this->selectTagTypeListSelectorObject = null();
	HX_STACK_LINE(61)
	this->selectTagNameListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(60)
	this->selectTagNameListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(59)
	this->selectTagListSelectorObject = null();
	HX_STACK_LINE(58)
	this->selectGeneralListSelectorObject = null();
	HX_STACK_LINE(57)
	this->selectFeelListSelectorObject = null();
	HX_STACK_LINE(56)
	this->selectedTagObject = null();
	HX_STACK_LINE(55)
	this->popupObject = null();
	HX_STACK_LINE(54)
	this->inputVerbSTextObject = null();
	HX_STACK_LINE(53)
	this->inputVerbSTextInputObject = null();
	HX_STACK_LINE(52)
	this->inputVerbIngTextObject = null();
	HX_STACK_LINE(51)
	this->inputVerbIngTextInputObject = null();
	HX_STACK_LINE(50)
	this->inputVerb3TextObject = null();
	HX_STACK_LINE(49)
	this->inputVerb3TextInputObject = null();
	HX_STACK_LINE(48)
	this->inputVerb2TextObject = null();
	HX_STACK_LINE(47)
	this->inputVerb2TextInputObject = null();
	HX_STACK_LINE(46)
	this->inputVerb1TextObject = null();
	HX_STACK_LINE(45)
	this->inputVerb1TextInputObject = null();
	HX_STACK_LINE(44)
	this->inputTagNameTextInputObject = null();
	HX_STACK_LINE(43)
	this->inputNounTextObject = null();
	HX_STACK_LINE(42)
	this->inputNounTextInputObject = null();
	HX_STACK_LINE(41)
	this->inputNounSTextObject = null();
	HX_STACK_LINE(40)
	this->inputNounSTextInputObject = null();
	HX_STACK_LINE(39)
	this->inputNounSPosTextObject = null();
	HX_STACK_LINE(38)
	this->inputNounSPosTextInputObject = null();
	HX_STACK_LINE(37)
	this->inputNounPosTextObject = null();
	HX_STACK_LINE(36)
	this->inputNounPosTextInputObject = null();
	HX_STACK_LINE(35)
	this->inputAdvTextObject = null();
	HX_STACK_LINE(34)
	this->inputAdvTextInputObject = null();
	HX_STACK_LINE(33)
	this->inputAdjTextObject = null();
	HX_STACK_LINE(32)
	this->inputAdjTextInputObject = null();
	HX_STACK_LINE(31)
	this->gridObject = null();
	HX_STACK_LINE(30)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(29)
	this->buttonObject = null();
	HX_STACK_LINE(65)
	::UIPopupEditObjectTag _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(67)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(70)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditTagObjectButton","\x49","\xe8","\x26","\x8e"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	this->buttonObject = tmp;
	HX_STACK_LINE(72)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectTag,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectTag.hx",72,0x56a27145)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(75)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(76)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(77)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectTag.xml","\x47","\xd3","\x21","\xe2"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupEditObjectTag,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectTag.hx",80,0x56a27145)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(84)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(84)
					if ((tmp6)){
						HX_STACK_LINE(86)
						bool tmp7 = (_g->selectedTagObject != null());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(86)
						if ((tmp7)){
							HX_STACK_LINE(88)
							::EnumTagFeelType feelEnum = null();		HX_STACK_VAR(feelEnum,"feelEnum");
							HX_STACK_LINE(89)
							::String tmp8 = _g->selectFeelListSelectorObject->get_text();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(89)
							::String feelString = tmp8;		HX_STACK_VAR(feelString,"feelString");
							HX_STACK_LINE(90)
							bool generalBool = false;		HX_STACK_VAR(generalBool,"generalBool");
							HX_STACK_LINE(91)
							::String tmp9 = _g->selectGeneralListSelectorObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(91)
							::String generalString = tmp9;		HX_STACK_VAR(generalString,"generalString");
							HX_STACK_LINE(92)
							bool tmp10 = (feelString == HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							if ((tmp10)){
								HX_STACK_LINE(92)
								feelEnum = ::EnumTagFeelType_obj::POSITIVE;
							}
							else{
								HX_STACK_LINE(93)
								bool tmp11 = (feelString == HX_HCSTRING("NEUTRAL","\x27","\xc1","\xfd","\x6a"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(93)
								if ((tmp11)){
									HX_STACK_LINE(93)
									feelEnum = ::EnumTagFeelType_obj::NEUTRAL;
								}
								else{
									HX_STACK_LINE(94)
									bool tmp12 = (feelString == HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(94)
									if ((tmp12)){
										HX_STACK_LINE(94)
										feelEnum = ::EnumTagFeelType_obj::NEGATIVE;
									}
								}
							}
							HX_STACK_LINE(95)
							bool tmp11 = (generalString == HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(95)
							if ((tmp11)){
								HX_STACK_LINE(95)
								generalBool = true;
							}
							else{
								HX_STACK_LINE(96)
								bool tmp12 = (generalString == HX_HCSTRING("No","\x61","\x44","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(96)
								if ((tmp12)){
									HX_STACK_LINE(96)
									generalBool = false;
								}
							}
							HX_STACK_LINE(97)
							::EnumTagFeelType tmp12 = feelEnum;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(97)
							_g->selectedTagObject->SetFeelEnumObject(tmp12);
							HX_STACK_LINE(98)
							bool tmp13 = generalBool;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(98)
							_g->selectedTagObject->SetGeneralTagBoolObject(tmp13);
							HX_STACK_LINE(99)
							::String tmp14 = _g->inputTagNameTextInputObject->get_text();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(99)
							_g->selectedTagObject->SetNameStringObject(tmp14);
							HX_STACK_LINE(100)
							::String tmp15 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(100)
							bool tmp16 = (tmp15 == HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(100)
							if ((tmp16)){
								HX_STACK_LINE(102)
								::String tmp17 = _g->inputAdjTextInputObject->get_text();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(101)
								_g->selectedTagObject->SetAdjectiveStringObject(tmp17);
							}
							else{
								HX_STACK_LINE(104)
								::String tmp17 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(104)
								bool tmp18 = (tmp17 == HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(104)
								if ((tmp18)){
									HX_STACK_LINE(106)
									::String tmp19 = _g->inputAdvTextInputObject->get_text();		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(105)
									_g->selectedTagObject->SetAdverbStringObject(tmp19);
								}
								else{
									HX_STACK_LINE(108)
									::String tmp19 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(108)
									bool tmp20 = (tmp19 == HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6"));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(108)
									if ((tmp20)){
										HX_STACK_LINE(110)
										::String tmp21 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(109)
										::ObjectTag tmp22 = _g->selectedTagObject->SetNounStringObject(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(111)
										::String tmp23 = _g->inputNounPosTextInputObject->get_text();		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(109)
										::ObjectTag tmp24 = tmp22->SetNounPosStringObject(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(112)
										::String tmp25 = _g->inputNounSTextInputObject->get_text();		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(109)
										::ObjectTag tmp26 = tmp24->SetNounSStringObject(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(113)
										::String tmp27 = _g->inputNounSPosTextInputObject->get_text();		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(109)
										tmp26->SetNounSPosStringObject(tmp27);
									}
									else{
										HX_STACK_LINE(115)
										::String tmp21 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(115)
										bool tmp22 = (tmp21 == HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc"));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(115)
										if ((tmp22)){
											HX_STACK_LINE(117)
											::String tmp23 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(116)
											::ObjectTag tmp24 = _g->selectedTagObject->SetNounStringObject(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(118)
											::String tmp25 = _g->inputNounPosTextInputObject->get_text();		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(116)
											tmp24->SetNounPosStringObject(tmp25);
										}
										else{
											HX_STACK_LINE(120)
											::String tmp23 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(120)
											bool tmp24 = (tmp23 == HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f"));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(120)
											if ((tmp24)){
												HX_STACK_LINE(122)
												::String tmp25 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(121)
												::ObjectTag tmp26 = _g->selectedTagObject->SetNounStringObject(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(123)
												::String tmp27 = _g->inputNounSTextInputObject->get_text();		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(121)
												tmp26->SetNounSStringObject(tmp27);
											}
											else{
												HX_STACK_LINE(125)
												::String tmp25 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(125)
												bool tmp26 = (tmp25 == HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25"));		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(125)
												if ((tmp26)){
													HX_STACK_LINE(127)
													::String tmp27 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(126)
													::ObjectTag tmp28 = _g->selectedTagObject->SetNounStringObject(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(128)
													::String tmp29 = _g->inputNounSTextInputObject->get_text();		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(126)
													tmp28->SetNounSStringObject(tmp29);
												}
												else{
													HX_STACK_LINE(130)
													::String tmp27 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(130)
													bool tmp28 = (tmp27 == HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84"));		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(130)
													if ((tmp28)){
														HX_STACK_LINE(132)
														::String tmp29 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(131)
														::ObjectTag tmp30 = _g->selectedTagObject->SetNounStringObject(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(133)
														::String tmp31 = _g->inputNounSTextInputObject->get_text();		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(131)
														tmp30->SetNounSStringObject(tmp31);
													}
													else{
														HX_STACK_LINE(135)
														::String tmp29 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(135)
														bool tmp30 = (tmp29 == HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14"));		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(135)
														if ((tmp30)){
															HX_STACK_LINE(136)
															::String tmp31 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(136)
															_g->selectedTagObject->SetNounStringObject(tmp31);
														}
														else{
															HX_STACK_LINE(138)
															::String tmp31 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(138)
															bool tmp32 = (tmp31 == HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba"));		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(138)
															if ((tmp32)){
																HX_STACK_LINE(140)
																::String tmp33 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(139)
																::ObjectTag tmp34 = _g->selectedTagObject->SetNounStringObject(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(141)
																::String tmp35 = _g->inputNounSTextInputObject->get_text();		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(139)
																tmp34->SetNounSStringObject(tmp35);
															}
															else{
																HX_STACK_LINE(143)
																::String tmp33 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(143)
																bool tmp34 = (tmp33 == HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b"));		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(143)
																if ((tmp34)){
																	HX_STACK_LINE(145)
																	::String tmp35 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(144)
																	_g->selectedTagObject->SetNounStringObject(tmp35);
																}
																else{
																	HX_STACK_LINE(147)
																	::String tmp35 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(147)
																	bool tmp36 = (tmp35 == HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11"));		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(147)
																	if ((tmp36)){
																		HX_STACK_LINE(149)
																		::String tmp37 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(148)
																		_g->selectedTagObject->SetNounStringObject(tmp37);
																	}
																	else{
																		HX_STACK_LINE(151)
																		::String tmp37 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp37,"tmp37");
																		HX_STACK_LINE(151)
																		bool tmp38 = (tmp37 == HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1"));		HX_STACK_VAR(tmp38,"tmp38");
																		HX_STACK_LINE(151)
																		if ((tmp38)){
																			HX_STACK_LINE(153)
																			::String tmp39 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(152)
																			::ObjectTag tmp40 = _g->selectedTagObject->SetNounStringObject(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(154)
																			::String tmp41 = _g->inputNounSTextInputObject->get_text();		HX_STACK_VAR(tmp41,"tmp41");
																			HX_STACK_LINE(152)
																			tmp40->SetNounSStringObject(tmp41);
																		}
																		else{
																			HX_STACK_LINE(156)
																			::String tmp39 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp39,"tmp39");
																			HX_STACK_LINE(156)
																			bool tmp40 = (tmp39 == HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf"));		HX_STACK_VAR(tmp40,"tmp40");
																			HX_STACK_LINE(156)
																			if ((tmp40)){
																				HX_STACK_LINE(158)
																				::String tmp41 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(157)
																				_g->selectedTagObject->SetNounStringObject(tmp41);
																			}
																			else{
																				HX_STACK_LINE(160)
																				::String tmp41 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp41,"tmp41");
																				HX_STACK_LINE(160)
																				bool tmp42 = (tmp41 == HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4"));		HX_STACK_VAR(tmp42,"tmp42");
																				HX_STACK_LINE(160)
																				if ((tmp42)){
																					HX_STACK_LINE(162)
																					::String tmp43 = _g->inputNounTextInputObject->get_text();		HX_STACK_VAR(tmp43,"tmp43");
																					HX_STACK_LINE(161)
																					::ObjectTag tmp44 = _g->selectedTagObject->SetNounStringObject(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
																					HX_STACK_LINE(163)
																					::String tmp45 = _g->inputNounSTextInputObject->get_text();		HX_STACK_VAR(tmp45,"tmp45");
																					HX_STACK_LINE(161)
																					tmp44->SetNounSStringObject(tmp45);
																				}
																				else{
																					HX_STACK_LINE(165)
																					::String tmp43 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp43,"tmp43");
																					HX_STACK_LINE(165)
																					bool tmp44 = (tmp43 == HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7"));		HX_STACK_VAR(tmp44,"tmp44");
																					HX_STACK_LINE(165)
																					if ((tmp44)){
																						HX_STACK_LINE(167)
																						::String tmp45 = _g->inputVerb1TextInputObject->get_text();		HX_STACK_VAR(tmp45,"tmp45");
																						HX_STACK_LINE(166)
																						::ObjectTag tmp46 = _g->selectedTagObject->SetVerb1StringObject(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
																						HX_STACK_LINE(168)
																						::String tmp47 = _g->inputVerb2TextInputObject->get_text();		HX_STACK_VAR(tmp47,"tmp47");
																						HX_STACK_LINE(166)
																						::ObjectTag tmp48 = tmp46->SetVerb2StringObject(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																						HX_STACK_LINE(169)
																						::String tmp49 = _g->inputVerb3TextInputObject->get_text();		HX_STACK_VAR(tmp49,"tmp49");
																						HX_STACK_LINE(166)
																						::ObjectTag tmp50 = tmp48->SetVerb3StringObject(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																						HX_STACK_LINE(170)
																						::String tmp51 = _g->inputVerbIngTextInputObject->get_text();		HX_STACK_VAR(tmp51,"tmp51");
																						HX_STACK_LINE(166)
																						::ObjectTag tmp52 = tmp50->SetVerbIngStringObject(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																						HX_STACK_LINE(171)
																						::String tmp53 = _g->inputVerbSTextInputObject->get_text();		HX_STACK_VAR(tmp53,"tmp53");
																						HX_STACK_LINE(166)
																						tmp52->SetVerbSStringObject(tmp53);
																					}
																					else{
																						HX_STACK_LINE(173)
																						::String tmp45 = _g->selectTagTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp45,"tmp45");
																						HX_STACK_LINE(173)
																						bool tmp46 = (tmp45 == HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed"));		HX_STACK_VAR(tmp46,"tmp46");
																						HX_STACK_LINE(173)
																						if ((tmp46)){
																							HX_STACK_LINE(175)
																							::String tmp47 = _g->inputVerb1TextInputObject->get_text();		HX_STACK_VAR(tmp47,"tmp47");
																							HX_STACK_LINE(174)
																							::ObjectTag tmp48 = _g->selectedTagObject->SetVerb1StringObject(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
																							HX_STACK_LINE(176)
																							::String tmp49 = _g->inputVerb2TextInputObject->get_text();		HX_STACK_VAR(tmp49,"tmp49");
																							HX_STACK_LINE(174)
																							::ObjectTag tmp50 = tmp48->SetVerb2StringObject(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
																							HX_STACK_LINE(177)
																							::String tmp51 = _g->inputVerb3TextInputObject->get_text();		HX_STACK_VAR(tmp51,"tmp51");
																							HX_STACK_LINE(174)
																							::ObjectTag tmp52 = tmp50->SetVerb3StringObject(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
																							HX_STACK_LINE(178)
																							::String tmp53 = _g->inputVerbIngTextInputObject->get_text();		HX_STACK_VAR(tmp53,"tmp53");
																							HX_STACK_LINE(174)
																							::ObjectTag tmp54 = tmp52->SetVerbIngStringObject(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
																							HX_STACK_LINE(179)
																							::String tmp55 = _g->inputVerbSTextInputObject->get_text();		HX_STACK_VAR(tmp55,"tmp55");
																							HX_STACK_LINE(174)
																							tmp54->SetVerbSStringObject(tmp55);
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(80)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Tag","\x44","\x39","\x56","\x84"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(80)
			_g->popupObject = tmp6;
			HX_STACK_LINE(188)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(188)
			::haxe::ui::toolkit::containers::Grid tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectTag_Grid","\x0c","\x3d","\xe3","\x39"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(188)
			_g->gridObject = tmp8;
			HX_STACK_LINE(189)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(189)
			::haxe::ui::toolkit::controls::TextInput tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectTag_InputName","\x6f","\x4b","\x1c","\x4f"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(189)
			_g->inputTagNameTextInputObject = tmp10;
			HX_STACK_LINE(190)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(190)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectTag_SelectFeel","\x48","\x93","\x3a","\x87"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(190)
			_g->selectFeelListSelectorObject = tmp12;
			HX_STACK_LINE(191)
			_g->selectFeelListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(192)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(192)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectTag_SelectGeneral","\x86","\xb0","\xe1","\xe6"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(192)
			_g->selectGeneralListSelectorObject = tmp14;
			HX_STACK_LINE(193)
			_g->selectGeneralListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(194)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(194)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectTag_SelectTag","\xb8","\x18","\xfd","\xcc"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(194)
			_g->selectTagListSelectorObject = tmp16;
			HX_STACK_LINE(195)
			_g->selectTagListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(196)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(196)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectTag_SelectTagType","\x92","\xf3","\x05","\x57"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(196)
			_g->selectTagTypeListSelectorObject = tmp18;
			HX_STACK_LINE(197)
			_g->selectTagTypeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(199)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(200)
			while((true)){
				HX_STACK_LINE(200)
				int tmp19 = loopCounter1Int;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(200)
				int tmp20 = _g->collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(200)
				bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(200)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(200)
				if ((tmp22)){
					HX_STACK_LINE(200)
					break;
				}
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::data::IDataSource tmp23 = _g->selectTagListSelectorObject->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(202)
				::ObjectTag tmp24 = _g->collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(202)
				::String tmp25 = tmp24->GetNameString();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(202)
				tmp23->createFromString(tmp25,null());
				HX_STACK_LINE(203)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(207)
			_g->CreateGUIObjectVoid();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(72)
	tmp1->set_onClick( Dynamic(new _Function_1_1(_g)));
}
;
	return null();
}

//UIPopupEditObjectTag_obj::~UIPopupEditObjectTag_obj() { }

Dynamic UIPopupEditObjectTag_obj::__CreateEmpty() { return  new UIPopupEditObjectTag_obj; }
hx::ObjectPtr< UIPopupEditObjectTag_obj > UIPopupEditObjectTag_obj::__new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{  hx::ObjectPtr< UIPopupEditObjectTag_obj > _result_ = new UIPopupEditObjectTag_obj();
	_result_->__construct(_collectionGlobalObject,_root);
	return _result_;}

Dynamic UIPopupEditObjectTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPopupEditObjectTag_obj > _result_ = new UIPopupEditObjectTag_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void UIPopupEditObjectTag_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectTag","UpdateVoid",0x315c8552,"UIPopupEditObjectTag.UpdateVoid","UIPopupEditObjectTag.hx",212,0x56a27145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		if ((tmp1)){
			HX_STACK_LINE(219)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectGeneralListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(219)
			bool tmp4 = (tmp3 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(219)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(219)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(219)
			if ((tmp6)){
				HX_STACK_LINE(220)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = this->selectGeneralListSelectorObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(220)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(220)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(220)
				::String tmp11 = tmp10->get_text();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(220)
				::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(220)
				::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(220)
				tmp7 = (tmp13 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(219)
				tmp7 = true;
			}
			HX_STACK_LINE(219)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(219)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(219)
			if ((tmp8)){
				HX_STACK_LINE(221)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectGeneralListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(221)
				int tmp12 = tmp11->get_selectedIndex();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(221)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(221)
				tmp9 = (tmp13 == (int)-1);
			}
			else{
				HX_STACK_LINE(219)
				tmp9 = true;
			}
			HX_STACK_LINE(218)
			if ((tmp9)){
				HX_STACK_LINE(223)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(223)
				tmp10->set_disabled(true);
				HX_STACK_LINE(224)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(224)
				tmp11->set_selectedIndex((int)-1);
				HX_STACK_LINE(225)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				tmp12->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(227)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(227)
				tmp10->set_disabled(false);
			}
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			::String tmp11 = tmp10->get_text();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(229)
			bool tmp12 = (tmp11 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(229)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(229)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(229)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(229)
			if ((tmp14)){
				HX_STACK_LINE(230)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(230)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(230)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(230)
				::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(230)
				::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(230)
				::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(230)
				tmp15 = (tmp21 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(229)
				tmp15 = true;
			}
			HX_STACK_LINE(229)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(229)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(229)
			if ((tmp16)){
				HX_STACK_LINE(231)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(231)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(231)
				int tmp20 = tmp19->get_selectedIndex();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(231)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(231)
				tmp17 = (tmp21 == (int)-1);
			}
			else{
				HX_STACK_LINE(229)
				tmp17 = true;
			}
			HX_STACK_LINE(228)
			if ((tmp17)){
				HX_STACK_LINE(233)
				::haxe::ui::toolkit::controls::TextInput tmp18 = this->inputTagNameTextInputObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(233)
				tmp18->set_disabled(true);
				HX_STACK_LINE(234)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectFeelListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(234)
				tmp19->set_disabled(true);
				HX_STACK_LINE(235)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(235)
				tmp20->set_disabled(true);
			}
			else{
				HX_STACK_LINE(238)
				::haxe::ui::toolkit::controls::TextInput tmp18 = this->inputTagNameTextInputObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(238)
				tmp18->set_disabled(false);
				HX_STACK_LINE(239)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectFeelListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(239)
				tmp19->set_disabled(false);
				HX_STACK_LINE(240)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(240)
				tmp20->set_disabled(false);
			}
			HX_STACK_LINE(243)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(243)
			::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(243)
			this->selectTagNameListSelectorString = tmp19;
			HX_STACK_LINE(244)
			::String tmp20 = this->selectTagNameListSelectorString;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(244)
			::String tmp21 = this->selectTagNameListSelectorPrevString;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(244)
			bool tmp22 = (tmp20 != tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(244)
			if ((tmp22)){
				HX_STACK_LINE(246)
				::CollectionGlobal tmp23 = this->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(246)
				::String tmp24 = this->selectTagNameListSelectorString;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(246)
				::ObjectTag tmp25 = ::CollectionFunction_obj::FindTagObject(tmp23,false,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(246)
				this->selectedTagObject = tmp25;
				HX_STACK_LINE(248)
				::ObjectTag tmp26 = this->selectedTagObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(248)
				bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(248)
				if ((tmp27)){
					HX_STACK_LINE(250)
					::haxe::ui::toolkit::controls::TextInput tmp28 = this->inputTagNameTextInputObject;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(250)
					::ObjectTag tmp29 = this->selectedTagObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(250)
					::String tmp30 = tmp29->GetNameString();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(250)
					tmp28->set_text(tmp30);
					HX_STACK_LINE(251)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp31 = this->selectFeelListSelectorObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(251)
					::ObjectTag tmp32 = this->selectedTagObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(251)
					::EnumTagFeelType tmp33 = tmp32->GetFeelEnum();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(251)
					::String tmp34 = ::Std_obj::string(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(251)
					tmp31->set_text(tmp34);
					HX_STACK_LINE(252)
					::ObjectTag tmp35 = this->selectedTagObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(252)
					bool tmp36 = tmp35->GetGeneralTagBool();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(252)
					bool tmp37 = (tmp36 == true);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(252)
					if ((tmp37)){
						HX_STACK_LINE(252)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp38 = this->selectGeneralListSelectorObject;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(252)
						tmp38->set_text(HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00"));
					}
					else{
						HX_STACK_LINE(253)
						::ObjectTag tmp38 = this->selectedTagObject;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(253)
						bool tmp39 = tmp38->GetGeneralTagBool();		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(253)
						bool tmp40 = (tmp39 == false);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(253)
						if ((tmp40)){
							HX_STACK_LINE(253)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp41 = this->selectGeneralListSelectorObject;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(253)
							tmp41->set_text(HX_HCSTRING("No","\x61","\x44","\x00","\x00"));
						}
					}
					HX_STACK_LINE(254)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp38 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(254)
					::ObjectTag tmp39 = this->selectedTagObject;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(254)
					::EnumTagType tmp40 = tmp39->GetTypeEnum();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(254)
					::String tmp41 = ::Std_obj::string(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(254)
					tmp38->set_text(tmp41);
					HX_STACK_LINE(256)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(257)
					while((true)){
						HX_STACK_LINE(257)
						int tmp42 = loopCounter1Int;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(257)
						int tmp43 = this->textInputStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(257)
						bool tmp44 = (tmp42 < tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(257)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(257)
						if ((tmp45)){
							HX_STACK_LINE(257)
							break;
						}
						HX_STACK_LINE(259)
						::haxe::ui::toolkit::containers::Grid tmp46 = this->gridObject;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(259)
						Dynamic tmp47 = this->textInputStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(259)
						::haxe::ui::toolkit::controls::Text tmp48 = tmp47->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(259)
						tmp46->removeChild(tmp48,null());
						HX_STACK_LINE(260)
						::haxe::ui::toolkit::containers::Grid tmp49 = this->gridObject;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(260)
						Dynamic tmp50 = this->textInputStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(260)
						::haxe::ui::toolkit::controls::TextInput tmp51 = tmp50->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(260)
						tmp49->removeChild(tmp51,null());
						HX_STACK_LINE(261)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(264)
					::CollectionFunction_obj::ClearArray(this->textInputStructArray);
					HX_STACK_LINE(265)
					this->CreateGUIObjectVoid();
					HX_STACK_LINE(267)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp42 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(267)
					::String tmp43 = tmp42->get_text();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(267)
					bool tmp44 = (tmp43 == HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(267)
					if ((tmp44)){
						HX_STACK_LINE(269)
						::haxe::ui::toolkit::controls::Text tmp45 = this->inputAdjTextObject;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(270)
						::haxe::ui::toolkit::controls::TextInput tmp46 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp46,"tmp46");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp46,::haxe::ui::toolkit::controls::Text &tmp45){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",268,0x56a27145)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp45,false);
									__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp46,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(268)
						Dynamic tmp47 = _Function_5_1::Block(tmp46,tmp45);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(268)
						Dynamic textInputStruct = tmp47;		HX_STACK_VAR(textInputStruct,"textInputStruct");
						HX_STACK_LINE(272)
						Dynamic tmp48 = textInputStruct;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(272)
						this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp48);
						HX_STACK_LINE(273)
						::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(273)
						::ObjectTag tmp50 = this->selectedTagObject;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(273)
						::String tmp51 = tmp50->GetAdjectiveString();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(273)
						tmp49->set_text(tmp51);
						HX_STACK_LINE(274)
						::haxe::ui::toolkit::containers::Grid tmp52 = this->gridObject;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(274)
						::haxe::ui::toolkit::controls::Text tmp53 = this->inputAdjTextObject;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(274)
						tmp52->addChild(tmp53);
						HX_STACK_LINE(275)
						::haxe::ui::toolkit::containers::Grid tmp54 = this->gridObject;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(275)
						::haxe::ui::toolkit::controls::TextInput tmp55 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(275)
						tmp54->addChild(tmp55);
					}
					else{
						HX_STACK_LINE(277)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp45 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(277)
						::String tmp46 = tmp45->get_text();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(277)
						bool tmp47 = (tmp46 == HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(277)
						if ((tmp47)){
							HX_STACK_LINE(279)
							::haxe::ui::toolkit::controls::Text tmp48 = this->inputAdvTextObject;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(280)
							::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
							struct _Function_6_1{
								inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp48,::haxe::ui::toolkit::controls::TextInput &tmp49){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",278,0x56a27145)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp48,false);
										__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp49,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(278)
							Dynamic tmp50 = _Function_6_1::Block(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(278)
							Dynamic textInputStruct = tmp50;		HX_STACK_VAR(textInputStruct,"textInputStruct");
							HX_STACK_LINE(282)
							Dynamic tmp51 = textInputStruct;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(282)
							this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp51);
							HX_STACK_LINE(283)
							::haxe::ui::toolkit::controls::TextInput tmp52 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(283)
							::ObjectTag tmp53 = this->selectedTagObject;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(283)
							::String tmp54 = tmp53->GetAdverbString();		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(283)
							tmp52->set_text(tmp54);
							HX_STACK_LINE(284)
							::haxe::ui::toolkit::containers::Grid tmp55 = this->gridObject;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(284)
							::haxe::ui::toolkit::controls::Text tmp56 = this->inputAdvTextObject;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(284)
							tmp55->addChild(tmp56);
							HX_STACK_LINE(285)
							::haxe::ui::toolkit::containers::Grid tmp57 = this->gridObject;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(285)
							::haxe::ui::toolkit::controls::TextInput tmp58 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(285)
							tmp57->addChild(tmp58);
						}
						else{
							HX_STACK_LINE(287)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp48 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(287)
							::String tmp49 = tmp48->get_text();		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(287)
							bool tmp50 = (tmp49 == HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6"));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(287)
							if ((tmp50)){
								HX_STACK_LINE(289)
								::haxe::ui::toolkit::controls::Text tmp51 = this->inputNounTextObject;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(290)
								::haxe::ui::toolkit::controls::TextInput tmp52 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp52,"tmp52");
								struct _Function_7_1{
									inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp52,::haxe::ui::toolkit::controls::Text &tmp51){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",288,0x56a27145)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp51,false);
											__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp52,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(288)
								Dynamic tmp53 = _Function_7_1::Block(tmp52,tmp51);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(288)
								Dynamic textInputStruct = tmp53;		HX_STACK_VAR(textInputStruct,"textInputStruct");
								HX_STACK_LINE(292)
								Dynamic tmp54 = textInputStruct;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(292)
								this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp54);
								HX_STACK_LINE(294)
								::haxe::ui::toolkit::controls::Text tmp55 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(295)
								::haxe::ui::toolkit::controls::TextInput tmp56 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp56,"tmp56");
								struct _Function_7_2{
									inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp55,::haxe::ui::toolkit::controls::TextInput &tmp56){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",293,0x56a27145)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp55,false);
											__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp56,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(293)
								Dynamic tmp57 = _Function_7_2::Block(tmp55,tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(293)
								Dynamic textInputStruct1 = tmp57;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
								HX_STACK_LINE(297)
								Dynamic tmp58 = textInputStruct1;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(297)
								this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp58);
								HX_STACK_LINE(299)
								::haxe::ui::toolkit::controls::Text tmp59 = this->inputNounSTextObject;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(300)
								::haxe::ui::toolkit::controls::TextInput tmp60 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp60,"tmp60");
								struct _Function_7_3{
									inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp60,::haxe::ui::toolkit::controls::Text &tmp59){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",298,0x56a27145)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp59,false);
											__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp60,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(298)
								Dynamic tmp61 = _Function_7_3::Block(tmp60,tmp59);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(298)
								Dynamic textInputStruct2 = tmp61;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
								HX_STACK_LINE(302)
								Dynamic tmp62 = textInputStruct2;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(302)
								this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp62);
								HX_STACK_LINE(304)
								::haxe::ui::toolkit::controls::Text tmp63 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(305)
								::haxe::ui::toolkit::controls::TextInput tmp64 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp64,"tmp64");
								struct _Function_7_4{
									inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp63,::haxe::ui::toolkit::controls::TextInput &tmp64){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",303,0x56a27145)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp63,false);
											__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp64,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(303)
								Dynamic tmp65 = _Function_7_4::Block(tmp63,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(303)
								Dynamic textInputStruct3 = tmp65;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
								HX_STACK_LINE(307)
								Dynamic tmp66 = textInputStruct3;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(307)
								this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp66);
								HX_STACK_LINE(308)
								::haxe::ui::toolkit::controls::TextInput tmp67 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(308)
								::ObjectTag tmp68 = this->selectedTagObject;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(308)
								::String tmp69 = tmp68->GetNounString();		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(308)
								tmp67->set_text(tmp69);
								HX_STACK_LINE(309)
								::haxe::ui::toolkit::controls::TextInput tmp70 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(309)
								::ObjectTag tmp71 = this->selectedTagObject;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(309)
								::String tmp72 = tmp71->GetNounPosString();		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(309)
								tmp70->set_text(tmp72);
								HX_STACK_LINE(310)
								::haxe::ui::toolkit::controls::TextInput tmp73 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(310)
								::ObjectTag tmp74 = this->selectedTagObject;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(310)
								::String tmp75 = tmp74->GetNounSString();		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(310)
								tmp73->set_text(tmp75);
								HX_STACK_LINE(311)
								::haxe::ui::toolkit::controls::TextInput tmp76 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(311)
								::ObjectTag tmp77 = this->selectedTagObject;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(311)
								::String tmp78 = tmp77->GetNounSPosString();		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(311)
								tmp76->set_text(tmp78);
								HX_STACK_LINE(312)
								::haxe::ui::toolkit::containers::Grid tmp79 = this->gridObject;		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(312)
								::haxe::ui::toolkit::controls::Text tmp80 = this->inputNounTextObject;		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(312)
								tmp79->addChild(tmp80);
								HX_STACK_LINE(313)
								::haxe::ui::toolkit::containers::Grid tmp81 = this->gridObject;		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(313)
								::haxe::ui::toolkit::controls::TextInput tmp82 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(313)
								tmp81->addChild(tmp82);
								HX_STACK_LINE(314)
								::haxe::ui::toolkit::containers::Grid tmp83 = this->gridObject;		HX_STACK_VAR(tmp83,"tmp83");
								HX_STACK_LINE(314)
								::haxe::ui::toolkit::controls::Text tmp84 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(314)
								tmp83->addChild(tmp84);
								HX_STACK_LINE(315)
								::haxe::ui::toolkit::containers::Grid tmp85 = this->gridObject;		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(315)
								::haxe::ui::toolkit::controls::TextInput tmp86 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(315)
								tmp85->addChild(tmp86);
								HX_STACK_LINE(316)
								::haxe::ui::toolkit::containers::Grid tmp87 = this->gridObject;		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(316)
								::haxe::ui::toolkit::controls::Text tmp88 = this->inputNounSTextObject;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(316)
								tmp87->addChild(tmp88);
								HX_STACK_LINE(317)
								::haxe::ui::toolkit::containers::Grid tmp89 = this->gridObject;		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(317)
								::haxe::ui::toolkit::controls::TextInput tmp90 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(317)
								tmp89->addChild(tmp90);
								HX_STACK_LINE(318)
								::haxe::ui::toolkit::containers::Grid tmp91 = this->gridObject;		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(318)
								::haxe::ui::toolkit::controls::Text tmp92 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(318)
								tmp91->addChild(tmp92);
								HX_STACK_LINE(319)
								::haxe::ui::toolkit::containers::Grid tmp93 = this->gridObject;		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(319)
								::haxe::ui::toolkit::controls::TextInput tmp94 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(319)
								tmp93->addChild(tmp94);
							}
							else{
								HX_STACK_LINE(321)
								::haxe::ui::toolkit::controls::selection::ListSelector tmp51 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(321)
								::String tmp52 = tmp51->get_text();		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(321)
								bool tmp53 = (tmp52 == HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc"));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(321)
								if ((tmp53)){
									HX_STACK_LINE(323)
									::haxe::ui::toolkit::controls::Text tmp54 = this->inputNounTextObject;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(324)
									::haxe::ui::toolkit::controls::TextInput tmp55 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
									struct _Function_8_1{
										inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp54,::haxe::ui::toolkit::controls::TextInput &tmp55){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",322,0x56a27145)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp54,false);
												__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp55,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(322)
									Dynamic tmp56 = _Function_8_1::Block(tmp54,tmp55);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(322)
									Dynamic textInputStruct = tmp56;		HX_STACK_VAR(textInputStruct,"textInputStruct");
									HX_STACK_LINE(326)
									Dynamic tmp57 = textInputStruct;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(326)
									this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp57);
									HX_STACK_LINE(328)
									::haxe::ui::toolkit::controls::Text tmp58 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(329)
									::haxe::ui::toolkit::controls::TextInput tmp59 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp59,"tmp59");
									struct _Function_8_2{
										inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp59,::haxe::ui::toolkit::controls::Text &tmp58){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",327,0x56a27145)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp58,false);
												__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp59,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(327)
									Dynamic tmp60 = _Function_8_2::Block(tmp59,tmp58);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(327)
									Dynamic textInputStruct1 = tmp60;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
									HX_STACK_LINE(331)
									Dynamic tmp61 = textInputStruct1;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(331)
									this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp61);
									HX_STACK_LINE(332)
									::haxe::ui::toolkit::controls::TextInput tmp62 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(332)
									::ObjectTag tmp63 = this->selectedTagObject;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(332)
									::String tmp64 = tmp63->GetNounString();		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(332)
									tmp62->set_text(tmp64);
									HX_STACK_LINE(333)
									::haxe::ui::toolkit::controls::TextInput tmp65 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(333)
									::ObjectTag tmp66 = this->selectedTagObject;		HX_STACK_VAR(tmp66,"tmp66");
									HX_STACK_LINE(333)
									::String tmp67 = tmp66->GetNounPosString();		HX_STACK_VAR(tmp67,"tmp67");
									HX_STACK_LINE(333)
									tmp65->set_text(tmp67);
									HX_STACK_LINE(334)
									::haxe::ui::toolkit::containers::Grid tmp68 = this->gridObject;		HX_STACK_VAR(tmp68,"tmp68");
									HX_STACK_LINE(334)
									::haxe::ui::toolkit::controls::Text tmp69 = this->inputNounTextObject;		HX_STACK_VAR(tmp69,"tmp69");
									HX_STACK_LINE(334)
									tmp68->addChild(tmp69);
									HX_STACK_LINE(335)
									::haxe::ui::toolkit::containers::Grid tmp70 = this->gridObject;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(335)
									::haxe::ui::toolkit::controls::TextInput tmp71 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(335)
									tmp70->addChild(tmp71);
									HX_STACK_LINE(336)
									::haxe::ui::toolkit::containers::Grid tmp72 = this->gridObject;		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(336)
									::haxe::ui::toolkit::controls::Text tmp73 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp73,"tmp73");
									HX_STACK_LINE(336)
									tmp72->addChild(tmp73);
									HX_STACK_LINE(337)
									::haxe::ui::toolkit::containers::Grid tmp74 = this->gridObject;		HX_STACK_VAR(tmp74,"tmp74");
									HX_STACK_LINE(337)
									::haxe::ui::toolkit::controls::TextInput tmp75 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp75,"tmp75");
									HX_STACK_LINE(337)
									tmp74->addChild(tmp75);
								}
								else{
									HX_STACK_LINE(339)
									::haxe::ui::toolkit::controls::selection::ListSelector tmp54 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(339)
									::String tmp55 = tmp54->get_text();		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(339)
									bool tmp56 = (tmp55 == HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f"));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(339)
									if ((tmp56)){
										HX_STACK_LINE(341)
										::haxe::ui::toolkit::controls::Text tmp57 = this->inputNounTextObject;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(342)
										::haxe::ui::toolkit::controls::TextInput tmp58 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp58,"tmp58");
										struct _Function_9_1{
											inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp58,::haxe::ui::toolkit::controls::Text &tmp57){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",340,0x56a27145)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp57,false);
													__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp58,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(340)
										Dynamic tmp59 = _Function_9_1::Block(tmp58,tmp57);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(340)
										Dynamic textInputStruct = tmp59;		HX_STACK_VAR(textInputStruct,"textInputStruct");
										HX_STACK_LINE(344)
										Dynamic tmp60 = textInputStruct;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(344)
										this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp60);
										HX_STACK_LINE(346)
										::haxe::ui::toolkit::controls::Text tmp61 = this->inputNounSTextObject;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(347)
										::haxe::ui::toolkit::controls::TextInput tmp62 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp62,"tmp62");
										struct _Function_9_2{
											inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp62,::haxe::ui::toolkit::controls::Text &tmp61){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",345,0x56a27145)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp61,false);
													__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp62,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(345)
										Dynamic tmp63 = _Function_9_2::Block(tmp62,tmp61);		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(345)
										Dynamic textInputStruct1 = tmp63;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
										HX_STACK_LINE(349)
										Dynamic tmp64 = textInputStruct1;		HX_STACK_VAR(tmp64,"tmp64");
										HX_STACK_LINE(349)
										this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp64);
										HX_STACK_LINE(350)
										::haxe::ui::toolkit::controls::TextInput tmp65 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp65,"tmp65");
										HX_STACK_LINE(350)
										::ObjectTag tmp66 = this->selectedTagObject;		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(350)
										::String tmp67 = tmp66->GetNounString();		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(350)
										tmp65->set_text(tmp67);
										HX_STACK_LINE(351)
										::haxe::ui::toolkit::controls::TextInput tmp68 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp68,"tmp68");
										HX_STACK_LINE(351)
										::ObjectTag tmp69 = this->selectedTagObject;		HX_STACK_VAR(tmp69,"tmp69");
										HX_STACK_LINE(351)
										::String tmp70 = tmp69->GetNounSString();		HX_STACK_VAR(tmp70,"tmp70");
										HX_STACK_LINE(351)
										tmp68->set_text(tmp70);
										HX_STACK_LINE(352)
										::haxe::ui::toolkit::containers::Grid tmp71 = this->gridObject;		HX_STACK_VAR(tmp71,"tmp71");
										HX_STACK_LINE(352)
										::haxe::ui::toolkit::controls::Text tmp72 = this->inputNounTextObject;		HX_STACK_VAR(tmp72,"tmp72");
										HX_STACK_LINE(352)
										tmp71->addChild(tmp72);
										HX_STACK_LINE(353)
										::haxe::ui::toolkit::containers::Grid tmp73 = this->gridObject;		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(353)
										::haxe::ui::toolkit::controls::TextInput tmp74 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(353)
										tmp73->addChild(tmp74);
										HX_STACK_LINE(354)
										::haxe::ui::toolkit::containers::Grid tmp75 = this->gridObject;		HX_STACK_VAR(tmp75,"tmp75");
										HX_STACK_LINE(354)
										::haxe::ui::toolkit::controls::Text tmp76 = this->inputNounSTextObject;		HX_STACK_VAR(tmp76,"tmp76");
										HX_STACK_LINE(354)
										tmp75->addChild(tmp76);
										HX_STACK_LINE(355)
										::haxe::ui::toolkit::containers::Grid tmp77 = this->gridObject;		HX_STACK_VAR(tmp77,"tmp77");
										HX_STACK_LINE(355)
										::haxe::ui::toolkit::controls::TextInput tmp78 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp78,"tmp78");
										HX_STACK_LINE(355)
										tmp77->addChild(tmp78);
									}
									else{
										HX_STACK_LINE(357)
										::haxe::ui::toolkit::controls::selection::ListSelector tmp57 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(357)
										::String tmp58 = tmp57->get_text();		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(357)
										bool tmp59 = (tmp58 == HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25"));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(357)
										if ((tmp59)){
											HX_STACK_LINE(359)
											::haxe::ui::toolkit::controls::Text tmp60 = this->inputNounTextObject;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(360)
											::haxe::ui::toolkit::controls::TextInput tmp61 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp61,"tmp61");
											struct _Function_10_1{
												inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp60,::haxe::ui::toolkit::controls::TextInput &tmp61){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",358,0x56a27145)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp60,false);
														__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp61,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(358)
											Dynamic tmp62 = _Function_10_1::Block(tmp60,tmp61);		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(358)
											Dynamic textInputStruct = tmp62;		HX_STACK_VAR(textInputStruct,"textInputStruct");
											HX_STACK_LINE(362)
											Dynamic tmp63 = textInputStruct;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(362)
											this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp63);
											HX_STACK_LINE(364)
											::haxe::ui::toolkit::controls::Text tmp64 = this->inputNounSTextObject;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(365)
											::haxe::ui::toolkit::controls::TextInput tmp65 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp65,"tmp65");
											struct _Function_10_2{
												inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp64,::haxe::ui::toolkit::controls::TextInput &tmp65){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",363,0x56a27145)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp64,false);
														__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp65,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(363)
											Dynamic tmp66 = _Function_10_2::Block(tmp64,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(363)
											Dynamic textInputStruct1 = tmp66;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
											HX_STACK_LINE(367)
											Dynamic tmp67 = textInputStruct1;		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(367)
											this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp67);
											HX_STACK_LINE(368)
											::haxe::ui::toolkit::controls::TextInput tmp68 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(368)
											::ObjectTag tmp69 = this->selectedTagObject;		HX_STACK_VAR(tmp69,"tmp69");
											HX_STACK_LINE(368)
											::String tmp70 = tmp69->GetNounString();		HX_STACK_VAR(tmp70,"tmp70");
											HX_STACK_LINE(368)
											tmp68->set_text(tmp70);
											HX_STACK_LINE(369)
											::haxe::ui::toolkit::controls::TextInput tmp71 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp71,"tmp71");
											HX_STACK_LINE(369)
											::ObjectTag tmp72 = this->selectedTagObject;		HX_STACK_VAR(tmp72,"tmp72");
											HX_STACK_LINE(369)
											::String tmp73 = tmp72->GetNounSString();		HX_STACK_VAR(tmp73,"tmp73");
											HX_STACK_LINE(369)
											tmp71->set_text(tmp73);
											HX_STACK_LINE(370)
											::haxe::ui::toolkit::containers::Grid tmp74 = this->gridObject;		HX_STACK_VAR(tmp74,"tmp74");
											HX_STACK_LINE(370)
											::haxe::ui::toolkit::controls::Text tmp75 = this->inputNounTextObject;		HX_STACK_VAR(tmp75,"tmp75");
											HX_STACK_LINE(370)
											tmp74->addChild(tmp75);
											HX_STACK_LINE(371)
											::haxe::ui::toolkit::containers::Grid tmp76 = this->gridObject;		HX_STACK_VAR(tmp76,"tmp76");
											HX_STACK_LINE(371)
											::haxe::ui::toolkit::controls::TextInput tmp77 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp77,"tmp77");
											HX_STACK_LINE(371)
											tmp76->addChild(tmp77);
											HX_STACK_LINE(372)
											::haxe::ui::toolkit::containers::Grid tmp78 = this->gridObject;		HX_STACK_VAR(tmp78,"tmp78");
											HX_STACK_LINE(372)
											::haxe::ui::toolkit::controls::Text tmp79 = this->inputNounSTextObject;		HX_STACK_VAR(tmp79,"tmp79");
											HX_STACK_LINE(372)
											tmp78->addChild(tmp79);
											HX_STACK_LINE(373)
											::haxe::ui::toolkit::containers::Grid tmp80 = this->gridObject;		HX_STACK_VAR(tmp80,"tmp80");
											HX_STACK_LINE(373)
											::haxe::ui::toolkit::controls::TextInput tmp81 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp81,"tmp81");
											HX_STACK_LINE(373)
											tmp80->addChild(tmp81);
										}
										else{
											HX_STACK_LINE(375)
											::haxe::ui::toolkit::controls::selection::ListSelector tmp60 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(375)
											::String tmp61 = tmp60->get_text();		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(375)
											bool tmp62 = (tmp61 == HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84"));		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(375)
											if ((tmp62)){
												HX_STACK_LINE(377)
												::haxe::ui::toolkit::controls::Text tmp63 = this->inputNounTextObject;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(378)
												::haxe::ui::toolkit::controls::TextInput tmp64 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp64,"tmp64");
												struct _Function_11_1{
													inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp63,::haxe::ui::toolkit::controls::TextInput &tmp64){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",376,0x56a27145)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp63,false);
															__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp64,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(376)
												Dynamic tmp65 = _Function_11_1::Block(tmp63,tmp64);		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(376)
												Dynamic textInputStruct = tmp65;		HX_STACK_VAR(textInputStruct,"textInputStruct");
												HX_STACK_LINE(380)
												Dynamic tmp66 = textInputStruct;		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(380)
												this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp66);
												HX_STACK_LINE(382)
												::haxe::ui::toolkit::controls::Text tmp67 = this->inputNounSTextObject;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(383)
												::haxe::ui::toolkit::controls::TextInput tmp68 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp68,"tmp68");
												struct _Function_11_2{
													inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp68,::haxe::ui::toolkit::controls::Text &tmp67){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",381,0x56a27145)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp67,false);
															__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp68,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(381)
												Dynamic tmp69 = _Function_11_2::Block(tmp68,tmp67);		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(381)
												Dynamic textInputStruct1 = tmp69;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
												HX_STACK_LINE(385)
												Dynamic tmp70 = textInputStruct1;		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(385)
												this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp70);
												HX_STACK_LINE(386)
												::haxe::ui::toolkit::controls::TextInput tmp71 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(386)
												::ObjectTag tmp72 = this->selectedTagObject;		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(386)
												::String tmp73 = tmp72->GetNounString();		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(386)
												tmp71->set_text(tmp73);
												HX_STACK_LINE(387)
												::haxe::ui::toolkit::controls::TextInput tmp74 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(387)
												::ObjectTag tmp75 = this->selectedTagObject;		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(387)
												::String tmp76 = tmp75->GetNounSString();		HX_STACK_VAR(tmp76,"tmp76");
												HX_STACK_LINE(387)
												tmp74->set_text(tmp76);
												HX_STACK_LINE(388)
												::haxe::ui::toolkit::containers::Grid tmp77 = this->gridObject;		HX_STACK_VAR(tmp77,"tmp77");
												HX_STACK_LINE(388)
												::haxe::ui::toolkit::controls::Text tmp78 = this->inputNounTextObject;		HX_STACK_VAR(tmp78,"tmp78");
												HX_STACK_LINE(388)
												tmp77->addChild(tmp78);
												HX_STACK_LINE(389)
												::haxe::ui::toolkit::containers::Grid tmp79 = this->gridObject;		HX_STACK_VAR(tmp79,"tmp79");
												HX_STACK_LINE(389)
												::haxe::ui::toolkit::controls::TextInput tmp80 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp80,"tmp80");
												HX_STACK_LINE(389)
												tmp79->addChild(tmp80);
												HX_STACK_LINE(390)
												::haxe::ui::toolkit::containers::Grid tmp81 = this->gridObject;		HX_STACK_VAR(tmp81,"tmp81");
												HX_STACK_LINE(390)
												::haxe::ui::toolkit::controls::Text tmp82 = this->inputNounSTextObject;		HX_STACK_VAR(tmp82,"tmp82");
												HX_STACK_LINE(390)
												tmp81->addChild(tmp82);
												HX_STACK_LINE(391)
												::haxe::ui::toolkit::containers::Grid tmp83 = this->gridObject;		HX_STACK_VAR(tmp83,"tmp83");
												HX_STACK_LINE(391)
												::haxe::ui::toolkit::controls::TextInput tmp84 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp84,"tmp84");
												HX_STACK_LINE(391)
												tmp83->addChild(tmp84);
											}
											else{
												HX_STACK_LINE(393)
												::haxe::ui::toolkit::controls::selection::ListSelector tmp63 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(393)
												::String tmp64 = tmp63->get_text();		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(393)
												bool tmp65 = (tmp64 == HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14"));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(393)
												if ((tmp65)){
													HX_STACK_LINE(395)
													::haxe::ui::toolkit::controls::Text tmp66 = this->inputNounTextObject;		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(396)
													::haxe::ui::toolkit::controls::TextInput tmp67 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp67,"tmp67");
													struct _Function_12_1{
														inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp66,::haxe::ui::toolkit::controls::TextInput &tmp67){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",394,0x56a27145)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp66,false);
																__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp67,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(394)
													Dynamic tmp68 = _Function_12_1::Block(tmp66,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(394)
													Dynamic textInputStruct = tmp68;		HX_STACK_VAR(textInputStruct,"textInputStruct");
													HX_STACK_LINE(398)
													Dynamic tmp69 = textInputStruct;		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(398)
													this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp69);
													HX_STACK_LINE(399)
													::haxe::ui::toolkit::controls::TextInput tmp70 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(399)
													::ObjectTag tmp71 = this->selectedTagObject;		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(399)
													::String tmp72 = tmp71->GetNounString();		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(399)
													tmp70->set_text(tmp72);
													HX_STACK_LINE(400)
													::haxe::ui::toolkit::containers::Grid tmp73 = this->gridObject;		HX_STACK_VAR(tmp73,"tmp73");
													HX_STACK_LINE(400)
													::haxe::ui::toolkit::controls::Text tmp74 = this->inputNounTextObject;		HX_STACK_VAR(tmp74,"tmp74");
													HX_STACK_LINE(400)
													tmp73->addChild(tmp74);
													HX_STACK_LINE(401)
													::haxe::ui::toolkit::containers::Grid tmp75 = this->gridObject;		HX_STACK_VAR(tmp75,"tmp75");
													HX_STACK_LINE(401)
													::haxe::ui::toolkit::controls::TextInput tmp76 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp76,"tmp76");
													HX_STACK_LINE(401)
													tmp75->addChild(tmp76);
												}
												else{
													HX_STACK_LINE(403)
													::haxe::ui::toolkit::controls::selection::ListSelector tmp66 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(403)
													::String tmp67 = tmp66->get_text();		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(403)
													bool tmp68 = (tmp67 == HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba"));		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(403)
													if ((tmp68)){
														HX_STACK_LINE(405)
														::haxe::ui::toolkit::controls::Text tmp69 = this->inputNounTextObject;		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(406)
														::haxe::ui::toolkit::controls::TextInput tmp70 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp70,"tmp70");
														struct _Function_13_1{
															inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp70,::haxe::ui::toolkit::controls::Text &tmp69){
																HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",404,0x56a27145)
																{
																	hx::Anon __result = hx::Anon_obj::Create();
																	__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp69,false);
																	__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp70,false);
																	return __result;
																}
																return null();
															}
														};
														HX_STACK_LINE(404)
														Dynamic tmp71 = _Function_13_1::Block(tmp70,tmp69);		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(404)
														Dynamic textInputStruct = tmp71;		HX_STACK_VAR(textInputStruct,"textInputStruct");
														HX_STACK_LINE(408)
														Dynamic tmp72 = textInputStruct;		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(408)
														this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp72);
														HX_STACK_LINE(410)
														::haxe::ui::toolkit::controls::Text tmp73 = this->inputNounSTextObject;		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(411)
														::haxe::ui::toolkit::controls::TextInput tmp74 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp74,"tmp74");
														struct _Function_13_2{
															inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp73,::haxe::ui::toolkit::controls::TextInput &tmp74){
																HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",409,0x56a27145)
																{
																	hx::Anon __result = hx::Anon_obj::Create();
																	__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp73,false);
																	__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp74,false);
																	return __result;
																}
																return null();
															}
														};
														HX_STACK_LINE(409)
														Dynamic tmp75 = _Function_13_2::Block(tmp73,tmp74);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(409)
														Dynamic textInputStruct1 = tmp75;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
														HX_STACK_LINE(413)
														Dynamic tmp76 = textInputStruct1;		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(413)
														this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp76);
														HX_STACK_LINE(414)
														::haxe::ui::toolkit::controls::TextInput tmp77 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(414)
														::ObjectTag tmp78 = this->selectedTagObject;		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(414)
														::String tmp79 = tmp78->GetNounString();		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(414)
														tmp77->set_text(tmp79);
														HX_STACK_LINE(415)
														::haxe::ui::toolkit::controls::TextInput tmp80 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(415)
														::ObjectTag tmp81 = this->selectedTagObject;		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(415)
														::String tmp82 = tmp81->GetNounSString();		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(415)
														tmp80->set_text(tmp82);
														HX_STACK_LINE(416)
														::haxe::ui::toolkit::containers::Grid tmp83 = this->gridObject;		HX_STACK_VAR(tmp83,"tmp83");
														HX_STACK_LINE(416)
														::haxe::ui::toolkit::controls::Text tmp84 = this->inputNounTextObject;		HX_STACK_VAR(tmp84,"tmp84");
														HX_STACK_LINE(416)
														tmp83->addChild(tmp84);
														HX_STACK_LINE(417)
														::haxe::ui::toolkit::containers::Grid tmp85 = this->gridObject;		HX_STACK_VAR(tmp85,"tmp85");
														HX_STACK_LINE(417)
														::haxe::ui::toolkit::controls::TextInput tmp86 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp86,"tmp86");
														HX_STACK_LINE(417)
														tmp85->addChild(tmp86);
														HX_STACK_LINE(418)
														::haxe::ui::toolkit::containers::Grid tmp87 = this->gridObject;		HX_STACK_VAR(tmp87,"tmp87");
														HX_STACK_LINE(418)
														::haxe::ui::toolkit::controls::Text tmp88 = this->inputNounSTextObject;		HX_STACK_VAR(tmp88,"tmp88");
														HX_STACK_LINE(418)
														tmp87->addChild(tmp88);
														HX_STACK_LINE(419)
														::haxe::ui::toolkit::containers::Grid tmp89 = this->gridObject;		HX_STACK_VAR(tmp89,"tmp89");
														HX_STACK_LINE(419)
														::haxe::ui::toolkit::controls::TextInput tmp90 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp90,"tmp90");
														HX_STACK_LINE(419)
														tmp89->addChild(tmp90);
													}
													else{
														HX_STACK_LINE(421)
														::haxe::ui::toolkit::controls::selection::ListSelector tmp69 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(421)
														::String tmp70 = tmp69->get_text();		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(421)
														bool tmp71 = (tmp70 == HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b"));		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(421)
														if ((tmp71)){
															HX_STACK_LINE(423)
															::haxe::ui::toolkit::controls::Text tmp72 = this->inputNounTextObject;		HX_STACK_VAR(tmp72,"tmp72");
															HX_STACK_LINE(424)
															::haxe::ui::toolkit::controls::TextInput tmp73 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp73,"tmp73");
															struct _Function_14_1{
																inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp73,::haxe::ui::toolkit::controls::Text &tmp72){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",422,0x56a27145)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp72,false);
																		__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp73,false);
																		return __result;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(422)
															Dynamic tmp74 = _Function_14_1::Block(tmp73,tmp72);		HX_STACK_VAR(tmp74,"tmp74");
															HX_STACK_LINE(422)
															Dynamic textInputStruct = tmp74;		HX_STACK_VAR(textInputStruct,"textInputStruct");
															HX_STACK_LINE(426)
															Dynamic tmp75 = textInputStruct;		HX_STACK_VAR(tmp75,"tmp75");
															HX_STACK_LINE(426)
															this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp75);
															HX_STACK_LINE(427)
															::haxe::ui::toolkit::controls::TextInput tmp76 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp76,"tmp76");
															HX_STACK_LINE(427)
															::ObjectTag tmp77 = this->selectedTagObject;		HX_STACK_VAR(tmp77,"tmp77");
															HX_STACK_LINE(427)
															::String tmp78 = tmp77->GetNounString();		HX_STACK_VAR(tmp78,"tmp78");
															HX_STACK_LINE(427)
															tmp76->set_text(tmp78);
															HX_STACK_LINE(428)
															::haxe::ui::toolkit::containers::Grid tmp79 = this->gridObject;		HX_STACK_VAR(tmp79,"tmp79");
															HX_STACK_LINE(428)
															::haxe::ui::toolkit::controls::Text tmp80 = this->inputNounTextObject;		HX_STACK_VAR(tmp80,"tmp80");
															HX_STACK_LINE(428)
															tmp79->addChild(tmp80);
															HX_STACK_LINE(429)
															::haxe::ui::toolkit::containers::Grid tmp81 = this->gridObject;		HX_STACK_VAR(tmp81,"tmp81");
															HX_STACK_LINE(429)
															::haxe::ui::toolkit::controls::TextInput tmp82 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp82,"tmp82");
															HX_STACK_LINE(429)
															tmp81->addChild(tmp82);
														}
														else{
															HX_STACK_LINE(431)
															::haxe::ui::toolkit::controls::selection::ListSelector tmp72 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp72,"tmp72");
															HX_STACK_LINE(431)
															::String tmp73 = tmp72->get_text();		HX_STACK_VAR(tmp73,"tmp73");
															HX_STACK_LINE(431)
															bool tmp74 = (tmp73 == HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11"));		HX_STACK_VAR(tmp74,"tmp74");
															HX_STACK_LINE(431)
															if ((tmp74)){
																HX_STACK_LINE(433)
																::haxe::ui::toolkit::controls::Text tmp75 = this->inputNounTextObject;		HX_STACK_VAR(tmp75,"tmp75");
																HX_STACK_LINE(434)
																::haxe::ui::toolkit::controls::TextInput tmp76 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp76,"tmp76");
																struct _Function_15_1{
																	inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp75,::haxe::ui::toolkit::controls::TextInput &tmp76){
																		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",432,0x56a27145)
																		{
																			hx::Anon __result = hx::Anon_obj::Create();
																			__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp75,false);
																			__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp76,false);
																			return __result;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(432)
																Dynamic tmp77 = _Function_15_1::Block(tmp75,tmp76);		HX_STACK_VAR(tmp77,"tmp77");
																HX_STACK_LINE(432)
																Dynamic textInputStruct = tmp77;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																HX_STACK_LINE(436)
																Dynamic tmp78 = textInputStruct;		HX_STACK_VAR(tmp78,"tmp78");
																HX_STACK_LINE(436)
																this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp78);
																HX_STACK_LINE(437)
																::haxe::ui::toolkit::controls::TextInput tmp79 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp79,"tmp79");
																HX_STACK_LINE(437)
																::ObjectTag tmp80 = this->selectedTagObject;		HX_STACK_VAR(tmp80,"tmp80");
																HX_STACK_LINE(437)
																::String tmp81 = tmp80->GetNounString();		HX_STACK_VAR(tmp81,"tmp81");
																HX_STACK_LINE(437)
																tmp79->set_text(tmp81);
																HX_STACK_LINE(438)
																::haxe::ui::toolkit::containers::Grid tmp82 = this->gridObject;		HX_STACK_VAR(tmp82,"tmp82");
																HX_STACK_LINE(438)
																::haxe::ui::toolkit::controls::Text tmp83 = this->inputNounTextObject;		HX_STACK_VAR(tmp83,"tmp83");
																HX_STACK_LINE(438)
																tmp82->addChild(tmp83);
																HX_STACK_LINE(439)
																::haxe::ui::toolkit::containers::Grid tmp84 = this->gridObject;		HX_STACK_VAR(tmp84,"tmp84");
																HX_STACK_LINE(439)
																::haxe::ui::toolkit::controls::TextInput tmp85 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp85,"tmp85");
																HX_STACK_LINE(439)
																tmp84->addChild(tmp85);
															}
															else{
																HX_STACK_LINE(441)
																::haxe::ui::toolkit::controls::selection::ListSelector tmp75 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp75,"tmp75");
																HX_STACK_LINE(441)
																::String tmp76 = tmp75->get_text();		HX_STACK_VAR(tmp76,"tmp76");
																HX_STACK_LINE(441)
																bool tmp77 = (tmp76 == HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1"));		HX_STACK_VAR(tmp77,"tmp77");
																HX_STACK_LINE(441)
																if ((tmp77)){
																	HX_STACK_LINE(443)
																	::haxe::ui::toolkit::controls::Text tmp78 = this->inputNounTextObject;		HX_STACK_VAR(tmp78,"tmp78");
																	HX_STACK_LINE(444)
																	::haxe::ui::toolkit::controls::TextInput tmp79 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp79,"tmp79");
																	struct _Function_16_1{
																		inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp79,::haxe::ui::toolkit::controls::Text &tmp78){
																			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",442,0x56a27145)
																			{
																				hx::Anon __result = hx::Anon_obj::Create();
																				__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp78,false);
																				__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp79,false);
																				return __result;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(442)
																	Dynamic tmp80 = _Function_16_1::Block(tmp79,tmp78);		HX_STACK_VAR(tmp80,"tmp80");
																	HX_STACK_LINE(442)
																	Dynamic textInputStruct = tmp80;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																	HX_STACK_LINE(446)
																	Dynamic tmp81 = textInputStruct;		HX_STACK_VAR(tmp81,"tmp81");
																	HX_STACK_LINE(446)
																	this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp81);
																	HX_STACK_LINE(448)
																	::haxe::ui::toolkit::controls::Text tmp82 = this->inputNounSTextObject;		HX_STACK_VAR(tmp82,"tmp82");
																	HX_STACK_LINE(449)
																	::haxe::ui::toolkit::controls::TextInput tmp83 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp83,"tmp83");
																	struct _Function_16_2{
																		inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp82,::haxe::ui::toolkit::controls::TextInput &tmp83){
																			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",447,0x56a27145)
																			{
																				hx::Anon __result = hx::Anon_obj::Create();
																				__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp82,false);
																				__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp83,false);
																				return __result;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(447)
																	Dynamic tmp84 = _Function_16_2::Block(tmp82,tmp83);		HX_STACK_VAR(tmp84,"tmp84");
																	HX_STACK_LINE(447)
																	Dynamic textInputStruct1 = tmp84;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
																	HX_STACK_LINE(451)
																	Dynamic tmp85 = textInputStruct1;		HX_STACK_VAR(tmp85,"tmp85");
																	HX_STACK_LINE(451)
																	this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp85);
																	HX_STACK_LINE(452)
																	::haxe::ui::toolkit::controls::TextInput tmp86 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp86,"tmp86");
																	HX_STACK_LINE(452)
																	::ObjectTag tmp87 = this->selectedTagObject;		HX_STACK_VAR(tmp87,"tmp87");
																	HX_STACK_LINE(452)
																	::String tmp88 = tmp87->GetNounString();		HX_STACK_VAR(tmp88,"tmp88");
																	HX_STACK_LINE(452)
																	tmp86->set_text(tmp88);
																	HX_STACK_LINE(453)
																	::haxe::ui::toolkit::controls::TextInput tmp89 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp89,"tmp89");
																	HX_STACK_LINE(453)
																	::ObjectTag tmp90 = this->selectedTagObject;		HX_STACK_VAR(tmp90,"tmp90");
																	HX_STACK_LINE(453)
																	::String tmp91 = tmp90->GetNounSString();		HX_STACK_VAR(tmp91,"tmp91");
																	HX_STACK_LINE(453)
																	tmp89->set_text(tmp91);
																	HX_STACK_LINE(454)
																	::haxe::ui::toolkit::containers::Grid tmp92 = this->gridObject;		HX_STACK_VAR(tmp92,"tmp92");
																	HX_STACK_LINE(454)
																	::haxe::ui::toolkit::controls::Text tmp93 = this->inputNounTextObject;		HX_STACK_VAR(tmp93,"tmp93");
																	HX_STACK_LINE(454)
																	tmp92->addChild(tmp93);
																	HX_STACK_LINE(455)
																	::haxe::ui::toolkit::containers::Grid tmp94 = this->gridObject;		HX_STACK_VAR(tmp94,"tmp94");
																	HX_STACK_LINE(455)
																	::haxe::ui::toolkit::controls::TextInput tmp95 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp95,"tmp95");
																	HX_STACK_LINE(455)
																	tmp94->addChild(tmp95);
																	HX_STACK_LINE(456)
																	::haxe::ui::toolkit::containers::Grid tmp96 = this->gridObject;		HX_STACK_VAR(tmp96,"tmp96");
																	HX_STACK_LINE(456)
																	::haxe::ui::toolkit::controls::Text tmp97 = this->inputNounSTextObject;		HX_STACK_VAR(tmp97,"tmp97");
																	HX_STACK_LINE(456)
																	tmp96->addChild(tmp97);
																	HX_STACK_LINE(457)
																	::haxe::ui::toolkit::containers::Grid tmp98 = this->gridObject;		HX_STACK_VAR(tmp98,"tmp98");
																	HX_STACK_LINE(457)
																	::haxe::ui::toolkit::controls::TextInput tmp99 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp99,"tmp99");
																	HX_STACK_LINE(457)
																	tmp98->addChild(tmp99);
																}
																else{
																	HX_STACK_LINE(459)
																	::haxe::ui::toolkit::controls::selection::ListSelector tmp78 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp78,"tmp78");
																	HX_STACK_LINE(459)
																	::String tmp79 = tmp78->get_text();		HX_STACK_VAR(tmp79,"tmp79");
																	HX_STACK_LINE(459)
																	bool tmp80 = (tmp79 == HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf"));		HX_STACK_VAR(tmp80,"tmp80");
																	HX_STACK_LINE(459)
																	if ((tmp80)){
																		HX_STACK_LINE(461)
																		::haxe::ui::toolkit::controls::Text tmp81 = this->inputNounTextObject;		HX_STACK_VAR(tmp81,"tmp81");
																		HX_STACK_LINE(462)
																		::haxe::ui::toolkit::controls::TextInput tmp82 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp82,"tmp82");
																		struct _Function_17_1{
																			inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp81,::haxe::ui::toolkit::controls::TextInput &tmp82){
																				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",460,0x56a27145)
																				{
																					hx::Anon __result = hx::Anon_obj::Create();
																					__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp81,false);
																					__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp82,false);
																					return __result;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(460)
																		Dynamic tmp83 = _Function_17_1::Block(tmp81,tmp82);		HX_STACK_VAR(tmp83,"tmp83");
																		HX_STACK_LINE(460)
																		Dynamic textInputStruct = tmp83;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																		HX_STACK_LINE(464)
																		Dynamic tmp84 = textInputStruct;		HX_STACK_VAR(tmp84,"tmp84");
																		HX_STACK_LINE(464)
																		this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp84);
																		HX_STACK_LINE(465)
																		::haxe::ui::toolkit::controls::TextInput tmp85 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp85,"tmp85");
																		HX_STACK_LINE(465)
																		::ObjectTag tmp86 = this->selectedTagObject;		HX_STACK_VAR(tmp86,"tmp86");
																		HX_STACK_LINE(465)
																		::String tmp87 = tmp86->GetNounString();		HX_STACK_VAR(tmp87,"tmp87");
																		HX_STACK_LINE(465)
																		tmp85->set_text(tmp87);
																		HX_STACK_LINE(466)
																		::haxe::ui::toolkit::containers::Grid tmp88 = this->gridObject;		HX_STACK_VAR(tmp88,"tmp88");
																		HX_STACK_LINE(466)
																		::haxe::ui::toolkit::controls::Text tmp89 = this->inputNounTextObject;		HX_STACK_VAR(tmp89,"tmp89");
																		HX_STACK_LINE(466)
																		tmp88->addChild(tmp89);
																		HX_STACK_LINE(467)
																		::haxe::ui::toolkit::containers::Grid tmp90 = this->gridObject;		HX_STACK_VAR(tmp90,"tmp90");
																		HX_STACK_LINE(467)
																		::haxe::ui::toolkit::controls::TextInput tmp91 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp91,"tmp91");
																		HX_STACK_LINE(467)
																		tmp90->addChild(tmp91);
																	}
																	else{
																		HX_STACK_LINE(469)
																		::haxe::ui::toolkit::controls::selection::ListSelector tmp81 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp81,"tmp81");
																		HX_STACK_LINE(469)
																		::String tmp82 = tmp81->get_text();		HX_STACK_VAR(tmp82,"tmp82");
																		HX_STACK_LINE(469)
																		bool tmp83 = (tmp82 == HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4"));		HX_STACK_VAR(tmp83,"tmp83");
																		HX_STACK_LINE(469)
																		if ((tmp83)){
																			HX_STACK_LINE(471)
																			::haxe::ui::toolkit::controls::Text tmp84 = this->inputNounTextObject;		HX_STACK_VAR(tmp84,"tmp84");
																			HX_STACK_LINE(472)
																			::haxe::ui::toolkit::controls::TextInput tmp85 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp85,"tmp85");
																			struct _Function_18_1{
																				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp84,::haxe::ui::toolkit::controls::TextInput &tmp85){
																					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",470,0x56a27145)
																					{
																						hx::Anon __result = hx::Anon_obj::Create();
																						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp84,false);
																						__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp85,false);
																						return __result;
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(470)
																			Dynamic tmp86 = _Function_18_1::Block(tmp84,tmp85);		HX_STACK_VAR(tmp86,"tmp86");
																			HX_STACK_LINE(470)
																			Dynamic textInputStruct = tmp86;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																			HX_STACK_LINE(474)
																			Dynamic tmp87 = textInputStruct;		HX_STACK_VAR(tmp87,"tmp87");
																			HX_STACK_LINE(474)
																			this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp87);
																			HX_STACK_LINE(476)
																			::haxe::ui::toolkit::controls::Text tmp88 = this->inputNounSTextObject;		HX_STACK_VAR(tmp88,"tmp88");
																			HX_STACK_LINE(477)
																			::haxe::ui::toolkit::controls::TextInput tmp89 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp89,"tmp89");
																			struct _Function_18_2{
																				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp88,::haxe::ui::toolkit::controls::TextInput &tmp89){
																					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",475,0x56a27145)
																					{
																						hx::Anon __result = hx::Anon_obj::Create();
																						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp88,false);
																						__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp89,false);
																						return __result;
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(475)
																			Dynamic tmp90 = _Function_18_2::Block(tmp88,tmp89);		HX_STACK_VAR(tmp90,"tmp90");
																			HX_STACK_LINE(475)
																			Dynamic textInputStruct1 = tmp90;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
																			HX_STACK_LINE(479)
																			Dynamic tmp91 = textInputStruct1;		HX_STACK_VAR(tmp91,"tmp91");
																			HX_STACK_LINE(479)
																			this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp91);
																			HX_STACK_LINE(480)
																			::haxe::ui::toolkit::controls::TextInput tmp92 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp92,"tmp92");
																			HX_STACK_LINE(480)
																			::ObjectTag tmp93 = this->selectedTagObject;		HX_STACK_VAR(tmp93,"tmp93");
																			HX_STACK_LINE(480)
																			::String tmp94 = tmp93->GetNounString();		HX_STACK_VAR(tmp94,"tmp94");
																			HX_STACK_LINE(480)
																			tmp92->set_text(tmp94);
																			HX_STACK_LINE(481)
																			::haxe::ui::toolkit::controls::TextInput tmp95 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp95,"tmp95");
																			HX_STACK_LINE(481)
																			::ObjectTag tmp96 = this->selectedTagObject;		HX_STACK_VAR(tmp96,"tmp96");
																			HX_STACK_LINE(481)
																			::String tmp97 = tmp96->GetNounSString();		HX_STACK_VAR(tmp97,"tmp97");
																			HX_STACK_LINE(481)
																			tmp95->set_text(tmp97);
																			HX_STACK_LINE(482)
																			::haxe::ui::toolkit::containers::Grid tmp98 = this->gridObject;		HX_STACK_VAR(tmp98,"tmp98");
																			HX_STACK_LINE(482)
																			::haxe::ui::toolkit::controls::Text tmp99 = this->inputNounTextObject;		HX_STACK_VAR(tmp99,"tmp99");
																			HX_STACK_LINE(482)
																			tmp98->addChild(tmp99);
																			HX_STACK_LINE(483)
																			::haxe::ui::toolkit::containers::Grid tmp100 = this->gridObject;		HX_STACK_VAR(tmp100,"tmp100");
																			HX_STACK_LINE(483)
																			::haxe::ui::toolkit::controls::TextInput tmp101 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp101,"tmp101");
																			HX_STACK_LINE(483)
																			tmp100->addChild(tmp101);
																			HX_STACK_LINE(484)
																			::haxe::ui::toolkit::containers::Grid tmp102 = this->gridObject;		HX_STACK_VAR(tmp102,"tmp102");
																			HX_STACK_LINE(484)
																			::haxe::ui::toolkit::controls::Text tmp103 = this->inputNounSTextObject;		HX_STACK_VAR(tmp103,"tmp103");
																			HX_STACK_LINE(484)
																			tmp102->addChild(tmp103);
																			HX_STACK_LINE(485)
																			::haxe::ui::toolkit::containers::Grid tmp104 = this->gridObject;		HX_STACK_VAR(tmp104,"tmp104");
																			HX_STACK_LINE(485)
																			::haxe::ui::toolkit::controls::TextInput tmp105 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp105,"tmp105");
																			HX_STACK_LINE(485)
																			tmp104->addChild(tmp105);
																		}
																		else{
																			HX_STACK_LINE(487)
																			::haxe::ui::toolkit::controls::selection::ListSelector tmp84 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp84,"tmp84");
																			HX_STACK_LINE(487)
																			::String tmp85 = tmp84->get_text();		HX_STACK_VAR(tmp85,"tmp85");
																			HX_STACK_LINE(487)
																			bool tmp86 = (tmp85 == HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7"));		HX_STACK_VAR(tmp86,"tmp86");
																			HX_STACK_LINE(487)
																			if ((tmp86)){
																				HX_STACK_LINE(489)
																				::haxe::ui::toolkit::controls::Text tmp87 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp87,"tmp87");
																				HX_STACK_LINE(490)
																				::haxe::ui::toolkit::controls::TextInput tmp88 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp88,"tmp88");
																				struct _Function_19_1{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp88,::haxe::ui::toolkit::controls::Text &tmp87){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",488,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp87,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp88,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(488)
																				Dynamic tmp89 = _Function_19_1::Block(tmp88,tmp87);		HX_STACK_VAR(tmp89,"tmp89");
																				HX_STACK_LINE(488)
																				Dynamic textInputStruct = tmp89;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																				HX_STACK_LINE(492)
																				Dynamic tmp90 = textInputStruct;		HX_STACK_VAR(tmp90,"tmp90");
																				HX_STACK_LINE(492)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp90);
																				HX_STACK_LINE(494)
																				::haxe::ui::toolkit::controls::Text tmp91 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp91,"tmp91");
																				HX_STACK_LINE(495)
																				::haxe::ui::toolkit::controls::TextInput tmp92 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp92,"tmp92");
																				struct _Function_19_2{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp92,::haxe::ui::toolkit::controls::Text &tmp91){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",493,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp91,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp92,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(493)
																				Dynamic tmp93 = _Function_19_2::Block(tmp92,tmp91);		HX_STACK_VAR(tmp93,"tmp93");
																				HX_STACK_LINE(493)
																				Dynamic textInputStruct1 = tmp93;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
																				HX_STACK_LINE(497)
																				Dynamic tmp94 = textInputStruct1;		HX_STACK_VAR(tmp94,"tmp94");
																				HX_STACK_LINE(497)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp94);
																				HX_STACK_LINE(499)
																				::haxe::ui::toolkit::controls::Text tmp95 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp95,"tmp95");
																				HX_STACK_LINE(500)
																				::haxe::ui::toolkit::controls::TextInput tmp96 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp96,"tmp96");
																				struct _Function_19_3{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp95,::haxe::ui::toolkit::controls::TextInput &tmp96){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",498,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp95,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp96,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(498)
																				Dynamic tmp97 = _Function_19_3::Block(tmp95,tmp96);		HX_STACK_VAR(tmp97,"tmp97");
																				HX_STACK_LINE(498)
																				Dynamic textInputStruct2 = tmp97;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
																				HX_STACK_LINE(502)
																				Dynamic tmp98 = textInputStruct2;		HX_STACK_VAR(tmp98,"tmp98");
																				HX_STACK_LINE(502)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp98);
																				HX_STACK_LINE(504)
																				::haxe::ui::toolkit::controls::Text tmp99 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp99,"tmp99");
																				HX_STACK_LINE(505)
																				::haxe::ui::toolkit::controls::TextInput tmp100 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp100,"tmp100");
																				struct _Function_19_4{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp99,::haxe::ui::toolkit::controls::TextInput &tmp100){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",503,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp99,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp100,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(503)
																				Dynamic tmp101 = _Function_19_4::Block(tmp99,tmp100);		HX_STACK_VAR(tmp101,"tmp101");
																				HX_STACK_LINE(503)
																				Dynamic textInputStruct3 = tmp101;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
																				HX_STACK_LINE(507)
																				Dynamic tmp102 = textInputStruct3;		HX_STACK_VAR(tmp102,"tmp102");
																				HX_STACK_LINE(507)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp102);
																				HX_STACK_LINE(509)
																				::haxe::ui::toolkit::controls::Text tmp103 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp103,"tmp103");
																				HX_STACK_LINE(510)
																				::haxe::ui::toolkit::controls::TextInput tmp104 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp104,"tmp104");
																				struct _Function_19_5{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp104,::haxe::ui::toolkit::controls::Text &tmp103){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",508,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp103,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp104,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(508)
																				Dynamic tmp105 = _Function_19_5::Block(tmp104,tmp103);		HX_STACK_VAR(tmp105,"tmp105");
																				HX_STACK_LINE(508)
																				Dynamic textInputStruct4 = tmp105;		HX_STACK_VAR(textInputStruct4,"textInputStruct4");
																				HX_STACK_LINE(512)
																				Dynamic tmp106 = textInputStruct4;		HX_STACK_VAR(tmp106,"tmp106");
																				HX_STACK_LINE(512)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp106);
																				HX_STACK_LINE(513)
																				::haxe::ui::toolkit::controls::TextInput tmp107 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp107,"tmp107");
																				HX_STACK_LINE(513)
																				::ObjectTag tmp108 = this->selectedTagObject;		HX_STACK_VAR(tmp108,"tmp108");
																				HX_STACK_LINE(513)
																				::String tmp109 = tmp108->GetVerb1String();		HX_STACK_VAR(tmp109,"tmp109");
																				HX_STACK_LINE(513)
																				tmp107->set_text(tmp109);
																				HX_STACK_LINE(514)
																				::haxe::ui::toolkit::controls::TextInput tmp110 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp110,"tmp110");
																				HX_STACK_LINE(514)
																				::ObjectTag tmp111 = this->selectedTagObject;		HX_STACK_VAR(tmp111,"tmp111");
																				HX_STACK_LINE(514)
																				::String tmp112 = tmp111->GetVerb2String();		HX_STACK_VAR(tmp112,"tmp112");
																				HX_STACK_LINE(514)
																				tmp110->set_text(tmp112);
																				HX_STACK_LINE(515)
																				::haxe::ui::toolkit::controls::TextInput tmp113 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp113,"tmp113");
																				HX_STACK_LINE(515)
																				::ObjectTag tmp114 = this->selectedTagObject;		HX_STACK_VAR(tmp114,"tmp114");
																				HX_STACK_LINE(515)
																				::String tmp115 = tmp114->GetVerb3String();		HX_STACK_VAR(tmp115,"tmp115");
																				HX_STACK_LINE(515)
																				tmp113->set_text(tmp115);
																				HX_STACK_LINE(516)
																				::haxe::ui::toolkit::controls::TextInput tmp116 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp116,"tmp116");
																				HX_STACK_LINE(516)
																				::ObjectTag tmp117 = this->selectedTagObject;		HX_STACK_VAR(tmp117,"tmp117");
																				HX_STACK_LINE(516)
																				::String tmp118 = tmp117->GetVerbIngString();		HX_STACK_VAR(tmp118,"tmp118");
																				HX_STACK_LINE(516)
																				tmp116->set_text(tmp118);
																				HX_STACK_LINE(517)
																				::haxe::ui::toolkit::controls::TextInput tmp119 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp119,"tmp119");
																				HX_STACK_LINE(517)
																				::ObjectTag tmp120 = this->selectedTagObject;		HX_STACK_VAR(tmp120,"tmp120");
																				HX_STACK_LINE(517)
																				::String tmp121 = tmp120->GetVerbSString();		HX_STACK_VAR(tmp121,"tmp121");
																				HX_STACK_LINE(517)
																				tmp119->set_text(tmp121);
																				HX_STACK_LINE(518)
																				::haxe::ui::toolkit::containers::Grid tmp122 = this->gridObject;		HX_STACK_VAR(tmp122,"tmp122");
																				HX_STACK_LINE(518)
																				::haxe::ui::toolkit::controls::Text tmp123 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp123,"tmp123");
																				HX_STACK_LINE(518)
																				tmp122->addChild(tmp123);
																				HX_STACK_LINE(519)
																				::haxe::ui::toolkit::containers::Grid tmp124 = this->gridObject;		HX_STACK_VAR(tmp124,"tmp124");
																				HX_STACK_LINE(519)
																				::haxe::ui::toolkit::controls::TextInput tmp125 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp125,"tmp125");
																				HX_STACK_LINE(519)
																				tmp124->addChild(tmp125);
																				HX_STACK_LINE(520)
																				::haxe::ui::toolkit::containers::Grid tmp126 = this->gridObject;		HX_STACK_VAR(tmp126,"tmp126");
																				HX_STACK_LINE(520)
																				::haxe::ui::toolkit::controls::Text tmp127 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp127,"tmp127");
																				HX_STACK_LINE(520)
																				tmp126->addChild(tmp127);
																				HX_STACK_LINE(521)
																				::haxe::ui::toolkit::containers::Grid tmp128 = this->gridObject;		HX_STACK_VAR(tmp128,"tmp128");
																				HX_STACK_LINE(521)
																				::haxe::ui::toolkit::controls::TextInput tmp129 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp129,"tmp129");
																				HX_STACK_LINE(521)
																				tmp128->addChild(tmp129);
																				HX_STACK_LINE(522)
																				::haxe::ui::toolkit::containers::Grid tmp130 = this->gridObject;		HX_STACK_VAR(tmp130,"tmp130");
																				HX_STACK_LINE(522)
																				::haxe::ui::toolkit::controls::Text tmp131 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp131,"tmp131");
																				HX_STACK_LINE(522)
																				tmp130->addChild(tmp131);
																				HX_STACK_LINE(523)
																				::haxe::ui::toolkit::containers::Grid tmp132 = this->gridObject;		HX_STACK_VAR(tmp132,"tmp132");
																				HX_STACK_LINE(523)
																				::haxe::ui::toolkit::controls::TextInput tmp133 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp133,"tmp133");
																				HX_STACK_LINE(523)
																				tmp132->addChild(tmp133);
																				HX_STACK_LINE(524)
																				::haxe::ui::toolkit::containers::Grid tmp134 = this->gridObject;		HX_STACK_VAR(tmp134,"tmp134");
																				HX_STACK_LINE(524)
																				::haxe::ui::toolkit::controls::Text tmp135 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp135,"tmp135");
																				HX_STACK_LINE(524)
																				tmp134->addChild(tmp135);
																				HX_STACK_LINE(525)
																				::haxe::ui::toolkit::containers::Grid tmp136 = this->gridObject;		HX_STACK_VAR(tmp136,"tmp136");
																				HX_STACK_LINE(525)
																				::haxe::ui::toolkit::controls::TextInput tmp137 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp137,"tmp137");
																				HX_STACK_LINE(525)
																				tmp136->addChild(tmp137);
																				HX_STACK_LINE(526)
																				::haxe::ui::toolkit::containers::Grid tmp138 = this->gridObject;		HX_STACK_VAR(tmp138,"tmp138");
																				HX_STACK_LINE(526)
																				::haxe::ui::toolkit::controls::Text tmp139 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp139,"tmp139");
																				HX_STACK_LINE(526)
																				tmp138->addChild(tmp139);
																				HX_STACK_LINE(527)
																				::haxe::ui::toolkit::containers::Grid tmp140 = this->gridObject;		HX_STACK_VAR(tmp140,"tmp140");
																				HX_STACK_LINE(527)
																				::haxe::ui::toolkit::controls::TextInput tmp141 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp141,"tmp141");
																				HX_STACK_LINE(527)
																				tmp140->addChild(tmp141);
																			}
																			else{
																				HX_STACK_LINE(529)
																				::haxe::ui::toolkit::controls::selection::ListSelector tmp87 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp87,"tmp87");
																				HX_STACK_LINE(529)
																				::String tmp88 = tmp87->get_text();		HX_STACK_VAR(tmp88,"tmp88");
																				HX_STACK_LINE(529)
																				bool tmp89 = (tmp88 == HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed"));		HX_STACK_VAR(tmp89,"tmp89");
																				HX_STACK_LINE(529)
																				if ((tmp89)){
																					HX_STACK_LINE(531)
																					::haxe::ui::toolkit::controls::Text tmp90 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp90,"tmp90");
																					HX_STACK_LINE(532)
																					::haxe::ui::toolkit::controls::TextInput tmp91 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp91,"tmp91");
																					struct _Function_20_1{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp90,::haxe::ui::toolkit::controls::TextInput &tmp91){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",530,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp90,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp91,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(530)
																					Dynamic tmp92 = _Function_20_1::Block(tmp90,tmp91);		HX_STACK_VAR(tmp92,"tmp92");
																					HX_STACK_LINE(530)
																					Dynamic textInputStruct = tmp92;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																					HX_STACK_LINE(534)
																					Dynamic tmp93 = textInputStruct;		HX_STACK_VAR(tmp93,"tmp93");
																					HX_STACK_LINE(534)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp93);
																					HX_STACK_LINE(536)
																					::haxe::ui::toolkit::controls::Text tmp94 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp94,"tmp94");
																					HX_STACK_LINE(537)
																					::haxe::ui::toolkit::controls::TextInput tmp95 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp95,"tmp95");
																					struct _Function_20_2{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp95,::haxe::ui::toolkit::controls::Text &tmp94){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",535,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp94,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp95,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(535)
																					Dynamic tmp96 = _Function_20_2::Block(tmp95,tmp94);		HX_STACK_VAR(tmp96,"tmp96");
																					HX_STACK_LINE(535)
																					Dynamic textInputStruct1 = tmp96;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
																					HX_STACK_LINE(539)
																					Dynamic tmp97 = textInputStruct1;		HX_STACK_VAR(tmp97,"tmp97");
																					HX_STACK_LINE(539)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp97);
																					HX_STACK_LINE(541)
																					::haxe::ui::toolkit::controls::Text tmp98 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp98,"tmp98");
																					HX_STACK_LINE(542)
																					::haxe::ui::toolkit::controls::TextInput tmp99 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp99,"tmp99");
																					struct _Function_20_3{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp99,::haxe::ui::toolkit::controls::Text &tmp98){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",540,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp98,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp99,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(540)
																					Dynamic tmp100 = _Function_20_3::Block(tmp99,tmp98);		HX_STACK_VAR(tmp100,"tmp100");
																					HX_STACK_LINE(540)
																					Dynamic textInputStruct2 = tmp100;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
																					HX_STACK_LINE(544)
																					Dynamic tmp101 = textInputStruct2;		HX_STACK_VAR(tmp101,"tmp101");
																					HX_STACK_LINE(544)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp101);
																					HX_STACK_LINE(546)
																					::haxe::ui::toolkit::controls::Text tmp102 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp102,"tmp102");
																					HX_STACK_LINE(547)
																					::haxe::ui::toolkit::controls::TextInput tmp103 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp103,"tmp103");
																					struct _Function_20_4{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp103,::haxe::ui::toolkit::controls::Text &tmp102){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",545,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp102,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp103,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(545)
																					Dynamic tmp104 = _Function_20_4::Block(tmp103,tmp102);		HX_STACK_VAR(tmp104,"tmp104");
																					HX_STACK_LINE(545)
																					Dynamic textInputStruct3 = tmp104;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
																					HX_STACK_LINE(549)
																					Dynamic tmp105 = textInputStruct3;		HX_STACK_VAR(tmp105,"tmp105");
																					HX_STACK_LINE(549)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp105);
																					HX_STACK_LINE(551)
																					::haxe::ui::toolkit::controls::Text tmp106 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp106,"tmp106");
																					HX_STACK_LINE(552)
																					::haxe::ui::toolkit::controls::TextInput tmp107 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp107,"tmp107");
																					struct _Function_20_5{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp107,::haxe::ui::toolkit::controls::Text &tmp106){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",550,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp106,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp107,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(550)
																					Dynamic tmp108 = _Function_20_5::Block(tmp107,tmp106);		HX_STACK_VAR(tmp108,"tmp108");
																					HX_STACK_LINE(550)
																					Dynamic textInputStruct4 = tmp108;		HX_STACK_VAR(textInputStruct4,"textInputStruct4");
																					HX_STACK_LINE(554)
																					Dynamic tmp109 = textInputStruct4;		HX_STACK_VAR(tmp109,"tmp109");
																					HX_STACK_LINE(554)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp109);
																					HX_STACK_LINE(555)
																					::haxe::ui::toolkit::controls::TextInput tmp110 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp110,"tmp110");
																					HX_STACK_LINE(555)
																					::ObjectTag tmp111 = this->selectedTagObject;		HX_STACK_VAR(tmp111,"tmp111");
																					HX_STACK_LINE(555)
																					::String tmp112 = tmp111->GetVerb1String();		HX_STACK_VAR(tmp112,"tmp112");
																					HX_STACK_LINE(555)
																					tmp110->set_text(tmp112);
																					HX_STACK_LINE(556)
																					::haxe::ui::toolkit::controls::TextInput tmp113 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp113,"tmp113");
																					HX_STACK_LINE(556)
																					::ObjectTag tmp114 = this->selectedTagObject;		HX_STACK_VAR(tmp114,"tmp114");
																					HX_STACK_LINE(556)
																					::String tmp115 = tmp114->GetVerb2String();		HX_STACK_VAR(tmp115,"tmp115");
																					HX_STACK_LINE(556)
																					tmp113->set_text(tmp115);
																					HX_STACK_LINE(557)
																					::haxe::ui::toolkit::controls::TextInput tmp116 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp116,"tmp116");
																					HX_STACK_LINE(557)
																					::ObjectTag tmp117 = this->selectedTagObject;		HX_STACK_VAR(tmp117,"tmp117");
																					HX_STACK_LINE(557)
																					::String tmp118 = tmp117->GetVerb3String();		HX_STACK_VAR(tmp118,"tmp118");
																					HX_STACK_LINE(557)
																					tmp116->set_text(tmp118);
																					HX_STACK_LINE(558)
																					::haxe::ui::toolkit::controls::TextInput tmp119 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp119,"tmp119");
																					HX_STACK_LINE(558)
																					::ObjectTag tmp120 = this->selectedTagObject;		HX_STACK_VAR(tmp120,"tmp120");
																					HX_STACK_LINE(558)
																					::String tmp121 = tmp120->GetVerbIngString();		HX_STACK_VAR(tmp121,"tmp121");
																					HX_STACK_LINE(558)
																					tmp119->set_text(tmp121);
																					HX_STACK_LINE(559)
																					::haxe::ui::toolkit::controls::TextInput tmp122 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp122,"tmp122");
																					HX_STACK_LINE(559)
																					::ObjectTag tmp123 = this->selectedTagObject;		HX_STACK_VAR(tmp123,"tmp123");
																					HX_STACK_LINE(559)
																					::String tmp124 = tmp123->GetVerbSString();		HX_STACK_VAR(tmp124,"tmp124");
																					HX_STACK_LINE(559)
																					tmp122->set_text(tmp124);
																					HX_STACK_LINE(560)
																					::haxe::ui::toolkit::containers::Grid tmp125 = this->gridObject;		HX_STACK_VAR(tmp125,"tmp125");
																					HX_STACK_LINE(560)
																					::haxe::ui::toolkit::controls::Text tmp126 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp126,"tmp126");
																					HX_STACK_LINE(560)
																					tmp125->addChild(tmp126);
																					HX_STACK_LINE(561)
																					::haxe::ui::toolkit::containers::Grid tmp127 = this->gridObject;		HX_STACK_VAR(tmp127,"tmp127");
																					HX_STACK_LINE(561)
																					::haxe::ui::toolkit::controls::TextInput tmp128 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp128,"tmp128");
																					HX_STACK_LINE(561)
																					tmp127->addChild(tmp128);
																					HX_STACK_LINE(562)
																					::haxe::ui::toolkit::containers::Grid tmp129 = this->gridObject;		HX_STACK_VAR(tmp129,"tmp129");
																					HX_STACK_LINE(562)
																					::haxe::ui::toolkit::controls::Text tmp130 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp130,"tmp130");
																					HX_STACK_LINE(562)
																					tmp129->addChild(tmp130);
																					HX_STACK_LINE(563)
																					::haxe::ui::toolkit::containers::Grid tmp131 = this->gridObject;		HX_STACK_VAR(tmp131,"tmp131");
																					HX_STACK_LINE(563)
																					::haxe::ui::toolkit::controls::TextInput tmp132 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp132,"tmp132");
																					HX_STACK_LINE(563)
																					tmp131->addChild(tmp132);
																					HX_STACK_LINE(564)
																					::haxe::ui::toolkit::containers::Grid tmp133 = this->gridObject;		HX_STACK_VAR(tmp133,"tmp133");
																					HX_STACK_LINE(564)
																					::haxe::ui::toolkit::controls::Text tmp134 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp134,"tmp134");
																					HX_STACK_LINE(564)
																					tmp133->addChild(tmp134);
																					HX_STACK_LINE(565)
																					::haxe::ui::toolkit::containers::Grid tmp135 = this->gridObject;		HX_STACK_VAR(tmp135,"tmp135");
																					HX_STACK_LINE(565)
																					::haxe::ui::toolkit::controls::TextInput tmp136 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp136,"tmp136");
																					HX_STACK_LINE(565)
																					tmp135->addChild(tmp136);
																					HX_STACK_LINE(566)
																					::haxe::ui::toolkit::containers::Grid tmp137 = this->gridObject;		HX_STACK_VAR(tmp137,"tmp137");
																					HX_STACK_LINE(566)
																					::haxe::ui::toolkit::controls::Text tmp138 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp138,"tmp138");
																					HX_STACK_LINE(566)
																					tmp137->addChild(tmp138);
																					HX_STACK_LINE(567)
																					::haxe::ui::toolkit::containers::Grid tmp139 = this->gridObject;		HX_STACK_VAR(tmp139,"tmp139");
																					HX_STACK_LINE(567)
																					::haxe::ui::toolkit::controls::TextInput tmp140 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp140,"tmp140");
																					HX_STACK_LINE(567)
																					tmp139->addChild(tmp140);
																					HX_STACK_LINE(568)
																					::haxe::ui::toolkit::containers::Grid tmp141 = this->gridObject;		HX_STACK_VAR(tmp141,"tmp141");
																					HX_STACK_LINE(568)
																					::haxe::ui::toolkit::controls::Text tmp142 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp142,"tmp142");
																					HX_STACK_LINE(568)
																					tmp141->addChild(tmp142);
																					HX_STACK_LINE(569)
																					::haxe::ui::toolkit::containers::Grid tmp143 = this->gridObject;		HX_STACK_VAR(tmp143,"tmp143");
																					HX_STACK_LINE(569)
																					::haxe::ui::toolkit::controls::TextInput tmp144 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp144,"tmp144");
																					HX_STACK_LINE(569)
																					tmp143->addChild(tmp144);
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					HX_STACK_LINE(572)
					::String tmp45 = this->selectTagNameListSelectorString;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(572)
					this->selectTagNameListSelectorPrevString = tmp45;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectTag_obj,UpdateVoid,(void))

Void UIPopupEditObjectTag_obj::CreateGUIObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectTag","CreateGUIObjectVoid",0x22b6097d,"UIPopupEditObjectTag.CreateGUIObjectVoid","UIPopupEditObjectTag.hx",584,0x56a27145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(588)
		::haxe::ui::toolkit::controls::TextInput tmp = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		this->inputAdjTextInputObject = tmp;
		HX_STACK_LINE(589)
		::haxe::ui::toolkit::controls::TextInput tmp1 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(589)
		tmp1->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputAdj","\x83","\x89","\xd1","\x70"));
		HX_STACK_LINE(590)
		::haxe::ui::toolkit::controls::TextInput tmp2 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(590)
		tmp2->set_percentWidth((int)100);
		HX_STACK_LINE(591)
		::haxe::ui::toolkit::controls::TextInput tmp3 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(591)
		tmp3->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(592)
		::haxe::ui::toolkit::controls::Text tmp4 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(592)
		this->inputAdjTextObject = tmp4;
		HX_STACK_LINE(593)
		::haxe::ui::toolkit::controls::Text tmp5 = this->inputAdjTextObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(593)
		tmp5->set_text(HX_HCSTRING("Adjective","\x89","\x1c","\x97","\xce"));
		HX_STACK_LINE(594)
		::haxe::ui::toolkit::controls::TextInput tmp6 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(594)
		this->inputAdvTextInputObject = tmp6;
		HX_STACK_LINE(595)
		::haxe::ui::toolkit::controls::TextInput tmp7 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(595)
		tmp7->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputAdv","\x8f","\x89","\xd1","\x70"));
		HX_STACK_LINE(596)
		::haxe::ui::toolkit::controls::TextInput tmp8 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(596)
		tmp8->set_percentWidth((int)100);
		HX_STACK_LINE(597)
		::haxe::ui::toolkit::controls::TextInput tmp9 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(597)
		tmp9->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(598)
		::haxe::ui::toolkit::controls::Text tmp10 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(598)
		this->inputAdvTextObject = tmp10;
		HX_STACK_LINE(599)
		::haxe::ui::toolkit::controls::Text tmp11 = this->inputAdvTextObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(599)
		tmp11->set_text(HX_HCSTRING("Adverb","\x22","\xab","\x90","\xdf"));
		HX_STACK_LINE(600)
		::haxe::ui::toolkit::controls::TextInput tmp12 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(600)
		this->inputNounPosTextInputObject = tmp12;
		HX_STACK_LINE(601)
		::haxe::ui::toolkit::controls::TextInput tmp13 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(601)
		tmp13->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputNounPos","\x36","\xf6","\x26","\x21"));
		HX_STACK_LINE(602)
		::haxe::ui::toolkit::controls::TextInput tmp14 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(602)
		tmp14->set_percentWidth((int)100);
		HX_STACK_LINE(603)
		::haxe::ui::toolkit::controls::TextInput tmp15 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(603)
		tmp15->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(604)
		::haxe::ui::toolkit::controls::Text tmp16 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(604)
		this->inputNounPosTextObject = tmp16;
		HX_STACK_LINE(605)
		::haxe::ui::toolkit::controls::Text tmp17 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(605)
		tmp17->set_text(HX_HCSTRING("Noun Possesion","\x95","\x4e","\xef","\xd9"));
		HX_STACK_LINE(606)
		::haxe::ui::toolkit::controls::TextInput tmp18 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(606)
		this->inputNounSPosTextInputObject = tmp18;
		HX_STACK_LINE(607)
		::haxe::ui::toolkit::controls::TextInput tmp19 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(607)
		tmp19->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputNounSPos","\xff","\x93","\xd4","\xe2"));
		HX_STACK_LINE(608)
		::haxe::ui::toolkit::controls::TextInput tmp20 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(608)
		tmp20->set_percentWidth((int)100);
		HX_STACK_LINE(609)
		::haxe::ui::toolkit::controls::TextInput tmp21 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(609)
		tmp21->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(610)
		::haxe::ui::toolkit::controls::Text tmp22 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(610)
		this->inputNounSPosTextObject = tmp22;
		HX_STACK_LINE(611)
		::haxe::ui::toolkit::controls::Text tmp23 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(611)
		tmp23->set_text(HX_HCSTRING("Noun Plural Possesion","\xa5","\x14","\x5d","\x64"));
		HX_STACK_LINE(612)
		::haxe::ui::toolkit::controls::TextInput tmp24 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(612)
		this->inputNounSTextInputObject = tmp24;
		HX_STACK_LINE(613)
		::haxe::ui::toolkit::controls::TextInput tmp25 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(613)
		tmp25->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputNounS","\x95","\xcc","\xec","\xf2"));
		HX_STACK_LINE(614)
		::haxe::ui::toolkit::controls::TextInput tmp26 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(614)
		tmp26->set_percentWidth((int)100);
		HX_STACK_LINE(615)
		::haxe::ui::toolkit::controls::TextInput tmp27 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(615)
		tmp27->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(616)
		::haxe::ui::toolkit::controls::Text tmp28 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(616)
		this->inputNounSTextObject = tmp28;
		HX_STACK_LINE(617)
		::haxe::ui::toolkit::controls::Text tmp29 = this->inputNounSTextObject;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(617)
		tmp29->set_text(HX_HCSTRING("Noun Plural","\x0a","\xd7","\x3f","\x4c"));
		HX_STACK_LINE(618)
		::haxe::ui::toolkit::controls::TextInput tmp30 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(618)
		this->inputNounTextInputObject = tmp30;
		HX_STACK_LINE(619)
		::haxe::ui::toolkit::controls::TextInput tmp31 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(619)
		tmp31->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputNoun","\xfe","\xf1","\x26","\x4f"));
		HX_STACK_LINE(620)
		::haxe::ui::toolkit::controls::TextInput tmp32 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(620)
		tmp32->set_percentWidth((int)100);
		HX_STACK_LINE(621)
		::haxe::ui::toolkit::controls::TextInput tmp33 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(621)
		tmp33->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(622)
		::haxe::ui::toolkit::controls::Text tmp34 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(622)
		this->inputNounTextObject = tmp34;
		HX_STACK_LINE(623)
		::haxe::ui::toolkit::controls::Text tmp35 = this->inputNounTextObject;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(623)
		tmp35->set_text(HX_HCSTRING("Noun","\xfa","\x44","\xe3","\x33"));
		HX_STACK_LINE(624)
		::haxe::ui::toolkit::controls::TextInput tmp36 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(624)
		this->inputVerb1TextInputObject = tmp36;
		HX_STACK_LINE(625)
		::haxe::ui::toolkit::controls::TextInput tmp37 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(625)
		tmp37->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerb1","\x0e","\xfd","\x82","\x87"));
		HX_STACK_LINE(626)
		::haxe::ui::toolkit::controls::TextInput tmp38 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(626)
		tmp38->set_percentWidth((int)100);
		HX_STACK_LINE(627)
		::haxe::ui::toolkit::controls::TextInput tmp39 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(627)
		tmp39->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(628)
		::haxe::ui::toolkit::controls::Text tmp40 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(628)
		this->inputVerb1TextObject = tmp40;
		HX_STACK_LINE(629)
		::haxe::ui::toolkit::controls::Text tmp41 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(629)
		tmp41->set_text(HX_HCSTRING("Verb 1","\x90","\x6a","\xce","\xd5"));
		HX_STACK_LINE(630)
		::haxe::ui::toolkit::controls::TextInput tmp42 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(630)
		this->inputVerb2TextInputObject = tmp42;
		HX_STACK_LINE(631)
		::haxe::ui::toolkit::controls::TextInput tmp43 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(631)
		tmp43->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerb2","\x0f","\xfd","\x82","\x87"));
		HX_STACK_LINE(632)
		::haxe::ui::toolkit::controls::TextInput tmp44 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(632)
		tmp44->set_percentWidth((int)100);
		HX_STACK_LINE(633)
		::haxe::ui::toolkit::controls::TextInput tmp45 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(633)
		tmp45->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(634)
		::haxe::ui::toolkit::controls::Text tmp46 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(634)
		this->inputVerb2TextObject = tmp46;
		HX_STACK_LINE(635)
		::haxe::ui::toolkit::controls::Text tmp47 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(635)
		tmp47->set_text(HX_HCSTRING("Verb 2","\x91","\x6a","\xce","\xd5"));
		HX_STACK_LINE(636)
		::haxe::ui::toolkit::controls::TextInput tmp48 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(636)
		this->inputVerb3TextInputObject = tmp48;
		HX_STACK_LINE(637)
		::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(637)
		tmp49->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerb3","\x10","\xfd","\x82","\x87"));
		HX_STACK_LINE(638)
		::haxe::ui::toolkit::controls::TextInput tmp50 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(638)
		tmp50->set_percentWidth((int)100);
		HX_STACK_LINE(639)
		::haxe::ui::toolkit::controls::TextInput tmp51 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(639)
		tmp51->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(640)
		::haxe::ui::toolkit::controls::Text tmp52 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(640)
		this->inputVerb3TextObject = tmp52;
		HX_STACK_LINE(641)
		::haxe::ui::toolkit::controls::Text tmp53 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(641)
		tmp53->set_text(HX_HCSTRING("Verb 3","\x92","\x6a","\xce","\xd5"));
		HX_STACK_LINE(642)
		::haxe::ui::toolkit::controls::TextInput tmp54 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(642)
		this->inputVerbIngTextInputObject = tmp54;
		HX_STACK_LINE(643)
		::haxe::ui::toolkit::controls::TextInput tmp55 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(643)
		tmp55->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerbIng","\xdf","\x72","\x19","\xac"));
		HX_STACK_LINE(644)
		::haxe::ui::toolkit::controls::TextInput tmp56 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(644)
		tmp56->set_percentWidth((int)100);
		HX_STACK_LINE(645)
		::haxe::ui::toolkit::controls::TextInput tmp57 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(645)
		tmp57->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(646)
		::haxe::ui::toolkit::controls::Text tmp58 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(646)
		this->inputVerbIngTextObject = tmp58;
		HX_STACK_LINE(647)
		::haxe::ui::toolkit::controls::Text tmp59 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(647)
		tmp59->set_text(HX_HCSTRING("Verb + Ing","\x2c","\x10","\xf6","\xd8"));
		HX_STACK_LINE(648)
		::haxe::ui::toolkit::controls::TextInput tmp60 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(648)
		this->inputVerbSTextInputObject = tmp60;
		HX_STACK_LINE(649)
		::haxe::ui::toolkit::controls::TextInput tmp61 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(649)
		tmp61->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerbS","\x30","\xfd","\x82","\x87"));
		HX_STACK_LINE(650)
		::haxe::ui::toolkit::controls::TextInput tmp62 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(650)
		tmp62->set_percentWidth((int)100);
		HX_STACK_LINE(651)
		::haxe::ui::toolkit::controls::TextInput tmp63 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(651)
		tmp63->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(652)
		::haxe::ui::toolkit::controls::Text tmp64 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(652)
		this->inputVerbSTextObject = tmp64;
		HX_STACK_LINE(653)
		::haxe::ui::toolkit::controls::Text tmp65 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(653)
		tmp65->set_text(HX_HCSTRING("Verb + S","\x3d","\xbd","\x25","\xb6"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectTag_obj,CreateGUIObjectVoid,(void))


UIPopupEditObjectTag_obj::UIPopupEditObjectTag_obj()
{
}

void UIPopupEditObjectTag_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupEditObjectTag);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(gridObject,"gridObject");
	HX_MARK_MEMBER_NAME(inputAdjTextInputObject,"inputAdjTextInputObject");
	HX_MARK_MEMBER_NAME(inputAdjTextObject,"inputAdjTextObject");
	HX_MARK_MEMBER_NAME(inputAdvTextInputObject,"inputAdvTextInputObject");
	HX_MARK_MEMBER_NAME(inputAdvTextObject,"inputAdvTextObject");
	HX_MARK_MEMBER_NAME(inputNounPosTextInputObject,"inputNounPosTextInputObject");
	HX_MARK_MEMBER_NAME(inputNounPosTextObject,"inputNounPosTextObject");
	HX_MARK_MEMBER_NAME(inputNounSPosTextInputObject,"inputNounSPosTextInputObject");
	HX_MARK_MEMBER_NAME(inputNounSPosTextObject,"inputNounSPosTextObject");
	HX_MARK_MEMBER_NAME(inputNounSTextInputObject,"inputNounSTextInputObject");
	HX_MARK_MEMBER_NAME(inputNounSTextObject,"inputNounSTextObject");
	HX_MARK_MEMBER_NAME(inputNounTextInputObject,"inputNounTextInputObject");
	HX_MARK_MEMBER_NAME(inputNounTextObject,"inputNounTextObject");
	HX_MARK_MEMBER_NAME(inputTagNameTextInputObject,"inputTagNameTextInputObject");
	HX_MARK_MEMBER_NAME(inputVerb1TextInputObject,"inputVerb1TextInputObject");
	HX_MARK_MEMBER_NAME(inputVerb1TextObject,"inputVerb1TextObject");
	HX_MARK_MEMBER_NAME(inputVerb2TextInputObject,"inputVerb2TextInputObject");
	HX_MARK_MEMBER_NAME(inputVerb2TextObject,"inputVerb2TextObject");
	HX_MARK_MEMBER_NAME(inputVerb3TextInputObject,"inputVerb3TextInputObject");
	HX_MARK_MEMBER_NAME(inputVerb3TextObject,"inputVerb3TextObject");
	HX_MARK_MEMBER_NAME(inputVerbIngTextInputObject,"inputVerbIngTextInputObject");
	HX_MARK_MEMBER_NAME(inputVerbIngTextObject,"inputVerbIngTextObject");
	HX_MARK_MEMBER_NAME(inputVerbSTextInputObject,"inputVerbSTextInputObject");
	HX_MARK_MEMBER_NAME(inputVerbSTextObject,"inputVerbSTextObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(selectedTagObject,"selectedTagObject");
	HX_MARK_MEMBER_NAME(selectFeelListSelectorObject,"selectFeelListSelectorObject");
	HX_MARK_MEMBER_NAME(selectGeneralListSelectorObject,"selectGeneralListSelectorObject");
	HX_MARK_MEMBER_NAME(selectTagListSelectorObject,"selectTagListSelectorObject");
	HX_MARK_MEMBER_NAME(selectTagNameListSelectorPrevString,"selectTagNameListSelectorPrevString");
	HX_MARK_MEMBER_NAME(selectTagNameListSelectorString,"selectTagNameListSelectorString");
	HX_MARK_MEMBER_NAME(selectTagTypeListSelectorObject,"selectTagTypeListSelectorObject");
	HX_MARK_MEMBER_NAME(textInputStructArray,"textInputStructArray");
	HX_MARK_END_CLASS();
}

void UIPopupEditObjectTag_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(inputAdjTextInputObject,"inputAdjTextInputObject");
	HX_VISIT_MEMBER_NAME(inputAdjTextObject,"inputAdjTextObject");
	HX_VISIT_MEMBER_NAME(inputAdvTextInputObject,"inputAdvTextInputObject");
	HX_VISIT_MEMBER_NAME(inputAdvTextObject,"inputAdvTextObject");
	HX_VISIT_MEMBER_NAME(inputNounPosTextInputObject,"inputNounPosTextInputObject");
	HX_VISIT_MEMBER_NAME(inputNounPosTextObject,"inputNounPosTextObject");
	HX_VISIT_MEMBER_NAME(inputNounSPosTextInputObject,"inputNounSPosTextInputObject");
	HX_VISIT_MEMBER_NAME(inputNounSPosTextObject,"inputNounSPosTextObject");
	HX_VISIT_MEMBER_NAME(inputNounSTextInputObject,"inputNounSTextInputObject");
	HX_VISIT_MEMBER_NAME(inputNounSTextObject,"inputNounSTextObject");
	HX_VISIT_MEMBER_NAME(inputNounTextInputObject,"inputNounTextInputObject");
	HX_VISIT_MEMBER_NAME(inputNounTextObject,"inputNounTextObject");
	HX_VISIT_MEMBER_NAME(inputTagNameTextInputObject,"inputTagNameTextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerb1TextInputObject,"inputVerb1TextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerb1TextObject,"inputVerb1TextObject");
	HX_VISIT_MEMBER_NAME(inputVerb2TextInputObject,"inputVerb2TextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerb2TextObject,"inputVerb2TextObject");
	HX_VISIT_MEMBER_NAME(inputVerb3TextInputObject,"inputVerb3TextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerb3TextObject,"inputVerb3TextObject");
	HX_VISIT_MEMBER_NAME(inputVerbIngTextInputObject,"inputVerbIngTextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerbIngTextObject,"inputVerbIngTextObject");
	HX_VISIT_MEMBER_NAME(inputVerbSTextInputObject,"inputVerbSTextInputObject");
	HX_VISIT_MEMBER_NAME(inputVerbSTextObject,"inputVerbSTextObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(selectedTagObject,"selectedTagObject");
	HX_VISIT_MEMBER_NAME(selectFeelListSelectorObject,"selectFeelListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectGeneralListSelectorObject,"selectGeneralListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectTagListSelectorObject,"selectTagListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectTagNameListSelectorPrevString,"selectTagNameListSelectorPrevString");
	HX_VISIT_MEMBER_NAME(selectTagNameListSelectorString,"selectTagNameListSelectorString");
	HX_VISIT_MEMBER_NAME(selectTagTypeListSelectorObject,"selectTagTypeListSelectorObject");
	HX_VISIT_MEMBER_NAME(textInputStructArray,"textInputStructArray");
}

Dynamic UIPopupEditObjectTag_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 17:
		if (HX_FIELD_EQ(inName,"selectedTagObject") ) { return selectedTagObject; }
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
		if (HX_FIELD_EQ(inName,"selectTagListSelectorObject") ) { return selectTagListSelectorObject; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"inputNounSPosTextInputObject") ) { return inputNounSPosTextInputObject; }
		if (HX_FIELD_EQ(inName,"selectFeelListSelectorObject") ) { return selectFeelListSelectorObject; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectGeneralListSelectorObject") ) { return selectGeneralListSelectorObject; }
		if (HX_FIELD_EQ(inName,"selectTagNameListSelectorString") ) { return selectTagNameListSelectorString; }
		if (HX_FIELD_EQ(inName,"selectTagTypeListSelectorObject") ) { return selectTagTypeListSelectorObject; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"selectTagNameListSelectorPrevString") ) { return selectTagNameListSelectorPrevString; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupEditObjectTag_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
	case 17:
		if (HX_FIELD_EQ(inName,"selectedTagObject") ) { selectedTagObject=inValue.Cast< ::ObjectTag >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"selectTagListSelectorObject") ) { selectTagListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"inputNounSPosTextInputObject") ) { inputNounSPosTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectFeelListSelectorObject") ) { selectFeelListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectGeneralListSelectorObject") ) { selectGeneralListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectTagNameListSelectorString") ) { selectTagNameListSelectorString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectTagTypeListSelectorObject") ) { selectTagTypeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"selectTagNameListSelectorPrevString") ) { selectTagNameListSelectorPrevString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UIPopupEditObjectTag_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UIPopupEditObjectTag_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"));
	outFields->push(HX_HCSTRING("inputAdjTextInputObject","\xff","\x06","\x81","\x28"));
	outFields->push(HX_HCSTRING("inputAdjTextObject","\xe9","\x19","\xfd","\x45"));
	outFields->push(HX_HCSTRING("inputAdvTextInputObject","\x73","\xf4","\xc2","\x7e"));
	outFields->push(HX_HCSTRING("inputAdvTextObject","\xf5","\x20","\x6a","\x50"));
	outFields->push(HX_HCSTRING("inputNounPosTextInputObject","\xac","\x96","\x7c","\x4e"));
	outFields->push(HX_HCSTRING("inputNounPosTextObject","\x5c","\xa9","\xa5","\x42"));
	outFields->push(HX_HCSTRING("inputNounSPosTextInputObject","\x37","\xfd","\xde","\xdc"));
	outFields->push(HX_HCSTRING("inputNounSPosTextObject","\xb1","\xce","\xd2","\xc1"));
	outFields->push(HX_HCSTRING("inputNounSTextInputObject","\xad","\x35","\xbe","\x46"));
	outFields->push(HX_HCSTRING("inputNounSTextObject","\xfb","\x69","\xea","\x4b"));
	outFields->push(HX_HCSTRING("inputNounTextInputObject","\x18","\x51","\xfd","\xc5"));
	outFields->push(HX_HCSTRING("inputNounTextObject","\x70","\x06","\x37","\x0d"));
	outFields->push(HX_HCSTRING("inputTagNameTextInputObject","\x21","\x2a","\xe8","\x43"));
	outFields->push(HX_HCSTRING("inputVerb1TextInputObject","\x54","\x75","\x61","\x78"));
	outFields->push(HX_HCSTRING("inputVerb1TextObject","\xb4","\x4b","\x3d","\x55"));
	outFields->push(HX_HCSTRING("inputVerb2TextInputObject","\x73","\x9e","\x91","\x3f"));
	outFields->push(HX_HCSTRING("inputVerb2TextObject","\xf5","\xb6","\x1b","\xd6"));
	outFields->push(HX_HCSTRING("inputVerb3TextInputObject","\x92","\xc7","\xc1","\x06"));
	outFields->push(HX_HCSTRING("inputVerb3TextObject","\x36","\x22","\xfa","\x56"));
	outFields->push(HX_HCSTRING("inputVerbIngTextInputObject","\x23","\xc0","\x80","\xb6"));
	outFields->push(HX_HCSTRING("inputVerbIngTextObject","\x45","\xf3","\xdf","\x7e"));
	outFields->push(HX_HCSTRING("inputVerbSTextInputObject","\x72","\xeb","\xc6","\xec"));
	outFields->push(HX_HCSTRING("inputVerbSTextObject","\x56","\x8a","\xc7","\x72"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("selectedTagObject","\xde","\x9e","\x60","\xb3"));
	outFields->push(HX_HCSTRING("selectFeelListSelectorObject","\x5e","\xc1","\x80","\xfd"));
	outFields->push(HX_HCSTRING("selectGeneralListSelectorObject","\xe8","\x26","\x1b","\xb2"));
	outFields->push(HX_HCSTRING("selectTagListSelectorObject","\x9a","\x48","\x9a","\x65"));
	outFields->push(HX_HCSTRING("selectTagNameListSelectorPrevString","\x2a","\x65","\xc4","\x8f"));
	outFields->push(HX_HCSTRING("selectTagNameListSelectorString","\xd7","\x7e","\x04","\x2b"));
	outFields->push(HX_HCSTRING("selectTagTypeListSelectorObject","\xf4","\x1c","\x29","\xa4"));
	outFields->push(HX_HCSTRING("textInputStructArray","\xe7","\x3d","\xd6","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectTag_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupEditObjectTag_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupEditObjectTag_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputAdjTextInputObject),HX_HCSTRING("inputAdjTextInputObject","\xff","\x06","\x81","\x28")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputAdjTextObject),HX_HCSTRING("inputAdjTextObject","\xe9","\x19","\xfd","\x45")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputAdvTextInputObject),HX_HCSTRING("inputAdvTextInputObject","\x73","\xf4","\xc2","\x7e")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputAdvTextObject),HX_HCSTRING("inputAdvTextObject","\xf5","\x20","\x6a","\x50")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputNounPosTextInputObject),HX_HCSTRING("inputNounPosTextInputObject","\xac","\x96","\x7c","\x4e")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputNounPosTextObject),HX_HCSTRING("inputNounPosTextObject","\x5c","\xa9","\xa5","\x42")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputNounSPosTextInputObject),HX_HCSTRING("inputNounSPosTextInputObject","\x37","\xfd","\xde","\xdc")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputNounSPosTextObject),HX_HCSTRING("inputNounSPosTextObject","\xb1","\xce","\xd2","\xc1")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputNounSTextInputObject),HX_HCSTRING("inputNounSTextInputObject","\xad","\x35","\xbe","\x46")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputNounSTextObject),HX_HCSTRING("inputNounSTextObject","\xfb","\x69","\xea","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputNounTextInputObject),HX_HCSTRING("inputNounTextInputObject","\x18","\x51","\xfd","\xc5")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputNounTextObject),HX_HCSTRING("inputNounTextObject","\x70","\x06","\x37","\x0d")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputTagNameTextInputObject),HX_HCSTRING("inputTagNameTextInputObject","\x21","\x2a","\xe8","\x43")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerb1TextInputObject),HX_HCSTRING("inputVerb1TextInputObject","\x54","\x75","\x61","\x78")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerb1TextObject),HX_HCSTRING("inputVerb1TextObject","\xb4","\x4b","\x3d","\x55")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerb2TextInputObject),HX_HCSTRING("inputVerb2TextInputObject","\x73","\x9e","\x91","\x3f")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerb2TextObject),HX_HCSTRING("inputVerb2TextObject","\xf5","\xb6","\x1b","\xd6")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerb3TextInputObject),HX_HCSTRING("inputVerb3TextInputObject","\x92","\xc7","\xc1","\x06")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerb3TextObject),HX_HCSTRING("inputVerb3TextObject","\x36","\x22","\xfa","\x56")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerbIngTextInputObject),HX_HCSTRING("inputVerbIngTextInputObject","\x23","\xc0","\x80","\xb6")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerbIngTextObject),HX_HCSTRING("inputVerbIngTextObject","\x45","\xf3","\xdf","\x7e")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerbSTextInputObject),HX_HCSTRING("inputVerbSTextInputObject","\x72","\xeb","\xc6","\xec")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectTag_obj,inputVerbSTextObject),HX_HCSTRING("inputVerbSTextObject","\x56","\x8a","\xc7","\x72")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectTag_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::ObjectTag*/ ,(int)offsetof(UIPopupEditObjectTag_obj,selectedTagObject),HX_HCSTRING("selectedTagObject","\xde","\x9e","\x60","\xb3")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectTag_obj,selectFeelListSelectorObject),HX_HCSTRING("selectFeelListSelectorObject","\x5e","\xc1","\x80","\xfd")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectTag_obj,selectGeneralListSelectorObject),HX_HCSTRING("selectGeneralListSelectorObject","\xe8","\x26","\x1b","\xb2")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectTag_obj,selectTagListSelectorObject),HX_HCSTRING("selectTagListSelectorObject","\x9a","\x48","\x9a","\x65")},
	{hx::fsString,(int)offsetof(UIPopupEditObjectTag_obj,selectTagNameListSelectorPrevString),HX_HCSTRING("selectTagNameListSelectorPrevString","\x2a","\x65","\xc4","\x8f")},
	{hx::fsString,(int)offsetof(UIPopupEditObjectTag_obj,selectTagNameListSelectorString),HX_HCSTRING("selectTagNameListSelectorString","\xd7","\x7e","\x04","\x2b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectTag_obj,selectTagTypeListSelectorObject),HX_HCSTRING("selectTagTypeListSelectorObject","\xf4","\x1c","\x29","\xa4")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(UIPopupEditObjectTag_obj,textInputStructArray),HX_HCSTRING("textInputStructArray","\xe7","\x3d","\xd6","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"),
	HX_HCSTRING("inputAdjTextInputObject","\xff","\x06","\x81","\x28"),
	HX_HCSTRING("inputAdjTextObject","\xe9","\x19","\xfd","\x45"),
	HX_HCSTRING("inputAdvTextInputObject","\x73","\xf4","\xc2","\x7e"),
	HX_HCSTRING("inputAdvTextObject","\xf5","\x20","\x6a","\x50"),
	HX_HCSTRING("inputNounPosTextInputObject","\xac","\x96","\x7c","\x4e"),
	HX_HCSTRING("inputNounPosTextObject","\x5c","\xa9","\xa5","\x42"),
	HX_HCSTRING("inputNounSPosTextInputObject","\x37","\xfd","\xde","\xdc"),
	HX_HCSTRING("inputNounSPosTextObject","\xb1","\xce","\xd2","\xc1"),
	HX_HCSTRING("inputNounSTextInputObject","\xad","\x35","\xbe","\x46"),
	HX_HCSTRING("inputNounSTextObject","\xfb","\x69","\xea","\x4b"),
	HX_HCSTRING("inputNounTextInputObject","\x18","\x51","\xfd","\xc5"),
	HX_HCSTRING("inputNounTextObject","\x70","\x06","\x37","\x0d"),
	HX_HCSTRING("inputTagNameTextInputObject","\x21","\x2a","\xe8","\x43"),
	HX_HCSTRING("inputVerb1TextInputObject","\x54","\x75","\x61","\x78"),
	HX_HCSTRING("inputVerb1TextObject","\xb4","\x4b","\x3d","\x55"),
	HX_HCSTRING("inputVerb2TextInputObject","\x73","\x9e","\x91","\x3f"),
	HX_HCSTRING("inputVerb2TextObject","\xf5","\xb6","\x1b","\xd6"),
	HX_HCSTRING("inputVerb3TextInputObject","\x92","\xc7","\xc1","\x06"),
	HX_HCSTRING("inputVerb3TextObject","\x36","\x22","\xfa","\x56"),
	HX_HCSTRING("inputVerbIngTextInputObject","\x23","\xc0","\x80","\xb6"),
	HX_HCSTRING("inputVerbIngTextObject","\x45","\xf3","\xdf","\x7e"),
	HX_HCSTRING("inputVerbSTextInputObject","\x72","\xeb","\xc6","\xec"),
	HX_HCSTRING("inputVerbSTextObject","\x56","\x8a","\xc7","\x72"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("selectedTagObject","\xde","\x9e","\x60","\xb3"),
	HX_HCSTRING("selectFeelListSelectorObject","\x5e","\xc1","\x80","\xfd"),
	HX_HCSTRING("selectGeneralListSelectorObject","\xe8","\x26","\x1b","\xb2"),
	HX_HCSTRING("selectTagListSelectorObject","\x9a","\x48","\x9a","\x65"),
	HX_HCSTRING("selectTagNameListSelectorPrevString","\x2a","\x65","\xc4","\x8f"),
	HX_HCSTRING("selectTagNameListSelectorString","\xd7","\x7e","\x04","\x2b"),
	HX_HCSTRING("selectTagTypeListSelectorObject","\xf4","\x1c","\x29","\xa4"),
	HX_HCSTRING("textInputStructArray","\xe7","\x3d","\xd6","\x2d"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	HX_HCSTRING("CreateGUIObjectVoid","\x52","\x6b","\x60","\xaa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPopupEditObjectTag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPopupEditObjectTag_obj::__mClass,"__mClass");
};

#endif

hx::Class UIPopupEditObjectTag_obj::__mClass;

void UIPopupEditObjectTag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIPopupEditObjectTag","\x19","\x87","\xf5","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UIPopupEditObjectTag_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIPopupEditObjectTag_obj >;
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

