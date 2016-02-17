#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionPremade
#include <CollectionPremade.h>
#endif
#ifndef INCLUDED_CollectionPremadeTag
#include <CollectionPremadeTag.h>
#endif
#ifndef INCLUDED_CollectionTagGeneral
#include <CollectionTagGeneral.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_EnumVisitorMode
#include <EnumVisitorMode.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectMuseum
#include <UIPopupAddObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectTag
#include <UIPopupAddObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectVisitor
#include <UIPopupAddObjectVisitor.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectMuseum
#include <UIPopupEditObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectTag
#include <UIPopupEditObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectVisitor
#include <UIPopupEditObjectVisitor.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectMuseum
#include <UIPopupRemoveObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectTag
#include <UIPopupRemoveObjectTag.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectVisitor
#include <UIPopupRemoveObjectVisitor.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Absolute
#include <haxe/ui/toolkit/containers/Absolute.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Accordion
#include <haxe/ui/toolkit/containers/Accordion.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_hxSerial_Serial
#include <hxSerial/Serial.h>
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

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",23,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(52)
	this->serialObject = null();
	HX_STACK_LINE(50)
	this->uiPopupRemoveVisitorObject = null();
	HX_STACK_LINE(49)
	this->uiPopupRemoveTagObject = null();
	HX_STACK_LINE(48)
	this->uiPopupRemoveMuseumObject = null();
	HX_STACK_LINE(47)
	this->uiPopupEditVisitorObject = null();
	HX_STACK_LINE(46)
	this->uiPopupEditTagObject = null();
	HX_STACK_LINE(45)
	this->uiPopupEditMuseumObject = null();
	HX_STACK_LINE(44)
	this->uiPopupAddVisitorObject = null();
	HX_STACK_LINE(43)
	this->uiPopupAddTagObject = null();
	HX_STACK_LINE(42)
	this->uiPopupAddMuseumObject = null();
	HX_STACK_LINE(41)
	this->soundProgressBool = false;
	HX_STACK_LINE(40)
	this->serialLength = (int)0;
	HX_STACK_LINE(39)
	this->serialIndexInt = (int)0;
	HX_STACK_LINE(38)
	this->serialEstablishedBool = false;
	HX_STACK_LINE(37)
	this->serialCounterInt = (int)0;
	HX_STACK_LINE(36)
	this->sendInstructionToArduinoStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(34)
	this->loopCounterMainInt = (int)0;
	HX_STACK_LINE(30)
	this->collectionGlobalObject = ::CollectionGlobal_obj::__new();
	HX_STACK_LINE(61)
	::Main _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(64)
	super::__construct();
	HX_STACK_LINE(67)
	int tmp = ::hxSerial::Serial_obj::getDeviceList()->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	this->serialLength = tmp;
	HX_STACK_LINE(71)
	::haxe::ui::toolkit::core::Toolkit_obj::init();
	HX_STACK_LINE(75)
	::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >(),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));
	HX_STACK_LINE(76)
	::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >(),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Main,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::core::Root _root){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Main.hx",79,0x087e5c05)
		HX_STACK_ARG(_root,"_root")
		{
			HX_STACK_LINE(82)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIMain.xml","\x1b","\x90","\x6d","\x46"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(82)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject uiMainObject = tmp1;		HX_STACK_VAR(uiMainObject,"uiMainObject");
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = uiMainObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(85)
			_g->collectionGlobalObject->SetUIMainObjectVoid(tmp2);
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp3 = uiMainObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(87)
			_root->addChild(tmp3);
			HX_STACK_LINE(91)
			::UIPopupAddObjectMuseum tmp4 = ::UIPopupAddObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			_g->uiPopupAddMuseumObject = tmp4;
			HX_STACK_LINE(92)
			::UIPopupAddObjectTag tmp5 = ::UIPopupAddObjectTag_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			_g->uiPopupAddTagObject = tmp5;
			HX_STACK_LINE(93)
			::UIPopupAddObjectVisitor tmp6 = ::UIPopupAddObjectVisitor_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			_g->uiPopupAddVisitorObject = tmp6;
			HX_STACK_LINE(94)
			::UIPopupEditObjectMuseum tmp7 = ::UIPopupEditObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			_g->uiPopupEditMuseumObject = tmp7;
			HX_STACK_LINE(95)
			::UIPopupEditObjectTag tmp8 = ::UIPopupEditObjectTag_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(95)
			_g->uiPopupEditTagObject = tmp8;
			HX_STACK_LINE(96)
			::UIPopupEditObjectVisitor tmp9 = ::UIPopupEditObjectVisitor_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			_g->uiPopupEditVisitorObject = tmp9;
			HX_STACK_LINE(97)
			::UIPopupRemoveObjectMuseum tmp10 = ::UIPopupRemoveObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(97)
			_g->uiPopupRemoveMuseumObject = tmp10;
			HX_STACK_LINE(98)
			::UIPopupRemoveObjectTag tmp11 = ::UIPopupRemoveObjectTag_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			_g->uiPopupRemoveTagObject = tmp11;
			HX_STACK_LINE(99)
			::UIPopupRemoveObjectVisitor tmp12 = ::UIPopupRemoveObjectVisitor_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(99)
			_g->uiPopupRemoveVisitorObject = tmp12;
			HX_STACK_LINE(103)
			::haxe::ui::toolkit::containers::Absolute tmp13 = _root->findChild(HX_HCSTRING("UIMuseumAbsolute","\xdd","\x3c","\xb2","\xbe"),hx::ClassOf< ::haxe::ui::toolkit::containers::Absolute >(),true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			::haxe::ui::toolkit::containers::Absolute uiMuseumAbsoluteObject = tmp13;		HX_STACK_VAR(uiMuseumAbsoluteObject,"uiMuseumAbsoluteObject");
			HX_STACK_LINE(106)
			::haxe::ui::toolkit::containers::Absolute tmp14 = uiMuseumAbsoluteObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(106)
			_g->collectionGlobalObject->SetUIMuseumAbsoluteObjectVoid(tmp14);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(79)
	::haxe::ui::toolkit::core::Toolkit_obj::openFullscreen( Dynamic(new _Function_1_1(_g)));
	HX_STACK_LINE(112)
	::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	::CollectionTagGeneral_obj::TagGeneralStructVoid(tmp1);
	HX_STACK_LINE(113)
	::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	::CollectionPremadeTag_obj::PremadeTagStructVoid(tmp2);
	HX_STACK_LINE(114)
	::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	::CollectionPremade_obj::PremadeFloorNewObjectVoid(tmp3);
	HX_STACK_LINE(115)
	::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	::CollectionPremade_obj::PremadeRoomNewObjectVoid(tmp4);
	HX_STACK_LINE(116)
	::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(116)
	::CollectionPremade_obj::PremadeExhibitionNewObjectVoid(tmp5);
	HX_STACK_LINE(123)
	::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(123)
	::CollectionPremade_obj::PremadeVisitorObjectVoid((int)10,tmp6);
	HX_STACK_LINE(126)
	::String tmp7 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(126)
	Dynamic tmp8 = this->UpdateVoid_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(126)
	this->addEventListener(tmp7,tmp8,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::SearchForSerialConnectionVoid( ){
{
		HX_STACK_FRAME("Main","SearchForSerialConnectionVoid",0xfbbfb9d2,"Main.SearchForSerialConnectionVoid","Main.hx",138,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		int tmp = this->serialIndexInt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		int tmp1 = this->serialLength;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp2)){
			HX_STACK_LINE(141)
			return null();
		}
		HX_STACK_LINE(142)
		bool tmp3 = this->serialEstablishedBool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		bool tmp4 = (tmp3 == false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		if ((tmp4)){
			HX_STACK_LINE(143)
			::hxSerial::Serial tmp5 = this->serialObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			if ((tmp6)){
				HX_STACK_LINE(144)
				int tmp7 = this->serialIndexInt;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(144)
				::String tmp8 = ::hxSerial::Serial_obj::getDeviceList()->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(144)
				::hxSerial::Serial tmp9 = ::hxSerial::Serial_obj::__new(tmp8,(int)9600,true);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(144)
				this->serialObject = tmp9;
			}
			else{
				HX_STACK_LINE(146)
				::hxSerial::Serial tmp7 = this->serialObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(146)
				bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				if ((tmp8)){
					HX_STACK_LINE(147)
					::hxSerial::Serial tmp9 = this->serialObject;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(147)
					int tmp10 = tmp9->available();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(147)
					bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(147)
					if ((tmp11)){
						HX_STACK_LINE(148)
						::hxSerial::Serial tmp12 = this->serialObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(148)
						::String tmp13 = tmp12->readBytes((int)9);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(148)
						bool tmp14 = (tmp13 == HX_HCSTRING("HANDSHAKE","\xd7","\x50","\x8e","\xaf"));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(148)
						if ((tmp14)){
							HX_STACK_LINE(149)
							this->serialEstablishedBool = true;
							HX_STACK_LINE(150)
							return null();
						}
					}
				}
			}
			HX_STACK_LINE(154)
			(this->serialCounterInt)++;
			HX_STACK_LINE(155)
			int tmp7 = this->serialCounterInt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			bool tmp8 = (tmp7 >= (int)300);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(155)
			if ((tmp8)){
				HX_STACK_LINE(156)
				this->serialObject = null();
				HX_STACK_LINE(157)
				(this->serialIndexInt)++;
				HX_STACK_LINE(158)
				this->serialCounterInt = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,SearchForSerialConnectionVoid,(void))

Void Main_obj::UpdateVoid( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("Main","UpdateVoid",0x95413012,"Main.UpdateVoid","Main.hx",177,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(180)
		this->SearchForSerialConnectionVoid();
		HX_STACK_LINE(181)
		bool tmp = this->serialEstablishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(181)
		bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		if ((tmp1)){
			HX_STACK_LINE(181)
			bool tmp3 = this->soundProgressBool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(181)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			tmp2 = (tmp4 == false);
		}
		else{
			HX_STACK_LINE(181)
			tmp2 = false;
		}
		HX_STACK_LINE(181)
		if ((tmp2)){
			HX_STACK_LINE(182)
			::hxSerial::Serial tmp3 = this->serialObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(182)
			int tmp4 = tmp3->available();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(182)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			if ((tmp5)){
				HX_STACK_LINE(183)
				::hxSerial::Serial tmp6 = this->serialObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(183)
				::String tmp7 = tmp6->readBytes((int)7);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				::String string = tmp7;		HX_STACK_VAR(string,"string");
				HX_STACK_LINE(184)
				::String tmp8 = string.substring((int)0,(int)3);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(184)
				bool tmp9 = (tmp8 == HX_HCSTRING("EXH","\x75","\xa8","\x34","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(184)
				if ((tmp9)){
					HX_STACK_LINE(186)
					::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(186)
					::ObjectVisitor tmp11 = tmp10->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(186)
					::EnumVisitorMode tmp12 = tmp11->GetVisitorModeEnum();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(186)
					bool tmp13 = (tmp12 == ::EnumVisitorMode_obj::HARDWARE_MANUAL);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(186)
					if ((tmp13)){
						HX_STACK_LINE(187)
						::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(187)
						::ObjectVisitor tmp15 = tmp14->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(187)
						::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(187)
						::String tmp17 = string;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(187)
						::ObjectMuseum tmp18 = ::CollectionFunction_obj::FindMuseumObject(tmp16,::EnumMuseumType_obj::EXH,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(187)
						tmp15->ChangeExhibitionCurrentVoid(tmp18);
						HX_STACK_LINE(188)
						::hxSerial::Serial tmp19 = this->serialObject;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(188)
						tmp19->writeBytes(HX_HCSTRING("I","\x49","\x00","\x00","\x00"));
						HX_STACK_LINE(189)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"));
						HX_STACK_LINE(190)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
						HX_STACK_LINE(191)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("W","\x57","\x00","\x00","\x00"));
						HX_STACK_LINE(192)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("E","\x45","\x00","\x00","\x00"));
						HX_STACK_LINE(193)
						::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(193)
						::ObjectVisitor tmp21 = tmp20->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(193)
						int tmp22 = tmp21->GetExplanationCurrentIndexInt();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(193)
						int tmp23 = (tmp22 + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(193)
						::String tmp24 = ::Std_obj::string(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(193)
						this->sendInstructionToArduinoStringArray->push(tmp24);
						HX_STACK_LINE(194)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("T","\x54","\x00","\x00","\x00"));
						HX_STACK_LINE(195)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
						HX_STACK_LINE(196)
						::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(196)
						::ObjectVisitor tmp26 = tmp25->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(196)
						::ObjectMuseum tmp27 = tmp26->GetExhibitionTargetObjectArray()->__get((int)0).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(196)
						int tmp28 = tmp27->GetIndexGlobalInt();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(196)
						int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(196)
						::String tmp30 = ::Std_obj::string(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(196)
						this->sendInstructionToArduinoStringArray->push(tmp30);
						HX_STACK_LINE(197)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("R","\x52","\x00","\x00","\x00"));
						HX_STACK_LINE(198)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
						HX_STACK_LINE(199)
						::CollectionGlobal tmp31 = this->collectionGlobalObject;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(199)
						::ObjectVisitor tmp32 = tmp31->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(199)
						::ObjectMuseum tmp33 = tmp32->GetExhibitionTargetObjectArray()->__get((int)1).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(199)
						int tmp34 = tmp33->GetIndexGlobalInt();		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(199)
						int tmp35 = (tmp34 + (int)1);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(199)
						::String tmp36 = ::Std_obj::string(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(199)
						this->sendInstructionToArduinoStringArray->push(tmp36);
						HX_STACK_LINE(200)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("R","\x52","\x00","\x00","\x00"));
						HX_STACK_LINE(201)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"));
						HX_STACK_LINE(202)
						::CollectionGlobal tmp37 = this->collectionGlobalObject;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(202)
						::ObjectVisitor tmp38 = tmp37->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(202)
						::ObjectMuseum tmp39 = tmp38->GetExhibitionTargetObjectArray()->__get((int)2).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(202)
						int tmp40 = tmp39->GetIndexGlobalInt();		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(202)
						int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(202)
						::String tmp42 = ::Std_obj::string(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(202)
						this->sendInstructionToArduinoStringArray->push(tmp42);
						HX_STACK_LINE(203)
						this->sendInstructionToArduinoStringArray->push(HX_HCSTRING("U","\x55","\x00","\x00","\x00"));
						HX_STACK_LINE(204)
						this->soundProgressBool = true;
					}
					HX_STACK_LINE(206)
					::String tmp14 = string;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(206)
					Dynamic tmp15 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),206,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(206)
					::haxe::Log_obj::trace(tmp14,tmp15);
				}
			}
		}
		HX_STACK_LINE(211)
		bool tmp3 = this->soundProgressBool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(211)
		bool tmp4 = (tmp3 == true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(211)
		if ((tmp4)){
			HX_STACK_LINE(212)
			::hxSerial::Serial tmp5 = this->serialObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(212)
			int tmp6 = tmp5->available();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(212)
			if ((tmp7)){
				HX_STACK_LINE(213)
				::hxSerial::Serial tmp8 = this->serialObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(213)
				::String tmp9 = tmp8->readBytes((int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(213)
				::String string = tmp9;		HX_STACK_VAR(string,"string");
				HX_STACK_LINE(214)
				bool tmp10 = (string == HX_HCSTRING("O","\x4f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(214)
				if ((tmp10)){
					HX_STACK_LINE(215)
					::String tmp11 = this->sendInstructionToArduinoStringArray->__get((int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(215)
					Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),215,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					::haxe::Log_obj::trace(tmp11,tmp12);
					HX_STACK_LINE(216)
					::hxSerial::Serial tmp13 = this->serialObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(216)
					::String tmp14 = this->sendInstructionToArduinoStringArray->__get((int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(216)
					tmp13->writeBytes(tmp14);
					HX_STACK_LINE(217)
					::String tmp15 = this->sendInstructionToArduinoStringArray->__get((int)0);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(217)
					this->sendInstructionToArduinoStringArray->remove(tmp15);
					HX_STACK_LINE(218)
					int tmp16 = this->sendInstructionToArduinoStringArray->length;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(218)
					bool tmp17 = (tmp16 == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(218)
					if ((tmp17)){
						HX_STACK_LINE(218)
						this->soundProgressBool = false;
					}
				}
			}
		}
		HX_STACK_LINE(224)
		this->UpdateSlowVoid();
		HX_STACK_LINE(225)
		::UIPopupAddObjectMuseum tmp5 = this->uiPopupAddMuseumObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(225)
		tmp5->UpdateVoid();
		HX_STACK_LINE(226)
		::UIPopupAddObjectTag tmp6 = this->uiPopupAddTagObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(226)
		tmp6->UpdateVoid();
		HX_STACK_LINE(227)
		::UIPopupAddObjectVisitor tmp7 = this->uiPopupAddVisitorObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(227)
		tmp7->UpdateVoid();
		HX_STACK_LINE(228)
		::UIPopupEditObjectMuseum tmp8 = this->uiPopupEditMuseumObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(228)
		tmp8->UpdateVoid();
		HX_STACK_LINE(229)
		::UIPopupEditObjectTag tmp9 = this->uiPopupEditTagObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(229)
		tmp9->UpdateVoid();
		HX_STACK_LINE(230)
		::UIPopupEditObjectVisitor tmp10 = this->uiPopupEditVisitorObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(230)
		tmp10->UpdateVoid();
		HX_STACK_LINE(231)
		::UIPopupRemoveObjectMuseum tmp11 = this->uiPopupRemoveMuseumObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(231)
		tmp11->UpdateVoid();
		HX_STACK_LINE(232)
		::UIPopupRemoveObjectTag tmp12 = this->uiPopupRemoveTagObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(232)
		tmp12->UpdateVoid();
		HX_STACK_LINE(233)
		::UIPopupRemoveObjectVisitor tmp13 = this->uiPopupRemoveVisitorObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(233)
		tmp13->UpdateVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,UpdateVoid,(void))

Void Main_obj::UpdateSlowVoid( ){
{
		HX_STACK_FRAME("Main","UpdateSlowVoid",0xca6605b3,"Main.UpdateSlowVoid","Main.hx",253,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(256)
		int tmp1 = tmp->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		int tmp3 = tmp2->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		Float tmp4 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(256)
		Float leastCommonMultipleFloat = tmp4;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
		HX_STACK_LINE(257)
		Float tmp5 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(257)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(257)
		Float tmp8 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(257)
		leastCommonMultipleFloat = tmp8;
		HX_STACK_LINE(258)
		Float tmp9 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(258)
		::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(258)
		int tmp11 = tmp10->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(258)
		Float tmp12 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(258)
		leastCommonMultipleFloat = tmp12;
		HX_STACK_LINE(259)
		Float tmp13 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(259)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(259)
		int leastCommonMultipleInt = tmp14;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
		HX_STACK_LINE(260)
		int tmp15 = this->loopCounterMainInt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(260)
		int tmp16 = leastCommonMultipleInt;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(260)
		bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(260)
		if ((tmp17)){
			HX_STACK_LINE(260)
			this->loopCounterMainInt = (int)0;
		}
		HX_STACK_LINE(261)
		::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(261)
		int tmp19 = this->loopCounterMainInt;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(261)
		::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(261)
		int tmp21 = tmp20->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(261)
		int tmp22 = hx::Mod(tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(261)
		::ObjectMuseum tmp23 = tmp18->GetExhibitionObjectArray()->__get(tmp22).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(261)
		tmp23->UpdateVoid();
		HX_STACK_LINE(262)
		::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(262)
		int tmp25 = this->loopCounterMainInt;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(262)
		::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(262)
		int tmp27 = tmp26->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(262)
		int tmp28 = hx::Mod(tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(262)
		::ObjectMuseum tmp29 = tmp24->GetFloorObjectArray()->__get(tmp28).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(262)
		tmp29->UpdateVoid();
		HX_STACK_LINE(263)
		::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(263)
		int tmp31 = this->loopCounterMainInt;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(263)
		::CollectionGlobal tmp32 = this->collectionGlobalObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(263)
		int tmp33 = tmp32->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(263)
		int tmp34 = hx::Mod(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(263)
		::ObjectMuseum tmp35 = tmp30->GetRoomObjectArray()->__get(tmp34).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(263)
		tmp35->UpdateVoid();
		HX_STACK_LINE(264)
		::CollectionGlobal tmp36 = this->collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(264)
		int tmp37 = this->loopCounterMainInt;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(264)
		::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(264)
		int tmp39 = tmp38->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(264)
		int tmp40 = hx::Mod(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(264)
		::ObjectVisitor tmp41 = tmp36->GetVisitorObjectArray()->__get(tmp40).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(264)
		tmp41->UpdateVoid();
		HX_STACK_LINE(265)
		(this->loopCounterMainInt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateSlowVoid,(void))

Void Main_obj::UpdateNormalVoid( ){
{
		HX_STACK_FRAME("Main","UpdateNormalVoid",0x168c9059,"Main.UpdateNormalVoid","Main.hx",268,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(271)
		int tmp1 = tmp->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		int tmp3 = tmp2->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		Float tmp4 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		Float leastCommonMultipleFloat = tmp4;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
		HX_STACK_LINE(272)
		Float tmp5 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(272)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(272)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(272)
		Float tmp8 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(272)
		leastCommonMultipleFloat = tmp8;
		HX_STACK_LINE(273)
		Float tmp9 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(273)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(273)
		int leastCommonMultipleInt = tmp10;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
		HX_STACK_LINE(274)
		int tmp11 = this->loopCounterMainInt;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(274)
		int tmp12 = leastCommonMultipleInt;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(274)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(274)
		if ((tmp13)){
			HX_STACK_LINE(274)
			this->loopCounterMainInt = (int)0;
		}
		HX_STACK_LINE(275)
		::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(275)
		int tmp15 = this->loopCounterMainInt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(275)
		::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(275)
		int tmp17 = tmp16->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(275)
		int tmp18 = hx::Mod(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(275)
		::ObjectMuseum tmp19 = tmp14->GetExhibitionObjectArray()->__get(tmp18).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(275)
		tmp19->UpdateVoid();
		HX_STACK_LINE(276)
		::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(276)
		int tmp21 = this->loopCounterMainInt;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(276)
		::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(276)
		int tmp23 = tmp22->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(276)
		int tmp24 = hx::Mod(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(276)
		::ObjectMuseum tmp25 = tmp20->GetFloorObjectArray()->__get(tmp24).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(276)
		tmp25->UpdateVoid();
		HX_STACK_LINE(277)
		::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(277)
		int tmp27 = this->loopCounterMainInt;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(277)
		::CollectionGlobal tmp28 = this->collectionGlobalObject;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(277)
		int tmp29 = tmp28->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(277)
		int tmp30 = hx::Mod(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(277)
		::ObjectMuseum tmp31 = tmp26->GetRoomObjectArray()->__get(tmp30).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(277)
		tmp31->UpdateVoid();
		HX_STACK_LINE(278)
		(this->loopCounterMainInt)++;
		HX_STACK_LINE(279)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(280)
		while((true)){
			HX_STACK_LINE(280)
			int tmp32 = loopCounter1Int;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(280)
			::CollectionGlobal tmp33 = this->collectionGlobalObject;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(280)
			int tmp34 = tmp33->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(280)
			bool tmp35 = (tmp32 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(280)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(280)
			if ((tmp36)){
				HX_STACK_LINE(280)
				break;
			}
			HX_STACK_LINE(281)
			::CollectionGlobal tmp37 = this->collectionGlobalObject;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(281)
			::ObjectVisitor tmp38 = tmp37->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(281)
			tmp38->UpdateVoid();
			HX_STACK_LINE(282)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateNormalVoid,(void))

Void Main_obj::UpdateFastVoid( ){
{
		HX_STACK_FRAME("Main","UpdateFastVoid",0xf8a3d3ce,"Main.UpdateFastVoid","Main.hx",286,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(288)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(289)
		while((true)){
			HX_STACK_LINE(289)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(289)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(289)
			int tmp2 = tmp1->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(289)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			if ((tmp4)){
				HX_STACK_LINE(289)
				break;
			}
			HX_STACK_LINE(289)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			::ObjectMuseum tmp6 = tmp5->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			tmp6->UpdateVoid();
			HX_STACK_LINE(289)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(290)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(291)
		while((true)){
			HX_STACK_LINE(291)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(291)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(291)
			int tmp2 = tmp1->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(291)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(291)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			if ((tmp4)){
				HX_STACK_LINE(291)
				break;
			}
			HX_STACK_LINE(291)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(291)
			::ObjectMuseum tmp6 = tmp5->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(291)
			tmp6->UpdateVoid();
			HX_STACK_LINE(291)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(292)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(293)
		while((true)){
			HX_STACK_LINE(293)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(293)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(293)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(293)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(293)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(293)
			if ((tmp4)){
				HX_STACK_LINE(293)
				break;
			}
			HX_STACK_LINE(293)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(293)
			::ObjectMuseum tmp6 = tmp5->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(293)
			tmp6->UpdateVoid();
			HX_STACK_LINE(293)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(294)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(295)
		while((true)){
			HX_STACK_LINE(295)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(295)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(295)
			int tmp2 = tmp1->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(295)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(295)
			if ((tmp4)){
				HX_STACK_LINE(295)
				break;
			}
			HX_STACK_LINE(295)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(295)
			::ObjectVisitor tmp6 = tmp5->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(295)
			tmp6->UpdateVoid();
			HX_STACK_LINE(295)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateFastVoid,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	HX_MARK_MEMBER_NAME(sendInstructionToArduinoStringArray,"sendInstructionToArduinoStringArray");
	HX_MARK_MEMBER_NAME(serialCounterInt,"serialCounterInt");
	HX_MARK_MEMBER_NAME(serialEstablishedBool,"serialEstablishedBool");
	HX_MARK_MEMBER_NAME(serialIndexInt,"serialIndexInt");
	HX_MARK_MEMBER_NAME(serialLength,"serialLength");
	HX_MARK_MEMBER_NAME(soundProgressBool,"soundProgressBool");
	HX_MARK_MEMBER_NAME(uiPopupAddMuseumObject,"uiPopupAddMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupAddTagObject,"uiPopupAddTagObject");
	HX_MARK_MEMBER_NAME(uiPopupAddVisitorObject,"uiPopupAddVisitorObject");
	HX_MARK_MEMBER_NAME(uiPopupEditMuseumObject,"uiPopupEditMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupEditTagObject,"uiPopupEditTagObject");
	HX_MARK_MEMBER_NAME(uiPopupEditVisitorObject,"uiPopupEditVisitorObject");
	HX_MARK_MEMBER_NAME(uiPopupRemoveMuseumObject,"uiPopupRemoveMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupRemoveTagObject,"uiPopupRemoveTagObject");
	HX_MARK_MEMBER_NAME(uiPopupRemoveVisitorObject,"uiPopupRemoveVisitorObject");
	HX_MARK_MEMBER_NAME(serialObject,"serialObject");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	HX_VISIT_MEMBER_NAME(sendInstructionToArduinoStringArray,"sendInstructionToArduinoStringArray");
	HX_VISIT_MEMBER_NAME(serialCounterInt,"serialCounterInt");
	HX_VISIT_MEMBER_NAME(serialEstablishedBool,"serialEstablishedBool");
	HX_VISIT_MEMBER_NAME(serialIndexInt,"serialIndexInt");
	HX_VISIT_MEMBER_NAME(serialLength,"serialLength");
	HX_VISIT_MEMBER_NAME(soundProgressBool,"soundProgressBool");
	HX_VISIT_MEMBER_NAME(uiPopupAddMuseumObject,"uiPopupAddMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupAddTagObject,"uiPopupAddTagObject");
	HX_VISIT_MEMBER_NAME(uiPopupAddVisitorObject,"uiPopupAddVisitorObject");
	HX_VISIT_MEMBER_NAME(uiPopupEditMuseumObject,"uiPopupEditMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupEditTagObject,"uiPopupEditTagObject");
	HX_VISIT_MEMBER_NAME(uiPopupEditVisitorObject,"uiPopupEditVisitorObject");
	HX_VISIT_MEMBER_NAME(uiPopupRemoveMuseumObject,"uiPopupRemoveMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupRemoveTagObject,"uiPopupRemoveTagObject");
	HX_VISIT_MEMBER_NAME(uiPopupRemoveVisitorObject,"uiPopupRemoveVisitorObject");
	HX_VISIT_MEMBER_NAME(serialObject,"serialObject");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"serialLength") ) { return serialLength; }
		if (HX_FIELD_EQ(inName,"serialObject") ) { return serialObject; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"serialIndexInt") ) { return serialIndexInt; }
		if (HX_FIELD_EQ(inName,"UpdateSlowVoid") ) { return UpdateSlowVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateFastVoid") ) { return UpdateFastVoid_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"serialCounterInt") ) { return serialCounterInt; }
		if (HX_FIELD_EQ(inName,"UpdateNormalVoid") ) { return UpdateNormalVoid_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"soundProgressBool") ) { return soundProgressBool; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { return loopCounterMainInt; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uiPopupAddTagObject") ) { return uiPopupAddTagObject; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uiPopupEditTagObject") ) { return uiPopupEditTagObject; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"serialEstablishedBool") ) { return serialEstablishedBool; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"uiPopupAddMuseumObject") ) { return uiPopupAddMuseumObject; }
		if (HX_FIELD_EQ(inName,"uiPopupRemoveTagObject") ) { return uiPopupRemoveTagObject; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"uiPopupAddVisitorObject") ) { return uiPopupAddVisitorObject; }
		if (HX_FIELD_EQ(inName,"uiPopupEditMuseumObject") ) { return uiPopupEditMuseumObject; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"uiPopupEditVisitorObject") ) { return uiPopupEditVisitorObject; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveMuseumObject") ) { return uiPopupRemoveMuseumObject; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveVisitorObject") ) { return uiPopupRemoveVisitorObject; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"SearchForSerialConnectionVoid") ) { return SearchForSerialConnectionVoid_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"sendInstructionToArduinoStringArray") ) { return sendInstructionToArduinoStringArray; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"serialLength") ) { serialLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"serialObject") ) { serialObject=inValue.Cast< ::hxSerial::Serial >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"serialIndexInt") ) { serialIndexInt=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"serialCounterInt") ) { serialCounterInt=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"soundProgressBool") ) { soundProgressBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { loopCounterMainInt=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uiPopupAddTagObject") ) { uiPopupAddTagObject=inValue.Cast< ::UIPopupAddObjectTag >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uiPopupEditTagObject") ) { uiPopupEditTagObject=inValue.Cast< ::UIPopupEditObjectTag >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"serialEstablishedBool") ) { serialEstablishedBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupAddMuseumObject") ) { uiPopupAddMuseumObject=inValue.Cast< ::UIPopupAddObjectMuseum >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupRemoveTagObject") ) { uiPopupRemoveTagObject=inValue.Cast< ::UIPopupRemoveObjectTag >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"uiPopupAddVisitorObject") ) { uiPopupAddVisitorObject=inValue.Cast< ::UIPopupAddObjectVisitor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupEditMuseumObject") ) { uiPopupEditMuseumObject=inValue.Cast< ::UIPopupEditObjectMuseum >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"uiPopupEditVisitorObject") ) { uiPopupEditVisitorObject=inValue.Cast< ::UIPopupEditObjectVisitor >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveMuseumObject") ) { uiPopupRemoveMuseumObject=inValue.Cast< ::UIPopupRemoveObjectMuseum >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveVisitorObject") ) { uiPopupRemoveVisitorObject=inValue.Cast< ::UIPopupRemoveObjectVisitor >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"sendInstructionToArduinoStringArray") ) { sendInstructionToArduinoStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f"));
	outFields->push(HX_HCSTRING("sendInstructionToArduinoStringArray","\xa1","\x15","\xbe","\x44"));
	outFields->push(HX_HCSTRING("serialCounterInt","\x67","\x82","\x4a","\x77"));
	outFields->push(HX_HCSTRING("serialEstablishedBool","\xce","\x2b","\xaf","\xf9"));
	outFields->push(HX_HCSTRING("serialIndexInt","\x11","\x1b","\xa4","\x95"));
	outFields->push(HX_HCSTRING("serialLength","\xfa","\x61","\xb3","\x91"));
	outFields->push(HX_HCSTRING("soundProgressBool","\xe6","\xd5","\xdf","\x9a"));
	outFields->push(HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59"));
	outFields->push(HX_HCSTRING("uiPopupAddTagObject","\xb0","\x91","\x6c","\xdd"));
	outFields->push(HX_HCSTRING("uiPopupAddVisitorObject","\x84","\x59","\x19","\x99"));
	outFields->push(HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e"));
	outFields->push(HX_HCSTRING("uiPopupEditTagObject","\xf7","\x1a","\x21","\x2e"));
	outFields->push(HX_HCSTRING("uiPopupEditVisitorObject","\x4b","\x92","\xb9","\x1a"));
	outFields->push(HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0"));
	outFields->push(HX_HCSTRING("uiPopupRemoveTagObject","\x7d","\xeb","\x8f","\xb9"));
	outFields->push(HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75"));
	outFields->push(HX_HCSTRING("serialObject","\xd3","\x4b","\xeb","\x07"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(Main_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsInt,(int)offsetof(Main_obj,loopCounterMainInt),HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Main_obj,sendInstructionToArduinoStringArray),HX_HCSTRING("sendInstructionToArduinoStringArray","\xa1","\x15","\xbe","\x44")},
	{hx::fsInt,(int)offsetof(Main_obj,serialCounterInt),HX_HCSTRING("serialCounterInt","\x67","\x82","\x4a","\x77")},
	{hx::fsBool,(int)offsetof(Main_obj,serialEstablishedBool),HX_HCSTRING("serialEstablishedBool","\xce","\x2b","\xaf","\xf9")},
	{hx::fsInt,(int)offsetof(Main_obj,serialIndexInt),HX_HCSTRING("serialIndexInt","\x11","\x1b","\xa4","\x95")},
	{hx::fsInt,(int)offsetof(Main_obj,serialLength),HX_HCSTRING("serialLength","\xfa","\x61","\xb3","\x91")},
	{hx::fsBool,(int)offsetof(Main_obj,soundProgressBool),HX_HCSTRING("soundProgressBool","\xe6","\xd5","\xdf","\x9a")},
	{hx::fsObject /*::UIPopupAddObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupAddMuseumObject),HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59")},
	{hx::fsObject /*::UIPopupAddObjectTag*/ ,(int)offsetof(Main_obj,uiPopupAddTagObject),HX_HCSTRING("uiPopupAddTagObject","\xb0","\x91","\x6c","\xdd")},
	{hx::fsObject /*::UIPopupAddObjectVisitor*/ ,(int)offsetof(Main_obj,uiPopupAddVisitorObject),HX_HCSTRING("uiPopupAddVisitorObject","\x84","\x59","\x19","\x99")},
	{hx::fsObject /*::UIPopupEditObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupEditMuseumObject),HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e")},
	{hx::fsObject /*::UIPopupEditObjectTag*/ ,(int)offsetof(Main_obj,uiPopupEditTagObject),HX_HCSTRING("uiPopupEditTagObject","\xf7","\x1a","\x21","\x2e")},
	{hx::fsObject /*::UIPopupEditObjectVisitor*/ ,(int)offsetof(Main_obj,uiPopupEditVisitorObject),HX_HCSTRING("uiPopupEditVisitorObject","\x4b","\x92","\xb9","\x1a")},
	{hx::fsObject /*::UIPopupRemoveObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupRemoveMuseumObject),HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0")},
	{hx::fsObject /*::UIPopupRemoveObjectTag*/ ,(int)offsetof(Main_obj,uiPopupRemoveTagObject),HX_HCSTRING("uiPopupRemoveTagObject","\x7d","\xeb","\x8f","\xb9")},
	{hx::fsObject /*::UIPopupRemoveObjectVisitor*/ ,(int)offsetof(Main_obj,uiPopupRemoveVisitorObject),HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75")},
	{hx::fsObject /*::hxSerial::Serial*/ ,(int)offsetof(Main_obj,serialObject),HX_HCSTRING("serialObject","\xd3","\x4b","\xeb","\x07")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f"),
	HX_HCSTRING("sendInstructionToArduinoStringArray","\xa1","\x15","\xbe","\x44"),
	HX_HCSTRING("serialCounterInt","\x67","\x82","\x4a","\x77"),
	HX_HCSTRING("serialEstablishedBool","\xce","\x2b","\xaf","\xf9"),
	HX_HCSTRING("serialIndexInt","\x11","\x1b","\xa4","\x95"),
	HX_HCSTRING("serialLength","\xfa","\x61","\xb3","\x91"),
	HX_HCSTRING("soundProgressBool","\xe6","\xd5","\xdf","\x9a"),
	HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59"),
	HX_HCSTRING("uiPopupAddTagObject","\xb0","\x91","\x6c","\xdd"),
	HX_HCSTRING("uiPopupAddVisitorObject","\x84","\x59","\x19","\x99"),
	HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e"),
	HX_HCSTRING("uiPopupEditTagObject","\xf7","\x1a","\x21","\x2e"),
	HX_HCSTRING("uiPopupEditVisitorObject","\x4b","\x92","\xb9","\x1a"),
	HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0"),
	HX_HCSTRING("uiPopupRemoveTagObject","\x7d","\xeb","\x8f","\xb9"),
	HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75"),
	HX_HCSTRING("serialObject","\xd3","\x4b","\xeb","\x07"),
	HX_HCSTRING("SearchForSerialConnectionVoid","\xa7","\x8a","\x33","\x40"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	HX_HCSTRING("UpdateSlowVoid","\x3e","\xe9","\xaf","\x3b"),
	HX_HCSTRING("UpdateNormalVoid","\xa4","\xac","\xbe","\xd8"),
	HX_HCSTRING("UpdateFastVoid","\x59","\xb7","\xed","\x69"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

