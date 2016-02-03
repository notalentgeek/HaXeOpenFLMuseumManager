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
	HX_STACK_LINE(43)
	this->tagAmountInt = (int)-1;
	HX_STACK_LINE(42)
	this->selectTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(41)
	this->selectTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(40)
	this->selectTypeListSelectorObject = null();
	HX_STACK_LINE(39)
	this->selectParentNameFullListSelectorObject = null();
	HX_STACK_LINE(38)
	this->selectObjectMuseumListSelectorObject = null();
	HX_STACK_LINE(37)
	this->selectedMuseumPrevObject = null();
	HX_STACK_LINE(36)
	this->selectedMuseumObject = null();
	HX_STACK_LINE(35)
	this->popupObject = null();
	HX_STACK_LINE(34)
	this->nameFullTextInputObject = null();
	HX_STACK_LINE(33)
	this->nameAltTextInputObject = null();
	HX_STACK_LINE(32)
	this->museumButtonObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(31)
	this->listSelectorTagStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(30)
	this->gridObject = null();
	HX_STACK_LINE(29)
	this->displayVisitorTotalTextObject = null();
	HX_STACK_LINE(28)
	this->displayVisitorCurrentTextObject = null();
	HX_STACK_LINE(27)
	this->displayFullTextObject = null();
	HX_STACK_LINE(26)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(25)
	this->buttonObject = null();
	HX_STACK_LINE(45)
	::UIPopupEditObjectMuseum _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(52)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditMuseumObjectButton","\x05","\xca","\xc5","\x9b"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	this->buttonObject = tmp;
	HX_STACK_LINE(53)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectMuseum,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectMuseum.hx",53,0xf262d12b)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(56)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(57)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(58)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectMuseum.xml","\x37","\x1b","\x0d","\x8a"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupEditObjectMuseum,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectMuseum.hx",61,0xf262d12b)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(65)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(65)
					if ((tmp6)){
						HX_STACK_LINE(69)
						::String tmp7 = _g->nameAltTextInputObject->get_text();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(69)
						::String nameAltString = tmp7;		HX_STACK_VAR(nameAltString,"nameAltString");
						HX_STACK_LINE(70)
						::String tmp8 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(70)
						::String nameFullString = tmp8;		HX_STACK_VAR(nameFullString,"nameFullString");
						HX_STACK_LINE(71)
						::String tmp9 = _g->selectParentNameFullListSelectorObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(71)
						::String parentNameAltString = tmp9;		HX_STACK_VAR(parentNameAltString,"parentNameAltString");
						HX_STACK_LINE(72)
						Array< ::Dynamic > tagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tagObjectArray,"tagObjectArray");
						HX_STACK_LINE(73)
						::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
						HX_STACK_LINE(74)
						::String tmp10 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(74)
						bool tmp11 = (tmp10 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(74)
						if ((tmp11)){
							HX_STACK_LINE(74)
							typeEnum = ::EnumMuseumType_obj::EXH;
						}
						else{
							HX_STACK_LINE(75)
							::String tmp12 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(75)
							bool tmp13 = (tmp12 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(75)
							if ((tmp13)){
								HX_STACK_LINE(75)
								typeEnum = ::EnumMuseumType_obj::FLR;
							}
							else{
								HX_STACK_LINE(76)
								::String tmp14 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(76)
								bool tmp15 = (tmp14 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(76)
								if ((tmp15)){
									HX_STACK_LINE(76)
									typeEnum = ::EnumMuseumType_obj::ROM;
								}
							}
						}
						HX_STACK_LINE(78)
						bool tmp12 = (typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(78)
						if ((tmp12)){
							HX_STACK_LINE(78)
							parentNameAltString = HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65");
						}
						HX_STACK_LINE(80)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(81)
						while((true)){
							HX_STACK_LINE(81)
							int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(81)
							int tmp14 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(81)
							bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(81)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(81)
							if ((tmp16)){
								HX_STACK_LINE(81)
								break;
							}
							HX_STACK_LINE(82)
							Dynamic tmp17 = _g->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(82)
							::String tmp18 = tmp17->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(82)
							::String tagNameString = tmp18;		HX_STACK_VAR(tagNameString,"tagNameString");
							HX_STACK_LINE(83)
							::CollectionGlobal tmp19 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(83)
							::String tmp20 = tagNameString;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(83)
							::ObjectTag tmp21 = ::CollectionFunction_obj::FindTagObject(tmp19,false,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(83)
							::ObjectTag tagObject = tmp21;		HX_STACK_VAR(tagObject,"tagObject");
							HX_STACK_LINE(84)
							bool tmp22 = (tagObject == null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(84)
							if ((tmp22)){
								HX_STACK_LINE(84)
								::CollectionGlobal tmp23 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(84)
								::String tmp24 = tagNameString;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(84)
								::ObjectTag tmp25 = ::CollectionFunction_obj::FindTagObject(tmp23,true,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(84)
								tagObject = tmp25;
							}
							HX_STACK_LINE(85)
							bool tmp23 = (tagObject != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(85)
							if ((tmp23)){
								HX_STACK_LINE(85)
								::ObjectTag tmp24 = tagObject;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(85)
								tagObjectArray->push(tmp24);
							}
							HX_STACK_LINE(86)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(91)
						bool tmp13 = (nameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(91)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(91)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(91)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(91)
						if ((tmp15)){
							HX_STACK_LINE(91)
							tmp16 = (nameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(91)
							tmp16 = true;
						}
						HX_STACK_LINE(91)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(91)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(91)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(91)
						if ((tmp18)){
							HX_STACK_LINE(91)
							tmp19 = (nameAltString != null());
						}
						else{
							HX_STACK_LINE(91)
							tmp19 = true;
						}
						HX_STACK_LINE(91)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(91)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(91)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(91)
						if ((tmp21)){
							HX_STACK_LINE(92)
							tmp22 = (nameFullString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(91)
							tmp22 = true;
						}
						HX_STACK_LINE(91)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(91)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(91)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(91)
						if ((tmp24)){
							HX_STACK_LINE(92)
							tmp25 = (nameFullString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(91)
							tmp25 = true;
						}
						HX_STACK_LINE(91)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(91)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(91)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(91)
						if ((tmp27)){
							HX_STACK_LINE(92)
							tmp28 = (nameFullString != null());
						}
						else{
							HX_STACK_LINE(91)
							tmp28 = true;
						}
						HX_STACK_LINE(91)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(91)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(91)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(91)
						if ((tmp30)){
							HX_STACK_LINE(93)
							tmp31 = (parentNameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(91)
							tmp31 = true;
						}
						HX_STACK_LINE(91)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(91)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(91)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(91)
						if ((tmp33)){
							HX_STACK_LINE(93)
							tmp34 = (parentNameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(91)
							tmp34 = true;
						}
						HX_STACK_LINE(91)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(91)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(91)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(91)
						if ((tmp36)){
							HX_STACK_LINE(93)
							tmp37 = (parentNameAltString != null());
						}
						else{
							HX_STACK_LINE(91)
							tmp37 = true;
						}
						HX_STACK_LINE(91)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(91)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(91)
						if ((tmp38)){
							HX_STACK_LINE(94)
							tmp39 = (tagObjectArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(91)
							tmp39 = true;
						}
						HX_STACK_LINE(90)
						if ((tmp39)){
							HX_STACK_LINE(97)
							::String tmp40 = nameAltString;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(97)
							_g->selectedMuseumObject->SetNameAltStringVoid(tmp40);
							HX_STACK_LINE(98)
							::String tmp41 = nameFullString;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(98)
							_g->selectedMuseumObject->SetNameFullStringVoid(tmp41);
							HX_STACK_LINE(99)
							::String tmp42 = parentNameAltString;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(99)
							_g->selectedMuseumObject->ChangeParentObject(tmp42);
							HX_STACK_LINE(100)
							_g->selectedMuseumObject->SetTagObjectArrayVoid(tagObjectArray);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(61)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Museum Object","\xd7","\xc9","\x9d","\xae"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			_g->popupObject = tmp6;
			HX_STACK_LINE(108)
			_g->selectTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(109)
			_g->selectTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			::haxe::ui::toolkit::controls::Text tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_DisplayFull","\xc5","\x8a","\x07","\xf2"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			_g->displayFullTextObject = tmp8;
			HX_STACK_LINE(112)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(112)
			::haxe::ui::toolkit::controls::Text tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_DisplayVisitorCurrent","\xe1","\x12","\x47","\x4b"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(112)
			_g->displayVisitorCurrentTextObject = tmp10;
			HX_STACK_LINE(113)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			::haxe::ui::toolkit::controls::Text tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_DisplayVisitorTotal","\x6c","\x50","\xdf","\x50"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(113)
			_g->displayVisitorTotalTextObject = tmp12;
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::containers::Grid tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_Grid","\x72","\xe2","\x67","\x8e"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(114)
			_g->gridObject = tmp14;
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::controls::TextInput tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputAltName","\xd6","\xd0","\x5e","\x46"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(115)
			_g->nameAltTextInputObject = tmp16;
			HX_STACK_LINE(116)
			_g->nameAltTextInputObject->set_disabled(true);
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::controls::TextInput tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputFullName","\x78","\xb4","\x67","\xe7"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(117)
			_g->nameFullTextInputObject = tmp18;
			HX_STACK_LINE(118)
			_g->nameFullTextInputObject->set_disabled(true);
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(119)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectObjectMuseum","\xb9","\x64","\x0b","\xb6"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(119)
			_g->selectObjectMuseumListSelectorObject = tmp20;
			HX_STACK_LINE(120)
			_g->selectObjectMuseumListSelectorObject->set_disabled(true);
			HX_STACK_LINE(121)
			_g->selectObjectMuseumListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(122)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp21 = _g->popupObject->get_content();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(122)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = tmp21->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectParentObject","\x51","\xc5","\x91","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(122)
			_g->selectParentNameFullListSelectorObject = tmp22;
			HX_STACK_LINE(123)
			_g->selectParentNameFullListSelectorObject->set_disabled(true);
			HX_STACK_LINE(124)
			_g->selectParentNameFullListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp23 = _g->popupObject->get_content();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = tmp23->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectType","\x82","\x7c","\x26","\x07"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(125)
			_g->selectTypeListSelectorObject = tmp24;
			HX_STACK_LINE(126)
			_g->selectTypeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(129)
			::haxe::ui::toolkit::core::Component tmp25 = _e->get_component();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(129)
			Dynamic tmp26 = tmp25->userData;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(129)
			bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(129)
			if ((tmp27)){
				HX_STACK_LINE(130)
				::haxe::ui::toolkit::core::Component tmp28 = _e->get_component();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(130)
				Dynamic tmp29 = tmp28->userData;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(130)
				::String tmp30 = ::Std_obj::string(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(130)
				::String tmp31 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(130)
				::String string = tmp31;		HX_STACK_VAR(string,"string");
				HX_STACK_LINE(131)
				Array< ::String > stringArray = string.split(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));		HX_STACK_VAR(stringArray,"stringArray");
				HX_STACK_LINE(132)
				::String tmp32 = stringArray->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(132)
				::String nameAltString = tmp32;		HX_STACK_VAR(nameAltString,"nameAltString");
				HX_STACK_LINE(133)
				stringArray = nameAltString.split(HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));
				HX_STACK_LINE(134)
				::String tmp33 = stringArray->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(134)
				::String enumString = tmp33;		HX_STACK_VAR(enumString,"enumString");
				HX_STACK_LINE(135)
				::String tmp34 = enumString;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(135)
				::EnumMuseumType tmp35 = ::Type_obj::createEnum(hx::ClassOf< ::EnumMuseumType >(),tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(135)
				::EnumMuseumType typeEnum = tmp35;		HX_STACK_VAR(typeEnum,"typeEnum");
				HX_STACK_LINE(136)
				::CollectionGlobal tmp36 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(136)
				::EnumMuseumType tmp37 = typeEnum;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(136)
				::String tmp38 = nameAltString;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(136)
				::ObjectMuseum tmp39 = ::CollectionFunction_obj::FindMuseumObject(tmp36,tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(136)
				::ObjectMuseum museumObject = tmp39;		HX_STACK_VAR(museumObject,"museumObject");
				HX_STACK_LINE(138)
				bool tmp40 = (museumObject != null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(138)
				if ((tmp40)){
					HX_STACK_LINE(140)
					_g->selectedMuseumObject = museumObject;
					HX_STACK_LINE(142)
					::String fullString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(fullString,"fullString");
					HX_STACK_LINE(143)
					bool tmp41 = museumObject->GetFullBool();		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(143)
					bool tmp42 = (tmp41 == true);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(143)
					if ((tmp42)){
						HX_STACK_LINE(143)
						fullString = HX_HCSTRING("True","\x6e","\xd3","\xdc","\x37");
					}
					else{
						HX_STACK_LINE(144)
						bool tmp43 = museumObject->GetFullBool();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(144)
						bool tmp44 = (tmp43 == false);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(144)
						if ((tmp44)){
							HX_STACK_LINE(144)
							fullString = HX_HCSTRING("False","\x83","\xa5","\x7c","\x8e");
						}
					}
					HX_STACK_LINE(145)
					::String tmp43 = fullString;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(145)
					_g->displayFullTextObject->set_text(tmp43);
					HX_STACK_LINE(146)
					int tmp44 = museumObject->GetVisitorCurrentInt();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(146)
					::String tmp45 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(146)
					_g->displayVisitorCurrentTextObject->set_text(tmp45);
					HX_STACK_LINE(147)
					int tmp46 = museumObject->GetVisitorTotalInt();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(147)
					::String tmp47 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(147)
					_g->displayVisitorTotalTextObject->set_text(tmp47);
					HX_STACK_LINE(148)
					_g->nameAltTextInputObject->set_disabled(false);
					HX_STACK_LINE(149)
					Dynamic tmp48 = museumObject->GetNameStruct();		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(149)
					::String tmp49 = tmp48->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(149)
					_g->nameAltTextInputObject->set_text(tmp49);
					HX_STACK_LINE(150)
					_g->nameFullTextInputObject->set_disabled(false);
					HX_STACK_LINE(151)
					Dynamic tmp50 = museumObject->GetNameStruct();		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(151)
					::String tmp51 = tmp50->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(151)
					_g->nameFullTextInputObject->set_text(tmp51);
					HX_STACK_LINE(152)
					_g->selectTypeListSelectorObject->set_disabled(false);
					HX_STACK_LINE(153)
					::String nameFullEnumString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(nameFullEnumString,"nameFullEnumString");
					HX_STACK_LINE(154)
					bool tmp52 = (enumString == HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(154)
					if ((tmp52)){
						HX_STACK_LINE(154)
						nameFullEnumString = HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1");
					}
					else{
						HX_STACK_LINE(155)
						bool tmp53 = (enumString == HX_HCSTRING("FLR","\x4c","\x60","\x35","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(155)
						if ((tmp53)){
							HX_STACK_LINE(155)
							nameFullEnumString = HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95");
						}
						else{
							HX_STACK_LINE(156)
							bool tmp54 = (enumString == HX_HCSTRING("ROM","\xf0","\x7d","\x3e","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(156)
							if ((tmp54)){
								HX_STACK_LINE(156)
								nameFullEnumString = HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36");
							}
						}
					}
					HX_STACK_LINE(157)
					::String tmp53 = nameFullEnumString;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(157)
					_g->selectTypeListSelectorObject->set_text(tmp53);
					HX_STACK_LINE(158)
					::String tmp54 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(158)
					_g->selectTypeListSelectorString = tmp54;
					HX_STACK_LINE(159)
					::String tmp55 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(159)
					_g->selectTypeListSelectorPrevString = tmp55;
					HX_STACK_LINE(161)
					Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
					HX_STACK_LINE(162)
					bool tmp56 = (_g->selectTypeListSelectorString == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(162)
					if ((tmp56)){
						HX_STACK_LINE(162)
						tempObjectArray = _g->collectionGlobalObject->GetExhibitionObjectArray();
					}
					else{
						HX_STACK_LINE(163)
						bool tmp57 = (_g->selectTypeListSelectorString == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(163)
						if ((tmp57)){
							HX_STACK_LINE(163)
							tempObjectArray = _g->collectionGlobalObject->GetFloorObjectArray();
						}
						else{
							HX_STACK_LINE(164)
							bool tmp58 = (_g->selectTypeListSelectorString == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(164)
							if ((tmp58)){
								HX_STACK_LINE(164)
								tempObjectArray = _g->collectionGlobalObject->GetRoomObjectArray();
							}
						}
					}
					HX_STACK_LINE(166)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(167)
					while((true)){
						HX_STACK_LINE(167)
						bool tmp57 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(167)
						bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(167)
						if ((tmp58)){
							HX_STACK_LINE(167)
							break;
						}
						HX_STACK_LINE(168)
						::haxe::ui::toolkit::data::IDataSource tmp59 = _g->selectObjectMuseumListSelectorObject->get_dataSource();		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(168)
						::ObjectMuseum tmp60 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(168)
						Dynamic tmp61 = tmp60->GetNameStruct();		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(168)
						::String tmp62 = tmp61->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(168)
						tmp59->createFromString(tmp62,null());
						HX_STACK_LINE(169)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(171)
					_g->selectObjectMuseumListSelectorObject->set_disabled(false);
					HX_STACK_LINE(172)
					_g->selectObjectMuseumListSelectorObject->set_selectedIndex((int)0);
					HX_STACK_LINE(173)
					::String tmp57 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(173)
					_g->selectObjectMuseumListSelectorObject->set_text(tmp57);
					HX_STACK_LINE(174)
					::ObjectMuseum tmp58 = museumObject->GetParentObject();		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(174)
					bool tmp59 = (tmp58 != null());		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(174)
					if ((tmp59)){
						HX_STACK_LINE(175)
						_g->selectParentNameFullListSelectorObject->set_disabled(false);
						HX_STACK_LINE(176)
						::ObjectMuseum tmp60 = museumObject->GetParentObject();		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(176)
						Dynamic tmp61 = tmp60->GetNameStruct();		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(176)
						::String tmp62 = tmp61->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(176)
						_g->selectParentNameFullListSelectorObject->set_text(tmp62);
					}
				}
			}
			HX_STACK_LINE(181)
			::CollectionFunction_obj::ClearArray(_g->listSelectorTagStructArray);
			HX_STACK_LINE(182)
			::haxe::ui::toolkit::controls::Text tmp28 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(182)
			::haxe::ui::toolkit::controls::Text textObject = tmp28;		HX_STACK_VAR(textObject,"textObject");
			HX_STACK_LINE(183)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(183)
			::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp29;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
			struct _Function_2_2{
				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",184,0xf262d12b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(184)
			Dynamic tmp30 = _Function_2_2::Block(textObject,listSelectorObject);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(184)
			Dynamic listSelectorTagStruct = tmp30;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
			HX_STACK_LINE(188)
			Dynamic tmp31 = listSelectorTagStruct;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(188)
			_g->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp31);
			HX_STACK_LINE(189)
			int tmp32 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(189)
			::String tmp33 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(189)
			textObject->set_id(tmp33);
			HX_STACK_LINE(190)
			textObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
			HX_STACK_LINE(191)
			::haxe::ui::toolkit::controls::Text tmp34 = textObject;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(191)
			_g->gridObject->addChild(tmp34);
			HX_STACK_LINE(192)
			listSelectorObject->set_disabled(true);
			HX_STACK_LINE(193)
			int tmp35 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(193)
			::String tmp36 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(193)
			listSelectorObject->set_id(tmp36);
			HX_STACK_LINE(194)
			listSelectorObject->set_percentWidth((int)100);
			HX_STACK_LINE(195)
			listSelectorObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(196)
			listSelectorObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			HX_STACK_LINE(197)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp37 = listSelectorObject;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(197)
			_g->gridObject->addChild(tmp37);
			HX_STACK_LINE(198)
			listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(53)
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
		HX_STACK_FRAME("UIPopupEditObjectMuseum","UpdateVoid",0xa7f83b38,"UIPopupEditObjectMuseum.UpdateVoid","UIPopupEditObjectMuseum.hx",203,0xf262d12b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		bool updateMuseumButtonBool = false;		HX_STACK_VAR(updateMuseumButtonBool,"updateMuseumButtonBool");
		HX_STACK_LINE(207)
		int tmp = this->museumButtonObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		int tmp4 = tmp3->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		int tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(210)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(208)
		int tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		bool tmp9 = (tmp != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(206)
		if ((tmp9)){
			HX_STACK_LINE(212)
			updateMuseumButtonBool = true;
		}
		HX_STACK_LINE(213)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(214)
		while((true)){
			HX_STACK_LINE(214)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			int tmp12 = tmp11->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(214)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(214)
			if ((tmp14)){
				HX_STACK_LINE(214)
				break;
			}
			HX_STACK_LINE(216)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(216)
			if ((tmp15)){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(217)
			::haxe::ui::toolkit::controls::Button tmp16 = this->museumButtonObjectArray->__get(loopCounter1Int).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(217)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(217)
			::ObjectMuseum tmp18 = tmp17->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(217)
			::ObjectMuseumUI tmp19 = tmp18->GetMuseumUIObject();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(217)
			::haxe::ui::toolkit::controls::Button tmp20 = tmp19->GetButtonObject();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(217)
			bool tmp21 = (tmp16 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(217)
			if ((tmp21)){
				HX_STACK_LINE(218)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(219)
				break;
			}
			HX_STACK_LINE(221)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(224)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(225)
		while((true)){
			HX_STACK_LINE(225)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(225)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(225)
			int tmp12 = tmp11->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(225)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(225)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(225)
			if ((tmp14)){
				HX_STACK_LINE(225)
				break;
			}
			HX_STACK_LINE(227)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(227)
			if ((tmp15)){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(228)
			int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(228)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(228)
			int tmp18 = tmp17->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(228)
			int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(228)
			::haxe::ui::toolkit::controls::Button tmp20 = this->museumButtonObjectArray->__get(tmp19).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(228)
			::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(228)
			::ObjectMuseum tmp22 = tmp21->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(228)
			::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(228)
			::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(228)
			bool tmp25 = (tmp20 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(228)
			if ((tmp25)){
				HX_STACK_LINE(229)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(230)
				break;
			}
			HX_STACK_LINE(232)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(235)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(236)
		while((true)){
			HX_STACK_LINE(236)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(236)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(236)
			int tmp12 = tmp11->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(236)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(236)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(236)
			if ((tmp14)){
				HX_STACK_LINE(236)
				break;
			}
			HX_STACK_LINE(238)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(238)
			if ((tmp15)){
				HX_STACK_LINE(238)
				break;
			}
			HX_STACK_LINE(239)
			int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(239)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(239)
			int tmp18 = tmp17->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(239)
			int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(239)
			::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(239)
			int tmp21 = tmp20->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(239)
			int tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(239)
			::haxe::ui::toolkit::controls::Button tmp23 = this->museumButtonObjectArray->__get(tmp22).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(239)
			::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(239)
			::ObjectMuseum tmp25 = tmp24->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(239)
			::ObjectMuseumUI tmp26 = tmp25->GetMuseumUIObject();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(239)
			::haxe::ui::toolkit::controls::Button tmp27 = tmp26->GetButtonObject();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(239)
			bool tmp28 = (tmp23 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(239)
			if ((tmp28)){
				HX_STACK_LINE(240)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(241)
				break;
			}
			HX_STACK_LINE(243)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(246)
		bool tmp10 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(246)
		if ((tmp10)){
			HX_STACK_LINE(247)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(248)
			while((true)){
				HX_STACK_LINE(248)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(248)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(248)
				int tmp13 = tmp12->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(248)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(248)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(248)
				if ((tmp15)){
					HX_STACK_LINE(248)
					break;
				}
				HX_STACK_LINE(250)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(250)
				::ObjectMuseum tmp17 = tmp16->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(250)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(250)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(250)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(249)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(249)
				::ObjectMuseum tmp22 = tmp21->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(249)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(249)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(249)
				tmp24->userData = tmp20;
				HX_STACK_LINE(251)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(251)
				::ObjectMuseum tmp26 = tmp25->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(251)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(251)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(251)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(252)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(252)
				::ObjectMuseum tmp30 = tmp29->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(252)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(252)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(252)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(252)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(252)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(253)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(255)
			loopCounter1Int1 = (int)0;
			HX_STACK_LINE(256)
			while((true)){
				HX_STACK_LINE(256)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(256)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(256)
				int tmp13 = tmp12->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(256)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(256)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(256)
				if ((tmp15)){
					HX_STACK_LINE(256)
					break;
				}
				HX_STACK_LINE(258)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(258)
				::ObjectMuseum tmp17 = tmp16->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(258)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(258)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(258)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(257)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(257)
				::ObjectMuseum tmp22 = tmp21->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(257)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(257)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(257)
				tmp24->userData = tmp20;
				HX_STACK_LINE(259)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(259)
				::ObjectMuseum tmp26 = tmp25->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(259)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(259)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(259)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(260)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(260)
				::ObjectMuseum tmp30 = tmp29->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(260)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(260)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(260)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(260)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(260)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(261)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(263)
			loopCounter1Int1 = (int)0;
			HX_STACK_LINE(264)
			while((true)){
				HX_STACK_LINE(264)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(264)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(264)
				int tmp13 = tmp12->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(264)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(264)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(264)
				if ((tmp15)){
					HX_STACK_LINE(264)
					break;
				}
				HX_STACK_LINE(266)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(266)
				::ObjectMuseum tmp17 = tmp16->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(266)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(266)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(266)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(265)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(265)
				::ObjectMuseum tmp22 = tmp21->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(265)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(265)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(265)
				tmp24->userData = tmp20;
				HX_STACK_LINE(267)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(267)
				::ObjectMuseum tmp26 = tmp25->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(267)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(267)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(267)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(268)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(268)
				::ObjectMuseum tmp30 = tmp29->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(268)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(268)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(268)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(268)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(269)
				(loopCounter1Int1)++;
			}
		}
		HX_STACK_LINE(273)
		::haxe::ui::toolkit::controls::popups::Popup tmp11 = this->popupObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(273)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(273)
		if ((tmp12)){
			HX_STACK_LINE(276)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(276)
			::String tmp14 = tmp13->get_text();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(276)
			bool tmp15 = (tmp14 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(276)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(276)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(276)
			if ((tmp16)){
				HX_STACK_LINE(277)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(277)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(277)
				::String tmp20 = tmp19->get_text();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(277)
				::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(277)
				tmp17 = (tmp21 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(276)
				tmp17 = true;
			}
			HX_STACK_LINE(275)
			if ((tmp17)){
				HX_STACK_LINE(279)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(279)
				tmp18->set_disabled(true);
				HX_STACK_LINE(280)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(280)
				tmp19->set_selectedIndex((int)-1);
				HX_STACK_LINE(281)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(281)
				tmp20->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(283)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(283)
				tmp18->set_disabled(false);
			}
			HX_STACK_LINE(285)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(285)
			::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(285)
			bool tmp20 = (tmp19 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(285)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(285)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(285)
			if ((tmp21)){
				HX_STACK_LINE(286)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(286)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(286)
				::String tmp25 = tmp24->get_text();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(286)
				::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(286)
				tmp22 = (tmp26 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(285)
				tmp22 = true;
			}
			HX_STACK_LINE(284)
			if ((tmp22)){
				HX_STACK_LINE(288)
				::haxe::ui::toolkit::controls::TextInput tmp23 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(288)
				tmp23->set_disabled(true);
				HX_STACK_LINE(289)
				::haxe::ui::toolkit::controls::TextInput tmp24 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(289)
				tmp24->set_disabled(true);
				HX_STACK_LINE(290)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(290)
				tmp25->set_disabled(true);
			}
			else{
				HX_STACK_LINE(293)
				::haxe::ui::toolkit::controls::TextInput tmp23 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(293)
				tmp23->set_disabled(false);
				HX_STACK_LINE(294)
				::haxe::ui::toolkit::controls::TextInput tmp24 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(294)
				tmp24->set_disabled(false);
				HX_STACK_LINE(295)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(295)
				tmp25->set_disabled(false);
			}
			HX_STACK_LINE(298)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(298)
			int tmp24 = tmp23->get_selectedIndex();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(298)
			bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(298)
			if ((tmp25)){
				HX_STACK_LINE(300)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(300)
				::String tmp27 = tmp26->get_text();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(300)
				this->selectTypeListSelectorString = tmp27;
				HX_STACK_LINE(301)
				::String tmp28 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(301)
				::String tmp29 = this->selectTypeListSelectorPrevString;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(301)
				bool tmp30 = (tmp28 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(301)
				if ((tmp30)){
					HX_STACK_LINE(303)
					::haxe::ui::toolkit::controls::TextInput tmp31 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(303)
					tmp31->set_disabled(false);
					HX_STACK_LINE(304)
					::haxe::ui::toolkit::controls::TextInput tmp32 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(304)
					tmp32->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(305)
					::haxe::ui::toolkit::controls::TextInput tmp33 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(305)
					tmp33->set_disabled(false);
					HX_STACK_LINE(306)
					::haxe::ui::toolkit::controls::TextInput tmp34 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(306)
					tmp34->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(307)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(307)
					::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(307)
					tmp36->removeAll();
					HX_STACK_LINE(308)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp37 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(308)
					tmp37->set_disabled(false);
					HX_STACK_LINE(309)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp38 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(309)
					tmp38->set_selectedIndex((int)-1);
					HX_STACK_LINE(310)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp39 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(310)
					tmp39->set_disabled(false);
					HX_STACK_LINE(311)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp40 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(311)
					tmp40->set_selectedIndex((int)-1);
					HX_STACK_LINE(313)
					Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
					HX_STACK_LINE(314)
					::String tmp41 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(314)
					bool tmp42 = (tmp41 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(314)
					if ((tmp42)){
						HX_STACK_LINE(314)
						::CollectionGlobal tmp43 = this->collectionGlobalObject;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(314)
						tempObjectArray = tmp43->GetExhibitionObjectArray();
					}
					else{
						HX_STACK_LINE(315)
						::String tmp43 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(315)
						bool tmp44 = (tmp43 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(315)
						if ((tmp44)){
							HX_STACK_LINE(315)
							::CollectionGlobal tmp45 = this->collectionGlobalObject;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(315)
							tempObjectArray = tmp45->GetFloorObjectArray();
						}
						else{
							HX_STACK_LINE(316)
							::String tmp45 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(316)
							bool tmp46 = (tmp45 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(316)
							if ((tmp46)){
								HX_STACK_LINE(316)
								::CollectionGlobal tmp47 = this->collectionGlobalObject;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(316)
								tempObjectArray = tmp47->GetRoomObjectArray();
							}
						}
					}
					HX_STACK_LINE(318)
					int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
					HX_STACK_LINE(319)
					while((true)){
						HX_STACK_LINE(319)
						bool tmp43 = (loopCounter1Int1 < tempObjectArray->length);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(319)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(319)
						if ((tmp44)){
							HX_STACK_LINE(319)
							break;
						}
						HX_STACK_LINE(320)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp45 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(320)
						::haxe::ui::toolkit::data::IDataSource tmp46 = tmp45->get_dataSource();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(320)
						::ObjectMuseum tmp47 = tempObjectArray->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(320)
						Dynamic tmp48 = tmp47->GetNameStruct();		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(320)
						::String tmp49 = tmp48->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(320)
						tmp46->createFromString(tmp49,null());
						HX_STACK_LINE(321)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(324)
					::String tmp43 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(324)
					this->selectTypeListSelectorPrevString = tmp43;
				}
			}
			HX_STACK_LINE(330)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(330)
			::String tmp27 = tmp26->get_text();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(330)
			bool tmp28 = (tmp27 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(330)
			if ((tmp28)){
				HX_STACK_LINE(330)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(330)
				tmp29->set_disabled(true);
			}
			else{
				HX_STACK_LINE(332)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(332)
				::String tmp30 = tmp29->get_text();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(332)
				bool tmp31 = (tmp30 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(332)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(332)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(332)
				if ((tmp32)){
					HX_STACK_LINE(333)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(333)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(333)
					::String tmp36 = tmp35->get_text();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(333)
					::String tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(333)
					tmp33 = (tmp37 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));
				}
				else{
					HX_STACK_LINE(332)
					tmp33 = true;
				}
				HX_STACK_LINE(331)
				if ((tmp33)){
					HX_STACK_LINE(334)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(334)
					tmp34->set_disabled(false);
				}
			}
			HX_STACK_LINE(337)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(337)
			int tmp30 = tmp29->get_selectedIndex();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(337)
			bool tmp31 = (tmp30 != (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(337)
			if ((tmp31)){
				HX_STACK_LINE(339)
				::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
				HX_STACK_LINE(340)
				::String tmp32 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(340)
				bool tmp33 = (tmp32 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(340)
				if ((tmp33)){
					HX_STACK_LINE(340)
					typeEnum = ::EnumMuseumType_obj::EXH;
				}
				else{
					HX_STACK_LINE(341)
					::String tmp34 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(341)
					bool tmp35 = (tmp34 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(341)
					if ((tmp35)){
						HX_STACK_LINE(341)
						typeEnum = ::EnumMuseumType_obj::FLR;
					}
					else{
						HX_STACK_LINE(342)
						::String tmp36 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(342)
						bool tmp37 = (tmp36 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(342)
						if ((tmp37)){
							HX_STACK_LINE(342)
							typeEnum = ::EnumMuseumType_obj::ROM;
						}
					}
				}
				HX_STACK_LINE(344)
				::CollectionGlobal tmp34 = this->collectionGlobalObject;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(344)
				::EnumMuseumType tmp35 = typeEnum;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(344)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp36 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(344)
				::String tmp37 = tmp36->get_text();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(344)
				::ObjectMuseum tmp38 = ::CollectionFunction_obj::FindMuseumObject(tmp34,tmp35,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(344)
				this->selectedMuseumObject = tmp38;
				HX_STACK_LINE(346)
				::ObjectMuseum tmp39 = this->selectedMuseumObject;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(346)
				::ObjectMuseum tmp40 = this->selectedMuseumPrevObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(346)
				bool tmp41 = (tmp39 != tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(346)
				if ((tmp41)){
					HX_STACK_LINE(348)
					int loopCounter1Int1 = (int)1;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
					HX_STACK_LINE(349)
					while((true)){
						HX_STACK_LINE(349)
						int tmp42 = loopCounter1Int1;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(349)
						int tmp43 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(349)
						bool tmp44 = (tmp42 <= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(349)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(349)
						if ((tmp45)){
							HX_STACK_LINE(349)
							break;
						}
						HX_STACK_LINE(351)
						::haxe::ui::toolkit::controls::popups::Popup tmp46 = this->popupObject;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(351)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp47 = tmp46->get_content();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(351)
						::String tmp48 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter1Int1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(351)
						::haxe::ui::toolkit::controls::Text tmp49 = tmp47->findChild(tmp48,hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(351)
						::haxe::ui::toolkit::controls::Text textObject = tmp49;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(352)
						::haxe::ui::toolkit::controls::popups::Popup tmp50 = this->popupObject;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(352)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp51 = tmp50->get_content();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(352)
						::String tmp52 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int1);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(352)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp53 = tmp51->findChild(tmp52,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(352)
						::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp53;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
						HX_STACK_LINE(353)
						::haxe::ui::toolkit::containers::Grid tmp54 = this->gridObject;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(353)
						::haxe::ui::toolkit::controls::Text tmp55 = textObject;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(353)
						tmp54->removeChild(tmp55,null());
						HX_STACK_LINE(354)
						::haxe::ui::toolkit::containers::Grid tmp56 = this->gridObject;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(354)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp57 = listSelectorObject;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(354)
						tmp56->removeChild(tmp57,null());
						HX_STACK_LINE(355)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(358)
					::CollectionFunction_obj::ClearArray(this->listSelectorTagStructArray);
					HX_STACK_LINE(360)
					::String fullString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(fullString,"fullString");
					HX_STACK_LINE(361)
					::ObjectMuseum tmp42 = this->selectedMuseumObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(361)
					bool tmp43 = tmp42->GetFullBool();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(361)
					bool tmp44 = (tmp43 == true);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(361)
					if ((tmp44)){
						HX_STACK_LINE(361)
						fullString = HX_HCSTRING("True","\x6e","\xd3","\xdc","\x37");
					}
					else{
						HX_STACK_LINE(362)
						::ObjectMuseum tmp45 = this->selectedMuseumObject;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(362)
						bool tmp46 = tmp45->GetFullBool();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(362)
						bool tmp47 = (tmp46 == false);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(362)
						if ((tmp47)){
							HX_STACK_LINE(362)
							fullString = HX_HCSTRING("False","\x83","\xa5","\x7c","\x8e");
						}
					}
					HX_STACK_LINE(363)
					::haxe::ui::toolkit::controls::Text tmp45 = this->displayFullTextObject;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(363)
					::String tmp46 = fullString;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(363)
					tmp45->set_text(tmp46);
					HX_STACK_LINE(364)
					::haxe::ui::toolkit::controls::Text tmp47 = this->displayVisitorCurrentTextObject;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(364)
					::ObjectMuseum tmp48 = this->selectedMuseumObject;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(364)
					int tmp49 = tmp48->GetVisitorCurrentInt();		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(364)
					::String tmp50 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(364)
					tmp47->set_text(tmp50);
					HX_STACK_LINE(365)
					::haxe::ui::toolkit::controls::Text tmp51 = this->displayVisitorTotalTextObject;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(365)
					::ObjectMuseum tmp52 = this->selectedMuseumObject;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(365)
					int tmp53 = tmp52->GetVisitorTotalInt();		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(365)
					::String tmp54 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(365)
					tmp51->set_text(tmp54);
					HX_STACK_LINE(366)
					::haxe::ui::toolkit::controls::TextInput tmp55 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(366)
					tmp55->set_disabled(false);
					HX_STACK_LINE(367)
					::haxe::ui::toolkit::controls::TextInput tmp56 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(367)
					tmp56->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(368)
					::haxe::ui::toolkit::controls::TextInput tmp57 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(368)
					tmp57->set_disabled(false);
					HX_STACK_LINE(369)
					::haxe::ui::toolkit::controls::TextInput tmp58 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(369)
					tmp58->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(370)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp59 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(370)
					tmp59->set_disabled(false);
					HX_STACK_LINE(371)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp60 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(371)
					tmp60->set_selectedIndex((int)-1);
					HX_STACK_LINE(376)
					int tagAmountInt = (int)0;		HX_STACK_VAR(tagAmountInt,"tagAmountInt");
					HX_STACK_LINE(377)
					::ObjectMuseum tmp61 = this->selectedMuseumObject;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(377)
					int tmp62 = tmp61->GetTagObjectArray()->length;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(377)
					tagAmountInt = tmp62;
					HX_STACK_LINE(378)
					loopCounter1Int1 = (int)0;
					HX_STACK_LINE(379)
					while((true)){
						HX_STACK_LINE(379)
						bool tmp63 = (loopCounter1Int1 < tagAmountInt);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(379)
						bool tmp64 = !(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(379)
						if ((tmp64)){
							HX_STACK_LINE(379)
							break;
						}
						HX_STACK_LINE(381)
						::haxe::ui::toolkit::controls::Text tmp65 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(381)
						::haxe::ui::toolkit::controls::Text textObject = tmp65;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(382)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp66 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(382)
						::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp66;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",383,0xf262d12b)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
									__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(383)
						Dynamic tmp67 = _Function_5_1::Block(textObject,listSelectorObject);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(383)
						Dynamic listSelectorTagStruct = tmp67;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
						HX_STACK_LINE(389)
						Dynamic tmp68 = listSelectorTagStruct;		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(389)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp68);
						HX_STACK_LINE(390)
						int tmp69 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(390)
						::String tmp70 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(390)
						textObject->set_id(tmp70);
						HX_STACK_LINE(391)
						textObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
						HX_STACK_LINE(392)
						::haxe::ui::toolkit::containers::Grid tmp71 = this->gridObject;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(392)
						::haxe::ui::toolkit::controls::Text tmp72 = textObject;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(392)
						tmp71->addChild(tmp72);
						HX_STACK_LINE(393)
						listSelectorObject->set_disabled(false);
						HX_STACK_LINE(394)
						int tmp73 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(394)
						::String tmp74 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(394)
						listSelectorObject->set_id(tmp74);
						HX_STACK_LINE(395)
						listSelectorObject->set_percentWidth((int)100);
						HX_STACK_LINE(398)
						listSelectorObject->set_selectedIndex((int)1);
						HX_STACK_LINE(399)
						::ObjectMuseum tmp75 = this->selectedMuseumObject;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(399)
						::ObjectTag tmp76 = tmp75->GetTagObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(399)
						::String tmp77 = tmp76->GetNameString();		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(399)
						listSelectorObject->set_text(tmp77);
						HX_STACK_LINE(400)
						::haxe::ui::toolkit::data::IDataSource tmp78 = listSelectorObject->get_dataSource();		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(400)
						tmp78->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
						HX_STACK_LINE(402)
						int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(403)
						while((true)){
							HX_STACK_LINE(403)
							int tmp79 = loopCounter2Int;		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(403)
							::CollectionGlobal tmp80 = this->collectionGlobalObject;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(403)
							int tmp81 = tmp80->GetTagObjectArray()->length;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(403)
							bool tmp82 = (tmp79 < tmp81);		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(403)
							bool tmp83 = !(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(403)
							if ((tmp83)){
								HX_STACK_LINE(403)
								break;
							}
							HX_STACK_LINE(405)
							bool matchBool = false;		HX_STACK_VAR(matchBool,"matchBool");
							HX_STACK_LINE(406)
							int loopCounter3Int = (int)0;		HX_STACK_VAR(loopCounter3Int,"loopCounter3Int");
							HX_STACK_LINE(407)
							while((true)){
								HX_STACK_LINE(407)
								int tmp84 = loopCounter3Int;		HX_STACK_VAR(tmp84,"tmp84");
								HX_STACK_LINE(407)
								int tmp85 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(407)
								bool tmp86 = (tmp84 < tmp85);		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(407)
								bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(407)
								if ((tmp87)){
									HX_STACK_LINE(407)
									break;
								}
								HX_STACK_LINE(409)
								::CollectionGlobal tmp88 = this->collectionGlobalObject;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(409)
								::ObjectTag tmp89 = tmp88->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(409)
								::String tmp90 = tmp89->GetNameString();		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(409)
								Dynamic tmp91 = this->listSelectorTagStructArray->__GetItem(loopCounter3Int);		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(409)
								::String tmp92 = tmp91->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(409)
								bool tmp93 = (tmp90 == tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(409)
								if ((tmp93)){
									HX_STACK_LINE(409)
									matchBool = true;
								}
								HX_STACK_LINE(410)
								(loopCounter3Int)++;
							}
							HX_STACK_LINE(414)
							bool tmp84 = (matchBool == false);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(414)
							if ((tmp84)){
								HX_STACK_LINE(415)
								::haxe::ui::toolkit::data::IDataSource tmp85 = listSelectorObject->get_dataSource();		HX_STACK_VAR(tmp85,"tmp85");
								HX_STACK_LINE(415)
								::CollectionGlobal tmp86 = this->collectionGlobalObject;		HX_STACK_VAR(tmp86,"tmp86");
								HX_STACK_LINE(415)
								::ObjectTag tmp87 = tmp86->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp87,"tmp87");
								HX_STACK_LINE(415)
								::String tmp88 = tmp87->GetNameString();		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(415)
								tmp85->createFromString(tmp88,null());
							}
							HX_STACK_LINE(418)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(421)
						::haxe::ui::toolkit::containers::Grid tmp79 = this->gridObject;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(421)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp80 = listSelectorObject;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(421)
						tmp79->addChild(tmp80);
						HX_STACK_LINE(422)
						listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
						HX_STACK_LINE(424)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(427)
					::haxe::ui::toolkit::controls::TextInput tmp63 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(427)
					::ObjectMuseum tmp64 = this->selectedMuseumObject;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(427)
					Dynamic tmp65 = tmp64->GetNameStruct();		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(427)
					::String tmp66 = tmp65->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(427)
					tmp63->set_text(tmp66);
					HX_STACK_LINE(428)
					::haxe::ui::toolkit::controls::TextInput tmp67 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(428)
					::ObjectMuseum tmp68 = this->selectedMuseumObject;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(428)
					Dynamic tmp69 = tmp68->GetNameStruct();		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(428)
					::String tmp70 = tmp69->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(428)
					tmp67->set_text(tmp70);
					HX_STACK_LINE(429)
					::String tmp71 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(429)
					bool tmp72 = (tmp71 != HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(429)
					if ((tmp72)){
						HX_STACK_LINE(430)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp73 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(430)
						::ObjectMuseum tmp74 = this->selectedMuseumObject;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(430)
						::ObjectMuseum tmp75 = tmp74->GetParentObject();		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(430)
						Dynamic tmp76 = tmp75->GetNameStruct();		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(430)
						::String tmp77 = tmp76->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(430)
						tmp73->set_text(tmp77);
						HX_STACK_LINE(432)
						Array< ::Dynamic > tempObjectArray = null();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
						HX_STACK_LINE(433)
						::String tmp78 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(433)
						bool tmp79 = (tmp78 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(433)
						if ((tmp79)){
							HX_STACK_LINE(433)
							::CollectionGlobal tmp80 = this->collectionGlobalObject;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(433)
							tempObjectArray = tmp80->GetRoomObjectArray();
						}
						else{
							HX_STACK_LINE(434)
							::String tmp80 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(434)
							bool tmp81 = (tmp80 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(434)
							if ((tmp81)){
								HX_STACK_LINE(434)
								::CollectionGlobal tmp82 = this->collectionGlobalObject;		HX_STACK_VAR(tmp82,"tmp82");
								HX_STACK_LINE(434)
								tempObjectArray = tmp82->GetFloorObjectArray();
							}
						}
						HX_STACK_LINE(436)
						loopCounter1Int1 = (int)0;
						HX_STACK_LINE(437)
						while((true)){
							HX_STACK_LINE(437)
							bool tmp80 = (loopCounter1Int1 < tempObjectArray->length);		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(437)
							bool tmp81 = !(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(437)
							if ((tmp81)){
								HX_STACK_LINE(437)
								break;
							}
							HX_STACK_LINE(439)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp82 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(439)
							::haxe::ui::toolkit::data::IDataSource tmp83 = tmp82->get_dataSource();		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(439)
							::ObjectMuseum tmp84 = tempObjectArray->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(439)
							Dynamic tmp85 = tmp84->GetNameStruct();		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(439)
							::String tmp86 = tmp85->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(439)
							tmp83->createFromString(tmp86,null());
							HX_STACK_LINE(440)
							(loopCounter1Int1)++;
						}
					}
					else{
						HX_STACK_LINE(445)
						::String tmp73 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(445)
						bool tmp74 = (tmp73 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(445)
						if ((tmp74)){
							HX_STACK_LINE(445)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp75 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp75,"tmp75");
							HX_STACK_LINE(445)
							tmp75->set_disabled(true);
						}
					}
					HX_STACK_LINE(447)
					::ObjectMuseum tmp73 = this->selectedMuseumObject;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(447)
					this->selectedMuseumPrevObject = tmp73;
				}
			}
		}
		HX_STACK_LINE(455)
		::haxe::ui::toolkit::controls::popups::Popup tmp13 = this->popupObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(455)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(455)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(455)
		if ((tmp14)){
			HX_STACK_LINE(455)
			int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(455)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(455)
			tmp15 = (tmp17 > (int)0);
		}
		else{
			HX_STACK_LINE(455)
			tmp15 = false;
		}
		HX_STACK_LINE(455)
		if ((tmp15)){
			HX_STACK_LINE(461)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(462)
			while((true)){
				HX_STACK_LINE(462)
				int tmp16 = loopCounter1Int1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(462)
				int tmp17 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(462)
				bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(462)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(462)
				if ((tmp19)){
					HX_STACK_LINE(462)
					break;
				}
				HX_STACK_LINE(465)
				int tmp20 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(465)
				bool tmp21 = (tmp20 > (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(465)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(465)
				if ((tmp21)){
					HX_STACK_LINE(466)
					Dynamic tmp23 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(466)
					Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(466)
					int tmp25 = tmp24->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(466)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(466)
					tmp22 = (tmp26 == (int)0);
				}
				else{
					HX_STACK_LINE(465)
					tmp22 = false;
				}
				HX_STACK_LINE(464)
				if ((tmp22)){
					HX_STACK_LINE(468)
					int tmp23 = loopCounter1Int1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(468)
					int tmp24 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(468)
					int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(468)
					bool tmp26 = (tmp23 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(468)
					if ((tmp26)){
						HX_STACK_LINE(469)
						Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(469)
						tmp27->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
					else{
						HX_STACK_LINE(472)
						::haxe::ui::toolkit::containers::Grid tmp27 = this->gridObject;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(472)
						Dynamic tmp28 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(472)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = tmp28->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(472)
						tmp27->removeChild(tmp29,null());
						HX_STACK_LINE(473)
						::haxe::ui::toolkit::containers::Grid tmp30 = this->gridObject;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(473)
						Dynamic tmp31 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(473)
						::haxe::ui::toolkit::controls::Text tmp32 = tmp31->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(473)
						tmp30->removeChild(tmp32,null());
						HX_STACK_LINE(474)
						Dynamic tmp33 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(474)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp33);
						HX_STACK_LINE(477)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(478)
						while((true)){
							HX_STACK_LINE(478)
							int tmp34 = loopCounter2Int;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(478)
							int tmp35 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(478)
							bool tmp36 = (tmp34 <= tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(478)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(478)
							if ((tmp37)){
								HX_STACK_LINE(478)
								break;
							}
							HX_STACK_LINE(480)
							int tmp38 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(480)
							Dynamic tmp39 = this->listSelectorTagStructArray->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(480)
							::String tmp40 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter2Int);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(480)
							tmp39->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp40);
							HX_STACK_LINE(481)
							int tmp41 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(481)
							Dynamic tmp42 = this->listSelectorTagStructArray->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(481)
							::String tmp43 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter2Int);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(481)
							tmp42->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp43);
							HX_STACK_LINE(482)
							(loopCounter2Int)++;
						}
					}
				}
				else{
					HX_STACK_LINE(487)
					Dynamic tmp23 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(487)
					int tmp24 = tmp23->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(487)
					bool tmp25 = (tmp24 == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(487)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(487)
					if ((tmp25)){
						HX_STACK_LINE(487)
						int tmp27 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(487)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(487)
						tmp26 = (tmp28 == (int)1);
					}
					else{
						HX_STACK_LINE(487)
						tmp26 = false;
					}
					HX_STACK_LINE(487)
					if ((tmp26)){
						HX_STACK_LINE(488)
						Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(488)
						tmp27->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
				}
				HX_STACK_LINE(490)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(494)
			int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(494)
			int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(494)
			Dynamic tmp18 = this->listSelectorTagStructArray->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(494)
			int tmp19 = tmp18->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(494)
			int tmp20 = (int)-1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(494)
			bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(494)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(494)
			if ((tmp21)){
				HX_STACK_LINE(494)
				int tmp23 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(494)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(494)
				int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(494)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(494)
				Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(494)
				Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(494)
				int tmp29 = tmp28->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(494)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(494)
				tmp22 = (tmp30 != (int)0);
			}
			else{
				HX_STACK_LINE(494)
				tmp22 = false;
			}
			HX_STACK_LINE(494)
			if ((tmp22)){
				HX_STACK_LINE(496)
				::haxe::ui::toolkit::controls::Text tmp23 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(496)
				::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp23;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
				HX_STACK_LINE(497)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(497)
				::haxe::ui::toolkit::controls::selection::ListSelector listSelectorTagObject = tmp24;		HX_STACK_VAR(listSelectorTagObject,"listSelectorTagObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorTagObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",498,0xf262d12b)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorTagObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(498)
				Dynamic tmp25 = _Function_3_1::Block(listSelectorTagTextObject,listSelectorTagObject);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(498)
				Dynamic listSelectorTagStruct = tmp25;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
				HX_STACK_LINE(502)
				Dynamic tmp26 = listSelectorTagStruct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(502)
				this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
				HX_STACK_LINE(505)
				::haxe::ui::toolkit::controls::Text tmp27 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(505)
				listSelectorTagTextObject = tmp27;
				HX_STACK_LINE(506)
				listSelectorTagTextObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
				HX_STACK_LINE(507)
				int tmp28 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(507)
				::String tmp29 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(507)
				listSelectorTagTextObject->set_id(tmp29);
				HX_STACK_LINE(508)
				::haxe::ui::toolkit::containers::Grid tmp30 = this->gridObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(508)
				::haxe::ui::toolkit::controls::Text tmp31 = listSelectorTagTextObject;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(508)
				tmp30->addChild(tmp31);
				HX_STACK_LINE(510)
				::haxe::ui::toolkit::data::IDataSource tmp32 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(510)
				tmp32->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
				HX_STACK_LINE(512)
				int tmp33 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(512)
				::String tmp34 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(512)
				listSelectorTagObject->set_id(tmp34);
				HX_STACK_LINE(513)
				listSelectorTagObject->set_percentWidth((int)100);
				HX_STACK_LINE(514)
				listSelectorTagObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				HX_STACK_LINE(515)
				::haxe::ui::toolkit::containers::Grid tmp35 = this->gridObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(515)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp36 = listSelectorTagObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(515)
				tmp35->addChild(tmp36);
				HX_STACK_LINE(517)
				Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
				HX_STACK_LINE(519)
				int loopCounter1Int2 = (int)0;		HX_STACK_VAR(loopCounter1Int2,"loopCounter1Int2");
				HX_STACK_LINE(520)
				while((true)){
					HX_STACK_LINE(520)
					int tmp37 = loopCounter1Int2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(520)
					::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(520)
					int tmp39 = tmp38->GetTagObjectArray()->length;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(520)
					bool tmp40 = (tmp37 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(520)
					bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(520)
					if ((tmp41)){
						HX_STACK_LINE(520)
						break;
					}
					HX_STACK_LINE(521)
					::CollectionGlobal tmp42 = this->collectionGlobalObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(521)
					::ObjectTag tmp43 = tmp42->GetTagObjectArray()->__get(loopCounter1Int2).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(521)
					::String tmp44 = tmp43->GetNameString();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(521)
					tempUsedTagStringArray->push(tmp44);
					HX_STACK_LINE(522)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(525)
				loopCounter1Int2 = (int)1;
				HX_STACK_LINE(526)
				while((true)){
					HX_STACK_LINE(526)
					int tmp37 = loopCounter1Int2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(526)
					int tmp38 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(526)
					bool tmp39 = (tmp37 <= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(526)
					bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(526)
					if ((tmp40)){
						HX_STACK_LINE(526)
						break;
					}
					HX_STACK_LINE(528)
					::haxe::ui::toolkit::controls::popups::Popup tmp41 = this->popupObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(528)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp42 = tmp41->get_content();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(528)
					::String tmp43 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int2);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(528)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp44 = tmp42->findChild(tmp43,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(528)
					::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp44;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
					HX_STACK_LINE(529)
					::String tmp45 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(529)
					tempUsedTagStringArray->remove(tmp45);
					HX_STACK_LINE(530)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(534)
				loopCounter1Int2 = (int)0;
				HX_STACK_LINE(535)
				while((true)){
					HX_STACK_LINE(535)
					bool tmp37 = (loopCounter1Int2 < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(535)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(535)
					if ((tmp38)){
						HX_STACK_LINE(535)
						break;
					}
					HX_STACK_LINE(537)
					::haxe::ui::toolkit::data::IDataSource tmp39 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(537)
					::String tmp40 = tempUsedTagStringArray->__get(loopCounter1Int2);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(537)
					tmp39->createFromString(tmp40,null());
					HX_STACK_LINE(538)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(542)
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
	HX_MARK_MEMBER_NAME(displayFullTextObject,"displayFullTextObject");
	HX_MARK_MEMBER_NAME(displayVisitorCurrentTextObject,"displayVisitorCurrentTextObject");
	HX_MARK_MEMBER_NAME(displayVisitorTotalTextObject,"displayVisitorTotalTextObject");
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
	HX_VISIT_MEMBER_NAME(displayFullTextObject,"displayFullTextObject");
	HX_VISIT_MEMBER_NAME(displayVisitorCurrentTextObject,"displayVisitorCurrentTextObject");
	HX_VISIT_MEMBER_NAME(displayVisitorTotalTextObject,"displayVisitorTotalTextObject");
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
	case 21:
		if (HX_FIELD_EQ(inName,"displayFullTextObject") ) { return displayFullTextObject; }
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
	case 29:
		if (HX_FIELD_EQ(inName,"displayVisitorTotalTextObject") ) { return displayVisitorTotalTextObject; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"displayVisitorCurrentTextObject") ) { return displayVisitorCurrentTextObject; }
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
	case 21:
		if (HX_FIELD_EQ(inName,"displayFullTextObject") ) { displayFullTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
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
	case 29:
		if (HX_FIELD_EQ(inName,"displayVisitorTotalTextObject") ) { displayVisitorTotalTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"displayVisitorCurrentTextObject") ) { displayVisitorCurrentTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
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
	outFields->push(HX_HCSTRING("displayFullTextObject","\x9d","\x83","\xb5","\x53"));
	outFields->push(HX_HCSTRING("displayVisitorCurrentTextObject","\xb9","\x75","\x47","\x58"));
	outFields->push(HX_HCSTRING("displayVisitorTotalTextObject","\x04","\x8c","\xa0","\x09"));
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
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,displayFullTextObject),HX_HCSTRING("displayFullTextObject","\x9d","\x83","\xb5","\x53")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,displayVisitorCurrentTextObject),HX_HCSTRING("displayVisitorCurrentTextObject","\xb9","\x75","\x47","\x58")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,displayVisitorTotalTextObject),HX_HCSTRING("displayVisitorTotalTextObject","\x04","\x8c","\xa0","\x09")},
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
	HX_HCSTRING("displayFullTextObject","\x9d","\x83","\xb5","\x53"),
	HX_HCSTRING("displayVisitorCurrentTextObject","\xb9","\x75","\x47","\x58"),
	HX_HCSTRING("displayVisitorTotalTextObject","\x04","\x8c","\xa0","\x09"),
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

