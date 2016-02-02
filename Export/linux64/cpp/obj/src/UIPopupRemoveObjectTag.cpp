#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectTag
#include <UIPopupRemoveObjectTag.h>
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

Void UIPopupRemoveObjectTag_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupRemoveObjectTag","new",0x95ceb411,"UIPopupRemoveObjectTag.new","UIPopupRemoveObjectTag.hx",25,0xe087387f)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(35)
	this->selectTagObject = null();
	HX_STACK_LINE(34)
	this->selectTagNameString = null();
	HX_STACK_LINE(33)
	this->selectTagListSelectorObject = null();
	HX_STACK_LINE(32)
	this->selectGeneralOrNotString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(31)
	this->selectGeneralOrNotPrevString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(30)
	this->selectGeneralOrNotListSelectorObject = null();
	HX_STACK_LINE(29)
	this->popupObject = null();
	HX_STACK_LINE(28)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(27)
	this->buttonObject = null();
	HX_STACK_LINE(37)
	::UIPopupRemoveObjectTag _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(42)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupRemoveTagObjectButton","\x4f","\xe1","\x8e","\xfa"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	this->buttonObject = tmp;
	HX_STACK_LINE(44)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupRemoveObjectTag,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupRemoveObjectTag.hx",44,0xe087387f)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(47)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(48)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(49)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupRemoveObjectTag.xml","\x0d","\xfa","\xbc","\x99"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupRemoveObjectTag,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupRemoveObjectTag.hx",52,0xe087387f)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(54)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(54)
					if ((tmp6)){
						HX_STACK_LINE(56)
						bool tmp7 = (_g->selectGeneralOrNotString == HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(56)
						if ((tmp7)){
							HX_STACK_LINE(57)
							::CollectionGlobal tmp8 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(57)
							::String tmp9 = _g->selectTagNameString;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(57)
							::ObjectTag tmp10 = ::CollectionFunction_obj::FindTagObject(tmp8,true,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(57)
							_g->selectTagObject = tmp10;
							HX_STACK_LINE(58)
							_g->selectTagObject->RemoveFromArray();
						}
						else{
							HX_STACK_LINE(60)
							bool tmp8 = (_g->selectGeneralOrNotString == HX_HCSTRING("No","\x61","\x44","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(60)
							if ((tmp8)){
								HX_STACK_LINE(61)
								::CollectionGlobal tmp9 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(61)
								::String tmp10 = _g->selectTagNameString;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(61)
								::ObjectTag tmp11 = ::CollectionFunction_obj::FindTagObject(tmp9,false,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(61)
								_g->selectTagObject = tmp11;
								HX_STACK_LINE(62)
								_g->selectTagObject->RemoveFromArray();
							}
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(52)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Remove Tag","\x7e","\xf8","\x5d","\x9e"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			_g->popupObject = tmp6;
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(69)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupRemoveObjectTag_SelectGeneralOrNot","\x84","\xbc","\x70","\x7a"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			_g->selectGeneralOrNotListSelectorObject = tmp8;
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp9 = _g->popupObject->get_content();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp10 = tmp9->findChild(HX_HCSTRING("UIPopupRemoveObjectTag_SelectObjectTag","\x3f","\xaa","\xdb","\x44"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			_g->selectTagListSelectorObject = tmp10;
			HX_STACK_LINE(73)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(74)
			while((true)){
				HX_STACK_LINE(74)
				int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(74)
				int tmp12 = _g->collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(74)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(74)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(74)
				if ((tmp14)){
					HX_STACK_LINE(74)
					break;
				}
				HX_STACK_LINE(76)
				::haxe::ui::toolkit::data::IDataSource tmp15 = _g->selectTagListSelectorObject->get_dataSource();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(76)
				::ObjectTag tmp16 = _g->collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(76)
				::String tmp17 = tmp16->GetNameString();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(76)
				tmp15->createFromString(tmp17,null());
				HX_STACK_LINE(77)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(81)
			_g->selectGeneralOrNotListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(82)
			_g->selectGeneralOrNotListSelectorObject->set_selectedIndex((int)-1);
			HX_STACK_LINE(83)
			_g->selectTagListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(84)
			_g->selectTagListSelectorObject->set_selectedIndex((int)-1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(44)
	tmp1->set_onClick( Dynamic(new _Function_1_1(_g)));
}
;
	return null();
}

//UIPopupRemoveObjectTag_obj::~UIPopupRemoveObjectTag_obj() { }

Dynamic UIPopupRemoveObjectTag_obj::__CreateEmpty() { return  new UIPopupRemoveObjectTag_obj; }
hx::ObjectPtr< UIPopupRemoveObjectTag_obj > UIPopupRemoveObjectTag_obj::__new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{  hx::ObjectPtr< UIPopupRemoveObjectTag_obj > _result_ = new UIPopupRemoveObjectTag_obj();
	_result_->__construct(_collectionGlobalObject,_root);
	return _result_;}

Dynamic UIPopupRemoveObjectTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPopupRemoveObjectTag_obj > _result_ = new UIPopupRemoveObjectTag_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void UIPopupRemoveObjectTag_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("UIPopupRemoveObjectTag","UpdateVoid",0xb292168c,"UIPopupRemoveObjectTag.UpdateVoid","UIPopupRemoveObjectTag.hx",89,0xe087387f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		if ((tmp2)){
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp4 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(91)
			tmp3 = false;
		}
		HX_STACK_LINE(91)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		if ((tmp3)){
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectGeneralOrNotListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			tmp4 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(91)
			tmp4 = false;
		}
		HX_STACK_LINE(91)
		if ((tmp4)){
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp5 = this->selectGeneralOrNotListSelectorObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			bool tmp7 = (tmp6 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			if ((tmp9)){
				HX_STACK_LINE(95)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp11 = this->selectGeneralOrNotListSelectorObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(95)
				::String tmp14 = tmp13->get_text();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(95)
				::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(95)
				::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(95)
				tmp10 = (tmp16 == HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(94)
				tmp10 = true;
			}
			HX_STACK_LINE(94)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(94)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(94)
			if ((tmp11)){
				HX_STACK_LINE(96)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->selectGeneralOrNotListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				int tmp15 = tmp14->get_selectedIndex();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(96)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(96)
				tmp12 = (tmp16 == (int)-1);
			}
			else{
				HX_STACK_LINE(94)
				tmp12 = true;
			}
			HX_STACK_LINE(93)
			if ((tmp12)){
				HX_STACK_LINE(98)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(98)
				tmp13->set_disabled(true);
				HX_STACK_LINE(99)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp14 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(99)
				tmp14->set_selectedIndex((int)-1);
				HX_STACK_LINE(100)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp15 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(100)
				tmp15->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(102)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(102)
				tmp13->set_disabled(false);
			}
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp13 = this->selectGeneralOrNotListSelectorObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(104)
			::String tmp14 = tmp13->get_text();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(104)
			this->selectGeneralOrNotString = tmp14;
			HX_STACK_LINE(105)
			::String tmp15 = this->selectGeneralOrNotString;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(105)
			::String tmp16 = this->selectGeneralOrNotPrevString;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(105)
			bool tmp17 = (tmp15 != tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(105)
			if ((tmp17)){
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(107)
				::haxe::ui::toolkit::data::IDataSource tmp19 = tmp18->get_dataSource();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(107)
				tmp19->removeAll();
				HX_STACK_LINE(108)
				::haxe::ui::toolkit::controls::selection::ListSelector tmp20 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(108)
				tmp20->set_selectedIndex((int)-1);
				HX_STACK_LINE(110)
				::String tmp21 = this->selectGeneralOrNotString;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(110)
				bool tmp22 = (tmp21 == HX_HCSTRING("Yes","\x07","\xe1","\x43","\x00"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(110)
				if ((tmp22)){
					HX_STACK_LINE(112)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(113)
					while((true)){
						HX_STACK_LINE(113)
						int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(113)
						::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(113)
						int tmp25 = tmp24->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(113)
						bool tmp26 = (tmp23 < tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(113)
						bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(113)
						if ((tmp27)){
							HX_STACK_LINE(113)
							break;
						}
						HX_STACK_LINE(115)
						::haxe::ui::toolkit::controls::selection::ListSelector tmp28 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(115)
						::haxe::ui::toolkit::data::IDataSource tmp29 = tmp28->get_dataSource();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(115)
						::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(115)
						::ObjectTag tmp31 = tmp30->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(115)
						::String tmp32 = tmp31->GetNameString();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(115)
						tmp29->createFromString(tmp32,null());
						HX_STACK_LINE(116)
						(loopCounter1Int)++;
					}
				}
				else{
					HX_STACK_LINE(121)
					::String tmp23 = this->selectGeneralOrNotString;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(121)
					bool tmp24 = (tmp23 == HX_HCSTRING("No","\x61","\x44","\x00","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(121)
					if ((tmp24)){
						HX_STACK_LINE(123)
						int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
						HX_STACK_LINE(124)
						while((true)){
							HX_STACK_LINE(124)
							int tmp25 = loopCounter1Int;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(124)
							::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(124)
							int tmp27 = tmp26->GetTagObjectArray()->length;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(124)
							bool tmp28 = (tmp25 < tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(124)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(124)
							if ((tmp29)){
								HX_STACK_LINE(124)
								break;
							}
							HX_STACK_LINE(126)
							::haxe::ui::toolkit::controls::selection::ListSelector tmp30 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(126)
							::haxe::ui::toolkit::data::IDataSource tmp31 = tmp30->get_dataSource();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(126)
							::CollectionGlobal tmp32 = this->collectionGlobalObject;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(126)
							::ObjectTag tmp33 = tmp32->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(126)
							::String tmp34 = tmp33->GetNameString();		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(126)
							tmp31->createFromString(tmp34,null());
							HX_STACK_LINE(127)
							(loopCounter1Int)++;
						}
					}
				}
				HX_STACK_LINE(133)
				::String tmp23 = this->selectGeneralOrNotString;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(133)
				this->selectGeneralOrNotPrevString = tmp23;
			}
			HX_STACK_LINE(137)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp18 = this->selectTagListSelectorObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(137)
			::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(137)
			this->selectTagNameString = tmp19;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupRemoveObjectTag_obj,UpdateVoid,(void))


UIPopupRemoveObjectTag_obj::UIPopupRemoveObjectTag_obj()
{
}

void UIPopupRemoveObjectTag_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupRemoveObjectTag);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(selectGeneralOrNotListSelectorObject,"selectGeneralOrNotListSelectorObject");
	HX_MARK_MEMBER_NAME(selectGeneralOrNotPrevString,"selectGeneralOrNotPrevString");
	HX_MARK_MEMBER_NAME(selectGeneralOrNotString,"selectGeneralOrNotString");
	HX_MARK_MEMBER_NAME(selectTagListSelectorObject,"selectTagListSelectorObject");
	HX_MARK_MEMBER_NAME(selectTagNameString,"selectTagNameString");
	HX_MARK_MEMBER_NAME(selectTagObject,"selectTagObject");
	HX_MARK_END_CLASS();
}

void UIPopupRemoveObjectTag_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(selectGeneralOrNotListSelectorObject,"selectGeneralOrNotListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectGeneralOrNotPrevString,"selectGeneralOrNotPrevString");
	HX_VISIT_MEMBER_NAME(selectGeneralOrNotString,"selectGeneralOrNotString");
	HX_VISIT_MEMBER_NAME(selectTagListSelectorObject,"selectTagListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectTagNameString,"selectTagNameString");
	HX_VISIT_MEMBER_NAME(selectTagObject,"selectTagObject");
}

Dynamic UIPopupRemoveObjectTag_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	case 15:
		if (HX_FIELD_EQ(inName,"selectTagObject") ) { return selectTagObject; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectTagNameString") ) { return selectTagNameString; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"selectGeneralOrNotString") ) { return selectGeneralOrNotString; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"selectTagListSelectorObject") ) { return selectTagListSelectorObject; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"selectGeneralOrNotPrevString") ) { return selectGeneralOrNotPrevString; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"selectGeneralOrNotListSelectorObject") ) { return selectGeneralOrNotListSelectorObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupRemoveObjectTag_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { popupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { buttonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectTagObject") ) { selectTagObject=inValue.Cast< ::ObjectTag >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectTagNameString") ) { selectTagNameString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"selectGeneralOrNotString") ) { selectGeneralOrNotString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"selectTagListSelectorObject") ) { selectTagListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"selectGeneralOrNotPrevString") ) { selectGeneralOrNotPrevString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"selectGeneralOrNotListSelectorObject") ) { selectGeneralOrNotListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool UIPopupRemoveObjectTag_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void UIPopupRemoveObjectTag_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("selectGeneralOrNotListSelectorObject","\xe0","\x81","\x31","\x3c"));
	outFields->push(HX_HCSTRING("selectGeneralOrNotPrevString","\xc8","\xb1","\x61","\x7c"));
	outFields->push(HX_HCSTRING("selectGeneralOrNotString","\x75","\xa4","\x5b","\xd3"));
	outFields->push(HX_HCSTRING("selectTagListSelectorObject","\x9a","\x48","\x9a","\x65"));
	outFields->push(HX_HCSTRING("selectTagNameString","\xda","\xf3","\x91","\x61"));
	outFields->push(HX_HCSTRING("selectTagObject","\x1d","\x12","\x32","\xf9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupRemoveObjectTag_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupRemoveObjectTag_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupRemoveObjectTag_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupRemoveObjectTag_obj,selectGeneralOrNotListSelectorObject),HX_HCSTRING("selectGeneralOrNotListSelectorObject","\xe0","\x81","\x31","\x3c")},
	{hx::fsString,(int)offsetof(UIPopupRemoveObjectTag_obj,selectGeneralOrNotPrevString),HX_HCSTRING("selectGeneralOrNotPrevString","\xc8","\xb1","\x61","\x7c")},
	{hx::fsString,(int)offsetof(UIPopupRemoveObjectTag_obj,selectGeneralOrNotString),HX_HCSTRING("selectGeneralOrNotString","\x75","\xa4","\x5b","\xd3")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupRemoveObjectTag_obj,selectTagListSelectorObject),HX_HCSTRING("selectTagListSelectorObject","\x9a","\x48","\x9a","\x65")},
	{hx::fsString,(int)offsetof(UIPopupRemoveObjectTag_obj,selectTagNameString),HX_HCSTRING("selectTagNameString","\xda","\xf3","\x91","\x61")},
	{hx::fsObject /*::ObjectTag*/ ,(int)offsetof(UIPopupRemoveObjectTag_obj,selectTagObject),HX_HCSTRING("selectTagObject","\x1d","\x12","\x32","\xf9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("selectGeneralOrNotListSelectorObject","\xe0","\x81","\x31","\x3c"),
	HX_HCSTRING("selectGeneralOrNotPrevString","\xc8","\xb1","\x61","\x7c"),
	HX_HCSTRING("selectGeneralOrNotString","\x75","\xa4","\x5b","\xd3"),
	HX_HCSTRING("selectTagListSelectorObject","\x9a","\x48","\x9a","\x65"),
	HX_HCSTRING("selectTagNameString","\xda","\xf3","\x91","\x61"),
	HX_HCSTRING("selectTagObject","\x1d","\x12","\x32","\xf9"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPopupRemoveObjectTag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPopupRemoveObjectTag_obj::__mClass,"__mClass");
};

#endif

hx::Class UIPopupRemoveObjectTag_obj::__mClass;

void UIPopupRemoveObjectTag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIPopupRemoveObjectTag","\x9f","\x57","\x65","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &UIPopupRemoveObjectTag_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIPopupRemoveObjectTag_obj >;
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

