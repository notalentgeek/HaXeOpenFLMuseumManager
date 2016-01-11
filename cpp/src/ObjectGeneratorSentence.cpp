#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumTagFeelType
#include <EnumTagFeelType.h>
#endif
#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif
#ifndef INCLUDED_ObjectGeneratorSentence
#include <ObjectGeneratorSentence.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void ObjectGeneratorSentence_obj::__construct()
{
HX_STACK_FRAME("ObjectGeneratorSentence","new",0xecab5ea9,"ObjectGeneratorSentence.new","ObjectGeneratorSentence.hx",4,0x43a4e8e7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ObjectGeneratorSentence_obj::~ObjectGeneratorSentence_obj() { }

Dynamic ObjectGeneratorSentence_obj::__CreateEmpty() { return  new ObjectGeneratorSentence_obj; }
hx::ObjectPtr< ObjectGeneratorSentence_obj > ObjectGeneratorSentence_obj::__new()
{  hx::ObjectPtr< ObjectGeneratorSentence_obj > _result_ = new ObjectGeneratorSentence_obj();
	_result_->__construct();
	return _result_;}

Dynamic ObjectGeneratorSentence_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectGeneratorSentence_obj > _result_ = new ObjectGeneratorSentence_obj();
	_result_->__construct();
	return _result_;}

::String ObjectGeneratorSentence_obj::AddWordString( ::CollectionGlobal _collectionGlobalObject,Dynamic _tagGetFunction,::EnumTagType _tagTypeEnum,::ObjectVisitor _visitorObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","AddWordString",0x06234f25,"ObjectGeneratorSentence.AddWordString","ObjectGeneratorSentence.hx",10,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_tagGetFunction,"_tagGetFunction")
	HX_STACK_ARG(_tagTypeEnum,"_tagTypeEnum")
	HX_STACK_ARG(_visitorObject,"_visitorObject")
	HX_STACK_LINE(11)
	bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
	HX_STACK_LINE(12)
	bool getNeutralBool = false;		HX_STACK_VAR(getNeutralBool,"getNeutralBool");
	HX_STACK_LINE(13)
	bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
	HX_STACK_LINE(14)
	bool tmp = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = (tmp == true);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	if ((tmp1)){
		HX_STACK_LINE(14)
		int tmp3 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		tmp2 = (tmp4 >= (int)0);
	}
	else{
		HX_STACK_LINE(14)
		tmp2 = false;
	}
	HX_STACK_LINE(14)
	if ((tmp2)){
		HX_STACK_LINE(15)
		getNegativeBool = false;
		HX_STACK_LINE(16)
		getNeutralBool = true;
		HX_STACK_LINE(17)
		getPositiveBool = true;
	}
	else{
		HX_STACK_LINE(19)
		bool tmp3 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		bool tmp4 = (tmp3 == false);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(19)
		if ((tmp5)){
			HX_STACK_LINE(19)
			int tmp7 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(19)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(19)
			tmp6 = (tmp8 < (int)0);
		}
		else{
			HX_STACK_LINE(19)
			tmp6 = true;
		}
		HX_STACK_LINE(19)
		if ((tmp6)){
			HX_STACK_LINE(20)
			getNegativeBool = true;
			HX_STACK_LINE(21)
			getNeutralBool = true;
			HX_STACK_LINE(22)
			getPositiveBool = false;
		}
		else{
			HX_STACK_LINE(25)
			getNegativeBool = true;
			HX_STACK_LINE(26)
			getNeutralBool = true;
			HX_STACK_LINE(27)
			getPositiveBool = true;
		}
	}
	HX_STACK_LINE(32)
	Array< ::String > tagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tagStringArray,"tagStringArray");
	HX_STACK_LINE(33)
	int randomIndexInt = (int)-1;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
	HX_STACK_LINE(34)
	int loopCounterPrivate1Int = (int)0;		HX_STACK_VAR(loopCounterPrivate1Int,"loopCounterPrivate1Int");
	HX_STACK_LINE(36)
	while((true)){
		HX_STACK_LINE(36)
		int tmp3 = loopCounterPrivate1Int;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		int tmp4 = _visitorObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		if ((tmp6)){
			HX_STACK_LINE(36)
			break;
		}
		HX_STACK_LINE(42)
		::ObjectTag tmp7 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		::EnumTagType tmp8 = tmp7->GetTypeEnum();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		::EnumTagType tmp9 = _tagTypeEnum;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		if ((tmp10)){
			HX_STACK_LINE(43)
			Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("ObjectGeneratorSentence.hx","\xe7","\xe8","\xa4","\x43"),43,HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"),HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(43)
			::haxe::Log_obj::trace(HX_HCSTRING("TEST1.","\xaf","\xf3","\xbc","\x87"),tmp11);
			HX_STACK_LINE(44)
			::ObjectTag tmp12 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(44)
			::EnumTagFeelType tmp13 = tmp12->GetFeelEnum();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(44)
			bool tmp14 = (tmp13 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(44)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(44)
			if ((tmp14)){
				HX_STACK_LINE(44)
				tmp15 = (getNegativeBool == true);
			}
			else{
				HX_STACK_LINE(44)
				tmp15 = false;
			}
			HX_STACK_LINE(44)
			if ((tmp15)){
				HX_STACK_LINE(45)
				::ObjectTag tmp16 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(45)
				Dynamic tmp17 = _tagGetFunction;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(45)
				Dynamic tmp18 = ::Reflect_obj::callMethod(tmp16,tmp17,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(45)
				tagStringArray->push(tmp18);
			}
			HX_STACK_LINE(47)
			::ObjectTag tmp16 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(47)
			::EnumTagFeelType tmp17 = tmp16->GetFeelEnum();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(47)
			bool tmp18 = (tmp17 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(47)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(47)
			if ((tmp18)){
				HX_STACK_LINE(47)
				tmp19 = (getNeutralBool == true);
			}
			else{
				HX_STACK_LINE(47)
				tmp19 = false;
			}
			HX_STACK_LINE(47)
			if ((tmp19)){
				HX_STACK_LINE(48)
				::ObjectTag tmp20 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(48)
				Dynamic tmp21 = _tagGetFunction;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(48)
				Dynamic tmp22 = ::Reflect_obj::callMethod(tmp20,tmp21,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(48)
				tagStringArray->push(tmp22);
			}
			HX_STACK_LINE(50)
			::ObjectTag tmp20 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(50)
			::EnumTagFeelType tmp21 = tmp20->GetFeelEnum();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(50)
			bool tmp22 = (tmp21 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(50)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(50)
			if ((tmp22)){
				HX_STACK_LINE(50)
				tmp23 = (getPositiveBool == true);
			}
			else{
				HX_STACK_LINE(50)
				tmp23 = false;
			}
			HX_STACK_LINE(50)
			if ((tmp23)){
				HX_STACK_LINE(51)
				::ObjectTag tmp24 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(51)
				Dynamic tmp25 = _tagGetFunction;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(51)
				Dynamic tmp26 = ::Reflect_obj::callMethod(tmp24,tmp25,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(51)
				tagStringArray->push(tmp26);
			}
		}
		HX_STACK_LINE(54)
		(loopCounterPrivate1Int)++;
	}
	HX_STACK_LINE(57)
	bool tmp3 = (tagStringArray->length == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	if ((tmp3)){
		HX_STACK_LINE(58)
		loopCounterPrivate1Int = (int)0;
		HX_STACK_LINE(59)
		while((true)){
			HX_STACK_LINE(59)
			int tmp4 = loopCounterPrivate1Int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(59)
			int tmp5 = _collectionGlobalObject->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(59)
			if ((tmp7)){
				HX_STACK_LINE(59)
				break;
			}
			HX_STACK_LINE(62)
			int tmp8 = loopCounterPrivate1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("ObjectGeneratorSentence.hx","\xe7","\xe8","\xa4","\x43"),62,HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"),HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			::haxe::Log_obj::trace(tmp8,tmp9);
			HX_STACK_LINE(63)
			::ObjectTag tmp10 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(63)
			::String tmp11 = tmp10->GetNameString();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(63)
			Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("ObjectGeneratorSentence.hx","\xe7","\xe8","\xa4","\x43"),63,HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"),HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			::haxe::Log_obj::trace(tmp11,tmp12);
			HX_STACK_LINE(64)
			::ObjectTag tmp13 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(64)
			::EnumTagType tmp14 = tmp13->GetTypeEnum();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(64)
			bool tmp15 = (tmp14 != ::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(64)
			if ((tmp15)){
				HX_STACK_LINE(64)
				::ObjectTag tmp16 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(64)
				::EnumTagType tmp17 = tmp16->GetTypeEnum();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(64)
				::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(64)
				::String tmp19 = (tmp18 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(64)
				::EnumTagType tmp20 = _tagTypeEnum;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(64)
				::String tmp21 = ::Std_obj::string(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(64)
				::String tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(64)
				Dynamic tmp23 = hx::SourceInfo(HX_HCSTRING("ObjectGeneratorSentence.hx","\xe7","\xe8","\xa4","\x43"),64,HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"),HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(64)
				::haxe::Log_obj::trace(tmp22,tmp23);
			}
			HX_STACK_LINE(65)
			::ObjectTag tmp16 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(65)
			::EnumTagType tmp17 = tmp16->GetTypeEnum();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(65)
			::EnumTagType tmp18 = _tagTypeEnum;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(65)
			bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(65)
			if ((tmp19)){
				HX_STACK_LINE(66)
				Dynamic tmp20 = hx::SourceInfo(HX_HCSTRING("ObjectGeneratorSentence.hx","\xe7","\xe8","\xa4","\x43"),66,HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"),HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(66)
				::haxe::Log_obj::trace(HX_HCSTRING("TEST3.","\x6d","\xf5","\xbc","\x87"),tmp20);
				HX_STACK_LINE(67)
				::ObjectTag tmp21 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(67)
				::EnumTagFeelType tmp22 = tmp21->GetFeelEnum();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(67)
				bool tmp23 = (tmp22 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(67)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(67)
				if ((tmp23)){
					HX_STACK_LINE(67)
					tmp24 = (getNegativeBool == true);
				}
				else{
					HX_STACK_LINE(67)
					tmp24 = false;
				}
				HX_STACK_LINE(67)
				if ((tmp24)){
					HX_STACK_LINE(68)
					::ObjectTag tmp25 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(68)
					Dynamic tmp26 = _tagGetFunction;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(68)
					Dynamic tmp27 = ::Reflect_obj::callMethod(tmp25,tmp26,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(68)
					tagStringArray->push(tmp27);
				}
				HX_STACK_LINE(70)
				::ObjectTag tmp25 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(70)
				::EnumTagFeelType tmp26 = tmp25->GetFeelEnum();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(70)
				bool tmp27 = (tmp26 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(70)
				bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(70)
				if ((tmp27)){
					HX_STACK_LINE(70)
					tmp28 = (getNeutralBool == true);
				}
				else{
					HX_STACK_LINE(70)
					tmp28 = false;
				}
				HX_STACK_LINE(70)
				if ((tmp28)){
					HX_STACK_LINE(71)
					Dynamic tmp29 = hx::SourceInfo(HX_HCSTRING("ObjectGeneratorSentence.hx","\xe7","\xe8","\xa4","\x43"),71,HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"),HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(71)
					::haxe::Log_obj::trace(HX_HCSTRING("TEST4.","\x4c","\xf6","\xbc","\x87"),tmp29);
					HX_STACK_LINE(72)
					::ObjectTag tmp30 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(72)
					Dynamic tmp31 = _tagGetFunction;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(72)
					Dynamic tmp32 = ::Reflect_obj::callMethod(tmp30,tmp31,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(72)
					tagStringArray->push(tmp32);
				}
				HX_STACK_LINE(74)
				::ObjectTag tmp29 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(74)
				::EnumTagFeelType tmp30 = tmp29->GetFeelEnum();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(74)
				bool tmp31 = (tmp30 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(74)
				bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(74)
				if ((tmp31)){
					HX_STACK_LINE(74)
					tmp32 = (getPositiveBool == true);
				}
				else{
					HX_STACK_LINE(74)
					tmp32 = false;
				}
				HX_STACK_LINE(74)
				if ((tmp32)){
					HX_STACK_LINE(75)
					Dynamic tmp33 = hx::SourceInfo(HX_HCSTRING("ObjectGeneratorSentence.hx","\xe7","\xe8","\xa4","\x43"),75,HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59"),HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"));		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(75)
					::haxe::Log_obj::trace(HX_HCSTRING("TEST5.","\x2b","\xf7","\xbc","\x87"),tmp33);
					HX_STACK_LINE(76)
					::ObjectTag tmp34 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(76)
					Dynamic tmp35 = _tagGetFunction;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(76)
					Dynamic tmp36 = ::Reflect_obj::callMethod(tmp34,tmp35,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(76)
					tagStringArray->push(tmp36);
				}
			}
			HX_STACK_LINE(79)
			(loopCounterPrivate1Int)++;
		}
	}
	HX_STACK_LINE(82)
	int tmp4 = tagStringArray->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(82)
	int tmp5 = this->RandomNumberGeneratorInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(82)
	randomIndexInt = tmp5;
	HX_STACK_LINE(83)
	::String tmp6 = tagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	::String returnString = tmp6;		HX_STACK_VAR(returnString,"returnString");
	HX_STACK_LINE(85)
	::String tmp7 = returnString;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC4(ObjectGeneratorSentence_obj,AddWordString,return )

::String ObjectGeneratorSentence_obj::GenerateSentenceString( ::CollectionGlobal _collectionGlobalObject,::String _patternString,::ObjectVisitor _visitorObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentenceString",0x814dcb60,"ObjectGeneratorSentence.GenerateSentenceString","ObjectGeneratorSentence.hx",87,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_patternString,"_patternString")
	HX_STACK_ARG(_visitorObject,"_visitorObject")
	HX_STACK_LINE(88)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(89)
	::String patternString = _patternString;		HX_STACK_VAR(patternString,"patternString");
	HX_STACK_LINE(90)
	::String sentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(sentenceString,"sentenceString");
	HX_STACK_LINE(91)
	while((true)){
		HX_STACK_LINE(91)
		bool tmp = (loopCounter1Int < patternString.length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(91)
			break;
		}
		HX_STACK_LINE(92)
		::String codeString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(codeString,"codeString");
		HX_STACK_LINE(93)
		Array< ::String > codeStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("2","\x32","\x00","\x00","\x00")).Add(HX_HCSTRING("3","\x33","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("5","\x35","\x00","\x00","\x00")).Add(HX_HCSTRING("6","\x36","\x00","\x00","\x00")).Add(HX_HCSTRING("7","\x37","\x00","\x00","\x00")).Add(HX_HCSTRING("8","\x38","\x00","\x00","\x00")).Add(HX_HCSTRING("9","\x39","\x00","\x00","\x00")).Add(HX_HCSTRING("0","\x30","\x00","\x00","\x00")).Add(HX_HCSTRING("A","\x41","\x00","\x00","\x00")).Add(HX_HCSTRING("B","\x42","\x00","\x00","\x00")).Add(HX_HCSTRING("C","\x43","\x00","\x00","\x00")).Add(HX_HCSTRING("D","\x44","\x00","\x00","\x00")).Add(HX_HCSTRING("E","\x45","\x00","\x00","\x00")).Add(HX_HCSTRING("F","\x46","\x00","\x00","\x00"));		HX_STACK_VAR(codeStringArray,"codeStringArray");
		HX_STACK_LINE(94)
		int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		int tmp3 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		::String tmp4 = patternString.substring(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		::String scan1String = tmp4;		HX_STACK_VAR(scan1String,"scan1String");
		HX_STACK_LINE(95)
		::String tmp5 = scan1String;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		int tmp6 = codeStringArray->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		bool tmp7 = (tmp6 > (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(95)
		if ((tmp7)){
			HX_STACK_LINE(96)
			int tmp8 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(96)
			int tmp9 = (loopCounter1Int + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			::String tmp10 = patternString.substring(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			::String scan2String = tmp10;		HX_STACK_VAR(scan2String,"scan2String");
			HX_STACK_LINE(97)
			::String tmp11 = scan2String;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(97)
			int tmp12 = codeStringArray->indexOf(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(97)
			bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(97)
			if ((tmp13)){
				HX_STACK_LINE(98)
				::String tmp14 = (scan1String + scan2String);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(98)
				codeString = tmp14;
				HX_STACK_LINE(99)
				hx::AddEq(loopCounter1Int,(int)2);
			}
			else{
				HX_STACK_LINE(101)
				(loopCounter1Int)++;
			}
		}
		else{
			HX_STACK_LINE(103)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(104)
		::String wordString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(wordString,"wordString");
		HX_STACK_LINE(137)
		bool tmp8 = (codeString == HX_HCSTRING("11","\xe0","\x2a","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(137)
		if ((tmp8)){
			HX_STACK_LINE(138)
			::CollectionGlobal tmp9 = _collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			Dynamic tmp10 = ::ObjectTag_obj::GetAdjectiveString_dyn();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(138)
			::ObjectVisitor tmp11 = _visitorObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(138)
			::String tmp12 = this->AddWordString(tmp9,tmp10,::EnumTagType_obj::ADJ,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(138)
			wordString = tmp12;
		}
		else{
			HX_STACK_LINE(140)
			bool tmp9 = (codeString == HX_HCSTRING("22","\xc0","\x2b","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			if ((tmp9)){
				HX_STACK_LINE(141)
				::CollectionGlobal tmp10 = _collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(141)
				Dynamic tmp11 = ::ObjectTag_obj::GetAdverbString_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(141)
				::ObjectVisitor tmp12 = _visitorObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(141)
				::String tmp13 = this->AddWordString(tmp10,tmp11,::EnumTagType_obj::ADV,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(141)
				wordString = tmp13;
			}
			else{
				HX_STACK_LINE(143)
				bool tmp10 = (codeString == HX_HCSTRING("43","\x7f","\x2d","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(143)
				if ((tmp10)){
					HX_STACK_LINE(144)
					Array< ::String > _43TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_43TagStringArray,"_43TagStringArray");
					HX_STACK_LINE(145)
					int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
					HX_STACK_LINE(146)
					int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
					HX_STACK_LINE(147)
					while((true)){
						HX_STACK_LINE(147)
						int tmp11 = loopCounter2Int;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(147)
						int tmp12 = _visitorObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(147)
						bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(147)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(147)
						if ((tmp14)){
							HX_STACK_LINE(147)
							break;
						}
						HX_STACK_LINE(148)
						::ObjectTag tmp15 = _visitorObject->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(148)
						::EnumTagType tmp16 = tmp15->GetTypeEnum();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(148)
						bool tmp17 = (tmp16 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(148)
						if ((tmp17)){
							HX_STACK_LINE(149)
							::ObjectTag tmp18 = _visitorObject->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(149)
							::String tmp19 = tmp18->GetNameString();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(149)
							_43TagStringArray->push(tmp19);
						}
						HX_STACK_LINE(151)
						(loopCounter2Int)++;
					}
					HX_STACK_LINE(153)
					bool tmp11 = (_43TagStringArray->length == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(153)
					if ((tmp11)){
						HX_STACK_LINE(154)
						loopCounter2Int = (int)0;
						HX_STACK_LINE(155)
						while((true)){
							HX_STACK_LINE(155)
							int tmp12 = loopCounter2Int;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(155)
							int tmp13 = _collectionGlobalObject->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(155)
							bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(155)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(155)
							if ((tmp15)){
								HX_STACK_LINE(155)
								break;
							}
							HX_STACK_LINE(156)
							::ObjectTag tmp16 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(156)
							::EnumTagType tmp17 = tmp16->GetTypeEnum();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(156)
							bool tmp18 = (tmp17 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(156)
							if ((tmp18)){
								HX_STACK_LINE(157)
								::ObjectTag tmp19 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(157)
								::String tmp20 = tmp19->GetNameString();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(157)
								_43TagStringArray->push(tmp20);
							}
							HX_STACK_LINE(159)
							(loopCounter2Int)++;
						}
					}
					HX_STACK_LINE(162)
					int tmp12 = _43TagStringArray->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(162)
					int tmp13 = this->RandomNumberGeneratorInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(162)
					randomIndexInt = tmp13;
					HX_STACK_LINE(163)
					::String tmp14 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(163)
					bool tmp15 = (tmp14 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(163)
					if ((tmp15)){
						HX_STACK_LINE(164)
						::String tmp16 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(164)
						wordString = tmp16;
					}
					else{
						HX_STACK_LINE(166)
						::String tmp16 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(166)
						bool tmp17 = (tmp16 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(166)
						if ((tmp17)){
							HX_STACK_LINE(167)
							Float tmp18 = ::Math_obj::random();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(167)
							bool tmp19 = (tmp18 > ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(167)
							if ((tmp19)){
								HX_STACK_LINE(168)
								::String tmp20 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(168)
								wordString = tmp20;
							}
							else{
								HX_STACK_LINE(170)
								::String tmp20 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(170)
								wordString = tmp20;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(173)
					bool tmp11 = (codeString == HX_HCSTRING("65","\x3f","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(173)
					if ((tmp11)){
						HX_STACK_LINE(174)
						::CollectionGlobal tmp12 = _collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(174)
						Dynamic tmp13 = ::ObjectTag_obj::GetNounSString_dyn();		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(174)
						::ObjectVisitor tmp14 = _visitorObject;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(174)
						::String tmp15 = this->AddWordString(tmp12,tmp13,::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(174)
						wordString = tmp15;
					}
					else{
						HX_STACK_LINE(176)
						bool tmp12 = (codeString == HX_HCSTRING("93","\xda","\x31","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(176)
						if ((tmp12)){
							HX_STACK_LINE(177)
							::CollectionGlobal tmp13 = _collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(177)
							Dynamic tmp14 = ::ObjectTag_obj::GetNounString_dyn();		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(177)
							::ObjectVisitor tmp15 = _visitorObject;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(177)
							::String tmp16 = this->AddWordString(tmp13,tmp14,::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(177)
							wordString = tmp16;
						}
						else{
							HX_STACK_LINE(179)
							bool tmp13 = (codeString == HX_HCSTRING("A3","\xd2","\x38","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(179)
							if ((tmp13)){
								HX_STACK_LINE(180)
								::CollectionGlobal tmp14 = _collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(180)
								Dynamic tmp15 = ::ObjectTag_obj::GetNounString_dyn();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(180)
								::ObjectVisitor tmp16 = _visitorObject;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(180)
								::String tmp17 = this->AddWordString(tmp14,tmp15,::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(180)
								wordString = tmp17;
							}
							else{
								HX_STACK_LINE(182)
								bool tmp14 = (codeString == HX_HCSTRING("E7","\x52","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(182)
								if ((tmp14)){
									HX_STACK_LINE(183)
									::CollectionGlobal tmp15 = _collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(183)
									Dynamic tmp16 = ::ObjectTag_obj::GetVerb1String_dyn();		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(183)
									::ObjectVisitor tmp17 = _visitorObject;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(183)
									::String tmp18 = this->AddWordString(tmp15,tmp16,::EnumTagType_obj::VERB_INTRANSITIVE,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(183)
									wordString = tmp18;
								}
								else{
									HX_STACK_LINE(185)
									bool tmp15 = (codeString == HX_HCSTRING("E8","\x53","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(185)
									if ((tmp15)){
										HX_STACK_LINE(186)
										::CollectionGlobal tmp16 = _collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(186)
										Dynamic tmp17 = ::ObjectTag_obj::GetVerb2String_dyn();		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(186)
										::ObjectVisitor tmp18 = _visitorObject;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(186)
										::String tmp19 = this->AddWordString(tmp16,tmp17,::EnumTagType_obj::VERB_INTRANSITIVE,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(186)
										wordString = tmp19;
									}
									else{
										HX_STACK_LINE(188)
										bool tmp16 = (codeString == HX_HCSTRING("EA","\x5c","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(188)
										if ((tmp16)){
											HX_STACK_LINE(189)
											::CollectionGlobal tmp17 = _collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(189)
											Dynamic tmp18 = ::ObjectTag_obj::GetVerbSString_dyn();		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(189)
											::ObjectVisitor tmp19 = _visitorObject;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(189)
											::String tmp20 = this->AddWordString(tmp17,tmp18,::EnumTagType_obj::VERB_INTRANSITIVE,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(189)
											wordString = tmp20;
										}
										else{
											HX_STACK_LINE(192)
											wordString = scan1String;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(194)
		::String tmp9 = (sentenceString + wordString);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(194)
		sentenceString = tmp9;
	}
	HX_STACK_LINE(196)
	::String tmp = sentenceString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(ObjectGeneratorSentence_obj,GenerateSentenceString,return )

int ObjectGeneratorSentence_obj::RandomNumberGeneratorInt( int _randomNumberInt){
	HX_STACK_FRAME("ObjectGeneratorSentence","RandomNumberGeneratorInt",0xb4d8c4df,"ObjectGeneratorSentence.RandomNumberGeneratorInt","ObjectGeneratorSentence.hx",198,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_randomNumberInt,"_randomNumberInt")
	HX_STACK_LINE(198)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	int tmp1 = (_randomNumberInt - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(198)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,RandomNumberGeneratorInt,return )

::String ObjectGeneratorSentence_obj::WordFixString( ::String _fixString){
	HX_STACK_FRAME("ObjectGeneratorSentence","WordFixString",0x1c1734c5,"ObjectGeneratorSentence.WordFixString","ObjectGeneratorSentence.hx",199,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fixString,"_fixString")
	HX_STACK_LINE(199)
	::String tmp = _fixString.substring((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	::String tmp1 = tmp.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	int tmp2 = _fixString.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	::String tmp3 = _fixString.substring((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,WordFixString,return )

::String ObjectGeneratorSentence_obj::GenerateSentence3String( ::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentence3String",0x6b0ab815,"ObjectGeneratorSentence.GenerateSentence3String","ObjectGeneratorSentence.hx",200,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_visitorObject,"_visitorObject")
	HX_STACK_LINE(201)
	Array< ::Dynamic > patternStringArray2D = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(patternStringArray2D,"patternStringArray2D");
	HX_STACK_LINE(202)
	patternStringArray2D = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("11 93...","\x14","\x21","\x5f","\xa7")).Add(HX_HCSTRING("43 EA on the 93.","\xc7","\x34","\xd3","\xe7")).Add(HX_HCSTRING("E7 again.","\xdc","\x28","\xe8","\xae"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("11 A3.","\xdc","\x6d","\x77","\xe3")).Add(HX_HCSTRING("43 EA 22.","\x2b","\x73","\xbd","\x89")).Add(HX_HCSTRING("Into the 93.","\x85","\xa2","\x83","\x87"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("A3 EA.","\x04","\x72","\xfd","\x6f")).Add(HX_HCSTRING("What I E8 were A3...","\x17","\x30","\x77","\x00")).Add(HX_HCSTRING("Are 65 of 93.","\x60","\x13","\x09","\x99")));
	HX_STACK_LINE(242)
	int tmp = patternStringArray2D->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	int tmp1 = this->RandomNumberGeneratorInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	int stringPatternIndexInt = tmp1;		HX_STACK_VAR(stringPatternIndexInt,"stringPatternIndexInt");
	HX_STACK_LINE(243)
	Array< ::String > stringPatternIndexString = patternStringArray2D->__get(stringPatternIndexInt).StaticCast< Array< ::String > >();		HX_STACK_VAR(stringPatternIndexString,"stringPatternIndexString");
	HX_STACK_LINE(244)
	::String threeSentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
	HX_STACK_LINE(245)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(246)
	while((true)){
		HX_STACK_LINE(246)
		bool tmp2 = (loopCounter1Int < (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(246)
		if ((tmp3)){
			HX_STACK_LINE(246)
			break;
		}
		HX_STACK_LINE(247)
		bool tmp4 = (loopCounter1Int == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		if ((tmp4)){
			HX_STACK_LINE(247)
			::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(247)
			::String tmp6 = stringPatternIndexString->__get(loopCounter1Int);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(247)
			::ObjectVisitor tmp7 = _visitorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(247)
			::String tmp8 = this->GenerateSentenceString(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(247)
			threeSentenceString = tmp8;
		}
		else{
			HX_STACK_LINE(248)
			::String tmp5 = (threeSentenceString + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(248)
			::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(248)
			::String tmp7 = stringPatternIndexString->__get(loopCounter1Int);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(248)
			::ObjectVisitor tmp8 = _visitorObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(248)
			::String tmp9 = this->GenerateSentenceString(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(248)
			::String tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(248)
			threeSentenceString = tmp10;
		}
		HX_STACK_LINE(249)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(251)
	::String tmp2 = threeSentenceString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectGeneratorSentence_obj,GenerateSentence3String,return )


ObjectGeneratorSentence_obj::ObjectGeneratorSentence_obj()
{
}

Dynamic ObjectGeneratorSentence_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"AddWordString") ) { return AddWordString_dyn(); }
		if (HX_FIELD_EQ(inName,"WordFixString") ) { return WordFixString_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"GenerateSentenceString") ) { return GenerateSentenceString_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GenerateSentence3String") ) { return GenerateSentence3String_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"RandomNumberGeneratorInt") ) { return RandomNumberGeneratorInt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"),
	HX_HCSTRING("GenerateSentenceString","\x09","\xa8","\x41","\xf5"),
	HX_HCSTRING("RandomNumberGeneratorInt","\xc8","\xdd","\xfb","\xf2"),
	HX_HCSTRING("WordFixString","\x3c","\x91","\x15","\x9e"),
	HX_HCSTRING("GenerateSentence3String","\x4c","\xef","\x77","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectGeneratorSentence_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectGeneratorSentence_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectGeneratorSentence_obj::__mClass;

void ObjectGeneratorSentence_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectGeneratorSentence","\x37","\xd6","\xc2","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectGeneratorSentence_obj >;
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

