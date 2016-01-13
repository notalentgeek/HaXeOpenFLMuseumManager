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
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",15,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	this->loopCounterMainInt = (int)0;
	HX_STACK_LINE(21)
	this->layoutOffsetInt = (int)16;
	HX_STACK_LINE(20)
	this->layoutMainMenuAccrodionContentHeight = (int)64;
	HX_STACK_LINE(19)
	this->layoutMainMenuAccordionContentWidth = (int)256;
	HX_STACK_LINE(18)
	this->layoutLeftOffsetInt = (int)0;
	HX_STACK_LINE(17)
	this->collectionGlobalObject = ::CollectionGlobal_obj::__new();
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	int tmp = this->layoutMainMenuAccordionContentWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	int tmp1 = this->layoutOffsetInt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	int tmp2 = (tmp1 * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(25)
	int tmp3 = (tmp + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	this->layoutLeftOffsetInt = tmp3;
	HX_STACK_LINE(27)
	::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(27)
	::CollectionTagGeneral_obj::TagGeneralStructVoid(tmp4);
	HX_STACK_LINE(28)
	::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	::CollectionPremadeTag_obj::PremadeTagStructVoid(tmp5);
	HX_STACK_LINE(29)
	::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	::CollectionPremade_obj::PremadeFloorObjectVoid(tmp6);
	HX_STACK_LINE(30)
	::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	::CollectionPremade_obj::PremadeRoomObjectVoid(tmp7);
	HX_STACK_LINE(31)
	::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	::CollectionPremade_obj::PremadeExhibitionObjectVoid(tmp8);
	HX_STACK_LINE(32)
	::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	::CollectionPremade_obj::PremadeVisitorObjectVoid((int)100,tmp9);
	HX_STACK_LINE(33)
	::haxe::ui::toolkit::core::Toolkit_obj::init();
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >(),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::core::Root root){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Main.hx",35,0x087e5c05)
		HX_STACK_ARG(root,"root")
		{
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp10 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/MenuMainAccordion.xml","\xd4","\xc1","\x41","\xe0"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject accordionObject = tmp10;		HX_STACK_VAR(accordionObject,"accordionObject");
			HX_STACK_LINE(38)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp11 = accordionObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(38)
			root->addChild(tmp11);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(35)
	::haxe::ui::toolkit::core::Toolkit_obj::openFullscreen( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(40)
	::String tmp10 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(40)
	Dynamic tmp11 = this->Update_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(40)
	this->addEventListener(tmp10,tmp11,null(),null(),null());
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
		HX_STACK_FRAME("Main","Update",0xec44199e,"Main.Update","Main.hx",42,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(44)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		int tmp1 = tmp->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		int tmp3 = tmp2->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		Float tmp4 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		Float leastCommonMultipleFloat = tmp4;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
		HX_STACK_LINE(45)
		Float tmp5 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		Float tmp8 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		leastCommonMultipleFloat = tmp8;
		HX_STACK_LINE(46)
		Float tmp9 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(46)
		::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		int tmp11 = tmp10->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		Float tmp12 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(46)
		leastCommonMultipleFloat = tmp12;
		HX_STACK_LINE(47)
		Float tmp13 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(47)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(47)
		int leastCommonMultipleInt = tmp14;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
		HX_STACK_LINE(48)
		int tmp15 = this->loopCounterMainInt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(48)
		int tmp16 = leastCommonMultipleInt;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(48)
		bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(48)
		if ((tmp17)){
			HX_STACK_LINE(48)
			this->loopCounterMainInt = (int)0;
		}
		HX_STACK_LINE(49)
		::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(49)
		int tmp19 = this->loopCounterMainInt;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(49)
		::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(49)
		int tmp21 = tmp20->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(49)
		int tmp22 = hx::Mod(tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(49)
		::ObjectMuseum tmp23 = tmp18->GetExhibitionObjectArray()->__get(tmp22).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(49)
		tmp23->Update();
		HX_STACK_LINE(50)
		::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(50)
		int tmp25 = this->loopCounterMainInt;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(50)
		::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(50)
		int tmp27 = tmp26->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(50)
		int tmp28 = hx::Mod(tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(50)
		::ObjectMuseum tmp29 = tmp24->GetFloorObjectArray()->__get(tmp28).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(50)
		tmp29->Update();
		HX_STACK_LINE(51)
		::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(51)
		int tmp31 = this->loopCounterMainInt;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(51)
		::CollectionGlobal tmp32 = this->collectionGlobalObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(51)
		int tmp33 = tmp32->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(51)
		int tmp34 = hx::Mod(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(51)
		::ObjectMuseum tmp35 = tmp30->GetRoomObjectArray()->__get(tmp34).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(51)
		tmp35->Update();
		HX_STACK_LINE(52)
		::CollectionGlobal tmp36 = this->collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(52)
		int tmp37 = this->loopCounterMainInt;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(52)
		::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(52)
		int tmp39 = tmp38->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(52)
		int tmp40 = hx::Mod(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(52)
		::ObjectVisitor tmp41 = tmp36->GetVisitorObjectArray()->__get(tmp40).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(52)
		tmp41->AIAutoExhibitionChangeVoid();
		HX_STACK_LINE(53)
		(this->loopCounterMainInt)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,Update,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(layoutLeftOffsetInt,"layoutLeftOffsetInt");
	HX_MARK_MEMBER_NAME(layoutMainMenuAccordionContentWidth,"layoutMainMenuAccordionContentWidth");
	HX_MARK_MEMBER_NAME(layoutMainMenuAccrodionContentHeight,"layoutMainMenuAccrodionContentHeight");
	HX_MARK_MEMBER_NAME(layoutOffsetInt,"layoutOffsetInt");
	HX_MARK_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(layoutLeftOffsetInt,"layoutLeftOffsetInt");
	HX_VISIT_MEMBER_NAME(layoutMainMenuAccordionContentWidth,"layoutMainMenuAccordionContentWidth");
	HX_VISIT_MEMBER_NAME(layoutMainMenuAccrodionContentHeight,"layoutMainMenuAccrodionContentHeight");
	HX_VISIT_MEMBER_NAME(layoutOffsetInt,"layoutOffsetInt");
	HX_VISIT_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"layoutOffsetInt") ) { return layoutOffsetInt; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { return loopCounterMainInt; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"layoutLeftOffsetInt") ) { return layoutLeftOffsetInt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"layoutMainMenuAccordionContentWidth") ) { return layoutMainMenuAccordionContentWidth; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"layoutMainMenuAccrodionContentHeight") ) { return layoutMainMenuAccrodionContentHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"layoutOffsetInt") ) { layoutOffsetInt=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { loopCounterMainInt=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"layoutLeftOffsetInt") ) { layoutLeftOffsetInt=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"layoutMainMenuAccordionContentWidth") ) { layoutMainMenuAccordionContentWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"layoutMainMenuAccrodionContentHeight") ) { layoutMainMenuAccrodionContentHeight=inValue.Cast< int >(); return inValue; }
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
	outFields->push(HX_HCSTRING("layoutLeftOffsetInt","\x0b","\x49","\xa2","\xad"));
	outFields->push(HX_HCSTRING("layoutMainMenuAccordionContentWidth","\x13","\x8a","\x71","\xab"));
	outFields->push(HX_HCSTRING("layoutMainMenuAccrodionContentHeight","\x60","\x2f","\x32","\xe6"));
	outFields->push(HX_HCSTRING("layoutOffsetInt","\x12","\xf7","\xc2","\x02"));
	outFields->push(HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(Main_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsInt,(int)offsetof(Main_obj,layoutLeftOffsetInt),HX_HCSTRING("layoutLeftOffsetInt","\x0b","\x49","\xa2","\xad")},
	{hx::fsInt,(int)offsetof(Main_obj,layoutMainMenuAccordionContentWidth),HX_HCSTRING("layoutMainMenuAccordionContentWidth","\x13","\x8a","\x71","\xab")},
	{hx::fsInt,(int)offsetof(Main_obj,layoutMainMenuAccrodionContentHeight),HX_HCSTRING("layoutMainMenuAccrodionContentHeight","\x60","\x2f","\x32","\xe6")},
	{hx::fsInt,(int)offsetof(Main_obj,layoutOffsetInt),HX_HCSTRING("layoutOffsetInt","\x12","\xf7","\xc2","\x02")},
	{hx::fsInt,(int)offsetof(Main_obj,loopCounterMainInt),HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("layoutLeftOffsetInt","\x0b","\x49","\xa2","\xad"),
	HX_HCSTRING("layoutMainMenuAccordionContentWidth","\x13","\x8a","\x71","\xab"),
	HX_HCSTRING("layoutMainMenuAccrodionContentHeight","\x60","\x2f","\x32","\xe6"),
	HX_HCSTRING("layoutOffsetInt","\x12","\xf7","\xc2","\x02"),
	HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f"),
	HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"),
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

