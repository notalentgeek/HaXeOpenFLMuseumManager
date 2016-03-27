#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif

Void CollectionFunction_obj::__construct()
{
HX_STACK_FRAME("CollectionFunction","new",0x45549ba8,"CollectionFunction.new","CollectionFunction.hx",16,0xbb6e90c8)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CollectionFunction_obj::~CollectionFunction_obj() { }

Dynamic CollectionFunction_obj::__CreateEmpty() { return  new CollectionFunction_obj; }
hx::ObjectPtr< CollectionFunction_obj > CollectionFunction_obj::__new()
{  hx::ObjectPtr< CollectionFunction_obj > _result_ = new CollectionFunction_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionFunction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionFunction_obj > _result_ = new CollectionFunction_obj();
	_result_->__construct();
	return _result_;}

Void CollectionFunction_obj::ClearArray( cpp::ArrayBase _dynamicArray){
{
		HX_STACK_FRAME("CollectionFunction","ClearArray",0x62f95ea4,"CollectionFunction.ClearArray","CollectionFunction.hx",25,0xbb6e90c8)
		HX_STACK_ARG(_dynamicArray,"_dynamicArray")
		HX_STACK_LINE(28)
		int tmp = _dynamicArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(28)
		_dynamicArray->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )((int)0,tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionFunction_obj,ClearArray,(void))

::ObjectMuseum CollectionFunction_obj::FindMuseumObject( ::CollectionGlobal _collectionGlobalObject,::EnumMuseumType _enumMuseumType,::String _nameString){
	HX_STACK_FRAME("CollectionFunction","FindMuseumObject",0xae5954e2,"CollectionFunction.FindMuseumObject","CollectionFunction.hx",47,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_enumMuseumType,"_enumMuseumType")
	HX_STACK_ARG(_nameString,"_nameString")
	HX_STACK_LINE(50)
	Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
	HX_STACK_LINE(51)
	bool tmp = (_enumMuseumType == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	if ((tmp)){
		HX_STACK_LINE(52)
		tempObjectArray = _collectionGlobalObject->GetExhibitionObjectArray();
	}
	else{
		HX_STACK_LINE(55)
		bool tmp1 = (_enumMuseumType == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		if ((tmp1)){
			HX_STACK_LINE(56)
			tempObjectArray = _collectionGlobalObject->GetFloorObjectArray();
		}
		else{
			HX_STACK_LINE(59)
			bool tmp2 = (_enumMuseumType == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(59)
			if ((tmp2)){
				HX_STACK_LINE(60)
				tempObjectArray = _collectionGlobalObject->GetRoomObjectArray();
			}
		}
	}
	HX_STACK_LINE(67)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(68)
	while((true)){
		HX_STACK_LINE(68)
		bool tmp1 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		if ((tmp2)){
			HX_STACK_LINE(68)
			break;
		}
		HX_STACK_LINE(70)
		::String tmp3 = _nameString;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		::ObjectMuseum tmp4 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		Dynamic tmp5 = tmp4->GetNameStruct();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		::String tmp6 = tmp5->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		bool tmp7 = (tmp3 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		if ((tmp7)){
			HX_STACK_LINE(71)
			::ObjectMuseum tmp8 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(71)
			return tmp8;
		}
		HX_STACK_LINE(73)
		::String tmp8 = _nameString;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		::ObjectMuseum tmp9 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		Dynamic tmp10 = tmp9->GetNameStruct();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		::String tmp11 = tmp10->__Field(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		bool tmp12 = (tmp8 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(73)
		if ((tmp12)){
			HX_STACK_LINE(74)
			::ObjectMuseum tmp13 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(74)
			return tmp13;
		}
		HX_STACK_LINE(77)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(83)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CollectionFunction_obj,FindMuseumObject,return )

::ObjectTag CollectionFunction_obj::FindTagObject( ::CollectionGlobal _collectionGlobalObject,bool _isGeneral,::String _nameString){
	HX_STACK_FRAME("CollectionFunction","FindTagObject",0x91b45268,"CollectionFunction.FindTagObject","CollectionFunction.hx",99,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_isGeneral,"_isGeneral")
	HX_STACK_ARG(_nameString,"_nameString")
	HX_STACK_LINE(103)
	bool tmp = (_isGeneral == true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	if ((tmp)){
		HX_STACK_LINE(105)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(106)
		while((true)){
			HX_STACK_LINE(106)
			int tmp1 = loopCounter1Int;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(106)
			int tmp2 = _collectionGlobalObject->GetTagGeneralObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(106)
			bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(106)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(106)
			if ((tmp4)){
				HX_STACK_LINE(106)
				break;
			}
			HX_STACK_LINE(107)
			::String tmp5 = _nameString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			::ObjectTag tmp6 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			::String tmp7 = tmp6->GetNameString();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(107)
			bool tmp8 = (tmp5 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(107)
			if ((tmp8)){
				HX_STACK_LINE(107)
				::ObjectTag tmp9 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(107)
				return tmp9;
			}
			HX_STACK_LINE(108)
			::String tmp9 = _nameString;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			::ObjectTag tmp10 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(108)
			::String tmp11 = tmp10->GetAdjectiveString();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(108)
			bool tmp12 = (tmp9 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			if ((tmp12)){
				HX_STACK_LINE(108)
				::ObjectTag tmp13 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(108)
				return tmp13;
			}
			HX_STACK_LINE(109)
			::String tmp13 = _nameString;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(109)
			::ObjectTag tmp14 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(109)
			::String tmp15 = tmp14->GetAdverbString();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(109)
			bool tmp16 = (tmp13 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(109)
			if ((tmp16)){
				HX_STACK_LINE(109)
				::ObjectTag tmp17 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(109)
				return tmp17;
			}
			HX_STACK_LINE(110)
			::String tmp17 = _nameString;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(110)
			::ObjectTag tmp18 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(110)
			::String tmp19 = tmp18->GetNounPosString();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(110)
			bool tmp20 = (tmp17 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(110)
			if ((tmp20)){
				HX_STACK_LINE(110)
				::ObjectTag tmp21 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(110)
				return tmp21;
			}
			HX_STACK_LINE(111)
			::String tmp21 = _nameString;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(111)
			::ObjectTag tmp22 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(111)
			::String tmp23 = tmp22->GetNounSPosString();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(111)
			bool tmp24 = (tmp21 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(111)
			if ((tmp24)){
				HX_STACK_LINE(111)
				::ObjectTag tmp25 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(111)
				return tmp25;
			}
			HX_STACK_LINE(112)
			::String tmp25 = _nameString;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(112)
			::ObjectTag tmp26 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(112)
			::String tmp27 = tmp26->GetNounSString();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(112)
			bool tmp28 = (tmp25 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(112)
			if ((tmp28)){
				HX_STACK_LINE(112)
				::ObjectTag tmp29 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(112)
				return tmp29;
			}
			HX_STACK_LINE(113)
			::String tmp29 = _nameString;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(113)
			::ObjectTag tmp30 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(113)
			::String tmp31 = tmp30->GetNounString();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(113)
			bool tmp32 = (tmp29 == tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(113)
			if ((tmp32)){
				HX_STACK_LINE(113)
				::ObjectTag tmp33 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(113)
				return tmp33;
			}
			HX_STACK_LINE(114)
			::String tmp33 = _nameString;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(114)
			::ObjectTag tmp34 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(114)
			::String tmp35 = tmp34->GetVerb1String();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(114)
			bool tmp36 = (tmp33 == tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(114)
			if ((tmp36)){
				HX_STACK_LINE(114)
				::ObjectTag tmp37 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(114)
				return tmp37;
			}
			HX_STACK_LINE(115)
			::String tmp37 = _nameString;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(115)
			::ObjectTag tmp38 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(115)
			::String tmp39 = tmp38->GetVerb2String();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(115)
			bool tmp40 = (tmp37 == tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(115)
			if ((tmp40)){
				HX_STACK_LINE(115)
				::ObjectTag tmp41 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(115)
				return tmp41;
			}
			HX_STACK_LINE(116)
			::String tmp41 = _nameString;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(116)
			::ObjectTag tmp42 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(116)
			::String tmp43 = tmp42->GetVerb3String();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(116)
			bool tmp44 = (tmp41 == tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(116)
			if ((tmp44)){
				HX_STACK_LINE(116)
				::ObjectTag tmp45 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(116)
				return tmp45;
			}
			HX_STACK_LINE(117)
			::String tmp45 = _nameString;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(117)
			::ObjectTag tmp46 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(117)
			::String tmp47 = tmp46->GetVerbIngString();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(117)
			bool tmp48 = (tmp45 == tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(117)
			if ((tmp48)){
				HX_STACK_LINE(117)
				::ObjectTag tmp49 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(117)
				return tmp49;
			}
			HX_STACK_LINE(118)
			::String tmp49 = _nameString;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(118)
			::ObjectTag tmp50 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(118)
			::String tmp51 = tmp50->GetVerbSString();		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(118)
			bool tmp52 = (tmp49 == tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(118)
			if ((tmp52)){
				HX_STACK_LINE(118)
				::ObjectTag tmp53 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(118)
				return tmp53;
			}
			HX_STACK_LINE(119)
			(loopCounter1Int)++;
		}
	}
	else{
		HX_STACK_LINE(123)
		bool tmp1 = (_isGeneral == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp1)){
			HX_STACK_LINE(125)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(126)
				int tmp3 = _collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(126)
				if ((tmp5)){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(127)
				::String tmp6 = _nameString;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(127)
				::ObjectTag tmp7 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(127)
				::String tmp8 = tmp7->GetNameString();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(127)
				bool tmp9 = (tmp6 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(127)
				if ((tmp9)){
					HX_STACK_LINE(127)
					::ObjectTag tmp10 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(127)
					return tmp10;
				}
				HX_STACK_LINE(128)
				::String tmp10 = _nameString;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(128)
				::ObjectTag tmp11 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(128)
				::String tmp12 = tmp11->GetAdjectiveString();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(128)
				bool tmp13 = (tmp10 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(128)
				if ((tmp13)){
					HX_STACK_LINE(128)
					::ObjectTag tmp14 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(128)
					return tmp14;
				}
				HX_STACK_LINE(129)
				::String tmp14 = _nameString;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(129)
				::ObjectTag tmp15 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(129)
				::String tmp16 = tmp15->GetAdverbString();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(129)
				bool tmp17 = (tmp14 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(129)
				if ((tmp17)){
					HX_STACK_LINE(129)
					::ObjectTag tmp18 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(129)
					return tmp18;
				}
				HX_STACK_LINE(130)
				::String tmp18 = _nameString;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(130)
				::ObjectTag tmp19 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(130)
				::String tmp20 = tmp19->GetNounPosString();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(130)
				bool tmp21 = (tmp18 == tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(130)
				if ((tmp21)){
					HX_STACK_LINE(130)
					::ObjectTag tmp22 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(130)
					return tmp22;
				}
				HX_STACK_LINE(131)
				::String tmp22 = _nameString;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(131)
				::ObjectTag tmp23 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(131)
				::String tmp24 = tmp23->GetNounSPosString();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(131)
				bool tmp25 = (tmp22 == tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(131)
				if ((tmp25)){
					HX_STACK_LINE(131)
					::ObjectTag tmp26 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(131)
					return tmp26;
				}
				HX_STACK_LINE(132)
				::String tmp26 = _nameString;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(132)
				::ObjectTag tmp27 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(132)
				::String tmp28 = tmp27->GetNounSString();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(132)
				bool tmp29 = (tmp26 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(132)
				if ((tmp29)){
					HX_STACK_LINE(132)
					::ObjectTag tmp30 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(132)
					return tmp30;
				}
				HX_STACK_LINE(133)
				::String tmp30 = _nameString;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(133)
				::ObjectTag tmp31 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(133)
				::String tmp32 = tmp31->GetNounString();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(133)
				bool tmp33 = (tmp30 == tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(133)
				if ((tmp33)){
					HX_STACK_LINE(133)
					::ObjectTag tmp34 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(133)
					return tmp34;
				}
				HX_STACK_LINE(134)
				::String tmp34 = _nameString;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(134)
				::ObjectTag tmp35 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(134)
				::String tmp36 = tmp35->GetVerb1String();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(134)
				bool tmp37 = (tmp34 == tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(134)
				if ((tmp37)){
					HX_STACK_LINE(134)
					::ObjectTag tmp38 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(134)
					return tmp38;
				}
				HX_STACK_LINE(135)
				::String tmp38 = _nameString;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(135)
				::ObjectTag tmp39 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(135)
				::String tmp40 = tmp39->GetVerb2String();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(135)
				bool tmp41 = (tmp38 == tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(135)
				if ((tmp41)){
					HX_STACK_LINE(135)
					::ObjectTag tmp42 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(135)
					return tmp42;
				}
				HX_STACK_LINE(136)
				::String tmp42 = _nameString;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(136)
				::ObjectTag tmp43 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(136)
				::String tmp44 = tmp43->GetVerb3String();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(136)
				bool tmp45 = (tmp42 == tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(136)
				if ((tmp45)){
					HX_STACK_LINE(136)
					::ObjectTag tmp46 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(136)
					return tmp46;
				}
				HX_STACK_LINE(137)
				::String tmp46 = _nameString;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(137)
				::ObjectTag tmp47 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(137)
				::String tmp48 = tmp47->GetVerbIngString();		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(137)
				bool tmp49 = (tmp46 == tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(137)
				if ((tmp49)){
					HX_STACK_LINE(137)
					::ObjectTag tmp50 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(137)
					return tmp50;
				}
				HX_STACK_LINE(138)
				::String tmp50 = _nameString;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(138)
				::ObjectTag tmp51 = _collectionGlobalObject->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(138)
				::String tmp52 = tmp51->GetVerbSString();		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(138)
				bool tmp53 = (tmp50 == tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(138)
				if ((tmp53)){
					HX_STACK_LINE(138)
					::ObjectTag tmp54 = _collectionGlobalObject->GetTagGeneralObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(138)
					return tmp54;
				}
				HX_STACK_LINE(139)
				(loopCounter1Int)++;
			}
		}
	}
	HX_STACK_LINE(146)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CollectionFunction_obj,FindTagObject,return )

::ObjectVisitor CollectionFunction_obj::FindVisitorObject( ::CollectionGlobal _collectionGlobalObject,::String _nameString){
	HX_STACK_FRAME("CollectionFunction","FindVisitorObject",0x5dfbd63c,"CollectionFunction.FindVisitorObject","CollectionFunction.hx",161,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_nameString,"_nameString")
	HX_STACK_LINE(163)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(164)
	while((true)){
		HX_STACK_LINE(164)
		int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		int tmp1 = _collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		if ((tmp3)){
			HX_STACK_LINE(164)
			break;
		}
		HX_STACK_LINE(165)
		::String tmp4 = _nameString;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		::ObjectVisitor tmp5 = _collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		::String tmp6 = tmp5->GetNameString();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(165)
		bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(165)
		if ((tmp7)){
			HX_STACK_LINE(166)
			::ObjectVisitor tmp8 = _collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(166)
			return tmp8;
		}
		HX_STACK_LINE(168)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(170)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,FindVisitorObject,return )

bool CollectionFunction_obj::IsExistInArrayBool( cpp::ArrayBase _dynamicArray,Dynamic _dynamicElement){
	HX_STACK_FRAME("CollectionFunction","IsExistInArrayBool",0xae352629,"CollectionFunction.IsExistInArrayBool","CollectionFunction.hx",184,0xbb6e90c8)
	HX_STACK_ARG(_dynamicArray,"_dynamicArray")
	HX_STACK_ARG(_dynamicElement,"_dynamicElement")
	HX_STACK_LINE(186)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(187)
	while((true)){
		HX_STACK_LINE(187)
		bool tmp = (loopCounter1Int < _dynamicArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(187)
			break;
		}
		HX_STACK_LINE(188)
		Dynamic tmp2 = _dynamicArray->__GetItem(loopCounter1Int);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(188)
		Dynamic tmp3 = _dynamicElement;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		if ((tmp4)){
			HX_STACK_LINE(188)
			return true;
		}
		HX_STACK_LINE(189)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(191)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,IsExistInArrayBool,return )

Dynamic CollectionFunction_obj::PickRandomFromArrayT( cpp::ArrayBase _tArray){
	HX_STACK_FRAME("CollectionFunction","PickRandomFromArrayT",0xe8ee2c61,"CollectionFunction.PickRandomFromArrayT","CollectionFunction.hx",202,0xbb6e90c8)
	HX_STACK_ARG(_tArray,"_tArray")
	HX_STACK_LINE(204)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(204)
	int tmp1 = (_tArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(204)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(204)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(204)
	int randomInt = tmp3;		HX_STACK_VAR(randomInt,"randomInt");
	HX_STACK_LINE(205)
	Dynamic tmp4 = _tArray->__GetItem(randomInt);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(205)
	Dynamic elementT = tmp4;		HX_STACK_VAR(elementT,"elementT");
	HX_STACK_LINE(206)
	Dynamic tmp5 = elementT;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(206)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionFunction_obj,PickRandomFromArrayT,return )

Array< ::Dynamic > CollectionFunction_obj::PickRandomTagObjectArray( ::CollectionGlobal _collectionGlobalObject){
	HX_STACK_FRAME("CollectionFunction","PickRandomTagObjectArray",0x47ed4edc,"CollectionFunction.PickRandomTagObjectArray","CollectionFunction.hx",219,0xbb6e90c8)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_LINE(222)
	Array< ::Dynamic > tempTagObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempTagObjectArray,"tempTagObjectArray");
	HX_STACK_LINE(225)
	Float chanceFloat = ((Float)1.0);		HX_STACK_VAR(chanceFloat,"chanceFloat");
	HX_STACK_LINE(227)
	while((true)){
		HX_STACK_LINE(227)
		Float tmp = chanceFloat;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		Float tmp1 = ::Math_obj::random();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		if ((tmp3)){
			HX_STACK_LINE(227)
			break;
		}
		HX_STACK_LINE(229)
		Float tmp4 = ::Math_obj::random();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(229)
		int tmp5 = _collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(229)
		int tmp6 = (tmp5 - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(229)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(229)
		int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(229)
		int randomIndexInt = tmp8;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
		HX_STACK_LINE(230)
		while((true)){
			HX_STACK_LINE(230)
			::ObjectTag tmp9 = _collectionGlobalObject->GetTagObjectArray()->__get(randomIndexInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(230)
			int tmp10 = tempTagObjectArray->indexOf(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(230)
			bool tmp11 = (tmp10 > (int)-1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(230)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(230)
			if ((tmp12)){
				HX_STACK_LINE(230)
				break;
			}
			HX_STACK_LINE(231)
			Float tmp13 = ::Math_obj::random();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(231)
			int tmp14 = _collectionGlobalObject->GetTagObjectArray()->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(231)
			int tmp15 = (tmp14 - (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(231)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(231)
			int tmp17 = ::Math_obj::round(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(231)
			randomIndexInt = tmp17;
		}
		HX_STACK_LINE(233)
		::ObjectTag tmp9 = _collectionGlobalObject->GetTagObjectArray()->__get(randomIndexInt).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(233)
		tempTagObjectArray->push(tmp9);
		HX_STACK_LINE(238)
		hx::SubEq(chanceFloat,((Float)0.05));
	}
	HX_STACK_LINE(242)
	return tempTagObjectArray;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionFunction_obj,PickRandomTagObjectArray,return )

Float CollectionFunction_obj::GenerateGreatestCommonDivisorFloat( Float _number1Float,Float _number2Float){
	HX_STACK_FRAME("CollectionFunction","GenerateGreatestCommonDivisorFloat",0x3f62c60f,"CollectionFunction.GenerateGreatestCommonDivisorFloat","CollectionFunction.hx",257,0xbb6e90c8)
	HX_STACK_ARG(_number1Float,"_number1Float")
	HX_STACK_ARG(_number2Float,"_number2Float")
	HX_STACK_LINE(259)
	bool tmp = (_number2Float == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	if ((tmp)){
		HX_STACK_LINE(259)
		Float tmp1 = _number1Float;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(259)
		return tmp1;
	}
	else{
		HX_STACK_LINE(263)
		Float tmp1 = _number2Float;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(263)
		Float tmp2 = hx::Mod(_number1Float,_number2Float);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(262)
		Float tmp3 = ::CollectionFunction_obj::GenerateGreatestCommonDivisorFloat(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		return tmp3;
	}
	HX_STACK_LINE(259)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,GenerateGreatestCommonDivisorFloat,return )

Float CollectionFunction_obj::GenerateLeastCommonMultipleFloat( Float _number1Float,Float _number2Float){
	HX_STACK_FRAME("CollectionFunction","GenerateLeastCommonMultipleFloat",0xeb3d0685,"CollectionFunction.GenerateLeastCommonMultipleFloat","CollectionFunction.hx",281,0xbb6e90c8)
	HX_STACK_ARG(_number1Float,"_number1Float")
	HX_STACK_ARG(_number2Float,"_number2Float")
	HX_STACK_LINE(283)
	Float tmp = (_number1Float * _number2Float);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	Float tmp1 = _number1Float;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	Float tmp2 = _number2Float;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	Float tmp3 = ::CollectionFunction_obj::GenerateGreatestCommonDivisorFloat(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(283)
	Float tmp4 = (Float(tmp) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(283)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionFunction_obj,GenerateLeastCommonMultipleFloat,return )


CollectionFunction_obj::CollectionFunction_obj()
{
}

bool CollectionFunction_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ClearArray") ) { outValue = ClearArray_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FindTagObject") ) { outValue = FindTagObject_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"FindMuseumObject") ) { outValue = FindMuseumObject_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"FindVisitorObject") ) { outValue = FindVisitorObject_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"IsExistInArrayBool") ) { outValue = IsExistInArrayBool_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"PickRandomFromArrayT") ) { outValue = PickRandomFromArrayT_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"PickRandomTagObjectArray") ) { outValue = PickRandomTagObjectArray_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"GenerateLeastCommonMultipleFloat") ) { outValue = GenerateLeastCommonMultipleFloat_dyn(); return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"GenerateGreatestCommonDivisorFloat") ) { outValue = GenerateGreatestCommonDivisorFloat_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionFunction_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionFunction_obj::__mClass,"__mClass");
};

#endif

hx::Class CollectionFunction_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ClearArray","\xec","\xb0","\x4a","\xf1"),
	HX_HCSTRING("FindMuseumObject","\x2a","\x8d","\x7d","\xe1"),
	HX_HCSTRING("FindTagObject","\x20","\x9d","\x19","\x6f"),
	HX_HCSTRING("FindVisitorObject","\xf4","\xdc","\x88","\xea"),
	HX_HCSTRING("IsExistInArrayBool","\x71","\x00","\x0e","\x1d"),
	HX_HCSTRING("PickRandomFromArrayT","\xa9","\x28","\x68","\x63"),
	HX_HCSTRING("PickRandomTagObjectArray","\x24","\x0f","\xef","\x61"),
	HX_HCSTRING("GenerateGreatestCommonDivisorFloat","\x57","\xb0","\xa2","\x53"),
	HX_HCSTRING("GenerateLeastCommonMultipleFloat","\xcd","\x4e","\xe4","\xd0"),
	::String(null()) };

void CollectionFunction_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionFunction","\xb6","\xe7","\x2b","\xda");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CollectionFunction_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CollectionFunction_obj >;
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

