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
HX_STACK_FRAME("UIPopupAddObjectMuseum","new",0xeaecbc4c,"UIPopupAddObjectMuseum.new","UIPopupAddObjectMuseum.hx",18,0xbf9e50a4)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(38)
	this->textInputExplanationStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(37)
	this->textInputExplanationObject = null();
	HX_STACK_LINE(36)
	this->textInputExplanationLastIndexInt = (int)-1;
	HX_STACK_LINE(35)
	this->popupObject = null();
	HX_STACK_LINE(34)
	this->nameFullTextInputObject = null();
	HX_STACK_LINE(33)
	this->nameAltTextInputObject = null();
	HX_STACK_LINE(32)
	this->listSelectorTypePrevInt = (int)-1;
	HX_STACK_LINE(31)
	this->listSelectorTypeObject = null();
	HX_STACK_LINE(30)
	this->listSelectorTypeInt = (int)-1;
	HX_STACK_LINE(27)
	this->listSelectorTagObject = null();
	HX_STACK_LINE(26)
	this->listSelectorTagStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(25)
	this->listSelectorParentObject = null();
	HX_STACK_LINE(24)
	this->gridObject = null();
	HX_STACK_LINE(23)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(22)
	this->buttonObject = null();
	HX_STACK_LINE(42)
	::UIPopupAddObjectMuseum _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(47)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupAddMuseumObjectButton","\x2c","\x7c","\x7e","\xc7"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	this->buttonObject = tmp;
	HX_STACK_LINE(49)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupAddObjectMuseum,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupAddObjectMuseum.hx",49,0xbf9e50a4)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(52)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(53)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(54)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(56)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupAddObjectMuseum.xml","\x48","\x02","\xdb","\xee"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(56)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(57)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupAddObjectMuseum,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupAddObjectMuseum.hx",57,0xbf9e50a4)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(61)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(61)
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
						::String tmp9 = _g->listSelectorParentObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(68)
						::String parentNameAltString = tmp9;		HX_STACK_VAR(parentNameAltString,"parentNameAltString");
						HX_STACK_LINE(69)
						Array< ::String > explanationStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(explanationStringArray,"explanationStringArray");
						HX_STACK_LINE(70)
						Array< ::Dynamic > tagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tagObjectArray,"tagObjectArray");
						HX_STACK_LINE(71)
						::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
						HX_STACK_LINE(72)
						::String tmp10 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(72)
						bool tmp11 = (tmp10 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(72)
						if ((tmp11)){
							HX_STACK_LINE(72)
							typeEnum = ::EnumMuseumType_obj::EXH;
						}
						else{
							HX_STACK_LINE(73)
							::String tmp12 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(73)
							bool tmp13 = (tmp12 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(73)
							if ((tmp13)){
								HX_STACK_LINE(73)
								typeEnum = ::EnumMuseumType_obj::FLR;
							}
							else{
								HX_STACK_LINE(74)
								::String tmp14 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(74)
								bool tmp15 = (tmp14 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(74)
								if ((tmp15)){
									HX_STACK_LINE(74)
									typeEnum = ::EnumMuseumType_obj::ROM;
								}
							}
						}
						HX_STACK_LINE(76)
						bool tmp12 = (typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(76)
						if ((tmp12)){
							HX_STACK_LINE(76)
							parentNameAltString = HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65");
						}
						HX_STACK_LINE(78)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(79)
						while((true)){
							HX_STACK_LINE(79)
							int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(79)
							int tmp14 = _g->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(79)
							bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(79)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(79)
							if ((tmp16)){
								HX_STACK_LINE(79)
								break;
							}
							HX_STACK_LINE(81)
							Dynamic tmp17 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(81)
							::String tmp18 = tmp17->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(81)
							bool tmp19 = (tmp18 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(81)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(81)
							if ((tmp19)){
								HX_STACK_LINE(82)
								Dynamic tmp21 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(82)
								Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(82)
								::String tmp23 = tmp22->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(82)
								::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(82)
								tmp20 = (tmp24 != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(81)
								tmp20 = false;
							}
							HX_STACK_LINE(80)
							if ((tmp20)){
								HX_STACK_LINE(84)
								Dynamic tmp21 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(84)
								::String tmp22 = tmp21->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(84)
								explanationStringArray->push(tmp22);
							}
							HX_STACK_LINE(86)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(88)
						loopCounter1Int = (int)0;
						HX_STACK_LINE(89)
						while((true)){
							HX_STACK_LINE(89)
							int tmp13 = loopCounter1Int;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(89)
							int tmp14 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(89)
							bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(89)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(89)
							if ((tmp16)){
								HX_STACK_LINE(89)
								break;
							}
							HX_STACK_LINE(90)
							Dynamic tmp17 = _g->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(90)
							::String tmp18 = tmp17->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(90)
							::String tagNameString = tmp18;		HX_STACK_VAR(tagNameString,"tagNameString");
							HX_STACK_LINE(91)
							::CollectionGlobal tmp19 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(91)
							::String tmp20 = tagNameString;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(91)
							::ObjectTag tmp21 = ::CollectionFunction_obj::FindTagObject(tmp19,false,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(91)
							::ObjectTag tagObject = tmp21;		HX_STACK_VAR(tagObject,"tagObject");
							HX_STACK_LINE(92)
							bool tmp22 = (tagObject == null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(92)
							if ((tmp22)){
								HX_STACK_LINE(92)
								::CollectionGlobal tmp23 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(92)
								::String tmp24 = tagNameString;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(92)
								::ObjectTag tmp25 = ::CollectionFunction_obj::FindTagObject(tmp23,true,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(92)
								tagObject = tmp25;
							}
							HX_STACK_LINE(93)
							bool tmp23 = (tagObject != null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(93)
							if ((tmp23)){
								HX_STACK_LINE(93)
								::ObjectTag tmp24 = tagObject;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(93)
								tagObjectArray->push(tmp24);
							}
							HX_STACK_LINE(94)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(99)
						bool tmp13 = (nameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(99)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(99)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(99)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(99)
						if ((tmp15)){
							HX_STACK_LINE(99)
							tmp16 = (nameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(99)
							tmp16 = true;
						}
						HX_STACK_LINE(99)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(99)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(99)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(99)
						if ((tmp18)){
							HX_STACK_LINE(99)
							tmp19 = (nameAltString != null());
						}
						else{
							HX_STACK_LINE(99)
							tmp19 = true;
						}
						HX_STACK_LINE(99)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(99)
						bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(99)
						bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(99)
						if ((tmp21)){
							HX_STACK_LINE(100)
							tmp22 = (nameFullString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(99)
							tmp22 = true;
						}
						HX_STACK_LINE(99)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(99)
						bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(99)
						bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(99)
						if ((tmp24)){
							HX_STACK_LINE(100)
							tmp25 = (nameFullString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(99)
							tmp25 = true;
						}
						HX_STACK_LINE(99)
						bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(99)
						bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(99)
						bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(99)
						if ((tmp27)){
							HX_STACK_LINE(100)
							tmp28 = (nameFullString != null());
						}
						else{
							HX_STACK_LINE(99)
							tmp28 = true;
						}
						HX_STACK_LINE(99)
						bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(99)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(99)
						bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(99)
						if ((tmp30)){
							HX_STACK_LINE(101)
							tmp31 = (parentNameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(99)
							tmp31 = true;
						}
						HX_STACK_LINE(99)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(99)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(99)
						bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(99)
						if ((tmp33)){
							HX_STACK_LINE(101)
							tmp34 = (parentNameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(99)
							tmp34 = true;
						}
						HX_STACK_LINE(99)
						bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(99)
						bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(99)
						bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(99)
						if ((tmp36)){
							HX_STACK_LINE(101)
							tmp37 = (parentNameAltString != null());
						}
						else{
							HX_STACK_LINE(99)
							tmp37 = true;
						}
						HX_STACK_LINE(99)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(99)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(99)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(99)
						if ((tmp39)){
							HX_STACK_LINE(102)
							tmp40 = (explanationStringArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(99)
							tmp40 = true;
						}
						HX_STACK_LINE(99)
						bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(99)
						bool tmp42;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(99)
						if ((tmp41)){
							HX_STACK_LINE(102)
							tmp42 = (tagObjectArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(99)
							tmp42 = true;
						}
						HX_STACK_LINE(98)
						if ((tmp42)){
							HX_STACK_LINE(106)
							::ObjectMuseum tmp43 = ::ObjectMuseum_obj::__new(_g->collectionGlobalObject,explanationStringArray,nameAltString,nameFullString,parentNameAltString,tagObjectArray,typeEnum);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(106)
							::ObjectMuseum museumObject = tmp43;		HX_STACK_VAR(museumObject,"museumObject");
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(57)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Add Museum Object","\xee","\xe7","\xad","\x9e"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			_g->popupObject = tmp6;
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			::haxe::ui::toolkit::controls::TextInput tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputFullName","\x9f","\x65","\xe9","\x88"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			_g->nameFullTextInputObject = tmp8;
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::controls::TextInput tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputAltName","\x8f","\xc1","\xaf","\x4b"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(115)
			_g->nameAltTextInputObject = tmp10;
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::containers::Grid tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_Grid","\x2b","\xf2","\x1c","\xc1"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(116)
			_g->gridObject = tmp12;
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(117)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectObjectParent","\x8a","\x64","\x18","\x72"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(117)
			_g->listSelectorParentObject = tmp14;
			HX_STACK_LINE(118)
			_g->listSelectorParentObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(119)
			_g->listSelectorParentObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectType","\xfb","\x9c","\x93","\x7e"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(120)
			_g->listSelectorTypeObject = tmp16;
			HX_STACK_LINE(121)
			_g->listSelectorTypeObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(124)
			::CollectionFunction_obj::ClearArray(_g->listSelectorTagStructArray);
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_1","\x6b","\xc6","\xb1","\x32"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(125)
			_g->listSelectorTagObject = tmp18;
			HX_STACK_LINE(126)
			_g->listSelectorTagObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp19 = _g->popupObject->get_content();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::controls::Text tmp20 = tmp19->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectTagText_1","\xf8","\xfc","\x7f","\xac"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp20;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
			struct _Function_2_2{
				inline static Dynamic Block( ::UIPopupAddObjectMuseum &_g,::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",128,0xbf9e50a4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , _g->listSelectorTagObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(128)
			Dynamic tmp21 = _Function_2_2::Block(_g,listSelectorTagTextObject);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(128)
			Dynamic listSelectorTagStruct = tmp21;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
			HX_STACK_LINE(132)
			Dynamic tmp22 = listSelectorTagStruct;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(132)
			_g->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
			HX_STACK_LINE(134)
			::haxe::ui::toolkit::data::IDataSource tmp23 = _g->listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(134)
			tmp23->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
			HX_STACK_LINE(136)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				int tmp24 = loopCounter1Int;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(137)
				int tmp25 = _g->collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(137)
				bool tmp26 = (tmp24 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(137)
				bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(137)
				if ((tmp27)){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(138)
				::haxe::ui::toolkit::data::IDataSource tmp28 = _g->listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(138)
				::ObjectTag tmp29 = _g->collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(138)
				::String tmp30 = tmp29->GetNameString();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(138)
				tmp28->createFromString(tmp30,null());
				HX_STACK_LINE(139)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(143)
			::CollectionFunction_obj::ClearArray(_g->textInputExplanationStructArray);
			HX_STACK_LINE(144)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp24 = _g->popupObject->get_content();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(144)
			::haxe::ui::toolkit::controls::TextInput tmp25 = tmp24->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanation_1","\x46","\x24","\x37","\x06"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(144)
			_g->textInputExplanationObject = tmp25;
			HX_STACK_LINE(145)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp26 = _g->popupObject->get_content();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(145)
			::haxe::ui::toolkit::controls::Text tmp27 = tmp26->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanationText_1","\x53","\xe4","\x38","\x83"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(145)
			::haxe::ui::toolkit::controls::Text textInputExplanationTextObject = tmp27;		HX_STACK_VAR(textInputExplanationTextObject,"textInputExplanationTextObject");
			struct _Function_2_3{
				inline static Dynamic Block( ::UIPopupAddObjectMuseum &_g,::haxe::ui::toolkit::controls::Text &textInputExplanationTextObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",146,0xbf9e50a4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , _g->textInputExplanationObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textInputExplanationTextObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(146)
			Dynamic tmp28 = _Function_2_3::Block(_g,textInputExplanationTextObject);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(146)
			Dynamic textInputExplanationStruct = tmp28;		HX_STACK_VAR(textInputExplanationStruct,"textInputExplanationStruct");
			HX_STACK_LINE(150)
			Dynamic tmp29 = textInputExplanationStruct;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(150)
			_g->textInputExplanationStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp29);
			HX_STACK_LINE(151)
			int tmp30 = _g->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(151)
			int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(151)
			Dynamic tmp32 = _g->textInputExplanationStructArray->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(151)
			::haxe::ui::toolkit::controls::TextInput tmp33 = tmp32->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(151)
			int tmp34 = _g->gridObject->indexOfChild(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(151)
			int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(151)
			_g->textInputExplanationLastIndexInt = tmp35;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(49)
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
		HX_STACK_FRAME("UIPopupAddObjectMuseum","UpdateVoid",0x1f655bb1,"UIPopupAddObjectMuseum.UpdateVoid","UIPopupAddObjectMuseum.hx",159,0xbf9e50a4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(161)
		if ((tmp2)){
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp4 = this->listSelectorParentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(161)
			tmp3 = false;
		}
		HX_STACK_LINE(161)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(161)
		if ((tmp3)){
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(161)
			tmp4 = false;
		}
		HX_STACK_LINE(161)
		if ((tmp4)){
			HX_STACK_LINE(163)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(163)
			int tmp6 = tmp5->get_selectedIndex();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			int tmp7 = (int)-1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(163)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(163)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(163)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(163)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(163)
			if ((tmp10)){
				HX_STACK_LINE(163)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(163)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(163)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(163)
				::String tmp15 = tmp14->get_text();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(163)
				::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(163)
				::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(163)
				tmp11 = (tmp17 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(163)
				tmp11 = true;
			}
			HX_STACK_LINE(163)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(163)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(163)
			if ((tmp12)){
				HX_STACK_LINE(163)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(163)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(163)
				::String tmp16 = tmp15->get_text();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(163)
				::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(163)
				tmp13 = (tmp17 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(163)
				tmp13 = true;
			}
			HX_STACK_LINE(163)
			if ((tmp13)){
				HX_STACK_LINE(164)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorParentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(164)
				tmp14->set_disabled(true);
				HX_STACK_LINE(165)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = this->listSelectorTagObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(165)
				tmp15->set_disabled(true);
				HX_STACK_LINE(166)
				::haxe::ui::toolkit::controls::TextInput tmp16 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(166)
				tmp16->set_disabled(true);
				HX_STACK_LINE(167)
				::haxe::ui::toolkit::controls::TextInput tmp17 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(167)
				tmp17->set_disabled(true);
				HX_STACK_LINE(168)
				::haxe::ui::toolkit::controls::TextInput tmp18 = this->textInputExplanationObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(168)
				tmp18->set_disabled(true);
			}
			else{
				HX_STACK_LINE(171)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorTagObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(171)
				tmp14->set_disabled(false);
				HX_STACK_LINE(172)
				::haxe::ui::toolkit::controls::TextInput tmp15 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(172)
				tmp15->set_disabled(false);
				HX_STACK_LINE(173)
				::haxe::ui::toolkit::controls::TextInput tmp16 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(173)
				tmp16->set_disabled(false);
				HX_STACK_LINE(174)
				::haxe::ui::toolkit::controls::TextInput tmp17 = this->textInputExplanationObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(174)
				tmp17->set_disabled(false);
			}
			HX_STACK_LINE(176)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(176)
			::String tmp15 = tmp14->get_text();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(176)
			bool tmp16 = (tmp15 != HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(176)
			if ((tmp16)){
				HX_STACK_LINE(177)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->listSelectorParentObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(177)
				tmp17->set_disabled(false);
			}
			HX_STACK_LINE(180)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(180)
			int tmp18 = tmp17->get_selectedIndex();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(180)
			this->listSelectorTypeInt = tmp18;
			HX_STACK_LINE(181)
			int tmp19 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(181)
			bool tmp20 = (tmp19 == (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(181)
			if ((tmp20)){
				HX_STACK_LINE(181)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->listSelectorParentObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(181)
				tmp21->set_disabled(true);
			}
			HX_STACK_LINE(183)
			int tmp21 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(183)
			int tmp22 = this->listSelectorTypePrevInt;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(183)
			bool tmp23 = (tmp21 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(183)
			if ((tmp23)){
				HX_STACK_LINE(184)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = this->listSelectorParentObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(184)
				::haxe::ui::toolkit::data::IDataSource tmp25 = tmp24->get_dataSource();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(184)
				tmp25->removeAll();
				HX_STACK_LINE(185)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->listSelectorParentObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(185)
				tmp26->set_selectedIndex((int)-1);
				HX_STACK_LINE(187)
				Array< ::Dynamic > tempObjectArray = null();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
				HX_STACK_LINE(188)
				int tmp27 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(188)
				bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(188)
				if ((tmp28)){
					HX_STACK_LINE(188)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->listSelectorParentObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(188)
					tmp29->set_disabled(false);
					HX_STACK_LINE(188)
					::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(188)
					tempObjectArray = tmp30->GetRoomObjectArray();
				}
				else{
					HX_STACK_LINE(189)
					int tmp29 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(189)
					bool tmp30 = (tmp29 == (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(189)
					if ((tmp30)){
						HX_STACK_LINE(189)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp31 = this->listSelectorParentObject;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(189)
						tmp31->set_disabled(true);
					}
					else{
						HX_STACK_LINE(190)
						int tmp31 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(190)
						bool tmp32 = (tmp31 == (int)2);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(190)
						if ((tmp32)){
							HX_STACK_LINE(190)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp33 = this->listSelectorParentObject;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(190)
							tmp33->set_disabled(false);
							HX_STACK_LINE(190)
							::CollectionGlobal tmp34 = this->collectionGlobalObject;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(190)
							tempObjectArray = tmp34->GetFloorObjectArray();
						}
					}
				}
				HX_STACK_LINE(192)
				int tmp29 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(192)
				int tmp30 = (int)-1;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(192)
				bool tmp31 = (tmp29 != tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(192)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(192)
				if ((tmp31)){
					HX_STACK_LINE(192)
					int tmp33 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(192)
					int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(192)
					tmp32 = (tmp34 != (int)1);
				}
				else{
					HX_STACK_LINE(192)
					tmp32 = false;
				}
				HX_STACK_LINE(192)
				if ((tmp32)){
					HX_STACK_LINE(193)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(194)
					while((true)){
						HX_STACK_LINE(194)
						bool tmp33 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(194)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(194)
						if ((tmp34)){
							HX_STACK_LINE(194)
							break;
						}
						HX_STACK_LINE(195)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->listSelectorParentObject;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(195)
						::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(195)
						::ObjectMuseum tmp37 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(195)
						Dynamic tmp38 = tmp37->GetNameStruct();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(195)
						::String tmp39 = tmp38->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(195)
						tmp36->createFromString(tmp39,null());
						HX_STACK_LINE(196)
						(loopCounter1Int)++;
					}
				}
				HX_STACK_LINE(200)
				int tmp33 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(200)
				this->listSelectorTypePrevInt = tmp33;
			}
		}
		HX_STACK_LINE(205)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = this->popupObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(205)
		if ((tmp6)){
			HX_STACK_LINE(205)
			int tmp8 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			tmp7 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(205)
			tmp7 = false;
		}
		HX_STACK_LINE(205)
		if ((tmp7)){
			HX_STACK_LINE(210)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(211)
			while((true)){
				HX_STACK_LINE(211)
				int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(211)
				int tmp9 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(211)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(211)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(211)
				if ((tmp11)){
					HX_STACK_LINE(211)
					break;
				}
				HX_STACK_LINE(213)
				Dynamic tmp12 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(213)
				int tmp13 = tmp12->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(213)
				bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(213)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(213)
				if ((tmp14)){
					HX_STACK_LINE(213)
					int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(213)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(213)
					tmp15 = (tmp17 > (int)1);
				}
				else{
					HX_STACK_LINE(213)
					tmp15 = false;
				}
				HX_STACK_LINE(213)
				if ((tmp15)){
					HX_STACK_LINE(214)
					int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(214)
					int tmp17 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(214)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(214)
					bool tmp19 = (tmp16 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(214)
					if ((tmp19)){
						HX_STACK_LINE(215)
						Dynamic tmp20 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(215)
						tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
					else{
						HX_STACK_LINE(218)
						::haxe::ui::toolkit::containers::Grid tmp20 = this->gridObject;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(218)
						Dynamic tmp21 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(218)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = tmp21->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(218)
						tmp20->removeChild(tmp22,null());
						HX_STACK_LINE(219)
						::haxe::ui::toolkit::containers::Grid tmp23 = this->gridObject;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(219)
						Dynamic tmp24 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(219)
						::haxe::ui::toolkit::controls::Text tmp25 = tmp24->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(219)
						tmp23->removeChild(tmp25,null());
						HX_STACK_LINE(220)
						Dynamic tmp26 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(220)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp26);
						HX_STACK_LINE(223)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(224)
						while((true)){
							HX_STACK_LINE(224)
							int tmp27 = loopCounter2Int;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(224)
							int tmp28 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(224)
							bool tmp29 = (tmp27 <= tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(224)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(224)
							if ((tmp30)){
								HX_STACK_LINE(224)
								break;
							}
							HX_STACK_LINE(226)
							int tmp31 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(226)
							Dynamic tmp32 = this->listSelectorTagStructArray->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(226)
							::String tmp33 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter2Int);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(226)
							tmp32->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp33);
							HX_STACK_LINE(227)
							int tmp34 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(227)
							Dynamic tmp35 = this->listSelectorTagStructArray->__GetItem(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(227)
							::String tmp36 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter2Int);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(227)
							tmp35->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp36);
							HX_STACK_LINE(228)
							(loopCounter2Int)++;
						}
					}
				}
				else{
					HX_STACK_LINE(233)
					Dynamic tmp16 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(233)
					int tmp17 = tmp16->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(233)
					bool tmp18 = (tmp17 == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(233)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(233)
					if ((tmp18)){
						HX_STACK_LINE(233)
						int tmp20 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(233)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(233)
						tmp19 = (tmp21 == (int)1);
					}
					else{
						HX_STACK_LINE(233)
						tmp19 = false;
					}
					HX_STACK_LINE(233)
					if ((tmp19)){
						HX_STACK_LINE(234)
						Dynamic tmp20 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(234)
						tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
				}
				HX_STACK_LINE(236)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(240)
			int tmp8 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(240)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(240)
			Dynamic tmp10 = this->listSelectorTagStructArray->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(240)
			int tmp11 = tmp10->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(240)
			int tmp12 = (int)-1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(240)
			bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(240)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(240)
			if ((tmp13)){
				HX_STACK_LINE(240)
				int tmp15 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(240)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(240)
				int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(240)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(240)
				Dynamic tmp19 = this->listSelectorTagStructArray->__GetItem(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(240)
				Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(240)
				int tmp21 = tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(240)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(240)
				tmp14 = (tmp22 != (int)0);
			}
			else{
				HX_STACK_LINE(240)
				tmp14 = false;
			}
			HX_STACK_LINE(240)
			if ((tmp14)){
				HX_STACK_LINE(242)
				::haxe::ui::toolkit::controls::Text tmp15 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(242)
				::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp15;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
				HX_STACK_LINE(243)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(243)
				::haxe::ui::toolkit::controls::selection::ListSelector listSelectorTagObject = tmp16;		HX_STACK_VAR(listSelectorTagObject,"listSelectorTagObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorTagObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",244,0xbf9e50a4)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorTagObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(244)
				Dynamic tmp17 = _Function_3_1::Block(listSelectorTagTextObject,listSelectorTagObject);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(244)
				Dynamic listSelectorTagStruct = tmp17;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
				HX_STACK_LINE(248)
				Dynamic tmp18 = listSelectorTagStruct;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(248)
				this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp18);
				HX_STACK_LINE(250)
				listSelectorTagTextObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
				HX_STACK_LINE(251)
				int tmp19 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(251)
				::String tmp20 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTagText_","\x19","\xf9","\x39","\xc6") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(251)
				listSelectorTagTextObject->set_id(tmp20);
				HX_STACK_LINE(252)
				::haxe::ui::toolkit::containers::Grid tmp21 = this->gridObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(252)
				::haxe::ui::toolkit::controls::Text tmp22 = listSelectorTagTextObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(252)
				tmp21->addChild(tmp22);
				HX_STACK_LINE(254)
				::haxe::ui::toolkit::data::IDataSource tmp23 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(254)
				tmp23->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
				HX_STACK_LINE(255)
				int tmp24 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(255)
				::String tmp25 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(255)
				listSelectorTagObject->set_id(tmp25);
				HX_STACK_LINE(256)
				listSelectorTagObject->set_percentWidth((int)100);
				HX_STACK_LINE(257)
				listSelectorTagObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				HX_STACK_LINE(258)
				::haxe::ui::toolkit::containers::Grid tmp26 = this->gridObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(258)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp27 = listSelectorTagObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(258)
				tmp26->addChild(tmp27);
				HX_STACK_LINE(260)
				Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
				HX_STACK_LINE(261)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(262)
				while((true)){
					HX_STACK_LINE(262)
					int tmp28 = loopCounter1Int1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(262)
					::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(262)
					int tmp30 = tmp29->GetTagObjectArray()->length;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(262)
					bool tmp31 = (tmp28 < tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(262)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(262)
					if ((tmp32)){
						HX_STACK_LINE(262)
						break;
					}
					HX_STACK_LINE(263)
					::CollectionGlobal tmp33 = this->collectionGlobalObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(263)
					::ObjectTag tmp34 = tmp33->GetTagObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(263)
					::String tmp35 = tmp34->GetNameString();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(263)
					tempUsedTagStringArray->push(tmp35);
					HX_STACK_LINE(264)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(266)
				loopCounter1Int1 = (int)1;
				HX_STACK_LINE(267)
				while((true)){
					HX_STACK_LINE(267)
					int tmp28 = loopCounter1Int1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(267)
					int tmp29 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(267)
					bool tmp30 = (tmp28 <= tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(267)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(267)
					if ((tmp31)){
						HX_STACK_LINE(267)
						break;
					}
					HX_STACK_LINE(269)
					::haxe::ui::toolkit::controls::popups::Popup tmp32 = this->popupObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(269)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp33 = tmp32->get_content();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(269)
					::String tmp34 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + loopCounter1Int1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(269)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = tmp33->findChild(tmp34,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(269)
					::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp35;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
					HX_STACK_LINE(270)
					::String tmp36 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(270)
					tempUsedTagStringArray->remove(tmp36);
					HX_STACK_LINE(271)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(274)
				loopCounter1Int1 = (int)0;
				HX_STACK_LINE(275)
				while((true)){
					HX_STACK_LINE(275)
					bool tmp28 = (loopCounter1Int1 < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(275)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(275)
					if ((tmp29)){
						HX_STACK_LINE(275)
						break;
					}
					HX_STACK_LINE(277)
					::haxe::ui::toolkit::data::IDataSource tmp30 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(277)
					::String tmp31 = tempUsedTagStringArray->__get(loopCounter1Int1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(277)
					tmp30->createFromString(tmp31,null());
					HX_STACK_LINE(278)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(284)
				listSelectorTagObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			}
		}
		HX_STACK_LINE(290)
		::haxe::ui::toolkit::controls::popups::Popup tmp8 = this->popupObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(290)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(290)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(290)
		if ((tmp9)){
			HX_STACK_LINE(290)
			int tmp11 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(290)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(290)
			tmp10 = (tmp12 > (int)0);
		}
		else{
			HX_STACK_LINE(290)
			tmp10 = false;
		}
		HX_STACK_LINE(290)
		if ((tmp10)){
			HX_STACK_LINE(292)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				int tmp12 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(293)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(293)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(293)
				if ((tmp14)){
					HX_STACK_LINE(293)
					break;
				}
				HX_STACK_LINE(297)
				Dynamic tmp15 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(297)
				::String tmp16 = tmp15->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(297)
				bool tmp17 = (tmp16 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(297)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(297)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(296)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(297)
				if ((tmp19)){
					HX_STACK_LINE(298)
					Dynamic tmp21 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(298)
					Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(298)
					Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(298)
					::String tmp24 = tmp23->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(298)
					::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(298)
					::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(298)
					tmp20 = (tmp26 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(297)
					tmp20 = true;
				}
				HX_STACK_LINE(296)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(296)
				if ((tmp20)){
					HX_STACK_LINE(300)
					int tmp22 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(300)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(300)
					tmp21 = (tmp23 > (int)1);
				}
				else{
					HX_STACK_LINE(296)
					tmp21 = false;
				}
				HX_STACK_LINE(295)
				if ((tmp21)){
					HX_STACK_LINE(305)
					int tmp22 = loopCounter1Int;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(305)
					int tmp23 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(305)
					int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(305)
					bool tmp25 = (tmp22 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(305)
					if ((tmp25)){
						HX_STACK_LINE(307)
						::haxe::ui::toolkit::containers::Grid tmp26 = this->gridObject;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(307)
						Dynamic tmp27 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(307)
						::haxe::ui::toolkit::controls::TextInput tmp28 = tmp27->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(307)
						tmp26->removeChild(tmp28,null());
						HX_STACK_LINE(308)
						::haxe::ui::toolkit::containers::Grid tmp29 = this->gridObject;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(308)
						Dynamic tmp30 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(308)
						::haxe::ui::toolkit::controls::Text tmp31 = tmp30->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(308)
						tmp29->removeChild(tmp31,null());
						HX_STACK_LINE(309)
						Dynamic tmp32 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(309)
						this->textInputExplanationStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp32);
						HX_STACK_LINE(311)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(312)
						while((true)){
							HX_STACK_LINE(312)
							int tmp33 = loopCounter2Int;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(312)
							int tmp34 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(312)
							bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(312)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(312)
							if ((tmp36)){
								HX_STACK_LINE(312)
								break;
							}
							HX_STACK_LINE(314)
							int tmp37 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(314)
							Dynamic tmp38 = this->textInputExplanationStructArray->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(314)
							::String tmp39 = (HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanation_","\x8b","\xb5","\x87","\x70") + loopCounter2Int);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(314)
							tmp38->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp39);
							HX_STACK_LINE(315)
							int tmp40 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(315)
							Dynamic tmp41 = this->textInputExplanationStructArray->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(315)
							::String tmp42 = (HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanationText_","\x1e","\x76","\x6e","\x3d") + loopCounter2Int);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(315)
							tmp41->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp42);
							HX_STACK_LINE(316)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(319)
						::haxe::ui::toolkit::containers::Grid tmp33 = this->gridObject;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(319)
						int tmp34 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(319)
						int tmp35 = (tmp34 - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(319)
						Dynamic tmp36 = this->textInputExplanationStructArray->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(319)
						::haxe::ui::toolkit::controls::TextInput tmp37 = tmp36->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(319)
						int tmp38 = tmp33->indexOfChild(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(319)
						int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(319)
						this->textInputExplanationLastIndexInt = tmp39;
					}
				}
				HX_STACK_LINE(324)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(329)
			int tmp11 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(329)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(329)
			Dynamic tmp13 = this->textInputExplanationStructArray->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(329)
			::String tmp14 = tmp13->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(329)
			bool tmp15 = (tmp14 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(329)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(329)
			if ((tmp15)){
				HX_STACK_LINE(330)
				int tmp17 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(330)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(330)
				int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(330)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(330)
				Dynamic tmp21 = this->textInputExplanationStructArray->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(330)
				Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(330)
				::String tmp23 = tmp22->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(330)
				::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(330)
				tmp16 = (tmp24 != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(329)
				tmp16 = false;
			}
			HX_STACK_LINE(328)
			if ((tmp16)){
				HX_STACK_LINE(333)
				::haxe::ui::toolkit::controls::Text tmp17 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(333)
				::haxe::ui::toolkit::controls::Text textInputExplanationTextObject = tmp17;		HX_STACK_VAR(textInputExplanationTextObject,"textInputExplanationTextObject");
				HX_STACK_LINE(334)
				::haxe::ui::toolkit::controls::TextInput tmp18 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(334)
				::haxe::ui::toolkit::controls::TextInput textInputExplanationObject = tmp18;		HX_STACK_VAR(textInputExplanationObject,"textInputExplanationObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textInputExplanationTextObject,::haxe::ui::toolkit::controls::TextInput &textInputExplanationObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",335,0xbf9e50a4)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , textInputExplanationObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textInputExplanationTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(335)
				Dynamic tmp19 = _Function_3_1::Block(textInputExplanationTextObject,textInputExplanationObject);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(335)
				Dynamic textInputExplanationStruct = tmp19;		HX_STACK_VAR(textInputExplanationStruct,"textInputExplanationStruct");
				HX_STACK_LINE(339)
				Dynamic tmp20 = textInputExplanationStruct;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(339)
				this->textInputExplanationStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
				HX_STACK_LINE(341)
				textInputExplanationTextObject->set_text(HX_HCSTRING("Explanation","\x39","\xf1","\x7f","\x2d"));
				HX_STACK_LINE(342)
				int tmp21 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(342)
				::String tmp22 = (HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanationText_","\x1e","\x76","\x6e","\x3d") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(342)
				textInputExplanationTextObject->set_id(tmp22);
				HX_STACK_LINE(343)
				::haxe::ui::toolkit::containers::Grid tmp23 = this->gridObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(343)
				::haxe::ui::toolkit::controls::Text tmp24 = textInputExplanationTextObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(343)
				int tmp25 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(343)
				tmp23->addChildAt(tmp24,tmp25);
				HX_STACK_LINE(344)
				::haxe::ui::toolkit::containers::Grid tmp26 = this->gridObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(344)
				::haxe::ui::toolkit::controls::Text tmp27 = textInputExplanationTextObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(344)
				int tmp28 = tmp26->indexOfChild(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(344)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(344)
				this->textInputExplanationLastIndexInt = tmp29;
				HX_STACK_LINE(346)
				int tmp30 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(346)
				::String tmp31 = (HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanation_","\x8b","\xb5","\x87","\x70") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(346)
				textInputExplanationObject->set_id(tmp31);
				HX_STACK_LINE(347)
				textInputExplanationObject->set_percentWidth((int)100);
				HX_STACK_LINE(348)
				::haxe::ui::toolkit::containers::Grid tmp32 = this->gridObject;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(348)
				::haxe::ui::toolkit::controls::TextInput tmp33 = textInputExplanationObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(348)
				int tmp34 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(348)
				tmp32->addChildAt(tmp33,tmp34);
				HX_STACK_LINE(349)
				::haxe::ui::toolkit::containers::Grid tmp35 = this->gridObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(349)
				::haxe::ui::toolkit::controls::TextInput tmp36 = textInputExplanationObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(349)
				int tmp37 = tmp35->indexOfChild(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(349)
				int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(349)
				this->textInputExplanationLastIndexInt = tmp38;
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
	HX_MARK_MEMBER_NAME(listSelectorTagObject,"listSelectorTagObject");
	HX_MARK_MEMBER_NAME(listSelectorTypeInt,"listSelectorTypeInt");
	HX_MARK_MEMBER_NAME(listSelectorTypeObject,"listSelectorTypeObject");
	HX_MARK_MEMBER_NAME(listSelectorTypePrevInt,"listSelectorTypePrevInt");
	HX_MARK_MEMBER_NAME(nameAltTextInputObject,"nameAltTextInputObject");
	HX_MARK_MEMBER_NAME(nameFullTextInputObject,"nameFullTextInputObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(textInputExplanationLastIndexInt,"textInputExplanationLastIndexInt");
	HX_MARK_MEMBER_NAME(textInputExplanationObject,"textInputExplanationObject");
	HX_MARK_MEMBER_NAME(textInputExplanationStructArray,"textInputExplanationStructArray");
	HX_MARK_END_CLASS();
}

void UIPopupAddObjectMuseum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(gridObject,"gridObject");
	HX_VISIT_MEMBER_NAME(listSelectorParentObject,"listSelectorParentObject");
	HX_VISIT_MEMBER_NAME(listSelectorTagStructArray,"listSelectorTagStructArray");
	HX_VISIT_MEMBER_NAME(listSelectorTagObject,"listSelectorTagObject");
	HX_VISIT_MEMBER_NAME(listSelectorTypeInt,"listSelectorTypeInt");
	HX_VISIT_MEMBER_NAME(listSelectorTypeObject,"listSelectorTypeObject");
	HX_VISIT_MEMBER_NAME(listSelectorTypePrevInt,"listSelectorTypePrevInt");
	HX_VISIT_MEMBER_NAME(nameAltTextInputObject,"nameAltTextInputObject");
	HX_VISIT_MEMBER_NAME(nameFullTextInputObject,"nameFullTextInputObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(textInputExplanationLastIndexInt,"textInputExplanationLastIndexInt");
	HX_VISIT_MEMBER_NAME(textInputExplanationObject,"textInputExplanationObject");
	HX_VISIT_MEMBER_NAME(textInputExplanationStructArray,"textInputExplanationStructArray");
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
	case 21:
		if (HX_FIELD_EQ(inName,"listSelectorTagObject") ) { return listSelectorTagObject; }
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
		if (HX_FIELD_EQ(inName,"textInputExplanationObject") ) { return textInputExplanationObject; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"textInputExplanationStructArray") ) { return textInputExplanationStructArray; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"textInputExplanationLastIndexInt") ) { return textInputExplanationLastIndexInt; }
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
	case 21:
		if (HX_FIELD_EQ(inName,"listSelectorTagObject") ) { listSelectorTagObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"textInputExplanationObject") ) { textInputExplanationObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"textInputExplanationStructArray") ) { textInputExplanationStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"textInputExplanationLastIndexInt") ) { textInputExplanationLastIndexInt=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIPopupAddObjectMuseum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b"));
	outFields->push(HX_HCSTRING("listSelectorParentObject","\xc6","\x90","\xbc","\xfe"));
	outFields->push(HX_HCSTRING("listSelectorTagStructArray","\x47","\xfd","\x6a","\x8d"));
	outFields->push(HX_HCSTRING("listSelectorTagObject","\x5c","\x37","\x68","\x6f"));
	outFields->push(HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8"));
	outFields->push(HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37"));
	outFields->push(HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1"));
	outFields->push(HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b"));
	outFields->push(HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("textInputExplanationLastIndexInt","\xcf","\x2b","\x06","\x45"));
	outFields->push(HX_HCSTRING("textInputExplanationObject","\x1b","\x50","\xee","\x03"));
	outFields->push(HX_HCSTRING("textInputExplanationStructArray","\x28","\xd0","\xf7","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Grid*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,gridObject),HX_HCSTRING("gridObject","\x25","\x22","\x5e","\x4b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorParentObject),HX_HCSTRING("listSelectorParentObject","\xc6","\x90","\xbc","\xfe")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTagStructArray),HX_HCSTRING("listSelectorTagStructArray","\x47","\xfd","\x6a","\x8d")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTagObject),HX_HCSTRING("listSelectorTagObject","\x5c","\x37","\x68","\x6f")},
	{hx::fsInt,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypeInt),HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypeObject),HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37")},
	{hx::fsInt,(int)offsetof(UIPopupAddObjectMuseum_obj,listSelectorTypePrevInt),HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,nameAltTextInputObject),HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,nameFullTextInputObject),HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsInt,(int)offsetof(UIPopupAddObjectMuseum_obj,textInputExplanationLastIndexInt),HX_HCSTRING("textInputExplanationLastIndexInt","\xcf","\x2b","\x06","\x45")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,textInputExplanationObject),HX_HCSTRING("textInputExplanationObject","\x1b","\x50","\xee","\x03")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(UIPopupAddObjectMuseum_obj,textInputExplanationStructArray),HX_HCSTRING("textInputExplanationStructArray","\x28","\xd0","\xf7","\xc1")},
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
	HX_HCSTRING("listSelectorTagObject","\x5c","\x37","\x68","\x6f"),
	HX_HCSTRING("listSelectorTypeInt","\x38","\x6e","\x87","\xe8"),
	HX_HCSTRING("listSelectorTypeObject","\x16","\x51","\x5b","\x37"),
	HX_HCSTRING("listSelectorTypePrevInt","\x85","\xd9","\xfe","\xf1"),
	HX_HCSTRING("nameAltTextInputObject","\xbe","\x84","\x38","\x0b"),
	HX_HCSTRING("nameFullTextInputObject","\x62","\x72","\x2a","\xb0"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("textInputExplanationLastIndexInt","\xcf","\x2b","\x06","\x45"),
	HX_HCSTRING("textInputExplanationObject","\x1b","\x50","\xee","\x03"),
	HX_HCSTRING("textInputExplanationStructArray","\x28","\xd0","\xf7","\xc1"),
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
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
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

