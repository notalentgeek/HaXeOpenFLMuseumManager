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

Void Main_obj::__construct()
{
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

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",4,0x087e5c05)
		HX_STACK_LINE(6)
		::CollectionGlobal tmp = ::CollectionGlobal_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(6)
		::CollectionGlobal collectionGlobalObject = tmp;		HX_STACK_VAR(collectionGlobalObject,"collectionGlobalObject");
		HX_STACK_LINE(8)
		::CollectionGlobal tmp1 = collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8)
		::CollectionTagGeneral_obj::TagGeneralStructVoid(tmp1);
		HX_STACK_LINE(9)
		::CollectionGlobal tmp2 = collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9)
		::CollectionPremadeTag_obj::PremadeTagStructVoid(tmp2);
		HX_STACK_LINE(10)
		::CollectionGlobal tmp3 = collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10)
		::CollectionPremade_obj::PremadeFloorObjectVoid(tmp3);
		HX_STACK_LINE(11)
		::CollectionGlobal tmp4 = collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(11)
		::CollectionPremade_obj::PremadeRoomObjectVoid(tmp4);
		HX_STACK_LINE(12)
		::CollectionGlobal tmp5 = collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(12)
		::CollectionPremade_obj::PremadeExhibitionObjectVoid(tmp5);
		HX_STACK_LINE(13)
		::CollectionGlobal tmp6 = collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(13)
		::CollectionPremade_obj::PremadeVisitorObjectVoid((int)100,tmp6);
		HX_STACK_LINE(15)
		while((true)){
			HX_STACK_LINE(17)
			int tmp7 = collectionGlobalObject->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(17)
			int tmp8 = collectionGlobalObject->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(17)
			Float tmp9 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(17)
			Float leastCommonMultipleFloat = tmp9;		HX_STACK_VAR(leastCommonMultipleFloat,"leastCommonMultipleFloat");
			HX_STACK_LINE(18)
			Float tmp10 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(18)
			int tmp11 = collectionGlobalObject->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(18)
			Float tmp12 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(18)
			leastCommonMultipleFloat = tmp12;
			HX_STACK_LINE(19)
			Float tmp13 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(19)
			int tmp14 = collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(19)
			Float tmp15 = ::CollectionFunction_obj::GenerateLeastCommonMultipleFloat(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(19)
			leastCommonMultipleFloat = tmp15;
			HX_STACK_LINE(20)
			Float tmp16 = leastCommonMultipleFloat;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(20)
			int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(20)
			int leastCommonMultipleInt = tmp17;		HX_STACK_VAR(leastCommonMultipleInt,"leastCommonMultipleInt");
			HX_STACK_LINE(21)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(22)
			while((true)){
				HX_STACK_LINE(22)
				bool tmp18 = (loopCounter1Int < leastCommonMultipleInt);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(22)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(22)
				if ((tmp19)){
					HX_STACK_LINE(22)
					break;
				}
				HX_STACK_LINE(23)
				int tmp20 = loopCounter1Int;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(23)
				int tmp21 = collectionGlobalObject->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(23)
				int tmp22 = hx::Mod(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(23)
				::ObjectMuseum tmp23 = collectionGlobalObject->GetExhibitionObjectArray()->__get(tmp22).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(23)
				tmp23->Update();
				HX_STACK_LINE(24)
				int tmp24 = loopCounter1Int;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(24)
				int tmp25 = collectionGlobalObject->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(24)
				int tmp26 = hx::Mod(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(24)
				::ObjectMuseum tmp27 = collectionGlobalObject->GetFloorObjectArray()->__get(tmp26).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(24)
				tmp27->Update();
				HX_STACK_LINE(25)
				int tmp28 = loopCounter1Int;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(25)
				int tmp29 = collectionGlobalObject->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(25)
				int tmp30 = hx::Mod(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(25)
				::ObjectMuseum tmp31 = collectionGlobalObject->GetRoomObjectArray()->__get(tmp30).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(25)
				tmp31->Update();
				HX_STACK_LINE(26)
				int tmp32 = loopCounter1Int;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(26)
				int tmp33 = collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(26)
				int tmp34 = hx::Mod(tmp32,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(26)
				::ObjectVisitor tmp35 = collectionGlobalObject->GetVisitorObjectArray()->__get(tmp34).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(26)
				tmp35->AIAutoExhibitionChangeVoid();
				HX_STACK_LINE(27)
				(loopCounter1Int)++;
				HX_STACK_LINE(29)
				::String debugString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(debugString,"debugString");
				HX_STACK_LINE(30)
				debugString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				HX_STACK_LINE(31)
				{
					HX_STACK_LINE(31)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(31)
					::ObjectVisitor tmp36 = collectionGlobalObject->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(31)
					Array< ::String > _g1 = tmp36->GetSentenceStringArray();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(31)
					while((true)){
						HX_STACK_LINE(31)
						bool tmp37 = (_g < _g1->length);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(31)
						bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(31)
						if ((tmp38)){
							HX_STACK_LINE(31)
							break;
						}
						HX_STACK_LINE(31)
						::String tmp39 = _g1->__get(_g);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(31)
						::String _sentence = tmp39;		HX_STACK_VAR(_sentence,"_sentence");
						HX_STACK_LINE(31)
						++(_g);
						HX_STACK_LINE(32)
						bool tmp40 = (_sentence != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(32)
						if ((tmp40)){
							HX_STACK_LINE(32)
							::String tmp41 = (debugString + HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00"));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(32)
							::String tmp42 = _sentence;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(32)
							::String tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(32)
							debugString = tmp43;
						}
					}
				}
				HX_STACK_LINE(35)
				::ObjectVisitor tmp36 = collectionGlobalObject->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(35)
				bool tmp37 = tmp36->GetFinishedBool();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(35)
				bool tmp38 = (tmp37 == false);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(35)
				bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(35)
				if ((tmp38)){
					HX_STACK_LINE(36)
					::ObjectVisitor tmp40 = collectionGlobalObject->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(36)
					::ObjectVisitor tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(36)
					bool tmp42 = tmp41->GetJustChangeExhibitionBool();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(36)
					bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(36)
					tmp39 = (tmp43 == true);
				}
				else{
					HX_STACK_LINE(35)
					tmp39 = false;
				}
				HX_STACK_LINE(34)
				if ((tmp39)){
					HX_STACK_LINE(38)
					::ObjectVisitor tmp40 = collectionGlobalObject->GetVisitorObjectArray()->__get((int)0).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(38)
					tmp40->SetJustChangeExhibitionBoolVoid(false);
					HX_STACK_LINE(39)
					::String tmp41 = debugString;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(39)
					Dynamic tmp42 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),39,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(39)
					::haxe::Log_obj::trace(tmp41,tmp42);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
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

