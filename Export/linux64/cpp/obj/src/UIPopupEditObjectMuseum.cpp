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
#ifndef INCLUDED_ObjectMuseumUI
#include <ObjectMuseumUI.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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

Void UIPopupEditObjectMuseum_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupEditObjectMuseum","new",0x2418b1e5,"UIPopupEditObjectMuseum.new","UIPopupEditObjectMuseum.hx",23,0xf262d12b)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(40)
	this->tagAmountInt = (int)-1;
	HX_STACK_LINE(39)
	this->selectTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(38)
	this->selectTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(37)
	this->selectTypeListSelectorObject = null();
	HX_STACK_LINE(36)
	this->selectParentNameFullListSelectorObject = null();
	HX_STACK_LINE(35)
	this->selectObjectMuseumListSelectorObject = null();
	HX_STACK_LINE(34)
	this->selectedMuseumPrevObject = null();
	HX_STACK_LINE(33)
	this->selectedMuseumObject = null();
	HX_STACK_LINE(32)
	this->popupObject = null();
	HX_STACK_LINE(31)
	this->nameFullTextInputObject = null();
	HX_STACK_LINE(30)
	this->nameAltTextInputObject = null();
	HX_STACK_LINE(29)
	this->museumButtonObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(28)
	this->listSelectorTagStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(27)
	this->gridObject = null();
	HX_STACK_LINE(26)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(25)
	this->buttonObject = null();
	HX_STACK_LINE(42)
	::UIPopupEditObjectMuseum _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(49)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditMuseumObjectButton","\x05","\xca","\xc5","\x9b"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	this->buttonObject = tmp;
	HX_STACK_LINE(50)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectMuseum,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectMuseum.hx",50,0xf262d12b)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(53)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(54)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(55)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectMuseum.xml","\x37","\x1b","\x0d","\x8a"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(58)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupEditObjectMuseum,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectMuseum.hx",58,0xf262d12b)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(62)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					if ((tmp6)){
						HX_STACK_LINE(66)
						::String tmp7 = _g->nameAltTextInputObject->get_text();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(66)
						::String nameAltString = tmp7;		HX_STACK_VAR(nameAltString,"nameAltString");
						HX_STACK_LINE(67)
						::String tmp8 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(67)
						::String nameFullString = tmp8;		HX_STACK_VAR(nameFullString,"nameFullString");
						HX_STACK_LINE(68)
						::String tmp9 = _g->selectParentNameFullListSelectorObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(68)
						::String parentNameAltString = tmp9;		HX_STACK_VAR(parentNameAltString,"parentNameAltString");
						HX_STACK_LINE(69)
						Array< ::Dynamic > tagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tagObjectArray,"tagObjectArray");
						HX_STACK_LINE(70)
						::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
						HX_STACK_LINE(71)
						::String tmp10 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(71)
						bool tmp11 = (tmp10 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(71)
						if ((tmp11)){
							HX_STACK_LINE(71)
							typeEnum = ::EnumMuseumType_obj::EXH;
						}
						else{
							HX_STACK_LINE(72)
							::String tmp12 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(72)
							bool tmp13 = (tmp12 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(72)
							if ((tmp13)){
								HX_STACK_LINE(72)
								typeEnum = ::EnumMuseumType_obj::FLR;
							}
							else{
								HX_STACK_LINE(73)
								::String tmp14 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(73)
								bool tmp15 = (tmp14 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(73)
								if ((tmp15)){
									HX_STACK_LINE(73)
									typeEnum = ::EnumMuseumType_obj::ROM;
								}
							}
						}
						HX_STACK_LINE(75)
						bool tmp12 = (typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(75)
						if ((tmp12)){
							HX_STACK_LINE(75)
							parentNameAltString = HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65");
						}
						HX_STACK_LINE(77)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(78)
						while((true)){
							HX_STACK_LINE(78)
							int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(78)
							int tmp14 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(78)
							bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(78)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(78)
							if ((tmp16)){
								HX_STACK_LINE(78)
								break;
							}
							HX_STACK_LINE(79)
							Dynamic tmp17 = _g->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(79)
							::String tmp18 = tmp17->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(79)
							::String tagNameString = tmp18;		HX_STACK_VAR(tagNameString,"tagNameString");
							HX_STACK_LINE(80)
							::CollectionGlobal tmp19 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(80)
							::String tmp20 = tagNameString;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(80)
							::ObjectTag tmp21 = ::CollectionFunction_obj::FindTagObject(tmp19,false,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(80)
							::ObjectTag tagObject = tmp21;		HX_STACK_VAR(tagObject,"tagObject");
							HX_STACK_LINE(81)
							bool tmp22 = (tagObject == null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(81)
							if ((tmp22)){
								HX_STACK_LINE(81)
								::CollectionGlobal tmp23 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(81)
								::String tmp24 = tagNameString;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(81)
								::ObjectTag tmp25 = ::CollectionFunction_obj::FindTagObject(tmp23,true,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(81)
								tagObject = tmp25;
							}
							HX_STACK_LINE(82)
							bool tmp23 = (tagObject != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(82)
							if ((tmp23)){
								HX_STACK_LINE(82)
								::ObjectTag tmp24 = tagObject;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(82)
								tagObjectArray->push(tmp24);
							}
							HX_STACK_LINE(83)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(88)
						bool tmp13 = (nameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(88)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(88)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(88)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(88)
						if ((tmp15)){
							HX_STACK_LINE(88)
							tmp16 = (nameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(88)
							tmp16 = true;
						}
						HX_STACK_LINE(88)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(88)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(88)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(88)
						if ((tmp18)){
							HX_STACK_LINE(88)
							tmp19 = (nameAltString != null());
						}
						else{
							HX_STACK_LINE(88)
							tmp19 = true;
						}
						HX_STACK_LINE(88)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(88)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(88)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(88)
						if ((tmp21)){
							HX_STACK_LINE(89)
							tmp22 = (nameFullString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(88)
							tmp22 = true;
						}
						HX_STACK_LINE(88)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(88)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(88)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(88)
						if ((tmp24)){
							HX_STACK_LINE(89)
							tmp25 = (nameFullString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(88)
							tmp25 = true;
						}
						HX_STACK_LINE(88)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(88)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(88)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(88)
						if ((tmp27)){
							HX_STACK_LINE(89)
							tmp28 = (nameFullString != null());
						}
						else{
							HX_STACK_LINE(88)
							tmp28 = true;
						}
						HX_STACK_LINE(88)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(88)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(88)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(88)
						if ((tmp30)){
							HX_STACK_LINE(90)
							tmp31 = (parentNameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(88)
							tmp31 = true;
						}
						HX_STACK_LINE(88)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(88)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(88)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(88)
						if ((tmp33)){
							HX_STACK_LINE(90)
							tmp34 = (parentNameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(88)
							tmp34 = true;
						}
						HX_STACK_LINE(88)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(88)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(88)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(88)
						if ((tmp36)){
							HX_STACK_LINE(90)
							tmp37 = (parentNameAltString != null());
						}
						else{
							HX_STACK_LINE(88)
							tmp37 = true;
						}
						HX_STACK_LINE(88)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(88)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(88)
						if ((tmp38)){
							HX_STACK_LINE(91)
							tmp39 = (tagObjectArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(88)
							tmp39 = true;
						}
						HX_STACK_LINE(87)
						if ((tmp39)){
							HX_STACK_LINE(94)
							::String tmp40 = nameAltString;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(94)
							_g->selectedMuseumObject->SetNameAltStringVoid(tmp40);
							HX_STACK_LINE(95)
							::String tmp41 = nameFullString;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(95)
							_g->selectedMuseumObject->SetNameFullStringVoid(tmp41);
							HX_STACK_LINE(96)
							::String tmp42 = parentNameAltString;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(96)
							_g->selectedMuseumObject->ChangeParentObject(tmp42);
							HX_STACK_LINE(97)
							_g->selectedMuseumObject->SetTagObjectArrayVoid(tagObjectArray);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(58)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Museum Object","\xd7","\xc9","\x9d","\xae"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			_g->popupObject = tmp6;
			HX_STACK_LINE(105)
			_g->selectTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(106)
			_g->selectTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(108)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(108)
			::haxe::ui::toolkit::containers::Grid tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_Grid","\x72","\xe2","\x67","\x8e"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(108)
			_g->gridObject = tmp8;
			HX_STACK_LINE(109)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			::haxe::ui::toolkit::controls::TextInput tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputAltName","\xd6","\xd0","\x5e","\x46"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			_g->nameAltTextInputObject = tmp10;
			HX_STACK_LINE(110)
			_g->nameAltTextInputObject->set_disabled(true);
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::controls::TextInput tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputFullName","\x78","\xb4","\x67","\xe7"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(111)
			_g->nameFullTextInputObject = tmp12;
			HX_STACK_LINE(112)
			_g->nameFullTextInputObject->set_disabled(true);
			HX_STACK_LINE(113)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(113)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectObjectMuseum","\xb9","\x64","\x0b","\xb6"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(113)
			_g->selectObjectMuseumListSelectorObject = tmp14;
			HX_STACK_LINE(114)
			_g->selectObjectMuseumListSelectorObject->set_disabled(true);
			HX_STACK_LINE(115)
			_g->selectObjectMuseumListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectParentObject","\x51","\xc5","\x91","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(116)
			_g->selectParentNameFullListSelectorObject = tmp16;
			HX_STACK_LINE(117)
			_g->selectParentNameFullListSelectorObject->set_disabled(true);
			HX_STACK_LINE(118)
			_g->selectParentNameFullListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectType","\x82","\x7c","\x26","\x07"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(119)
			_g->selectTypeListSelectorObject = tmp18;
			HX_STACK_LINE(120)
			_g->selectTypeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(123)
			::haxe::ui::toolkit::core::Component tmp19 = _e->get_component();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(123)
			Dynamic tmp20 = tmp19->userData;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(123)
			bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(123)
			if ((tmp21)){
				HX_STACK_LINE(124)
				::haxe::ui::toolkit::core::Component tmp22 = _e->get_component();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(124)
				Dynamic tmp23 = tmp22->userData;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(124)
				::String tmp24 = ::Std_obj::string(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(124)
				::String tmp25 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(124)
				::String string = tmp25;		HX_STACK_VAR(string,"string");
				HX_STACK_LINE(125)
				Array< ::String > stringArray = string.split(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));		HX_STACK_VAR(stringArray,"stringArray");
				HX_STACK_LINE(126)
				::String tmp26 = stringArray->__get((int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(126)
				::String nameAltString = tmp26;		HX_STACK_VAR(nameAltString,"nameAltString");
				HX_STACK_LINE(127)
				stringArray = nameAltString.split(HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));
				HX_STACK_LINE(128)
				::String tmp27 = stringArray->__get((int)0);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(128)
				::String enumString = tmp27;		HX_STACK_VAR(enumString,"enumString");
				HX_STACK_LINE(129)
				::String tmp28 = enumString;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(129)
				::EnumMuseumType tmp29 = ::Type_obj::createEnum(hx::ClassOf< ::EnumMuseumType >(),tmp28,null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(129)
				::EnumMuseumType typeEnum = tmp29;		HX_STACK_VAR(typeEnum,"typeEnum");
				HX_STACK_LINE(130)
				::CollectionGlobal tmp30 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(130)
				::EnumMuseumType tmp31 = typeEnum;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(130)
				::String tmp32 = nameAltString;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(130)
				::ObjectMuseum tmp33 = ::CollectionFunction_obj::FindMuseumObject(tmp30,tmp31,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(130)
				::ObjectMuseum museumObject = tmp33;		HX_STACK_VAR(museumObject,"museumObject");
				HX_STACK_LINE(132)
				bool tmp34 = (museumObject != null());		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(132)
				if ((tmp34)){
					HX_STACK_LINE(134)
					_g->selectedMuseumObject = museumObject;
					HX_STACK_LINE(136)
					_g->nameAltTextInputObject->set_disabled(false);
					HX_STACK_LINE(137)
					Dynamic tmp35 = museumObject->GetNameStruct();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(137)
					::String tmp36 = tmp35->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(137)
					_g->nameAltTextInputObject->set_text(tmp36);
					HX_STACK_LINE(138)
					_g->nameFullTextInputObject->set_disabled(false);
					HX_STACK_LINE(139)
					Dynamic tmp37 = museumObject->GetNameStruct();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(139)
					::String tmp38 = tmp37->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(139)
					_g->nameFullTextInputObject->set_text(tmp38);
					HX_STACK_LINE(140)
					_g->selectTypeListSelectorObject->set_disabled(false);
					HX_STACK_LINE(141)
					::String nameFullEnumString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(nameFullEnumString,"nameFullEnumString");
					HX_STACK_LINE(142)
					bool tmp39 = (enumString == HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(142)
					if ((tmp39)){
						HX_STACK_LINE(142)
						nameFullEnumString = HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1");
					}
					else{
						HX_STACK_LINE(143)
						bool tmp40 = (enumString == HX_HCSTRING("FLR","\x4c","\x60","\x35","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(143)
						if ((tmp40)){
							HX_STACK_LINE(143)
							nameFullEnumString = HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95");
						}
						else{
							HX_STACK_LINE(144)
							bool tmp41 = (enumString == HX_HCSTRING("ROM","\xf0","\x7d","\x3e","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(144)
							if ((tmp41)){
								HX_STACK_LINE(144)
								nameFullEnumString = HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36");
							}
						}
					}
					HX_STACK_LINE(145)
					::String tmp40 = nameFullEnumString;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(145)
					_g->selectTypeListSelectorObject->set_text(tmp40);
					HX_STACK_LINE(146)
					::String tmp41 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(146)
					_g->selectTypeListSelectorString = tmp41;
					HX_STACK_LINE(147)
					::String tmp42 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(147)
					_g->selectTypeListSelectorPrevString = tmp42;
					HX_STACK_LINE(149)
					Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
					HX_STACK_LINE(150)
					bool tmp43 = (_g->selectTypeListSelectorString == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(150)
					if ((tmp43)){
						HX_STACK_LINE(150)
						tempObjectArray = _g->collectionGlobalObject->GetExhibitionObjectArray();
					}
					else{
						HX_STACK_LINE(151)
						bool tmp44 = (_g->selectTypeListSelectorString == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(151)
						if ((tmp44)){
							HX_STACK_LINE(151)
							tempObjectArray = _g->collectionGlobalObject->GetFloorObjectArray();
						}
						else{
							HX_STACK_LINE(152)
							bool tmp45 = (_g->selectTypeListSelectorString == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(152)
							if ((tmp45)){
								HX_STACK_LINE(152)
								tempObjectArray = _g->collectionGlobalObject->GetRoomObjectArray();
							}
						}
					}
					HX_STACK_LINE(154)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(155)
					while((true)){
						HX_STACK_LINE(155)
						bool tmp44 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(155)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(155)
						if ((tmp45)){
							HX_STACK_LINE(155)
							break;
						}
						HX_STACK_LINE(156)
						::haxe::ui::toolkit::data::IDataSource tmp46 = _g->selectObjectMuseumListSelectorObject->get_dataSource();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(156)
						::ObjectMuseum tmp47 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(156)
						Dynamic tmp48 = tmp47->GetNameStruct();		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(156)
						::String tmp49 = tmp48->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(156)
						tmp46->createFromString(tmp49,null());
						HX_STACK_LINE(157)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(159)
					_g->selectObjectMuseumListSelectorObject->set_disabled(false);
					HX_STACK_LINE(160)
					::String tmp44 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(160)
					_g->selectObjectMuseumListSelectorObject->set_text(tmp44);
					HX_STACK_LINE(161)
					::ObjectMuseum tmp45 = museumObject->GetParentObject();		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(161)
					bool tmp46 = (tmp45 != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(161)
					if ((tmp46)){
						HX_STACK_LINE(162)
						Dynamic tmp47 = hx::SourceInfo(HX_HCSTRING("UIPopupEditObjectMuseum.hx","\x2b","\xd1","\x62","\xf2"),162,HX_HCSTRING("UIPopupEditObjectMuseum","\x73","\xdb","\x3e","\x16"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(162)
						::haxe::Log_obj::trace(HX_HCSTRING("YEYEYEYE.","\xfe","\x90","\xa5","\x38"),tmp47);
						HX_STACK_LINE(163)
						_g->selectParentNameFullListSelectorObject->set_disabled(false);
						HX_STACK_LINE(164)
						::ObjectMuseum tmp48 = museumObject->GetParentObject();		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(164)
						Dynamic tmp49 = tmp48->GetNameStruct();		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(164)
						::String tmp50 = tmp49->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(164)
						_g->selectParentNameFullListSelectorObject->set_text(tmp50);
					}
				}
			}
			HX_STACK_LINE(169)
			::CollectionFunction_obj::ClearArray(_g->listSelectorTagStructArray);
			HX_STACK_LINE(170)
			::haxe::ui::toolkit::controls::Text tmp22 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(170)
			::haxe::ui::toolkit::controls::Text textObject = tmp22;		HX_STACK_VAR(textObject,"textObject");
			HX_STACK_LINE(171)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(171)
			::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp23;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
			struct _Function_2_2{
				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",172,0xf262d12b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(172)
			Dynamic tmp24 = _Function_2_2::Block(textObject,listSelectorObject);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(172)
			Dynamic listSelectorTagStruct = tmp24;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
			HX_STACK_LINE(176)
			Dynamic tmp25 = listSelectorTagStruct;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(176)
			_g->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp25);
			HX_STACK_LINE(177)
			int tmp26 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(177)
			::String tmp27 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(177)
			textObject->set_id(tmp27);
			HX_STACK_LINE(178)
			textObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
			HX_STACK_LINE(179)
			::haxe::ui::toolkit::controls::Text tmp28 = textObject;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(179)
			_g->gridObject->addChild(tmp28);
			HX_STACK_LINE(180)
			listSelectorObject->set_disabled(true);
			HX_STACK_LINE(181)
			int tmp29 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(181)
			::String tmp30 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(181)
			listSelectorObject->set_id(tmp30);
			HX_STACK_LINE(182)
			listSelectorObject->set_percentWidth((int)100);
			HX_STACK_LINE(183)
			listSelectorObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(184)
			listSelectorObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			HX_STACK_LINE(185)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp31 = listSelectorObject;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(185)
			_g->gridObject->addChild(tmp31);
			HX_STACK_LINE(186)
			listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(50)
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
		HX_STACK_FRAME("UIPopupEditObjectMuseum","UpdateVoid",0xa7f83b38,"UIPopupEditObjectMuseum.UpdateVoid","UIPopupEditObjectMuseum.hx",191,0xf262d12b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(193)
		bool updateMuseumButtonBool = false;		HX_STACK_VAR(updateMuseumButtonBool,"updateMuseumButtonBool");
		HX_STACK_LINE(195)
		int tmp = this->museumButtonObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(196)
		::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		int tmp4 = tmp3->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(196)
		int tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(198)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		int tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		bool tmp9 = (tmp != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(194)
		if ((tmp9)){
			HX_STACK_LINE(200)
			updateMuseumButtonBool = true;
		}
		HX_STACK_LINE(201)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(202)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(202)
			int tmp12 = tmp11->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(202)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(202)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(202)
			if ((tmp14)){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(204)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(204)
			if ((tmp15)){
				HX_STACK_LINE(204)
				break;
			}
			HX_STACK_LINE(205)
			::haxe::ui::toolkit::controls::Button tmp16 = this->museumButtonObjectArray->__get(loopCounter1Int).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(205)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(205)
			::ObjectMuseum tmp18 = tmp17->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(205)
			::ObjectMuseumUI tmp19 = tmp18->GetMuseumUIObject();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(205)
			::haxe::ui::toolkit::controls::Button tmp20 = tmp19->GetButtonObject();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(205)
			bool tmp21 = (tmp16 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(205)
			if ((tmp21)){
				HX_STACK_LINE(206)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(207)
				break;
			}
			HX_STACK_LINE(209)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(212)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(213)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			int tmp12 = tmp11->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			if ((tmp14)){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(215)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(215)
			if ((tmp15)){
				HX_STACK_LINE(215)
				break;
			}
			HX_STACK_LINE(216)
			int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(216)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(216)
			int tmp18 = tmp17->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(216)
			int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(216)
			::haxe::ui::toolkit::controls::Button tmp20 = this->museumButtonObjectArray->__get(tmp19).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(216)
			::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(216)
			::ObjectMuseum tmp22 = tmp21->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(216)
			::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(216)
			::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(216)
			bool tmp25 = (tmp20 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(216)
			if ((tmp25)){
				HX_STACK_LINE(217)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(218)
				break;
			}
			HX_STACK_LINE(220)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(223)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(224)
		while((true)){
			HX_STACK_LINE(224)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(224)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(224)
			int tmp12 = tmp11->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(224)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(224)
			if ((tmp14)){
				HX_STACK_LINE(224)
				break;
			}
			HX_STACK_LINE(226)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(226)
			if ((tmp15)){
				HX_STACK_LINE(226)
				break;
			}
			HX_STACK_LINE(227)
			int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(227)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(227)
			int tmp18 = tmp17->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(227)
			int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(227)
			::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(227)
			int tmp21 = tmp20->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(227)
			int tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(227)
			::haxe::ui::toolkit::controls::Button tmp23 = this->museumButtonObjectArray->__get(tmp22).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(227)
			::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(227)
			::ObjectMuseum tmp25 = tmp24->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(227)
			::ObjectMuseumUI tmp26 = tmp25->GetMuseumUIObject();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(227)
			::haxe::ui::toolkit::controls::Button tmp27 = tmp26->GetButtonObject();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(227)
			bool tmp28 = (tmp23 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(227)
			if ((tmp28)){
				HX_STACK_LINE(228)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(231)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(234)
		bool tmp10 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(234)
		if ((tmp10)){
			HX_STACK_LINE(235)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(236)
			while((true)){
				HX_STACK_LINE(236)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(236)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(236)
				int tmp13 = tmp12->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(236)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(236)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(236)
				if ((tmp15)){
					HX_STACK_LINE(236)
					break;
				}
				HX_STACK_LINE(238)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(238)
				::ObjectMuseum tmp17 = tmp16->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(238)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(238)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(238)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(237)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(237)
				::ObjectMuseum tmp22 = tmp21->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(237)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(237)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(237)
				tmp24->userData = tmp20;
				HX_STACK_LINE(239)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(239)
				::ObjectMuseum tmp26 = tmp25->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(239)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(239)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(239)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(240)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(240)
				::ObjectMuseum tmp30 = tmp29->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(240)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(240)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(240)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(240)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(240)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(241)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(243)
			loopCounter1Int1 = (int)0;
			HX_STACK_LINE(244)
			while((true)){
				HX_STACK_LINE(244)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(244)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(244)
				int tmp13 = tmp12->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(244)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(244)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(244)
				if ((tmp15)){
					HX_STACK_LINE(244)
					break;
				}
				HX_STACK_LINE(246)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(246)
				::ObjectMuseum tmp17 = tmp16->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(246)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(246)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(246)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(245)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(245)
				::ObjectMuseum tmp22 = tmp21->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(245)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(245)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(245)
				tmp24->userData = tmp20;
				HX_STACK_LINE(247)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(247)
				::ObjectMuseum tmp26 = tmp25->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(247)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(247)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(247)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(248)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(248)
				::ObjectMuseum tmp30 = tmp29->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(248)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(248)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(248)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(248)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(248)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(249)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(251)
			loopCounter1Int1 = (int)0;
			HX_STACK_LINE(252)
			while((true)){
				HX_STACK_LINE(252)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(252)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(252)
				int tmp13 = tmp12->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(252)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(252)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(252)
				if ((tmp15)){
					HX_STACK_LINE(252)
					break;
				}
				HX_STACK_LINE(254)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(254)
				::ObjectMuseum tmp17 = tmp16->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(254)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(254)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(254)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(253)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(253)
				::ObjectMuseum tmp22 = tmp21->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(253)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(253)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(253)
				tmp24->userData = tmp20;
				HX_STACK_LINE(255)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(255)
				::ObjectMuseum tmp26 = tmp25->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(255)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(255)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(255)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(256)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(256)
				::ObjectMuseum tmp30 = tmp29->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(256)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(256)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(256)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(256)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(256)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(257)
				(loopCounter1Int1)++;
			}
		}
		HX_STACK_LINE(261)
		::haxe::ui::toolkit::controls::popups::Popup tmp11 = this->popupObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(261)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(261)
		if ((tmp12)){
			HX_STACK_LINE(264)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(264)
			::String tmp14 = tmp13->get_text();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(264)
			bool tmp15 = (tmp14 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(264)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(264)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(264)
			if ((tmp16)){
				HX_STACK_LINE(265)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(265)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(265)
				::String tmp20 = tmp19->get_text();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				tmp17 = (tmp21 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(264)
				tmp17 = true;
			}
			HX_STACK_LINE(263)
			if ((tmp17)){
				HX_STACK_LINE(267)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(267)
				tmp18->set_disabled(true);
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(268)
				tmp19->set_selectedIndex((int)-1);
				HX_STACK_LINE(269)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(269)
				tmp20->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(271)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(271)
				tmp18->set_disabled(false);
			}
			HX_STACK_LINE(273)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(273)
			::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(273)
			bool tmp20 = (tmp19 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(273)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(273)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(273)
			if ((tmp21)){
				HX_STACK_LINE(274)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(274)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(274)
				::String tmp25 = tmp24->get_text();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(274)
				::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(274)
				tmp22 = (tmp26 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(273)
				tmp22 = true;
			}
			HX_STACK_LINE(272)
			if ((tmp22)){
				HX_STACK_LINE(276)
				::haxe::ui::toolkit::controls::TextInput tmp23 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(276)
				tmp23->set_disabled(true);
				HX_STACK_LINE(277)
				::haxe::ui::toolkit::controls::TextInput tmp24 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(277)
				tmp24->set_disabled(true);
				HX_STACK_LINE(278)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(278)
				tmp25->set_disabled(true);
			}
			else{
				HX_STACK_LINE(281)
				::haxe::ui::toolkit::controls::TextInput tmp23 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(281)
				tmp23->set_disabled(false);
				HX_STACK_LINE(282)
				::haxe::ui::toolkit::controls::TextInput tmp24 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(282)
				tmp24->set_disabled(false);
				HX_STACK_LINE(283)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(283)
				tmp25->set_disabled(false);
			}
			HX_STACK_LINE(286)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(286)
			int tmp24 = tmp23->get_selectedIndex();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(286)
			bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(286)
			if ((tmp25)){
				HX_STACK_LINE(288)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(288)
				::String tmp27 = tmp26->get_text();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(288)
				this->selectTypeListSelectorString = tmp27;
				HX_STACK_LINE(289)
				::String tmp28 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(289)
				::String tmp29 = this->selectTypeListSelectorPrevString;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(289)
				bool tmp30 = (tmp28 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(289)
				if ((tmp30)){
					HX_STACK_LINE(291)
					::haxe::ui::toolkit::controls::TextInput tmp31 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(291)
					tmp31->set_disabled(false);
					HX_STACK_LINE(292)
					::haxe::ui::toolkit::controls::TextInput tmp32 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(292)
					tmp32->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(293)
					::haxe::ui::toolkit::controls::TextInput tmp33 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(293)
					tmp33->set_disabled(false);
					HX_STACK_LINE(294)
					::haxe::ui::toolkit::controls::TextInput tmp34 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(294)
					tmp34->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(295)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(295)
					::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(295)
					tmp36->removeAll();
					HX_STACK_LINE(296)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp37 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(296)
					tmp37->set_disabled(false);
					HX_STACK_LINE(297)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp38 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(297)
					tmp38->set_selectedIndex((int)-1);
					HX_STACK_LINE(298)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp39 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(298)
					tmp39->set_disabled(false);
					HX_STACK_LINE(299)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp40 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(299)
					tmp40->set_selectedIndex((int)-1);
					HX_STACK_LINE(301)
					Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
					HX_STACK_LINE(302)
					::String tmp41 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(302)
					bool tmp42 = (tmp41 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(302)
					if ((tmp42)){
						HX_STACK_LINE(302)
						::CollectionGlobal tmp43 = this->collectionGlobalObject;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(302)
						tempObjectArray = tmp43->GetExhibitionObjectArray();
					}
					else{
						HX_STACK_LINE(303)
						::String tmp43 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(303)
						bool tmp44 = (tmp43 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(303)
						if ((tmp44)){
							HX_STACK_LINE(303)
							::CollectionGlobal tmp45 = this->collectionGlobalObject;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(303)
							tempObjectArray = tmp45->GetFloorObjectArray();
						}
						else{
							HX_STACK_LINE(304)
							::String tmp45 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(304)
							bool tmp46 = (tmp45 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(304)
							if ((tmp46)){
								HX_STACK_LINE(304)
								::CollectionGlobal tmp47 = this->collectionGlobalObject;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(304)
								tempObjectArray = tmp47->GetRoomObjectArray();
							}
						}
					}
					HX_STACK_LINE(306)
					int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
					HX_STACK_LINE(307)
					while((true)){
						HX_STACK_LINE(307)
						bool tmp43 = (loopCounter1Int1 < tempObjectArray->length);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(307)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(307)
						if ((tmp44)){
							HX_STACK_LINE(307)
							break;
						}
						HX_STACK_LINE(308)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp45 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(308)
						::haxe::ui::toolkit::data::IDataSource tmp46 = tmp45->get_dataSource();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(308)
						::ObjectMuseum tmp47 = tempObjectArray->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(308)
						Dynamic tmp48 = tmp47->GetNameStruct();		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(308)
						::String tmp49 = tmp48->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(308)
						tmp46->createFromString(tmp49,null());
						HX_STACK_LINE(309)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(312)
					::String tmp43 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(312)
					this->selectTypeListSelectorPrevString = tmp43;
				}
			}
			HX_STACK_LINE(318)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(318)
			::String tmp27 = tmp26->get_text();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(318)
			bool tmp28 = (tmp27 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(318)
			if ((tmp28)){
				HX_STACK_LINE(318)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(318)
				tmp29->set_disabled(true);
			}
			else{
				HX_STACK_LINE(320)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(320)
				::String tmp30 = tmp29->get_text();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(320)
				bool tmp31 = (tmp30 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(320)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(320)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(320)
				if ((tmp32)){
					HX_STACK_LINE(321)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(321)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(321)
					::String tmp36 = tmp35->get_text();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(321)
					::String tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(321)
					tmp33 = (tmp37 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));
				}
				else{
					HX_STACK_LINE(320)
					tmp33 = true;
				}
				HX_STACK_LINE(319)
				if ((tmp33)){
					HX_STACK_LINE(322)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(322)
					tmp34->set_disabled(false);
				}
			}
			HX_STACK_LINE(325)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(325)
			int tmp30 = tmp29->get_selectedIndex();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(325)
			bool tmp31 = (tmp30 != (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(325)
			if ((tmp31)){
				HX_STACK_LINE(327)
				::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
				HX_STACK_LINE(328)
				::String tmp32 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(328)
				bool tmp33 = (tmp32 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(328)
				if ((tmp33)){
					HX_STACK_LINE(328)
					typeEnum = ::EnumMuseumType_obj::EXH;
				}
				else{
					HX_STACK_LINE(329)
					::String tmp34 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(329)
					bool tmp35 = (tmp34 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(329)
					if ((tmp35)){
						HX_STACK_LINE(329)
						typeEnum = ::EnumMuseumType_obj::FLR;
					}
					else{
						HX_STACK_LINE(330)
						::String tmp36 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(330)
						bool tmp37 = (tmp36 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(330)
						if ((tmp37)){
							HX_STACK_LINE(330)
							typeEnum = ::EnumMuseumType_obj::ROM;
						}
					}
				}
				HX_STACK_LINE(332)
				::CollectionGlobal tmp34 = this->collectionGlobalObject;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(332)
				::EnumMuseumType tmp35 = typeEnum;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(332)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp36 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(332)
				::String tmp37 = tmp36->get_text();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(332)
				::ObjectMuseum tmp38 = ::CollectionFunction_obj::FindMuseumObject(tmp34,tmp35,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(332)
				this->selectedMuseumObject = tmp38;
				HX_STACK_LINE(334)
				::ObjectMuseum tmp39 = this->selectedMuseumObject;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(334)
				::ObjectMuseum tmp40 = this->selectedMuseumPrevObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(334)
				bool tmp41 = (tmp39 != tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(334)
				if ((tmp41)){
					HX_STACK_LINE(336)
					int loopCounter1Int1 = (int)1;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
					HX_STACK_LINE(337)
					while((true)){
						HX_STACK_LINE(337)
						int tmp42 = loopCounter1Int1;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(337)
						int tmp43 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(337)
						bool tmp44 = (tmp42 <= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(337)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(337)
						if ((tmp45)){
							HX_STACK_LINE(337)
							break;
						}
						HX_STACK_LINE(339)
						::haxe::ui::toolkit::controls::popups::Popup tmp46 = this->popupObject;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(339)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp47 = tmp46->get_content();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(339)
						::String tmp48 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter1Int1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(339)
						::haxe::ui::toolkit::controls::Text tmp49 = tmp47->findChild(tmp48,hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(339)
						::haxe::ui::toolkit::controls::Text textObject = tmp49;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(340)
						::haxe::ui::toolkit::controls::popups::Popup tmp50 = this->popupObject;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(340)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp51 = tmp50->get_content();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(340)
						::String tmp52 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int1);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(340)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp53 = tmp51->findChild(tmp52,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(340)
						::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp53;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
						HX_STACK_LINE(341)
						::haxe::ui::toolkit::containers::Grid tmp54 = this->gridObject;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(341)
						::haxe::ui::toolkit::controls::Text tmp55 = textObject;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(341)
						tmp54->removeChild(tmp55,null());
						HX_STACK_LINE(342)
						::haxe::ui::toolkit::containers::Grid tmp56 = this->gridObject;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(342)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp57 = listSelectorObject;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(342)
						tmp56->removeChild(tmp57,null());
						HX_STACK_LINE(343)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(346)
					::CollectionFunction_obj::ClearArray(this->listSelectorTagStructArray);
					HX_STACK_LINE(348)
					::haxe::ui::toolkit::controls::TextInput tmp42 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(348)
					tmp42->set_disabled(false);
					HX_STACK_LINE(349)
					::haxe::ui::toolkit::controls::TextInput tmp43 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(349)
					tmp43->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(350)
					::haxe::ui::toolkit::controls::TextInput tmp44 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(350)
					tmp44->set_disabled(false);
					HX_STACK_LINE(351)
					::haxe::ui::toolkit::controls::TextInput tmp45 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(351)
					tmp45->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(352)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp46 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(352)
					tmp46->set_disabled(false);
					HX_STACK_LINE(353)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp47 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(353)
					tmp47->set_selectedIndex((int)-1);
					HX_STACK_LINE(358)
					int tagAmountInt = (int)0;		HX_STACK_VAR(tagAmountInt,"tagAmountInt");
					HX_STACK_LINE(359)
					::ObjectMuseum tmp48 = this->selectedMuseumObject;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(359)
					int tmp49 = tmp48->GetTagObjectArray()->length;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(359)
					tagAmountInt = tmp49;
					HX_STACK_LINE(360)
					loopCounter1Int1 = (int)0;
					HX_STACK_LINE(361)
					while((true)){
						HX_STACK_LINE(361)
						bool tmp50 = (loopCounter1Int1 < tagAmountInt);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(361)
						bool tmp51 = !(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(361)
						if ((tmp51)){
							HX_STACK_LINE(361)
							break;
						}
						HX_STACK_LINE(363)
						::haxe::ui::toolkit::controls::Text tmp52 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(363)
						::haxe::ui::toolkit::controls::Text textObject = tmp52;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(364)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp53 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(364)
						::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp53;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",365,0xf262d12b)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
									__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(365)
						Dynamic tmp54 = _Function_5_1::Block(textObject,listSelectorObject);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(365)
						Dynamic listSelectorTagStruct = tmp54;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
						HX_STACK_LINE(371)
						Dynamic tmp55 = listSelectorTagStruct;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(371)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp55);
						HX_STACK_LINE(372)
						int tmp56 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(372)
						::String tmp57 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(372)
						textObject->set_id(tmp57);
						HX_STACK_LINE(373)
						textObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
						HX_STACK_LINE(374)
						::haxe::ui::toolkit::containers::Grid tmp58 = this->gridObject;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(374)
						::haxe::ui::toolkit::controls::Text tmp59 = textObject;		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(374)
						tmp58->addChild(tmp59);
						HX_STACK_LINE(375)
						listSelectorObject->set_disabled(false);
						HX_STACK_LINE(376)
						int tmp60 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(376)
						::String tmp61 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(376)
						listSelectorObject->set_id(tmp61);
						HX_STACK_LINE(377)
						listSelectorObject->set_percentWidth((int)100);
						HX_STACK_LINE(380)
						listSelectorObject->set_selectedIndex((int)1);
						HX_STACK_LINE(381)
						::ObjectMuseum tmp62 = this->selectedMuseumObject;		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(381)
						::ObjectTag tmp63 = tmp62->GetTagObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(381)
						::String tmp64 = tmp63->GetNameString();		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(381)
						listSelectorObject->set_text(tmp64);
						HX_STACK_LINE(382)
						::haxe::ui::toolkit::data::IDataSource tmp65 = listSelectorObject->get_dataSource();		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(382)
						tmp65->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
						HX_STACK_LINE(384)
						int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(385)
						while((true)){
							HX_STACK_LINE(385)
							int tmp66 = loopCounter2Int;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(385)
							::CollectionGlobal tmp67 = this->collectionGlobalObject;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(385)
							int tmp68 = tmp67->GetTagObjectArray()->length;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(385)
							bool tmp69 = (tmp66 < tmp68);		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(385)
							bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(385)
							if ((tmp70)){
								HX_STACK_LINE(385)
								break;
							}
							HX_STACK_LINE(387)
							bool matchBool = false;		HX_STACK_VAR(matchBool,"matchBool");
							HX_STACK_LINE(388)
							int loopCounter3Int = (int)0;		HX_STACK_VAR(loopCounter3Int,"loopCounter3Int");
							HX_STACK_LINE(389)
							while((true)){
								HX_STACK_LINE(389)
								int tmp71 = loopCounter3Int;		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(389)
								int tmp72 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(389)
								bool tmp73 = (tmp71 < tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(389)
								bool tmp74 = !(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(389)
								if ((tmp74)){
									HX_STACK_LINE(389)
									break;
								}
								HX_STACK_LINE(391)
								::CollectionGlobal tmp75 = this->collectionGlobalObject;		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(391)
								::ObjectTag tmp76 = tmp75->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp76,"tmp76");
								HX_STACK_LINE(391)
								::String tmp77 = tmp76->GetNameString();		HX_STACK_VAR(tmp77,"tmp77");
								HX_STACK_LINE(391)
								Dynamic tmp78 = this->listSelectorTagStructArray->__GetItem(loopCounter3Int);		HX_STACK_VAR(tmp78,"tmp78");
								HX_STACK_LINE(391)
								::String tmp79 = tmp78->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp79,"tmp79");
								HX_STACK_LINE(391)
								bool tmp80 = (tmp77 == tmp79);		HX_STACK_VAR(tmp80,"tmp80");
								HX_STACK_LINE(391)
								if ((tmp80)){
									HX_STACK_LINE(391)
									matchBool = true;
								}
								HX_STACK_LINE(392)
								(loopCounter3Int)++;
							}
							HX_STACK_LINE(396)
							bool tmp71 = (matchBool == false);		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(396)
							if ((tmp71)){
								HX_STACK_LINE(397)
								::haxe::ui::toolkit::data::IDataSource tmp72 = listSelectorObject->get_dataSource();		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(397)
								::CollectionGlobal tmp73 = this->collectionGlobalObject;		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(397)
								::ObjectTag tmp74 = tmp73->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(397)
								::String tmp75 = tmp74->GetNameString();		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(397)
								tmp72->createFromString(tmp75,null());
							}
							HX_STACK_LINE(400)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(403)
						::haxe::ui::toolkit::containers::Grid tmp66 = this->gridObject;		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(403)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp67 = listSelectorObject;		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(403)
						tmp66->addChild(tmp67);
						HX_STACK_LINE(404)
						listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
						HX_STACK_LINE(406)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(409)
					::haxe::ui::toolkit::controls::TextInput tmp50 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(409)
					::ObjectMuseum tmp51 = this->selectedMuseumObject;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(409)
					Dynamic tmp52 = tmp51->GetNameStruct();		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(409)
					::String tmp53 = tmp52->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(409)
					tmp50->set_text(tmp53);
					HX_STACK_LINE(410)
					::haxe::ui::toolkit::controls::TextInput tmp54 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(410)
					::ObjectMuseum tmp55 = this->selectedMuseumObject;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(410)
					Dynamic tmp56 = tmp55->GetNameStruct();		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(410)
					::String tmp57 = tmp56->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(410)
					tmp54->set_text(tmp57);
					HX_STACK_LINE(411)
					::String tmp58 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(411)
					bool tmp59 = (tmp58 != HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(411)
					if ((tmp59)){
						HX_STACK_LINE(412)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp60 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(412)
						::ObjectMuseum tmp61 = this->selectedMuseumObject;		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(412)
						::ObjectMuseum tmp62 = tmp61->GetParentObject();		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(412)
						Dynamic tmp63 = tmp62->GetNameStruct();		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(412)
						::String tmp64 = tmp63->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(412)
						tmp60->set_text(tmp64);
						HX_STACK_LINE(414)
						Array< ::Dynamic > tempObjectArray = null();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
						HX_STACK_LINE(415)
						::String tmp65 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(415)
						bool tmp66 = (tmp65 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(415)
						if ((tmp66)){
							HX_STACK_LINE(415)
							::CollectionGlobal tmp67 = this->collectionGlobalObject;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(415)
							tempObjectArray = tmp67->GetRoomObjectArray();
						}
						else{
							HX_STACK_LINE(416)
							::String tmp67 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(416)
							bool tmp68 = (tmp67 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(416)
							if ((tmp68)){
								HX_STACK_LINE(416)
								::CollectionGlobal tmp69 = this->collectionGlobalObject;		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(416)
								tempObjectArray = tmp69->GetFloorObjectArray();
							}
						}
						HX_STACK_LINE(418)
						loopCounter1Int1 = (int)0;
						HX_STACK_LINE(419)
						while((true)){
							HX_STACK_LINE(419)
							bool tmp67 = (loopCounter1Int1 < tempObjectArray->length);		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(419)
							bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(419)
							if ((tmp68)){
								HX_STACK_LINE(419)
								break;
							}
							HX_STACK_LINE(421)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp69 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(421)
							::haxe::ui::toolkit::data::IDataSource tmp70 = tmp69->get_dataSource();		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(421)
							::ObjectMuseum tmp71 = tempObjectArray->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(421)
							Dynamic tmp72 = tmp71->GetNameStruct();		HX_STACK_VAR(tmp72,"tmp72");
							HX_STACK_LINE(421)
							::String tmp73 = tmp72->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp73,"tmp73");
							HX_STACK_LINE(421)
							tmp70->createFromString(tmp73,null());
							HX_STACK_LINE(422)
							(loopCounter1Int1)++;
						}
					}
					else{
						HX_STACK_LINE(427)
						::String tmp60 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(427)
						bool tmp61 = (tmp60 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(427)
						if ((tmp61)){
							HX_STACK_LINE(427)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp62 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(427)
							tmp62->set_disabled(true);
						}
					}
					HX_STACK_LINE(429)
					::ObjectMuseum tmp60 = this->selectedMuseumObject;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(429)
					this->selectedMuseumPrevObject = tmp60;
				}
			}
		}
		HX_STACK_LINE(437)
		::haxe::ui::toolkit::controls::popups::Popup tmp13 = this->popupObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(437)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(437)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(437)
		if ((tmp14)){
			HX_STACK_LINE(437)
			int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(437)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(437)
			tmp15 = (tmp17 > (int)0);
		}
		else{
			HX_STACK_LINE(437)
			tmp15 = false;
		}
		HX_STACK_LINE(437)
		if ((tmp15)){
			HX_STACK_LINE(443)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(444)
			while((true)){
				HX_STACK_LINE(444)
				int tmp16 = loopCounter1Int1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(444)
				int tmp17 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(444)
				bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(444)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(444)
				if ((tmp19)){
					HX_STACK_LINE(444)
					break;
				}
				HX_STACK_LINE(447)
				int tmp20 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(447)
				bool tmp21 = (tmp20 > (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(447)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(447)
				if ((tmp21)){
					HX_STACK_LINE(448)
					Dynamic tmp23 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(448)
					Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(448)
					int tmp25 = tmp24->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(448)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(448)
					tmp22 = (tmp26 == (int)0);
				}
				else{
					HX_STACK_LINE(447)
					tmp22 = false;
				}
				HX_STACK_LINE(446)
				if ((tmp22)){
					HX_STACK_LINE(450)
					int tmp23 = loopCounter1Int1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(450)
					int tmp24 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(450)
					int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(450)
					bool tmp26 = (tmp23 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(450)
					if ((tmp26)){
						HX_STACK_LINE(451)
						Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(451)
						tmp27->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
					else{
						HX_STACK_LINE(454)
						::haxe::ui::toolkit::containers::Grid tmp27 = this->gridObject;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(454)
						Dynamic tmp28 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(454)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = tmp28->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(454)
						tmp27->removeChild(tmp29,null());
						HX_STACK_LINE(455)
						::haxe::ui::toolkit::containers::Grid tmp30 = this->gridObject;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(455)
						Dynamic tmp31 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(455)
						::haxe::ui::toolkit::controls::Text tmp32 = tmp31->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(455)
						tmp30->removeChild(tmp32,null());
						HX_STACK_LINE(456)
						Dynamic tmp33 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(456)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp33);
						HX_STACK_LINE(459)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(460)
						while((true)){
							HX_STACK_LINE(460)
							int tmp34 = loopCounter2Int;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(460)
							int tmp35 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(460)
							bool tmp36 = (tmp34 <= tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(460)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(460)
							if ((tmp37)){
								HX_STACK_LINE(460)
								break;
							}
							HX_STACK_LINE(462)
							int tmp38 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(462)
							Dynamic tmp39 = this->listSelectorTagStructArray->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(462)
							::String tmp40 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter2Int);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(462)
							tmp39->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp40);
							HX_STACK_LINE(463)
							int tmp41 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(463)
							Dynamic tmp42 = this->listSelectorTagStructArray->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(463)
							::String tmp43 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter2Int);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(463)
							tmp42->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp43);
							HX_STACK_LINE(464)
							(loopCounter2Int)++;
						}
					}
				}
				else{
					HX_STACK_LINE(469)
					Dynamic tmp23 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(469)
					int tmp24 = tmp23->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(469)
					bool tmp25 = (tmp24 == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(469)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(469)
					if ((tmp25)){
						HX_STACK_LINE(469)
						int tmp27 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(469)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(469)
						tmp26 = (tmp28 == (int)1);
					}
					else{
						HX_STACK_LINE(469)
						tmp26 = false;
					}
					HX_STACK_LINE(469)
					if ((tmp26)){
						HX_STACK_LINE(470)
						Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(470)
						tmp27->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
				}
				HX_STACK_LINE(472)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(476)
			int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(476)
			int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(476)
			Dynamic tmp18 = this->listSelectorTagStructArray->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(476)
			int tmp19 = tmp18->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(476)
			int tmp20 = (int)-1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(476)
			bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(476)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(476)
			if ((tmp21)){
				HX_STACK_LINE(476)
				int tmp23 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(476)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(476)
				int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(476)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(476)
				Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(476)
				Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(476)
				int tmp29 = tmp28->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(476)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(476)
				tmp22 = (tmp30 != (int)0);
			}
			else{
				HX_STACK_LINE(476)
				tmp22 = false;
			}
			HX_STACK_LINE(476)
			if ((tmp22)){
				HX_STACK_LINE(478)
				::haxe::ui::toolkit::controls::Text tmp23 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(478)
				::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp23;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
				HX_STACK_LINE(479)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(479)
				::haxe::ui::toolkit::controls::selection::ListSelector listSelectorTagObject = tmp24;		HX_STACK_VAR(listSelectorTagObject,"listSelectorTagObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorTagObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",480,0xf262d12b)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorTagObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(480)
				Dynamic tmp25 = _Function_3_1::Block(listSelectorTagTextObject,listSelectorTagObject);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(480)
				Dynamic listSelectorTagStruct = tmp25;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
				HX_STACK_LINE(484)
				Dynamic tmp26 = listSelectorTagStruct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(484)
				this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
				HX_STACK_LINE(487)
				::haxe::ui::toolkit::controls::Text tmp27 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(487)
				listSelectorTagTextObject = tmp27;
				HX_STACK_LINE(488)
				listSelectorTagTextObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
				HX_STACK_LINE(489)
				int tmp28 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(489)
				::String tmp29 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(489)
				listSelectorTagTextObject->set_id(tmp29);
				HX_STACK_LINE(490)
				::haxe::ui::toolkit::containers::Grid tmp30 = this->gridObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(490)
				::haxe::ui::toolkit::controls::Text tmp31 = listSelectorTagTextObject;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(490)
				tmp30->addChild(tmp31);
				HX_STACK_LINE(492)
				::haxe::ui::toolkit::data::IDataSource tmp32 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(492)
				tmp32->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
				HX_STACK_LINE(494)
				int tmp33 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(494)
				::String tmp34 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(494)
				listSelectorTagObject->set_id(tmp34);
				HX_STACK_LINE(495)
				listSelectorTagObject->set_percentWidth((int)100);
				HX_STACK_LINE(496)
				listSelectorTagObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				HX_STACK_LINE(497)
				::haxe::ui::toolkit::containers::Grid tmp35 = this->gridObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(497)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp36 = listSelectorTagObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(497)
				tmp35->addChild(tmp36);
				HX_STACK_LINE(499)
				Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
				HX_STACK_LINE(501)
				int loopCounter1Int2 = (int)0;		HX_STACK_VAR(loopCounter1Int2,"loopCounter1Int2");
				HX_STACK_LINE(502)
				while((true)){
					HX_STACK_LINE(502)
					int tmp37 = loopCounter1Int2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(502)
					::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(502)
					int tmp39 = tmp38->GetTagObjectArray()->length;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(502)
					bool tmp40 = (tmp37 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(502)
					bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(502)
					if ((tmp41)){
						HX_STACK_LINE(502)
						break;
					}
					HX_STACK_LINE(503)
					::CollectionGlobal tmp42 = this->collectionGlobalObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(503)
					::ObjectTag tmp43 = tmp42->GetTagObjectArray()->__get(loopCounter1Int2).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(503)
					::String tmp44 = tmp43->GetNameString();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(503)
					tempUsedTagStringArray->push(tmp44);
					HX_STACK_LINE(504)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(507)
				loopCounter1Int2 = (int)1;
				HX_STACK_LINE(508)
				while((true)){
					HX_STACK_LINE(508)
					int tmp37 = loopCounter1Int2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(508)
					int tmp38 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(508)
					bool tmp39 = (tmp37 <= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(508)
					bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(508)
					if ((tmp40)){
						HX_STACK_LINE(508)
						break;
					}
					HX_STACK_LINE(510)
					::haxe::ui::toolkit::controls::popups::Popup tmp41 = this->popupObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(510)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp42 = tmp41->get_content();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(510)
					::String tmp43 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int2);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(510)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp44 = tmp42->findChild(tmp43,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(510)
					::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp44;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
					HX_STACK_LINE(511)
					::String tmp45 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(511)
					tempUsedTagStringArray->remove(tmp45);
					HX_STACK_LINE(512)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(516)
				loopCounter1Int2 = (int)0;
				HX_STACK_LINE(517)
				while((true)){
					HX_STACK_LINE(517)
					bool tmp37 = (loopCounter1Int2 < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(517)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(517)
					if ((tmp38)){
						HX_STACK_LINE(517)
						break;
					}
					HX_STACK_LINE(519)
					::haxe::ui::toolkit::data::IDataSource tmp39 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(519)
					::String tmp40 = tempUsedTagStringArray->__get(loopCounter1Int2);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(519)
					tmp39->createFromString(tmp40,null());
					HX_STACK_LINE(520)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(524)
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
	HX_MARK_MEMBER_NAME(museumButtonObjectArray,"museumButtonObjectArray");
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
	HX_VISIT_MEMBER_NAME(museumButtonObjectArray,"museumButtonObjectArray");
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
		if (HX_FIELD_EQ(inName,"museumButtonObjectArray") ) { return museumButtonObjectArray; }
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
		if (HX_FIELD_EQ(inName,"museumButtonObjectArray") ) { museumButtonObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
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
	outFields->push(HX_HCSTRING("museumButtonObjectArray","\x56","\x2e","\xb8","\x22"));
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
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,museumButtonObjectArray),HX_HCSTRING("museumButtonObjectArray","\x56","\x2e","\xb8","\x22")},
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
	HX_HCSTRING("museumButtonObjectArray","\x56","\x2e","\xb8","\x22"),
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

