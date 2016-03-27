#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumCompanyWordPosition
#include <EnumCompanyWordPosition.h>
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

Void ObjectGeneratorSentence_obj::__construct(::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject)
{
HX_STACK_FRAME("ObjectGeneratorSentence","new",0xecab5ea9,"ObjectGeneratorSentence.new","ObjectGeneratorSentence.hx",4,0x43a4e8e7)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_visitorObject,"_visitorObject")
{
	HX_STACK_LINE(7)
	this->visitorObject = null();
	HX_STACK_LINE(6)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(10)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(11)
	this->visitorObject = _visitorObject;
}
;
	return null();
}

//ObjectGeneratorSentence_obj::~ObjectGeneratorSentence_obj() { }

Dynamic ObjectGeneratorSentence_obj::__CreateEmpty() { return  new ObjectGeneratorSentence_obj; }
hx::ObjectPtr< ObjectGeneratorSentence_obj > ObjectGeneratorSentence_obj::__new(::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject)
{  hx::ObjectPtr< ObjectGeneratorSentence_obj > _result_ = new ObjectGeneratorSentence_obj();
	_result_->__construct(_collectionGlobalObject,_visitorObject);
	return _result_;}

Dynamic ObjectGeneratorSentence_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectGeneratorSentence_obj > _result_ = new ObjectGeneratorSentence_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String ObjectGeneratorSentence_obj::AddWordString( ::EnumTagType _tagTypeEnum,::EnumTagTypeSub _tagTypeSubEnum){
	HX_STACK_FRAME("ObjectGeneratorSentence","AddWordString",0x06234f25,"ObjectGeneratorSentence.AddWordString","ObjectGeneratorSentence.hx",21,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tagTypeEnum,"_tagTypeEnum")
	HX_STACK_ARG(_tagTypeSubEnum,"_tagTypeSubEnum")
	HX_STACK_LINE(22)
	bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
	HX_STACK_LINE(23)
	bool getNeutralBool = false;		HX_STACK_VAR(getNeutralBool,"getNeutralBool");
	HX_STACK_LINE(24)
	bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
	HX_STACK_LINE(27)
	::ObjectVisitor tmp = this->visitorObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	bool tmp1 = tmp->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	bool tmp2 = (tmp1 == true);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(27)
	if ((tmp2)){
		HX_STACK_LINE(28)
		::ObjectVisitor tmp4 = this->visitorObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		::ObjectVisitor tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		int tmp6 = tmp5->GetScoreInt();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		tmp3 = (tmp7 >= (int)0);
	}
	else{
		HX_STACK_LINE(27)
		tmp3 = false;
	}
	HX_STACK_LINE(26)
	if ((tmp3)){
		HX_STACK_LINE(31)
		getNegativeBool = false;
		HX_STACK_LINE(32)
		getNeutralBool = true;
		HX_STACK_LINE(33)
		getPositiveBool = true;
	}
	else{
		HX_STACK_LINE(37)
		::ObjectVisitor tmp4 = this->visitorObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		bool tmp5 = tmp4->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		bool tmp6 = (tmp5 == false);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		if ((tmp7)){
			HX_STACK_LINE(38)
			::ObjectVisitor tmp9 = this->visitorObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(38)
			::ObjectVisitor tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(38)
			int tmp11 = tmp10->GetScoreInt();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(38)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(38)
			tmp8 = (tmp12 < (int)0);
		}
		else{
			HX_STACK_LINE(37)
			tmp8 = true;
		}
		HX_STACK_LINE(36)
		if ((tmp8)){
			HX_STACK_LINE(41)
			getNegativeBool = true;
			HX_STACK_LINE(42)
			getNeutralBool = true;
			HX_STACK_LINE(43)
			getPositiveBool = false;
		}
		else{
			HX_STACK_LINE(48)
			getNegativeBool = true;
			HX_STACK_LINE(49)
			getNeutralBool = true;
			HX_STACK_LINE(50)
			getPositiveBool = true;
		}
	}
	HX_STACK_LINE(54)
	bool isGeneralBool = false;		HX_STACK_VAR(isGeneralBool,"isGeneralBool");
	HX_STACK_LINE(55)
	int loopCounterPrivate1Int = (int)0;		HX_STACK_VAR(loopCounterPrivate1Int,"loopCounterPrivate1Int");
	HX_STACK_LINE(56)
	int randomIndexInt = (int)-1;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
	HX_STACK_LINE(57)
	Array< ::String > tagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(tagStringArray,"tagStringArray");
	HX_STACK_LINE(60)
	while((true)){
		HX_STACK_LINE(60)
		int tmp4 = loopCounterPrivate1Int;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(60)
		::ObjectVisitor tmp5 = this->visitorObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(60)
		int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(60)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(60)
		if ((tmp8)){
			HX_STACK_LINE(60)
			break;
		}
		HX_STACK_LINE(62)
		::ObjectVisitor tmp9 = this->visitorObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		::ObjectTag tmp10 = tmp9->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		::EnumTagType tmp11 = tmp10->GetTypeEnum();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		::EnumTagType tmp12 = _tagTypeEnum;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(62)
		bool tmp13 = (tmp11 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(62)
		if ((tmp13)){
			HX_STACK_LINE(68)
			::ObjectVisitor tmp14 = this->visitorObject;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(68)
			::ObjectTag tmp15 = tmp14->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(68)
			::EnumTagFeelType tmp16 = tmp15->GetFeelEnum();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(68)
			bool tmp17 = (tmp16 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(68)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(68)
			if ((tmp17)){
				HX_STACK_LINE(69)
				tmp18 = (getNegativeBool == true);
			}
			else{
				HX_STACK_LINE(68)
				tmp18 = false;
			}
			HX_STACK_LINE(67)
			if ((tmp18)){
				HX_STACK_LINE(73)
				::ObjectVisitor tmp19 = this->visitorObject;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(73)
				::ObjectTag tmp20 = tmp19->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(75)
				::EnumTagTypeSub tmp21 = _tagTypeSubEnum;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(76)
				::ObjectVisitor tmp22 = this->visitorObject;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(76)
				::ObjectTag tmp23 = tmp22->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(74)
				Dynamic tmp24 = this->DetermineProperCallbackFunction(tmp21,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(73)
				Dynamic tmp25 = ::Reflect_obj::callMethod(tmp20,tmp24,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(72)
				tagStringArray->push(tmp25);
			}
			HX_STACK_LINE(83)
			::ObjectVisitor tmp19 = this->visitorObject;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(83)
			::ObjectTag tmp20 = tmp19->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(83)
			::EnumTagFeelType tmp21 = tmp20->GetFeelEnum();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(83)
			bool tmp22 = (tmp21 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(83)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(83)
			if ((tmp22)){
				HX_STACK_LINE(84)
				tmp23 = (getNeutralBool == true);
			}
			else{
				HX_STACK_LINE(83)
				tmp23 = false;
			}
			HX_STACK_LINE(82)
			if ((tmp23)){
				HX_STACK_LINE(88)
				::ObjectVisitor tmp24 = this->visitorObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(88)
				::ObjectTag tmp25 = tmp24->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(90)
				::EnumTagTypeSub tmp26 = _tagTypeSubEnum;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(91)
				::ObjectVisitor tmp27 = this->visitorObject;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(91)
				::ObjectTag tmp28 = tmp27->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(89)
				Dynamic tmp29 = this->DetermineProperCallbackFunction(tmp26,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(88)
				Dynamic tmp30 = ::Reflect_obj::callMethod(tmp25,tmp29,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(87)
				tagStringArray->push(tmp30);
			}
			HX_STACK_LINE(98)
			::ObjectVisitor tmp24 = this->visitorObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(98)
			::ObjectTag tmp25 = tmp24->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(98)
			::EnumTagFeelType tmp26 = tmp25->GetFeelEnum();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(98)
			bool tmp27 = (tmp26 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(98)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(98)
			if ((tmp27)){
				HX_STACK_LINE(99)
				tmp28 = (getPositiveBool == true);
			}
			else{
				HX_STACK_LINE(98)
				tmp28 = false;
			}
			HX_STACK_LINE(97)
			if ((tmp28)){
				HX_STACK_LINE(103)
				::ObjectVisitor tmp29 = this->visitorObject;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(103)
				::ObjectTag tmp30 = tmp29->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(105)
				::EnumTagTypeSub tmp31 = _tagTypeSubEnum;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(106)
				::ObjectVisitor tmp32 = this->visitorObject;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(106)
				::ObjectTag tmp33 = tmp32->GetTagObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(104)
				Dynamic tmp34 = this->DetermineProperCallbackFunction(tmp31,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(103)
				Dynamic tmp35 = ::Reflect_obj::callMethod(tmp30,tmp34,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(102)
				tagStringArray->push(tmp35);
			}
		}
		HX_STACK_LINE(115)
		(loopCounterPrivate1Int)++;
	}
	HX_STACK_LINE(120)
	bool tmp4 = (tagStringArray->length == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	if ((tmp4)){
		HX_STACK_LINE(122)
		isGeneralBool = true;
		HX_STACK_LINE(123)
		loopCounterPrivate1Int = (int)0;
		HX_STACK_LINE(125)
		while((true)){
			HX_STACK_LINE(125)
			int tmp5 = loopCounterPrivate1Int;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			int tmp7 = tmp6->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(125)
			bool tmp8 = (tmp5 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(125)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(125)
			if ((tmp9)){
				HX_STACK_LINE(125)
				break;
			}
			HX_STACK_LINE(127)
			::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(127)
			::ObjectTag tmp11 = tmp10->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(127)
			::EnumTagType tmp12 = tmp11->GetTypeEnum();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(127)
			::EnumTagType tmp13 = _tagTypeEnum;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			if ((tmp14)){
				HX_STACK_LINE(130)
				::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(130)
				::ObjectTag tmp16 = tmp15->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(130)
				::EnumTagFeelType tmp17 = tmp16->GetFeelEnum();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(130)
				bool tmp18 = (tmp17 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(130)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(130)
				if ((tmp18)){
					HX_STACK_LINE(131)
					tmp19 = (getNegativeBool == true);
				}
				else{
					HX_STACK_LINE(130)
					tmp19 = false;
				}
				HX_STACK_LINE(129)
				if ((tmp19)){
					HX_STACK_LINE(135)
					::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(135)
					::ObjectTag tmp21 = tmp20->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(137)
					::EnumTagTypeSub tmp22 = _tagTypeSubEnum;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(138)
					::CollectionGlobal tmp23 = this->collectionGlobalObject;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(138)
					::ObjectTag tmp24 = tmp23->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(136)
					Dynamic tmp25 = this->DetermineProperCallbackFunction(tmp22,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(135)
					Dynamic tmp26 = ::Reflect_obj::callMethod(tmp21,tmp25,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(134)
					tagStringArray->push(tmp26);
				}
				HX_STACK_LINE(145)
				::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(145)
				::ObjectTag tmp21 = tmp20->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(145)
				::EnumTagFeelType tmp22 = tmp21->GetFeelEnum();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(145)
				bool tmp23 = (tmp22 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(145)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(145)
				if ((tmp23)){
					HX_STACK_LINE(146)
					tmp24 = (getNeutralBool == true);
				}
				else{
					HX_STACK_LINE(145)
					tmp24 = false;
				}
				HX_STACK_LINE(144)
				if ((tmp24)){
					HX_STACK_LINE(150)
					::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(150)
					::ObjectTag tmp26 = tmp25->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(152)
					::EnumTagTypeSub tmp27 = _tagTypeSubEnum;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(153)
					::CollectionGlobal tmp28 = this->collectionGlobalObject;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(153)
					::ObjectTag tmp29 = tmp28->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(151)
					Dynamic tmp30 = this->DetermineProperCallbackFunction(tmp27,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(150)
					Dynamic tmp31 = ::Reflect_obj::callMethod(tmp26,tmp30,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(149)
					tagStringArray->push(tmp31);
				}
				HX_STACK_LINE(160)
				::CollectionGlobal tmp25 = this->collectionGlobalObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(160)
				::ObjectTag tmp26 = tmp25->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(160)
				::EnumTagFeelType tmp27 = tmp26->GetFeelEnum();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(160)
				bool tmp28 = (tmp27 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(160)
				bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(160)
				if ((tmp28)){
					HX_STACK_LINE(161)
					tmp29 = (getPositiveBool == true);
				}
				else{
					HX_STACK_LINE(160)
					tmp29 = false;
				}
				HX_STACK_LINE(159)
				if ((tmp29)){
					HX_STACK_LINE(165)
					::CollectionGlobal tmp30 = this->collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(165)
					::ObjectTag tmp31 = tmp30->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(167)
					::EnumTagTypeSub tmp32 = _tagTypeSubEnum;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(168)
					::CollectionGlobal tmp33 = this->collectionGlobalObject;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(168)
					::ObjectTag tmp34 = tmp33->GetTagGeneralObjectArray()->__get(loopCounterPrivate1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(166)
					Dynamic tmp35 = this->DetermineProperCallbackFunction(tmp32,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(165)
					Dynamic tmp36 = ::Reflect_obj::callMethod(tmp31,tmp35,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(164)
					tagStringArray->push(tmp36);
				}
			}
			HX_STACK_LINE(177)
			(loopCounterPrivate1Int)++;
		}
	}
	HX_STACK_LINE(182)
	int tmp5 = tagStringArray->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(182)
	int tmp6 = this->RandomNumberGeneratorInt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(182)
	randomIndexInt = tmp6;
	HX_STACK_LINE(183)
	::String tmp7 = tagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(183)
	::String returnString = tmp7;		HX_STACK_VAR(returnString,"returnString");
	HX_STACK_LINE(184)
	::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(184)
	bool tmp9 = isGeneralBool;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(184)
	::String tmp10 = returnString;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(184)
	::ObjectTag tmp11 = ::CollectionFunction_obj::FindTagObject(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(184)
	::ObjectTag tagObject = tmp11;		HX_STACK_VAR(tagObject,"tagObject");
	HX_STACK_LINE(187)
	bool tmp12 = (_tagTypeEnum != ::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(187)
	bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(187)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(187)
	if ((tmp13)){
		HX_STACK_LINE(188)
		tmp14 = (_tagTypeEnum != ::EnumTagType_obj::ADV);
	}
	else{
		HX_STACK_LINE(187)
		tmp14 = false;
	}
	HX_STACK_LINE(187)
	bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(187)
	bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(187)
	if ((tmp15)){
		HX_STACK_LINE(189)
		tmp16 = (_tagTypeEnum != ::EnumTagType_obj::VERB_INTRANSITIVE);
	}
	else{
		HX_STACK_LINE(187)
		tmp16 = false;
	}
	HX_STACK_LINE(187)
	bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(187)
	if ((tmp16)){
		HX_STACK_LINE(190)
		tmp17 = (_tagTypeEnum != ::EnumTagType_obj::VERB_TRANSITIVE);
	}
	else{
		HX_STACK_LINE(187)
		tmp17 = false;
	}
	HX_STACK_LINE(186)
	if ((tmp17)){
		HX_STACK_LINE(193)
		bool tmp18 = (tagObject != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(193)
		if ((tmp18)){
			HX_STACK_LINE(195)
			int tmp19 = tagObject->GetCompanyWordStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(195)
			bool tmp20 = (tmp19 > (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(195)
			if ((tmp20)){
				HX_STACK_LINE(197)
				Float tmp21 = ::Math_obj::random();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(197)
				int tmp22 = tagObject->GetCompanyWordStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(197)
				Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(197)
				int tmp24 = ::Math_obj::floor(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(197)
				Dynamic tmp25 = tagObject->GetCompanyWordStructArray()->__GetItem(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(197)
				Dynamic companyWordStruct = tmp25;		HX_STACK_VAR(companyWordStruct,"companyWordStruct");
				HX_STACK_LINE(198)
				Array< ::String > companyWordStringArray = companyWordStruct->__Field(HX_HCSTRING("stringString","\x82","\xb8","\x88","\xa8"), hx::paccDynamic )->__Field(HX_HCSTRING("split","\xda","\xea","\x6e","\x81"), hx::paccDynamic )(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(companyWordStringArray,"companyWordStringArray");
				HX_STACK_LINE(199)
				::String companyWordString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(companyWordString,"companyWordString");
				HX_STACK_LINE(200)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(201)
				while((true)){
					HX_STACK_LINE(201)
					bool tmp26 = (loopCounter1Int < companyWordStringArray->length);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(201)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(201)
					if ((tmp27)){
						HX_STACK_LINE(201)
						break;
					}
					HX_STACK_LINE(204)
					::String tmp28 = companyWordStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(204)
					::String tmp29 = tmp28.substring((int)0,(int)1);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(204)
					::String tmp30 = tmp29.toUpperCase();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(205)
					::String tmp31 = companyWordStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(205)
					::String tmp32 = companyWordStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(205)
					int tmp33 = tmp32.length;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(205)
					::String tmp34 = tmp31.substring((int)1,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(205)
					::String tmp35 = tmp34.toLowerCase();		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(204)
					::String tmp36 = (tmp30 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(203)
					companyWordStringArray[loopCounter1Int] = tmp36;
					HX_STACK_LINE(206)
					bool tmp37 = (loopCounter1Int == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(206)
					if ((tmp37)){
						HX_STACK_LINE(206)
						::String tmp38 = companyWordString;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(206)
						::String tmp39 = companyWordStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(206)
						::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(206)
						companyWordString = tmp40;
					}
					else{
						HX_STACK_LINE(207)
						::String tmp38 = (companyWordString + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(207)
						::String tmp39 = companyWordStringArray->__get(loopCounter1Int);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(207)
						::String tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(207)
						companyWordString = tmp40;
					}
					HX_STACK_LINE(209)
					(loopCounter1Int)++;
				}
				HX_STACK_LINE(213)
				bool tmp26 = (companyWordStruct->__Field(HX_HCSTRING("companyWordPositionEnum","\x91","\x10","\x19","\x46"), hx::paccDynamic ) == ::EnumCompanyWordPosition_obj::PRE);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(213)
				if ((tmp26)){
					HX_STACK_LINE(213)
					::String tmp27 = (companyWordString + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(213)
					::String tmp28 = returnString;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(213)
					::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(213)
					returnString = tmp29;
				}
				else{
					HX_STACK_LINE(214)
					bool tmp27 = (companyWordStruct->__Field(HX_HCSTRING("companyWordPositionEnum","\x91","\x10","\x19","\x46"), hx::paccDynamic ) == ::EnumCompanyWordPosition_obj::SUF);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(214)
					if ((tmp27)){
						HX_STACK_LINE(214)
						::String tmp28 = (returnString + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(214)
						::String tmp29 = companyWordString;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(214)
						::String tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(214)
						returnString = tmp30;
					}
				}
			}
		}
	}
	HX_STACK_LINE(221)
	::String tmp18 = returnString;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(221)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectGeneratorSentence_obj,AddWordString,return )

Dynamic ObjectGeneratorSentence_obj::DetermineProperCallbackFunction( ::EnumTagTypeSub _tagTypeSubEnum,::ObjectTag _tagObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","DetermineProperCallbackFunction",0xbc8dd089,"ObjectGeneratorSentence.DetermineProperCallbackFunction","ObjectGeneratorSentence.hx",229,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_tagTypeSubEnum,"_tagTypeSubEnum")
	HX_STACK_ARG(_tagObject,"_tagObject")
	HX_STACK_LINE(230)
	bool tmp = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::ADJ);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	if ((tmp)){
		HX_STACK_LINE(230)
		Dynamic tmp1 = _tagObject->GetAdjectiveString_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(230)
		return tmp1;
	}
	else{
		HX_STACK_LINE(231)
		bool tmp1 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::ADV);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(231)
			Dynamic tmp2 = _tagObject->GetAdverbString_dyn();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(231)
			return tmp2;
		}
		else{
			HX_STACK_LINE(232)
			bool tmp2 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(232)
			if ((tmp2)){
				HX_STACK_LINE(232)
				Dynamic tmp3 = _tagObject->GetNounString_dyn();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(232)
				return tmp3;
			}
			else{
				HX_STACK_LINE(233)
				bool tmp3 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_POS);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(233)
				if ((tmp3)){
					HX_STACK_LINE(233)
					Dynamic tmp4 = _tagObject->GetNounPosString_dyn();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(233)
					return tmp4;
				}
				else{
					HX_STACK_LINE(234)
					bool tmp4 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_S);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(234)
					if ((tmp4)){
						HX_STACK_LINE(234)
						Dynamic tmp5 = _tagObject->GetNounSString_dyn();		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(234)
						return tmp5;
					}
					else{
						HX_STACK_LINE(235)
						bool tmp5 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::NOUN_S_POS);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(235)
						if ((tmp5)){
							HX_STACK_LINE(235)
							Dynamic tmp6 = _tagObject->GetNounSPosString_dyn();		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(235)
							return tmp6;
						}
						else{
							HX_STACK_LINE(236)
							bool tmp6 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_1);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(236)
							if ((tmp6)){
								HX_STACK_LINE(236)
								Dynamic tmp7 = _tagObject->GetVerb1String_dyn();		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(236)
								return tmp7;
							}
							else{
								HX_STACK_LINE(237)
								bool tmp7 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_2);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(237)
								if ((tmp7)){
									HX_STACK_LINE(237)
									Dynamic tmp8 = _tagObject->GetVerb2String_dyn();		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(237)
									return tmp8;
								}
								else{
									HX_STACK_LINE(238)
									bool tmp8 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_3);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(238)
									if ((tmp8)){
										HX_STACK_LINE(238)
										Dynamic tmp9 = _tagObject->GetVerb3String_dyn();		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(238)
										return tmp9;
									}
									else{
										HX_STACK_LINE(239)
										bool tmp9 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_ING);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(239)
										if ((tmp9)){
											HX_STACK_LINE(239)
											Dynamic tmp10 = _tagObject->GetVerbIngString_dyn();		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(239)
											return tmp10;
										}
										else{
											HX_STACK_LINE(240)
											bool tmp10 = (_tagTypeSubEnum == ::EnumTagTypeSub_obj::VERB_S);		HX_STACK_VAR(tmp10,"tmp10");
											HX_STACK_LINE(240)
											if ((tmp10)){
												HX_STACK_LINE(240)
												Dynamic tmp11 = _tagObject->GetVerbSString_dyn();		HX_STACK_VAR(tmp11,"tmp11");
												HX_STACK_LINE(240)
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
	HX_STACK_LINE(241)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectGeneratorSentence_obj,DetermineProperCallbackFunction,return )

::String ObjectGeneratorSentence_obj::GenerateSentenceString( ::String _patternString){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentenceString",0x814dcb60,"ObjectGeneratorSentence.GenerateSentenceString","ObjectGeneratorSentence.hx",243,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_patternString,"_patternString")
	HX_STACK_LINE(244)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(245)
	::String patternString = _patternString;		HX_STACK_VAR(patternString,"patternString");
	HX_STACK_LINE(246)
	::String sentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(sentenceString,"sentenceString");
	HX_STACK_LINE(247)
	while((true)){
		HX_STACK_LINE(247)
		bool tmp = (loopCounter1Int < patternString.length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(247)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		if ((tmp1)){
			HX_STACK_LINE(247)
			break;
		}
		HX_STACK_LINE(248)
		::String codeString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(codeString,"codeString");
		HX_STACK_LINE(249)
		Array< ::String > codeStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("2","\x32","\x00","\x00","\x00")).Add(HX_HCSTRING("3","\x33","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("5","\x35","\x00","\x00","\x00")).Add(HX_HCSTRING("6","\x36","\x00","\x00","\x00")).Add(HX_HCSTRING("7","\x37","\x00","\x00","\x00")).Add(HX_HCSTRING("8","\x38","\x00","\x00","\x00")).Add(HX_HCSTRING("9","\x39","\x00","\x00","\x00")).Add(HX_HCSTRING("0","\x30","\x00","\x00","\x00")).Add(HX_HCSTRING("A","\x41","\x00","\x00","\x00")).Add(HX_HCSTRING("B","\x42","\x00","\x00","\x00")).Add(HX_HCSTRING("C","\x43","\x00","\x00","\x00")).Add(HX_HCSTRING("D","\x44","\x00","\x00","\x00")).Add(HX_HCSTRING("E","\x45","\x00","\x00","\x00")).Add(HX_HCSTRING("F","\x46","\x00","\x00","\x00"));		HX_STACK_VAR(codeStringArray,"codeStringArray");
		HX_STACK_LINE(250)
		int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(250)
		int tmp3 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		::String tmp4 = patternString.substring(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		::String scan1String = tmp4;		HX_STACK_VAR(scan1String,"scan1String");
		HX_STACK_LINE(251)
		::String tmp5 = scan1String;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		int tmp6 = codeStringArray->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		bool tmp7 = (tmp6 > (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(251)
		if ((tmp7)){
			HX_STACK_LINE(252)
			int tmp8 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			int tmp9 = (loopCounter1Int + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			::String tmp10 = patternString.substring(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(252)
			::String scan2String = tmp10;		HX_STACK_VAR(scan2String,"scan2String");
			HX_STACK_LINE(253)
			::String tmp11 = scan2String;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(253)
			int tmp12 = codeStringArray->indexOf(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(253)
			bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(253)
			if ((tmp13)){
				HX_STACK_LINE(254)
				::String tmp14 = (scan1String + scan2String);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(254)
				codeString = tmp14;
				HX_STACK_LINE(255)
				hx::AddEq(loopCounter1Int,(int)2);
			}
			else{
				HX_STACK_LINE(257)
				(loopCounter1Int)++;
			}
		}
		else{
			HX_STACK_LINE(259)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(260)
		::String wordString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(wordString,"wordString");
		HX_STACK_LINE(293)
		bool tmp8 = (codeString == HX_HCSTRING("11","\xe0","\x2a","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(293)
		if ((tmp8)){
			HX_STACK_LINE(294)
			::String tmp9 = this->AddWordString(::EnumTagType_obj::ADJ,::EnumTagTypeSub_obj::ADJ);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(294)
			wordString = tmp9;
		}
		else{
			HX_STACK_LINE(296)
			bool tmp9 = (codeString == HX_HCSTRING("22","\xc0","\x2b","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(296)
			if ((tmp9)){
				HX_STACK_LINE(297)
				::String tmp10 = this->AddWordString(::EnumTagType_obj::ADV,::EnumTagTypeSub_obj::ADV);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(297)
				wordString = tmp10;
			}
			else{
				HX_STACK_LINE(299)
				bool tmp10 = (codeString == HX_HCSTRING("33","\xa0","\x2c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(299)
				if ((tmp10)){
					HX_STACK_LINE(300)
					::String tmp11 = this->AddWordString(::EnumTagType_obj::NOUN_ALIVE_ABSTRACT,::EnumTagTypeSub_obj::NOUN);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(300)
					wordString = tmp11;
				}
				else{
					HX_STACK_LINE(302)
					bool tmp11 = (codeString == HX_HCSTRING("43","\x7f","\x2d","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(302)
					if ((tmp11)){
						HX_STACK_LINE(303)
						Array< ::String > _43TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_43TagStringArray,"_43TagStringArray");
						HX_STACK_LINE(304)
						int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(305)
						int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
						HX_STACK_LINE(306)
						while((true)){
							HX_STACK_LINE(306)
							int tmp12 = loopCounter2Int;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(306)
							::ObjectVisitor tmp13 = this->visitorObject;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(306)
							int tmp14 = tmp13->GetTagObjectArray()->length;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(306)
							bool tmp15 = (tmp12 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(306)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(306)
							if ((tmp16)){
								HX_STACK_LINE(306)
								break;
							}
							HX_STACK_LINE(307)
							::ObjectVisitor tmp17 = this->visitorObject;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(307)
							::ObjectTag tmp18 = tmp17->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(307)
							::EnumTagType tmp19 = tmp18->GetTypeEnum();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(307)
							bool tmp20 = (tmp19 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(307)
							if ((tmp20)){
								HX_STACK_LINE(308)
								::ObjectVisitor tmp21 = this->visitorObject;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(308)
								::ObjectTag tmp22 = tmp21->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(308)
								::String tmp23 = tmp22->GetNounString();		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(308)
								_43TagStringArray->push(tmp23);
							}
							HX_STACK_LINE(310)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(312)
						bool tmp12 = (_43TagStringArray->length == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(312)
						if ((tmp12)){
							HX_STACK_LINE(313)
							loopCounter2Int = (int)0;
							HX_STACK_LINE(314)
							while((true)){
								HX_STACK_LINE(314)
								int tmp13 = loopCounter2Int;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(314)
								::CollectionGlobal tmp14 = this->collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(314)
								int tmp15 = tmp14->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(314)
								bool tmp16 = (tmp13 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(314)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(314)
								if ((tmp17)){
									HX_STACK_LINE(314)
									break;
								}
								HX_STACK_LINE(315)
								::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(315)
								::ObjectTag tmp19 = tmp18->GetTagGeneralObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(315)
								::EnumTagType tmp20 = tmp19->GetTypeEnum();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(315)
								bool tmp21 = (tmp20 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(315)
								if ((tmp21)){
									HX_STACK_LINE(316)
									::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(316)
									::ObjectTag tmp23 = tmp22->GetTagGeneralObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(316)
									::String tmp24 = tmp23->GetNounString();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(316)
									_43TagStringArray->push(tmp24);
								}
								HX_STACK_LINE(318)
								(loopCounter2Int)++;
							}
						}
						HX_STACK_LINE(321)
						int tmp13 = _43TagStringArray->length;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(321)
						int tmp14 = this->RandomNumberGeneratorInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(321)
						randomIndexInt = tmp14;
						HX_STACK_LINE(322)
						::ObjectVisitor tmp15 = this->visitorObject;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(322)
						::String tmp16 = tmp15->GetNameString();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(322)
						bool tmp17 = (tmp16 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(322)
						if ((tmp17)){
							HX_STACK_LINE(323)
							::String tmp18 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(323)
							wordString = tmp18;
						}
						else{
							HX_STACK_LINE(325)
							::ObjectVisitor tmp18 = this->visitorObject;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(325)
							::String tmp19 = tmp18->GetNameString();		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(325)
							bool tmp20 = (tmp19 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(325)
							if ((tmp20)){
								HX_STACK_LINE(326)
								Float tmp21 = ::Math_obj::random();		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(326)
								bool tmp22 = (tmp21 > ((Float)0.5));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(326)
								if ((tmp22)){
									HX_STACK_LINE(327)
									::ObjectVisitor tmp23 = this->visitorObject;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(327)
									::String tmp24 = tmp23->GetNameString();		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(327)
									wordString = tmp24;
								}
								else{
									HX_STACK_LINE(329)
									::String tmp23 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(329)
									wordString = tmp23;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(332)
						bool tmp12 = (codeString == HX_HCSTRING("65","\x3f","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(332)
						if ((tmp12)){
							HX_STACK_LINE(333)
							::String tmp13 = this->AddWordString(::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE,::EnumTagTypeSub_obj::NOUN_S);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(333)
							wordString = tmp13;
						}
						else{
							HX_STACK_LINE(335)
							bool tmp13 = (codeString == HX_HCSTRING("93","\xda","\x31","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(335)
							if ((tmp13)){
								HX_STACK_LINE(336)
								::String tmp14 = this->AddWordString(::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER,::EnumTagTypeSub_obj::NOUN);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(336)
								wordString = tmp14;
							}
							else{
								HX_STACK_LINE(338)
								bool tmp14 = (codeString == HX_HCSTRING("A3","\xd2","\x38","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(338)
								if ((tmp14)){
									HX_STACK_LINE(339)
									::String tmp15 = this->AddWordString(::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE,::EnumTagTypeSub_obj::NOUN);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(339)
									wordString = tmp15;
								}
								else{
									HX_STACK_LINE(341)
									bool tmp15 = (codeString == HX_HCSTRING("E7","\x52","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(341)
									if ((tmp15)){
										HX_STACK_LINE(342)
										::String tmp16 = this->AddWordString(::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_1);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(342)
										wordString = tmp16;
									}
									else{
										HX_STACK_LINE(344)
										bool tmp16 = (codeString == HX_HCSTRING("E8","\x53","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(344)
										if ((tmp16)){
											HX_STACK_LINE(345)
											::String tmp17 = this->AddWordString(::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_2);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(345)
											wordString = tmp17;
										}
										else{
											HX_STACK_LINE(347)
											bool tmp17 = (codeString == HX_HCSTRING("EA","\x5c","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(347)
											if ((tmp17)){
												HX_STACK_LINE(348)
												::String tmp18 = this->AddWordString(::EnumTagType_obj::VERB_INTRANSITIVE,::EnumTagTypeSub_obj::VERB_S);		HX_STACK_VAR(tmp18,"tmp18");
												HX_STACK_LINE(348)
												wordString = tmp18;
											}
											else{
												HX_STACK_LINE(351)
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
		}
		HX_STACK_LINE(353)
		::String tmp9 = (sentenceString + wordString);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(353)
		sentenceString = tmp9;
	}
	HX_STACK_LINE(355)
	::String tmp = sentenceString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,GenerateSentenceString,return )

int ObjectGeneratorSentence_obj::RandomNumberGeneratorInt( int _randomNumberInt){
	HX_STACK_FRAME("ObjectGeneratorSentence","RandomNumberGeneratorInt",0xb4d8c4df,"ObjectGeneratorSentence.RandomNumberGeneratorInt","ObjectGeneratorSentence.hx",357,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_randomNumberInt,"_randomNumberInt")
	HX_STACK_LINE(357)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	int tmp1 = (_randomNumberInt - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(357)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(357)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,RandomNumberGeneratorInt,return )

::String ObjectGeneratorSentence_obj::WordFixString( ::String _fixString){
	HX_STACK_FRAME("ObjectGeneratorSentence","WordFixString",0x1c1734c5,"ObjectGeneratorSentence.WordFixString","ObjectGeneratorSentence.hx",358,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fixString,"_fixString")
	HX_STACK_LINE(359)
	::String tmp = _fixString.substring((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(359)
	::String tmp1 = tmp.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(359)
	::String fix1String = tmp1;		HX_STACK_VAR(fix1String,"fix1String");
	HX_STACK_LINE(360)
	int tmp2 = _fixString.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(360)
	::String tmp3 = _fixString.substring((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(360)
	::String fix2String = tmp3;		HX_STACK_VAR(fix2String,"fix2String");
	HX_STACK_LINE(361)
	::String tmp4 = (fix1String + fix2String);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(361)
	::String fix3String = tmp4;		HX_STACK_VAR(fix3String,"fix3String");
	HX_STACK_LINE(362)
	::String tmp5 = fix3String;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(362)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,WordFixString,return )

::String ObjectGeneratorSentence_obj::GenerateSentence3String( ::CollectionGlobal collectionGlobalObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentence3String",0x6b0ab815,"ObjectGeneratorSentence.GenerateSentence3String","ObjectGeneratorSentence.hx",364,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(collectionGlobalObject,"collectionGlobalObject")
	HX_STACK_LINE(365)
	Array< ::Dynamic > patternStringArray2D = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(patternStringArray2D,"patternStringArray2D");
	HX_STACK_LINE(366)
	patternStringArray2D = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("43 Owns 93...","\x82","\x7a","\x29","\xc6")).Add(HX_HCSTRING("43 EA On The 93.","\xc7","\x60","\xd5","\xab")).Add(HX_HCSTRING("The 33 EA Again.","\xe1","\x3b","\xae","\x56"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("A3.","\x1c","\x7f","\x31","\x00")).Add(HX_HCSTRING("43 EA 22.","\x2b","\x73","\xbd","\x89")).Add(HX_HCSTRING("Into The 93.","\x65","\xca","\xd4","\x54"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("A3 EA 22.","\x38","\xc8","\xff","\x3f")).Add(HX_HCSTRING("What I E8 Were 33...","\x29","\x15","\x8c","\xe7")).Add(HX_HCSTRING("Are 65 Of 93.","\x80","\x87","\x9d","\xcd")));
	HX_STACK_LINE(406)
	int tmp = patternStringArray2D->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	int tmp1 = this->RandomNumberGeneratorInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	int stringPatternIndexInt = tmp1;		HX_STACK_VAR(stringPatternIndexInt,"stringPatternIndexInt");
	HX_STACK_LINE(407)
	Array< ::String > stringPatternIndexString = patternStringArray2D->__get(stringPatternIndexInt).StaticCast< Array< ::String > >();		HX_STACK_VAR(stringPatternIndexString,"stringPatternIndexString");
	HX_STACK_LINE(408)
	::String threeSentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
	HX_STACK_LINE(409)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(410)
	while((true)){
		HX_STACK_LINE(410)
		bool tmp2 = (loopCounter1Int < (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(410)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(410)
		if ((tmp3)){
			HX_STACK_LINE(410)
			break;
		}
		HX_STACK_LINE(412)
		::String tmp4 = stringPatternIndexString->__get(loopCounter1Int);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(412)
		::String tmp5 = this->GenerateSentenceString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(412)
		::String sentenceString = tmp5;		HX_STACK_VAR(sentenceString,"sentenceString");
		HX_STACK_LINE(413)
		::String tmp6 = (threeSentenceString + sentenceString);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(413)
		::String tmp7 = (tmp6 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(413)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(413)
		threeSentenceString = tmp8;
		HX_STACK_LINE(414)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(416)
	::String tmp2 = threeSentenceString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(416)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,GenerateSentence3String,return )


ObjectGeneratorSentence_obj::ObjectGeneratorSentence_obj()
{
}

void ObjectGeneratorSentence_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectGeneratorSentence);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(visitorObject,"visitorObject");
	HX_MARK_END_CLASS();
}

void ObjectGeneratorSentence_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
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
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
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
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectGeneratorSentence_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("visitorObject","\x0d","\x0d","\x59","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectGeneratorSentence_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::ObjectVisitor*/ ,(int)offsetof(ObjectGeneratorSentence_obj,visitorObject),HX_HCSTRING("visitorObject","\x0d","\x0d","\x59","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
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

