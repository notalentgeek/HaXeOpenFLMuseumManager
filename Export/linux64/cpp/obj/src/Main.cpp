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
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",14,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->loopCounterMainInt = (int)0;
	HX_STACK_LINE(16)
	this->collectionGlobalObject = ::CollectionGlobal_obj::__new();
	HX_STACK_LINE(18)
	::Main _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(21)
	::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	::CollectionTagGeneral_obj::TagGeneralStructVoid(tmp);
	HX_STACK_LINE(22)
	::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	::CollectionPremadeTag_obj::PremadeTagStructVoid(tmp1);
	HX_STACK_LINE(23)
	::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	::CollectionPremade_obj::PremadeFloorObjectVoid(tmp2);
	HX_STACK_LINE(24)
	::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::CollectionPremade_obj::PremadeRoomObjectVoid(tmp3);
	HX_STACK_LINE(25)
	::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	::CollectionPremade_obj::PremadeExhibitionObjectVoid(tmp4);
	HX_STACK_LINE(26)
	::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(26)
	::CollectionPremade_obj::PremadeVisitorObjectVoid((int)10,tmp5);
	HX_STACK_LINE(27)
	::haxe::ui::toolkit::core::Toolkit_obj::init();
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >(),HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::Main,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::core::Root root){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Main.hx",29,0x087e5c05)
		HX_STACK_ARG(root,"root")
		{
			HX_STACK_LINE(31)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIMain.xml","\x1b","\x90","\x6d","\x46"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject uiMainObject = tmp6;		HX_STACK_VAR(uiMainObject,"uiMainObject");
			HX_STACK_LINE(32)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp7 = uiMainObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(32)
			_g->collectionGlobalObject->SetUIMainObjectVoid(tmp7);
			HX_STACK_LINE(33)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp8 = uiMainObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			root->addChild(tmp8);
			HX_STACK_LINE(34)
			::haxe::ui::toolkit::containers::Absolute tmp9 = root->findChild(HX_HCSTRING("uiMuseumAbsolute","\xdd","\x58","\x2b","\x44"),hx::ClassOf< ::haxe::ui::toolkit::containers::Absolute >(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(34)
			::haxe::ui::toolkit::containers::Absolute uiMuseumAbsoluteObject = tmp9;		HX_STACK_VAR(uiMuseumAbsoluteObject,"uiMuseumAbsoluteObject");
			HX_STACK_LINE(35)
			::haxe::ui::toolkit::containers::Absolute tmp10 = uiMuseumAbsoluteObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(35)
			_g->collectionGlobalObject->SetUIMuseumAbsoluteObjectVoid(tmp10);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(29)
	::haxe::ui::toolkit::core::Toolkit_obj::openFullscreen( Dynamic(new _Function_1_1(_g)));
	HX_STACK_LINE(37)
	::String tmp6 = ::openfl::_legacy::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	Dynamic tmp7 = this->Update_dyn();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
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
		HX_STACK_FRAME("Main","Update",0xec44199e,"Main.Update","Main.hx",39,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(41)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		int tmp1 = tmp->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		int tmp3 = tmp2->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		Float tmp4 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		Float leastCommonMultipleFloat = tmp4;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
		HX_STACK_LINE(42)
		Float tmp5 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		int tmp7 = tmp6->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		Float tmp8 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		leastCommonMultipleFloat = tmp8;
		HX_STACK_LINE(43)
		Float tmp9 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		int tmp11 = tmp10->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(43)
		Float tmp12 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(43)
		leastCommonMultipleFloat = tmp12;
		HX_STACK_LINE(44)
		Float tmp13 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(44)
		int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(44)
		int leastCommonMultipleInt = tmp14;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
		HX_STACK_LINE(45)
		int tmp15 = this->loopCounterMainInt;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(45)
		int tmp16 = leastCommonMultipleInt;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(45)
		bool tmp17 = (tmp15 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(45)
		if ((tmp17)){
			HX_STACK_LINE(45)
			this->loopCounterMainInt = (int)0;
		}
		HX_STACK_LINE(46)
		::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(46)
		int tmp19 = this->loopCounterMainInt;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(46)
		::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(46)
		int tmp21 = tmp20->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(46)
		int tmp22 = hx::Mod(tmp19,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(46)
		::ObjectMuseum tmp23 = tmp18->GetExhibitionObjectArray()->__get(tmp22).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(46)
		tmp23->Update();
		HX_STACK_LINE(47)
		::CollectionGlobal tmp24 = this->collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(47)
		int tmp25 = this->loopCounterMainInt;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(47)
		::CollectionGlobal tmp26 = this->collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(47)
		int tmp27 = tmp26->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(47)
		int tmp28 = hx::Mod(tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(47)
		::ObjectMuseum tmp29 = tmp24->GetFloorObjectArray()->__get(tmp28).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(47)
		tmp29->Update();
		HX_STACK_LINE(48)
		::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(48)
		int tmp31 = this->loopCounterMainInt;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(48)
		::CollectionGlobal tmp32 = this->collectionGlobalObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(48)
		int tmp33 = tmp32->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(48)
		int tmp34 = hx::Mod(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(48)
		::ObjectMuseum tmp35 = tmp30->GetRoomObjectArray()->__get(tmp34).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(48)
		tmp35->Update();
		HX_STACK_LINE(49)
		::CollectionGlobal tmp36 = this->collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(49)
		int tmp37 = this->loopCounterMainInt;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(49)
		::CollectionGlobal tmp38 = this->collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(49)
		int tmp39 = tmp38->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(49)
		int tmp40 = hx::Mod(tmp37,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(49)
		::ObjectVisitor tmp41 = tmp36->GetVisitorObjectArray()->__get(tmp40).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(49)
		tmp41->AIAutoExhibitionChangeVoid();
		HX_STACK_LINE(50)
		(this->loopCounterMainInt)++;
		HX_STACK_LINE(51)
		::CollectionGlobal tmp42 = this->collectionGlobalObject;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(51)
		::ObjectVisitor tmp43 = tmp42->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(51)
		::ObjectMuseum tmp44 = tmp43->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(51)
		Dynamic tmp45 = tmp44->GetNameStruct();		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(51)
		::String tmp46 = tmp45->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(51)
		Dynamic tmp47 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),51,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("Update","\x29","\xfa","\x99","\xbb"));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(51)
		::haxe::Log_obj::trace(tmp46,tmp47);
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
	HX_MARK_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(loopCounterMainInt,"loopCounterMainInt");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loopCounterMainInt") ) { return loopCounterMainInt; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
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
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(Main_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsInt,(int)offsetof(Main_obj,loopCounterMainInt),HX_HCSTRING("loopCounterMainInt","\x1e","\x68","\xc1","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
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

