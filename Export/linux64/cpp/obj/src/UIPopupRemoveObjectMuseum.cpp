#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumMuseumMode
#include <EnumMuseumMode.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectMuseum
#include <UIPopupRemoveObjectMuseum.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
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

Void UIPopupRemoveObjectMuseum_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupRemoveObjectMuseum","new",0x92aa9e1f,"UIPopupRemoveObjectMuseum.new","UIPopupRemoveObjectMuseum.hx",25,0x5ecaca31)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(33)
	this->selectTypeListSelectorTextPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(32)
	this->selectTypeListSelectorTextString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(31)
	this->selectTypeListSelectorObject = null();
	HX_STACK_LINE(30)
	this->selectObjectMuseumListSelectorObject = null();
	HX_STACK_LINE(29)
	this->popupObject = null();
	HX_STACK_LINE(28)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(27)
	this->buttonObject = null();
	HX_STACK_LINE(35)
	::UIPopupRemoveObjectMuseum _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupRemoveMuseumObjectButton","\xbf","\xb8","\xd6","\x43"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	this->buttonObject = tmp;
	HX_STACK_LINE(42)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::UIPopupRemoveObjectMuseum,_g,::CollectionGlobal,_collectionGlobalObject)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupRemoveObjectMuseum.hx",42,0x5ecaca31)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(45)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(46)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(47)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupRemoveObjectMuseum.xml","\x31","\xf4","\x4d","\xe6"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::UIPopupRemoveObjectMuseum,_g,::CollectionGlobal,_collectionGlobalObject)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupRemoveObjectMuseum.hx",50,0x5ecaca31)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(52)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(52)
					if ((tmp6)){
						HX_STACK_LINE(54)
						::EnumMuseumType typeEnum = null();		HX_STACK_VAR(typeEnum,"typeEnum");
						HX_STACK_LINE(55)
						::String tmp7 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(55)
						bool tmp8 = (tmp7 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(55)
						if ((tmp8)){
							HX_STACK_LINE(55)
							typeEnum = ::EnumMuseumType_obj::EXH;
						}
						else{
							HX_STACK_LINE(56)
							::String tmp9 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(56)
							bool tmp10 = (tmp9 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(56)
							if ((tmp10)){
								HX_STACK_LINE(56)
								typeEnum = ::EnumMuseumType_obj::FLR;
							}
							else{
								HX_STACK_LINE(57)
								::String tmp11 = _g->selectTypeListSelectorObject->get_text();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(57)
								bool tmp12 = (tmp11 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(57)
								if ((tmp12)){
									HX_STACK_LINE(57)
									typeEnum = ::EnumMuseumType_obj::ROM;
								}
							}
						}
						HX_STACK_LINE(58)
						::CollectionGlobal tmp9 = _collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(58)
						::EnumMuseumType tmp10 = typeEnum;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(58)
						::String tmp11 = _g->selectObjectMuseumListSelectorObject->get_text();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(58)
						::ObjectMuseum tmp12 = ::CollectionFunction_obj::FindMuseumObject(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(58)
						::ObjectMuseum museumObject = tmp12;		HX_STACK_VAR(museumObject,"museumObject");
						HX_STACK_LINE(59)
						museumObject->SetMuseumModeEnumVoid(::EnumMuseumMode_obj::MRK_DEL);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(50)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Remove Museum Object","\x91","\x95","\xce","\x5b"),tmp5, Dynamic(new _Function_2_1(_g,_collectionGlobalObject)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			_g->popupObject = tmp6;
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupRemoveObjectMuseum_SelectObjectMuseum","\xbf","\x49","\x6c","\xd9"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			_g->selectObjectMuseumListSelectorObject = tmp8;
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupRemoveObjectMuseum_SelectType","\x88","\xeb","\x57","\x73"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(66)
			_g->selectTypeListSelectorObject = tmp10;
			HX_STACK_LINE(67)
			_g->selectObjectMuseumListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(68)
			_g->selectTypeListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(42)
	tmp1->set_onClick( Dynamic(new _Function_1_1(_g,_collectionGlobalObject)));
}
;
	return null();
}

//UIPopupRemoveObjectMuseum_obj::~UIPopupRemoveObjectMuseum_obj() { }

Dynamic UIPopupRemoveObjectMuseum_obj::__CreateEmpty() { return  new UIPopupRemoveObjectMuseum_obj; }
hx::ObjectPtr< UIPopupRemoveObjectMuseum_obj > UIPopupRemoveObjectMuseum_obj::__new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{  hx::ObjectPtr< UIPopupRemoveObjectMuseum_obj > _result_ = new UIPopupRemoveObjectMuseum_obj();
	_result_->__construct(_collectionGlobalObject,_root);
	return _result_;}

Dynamic UIPopupRemoveObjectMuseum_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPopupRemoveObjectMuseum_obj > _result_ = new UIPopupRemoveObjectMuseum_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void UIPopupRemoveObjectMuseum_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("UIPopupRemoveObjectMuseum","UpdateVoid",0x1429aa3e,"UIPopupRemoveObjectMuseum.UpdateVoid","UIPopupRemoveObjectMuseum.hx",73,0x5ecaca31)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(75)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		if ((tmp2)){
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp4 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(75)
			tmp3 = false;
		}
		HX_STACK_LINE(75)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(75)
		if ((tmp3)){
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(75)
			tmp4 = false;
		}
		HX_STACK_LINE(75)
		if ((tmp4)){
			HX_STACK_LINE(76)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectTypeListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(76)
			::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(76)
			this->selectTypeListSelectorTextString = tmp6;
			HX_STACK_LINE(77)
			::String tmp7 = this->selectTypeListSelectorTextString;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			::String tmp8 = this->selectTypeListSelectorTextPrevString;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(77)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(77)
			if ((tmp9)){
				HX_STACK_LINE(78)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(78)
				tmp10->set_selectedIndex((int)-1);
				HX_STACK_LINE(79)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(79)
				::haxe::ui::toolkit::data::IDataSource tmp12 = tmp11->get_dataSource();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(79)
				tmp12->removeAll();
				HX_STACK_LINE(81)
				Array< ::Dynamic > tempMuseumObjectArray = null();		HX_STACK_VAR(tempMuseumObjectArray,"tempMuseumObjectArray");
				HX_STACK_LINE(82)
				::String tmp13 = this->selectTypeListSelectorTextString;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(82)
				bool tmp14 = (tmp13 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(82)
				if ((tmp14)){
					HX_STACK_LINE(82)
					::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(82)
					tempMuseumObjectArray = tmp15->GetExhibitionObjectArray();
				}
				else{
					HX_STACK_LINE(83)
					::String tmp15 = this->selectTypeListSelectorTextString;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(83)
					bool tmp16 = (tmp15 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(83)
					if ((tmp16)){
						HX_STACK_LINE(83)
						::CollectionGlobal tmp17 = this->collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(83)
						tempMuseumObjectArray = tmp17->GetFloorObjectArray();
					}
					else{
						HX_STACK_LINE(84)
						::String tmp17 = this->selectTypeListSelectorTextString;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(84)
						bool tmp18 = (tmp17 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(84)
						if ((tmp18)){
							HX_STACK_LINE(84)
							::CollectionGlobal tmp19 = this->collectionGlobalObject;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(84)
							tempMuseumObjectArray = tmp19->GetRoomObjectArray();
						}
					}
				}
				HX_STACK_LINE(86)
				::String tmp15 = this->selectTypeListSelectorTextString;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(86)
				bool tmp16 = (tmp15 == HX_HCSTRING("Exhibition","\x6f","\xac","\x10","\xf1"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(86)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(86)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(86)
				if ((tmp18)){
					HX_STACK_LINE(86)
					::String tmp20 = this->selectTypeListSelectorTextString;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(86)
					::String tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(86)
					::String tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(86)
					tmp19 = (tmp22 == HX_HCSTRING("Floor","\xac","\x41","\xc4","\x95"));
				}
				else{
					HX_STACK_LINE(86)
					tmp19 = true;
				}
				HX_STACK_LINE(86)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(86)
				bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(86)
				if ((tmp20)){
					HX_STACK_LINE(86)
					::String tmp22 = this->selectTypeListSelectorTextString;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(86)
					::String tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(86)
					tmp21 = (tmp23 == HX_HCSTRING("Room","\x3b","\x1a","\x88","\x36"));
				}
				else{
					HX_STACK_LINE(86)
					tmp21 = true;
				}
				HX_STACK_LINE(86)
				if ((tmp21)){
					HX_STACK_LINE(87)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(88)
					while((true)){
						HX_STACK_LINE(88)
						bool tmp22 = (loopCounter1Int < tempMuseumObjectArray->length);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(88)
						bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(88)
						if ((tmp23)){
							HX_STACK_LINE(88)
							break;
						}
						HX_STACK_LINE(89)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp24 = this->selectObjectMuseumListSelectorObject;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(89)
						::haxe::ui::toolkit::data::IDataSource tmp25 = tmp24->get_dataSource();		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(89)
						::ObjectMuseum tmp26 = tempMuseumObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(89)
						Dynamic tmp27 = tmp26->GetNameStruct();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(89)
						::String tmp28 = tmp27->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(89)
						tmp25->createFromString(tmp28,null());
						HX_STACK_LINE(90)
						(loopCounter1Int)++;
					}
				}
				HX_STACK_LINE(94)
				::String tmp22 = this->selectTypeListSelectorTextString;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(94)
				this->selectTypeListSelectorTextPrevString = tmp22;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupRemoveObjectMuseum_obj,UpdateVoid,(void))


UIPopupRemoveObjectMuseum_obj::UIPopupRemoveObjectMuseum_obj()
{
}

void UIPopupRemoveObjectMuseum_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupRemoveObjectMuseum);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(selectObjectMuseumListSelectorObject,"selectObjectMuseumListSelectorObject");
	HX_MARK_MEMBER_NAME(selectTypeListSelectorObject,"selectTypeListSelectorObject");
	HX_MARK_MEMBER_NAME(selectTypeListSelectorTextString,"selectTypeListSelectorTextString");
	HX_MARK_MEMBER_NAME(selectTypeListSelectorTextPrevString,"selectTypeListSelectorTextPrevString");
	HX_MARK_END_CLASS();
}

void UIPopupRemoveObjectMuseum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(selectObjectMuseumListSelectorObject,"selectObjectMuseumListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectTypeListSelectorObject,"selectTypeListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectTypeListSelectorTextString,"selectTypeListSelectorTextString");
	HX_VISIT_MEMBER_NAME(selectTypeListSelectorTextPrevString,"selectTypeListSelectorTextPrevString");
}

Dynamic UIPopupRemoveObjectMuseum_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { return popupObject; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { return buttonObject; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorObject") ) { return selectTypeListSelectorObject; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorTextString") ) { return selectTypeListSelectorTextString; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"selectObjectMuseumListSelectorObject") ) { return selectObjectMuseumListSelectorObject; }
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorTextPrevString") ) { return selectTypeListSelectorTextPrevString; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupRemoveObjectMuseum_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { popupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { buttonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorObject") ) { selectTypeListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorTextString") ) { selectTypeListSelectorTextString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"selectObjectMuseumListSelectorObject") ) { selectObjectMuseumListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectTypeListSelectorTextPrevString") ) { selectTypeListSelectorTextPrevString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UIPopupRemoveObjectMuseum_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UIPopupRemoveObjectMuseum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("selectObjectMuseumListSelectorObject","\xa9","\x0f","\x39","\xe5"));
	outFields->push(HX_HCSTRING("selectTypeListSelectorObject","\xb2","\x59","\x24","\xde"));
	outFields->push(HX_HCSTRING("selectTypeListSelectorTextString","\xd1","\x79","\xd9","\x97"));
	outFields->push(HX_HCSTRING("selectTypeListSelectorTextPrevString","\x24","\x65","\xcb","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupRemoveObjectMuseum_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupRemoveObjectMuseum_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupRemoveObjectMuseum_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupRemoveObjectMuseum_obj,selectObjectMuseumListSelectorObject),HX_HCSTRING("selectObjectMuseumListSelectorObject","\xa9","\x0f","\x39","\xe5")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupRemoveObjectMuseum_obj,selectTypeListSelectorObject),HX_HCSTRING("selectTypeListSelectorObject","\xb2","\x59","\x24","\xde")},
	{hx::fsString,(int)offsetof(UIPopupRemoveObjectMuseum_obj,selectTypeListSelectorTextString),HX_HCSTRING("selectTypeListSelectorTextString","\xd1","\x79","\xd9","\x97")},
	{hx::fsString,(int)offsetof(UIPopupRemoveObjectMuseum_obj,selectTypeListSelectorTextPrevString),HX_HCSTRING("selectTypeListSelectorTextPrevString","\x24","\x65","\xcb","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("selectObjectMuseumListSelectorObject","\xa9","\x0f","\x39","\xe5"),
	HX_HCSTRING("selectTypeListSelectorObject","\xb2","\x59","\x24","\xde"),
	HX_HCSTRING("selectTypeListSelectorTextString","\xd1","\x79","\xd9","\x97"),
	HX_HCSTRING("selectTypeListSelectorTextPrevString","\x24","\x65","\xcb","\x15"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPopupRemoveObjectMuseum_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPopupRemoveObjectMuseum_obj::__mClass,"__mClass");
};

#endif

hx::Class UIPopupRemoveObjectMuseum_obj::__mClass;

void UIPopupRemoveObjectMuseum_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIPopupRemoveObjectMuseum","\xad","\xa2","\x23","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UIPopupRemoveObjectMuseum_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIPopupRemoveObjectMuseum_obj >;
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

