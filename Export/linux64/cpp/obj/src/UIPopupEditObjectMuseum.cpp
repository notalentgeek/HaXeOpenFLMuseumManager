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
	HX_STACK_LINE(45)
	this->textInputExplanationLastIndexInt = (int)-1;
	HX_STACK_LINE(44)
	this->textInputExplanationStructArray = Dynamic( Array_obj<Dynamic>::__new() );
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
	HX_STACK_LINE(47)
	::UIPopupEditObjectMuseum _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(54)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupEditMuseumObjectButton","\x05","\xca","\xc5","\x9b"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	this->buttonObject = tmp;
	HX_STACK_LINE(55)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupEditObjectMuseum,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupEditObjectMuseum.hx",55,0xf262d12b)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(58)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(59)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(60)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupEditObjectMuseum.xml","\x37","\x1b","\x0d","\x8a"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupEditObjectMuseum,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectMuseum.hx",63,0xf262d12b)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(67)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					if ((tmp6)){
						HX_STACK_LINE(71)
						::String tmp7 = _g->nameAltTextInputObject->get_text();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(71)
						::String nameAltString = tmp7;		HX_STACK_VAR(nameAltString,"nameAltString");
						HX_STACK_LINE(72)
						::String tmp8 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(72)
						::String nameFullString = tmp8;		HX_STACK_VAR(nameFullString,"nameFullString");
						HX_STACK_LINE(73)
						::String tmp9 = _g->selectParentNameFullListSelectorObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(73)
						::String parentNameAltString = tmp9;		HX_STACK_VAR(parentNameAltString,"parentNameAltString");
						HX_STACK_LINE(74)
						Array< ::String > explanationStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(explanationStringArray,"explanationStringArray");
						HX_STACK_LINE(75)
						Array< ::Dynamic > tagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tagObjectArray,"tagObjectArray");
						HX_STACK_LINE(76)
						::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
						HX_STACK_LINE(77)
						::String tmp10 = _g->selectParentNameFullListSelectorObject->get_text();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(77)
						bool tmp11 = (tmp10 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(77)
						if ((tmp11)){
							HX_STACK_LINE(77)
							typeEnum = ::EnumMuseumType_obj::EXH;
						}
						else{
							HX_STACK_LINE(78)
							::String tmp12 = _g->selectParentNameFullListSelectorObject->get_text();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(78)
							bool tmp13 = (tmp12 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(78)
							if ((tmp13)){
								HX_STACK_LINE(78)
								typeEnum = ::EnumMuseumType_obj::FLR;
							}
							else{
								HX_STACK_LINE(79)
								::String tmp14 = _g->selectParentNameFullListSelectorObject->get_text();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(79)
								bool tmp15 = (tmp14 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(79)
								if ((tmp15)){
									HX_STACK_LINE(79)
									typeEnum = ::EnumMuseumType_obj::ROM;
								}
							}
						}
						HX_STACK_LINE(81)
						bool tmp12 = (typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(81)
						if ((tmp12)){
							HX_STACK_LINE(81)
							parentNameAltString = HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65");
						}
						HX_STACK_LINE(83)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(84)
						while((true)){
							HX_STACK_LINE(84)
							int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(84)
							int tmp14 = _g->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(84)
							bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(84)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(84)
							if ((tmp16)){
								HX_STACK_LINE(84)
								break;
							}
							HX_STACK_LINE(86)
							Dynamic tmp17 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(86)
							::String tmp18 = tmp17->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(86)
							bool tmp19 = (tmp18 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(86)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(86)
							if ((tmp19)){
								HX_STACK_LINE(87)
								Dynamic tmp21 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(87)
								Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(87)
								::String tmp23 = tmp22->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(87)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(87)
								tmp20 = (tmp24 != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(86)
								tmp20 = false;
							}
							HX_STACK_LINE(85)
							if ((tmp20)){
								HX_STACK_LINE(89)
								Dynamic tmp21 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(89)
								::String tmp22 = tmp21->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(89)
								explanationStringArray->push(tmp22);
							}
							HX_STACK_LINE(91)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(93)
						loopCounter1Int = (int)0;
						HX_STACK_LINE(94)
						while((true)){
							HX_STACK_LINE(94)
							int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(94)
							int tmp14 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(94)
							bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(94)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(94)
							if ((tmp16)){
								HX_STACK_LINE(94)
								break;
							}
							HX_STACK_LINE(95)
							Dynamic tmp17 = _g->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(95)
							::String tmp18 = tmp17->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(95)
							::String tagNameString = tmp18;		HX_STACK_VAR(tagNameString,"tagNameString");
							HX_STACK_LINE(96)
							::CollectionGlobal tmp19 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(96)
							::String tmp20 = tagNameString;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(96)
							::ObjectTag tmp21 = ::CollectionFunction_obj::FindTagObject(tmp19,false,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(96)
							::ObjectTag tagObject = tmp21;		HX_STACK_VAR(tagObject,"tagObject");
							HX_STACK_LINE(97)
							bool tmp22 = (tagObject == null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(97)
							if ((tmp22)){
								HX_STACK_LINE(97)
								::CollectionGlobal tmp23 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(97)
								::String tmp24 = tagNameString;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(97)
								::ObjectTag tmp25 = ::CollectionFunction_obj::FindTagObject(tmp23,true,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(97)
								tagObject = tmp25;
							}
							HX_STACK_LINE(98)
							bool tmp23 = (tagObject != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(98)
							if ((tmp23)){
								HX_STACK_LINE(98)
								::ObjectTag tmp24 = tagObject;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(98)
								tagObjectArray->push(tmp24);
							}
							HX_STACK_LINE(99)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(104)
						bool tmp13 = (nameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(104)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(104)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(104)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(104)
						if ((tmp15)){
							HX_STACK_LINE(104)
							tmp16 = (nameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(104)
							tmp16 = true;
						}
						HX_STACK_LINE(104)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(104)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(104)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(104)
						if ((tmp18)){
							HX_STACK_LINE(104)
							tmp19 = (nameAltString != null());
						}
						else{
							HX_STACK_LINE(104)
							tmp19 = true;
						}
						HX_STACK_LINE(104)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(104)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(104)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(104)
						if ((tmp21)){
							HX_STACK_LINE(105)
							tmp22 = (nameFullString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(104)
							tmp22 = true;
						}
						HX_STACK_LINE(104)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(104)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(104)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(104)
						if ((tmp24)){
							HX_STACK_LINE(105)
							tmp25 = (nameFullString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(104)
							tmp25 = true;
						}
						HX_STACK_LINE(104)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(104)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(104)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(104)
						if ((tmp27)){
							HX_STACK_LINE(105)
							tmp28 = (nameFullString != null());
						}
						else{
							HX_STACK_LINE(104)
							tmp28 = true;
						}
						HX_STACK_LINE(104)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(104)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(104)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(104)
						if ((tmp30)){
							HX_STACK_LINE(106)
							tmp31 = (parentNameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(104)
							tmp31 = true;
						}
						HX_STACK_LINE(104)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(104)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(104)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(104)
						if ((tmp33)){
							HX_STACK_LINE(106)
							tmp34 = (parentNameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(104)
							tmp34 = true;
						}
						HX_STACK_LINE(104)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(104)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(104)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(104)
						if ((tmp36)){
							HX_STACK_LINE(106)
							tmp37 = (parentNameAltString != null());
						}
						else{
							HX_STACK_LINE(104)
							tmp37 = true;
						}
						HX_STACK_LINE(104)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(104)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(104)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(104)
						if ((tmp39)){
							HX_STACK_LINE(107)
							tmp40 = (explanationStringArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(104)
							tmp40 = true;
						}
						HX_STACK_LINE(104)
						bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(104)
						bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(104)
						if ((tmp41)){
							HX_STACK_LINE(107)
							tmp42 = (tagObjectArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(104)
							tmp42 = true;
						}
						HX_STACK_LINE(103)
						if ((tmp42)){
							HX_STACK_LINE(110)
							::String tmp43 = nameAltString;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(110)
							_g->selectedMuseumObject->SetNameAltStringVoid(tmp43);
							HX_STACK_LINE(111)
							::String tmp44 = nameFullString;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(111)
							_g->selectedMuseumObject->SetNameFullStringVoid(tmp44);
							HX_STACK_LINE(112)
							::String tmp45 = parentNameAltString;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(112)
							_g->selectedMuseumObject->ChangeParentObject(tmp45);
							HX_STACK_LINE(113)
							_g->selectedMuseumObject->SetExplanationStringArrayVoid(explanationStringArray);
							HX_STACK_LINE(114)
							_g->selectedMuseumObject->SetTagObjectArrayVoid(tagObjectArray);
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(63)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Edit Museum Object","\xd7","\xc9","\x9d","\xae"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			_g->popupObject = tmp6;
			HX_STACK_LINE(122)
			_g->selectTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(123)
			_g->selectTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::Text tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_DisplayFull","\xc5","\x8a","\x07","\xf2"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(125)
			_g->displayFullTextObject = tmp8;
			HX_STACK_LINE(126)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			::haxe::ui::toolkit::controls::Text tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_DisplayVisitorCurrent","\xe1","\x12","\x47","\x4b"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(126)
			_g->displayVisitorCurrentTextObject = tmp10;
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::controls::Text tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_DisplayVisitorTotal","\x6c","\x50","\xdf","\x50"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			_g->displayVisitorTotalTextObject = tmp12;
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::containers::Grid tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_Grid","\x72","\xe2","\x67","\x8e"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(128)
			_g->gridObject = tmp14;
			HX_STACK_LINE(129)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			::haxe::ui::toolkit::controls::TextInput tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputAltName","\xd6","\xd0","\x5e","\x46"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(129)
			_g->nameAltTextInputObject = tmp16;
			HX_STACK_LINE(130)
			_g->nameAltTextInputObject->set_disabled(true);
			HX_STACK_LINE(131)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(131)
			::haxe::ui::toolkit::controls::TextInput tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputFullName","\x78","\xb4","\x67","\xe7"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(131)
			_g->nameFullTextInputObject = tmp18;
			HX_STACK_LINE(132)
			_g->nameFullTextInputObject->set_disabled(true);
			HX_STACK_LINE(133)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(133)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectObjectMuseum","\xb9","\x64","\x0b","\xb6"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(133)
			_g->selectObjectMuseumListSelectorObject = tmp20;
			HX_STACK_LINE(134)
			_g->selectObjectMuseumListSelectorObject->set_disabled(true);
			HX_STACK_LINE(135)
			_g->selectObjectMuseumListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(136)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp21 = _g->popupObject->get_content();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(136)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = tmp21->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectParentObject","\x51","\xc5","\x91","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(136)
			_g->selectParentNameFullListSelectorObject = tmp22;
			HX_STACK_LINE(137)
			_g->selectParentNameFullListSelectorObject->set_disabled(true);
			HX_STACK_LINE(138)
			_g->selectParentNameFullListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp23 = _g->popupObject->get_content();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = tmp23->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectType","\x82","\x7c","\x26","\x07"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(139)
			_g->selectTypeListSelectorObject = tmp24;
			HX_STACK_LINE(140)
			_g->selectTypeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::core::Component tmp25 = _e->get_component();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(143)
			Dynamic tmp26 = tmp25->userData;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(143)
			bool tmp27 = (tmp26 != null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(143)
			if ((tmp27)){
				HX_STACK_LINE(144)
				::haxe::ui::toolkit::core::Component tmp28 = _e->get_component();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(144)
				Dynamic tmp29 = tmp28->userData;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(144)
				::String tmp30 = ::Std_obj::string(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(144)
				::String tmp31 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(144)
				::String string = tmp31;		HX_STACK_VAR(string,"string");
				HX_STACK_LINE(145)
				Array< ::String > stringArray = string.split(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));		HX_STACK_VAR(stringArray,"stringArray");
				HX_STACK_LINE(146)
				::String tmp32 = stringArray->__get((int)1);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(146)
				::String nameAltString = tmp32;		HX_STACK_VAR(nameAltString,"nameAltString");
				HX_STACK_LINE(147)
				stringArray = nameAltString.split(HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));
				HX_STACK_LINE(148)
				::String tmp33 = stringArray->__get((int)0);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(148)
				::String enumString = tmp33;		HX_STACK_VAR(enumString,"enumString");
				HX_STACK_LINE(149)
				::String tmp34 = enumString;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(149)
				::EnumMuseumType tmp35 = ::Type_obj::createEnum(hx::ClassOf< ::EnumMuseumType >(),tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(149)
				::EnumMuseumType typeEnum = tmp35;		HX_STACK_VAR(typeEnum,"typeEnum");
				HX_STACK_LINE(150)
				::CollectionGlobal tmp36 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(150)
				::EnumMuseumType tmp37 = typeEnum;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(150)
				::String tmp38 = nameAltString;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(150)
				::ObjectMuseum tmp39 = ::CollectionFunction_obj::FindMuseumObject(tmp36,tmp37,tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(150)
				::ObjectMuseum museumObject = tmp39;		HX_STACK_VAR(museumObject,"museumObject");
				HX_STACK_LINE(152)
				bool tmp40 = (museumObject != null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(152)
				if ((tmp40)){
					HX_STACK_LINE(154)
					_g->selectedMuseumObject = museumObject;
					HX_STACK_LINE(156)
					::String fullString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(fullString,"fullString");
					HX_STACK_LINE(157)
					bool tmp41 = _g->selectedMuseumObject->GetFullBool();		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(157)
					bool tmp42 = (tmp41 == true);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(157)
					if ((tmp42)){
						HX_STACK_LINE(157)
						fullString = HX_HCSTRING("True","\x6e","\xd3","\xdc","\x37");
					}
					else{
						HX_STACK_LINE(158)
						bool tmp43 = _g->selectedMuseumObject->GetFullBool();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(158)
						bool tmp44 = (tmp43 == false);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(158)
						if ((tmp44)){
							HX_STACK_LINE(158)
							fullString = HX_HCSTRING("False","\x83","\xa5","\x7c","\x8e");
						}
					}
					HX_STACK_LINE(159)
					::String tmp43 = fullString;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(159)
					_g->displayFullTextObject->set_text(tmp43);
					HX_STACK_LINE(160)
					int tmp44 = _g->selectedMuseumObject->GetVisitorCurrentInt();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(160)
					::String tmp45 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(160)
					_g->displayVisitorCurrentTextObject->set_text(tmp45);
					HX_STACK_LINE(161)
					int tmp46 = _g->selectedMuseumObject->GetVisitorTotalInt();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(161)
					::String tmp47 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(161)
					_g->displayVisitorTotalTextObject->set_text(tmp47);
					HX_STACK_LINE(162)
					_g->nameAltTextInputObject->set_disabled(false);
					HX_STACK_LINE(163)
					Dynamic tmp48 = _g->selectedMuseumObject->GetNameStruct();		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(163)
					::String tmp49 = tmp48->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(163)
					_g->nameAltTextInputObject->set_text(tmp49);
					HX_STACK_LINE(164)
					_g->nameFullTextInputObject->set_disabled(false);
					HX_STACK_LINE(165)
					Dynamic tmp50 = _g->selectedMuseumObject->GetNameStruct();		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(165)
					::String tmp51 = tmp50->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(165)
					_g->nameFullTextInputObject->set_text(tmp51);
					HX_STACK_LINE(166)
					_g->selectTypeListSelectorObject->set_disabled(false);
					HX_STACK_LINE(167)
					::String nameFullEnumString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(nameFullEnumString,"nameFullEnumString");
					HX_STACK_LINE(168)
					bool tmp52 = (enumString == HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(168)
					if ((tmp52)){
						HX_STACK_LINE(168)
						nameFullEnumString = HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1");
					}
					else{
						HX_STACK_LINE(169)
						bool tmp53 = (enumString == HX_HCSTRING("FLR","\x4c","\x60","\x35","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(169)
						if ((tmp53)){
							HX_STACK_LINE(169)
							nameFullEnumString = HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95");
						}
						else{
							HX_STACK_LINE(170)
							bool tmp54 = (enumString == HX_HCSTRING("ROM","\xf0","\x7d","\x3e","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(170)
							if ((tmp54)){
								HX_STACK_LINE(170)
								nameFullEnumString = HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36");
							}
						}
					}
					HX_STACK_LINE(171)
					::String tmp53 = nameFullEnumString;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(171)
					_g->selectTypeListSelectorObject->set_text(tmp53);
					HX_STACK_LINE(172)
					::String tmp54 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(172)
					_g->selectTypeListSelectorString = tmp54;
					HX_STACK_LINE(173)
					::String tmp55 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(173)
					_g->selectTypeListSelectorPrevString = tmp55;
					HX_STACK_LINE(175)
					Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
					HX_STACK_LINE(176)
					bool tmp56 = (_g->selectTypeListSelectorString == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(176)
					if ((tmp56)){
						HX_STACK_LINE(176)
						tempObjectArray = _g->collectionGlobalObject->GetExhibitionObjectArray();
					}
					else{
						HX_STACK_LINE(177)
						bool tmp57 = (_g->selectTypeListSelectorString == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(177)
						if ((tmp57)){
							HX_STACK_LINE(177)
							tempObjectArray = _g->collectionGlobalObject->GetFloorObjectArray();
						}
						else{
							HX_STACK_LINE(178)
							bool tmp58 = (_g->selectTypeListSelectorString == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(178)
							if ((tmp58)){
								HX_STACK_LINE(178)
								tempObjectArray = _g->collectionGlobalObject->GetRoomObjectArray();
							}
						}
					}
					HX_STACK_LINE(180)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(181)
					while((true)){
						HX_STACK_LINE(181)
						bool tmp57 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(181)
						bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(181)
						if ((tmp58)){
							HX_STACK_LINE(181)
							break;
						}
						HX_STACK_LINE(182)
						::haxe::ui::toolkit::data::IDataSource tmp59 = _g->selectObjectMuseumListSelectorObject->get_dataSource();		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(182)
						::ObjectMuseum tmp60 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(182)
						Dynamic tmp61 = tmp60->GetNameStruct();		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(182)
						::String tmp62 = tmp61->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(182)
						tmp59->createFromString(tmp62,null());
						HX_STACK_LINE(183)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(185)
					_g->selectObjectMuseumListSelectorObject->set_disabled(false);
					HX_STACK_LINE(186)
					_g->selectObjectMuseumListSelectorObject->set_selectedIndex((int)0);
					HX_STACK_LINE(187)
					::String tmp57 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(187)
					_g->selectObjectMuseumListSelectorObject->set_text(tmp57);
					HX_STACK_LINE(188)
					::ObjectMuseum tmp58 = museumObject->GetParentObject();		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(188)
					bool tmp59 = (tmp58 != null());		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(188)
					if ((tmp59)){
						HX_STACK_LINE(189)
						_g->selectParentNameFullListSelectorObject->set_disabled(false);
						HX_STACK_LINE(190)
						::ObjectMuseum tmp60 = museumObject->GetParentObject();		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(190)
						Dynamic tmp61 = tmp60->GetNameStruct();		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(190)
						::String tmp62 = tmp61->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(190)
						_g->selectParentNameFullListSelectorObject->set_text(tmp62);
					}
				}
			}
			HX_STACK_LINE(196)
			::CollectionFunction_obj::ClearArray(_g->textInputExplanationStructArray);
			HX_STACK_LINE(197)
			::haxe::ui::toolkit::controls::Text tmp28 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(197)
			::haxe::ui::toolkit::controls::Text textObject = tmp28;		HX_STACK_VAR(textObject,"textObject");
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::controls::TextInput tmp29 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(198)
			::haxe::ui::toolkit::controls::TextInput textInputObject = tmp29;		HX_STACK_VAR(textInputObject,"textInputObject");
			struct _Function_2_2{
				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::TextInput &textInputObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",199,0xf262d12b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , textInputObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(199)
			Dynamic tmp30 = _Function_2_2::Block(textObject,textInputObject);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(199)
			Dynamic textInputExplanationStruct = tmp30;		HX_STACK_VAR(textInputExplanationStruct,"textInputExplanationStruct");
			HX_STACK_LINE(203)
			Dynamic tmp31 = textInputExplanationStruct;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(203)
			_g->textInputExplanationStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp31);
			HX_STACK_LINE(204)
			int tmp32 = _g->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(204)
			::String tmp33 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanationText_","\xf7","\xc5","\x8c","\xa6") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(204)
			textObject->set_id(tmp33);
			HX_STACK_LINE(205)
			textObject->set_text(HX_HCSTRING("Explanation","\x39","\xf1","\x7f","\x2d"));
			HX_STACK_LINE(206)
			textInputObject->set_disabled(true);
			HX_STACK_LINE(207)
			int tmp34 = _g->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(207)
			::String tmp35 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanation_","\xe4","\xe4","\x38","\x19") + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(207)
			textInputObject->set_id(tmp35);
			HX_STACK_LINE(208)
			textInputObject->set_percentWidth((int)100);
			HX_STACK_LINE(209)
			::haxe::ui::toolkit::controls::TextInput tmp36 = textInputObject;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(209)
			_g->gridObject->addChild(tmp36);
			HX_STACK_LINE(210)
			int tmp37 = _g->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(210)
			int tmp38 = (tmp37 - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(210)
			Dynamic tmp39 = _g->textInputExplanationStructArray->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(210)
			::haxe::ui::toolkit::controls::TextInput tmp40 = tmp39->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(210)
			int tmp41 = _g->gridObject->indexOfChild(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(210)
			int tmp42 = (tmp41 + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(210)
			_g->textInputExplanationLastIndexInt = tmp42;
			HX_STACK_LINE(213)
			::CollectionFunction_obj::ClearArray(_g->listSelectorTagStructArray);
			HX_STACK_LINE(214)
			::haxe::ui::toolkit::controls::Text tmp43 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(214)
			::haxe::ui::toolkit::controls::Text textObject1 = tmp43;		HX_STACK_VAR(textObject1,"textObject1");
			HX_STACK_LINE(215)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp44 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(215)
			::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp44;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
			struct _Function_2_3{
				inline static Dynamic Block( ::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject,::haxe::ui::toolkit::controls::Text &textObject1){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",216,0xf262d12b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(216)
			Dynamic tmp45 = _Function_2_3::Block(listSelectorObject,textObject1);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(216)
			Dynamic listSelectorTagStruct = tmp45;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
			HX_STACK_LINE(220)
			Dynamic tmp46 = listSelectorTagStruct;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(220)
			_g->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp46);
			HX_STACK_LINE(221)
			int tmp47 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(221)
			::String tmp48 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(221)
			textObject1->set_id(tmp48);
			HX_STACK_LINE(222)
			textObject1->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
			HX_STACK_LINE(223)
			::haxe::ui::toolkit::controls::Text tmp49 = textObject1;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(223)
			_g->gridObject->addChild(tmp49);
			HX_STACK_LINE(224)
			listSelectorObject->set_disabled(true);
			HX_STACK_LINE(225)
			int tmp50 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(225)
			::String tmp51 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(225)
			listSelectorObject->set_id(tmp51);
			HX_STACK_LINE(226)
			listSelectorObject->set_percentWidth((int)100);
			HX_STACK_LINE(227)
			listSelectorObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(228)
			listSelectorObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp52 = listSelectorObject;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(229)
			_g->gridObject->addChild(tmp52);
			HX_STACK_LINE(230)
			listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
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
		HX_STACK_FRAME("UIPopupEditObjectMuseum","UpdateVoid",0xa7f83b38,"UIPopupEditObjectMuseum.UpdateVoid","UIPopupEditObjectMuseum.hx",235,0xf262d12b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(237)
		bool updateMuseumButtonBool = false;		HX_STACK_VAR(updateMuseumButtonBool,"updateMuseumButtonBool");
		HX_STACK_LINE(239)
		int tmp = this->museumButtonObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(240)
		int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		int tmp4 = tmp3->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(242)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(240)
		int tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		bool tmp9 = (tmp != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		if ((tmp9)){
			HX_STACK_LINE(244)
			updateMuseumButtonBool = true;
		}
		HX_STACK_LINE(245)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(246)
		while((true)){
			HX_STACK_LINE(246)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(246)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(246)
			int tmp12 = tmp11->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(246)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(246)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(246)
			if ((tmp14)){
				HX_STACK_LINE(246)
				break;
			}
			HX_STACK_LINE(248)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(248)
			if ((tmp15)){
				HX_STACK_LINE(248)
				break;
			}
			HX_STACK_LINE(249)
			::haxe::ui::toolkit::controls::Button tmp16 = this->museumButtonObjectArray->__get(loopCounter1Int).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(249)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(249)
			::ObjectMuseum tmp18 = tmp17->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(249)
			::ObjectMuseumUI tmp19 = tmp18->GetMuseumUIObject();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(249)
			::haxe::ui::toolkit::controls::Button tmp20 = tmp19->GetButtonObject();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(249)
			bool tmp21 = (tmp16 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(249)
			if ((tmp21)){
				HX_STACK_LINE(250)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(251)
				break;
			}
			HX_STACK_LINE(253)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(256)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(257)
		while((true)){
			HX_STACK_LINE(257)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(257)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(257)
			int tmp12 = tmp11->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(257)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(257)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(257)
			if ((tmp14)){
				HX_STACK_LINE(257)
				break;
			}
			HX_STACK_LINE(259)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(259)
			if ((tmp15)){
				HX_STACK_LINE(259)
				break;
			}
			HX_STACK_LINE(260)
			int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(260)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(260)
			int tmp18 = tmp17->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(260)
			int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(260)
			::haxe::ui::toolkit::controls::Button tmp20 = this->museumButtonObjectArray->__get(tmp19).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(260)
			::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(260)
			::ObjectMuseum tmp22 = tmp21->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(260)
			::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(260)
			::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(260)
			bool tmp25 = (tmp20 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(260)
			if ((tmp25)){
				HX_STACK_LINE(261)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(262)
				break;
			}
			HX_STACK_LINE(264)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(267)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(268)
		while((true)){
			HX_STACK_LINE(268)
			int tmp10 = loopCounter1Int;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(268)
			::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(268)
			int tmp12 = tmp11->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(268)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(268)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(268)
			if ((tmp14)){
				HX_STACK_LINE(268)
				break;
			}
			HX_STACK_LINE(270)
			bool tmp15 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(270)
			if ((tmp15)){
				HX_STACK_LINE(270)
				break;
			}
			HX_STACK_LINE(271)
			int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(271)
			::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(271)
			int tmp18 = tmp17->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(271)
			int tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(271)
			::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(271)
			int tmp21 = tmp20->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(271)
			int tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(271)
			::haxe::ui::toolkit::controls::Button tmp23 = this->museumButtonObjectArray->__get(tmp22).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(271)
			::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(271)
			::ObjectMuseum tmp25 = tmp24->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(271)
			::ObjectMuseumUI tmp26 = tmp25->GetMuseumUIObject();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(271)
			::haxe::ui::toolkit::controls::Button tmp27 = tmp26->GetButtonObject();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(271)
			bool tmp28 = (tmp23 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(271)
			if ((tmp28)){
				HX_STACK_LINE(272)
				updateMuseumButtonBool = true;
				HX_STACK_LINE(273)
				break;
			}
			HX_STACK_LINE(275)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(278)
		bool tmp10 = (updateMuseumButtonBool == true);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(278)
		if ((tmp10)){
			HX_STACK_LINE(279)
			::CollectionFunction_obj::ClearArray(this->museumButtonObjectArray);
			HX_STACK_LINE(280)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(281)
			while((true)){
				HX_STACK_LINE(281)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(281)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(281)
				int tmp13 = tmp12->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(281)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(281)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(281)
				if ((tmp15)){
					HX_STACK_LINE(281)
					break;
				}
				HX_STACK_LINE(283)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(283)
				::ObjectMuseum tmp17 = tmp16->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(283)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(283)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(283)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(282)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(282)
				::ObjectMuseum tmp22 = tmp21->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(282)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(282)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(282)
				tmp24->userData = tmp20;
				HX_STACK_LINE(284)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(284)
				::ObjectMuseum tmp26 = tmp25->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(284)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(284)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(284)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(285)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(285)
				::ObjectMuseum tmp30 = tmp29->GetExhibitionObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(285)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(285)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(285)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(285)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(285)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(286)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(288)
			loopCounter1Int1 = (int)0;
			HX_STACK_LINE(289)
			while((true)){
				HX_STACK_LINE(289)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(289)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(289)
				int tmp13 = tmp12->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(289)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(289)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(289)
				if ((tmp15)){
					HX_STACK_LINE(289)
					break;
				}
				HX_STACK_LINE(291)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(291)
				::ObjectMuseum tmp17 = tmp16->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(291)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(291)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(291)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(290)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(290)
				::ObjectMuseum tmp22 = tmp21->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(290)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(290)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(290)
				tmp24->userData = tmp20;
				HX_STACK_LINE(292)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(292)
				::ObjectMuseum tmp26 = tmp25->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(292)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(292)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(292)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(293)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(293)
				::ObjectMuseum tmp30 = tmp29->GetFloorObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(293)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(293)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(293)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(293)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(293)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(294)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(296)
			loopCounter1Int1 = (int)0;
			HX_STACK_LINE(297)
			while((true)){
				HX_STACK_LINE(297)
				int tmp11 = loopCounter1Int1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(297)
				::CollectionGlobal tmp12 = this->collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(297)
				int tmp13 = tmp12->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(297)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(297)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(297)
				if ((tmp15)){
					HX_STACK_LINE(297)
					break;
				}
				HX_STACK_LINE(299)
				::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(299)
				::ObjectMuseum tmp17 = tmp16->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(299)
				::ObjectMuseumUI tmp18 = tmp17->GetMuseumUIObject();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(299)
				::haxe::ui::toolkit::controls::Button tmp19 = tmp18->GetButtonObject();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(299)
				::String tmp20 = tmp19->get_id();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(298)
				::CollectionGlobal tmp21 = this->collectionGlobalObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(298)
				::ObjectMuseum tmp22 = tmp21->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(298)
				::ObjectMuseumUI tmp23 = tmp22->GetMuseumUIObject();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(298)
				::haxe::ui::toolkit::controls::Button tmp24 = tmp23->GetButtonObject();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(298)
				tmp24->userData = tmp20;
				HX_STACK_LINE(300)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(300)
				::ObjectMuseum tmp26 = tmp25->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(300)
				::ObjectMuseumUI tmp27 = tmp26->GetMuseumUIObject();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(300)
				::haxe::ui::toolkit::controls::Button tmp28 = tmp27->GetButtonObject();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(300)
				this->museumButtonObjectArray->push(tmp28);
				HX_STACK_LINE(301)
				::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(301)
				::ObjectMuseum tmp30 = tmp29->GetRoomObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(301)
				::ObjectMuseumUI tmp31 = tmp30->GetMuseumUIObject();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(301)
				::haxe::ui::toolkit::controls::Button tmp32 = tmp31->GetButtonObject();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(301)
				::haxe::ui::toolkit::controls::Button tmp33 = this->buttonObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(301)
				Dynamic tmp34 = tmp33->onClick;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(301)
				tmp32->set_onClick(tmp34);
				HX_STACK_LINE(302)
				(loopCounter1Int1)++;
			}
		}
		HX_STACK_LINE(306)
		::haxe::ui::toolkit::controls::popups::Popup tmp11 = this->popupObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(306)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(306)
		if ((tmp12)){
			HX_STACK_LINE(309)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(309)
			::String tmp14 = tmp13->get_text();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(309)
			bool tmp15 = (tmp14 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(309)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(309)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(309)
			if ((tmp16)){
				HX_STACK_LINE(310)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(310)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(310)
				::String tmp20 = tmp19->get_text();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(310)
				::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(310)
				tmp17 = (tmp21 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(309)
				tmp17 = true;
			}
			HX_STACK_LINE(308)
			if ((tmp17)){
				HX_STACK_LINE(312)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(312)
				tmp18->set_disabled(true);
				HX_STACK_LINE(313)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(313)
				tmp19->set_selectedIndex((int)-1);
				HX_STACK_LINE(314)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(314)
				tmp20->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(316)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(316)
				tmp18->set_disabled(false);
			}
			HX_STACK_LINE(318)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(318)
			::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(318)
			bool tmp20 = (tmp19 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(318)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(318)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(318)
			if ((tmp21)){
				HX_STACK_LINE(319)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(319)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(319)
				::String tmp25 = tmp24->get_text();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(319)
				::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(319)
				tmp22 = (tmp26 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(318)
				tmp22 = true;
			}
			HX_STACK_LINE(317)
			if ((tmp22)){
				HX_STACK_LINE(321)
				::haxe::ui::toolkit::controls::TextInput tmp23 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(321)
				tmp23->set_disabled(true);
				HX_STACK_LINE(322)
				::haxe::ui::toolkit::controls::TextInput tmp24 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(322)
				tmp24->set_disabled(true);
				HX_STACK_LINE(323)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(323)
				tmp25->set_disabled(true);
			}
			else{
				HX_STACK_LINE(326)
				::haxe::ui::toolkit::controls::TextInput tmp23 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(326)
				tmp23->set_disabled(false);
				HX_STACK_LINE(327)
				::haxe::ui::toolkit::controls::TextInput tmp24 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(327)
				tmp24->set_disabled(false);
				HX_STACK_LINE(328)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp25 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(328)
				tmp25->set_disabled(false);
			}
			HX_STACK_LINE(331)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp23 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(331)
			int tmp24 = tmp23->get_selectedIndex();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(331)
			bool tmp25 = (tmp24 != (int)-1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(331)
			if ((tmp25)){
				HX_STACK_LINE(333)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(333)
				::String tmp27 = tmp26->get_text();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(333)
				this->selectTypeListSelectorString = tmp27;
				HX_STACK_LINE(334)
				::String tmp28 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(334)
				::String tmp29 = this->selectTypeListSelectorPrevString;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(334)
				bool tmp30 = (tmp28 != tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(334)
				if ((tmp30)){
					HX_STACK_LINE(336)
					::haxe::ui::toolkit::controls::TextInput tmp31 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(336)
					tmp31->set_disabled(false);
					HX_STACK_LINE(337)
					::haxe::ui::toolkit::controls::TextInput tmp32 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(337)
					tmp32->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(338)
					::haxe::ui::toolkit::controls::TextInput tmp33 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(338)
					tmp33->set_disabled(false);
					HX_STACK_LINE(339)
					::haxe::ui::toolkit::controls::TextInput tmp34 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(339)
					tmp34->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(340)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(340)
					::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(340)
					tmp36->removeAll();
					HX_STACK_LINE(341)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp37 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(341)
					tmp37->set_disabled(false);
					HX_STACK_LINE(342)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp38 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(342)
					tmp38->set_selectedIndex((int)-1);
					HX_STACK_LINE(343)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp39 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(343)
					tmp39->set_disabled(false);
					HX_STACK_LINE(344)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp40 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(344)
					tmp40->set_selectedIndex((int)-1);
					HX_STACK_LINE(346)
					Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
					HX_STACK_LINE(347)
					::String tmp41 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(347)
					bool tmp42 = (tmp41 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(347)
					if ((tmp42)){
						HX_STACK_LINE(347)
						::CollectionGlobal tmp43 = this->collectionGlobalObject;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(347)
						tempObjectArray = tmp43->GetExhibitionObjectArray();
					}
					else{
						HX_STACK_LINE(348)
						::String tmp43 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(348)
						bool tmp44 = (tmp43 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(348)
						if ((tmp44)){
							HX_STACK_LINE(348)
							::CollectionGlobal tmp45 = this->collectionGlobalObject;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(348)
							tempObjectArray = tmp45->GetFloorObjectArray();
						}
						else{
							HX_STACK_LINE(349)
							::String tmp45 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(349)
							bool tmp46 = (tmp45 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(349)
							if ((tmp46)){
								HX_STACK_LINE(349)
								::CollectionGlobal tmp47 = this->collectionGlobalObject;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(349)
								tempObjectArray = tmp47->GetRoomObjectArray();
							}
						}
					}
					HX_STACK_LINE(351)
					int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
					HX_STACK_LINE(352)
					while((true)){
						HX_STACK_LINE(352)
						bool tmp43 = (loopCounter1Int1 < tempObjectArray->length);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(352)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(352)
						if ((tmp44)){
							HX_STACK_LINE(352)
							break;
						}
						HX_STACK_LINE(353)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp45 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(353)
						::haxe::ui::toolkit::data::IDataSource tmp46 = tmp45->get_dataSource();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(353)
						::ObjectMuseum tmp47 = tempObjectArray->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(353)
						Dynamic tmp48 = tmp47->GetNameStruct();		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(353)
						::String tmp49 = tmp48->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(353)
						tmp46->createFromString(tmp49,null());
						HX_STACK_LINE(354)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(357)
					::String tmp43 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(357)
					this->selectTypeListSelectorPrevString = tmp43;
				}
			}
			HX_STACK_LINE(363)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(363)
			::String tmp27 = tmp26->get_text();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(363)
			bool tmp28 = (tmp27 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(363)
			if ((tmp28)){
				HX_STACK_LINE(363)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(363)
				tmp29->set_disabled(true);
			}
			else{
				HX_STACK_LINE(365)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(365)
				::String tmp30 = tmp29->get_text();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(365)
				bool tmp31 = (tmp30 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(365)
				bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(365)
				bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(365)
				if ((tmp32)){
					HX_STACK_LINE(366)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(366)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(366)
					::String tmp36 = tmp35->get_text();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(366)
					::String tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(366)
					tmp33 = (tmp37 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));
				}
				else{
					HX_STACK_LINE(365)
					tmp33 = true;
				}
				HX_STACK_LINE(364)
				if ((tmp33)){
					HX_STACK_LINE(367)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(367)
					tmp34->set_disabled(false);
				}
			}
			HX_STACK_LINE(370)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(370)
			int tmp30 = tmp29->get_selectedIndex();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(370)
			bool tmp31 = (tmp30 != (int)-1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(370)
			if ((tmp31)){
				HX_STACK_LINE(372)
				::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
				HX_STACK_LINE(373)
				::String tmp32 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(373)
				bool tmp33 = (tmp32 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(373)
				if ((tmp33)){
					HX_STACK_LINE(373)
					typeEnum = ::EnumMuseumType_obj::EXH;
				}
				else{
					HX_STACK_LINE(374)
					::String tmp34 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(374)
					bool tmp35 = (tmp34 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(374)
					if ((tmp35)){
						HX_STACK_LINE(374)
						typeEnum = ::EnumMuseumType_obj::FLR;
					}
					else{
						HX_STACK_LINE(375)
						::String tmp36 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(375)
						bool tmp37 = (tmp36 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(375)
						if ((tmp37)){
							HX_STACK_LINE(375)
							typeEnum = ::EnumMuseumType_obj::ROM;
						}
					}
				}
				HX_STACK_LINE(377)
				::CollectionGlobal tmp34 = this->collectionGlobalObject;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(377)
				::EnumMuseumType tmp35 = typeEnum;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(377)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp36 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(377)
				::String tmp37 = tmp36->get_text();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(377)
				::ObjectMuseum tmp38 = ::CollectionFunction_obj::FindMuseumObject(tmp34,tmp35,tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(377)
				this->selectedMuseumObject = tmp38;
				HX_STACK_LINE(379)
				::ObjectMuseum tmp39 = this->selectedMuseumObject;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(379)
				::ObjectMuseum tmp40 = this->selectedMuseumPrevObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(379)
				bool tmp41 = (tmp39 != tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(379)
				if ((tmp41)){
					HX_STACK_LINE(381)
					int loopCounter1Int1 = (int)1;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
					HX_STACK_LINE(382)
					while((true)){
						HX_STACK_LINE(382)
						int tmp42 = loopCounter1Int1;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(382)
						int tmp43 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(382)
						bool tmp44 = (tmp42 <= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(382)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(382)
						if ((tmp45)){
							HX_STACK_LINE(382)
							break;
						}
						HX_STACK_LINE(384)
						::haxe::ui::toolkit::controls::popups::Popup tmp46 = this->popupObject;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(384)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp47 = tmp46->get_content();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(384)
						::String tmp48 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter1Int1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(384)
						::haxe::ui::toolkit::controls::Text tmp49 = tmp47->findChild(tmp48,hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(384)
						::haxe::ui::toolkit::controls::Text textObject = tmp49;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(385)
						::haxe::ui::toolkit::controls::popups::Popup tmp50 = this->popupObject;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(385)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp51 = tmp50->get_content();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(385)
						::String tmp52 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int1);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(385)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp53 = tmp51->findChild(tmp52,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(385)
						::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp53;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
						HX_STACK_LINE(386)
						::haxe::ui::toolkit::containers::Grid tmp54 = this->gridObject;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(386)
						::haxe::ui::toolkit::controls::Text tmp55 = textObject;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(386)
						tmp54->removeChild(tmp55,null());
						HX_STACK_LINE(387)
						::haxe::ui::toolkit::containers::Grid tmp56 = this->gridObject;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(387)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp57 = listSelectorObject;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(387)
						tmp56->removeChild(tmp57,null());
						HX_STACK_LINE(388)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(391)
					::CollectionFunction_obj::ClearArray(this->listSelectorTagStructArray);
					HX_STACK_LINE(393)
					loopCounter1Int1 = (int)1;
					HX_STACK_LINE(394)
					while((true)){
						HX_STACK_LINE(394)
						int tmp42 = loopCounter1Int1;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(394)
						int tmp43 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(394)
						bool tmp44 = (tmp42 <= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(394)
						bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(394)
						if ((tmp45)){
							HX_STACK_LINE(394)
							break;
						}
						HX_STACK_LINE(396)
						::haxe::ui::toolkit::controls::popups::Popup tmp46 = this->popupObject;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(396)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp47 = tmp46->get_content();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(396)
						::String tmp48 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanationText_","\xf7","\xc5","\x8c","\xa6") + loopCounter1Int1);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(396)
						::haxe::ui::toolkit::controls::Text tmp49 = tmp47->findChild(tmp48,hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(396)
						::haxe::ui::toolkit::controls::Text textObject = tmp49;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(397)
						::haxe::ui::toolkit::controls::popups::Popup tmp50 = this->popupObject;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(397)
						::haxe::ui::toolkit::controls::popups::PopupContent tmp51 = tmp50->get_content();		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(397)
						::String tmp52 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanation_","\xe4","\xe4","\x38","\x19") + loopCounter1Int1);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(397)
						::haxe::ui::toolkit::controls::TextInput tmp53 = tmp51->findChild(tmp52,hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(397)
						::haxe::ui::toolkit::controls::TextInput textInputObject = tmp53;		HX_STACK_VAR(textInputObject,"textInputObject");
						HX_STACK_LINE(398)
						::haxe::ui::toolkit::containers::Grid tmp54 = this->gridObject;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(398)
						::haxe::ui::toolkit::controls::Text tmp55 = textObject;		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(398)
						tmp54->removeChild(tmp55,null());
						HX_STACK_LINE(399)
						::haxe::ui::toolkit::containers::Grid tmp56 = this->gridObject;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(399)
						::haxe::ui::toolkit::controls::TextInput tmp57 = textInputObject;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(399)
						tmp56->removeChild(tmp57,null());
						HX_STACK_LINE(400)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(403)
					::CollectionFunction_obj::ClearArray(this->textInputExplanationStructArray);
					HX_STACK_LINE(405)
					::String fullString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(fullString,"fullString");
					HX_STACK_LINE(406)
					::ObjectMuseum tmp42 = this->selectedMuseumObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(406)
					bool tmp43 = tmp42->GetFullBool();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(406)
					bool tmp44 = (tmp43 == true);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(406)
					if ((tmp44)){
						HX_STACK_LINE(406)
						fullString = HX_HCSTRING("True","\x6e","\xd3","\xdc","\x37");
					}
					else{
						HX_STACK_LINE(407)
						::ObjectMuseum tmp45 = this->selectedMuseumObject;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(407)
						bool tmp46 = tmp45->GetFullBool();		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(407)
						bool tmp47 = (tmp46 == false);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(407)
						if ((tmp47)){
							HX_STACK_LINE(407)
							fullString = HX_HCSTRING("False","\x83","\xa5","\x7c","\x8e");
						}
					}
					HX_STACK_LINE(408)
					::haxe::ui::toolkit::controls::Text tmp45 = this->displayFullTextObject;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(408)
					::String tmp46 = fullString;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(408)
					tmp45->set_text(tmp46);
					HX_STACK_LINE(409)
					::haxe::ui::toolkit::controls::Text tmp47 = this->displayVisitorCurrentTextObject;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(409)
					::ObjectMuseum tmp48 = this->selectedMuseumObject;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(409)
					int tmp49 = tmp48->GetVisitorCurrentInt();		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(409)
					::String tmp50 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(409)
					tmp47->set_text(tmp50);
					HX_STACK_LINE(410)
					::haxe::ui::toolkit::controls::Text tmp51 = this->displayVisitorTotalTextObject;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(410)
					::ObjectMuseum tmp52 = this->selectedMuseumObject;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(410)
					int tmp53 = tmp52->GetVisitorTotalInt();		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(410)
					::String tmp54 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(410)
					tmp51->set_text(tmp54);
					HX_STACK_LINE(411)
					::haxe::ui::toolkit::controls::TextInput tmp55 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(411)
					tmp55->set_disabled(false);
					HX_STACK_LINE(412)
					::haxe::ui::toolkit::controls::TextInput tmp56 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(412)
					tmp56->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(413)
					::haxe::ui::toolkit::controls::TextInput tmp57 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(413)
					tmp57->set_disabled(false);
					HX_STACK_LINE(414)
					::haxe::ui::toolkit::controls::TextInput tmp58 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(414)
					tmp58->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
					HX_STACK_LINE(415)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp59 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(415)
					tmp59->set_disabled(false);
					HX_STACK_LINE(416)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp60 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(416)
					tmp60->set_selectedIndex((int)-1);
					HX_STACK_LINE(418)
					int explanationAmountInt = (int)0;		HX_STACK_VAR(explanationAmountInt,"explanationAmountInt");
					HX_STACK_LINE(419)
					::ObjectMuseum tmp61 = this->selectedMuseumObject;		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(419)
					int tmp62 = tmp61->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(419)
					explanationAmountInt = tmp62;
					HX_STACK_LINE(420)
					::haxe::ui::toolkit::containers::Grid tmp63 = this->gridObject;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(420)
					::haxe::ui::toolkit::controls::Text tmp64 = this->displayVisitorTotalTextObject;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(420)
					int tmp65 = tmp63->indexOfChild(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(420)
					int tmp66 = (tmp65 + (int)1);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(420)
					this->textInputExplanationLastIndexInt = tmp66;
					HX_STACK_LINE(421)
					loopCounter1Int1 = (int)0;
					HX_STACK_LINE(422)
					while((true)){
						HX_STACK_LINE(422)
						bool tmp67 = (loopCounter1Int1 < explanationAmountInt);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(422)
						bool tmp68 = !(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(422)
						if ((tmp68)){
							HX_STACK_LINE(422)
							break;
						}
						HX_STACK_LINE(424)
						::haxe::ui::toolkit::controls::Text tmp69 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(424)
						::haxe::ui::toolkit::controls::Text textObject = tmp69;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(425)
						::haxe::ui::toolkit::controls::TextInput tmp70 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(425)
						::haxe::ui::toolkit::controls::TextInput textInputObject = tmp70;		HX_STACK_VAR(textInputObject,"textInputObject");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::TextInput &textInputObject){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",426,0xf262d12b)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , textInputObject,false);
									__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(426)
						Dynamic tmp71 = _Function_5_1::Block(textObject,textInputObject);		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(426)
						Dynamic textInputExplanationStruct = tmp71;		HX_STACK_VAR(textInputExplanationStruct,"textInputExplanationStruct");
						HX_STACK_LINE(432)
						Dynamic tmp72 = textInputExplanationStruct;		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(432)
						this->textInputExplanationStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp72);
						HX_STACK_LINE(433)
						int tmp73 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(433)
						::String tmp74 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanationText_","\xf7","\xc5","\x8c","\xa6") + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(433)
						textObject->set_id(tmp74);
						HX_STACK_LINE(434)
						textObject->set_text(HX_HCSTRING("Explanation","\x39","\xf1","\x7f","\x2d"));
						HX_STACK_LINE(435)
						int tmp75 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(435)
						Dynamic tmp76 = hx::SourceInfo(HX_HCSTRING("UIPopupEditObjectMuseum.hx","\x2b","\xd1","\x62","\xf2"),435,HX_HCSTRING("UIPopupEditObjectMuseum","\x73","\xdb","\x3e","\x16"),HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"));		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(435)
						::haxe::Log_obj::trace(tmp75,tmp76);
						HX_STACK_LINE(436)
						::haxe::ui::toolkit::containers::Grid tmp77 = this->gridObject;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(436)
						::haxe::ui::toolkit::controls::Text tmp78 = textObject;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(436)
						int tmp79 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(436)
						tmp77->addChildAt(tmp78,tmp79);
						HX_STACK_LINE(437)
						::haxe::ui::toolkit::containers::Grid tmp80 = this->gridObject;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(437)
						int tmp81 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(437)
						int tmp82 = (tmp81 - (int)1);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(437)
						Dynamic tmp83 = this->textInputExplanationStructArray->__GetItem(tmp82);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(437)
						::haxe::ui::toolkit::controls::Text tmp84 = tmp83->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(437)
						int tmp85 = tmp80->indexOfChild(tmp84);		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(437)
						int tmp86 = (tmp85 + (int)1);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(437)
						this->textInputExplanationLastIndexInt = tmp86;
						HX_STACK_LINE(439)
						textInputObject->set_disabled(false);
						HX_STACK_LINE(440)
						int tmp87 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(440)
						::String tmp88 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanation_","\xe4","\xe4","\x38","\x19") + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(440)
						textInputObject->set_id(tmp88);
						HX_STACK_LINE(441)
						textInputObject->set_percentWidth((int)100);
						HX_STACK_LINE(442)
						::ObjectMuseum tmp89 = this->selectedMuseumObject;		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(442)
						::String tmp90 = tmp89->GetExplanationStringArray()->__get(loopCounter1Int1);		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(442)
						textInputObject->set_text(tmp90);
						HX_STACK_LINE(443)
						::haxe::ui::toolkit::containers::Grid tmp91 = this->gridObject;		HX_STACK_VAR(tmp91,"tmp91");
						HX_STACK_LINE(443)
						::haxe::ui::toolkit::controls::TextInput tmp92 = textInputObject;		HX_STACK_VAR(tmp92,"tmp92");
						HX_STACK_LINE(443)
						int tmp93 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp93,"tmp93");
						HX_STACK_LINE(443)
						tmp91->addChildAt(tmp92,tmp93);
						HX_STACK_LINE(444)
						::haxe::ui::toolkit::containers::Grid tmp94 = this->gridObject;		HX_STACK_VAR(tmp94,"tmp94");
						HX_STACK_LINE(444)
						int tmp95 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp95,"tmp95");
						HX_STACK_LINE(444)
						int tmp96 = (tmp95 - (int)1);		HX_STACK_VAR(tmp96,"tmp96");
						HX_STACK_LINE(444)
						Dynamic tmp97 = this->textInputExplanationStructArray->__GetItem(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
						HX_STACK_LINE(444)
						::haxe::ui::toolkit::controls::TextInput tmp98 = tmp97->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp98,"tmp98");
						HX_STACK_LINE(444)
						int tmp99 = tmp94->indexOfChild(tmp98);		HX_STACK_VAR(tmp99,"tmp99");
						HX_STACK_LINE(444)
						int tmp100 = (tmp99 + (int)1);		HX_STACK_VAR(tmp100,"tmp100");
						HX_STACK_LINE(444)
						this->textInputExplanationLastIndexInt = tmp100;
						HX_STACK_LINE(446)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(452)
					int tagAmountInt = (int)0;		HX_STACK_VAR(tagAmountInt,"tagAmountInt");
					HX_STACK_LINE(453)
					::ObjectMuseum tmp67 = this->selectedMuseumObject;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(453)
					int tmp68 = tmp67->GetTagObjectArray()->length;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(453)
					tagAmountInt = tmp68;
					HX_STACK_LINE(454)
					loopCounter1Int1 = (int)0;
					HX_STACK_LINE(455)
					while((true)){
						HX_STACK_LINE(455)
						bool tmp69 = (loopCounter1Int1 < tagAmountInt);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(455)
						bool tmp70 = !(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(455)
						if ((tmp70)){
							HX_STACK_LINE(455)
							break;
						}
						HX_STACK_LINE(457)
						::haxe::ui::toolkit::controls::Text tmp71 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(457)
						::haxe::ui::toolkit::controls::Text textObject = tmp71;		HX_STACK_VAR(textObject,"textObject");
						HX_STACK_LINE(458)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp72 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(458)
						::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp72;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
						struct _Function_5_1{
							inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",459,0xf262d12b)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
									__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(459)
						Dynamic tmp73 = _Function_5_1::Block(textObject,listSelectorObject);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(459)
						Dynamic listSelectorTagStruct = tmp73;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
						HX_STACK_LINE(465)
						Dynamic tmp74 = listSelectorTagStruct;		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(465)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp74);
						HX_STACK_LINE(466)
						int tmp75 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(466)
						::String tmp76 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(466)
						textObject->set_id(tmp76);
						HX_STACK_LINE(467)
						textObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
						HX_STACK_LINE(468)
						::haxe::ui::toolkit::containers::Grid tmp77 = this->gridObject;		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(468)
						::haxe::ui::toolkit::controls::Text tmp78 = textObject;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(468)
						tmp77->addChild(tmp78);
						HX_STACK_LINE(469)
						listSelectorObject->set_disabled(false);
						HX_STACK_LINE(470)
						int tmp79 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(470)
						::String tmp80 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(470)
						listSelectorObject->set_id(tmp80);
						HX_STACK_LINE(471)
						listSelectorObject->set_percentWidth((int)100);
						HX_STACK_LINE(474)
						listSelectorObject->set_selectedIndex((int)1);
						HX_STACK_LINE(475)
						::ObjectMuseum tmp81 = this->selectedMuseumObject;		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(475)
						::ObjectTag tmp82 = tmp81->GetTagObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(475)
						::String tmp83 = tmp82->GetNameString();		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(475)
						listSelectorObject->set_text(tmp83);
						HX_STACK_LINE(476)
						::haxe::ui::toolkit::data::IDataSource tmp84 = listSelectorObject->get_dataSource();		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(476)
						tmp84->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
						HX_STACK_LINE(478)
						int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(479)
						while((true)){
							HX_STACK_LINE(479)
							int tmp85 = loopCounter2Int;		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(479)
							::CollectionGlobal tmp86 = this->collectionGlobalObject;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(479)
							int tmp87 = tmp86->GetTagObjectArray()->length;		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(479)
							bool tmp88 = (tmp85 < tmp87);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(479)
							bool tmp89 = !(tmp88);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(479)
							if ((tmp89)){
								HX_STACK_LINE(479)
								break;
							}
							HX_STACK_LINE(481)
							bool matchBool = false;		HX_STACK_VAR(matchBool,"matchBool");
							HX_STACK_LINE(482)
							int loopCounter3Int = (int)0;		HX_STACK_VAR(loopCounter3Int,"loopCounter3Int");
							HX_STACK_LINE(483)
							while((true)){
								HX_STACK_LINE(483)
								int tmp90 = loopCounter3Int;		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(483)
								int tmp91 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(483)
								bool tmp92 = (tmp90 < tmp91);		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(483)
								bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(483)
								if ((tmp93)){
									HX_STACK_LINE(483)
									break;
								}
								HX_STACK_LINE(485)
								::CollectionGlobal tmp94 = this->collectionGlobalObject;		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(485)
								::ObjectTag tmp95 = tmp94->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp95,"tmp95");
								HX_STACK_LINE(485)
								::String tmp96 = tmp95->GetNameString();		HX_STACK_VAR(tmp96,"tmp96");
								HX_STACK_LINE(485)
								Dynamic tmp97 = this->listSelectorTagStructArray->__GetItem(loopCounter3Int);		HX_STACK_VAR(tmp97,"tmp97");
								HX_STACK_LINE(485)
								::String tmp98 = tmp97->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp98,"tmp98");
								HX_STACK_LINE(485)
								bool tmp99 = (tmp96 == tmp98);		HX_STACK_VAR(tmp99,"tmp99");
								HX_STACK_LINE(485)
								if ((tmp99)){
									HX_STACK_LINE(485)
									matchBool = true;
								}
								HX_STACK_LINE(486)
								(loopCounter3Int)++;
							}
							HX_STACK_LINE(490)
							bool tmp90 = (matchBool == false);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(490)
							if ((tmp90)){
								HX_STACK_LINE(491)
								::haxe::ui::toolkit::data::IDataSource tmp91 = listSelectorObject->get_dataSource();		HX_STACK_VAR(tmp91,"tmp91");
								HX_STACK_LINE(491)
								::CollectionGlobal tmp92 = this->collectionGlobalObject;		HX_STACK_VAR(tmp92,"tmp92");
								HX_STACK_LINE(491)
								::ObjectTag tmp93 = tmp92->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp93,"tmp93");
								HX_STACK_LINE(491)
								::String tmp94 = tmp93->GetNameString();		HX_STACK_VAR(tmp94,"tmp94");
								HX_STACK_LINE(491)
								tmp91->createFromString(tmp94,null());
							}
							HX_STACK_LINE(494)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(497)
						::haxe::ui::toolkit::containers::Grid tmp85 = this->gridObject;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(497)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp86 = listSelectorObject;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(497)
						tmp85->addChild(tmp86);
						HX_STACK_LINE(498)
						listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
						HX_STACK_LINE(500)
						(loopCounter1Int1)++;
					}
					HX_STACK_LINE(503)
					::haxe::ui::toolkit::controls::TextInput tmp69 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(503)
					::ObjectMuseum tmp70 = this->selectedMuseumObject;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(503)
					Dynamic tmp71 = tmp70->GetNameStruct();		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(503)
					::String tmp72 = tmp71->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(503)
					tmp69->set_text(tmp72);
					HX_STACK_LINE(504)
					::haxe::ui::toolkit::controls::TextInput tmp73 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(504)
					::ObjectMuseum tmp74 = this->selectedMuseumObject;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(504)
					Dynamic tmp75 = tmp74->GetNameStruct();		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(504)
					::String tmp76 = tmp75->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(504)
					tmp73->set_text(tmp76);
					HX_STACK_LINE(505)
					::String tmp77 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(505)
					bool tmp78 = (tmp77 != HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(505)
					if ((tmp78)){
						HX_STACK_LINE(506)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp79 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(506)
						::ObjectMuseum tmp80 = this->selectedMuseumObject;		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(506)
						::ObjectMuseum tmp81 = tmp80->GetParentObject();		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(506)
						Dynamic tmp82 = tmp81->GetNameStruct();		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(506)
						::String tmp83 = tmp82->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(506)
						tmp79->set_text(tmp83);
						HX_STACK_LINE(508)
						Array< ::Dynamic > tempObjectArray = null();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
						HX_STACK_LINE(509)
						::String tmp84 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(509)
						bool tmp85 = (tmp84 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(509)
						if ((tmp85)){
							HX_STACK_LINE(509)
							::CollectionGlobal tmp86 = this->collectionGlobalObject;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(509)
							tempObjectArray = tmp86->GetRoomObjectArray();
						}
						else{
							HX_STACK_LINE(510)
							::String tmp86 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(510)
							bool tmp87 = (tmp86 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(510)
							if ((tmp87)){
								HX_STACK_LINE(510)
								::CollectionGlobal tmp88 = this->collectionGlobalObject;		HX_STACK_VAR(tmp88,"tmp88");
								HX_STACK_LINE(510)
								tempObjectArray = tmp88->GetFloorObjectArray();
							}
						}
						HX_STACK_LINE(512)
						loopCounter1Int1 = (int)0;
						HX_STACK_LINE(513)
						while((true)){
							HX_STACK_LINE(513)
							bool tmp86 = (loopCounter1Int1 < tempObjectArray->length);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(513)
							bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(513)
							if ((tmp87)){
								HX_STACK_LINE(513)
								break;
							}
							HX_STACK_LINE(515)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp88 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(515)
							::haxe::ui::toolkit::data::IDataSource tmp89 = tmp88->get_dataSource();		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(515)
							::ObjectMuseum tmp90 = tempObjectArray->__get(loopCounter1Int1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(515)
							Dynamic tmp91 = tmp90->GetNameStruct();		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(515)
							::String tmp92 = tmp91->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(515)
							tmp89->createFromString(tmp92,null());
							HX_STACK_LINE(516)
							(loopCounter1Int1)++;
						}
					}
					else{
						HX_STACK_LINE(521)
						::String tmp79 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(521)
						bool tmp80 = (tmp79 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(521)
						if ((tmp80)){
							HX_STACK_LINE(521)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp81 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(521)
							tmp81->set_disabled(true);
						}
					}
					HX_STACK_LINE(523)
					::ObjectMuseum tmp79 = this->selectedMuseumObject;		HX_STACK_VAR(tmp79,"tmp79");
					HX_STACK_LINE(523)
					this->selectedMuseumPrevObject = tmp79;
				}
			}
		}
		HX_STACK_LINE(531)
		::haxe::ui::toolkit::controls::popups::Popup tmp13 = this->popupObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(531)
		bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(531)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(531)
		if ((tmp14)){
			HX_STACK_LINE(531)
			int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(531)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(531)
			tmp15 = (tmp17 > (int)0);
		}
		else{
			HX_STACK_LINE(531)
			tmp15 = false;
		}
		HX_STACK_LINE(531)
		if ((tmp15)){
			HX_STACK_LINE(537)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(538)
			while((true)){
				HX_STACK_LINE(538)
				int tmp16 = loopCounter1Int1;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(538)
				int tmp17 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(538)
				bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(538)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(538)
				if ((tmp19)){
					HX_STACK_LINE(538)
					break;
				}
				HX_STACK_LINE(541)
				int tmp20 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(541)
				bool tmp21 = (tmp20 > (int)1);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(541)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(541)
				if ((tmp21)){
					HX_STACK_LINE(542)
					Dynamic tmp23 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(542)
					Dynamic tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(542)
					int tmp25 = tmp24->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(542)
					int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(542)
					tmp22 = (tmp26 == (int)0);
				}
				else{
					HX_STACK_LINE(541)
					tmp22 = false;
				}
				HX_STACK_LINE(540)
				if ((tmp22)){
					HX_STACK_LINE(544)
					int tmp23 = loopCounter1Int1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(544)
					int tmp24 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(544)
					int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(544)
					bool tmp26 = (tmp23 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(544)
					if ((tmp26)){
						HX_STACK_LINE(545)
						Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(545)
						tmp27->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
					else{
						HX_STACK_LINE(548)
						::haxe::ui::toolkit::containers::Grid tmp27 = this->gridObject;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(548)
						Dynamic tmp28 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(548)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = tmp28->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(548)
						tmp27->removeChild(tmp29,null());
						HX_STACK_LINE(549)
						::haxe::ui::toolkit::containers::Grid tmp30 = this->gridObject;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(549)
						Dynamic tmp31 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(549)
						::haxe::ui::toolkit::controls::Text tmp32 = tmp31->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(549)
						tmp30->removeChild(tmp32,null());
						HX_STACK_LINE(550)
						Dynamic tmp33 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(550)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp33);
						HX_STACK_LINE(553)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(554)
						while((true)){
							HX_STACK_LINE(554)
							int tmp34 = loopCounter2Int;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(554)
							int tmp35 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(554)
							bool tmp36 = (tmp34 <= tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(554)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(554)
							if ((tmp37)){
								HX_STACK_LINE(554)
								break;
							}
							HX_STACK_LINE(556)
							int tmp38 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(556)
							Dynamic tmp39 = this->listSelectorTagStructArray->__GetItem(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(556)
							::String tmp40 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter2Int);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(556)
							tmp39->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp40);
							HX_STACK_LINE(557)
							int tmp41 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(557)
							Dynamic tmp42 = this->listSelectorTagStructArray->__GetItem(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(557)
							::String tmp43 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter2Int);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(557)
							tmp42->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp43);
							HX_STACK_LINE(558)
							(loopCounter2Int)++;
						}
					}
				}
				else{
					HX_STACK_LINE(563)
					Dynamic tmp23 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(563)
					int tmp24 = tmp23->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(563)
					bool tmp25 = (tmp24 == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(563)
					bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(563)
					if ((tmp25)){
						HX_STACK_LINE(563)
						int tmp27 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(563)
						int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(563)
						tmp26 = (tmp28 == (int)1);
					}
					else{
						HX_STACK_LINE(563)
						tmp26 = false;
					}
					HX_STACK_LINE(563)
					if ((tmp26)){
						HX_STACK_LINE(564)
						Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(564)
						tmp27->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
				}
				HX_STACK_LINE(566)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(570)
			int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(570)
			int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(570)
			Dynamic tmp18 = this->listSelectorTagStructArray->__GetItem(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(570)
			int tmp19 = tmp18->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(570)
			int tmp20 = (int)-1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(570)
			bool tmp21 = (tmp19 != tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(570)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(570)
			if ((tmp21)){
				HX_STACK_LINE(570)
				int tmp23 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(570)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(570)
				int tmp25 = (tmp24 - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(570)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(570)
				Dynamic tmp27 = this->listSelectorTagStructArray->__GetItem(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(570)
				Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(570)
				int tmp29 = tmp28->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(570)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(570)
				tmp22 = (tmp30 != (int)0);
			}
			else{
				HX_STACK_LINE(570)
				tmp22 = false;
			}
			HX_STACK_LINE(570)
			if ((tmp22)){
				HX_STACK_LINE(572)
				::haxe::ui::toolkit::controls::Text tmp23 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(572)
				::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp23;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
				HX_STACK_LINE(573)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(573)
				::haxe::ui::toolkit::controls::selection::ListSelector listSelectorTagObject = tmp24;		HX_STACK_VAR(listSelectorTagObject,"listSelectorTagObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorTagObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",574,0xf262d12b)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorTagObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(574)
				Dynamic tmp25 = _Function_3_1::Block(listSelectorTagTextObject,listSelectorTagObject);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(574)
				Dynamic listSelectorTagStruct = tmp25;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
				HX_STACK_LINE(578)
				Dynamic tmp26 = listSelectorTagStruct;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(578)
				this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp26);
				HX_STACK_LINE(581)
				::haxe::ui::toolkit::controls::Text tmp27 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(581)
				listSelectorTagTextObject = tmp27;
				HX_STACK_LINE(582)
				listSelectorTagTextObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
				HX_STACK_LINE(583)
				int tmp28 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(583)
				::String tmp29 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(583)
				listSelectorTagTextObject->set_id(tmp29);
				HX_STACK_LINE(584)
				::haxe::ui::toolkit::containers::Grid tmp30 = this->gridObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(584)
				::haxe::ui::toolkit::controls::Text tmp31 = listSelectorTagTextObject;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(584)
				tmp30->addChild(tmp31);
				HX_STACK_LINE(586)
				::haxe::ui::toolkit::data::IDataSource tmp32 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(586)
				tmp32->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
				HX_STACK_LINE(588)
				int tmp33 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(588)
				::String tmp34 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(588)
				listSelectorTagObject->set_id(tmp34);
				HX_STACK_LINE(589)
				listSelectorTagObject->set_percentWidth((int)100);
				HX_STACK_LINE(590)
				listSelectorTagObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				HX_STACK_LINE(591)
				::haxe::ui::toolkit::containers::Grid tmp35 = this->gridObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(591)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp36 = listSelectorTagObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(591)
				tmp35->addChild(tmp36);
				HX_STACK_LINE(593)
				Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
				HX_STACK_LINE(595)
				int loopCounter1Int2 = (int)0;		HX_STACK_VAR(loopCounter1Int2,"loopCounter1Int2");
				HX_STACK_LINE(596)
				while((true)){
					HX_STACK_LINE(596)
					int tmp37 = loopCounter1Int2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(596)
					::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(596)
					int tmp39 = tmp38->GetTagObjectArray()->length;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(596)
					bool tmp40 = (tmp37 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(596)
					bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(596)
					if ((tmp41)){
						HX_STACK_LINE(596)
						break;
					}
					HX_STACK_LINE(597)
					::CollectionGlobal tmp42 = this->collectionGlobalObject;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(597)
					::ObjectTag tmp43 = tmp42->GetTagObjectArray()->__get(loopCounter1Int2).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(597)
					::String tmp44 = tmp43->GetNameString();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(597)
					tempUsedTagStringArray->push(tmp44);
					HX_STACK_LINE(598)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(601)
				loopCounter1Int2 = (int)1;
				HX_STACK_LINE(602)
				while((true)){
					HX_STACK_LINE(602)
					int tmp37 = loopCounter1Int2;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(602)
					int tmp38 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(602)
					bool tmp39 = (tmp37 <= tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(602)
					bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(602)
					if ((tmp40)){
						HX_STACK_LINE(602)
						break;
					}
					HX_STACK_LINE(604)
					::haxe::ui::toolkit::controls::popups::Popup tmp41 = this->popupObject;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(604)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp42 = tmp41->get_content();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(604)
					::String tmp43 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter1Int2);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(604)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp44 = tmp42->findChild(tmp43,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(604)
					::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp44;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
					HX_STACK_LINE(605)
					::String tmp45 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(605)
					tempUsedTagStringArray->remove(tmp45);
					HX_STACK_LINE(606)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(610)
				loopCounter1Int2 = (int)0;
				HX_STACK_LINE(611)
				while((true)){
					HX_STACK_LINE(611)
					bool tmp37 = (loopCounter1Int2 < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(611)
					bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(611)
					if ((tmp38)){
						HX_STACK_LINE(611)
						break;
					}
					HX_STACK_LINE(613)
					::haxe::ui::toolkit::data::IDataSource tmp39 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(613)
					::String tmp40 = tempUsedTagStringArray->__get(loopCounter1Int2);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(613)
					tmp39->createFromString(tmp40,null());
					HX_STACK_LINE(614)
					(loopCounter1Int2)++;
				}
				HX_STACK_LINE(618)
				listSelectorTagObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			}
		}
		HX_STACK_LINE(624)
		::haxe::ui::toolkit::controls::popups::Popup tmp16 = this->popupObject;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(624)
		bool tmp17 = (tmp16 != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(624)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(624)
		if ((tmp17)){
			HX_STACK_LINE(624)
			int tmp19 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(624)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(624)
			tmp18 = (tmp20 > (int)0);
		}
		else{
			HX_STACK_LINE(624)
			tmp18 = false;
		}
		HX_STACK_LINE(624)
		if ((tmp18)){
			HX_STACK_LINE(626)
			int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
			HX_STACK_LINE(627)
			while((true)){
				HX_STACK_LINE(627)
				int tmp19 = loopCounter1Int1;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(627)
				int tmp20 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(627)
				bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(627)
				bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(627)
				if ((tmp22)){
					HX_STACK_LINE(627)
					break;
				}
				HX_STACK_LINE(631)
				Dynamic tmp23 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(631)
				::String tmp24 = tmp23->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(631)
				bool tmp25 = (tmp24 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(631)
				bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(631)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(630)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(631)
				if ((tmp27)){
					HX_STACK_LINE(632)
					Dynamic tmp29 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(632)
					Dynamic tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(632)
					Dynamic tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(632)
					::String tmp32 = tmp31->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(632)
					::String tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(632)
					::String tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(632)
					tmp28 = (tmp34 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(631)
					tmp28 = true;
				}
				HX_STACK_LINE(630)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(630)
				if ((tmp28)){
					HX_STACK_LINE(634)
					int tmp30 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(634)
					int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(634)
					tmp29 = (tmp31 > (int)1);
				}
				else{
					HX_STACK_LINE(630)
					tmp29 = false;
				}
				HX_STACK_LINE(629)
				if ((tmp29)){
					HX_STACK_LINE(639)
					int tmp30 = loopCounter1Int1;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(639)
					int tmp31 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(639)
					int tmp32 = (tmp31 - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(639)
					bool tmp33 = (tmp30 != tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(639)
					if ((tmp33)){
						HX_STACK_LINE(641)
						::haxe::ui::toolkit::containers::Grid tmp34 = this->gridObject;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(641)
						Dynamic tmp35 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(641)
						::haxe::ui::toolkit::controls::TextInput tmp36 = tmp35->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(641)
						tmp34->removeChild(tmp36,null());
						HX_STACK_LINE(642)
						::haxe::ui::toolkit::containers::Grid tmp37 = this->gridObject;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(642)
						Dynamic tmp38 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(642)
						::haxe::ui::toolkit::controls::Text tmp39 = tmp38->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(642)
						tmp37->removeChild(tmp39,null());
						HX_STACK_LINE(643)
						Dynamic tmp40 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int1);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(643)
						this->textInputExplanationStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp40);
						HX_STACK_LINE(645)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(646)
						while((true)){
							HX_STACK_LINE(646)
							int tmp41 = loopCounter2Int;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(646)
							int tmp42 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(646)
							bool tmp43 = (tmp41 <= tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(646)
							bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(646)
							if ((tmp44)){
								HX_STACK_LINE(646)
								break;
							}
							HX_STACK_LINE(648)
							int tmp45 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(648)
							Dynamic tmp46 = this->textInputExplanationStructArray->__GetItem(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(648)
							::String tmp47 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanation_","\xe4","\xe4","\x38","\x19") + loopCounter2Int);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(648)
							tmp46->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp47);
							HX_STACK_LINE(649)
							int tmp48 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(649)
							Dynamic tmp49 = this->textInputExplanationStructArray->__GetItem(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(649)
							::String tmp50 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanationText_","\xf7","\xc5","\x8c","\xa6") + loopCounter2Int);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(649)
							tmp49->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp50);
							HX_STACK_LINE(650)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(653)
						::haxe::ui::toolkit::containers::Grid tmp41 = this->gridObject;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(653)
						int tmp42 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(653)
						int tmp43 = (tmp42 - (int)1);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(653)
						Dynamic tmp44 = this->textInputExplanationStructArray->__GetItem(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(653)
						::haxe::ui::toolkit::controls::TextInput tmp45 = tmp44->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(653)
						int tmp46 = tmp41->indexOfChild(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(653)
						int tmp47 = (tmp46 + (int)1);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(653)
						this->textInputExplanationLastIndexInt = tmp47;
					}
				}
				HX_STACK_LINE(658)
				(loopCounter1Int1)++;
			}
			HX_STACK_LINE(663)
			int tmp19 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(663)
			int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(663)
			Dynamic tmp21 = this->textInputExplanationStructArray->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(663)
			::String tmp22 = tmp21->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(663)
			bool tmp23 = (tmp22 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(663)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(663)
			if ((tmp23)){
				HX_STACK_LINE(664)
				int tmp25 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(664)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(664)
				int tmp27 = (tmp26 - (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(664)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(664)
				Dynamic tmp29 = this->textInputExplanationStructArray->__GetItem(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(664)
				Dynamic tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(664)
				::String tmp31 = tmp30->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(664)
				::String tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(664)
				tmp24 = (tmp32 != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(663)
				tmp24 = false;
			}
			HX_STACK_LINE(662)
			if ((tmp24)){
				HX_STACK_LINE(667)
				::haxe::ui::toolkit::controls::Text tmp25 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(667)
				::haxe::ui::toolkit::controls::Text textInputExplanationTextObject = tmp25;		HX_STACK_VAR(textInputExplanationTextObject,"textInputExplanationTextObject");
				HX_STACK_LINE(668)
				::haxe::ui::toolkit::controls::TextInput tmp26 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(668)
				::haxe::ui::toolkit::controls::TextInput textInputExplanationObject = tmp26;		HX_STACK_VAR(textInputExplanationObject,"textInputExplanationObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textInputExplanationTextObject,::haxe::ui::toolkit::controls::TextInput &textInputExplanationObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",669,0xf262d12b)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , textInputExplanationObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textInputExplanationTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(669)
				Dynamic tmp27 = _Function_3_1::Block(textInputExplanationTextObject,textInputExplanationObject);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(669)
				Dynamic textInputExplanationStruct = tmp27;		HX_STACK_VAR(textInputExplanationStruct,"textInputExplanationStruct");
				HX_STACK_LINE(673)
				Dynamic tmp28 = textInputExplanationStruct;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(673)
				this->textInputExplanationStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp28);
				HX_STACK_LINE(675)
				textInputExplanationTextObject->set_text(HX_HCSTRING("Explanation","\x39","\xf1","\x7f","\x2d"));
				HX_STACK_LINE(676)
				int tmp29 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(676)
				::String tmp30 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanationText_","\xf7","\xc5","\x8c","\xa6") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(676)
				textInputExplanationTextObject->set_id(tmp30);
				HX_STACK_LINE(677)
				::haxe::ui::toolkit::containers::Grid tmp31 = this->gridObject;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(677)
				::haxe::ui::toolkit::controls::Text tmp32 = textInputExplanationTextObject;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(677)
				int tmp33 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(677)
				tmp31->addChildAt(tmp32,tmp33);
				HX_STACK_LINE(678)
				::haxe::ui::toolkit::containers::Grid tmp34 = this->gridObject;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(678)
				::haxe::ui::toolkit::controls::Text tmp35 = textInputExplanationTextObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(678)
				int tmp36 = tmp34->indexOfChild(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(678)
				int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(678)
				this->textInputExplanationLastIndexInt = tmp37;
				HX_STACK_LINE(680)
				int tmp38 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(680)
				::String tmp39 = (HX_HCSTRING("UIPopupEditObjectMuseum_InputExplanation_","\xe4","\xe4","\x38","\x19") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(680)
				textInputExplanationObject->set_id(tmp39);
				HX_STACK_LINE(681)
				textInputExplanationObject->set_percentWidth((int)100);
				HX_STACK_LINE(682)
				::haxe::ui::toolkit::containers::Grid tmp40 = this->gridObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(682)
				::haxe::ui::toolkit::controls::TextInput tmp41 = textInputExplanationObject;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(682)
				int tmp42 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(682)
				tmp40->addChildAt(tmp41,tmp42);
				HX_STACK_LINE(683)
				::haxe::ui::toolkit::containers::Grid tmp43 = this->gridObject;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(683)
				::haxe::ui::toolkit::controls::TextInput tmp44 = textInputExplanationObject;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(683)
				int tmp45 = tmp43->indexOfChild(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(683)
				int tmp46 = (tmp45 + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(683)
				this->textInputExplanationLastIndexInt = tmp46;
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
	HX_MARK_MEMBER_NAME(textInputExplanationStructArray,"textInputExplanationStructArray");
	HX_MARK_MEMBER_NAME(textInputExplanationLastIndexInt,"textInputExplanationLastIndexInt");
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
	HX_VISIT_MEMBER_NAME(textInputExplanationStructArray,"textInputExplanationStructArray");
	HX_VISIT_MEMBER_NAME(textInputExplanationLastIndexInt,"textInputExplanationLastIndexInt");
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
		if (HX_FIELD_EQ(inName,"textInputExplanationStructArray") ) { return textInputExplanationStructArray; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorPrevString") ) { return selectTypeListSelectorPrevString; }
		if (HX_FIELD_EQ(inName,"textInputExplanationLastIndexInt") ) { return textInputExplanationLastIndexInt; }
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
		if (HX_FIELD_EQ(inName,"textInputExplanationStructArray") ) { textInputExplanationStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorPrevString") ) { selectTypeListSelectorPrevString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textInputExplanationLastIndexInt") ) { textInputExplanationLastIndexInt=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"selectObjectMuseumListSelectorObject") ) { selectObjectMuseumListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"selectParentNameFullListSelectorObject") ) { selectParentNameFullListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
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
	outFields->push(HX_HCSTRING("textInputExplanationStructArray","\x28","\xd0","\xf7","\xc1"));
	outFields->push(HX_HCSTRING("textInputExplanationLastIndexInt","\xcf","\x2b","\x06","\x45"));
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
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,textInputExplanationStructArray),HX_HCSTRING("textInputExplanationStructArray","\x28","\xd0","\xf7","\xc1")},
	{hx::fsInt,(int)offsetof(UIPopupEditObjectMuseum_obj,textInputExplanationLastIndexInt),HX_HCSTRING("textInputExplanationLastIndexInt","\xcf","\x2b","\x06","\x45")},
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
	HX_HCSTRING("textInputExplanationStructArray","\x28","\xd0","\xf7","\xc1"),
	HX_HCSTRING("textInputExplanationLastIndexInt","\xcf","\x2b","\x06","\x45"),
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
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
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

