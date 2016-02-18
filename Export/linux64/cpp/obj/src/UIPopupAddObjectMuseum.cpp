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
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectMuseum
#include <UIPopupAddObjectMuseum.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
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
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
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
			HX_STACK_LINE(51)
			::Sys_obj::command(HX_HCSTRING("python3 WordnikGetPhrase.py 'cable' > Phrase.txt","\x27","\x87","\xc3","\x40"),null());
			HX_STACK_LINE(52)
			::sys::io::FileInput tmp2 = ::sys::io::File_obj::read(HX_HCSTRING("./Phrase.txt","\x1c","\xa7","\xef","\xbd"),false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			::sys::io::FileInput fileTXTObject = tmp2;		HX_STACK_VAR(fileTXTObject,"fileTXTObject");
			HX_STACK_LINE(53)
			try
			{
			HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
			{
				HX_STACK_LINE(54)
				while((true)){
					HX_STACK_LINE(55)
					::String tmp3 = fileTXTObject->readLine();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(55)
					::String string = tmp3;		HX_STACK_VAR(string,"string");
					HX_STACK_LINE(56)
					::String tmp4 = string;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(56)
					Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("UIPopupAddObjectMuseum.hx","\xa4","\x50","\x9e","\xbf"),56,HX_HCSTRING("UIPopupAddObjectMuseum","\x5a","\xe6","\x35","\x12"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(56)
					::haxe::Log_obj::trace(tmp4,tmp5);
				}
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::haxe::io::Eof >() ){
					HX_STACK_BEGIN_CATCH
					::haxe::io::Eof _exception = __e;{
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
			HX_STACK_LINE(60)
			fileTXTObject->close();
			HX_STACK_LINE(63)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(64)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(65)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupAddObjectMuseum.xml","\x48","\x02","\xdb","\xee"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp3;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::core::PopupManager tmp4 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = iDisplayObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			int tmp6 = buttonControlInt;		HX_STACK_VAR(tmp6,"tmp6");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupAddObjectMuseum,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupAddObjectMuseum.hx",68,0xbf9e50a4)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(72)
					bool tmp7 = (_button == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(72)
					if ((tmp7)){
						HX_STACK_LINE(77)
						::String tmp8 = _g->nameAltTextInputObject->get_text();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(77)
						::String nameAltString = tmp8;		HX_STACK_VAR(nameAltString,"nameAltString");
						HX_STACK_LINE(78)
						::String tmp9 = _g->nameFullTextInputObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(78)
						::String nameFullString = tmp9;		HX_STACK_VAR(nameFullString,"nameFullString");
						HX_STACK_LINE(79)
						::String tmp10 = _g->listSelectorParentObject->get_text();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						::String parentNameAltString = tmp10;		HX_STACK_VAR(parentNameAltString,"parentNameAltString");
						HX_STACK_LINE(80)
						Array< ::String > explanationStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(explanationStringArray,"explanationStringArray");
						HX_STACK_LINE(81)
						Array< ::Dynamic > tagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tagObjectArray,"tagObjectArray");
						HX_STACK_LINE(82)
						::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
						HX_STACK_LINE(83)
						::String tmp11 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(83)
						bool tmp12 = (tmp11 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(83)
						if ((tmp12)){
							HX_STACK_LINE(83)
							typeEnum = ::EnumMuseumType_obj::EXH;
						}
						else{
							HX_STACK_LINE(84)
							::String tmp13 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(84)
							bool tmp14 = (tmp13 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(84)
							if ((tmp14)){
								HX_STACK_LINE(84)
								typeEnum = ::EnumMuseumType_obj::FLR;
							}
							else{
								HX_STACK_LINE(85)
								::String tmp15 = _g->listSelectorTypeObject->get_text();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(85)
								bool tmp16 = (tmp15 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(85)
								if ((tmp16)){
									HX_STACK_LINE(85)
									typeEnum = ::EnumMuseumType_obj::ROM;
								}
							}
						}
						HX_STACK_LINE(87)
						bool tmp13 = (typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(87)
						if ((tmp13)){
							HX_STACK_LINE(87)
							parentNameAltString = HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65");
						}
						HX_STACK_LINE(89)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(90)
						while((true)){
							HX_STACK_LINE(90)
							int tmp14 = loopCounter1Int;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(90)
							int tmp15 = _g->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(90)
							bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(90)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(90)
							if ((tmp17)){
								HX_STACK_LINE(90)
								break;
							}
							HX_STACK_LINE(92)
							Dynamic tmp18 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(92)
							::String tmp19 = tmp18->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(92)
							bool tmp20 = (tmp19 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(92)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(92)
							if ((tmp20)){
								HX_STACK_LINE(93)
								Dynamic tmp22 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(93)
								Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(93)
								::String tmp24 = tmp23->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(93)
								::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(93)
								tmp21 = (tmp25 != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
							}
							else{
								HX_STACK_LINE(92)
								tmp21 = false;
							}
							HX_STACK_LINE(91)
							if ((tmp21)){
								HX_STACK_LINE(95)
								Dynamic tmp22 = _g->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(95)
								::String tmp23 = tmp22->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(95)
								explanationStringArray->push(tmp23);
							}
							HX_STACK_LINE(97)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(99)
						loopCounter1Int = (int)0;
						HX_STACK_LINE(100)
						while((true)){
							HX_STACK_LINE(100)
							int tmp14 = loopCounter1Int;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(100)
							int tmp15 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(100)
							bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(100)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(100)
							if ((tmp17)){
								HX_STACK_LINE(100)
								break;
							}
							HX_STACK_LINE(101)
							Dynamic tmp18 = _g->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(101)
							::String tmp19 = tmp18->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(101)
							::String tagNameString = tmp19;		HX_STACK_VAR(tagNameString,"tagNameString");
							HX_STACK_LINE(102)
							::CollectionGlobal tmp20 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(102)
							::String tmp21 = tagNameString;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(102)
							::ObjectTag tmp22 = ::CollectionFunction_obj::FindTagObject(tmp20,false,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(102)
							::ObjectTag tagObject = tmp22;		HX_STACK_VAR(tagObject,"tagObject");
							HX_STACK_LINE(103)
							bool tmp23 = (tagObject == null());		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(103)
							if ((tmp23)){
								HX_STACK_LINE(103)
								::CollectionGlobal tmp24 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(103)
								::String tmp25 = tagNameString;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(103)
								::ObjectTag tmp26 = ::CollectionFunction_obj::FindTagObject(tmp24,true,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(103)
								tagObject = tmp26;
							}
							HX_STACK_LINE(104)
							bool tmp24 = (tagObject != null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(104)
							if ((tmp24)){
								HX_STACK_LINE(104)
								::ObjectTag tmp25 = tagObject;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(104)
								tagObjectArray->push(tmp25);
							}
							HX_STACK_LINE(105)
							(loopCounter1Int)++;
						}
						HX_STACK_LINE(110)
						bool tmp14 = (nameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(110)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(110)
						bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(110)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(110)
						if ((tmp16)){
							HX_STACK_LINE(110)
							tmp17 = (nameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(110)
							tmp17 = true;
						}
						HX_STACK_LINE(110)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(110)
						bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(110)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(110)
						if ((tmp19)){
							HX_STACK_LINE(110)
							tmp20 = (nameAltString != null());
						}
						else{
							HX_STACK_LINE(110)
							tmp20 = true;
						}
						HX_STACK_LINE(110)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(110)
						bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(110)
						bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(110)
						if ((tmp22)){
							HX_STACK_LINE(111)
							tmp23 = (nameFullString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(110)
							tmp23 = true;
						}
						HX_STACK_LINE(110)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(110)
						bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(110)
						bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(110)
						if ((tmp25)){
							HX_STACK_LINE(111)
							tmp26 = (nameFullString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(110)
							tmp26 = true;
						}
						HX_STACK_LINE(110)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(110)
						bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(110)
						bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(110)
						if ((tmp28)){
							HX_STACK_LINE(111)
							tmp29 = (nameFullString != null());
						}
						else{
							HX_STACK_LINE(110)
							tmp29 = true;
						}
						HX_STACK_LINE(110)
						bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(110)
						bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(110)
						bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(110)
						if ((tmp31)){
							HX_STACK_LINE(112)
							tmp32 = (parentNameAltString != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(110)
							tmp32 = true;
						}
						HX_STACK_LINE(110)
						bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(110)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(110)
						bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(110)
						if ((tmp34)){
							HX_STACK_LINE(112)
							tmp35 = (parentNameAltString != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
						}
						else{
							HX_STACK_LINE(110)
							tmp35 = true;
						}
						HX_STACK_LINE(110)
						bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(110)
						bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(110)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(110)
						if ((tmp37)){
							HX_STACK_LINE(112)
							tmp38 = (parentNameAltString != null());
						}
						else{
							HX_STACK_LINE(110)
							tmp38 = true;
						}
						HX_STACK_LINE(110)
						bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(110)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(110)
						bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(110)
						if ((tmp40)){
							HX_STACK_LINE(113)
							tmp41 = (explanationStringArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(110)
							tmp41 = true;
						}
						HX_STACK_LINE(110)
						bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(110)
						bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(110)
						if ((tmp42)){
							HX_STACK_LINE(113)
							tmp43 = (tagObjectArray->length != (int)0);
						}
						else{
							HX_STACK_LINE(110)
							tmp43 = true;
						}
						HX_STACK_LINE(109)
						if ((tmp43)){
							HX_STACK_LINE(117)
							::ObjectMuseum tmp44 = ::ObjectMuseum_obj::__new(_g->collectionGlobalObject,explanationStringArray,nameAltString,nameFullString,parentNameAltString,tagObjectArray,typeEnum);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(117)
							::ObjectMuseum museumObject = tmp44;		HX_STACK_VAR(museumObject,"museumObject");
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(68)
			::haxe::ui::toolkit::controls::popups::Popup tmp7 = tmp4->showCustom(tmp5,HX_HCSTRING("Add Museum Object","\xee","\xe7","\xad","\x9e"),tmp6, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(68)
			_g->popupObject = tmp7;
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp8 = _g->popupObject->get_content();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(125)
			::haxe::ui::toolkit::controls::TextInput tmp9 = tmp8->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputFullName","\x9f","\x65","\xe9","\x88"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			_g->nameFullTextInputObject = tmp9;
			HX_STACK_LINE(126)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp10 = _g->popupObject->get_content();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(126)
			::haxe::ui::toolkit::controls::TextInput tmp11 = tmp10->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputAltName","\x8f","\xc1","\xaf","\x4b"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(126)
			_g->nameAltTextInputObject = tmp11;
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp12 = _g->popupObject->get_content();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			::haxe::ui::toolkit::containers::Grid tmp13 = tmp12->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_Grid","\x2b","\xf2","\x1c","\xc1"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			_g->gridObject = tmp13;
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp14 = _g->popupObject->get_content();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(128)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = tmp14->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectObjectParent","\x8a","\x64","\x18","\x72"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(128)
			_g->listSelectorParentObject = tmp15;
			HX_STACK_LINE(129)
			_g->listSelectorParentObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(130)
			_g->listSelectorParentObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(131)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp16 = _g->popupObject->get_content();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(131)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = tmp16->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectType","\xfb","\x9c","\x93","\x7e"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(131)
			_g->listSelectorTypeObject = tmp17;
			HX_STACK_LINE(132)
			_g->listSelectorTypeObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(135)
			::CollectionFunction_obj::ClearArray(_g->listSelectorTagStructArray);
			HX_STACK_LINE(136)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp18 = _g->popupObject->get_content();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(136)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = tmp18->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_1","\x6b","\xc6","\xb1","\x32"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(136)
			_g->listSelectorTagObject = tmp19;
			HX_STACK_LINE(137)
			_g->listSelectorTagObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(138)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp20 = _g->popupObject->get_content();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(138)
			::haxe::ui::toolkit::controls::Text tmp21 = tmp20->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_SelectTagText_1","\xf8","\xfc","\x7f","\xac"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(138)
			::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp21;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
			struct _Function_2_2{
				inline static Dynamic Block( ::UIPopupAddObjectMuseum &_g,::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",139,0xbf9e50a4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , _g->listSelectorTagObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(139)
			Dynamic tmp22 = _Function_2_2::Block(_g,listSelectorTagTextObject);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(139)
			Dynamic listSelectorTagStruct = tmp22;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
			HX_STACK_LINE(143)
			Dynamic tmp23 = listSelectorTagStruct;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(143)
			_g->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
			HX_STACK_LINE(145)
			::haxe::ui::toolkit::data::IDataSource tmp24 = _g->listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(145)
			tmp24->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
			HX_STACK_LINE(147)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(148)
			while((true)){
				HX_STACK_LINE(148)
				int tmp25 = loopCounter1Int;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(148)
				int tmp26 = _g->collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(148)
				bool tmp27 = (tmp25 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(148)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(148)
				if ((tmp28)){
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(149)
				::haxe::ui::toolkit::data::IDataSource tmp29 = _g->listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(149)
				::ObjectTag tmp30 = _g->collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(149)
				::String tmp31 = tmp30->GetNameString();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(149)
				tmp29->createFromString(tmp31,null());
				HX_STACK_LINE(150)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(154)
			::CollectionFunction_obj::ClearArray(_g->textInputExplanationStructArray);
			HX_STACK_LINE(155)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp25 = _g->popupObject->get_content();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(155)
			::haxe::ui::toolkit::controls::TextInput tmp26 = tmp25->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanation_1","\x46","\x24","\x37","\x06"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(155)
			_g->textInputExplanationObject = tmp26;
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp27 = _g->popupObject->get_content();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::controls::Text tmp28 = tmp27->findChild(HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanationText_1","\x53","\xe4","\x38","\x83"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >(),true);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(156)
			::haxe::ui::toolkit::controls::Text textInputExplanationTextObject = tmp28;		HX_STACK_VAR(textInputExplanationTextObject,"textInputExplanationTextObject");
			struct _Function_2_3{
				inline static Dynamic Block( ::UIPopupAddObjectMuseum &_g,::haxe::ui::toolkit::controls::Text &textInputExplanationTextObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",157,0xbf9e50a4)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , _g->textInputExplanationObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textInputExplanationTextObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(157)
			Dynamic tmp29 = _Function_2_3::Block(_g,textInputExplanationTextObject);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(157)
			Dynamic textInputExplanationStruct = tmp29;		HX_STACK_VAR(textInputExplanationStruct,"textInputExplanationStruct");
			HX_STACK_LINE(161)
			Dynamic tmp30 = textInputExplanationStruct;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(161)
			_g->textInputExplanationStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp30);
			HX_STACK_LINE(162)
			int tmp31 = _g->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(162)
			int tmp32 = (tmp31 - (int)1);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(162)
			Dynamic tmp33 = _g->textInputExplanationStructArray->__GetItem(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(162)
			::haxe::ui::toolkit::controls::TextInput tmp34 = tmp33->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(162)
			int tmp35 = _g->gridObject->indexOfChild(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(162)
			int tmp36 = (tmp35 + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(162)
			_g->textInputExplanationLastIndexInt = tmp36;
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
		HX_STACK_FRAME("UIPopupAddObjectMuseum","UpdateVoid",0x1f655bb1,"UIPopupAddObjectMuseum.UpdateVoid","UIPopupAddObjectMuseum.hx",170,0xbf9e50a4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(172)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		if ((tmp2)){
			HX_STACK_LINE(172)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp4 = this->listSelectorParentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(172)
			tmp3 = false;
		}
		HX_STACK_LINE(172)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		if ((tmp3)){
			HX_STACK_LINE(172)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(172)
			tmp4 = false;
		}
		HX_STACK_LINE(172)
		if ((tmp4)){
			HX_STACK_LINE(174)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(174)
			int tmp6 = tmp5->get_selectedIndex();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(174)
			int tmp7 = (int)-1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(174)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(174)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(174)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			if ((tmp10)){
				HX_STACK_LINE(174)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(174)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(174)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(174)
				::String tmp15 = tmp14->get_text();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(174)
				::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(174)
				::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(174)
				tmp11 = (tmp17 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(174)
				tmp11 = true;
			}
			HX_STACK_LINE(174)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(174)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(174)
			if ((tmp12)){
				HX_STACK_LINE(174)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(174)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(174)
				::String tmp16 = tmp15->get_text();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(174)
				::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(174)
				tmp13 = (tmp17 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(174)
				tmp13 = true;
			}
			HX_STACK_LINE(174)
			if ((tmp13)){
				HX_STACK_LINE(175)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorParentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(175)
				tmp14->set_disabled(true);
				HX_STACK_LINE(176)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = this->listSelectorTagObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(176)
				tmp15->set_disabled(true);
				HX_STACK_LINE(177)
				::haxe::ui::toolkit::controls::TextInput tmp16 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(177)
				tmp16->set_disabled(true);
				HX_STACK_LINE(178)
				::haxe::ui::toolkit::controls::TextInput tmp17 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(178)
				tmp17->set_disabled(true);
				HX_STACK_LINE(179)
				::haxe::ui::toolkit::controls::TextInput tmp18 = this->textInputExplanationObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(179)
				tmp18->set_disabled(true);
			}
			else{
				HX_STACK_LINE(182)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorTagObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(182)
				tmp14->set_disabled(false);
				HX_STACK_LINE(183)
				::haxe::ui::toolkit::controls::TextInput tmp15 = this->nameAltTextInputObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(183)
				tmp15->set_disabled(false);
				HX_STACK_LINE(184)
				::haxe::ui::toolkit::controls::TextInput tmp16 = this->nameFullTextInputObject;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(184)
				tmp16->set_disabled(false);
				HX_STACK_LINE(185)
				::haxe::ui::toolkit::controls::TextInput tmp17 = this->textInputExplanationObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(185)
				tmp17->set_disabled(false);
			}
			HX_STACK_LINE(187)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(187)
			::String tmp15 = tmp14->get_text();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(187)
			bool tmp16 = (tmp15 != HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(187)
			if ((tmp16)){
				HX_STACK_LINE(188)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->listSelectorParentObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(188)
				tmp17->set_disabled(false);
			}
			HX_STACK_LINE(191)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->listSelectorTypeObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(191)
			int tmp18 = tmp17->get_selectedIndex();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(191)
			this->listSelectorTypeInt = tmp18;
			HX_STACK_LINE(192)
			int tmp19 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(192)
			bool tmp20 = (tmp19 == (int)-1);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(192)
			if ((tmp20)){
				HX_STACK_LINE(192)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->listSelectorParentObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(192)
				tmp21->set_disabled(true);
			}
			HX_STACK_LINE(194)
			int tmp21 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(194)
			int tmp22 = this->listSelectorTypePrevInt;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(194)
			bool tmp23 = (tmp21 != tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(194)
			if ((tmp23)){
				HX_STACK_LINE(195)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = this->listSelectorParentObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(195)
				::haxe::ui::toolkit::data::IDataSource tmp25 = tmp24->get_dataSource();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(195)
				tmp25->removeAll();
				HX_STACK_LINE(196)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp26 = this->listSelectorParentObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(196)
				tmp26->set_selectedIndex((int)-1);
				HX_STACK_LINE(198)
				Array< ::Dynamic > tempObjectArray = null();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
				HX_STACK_LINE(199)
				int tmp27 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(199)
				bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(199)
				if ((tmp28)){
					HX_STACK_LINE(199)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp29 = this->listSelectorParentObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(199)
					tmp29->set_disabled(false);
					HX_STACK_LINE(199)
					::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(199)
					tempObjectArray = tmp30->GetRoomObjectArray();
				}
				else{
					HX_STACK_LINE(200)
					int tmp29 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(200)
					bool tmp30 = (tmp29 == (int)1);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(200)
					if ((tmp30)){
						HX_STACK_LINE(200)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp31 = this->listSelectorParentObject;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(200)
						tmp31->set_disabled(true);
					}
					else{
						HX_STACK_LINE(201)
						int tmp31 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(201)
						bool tmp32 = (tmp31 == (int)2);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(201)
						if ((tmp32)){
							HX_STACK_LINE(201)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp33 = this->listSelectorParentObject;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(201)
							tmp33->set_disabled(false);
							HX_STACK_LINE(201)
							::CollectionGlobal tmp34 = this->collectionGlobalObject;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(201)
							tempObjectArray = tmp34->GetFloorObjectArray();
						}
					}
				}
				HX_STACK_LINE(203)
				int tmp29 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(203)
				int tmp30 = (int)-1;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(203)
				bool tmp31 = (tmp29 != tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(203)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(203)
				if ((tmp31)){
					HX_STACK_LINE(203)
					int tmp33 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(203)
					int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(203)
					tmp32 = (tmp34 != (int)1);
				}
				else{
					HX_STACK_LINE(203)
					tmp32 = false;
				}
				HX_STACK_LINE(203)
				if ((tmp32)){
					HX_STACK_LINE(204)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(205)
					while((true)){
						HX_STACK_LINE(205)
						bool tmp33 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(205)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(205)
						if ((tmp34)){
							HX_STACK_LINE(205)
							break;
						}
						HX_STACK_LINE(206)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = this->listSelectorParentObject;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(206)
						::haxe::ui::toolkit::data::IDataSource tmp36 = tmp35->get_dataSource();		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(206)
						::ObjectMuseum tmp37 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(206)
						Dynamic tmp38 = tmp37->GetNameStruct();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(206)
						::String tmp39 = tmp38->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(206)
						tmp36->createFromString(tmp39,null());
						HX_STACK_LINE(207)
						(loopCounter1Int)++;
					}
				}
				HX_STACK_LINE(211)
				int tmp33 = this->listSelectorTypeInt;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(211)
				this->listSelectorTypePrevInt = tmp33;
			}
		}
		HX_STACK_LINE(216)
		::haxe::ui::toolkit::controls::popups::Popup tmp5 = this->popupObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(216)
		if ((tmp6)){
			HX_STACK_LINE(216)
			int tmp8 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(216)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(216)
			tmp7 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(216)
			tmp7 = false;
		}
		HX_STACK_LINE(216)
		if ((tmp7)){
			HX_STACK_LINE(221)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(222)
			while((true)){
				HX_STACK_LINE(222)
				int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(222)
				int tmp9 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(222)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(222)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(222)
				if ((tmp11)){
					HX_STACK_LINE(222)
					break;
				}
				HX_STACK_LINE(224)
				Dynamic tmp12 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(224)
				int tmp13 = tmp12->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(224)
				bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(224)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(224)
				if ((tmp14)){
					HX_STACK_LINE(224)
					int tmp16 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(224)
					int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(224)
					tmp15 = (tmp17 > (int)1);
				}
				else{
					HX_STACK_LINE(224)
					tmp15 = false;
				}
				HX_STACK_LINE(224)
				if ((tmp15)){
					HX_STACK_LINE(225)
					int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(225)
					int tmp17 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(225)
					int tmp18 = (tmp17 - (int)1);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(225)
					bool tmp19 = (tmp16 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(225)
					if ((tmp19)){
						HX_STACK_LINE(226)
						Dynamic tmp20 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(226)
						tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
					else{
						HX_STACK_LINE(229)
						::haxe::ui::toolkit::containers::Grid tmp20 = this->gridObject;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(229)
						Dynamic tmp21 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(229)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp22 = tmp21->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(229)
						tmp20->removeChild(tmp22,null());
						HX_STACK_LINE(230)
						::haxe::ui::toolkit::containers::Grid tmp23 = this->gridObject;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(230)
						Dynamic tmp24 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(230)
						::haxe::ui::toolkit::controls::Text tmp25 = tmp24->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(230)
						tmp23->removeChild(tmp25,null());
						HX_STACK_LINE(231)
						Dynamic tmp26 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(231)
						this->listSelectorTagStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp26);
						HX_STACK_LINE(234)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(235)
						while((true)){
							HX_STACK_LINE(235)
							int tmp27 = loopCounter2Int;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(235)
							int tmp28 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(235)
							bool tmp29 = (tmp27 <= tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(235)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(235)
							if ((tmp30)){
								HX_STACK_LINE(235)
								break;
							}
							HX_STACK_LINE(237)
							int tmp31 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(237)
							Dynamic tmp32 = this->listSelectorTagStructArray->__GetItem(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(237)
							::String tmp33 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + loopCounter2Int);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(237)
							tmp32->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp33);
							HX_STACK_LINE(238)
							int tmp34 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(238)
							Dynamic tmp35 = this->listSelectorTagStructArray->__GetItem(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(238)
							::String tmp36 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + loopCounter2Int);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(238)
							tmp35->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp36);
							HX_STACK_LINE(239)
							(loopCounter2Int)++;
						}
					}
				}
				else{
					HX_STACK_LINE(244)
					Dynamic tmp16 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(244)
					int tmp17 = tmp16->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(244)
					bool tmp18 = (tmp17 == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(244)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(244)
					if ((tmp18)){
						HX_STACK_LINE(244)
						int tmp20 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(244)
						int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(244)
						tmp19 = (tmp21 == (int)1);
					}
					else{
						HX_STACK_LINE(244)
						tmp19 = false;
					}
					HX_STACK_LINE(244)
					if ((tmp19)){
						HX_STACK_LINE(245)
						Dynamic tmp20 = this->listSelectorTagStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(245)
						tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("set_selectedIndex","\x1a","\x5a","\x34","\xde"), hx::paccDynamic )((int)-1);
					}
				}
				HX_STACK_LINE(247)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(251)
			int tmp8 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(251)
			int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(251)
			Dynamic tmp10 = this->listSelectorTagStructArray->__GetItem(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(251)
			int tmp11 = tmp10->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(251)
			int tmp12 = (int)-1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(251)
			bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(251)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(251)
			if ((tmp13)){
				HX_STACK_LINE(251)
				int tmp15 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(251)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(251)
				int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(251)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(251)
				Dynamic tmp19 = this->listSelectorTagStructArray->__GetItem(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(251)
				Dynamic tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(251)
				int tmp21 = tmp20->__Field(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39"), hx::paccDynamic )->__Field(HX_HCSTRING("get_selectedIndex","\x0e","\x82","\xc6","\xba"), hx::paccDynamic )();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(251)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(251)
				tmp14 = (tmp22 != (int)0);
			}
			else{
				HX_STACK_LINE(251)
				tmp14 = false;
			}
			HX_STACK_LINE(251)
			if ((tmp14)){
				HX_STACK_LINE(253)
				::haxe::ui::toolkit::controls::Text tmp15 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(253)
				::haxe::ui::toolkit::controls::Text listSelectorTagTextObject = tmp15;		HX_STACK_VAR(listSelectorTagTextObject,"listSelectorTagTextObject");
				HX_STACK_LINE(254)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(254)
				::haxe::ui::toolkit::controls::selection::ListSelector listSelectorTagObject = tmp16;		HX_STACK_VAR(listSelectorTagObject,"listSelectorTagObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &listSelectorTagTextObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorTagObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",255,0xbf9e50a4)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorTagObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , listSelectorTagTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(255)
				Dynamic tmp17 = _Function_3_1::Block(listSelectorTagTextObject,listSelectorTagObject);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(255)
				Dynamic listSelectorTagStruct = tmp17;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
				HX_STACK_LINE(259)
				Dynamic tmp18 = listSelectorTagStruct;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(259)
				this->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp18);
				HX_STACK_LINE(261)
				listSelectorTagTextObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
				HX_STACK_LINE(262)
				int tmp19 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(262)
				::String tmp20 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTagText_","\x19","\xf9","\x39","\xc6") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(262)
				listSelectorTagTextObject->set_id(tmp20);
				HX_STACK_LINE(263)
				::haxe::ui::toolkit::containers::Grid tmp21 = this->gridObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(263)
				::haxe::ui::toolkit::controls::Text tmp22 = listSelectorTagTextObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(263)
				tmp21->addChild(tmp22);
				HX_STACK_LINE(265)
				::haxe::ui::toolkit::data::IDataSource tmp23 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(265)
				tmp23->createFromString(HX_HCSTRING("Remove","\x64","\x10","\x1d","\x39"),null());
				HX_STACK_LINE(266)
				int tmp24 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(266)
				::String tmp25 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(266)
				listSelectorTagObject->set_id(tmp25);
				HX_STACK_LINE(267)
				listSelectorTagObject->set_percentWidth((int)100);
				HX_STACK_LINE(268)
				listSelectorTagObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				HX_STACK_LINE(269)
				::haxe::ui::toolkit::containers::Grid tmp26 = this->gridObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(269)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp27 = listSelectorTagObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(269)
				tmp26->addChild(tmp27);
				HX_STACK_LINE(271)
				Array< ::String > tempUsedTagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tempUsedTagStringArray,"tempUsedTagStringArray");
				HX_STACK_LINE(272)
				int loopCounter1Int1 = (int)0;		HX_STACK_VAR(loopCounter1Int1,"loopCounter1Int1");
				HX_STACK_LINE(273)
				while((true)){
					HX_STACK_LINE(273)
					int tmp28 = loopCounter1Int1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(273)
					::CollectionGlobal tmp29 = this->collectionGlobalObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(273)
					int tmp30 = tmp29->GetTagObjectArray()->length;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(273)
					bool tmp31 = (tmp28 < tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(273)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(273)
					if ((tmp32)){
						HX_STACK_LINE(273)
						break;
					}
					HX_STACK_LINE(274)
					::CollectionGlobal tmp33 = this->collectionGlobalObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(274)
					::ObjectTag tmp34 = tmp33->GetTagObjectArray()->__get(loopCounter1Int1).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(274)
					::String tmp35 = tmp34->GetNameString();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(274)
					tempUsedTagStringArray->push(tmp35);
					HX_STACK_LINE(275)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(277)
				loopCounter1Int1 = (int)1;
				HX_STACK_LINE(278)
				while((true)){
					HX_STACK_LINE(278)
					int tmp28 = loopCounter1Int1;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(278)
					int tmp29 = this->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(278)
					bool tmp30 = (tmp28 <= tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(278)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(278)
					if ((tmp31)){
						HX_STACK_LINE(278)
						break;
					}
					HX_STACK_LINE(280)
					::haxe::ui::toolkit::controls::popups::Popup tmp32 = this->popupObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(280)
					::haxe::ui::toolkit::controls::popups::PopupContent tmp33 = tmp32->get_content();		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(280)
					::String tmp34 = (HX_HCSTRING("UIPopupAddObjectMuseum_SelectTag_","\x06","\x5f","\x81","\x7e") + loopCounter1Int1);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(280)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp35 = tmp33->findChild(tmp34,hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(280)
					::haxe::ui::toolkit::controls::selection::ListSelector tempListSelectorTagObject = tmp35;		HX_STACK_VAR(tempListSelectorTagObject,"tempListSelectorTagObject");
					HX_STACK_LINE(281)
					::String tmp36 = tempListSelectorTagObject->get_text();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(281)
					tempUsedTagStringArray->remove(tmp36);
					HX_STACK_LINE(282)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(285)
				loopCounter1Int1 = (int)0;
				HX_STACK_LINE(286)
				while((true)){
					HX_STACK_LINE(286)
					bool tmp28 = (loopCounter1Int1 < tempUsedTagStringArray->length);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(286)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(286)
					if ((tmp29)){
						HX_STACK_LINE(286)
						break;
					}
					HX_STACK_LINE(288)
					::haxe::ui::toolkit::data::IDataSource tmp30 = listSelectorTagObject->get_dataSource();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(288)
					::String tmp31 = tempUsedTagStringArray->__get(loopCounter1Int1);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(288)
					tmp30->createFromString(tmp31,null());
					HX_STACK_LINE(289)
					(loopCounter1Int1)++;
				}
				HX_STACK_LINE(295)
				listSelectorTagObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			}
		}
		HX_STACK_LINE(301)
		::haxe::ui::toolkit::controls::popups::Popup tmp8 = this->popupObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(301)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(301)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(301)
		if ((tmp9)){
			HX_STACK_LINE(301)
			int tmp11 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(301)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(301)
			tmp10 = (tmp12 > (int)0);
		}
		else{
			HX_STACK_LINE(301)
			tmp10 = false;
		}
		HX_STACK_LINE(301)
		if ((tmp10)){
			HX_STACK_LINE(303)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(304)
			while((true)){
				HX_STACK_LINE(304)
				int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(304)
				int tmp12 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(304)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(304)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(304)
				if ((tmp14)){
					HX_STACK_LINE(304)
					break;
				}
				HX_STACK_LINE(308)
				Dynamic tmp15 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(308)
				::String tmp16 = tmp15->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(308)
				bool tmp17 = (tmp16 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(308)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(308)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(307)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(308)
				if ((tmp19)){
					HX_STACK_LINE(309)
					Dynamic tmp21 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(309)
					Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(309)
					Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(309)
					::String tmp24 = tmp23->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(309)
					::String tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(309)
					::String tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(309)
					tmp20 = (tmp26 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(308)
					tmp20 = true;
				}
				HX_STACK_LINE(307)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(307)
				if ((tmp20)){
					HX_STACK_LINE(311)
					int tmp22 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(311)
					int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(311)
					tmp21 = (tmp23 > (int)1);
				}
				else{
					HX_STACK_LINE(307)
					tmp21 = false;
				}
				HX_STACK_LINE(306)
				if ((tmp21)){
					HX_STACK_LINE(316)
					int tmp22 = loopCounter1Int;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(316)
					int tmp23 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(316)
					int tmp24 = (tmp23 - (int)1);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(316)
					bool tmp25 = (tmp22 != tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(316)
					if ((tmp25)){
						HX_STACK_LINE(318)
						::haxe::ui::toolkit::containers::Grid tmp26 = this->gridObject;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(318)
						Dynamic tmp27 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(318)
						::haxe::ui::toolkit::controls::TextInput tmp28 = tmp27->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(318)
						tmp26->removeChild(tmp28,null());
						HX_STACK_LINE(319)
						::haxe::ui::toolkit::containers::Grid tmp29 = this->gridObject;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(319)
						Dynamic tmp30 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(319)
						::haxe::ui::toolkit::controls::Text tmp31 = tmp30->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(319)
						tmp29->removeChild(tmp31,null());
						HX_STACK_LINE(320)
						Dynamic tmp32 = this->textInputExplanationStructArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(320)
						this->textInputExplanationStructArray->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp32);
						HX_STACK_LINE(322)
						int loopCounter2Int = (int)1;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(323)
						while((true)){
							HX_STACK_LINE(323)
							int tmp33 = loopCounter2Int;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(323)
							int tmp34 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(323)
							bool tmp35 = (tmp33 <= tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(323)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(323)
							if ((tmp36)){
								HX_STACK_LINE(323)
								break;
							}
							HX_STACK_LINE(325)
							int tmp37 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(325)
							Dynamic tmp38 = this->textInputExplanationStructArray->__GetItem(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(325)
							::String tmp39 = (HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanation_","\x8b","\xb5","\x87","\x70") + loopCounter2Int);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(325)
							tmp38->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp39);
							HX_STACK_LINE(326)
							int tmp40 = (loopCounter2Int - (int)1);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(326)
							Dynamic tmp41 = this->textInputExplanationStructArray->__GetItem(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(326)
							::String tmp42 = (HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanationText_","\x1e","\x76","\x6e","\x3d") + loopCounter2Int);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(326)
							tmp41->__Field(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c"), hx::paccDynamic )->__Field(HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"), hx::paccDynamic )(tmp42);
							HX_STACK_LINE(327)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(330)
						::haxe::ui::toolkit::containers::Grid tmp33 = this->gridObject;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(330)
						int tmp34 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(330)
						int tmp35 = (tmp34 - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(330)
						Dynamic tmp36 = this->textInputExplanationStructArray->__GetItem(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(330)
						::haxe::ui::toolkit::controls::TextInput tmp37 = tmp36->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic );		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(330)
						int tmp38 = tmp33->indexOfChild(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(330)
						int tmp39 = (tmp38 + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(330)
						this->textInputExplanationLastIndexInt = tmp39;
					}
				}
				HX_STACK_LINE(335)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(340)
			int tmp11 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(340)
			int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(340)
			Dynamic tmp13 = this->textInputExplanationStructArray->__GetItem(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(340)
			::String tmp14 = tmp13->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(340)
			bool tmp15 = (tmp14 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(340)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(340)
			if ((tmp15)){
				HX_STACK_LINE(341)
				int tmp17 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(341)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(341)
				int tmp19 = (tmp18 - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(341)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(341)
				Dynamic tmp21 = this->textInputExplanationStructArray->__GetItem(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(341)
				Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(341)
				::String tmp23 = tmp22->__Field(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc"), hx::paccDynamic )->__Field(HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"), hx::paccDynamic )();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(341)
				::String tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(341)
				tmp16 = (tmp24 != HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(340)
				tmp16 = false;
			}
			HX_STACK_LINE(339)
			if ((tmp16)){
				HX_STACK_LINE(344)
				::haxe::ui::toolkit::controls::Text tmp17 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(344)
				::haxe::ui::toolkit::controls::Text textInputExplanationTextObject = tmp17;		HX_STACK_VAR(textInputExplanationTextObject,"textInputExplanationTextObject");
				HX_STACK_LINE(345)
				::haxe::ui::toolkit::controls::TextInput tmp18 = ::haxe::ui::toolkit::controls::TextInput_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(345)
				::haxe::ui::toolkit::controls::TextInput textInputExplanationObject = tmp18;		HX_STACK_VAR(textInputExplanationObject,"textInputExplanationObject");
				struct _Function_3_1{
					inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textInputExplanationTextObject,::haxe::ui::toolkit::controls::TextInput &textInputExplanationObject){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupAddObjectMuseum.hx",346,0xbf9e50a4)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("textInputObject","\xbc","\xba","\x04","\xbc") , textInputExplanationObject,false);
							__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textInputExplanationTextObject,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(346)
				Dynamic tmp19 = _Function_3_1::Block(textInputExplanationTextObject,textInputExplanationObject);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(346)
				Dynamic textInputExplanationStruct = tmp19;		HX_STACK_VAR(textInputExplanationStruct,"textInputExplanationStruct");
				HX_STACK_LINE(350)
				Dynamic tmp20 = textInputExplanationStruct;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(350)
				this->textInputExplanationStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp20);
				HX_STACK_LINE(352)
				textInputExplanationTextObject->set_text(HX_HCSTRING("Explanation","\x39","\xf1","\x7f","\x2d"));
				HX_STACK_LINE(353)
				int tmp21 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(353)
				::String tmp22 = (HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanationText_","\x1e","\x76","\x6e","\x3d") + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(353)
				textInputExplanationTextObject->set_id(tmp22);
				HX_STACK_LINE(354)
				::haxe::ui::toolkit::containers::Grid tmp23 = this->gridObject;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(354)
				::haxe::ui::toolkit::controls::Text tmp24 = textInputExplanationTextObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(354)
				int tmp25 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(354)
				tmp23->addChildAt(tmp24,tmp25);
				HX_STACK_LINE(355)
				::haxe::ui::toolkit::containers::Grid tmp26 = this->gridObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(355)
				::haxe::ui::toolkit::controls::Text tmp27 = textInputExplanationTextObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(355)
				int tmp28 = tmp26->indexOfChild(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(355)
				int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(355)
				this->textInputExplanationLastIndexInt = tmp29;
				HX_STACK_LINE(357)
				int tmp30 = this->textInputExplanationStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(357)
				::String tmp31 = (HX_HCSTRING("UIPopupAddObjectMuseum_InputExplanation_","\x8b","\xb5","\x87","\x70") + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(357)
				textInputExplanationObject->set_id(tmp31);
				HX_STACK_LINE(358)
				textInputExplanationObject->set_percentWidth((int)100);
				HX_STACK_LINE(359)
				::haxe::ui::toolkit::containers::Grid tmp32 = this->gridObject;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(359)
				::haxe::ui::toolkit::controls::TextInput tmp33 = textInputExplanationObject;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(359)
				int tmp34 = this->textInputExplanationLastIndexInt;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(359)
				tmp32->addChildAt(tmp33,tmp34);
				HX_STACK_LINE(360)
				::haxe::ui::toolkit::containers::Grid tmp35 = this->gridObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(360)
				::haxe::ui::toolkit::controls::TextInput tmp36 = textInputExplanationObject;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(360)
				int tmp37 = tmp35->indexOfChild(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(360)
				int tmp38 = (tmp37 + (int)1);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(360)
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

