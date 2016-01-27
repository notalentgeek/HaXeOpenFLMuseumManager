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
			HX_STACK_LINE(218)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(218)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			this->selectTagNameListSelectorString = tmp3;
			HX_STACK_LINE(219)
			::String tmp4 = this->selectTagNameListSelectorString;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(219)
			::String tmp5 = this->selectTagNameListSelectorPrevString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(219)
			bool tmp6 = (tmp4 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(219)
			if ((tmp6)){
				HX_STACK_LINE(221)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				::String tmp8 = this->selectTagNameListSelectorString;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(221)
				::ObjectTag tmp9 = ::CollectionFunction_obj::FindTagObject(tmp7,false,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(221)
				this->selectedTagObject = tmp9;
				HX_STACK_LINE(223)
				::ObjectTag tmp10 = this->selectedTagObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(223)
				bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(223)
				if ((tmp11)){
					HX_STACK_LINE(225)
					::haxe::ui::toolkit::controls::TextInput tmp12 = this->inputTagNameTextInputObject;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(225)
					::ObjectTag tmp13 = this->selectedTagObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(225)
					::String tmp14 = tmp13->GetNameString();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(225)
					tmp12->set_text(tmp14);
					HX_STACK_LINE(226)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = this->selectFeelListSelectorObject;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(226)
					::ObjectTag tmp16 = this->selectedTagObject;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(226)
					::EnumTagFeelType tmp17 = tmp16->GetFeelEnum();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(226)
					::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(226)
					tmp15->set_text(tmp18);
					HX_STACK_LINE(227)
					::ObjectTag tmp19 = this->selectedTagObject;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(227)
					bool tmp20 = tmp19->GetGeneralTagBool();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(227)
					bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(227)
					if ((tmp21)){
						HX_STACK_LINE(227)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->selectGeneralListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(227)
						tmp22->set_text(HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00"));
					}
					else{
						HX_STACK_LINE(228)
						::ObjectTag tmp22 = this->selectedTagObject;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(228)
						bool tmp23 = tmp22->GetGeneralTagBool();		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(228)
						bool tmp24 = (tmp23 == false);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(228)
						if ((tmp24)){
							HX_STACK_LINE(228)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectGeneralListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(228)
							tmp25->set_text(HX_HCSTRING("No","\x61","\x44","\x00","\x00"));
						}
					}
					HX_STACK_LINE(229)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(229)
					::ObjectTag tmp23 = this->selectedTagObject;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(229)
					::EnumTagType tmp24 = tmp23->GetTypeEnum();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(229)
					::String tmp25 = ::Std_obj::string(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(229)
					tmp22->set_text(tmp25);
					HX_STACK_LINE(231)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(232)
					while((true)){
						HX_STACK_LINE(232)
						int tmp26 = loopCounter1Int;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(232)
						int tmp27 = this->textInputStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(232)
						bool tmp28 = (tmp26 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(232)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(232)
						if ((tmp29)){
							HX_STACK_LINE(232)
							break;
						}
						HX_STACK_LINE(234)
						::haxe::ui::toolkit::containers::Grid tmp30 = this->gridObject;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(234)
						Dynamic tmp31 = this->textInputStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(234)
						::haxe::ui::toolkit::controls::Text tmp32 = tmp31->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(234)
						tmp30->removeChild(tmp32,null());
						HX_STACK_LINE(235)
						::haxe::ui::toolkit::containers::Grid tmp33 = this->gridObject;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(235)
						Dynamic tmp34 = this->textInputStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(235)
						::haxe::ui::toolkit::controls::TextInput tmp35 = tmp34->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(235)
						tmp33->removeChild(tmp35,null());
						HX_STACK_LINE(236)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(239)
					::CollectionFunction_obj::ClearArray(this->textInputStructArray);
					HX_STACK_LINE(240)
					this->CreateGUIObjectVoid();
					HX_STACK_LINE(242)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(242)
					::String tmp27 = tmp26->get_text();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(242)
					bool tmp28 = (tmp27 == HX_HCSTRING("ADJ","\x07","\x8e","\x31","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(242)
					if ((tmp28)){
						HX_STACK_LINE(244)
						::haxe::ui::toolkit::controls::Text tmp29 = this->inputAdjTextObject;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(245)
						::haxe::ui::toolkit::controls::TextInput tmp30 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp30,"tmp30");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp29,::haxe::ui::toolkit::controls::TextInput &tmp30){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",243,0x56a27145)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp29,false);
									__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp30,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(243)
						Dynamic tmp31 = _Function_5_1::Block(tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(243)
						Dynamic textInputStruct = tmp31;		HX_STACK_VAR(textInputStruct,"textInputStruct");
						HX_STACK_LINE(247)
						Dynamic tmp32 = textInputStruct;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(247)
						this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp32);
						HX_STACK_LINE(248)
						::haxe::ui::toolkit::controls::TextInput tmp33 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(248)
						::ObjectTag tmp34 = this->selectedTagObject;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(248)
						::String tmp35 = tmp34->GetAdjectiveString();		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(248)
						tmp33->set_text(tmp35);
						HX_STACK_LINE(249)
						::haxe::ui::toolkit::containers::Grid tmp36 = this->gridObject;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(249)
						::haxe::ui::toolkit::controls::Text tmp37 = this->inputAdjTextObject;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(249)
						tmp36->addChild(tmp37);
						HX_STACK_LINE(250)
						::haxe::ui::toolkit::containers::Grid tmp38 = this->gridObject;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(250)
						::haxe::ui::toolkit::controls::TextInput tmp39 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(250)
						tmp38->addChild(tmp39);
					}
					else{
						HX_STACK_LINE(252)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(252)
						::String tmp30 = tmp29->get_text();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(252)
						bool tmp31 = (tmp30 == HX_HCSTRING("ADV","\x13","\x8e","\x31","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(252)
						if ((tmp31)){
							HX_STACK_LINE(254)
							::haxe::ui::toolkit::controls::Text tmp32 = this->inputAdvTextObject;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(255)
							::haxe::ui::toolkit::controls::TextInput tmp33 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
							struct _Function_6_1{
								inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp33,::haxe::ui::toolkit::controls::Text &tmp32){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",253,0x56a27145)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp32,false);
										__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp33,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(253)
							Dynamic tmp34 = _Function_6_1::Block(tmp33,tmp32);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(253)
							Dynamic textInputStruct = tmp34;		HX_STACK_VAR(textInputStruct,"textInputStruct");
							HX_STACK_LINE(257)
							Dynamic tmp35 = textInputStruct;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(257)
							this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp35);
							HX_STACK_LINE(258)
							::haxe::ui::toolkit::controls::TextInput tmp36 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(258)
							::ObjectTag tmp37 = this->selectedTagObject;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(258)
							::String tmp38 = tmp37->GetAdverbString();		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(258)
							tmp36->set_text(tmp38);
							HX_STACK_LINE(259)
							::haxe::ui::toolkit::containers::Grid tmp39 = this->gridObject;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(259)
							::haxe::ui::toolkit::controls::Text tmp40 = this->inputAdvTextObject;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(259)
							tmp39->addChild(tmp40);
							HX_STACK_LINE(260)
							::haxe::ui::toolkit::containers::Grid tmp41 = this->gridObject;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(260)
							::haxe::ui::toolkit::controls::TextInput tmp42 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(260)
							tmp41->addChild(tmp42);
						}
						else{
							HX_STACK_LINE(262)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp32 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(262)
							::String tmp33 = tmp32->get_text();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(262)
							bool tmp34 = (tmp33 == HX_HCSTRING("NOUN_ALIVE_ABSTRACT","\xf9","\xbb","\xf6","\xf6"));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(262)
							if ((tmp34)){
								HX_STACK_LINE(264)
								::haxe::ui::toolkit::controls::Text tmp35 = this->inputNounTextObject;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(265)
								::haxe::ui::toolkit::controls::TextInput tmp36 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp36,"tmp36");
								struct _Function_7_1{
									inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp36,::haxe::ui::toolkit::controls::Text &tmp35){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",263,0x56a27145)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp35,false);
											__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp36,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(263)
								Dynamic tmp37 = _Function_7_1::Block(tmp36,tmp35);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(263)
								Dynamic textInputStruct = tmp37;		HX_STACK_VAR(textInputStruct,"textInputStruct");
								HX_STACK_LINE(267)
								Dynamic tmp38 = textInputStruct;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(267)
								this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp38);
								HX_STACK_LINE(269)
								::haxe::ui::toolkit::controls::Text tmp39 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(270)
								::haxe::ui::toolkit::controls::TextInput tmp40 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp40,"tmp40");
								struct _Function_7_2{
									inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp40,::haxe::ui::toolkit::controls::Text &tmp39){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",268,0x56a27145)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp39,false);
											__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp40,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(268)
								Dynamic tmp41 = _Function_7_2::Block(tmp40,tmp39);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(268)
								Dynamic textInputStruct1 = tmp41;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
								HX_STACK_LINE(272)
								Dynamic tmp42 = textInputStruct1;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(272)
								this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp42);
								HX_STACK_LINE(274)
								::haxe::ui::toolkit::controls::Text tmp43 = this->inputNounSTextObject;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(275)
								::haxe::ui::toolkit::controls::TextInput tmp44 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp44,"tmp44");
								struct _Function_7_3{
									inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp44,::haxe::ui::toolkit::controls::Text &tmp43){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",273,0x56a27145)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp43,false);
											__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp44,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(273)
								Dynamic tmp45 = _Function_7_3::Block(tmp44,tmp43);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(273)
								Dynamic textInputStruct2 = tmp45;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
								HX_STACK_LINE(277)
								Dynamic tmp46 = textInputStruct2;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(277)
								this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp46);
								HX_STACK_LINE(279)
								::haxe::ui::toolkit::controls::Text tmp47 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(280)
								::haxe::ui::toolkit::controls::TextInput tmp48 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp48,"tmp48");
								struct _Function_7_4{
									inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp48,::haxe::ui::toolkit::controls::Text &tmp47){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",278,0x56a27145)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp47,false);
											__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp48,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(278)
								Dynamic tmp49 = _Function_7_4::Block(tmp48,tmp47);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(278)
								Dynamic textInputStruct3 = tmp49;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
								HX_STACK_LINE(282)
								Dynamic tmp50 = textInputStruct3;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(282)
								this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp50);
								HX_STACK_LINE(283)
								::haxe::ui::toolkit::controls::TextInput tmp51 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(283)
								::ObjectTag tmp52 = this->selectedTagObject;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(283)
								::String tmp53 = tmp52->GetNounString();		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(283)
								tmp51->set_text(tmp53);
								HX_STACK_LINE(284)
								::haxe::ui::toolkit::controls::TextInput tmp54 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(284)
								::ObjectTag tmp55 = this->selectedTagObject;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(284)
								::String tmp56 = tmp55->GetNounPosString();		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(284)
								tmp54->set_text(tmp56);
								HX_STACK_LINE(285)
								::haxe::ui::toolkit::controls::TextInput tmp57 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(285)
								::ObjectTag tmp58 = this->selectedTagObject;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(285)
								::String tmp59 = tmp58->GetNounSString();		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(285)
								tmp57->set_text(tmp59);
								HX_STACK_LINE(286)
								::haxe::ui::toolkit::controls::TextInput tmp60 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(286)
								::ObjectTag tmp61 = this->selectedTagObject;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(286)
								::String tmp62 = tmp61->GetNounSPosString();		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(286)
								tmp60->set_text(tmp62);
								HX_STACK_LINE(287)
								::haxe::ui::toolkit::containers::Grid tmp63 = this->gridObject;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(287)
								::haxe::ui::toolkit::controls::Text tmp64 = this->inputNounTextObject;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(287)
								tmp63->addChild(tmp64);
								HX_STACK_LINE(288)
								::haxe::ui::toolkit::containers::Grid tmp65 = this->gridObject;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(288)
								::haxe::ui::toolkit::controls::TextInput tmp66 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(288)
								tmp65->addChild(tmp66);
								HX_STACK_LINE(289)
								::haxe::ui::toolkit::containers::Grid tmp67 = this->gridObject;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(289)
								::haxe::ui::toolkit::controls::Text tmp68 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(289)
								tmp67->addChild(tmp68);
								HX_STACK_LINE(290)
								::haxe::ui::toolkit::containers::Grid tmp69 = this->gridObject;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(290)
								::haxe::ui::toolkit::controls::TextInput tmp70 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(290)
								tmp69->addChild(tmp70);
								HX_STACK_LINE(291)
								::haxe::ui::toolkit::containers::Grid tmp71 = this->gridObject;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(291)
								::haxe::ui::toolkit::controls::Text tmp72 = this->inputNounSTextObject;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(291)
								tmp71->addChild(tmp72);
								HX_STACK_LINE(292)
								::haxe::ui::toolkit::containers::Grid tmp73 = this->gridObject;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(292)
								::haxe::ui::toolkit::controls::TextInput tmp74 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(292)
								tmp73->addChild(tmp74);
								HX_STACK_LINE(293)
								::haxe::ui::toolkit::containers::Grid tmp75 = this->gridObject;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(293)
								::haxe::ui::toolkit::controls::Text tmp76 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(293)
								tmp75->addChild(tmp76);
								HX_STACK_LINE(294)
								::haxe::ui::toolkit::containers::Grid tmp77 = this->gridObject;		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(294)
								::haxe::ui::toolkit::controls::TextInput tmp78 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(294)
								tmp77->addChild(tmp78);
							}
							else{
								HX_STACK_LINE(296)
								::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(296)
								::String tmp36 = tmp35->get_text();		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(296)
								bool tmp37 = (tmp36 == HX_HCSTRING("NOUN_ALIVE_CONCRETE","\x5c","\x15","\x5d","\xbc"));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(296)
								if ((tmp37)){
									HX_STACK_LINE(298)
									::haxe::ui::toolkit::controls::Text tmp38 = this->inputNounTextObject;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(299)
									::haxe::ui::toolkit::controls::TextInput tmp39 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp39,"tmp39");
									struct _Function_8_1{
										inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp38,::haxe::ui::toolkit::controls::TextInput &tmp39){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",297,0x56a27145)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp38,false);
												__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp39,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(297)
									Dynamic tmp40 = _Function_8_1::Block(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(297)
									Dynamic textInputStruct = tmp40;		HX_STACK_VAR(textInputStruct,"textInputStruct");
									HX_STACK_LINE(301)
									Dynamic tmp41 = textInputStruct;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(301)
									this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp41);
									HX_STACK_LINE(303)
									::haxe::ui::toolkit::controls::Text tmp42 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(304)
									::haxe::ui::toolkit::controls::TextInput tmp43 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp43,"tmp43");
									struct _Function_8_2{
										inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp42,::haxe::ui::toolkit::controls::TextInput &tmp43){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",302,0x56a27145)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp42,false);
												__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp43,false);
												return __result;
											}
											return null();
										}
									};
									HX_STACK_LINE(302)
									Dynamic tmp44 = _Function_8_2::Block(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(302)
									Dynamic textInputStruct1 = tmp44;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
									HX_STACK_LINE(306)
									Dynamic tmp45 = textInputStruct1;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(306)
									this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp45);
									HX_STACK_LINE(307)
									::haxe::ui::toolkit::controls::TextInput tmp46 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(307)
									::ObjectTag tmp47 = this->selectedTagObject;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(307)
									::String tmp48 = tmp47->GetNounString();		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(307)
									tmp46->set_text(tmp48);
									HX_STACK_LINE(308)
									::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(308)
									::ObjectTag tmp50 = this->selectedTagObject;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(308)
									::String tmp51 = tmp50->GetNounPosString();		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(308)
									tmp49->set_text(tmp51);
									HX_STACK_LINE(309)
									::haxe::ui::toolkit::containers::Grid tmp52 = this->gridObject;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(309)
									::haxe::ui::toolkit::controls::Text tmp53 = this->inputNounTextObject;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(309)
									tmp52->addChild(tmp53);
									HX_STACK_LINE(310)
									::haxe::ui::toolkit::containers::Grid tmp54 = this->gridObject;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(310)
									::haxe::ui::toolkit::controls::TextInput tmp55 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(310)
									tmp54->addChild(tmp55);
									HX_STACK_LINE(311)
									::haxe::ui::toolkit::containers::Grid tmp56 = this->gridObject;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(311)
									::haxe::ui::toolkit::controls::Text tmp57 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(311)
									tmp56->addChild(tmp57);
									HX_STACK_LINE(312)
									::haxe::ui::toolkit::containers::Grid tmp58 = this->gridObject;		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(312)
									::haxe::ui::toolkit::controls::TextInput tmp59 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(312)
									tmp58->addChild(tmp59);
								}
								else{
									HX_STACK_LINE(314)
									::haxe::ui::toolkit::controls::selection::ListSelector tmp38 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(314)
									::String tmp39 = tmp38->get_text();		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(314)
									bool tmp40 = (tmp39 == HX_HCSTRING("NOUN_INANIMATE_HOLD_ABSTRACT","\xfa","\xe7","\xf2","\x5f"));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(314)
									if ((tmp40)){
										HX_STACK_LINE(316)
										::haxe::ui::toolkit::controls::Text tmp41 = this->inputNounTextObject;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(317)
										::haxe::ui::toolkit::controls::TextInput tmp42 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp42,"tmp42");
										struct _Function_9_1{
											inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp42,::haxe::ui::toolkit::controls::Text &tmp41){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",315,0x56a27145)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp41,false);
													__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp42,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(315)
										Dynamic tmp43 = _Function_9_1::Block(tmp42,tmp41);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(315)
										Dynamic textInputStruct = tmp43;		HX_STACK_VAR(textInputStruct,"textInputStruct");
										HX_STACK_LINE(319)
										Dynamic tmp44 = textInputStruct;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(319)
										this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp44);
										HX_STACK_LINE(321)
										::haxe::ui::toolkit::controls::Text tmp45 = this->inputNounSTextObject;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(322)
										::haxe::ui::toolkit::controls::TextInput tmp46 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp46,"tmp46");
										struct _Function_9_2{
											inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp46,::haxe::ui::toolkit::controls::Text &tmp45){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",320,0x56a27145)
												{
													hx::Anon __result = hx::Anon_obj::Create();
													__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp45,false);
													__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp46,false);
													return __result;
												}
												return null();
											}
										};
										HX_STACK_LINE(320)
										Dynamic tmp47 = _Function_9_2::Block(tmp46,tmp45);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(320)
										Dynamic textInputStruct1 = tmp47;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
										HX_STACK_LINE(324)
										Dynamic tmp48 = textInputStruct1;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(324)
										this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp48);
										HX_STACK_LINE(325)
										::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(325)
										::ObjectTag tmp50 = this->selectedTagObject;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(325)
										::String tmp51 = tmp50->GetNounString();		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(325)
										tmp49->set_text(tmp51);
										HX_STACK_LINE(326)
										::haxe::ui::toolkit::controls::TextInput tmp52 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(326)
										::ObjectTag tmp53 = this->selectedTagObject;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(326)
										::String tmp54 = tmp53->GetNounSString();		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(326)
										tmp52->set_text(tmp54);
										HX_STACK_LINE(327)
										::haxe::ui::toolkit::containers::Grid tmp55 = this->gridObject;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(327)
										::haxe::ui::toolkit::controls::Text tmp56 = this->inputNounTextObject;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(327)
										tmp55->addChild(tmp56);
										HX_STACK_LINE(328)
										::haxe::ui::toolkit::containers::Grid tmp57 = this->gridObject;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(328)
										::haxe::ui::toolkit::controls::TextInput tmp58 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(328)
										tmp57->addChild(tmp58);
										HX_STACK_LINE(329)
										::haxe::ui::toolkit::containers::Grid tmp59 = this->gridObject;		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(329)
										::haxe::ui::toolkit::controls::Text tmp60 = this->inputNounSTextObject;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(329)
										tmp59->addChild(tmp60);
										HX_STACK_LINE(330)
										::haxe::ui::toolkit::containers::Grid tmp61 = this->gridObject;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(330)
										::haxe::ui::toolkit::controls::TextInput tmp62 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(330)
										tmp61->addChild(tmp62);
									}
									else{
										HX_STACK_LINE(332)
										::haxe::ui::toolkit::controls::selection::ListSelector tmp41 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(332)
										::String tmp42 = tmp41->get_text();		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(332)
										bool tmp43 = (tmp42 == HX_HCSTRING("NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x41","\x59","\x25"));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(332)
										if ((tmp43)){
											HX_STACK_LINE(334)
											::haxe::ui::toolkit::controls::Text tmp44 = this->inputNounTextObject;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(335)
											::haxe::ui::toolkit::controls::TextInput tmp45 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp45,"tmp45");
											struct _Function_10_1{
												inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp44,::haxe::ui::toolkit::controls::TextInput &tmp45){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",333,0x56a27145)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp44,false);
														__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp45,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(333)
											Dynamic tmp46 = _Function_10_1::Block(tmp44,tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(333)
											Dynamic textInputStruct = tmp46;		HX_STACK_VAR(textInputStruct,"textInputStruct");
											HX_STACK_LINE(337)
											Dynamic tmp47 = textInputStruct;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(337)
											this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp47);
											HX_STACK_LINE(339)
											::haxe::ui::toolkit::controls::Text tmp48 = this->inputNounSTextObject;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(340)
											::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
											struct _Function_10_2{
												inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp48,::haxe::ui::toolkit::controls::TextInput &tmp49){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",338,0x56a27145)
													{
														hx::Anon __result = hx::Anon_obj::Create();
														__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp48,false);
														__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp49,false);
														return __result;
													}
													return null();
												}
											};
											HX_STACK_LINE(338)
											Dynamic tmp50 = _Function_10_2::Block(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(338)
											Dynamic textInputStruct1 = tmp50;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
											HX_STACK_LINE(342)
											Dynamic tmp51 = textInputStruct1;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(342)
											this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp51);
											HX_STACK_LINE(343)
											::haxe::ui::toolkit::controls::TextInput tmp52 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(343)
											::ObjectTag tmp53 = this->selectedTagObject;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(343)
											::String tmp54 = tmp53->GetNounString();		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(343)
											tmp52->set_text(tmp54);
											HX_STACK_LINE(344)
											::haxe::ui::toolkit::controls::TextInput tmp55 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(344)
											::ObjectTag tmp56 = this->selectedTagObject;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(344)
											::String tmp57 = tmp56->GetNounSString();		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(344)
											tmp55->set_text(tmp57);
											HX_STACK_LINE(345)
											::haxe::ui::toolkit::containers::Grid tmp58 = this->gridObject;		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(345)
											::haxe::ui::toolkit::controls::Text tmp59 = this->inputNounTextObject;		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(345)
											tmp58->addChild(tmp59);
											HX_STACK_LINE(346)
											::haxe::ui::toolkit::containers::Grid tmp60 = this->gridObject;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(346)
											::haxe::ui::toolkit::controls::TextInput tmp61 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(346)
											tmp60->addChild(tmp61);
											HX_STACK_LINE(347)
											::haxe::ui::toolkit::containers::Grid tmp62 = this->gridObject;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(347)
											::haxe::ui::toolkit::controls::Text tmp63 = this->inputNounSTextObject;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(347)
											tmp62->addChild(tmp63);
											HX_STACK_LINE(348)
											::haxe::ui::toolkit::containers::Grid tmp64 = this->gridObject;		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(348)
											::haxe::ui::toolkit::controls::TextInput tmp65 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(348)
											tmp64->addChild(tmp65);
										}
										else{
											HX_STACK_LINE(350)
											::haxe::ui::toolkit::controls::selection::ListSelector tmp44 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(350)
											::String tmp45 = tmp44->get_text();		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(350)
											bool tmp46 = (tmp45 == HX_HCSTRING("NOUN_INANIMATE_PLACE_ABSTRACT","\xe2","\xba","\xf0","\x84"));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(350)
											if ((tmp46)){
												HX_STACK_LINE(352)
												::haxe::ui::toolkit::controls::Text tmp47 = this->inputNounTextObject;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(353)
												::haxe::ui::toolkit::controls::TextInput tmp48 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp48,"tmp48");
												struct _Function_11_1{
													inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp48,::haxe::ui::toolkit::controls::Text &tmp47){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",351,0x56a27145)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp47,false);
															__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp48,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(351)
												Dynamic tmp49 = _Function_11_1::Block(tmp48,tmp47);		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(351)
												Dynamic textInputStruct = tmp49;		HX_STACK_VAR(textInputStruct,"textInputStruct");
												HX_STACK_LINE(355)
												Dynamic tmp50 = textInputStruct;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(355)
												this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp50);
												HX_STACK_LINE(357)
												::haxe::ui::toolkit::controls::Text tmp51 = this->inputNounSTextObject;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(358)
												::haxe::ui::toolkit::controls::TextInput tmp52 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp52,"tmp52");
												struct _Function_11_2{
													inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp52,::haxe::ui::toolkit::controls::Text &tmp51){
														HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",356,0x56a27145)
														{
															hx::Anon __result = hx::Anon_obj::Create();
															__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp51,false);
															__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp52,false);
															return __result;
														}
														return null();
													}
												};
												HX_STACK_LINE(356)
												Dynamic tmp53 = _Function_11_2::Block(tmp52,tmp51);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(356)
												Dynamic textInputStruct1 = tmp53;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
												HX_STACK_LINE(360)
												Dynamic tmp54 = textInputStruct1;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(360)
												this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp54);
												HX_STACK_LINE(361)
												::haxe::ui::toolkit::controls::TextInput tmp55 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(361)
												::ObjectTag tmp56 = this->selectedTagObject;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(361)
												::String tmp57 = tmp56->GetNounString();		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(361)
												tmp55->set_text(tmp57);
												HX_STACK_LINE(362)
												::haxe::ui::toolkit::controls::TextInput tmp58 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(362)
												::ObjectTag tmp59 = this->selectedTagObject;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(362)
												::String tmp60 = tmp59->GetNounSString();		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(362)
												tmp58->set_text(tmp60);
												HX_STACK_LINE(363)
												::haxe::ui::toolkit::containers::Grid tmp61 = this->gridObject;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(363)
												::haxe::ui::toolkit::controls::Text tmp62 = this->inputNounTextObject;		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(363)
												tmp61->addChild(tmp62);
												HX_STACK_LINE(364)
												::haxe::ui::toolkit::containers::Grid tmp63 = this->gridObject;		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(364)
												::haxe::ui::toolkit::controls::TextInput tmp64 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(364)
												tmp63->addChild(tmp64);
												HX_STACK_LINE(365)
												::haxe::ui::toolkit::containers::Grid tmp65 = this->gridObject;		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(365)
												::haxe::ui::toolkit::controls::Text tmp66 = this->inputNounSTextObject;		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(365)
												tmp65->addChild(tmp66);
												HX_STACK_LINE(366)
												::haxe::ui::toolkit::containers::Grid tmp67 = this->gridObject;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(366)
												::haxe::ui::toolkit::controls::TextInput tmp68 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(366)
												tmp67->addChild(tmp68);
											}
											else{
												HX_STACK_LINE(368)
												::haxe::ui::toolkit::controls::selection::ListSelector tmp47 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(368)
												::String tmp48 = tmp47->get_text();		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(368)
												bool tmp49 = (tmp48 == HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xcf","\x34","\x99","\x14"));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(368)
												if ((tmp49)){
													HX_STACK_LINE(370)
													::haxe::ui::toolkit::controls::Text tmp50 = this->inputNounTextObject;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(371)
													::haxe::ui::toolkit::controls::TextInput tmp51 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp51,"tmp51");
													struct _Function_12_1{
														inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp50,::haxe::ui::toolkit::controls::TextInput &tmp51){
															HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",369,0x56a27145)
															{
																hx::Anon __result = hx::Anon_obj::Create();
																__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp50,false);
																__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp51,false);
																return __result;
															}
															return null();
														}
													};
													HX_STACK_LINE(369)
													Dynamic tmp52 = _Function_12_1::Block(tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(369)
													Dynamic textInputStruct = tmp52;		HX_STACK_VAR(textInputStruct,"textInputStruct");
													HX_STACK_LINE(373)
													Dynamic tmp53 = textInputStruct;		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(373)
													this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp53);
													HX_STACK_LINE(374)
													::haxe::ui::toolkit::controls::TextInput tmp54 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(374)
													::ObjectTag tmp55 = this->selectedTagObject;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(374)
													::String tmp56 = tmp55->GetNounString();		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(374)
													tmp54->set_text(tmp56);
													HX_STACK_LINE(375)
													::haxe::ui::toolkit::containers::Grid tmp57 = this->gridObject;		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(375)
													::haxe::ui::toolkit::controls::Text tmp58 = this->inputNounTextObject;		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(375)
													tmp57->addChild(tmp58);
													HX_STACK_LINE(376)
													::haxe::ui::toolkit::containers::Grid tmp59 = this->gridObject;		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(376)
													::haxe::ui::toolkit::controls::TextInput tmp60 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(376)
													tmp59->addChild(tmp60);
												}
												else{
													HX_STACK_LINE(378)
													::haxe::ui::toolkit::controls::selection::ListSelector tmp50 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(378)
													::String tmp51 = tmp50->get_text();		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(378)
													bool tmp52 = (tmp51 == HX_HCSTRING("NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x59","\x2d","\x73","\xba"));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(378)
													if ((tmp52)){
														HX_STACK_LINE(380)
														::haxe::ui::toolkit::controls::Text tmp53 = this->inputNounTextObject;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(381)
														::haxe::ui::toolkit::controls::TextInput tmp54 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp54,"tmp54");
														struct _Function_13_1{
															inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp54,::haxe::ui::toolkit::controls::Text &tmp53){
																HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",379,0x56a27145)
																{
																	hx::Anon __result = hx::Anon_obj::Create();
																	__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp53,false);
																	__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp54,false);
																	return __result;
																}
																return null();
															}
														};
														HX_STACK_LINE(379)
														Dynamic tmp55 = _Function_13_1::Block(tmp54,tmp53);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(379)
														Dynamic textInputStruct = tmp55;		HX_STACK_VAR(textInputStruct,"textInputStruct");
														HX_STACK_LINE(383)
														Dynamic tmp56 = textInputStruct;		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(383)
														this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp56);
														HX_STACK_LINE(385)
														::haxe::ui::toolkit::controls::Text tmp57 = this->inputNounSTextObject;		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(386)
														::haxe::ui::toolkit::controls::TextInput tmp58 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp58,"tmp58");
														struct _Function_13_2{
															inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp58,::haxe::ui::toolkit::controls::Text &tmp57){
																HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",384,0x56a27145)
																{
																	hx::Anon __result = hx::Anon_obj::Create();
																	__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp57,false);
																	__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp58,false);
																	return __result;
																}
																return null();
															}
														};
														HX_STACK_LINE(384)
														Dynamic tmp59 = _Function_13_2::Block(tmp58,tmp57);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(384)
														Dynamic textInputStruct1 = tmp59;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
														HX_STACK_LINE(388)
														Dynamic tmp60 = textInputStruct1;		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(388)
														this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp60);
														HX_STACK_LINE(389)
														::haxe::ui::toolkit::controls::TextInput tmp61 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(389)
														::ObjectTag tmp62 = this->selectedTagObject;		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(389)
														::String tmp63 = tmp62->GetNounString();		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(389)
														tmp61->set_text(tmp63);
														HX_STACK_LINE(390)
														::haxe::ui::toolkit::controls::TextInput tmp64 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(390)
														::ObjectTag tmp65 = this->selectedTagObject;		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(390)
														::String tmp66 = tmp65->GetNounSString();		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(390)
														tmp64->set_text(tmp66);
														HX_STACK_LINE(391)
														::haxe::ui::toolkit::containers::Grid tmp67 = this->gridObject;		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(391)
														::haxe::ui::toolkit::controls::Text tmp68 = this->inputNounTextObject;		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(391)
														tmp67->addChild(tmp68);
														HX_STACK_LINE(392)
														::haxe::ui::toolkit::containers::Grid tmp69 = this->gridObject;		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(392)
														::haxe::ui::toolkit::controls::TextInput tmp70 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(392)
														tmp69->addChild(tmp70);
														HX_STACK_LINE(393)
														::haxe::ui::toolkit::containers::Grid tmp71 = this->gridObject;		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(393)
														::haxe::ui::toolkit::controls::Text tmp72 = this->inputNounSTextObject;		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(393)
														tmp71->addChild(tmp72);
														HX_STACK_LINE(394)
														::haxe::ui::toolkit::containers::Grid tmp73 = this->gridObject;		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(394)
														::haxe::ui::toolkit::controls::TextInput tmp74 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(394)
														tmp73->addChild(tmp74);
													}
													else{
														HX_STACK_LINE(396)
														::haxe::ui::toolkit::controls::selection::ListSelector tmp53 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(396)
														::String tmp54 = tmp53->get_text();		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(396)
														bool tmp55 = (tmp54 == HX_HCSTRING("NOUN_INANIMATE_SEE_ABSTRACT","\x96","\x1c","\xcd","\x4b"));		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(396)
														if ((tmp55)){
															HX_STACK_LINE(398)
															::haxe::ui::toolkit::controls::Text tmp56 = this->inputNounTextObject;		HX_STACK_VAR(tmp56,"tmp56");
															HX_STACK_LINE(399)
															::haxe::ui::toolkit::controls::TextInput tmp57 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp57,"tmp57");
															struct _Function_14_1{
																inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp56,::haxe::ui::toolkit::controls::TextInput &tmp57){
																	HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",397,0x56a27145)
																	{
																		hx::Anon __result = hx::Anon_obj::Create();
																		__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp56,false);
																		__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp57,false);
																		return __result;
																	}
																	return null();
																}
															};
															HX_STACK_LINE(397)
															Dynamic tmp58 = _Function_14_1::Block(tmp56,tmp57);		HX_STACK_VAR(tmp58,"tmp58");
															HX_STACK_LINE(397)
															Dynamic textInputStruct = tmp58;		HX_STACK_VAR(textInputStruct,"textInputStruct");
															HX_STACK_LINE(401)
															Dynamic tmp59 = textInputStruct;		HX_STACK_VAR(tmp59,"tmp59");
															HX_STACK_LINE(401)
															this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp59);
															HX_STACK_LINE(402)
															::haxe::ui::toolkit::controls::TextInput tmp60 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp60,"tmp60");
															HX_STACK_LINE(402)
															::ObjectTag tmp61 = this->selectedTagObject;		HX_STACK_VAR(tmp61,"tmp61");
															HX_STACK_LINE(402)
															::String tmp62 = tmp61->GetNounString();		HX_STACK_VAR(tmp62,"tmp62");
															HX_STACK_LINE(402)
															tmp60->set_text(tmp62);
															HX_STACK_LINE(403)
															::haxe::ui::toolkit::containers::Grid tmp63 = this->gridObject;		HX_STACK_VAR(tmp63,"tmp63");
															HX_STACK_LINE(403)
															::haxe::ui::toolkit::controls::Text tmp64 = this->inputNounTextObject;		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(403)
															tmp63->addChild(tmp64);
															HX_STACK_LINE(404)
															::haxe::ui::toolkit::containers::Grid tmp65 = this->gridObject;		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(404)
															::haxe::ui::toolkit::controls::TextInput tmp66 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp66,"tmp66");
															HX_STACK_LINE(404)
															tmp65->addChild(tmp66);
														}
														else{
															HX_STACK_LINE(406)
															::haxe::ui::toolkit::controls::selection::ListSelector tmp56 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp56,"tmp56");
															HX_STACK_LINE(406)
															::String tmp57 = tmp56->get_text();		HX_STACK_VAR(tmp57,"tmp57");
															HX_STACK_LINE(406)
															bool tmp58 = (tmp57 == HX_HCSTRING("NOUN_INANIMATE_SEE_CONCRETE","\xf9","\x75","\x33","\x11"));		HX_STACK_VAR(tmp58,"tmp58");
															HX_STACK_LINE(406)
															if ((tmp58)){
																HX_STACK_LINE(408)
																::haxe::ui::toolkit::controls::Text tmp59 = this->inputNounTextObject;		HX_STACK_VAR(tmp59,"tmp59");
																HX_STACK_LINE(409)
																::haxe::ui::toolkit::controls::TextInput tmp60 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp60,"tmp60");
																struct _Function_15_1{
																	inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp60,::haxe::ui::toolkit::controls::Text &tmp59){
																		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",407,0x56a27145)
																		{
																			hx::Anon __result = hx::Anon_obj::Create();
																			__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp59,false);
																			__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp60,false);
																			return __result;
																		}
																		return null();
																	}
																};
																HX_STACK_LINE(407)
																Dynamic tmp61 = _Function_15_1::Block(tmp60,tmp59);		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(407)
																Dynamic textInputStruct = tmp61;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																HX_STACK_LINE(411)
																Dynamic tmp62 = textInputStruct;		HX_STACK_VAR(tmp62,"tmp62");
																HX_STACK_LINE(411)
																this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp62);
																HX_STACK_LINE(412)
																::haxe::ui::toolkit::controls::TextInput tmp63 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp63,"tmp63");
																HX_STACK_LINE(412)
																::ObjectTag tmp64 = this->selectedTagObject;		HX_STACK_VAR(tmp64,"tmp64");
																HX_STACK_LINE(412)
																::String tmp65 = tmp64->GetNounString();		HX_STACK_VAR(tmp65,"tmp65");
																HX_STACK_LINE(412)
																tmp63->set_text(tmp65);
																HX_STACK_LINE(413)
																::haxe::ui::toolkit::containers::Grid tmp66 = this->gridObject;		HX_STACK_VAR(tmp66,"tmp66");
																HX_STACK_LINE(413)
																::haxe::ui::toolkit::controls::Text tmp67 = this->inputNounTextObject;		HX_STACK_VAR(tmp67,"tmp67");
																HX_STACK_LINE(413)
																tmp66->addChild(tmp67);
																HX_STACK_LINE(414)
																::haxe::ui::toolkit::containers::Grid tmp68 = this->gridObject;		HX_STACK_VAR(tmp68,"tmp68");
																HX_STACK_LINE(414)
																::haxe::ui::toolkit::controls::TextInput tmp69 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp69,"tmp69");
																HX_STACK_LINE(414)
																tmp68->addChild(tmp69);
															}
															else{
																HX_STACK_LINE(416)
																::haxe::ui::toolkit::controls::selection::ListSelector tmp59 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp59,"tmp59");
																HX_STACK_LINE(416)
																::String tmp60 = tmp59->get_text();		HX_STACK_VAR(tmp60,"tmp60");
																HX_STACK_LINE(416)
																bool tmp61 = (tmp60 == HX_HCSTRING("NOUN_INANIMATE_TITLE","\x50","\x86","\xd3","\xe1"));		HX_STACK_VAR(tmp61,"tmp61");
																HX_STACK_LINE(416)
																if ((tmp61)){
																	HX_STACK_LINE(418)
																	::haxe::ui::toolkit::controls::Text tmp62 = this->inputNounTextObject;		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(419)
																	::haxe::ui::toolkit::controls::TextInput tmp63 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp63,"tmp63");
																	struct _Function_16_1{
																		inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp62,::haxe::ui::toolkit::controls::TextInput &tmp63){
																			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",417,0x56a27145)
																			{
																				hx::Anon __result = hx::Anon_obj::Create();
																				__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp62,false);
																				__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp63,false);
																				return __result;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(417)
																	Dynamic tmp64 = _Function_16_1::Block(tmp62,tmp63);		HX_STACK_VAR(tmp64,"tmp64");
																	HX_STACK_LINE(417)
																	Dynamic textInputStruct = tmp64;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																	HX_STACK_LINE(421)
																	Dynamic tmp65 = textInputStruct;		HX_STACK_VAR(tmp65,"tmp65");
																	HX_STACK_LINE(421)
																	this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp65);
																	HX_STACK_LINE(423)
																	::haxe::ui::toolkit::controls::Text tmp66 = this->inputNounSTextObject;		HX_STACK_VAR(tmp66,"tmp66");
																	HX_STACK_LINE(424)
																	::haxe::ui::toolkit::controls::TextInput tmp67 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp67,"tmp67");
																	struct _Function_16_2{
																		inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp66,::haxe::ui::toolkit::controls::TextInput &tmp67){
																			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",422,0x56a27145)
																			{
																				hx::Anon __result = hx::Anon_obj::Create();
																				__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp66,false);
																				__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp67,false);
																				return __result;
																			}
																			return null();
																		}
																	};
																	HX_STACK_LINE(422)
																	Dynamic tmp68 = _Function_16_2::Block(tmp66,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
																	HX_STACK_LINE(422)
																	Dynamic textInputStruct1 = tmp68;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
																	HX_STACK_LINE(426)
																	Dynamic tmp69 = textInputStruct1;		HX_STACK_VAR(tmp69,"tmp69");
																	HX_STACK_LINE(426)
																	this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp69);
																	HX_STACK_LINE(427)
																	::haxe::ui::toolkit::controls::TextInput tmp70 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp70,"tmp70");
																	HX_STACK_LINE(427)
																	::ObjectTag tmp71 = this->selectedTagObject;		HX_STACK_VAR(tmp71,"tmp71");
																	HX_STACK_LINE(427)
																	::String tmp72 = tmp71->GetNounString();		HX_STACK_VAR(tmp72,"tmp72");
																	HX_STACK_LINE(427)
																	tmp70->set_text(tmp72);
																	HX_STACK_LINE(428)
																	::haxe::ui::toolkit::controls::TextInput tmp73 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp73,"tmp73");
																	HX_STACK_LINE(428)
																	::ObjectTag tmp74 = this->selectedTagObject;		HX_STACK_VAR(tmp74,"tmp74");
																	HX_STACK_LINE(428)
																	::String tmp75 = tmp74->GetNounSString();		HX_STACK_VAR(tmp75,"tmp75");
																	HX_STACK_LINE(428)
																	tmp73->set_text(tmp75);
																	HX_STACK_LINE(429)
																	::haxe::ui::toolkit::containers::Grid tmp76 = this->gridObject;		HX_STACK_VAR(tmp76,"tmp76");
																	HX_STACK_LINE(429)
																	::haxe::ui::toolkit::controls::Text tmp77 = this->inputNounTextObject;		HX_STACK_VAR(tmp77,"tmp77");
																	HX_STACK_LINE(429)
																	tmp76->addChild(tmp77);
																	HX_STACK_LINE(430)
																	::haxe::ui::toolkit::containers::Grid tmp78 = this->gridObject;		HX_STACK_VAR(tmp78,"tmp78");
																	HX_STACK_LINE(430)
																	::haxe::ui::toolkit::controls::TextInput tmp79 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp79,"tmp79");
																	HX_STACK_LINE(430)
																	tmp78->addChild(tmp79);
																	HX_STACK_LINE(431)
																	::haxe::ui::toolkit::containers::Grid tmp80 = this->gridObject;		HX_STACK_VAR(tmp80,"tmp80");
																	HX_STACK_LINE(431)
																	::haxe::ui::toolkit::controls::Text tmp81 = this->inputNounSTextObject;		HX_STACK_VAR(tmp81,"tmp81");
																	HX_STACK_LINE(431)
																	tmp80->addChild(tmp81);
																	HX_STACK_LINE(432)
																	::haxe::ui::toolkit::containers::Grid tmp82 = this->gridObject;		HX_STACK_VAR(tmp82,"tmp82");
																	HX_STACK_LINE(432)
																	::haxe::ui::toolkit::controls::TextInput tmp83 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp83,"tmp83");
																	HX_STACK_LINE(432)
																	tmp82->addChild(tmp83);
																}
																else{
																	HX_STACK_LINE(434)
																	::haxe::ui::toolkit::controls::selection::ListSelector tmp62 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp62,"tmp62");
																	HX_STACK_LINE(434)
																	::String tmp63 = tmp62->get_text();		HX_STACK_VAR(tmp63,"tmp63");
																	HX_STACK_LINE(434)
																	bool tmp64 = (tmp63 == HX_HCSTRING("NOUN_INANIMATE_WEAR_ABSTRACT","\xba","\xec","\x43","\xdf"));		HX_STACK_VAR(tmp64,"tmp64");
																	HX_STACK_LINE(434)
																	if ((tmp64)){
																		HX_STACK_LINE(436)
																		::haxe::ui::toolkit::controls::Text tmp65 = this->inputNounTextObject;		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(437)
																		::haxe::ui::toolkit::controls::TextInput tmp66 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp66,"tmp66");
																		struct _Function_17_1{
																			inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp66,::haxe::ui::toolkit::controls::Text &tmp65){
																				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",435,0x56a27145)
																				{
																					hx::Anon __result = hx::Anon_obj::Create();
																					__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp65,false);
																					__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp66,false);
																					return __result;
																				}
																				return null();
																			}
																		};
																		HX_STACK_LINE(435)
																		Dynamic tmp67 = _Function_17_1::Block(tmp66,tmp65);		HX_STACK_VAR(tmp67,"tmp67");
																		HX_STACK_LINE(435)
																		Dynamic textInputStruct = tmp67;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																		HX_STACK_LINE(439)
																		Dynamic tmp68 = textInputStruct;		HX_STACK_VAR(tmp68,"tmp68");
																		HX_STACK_LINE(439)
																		this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp68);
																		HX_STACK_LINE(440)
																		::haxe::ui::toolkit::controls::TextInput tmp69 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp69,"tmp69");
																		HX_STACK_LINE(440)
																		::ObjectTag tmp70 = this->selectedTagObject;		HX_STACK_VAR(tmp70,"tmp70");
																		HX_STACK_LINE(440)
																		::String tmp71 = tmp70->GetNounString();		HX_STACK_VAR(tmp71,"tmp71");
																		HX_STACK_LINE(440)
																		tmp69->set_text(tmp71);
																		HX_STACK_LINE(441)
																		::haxe::ui::toolkit::containers::Grid tmp72 = this->gridObject;		HX_STACK_VAR(tmp72,"tmp72");
																		HX_STACK_LINE(441)
																		::haxe::ui::toolkit::controls::Text tmp73 = this->inputNounTextObject;		HX_STACK_VAR(tmp73,"tmp73");
																		HX_STACK_LINE(441)
																		tmp72->addChild(tmp73);
																		HX_STACK_LINE(442)
																		::haxe::ui::toolkit::containers::Grid tmp74 = this->gridObject;		HX_STACK_VAR(tmp74,"tmp74");
																		HX_STACK_LINE(442)
																		::haxe::ui::toolkit::controls::TextInput tmp75 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp75,"tmp75");
																		HX_STACK_LINE(442)
																		tmp74->addChild(tmp75);
																	}
																	else{
																		HX_STACK_LINE(444)
																		::haxe::ui::toolkit::controls::selection::ListSelector tmp65 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp65,"tmp65");
																		HX_STACK_LINE(444)
																		::String tmp66 = tmp65->get_text();		HX_STACK_VAR(tmp66,"tmp66");
																		HX_STACK_LINE(444)
																		bool tmp67 = (tmp66 == HX_HCSTRING("NOUN_INANIMATE_WEAR_CONCRETE","\x1d","\x46","\xaa","\xa4"));		HX_STACK_VAR(tmp67,"tmp67");
																		HX_STACK_LINE(444)
																		if ((tmp67)){
																			HX_STACK_LINE(446)
																			::haxe::ui::toolkit::controls::Text tmp68 = this->inputNounTextObject;		HX_STACK_VAR(tmp68,"tmp68");
																			HX_STACK_LINE(447)
																			::haxe::ui::toolkit::controls::TextInput tmp69 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp69,"tmp69");
																			struct _Function_18_1{
																				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp68,::haxe::ui::toolkit::controls::TextInput &tmp69){
																					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",445,0x56a27145)
																					{
																						hx::Anon __result = hx::Anon_obj::Create();
																						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp68,false);
																						__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp69,false);
																						return __result;
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(445)
																			Dynamic tmp70 = _Function_18_1::Block(tmp68,tmp69);		HX_STACK_VAR(tmp70,"tmp70");
																			HX_STACK_LINE(445)
																			Dynamic textInputStruct = tmp70;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																			HX_STACK_LINE(449)
																			Dynamic tmp71 = textInputStruct;		HX_STACK_VAR(tmp71,"tmp71");
																			HX_STACK_LINE(449)
																			this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp71);
																			HX_STACK_LINE(451)
																			::haxe::ui::toolkit::controls::Text tmp72 = this->inputNounSTextObject;		HX_STACK_VAR(tmp72,"tmp72");
																			HX_STACK_LINE(452)
																			::haxe::ui::toolkit::controls::TextInput tmp73 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp73,"tmp73");
																			struct _Function_18_2{
																				inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp73,::haxe::ui::toolkit::controls::Text &tmp72){
																					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",450,0x56a27145)
																					{
																						hx::Anon __result = hx::Anon_obj::Create();
																						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp72,false);
																						__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp73,false);
																						return __result;
																					}
																					return null();
																				}
																			};
																			HX_STACK_LINE(450)
																			Dynamic tmp74 = _Function_18_2::Block(tmp73,tmp72);		HX_STACK_VAR(tmp74,"tmp74");
																			HX_STACK_LINE(450)
																			Dynamic textInputStruct1 = tmp74;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
																			HX_STACK_LINE(454)
																			Dynamic tmp75 = textInputStruct1;		HX_STACK_VAR(tmp75,"tmp75");
																			HX_STACK_LINE(454)
																			this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp75);
																			HX_STACK_LINE(455)
																			::haxe::ui::toolkit::controls::TextInput tmp76 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp76,"tmp76");
																			HX_STACK_LINE(455)
																			::ObjectTag tmp77 = this->selectedTagObject;		HX_STACK_VAR(tmp77,"tmp77");
																			HX_STACK_LINE(455)
																			::String tmp78 = tmp77->GetNounString();		HX_STACK_VAR(tmp78,"tmp78");
																			HX_STACK_LINE(455)
																			tmp76->set_text(tmp78);
																			HX_STACK_LINE(456)
																			::haxe::ui::toolkit::controls::TextInput tmp79 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp79,"tmp79");
																			HX_STACK_LINE(456)
																			::ObjectTag tmp80 = this->selectedTagObject;		HX_STACK_VAR(tmp80,"tmp80");
																			HX_STACK_LINE(456)
																			::String tmp81 = tmp80->GetNounSString();		HX_STACK_VAR(tmp81,"tmp81");
																			HX_STACK_LINE(456)
																			tmp79->set_text(tmp81);
																			HX_STACK_LINE(457)
																			::haxe::ui::toolkit::containers::Grid tmp82 = this->gridObject;		HX_STACK_VAR(tmp82,"tmp82");
																			HX_STACK_LINE(457)
																			::haxe::ui::toolkit::controls::Text tmp83 = this->inputNounTextObject;		HX_STACK_VAR(tmp83,"tmp83");
																			HX_STACK_LINE(457)
																			tmp82->addChild(tmp83);
																			HX_STACK_LINE(458)
																			::haxe::ui::toolkit::containers::Grid tmp84 = this->gridObject;		HX_STACK_VAR(tmp84,"tmp84");
																			HX_STACK_LINE(458)
																			::haxe::ui::toolkit::controls::TextInput tmp85 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp85,"tmp85");
																			HX_STACK_LINE(458)
																			tmp84->addChild(tmp85);
																			HX_STACK_LINE(459)
																			::haxe::ui::toolkit::containers::Grid tmp86 = this->gridObject;		HX_STACK_VAR(tmp86,"tmp86");
																			HX_STACK_LINE(459)
																			::haxe::ui::toolkit::controls::Text tmp87 = this->inputNounSTextObject;		HX_STACK_VAR(tmp87,"tmp87");
																			HX_STACK_LINE(459)
																			tmp86->addChild(tmp87);
																			HX_STACK_LINE(460)
																			::haxe::ui::toolkit::containers::Grid tmp88 = this->gridObject;		HX_STACK_VAR(tmp88,"tmp88");
																			HX_STACK_LINE(460)
																			::haxe::ui::toolkit::controls::TextInput tmp89 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp89,"tmp89");
																			HX_STACK_LINE(460)
																			tmp88->addChild(tmp89);
																		}
																		else{
																			HX_STACK_LINE(462)
																			::haxe::ui::toolkit::controls::selection::ListSelector tmp68 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp68,"tmp68");
																			HX_STACK_LINE(462)
																			::String tmp69 = tmp68->get_text();		HX_STACK_VAR(tmp69,"tmp69");
																			HX_STACK_LINE(462)
																			bool tmp70 = (tmp69 == HX_HCSTRING("VERB_INTRANSITIVE","\xaa","\xd6","\xae","\xc7"));		HX_STACK_VAR(tmp70,"tmp70");
																			HX_STACK_LINE(462)
																			if ((tmp70)){
																				HX_STACK_LINE(464)
																				::haxe::ui::toolkit::controls::Text tmp71 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp71,"tmp71");
																				HX_STACK_LINE(465)
																				::haxe::ui::toolkit::controls::TextInput tmp72 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp72,"tmp72");
																				struct _Function_19_1{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp72,::haxe::ui::toolkit::controls::Text &tmp71){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",463,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp71,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp72,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(463)
																				Dynamic tmp73 = _Function_19_1::Block(tmp72,tmp71);		HX_STACK_VAR(tmp73,"tmp73");
																				HX_STACK_LINE(463)
																				Dynamic textInputStruct = tmp73;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																				HX_STACK_LINE(467)
																				Dynamic tmp74 = textInputStruct;		HX_STACK_VAR(tmp74,"tmp74");
																				HX_STACK_LINE(467)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp74);
																				HX_STACK_LINE(469)
																				::haxe::ui::toolkit::controls::Text tmp75 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp75,"tmp75");
																				HX_STACK_LINE(470)
																				::haxe::ui::toolkit::controls::TextInput tmp76 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp76,"tmp76");
																				struct _Function_19_2{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp75,::haxe::ui::toolkit::controls::TextInput &tmp76){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",468,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp75,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp76,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(468)
																				Dynamic tmp77 = _Function_19_2::Block(tmp75,tmp76);		HX_STACK_VAR(tmp77,"tmp77");
																				HX_STACK_LINE(468)
																				Dynamic textInputStruct1 = tmp77;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
																				HX_STACK_LINE(472)
																				Dynamic tmp78 = textInputStruct1;		HX_STACK_VAR(tmp78,"tmp78");
																				HX_STACK_LINE(472)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp78);
																				HX_STACK_LINE(474)
																				::haxe::ui::toolkit::controls::Text tmp79 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp79,"tmp79");
																				HX_STACK_LINE(475)
																				::haxe::ui::toolkit::controls::TextInput tmp80 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp80,"tmp80");
																				struct _Function_19_3{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp80,::haxe::ui::toolkit::controls::Text &tmp79){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",473,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp79,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp80,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(473)
																				Dynamic tmp81 = _Function_19_3::Block(tmp80,tmp79);		HX_STACK_VAR(tmp81,"tmp81");
																				HX_STACK_LINE(473)
																				Dynamic textInputStruct2 = tmp81;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
																				HX_STACK_LINE(477)
																				Dynamic tmp82 = textInputStruct2;		HX_STACK_VAR(tmp82,"tmp82");
																				HX_STACK_LINE(477)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp82);
																				HX_STACK_LINE(479)
																				::haxe::ui::toolkit::controls::Text tmp83 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp83,"tmp83");
																				HX_STACK_LINE(480)
																				::haxe::ui::toolkit::controls::TextInput tmp84 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp84,"tmp84");
																				struct _Function_19_4{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp84,::haxe::ui::toolkit::controls::Text &tmp83){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",478,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp83,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp84,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(478)
																				Dynamic tmp85 = _Function_19_4::Block(tmp84,tmp83);		HX_STACK_VAR(tmp85,"tmp85");
																				HX_STACK_LINE(478)
																				Dynamic textInputStruct3 = tmp85;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
																				HX_STACK_LINE(482)
																				Dynamic tmp86 = textInputStruct3;		HX_STACK_VAR(tmp86,"tmp86");
																				HX_STACK_LINE(482)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp86);
																				HX_STACK_LINE(484)
																				::haxe::ui::toolkit::controls::Text tmp87 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp87,"tmp87");
																				HX_STACK_LINE(485)
																				::haxe::ui::toolkit::controls::TextInput tmp88 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp88,"tmp88");
																				struct _Function_19_5{
																					inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp88,::haxe::ui::toolkit::controls::Text &tmp87){
																						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",483,0x56a27145)
																						{
																							hx::Anon __result = hx::Anon_obj::Create();
																							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp87,false);
																							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp88,false);
																							return __result;
																						}
																						return null();
																					}
																				};
																				HX_STACK_LINE(483)
																				Dynamic tmp89 = _Function_19_5::Block(tmp88,tmp87);		HX_STACK_VAR(tmp89,"tmp89");
																				HX_STACK_LINE(483)
																				Dynamic textInputStruct4 = tmp89;		HX_STACK_VAR(textInputStruct4,"textInputStruct4");
																				HX_STACK_LINE(487)
																				Dynamic tmp90 = textInputStruct4;		HX_STACK_VAR(tmp90,"tmp90");
																				HX_STACK_LINE(487)
																				this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp90);
																				HX_STACK_LINE(488)
																				::haxe::ui::toolkit::controls::TextInput tmp91 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp91,"tmp91");
																				HX_STACK_LINE(488)
																				::ObjectTag tmp92 = this->selectedTagObject;		HX_STACK_VAR(tmp92,"tmp92");
																				HX_STACK_LINE(488)
																				::String tmp93 = tmp92->GetVerb1String();		HX_STACK_VAR(tmp93,"tmp93");
																				HX_STACK_LINE(488)
																				tmp91->set_text(tmp93);
																				HX_STACK_LINE(489)
																				::haxe::ui::toolkit::controls::TextInput tmp94 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp94,"tmp94");
																				HX_STACK_LINE(489)
																				::ObjectTag tmp95 = this->selectedTagObject;		HX_STACK_VAR(tmp95,"tmp95");
																				HX_STACK_LINE(489)
																				::String tmp96 = tmp95->GetVerb2String();		HX_STACK_VAR(tmp96,"tmp96");
																				HX_STACK_LINE(489)
																				tmp94->set_text(tmp96);
																				HX_STACK_LINE(490)
																				::haxe::ui::toolkit::controls::TextInput tmp97 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp97,"tmp97");
																				HX_STACK_LINE(490)
																				::ObjectTag tmp98 = this->selectedTagObject;		HX_STACK_VAR(tmp98,"tmp98");
																				HX_STACK_LINE(490)
																				::String tmp99 = tmp98->GetVerb3String();		HX_STACK_VAR(tmp99,"tmp99");
																				HX_STACK_LINE(490)
																				tmp97->set_text(tmp99);
																				HX_STACK_LINE(491)
																				::haxe::ui::toolkit::controls::TextInput tmp100 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp100,"tmp100");
																				HX_STACK_LINE(491)
																				::ObjectTag tmp101 = this->selectedTagObject;		HX_STACK_VAR(tmp101,"tmp101");
																				HX_STACK_LINE(491)
																				::String tmp102 = tmp101->GetVerbIngString();		HX_STACK_VAR(tmp102,"tmp102");
																				HX_STACK_LINE(491)
																				tmp100->set_text(tmp102);
																				HX_STACK_LINE(492)
																				::haxe::ui::toolkit::controls::TextInput tmp103 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp103,"tmp103");
																				HX_STACK_LINE(492)
																				::ObjectTag tmp104 = this->selectedTagObject;		HX_STACK_VAR(tmp104,"tmp104");
																				HX_STACK_LINE(492)
																				::String tmp105 = tmp104->GetVerbSString();		HX_STACK_VAR(tmp105,"tmp105");
																				HX_STACK_LINE(492)
																				tmp103->set_text(tmp105);
																				HX_STACK_LINE(493)
																				::haxe::ui::toolkit::containers::Grid tmp106 = this->gridObject;		HX_STACK_VAR(tmp106,"tmp106");
																				HX_STACK_LINE(493)
																				::haxe::ui::toolkit::controls::Text tmp107 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp107,"tmp107");
																				HX_STACK_LINE(493)
																				tmp106->addChild(tmp107);
																				HX_STACK_LINE(494)
																				::haxe::ui::toolkit::containers::Grid tmp108 = this->gridObject;		HX_STACK_VAR(tmp108,"tmp108");
																				HX_STACK_LINE(494)
																				::haxe::ui::toolkit::controls::TextInput tmp109 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp109,"tmp109");
																				HX_STACK_LINE(494)
																				tmp108->addChild(tmp109);
																				HX_STACK_LINE(495)
																				::haxe::ui::toolkit::containers::Grid tmp110 = this->gridObject;		HX_STACK_VAR(tmp110,"tmp110");
																				HX_STACK_LINE(495)
																				::haxe::ui::toolkit::controls::Text tmp111 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp111,"tmp111");
																				HX_STACK_LINE(495)
																				tmp110->addChild(tmp111);
																				HX_STACK_LINE(496)
																				::haxe::ui::toolkit::containers::Grid tmp112 = this->gridObject;		HX_STACK_VAR(tmp112,"tmp112");
																				HX_STACK_LINE(496)
																				::haxe::ui::toolkit::controls::TextInput tmp113 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp113,"tmp113");
																				HX_STACK_LINE(496)
																				tmp112->addChild(tmp113);
																				HX_STACK_LINE(497)
																				::haxe::ui::toolkit::containers::Grid tmp114 = this->gridObject;		HX_STACK_VAR(tmp114,"tmp114");
																				HX_STACK_LINE(497)
																				::haxe::ui::toolkit::controls::Text tmp115 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp115,"tmp115");
																				HX_STACK_LINE(497)
																				tmp114->addChild(tmp115);
																				HX_STACK_LINE(498)
																				::haxe::ui::toolkit::containers::Grid tmp116 = this->gridObject;		HX_STACK_VAR(tmp116,"tmp116");
																				HX_STACK_LINE(498)
																				::haxe::ui::toolkit::controls::TextInput tmp117 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp117,"tmp117");
																				HX_STACK_LINE(498)
																				tmp116->addChild(tmp117);
																				HX_STACK_LINE(499)
																				::haxe::ui::toolkit::containers::Grid tmp118 = this->gridObject;		HX_STACK_VAR(tmp118,"tmp118");
																				HX_STACK_LINE(499)
																				::haxe::ui::toolkit::controls::Text tmp119 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp119,"tmp119");
																				HX_STACK_LINE(499)
																				tmp118->addChild(tmp119);
																				HX_STACK_LINE(500)
																				::haxe::ui::toolkit::containers::Grid tmp120 = this->gridObject;		HX_STACK_VAR(tmp120,"tmp120");
																				HX_STACK_LINE(500)
																				::haxe::ui::toolkit::controls::TextInput tmp121 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp121,"tmp121");
																				HX_STACK_LINE(500)
																				tmp120->addChild(tmp121);
																				HX_STACK_LINE(501)
																				::haxe::ui::toolkit::containers::Grid tmp122 = this->gridObject;		HX_STACK_VAR(tmp122,"tmp122");
																				HX_STACK_LINE(501)
																				::haxe::ui::toolkit::controls::Text tmp123 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp123,"tmp123");
																				HX_STACK_LINE(501)
																				tmp122->addChild(tmp123);
																				HX_STACK_LINE(502)
																				::haxe::ui::toolkit::containers::Grid tmp124 = this->gridObject;		HX_STACK_VAR(tmp124,"tmp124");
																				HX_STACK_LINE(502)
																				::haxe::ui::toolkit::controls::TextInput tmp125 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp125,"tmp125");
																				HX_STACK_LINE(502)
																				tmp124->addChild(tmp125);
																			}
																			else{
																				HX_STACK_LINE(504)
																				::haxe::ui::toolkit::controls::selection::ListSelector tmp71 = this->selectTagTypeListSelectorObject;		HX_STACK_VAR(tmp71,"tmp71");
																				HX_STACK_LINE(504)
																				::String tmp72 = tmp71->get_text();		HX_STACK_VAR(tmp72,"tmp72");
																				HX_STACK_LINE(504)
																				bool tmp73 = (tmp72 == HX_HCSTRING("VERB_TRANSITIVE","\x85","\x6e","\x84","\xed"));		HX_STACK_VAR(tmp73,"tmp73");
																				HX_STACK_LINE(504)
																				if ((tmp73)){
																					HX_STACK_LINE(506)
																					::haxe::ui::toolkit::controls::Text tmp74 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp74,"tmp74");
																					HX_STACK_LINE(507)
																					::haxe::ui::toolkit::controls::TextInput tmp75 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp75,"tmp75");
																					struct _Function_20_1{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp75,::haxe::ui::toolkit::controls::Text &tmp74){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",505,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp74,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp75,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(505)
																					Dynamic tmp76 = _Function_20_1::Block(tmp75,tmp74);		HX_STACK_VAR(tmp76,"tmp76");
																					HX_STACK_LINE(505)
																					Dynamic textInputStruct = tmp76;		HX_STACK_VAR(textInputStruct,"textInputStruct");
																					HX_STACK_LINE(509)
																					Dynamic tmp77 = textInputStruct;		HX_STACK_VAR(tmp77,"tmp77");
																					HX_STACK_LINE(509)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp77);
																					HX_STACK_LINE(511)
																					::haxe::ui::toolkit::controls::Text tmp78 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp78,"tmp78");
																					HX_STACK_LINE(512)
																					::haxe::ui::toolkit::controls::TextInput tmp79 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp79,"tmp79");
																					struct _Function_20_2{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::TextInput &tmp79,::haxe::ui::toolkit::controls::Text &tmp78){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",510,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp78,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp79,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(510)
																					Dynamic tmp80 = _Function_20_2::Block(tmp79,tmp78);		HX_STACK_VAR(tmp80,"tmp80");
																					HX_STACK_LINE(510)
																					Dynamic textInputStruct1 = tmp80;		HX_STACK_VAR(textInputStruct1,"textInputStruct1");
																					HX_STACK_LINE(514)
																					Dynamic tmp81 = textInputStruct1;		HX_STACK_VAR(tmp81,"tmp81");
																					HX_STACK_LINE(514)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp81);
																					HX_STACK_LINE(516)
																					::haxe::ui::toolkit::controls::Text tmp82 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp82,"tmp82");
																					HX_STACK_LINE(517)
																					::haxe::ui::toolkit::controls::TextInput tmp83 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp83,"tmp83");
																					struct _Function_20_3{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp82,::haxe::ui::toolkit::controls::TextInput &tmp83){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",515,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp82,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp83,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(515)
																					Dynamic tmp84 = _Function_20_3::Block(tmp82,tmp83);		HX_STACK_VAR(tmp84,"tmp84");
																					HX_STACK_LINE(515)
																					Dynamic textInputStruct2 = tmp84;		HX_STACK_VAR(textInputStruct2,"textInputStruct2");
																					HX_STACK_LINE(519)
																					Dynamic tmp85 = textInputStruct2;		HX_STACK_VAR(tmp85,"tmp85");
																					HX_STACK_LINE(519)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp85);
																					HX_STACK_LINE(521)
																					::haxe::ui::toolkit::controls::Text tmp86 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp86,"tmp86");
																					HX_STACK_LINE(522)
																					::haxe::ui::toolkit::controls::TextInput tmp87 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp87,"tmp87");
																					struct _Function_20_4{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp86,::haxe::ui::toolkit::controls::TextInput &tmp87){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",520,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp86,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp87,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(520)
																					Dynamic tmp88 = _Function_20_4::Block(tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
																					HX_STACK_LINE(520)
																					Dynamic textInputStruct3 = tmp88;		HX_STACK_VAR(textInputStruct3,"textInputStruct3");
																					HX_STACK_LINE(524)
																					Dynamic tmp89 = textInputStruct3;		HX_STACK_VAR(tmp89,"tmp89");
																					HX_STACK_LINE(524)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp89);
																					HX_STACK_LINE(526)
																					::haxe::ui::toolkit::controls::Text tmp90 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp90,"tmp90");
																					HX_STACK_LINE(527)
																					::haxe::ui::toolkit::controls::TextInput tmp91 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp91,"tmp91");
																					struct _Function_20_5{
																						inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &tmp90,::haxe::ui::toolkit::controls::TextInput &tmp91){
																							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectTag.hx",525,0x56a27145)
																							{
																								hx::Anon __result = hx::Anon_obj::Create();
																								__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , tmp90,false);
																								__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , tmp91,false);
																								return __result;
																							}
																							return null();
																						}
																					};
																					HX_STACK_LINE(525)
																					Dynamic tmp92 = _Function_20_5::Block(tmp90,tmp91);		HX_STACK_VAR(tmp92,"tmp92");
																					HX_STACK_LINE(525)
																					Dynamic textInputStruct4 = tmp92;		HX_STACK_VAR(textInputStruct4,"textInputStruct4");
																					HX_STACK_LINE(529)
																					Dynamic tmp93 = textInputStruct4;		HX_STACK_VAR(tmp93,"tmp93");
																					HX_STACK_LINE(529)
																					this->textInputStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp93);
																					HX_STACK_LINE(530)
																					::haxe::ui::toolkit::controls::TextInput tmp94 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp94,"tmp94");
																					HX_STACK_LINE(530)
																					::ObjectTag tmp95 = this->selectedTagObject;		HX_STACK_VAR(tmp95,"tmp95");
																					HX_STACK_LINE(530)
																					::String tmp96 = tmp95->GetVerb1String();		HX_STACK_VAR(tmp96,"tmp96");
																					HX_STACK_LINE(530)
																					tmp94->set_text(tmp96);
																					HX_STACK_LINE(531)
																					::haxe::ui::toolkit::controls::TextInput tmp97 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp97,"tmp97");
																					HX_STACK_LINE(531)
																					::ObjectTag tmp98 = this->selectedTagObject;		HX_STACK_VAR(tmp98,"tmp98");
																					HX_STACK_LINE(531)
																					::String tmp99 = tmp98->GetVerb2String();		HX_STACK_VAR(tmp99,"tmp99");
																					HX_STACK_LINE(531)
																					tmp97->set_text(tmp99);
																					HX_STACK_LINE(532)
																					::haxe::ui::toolkit::controls::TextInput tmp100 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp100,"tmp100");
																					HX_STACK_LINE(532)
																					::ObjectTag tmp101 = this->selectedTagObject;		HX_STACK_VAR(tmp101,"tmp101");
																					HX_STACK_LINE(532)
																					::String tmp102 = tmp101->GetVerb3String();		HX_STACK_VAR(tmp102,"tmp102");
																					HX_STACK_LINE(532)
																					tmp100->set_text(tmp102);
																					HX_STACK_LINE(533)
																					::haxe::ui::toolkit::controls::TextInput tmp103 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp103,"tmp103");
																					HX_STACK_LINE(533)
																					::ObjectTag tmp104 = this->selectedTagObject;		HX_STACK_VAR(tmp104,"tmp104");
																					HX_STACK_LINE(533)
																					::String tmp105 = tmp104->GetVerbIngString();		HX_STACK_VAR(tmp105,"tmp105");
																					HX_STACK_LINE(533)
																					tmp103->set_text(tmp105);
																					HX_STACK_LINE(534)
																					::haxe::ui::toolkit::controls::TextInput tmp106 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp106,"tmp106");
																					HX_STACK_LINE(534)
																					::ObjectTag tmp107 = this->selectedTagObject;		HX_STACK_VAR(tmp107,"tmp107");
																					HX_STACK_LINE(534)
																					::String tmp108 = tmp107->GetVerbSString();		HX_STACK_VAR(tmp108,"tmp108");
																					HX_STACK_LINE(534)
																					tmp106->set_text(tmp108);
																					HX_STACK_LINE(535)
																					::haxe::ui::toolkit::containers::Grid tmp109 = this->gridObject;		HX_STACK_VAR(tmp109,"tmp109");
																					HX_STACK_LINE(535)
																					::haxe::ui::toolkit::controls::Text tmp110 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp110,"tmp110");
																					HX_STACK_LINE(535)
																					tmp109->addChild(tmp110);
																					HX_STACK_LINE(536)
																					::haxe::ui::toolkit::containers::Grid tmp111 = this->gridObject;		HX_STACK_VAR(tmp111,"tmp111");
																					HX_STACK_LINE(536)
																					::haxe::ui::toolkit::controls::TextInput tmp112 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp112,"tmp112");
																					HX_STACK_LINE(536)
																					tmp111->addChild(tmp112);
																					HX_STACK_LINE(537)
																					::haxe::ui::toolkit::containers::Grid tmp113 = this->gridObject;		HX_STACK_VAR(tmp113,"tmp113");
																					HX_STACK_LINE(537)
																					::haxe::ui::toolkit::controls::Text tmp114 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp114,"tmp114");
																					HX_STACK_LINE(537)
																					tmp113->addChild(tmp114);
																					HX_STACK_LINE(538)
																					::haxe::ui::toolkit::containers::Grid tmp115 = this->gridObject;		HX_STACK_VAR(tmp115,"tmp115");
																					HX_STACK_LINE(538)
																					::haxe::ui::toolkit::controls::TextInput tmp116 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp116,"tmp116");
																					HX_STACK_LINE(538)
																					tmp115->addChild(tmp116);
																					HX_STACK_LINE(539)
																					::haxe::ui::toolkit::containers::Grid tmp117 = this->gridObject;		HX_STACK_VAR(tmp117,"tmp117");
																					HX_STACK_LINE(539)
																					::haxe::ui::toolkit::controls::Text tmp118 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp118,"tmp118");
																					HX_STACK_LINE(539)
																					tmp117->addChild(tmp118);
																					HX_STACK_LINE(540)
																					::haxe::ui::toolkit::containers::Grid tmp119 = this->gridObject;		HX_STACK_VAR(tmp119,"tmp119");
																					HX_STACK_LINE(540)
																					::haxe::ui::toolkit::controls::TextInput tmp120 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp120,"tmp120");
																					HX_STACK_LINE(540)
																					tmp119->addChild(tmp120);
																					HX_STACK_LINE(541)
																					::haxe::ui::toolkit::containers::Grid tmp121 = this->gridObject;		HX_STACK_VAR(tmp121,"tmp121");
																					HX_STACK_LINE(541)
																					::haxe::ui::toolkit::controls::Text tmp122 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp122,"tmp122");
																					HX_STACK_LINE(541)
																					tmp121->addChild(tmp122);
																					HX_STACK_LINE(542)
																					::haxe::ui::toolkit::containers::Grid tmp123 = this->gridObject;		HX_STACK_VAR(tmp123,"tmp123");
																					HX_STACK_LINE(542)
																					::haxe::ui::toolkit::controls::TextInput tmp124 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp124,"tmp124");
																					HX_STACK_LINE(542)
																					tmp123->addChild(tmp124);
																					HX_STACK_LINE(543)
																					::haxe::ui::toolkit::containers::Grid tmp125 = this->gridObject;		HX_STACK_VAR(tmp125,"tmp125");
																					HX_STACK_LINE(543)
																					::haxe::ui::toolkit::controls::Text tmp126 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp126,"tmp126");
																					HX_STACK_LINE(543)
																					tmp125->addChild(tmp126);
																					HX_STACK_LINE(544)
																					::haxe::ui::toolkit::containers::Grid tmp127 = this->gridObject;		HX_STACK_VAR(tmp127,"tmp127");
																					HX_STACK_LINE(544)
																					::haxe::ui::toolkit::controls::TextInput tmp128 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp128,"tmp128");
																					HX_STACK_LINE(544)
																					tmp127->addChild(tmp128);
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
					HX_STACK_LINE(547)
					::String tmp29 = this->selectTagNameListSelectorString;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(547)
					this->selectTagNameListSelectorPrevString = tmp29;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectTag_obj,UpdateVoid,(void))

Void UIPopupEditObjectTag_obj::CreateGUIObjectVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectTag","CreateGUIObjectVoid",0x22b6097d,"UIPopupEditObjectTag.CreateGUIObjectVoid","UIPopupEditObjectTag.hx",559,0x56a27145)
		HX_STACK_THIS(this)
		HX_STACK_LINE(563)
		::haxe::ui::toolkit::controls::TextInput tmp = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(563)
		this->inputAdjTextInputObject = tmp;
		HX_STACK_LINE(564)
		::haxe::ui::toolkit::controls::TextInput tmp1 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(564)
		tmp1->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputAdj","\x83","\x89","\xd1","\x70"));
		HX_STACK_LINE(565)
		::haxe::ui::toolkit::controls::TextInput tmp2 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(565)
		tmp2->set_percentWidth((int)100);
		HX_STACK_LINE(566)
		::haxe::ui::toolkit::controls::TextInput tmp3 = this->inputAdjTextInputObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(566)
		tmp3->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(567)
		::haxe::ui::toolkit::controls::Text tmp4 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(567)
		this->inputAdjTextObject = tmp4;
		HX_STACK_LINE(568)
		::haxe::ui::toolkit::controls::Text tmp5 = this->inputAdjTextObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(568)
		tmp5->set_text(HX_HCSTRING("Adjective","\x89","\x1c","\x97","\xce"));
		HX_STACK_LINE(569)
		::haxe::ui::toolkit::controls::TextInput tmp6 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(569)
		this->inputAdvTextInputObject = tmp6;
		HX_STACK_LINE(570)
		::haxe::ui::toolkit::controls::TextInput tmp7 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(570)
		tmp7->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputAdv","\x8f","\x89","\xd1","\x70"));
		HX_STACK_LINE(571)
		::haxe::ui::toolkit::controls::TextInput tmp8 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(571)
		tmp8->set_percentWidth((int)100);
		HX_STACK_LINE(572)
		::haxe::ui::toolkit::controls::TextInput tmp9 = this->inputAdvTextInputObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(572)
		tmp9->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(573)
		::haxe::ui::toolkit::controls::Text tmp10 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(573)
		this->inputAdvTextObject = tmp10;
		HX_STACK_LINE(574)
		::haxe::ui::toolkit::controls::Text tmp11 = this->inputAdvTextObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(574)
		tmp11->set_text(HX_HCSTRING("Adverb","\x22","\xab","\x90","\xdf"));
		HX_STACK_LINE(575)
		::haxe::ui::toolkit::controls::TextInput tmp12 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(575)
		this->inputNounPosTextInputObject = tmp12;
		HX_STACK_LINE(576)
		::haxe::ui::toolkit::controls::TextInput tmp13 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(576)
		tmp13->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputNounPos","\x36","\xf6","\x26","\x21"));
		HX_STACK_LINE(577)
		::haxe::ui::toolkit::controls::TextInput tmp14 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(577)
		tmp14->set_percentWidth((int)100);
		HX_STACK_LINE(578)
		::haxe::ui::toolkit::controls::TextInput tmp15 = this->inputNounPosTextInputObject;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(578)
		tmp15->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(579)
		::haxe::ui::toolkit::controls::Text tmp16 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(579)
		this->inputNounPosTextObject = tmp16;
		HX_STACK_LINE(580)
		::haxe::ui::toolkit::controls::Text tmp17 = this->inputNounPosTextObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(580)
		tmp17->set_text(HX_HCSTRING("Noun Possesion","\x95","\x4e","\xef","\xd9"));
		HX_STACK_LINE(581)
		::haxe::ui::toolkit::controls::TextInput tmp18 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(581)
		this->inputNounSPosTextInputObject = tmp18;
		HX_STACK_LINE(582)
		::haxe::ui::toolkit::controls::TextInput tmp19 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(582)
		tmp19->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputNounSPos","\xff","\x93","\xd4","\xe2"));
		HX_STACK_LINE(583)
		::haxe::ui::toolkit::controls::TextInput tmp20 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(583)
		tmp20->set_percentWidth((int)100);
		HX_STACK_LINE(584)
		::haxe::ui::toolkit::controls::TextInput tmp21 = this->inputNounSPosTextInputObject;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(584)
		tmp21->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(585)
		::haxe::ui::toolkit::controls::Text tmp22 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(585)
		this->inputNounSPosTextObject = tmp22;
		HX_STACK_LINE(586)
		::haxe::ui::toolkit::controls::Text tmp23 = this->inputNounSPosTextObject;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(586)
		tmp23->set_text(HX_HCSTRING("Noun Plural Possesion","\xa5","\x14","\x5d","\x64"));
		HX_STACK_LINE(587)
		::haxe::ui::toolkit::controls::TextInput tmp24 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(587)
		this->inputNounSTextInputObject = tmp24;
		HX_STACK_LINE(588)
		::haxe::ui::toolkit::controls::TextInput tmp25 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(588)
		tmp25->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputNounS","\x95","\xcc","\xec","\xf2"));
		HX_STACK_LINE(589)
		::haxe::ui::toolkit::controls::TextInput tmp26 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(589)
		tmp26->set_percentWidth((int)100);
		HX_STACK_LINE(590)
		::haxe::ui::toolkit::controls::TextInput tmp27 = this->inputNounSTextInputObject;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(590)
		tmp27->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(591)
		::haxe::ui::toolkit::controls::Text tmp28 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(591)
		this->inputNounSTextObject = tmp28;
		HX_STACK_LINE(592)
		::haxe::ui::toolkit::controls::Text tmp29 = this->inputNounSTextObject;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(592)
		tmp29->set_text(HX_HCSTRING("Noun Plural","\x0a","\xd7","\x3f","\x4c"));
		HX_STACK_LINE(593)
		::haxe::ui::toolkit::controls::TextInput tmp30 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(593)
		this->inputNounTextInputObject = tmp30;
		HX_STACK_LINE(594)
		::haxe::ui::toolkit::controls::TextInput tmp31 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(594)
		tmp31->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputNoun","\xfe","\xf1","\x26","\x4f"));
		HX_STACK_LINE(595)
		::haxe::ui::toolkit::controls::TextInput tmp32 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(595)
		tmp32->set_percentWidth((int)100);
		HX_STACK_LINE(596)
		::haxe::ui::toolkit::controls::TextInput tmp33 = this->inputNounTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(596)
		tmp33->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(597)
		::haxe::ui::toolkit::controls::Text tmp34 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(597)
		this->inputNounTextObject = tmp34;
		HX_STACK_LINE(598)
		::haxe::ui::toolkit::controls::Text tmp35 = this->inputNounTextObject;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(598)
		tmp35->set_text(HX_HCSTRING("Noun","\xfa","\x44","\xe3","\x33"));
		HX_STACK_LINE(599)
		::haxe::ui::toolkit::controls::TextInput tmp36 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(599)
		this->inputVerb1TextInputObject = tmp36;
		HX_STACK_LINE(600)
		::haxe::ui::toolkit::controls::TextInput tmp37 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(600)
		tmp37->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerb1","\x0e","\xfd","\x82","\x87"));
		HX_STACK_LINE(601)
		::haxe::ui::toolkit::controls::TextInput tmp38 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(601)
		tmp38->set_percentWidth((int)100);
		HX_STACK_LINE(602)
		::haxe::ui::toolkit::controls::TextInput tmp39 = this->inputVerb1TextInputObject;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(602)
		tmp39->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(603)
		::haxe::ui::toolkit::controls::Text tmp40 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(603)
		this->inputVerb1TextObject = tmp40;
		HX_STACK_LINE(604)
		::haxe::ui::toolkit::controls::Text tmp41 = this->inputVerb1TextObject;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(604)
		tmp41->set_text(HX_HCSTRING("Verb 1","\x90","\x6a","\xce","\xd5"));
		HX_STACK_LINE(605)
		::haxe::ui::toolkit::controls::TextInput tmp42 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(605)
		this->inputVerb2TextInputObject = tmp42;
		HX_STACK_LINE(606)
		::haxe::ui::toolkit::controls::TextInput tmp43 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(606)
		tmp43->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerb2","\x0f","\xfd","\x82","\x87"));
		HX_STACK_LINE(607)
		::haxe::ui::toolkit::controls::TextInput tmp44 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(607)
		tmp44->set_percentWidth((int)100);
		HX_STACK_LINE(608)
		::haxe::ui::toolkit::controls::TextInput tmp45 = this->inputVerb2TextInputObject;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(608)
		tmp45->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(609)
		::haxe::ui::toolkit::controls::Text tmp46 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(609)
		this->inputVerb2TextObject = tmp46;
		HX_STACK_LINE(610)
		::haxe::ui::toolkit::controls::Text tmp47 = this->inputVerb2TextObject;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(610)
		tmp47->set_text(HX_HCSTRING("Verb 2","\x91","\x6a","\xce","\xd5"));
		HX_STACK_LINE(611)
		::haxe::ui::toolkit::controls::TextInput tmp48 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(611)
		this->inputVerb3TextInputObject = tmp48;
		HX_STACK_LINE(612)
		::haxe::ui::toolkit::controls::TextInput tmp49 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(612)
		tmp49->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerb3","\x10","\xfd","\x82","\x87"));
		HX_STACK_LINE(613)
		::haxe::ui::toolkit::controls::TextInput tmp50 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(613)
		tmp50->set_percentWidth((int)100);
		HX_STACK_LINE(614)
		::haxe::ui::toolkit::controls::TextInput tmp51 = this->inputVerb3TextInputObject;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(614)
		tmp51->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(615)
		::haxe::ui::toolkit::controls::Text tmp52 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(615)
		this->inputVerb3TextObject = tmp52;
		HX_STACK_LINE(616)
		::haxe::ui::toolkit::controls::Text tmp53 = this->inputVerb3TextObject;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(616)
		tmp53->set_text(HX_HCSTRING("Verb 3","\x92","\x6a","\xce","\xd5"));
		HX_STACK_LINE(617)
		::haxe::ui::toolkit::controls::TextInput tmp54 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(617)
		this->inputVerbIngTextInputObject = tmp54;
		HX_STACK_LINE(618)
		::haxe::ui::toolkit::controls::TextInput tmp55 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(618)
		tmp55->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerbIng","\xdf","\x72","\x19","\xac"));
		HX_STACK_LINE(619)
		::haxe::ui::toolkit::controls::TextInput tmp56 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(619)
		tmp56->set_percentWidth((int)100);
		HX_STACK_LINE(620)
		::haxe::ui::toolkit::controls::TextInput tmp57 = this->inputVerbIngTextInputObject;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(620)
		tmp57->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(621)
		::haxe::ui::toolkit::controls::Text tmp58 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(621)
		this->inputVerbIngTextObject = tmp58;
		HX_STACK_LINE(622)
		::haxe::ui::toolkit::controls::Text tmp59 = this->inputVerbIngTextObject;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(622)
		tmp59->set_text(HX_HCSTRING("Verb + Ing","\x2c","\x10","\xf6","\xd8"));
		HX_STACK_LINE(623)
		::haxe::ui::toolkit::controls::TextInput tmp60 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(623)
		this->inputVerbSTextInputObject = tmp60;
		HX_STACK_LINE(624)
		::haxe::ui::toolkit::controls::TextInput tmp61 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(624)
		tmp61->set_id(HX_HCSTRING("UIPopupEditObjectTag_InputVerbS","\x30","\xfd","\x82","\x87"));
		HX_STACK_LINE(625)
		::haxe::ui::toolkit::controls::TextInput tmp62 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(625)
		tmp62->set_percentWidth((int)100);
		HX_STACK_LINE(626)
		::haxe::ui::toolkit::controls::TextInput tmp63 = this->inputVerbSTextInputObject;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(626)
		tmp63->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(627)
		::haxe::ui::toolkit::controls::Text tmp64 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(627)
		this->inputVerbSTextObject = tmp64;
		HX_STACK_LINE(628)
		::haxe::ui::toolkit::controls::Text tmp65 = this->inputVerbSTextObject;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(628)
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

