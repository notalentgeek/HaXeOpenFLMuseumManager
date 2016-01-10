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
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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

::String ObjectGeneratorSentence_obj::GenerateSentenceString( ::CollectionGlobal _collectionGlobalObject,::String _patternString,::ObjectVisitor _visitorObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentenceString",0x814dcb60,"ObjectGeneratorSentence.GenerateSentenceString","ObjectGeneratorSentence.hx",5,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_patternString,"_patternString")
	HX_STACK_ARG(_visitorObject,"_visitorObject")
	HX_STACK_LINE(6)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(7)
	::String patternString = _patternString;		HX_STACK_VAR(patternString,"patternString");
	HX_STACK_LINE(8)
	::String sentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(sentenceString,"sentenceString");
	HX_STACK_LINE(9)
	cpp::ArrayBase tagStructArray = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(tagStructArray,"tagStructArray");
	HX_STACK_LINE(10)
	{
		HX_STACK_LINE(10)
		cpp::ArrayBase _g = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(10)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		{
			HX_STACK_LINE(10)
			::haxe::ds::ObjectMap tmp1 = _visitorObject->GetTagStructMap();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(10)
			::haxe::IMap this1 = tmp1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(10)
			tmp = this1->keys();
		}
		HX_STACK_LINE(10)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
			Dynamic k = __it->next();
			{
				HX_STACK_LINE(10)
				Dynamic tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(10)
				_g->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
			}
;
		}
		HX_STACK_LINE(10)
		tagStructArray = _g;
	}
	HX_STACK_LINE(12)
	while((true)){
		HX_STACK_LINE(12)
		bool tmp = (loopCounter1Int < patternString.length);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(12)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(12)
		if ((tmp1)){
			HX_STACK_LINE(12)
			break;
		}
		HX_STACK_LINE(13)
		::String codeString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(codeString,"codeString");
		HX_STACK_LINE(14)
		Array< ::String > codeStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("1","\x31","\x00","\x00","\x00")).Add(HX_HCSTRING("2","\x32","\x00","\x00","\x00")).Add(HX_HCSTRING("3","\x33","\x00","\x00","\x00")).Add(HX_HCSTRING("4","\x34","\x00","\x00","\x00")).Add(HX_HCSTRING("5","\x35","\x00","\x00","\x00")).Add(HX_HCSTRING("6","\x36","\x00","\x00","\x00")).Add(HX_HCSTRING("7","\x37","\x00","\x00","\x00")).Add(HX_HCSTRING("8","\x38","\x00","\x00","\x00")).Add(HX_HCSTRING("9","\x39","\x00","\x00","\x00")).Add(HX_HCSTRING("0","\x30","\x00","\x00","\x00")).Add(HX_HCSTRING("A","\x41","\x00","\x00","\x00")).Add(HX_HCSTRING("B","\x42","\x00","\x00","\x00")).Add(HX_HCSTRING("C","\x43","\x00","\x00","\x00")).Add(HX_HCSTRING("D","\x44","\x00","\x00","\x00")).Add(HX_HCSTRING("E","\x45","\x00","\x00","\x00")).Add(HX_HCSTRING("F","\x46","\x00","\x00","\x00"));		HX_STACK_VAR(codeStringArray,"codeStringArray");
		HX_STACK_LINE(15)
		int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(15)
		int tmp3 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(15)
		::String tmp4 = patternString.substring(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(15)
		::String scan1String = tmp4;		HX_STACK_VAR(scan1String,"scan1String");
		HX_STACK_LINE(16)
		::String tmp5 = scan1String;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(16)
		int tmp6 = codeStringArray->indexOf(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(16)
		bool tmp7 = (tmp6 > (int)-1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(16)
		if ((tmp7)){
			HX_STACK_LINE(17)
			int tmp8 = (loopCounter1Int + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(17)
			int tmp9 = (loopCounter1Int + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(17)
			::String tmp10 = patternString.substring(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(17)
			::String scan2String = tmp10;		HX_STACK_VAR(scan2String,"scan2String");
			HX_STACK_LINE(18)
			::String tmp11 = scan2String;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(18)
			int tmp12 = codeStringArray->indexOf(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(18)
			bool tmp13 = (tmp12 > (int)-1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(18)
			if ((tmp13)){
				HX_STACK_LINE(20)
				::String tmp14 = (scan1String + scan2String);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(20)
				codeString = tmp14;
				HX_STACK_LINE(21)
				hx::AddEq(loopCounter1Int,(int)2);
			}
			else{
				HX_STACK_LINE(23)
				(loopCounter1Int)++;
			}
		}
		else{
			HX_STACK_LINE(26)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(34)
		::String wordString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(wordString,"wordString");
		HX_STACK_LINE(66)
		bool tmp8 = (codeString == HX_HCSTRING("11","\xe0","\x2a","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		if ((tmp8)){
			HX_STACK_LINE(67)
			bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
			HX_STACK_LINE(68)
			bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
			HX_STACK_LINE(69)
			bool tmp9 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(69)
			bool tmp10 = (tmp9 == true);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(69)
			if ((tmp10)){
				HX_STACK_LINE(69)
				int tmp12 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(69)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(69)
				tmp11 = (tmp13 > (int)0);
			}
			else{
				HX_STACK_LINE(69)
				tmp11 = false;
			}
			HX_STACK_LINE(69)
			if ((tmp11)){
				HX_STACK_LINE(70)
				getNegativeBool = false;
				HX_STACK_LINE(71)
				getPositiveBool = true;
			}
			else{
				HX_STACK_LINE(73)
				bool tmp12 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				bool tmp13 = (tmp12 == false);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				if ((tmp13)){
					HX_STACK_LINE(73)
					int tmp15 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					tmp14 = (tmp16 <= (int)0);
				}
				else{
					HX_STACK_LINE(73)
					tmp14 = false;
				}
				HX_STACK_LINE(73)
				if ((tmp14)){
					HX_STACK_LINE(74)
					getNegativeBool = true;
					HX_STACK_LINE(75)
					getPositiveBool = false;
				}
				else{
					HX_STACK_LINE(78)
					getNegativeBool = true;
					HX_STACK_LINE(79)
					getPositiveBool = true;
				}
			}
			HX_STACK_LINE(81)
			Array< ::String > _11TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_11TagStringArray,"_11TagStringArray");
			HX_STACK_LINE(82)
			int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
			HX_STACK_LINE(83)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				bool tmp12 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(84)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				if ((tmp13)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(85)
				Dynamic tmp14 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				::EnumTagType tmp15 = tmp14->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(85)
				bool tmp16 = (tmp15 == ::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(85)
				if ((tmp16)){
					HX_STACK_LINE(86)
					bool tmp17 = (getNegativeBool == true);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(86)
					bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(86)
					if ((tmp17)){
						HX_STACK_LINE(86)
						tmp18 = (getPositiveBool == false);
					}
					else{
						HX_STACK_LINE(86)
						tmp18 = false;
					}
					HX_STACK_LINE(86)
					if ((tmp18)){
						HX_STACK_LINE(87)
						Dynamic tmp19 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(87)
						::EnumTagFeelType tmp20 = tmp19->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(87)
						bool tmp21 = (tmp20 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(87)
						if ((tmp21)){
							HX_STACK_LINE(88)
							Dynamic tmp22 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(88)
							::String tmp23 = tmp22->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(88)
							_11TagStringArray->push(tmp23);
						}
					}
					else{
						HX_STACK_LINE(91)
						bool tmp19 = (getNegativeBool == false);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(91)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(91)
						if ((tmp19)){
							HX_STACK_LINE(91)
							tmp20 = (getPositiveBool == true);
						}
						else{
							HX_STACK_LINE(91)
							tmp20 = false;
						}
						HX_STACK_LINE(91)
						if ((tmp20)){
							HX_STACK_LINE(92)
							Dynamic tmp21 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(92)
							::EnumTagFeelType tmp22 = tmp21->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(92)
							bool tmp23 = (tmp22 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(92)
							if ((tmp23)){
								HX_STACK_LINE(93)
								Dynamic tmp24 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(93)
								::String tmp25 = tmp24->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(93)
								_11TagStringArray->push(tmp25);
							}
						}
						else{
							HX_STACK_LINE(96)
							Dynamic tmp21 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(96)
							::String tmp22 = tmp21->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(96)
							_11TagStringArray->push(tmp22);
						}
					}
				}
				HX_STACK_LINE(98)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(100)
			bool tmp12 = (_11TagStringArray->length == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			if ((tmp12)){
				HX_STACK_LINE(101)
				loopCounter2Int = (int)0;
				HX_STACK_LINE(102)
				while((true)){
					HX_STACK_LINE(102)
					int tmp13 = loopCounter2Int;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(102)
					int tmp14 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(102)
					bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(102)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(102)
					if ((tmp16)){
						HX_STACK_LINE(102)
						break;
					}
					HX_STACK_LINE(103)
					Dynamic tmp17 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(103)
					::EnumTagType tmp18 = tmp17->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(103)
					bool tmp19 = (tmp18 == ::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(103)
					if ((tmp19)){
						HX_STACK_LINE(104)
						bool tmp20 = (getNegativeBool == true);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(104)
						bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(104)
						if ((tmp20)){
							HX_STACK_LINE(104)
							tmp21 = (getPositiveBool == false);
						}
						else{
							HX_STACK_LINE(104)
							tmp21 = false;
						}
						HX_STACK_LINE(104)
						if ((tmp21)){
							HX_STACK_LINE(105)
							Dynamic tmp22 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(105)
							::EnumTagFeelType tmp23 = tmp22->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(105)
							bool tmp24 = (tmp23 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(105)
							if ((tmp24)){
								HX_STACK_LINE(106)
								Dynamic tmp25 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(106)
								::String tmp26 = tmp25->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(106)
								_11TagStringArray->push(tmp26);
							}
						}
						else{
							HX_STACK_LINE(109)
							bool tmp22 = (getNegativeBool == false);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(109)
							bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(109)
							if ((tmp22)){
								HX_STACK_LINE(109)
								tmp23 = (getPositiveBool == true);
							}
							else{
								HX_STACK_LINE(109)
								tmp23 = false;
							}
							HX_STACK_LINE(109)
							if ((tmp23)){
								HX_STACK_LINE(110)
								Dynamic tmp24 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(110)
								::EnumTagFeelType tmp25 = tmp24->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(110)
								bool tmp26 = (tmp25 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(110)
								if ((tmp26)){
									HX_STACK_LINE(111)
									Dynamic tmp27 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(111)
									::String tmp28 = tmp27->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(111)
									_11TagStringArray->push(tmp28);
								}
							}
							else{
								HX_STACK_LINE(114)
								Dynamic tmp24 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(114)
								::String tmp25 = tmp24->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(114)
								_11TagStringArray->push(tmp25);
							}
						}
					}
					HX_STACK_LINE(116)
					(loopCounter2Int)++;
				}
			}
			HX_STACK_LINE(119)
			int tmp13 = _11TagStringArray->length;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(119)
			int tmp14 = this->RandomNumberGeneratorInt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(119)
			randomIndexInt = tmp14;
			HX_STACK_LINE(120)
			::String tmp15 = _11TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(120)
			wordString = tmp15;
		}
		else{
			HX_STACK_LINE(122)
			bool tmp9 = (codeString == HX_HCSTRING("22","\xc0","\x2b","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(122)
			if ((tmp9)){
				HX_STACK_LINE(123)
				bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
				HX_STACK_LINE(124)
				bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
				HX_STACK_LINE(125)
				bool tmp10 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(125)
				bool tmp11 = (tmp10 == true);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(125)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(125)
				if ((tmp11)){
					HX_STACK_LINE(125)
					int tmp13 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(125)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(125)
					tmp12 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(125)
					tmp12 = false;
				}
				HX_STACK_LINE(125)
				if ((tmp12)){
					HX_STACK_LINE(126)
					getNegativeBool = false;
					HX_STACK_LINE(127)
					getPositiveBool = true;
				}
				else{
					HX_STACK_LINE(129)
					bool tmp13 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(129)
					bool tmp14 = (tmp13 == false);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(129)
					bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(129)
					if ((tmp14)){
						HX_STACK_LINE(129)
						int tmp16 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(129)
						int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(129)
						tmp15 = (tmp17 <= (int)0);
					}
					else{
						HX_STACK_LINE(129)
						tmp15 = false;
					}
					HX_STACK_LINE(129)
					if ((tmp15)){
						HX_STACK_LINE(130)
						getNegativeBool = true;
						HX_STACK_LINE(131)
						getPositiveBool = false;
					}
					else{
						HX_STACK_LINE(134)
						getNegativeBool = true;
						HX_STACK_LINE(135)
						getPositiveBool = true;
					}
				}
				HX_STACK_LINE(137)
				Array< ::String > _22TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_22TagStringArray,"_22TagStringArray");
				HX_STACK_LINE(138)
				int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
				HX_STACK_LINE(139)
				int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
				HX_STACK_LINE(140)
				while((true)){
					HX_STACK_LINE(140)
					bool tmp13 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(140)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(140)
					if ((tmp14)){
						HX_STACK_LINE(140)
						break;
					}
					HX_STACK_LINE(141)
					Dynamic tmp15 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(141)
					::EnumTagType tmp16 = tmp15->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(141)
					bool tmp17 = (tmp16 == ::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(141)
					if ((tmp17)){
						HX_STACK_LINE(142)
						bool tmp18 = (getNegativeBool == true);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(142)
						bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(142)
						if ((tmp18)){
							HX_STACK_LINE(142)
							tmp19 = (getPositiveBool == false);
						}
						else{
							HX_STACK_LINE(142)
							tmp19 = false;
						}
						HX_STACK_LINE(142)
						if ((tmp19)){
							HX_STACK_LINE(143)
							Dynamic tmp20 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(143)
							::EnumTagFeelType tmp21 = tmp20->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(143)
							bool tmp22 = (tmp21 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(143)
							if ((tmp22)){
								HX_STACK_LINE(144)
								Dynamic tmp23 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(144)
								::String tmp24 = tmp23->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(144)
								_22TagStringArray->push(tmp24);
							}
						}
						else{
							HX_STACK_LINE(147)
							bool tmp20 = (getNegativeBool == false);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(147)
							bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(147)
							if ((tmp20)){
								HX_STACK_LINE(147)
								tmp21 = (getPositiveBool == true);
							}
							else{
								HX_STACK_LINE(147)
								tmp21 = false;
							}
							HX_STACK_LINE(147)
							if ((tmp21)){
								HX_STACK_LINE(148)
								Dynamic tmp22 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(148)
								::EnumTagFeelType tmp23 = tmp22->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(148)
								bool tmp24 = (tmp23 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(148)
								if ((tmp24)){
									HX_STACK_LINE(149)
									Dynamic tmp25 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(149)
									::String tmp26 = tmp25->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(149)
									_22TagStringArray->push(tmp26);
								}
							}
							else{
								HX_STACK_LINE(152)
								Dynamic tmp22 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(152)
								::String tmp23 = tmp22->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(152)
								_22TagStringArray->push(tmp23);
							}
						}
					}
					HX_STACK_LINE(154)
					(loopCounter2Int)++;
				}
				HX_STACK_LINE(156)
				bool tmp13 = (_22TagStringArray->length == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(156)
				if ((tmp13)){
					HX_STACK_LINE(157)
					loopCounter2Int = (int)0;
					HX_STACK_LINE(158)
					while((true)){
						HX_STACK_LINE(158)
						int tmp14 = loopCounter2Int;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(158)
						int tmp15 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(158)
						bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(158)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(158)
						if ((tmp17)){
							HX_STACK_LINE(158)
							break;
						}
						HX_STACK_LINE(159)
						Dynamic tmp18 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(159)
						::EnumTagType tmp19 = tmp18->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(159)
						bool tmp20 = (tmp19 == ::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(159)
						if ((tmp20)){
							HX_STACK_LINE(160)
							bool tmp21 = (getNegativeBool == true);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(160)
							bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(160)
							if ((tmp21)){
								HX_STACK_LINE(160)
								tmp22 = (getPositiveBool == false);
							}
							else{
								HX_STACK_LINE(160)
								tmp22 = false;
							}
							HX_STACK_LINE(160)
							if ((tmp22)){
								HX_STACK_LINE(161)
								Dynamic tmp23 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(161)
								::EnumTagFeelType tmp24 = tmp23->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(161)
								bool tmp25 = (tmp24 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(161)
								if ((tmp25)){
									HX_STACK_LINE(162)
									Dynamic tmp26 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(162)
									::String tmp27 = tmp26->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(162)
									_22TagStringArray->push(tmp27);
								}
							}
							else{
								HX_STACK_LINE(165)
								bool tmp23 = (getNegativeBool == false);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(165)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(165)
								if ((tmp23)){
									HX_STACK_LINE(165)
									tmp24 = (getPositiveBool == true);
								}
								else{
									HX_STACK_LINE(165)
									tmp24 = false;
								}
								HX_STACK_LINE(165)
								if ((tmp24)){
									HX_STACK_LINE(166)
									Dynamic tmp25 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(166)
									::EnumTagFeelType tmp26 = tmp25->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(166)
									bool tmp27 = (tmp26 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(166)
									if ((tmp27)){
										HX_STACK_LINE(167)
										Dynamic tmp28 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(167)
										::String tmp29 = tmp28->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(167)
										_22TagStringArray->push(tmp29);
									}
								}
								else{
									HX_STACK_LINE(170)
									Dynamic tmp25 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(170)
									::String tmp26 = tmp25->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(170)
									_22TagStringArray->push(tmp26);
								}
							}
						}
						HX_STACK_LINE(172)
						(loopCounter2Int)++;
					}
				}
				HX_STACK_LINE(175)
				int tmp14 = _22TagStringArray->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(175)
				int tmp15 = this->RandomNumberGeneratorInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(175)
				randomIndexInt = tmp15;
				HX_STACK_LINE(176)
				::String tmp16 = _22TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(176)
				wordString = tmp16;
			}
			else{
				HX_STACK_LINE(178)
				bool tmp10 = (codeString == HX_HCSTRING("43","\x7f","\x2d","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				if ((tmp10)){
					HX_STACK_LINE(179)
					Array< ::String > _43TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_43TagStringArray,"_43TagStringArray");
					HX_STACK_LINE(180)
					int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
					HX_STACK_LINE(181)
					int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
					HX_STACK_LINE(182)
					while((true)){
						HX_STACK_LINE(182)
						bool tmp11 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(182)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(182)
						if ((tmp12)){
							HX_STACK_LINE(182)
							break;
						}
						HX_STACK_LINE(183)
						Dynamic tmp13 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(183)
						::EnumTagType tmp14 = tmp13->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(183)
						bool tmp15 = (tmp14 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(183)
						if ((tmp15)){
							HX_STACK_LINE(184)
							Dynamic tmp16 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(184)
							::String tmp17 = tmp16->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(184)
							_43TagStringArray->push(tmp17);
						}
						HX_STACK_LINE(186)
						(loopCounter2Int)++;
					}
					HX_STACK_LINE(188)
					bool tmp11 = (_43TagStringArray->length == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(188)
					if ((tmp11)){
						HX_STACK_LINE(189)
						loopCounter2Int = (int)0;
						HX_STACK_LINE(190)
						while((true)){
							HX_STACK_LINE(190)
							int tmp12 = loopCounter2Int;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(190)
							int tmp13 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(190)
							bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(190)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(190)
							if ((tmp15)){
								HX_STACK_LINE(190)
								break;
							}
							HX_STACK_LINE(191)
							Dynamic tmp16 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(191)
							::EnumTagType tmp17 = tmp16->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(191)
							bool tmp18 = (tmp17 == ::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(191)
							if ((tmp18)){
								HX_STACK_LINE(192)
								Dynamic tmp19 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(192)
								::String tmp20 = tmp19->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(192)
								_43TagStringArray->push(tmp20);
							}
							HX_STACK_LINE(194)
							(loopCounter2Int)++;
						}
					}
					HX_STACK_LINE(197)
					int tmp12 = _43TagStringArray->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(197)
					int tmp13 = this->RandomNumberGeneratorInt(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(197)
					randomIndexInt = tmp13;
					HX_STACK_LINE(198)
					::String tmp14 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(198)
					bool tmp15 = (tmp14 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(198)
					if ((tmp15)){
						HX_STACK_LINE(199)
						::String tmp16 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(199)
						wordString = tmp16;
					}
					else{
						HX_STACK_LINE(201)
						::String tmp16 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(201)
						bool tmp17 = (tmp16 != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(201)
						if ((tmp17)){
							HX_STACK_LINE(202)
							Float tmp18 = ::Math_obj::random();		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(202)
							bool tmp19 = (tmp18 > ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(202)
							if ((tmp19)){
								HX_STACK_LINE(203)
								::String tmp20 = _visitorObject->GetNameString();		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(203)
								wordString = tmp20;
							}
							else{
								HX_STACK_LINE(205)
								::String tmp20 = _43TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(205)
								wordString = tmp20;
							}
						}
					}
				}
				else{
					HX_STACK_LINE(208)
					bool tmp11 = (codeString == HX_HCSTRING("65","\x3f","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(208)
					if ((tmp11)){
						HX_STACK_LINE(209)
						bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
						HX_STACK_LINE(210)
						bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
						HX_STACK_LINE(211)
						bool tmp12 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(211)
						bool tmp13 = (tmp12 == true);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(211)
						bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(211)
						if ((tmp13)){
							HX_STACK_LINE(211)
							int tmp15 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(211)
							int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(211)
							tmp14 = (tmp16 > (int)0);
						}
						else{
							HX_STACK_LINE(211)
							tmp14 = false;
						}
						HX_STACK_LINE(211)
						if ((tmp14)){
							HX_STACK_LINE(212)
							getNegativeBool = false;
							HX_STACK_LINE(213)
							getPositiveBool = true;
						}
						else{
							HX_STACK_LINE(215)
							bool tmp15 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(215)
							bool tmp16 = (tmp15 == false);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(215)
							bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(215)
							if ((tmp16)){
								HX_STACK_LINE(215)
								int tmp18 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(215)
								int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(215)
								tmp17 = (tmp19 <= (int)0);
							}
							else{
								HX_STACK_LINE(215)
								tmp17 = false;
							}
							HX_STACK_LINE(215)
							if ((tmp17)){
								HX_STACK_LINE(216)
								getNegativeBool = true;
								HX_STACK_LINE(217)
								getPositiveBool = false;
							}
							else{
								HX_STACK_LINE(220)
								getNegativeBool = true;
								HX_STACK_LINE(221)
								getPositiveBool = true;
							}
						}
						HX_STACK_LINE(223)
						Array< ::String > _65TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_65TagStringArray,"_65TagStringArray");
						HX_STACK_LINE(224)
						int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
						HX_STACK_LINE(225)
						int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
						HX_STACK_LINE(226)
						while((true)){
							HX_STACK_LINE(226)
							bool tmp15 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(226)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(226)
							if ((tmp16)){
								HX_STACK_LINE(226)
								break;
							}
							HX_STACK_LINE(227)
							Dynamic tmp17 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(227)
							::EnumTagType tmp18 = tmp17->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(227)
							bool tmp19 = (tmp18 == ::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(227)
							if ((tmp19)){
								HX_STACK_LINE(228)
								bool tmp20 = (getNegativeBool == true);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(228)
								bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(228)
								if ((tmp20)){
									HX_STACK_LINE(228)
									tmp21 = (getPositiveBool == false);
								}
								else{
									HX_STACK_LINE(228)
									tmp21 = false;
								}
								HX_STACK_LINE(228)
								if ((tmp21)){
									HX_STACK_LINE(229)
									Dynamic tmp22 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(229)
									::EnumTagFeelType tmp23 = tmp22->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(229)
									bool tmp24 = (tmp23 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(229)
									if ((tmp24)){
										HX_STACK_LINE(231)
										Dynamic tmp25 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(231)
										::String tmp26 = tmp25->__Field(HX_HCSTRING("tagEntry2Struct","\x6f","\xff","\x63","\xed"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(231)
										_65TagStringArray->push(tmp26);
									}
								}
								else{
									HX_STACK_LINE(234)
									bool tmp22 = (getNegativeBool == false);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(234)
									bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(234)
									if ((tmp22)){
										HX_STACK_LINE(234)
										tmp23 = (getPositiveBool == true);
									}
									else{
										HX_STACK_LINE(234)
										tmp23 = false;
									}
									HX_STACK_LINE(234)
									if ((tmp23)){
										HX_STACK_LINE(235)
										Dynamic tmp24 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(235)
										::EnumTagFeelType tmp25 = tmp24->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(235)
										bool tmp26 = (tmp25 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(235)
										if ((tmp26)){
											HX_STACK_LINE(236)
											Dynamic tmp27 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(236)
											::String tmp28 = tmp27->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(236)
											_65TagStringArray->push(tmp28);
										}
									}
									else{
										HX_STACK_LINE(239)
										Dynamic tmp24 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(239)
										::String tmp25 = tmp24->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(239)
										_65TagStringArray->push(tmp25);
									}
								}
							}
							HX_STACK_LINE(241)
							(loopCounter2Int)++;
						}
						HX_STACK_LINE(243)
						bool tmp15 = (_65TagStringArray->length == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(243)
						if ((tmp15)){
							HX_STACK_LINE(244)
							loopCounter2Int = (int)0;
							HX_STACK_LINE(245)
							while((true)){
								HX_STACK_LINE(245)
								int tmp16 = loopCounter2Int;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(245)
								int tmp17 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(245)
								bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(245)
								bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(245)
								if ((tmp19)){
									HX_STACK_LINE(245)
									break;
								}
								HX_STACK_LINE(246)
								Dynamic tmp20 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(246)
								::EnumTagType tmp21 = tmp20->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(246)
								bool tmp22 = (tmp21 == ::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(246)
								if ((tmp22)){
									HX_STACK_LINE(247)
									bool tmp23 = (getNegativeBool == true);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(247)
									bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(247)
									if ((tmp23)){
										HX_STACK_LINE(247)
										tmp24 = (getPositiveBool == false);
									}
									else{
										HX_STACK_LINE(247)
										tmp24 = false;
									}
									HX_STACK_LINE(247)
									if ((tmp24)){
										HX_STACK_LINE(248)
										Dynamic tmp25 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(248)
										::EnumTagFeelType tmp26 = tmp25->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(248)
										bool tmp27 = (tmp26 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(248)
										if ((tmp27)){
											HX_STACK_LINE(253)
											Dynamic tmp28 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(253)
											::String tmp29 = tmp28->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(253)
											_65TagStringArray->push(tmp29);
										}
									}
									else{
										HX_STACK_LINE(256)
										bool tmp25 = (getNegativeBool == false);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(256)
										bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(256)
										if ((tmp25)){
											HX_STACK_LINE(256)
											tmp26 = (getPositiveBool == true);
										}
										else{
											HX_STACK_LINE(256)
											tmp26 = false;
										}
										HX_STACK_LINE(256)
										if ((tmp26)){
											HX_STACK_LINE(257)
											Dynamic tmp27 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(257)
											::EnumTagFeelType tmp28 = tmp27->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(257)
											bool tmp29 = (tmp28 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(257)
											if ((tmp29)){
												HX_STACK_LINE(258)
												Dynamic tmp30 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(258)
												::String tmp31 = tmp30->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(258)
												_65TagStringArray->push(tmp31);
											}
										}
										else{
											HX_STACK_LINE(261)
											Dynamic tmp27 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(261)
											::String tmp28 = tmp27->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(261)
											_65TagStringArray->push(tmp28);
										}
									}
								}
								HX_STACK_LINE(263)
								(loopCounter2Int)++;
							}
						}
						HX_STACK_LINE(266)
						int tmp16 = _65TagStringArray->length;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(266)
						int tmp17 = this->RandomNumberGeneratorInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(266)
						randomIndexInt = tmp17;
						HX_STACK_LINE(267)
						::String tmp18 = _65TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(267)
						wordString = tmp18;
					}
					else{
						HX_STACK_LINE(269)
						bool tmp12 = (codeString == HX_HCSTRING("93","\xda","\x31","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(269)
						if ((tmp12)){
							HX_STACK_LINE(270)
							bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
							HX_STACK_LINE(271)
							bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
							HX_STACK_LINE(272)
							bool tmp13 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(272)
							bool tmp14 = (tmp13 == true);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(272)
							bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(272)
							if ((tmp14)){
								HX_STACK_LINE(272)
								int tmp16 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(272)
								int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(272)
								tmp15 = (tmp17 > (int)0);
							}
							else{
								HX_STACK_LINE(272)
								tmp15 = false;
							}
							HX_STACK_LINE(272)
							if ((tmp15)){
								HX_STACK_LINE(273)
								getNegativeBool = false;
								HX_STACK_LINE(274)
								getPositiveBool = true;
							}
							else{
								HX_STACK_LINE(276)
								bool tmp16 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(276)
								bool tmp17 = (tmp16 == false);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(276)
								bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(276)
								if ((tmp17)){
									HX_STACK_LINE(276)
									int tmp19 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(276)
									int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(276)
									tmp18 = (tmp20 <= (int)0);
								}
								else{
									HX_STACK_LINE(276)
									tmp18 = false;
								}
								HX_STACK_LINE(276)
								if ((tmp18)){
									HX_STACK_LINE(277)
									getNegativeBool = true;
									HX_STACK_LINE(278)
									getPositiveBool = false;
								}
								else{
									HX_STACK_LINE(281)
									getNegativeBool = true;
									HX_STACK_LINE(282)
									getPositiveBool = true;
								}
							}
							HX_STACK_LINE(284)
							Array< ::String > _93TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_93TagStringArray,"_93TagStringArray");
							HX_STACK_LINE(285)
							int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
							HX_STACK_LINE(286)
							int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
							HX_STACK_LINE(287)
							while((true)){
								HX_STACK_LINE(287)
								bool tmp16 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(287)
								bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(287)
								if ((tmp17)){
									HX_STACK_LINE(287)
									break;
								}
								HX_STACK_LINE(288)
								Dynamic tmp18 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(288)
								::EnumTagType tmp19 = tmp18->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(288)
								bool tmp20 = (tmp19 == ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(288)
								if ((tmp20)){
									HX_STACK_LINE(289)
									bool tmp21 = (getNegativeBool == true);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(289)
									bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(289)
									if ((tmp21)){
										HX_STACK_LINE(289)
										tmp22 = (getPositiveBool == false);
									}
									else{
										HX_STACK_LINE(289)
										tmp22 = false;
									}
									HX_STACK_LINE(289)
									if ((tmp22)){
										HX_STACK_LINE(290)
										Dynamic tmp23 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(290)
										::EnumTagFeelType tmp24 = tmp23->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(290)
										bool tmp25 = (tmp24 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(290)
										if ((tmp25)){
											HX_STACK_LINE(291)
											Dynamic tmp26 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(291)
											::String tmp27 = tmp26->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(291)
											_93TagStringArray->push(tmp27);
										}
									}
									else{
										HX_STACK_LINE(294)
										bool tmp23 = (getNegativeBool == false);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(294)
										bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(294)
										if ((tmp23)){
											HX_STACK_LINE(294)
											tmp24 = (getPositiveBool == true);
										}
										else{
											HX_STACK_LINE(294)
											tmp24 = false;
										}
										HX_STACK_LINE(294)
										if ((tmp24)){
											HX_STACK_LINE(295)
											Dynamic tmp25 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(295)
											::EnumTagFeelType tmp26 = tmp25->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(295)
											bool tmp27 = (tmp26 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(295)
											if ((tmp27)){
												HX_STACK_LINE(296)
												Dynamic tmp28 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(296)
												::String tmp29 = tmp28->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(296)
												_93TagStringArray->push(tmp29);
											}
										}
										else{
											HX_STACK_LINE(299)
											Dynamic tmp25 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(299)
											::String tmp26 = tmp25->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(299)
											_93TagStringArray->push(tmp26);
										}
									}
								}
								HX_STACK_LINE(301)
								(loopCounter2Int)++;
							}
							HX_STACK_LINE(303)
							bool tmp16 = (_93TagStringArray->length == (int)0);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(303)
							if ((tmp16)){
								HX_STACK_LINE(304)
								loopCounter2Int = (int)0;
								HX_STACK_LINE(305)
								while((true)){
									HX_STACK_LINE(305)
									int tmp17 = loopCounter2Int;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(305)
									int tmp18 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(305)
									bool tmp19 = (tmp17 < tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(305)
									bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(305)
									if ((tmp20)){
										HX_STACK_LINE(305)
										break;
									}
									HX_STACK_LINE(306)
									Dynamic tmp21 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(306)
									::EnumTagType tmp22 = tmp21->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(306)
									bool tmp23 = (tmp22 == ::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(306)
									if ((tmp23)){
										HX_STACK_LINE(307)
										bool tmp24 = (getNegativeBool == true);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(307)
										bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(307)
										if ((tmp24)){
											HX_STACK_LINE(307)
											tmp25 = (getPositiveBool == false);
										}
										else{
											HX_STACK_LINE(307)
											tmp25 = false;
										}
										HX_STACK_LINE(307)
										if ((tmp25)){
											HX_STACK_LINE(308)
											Dynamic tmp26 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(308)
											::EnumTagFeelType tmp27 = tmp26->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(308)
											bool tmp28 = (tmp27 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(308)
											if ((tmp28)){
												HX_STACK_LINE(309)
												Dynamic tmp29 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(309)
												::String tmp30 = tmp29->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(309)
												_93TagStringArray->push(tmp30);
											}
											else{
												HX_STACK_LINE(311)
												Dynamic tmp29 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(311)
												::EnumTagFeelType tmp30 = tmp29->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(311)
												bool tmp31 = (tmp30 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(311)
												if ((tmp31)){
													HX_STACK_LINE(312)
													Dynamic tmp32 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(312)
													::String tmp33 = tmp32->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(312)
													_93TagStringArray->push(tmp33);
												}
											}
										}
										else{
											HX_STACK_LINE(315)
											bool tmp26 = (getNegativeBool == false);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(315)
											bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(315)
											if ((tmp26)){
												HX_STACK_LINE(315)
												tmp27 = (getPositiveBool == true);
											}
											else{
												HX_STACK_LINE(315)
												tmp27 = false;
											}
											HX_STACK_LINE(315)
											if ((tmp27)){
												HX_STACK_LINE(316)
												Dynamic tmp28 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(316)
												::EnumTagFeelType tmp29 = tmp28->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(316)
												bool tmp30 = (tmp29 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(316)
												if ((tmp30)){
													HX_STACK_LINE(317)
													Dynamic tmp31 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(317)
													::String tmp32 = tmp31->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(317)
													_93TagStringArray->push(tmp32);
												}
												else{
													HX_STACK_LINE(319)
													Dynamic tmp31 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(319)
													::EnumTagFeelType tmp32 = tmp31->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(319)
													bool tmp33 = (tmp32 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(319)
													if ((tmp33)){
														HX_STACK_LINE(320)
														Dynamic tmp34 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(320)
														::String tmp35 = tmp34->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
														HX_STACK_LINE(320)
														_93TagStringArray->push(tmp35);
													}
												}
											}
											else{
												HX_STACK_LINE(323)
												Dynamic tmp28 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(323)
												::String tmp29 = tmp28->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(323)
												_93TagStringArray->push(tmp29);
											}
										}
									}
									HX_STACK_LINE(325)
									(loopCounter2Int)++;
								}
							}
							HX_STACK_LINE(329)
							int tmp17 = _93TagStringArray->length;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(329)
							int tmp18 = this->RandomNumberGeneratorInt(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(329)
							randomIndexInt = tmp18;
							HX_STACK_LINE(330)
							::String tmp19 = _93TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(330)
							wordString = tmp19;
						}
						else{
							HX_STACK_LINE(332)
							bool tmp13 = (codeString == HX_HCSTRING("A3","\xd2","\x38","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(332)
							if ((tmp13)){
								HX_STACK_LINE(333)
								bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
								HX_STACK_LINE(334)
								bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
								HX_STACK_LINE(335)
								bool tmp14 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(335)
								bool tmp15 = (tmp14 == true);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(335)
								bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(335)
								if ((tmp15)){
									HX_STACK_LINE(335)
									int tmp17 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(335)
									int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(335)
									tmp16 = (tmp18 > (int)0);
								}
								else{
									HX_STACK_LINE(335)
									tmp16 = false;
								}
								HX_STACK_LINE(335)
								if ((tmp16)){
									HX_STACK_LINE(336)
									getNegativeBool = false;
									HX_STACK_LINE(337)
									getPositiveBool = true;
								}
								else{
									HX_STACK_LINE(339)
									bool tmp17 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(339)
									bool tmp18 = (tmp17 == false);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(339)
									bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(339)
									if ((tmp18)){
										HX_STACK_LINE(339)
										int tmp20 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(339)
										int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(339)
										tmp19 = (tmp21 <= (int)0);
									}
									else{
										HX_STACK_LINE(339)
										tmp19 = false;
									}
									HX_STACK_LINE(339)
									if ((tmp19)){
										HX_STACK_LINE(340)
										getNegativeBool = true;
										HX_STACK_LINE(341)
										getPositiveBool = false;
									}
									else{
										HX_STACK_LINE(344)
										getNegativeBool = true;
										HX_STACK_LINE(345)
										getPositiveBool = true;
									}
								}
								HX_STACK_LINE(347)
								Array< ::String > _A3TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_A3TagStringArray,"_A3TagStringArray");
								HX_STACK_LINE(348)
								int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
								HX_STACK_LINE(349)
								int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
								HX_STACK_LINE(350)
								while((true)){
									HX_STACK_LINE(350)
									bool tmp17 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(350)
									bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(350)
									if ((tmp18)){
										HX_STACK_LINE(350)
										break;
									}
									HX_STACK_LINE(351)
									Dynamic tmp19 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(351)
									::EnumTagType tmp20 = tmp19->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(351)
									bool tmp21 = (tmp20 == ::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(351)
									if ((tmp21)){
										HX_STACK_LINE(352)
										bool tmp22 = (getNegativeBool == true);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(352)
										bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(352)
										if ((tmp22)){
											HX_STACK_LINE(352)
											tmp23 = (getPositiveBool == false);
										}
										else{
											HX_STACK_LINE(352)
											tmp23 = false;
										}
										HX_STACK_LINE(352)
										if ((tmp23)){
											HX_STACK_LINE(353)
											Dynamic tmp24 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(353)
											::EnumTagFeelType tmp25 = tmp24->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(353)
											bool tmp26 = (tmp25 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(353)
											if ((tmp26)){
												HX_STACK_LINE(354)
												Dynamic tmp27 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(354)
												::String tmp28 = tmp27->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(354)
												_A3TagStringArray->push(tmp28);
											}
											else{
												HX_STACK_LINE(356)
												Dynamic tmp27 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(356)
												::EnumTagFeelType tmp28 = tmp27->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(356)
												bool tmp29 = (tmp28 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(356)
												if ((tmp29)){
													HX_STACK_LINE(357)
													Dynamic tmp30 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(357)
													::String tmp31 = tmp30->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(357)
													_A3TagStringArray->push(tmp31);
												}
											}
										}
										else{
											HX_STACK_LINE(360)
											bool tmp24 = (getNegativeBool == false);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(360)
											bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(360)
											if ((tmp24)){
												HX_STACK_LINE(360)
												tmp25 = (getPositiveBool == true);
											}
											else{
												HX_STACK_LINE(360)
												tmp25 = false;
											}
											HX_STACK_LINE(360)
											if ((tmp25)){
												HX_STACK_LINE(361)
												Dynamic tmp26 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(361)
												::EnumTagFeelType tmp27 = tmp26->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(361)
												bool tmp28 = (tmp27 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(361)
												if ((tmp28)){
													HX_STACK_LINE(362)
													Dynamic tmp29 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(362)
													::String tmp30 = tmp29->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(362)
													_A3TagStringArray->push(tmp30);
												}
												else{
													HX_STACK_LINE(364)
													Dynamic tmp29 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(364)
													::EnumTagFeelType tmp30 = tmp29->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(364)
													bool tmp31 = (tmp30 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(364)
													if ((tmp31)){
														HX_STACK_LINE(365)
														Dynamic tmp32 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(365)
														::String tmp33 = tmp32->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(365)
														_A3TagStringArray->push(tmp33);
													}
												}
											}
											else{
												HX_STACK_LINE(368)
												Dynamic tmp26 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(368)
												::String tmp27 = tmp26->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(368)
												_A3TagStringArray->push(tmp27);
											}
										}
									}
									HX_STACK_LINE(370)
									(loopCounter2Int)++;
								}
								HX_STACK_LINE(372)
								bool tmp17 = (_A3TagStringArray->length == (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(372)
								if ((tmp17)){
									HX_STACK_LINE(373)
									loopCounter2Int = (int)0;
									HX_STACK_LINE(374)
									while((true)){
										HX_STACK_LINE(374)
										int tmp18 = loopCounter2Int;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(374)
										int tmp19 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(374)
										bool tmp20 = (tmp18 < tmp19);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(374)
										bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(374)
										if ((tmp21)){
											HX_STACK_LINE(374)
											break;
										}
										HX_STACK_LINE(375)
										Dynamic tmp22 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(375)
										::EnumTagType tmp23 = tmp22->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(375)
										bool tmp24 = (tmp23 == ::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(375)
										if ((tmp24)){
											HX_STACK_LINE(376)
											bool tmp25 = (getNegativeBool == true);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(376)
											bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(376)
											if ((tmp25)){
												HX_STACK_LINE(376)
												tmp26 = (getPositiveBool == false);
											}
											else{
												HX_STACK_LINE(376)
												tmp26 = false;
											}
											HX_STACK_LINE(376)
											if ((tmp26)){
												HX_STACK_LINE(377)
												Dynamic tmp27 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(377)
												::EnumTagFeelType tmp28 = tmp27->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(377)
												bool tmp29 = (tmp28 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(377)
												if ((tmp29)){
													HX_STACK_LINE(378)
													Dynamic tmp30 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(378)
													::String tmp31 = tmp30->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(378)
													_A3TagStringArray->push(tmp31);
												}
												else{
													HX_STACK_LINE(380)
													Dynamic tmp30 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(380)
													::EnumTagFeelType tmp31 = tmp30->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(380)
													bool tmp32 = (tmp31 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(380)
													if ((tmp32)){
														HX_STACK_LINE(381)
														Dynamic tmp33 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(381)
														::String tmp34 = tmp33->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(381)
														_A3TagStringArray->push(tmp34);
													}
												}
											}
											else{
												HX_STACK_LINE(384)
												bool tmp27 = (getNegativeBool == false);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(384)
												bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(384)
												if ((tmp27)){
													HX_STACK_LINE(384)
													tmp28 = (getPositiveBool == true);
												}
												else{
													HX_STACK_LINE(384)
													tmp28 = false;
												}
												HX_STACK_LINE(384)
												if ((tmp28)){
													HX_STACK_LINE(385)
													Dynamic tmp29 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(385)
													::EnumTagFeelType tmp30 = tmp29->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(385)
													bool tmp31 = (tmp30 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(385)
													if ((tmp31)){
														HX_STACK_LINE(386)
														Dynamic tmp32 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(386)
														::String tmp33 = tmp32->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(386)
														_A3TagStringArray->push(tmp33);
													}
													else{
														HX_STACK_LINE(388)
														Dynamic tmp32 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(388)
														::EnumTagFeelType tmp33 = tmp32->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
														HX_STACK_LINE(388)
														bool tmp34 = (tmp33 == ::EnumTagFeelType_obj::NEUTRAL);		HX_STACK_VAR(tmp34,"tmp34");
														HX_STACK_LINE(388)
														if ((tmp34)){
															HX_STACK_LINE(389)
															Dynamic tmp35 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp35,"tmp35");
															HX_STACK_LINE(389)
															::String tmp36 = tmp35->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
															HX_STACK_LINE(389)
															_A3TagStringArray->push(tmp36);
														}
													}
												}
												else{
													HX_STACK_LINE(392)
													Dynamic tmp29 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(392)
													::String tmp30 = tmp29->__Field(HX_HCSTRING("tagEntry1Struct","\xae","\x88","\xce","\xc3"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(392)
													_A3TagStringArray->push(tmp30);
												}
											}
										}
										HX_STACK_LINE(394)
										(loopCounter2Int)++;
									}
								}
								HX_STACK_LINE(397)
								int tmp18 = _A3TagStringArray->length;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(397)
								int tmp19 = this->RandomNumberGeneratorInt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(397)
								randomIndexInt = tmp19;
								HX_STACK_LINE(398)
								::String tmp20 = _A3TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(398)
								wordString = tmp20;
							}
							else{
								HX_STACK_LINE(400)
								bool tmp14 = (codeString == HX_HCSTRING("E7","\x52","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(400)
								if ((tmp14)){
									HX_STACK_LINE(401)
									bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
									HX_STACK_LINE(402)
									bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
									HX_STACK_LINE(403)
									bool tmp15 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(403)
									bool tmp16 = (tmp15 == true);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(403)
									bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(403)
									if ((tmp16)){
										HX_STACK_LINE(403)
										int tmp18 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(403)
										int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(403)
										tmp17 = (tmp19 > (int)0);
									}
									else{
										HX_STACK_LINE(403)
										tmp17 = false;
									}
									HX_STACK_LINE(403)
									if ((tmp17)){
										HX_STACK_LINE(404)
										getNegativeBool = false;
										HX_STACK_LINE(405)
										getPositiveBool = true;
									}
									else{
										HX_STACK_LINE(407)
										bool tmp18 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(407)
										bool tmp19 = (tmp18 == false);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(407)
										bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(407)
										if ((tmp19)){
											HX_STACK_LINE(407)
											int tmp21 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(407)
											int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(407)
											tmp20 = (tmp22 <= (int)0);
										}
										else{
											HX_STACK_LINE(407)
											tmp20 = false;
										}
										HX_STACK_LINE(407)
										if ((tmp20)){
											HX_STACK_LINE(408)
											getNegativeBool = true;
											HX_STACK_LINE(409)
											getPositiveBool = false;
										}
										else{
											HX_STACK_LINE(412)
											getNegativeBool = true;
											HX_STACK_LINE(413)
											getPositiveBool = true;
										}
									}
									HX_STACK_LINE(415)
									Array< ::String > _E7TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_E7TagStringArray,"_E7TagStringArray");
									HX_STACK_LINE(416)
									int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
									HX_STACK_LINE(417)
									int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
									HX_STACK_LINE(418)
									while((true)){
										HX_STACK_LINE(418)
										bool tmp18 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(418)
										bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(418)
										if ((tmp19)){
											HX_STACK_LINE(418)
											break;
										}
										HX_STACK_LINE(419)
										Dynamic tmp20 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(419)
										::EnumTagType tmp21 = tmp20->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(419)
										bool tmp22 = (tmp21 == ::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(419)
										if ((tmp22)){
											HX_STACK_LINE(420)
											bool tmp23 = (getNegativeBool == true);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(420)
											bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(420)
											if ((tmp23)){
												HX_STACK_LINE(420)
												tmp24 = (getPositiveBool == false);
											}
											else{
												HX_STACK_LINE(420)
												tmp24 = false;
											}
											HX_STACK_LINE(420)
											if ((tmp24)){
												HX_STACK_LINE(421)
												Dynamic tmp25 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(421)
												::EnumTagFeelType tmp26 = tmp25->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(421)
												bool tmp27 = (tmp26 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(421)
												if ((tmp27)){
													HX_STACK_LINE(422)
													Dynamic tmp28 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(422)
													::String tmp29 = tmp28->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(422)
													_E7TagStringArray->push(tmp29);
												}
											}
											else{
												HX_STACK_LINE(425)
												bool tmp25 = (getNegativeBool == false);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(425)
												bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(425)
												if ((tmp25)){
													HX_STACK_LINE(425)
													tmp26 = (getPositiveBool == true);
												}
												else{
													HX_STACK_LINE(425)
													tmp26 = false;
												}
												HX_STACK_LINE(425)
												if ((tmp26)){
													HX_STACK_LINE(426)
													Dynamic tmp27 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(426)
													::EnumTagFeelType tmp28 = tmp27->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(426)
													bool tmp29 = (tmp28 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(426)
													if ((tmp29)){
														HX_STACK_LINE(427)
														Dynamic tmp30 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(427)
														::String tmp31 = tmp30->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(427)
														_E7TagStringArray->push(tmp31);
													}
												}
												else{
													HX_STACK_LINE(430)
													Dynamic tmp27 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(430)
													::String tmp28 = tmp27->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(430)
													_E7TagStringArray->push(tmp28);
												}
											}
										}
										HX_STACK_LINE(432)
										(loopCounter2Int)++;
									}
									HX_STACK_LINE(434)
									bool tmp18 = (_E7TagStringArray->length == (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(434)
									if ((tmp18)){
										HX_STACK_LINE(435)
										loopCounter2Int = (int)0;
										HX_STACK_LINE(436)
										while((true)){
											HX_STACK_LINE(436)
											int tmp19 = loopCounter2Int;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(436)
											int tmp20 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(436)
											bool tmp21 = (tmp19 < tmp20);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(436)
											bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(436)
											if ((tmp22)){
												HX_STACK_LINE(436)
												break;
											}
											HX_STACK_LINE(437)
											Dynamic tmp23 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(437)
											::EnumTagType tmp24 = tmp23->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(437)
											bool tmp25 = (tmp24 == ::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(437)
											if ((tmp25)){
												HX_STACK_LINE(438)
												bool tmp26 = (getNegativeBool == true);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(438)
												bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(438)
												if ((tmp26)){
													HX_STACK_LINE(438)
													tmp27 = (getPositiveBool == false);
												}
												else{
													HX_STACK_LINE(438)
													tmp27 = false;
												}
												HX_STACK_LINE(438)
												if ((tmp27)){
													HX_STACK_LINE(439)
													Dynamic tmp28 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(439)
													::EnumTagFeelType tmp29 = tmp28->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(439)
													bool tmp30 = (tmp29 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(439)
													if ((tmp30)){
														HX_STACK_LINE(440)
														Dynamic tmp31 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(440)
														::String tmp32 = tmp31->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(440)
														_E7TagStringArray->push(tmp32);
													}
												}
												else{
													HX_STACK_LINE(443)
													bool tmp28 = (getNegativeBool == false);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(443)
													bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
													HX_STACK_LINE(443)
													if ((tmp28)){
														HX_STACK_LINE(443)
														tmp29 = (getPositiveBool == true);
													}
													else{
														HX_STACK_LINE(443)
														tmp29 = false;
													}
													HX_STACK_LINE(443)
													if ((tmp29)){
														HX_STACK_LINE(444)
														Dynamic tmp30 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(444)
														::EnumTagFeelType tmp31 = tmp30->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(444)
														bool tmp32 = (tmp31 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp32,"tmp32");
														HX_STACK_LINE(444)
														if ((tmp32)){
															HX_STACK_LINE(445)
															Dynamic tmp33 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(445)
															::String tmp34 = tmp33->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
															HX_STACK_LINE(445)
															_E7TagStringArray->push(tmp34);
														}
													}
													else{
														HX_STACK_LINE(448)
														Dynamic tmp30 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(448)
														::String tmp31 = tmp30->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(448)
														_E7TagStringArray->push(tmp31);
													}
												}
											}
											HX_STACK_LINE(450)
											(loopCounter2Int)++;
										}
									}
									HX_STACK_LINE(453)
									int tmp19 = _E7TagStringArray->length;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(453)
									int tmp20 = this->RandomNumberGeneratorInt(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(453)
									randomIndexInt = tmp20;
									HX_STACK_LINE(454)
									::String tmp21 = _E7TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(454)
									wordString = tmp21;
								}
								else{
									HX_STACK_LINE(456)
									bool tmp15 = (codeString == HX_HCSTRING("E8","\x53","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(456)
									if ((tmp15)){
										HX_STACK_LINE(457)
										bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
										HX_STACK_LINE(458)
										bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
										HX_STACK_LINE(459)
										bool tmp16 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(459)
										bool tmp17 = (tmp16 == true);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(459)
										bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(459)
										if ((tmp17)){
											HX_STACK_LINE(459)
											int tmp19 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(459)
											int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(459)
											tmp18 = (tmp20 > (int)0);
										}
										else{
											HX_STACK_LINE(459)
											tmp18 = false;
										}
										HX_STACK_LINE(459)
										if ((tmp18)){
											HX_STACK_LINE(460)
											getNegativeBool = false;
											HX_STACK_LINE(461)
											getPositiveBool = true;
										}
										else{
											HX_STACK_LINE(463)
											bool tmp19 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(463)
											bool tmp20 = (tmp19 == false);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(463)
											bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(463)
											if ((tmp20)){
												HX_STACK_LINE(463)
												int tmp22 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(463)
												int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(463)
												tmp21 = (tmp23 <= (int)0);
											}
											else{
												HX_STACK_LINE(463)
												tmp21 = false;
											}
											HX_STACK_LINE(463)
											if ((tmp21)){
												HX_STACK_LINE(464)
												getNegativeBool = true;
												HX_STACK_LINE(465)
												getPositiveBool = false;
											}
											else{
												HX_STACK_LINE(468)
												getNegativeBool = true;
												HX_STACK_LINE(469)
												getPositiveBool = true;
											}
										}
										HX_STACK_LINE(471)
										Array< ::String > _E8TagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_E8TagStringArray,"_E8TagStringArray");
										HX_STACK_LINE(472)
										int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
										HX_STACK_LINE(473)
										int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
										HX_STACK_LINE(474)
										while((true)){
											HX_STACK_LINE(474)
											bool tmp19 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(474)
											bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(474)
											if ((tmp20)){
												HX_STACK_LINE(474)
												break;
											}
											HX_STACK_LINE(475)
											Dynamic tmp21 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(475)
											::EnumTagType tmp22 = tmp21->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(475)
											bool tmp23 = (tmp22 == ::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(475)
											if ((tmp23)){
												HX_STACK_LINE(476)
												bool tmp24 = (getNegativeBool == true);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(476)
												bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(476)
												if ((tmp24)){
													HX_STACK_LINE(476)
													tmp25 = (getPositiveBool == false);
												}
												else{
													HX_STACK_LINE(476)
													tmp25 = false;
												}
												HX_STACK_LINE(476)
												if ((tmp25)){
													HX_STACK_LINE(477)
													Dynamic tmp26 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(477)
													::EnumTagFeelType tmp27 = tmp26->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(477)
													bool tmp28 = (tmp27 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(477)
													if ((tmp28)){
														HX_STACK_LINE(478)
														Dynamic tmp29 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(478)
														::String tmp30 = tmp29->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(478)
														_E8TagStringArray->push(tmp30);
													}
												}
												else{
													HX_STACK_LINE(481)
													bool tmp26 = (getNegativeBool == false);		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(481)
													bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(481)
													if ((tmp26)){
														HX_STACK_LINE(481)
														tmp27 = (getPositiveBool == true);
													}
													else{
														HX_STACK_LINE(481)
														tmp27 = false;
													}
													HX_STACK_LINE(481)
													if ((tmp27)){
														HX_STACK_LINE(482)
														Dynamic tmp28 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(482)
														::EnumTagFeelType tmp29 = tmp28->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(482)
														bool tmp30 = (tmp29 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(482)
														if ((tmp30)){
															HX_STACK_LINE(483)
															Dynamic tmp31 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(483)
															::String tmp32 = tmp31->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(483)
															_E8TagStringArray->push(tmp32);
														}
													}
													else{
														HX_STACK_LINE(486)
														Dynamic tmp28 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(486)
														::String tmp29 = tmp28->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(486)
														_E8TagStringArray->push(tmp29);
													}
												}
											}
											HX_STACK_LINE(488)
											(loopCounter2Int)++;
										}
										HX_STACK_LINE(490)
										bool tmp19 = (_E8TagStringArray->length == (int)0);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(490)
										if ((tmp19)){
											HX_STACK_LINE(491)
											loopCounter2Int = (int)0;
											HX_STACK_LINE(492)
											while((true)){
												HX_STACK_LINE(492)
												int tmp20 = loopCounter2Int;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(492)
												int tmp21 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(492)
												bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(492)
												bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(492)
												if ((tmp23)){
													HX_STACK_LINE(492)
													break;
												}
												HX_STACK_LINE(493)
												Dynamic tmp24 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(493)
												::EnumTagType tmp25 = tmp24->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(493)
												bool tmp26 = (tmp25 == ::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(493)
												if ((tmp26)){
													HX_STACK_LINE(494)
													bool tmp27 = (getNegativeBool == true);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(494)
													bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
													HX_STACK_LINE(494)
													if ((tmp27)){
														HX_STACK_LINE(494)
														tmp28 = (getPositiveBool == false);
													}
													else{
														HX_STACK_LINE(494)
														tmp28 = false;
													}
													HX_STACK_LINE(494)
													if ((tmp28)){
														HX_STACK_LINE(495)
														Dynamic tmp29 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(495)
														::EnumTagFeelType tmp30 = tmp29->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(495)
														bool tmp31 = (tmp30 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp31,"tmp31");
														HX_STACK_LINE(495)
														if ((tmp31)){
															HX_STACK_LINE(496)
															Dynamic tmp32 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(496)
															::String tmp33 = tmp32->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(496)
															_E8TagStringArray->push(tmp33);
														}
													}
													else{
														HX_STACK_LINE(499)
														bool tmp29 = (getNegativeBool == false);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(499)
														bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
														HX_STACK_LINE(499)
														if ((tmp29)){
															HX_STACK_LINE(499)
															tmp30 = (getPositiveBool == true);
														}
														else{
															HX_STACK_LINE(499)
															tmp30 = false;
														}
														HX_STACK_LINE(499)
														if ((tmp30)){
															HX_STACK_LINE(500)
															Dynamic tmp31 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(500)
															::EnumTagFeelType tmp32 = tmp31->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(500)
															bool tmp33 = (tmp32 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp33,"tmp33");
															HX_STACK_LINE(500)
															if ((tmp33)){
																HX_STACK_LINE(501)
																Dynamic tmp34 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(501)
																::String tmp35 = tmp34->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp35,"tmp35");
																HX_STACK_LINE(501)
																_E8TagStringArray->push(tmp35);
															}
														}
														else{
															HX_STACK_LINE(504)
															Dynamic tmp31 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(504)
															::String tmp32 = tmp31->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(504)
															_E8TagStringArray->push(tmp32);
														}
													}
												}
												HX_STACK_LINE(506)
												(loopCounter2Int)++;
											}
										}
										HX_STACK_LINE(509)
										int tmp20 = _E8TagStringArray->length;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(509)
										int tmp21 = this->RandomNumberGeneratorInt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(509)
										randomIndexInt = tmp21;
										HX_STACK_LINE(510)
										::String tmp22 = _E8TagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(510)
										wordString = tmp22;
									}
									else{
										HX_STACK_LINE(512)
										bool tmp16 = (codeString == HX_HCSTRING("EA","\x5c","\x3c","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(512)
										if ((tmp16)){
											HX_STACK_LINE(513)
											bool getNegativeBool = false;		HX_STACK_VAR(getNegativeBool,"getNegativeBool");
											HX_STACK_LINE(514)
											bool getPositiveBool = false;		HX_STACK_VAR(getPositiveBool,"getPositiveBool");
											HX_STACK_LINE(515)
											bool tmp17 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(515)
											bool tmp18 = (tmp17 == true);		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(515)
											bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(515)
											if ((tmp18)){
												HX_STACK_LINE(515)
												int tmp20 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(515)
												int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(515)
												tmp19 = (tmp21 > (int)0);
											}
											else{
												HX_STACK_LINE(515)
												tmp19 = false;
											}
											HX_STACK_LINE(515)
											if ((tmp19)){
												HX_STACK_LINE(516)
												getNegativeBool = false;
												HX_STACK_LINE(517)
												getPositiveBool = true;
											}
											else{
												HX_STACK_LINE(519)
												bool tmp20 = _visitorObject->GetVisitCorrectExhibitionBool();		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(519)
												bool tmp21 = (tmp20 == false);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(519)
												bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(519)
												if ((tmp21)){
													HX_STACK_LINE(519)
													int tmp23 = _visitorObject->GetScoreInt();		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(519)
													int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(519)
													tmp22 = (tmp24 <= (int)0);
												}
												else{
													HX_STACK_LINE(519)
													tmp22 = false;
												}
												HX_STACK_LINE(519)
												if ((tmp22)){
													HX_STACK_LINE(520)
													getNegativeBool = true;
													HX_STACK_LINE(521)
													getPositiveBool = false;
												}
												else{
													HX_STACK_LINE(524)
													getNegativeBool = true;
													HX_STACK_LINE(525)
													getPositiveBool = true;
												}
											}
											HX_STACK_LINE(527)
											Array< ::String > _EATagStringArray = Array_obj< ::String >::__new();		HX_STACK_VAR(_EATagStringArray,"_EATagStringArray");
											HX_STACK_LINE(528)
											int randomIndexInt = (int)0;		HX_STACK_VAR(randomIndexInt,"randomIndexInt");
											HX_STACK_LINE(529)
											int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
											HX_STACK_LINE(530)
											while((true)){
												HX_STACK_LINE(530)
												bool tmp20 = (loopCounter2Int < tagStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(530)
												bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(530)
												if ((tmp21)){
													HX_STACK_LINE(530)
													break;
												}
												HX_STACK_LINE(531)
												Dynamic tmp22 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(531)
												::EnumTagType tmp23 = tmp22->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(531)
												bool tmp24 = (tmp23 == ::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp24,"tmp24");
												HX_STACK_LINE(531)
												if ((tmp24)){
													HX_STACK_LINE(532)
													bool tmp25 = (getNegativeBool == true);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(532)
													bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(532)
													if ((tmp25)){
														HX_STACK_LINE(532)
														tmp26 = (getPositiveBool == false);
													}
													else{
														HX_STACK_LINE(532)
														tmp26 = false;
													}
													HX_STACK_LINE(532)
													if ((tmp26)){
														HX_STACK_LINE(533)
														Dynamic tmp27 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(533)
														::EnumTagFeelType tmp28 = tmp27->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(533)
														bool tmp29 = (tmp28 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(533)
														if ((tmp29)){
															HX_STACK_LINE(534)
															Dynamic tmp30 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(534)
															::String tmp31 = tmp30->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(534)
															_EATagStringArray->push(tmp31);
														}
													}
													else{
														HX_STACK_LINE(537)
														bool tmp27 = (getNegativeBool == false);		HX_STACK_VAR(tmp27,"tmp27");
														HX_STACK_LINE(537)
														bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(537)
														if ((tmp27)){
															HX_STACK_LINE(537)
															tmp28 = (getPositiveBool == true);
														}
														else{
															HX_STACK_LINE(537)
															tmp28 = false;
														}
														HX_STACK_LINE(537)
														if ((tmp28)){
															HX_STACK_LINE(538)
															Dynamic tmp29 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(538)
															::EnumTagFeelType tmp30 = tmp29->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(538)
															bool tmp31 = (tmp30 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(538)
															if ((tmp31)){
																HX_STACK_LINE(539)
																Dynamic tmp32 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(539)
																::String tmp33 = tmp32->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(539)
																_EATagStringArray->push(tmp33);
															}
														}
														else{
															HX_STACK_LINE(542)
															Dynamic tmp29 = tagStructArray->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp29,"tmp29");
															HX_STACK_LINE(542)
															::String tmp30 = tmp29->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(542)
															_EATagStringArray->push(tmp30);
														}
													}
												}
												HX_STACK_LINE(544)
												(loopCounter2Int)++;
											}
											HX_STACK_LINE(546)
											bool tmp20 = (_EATagStringArray->length == (int)0);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(546)
											if ((tmp20)){
												HX_STACK_LINE(547)
												loopCounter2Int = (int)0;
												HX_STACK_LINE(548)
												while((true)){
													HX_STACK_LINE(548)
													int tmp21 = loopCounter2Int;		HX_STACK_VAR(tmp21,"tmp21");
													HX_STACK_LINE(548)
													int tmp22 = _collectionGlobalObject->GetTagGeneralStructArray()->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
													HX_STACK_LINE(548)
													bool tmp23 = (tmp21 < tmp22);		HX_STACK_VAR(tmp23,"tmp23");
													HX_STACK_LINE(548)
													bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
													HX_STACK_LINE(548)
													if ((tmp24)){
														HX_STACK_LINE(548)
														break;
													}
													HX_STACK_LINE(549)
													Dynamic tmp25 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp25,"tmp25");
													HX_STACK_LINE(549)
													::EnumTagType tmp26 = tmp25->__Field(HX_HCSTRING("tagTypeEnum","\x55","\x6f","\xb4","\xa9"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
													HX_STACK_LINE(549)
													bool tmp27 = (tmp26 == ::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp27,"tmp27");
													HX_STACK_LINE(549)
													if ((tmp27)){
														HX_STACK_LINE(550)
														bool tmp28 = (getNegativeBool == true);		HX_STACK_VAR(tmp28,"tmp28");
														HX_STACK_LINE(550)
														bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
														HX_STACK_LINE(550)
														if ((tmp28)){
															HX_STACK_LINE(550)
															tmp29 = (getPositiveBool == false);
														}
														else{
															HX_STACK_LINE(550)
															tmp29 = false;
														}
														HX_STACK_LINE(550)
														if ((tmp29)){
															HX_STACK_LINE(551)
															Dynamic tmp30 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(551)
															::EnumTagFeelType tmp31 = tmp30->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(551)
															bool tmp32 = (tmp31 == ::EnumTagFeelType_obj::NEGATIVE);		HX_STACK_VAR(tmp32,"tmp32");
															HX_STACK_LINE(551)
															if ((tmp32)){
																HX_STACK_LINE(552)
																Dynamic tmp33 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(552)
																::String tmp34 = tmp33->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(552)
																_EATagStringArray->push(tmp34);
															}
														}
														else{
															HX_STACK_LINE(555)
															bool tmp30 = (getNegativeBool == false);		HX_STACK_VAR(tmp30,"tmp30");
															HX_STACK_LINE(555)
															bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
															HX_STACK_LINE(555)
															if ((tmp30)){
																HX_STACK_LINE(555)
																tmp31 = (getPositiveBool == true);
															}
															else{
																HX_STACK_LINE(555)
																tmp31 = false;
															}
															HX_STACK_LINE(555)
															if ((tmp31)){
																HX_STACK_LINE(556)
																Dynamic tmp32 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(556)
																::EnumTagFeelType tmp33 = tmp32->__Field(HX_HCSTRING("tagFeelEnum","\x01","\x02","\x26","\xeb"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(556)
																bool tmp34 = (tmp33 == ::EnumTagFeelType_obj::POSITIVE);		HX_STACK_VAR(tmp34,"tmp34");
																HX_STACK_LINE(556)
																if ((tmp34)){
																	HX_STACK_LINE(557)
																	Dynamic tmp35 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp35,"tmp35");
																	HX_STACK_LINE(557)
																	::String tmp36 = tmp35->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
																	HX_STACK_LINE(557)
																	_EATagStringArray->push(tmp36);
																}
															}
															else{
																HX_STACK_LINE(560)
																Dynamic tmp32 = _collectionGlobalObject->GetTagGeneralStructArray()->__GetItem(loopCounter2Int);		HX_STACK_VAR(tmp32,"tmp32");
																HX_STACK_LINE(560)
																::String tmp33 = tmp32->__Field(HX_HCSTRING("tagEntry5Struct","\xb2","\x63","\x24","\x6a"), hx::paccDynamic )->__Field(HX_HCSTRING("tagString","\xcb","\x36","\x68","\x42"), hx::paccDynamic );		HX_STACK_VAR(tmp33,"tmp33");
																HX_STACK_LINE(560)
																_EATagStringArray->push(tmp33);
															}
														}
													}
													HX_STACK_LINE(562)
													(loopCounter2Int)++;
												}
											}
											HX_STACK_LINE(565)
											int tmp21 = _EATagStringArray->length;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(565)
											int tmp22 = this->RandomNumberGeneratorInt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(565)
											randomIndexInt = tmp22;
											HX_STACK_LINE(566)
											::String tmp23 = _EATagStringArray->__get(randomIndexInt);		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(566)
											wordString = tmp23;
										}
										else{
											HX_STACK_LINE(569)
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
		HX_STACK_LINE(572)
		::String tmp9 = (sentenceString + wordString);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(572)
		sentenceString = tmp9;
	}
	HX_STACK_LINE(575)
	::String tmp = sentenceString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(575)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(ObjectGeneratorSentence_obj,GenerateSentenceString,return )

int ObjectGeneratorSentence_obj::RandomNumberGeneratorInt( int _randomNumberInt){
	HX_STACK_FRAME("ObjectGeneratorSentence","RandomNumberGeneratorInt",0xb4d8c4df,"ObjectGeneratorSentence.RandomNumberGeneratorInt","ObjectGeneratorSentence.hx",577,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_randomNumberInt,"_randomNumberInt")
	HX_STACK_LINE(577)
	Float tmp = ::Math_obj::random();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(577)
	int tmp1 = (_randomNumberInt - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(577)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(577)
	int tmp3 = ::Math_obj::round(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(577)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,RandomNumberGeneratorInt,return )

::String ObjectGeneratorSentence_obj::WordFixString( ::String _fixString){
	HX_STACK_FRAME("ObjectGeneratorSentence","WordFixString",0x1c1734c5,"ObjectGeneratorSentence.WordFixString","ObjectGeneratorSentence.hx",578,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_fixString,"_fixString")
	HX_STACK_LINE(578)
	::String tmp = _fixString.substring((int)0,(int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	::String tmp1 = tmp.toUpperCase();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	int tmp2 = _fixString.length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(578)
	::String tmp3 = _fixString.substring((int)1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(578)
	::String tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(578)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectGeneratorSentence_obj,WordFixString,return )

::String ObjectGeneratorSentence_obj::GenerateSentence3String( ::CollectionGlobal _collectionGlobalObject,::ObjectVisitor _visitorObject){
	HX_STACK_FRAME("ObjectGeneratorSentence","GenerateSentence3String",0x6b0ab815,"ObjectGeneratorSentence.GenerateSentence3String","ObjectGeneratorSentence.hx",579,0x43a4e8e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
	HX_STACK_ARG(_visitorObject,"_visitorObject")
	HX_STACK_LINE(580)
	Array< ::Dynamic > patternStringArray2D = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(patternStringArray2D,"patternStringArray2D");
	HX_STACK_LINE(581)
	patternStringArray2D = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("11 93...","\x14","\x21","\x5f","\xa7")).Add(HX_HCSTRING("43 EA on the 93.","\xc7","\x34","\xd3","\xe7")).Add(HX_HCSTRING("E7 again.","\xdc","\x28","\xe8","\xae"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("11 A3.","\xdc","\x6d","\x77","\xe3")).Add(HX_HCSTRING("43 EA 22.","\x2b","\x73","\xbd","\x89")).Add(HX_HCSTRING("Into the 93.","\x85","\xa2","\x83","\x87"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("A3 EA.","\x04","\x72","\xfd","\x6f")).Add(HX_HCSTRING("What I E8 were A3...","\x17","\x30","\x77","\x00")).Add(HX_HCSTRING("Are 65 of 93.","\x60","\x13","\x09","\x99")));
	HX_STACK_LINE(621)
	int tmp = patternStringArray2D->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	int tmp1 = this->RandomNumberGeneratorInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(621)
	int stringPatternIndexInt = tmp1;		HX_STACK_VAR(stringPatternIndexInt,"stringPatternIndexInt");
	HX_STACK_LINE(622)
	Array< ::String > stringPatternIndexString = patternStringArray2D->__get(stringPatternIndexInt).StaticCast< Array< ::String > >();		HX_STACK_VAR(stringPatternIndexString,"stringPatternIndexString");
	HX_STACK_LINE(623)
	::String threeSentenceString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
	HX_STACK_LINE(624)
	int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
	HX_STACK_LINE(625)
	while((true)){
		HX_STACK_LINE(625)
		bool tmp2 = (loopCounter1Int < (int)3);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(625)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(625)
		if ((tmp3)){
			HX_STACK_LINE(625)
			break;
		}
		HX_STACK_LINE(626)
		bool tmp4 = (loopCounter1Int == (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(626)
		if ((tmp4)){
			HX_STACK_LINE(626)
			::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(626)
			::String tmp6 = stringPatternIndexString->__get(loopCounter1Int);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(626)
			::ObjectVisitor tmp7 = _visitorObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(626)
			::String tmp8 = this->GenerateSentenceString(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(626)
			threeSentenceString = tmp8;
		}
		else{
			HX_STACK_LINE(627)
			::String tmp5 = (threeSentenceString + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(627)
			::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(627)
			::String tmp7 = stringPatternIndexString->__get(loopCounter1Int);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(627)
			::ObjectVisitor tmp8 = _visitorObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(627)
			::String tmp9 = this->GenerateSentenceString(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(627)
			::String tmp10 = (tmp5 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(627)
			threeSentenceString = tmp10;
		}
		HX_STACK_LINE(628)
		(loopCounter1Int)++;
	}
	HX_STACK_LINE(631)
	::String tmp2 = threeSentenceString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(631)
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

