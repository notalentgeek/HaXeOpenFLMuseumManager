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
#ifndef INCLUDED_Std
#include <Std.h>
#endif

Void ObjectGeneratorSentence_obj::__construct(::ObjectVisitor _visitorObject)
{
HX_STACK_FRAME("ObjectGeneratorSentence","new",0xecab5ea9,"ObjectGeneratorSentence.new","ObjectGeneratorSentence.hx",4,0x43a4e8e7)
HX_STACK_THIS(this)
HX_STACK_ARG(_visitorObject,"_visitorObject")
{
	HX_STACK_LINE(5)
	this->visitorObject = null();
	HX_STACK_LINE(7)
	this->visitorObject = _visitorObject;
}
;
	return null();
}

//ObjectGeneratorSentence_obj::~ObjectGeneratorSentence_obj() { }

Dynamic ObjectGeneratorSentence_obj::__CreateEmpty() { return  new ObjectGeneratorSentence_obj; }
hx::ObjectPtr< ObjectGeneratorSentence_obj > ObjectGeneratorSentence_obj::__new(::ObjectVisitor _visitorObject)
{  hx::ObjectPtr< ObjectGeneratorSentence_obj > _result_ = new ObjectGeneratorSentence_obj();
	_result_->__construct(_visitorObject);
	return _result_;}

Dynamic ObjectGeneratorSentence_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectGeneratorSentence_obj > _result_ = new ObjectGeneratorSentence_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String ObjectGeneratorSentence_obj::AddWordString( ::CollectionGlobal _collectionGlobalObject,::EnumTagType _tagTypeEnum,::EnumTagTypeSub _tagTypeSubEnum){
	HX_STACK_FRAME("ObjectGeneratorSentence","AddWordString",0x06234f25,"ObjectGeneratorSentence.AddWordString","ObjectGeneratorSentence.hx",12,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_tagTypeEnum,"_tagTypeEnum")
	HX_STACK_ARG(_tagTypeSubEnum,"_tagTypeSubEnum")
	HX_STACK_LINE(13)
	bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
	HX_STACK_LINE(14)
	bool getNeutralBool = false;		HX_STACK_VAR(getNeutralBool,"getNeutralBool");
	HX_STACK_LINE(15)
	bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
	HX_STACK_LINE(16)
	::ObjectVisitor tmp = this->visitorObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = tmp->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2 = (tmp1 == true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	if ((tmp2)){
		HX_STACK_LINE(16)
		::ObjectVisitor tmp4 = this->visitorObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(16)
		::ObjectVisitor tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		int tmp6 = tmp5->GetScoreInt();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16)
		tmp3 = (tmp7 >= (int)0);
	}
	else{
		HX_STACK_LINE(16)
		tmp3 = false;
	}
	HX_STACK_LINE(16)
	if ((tmp3)){
		HX_STACK_LINE(17)
		getNegativeBool = false;
		HX_STACK_LINE(18)
		getNeutralBool = true;
		HX_STACK_LINE(19)
		getPositiveBool = true;
	}
	else{
		HX_STACK_LINE(21)
		::ObjectVisitor tmp4 = this->visitorObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(21)
		bool tmp5 = tmp4->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		bool tmp6 = (tmp5 == false);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(21)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(21)
		if ((tmp7)){
			HX_STACK_LINE(21)
			::ObjectVisitor tmp9 = this->visitorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(21)
			::ObjectVisitor tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(21)
			int tmp11 = tmp10->GetScoreInt();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(21)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(21)
			tmp8 = (tmp12 < (int)0);
		}
		else{
			HX_STACK_LINE(21)
			tmp8 = true;
		}
		HX_STACK_LINE(21)
		if ((tmp8)){
			HX_STACK_LINE(22)
			getNegativeBool = true;
			HX_STACK_LINE(23)
			getNeutralBool = true;
			HX_STACK_LINE(24)
			getPositiveBool = false;
		}
		else{
			HX_STACK_LINE(27)
			getNegativeBool = true;
			HX_STACK_LINE(28)
			getNeutralBool = true;
			HX_STACK_LINE(29)
			getPositiveBool = true;
		}
	}
	HX_STACK_LINE(31)
	Array< ::String > tagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tagStringArray,"tagStringArray");
	HX_STACK_LINE(32)
	int randomIndexInt = (int)-1;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
	HX_STACK_LINE(33)
	int loopCounterPrivate1Int = (int)0;		HX_STACK_VAR(loopCounterPrivate1Int,"loopCounterPrivate1Int");
	HX_STACK_LINE(35)
	while((true)){
		HX_STACK_LINE(35)
		int tmp4 = loopCounterPrivate1Int;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::ObjectVisitor tmp5 = this->visitorObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(35)
		int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(35)
		bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(35)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		if ((tmp8)){
			HX_STACK_LINE(35)
			break;
		}
		HX_STACK_LINE(36)
		::ObjectVisitor tmp9 = this->visitorObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		::ObjectTag tmp10 = tmp9->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		::EnumTagType tmp11 = tmp10->GetTypeEnum();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		::EnumTagType tmp12 = _tagTypeEnum;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		if ((tmp13)){
			HX_STACK_LINE(37)
			::ObjectVisitor tmp14 = this->visitorObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(37)
			::ObjectTag tmp15 = tmp14->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(37)
			::EnumTagFeelType tmp16 = tmp15->GetFeelEnum();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(37)
			bool tmp17 = (tmp16 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(37)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(37)
			if ((tmp17)){
				HX_STACK_LINE(37)
				tmp18 = (getNegativeBool == true);
			}
			else{
				HX_STACK_LINE(37)
				tmp18 = false;
			}
			HX_STACK_LINE(37)
			if ((tmp18)){
				HX_STACK_LINE(38)
				::ObjectVisitor tmp19 = this->visitorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(38)
				::ObjectTag tmp20 = tmp19->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(38)
				::EnumTagTypeSub tmp21 = _tagTypeSubEnum;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(38)
				::ObjectVisitor tmp22 = this->visitorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(38)
				::ObjectTag tmp23 = tmp22->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(38)
				Dynamic tmp24 = this->DetermineProperCallbackFunction(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(38)
				Dynamic tmp25 = ::Reflect_obj::callMethod(tmp20,tmp24,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(38)
				tagStringArray->push(tmp25);
			}
			HX_STACK_LINE(40)
			::ObjectVisitor tmp19 = this->visitorObject;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(40)
			::ObjectTag tmp20 = tmp19->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(40)
			::EnumTagFeelType tmp21 = tmp20->GetFeelEnum();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(40)
			bool tmp22 = (tmp21 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(40)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(40)
			if ((tmp22)){
				HX_STACK_LINE(40)
				tmp23 = (getNeutralBool == true);
			}
			else{
				HX_STACK_LINE(40)
				tmp23 = false;
			}
			HX_STACK_LINE(40)
			if ((tmp23)){
				HX_STACK_LINE(41)
				::ObjectVisitor tmp24 = this->visitorObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(41)
				::ObjectTag tmp25 = tmp24->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(41)
				::EnumTagTypeSub tmp26 = _tagTypeSubEnum;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(41)
				::ObjectVisitor tmp27 = this->visitorObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(41)
				::ObjectTag tmp28 = tmp27->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(41)
				Dynamic tmp29 = this->DetermineProperCallbackFunction(tmp26,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(41)
				Dynamic tmp30 = ::Reflect_obj::callMethod(tmp25,tmp29,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(41)
				tagStringArray->push(tmp30);
			}
			HX_STACK_LINE(43)
			::ObjectVisitor tmp24 = this->visitorObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(43)
			::ObjectTag tmp25 = tmp24->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(43)
			::EnumTagFeelType tmp26 = tmp25->GetFeelEnum();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(43)
			bool tmp27 = (tmp26 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(43)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(43)
			if ((tmp27)){
				HX_STACK_LINE(43)
				tmp28 = (getPositiveBool == true);
			}
			else{
				HX_STACK_LINE(43)
				tmp28 = false;
			}
			HX_STACK_LINE(43)
			if ((tmp28)){
				HX_STACK_LINE(44)
				::ObjectVisitor tmp29 = this->visitorObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(44)
				::ObjectTag tmp30 = tmp29->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(44)
				::EnumTagTypeSub tmp31 = _tagTypeSubEnum;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(44)
				::ObjectVisitor tmp32 = this->visitorObject;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(44)
				::ObjectTag tmp33 = tmp32->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(44)
				Dynamic tmp34 = this->DetermineProperCallbackFunction(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(44)
				Dynamic tmp35 = ::Reflect_obj::callMethod(tmp30,tmp34,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(44)
				tagStringArray->push(tmp35);
			}
		}
		HX_STACK_LINE(47)
		(loopCounterPrivate1Int)++;
	}
	HX_STACK_LINE(50)
	bool tmp4 = (tagStringArray->length == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	if ((tmp4)){
		HX_STACK_LINE(51)
		loopCounterPrivate1Int = (int)0;
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			int tmp5 = loopCounterPrivate1Int;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			int tmp6 = _collectionGlobalObject->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(52)
			if ((tmp8)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(53)
			::ObjectTag tmp9 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(53)
			::EnumTagType tmp10 = tmp9->GetTypeEnum();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(53)
			::EnumTagType tmp11 = _tagTypeEnum;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(53)
			if ((tmp12)){
				HX_STACK_LINE(54)
				::ObjectTag tmp13 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(54)
				::EnumTagFeelType tmp14 = tmp13->GetFeelEnum();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(54)
				bool tmp15 = (tmp14 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(54)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(54)
				if ((tmp15)){
					HX_STACK_LINE(54)
					tmp16 = (getNegativeBool == true);
				}
				else{
					HX_STACK_LINE(54)
					tmp16 = false;
				}
				HX_STACK_LINE(54)
				if ((tmp16)){
					HX_STACK_LINE(55)
					::ObjectTag tmp17 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(55)
					::EnumTagTypeSub tmp18 = _tagTypeSubEnum;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(55)
					::ObjectTag tmp19 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(55)
					Dynamic tmp20 = this->DetermineProperCallbackFunction(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(55)
					Dynamic tmp21 = ::Reflect_obj::callMethod(tmp17,tmp20,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(55)
					tagStringArray->push(tmp21);
				}
				HX_STACK_LINE(57)
				::ObjectTag tmp17 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(57)
				::EnumTagFeelType tmp18 = tmp17->GetFeelEnum();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(57)
				bool tmp19 = (tmp18 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(57)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(57)
				if ((tmp19)){
					HX_STACK_LINE(57)
					tmp20 = (getNeutralBool == true);
				}
				else{
					HX_STACK_LINE(57)
					tmp20 = false;
				}
				HX_STACK_LINE(57)
				if ((tmp20)){
					HX_STACK_LINE(58)
					::ObjectTag tmp21 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(58)
					::EnumTagTypeSub tmp22 = _tagTypeSubEnum;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(58)
					::ObjectTag tmp23 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(58)
					Dynamic tmp24 = this->DetermineProperCallbackFunction(tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(58)
					Dynamic tmp25 = ::Reflect_obj::callMethod(tmp21,tmp24,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(58)
					tagStringArray->push(tmp25);
				}
				HX_STACK_LINE(60)
				::ObjectTag tmp21 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(60)
				::EnumTagFeelType tmp22 = tmp21->GetFeelEnum();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(60)
				bool tmp23 = (tmp22 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(60)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(60)
				if ((tmp23)){
					HX_STACK_LINE(60)
					tmp24 = (getPositiveBool == true);
				}
				else{
					HX_STACK_LINE(60)
					tmp24 = false;
				}
				HX_STACK_LINE(60)
				if ((tmp24)){
					HX_STACK_LINE(61)
					::ObjectTag tmp25 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(61)
					::EnumTagTypeSub tmp26 = _tagTypeSubEnum;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(61)
					::ObjectTag tmp27 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(61)
					Dynamic tmp28 = this->DetermineProperCallbackFunction(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(61)
					Dynamic tmp29 = ::Reflect_obj::callMethod(tmp25,tmp28,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(61)
					tagStringArray->push(tmp29);
				}
			}
			HX_STACK_LINE(64)
			(loopCounterPrivate1Int)++;
		}
	}
	HX_STACK_LINE(67)
	int tmp5 = tagStringArray->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(67)
	int tmp6 = this->RandomNumberGeneratorInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(67)
	randomIndexInt = tmp6;
	HX_STACK_LINE(68)
	::String tmp7 = tagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(68)
	::String returnString = tmp7;		HX_STACK_VAR(returnString,"returnString");
	HX_STACK_LINE(69)
	::String tmp8 = returnString;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(69)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC3(ObjectGeneratorSentence_obj,AddWordString,return )

Dynamic ObjectGeneratorSentence_obj::DetermineProperCallbackFunction( ::EnumTagTypeSub _tagTypeSubEnum,::ObjectTag _tagObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","DetermineProperCallbackFunction",0xbc8dd089,"ObjectGeneratorSentence.DetermineProperCallbackFunction","ObjectGeneratorSentence.hx",71,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tagTypeSubEnum,"_tagTypeSubEnum")
	HX_STACK_ARG(_tagObject,"_tagObject")
	HX_STACK_LINE(72)
	bool tmp = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::ADJ);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	if ((tmp)){
		HX_STACK_LINE(72)
		Dynamic tmp1 = _tagObject->GetAdjectiveString_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		return tmp1;
	}
	else{
		HX_STACK_LINE(73)
		bool tmp1 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::ADV);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		if ((tmp1)){
			HX_STACK_LINE(73)
			Dynamic tmp2 = _tagObject->GetAdverbString_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			return tmp2;
		}
		else{
			HX_STACK_LINE(74)
			bool tmp2 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			if ((tmp2)){
				HX_STACK_LINE(74)
				Dynamic tmp3 = _tagObject->GetNounString_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(74)
				return tmp3;
			}
			else{
				HX_STACK_LINE(75)
				bool tmp3 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_POS);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(75)
				if ((tmp3)){
					HX_STACK_LINE(75)
					Dynamic tmp4 = _tagObject->GetNounPosString_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(75)
					return tmp4;
				}
				else{
					HX_STACK_LINE(76)
					bool tmp4 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_S);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(76)
					if ((tmp4)){
						HX_STACK_LINE(76)
						Dynamic tmp5 = _tagObject->GetNounSString_dyn();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(76)
						return tmp5;
					}
					else{
						HX_STACK_LINE(77)
						bool tmp5 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_S_POS);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(77)
						if ((tmp5)){
							HX_STACK_LINE(77)
							Dynamic tmp6 = _tagObject->GetNounSPosString_dyn();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(77)
							return tmp6;
						}
						else{
							HX_STACK_LINE(78)
							bool tmp6 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(78)
							if ((tmp6)){
								HX_STACK_LINE(78)
								Dynamic tmp7 = _tagObject->GetVerb1String_dyn();		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(78)
								return tmp7;
							}
							else{
								HX_STACK_LINE(79)
								bool tmp7 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_2);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(79)
								if ((tmp7)){
									HX_STACK_LINE(79)
									Dynamic tmp8 = _tagObject->GetVerb2String_dyn();		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(79)
									return tmp8;
								}
								else{
									HX_STACK_LINE(80)
									bool tmp8 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_3);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(80)
									if ((tmp8)){
										HX_STACK_LINE(80)
										Dynamic tmp9 = _tagObject->GetVerb3String_dyn();		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(80)
										return tmp9;
									}
									else{
										HX_STACK_LINE(81)
										bool tmp9 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_ING);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(81)
										if ((tmp9)){
											HX_STACK_LINE(81)
											Dynamic tmp10 = _tagObject->GetVerbIngString_dyn();		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(81)
											return tmp10;
										}
										else{
											HX_STACK_LINE(82)
											bool tmp10 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_S);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(82)
											if ((tmp10)){
												HX_STACK_LINE(82)
												Dynamic tmp11 = _tagObject->GetVerbSString_dyn();		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(82)
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
	HX_STACK_LINE(83)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectGeneratorSentence_obj,DetermineProperCallbackFunction,return )

::String ObjectGeneratorSentence_obj::GenerateSentenceString( ::CollectionGlobal _collectionGlobalObject,::String _patternString){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentenceString",0x814dcb60,"ObjectGeneratorSentence.GenerateSentenceString","ObjectGeneratorSentence.hx",85,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_patternString,"_patternString")
	HX_STACK_LINE(86)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(87)
	::String patternString = _patternString;		HX_STACK_VAR(patternString,"patternString");
	HX_STACK_LINE(88)
	::String sentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(sentenceString,"sentenceString");
	HX_STACK_LINE(89)
	while((true)){
		HX_STACK_LINE(89)
		bool tmp = (loopCounter1Int < patternString.length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(89)
			break;
		}
		HX_STACK_LINE(90)
		::String codeString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(codeString,"codeString");
		HX_STACK_LINE(91)
		Array< ::String > codeStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("2","\x32","\x00","\x00","\x00")).Add(HX_HCSTRING("3","\x33","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("5","\x35","\x00","\x00","\x00")).Add(HX_HCSTRING("6","\x36","\x00","\x00","\x00")).Add(HX_HCSTRING("7","\x37","\x00","\x00","\x00")).Add(HX_HCSTRING("8","\x38","\x00","\x00","\x00")).Add(HX_HCSTRING("9","\x39","\x00","\x00","\x00")).Add(HX_HCSTRING("0","\x30","\x00","\x00","\x00")).Add(HX_HCSTRING("A","\x41","\x00","\x00","\x00")).Add(HX_HCSTRING("B","\x42","\x00","\x00","\x00")).Add(HX_HCSTRING("C","\x43","\x00","\x00","\x00")).Add(HX_HCSTRING("D","\x44","\x00","\x00","\x00")).Add(HX_HCSTRING("E","\x45","\x00","\x00","\x00")).Add(HX_HCSTRING("F","\x46","\x00","\x00","\x00"));		HX_STACK_VAR(codeStringArray,"codeStringArray");
		HX_STACK_LINE(92)
		int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		int tmp3 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::String tmp4 = patternString.substring(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		::String scan1String = tmp4;		HX_STACK_VAR(scan1String,"scan1String");
		HX_STACK_LINE(93)
		::String tmp5 = scan1String;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		int tmp6 = codeStringArray->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		bool tmp7 = (tmp6 > (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		if ((tmp7)){
			HX_STACK_LINE(94)
			int tmp8 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			int tmp9 = (loopCounter1Int + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			::String tmp10 = patternString.substring(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			::String scan2String = tmp10;		HX_STACK_VAR(scan2String,"scan2String");
			HX_STACK_LINE(95)
			::String tmp11 = scan2String;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(95)
			int tmp12 = codeStringArray->indexOf(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(95)
			bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(95)
			if ((tmp13)){
				HX_STACK_LINE(96)
				::String tmp14 = (scan1String + scan2String);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				codeString = tmp14;
				HX_STACK_LINE(97)
				hx::AddEq(loopCounter1Int,(int)2);
			}
			else{
				HX_STACK_LINE(99)
				(loopCounter1Int)++;
			}
		}
		else{
			HX_STACK_LINE(101)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(102)
		::String wordString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(wordString,"wordString");
		HX_STACK_LINE(135)
		bool tmp8 = (codeString == HX_HCSTRING("11","\xe0","\x2a","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(135)
		if ((tmp8)){
			HX_STACK_LINE(136)
			::CollectionGlobal tmp9 = _collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(136)
			::String tmp10 = this->AddWordString(tmp9,::EnumTagType_obj::ADJ,::EnumTagTypeSub_obj::ADJ);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(136)
			wordString = tmp10;
		}
		else{
			HX_STACK_LINE(138)
			bool tmp9 = (codeString == HX_HCSTRING("22","\xc0","\x2b","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(138)
			if ((tmp9)){
				HX_STACK_LINE(139)
				::CollectionGlobal tmp10 = _collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(139)
				::String tmp11 = this->AddWordString(tmp10,::EnumTagType_obj::ADV,::EnumTagTypeSub_obj::ADV);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(139)
				wordString = tmp11;
			}
			else{
				HX_STACK_LINE(141)
				bool tmp10 = (codeString == HX_HCSTRING("43","\x7f","\x2d","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(141)
				if ((tmp10)){
					HX_STACK_LINE(142)
					Array< ::String > _43TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_43TagStringArray,"_43TagStringArray");
					HX_STACK_LINE(143)
					int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
					HX_STACK_LINE(144)
					int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
					HX_STACK_LINE(145)
					while((true)){
						HX_STACK_LINE(145)
						int tmp11 = loopCounter2Int;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(145)
						::ObjectVisitor tmp12 = this->visitorObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(145)
						int tmp13 = tmp12->GetTagObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(145)
						bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(145)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(145)
						if ((tmp15)){
							HX_STACK_LINE(145)
							break;
						}
						HX_STACK_LINE(146)
						::ObjectVisitor tmp16 = this->visitorObject;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(146)
						::ObjectTag tmp17 = tmp16->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(146)
						::EnumTagType tmp18 = tmp17->GetTypeEnum();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(146)
						bool tmp19 = (tmp18 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(146)
						if ((tmp19)){
							HX_STACK_LINE(147)
							::ObjectVisitor tmp20 = this->visitorObject;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(147)
							::ObjectTag tmp21 = tmp20->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(147)
							::String tmp22 = tmp21->GetNounString();		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(147)
							_43TagStringArray->push(tmp22);
						}
						HX_STACK_LINE(149)
						(loopCounter2Int)++;
					}
					HX_STACK_LINE(151)
					bool tmp11 = (_43TagStringArray->length == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(151)
					if ((tmp11)){
						HX_STACK_LINE(152)
						loopCounter2Int = (int)0;
						HX_STACK_LINE(153)
						while((true)){
							HX_STACK_LINE(153)
							int tmp12 = loopCounter2Int;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(153)
							int tmp13 = _collectionGlobalObject->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(153)
							bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(153)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(153)
							if ((tmp15)){
								HX_STACK_LINE(153)
								break;
							}
							HX_STACK_LINE(154)
							::ObjectTag tmp16 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(154)
							::EnumTagType tmp17 = tmp16->GetTypeEnum();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(154)
							bool tmp18 = (tmp17 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(154)
							if ((tmp18)){
								HX_STACK_LINE(155)
								::ObjectTag tmp19 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(155)
								::String tmp20 = tmp19->GetNounString();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(155)
								_43TagStringArray->push(tmp20);
							}
							HX_STACK_LINE(157)
							(loopCounter2Int)++;
						}
					}
					HX_STACK_LINE(160)
					int tmp12 = _43TagStringArray->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(160)
					int tmp13 = this->RandomNumberGeneratorInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(160)
					randomIndexInt = tmp13;
					HX_STACK_LINE(161)
					::ObjectVisitor tmp14 = this->visitorObject;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(161)
					::String tmp15 = tmp14->GetNameString();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(161)
					bool tmp16 = (tmp15 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(161)
					if ((tmp16)){
						HX_STACK_LINE(162)
						::String tmp17 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(162)
						wordString = tmp17;
					}
					else{
						HX_STACK_LINE(164)
						::ObjectVisitor tmp17 = this->visitorObject;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(164)
						::String tmp18 = tmp17->GetNameString();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(164)
						bool tmp19 = (tmp18 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(164)
						if ((tmp19)){
							HX_STACK_LINE(165)
							Float tmp20 = ::Math_obj::random();		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(165)
							bool tmp21 = (tmp20 > ((Float)0.5));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(165)
							if ((tmp21)){
								HX_STACK_LINE(166)
								::ObjectVisitor tmp22 = this->visitorObject;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(166)
								::String tmp23 = tmp22->GetNameString();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(166)
								wordString = tmp23;
							}
							else{
								HX_STACK_LINE(168)
								::String tmp22 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(168)
								wordString = tmp22;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(171)
					bool tmp11 = (codeString == HX_HCSTRING("65","\x3f","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(171)
					if ((tmp11)){
						HX_STACK_LINE(172)
						::CollectionGlobal tmp12 = _collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(172)
						::String tmp13 = this->AddWordString(tmp12,::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,::EnumTagTypeSub_obj::NOUN_S);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(172)
						wordString = tmp13;
					}
					else{
						HX_STACK_LINE(174)
						bool tmp12 = (codeString == HX_HCSTRING("93","\xda","\x31","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(174)
						if ((tmp12)){
							HX_STACK_LINE(175)
							::CollectionGlobal tmp13 = _collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(175)
							::String tmp14 = this->AddWordString(tmp13,::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,::EnumTagTypeSub_obj::NOUN);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(175)
							wordString = tmp14;
						}
						else{
							HX_STACK_LINE(177)
							bool tmp13 = (codeString == HX_HCSTRING("A3","\xd2","\x38","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(177)
							if ((tmp13)){
								HX_STACK_LINE(178)
								::CollectionGlobal tmp14 = _collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(178)
								::String tmp15 = this->AddWordString(tmp14,::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE,::EnumTagTypeSub_obj::NOUN);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(178)
								wordString = tmp15;
							}
							else{
								HX_STACK_LINE(180)
								bool tmp14 = (codeString == HX_HCSTRING("E7","\x52","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(180)
								if ((tmp14)){
									HX_STACK_LINE(181)
									::CollectionGlobal tmp15 = _collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(181)
									::String tmp16 = this->AddWordString(tmp15,::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_1);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(181)
									wordString = tmp16;
								}
								else{
									HX_STACK_LINE(183)
									bool tmp15 = (codeString == HX_HCSTRING("E8","\x53","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(183)
									if ((tmp15)){
										HX_STACK_LINE(184)
										::CollectionGlobal tmp16 = _collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(184)
										::String tmp17 = this->AddWordString(tmp16,::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_2);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(184)
										wordString = tmp17;
									}
									else{
										HX_STACK_LINE(186)
										bool tmp16 = (codeString == HX_HCSTRING("EA","\x5c","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(186)
										if ((tmp16)){
											HX_STACK_LINE(187)
											::CollectionGlobal tmp17 = _collectionGlobalObject;		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(187)
											::String tmp18 = this->AddWordString(tmp17,::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_S);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(187)
											wordString = tmp18;
										}
										else{
											HX_STACK_LINE(190)
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
		HX_STACK_LINE(192)
		::String tmp9 = (sentenceString + wordString);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(192)
		sentenceString = tmp9;
	}
	HX_STACK_LINE(194)
	::String tmp = sentenceString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectGeneratorSentence_obj,GenerateSentenceString,return )

int ObjectGeneratorSentence_obj::RandomNumberGeneratorInt( int _randomNumberInt){
	HX_STACK_FRAME("ObjectGeneratorSentence","RandomNumberGeneratorInt",0xb4d8c4df,"ObjectGeneratorSentence.RandomNumberGeneratorInt","ObjectGeneratorSentence.hx",196,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_randomNumberInt,"_randomNumberInt")
	HX_STACK_LINE(196)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	int tmp1 = (_randomNumberInt - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(196)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,RandomNumberGeneratorInt,return )

::String ObjectGeneratorSentence_obj::WordFixString( ::String _fixString){
	HX_STACK_FRAME("ObjectGeneratorSentence","WordFixString",0x1c1734c5,"ObjectGeneratorSentence.WordFixString","ObjectGeneratorSentence.hx",197,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fixString,"_fixString")
	HX_STACK_LINE(198)
	::String tmp = _fixString.substring((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(198)
	::String tmp1 = tmp.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(198)
	::String fix1String = tmp1;		HX_STACK_VAR(fix1String,"fix1String");
	HX_STACK_LINE(199)
	int tmp2 = _fixString.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	::String tmp3 = _fixString.substring((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	::String fix2String = tmp3;		HX_STACK_VAR(fix2String,"fix2String");
	HX_STACK_LINE(200)
	::String tmp4 = (fix1String + fix2String);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(200)
	::String fix3String = tmp4;		HX_STACK_VAR(fix3String,"fix3String");
	HX_STACK_LINE(201)
	::String tmp5 = fix3String;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(201)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,WordFixString,return )

::String ObjectGeneratorSentence_obj::GenerateSentence3String( ::CollectionGlobal _collectionGlobalObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentence3String",0x6b0ab815,"ObjectGeneratorSentence.GenerateSentence3String","ObjectGeneratorSentence.hx",203,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_LINE(204)
	Array< ::Dynamic > patternStringArray2D = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(patternStringArray2D,"patternStringArray2D");
	HX_STACK_LINE(205)
	patternStringArray2D = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("11 93...","\x14","\x21","\x5f","\xa7")).Add(HX_HCSTRING("43 EA On The 93.","\xc7","\x60","\xd5","\xab")).Add(HX_HCSTRING("E7 Again.","\xfc","\x9c","\x7c","\xe3"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("11 A3.","\xdc","\x6d","\x77","\xe3")).Add(HX_HCSTRING("43 EA 22.","\x2b","\x73","\xbd","\x89")).Add(HX_HCSTRING("Into The 93.","\x65","\xca","\xd4","\x54"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("A3 EA.","\x04","\x72","\xfd","\x6f")).Add(HX_HCSTRING("What I E8 Were A3...","\x37","\x34","\x28","\xf7")).Add(HX_HCSTRING("Are 65 Of 93.","\x80","\x87","\x9d","\xcd")));
	HX_STACK_LINE(245)
	int tmp = patternStringArray2D->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(245)
	int tmp1 = this->RandomNumberGeneratorInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(245)
	int stringPatternIndexInt = tmp1;		HX_STACK_VAR(stringPatternIndexInt,"stringPatternIndexInt");
	HX_STACK_LINE(246)
	Array< ::String > stringPatternIndexString = patternStringArray2D->__get(stringPatternIndexInt).StaticCast< Array< ::String > >();		HX_STACK_VAR(stringPatternIndexString,"stringPatternIndexString");
	HX_STACK_LINE(247)
	::String threeSentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
	HX_STACK_LINE(248)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(249)
	while((true)){
		HX_STACK_LINE(249)
		bool tmp2 = (loopCounter1Int < (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(249)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		if ((tmp3)){
			HX_STACK_LINE(249)
			break;
		}
		HX_STACK_LINE(251)
		::CollectionGlobal tmp4 = _collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		::String tmp5 = stringPatternIndexString->__get(loopCounter1Int);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		::String tmp6 = this->GenerateSentenceString(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		::String sentenceString = tmp6;		HX_STACK_VAR(sentenceString,"sentenceString");
		HX_STACK_LINE(252)
		::String tmp7 = (threeSentenceString + sentenceString);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(252)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(252)
		threeSentenceString = tmp9;
		HX_STACK_LINE(253)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(255)
	::String tmp2 = threeSentenceString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,GenerateSentence3String,return )


ObjectGeneratorSentence_obj::ObjectGeneratorSentence_obj()
{
}

void ObjectGeneratorSentence_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectGeneratorSentence);
	HX_MARK_MEMBER_NAME(visitorObject,"visitorObject");
	HX_MARK_END_CLASS();
}

void ObjectGeneratorSentence_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(visitorObject,"visitorObject");
}

Dynamic ObjectGeneratorSentence_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"visitorObject") ) { return visitorObject; }
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

Dynamic ObjectGeneratorSentence_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"visitorObject") ) { visitorObject=inValue.Cast< ::ObjectVisitor >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectGeneratorSentence_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("visitorObject","\x0d","\x0d","\x59","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ObjectVisitor*/ ,(int)offsetof(ObjectGeneratorSentence_obj,visitorObject),HX_HCSTRING("visitorObject","\x0d","\x0d","\x59","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("visitorObject","\x0d","\x0d","\x59","\x11"),
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

