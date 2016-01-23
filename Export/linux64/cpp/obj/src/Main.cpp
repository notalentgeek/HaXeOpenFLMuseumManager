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
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_UIPopupAddObjectMuseum
#include <UIPopupAddObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectMuseum
#include <UIPopupEditObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectMuseum
#include <UIPopupRemoveObjectMuseum.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectVisitor
#include <UIPopupRemoveObjectVisitor.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",27,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->uiPopupRemoveVisitorObject = null();
	HX_STACK_LINE(37)
	this->uiPopupRemoveMuseumObject = null();
	HX_STACK_LINE(36)
	this->uiPopupEditMuseumObject = null();
	HX_STACK_LINE(35)
	this->uiPopupAddMuseumObject = null();
	HX_STACK_LINE(33)
	this->loopCounterMainInt = (int)0;
	HX_STACK_LINE(32)
	this->collectionGlobalObject = ::CollectionGlobal_obj::__new();
	HX_STACK_LINE(42)
	::Main _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	super::__construct();
	HX_STACK_LINE(46)
	::haxe::ui::toolkit::core::Toolkit_obj::init();
	HX_STACK_LINE(47)
	::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >(),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Main,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::core::Root _root){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Main.hx",48,0x087e5c05)
		HX_STACK_ARG(_root,"_root")
		{
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIMain.xml","\x1b","\x90","\x6d","\x46"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject uiMainObject = tmp;		HX_STACK_VAR(uiMainObject,"uiMainObject");
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp1 = uiMainObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			_g->collectionGlobalObject->SetUIMainObjectVoid(tmp1);
			HX_STACK_LINE(53)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = uiMainObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			_root->addChild(tmp2);
			HX_STACK_LINE(55)
			::UIPopupAddObjectMuseum tmp3 = ::UIPopupAddObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(55)
			_g->uiPopupAddMuseumObject = tmp3;
			HX_STACK_LINE(56)
			::UIPopupEditObjectMuseum tmp4 = ::UIPopupEditObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			_g->uiPopupEditMuseumObject = tmp4;
			HX_STACK_LINE(57)
			::UIPopupRemoveObjectMuseum tmp5 = ::UIPopupRemoveObjectMuseum_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			_g->uiPopupRemoveMuseumObject = tmp5;
			HX_STACK_LINE(58)
			::UIPopupRemoveObjectVisitor tmp6 = ::UIPopupRemoveObjectVisitor_obj::__new(_g->collectionGlobalObject,_root);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(58)
			_g->uiPopupRemoveVisitorObject = tmp6;
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::containers::Absolute tmp7 = _root->findChild(HX_HCSTRING("UIMuseumAbsolute","\xdd","\x3c","\xb2","\xbe"),hx::ClassOf< ::haxe::ui::toolkit::containers::Absolute >(),true);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::containers::Absolute uiMuseumAbsoluteObject = tmp7;		HX_STACK_VAR(uiMuseumAbsoluteObject,"uiMuseumAbsoluteObject");
			HX_STACK_LINE(61)
			::haxe::ui::toolkit::containers::Absolute tmp8 = uiMuseumAbsoluteObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			_g->collectionGlobalObject->SetUIMuseumAbsoluteObjectVoid(tmp8);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(48)
	::haxe::ui::toolkit::core::Toolkit_obj::openFullscreen( Dynamic(new _Function_1_1(_g)));
	HX_STACK_LINE(66)
	::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	::CollectionTagGeneral_obj::TagGeneralStructVoid(tmp);
	HX_STACK_LINE(67)
	::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	::CollectionPremadeTag_obj::PremadeTagStructVoid(tmp1);
	HX_STACK_LINE(68)
	::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	::CollectionPremade_obj::PremadeFloorObjectVoid(tmp2);
	HX_STACK_LINE(69)
	::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(69)
	::CollectionPremade_obj::PremadeRoomObjectVoid(tmp3);
	HX_STACK_LINE(70)
	::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(70)
	::CollectionPremade_obj::PremadeExhibitionObjectVoid(tmp4);
	HX_STACK_LINE(71)
	::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(71)
	::CollectionPremade_obj::PremadeVisitorObjectVoid((int)100,tmp5);
	HX_STACK_LINE(73)
	::String tmp6 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(73)
	Dynamic tmp7 = this->Update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(73)
	this->addEventListener(tmp6,tmp7,null(),null(),null());
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

Void Main_obj::Update( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("Main","Update",0xec44199e,"Main.Update","Main.hx",79,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(81)
		this->UpdateSlowVoid();
		HX_STACK_LINE(82)
		::UIPopupAddObjectMuseum tmp = this->uiPopupAddMuseumObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		tmp->UpdateVoid();
		HX_STACK_LINE(83)
		::UIPopupEditObjectMuseum tmp1 = this->uiPopupEditMuseumObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		tmp1->UpdateVoid();
		HX_STACK_LINE(84)
		::UIPopupRemoveObjectMuseum tmp2 = this->uiPopupRemoveMuseumObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		tmp2->UpdateVoid();
		HX_STACK_LINE(85)
		::UIPopupRemoveObjectVisitor tmp3 = this->uiPopupRemoveVisitorObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		tmp3->UpdateVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,Update,(void))

Void Main_obj::UpdateSlowVoid( ){
{
		HX_STACK_FRAME("Main","UpdateSlowVoid",0xca6605b3,"Main.UpdateSlowVoid","Main.hx",101,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		int tmp1 = tmp->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		int tmp3 = tmp2->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(104)
		Float tmp4 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		Float leastCommonMultipleFloat = tmp4;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
		HX_STACK_LINE(105)
		Float tmp5 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		Float tmp8 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(105)
		leastCommonMultipleFloat = tmp8;
		HX_STACK_LINE(106)
		Float tmp9 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(106)
		::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(106)
		int tmp11 = tmp10->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(106)
		Float tmp12 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(106)
		leastCommonMultipleFloat = tmp12;
		HX_STACK_LINE(107)
		Float tmp13 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(107)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(107)
		int leastCommonMultipleInt = tmp14;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
		HX_STACK_LINE(108)
		int tmp15 = this->loopCounterMainInt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(108)
		int tmp16 = leastCommonMultipleInt;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(108)
		bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(108)
		if ((tmp17)){
			HX_STACK_LINE(108)
			this->loopCounterMainInt = (int)0;
		}
		HX_STACK_LINE(109)
		::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(109)
		int tmp19 = this->loopCounterMainInt;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(109)
		::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(109)
		int tmp21 = tmp20->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(109)
		int tmp22 = hx::Mod(tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(109)
		::ObjectMuseum tmp23 = tmp18->GetExhibitionObjectArray()->__get(tmp22).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(109)
		tmp23->UpdateVoid();
		HX_STACK_LINE(110)
		::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(110)
		int tmp25 = this->loopCounterMainInt;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(110)
		::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(110)
		int tmp27 = tmp26->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(110)
		int tmp28 = hx::Mod(tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(110)
		::ObjectMuseum tmp29 = tmp24->GetFloorObjectArray()->__get(tmp28).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(110)
		tmp29->UpdateVoid();
		HX_STACK_LINE(111)
		::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(111)
		int tmp31 = this->loopCounterMainInt;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(111)
		::CollectionGlobal tmp32 = this->collectionGlobalObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(111)
		int tmp33 = tmp32->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(111)
		int tmp34 = hx::Mod(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(111)
		::ObjectMuseum tmp35 = tmp30->GetRoomObjectArray()->__get(tmp34).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(111)
		tmp35->UpdateVoid();
		HX_STACK_LINE(112)
		::CollectionGlobal tmp36 = this->collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(112)
		int tmp37 = this->loopCounterMainInt;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(112)
		::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(112)
		int tmp39 = tmp38->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(112)
		int tmp40 = hx::Mod(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(112)
		::ObjectVisitor tmp41 = tmp36->GetVisitorObjectArray()->__get(tmp40).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(112)
		tmp41->AIAutoExhibitionChangeVoid();
		HX_STACK_LINE(113)
		(this->loopCounterMainInt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateSlowVoid,(void))

Void Main_obj::UpdateNormalVoid( ){
{
		HX_STACK_FRAME("Main","UpdateNormalVoid",0x168c9059,"Main.UpdateNormalVoid","Main.hx",119,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		int tmp1 = tmp->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(122)
		::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		int tmp3 = tmp2->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		Float tmp4 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		Float leastCommonMultipleFloat = tmp4;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
		HX_STACK_LINE(123)
		Float tmp5 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(123)
		Float tmp8 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(123)
		leastCommonMultipleFloat = tmp8;
		HX_STACK_LINE(124)
		Float tmp9 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(124)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(124)
		int leastCommonMultipleInt = tmp10;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
		HX_STACK_LINE(125)
		int tmp11 = this->loopCounterMainInt;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(125)
		int tmp12 = leastCommonMultipleInt;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(125)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(125)
		if ((tmp13)){
			HX_STACK_LINE(125)
			this->loopCounterMainInt = (int)0;
		}
		HX_STACK_LINE(126)
		::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(126)
		int tmp15 = this->loopCounterMainInt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(126)
		::CollectionGlobal tmp16 = this->collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(126)
		int tmp17 = tmp16->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(126)
		int tmp18 = hx::Mod(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(126)
		::ObjectMuseum tmp19 = tmp14->GetExhibitionObjectArray()->__get(tmp18).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(126)
		tmp19->UpdateVoid();
		HX_STACK_LINE(127)
		::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(127)
		int tmp21 = this->loopCounterMainInt;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(127)
		::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(127)
		int tmp23 = tmp22->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(127)
		int tmp24 = hx::Mod(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(127)
		::ObjectMuseum tmp25 = tmp20->GetFloorObjectArray()->__get(tmp24).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(127)
		tmp25->UpdateVoid();
		HX_STACK_LINE(128)
		::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(128)
		int tmp27 = this->loopCounterMainInt;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(128)
		::CollectionGlobal tmp28 = this->collectionGlobalObject;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(128)
		int tmp29 = tmp28->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(128)
		int tmp30 = hx::Mod(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(128)
		::ObjectMuseum tmp31 = tmp26->GetRoomObjectArray()->__get(tmp30).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(128)
		tmp31->UpdateVoid();
		HX_STACK_LINE(129)
		(this->loopCounterMainInt)++;
		HX_STACK_LINE(130)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			int tmp32 = loopCounter1Int;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(131)
			::CollectionGlobal tmp33 = this->collectionGlobalObject;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(131)
			int tmp34 = tmp33->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(131)
			bool tmp35 = (tmp32 < tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(131)
			bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(131)
			if ((tmp36)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(132)
			::CollectionGlobal tmp37 = this->collectionGlobalObject;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(132)
			::ObjectVisitor tmp38 = tmp37->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(132)
			tmp38->AIAutoExhibitionChangeVoid();
			HX_STACK_LINE(133)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,UpdateNormalVoid,(void))

Void Main_obj::UpdateFastVoid( ){
{
		HX_STACK_FRAME("Main","UpdateFastVoid",0xf8a3d3ce,"Main.UpdateFastVoid","Main.hx",140,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(143)
		while((true)){
			HX_STACK_LINE(143)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(143)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			int tmp2 = tmp1->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			if ((tmp4)){
				HX_STACK_LINE(143)
				break;
			}
			HX_STACK_LINE(143)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			::ObjectMuseum tmp6 = tmp5->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			tmp6->UpdateVoid();
			HX_STACK_LINE(143)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(144)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(145)
		while((true)){
			HX_STACK_LINE(145)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(145)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(145)
			int tmp2 = tmp1->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			if ((tmp4)){
				HX_STACK_LINE(145)
				break;
			}
			HX_STACK_LINE(145)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			::ObjectMuseum tmp6 = tmp5->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			tmp6->UpdateVoid();
			HX_STACK_LINE(145)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(146)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(147)
		while((true)){
			HX_STACK_LINE(147)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(147)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(147)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			if ((tmp4)){
				HX_STACK_LINE(147)
				break;
			}
			HX_STACK_LINE(147)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			::ObjectMuseum tmp6 = tmp5->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			tmp6->UpdateVoid();
			HX_STACK_LINE(147)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(148)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(149)
		while((true)){
			HX_STACK_LINE(149)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(149)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			int tmp2 = tmp1->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			if ((tmp4)){
				HX_STACK_LINE(149)
				break;
			}
			HX_STACK_LINE(149)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			::ObjectVisitor tmp6 = tmp5->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			tmp6->AIAutoExhibitionChangeVoid();
			HX_STACK_LINE(149)
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
	HX_MARK_MEMBER_NAME(uiPopupAddMuseumObject,"uiPopupAddMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupEditMuseumObject,"uiPopupEditMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupRemoveMuseumObject,"uiPopupRemoveMuseumObject");
	HX_MARK_MEMBER_NAME(uiPopupRemoveVisitorObject,"uiPopupRemoveVisitorObject");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	HX_VISIT_MEMBER_NAME(uiPopupAddMuseumObject,"uiPopupAddMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupEditMuseumObject,"uiPopupEditMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupRemoveMuseumObject,"uiPopupRemoveMuseumObject");
	HX_VISIT_MEMBER_NAME(uiPopupRemoveVisitorObject,"uiPopupRemoveVisitorObject");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"UpdateSlowVoid") ) { return UpdateSlowVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateFastVoid") ) { return UpdateFastVoid_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"UpdateNormalVoid") ) { return UpdateNormalVoid_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { return loopCounterMainInt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"uiPopupAddMuseumObject") ) { return uiPopupAddMuseumObject; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"uiPopupEditMuseumObject") ) { return uiPopupEditMuseumObject; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveMuseumObject") ) { return uiPopupRemoveMuseumObject; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveVisitorObject") ) { return uiPopupRemoveVisitorObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { loopCounterMainInt=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uiPopupAddMuseumObject") ) { uiPopupAddMuseumObject=inValue.Cast< ::UIPopupAddObjectMuseum >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"uiPopupEditMuseumObject") ) { uiPopupEditMuseumObject=inValue.Cast< ::UIPopupEditObjectMuseum >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveMuseumObject") ) { uiPopupRemoveMuseumObject=inValue.Cast< ::UIPopupRemoveObjectMuseum >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"uiPopupRemoveVisitorObject") ) { uiPopupRemoveVisitorObject=inValue.Cast< ::UIPopupRemoveObjectVisitor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f"));
	outFields->push(HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59"));
	outFields->push(HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e"));
	outFields->push(HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0"));
	outFields->push(HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(Main_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsInt,(int)offsetof(Main_obj,loopCounterMainInt),HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f")},
	{hx::fsObject /*::UIPopupAddObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupAddMuseumObject),HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59")},
	{hx::fsObject /*::UIPopupEditObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupEditMuseumObject),HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e")},
	{hx::fsObject /*::UIPopupRemoveObjectMuseum*/ ,(int)offsetof(Main_obj,uiPopupRemoveMuseumObject),HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0")},
	{hx::fsObject /*::UIPopupRemoveObjectVisitor*/ ,(int)offsetof(Main_obj,uiPopupRemoveVisitorObject),HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f"),
	HX_HCSTRING("uiPopupAddMuseumObject","\x9a","\xd2","\xa9","\x59"),
	HX_HCSTRING("uiPopupEditMuseumObject","\xb3","\x0f","\x9f","\x2e"),
	HX_HCSTRING("uiPopupRemoveMuseumObject","\xed","\xd6","\xe4","\xd0"),
	HX_HCSTRING("uiPopupRemoveVisitorObject","\xd1","\x1d","\x82","\x75"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
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
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
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

