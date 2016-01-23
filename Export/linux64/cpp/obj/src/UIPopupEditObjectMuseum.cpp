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
	this->nameFullTextObject = null();
	HX_STACK_LINE(29)
	this->nameAltTextObject = null();
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

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(Dynamic _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupEditObjectMuseum.hx",53,0xf262d12b)
				HX_STACK_ARG(_button,"_button")
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(53)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Add Museum Object","\xee","\xe7","\xad","\x9e"),tmp5, Dynamic(new _Function_2_1()));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			_g->popupObject = tmp6;
			HX_STACK_LINE(55)
			_g->selectTypeListSelectorString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(56)
			_g->selectTypeListSelectorPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(58)
			::haxe::ui::toolkit::containers::Grid tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_Grid","\x72","\xe2","\x67","\x8e"),hx::ClassOf< ::haxe::ui::toolkit::containers::Grid >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(58)
			_g->gridObject = tmp8;
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(59)
			::haxe::ui::toolkit::controls::TextInput tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputAltName","\xd6","\xd0","\x5e","\x46"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(59)
			_g->nameAltTextObject = tmp10;
			HX_STACK_LINE(60)
			_g->nameAltTextObject->set_disabled(true);
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp11 = _g->popupObject->get_content();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::controls::TextInput tmp12 = tmp11->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_InputFullName","\x78","\xb4","\x67","\xe7"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >(),true);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(61)
			_g->nameFullTextObject = tmp12;
			HX_STACK_LINE(62)
			_g->nameFullTextObject->set_disabled(true);
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp13 = _g->popupObject->get_content();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectObjectMuseum","\xb9","\x64","\x0b","\xb6"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(63)
			_g->selectObjectMuseumListSelectorObject = tmp14;
			HX_STACK_LINE(64)
			_g->selectObjectMuseumListSelectorObject->set_disabled(true);
			HX_STACK_LINE(65)
			_g->selectObjectMuseumListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp15 = _g->popupObject->get_content();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = tmp15->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectParentObject","\x51","\xc5","\x91","\xc4"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(66)
			_g->selectParentNameFullListSelectorObject = tmp16;
			HX_STACK_LINE(67)
			_g->selectParentNameFullListSelectorObject->set_disabled(true);
			HX_STACK_LINE(68)
			_g->selectParentNameFullListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp17 = _g->popupObject->get_content();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = tmp17->findChild(HX_HCSTRING("UIPopupEditObjectMuseum_SelectType","\x82","\x7c","\x26","\x07"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(69)
			_g->selectTypeListSelectorObject = tmp18;
			HX_STACK_LINE(70)
			_g->selectTypeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(72)
			::CollectionFunction_obj::ClearArray(_g->listSelectorTagStructArray);
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::Text tmp19 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::controls::Text textObject = tmp19;		HX_STACK_VAR(textObject,"textObject");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(74)
			::haxe::ui::toolkit::controls::selection::ListSelector listSelectorObject = tmp20;		HX_STACK_VAR(listSelectorObject,"listSelectorObject");
			struct _Function_2_2{
				inline static Dynamic Block( ::haxe::ui::toolkit::controls::Text &textObject,::haxe::ui::toolkit::controls::selection::ListSelector &listSelectorObject){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","UIPopupEditObjectMuseum.hx",75,0xf262d12b)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("listSelectorObject","\x3c","\x20","\xe9","\x39") , listSelectorObject,false);
						__result->Add(HX_HCSTRING("textObject","\x4c","\xff","\x2f","\x4c") , textObject,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(75)
			Dynamic tmp21 = _Function_2_2::Block(textObject,listSelectorObject);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(75)
			Dynamic listSelectorTagStruct = tmp21;		HX_STACK_VAR(listSelectorTagStruct,"listSelectorTagStruct");
			HX_STACK_LINE(79)
			Dynamic tmp22 = listSelectorTagStruct;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(79)
			_g->listSelectorTagStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp22);
			HX_STACK_LINE(80)
			int tmp23 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(80)
			::String tmp24 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTagText_","\x20","\xa8","\x40","\x16") + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(80)
			textObject->set_id(tmp24);
			HX_STACK_LINE(81)
			textObject->set_text(HX_HCSTRING("Tags","\xf9","\xe0","\xcf","\x37"));
			HX_STACK_LINE(82)
			::haxe::ui::toolkit::controls::Text tmp25 = textObject;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(82)
			_g->gridObject->addChild(tmp25);
			HX_STACK_LINE(83)
			listSelectorObject->set_disabled(true);
			HX_STACK_LINE(84)
			int tmp26 = _g->listSelectorTagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(84)
			::String tmp27 = (HX_HCSTRING("UIPopupEditObjectMuseum_SelectTag_","\x8d","\x3e","\x14","\x07") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(84)
			listSelectorObject->set_id(tmp27);
			HX_STACK_LINE(85)
			listSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(86)
			listSelectorObject->set_percentWidth((int)100);
			HX_STACK_LINE(87)
			listSelectorObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(88)
			listSelectorObject->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = listSelectorObject;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(89)
			_g->gridObject->addChild(tmp28);
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
		HX_STACK_FRAME("UIPopupEditObjectMuseum","UpdateVoid",0xa7f83b38,"UIPopupEditObjectMuseum.UpdateVoid","UIPopupEditObjectMuseum.hx",94,0xf262d12b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		if ((tmp1)){
			HX_STACK_LINE(98)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp2 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			int tmp3 = tmp2->get_selectedIndex();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			bool tmp4 = (tmp3 != (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			if ((tmp4)){
				HX_STACK_LINE(100)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				this->selectTypeListSelectorString = tmp6;
				HX_STACK_LINE(101)
				::String tmp7 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(101)
				::String tmp8 = this->selectTypeListSelectorPrevString;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(101)
				bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(101)
				if ((tmp9)){
					HX_STACK_LINE(103)
					::haxe::ui::toolkit::controls::TextInput tmp10 = this->nameAltTextObject;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(103)
					tmp10->set_disabled(false);
					HX_STACK_LINE(104)
					::haxe::ui::toolkit::controls::TextInput tmp11 = this->nameAltTextObject;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(104)
					tmp11->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(105)
					::haxe::ui::toolkit::controls::TextInput tmp12 = this->nameFullTextObject;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(105)
					tmp12->set_disabled(false);
					HX_STACK_LINE(106)
					::haxe::ui::toolkit::controls::TextInput tmp13 = this->nameFullTextObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(106)
					tmp13->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(107)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(107)
					::haxe::ui::toolkit::data::IDataSource tmp15 = tmp14->get_dataSource();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(107)
					tmp15->removeAll();
					HX_STACK_LINE(108)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp16 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(108)
					tmp16->set_disabled(false);
					HX_STACK_LINE(109)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp17 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(109)
					tmp17->set_selectedIndex((int)-1);
					HX_STACK_LINE(110)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(110)
					tmp18->set_disabled(false);
					HX_STACK_LINE(111)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp19 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(111)
					tmp19->set_selectedIndex((int)-1);
					HX_STACK_LINE(113)
					Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
					HX_STACK_LINE(114)
					::String tmp20 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(114)
					bool tmp21 = (tmp20 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(114)
					if ((tmp21)){
						HX_STACK_LINE(114)
						::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(114)
						tempObjectArray = tmp22->GetExhibitionObjectArray();
					}
					else{
						HX_STACK_LINE(115)
						::String tmp22 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(115)
						bool tmp23 = (tmp22 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(115)
						if ((tmp23)){
							HX_STACK_LINE(115)
							::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(115)
							tempObjectArray = tmp24->GetFloorObjectArray();
						}
						else{
							HX_STACK_LINE(116)
							::String tmp24 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(116)
							bool tmp25 = (tmp24 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(116)
							if ((tmp25)){
								HX_STACK_LINE(116)
								::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(116)
								tempObjectArray = tmp26->GetRoomObjectArray();
							}
						}
					}
					HX_STACK_LINE(118)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(119)
					while((true)){
						HX_STACK_LINE(119)
						bool tmp22 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(119)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(119)
						if ((tmp23)){
							HX_STACK_LINE(119)
							break;
						}
						HX_STACK_LINE(120)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(120)
						::haxe::ui::toolkit::data::IDataSource tmp25 = tmp24->get_dataSource();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(120)
						::ObjectMuseum tmp26 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(120)
						Dynamic tmp27 = tmp26->GetNameStruct();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(120)
						::String tmp28 = tmp27->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(120)
						tmp25->createFromString(tmp28,null());
						HX_STACK_LINE(121)
						(loopCounter1Int)++;
					}
					HX_STACK_LINE(124)
					::String tmp22 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(124)
					this->selectTypeListSelectorPrevString = tmp22;
				}
			}
			HX_STACK_LINE(131)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(131)
			int tmp6 = tmp5->get_selectedIndex();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			int tmp7 = (int)-1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(131)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(131)
			if ((tmp10)){
				HX_STACK_LINE(132)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(132)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(132)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(132)
				::String tmp15 = tmp14->get_text();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(132)
				::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(132)
				::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(132)
				tmp11 = (tmp17 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));
			}
			else{
				HX_STACK_LINE(131)
				tmp11 = true;
			}
			HX_STACK_LINE(131)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(131)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(131)
			if ((tmp12)){
				HX_STACK_LINE(133)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(133)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(133)
				int tmp16 = tmp15->get_selectedIndex();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(133)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(133)
				tmp13 = (tmp17 == (int)-1);
			}
			else{
				HX_STACK_LINE(131)
				tmp13 = true;
			}
			HX_STACK_LINE(130)
			if ((tmp13)){
				HX_STACK_LINE(134)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(134)
				tmp14->set_disabled(true);
			}
			HX_STACK_LINE(137)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(137)
			int tmp15 = tmp14->get_selectedIndex();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(137)
			bool tmp16 = (tmp15 != (int)-1);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(137)
			if ((tmp16)){
				HX_STACK_LINE(139)
				::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
				HX_STACK_LINE(140)
				::String tmp17 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(140)
				bool tmp18 = (tmp17 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(140)
				if ((tmp18)){
					HX_STACK_LINE(140)
					typeEnum = ::EnumMuseumType_obj::EXH;
				}
				else{
					HX_STACK_LINE(141)
					::String tmp19 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(141)
					bool tmp20 = (tmp19 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(141)
					if ((tmp20)){
						HX_STACK_LINE(141)
						typeEnum = ::EnumMuseumType_obj::FLR;
					}
					else{
						HX_STACK_LINE(142)
						::String tmp21 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(142)
						bool tmp22 = (tmp21 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(142)
						if ((tmp22)){
							HX_STACK_LINE(142)
							typeEnum = ::EnumMuseumType_obj::ROM;
						}
					}
				}
				HX_STACK_LINE(144)
				::CollectionGlobal tmp19 = this->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(144)
				::EnumMuseumType tmp20 = typeEnum;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(144)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp21 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(144)
				::String tmp22 = tmp21->get_text();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(144)
				::ObjectMuseum tmp23 = ::CollectionFunction_obj::FindMuseumObject(tmp19,tmp20,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(144)
				this->selectedMuseumObject = tmp23;
				HX_STACK_LINE(145)
				::ObjectMuseum tmp24 = this->selectedMuseumObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(145)
				Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("UIPopupEditObjectMuseum.hx","\x2b","\xd1","\x62","\xf2"),145,HX_HCSTRING("UIPopupEditObjectMuseum","\x73","\xdb","\x3e","\x16"),HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(145)
				::haxe::Log_obj::trace(tmp24,tmp25);
				HX_STACK_LINE(147)
				::ObjectMuseum tmp26 = this->selectedMuseumObject;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(147)
				::ObjectMuseum tmp27 = this->selectedMuseumPrevObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(147)
				bool tmp28 = (tmp26 != tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(147)
				if ((tmp28)){
					HX_STACK_LINE(149)
					::haxe::ui::toolkit::controls::TextInput tmp29 = this->nameAltTextObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(149)
					tmp29->set_disabled(false);
					HX_STACK_LINE(150)
					::haxe::ui::toolkit::controls::TextInput tmp30 = this->nameAltTextObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(150)
					tmp30->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(151)
					::haxe::ui::toolkit::controls::TextInput tmp31 = this->nameFullTextObject;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(151)
					tmp31->set_disabled(false);
					HX_STACK_LINE(152)
					::haxe::ui::toolkit::controls::TextInput tmp32 = this->nameFullTextObject;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(152)
					tmp32->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
					HX_STACK_LINE(153)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp33 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(153)
					tmp33->set_disabled(false);
					HX_STACK_LINE(154)
					::haxe::ui::toolkit::controls::selection::ListSelector tmp34 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(154)
					tmp34->set_selectedIndex((int)-1);
					HX_STACK_LINE(160)
					::haxe::ui::toolkit::controls::TextInput tmp35 = this->nameAltTextObject;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(160)
					::ObjectMuseum tmp36 = this->selectedMuseumObject;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(160)
					Dynamic tmp37 = tmp36->GetNameStruct();		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(160)
					::String tmp38 = tmp37->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(160)
					tmp35->set_text(tmp38);
					HX_STACK_LINE(161)
					::haxe::ui::toolkit::controls::TextInput tmp39 = this->nameFullTextObject;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(161)
					::ObjectMuseum tmp40 = this->selectedMuseumObject;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(161)
					Dynamic tmp41 = tmp40->GetNameStruct();		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(161)
					::String tmp42 = tmp41->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(161)
					tmp39->set_text(tmp42);
					HX_STACK_LINE(162)
					::String tmp43 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(162)
					bool tmp44 = (tmp43 != HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(162)
					if ((tmp44)){
						HX_STACK_LINE(162)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp45 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(162)
						::ObjectMuseum tmp46 = this->selectedMuseumObject;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(162)
						::ObjectMuseum tmp47 = tmp46->GetParentObject();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(162)
						Dynamic tmp48 = tmp47->GetNameStruct();		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(162)
						::String tmp49 = tmp48->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(162)
						tmp45->set_text(tmp49);
					}
					else{
						HX_STACK_LINE(163)
						::String tmp45 = this->selectTypeListSelectorString;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(163)
						bool tmp46 = (tmp45 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(163)
						if ((tmp46)){
							HX_STACK_LINE(163)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp47 = this->selectParentNameFullListSelectorObject;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(163)
							tmp47->set_disabled(true);
						}
					}
					HX_STACK_LINE(165)
					::ObjectMuseum tmp45 = this->selectedMuseumObject;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(165)
					this->selectedMuseumPrevObject = tmp45;
				}
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
	HX_MARK_MEMBER_NAME(nameAltTextObject,"nameAltTextObject");
	HX_MARK_MEMBER_NAME(nameFullTextObject,"nameFullTextObject");
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
	HX_VISIT_MEMBER_NAME(nameAltTextObject,"nameAltTextObject");
	HX_VISIT_MEMBER_NAME(nameFullTextObject,"nameFullTextObject");
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
	case 17:
		if (HX_FIELD_EQ(inName,"nameAltTextObject") ) { return nameAltTextObject; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nameFullTextObject") ) { return nameFullTextObject; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"selectedMuseumObject") ) { return selectedMuseumObject; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
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
	case 17:
		if (HX_FIELD_EQ(inName,"nameAltTextObject") ) { nameAltTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nameFullTextObject") ) { nameFullTextObject=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"selectedMuseumObject") ) { selectedMuseumObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
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
	outFields->push(HX_HCSTRING("nameAltTextObject","\x8a","\x74","\xd4","\x15"));
	outFields->push(HX_HCSTRING("nameFullTextObject","\x66","\x69","\xf1","\x95"));
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
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,nameAltTextObject),HX_HCSTRING("nameAltTextObject","\x8a","\x74","\xd4","\x15")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(UIPopupEditObjectMuseum_obj,nameFullTextObject),HX_HCSTRING("nameFullTextObject","\x66","\x69","\xf1","\x95")},
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
	HX_HCSTRING("nameAltTextObject","\x8a","\x74","\xd4","\x15"),
	HX_HCSTRING("nameFullTextObject","\x66","\x69","\xf1","\x95"),
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

