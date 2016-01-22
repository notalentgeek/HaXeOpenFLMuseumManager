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
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectMuseum
#include <UIPopupAddObjectMuseum.h>
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

Void UIPopupAddObjectMuseum_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupAddObjectMuseum","new",0xeaecbc4c,"UIPopupAddObjectMuseum.new","UIPopupAddObjectMuseum.hx",25,0xbf9e50a4)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(41)
	this->popupObject = null();
	HX_STACK_LINE(40)
	this->nameFullTextInputObject = null();
	HX_STACK_LINE(39)
	this->nameAltTextInputObject = null();
	HX_STACK_LINE(38)
	this->listSelectorTypePrevInt = (int)-1;
	HX_STACK_LINE(37)
	this->listSelectorTypeObject = null();
	HX_STACK_LINE(36)
	this->listSelectorTypeInt = (int)-1;
	HX_STACK_LINE(33)
	this->listSelectorTagStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(32)
	this->listSelectorParentObject = null();
	HX_STACK_LINE(31)
	this->gridObject = null();
	HX_STACK_LINE(30)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(29)
	this->buttonObject = null();
	HX_STACK_LINE(45)
	::UIPopupAddObjectMuseum _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(50)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupAddMuseumObjectButton","\x2c","\x7c","\x7e","\xc7"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	this->buttonObject = tmp;
	HX_STACK_LINE(52)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupAddObjectMuseum,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupAddObjectMuseum.hx",52,0xbf9e50a4)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(55)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(56)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(57)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupAddObjectMuseum.xml","\x48","\x02","\xdb","\xee"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupAddObjectMuseum,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupAddObjectMuseum.hx",60,0xbf9e50a4)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(64)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(64)
					if ((tmp6)){
						HX_STACK_LINE(68)
						::String tmp7 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(68)
						::String nameAltString = tmp7;		HX_STACK_VAR(nameAltString,"nameAltString");
						HX_STACK_LINE(69)
						::String tmp8 = _g->nameAltTextInputObject->get_text();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(69)
						::String nameFullString = tmp8;		HX_STACK_VAR(nameFullString,"nameFullString");
						HX_STACK_LINE(70)
						::String tmp9 = _g->listSelectorParentObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(70)
						::String parentNameAltString = tmp9;		HX_STACK_VAR(parentNameAltString,"parentNameAltString");
						HX_STACK_LINE(71)
						Array< ::Dynamic > tagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tagObjectArray,"tagObjectArray");
						HX_STACK_LINE(72)
						::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
						HX_STACK_LINE(73)
						::String tmp10 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(73)
						bool tmp11 = (tmp10 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(73)
						if ((tmp11)){
							HX_STACK_LINE(73)
							typeEnum = ::EnumMuseumType_obj::EXH;
						}
						else{
							HX_STACK_LINE(74)
							::String tmp12 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(74)
							bool tmp13 = (tmp12 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(74)
							if ((tmp13)){
								HX_STACK_LINE(74)
								typeEnum = ::EnumMuseumType_obj::FLR;
							}
							else{
								HX_STACK_LINE(75)
								::String tmp14 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(75)
								bool tmp15 = (tmp14 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(75)
								if ((tmp15)){
									HX_STACK_LINE(75)
									typeEnum = ::EnumMuseumType_obj::ROM;
								}
							}
						}
						HX_STACK_LINE(77)
						bool tmp12 = (typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(77)
						if ((tmp12)){
							HX_STACK_LINE(77)
							parentNameAltString = HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65");
						}
						HX_STACK_LINE(79)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(80)
						while((true)){
							HX_STACK_LINE(80)
							int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(80)
							int tmp14 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(80)
							bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(80)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(80)
							if ((tmp16)){
								HX_STACK_LINE(80)
								break;
							}
							HX_STACK_LINE(81)
							Dynamic tmp17 = _g->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(81)
							::String tmp18 = tmp17->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(81)
							::String tagNameString = tmp18;		HX_STACK_VAR(tagNameString,"tagNameString");
							HX_STACK_LINE(82)
							::CollectionGlobal tmp19 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(82)
							::String tmp20 = tagNameString;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(82)
							::ObjectTag tmp21 = ::CollectionFunction_obj::FindTagObject(tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(82)
							::ObjectTag tagObject = tmp21;		HX_STACK_VAR(tagObject,"tagObject");
							HX_STACK_LINE(83)
							bool tmp22 = (tagObject != null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(83)
							if ((tmp22)){
								HX_STACK_LINE(83)
								::ObjectTag tmp23 = tagObject;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(83)
								tagObjectArray->push(tmp23);
							}
							HX_STACK_LINE(84)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(89)
						bool tmp13 = (nameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(89)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(89)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(89)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(89)
						if ((tmp15)){
							HX_STACK_LINE(89)
							tmp16 = (nameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(89)
							tmp16 = true;
						}
						HX_STACK_LINE(89)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(89)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(89)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(89)
						if ((tmp18)){
							HX_STACK_LINE(89)
							tmp19 = (nameAltString != null());
						}
						else{
							HX_STACK_LINE(89)
							tmp19 = true;
						}
						HX_STACK_LINE(89)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(89)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(89)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(89)
						if ((tmp21)){
							HX_STACK_LINE(90)
							tmp22 = (nameFullString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(89)
							tmp22 = true;
						}
						HX_STACK_LINE(89)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(89)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(89)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(89)
						if ((tmp24)){
							HX_STACK_LINE(90)
							tmp25 = (nameFullString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(89)
							tmp25 = true;
						}
						HX_STACK_LINE(89)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(89)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(89)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(89)
						if ((tmp27)){
							HX_STACK_LINE(90)
							tmp28 = (nameFullString != null());
						}
						else{
							HX_STACK_LINE(89)
							tmp28 = true;
						}
						HX_STACK_LINE(89)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(89)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(89)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(89)
						if ((tmp30)){
							HX_STACK_LINE(91)
							tmp31 = (parentNameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(89)
							tmp31 = true;
						}
						HX_STACK_LINE(89)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(89)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(89)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(89)
						if ((tmp33)){
							HX_STACK_LINE(91)
							tmp34 = (parentNameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(89)
							tmp34 = true;
						}
						HX_STACK_LINE(89)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(89)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(89)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(89)
						if ((tmp36)){
							HX_STACK_LINE(91)
							tmp37 = (parentNameAltString != null());
						}
						else{
							HX_STACK_LINE(89)
							tmp37 = true;
						}
						HX_STACK_LINE(89)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(89)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(89)
						if ((tmp38)){
							HX_STACK_LINE(92)
							tmp39 = (tagObjectArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(89)
							tmp39 = true;
						}
						HX_STACK_LINE(88)
						if ((tmp39)){
							HX_STACK_LINE(96)
							::ObjectMuseum tmp40 = ::ObjectMuseum_obj::__new(_g->collectionGlobalObject,nameAltString,nameFullString,parentNameAltString,tagObjectArray,typeEnum);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(96)
							::ObjectMuseum museumObject = tmp40;		HX_STACK_VAR(museumObject,"museumObject");
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(60)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Add Museum Object","\xee","\xe7","\xad","\x9e"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			_g->popupObject = tmp6;
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::TextInput tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputFullName","\x9f","\x65","\xe9","\x88"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			_g->nameFullTextInputObject = tmp8;
			HX_STACK_LINE(105)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			::haxe::ui::toolkit::controls::TextInput tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputAltName","\x8f","\xc1","\xaf","\x4b"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			_g->nameAltTextInputObject = tmp10;
			HX_STACK_LINE(106)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(106)
			::haxe::ui::toolkit::containers::Grid tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_Grid","\x2b","\xf2","\x1c","\xc1"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			_g->gridObject = tmp12;
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectParentObject","\xca","\x86","\x39","\xd2"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(107)
			_g->listSelectorParentObject = tmp14;
			HX_STACK_LINE(108)
			_g->listSelectorParentObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(109)
			_g->listSelectorParentObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectType","\xfb","\x9c","\x93","\x7e"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(110)
			_g->listSelectorTypeObject = tmp16;
			HX_STACK_LINE(111)
			_g->listSelectorTypeObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(113)
			::CollectionFunction_obj::ClearArray(_g->listSelectorTagStructArray);
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_1","\x6b","\xc6","\xb1","\x32"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::controls::selection::ListSelector listSelectorTagObject = tmp18;		HX_STACK_VAR(listSelectorTagObject,"listSelectorTagObject");
			HX_STACK_LINE(115)
			listSelectorTagObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::controls::Text tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectTagText_1","\xf8","\xfc","\x7f","\xac"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp20;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
			struct _Function_2_2{
				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorTagObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",117,0xbf9e50a4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorTagObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(117)
			Dynamic tmp21 = _Function_2_2::Block(listSelectorTagTextObject,listSelectorTagObject);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(117)
			Dynamic listSelectorTagStruct = tmp21;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
			HX_STACK_LINE(121)
			Dynamic tmp22 = listSelectorTagStruct;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(121)
			_g->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
			HX_STACK_LINE(123)
			::haxe::ui::toolkit::data::IDataSource tmp23 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(123)
			tmp23->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
			HX_STACK_LINE(124)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				int tmp24 = loopCounter1Int;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(126)
				int tmp25 = _g->collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(126)
				bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(126)
				bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(126)
				if ((tmp27)){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(127)
				::haxe::ui::toolkit::data::IDataSource tmp28 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(127)
				::ObjectTag tmp29 = _g->collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(127)
				::String tmp30 = tmp29->GetNameString();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(127)
				tmp28->createFromString(tmp30,null());
				HX_STACK_LINE(128)
				(loopCounter1Int)++;
			}
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
		HX_STACK_FRAME("UIPopupAddObjectMuseum","UpdateVoid",0x1f655bb1,"UIPopupAddObjectMuseum.UpdateVoid","UIPopupAddObjectMuseum.hx",137,0xbf9e50a4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		if ((tmp2)){
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp4 = this->listSelectorParentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(139)
			tmp3 = false;
		}
		HX_STACK_LINE(139)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		if ((tmp3)){
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(139)
			tmp4 = false;
		}
		HX_STACK_LINE(139)
		if ((tmp4)){
			HX_STACK_LINE(141)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			int tmp6 = tmp5->get_selectedIndex();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(141)
			this->listSelectorTypeInt = tmp6;
			HX_STACK_LINE(142)
			int tmp7 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			bool tmp8 = (tmp7 == (int)-1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(142)
			if ((tmp8)){
				HX_STACK_LINE(142)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = this->listSelectorParentObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				tmp9->set_disabled(true);
			}
			HX_STACK_LINE(144)
			int tmp9 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			int tmp10 = this->listSelectorTypePrevInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(144)
			bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(144)
			if ((tmp11)){
				HX_STACK_LINE(145)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->listSelectorParentObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(145)
				::haxe::ui::toolkit::data::IDataSource tmp13 = tmp12->get_dataSource();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(145)
				tmp13->removeAll();
				HX_STACK_LINE(146)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorParentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(146)
				tmp14->set_selectedIndex((int)-1);
				HX_STACK_LINE(148)
				Array< ::Dynamic > tempObjectArray = null();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
				HX_STACK_LINE(149)
				int tmp15 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(149)
				bool tmp16 = (tmp15 == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(149)
				if ((tmp16)){
					HX_STACK_LINE(149)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->listSelectorParentObject;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(149)
					tmp17->set_disabled(false);
					HX_STACK_LINE(149)
					::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(149)
					tempObjectArray = tmp18->GetRoomObjectArray();
				}
				else{
					HX_STACK_LINE(150)
					int tmp17 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(150)
					bool tmp18 = (tmp17 == (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(150)
					if ((tmp18)){
						HX_STACK_LINE(150)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->listSelectorParentObject;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(150)
						tmp19->set_disabled(true);
					}
					else{
						HX_STACK_LINE(151)
						int tmp19 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(151)
						bool tmp20 = (tmp19 == (int)2);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(151)
						if ((tmp20)){
							HX_STACK_LINE(151)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->listSelectorParentObject;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(151)
							tmp21->set_disabled(false);
							HX_STACK_LINE(151)
							::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(151)
							tempObjectArray = tmp22->GetFloorObjectArray();
						}
					}
				}
				HX_STACK_LINE(153)
				int tmp17 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(153)
				int tmp18 = (int)-1;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(153)
				bool tmp19 = (tmp17 != tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(153)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(153)
				if ((tmp19)){
					HX_STACK_LINE(153)
					int tmp21 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(153)
					int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(153)
					tmp20 = (tmp22 != (int)1);
				}
				else{
					HX_STACK_LINE(153)
					tmp20 = false;
				}
				HX_STACK_LINE(153)
				if ((tmp20)){
					HX_STACK_LINE(154)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(155)
					while((true)){
						HX_STACK_LINE(155)
						bool tmp21 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(155)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(155)
						if ((tmp22)){
							HX_STACK_LINE(155)
							break;
						}
						HX_STACK_LINE(156)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->listSelectorParentObject;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(156)
						::haxe::ui::toolkit::data::IDataSource tmp24 = tmp23->get_dataSource();		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(156)
						::ObjectMuseum tmp25 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(156)
						Dynamic tmp26 = tmp25->GetNameStruct();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(156)
						::String tmp27 = tmp26->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(156)
						tmp24->createFromString(tmp27,null());
						HX_STACK_LINE(157)
						(loopCounter1Int)++;
					}
				}
				HX_STACK_LINE(161)
				int tmp21 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(161)
				this->listSelectorTypePrevInt = tmp21;
			}
		}
		HX_STACK_LINE(166)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = this->popupObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(166)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(166)
		if ((tmp6)){
			HX_STACK_LINE(166)
			int tmp8 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(166)
			tmp7 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(166)
			tmp7 = false;
		}
		HX_STACK_LINE(166)
		if ((tmp7)){
			HX_STACK_LINE(171)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(172)
			while((true)){
				HX_STACK_LINE(172)
				int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(172)
				int tmp9 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(172)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(172)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(172)
				if ((tmp11)){
					HX_STACK_LINE(172)
					break;
				}
				HX_STACK_LINE(174)
				Dynamic tmp12 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(174)
				int tmp13 = tmp12->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(174)
				bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(174)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(174)
				if ((tmp14)){
					HX_STACK_LINE(174)
					int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(174)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(174)
					tmp15 = (tmp17 > (int)1);
				}
				else{
					HX_STACK_LINE(174)
					tmp15 = false;
				}
				HX_STACK_LINE(174)
				if ((tmp15)){
					HX_STACK_LINE(175)
					int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(175)
					int tmp17 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(175)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(175)
					bool tmp19 = (tmp16 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(175)
					if ((tmp19)){
						HX_STACK_LINE(176)
						Dynamic tmp20 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(176)
						tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
					else{
						HX_STACK_LINE(179)
						::haxe::ui::toolkit::containers::Grid tmp20 = this->gridObject;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(179)
						Dynamic tmp21 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(179)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = tmp21->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(179)
						tmp20->removeChild(tmp22,null());
						HX_STACK_LINE(180)
						::haxe::ui::toolkit::containers::Grid tmp23 = this->gridObject;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(180)
						Dynamic tmp24 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(180)
						::haxe::ui::toolkit::controls::Text tmp25 = tmp24->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(180)
						tmp23->removeChild(tmp25,null());
						HX_STACK_LINE(181)
						Dynamic tmp26 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(181)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp26);
					}
				}
				else{
					HX_STACK_LINE(184)
					Dynamic tmp16 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(184)
					int tmp17 = tmp16->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(184)
					bool tmp18 = (tmp17 == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(184)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(184)
					if ((tmp18)){
						HX_STACK_LINE(184)
						int tmp20 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(184)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(184)
						tmp19 = (tmp21 == (int)1);
					}
					else{
						HX_STACK_LINE(184)
						tmp19 = false;
					}
					HX_STACK_LINE(184)
					if ((tmp19)){
						HX_STACK_LINE(185)
						Dynamic tmp20 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(185)
						tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
				}
				HX_STACK_LINE(187)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(191)
			int tmp8 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			Dynamic tmp10 = this->listSelectorTagStructArray->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			int tmp11 = tmp10->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			int tmp12 = (int)-1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(191)
			if ((tmp13)){
				HX_STACK_LINE(191)
				int tmp15 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(191)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(191)
				int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(191)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(191)
				Dynamic tmp19 = this->listSelectorTagStructArray->__GetItem(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(191)
				Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(191)
				int tmp21 = tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(191)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(191)
				tmp14 = (tmp22 != (int)0);
			}
			else{
				HX_STACK_LINE(191)
				tmp14 = false;
			}
			HX_STACK_LINE(191)
			if ((tmp14)){
				HX_STACK_LINE(193)
				::haxe::ui::toolkit::controls::Text tmp15 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(193)
				::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp15;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
				HX_STACK_LINE(194)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(194)
				::haxe::ui::toolkit::controls::selection::ListSelector listSelectorTagObject = tmp16;		HX_STACK_VAR(listSelectorTagObject,"listSelectorTagObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorTagObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",195,0xbf9e50a4)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorTagObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(195)
				Dynamic tmp17 = _Function_3_1::Block(listSelectorTagTextObject,listSelectorTagObject);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(195)
				Dynamic listSelectorTagStruct = tmp17;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
				HX_STACK_LINE(199)
				Dynamic tmp18 = listSelectorTagStruct;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(199)
				this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp18);
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::controls::Text tmp19 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(202)
				listSelectorTagTextObject = tmp19;
				HX_STACK_LINE(203)
				listSelectorTagTextObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
				HX_STACK_LINE(204)
				int tmp20 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(204)
				::String tmp21 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTagText_","\x19","\xf9","\x39","\xc6") + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(204)
				listSelectorTagTextObject->set_id(tmp21);
				HX_STACK_LINE(205)
				::haxe::ui::toolkit::containers::Grid tmp22 = this->gridObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(205)
				::haxe::ui::toolkit::controls::Text tmp23 = listSelectorTagTextObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(205)
				tmp22->addChild(tmp23);
				HX_STACK_LINE(207)
				::haxe::ui::toolkit::data::IDataSource tmp24 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(207)
				tmp24->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
				HX_STACK_LINE(209)
				Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
				HX_STACK_LINE(210)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(211)
				while((true)){
					HX_STACK_LINE(211)
					int tmp25 = loopCounter1Int1;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(211)
					::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(211)
					int tmp27 = tmp26->GetTagObjectArray()->length;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(211)
					bool tmp28 = (tmp25 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(211)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(211)
					if ((tmp29)){
						HX_STACK_LINE(211)
						break;
					}
					HX_STACK_LINE(212)
					::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(212)
					::ObjectTag tmp31 = tmp30->GetTagObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(212)
					::String tmp32 = tmp31->GetNameString();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(212)
					tempUsedTagStringArray->push(tmp32);
					HX_STACK_LINE(213)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(215)
				loopCounter1Int1 = (int)1;
				HX_STACK_LINE(216)
				while((true)){
					HX_STACK_LINE(216)
					int tmp25 = loopCounter1Int1;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(216)
					int tmp26 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(216)
					bool tmp27 = (tmp25 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(216)
					bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(216)
					if ((tmp28)){
						HX_STACK_LINE(216)
						break;
					}
					HX_STACK_LINE(218)
					::haxe::ui::toolkit::controls::popups::Popup tmp29 = this->popupObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(218)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp30 = tmp29->get_content();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(218)
					::String tmp31 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + loopCounter1Int1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(218)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp32 = tmp30->findChild(tmp31,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(218)
					::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp32;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
					HX_STACK_LINE(219)
					::String tmp33 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(219)
					tempUsedTagStringArray->remove(tmp33);
					HX_STACK_LINE(220)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(223)
				loopCounter1Int1 = (int)0;
				HX_STACK_LINE(224)
				while((true)){
					HX_STACK_LINE(224)
					bool tmp25 = (loopCounter1Int1 < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(224)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(224)
					if ((tmp26)){
						HX_STACK_LINE(224)
						break;
					}
					HX_STACK_LINE(226)
					::haxe::ui::toolkit::data::IDataSource tmp27 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(226)
					::String tmp28 = tempUsedTagStringArray->__get(loopCounter1Int1);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(226)
					tmp27->createFromString(tmp28,null());
					HX_STACK_LINE(227)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(231)
				int tmp25 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(231)
				::String tmp26 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(231)
				listSelectorTagObject->set_id(tmp26);
				HX_STACK_LINE(232)
				listSelectorTagObject->set_percentWidth((int)100);
				HX_STACK_LINE(233)
				listSelectorTagObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				HX_STACK_LINE(234)
				::haxe::ui::toolkit::containers::Grid tmp27 = this->gridObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(234)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = listSelectorTagObject;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(234)
				tmp27->addChild(tmp28);
				HX_STACK_LINE(235)
				listSelectorTagObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupAddObjectMuseum_obj,UpdateVoid,(void))


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
	HX_MARK_MEMBER_NAME(listSelectorTagStructArray,"listSelectorTagStructArray");
	HX_MARK_MEMBER_NAME(listSelectorTypeInt,"listSelectorTypeInt");
	HX_MARK_MEMBER_NAME(listSelectorTypeObject,"listSelectorTypeObject");
	HX_MARK_MEMBER_NAME(listSelectorTypePrevInt,"listSelectorTypePrevInt");
	HX_MARK_MEMBER_NAME(nameAltTextInputObject,"nameAltTextInputObject");
	HX_MARK_MEMBER_NAME(nameFullTextInputObject,"nameFullTextInputObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_END_CLASS();
}

void UIPopupAddObjectMuseum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(listSelectorParentObject,"listSelectorParentObject");
	HX_VISIT_MEMBER_NAME(listSelectorTagStructArray,"listSelectorTagStructArray");
	HX_VISIT_MEMBER_NAME(listSelectorTypeInt,"listSelectorTypeInt");
	HX_VISIT_MEMBER_NAME(listSelectorTypeObject,"listSelectorTypeObject");
	HX_VISIT_MEMBER_NAME(listSelectorTypePrevInt,"listSelectorTypePrevInt");
	HX_VISIT_MEMBER_NAME(nameAltTextInputObject,"nameAltTextInputObject");
	HX_VISIT_MEMBER_NAME(nameFullTextInputObject,"nameFullTextInputObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
}

Dynamic UIPopupAddObjectMuseum_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 19:
		if (HX_FIELD_EQ(inName,"listSelectorTypeInt") ) { return listSelectorTypeInt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"listSelectorTypeObject") ) { return listSelectorTypeObject; }
		if (HX_FIELD_EQ(inName,"nameAltTextInputObject") ) { return nameAltTextInputObject; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"listSelectorTypePrevInt") ) { return listSelectorTypePrevInt; }
		if (HX_FIELD_EQ(inName,"nameFullTextInputObject") ) { return nameFullTextInputObject; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"listSelectorParentObject") ) { return listSelectorParentObject; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"listSelectorTagStructArray") ) { return listSelectorTagStructArray; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupAddObjectMuseum_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
	case 19:
		if (HX_FIELD_EQ(inName,"listSelectorTypeInt") ) { listSelectorTypeInt=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listSelectorTypeObject") ) { listSelectorTypeObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameAltTextInputObject") ) { nameAltTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"listSelectorTypePrevInt") ) { listSelectorTypePrevInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameFullTextInputObject") ) { nameFullTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"listSelectorParentObject") ) { listSelectorParentObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"listSelectorTagStructArray") ) { listSelectorTagStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
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
	outFields->push(HX_HCSTRING("listSelectorTagStructArray","\x47","\xfd","\x6a","\x8d"));
	outFields->push(HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8"));
	outFields->push(HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37"));
	outFields->push(HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1"));
	outFields->push(HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b"));
	outFields->push(HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorParentObject),HX_HCSTRING("listSelectorParentObject","\xc6","\x90","\xbc","\xfe")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTagStructArray),HX_HCSTRING("listSelectorTagStructArray","\x47","\xfd","\x6a","\x8d")},
	{hx::fsInt,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypeInt),HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypeObject),HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37")},
	{hx::fsInt,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypePrevInt),HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,nameAltTextInputObject),HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,nameFullTextInputObject),HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"),
	HX_HCSTRING("listSelectorParentObject","\xc6","\x90","\xbc","\xfe"),
	HX_HCSTRING("listSelectorTagStructArray","\x47","\xfd","\x6a","\x8d"),
	HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8"),
	HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37"),
	HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1"),
	HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b"),
	HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
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

