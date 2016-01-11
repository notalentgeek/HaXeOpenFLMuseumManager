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
#ifndef INCLUDED_EnumTagTypeSub
#include <EnumTagTypeSub.h>
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

::String ObjectGeneratorSentence_obj::AddWordString( ::CollectionGlobal _collectionGlobalObject,::EnumTagType _tagTypeEnum,::EnumTagTypeSub _tagTypeSubEnum,::ObjectVisitor _visitorObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","AddWordString",0x06234f25,"ObjectGeneratorSentence.AddWordString","ObjectGeneratorSentence.hx",10,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_tagTypeEnum,"_tagTypeEnum")
	HX_STACK_ARG(_tagTypeSubEnum,"_tagTypeSubEnum")
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
			HX_STACK_LINE(44)
			::ObjectTag tmp11 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(44)
			::EnumTagFeelType tmp12 = tmp11->GetFeelEnum();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(44)
			bool tmp13 = (tmp12 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(44)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(44)
			if ((tmp13)){
				HX_STACK_LINE(44)
				tmp14 = (getNegativeBool == true);
			}
			else{
				HX_STACK_LINE(44)
				tmp14 = false;
			}
			HX_STACK_LINE(44)
			if ((tmp14)){
				HX_STACK_LINE(45)
				::ObjectTag tmp15 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(45)
				::EnumTagTypeSub tmp16 = _tagTypeSubEnum;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(45)
				::ObjectTag tmp17 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(45)
				Dynamic tmp18 = this->DetermineProperCallbackFunction(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(45)
				Dynamic tmp19 = ::Reflect_obj::callMethod(tmp15,tmp18,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(45)
				tagStringArray->push(tmp19);
			}
			HX_STACK_LINE(47)
			::ObjectTag tmp15 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(47)
			::EnumTagFeelType tmp16 = tmp15->GetFeelEnum();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(47)
			bool tmp17 = (tmp16 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(47)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(47)
			if ((tmp17)){
				HX_STACK_LINE(47)
				tmp18 = (getNeutralBool == true);
			}
			else{
				HX_STACK_LINE(47)
				tmp18 = false;
			}
			HX_STACK_LINE(47)
			if ((tmp18)){
				HX_STACK_LINE(48)
				::ObjectTag tmp19 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(48)
				::EnumTagTypeSub tmp20 = _tagTypeSubEnum;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(48)
				::ObjectTag tmp21 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(48)
				Dynamic tmp22 = this->DetermineProperCallbackFunction(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(48)
				Dynamic tmp23 = ::Reflect_obj::callMethod(tmp19,tmp22,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(48)
				tagStringArray->push(tmp23);
			}
			HX_STACK_LINE(50)
			::ObjectTag tmp19 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(50)
			::EnumTagFeelType tmp20 = tmp19->GetFeelEnum();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(50)
			bool tmp21 = (tmp20 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(50)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(50)
			if ((tmp21)){
				HX_STACK_LINE(50)
				tmp22 = (getPositiveBool == true);
			}
			else{
				HX_STACK_LINE(50)
				tmp22 = false;
			}
			HX_STACK_LINE(50)
			if ((tmp22)){
				HX_STACK_LINE(51)
				::ObjectTag tmp23 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(51)
				::EnumTagTypeSub tmp24 = _tagTypeSubEnum;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(51)
				::ObjectTag tmp25 = _visitorObject->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(51)
				Dynamic tmp26 = this->DetermineProperCallbackFunction(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(51)
				Dynamic tmp27 = ::Reflect_obj::callMethod(tmp23,tmp26,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(51)
				tagStringArray->push(tmp27);
			}
		}
		HX_STACK_LINE(54)
		(loopCounterPrivate1Int)++;
	}
	HX_STACK_LINE(57)
	bool tmp3 = (tagStringArray->length == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	if ((tmp3)){
		HX_STACK_LINE(59)
		loopCounterPrivate1Int = (int)0;
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			int tmp4 = loopCounterPrivate1Int;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			int tmp5 = _collectionGlobalObject->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			if ((tmp7)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(65)
			::ObjectTag tmp8 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			::EnumTagType tmp9 = tmp8->GetTypeEnum();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			::EnumTagType tmp10 = _tagTypeEnum;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(65)
			bool tmp11 = (tmp9 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(65)
			if ((tmp11)){
				HX_STACK_LINE(66)
				::ObjectTag tmp12 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(66)
				::EnumTagFeelType tmp13 = tmp12->GetFeelEnum();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(66)
				bool tmp14 = (tmp13 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(66)
				bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(66)
				if ((tmp14)){
					HX_STACK_LINE(66)
					tmp15 = (getNegativeBool == true);
				}
				else{
					HX_STACK_LINE(66)
					tmp15 = false;
				}
				HX_STACK_LINE(66)
				if ((tmp15)){
					HX_STACK_LINE(67)
					::ObjectTag tmp16 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(67)
					::EnumTagTypeSub tmp17 = _tagTypeSubEnum;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(67)
					::ObjectTag tmp18 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(67)
					Dynamic tmp19 = this->DetermineProperCallbackFunction(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(67)
					Dynamic tmp20 = ::Reflect_obj::callMethod(tmp16,tmp19,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(67)
					tagStringArray->push(tmp20);
				}
				HX_STACK_LINE(69)
				::ObjectTag tmp16 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(69)
				::EnumTagFeelType tmp17 = tmp16->GetFeelEnum();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(69)
				bool tmp18 = (tmp17 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(69)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(69)
				if ((tmp18)){
					HX_STACK_LINE(69)
					tmp19 = (getNeutralBool == true);
				}
				else{
					HX_STACK_LINE(69)
					tmp19 = false;
				}
				HX_STACK_LINE(69)
				if ((tmp19)){
					HX_STACK_LINE(71)
					::ObjectTag tmp20 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(71)
					::EnumTagTypeSub tmp21 = _tagTypeSubEnum;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(71)
					::ObjectTag tmp22 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(71)
					Dynamic tmp23 = this->DetermineProperCallbackFunction(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(71)
					Dynamic tmp24 = ::Reflect_obj::callMethod(tmp20,tmp23,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(71)
					tagStringArray->push(tmp24);
				}
				HX_STACK_LINE(73)
				::ObjectTag tmp20 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(73)
				::EnumTagFeelType tmp21 = tmp20->GetFeelEnum();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(73)
				bool tmp22 = (tmp21 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(73)
				bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(73)
				if ((tmp22)){
					HX_STACK_LINE(73)
					tmp23 = (getPositiveBool == true);
				}
				else{
					HX_STACK_LINE(73)
					tmp23 = false;
				}
				HX_STACK_LINE(73)
				if ((tmp23)){
					HX_STACK_LINE(75)
					::ObjectTag tmp24 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(75)
					::EnumTagTypeSub tmp25 = _tagTypeSubEnum;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(75)
					::ObjectTag tmp26 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(75)
					Dynamic tmp27 = this->DetermineProperCallbackFunction(tmp25,tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(75)
					Dynamic tmp28 = ::Reflect_obj::callMethod(tmp24,tmp27,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(75)
					tagStringArray->push(tmp28);
				}
			}
			HX_STACK_LINE(78)
			(loopCounterPrivate1Int)++;
		}
	}
	HX_STACK_LINE(81)
	int tmp4 = tagStringArray->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	int tmp5 = this->RandomNumberGeneratorInt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	randomIndexInt = tmp5;
	HX_STACK_LINE(82)
	::String tmp6 = tagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(82)
	::String returnString = tmp6;		HX_STACK_VAR(returnString,"returnString");
	HX_STACK_LINE(84)
	bool tmp7 = (tagStringArray->length == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(84)
	if ((tmp7)){
	}
	HX_STACK_LINE(87)
	::String tmp8 = returnString;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(87)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC4(ObjectGeneratorSentence_obj,AddWordString,return )

Dynamic ObjectGeneratorSentence_obj::DetermineProperCallbackFunction( ::EnumTagTypeSub _tagTypeSubEnum,::ObjectTag _tagObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","DetermineProperCallbackFunction",0xbc8dd089,"ObjectGeneratorSentence.DetermineProperCallbackFunction","ObjectGeneratorSentence.hx",89,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tagTypeSubEnum,"_tagTypeSubEnum")
	HX_STACK_ARG(_tagObject,"_tagObject")
	HX_STACK_LINE(90)
	bool tmp = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::ADJ);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	if ((tmp)){
		HX_STACK_LINE(90)
		Dynamic tmp1 = _tagObject->GetAdjectiveString_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		return tmp1;
	}
	else{
		HX_STACK_LINE(91)
		bool tmp1 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::ADV);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(91)
			Dynamic tmp2 = _tagObject->GetAdverbString_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(91)
			return tmp2;
		}
		else{
			HX_STACK_LINE(92)
			bool tmp2 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(92)
			if ((tmp2)){
				HX_STACK_LINE(92)
				Dynamic tmp3 = _tagObject->GetNounString_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(92)
				return tmp3;
			}
			else{
				HX_STACK_LINE(93)
				bool tmp3 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_POS);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(93)
				if ((tmp3)){
					HX_STACK_LINE(93)
					Dynamic tmp4 = _tagObject->GetNounPosString_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(93)
					return tmp4;
				}
				else{
					HX_STACK_LINE(94)
					bool tmp4 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_S);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(94)
					if ((tmp4)){
						HX_STACK_LINE(94)
						Dynamic tmp5 = _tagObject->GetNounSString_dyn();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(94)
						return tmp5;
					}
					else{
						HX_STACK_LINE(95)
						bool tmp5 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_S_POS);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(95)
						if ((tmp5)){
							HX_STACK_LINE(95)
							Dynamic tmp6 = _tagObject->GetNounSPosString_dyn();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(95)
							return tmp6;
						}
						else{
							HX_STACK_LINE(96)
							bool tmp6 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(96)
							if ((tmp6)){
								HX_STACK_LINE(96)
								Dynamic tmp7 = _tagObject->GetVerb1String_dyn();		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(96)
								return tmp7;
							}
							else{
								HX_STACK_LINE(97)
								bool tmp7 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_2);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(97)
								if ((tmp7)){
									HX_STACK_LINE(97)
									Dynamic tmp8 = _tagObject->GetVerb2String_dyn();		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(97)
									return tmp8;
								}
								else{
									HX_STACK_LINE(98)
									bool tmp8 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_3);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(98)
									if ((tmp8)){
										HX_STACK_LINE(98)
										Dynamic tmp9 = _tagObject->GetVerb3String_dyn();		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(98)
										return tmp9;
									}
									else{
										HX_STACK_LINE(99)
										bool tmp9 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_ING);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(99)
										if ((tmp9)){
											HX_STACK_LINE(99)
											Dynamic tmp10 = _tagObject->GetVerbIngString_dyn();		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(99)
											return tmp10;
										}
										else{
											HX_STACK_LINE(100)
											bool tmp10 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_S);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(100)
											if ((tmp10)){
												HX_STACK_LINE(100)
												Dynamic tmp11 = _tagObject->GetVerbSString_dyn();		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(100)
												return tmp11;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(101)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectGeneratorSentence_obj,DetermineProperCallbackFunction,return )

::String ObjectGeneratorSentence_obj::GenerateSentenceString( ::CollectionGlobal _collectionGlobalObject,::String _patternString,::ObjectVisitor _visitorObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentenceString",0x814dcb60,"ObjectGeneratorSentence.GenerateSentenceString","ObjectGeneratorSentence.hx",103,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_patternString,"_patternString")
	HX_STACK_ARG(_visitorObject,"_visitorObject")
	HX_STACK_LINE(104)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(105)
	::String patternString = _patternString;		HX_STACK_VAR(patternString,"patternString");
	HX_STACK_LINE(106)
	::String sentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(sentenceString,"sentenceString");
	HX_STACK_LINE(107)
	while((true)){
		HX_STACK_LINE(107)
		bool tmp = (loopCounter1Int < patternString.length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		if ((tmp1)){
			HX_STACK_LINE(107)
			break;
		}
		HX_STACK_LINE(108)
		::String codeString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(codeString,"codeString");
		HX_STACK_LINE(109)
		Array< ::String > codeStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("2","\x32","\x00","\x00","\x00")).Add(HX_HCSTRING("3","\x33","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("5","\x35","\x00","\x00","\x00")).Add(HX_HCSTRING("6","\x36","\x00","\x00","\x00")).Add(HX_HCSTRING("7","\x37","\x00","\x00","\x00")).Add(HX_HCSTRING("8","\x38","\x00","\x00","\x00")).Add(HX_HCSTRING("9","\x39","\x00","\x00","\x00")).Add(HX_HCSTRING("0","\x30","\x00","\x00","\x00")).Add(HX_HCSTRING("A","\x41","\x00","\x00","\x00")).Add(HX_HCSTRING("B","\x42","\x00","\x00","\x00")).Add(HX_HCSTRING("C","\x43","\x00","\x00","\x00")).Add(HX_HCSTRING("D","\x44","\x00","\x00","\x00")).Add(HX_HCSTRING("E","\x45","\x00","\x00","\x00")).Add(HX_HCSTRING("F","\x46","\x00","\x00","\x00"));		HX_STACK_VAR(codeStringArray,"codeStringArray");
		HX_STACK_LINE(110)
		int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		int tmp3 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		::String tmp4 = patternString.substring(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		::String scan1String = tmp4;		HX_STACK_VAR(scan1String,"scan1String");
		HX_STACK_LINE(111)
		::String tmp5 = scan1String;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		int tmp6 = codeStringArray->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(111)
		bool tmp7 = (tmp6 > (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		if ((tmp7)){
			HX_STACK_LINE(112)
			int tmp8 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(112)
			int tmp9 = (loopCounter1Int + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(112)
			::String tmp10 = patternString.substring(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(112)
			::String scan2String = tmp10;		HX_STACK_VAR(scan2String,"scan2String");
			HX_STACK_LINE(113)
			::String tmp11 = scan2String;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(113)
			int tmp12 = codeStringArray->indexOf(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(113)
			bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(113)
			if ((tmp13)){
				HX_STACK_LINE(114)
				::String tmp14 = (scan1String + scan2String);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(114)
				codeString = tmp14;
				HX_STACK_LINE(115)
				hx::AddEq(loopCounter1Int,(int)2);
			}
			else{
				HX_STACK_LINE(117)
				(loopCounter1Int)++;
			}
		}
		else{
			HX_STACK_LINE(119)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(120)
		::String wordString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(wordString,"wordString");
		HX_STACK_LINE(153)
		bool tmp8 = (codeString == HX_HCSTRING("11","\xe0","\x2a","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(153)
		if ((tmp8)){
			HX_STACK_LINE(154)
			::CollectionGlobal tmp9 = _collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(154)
			::ObjectVisitor tmp10 = _visitorObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(154)
			::String tmp11 = this->AddWordString(tmp9,::EnumTagType_obj::ADJ,::EnumTagTypeSub_obj::ADJ,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(154)
			wordString = tmp11;
		}
		else{
			HX_STACK_LINE(156)
			bool tmp9 = (codeString == HX_HCSTRING("22","\xc0","\x2b","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			if ((tmp9)){
				HX_STACK_LINE(157)
				::CollectionGlobal tmp10 = _collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(157)
				::ObjectVisitor tmp11 = _visitorObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(157)
				::String tmp12 = this->AddWordString(tmp10,::EnumTagType_obj::ADV,::EnumTagTypeSub_obj::ADV,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(157)
				wordString = tmp12;
			}
			else{
				HX_STACK_LINE(159)
				bool tmp10 = (codeString == HX_HCSTRING("43","\x7f","\x2d","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(159)
				if ((tmp10)){
					HX_STACK_LINE(160)
					Array< ::String > _43TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_43TagStringArray,"_43TagStringArray");
					HX_STACK_LINE(161)
					int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
					HX_STACK_LINE(162)
					int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
					HX_STACK_LINE(163)
					while((true)){
						HX_STACK_LINE(163)
						int tmp11 = loopCounter2Int;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(163)
						int tmp12 = _visitorObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(163)
						bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(163)
						bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(163)
						if ((tmp14)){
							HX_STACK_LINE(163)
							break;
						}
						HX_STACK_LINE(164)
						::ObjectTag tmp15 = _visitorObject->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(164)
						::EnumTagType tmp16 = tmp15->GetTypeEnum();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(164)
						bool tmp17 = (tmp16 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(164)
						if ((tmp17)){
							HX_STACK_LINE(165)
							::ObjectTag tmp18 = _visitorObject->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(165)
							::String tmp19 = tmp18->GetNounString();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(165)
							_43TagStringArray->push(tmp19);
						}
						HX_STACK_LINE(167)
						(loopCounter2Int)++;
					}
					HX_STACK_LINE(169)
					bool tmp11 = (_43TagStringArray->length == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(169)
					if ((tmp11)){
						HX_STACK_LINE(170)
						loopCounter2Int = (int)0;
						HX_STACK_LINE(171)
						while((true)){
							HX_STACK_LINE(171)
							int tmp12 = loopCounter2Int;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(171)
							int tmp13 = _collectionGlobalObject->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(171)
							bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(171)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(171)
							if ((tmp15)){
								HX_STACK_LINE(171)
								break;
							}
							HX_STACK_LINE(172)
							::ObjectTag tmp16 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(172)
							::EnumTagType tmp17 = tmp16->GetTypeEnum();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(172)
							bool tmp18 = (tmp17 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(172)
							if ((tmp18)){
								HX_STACK_LINE(173)
								::ObjectTag tmp19 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(173)
								::String tmp20 = tmp19->GetNounString();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(173)
								_43TagStringArray->push(tmp20);
							}
							HX_STACK_LINE(175)
							(loopCounter2Int)++;
						}
					}
					HX_STACK_LINE(178)
					int tmp12 = _43TagStringArray->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(178)
					int tmp13 = this->RandomNumberGeneratorInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(178)
					randomIndexInt = tmp13;
					HX_STACK_LINE(179)
					::String tmp14 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(179)
					bool tmp15 = (tmp14 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(179)
					if ((tmp15)){
						HX_STACK_LINE(180)
						::String tmp16 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(180)
						wordString = tmp16;
					}
					else{
						HX_STACK_LINE(182)
						::String tmp16 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(182)
						bool tmp17 = (tmp16 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(182)
						if ((tmp17)){
							HX_STACK_LINE(183)
							Float tmp18 = ::Math_obj::random();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(183)
							bool tmp19 = (tmp18 > ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(183)
							if ((tmp19)){
								HX_STACK_LINE(184)
								::String tmp20 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(184)
								wordString = tmp20;
							}
							else{
								HX_STACK_LINE(186)
								::String tmp20 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(186)
								wordString = tmp20;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(189)
					bool tmp11 = (codeString == HX_HCSTRING("65","\x3f","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(189)
					if ((tmp11)){
						HX_STACK_LINE(190)
						::CollectionGlobal tmp12 = _collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(190)
						::ObjectVisitor tmp13 = _visitorObject;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(190)
						::String tmp14 = this->AddWordString(tmp12,::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,::EnumTagTypeSub_obj::NOUN_S,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(190)
						wordString = tmp14;
					}
					else{
						HX_STACK_LINE(192)
						bool tmp12 = (codeString == HX_HCSTRING("93","\xda","\x31","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(192)
						if ((tmp12)){
							HX_STACK_LINE(193)
							::CollectionGlobal tmp13 = _collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(193)
							::ObjectVisitor tmp14 = _visitorObject;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(193)
							::String tmp15 = this->AddWordString(tmp13,::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,::EnumTagTypeSub_obj::NOUN,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(193)
							wordString = tmp15;
						}
						else{
							HX_STACK_LINE(195)
							bool tmp13 = (codeString == HX_HCSTRING("A3","\xd2","\x38","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(195)
							if ((tmp13)){
								HX_STACK_LINE(196)
								::CollectionGlobal tmp14 = _collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(196)
								::ObjectVisitor tmp15 = _visitorObject;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(196)
								::String tmp16 = this->AddWordString(tmp14,::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE,::EnumTagTypeSub_obj::NOUN,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(196)
								wordString = tmp16;
							}
							else{
								HX_STACK_LINE(198)
								bool tmp14 = (codeString == HX_HCSTRING("E7","\x52","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(198)
								if ((tmp14)){
									HX_STACK_LINE(199)
									::CollectionGlobal tmp15 = _collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(199)
									::ObjectVisitor tmp16 = _visitorObject;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(199)
									::String tmp17 = this->AddWordString(tmp15,::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_1,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(199)
									wordString = tmp17;
								}
								else{
									HX_STACK_LINE(201)
									bool tmp15 = (codeString == HX_HCSTRING("E8","\x53","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(201)
									if ((tmp15)){
										HX_STACK_LINE(202)
										::CollectionGlobal tmp16 = _collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(202)
										::ObjectVisitor tmp17 = _visitorObject;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(202)
										::String tmp18 = this->AddWordString(tmp16,::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_2,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(202)
										wordString = tmp18;
									}
									else{
										HX_STACK_LINE(204)
										bool tmp16 = (codeString == HX_HCSTRING("EA","\x5c","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(204)
										if ((tmp16)){
											HX_STACK_LINE(205)
											::CollectionGlobal tmp17 = _collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(205)
											::ObjectVisitor tmp18 = _visitorObject;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(205)
											::String tmp19 = this->AddWordString(tmp17,::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_S,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(205)
											wordString = tmp19;
										}
										else{
											HX_STACK_LINE(208)
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
		HX_STACK_LINE(210)
		::String tmp9 = (sentenceString + wordString);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(210)
		sentenceString = tmp9;
	}
	HX_STACK_LINE(212)
	::String tmp = sentenceString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(ObjectGeneratorSentence_obj,GenerateSentenceString,return )

int ObjectGeneratorSentence_obj::RandomNumberGeneratorInt( int _randomNumberInt){
	HX_STACK_FRAME("ObjectGeneratorSentence","RandomNumberGeneratorInt",0xb4d8c4df,"ObjectGeneratorSentence.RandomNumberGeneratorInt","ObjectGeneratorSentence.hx",214,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_randomNumberInt,"_randomNumberInt")
	HX_STACK_LINE(214)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	int tmp1 = (_randomNumberInt - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,RandomNumberGeneratorInt,return )

::String ObjectGeneratorSentence_obj::WordFixString( ::String _fixString){
	HX_STACK_FRAME("ObjectGeneratorSentence","WordFixString",0x1c1734c5,"ObjectGeneratorSentence.WordFixString","ObjectGeneratorSentence.hx",215,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fixString,"_fixString")
	HX_STACK_LINE(215)
	::String tmp = _fixString.substring((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	::String tmp1 = tmp.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	int tmp2 = _fixString.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	::String tmp3 = _fixString.substring((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(215)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(215)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,WordFixString,return )

::String ObjectGeneratorSentence_obj::GenerateSentence3String( ::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentence3String",0x6b0ab815,"ObjectGeneratorSentence.GenerateSentence3String","ObjectGeneratorSentence.hx",216,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_visitorObject,"_visitorObject")
	HX_STACK_LINE(217)
	Array< ::Dynamic > patternStringArray2D = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(patternStringArray2D,"patternStringArray2D");
	HX_STACK_LINE(218)
	patternStringArray2D = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("11 93...","\x14","\x21","\x5f","\xa7")).Add(HX_HCSTRING("43 EA on the 93.","\xc7","\x34","\xd3","\xe7")).Add(HX_HCSTRING("E7 again.","\xdc","\x28","\xe8","\xae"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("11 A3.","\xdc","\x6d","\x77","\xe3")).Add(HX_HCSTRING("43 EA 22.","\x2b","\x73","\xbd","\x89")).Add(HX_HCSTRING("Into the 93.","\x85","\xa2","\x83","\x87"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("A3 EA.","\x04","\x72","\xfd","\x6f")).Add(HX_HCSTRING("What I E8 were A3...","\x17","\x30","\x77","\x00")).Add(HX_HCSTRING("Are 65 of 93.","\x60","\x13","\x09","\x99")));
	HX_STACK_LINE(258)
	int tmp = patternStringArray2D->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	int tmp1 = this->RandomNumberGeneratorInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	int stringPatternIndexInt = tmp1;		HX_STACK_VAR(stringPatternIndexInt,"stringPatternIndexInt");
	HX_STACK_LINE(259)
	Array< ::String > stringPatternIndexString = patternStringArray2D->__get(stringPatternIndexInt).StaticCast< Array< ::String > >();		HX_STACK_VAR(stringPatternIndexString,"stringPatternIndexString");
	HX_STACK_LINE(260)
	::String threeSentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
	HX_STACK_LINE(261)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(262)
	while((true)){
		HX_STACK_LINE(262)
		bool tmp2 = (loopCounter1Int < (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		if ((tmp3)){
			HX_STACK_LINE(262)
			break;
		}
		HX_STACK_LINE(263)
		bool tmp4 = (loopCounter1Int == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(263)
		if ((tmp4)){
			HX_STACK_LINE(263)
			::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(263)
			::String tmp6 = stringPatternIndexString->__get(loopCounter1Int);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			::ObjectVisitor tmp7 = _visitorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			::String tmp8 = this->GenerateSentenceString(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(263)
			::String tmp9 = this->WordFixString(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(263)
			threeSentenceString = tmp9;
		}
		else{
			HX_STACK_LINE(264)
			::String tmp5 = (threeSentenceString + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(264)
			::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(264)
			::String tmp7 = stringPatternIndexString->__get(loopCounter1Int);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(264)
			::ObjectVisitor tmp8 = _visitorObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(264)
			::String tmp9 = this->GenerateSentenceString(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(264)
			::String tmp10 = this->WordFixString(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(264)
			::String tmp11 = (tmp5 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(264)
			threeSentenceString = tmp11;
		}
		HX_STACK_LINE(265)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(267)
	::String tmp2 = threeSentenceString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(267)
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
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"DetermineProperCallbackFunction") ) { return DetermineProperCallbackFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("AddWordString","\x9c","\xab","\x21","\x88"),
	HX_HCSTRING("DetermineProperCallbackFunction","\xc0","\x96","\x67","\xa2"),
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

