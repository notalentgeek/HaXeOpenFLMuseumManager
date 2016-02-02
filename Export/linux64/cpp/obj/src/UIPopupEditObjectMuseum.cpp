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
#ifndef INCLUDED_UIPopupEditObjectMuseum
#include <UIPopupEditObjectMuseum.h>
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

Void UIPopupEditObjectMuseum_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupEditObjectMuseum","new",0x2418b1e5,"UIPopupEditObjectMuseum.new","UIPopupEditObjectMuseum.hx",23,0xf262d12b)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(39)
	this->tagAmountInt = (int)-1;
	HX_STACK_LINE(38)
	this->selectTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(37)
	this->selectTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(36)
	this->selectTypeListSelectorObject = null();
	HX_STACK_LINE(35)
	this->selectParentNameFullListSelectorObject = null();
	HX_STACK_LINE(34)
	this->selectObjectMuseumListSelectorObject = null();
	HX_STACK_LINE(33)
	this->selectedMuseumPrevObject = null();
	HX_STACK_LINE(32)
	this->selectedMuseumObject = null();
	HX_STACK_LINE(31)
	this->popupObject = null();
	HX_STACK_LINE(30)
	this->nameFullTextInputObject = null();
	HX_STACK_LINE(29)
	this->nameAltTextInputObject = null();
	HX_STACK_LINE(28)
	this->listSelectorTagStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(27)
	this->gridObject = null();
	HX_STACK_LINE(26)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(25)
	this->buttonObject = null();
	HX_STACK_LINE(41)
	::UIPopupEditObjectMuseum _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(44)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditMuseumObjectButton","\x05","\xca","\xc5","\x9b"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	this->buttonObject = tmp;
	HX_STACK_LINE(45)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectMuseum,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectMuseum.hx",45,0xf262d12b)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(48)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(49)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(50)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectMuseum.xml","\x37","\x1b","\x0d","\x8a"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(53)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupEditObjectMuseum,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectMuseum.hx",53,0xf262d12b)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(57)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					if ((tmp6)){
						HX_STACK_LINE(61)
						::String tmp7 = _g->nameAltTextInputObject->get_text();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(61)
						::String nameAltString = tmp7;		HX_STACK_VAR(nameAltString,"nameAltString");
						HX_STACK_LINE(62)
						::String tmp8 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(62)
						::String nameFullString = tmp8;		HX_STACK_VAR(nameFullString,"nameFullString");
						HX_STACK_LINE(63)
						::String tmp9 = _g->selectParentNameFullListSelectorObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(63)
						::String parentNameAltString = tmp9;		HX_STACK_VAR(parentNameAltString,"parentNameAltString");
						HX_STACK_LINE(64)
						Array< ::Dynamic > tagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tagObjectArray,"tagObjectArray");
						HX_STACK_LINE(65)
						::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
						HX_STACK_LINE(66)
						::String tmp10 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(66)
						bool tmp11 = (tmp10 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(66)
						if ((tmp11)){
							HX_STACK_LINE(66)
							typeEnum = ::EnumMuseumType_obj::EXH;
						}
						else{
							HX_STACK_LINE(67)
							::String tmp12 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(67)
							bool tmp13 = (tmp12 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(67)
							if ((tmp13)){
								HX_STACK_LINE(67)
								typeEnum = ::EnumMuseumType_obj::FLR;
							}
							else{
								HX_STACK_LINE(68)
								::String tmp14 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(68)
								bool tmp15 = (tmp14 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(68)
								if ((tmp15)){
									HX_STACK_LINE(68)
									typeEnum = ::EnumMuseumType_obj::ROM;
								}
							}
						}
						HX_STACK_LINE(70)
						bool tmp12 = (typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(70)
						if ((tmp12)){
							HX_STACK_LINE(70)
							parentNameAltString = HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65");
						}
						HX_STACK_LINE(72)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(73)
						while((true)){
							HX_STACK_LINE(73)
							int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(73)
							int tmp14 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(73)
							bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(73)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(73)
							if ((tmp16)){
								HX_STACK_LINE(73)
								break;
							}
							HX_STACK_LINE(74)
							Dynamic tmp17 = _g->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(74)
							::String tmp18 = tmp17->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(74)
							::String tagNameString = tmp18;		HX_STACK_VAR(tagNameString,"tagNameString");
							HX_STACK_LINE(75)
							::CollectionGlobal tmp19 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(75)
							::String tmp20 = tagNameString;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(75)
							::ObjectTag tmp21 = ::CollectionFunction_obj::FindTagObject(tmp19,false,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(75)
							::ObjectTag tagObject = tmp21;		HX_STACK_VAR(tagObject,"tagObject");
							HX_STACK_LINE(76)
							bool tmp22 = (tagObject == null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(76)
							if ((tmp22)){
								HX_STACK_LINE(76)
								::CollectionGlobal tmp23 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(76)
								::String tmp24 = tagNameString;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(76)
								::ObjectTag tmp25 = ::CollectionFunction_obj::FindTagObject(tmp23,true,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(76)
								tagObject = tmp25;
							}
							HX_STACK_LINE(77)
							bool tmp23 = (tagObject != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(77)
							if ((tmp23)){
								HX_STACK_LINE(77)
								::ObjectTag tmp24 = tagObject;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(77)
								tagObjectArray->push(tmp24);
							}
							HX_STACK_LINE(78)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(83)
						bool tmp13 = (nameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(83)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(83)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(83)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(83)
						if ((tmp15)){
							HX_STACK_LINE(83)
							tmp16 = (nameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(83)
							tmp16 = true;
						}
						HX_STACK_LINE(83)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(83)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(83)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(83)
						if ((tmp18)){
							HX_STACK_LINE(83)
							tmp19 = (nameAltString != null());
						}
						else{
							HX_STACK_LINE(83)
							tmp19 = true;
						}
						HX_STACK_LINE(83)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(83)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(83)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(83)
						if ((tmp21)){
							HX_STACK_LINE(84)
							tmp22 = (nameFullString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(83)
							tmp22 = true;
						}
						HX_STACK_LINE(83)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(83)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(83)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(83)
						if ((tmp24)){
							HX_STACK_LINE(84)
							tmp25 = (nameFullString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(83)
							tmp25 = true;
						}
						HX_STACK_LINE(83)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(83)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(83)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(83)
						if ((tmp27)){
							HX_STACK_LINE(84)
							tmp28 = (nameFullString != null());
						}
						else{
							HX_STACK_LINE(83)
							tmp28 = true;
						}
						HX_STACK_LINE(83)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(83)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(83)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(83)
						if ((tmp30)){
							HX_STACK_LINE(85)
							tmp31 = (parentNameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(83)
							tmp31 = true;
						}
						HX_STACK_LINE(83)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(83)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(83)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(83)
						if ((tmp33)){
							HX_STACK_LINE(85)
							tmp34 = (parentNameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(83)
							tmp34 = true;
						}
						HX_STACK_LINE(83)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(83)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(83)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(83)
						if ((tmp36)){
							HX_STACK_LINE(85)
							tmp37 = (parentNameAltString != null());
						}
						else{
							HX_STACK_LINE(83)
							tmp37 = true;
						}
						HX_STACK_LINE(83)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(83)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(83)
						if ((tmp38)){
							HX_STACK_LINE(86)
							tmp39 = (tagObjectArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(83)
							tmp39 = true;
						}
						HX_STACK_LINE(82)
						if ((tmp39)){
							HX_STACK_LINE(89)
							::String tmp40 = nameAltString;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(89)
							_g->selectedMuseumObject->SetNameAltStringVoid(tmp40);
							HX_STACK_LINE(90)
							::String tmp41 = nameFullString;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(90)
							_g->selectedMuseumObject->SetNameFullStringVoid(tmp41);
							HX_STACK_LINE(91)
							::String tmp42 = parentNameAltString;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(91)
							_g->selectedMuseumObject->ChangeParentObject(tmp42);
							HX_STACK_LINE(92)
							_g->selectedMuseumObject->SetTagObjectArrayVoid(tagObjectArray);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(53)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Museum Object","\xd7","\xc9","\x9d","\xae"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			_g->popupObject = tmp6;
			HX_STACK_LINE(100)
			_g->selectTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(101)
			_g->selectTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(103)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			::haxe::ui::toolkit::containers::Grid tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_Grid","\x72","\xe2","\x67","\x8e"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(103)
			_g->gridObject = tmp8;
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::TextInput tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputAltName","\xd6","\xd0","\x5e","\x46"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(104)
			_g->nameAltTextInputObject = tmp10;
			HX_STACK_LINE(105)
			_g->nameAltTextInputObject->set_disabled(true);
			HX_STACK_LINE(106)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(106)
			::haxe::ui::toolkit::controls::TextInput tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputFullName","\x78","\xb4","\x67","\xe7"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(106)
			_g->nameFullTextInputObject = tmp12;
			HX_STACK_LINE(107)
			_g->nameFullTextInputObject->set_disabled(true);
			HX_STACK_LINE(108)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectObjectMuseum","\xb9","\x64","\x0b","\xb6"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(108)
			_g->selectObjectMuseumListSelectorObject = tmp14;
			HX_STACK_LINE(109)
			_g->selectObjectMuseumListSelectorObject->set_disabled(true);
			HX_STACK_LINE(110)
			_g->selectObjectMuseumListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectParentObject","\x51","\xc5","\x91","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(111)
			_g->selectParentNameFullListSelectorObject = tmp16;
			HX_STACK_LINE(112)
			_g->selectParentNameFullListSelectorObject->set_disabled(true);
			HX_STACK_LINE(113)
			_g->selectParentNameFullListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectType","\x82","\x7c","\x26","\x07"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(114)
			_g->selectTypeListSelectorObject = tmp18;
			HX_STACK_LINE(115)
			_g->selectTypeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(117)
			::CollectionFunction_obj::ClearArray(_g->listSelectorTagStructArray);
			HX_STACK_LINE(118)
			::haxe::ui::toolkit::controls::Text tmp19 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(118)
			::haxe::ui::toolkit::controls::Text textObject = tmp19;		HX_STACK_VAR(textObject,"textObject");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp20;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
			struct _Function_2_2{
				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",120,0xf262d12b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(120)
			Dynamic tmp21 = _Function_2_2::Block(textObject,listSelectorObject);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(120)
			Dynamic listSelectorTagStruct = tmp21;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
			HX_STACK_LINE(124)
			Dynamic tmp22 = listSelectorTagStruct;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(124)
			_g->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
			HX_STACK_LINE(125)
			int tmp23 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(125)
			::String tmp24 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(125)
			textObject->set_id(tmp24);
			HX_STACK_LINE(126)
			textObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::controls::Text tmp25 = textObject;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(127)
			_g->gridObject->addChild(tmp25);
			HX_STACK_LINE(128)
			listSelectorObject->set_disabled(true);
			HX_STACK_LINE(129)
			int tmp26 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(129)
			::String tmp27 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(129)
			listSelectorObject->set_id(tmp27);
			HX_STACK_LINE(130)
			listSelectorObject->set_percentWidth((int)100);
			HX_STACK_LINE(131)
			listSelectorObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(132)
			listSelectorObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			HX_STACK_LINE(133)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = listSelectorObject;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(133)
			_g->gridObject->addChild(tmp28);
			HX_STACK_LINE(134)
			listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(45)
	tmp1->set_onClick( Dynamic(new _Function_1_1(_g)));
}
;
	return null();
}

//UIPopupEditObjectMuseum_obj::~UIPopupEditObjectMuseum_obj() { }

Dynamic UIPopupEditObjectMuseum_obj::__CreateEmpty() { return  new UIPopupEditObjectMuseum_obj; }
hx::ObjectPtr< UIPopupEditObjectMuseum_obj > UIPopupEditObjectMuseum_obj::__new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{  hx::ObjectPtr< UIPopupEditObjectMuseum_obj > _result_ = new UIPopupEditObjectMuseum_obj();
	_result_->__construct(_collectionGlobalObject,_root);
	return _result_;}

Dynamic UIPopupEditObjectMuseum_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPopupEditObjectMuseum_obj > _result_ = new UIPopupEditObjectMuseum_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void UIPopupEditObjectMuseum_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("UIPopupEditObjectMuseum","UpdateVoid",0xa7f83b38,"UIPopupEditObjectMuseum.UpdateVoid","UIPopupEditObjectMuseum.hx",139,0xf262d12b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		if ((tmp1)){
			HX_STACK_LINE(144)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			bool tmp4 = (tmp3 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			if ((tmp6)){
				HX_STACK_LINE(145)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(145)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(145)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(145)
				::String tmp11 = tmp10->get_text();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(145)
				::String tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(145)
				::String tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(145)
				tmp7 = (tmp13 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(144)
				tmp7 = true;
			}
			HX_STACK_LINE(144)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(144)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(144)
			if ((tmp8)){
				HX_STACK_LINE(146)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(146)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(146)
				int tmp12 = tmp11->get_selectedIndex();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(146)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(146)
				tmp9 = (tmp13 == (int)-1);
			}
			else{
				HX_STACK_LINE(144)
				tmp9 = true;
			}
			HX_STACK_LINE(143)
			if ((tmp9)){
				HX_STACK_LINE(148)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(148)
				tmp10->set_disabled(true);
				HX_STACK_LINE(149)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(149)
				tmp11->set_selectedIndex((int)-1);
				HX_STACK_LINE(150)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(150)
				tmp12->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(152)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(152)
				tmp10->set_disabled(false);
			}
			HX_STACK_LINE(154)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(154)
			::String tmp11 = tmp10->get_text();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(154)
			bool tmp12 = (tmp11 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(154)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(154)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(154)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(154)
			if ((tmp14)){
				HX_STACK_LINE(155)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(155)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(155)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(155)
				::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(155)
				::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(155)
				::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(155)
				tmp15 = (tmp21 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(154)
				tmp15 = true;
			}
			HX_STACK_LINE(154)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(154)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(154)
			if ((tmp16)){
				HX_STACK_LINE(156)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(156)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(156)
				int tmp20 = tmp19->get_selectedIndex();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(156)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(156)
				tmp17 = (tmp21 == (int)-1);
			}
			else{
				HX_STACK_LINE(154)
				tmp17 = true;
			}
			HX_STACK_LINE(153)
			if ((tmp17)){
				HX_STACK_LINE(158)
				::haxe::ui::toolkit::controls::TextInput tmp18 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(158)
				tmp18->set_disabled(true);
				HX_STACK_LINE(159)
				::haxe::ui::toolkit::controls::TextInput tmp19 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(159)
				tmp19->set_disabled(true);
				HX_STACK_LINE(160)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(160)
				tmp20->set_disabled(true);
			}
			else{
				HX_STACK_LINE(163)
				::haxe::ui::toolkit::controls::TextInput tmp18 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(163)
				tmp18->set_disabled(false);
				HX_STACK_LINE(164)
				::haxe::ui::toolkit::controls::TextInput tmp19 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(164)
				tmp19->set_disabled(false);
				HX_STACK_LINE(165)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(165)
				tmp20->set_disabled(false);
			}
			HX_STACK_LINE(168)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(168)
			int tmp19 = tmp18->get_selectedIndex();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(168)
			bool tmp20 = (tmp19 != (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(168)
			if ((tmp20)){
				HX_STACK_LINE(170)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(170)
				::String tmp22 = tmp21->get_text();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(170)
				this->selectTypeListSelectorString = tmp22;
				HX_STACK_LINE(171)
				::String tmp23 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(171)
				::String tmp24 = this->selectTypeListSelectorPrevString;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(171)
				bool tmp25 = (tmp23 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(171)
				if ((tmp25)){
					HX_STACK_LINE(173)
					::haxe::ui::toolkit::controls::TextInput tmp26 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(173)
					tmp26->set_disabled(false);
					HX_STACK_LINE(174)
					::haxe::ui::toolkit::controls::TextInput tmp27 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(174)
					tmp27->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(175)
					::haxe::ui::toolkit::controls::TextInput tmp28 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(175)
					tmp28->set_disabled(false);
					HX_STACK_LINE(176)
					::haxe::ui::toolkit::controls::TextInput tmp29 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(176)
					tmp29->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(177)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(177)
					::haxe::ui::toolkit::data::IDataSource tmp31 = tmp30->get_dataSource();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(177)
					tmp31->removeAll();
					HX_STACK_LINE(178)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp32 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(178)
					tmp32->set_disabled(false);
					HX_STACK_LINE(179)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp33 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(179)
					tmp33->set_selectedIndex((int)-1);
					HX_STACK_LINE(180)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(180)
					tmp34->set_disabled(false);
					HX_STACK_LINE(181)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(181)
					tmp35->set_selectedIndex((int)-1);
					HX_STACK_LINE(183)
					Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
					HX_STACK_LINE(184)
					::String tmp36 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(184)
					bool tmp37 = (tmp36 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(184)
					if ((tmp37)){
						HX_STACK_LINE(184)
						::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(184)
						tempObjectArray = tmp38->GetExhibitionObjectArray();
					}
					else{
						HX_STACK_LINE(185)
						::String tmp38 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(185)
						bool tmp39 = (tmp38 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(185)
						if ((tmp39)){
							HX_STACK_LINE(185)
							::CollectionGlobal tmp40 = this->collectionGlobalObject;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(185)
							tempObjectArray = tmp40->GetFloorObjectArray();
						}
						else{
							HX_STACK_LINE(186)
							::String tmp40 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(186)
							bool tmp41 = (tmp40 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(186)
							if ((tmp41)){
								HX_STACK_LINE(186)
								::CollectionGlobal tmp42 = this->collectionGlobalObject;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(186)
								tempObjectArray = tmp42->GetRoomObjectArray();
							}
						}
					}
					HX_STACK_LINE(188)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(189)
					while((true)){
						HX_STACK_LINE(189)
						bool tmp38 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(189)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(189)
						if ((tmp39)){
							HX_STACK_LINE(189)
							break;
						}
						HX_STACK_LINE(190)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp40 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(190)
						::haxe::ui::toolkit::data::IDataSource tmp41 = tmp40->get_dataSource();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(190)
						::ObjectMuseum tmp42 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(190)
						Dynamic tmp43 = tmp42->GetNameStruct();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(190)
						::String tmp44 = tmp43->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(190)
						tmp41->createFromString(tmp44,null());
						HX_STACK_LINE(191)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(194)
					::String tmp38 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(194)
					this->selectTypeListSelectorPrevString = tmp38;
				}
			}
			HX_STACK_LINE(201)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(201)
			int tmp22 = tmp21->get_selectedIndex();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(201)
			int tmp23 = (int)-1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(201)
			bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(201)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(201)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(201)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(201)
			if ((tmp26)){
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(202)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(202)
				::String tmp31 = tmp30->get_text();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(202)
				::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(202)
				::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(202)
				tmp27 = (tmp33 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));
			}
			else{
				HX_STACK_LINE(201)
				tmp27 = true;
			}
			HX_STACK_LINE(201)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(201)
			bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(201)
			if ((tmp28)){
				HX_STACK_LINE(203)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(203)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(203)
				int tmp32 = tmp31->get_selectedIndex();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(203)
				int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(203)
				tmp29 = (tmp33 == (int)-1);
			}
			else{
				HX_STACK_LINE(201)
				tmp29 = true;
			}
			HX_STACK_LINE(200)
			if ((tmp29)){
				HX_STACK_LINE(204)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(204)
				tmp30->set_disabled(true);
			}
			HX_STACK_LINE(207)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(207)
			int tmp31 = tmp30->get_selectedIndex();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(207)
			bool tmp32 = (tmp31 != (int)-1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(207)
			if ((tmp32)){
				HX_STACK_LINE(209)
				::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
				HX_STACK_LINE(210)
				::String tmp33 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(210)
				bool tmp34 = (tmp33 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(210)
				if ((tmp34)){
					HX_STACK_LINE(210)
					typeEnum = ::EnumMuseumType_obj::EXH;
				}
				else{
					HX_STACK_LINE(211)
					::String tmp35 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(211)
					bool tmp36 = (tmp35 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(211)
					if ((tmp36)){
						HX_STACK_LINE(211)
						typeEnum = ::EnumMuseumType_obj::FLR;
					}
					else{
						HX_STACK_LINE(212)
						::String tmp37 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(212)
						bool tmp38 = (tmp37 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(212)
						if ((tmp38)){
							HX_STACK_LINE(212)
							typeEnum = ::EnumMuseumType_obj::ROM;
						}
					}
				}
				HX_STACK_LINE(214)
				::CollectionGlobal tmp35 = this->collectionGlobalObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(214)
				::EnumMuseumType tmp36 = typeEnum;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(214)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp37 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(214)
				::String tmp38 = tmp37->get_text();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(214)
				::ObjectMuseum tmp39 = ::CollectionFunction_obj::FindMuseumObject(tmp35,tmp36,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(214)
				this->selectedMuseumObject = tmp39;
				HX_STACK_LINE(216)
				::ObjectMuseum tmp40 = this->selectedMuseumObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(216)
				::ObjectMuseum tmp41 = this->selectedMuseumPrevObject;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(216)
				bool tmp42 = (tmp40 != tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(216)
				if ((tmp42)){
					HX_STACK_LINE(218)
					int loopCounter1Int = (int)1;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(219)
					while((true)){
						HX_STACK_LINE(219)
						int tmp43 = loopCounter1Int;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(219)
						int tmp44 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(219)
						bool tmp45 = (tmp43 <= tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(219)
						bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(219)
						if ((tmp46)){
							HX_STACK_LINE(219)
							break;
						}
						HX_STACK_LINE(221)
						::haxe::ui::toolkit::controls::popups::Popup tmp47 = this->popupObject;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(221)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp48 = tmp47->get_content();		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(221)
						::String tmp49 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter1Int);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(221)
						::haxe::ui::toolkit::controls::Text tmp50 = tmp48->findChild(tmp49,hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(221)
						::haxe::ui::toolkit::controls::Text textObject = tmp50;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(222)
						::haxe::ui::toolkit::controls::popups::Popup tmp51 = this->popupObject;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(222)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp52 = tmp51->get_content();		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(222)
						::String tmp53 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(222)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp54 = tmp52->findChild(tmp53,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(222)
						::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp54;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
						HX_STACK_LINE(223)
						::haxe::ui::toolkit::containers::Grid tmp55 = this->gridObject;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(223)
						::haxe::ui::toolkit::controls::Text tmp56 = textObject;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(223)
						tmp55->removeChild(tmp56,null());
						HX_STACK_LINE(224)
						::haxe::ui::toolkit::containers::Grid tmp57 = this->gridObject;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(224)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp58 = listSelectorObject;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(224)
						tmp57->removeChild(tmp58,null());
						HX_STACK_LINE(225)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(228)
					::CollectionFunction_obj::ClearArray(this->listSelectorTagStructArray);
					HX_STACK_LINE(230)
					::haxe::ui::toolkit::controls::TextInput tmp43 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(230)
					tmp43->set_disabled(false);
					HX_STACK_LINE(231)
					::haxe::ui::toolkit::controls::TextInput tmp44 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(231)
					tmp44->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(232)
					::haxe::ui::toolkit::controls::TextInput tmp45 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(232)
					tmp45->set_disabled(false);
					HX_STACK_LINE(233)
					::haxe::ui::toolkit::controls::TextInput tmp46 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(233)
					tmp46->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(234)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp47 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(234)
					tmp47->set_disabled(false);
					HX_STACK_LINE(235)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp48 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(235)
					tmp48->set_selectedIndex((int)-1);
					HX_STACK_LINE(240)
					int tagAmountInt = (int)0;		HX_STACK_VAR(tagAmountInt,"tagAmountInt");
					HX_STACK_LINE(241)
					::ObjectMuseum tmp49 = this->selectedMuseumObject;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(241)
					int tmp50 = tmp49->GetTagObjectArray()->length;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(241)
					tagAmountInt = tmp50;
					HX_STACK_LINE(242)
					loopCounter1Int = (int)0;
					HX_STACK_LINE(243)
					while((true)){
						HX_STACK_LINE(243)
						bool tmp51 = (loopCounter1Int < tagAmountInt);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(243)
						bool tmp52 = !(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(243)
						if ((tmp52)){
							HX_STACK_LINE(243)
							break;
						}
						HX_STACK_LINE(245)
						::haxe::ui::toolkit::controls::Text tmp53 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(245)
						::haxe::ui::toolkit::controls::Text textObject = tmp53;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(246)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp54 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(246)
						::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp54;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",247,0xf262d12b)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
									__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(247)
						Dynamic tmp55 = _Function_5_1::Block(textObject,listSelectorObject);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(247)
						Dynamic listSelectorTagStruct = tmp55;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
						HX_STACK_LINE(253)
						Dynamic tmp56 = listSelectorTagStruct;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(253)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp56);
						HX_STACK_LINE(254)
						int tmp57 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(254)
						::String tmp58 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(254)
						textObject->set_id(tmp58);
						HX_STACK_LINE(255)
						textObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
						HX_STACK_LINE(256)
						::haxe::ui::toolkit::containers::Grid tmp59 = this->gridObject;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(256)
						::haxe::ui::toolkit::controls::Text tmp60 = textObject;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(256)
						tmp59->addChild(tmp60);
						HX_STACK_LINE(257)
						listSelectorObject->set_disabled(false);
						HX_STACK_LINE(258)
						int tmp61 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(258)
						::String tmp62 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(258)
						listSelectorObject->set_id(tmp62);
						HX_STACK_LINE(259)
						listSelectorObject->set_percentWidth((int)100);
						HX_STACK_LINE(262)
						listSelectorObject->set_selectedIndex((int)1);
						HX_STACK_LINE(263)
						::ObjectMuseum tmp63 = this->selectedMuseumObject;		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(263)
						::ObjectTag tmp64 = tmp63->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(263)
						::String tmp65 = tmp64->GetNameString();		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(263)
						listSelectorObject->set_text(tmp65);
						HX_STACK_LINE(264)
						::haxe::ui::toolkit::data::IDataSource tmp66 = listSelectorObject->get_dataSource();		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(264)
						tmp66->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
						HX_STACK_LINE(266)
						int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(267)
						while((true)){
							HX_STACK_LINE(267)
							int tmp67 = loopCounter2Int;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(267)
							::CollectionGlobal tmp68 = this->collectionGlobalObject;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(267)
							int tmp69 = tmp68->GetTagObjectArray()->length;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(267)
							bool tmp70 = (tmp67 < tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(267)
							bool tmp71 = !(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(267)
							if ((tmp71)){
								HX_STACK_LINE(267)
								break;
							}
							HX_STACK_LINE(269)
							bool matchBool = false;		HX_STACK_VAR(matchBool,"matchBool");
							HX_STACK_LINE(270)
							int loopCounter3Int = (int)0;		HX_STACK_VAR(loopCounter3Int,"loopCounter3Int");
							HX_STACK_LINE(271)
							while((true)){
								HX_STACK_LINE(271)
								int tmp72 = loopCounter3Int;		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(271)
								int tmp73 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(271)
								bool tmp74 = (tmp72 < tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(271)
								bool tmp75 = !(tmp74);		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(271)
								if ((tmp75)){
									HX_STACK_LINE(271)
									break;
								}
								HX_STACK_LINE(273)
								::CollectionGlobal tmp76 = this->collectionGlobalObject;		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(273)
								::ObjectTag tmp77 = tmp76->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(273)
								::String tmp78 = tmp77->GetNameString();		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(273)
								Dynamic tmp79 = this->listSelectorTagStructArray->__GetItem(loopCounter3Int);		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(273)
								::String tmp80 = tmp79->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(273)
								bool tmp81 = (tmp78 == tmp80);		HX_STACK_VAR(tmp81,"tmp81");
								HX_STACK_LINE(273)
								if ((tmp81)){
									HX_STACK_LINE(273)
									matchBool = true;
								}
								HX_STACK_LINE(274)
								(loopCounter3Int)++;
							}
							HX_STACK_LINE(278)
							bool tmp72 = (matchBool == false);		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(278)
							if ((tmp72)){
								HX_STACK_LINE(279)
								::haxe::ui::toolkit::data::IDataSource tmp73 = listSelectorObject->get_dataSource();		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(279)
								::CollectionGlobal tmp74 = this->collectionGlobalObject;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(279)
								::ObjectTag tmp75 = tmp74->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(279)
								::String tmp76 = tmp75->GetNameString();		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(279)
								tmp73->createFromString(tmp76,null());
							}
							HX_STACK_LINE(282)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(285)
						::haxe::ui::toolkit::containers::Grid tmp67 = this->gridObject;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(285)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp68 = listSelectorObject;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(285)
						tmp67->addChild(tmp68);
						HX_STACK_LINE(286)
						listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
						HX_STACK_LINE(288)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(291)
					::haxe::ui::toolkit::controls::TextInput tmp51 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(291)
					::ObjectMuseum tmp52 = this->selectedMuseumObject;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(291)
					Dynamic tmp53 = tmp52->GetNameStruct();		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(291)
					::String tmp54 = tmp53->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(291)
					tmp51->set_text(tmp54);
					HX_STACK_LINE(292)
					::haxe::ui::toolkit::controls::TextInput tmp55 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(292)
					::ObjectMuseum tmp56 = this->selectedMuseumObject;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(292)
					Dynamic tmp57 = tmp56->GetNameStruct();		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(292)
					::String tmp58 = tmp57->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(292)
					tmp55->set_text(tmp58);
					HX_STACK_LINE(293)
					::String tmp59 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(293)
					bool tmp60 = (tmp59 != HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(293)
					if ((tmp60)){
						HX_STACK_LINE(294)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp61 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(294)
						::ObjectMuseum tmp62 = this->selectedMuseumObject;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(294)
						::ObjectMuseum tmp63 = tmp62->GetParentObject();		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(294)
						Dynamic tmp64 = tmp63->GetNameStruct();		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(294)
						::String tmp65 = tmp64->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(294)
						tmp61->set_text(tmp65);
						HX_STACK_LINE(296)
						Array< ::Dynamic > tempObjectArray = null();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
						HX_STACK_LINE(297)
						::String tmp66 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(297)
						bool tmp67 = (tmp66 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(297)
						if ((tmp67)){
							HX_STACK_LINE(297)
							::CollectionGlobal tmp68 = this->collectionGlobalObject;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(297)
							tempObjectArray = tmp68->GetRoomObjectArray();
						}
						else{
							HX_STACK_LINE(298)
							::String tmp68 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(298)
							bool tmp69 = (tmp68 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(298)
							if ((tmp69)){
								HX_STACK_LINE(298)
								::CollectionGlobal tmp70 = this->collectionGlobalObject;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(298)
								tempObjectArray = tmp70->GetFloorObjectArray();
							}
						}
						HX_STACK_LINE(300)
						loopCounter1Int = (int)0;
						HX_STACK_LINE(301)
						while((true)){
							HX_STACK_LINE(301)
							bool tmp68 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(301)
							bool tmp69 = !(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(301)
							if ((tmp69)){
								HX_STACK_LINE(301)
								break;
							}
							HX_STACK_LINE(303)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp70 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(303)
							::haxe::ui::toolkit::data::IDataSource tmp71 = tmp70->get_dataSource();		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(303)
							::ObjectMuseum tmp72 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(303)
							Dynamic tmp73 = tmp72->GetNameStruct();		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(303)
							::String tmp74 = tmp73->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp74,"tmp74");
							HX_STACK_LINE(303)
							tmp71->createFromString(tmp74,null());
							HX_STACK_LINE(304)
							(loopCounter1Int)++;
						}
					}
					else{
						HX_STACK_LINE(309)
						::String tmp61 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(309)
						bool tmp62 = (tmp61 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(309)
						if ((tmp62)){
							HX_STACK_LINE(309)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp63 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(309)
							tmp63->set_disabled(true);
						}
					}
					HX_STACK_LINE(311)
					::ObjectMuseum tmp61 = this->selectedMuseumObject;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(311)
					this->selectedMuseumPrevObject = tmp61;
				}
			}
		}
		HX_STACK_LINE(319)
		::haxe::ui::toolkit::controls::popups::Popup tmp2 = this->popupObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		if ((tmp3)){
			HX_STACK_LINE(319)
			int tmp5 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(319)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(319)
			tmp4 = (tmp6 > (int)0);
		}
		else{
			HX_STACK_LINE(319)
			tmp4 = false;
		}
		HX_STACK_LINE(319)
		if ((tmp4)){
			HX_STACK_LINE(325)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(326)
			while((true)){
				HX_STACK_LINE(326)
				int tmp5 = loopCounter1Int;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(326)
				int tmp6 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(326)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(326)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(326)
				if ((tmp8)){
					HX_STACK_LINE(326)
					break;
				}
				HX_STACK_LINE(329)
				int tmp9 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(329)
				bool tmp10 = (tmp9 > (int)1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(329)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(329)
				if ((tmp10)){
					HX_STACK_LINE(330)
					Dynamic tmp12 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(330)
					Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(330)
					int tmp14 = tmp13->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(330)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(330)
					tmp11 = (tmp15 == (int)0);
				}
				else{
					HX_STACK_LINE(329)
					tmp11 = false;
				}
				HX_STACK_LINE(328)
				if ((tmp11)){
					HX_STACK_LINE(332)
					int tmp12 = loopCounter1Int;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(332)
					int tmp13 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(332)
					int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(332)
					bool tmp15 = (tmp12 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(332)
					if ((tmp15)){
						HX_STACK_LINE(333)
						Dynamic tmp16 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(333)
						tmp16->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
					else{
						HX_STACK_LINE(336)
						::haxe::ui::toolkit::containers::Grid tmp16 = this->gridObject;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(336)
						Dynamic tmp17 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(336)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(336)
						tmp16->removeChild(tmp18,null());
						HX_STACK_LINE(337)
						::haxe::ui::toolkit::containers::Grid tmp19 = this->gridObject;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(337)
						Dynamic tmp20 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(337)
						::haxe::ui::toolkit::controls::Text tmp21 = tmp20->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(337)
						tmp19->removeChild(tmp21,null());
						HX_STACK_LINE(338)
						Dynamic tmp22 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(338)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp22);
						HX_STACK_LINE(341)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(342)
						while((true)){
							HX_STACK_LINE(342)
							int tmp23 = loopCounter2Int;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(342)
							int tmp24 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(342)
							bool tmp25 = (tmp23 <= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(342)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(342)
							if ((tmp26)){
								HX_STACK_LINE(342)
								break;
							}
							HX_STACK_LINE(344)
							int tmp27 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(344)
							Dynamic tmp28 = this->listSelectorTagStructArray->__GetItem(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(344)
							::String tmp29 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(344)
							tmp28->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp29);
							HX_STACK_LINE(345)
							int tmp30 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(345)
							Dynamic tmp31 = this->listSelectorTagStructArray->__GetItem(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(345)
							::String tmp32 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(345)
							tmp31->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp32);
							HX_STACK_LINE(346)
							(loopCounter2Int)++;
						}
					}
				}
				else{
					HX_STACK_LINE(351)
					Dynamic tmp12 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(351)
					int tmp13 = tmp12->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(351)
					bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(351)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(351)
					if ((tmp14)){
						HX_STACK_LINE(351)
						int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(351)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(351)
						tmp15 = (tmp17 == (int)1);
					}
					else{
						HX_STACK_LINE(351)
						tmp15 = false;
					}
					HX_STACK_LINE(351)
					if ((tmp15)){
						HX_STACK_LINE(352)
						Dynamic tmp16 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(352)
						tmp16->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
				}
				HX_STACK_LINE(354)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(358)
			int tmp5 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(358)
			Dynamic tmp7 = this->listSelectorTagStructArray->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(358)
			int tmp8 = tmp7->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(358)
			int tmp9 = (int)-1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(358)
			bool tmp10 = (tmp8 != tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(358)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(358)
			if ((tmp10)){
				HX_STACK_LINE(358)
				int tmp12 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(358)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(358)
				int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(358)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(358)
				Dynamic tmp16 = this->listSelectorTagStructArray->__GetItem(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(358)
				Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(358)
				int tmp18 = tmp17->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(358)
				int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(358)
				tmp11 = (tmp19 != (int)0);
			}
			else{
				HX_STACK_LINE(358)
				tmp11 = false;
			}
			HX_STACK_LINE(358)
			if ((tmp11)){
				HX_STACK_LINE(360)
				::haxe::ui::toolkit::controls::Text tmp12 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(360)
				::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp12;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
				HX_STACK_LINE(361)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(361)
				::haxe::ui::toolkit::controls::selection::ListSelector listSelectorTagObject = tmp13;		HX_STACK_VAR(listSelectorTagObject,"listSelectorTagObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorTagObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",362,0xf262d12b)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorTagObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(362)
				Dynamic tmp14 = _Function_3_1::Block(listSelectorTagTextObject,listSelectorTagObject);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(362)
				Dynamic listSelectorTagStruct = tmp14;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
				HX_STACK_LINE(366)
				Dynamic tmp15 = listSelectorTagStruct;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(366)
				this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp15);
				HX_STACK_LINE(369)
				::haxe::ui::toolkit::controls::Text tmp16 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(369)
				listSelectorTagTextObject = tmp16;
				HX_STACK_LINE(370)
				listSelectorTagTextObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
				HX_STACK_LINE(371)
				int tmp17 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(371)
				::String tmp18 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(371)
				listSelectorTagTextObject->set_id(tmp18);
				HX_STACK_LINE(372)
				::haxe::ui::toolkit::containers::Grid tmp19 = this->gridObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(372)
				::haxe::ui::toolkit::controls::Text tmp20 = listSelectorTagTextObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(372)
				tmp19->addChild(tmp20);
				HX_STACK_LINE(374)
				::haxe::ui::toolkit::data::IDataSource tmp21 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(374)
				tmp21->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
				HX_STACK_LINE(376)
				int tmp22 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(376)
				::String tmp23 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(376)
				listSelectorTagObject->set_id(tmp23);
				HX_STACK_LINE(377)
				listSelectorTagObject->set_percentWidth((int)100);
				HX_STACK_LINE(378)
				listSelectorTagObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				HX_STACK_LINE(379)
				::haxe::ui::toolkit::containers::Grid tmp24 = this->gridObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(379)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = listSelectorTagObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(379)
				tmp24->addChild(tmp25);
				HX_STACK_LINE(381)
				Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
				HX_STACK_LINE(383)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(384)
				while((true)){
					HX_STACK_LINE(384)
					int tmp26 = loopCounter1Int1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(384)
					::CollectionGlobal tmp27 = this->collectionGlobalObject;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(384)
					int tmp28 = tmp27->GetTagObjectArray()->length;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(384)
					bool tmp29 = (tmp26 < tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(384)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(384)
					if ((tmp30)){
						HX_STACK_LINE(384)
						break;
					}
					HX_STACK_LINE(385)
					::CollectionGlobal tmp31 = this->collectionGlobalObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(385)
					::ObjectTag tmp32 = tmp31->GetTagObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(385)
					::String tmp33 = tmp32->GetNameString();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(385)
					tempUsedTagStringArray->push(tmp33);
					HX_STACK_LINE(386)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(389)
				loopCounter1Int1 = (int)1;
				HX_STACK_LINE(390)
				while((true)){
					HX_STACK_LINE(390)
					int tmp26 = loopCounter1Int1;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(390)
					int tmp27 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(390)
					bool tmp28 = (tmp26 <= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(390)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(390)
					if ((tmp29)){
						HX_STACK_LINE(390)
						break;
					}
					HX_STACK_LINE(392)
					::haxe::ui::toolkit::controls::popups::Popup tmp30 = this->popupObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(392)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp31 = tmp30->get_content();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(392)
					::String tmp32 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(392)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp33 = tmp31->findChild(tmp32,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(392)
					::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp33;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
					HX_STACK_LINE(394)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = tempListSelectorTagObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(394)
					Dynamic tmp35 = hx::SourceInfo(HX_HCSTRING("UIPopupEditObjectMuseum.hx","\x2b","\xd1","\x62","\xf2"),394,HX_HCSTRING("UIPopupEditObjectMuseum","\x73","\xdb","\x3e","\x16"),HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(394)
					::haxe::Log_obj::trace(tmp34,tmp35);
					HX_STACK_LINE(395)
					::String tmp36 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int1);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(395)
					Dynamic tmp37 = hx::SourceInfo(HX_HCSTRING("UIPopupEditObjectMuseum.hx","\x2b","\xd1","\x62","\xf2"),395,HX_HCSTRING("UIPopupEditObjectMuseum","\x73","\xdb","\x3e","\x16"),HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"));		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(395)
					::haxe::Log_obj::trace(tmp36,tmp37);
					HX_STACK_LINE(396)
					::String tmp38 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(396)
					tempUsedTagStringArray->remove(tmp38);
					HX_STACK_LINE(397)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(401)
				loopCounter1Int1 = (int)0;
				HX_STACK_LINE(402)
				while((true)){
					HX_STACK_LINE(402)
					bool tmp26 = (loopCounter1Int1 < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(402)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(402)
					if ((tmp27)){
						HX_STACK_LINE(402)
						break;
					}
					HX_STACK_LINE(404)
					::haxe::ui::toolkit::data::IDataSource tmp28 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(404)
					::String tmp29 = tempUsedTagStringArray->__get(loopCounter1Int1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(404)
					tmp28->createFromString(tmp29,null());
					HX_STACK_LINE(405)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(409)
				listSelectorTagObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupEditObjectMuseum_obj,UpdateVoid,(void))


UIPopupEditObjectMuseum_obj::UIPopupEditObjectMuseum_obj()
{
}

void UIPopupEditObjectMuseum_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupEditObjectMuseum);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(gridObject,"gridObject");
	HX_MARK_MEMBER_NAME(listSelectorTagStructArray,"listSelectorTagStructArray");
	HX_MARK_MEMBER_NAME(nameAltTextInputObject,"nameAltTextInputObject");
	HX_MARK_MEMBER_NAME(nameFullTextInputObject,"nameFullTextInputObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(selectedMuseumObject,"selectedMuseumObject");
	HX_MARK_MEMBER_NAME(selectedMuseumPrevObject,"selectedMuseumPrevObject");
	HX_MARK_MEMBER_NAME(selectObjectMuseumListSelectorObject,"selectObjectMuseumListSelectorObject");
	HX_MARK_MEMBER_NAME(selectParentNameFullListSelectorObject,"selectParentNameFullListSelectorObject");
	HX_MARK_MEMBER_NAME(selectTypeListSelectorObject,"selectTypeListSelectorObject");
	HX_MARK_MEMBER_NAME(selectTypeListSelectorPrevString,"selectTypeListSelectorPrevString");
	HX_MARK_MEMBER_NAME(selectTypeListSelectorString,"selectTypeListSelectorString");
	HX_MARK_MEMBER_NAME(tagAmountInt,"tagAmountInt");
	HX_MARK_END_CLASS();
}

void UIPopupEditObjectMuseum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(listSelectorTagStructArray,"listSelectorTagStructArray");
	HX_VISIT_MEMBER_NAME(nameAltTextInputObject,"nameAltTextInputObject");
	HX_VISIT_MEMBER_NAME(nameFullTextInputObject,"nameFullTextInputObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(selectedMuseumObject,"selectedMuseumObject");
	HX_VISIT_MEMBER_NAME(selectedMuseumPrevObject,"selectedMuseumPrevObject");
	HX_VISIT_MEMBER_NAME(selectObjectMuseumListSelectorObject,"selectObjectMuseumListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectParentNameFullListSelectorObject,"selectParentNameFullListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectTypeListSelectorObject,"selectTypeListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectTypeListSelectorPrevString,"selectTypeListSelectorPrevString");
	HX_VISIT_MEMBER_NAME(selectTypeListSelectorString,"selectTypeListSelectorString");
	HX_VISIT_MEMBER_NAME(tagAmountInt,"tagAmountInt");
}

Dynamic UIPopupEditObjectMuseum_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"tagAmountInt") ) { return tagAmountInt; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"selectedMuseumObject") ) { return selectedMuseumObject; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"nameAltTextInputObject") ) { return nameAltTextInputObject; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nameFullTextInputObject") ) { return nameFullTextInputObject; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"selectedMuseumPrevObject") ) { return selectedMuseumPrevObject; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"listSelectorTagStructArray") ) { return listSelectorTagStructArray; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorObject") ) { return selectTypeListSelectorObject; }
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorString") ) { return selectTypeListSelectorString; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorPrevString") ) { return selectTypeListSelectorPrevString; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"selectObjectMuseumListSelectorObject") ) { return selectObjectMuseumListSelectorObject; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"selectParentNameFullListSelectorObject") ) { return selectParentNameFullListSelectorObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupEditObjectMuseum_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
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
		if (HX_FIELD_EQ(inName,"tagAmountInt") ) { tagAmountInt=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"selectedMuseumObject") ) { selectedMuseumObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nameAltTextInputObject") ) { nameAltTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nameFullTextInputObject") ) { nameFullTextInputObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"selectedMuseumPrevObject") ) { selectedMuseumPrevObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"listSelectorTagStructArray") ) { listSelectorTagStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorObject") ) { selectTypeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorString") ) { selectTypeListSelectorString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorPrevString") ) { selectTypeListSelectorPrevString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"selectObjectMuseumListSelectorObject") ) { selectObjectMuseumListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"selectParentNameFullListSelectorObject") ) { selectParentNameFullListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UIPopupEditObjectMuseum_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UIPopupEditObjectMuseum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"));
	outFields->push(HX_HCSTRING("listSelectorTagStructArray","\x47","\xfd","\x6a","\x8d"));
	outFields->push(HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b"));
	outFields->push(HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("selectedMuseumObject","\x2c","\xb6","\x63","\x6a"));
	outFields->push(HX_HCSTRING("selectedMuseumPrevObject","\xff","\xdb","\x6d","\x99"));
	outFields->push(HX_HCSTRING("selectObjectMuseumListSelectorObject","\xa9","\x0f","\x39","\xe5"));
	outFields->push(HX_HCSTRING("selectParentNameFullListSelectorObject","\x3c","\x71","\xa1","\x2d"));
	outFields->push(HX_HCSTRING("selectTypeListSelectorObject","\xb2","\x59","\x24","\xde"));
	outFields->push(HX_HCSTRING("selectTypeListSelectorPrevString","\x97","\x64","\x5e","\x61"));
	outFields->push(HX_HCSTRING("selectTypeListSelectorString","\xc4","\x03","\x15","\xda"));
	outFields->push(HX_HCSTRING("tagAmountInt","\x3d","\xd4","\x48","\x59"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,listSelectorTagStructArray),HX_HCSTRING("listSelectorTagStructArray","\x47","\xfd","\x6a","\x8d")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,nameAltTextInputObject),HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,nameFullTextInputObject),HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,selectedMuseumObject),HX_HCSTRING("selectedMuseumObject","\x2c","\xb6","\x63","\x6a")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,selectedMuseumPrevObject),HX_HCSTRING("selectedMuseumPrevObject","\xff","\xdb","\x6d","\x99")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,selectObjectMuseumListSelectorObject),HX_HCSTRING("selectObjectMuseumListSelectorObject","\xa9","\x0f","\x39","\xe5")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,selectParentNameFullListSelectorObject),HX_HCSTRING("selectParentNameFullListSelectorObject","\x3c","\x71","\xa1","\x2d")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,selectTypeListSelectorObject),HX_HCSTRING("selectTypeListSelectorObject","\xb2","\x59","\x24","\xde")},
	{hx::fsString,(int)offsetof(UIPopupEditObjectMuseum_obj,selectTypeListSelectorPrevString),HX_HCSTRING("selectTypeListSelectorPrevString","\x97","\x64","\x5e","\x61")},
	{hx::fsString,(int)offsetof(UIPopupEditObjectMuseum_obj,selectTypeListSelectorString),HX_HCSTRING("selectTypeListSelectorString","\xc4","\x03","\x15","\xda")},
	{hx::fsInt,(int)offsetof(UIPopupEditObjectMuseum_obj,tagAmountInt),HX_HCSTRING("tagAmountInt","\x3d","\xd4","\x48","\x59")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"),
	HX_HCSTRING("listSelectorTagStructArray","\x47","\xfd","\x6a","\x8d"),
	HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b"),
	HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("selectedMuseumObject","\x2c","\xb6","\x63","\x6a"),
	HX_HCSTRING("selectedMuseumPrevObject","\xff","\xdb","\x6d","\x99"),
	HX_HCSTRING("selectObjectMuseumListSelectorObject","\xa9","\x0f","\x39","\xe5"),
	HX_HCSTRING("selectParentNameFullListSelectorObject","\x3c","\x71","\xa1","\x2d"),
	HX_HCSTRING("selectTypeListSelectorObject","\xb2","\x59","\x24","\xde"),
	HX_HCSTRING("selectTypeListSelectorPrevString","\x97","\x64","\x5e","\x61"),
	HX_HCSTRING("selectTypeListSelectorString","\xc4","\x03","\x15","\xda"),
	HX_HCSTRING("tagAmountInt","\x3d","\xd4","\x48","\x59"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPopupEditObjectMuseum_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPopupEditObjectMuseum_obj::__mClass,"__mClass");
};

#endif

hx::Class UIPopupEditObjectMuseum_obj::__mClass;

void UIPopupEditObjectMuseum_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIPopupEditObjectMuseum","\x73","\xdb","\x3e","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UIPopupEditObjectMuseum_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIPopupEditObjectMuseum_obj >;
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

