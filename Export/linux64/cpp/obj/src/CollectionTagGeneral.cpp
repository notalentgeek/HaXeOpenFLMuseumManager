#include <hxcpp.h>

#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionTagGeneral
#include <CollectionTagGeneral.h>
#endif
#ifndef INCLUDED_EnumTagFeelType
#include <EnumTagFeelType.h>
#endif
#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif

Void CollectionTagGeneral_obj::__construct()
{
HX_STACK_FRAME("CollectionTagGeneral","new",0x640e4efe,"CollectionTagGeneral.new","CollectionTagGeneral.hx",5,0x9b6d1a32)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CollectionTagGeneral_obj::~CollectionTagGeneral_obj() { }

Dynamic CollectionTagGeneral_obj::__CreateEmpty() { return  new CollectionTagGeneral_obj; }
hx::ObjectPtr< CollectionTagGeneral_obj > CollectionTagGeneral_obj::__new()
{  hx::ObjectPtr< CollectionTagGeneral_obj > _result_ = new CollectionTagGeneral_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionTagGeneral_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionTagGeneral_obj > _result_ = new CollectionTagGeneral_obj();
	_result_->__construct();
	return _result_;}

::ObjectTag CollectionTagGeneral_obj::tagObject;

Void CollectionTagGeneral_obj::TagGeneralStructVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructVoid",0x4ef62599,"CollectionTagGeneral.TagGeneralStructVoid","CollectionTagGeneral.hx",6,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(7)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(7)
		::CollectionTagGeneral_obj::TagGeneralStructAdjVoid(tmp);
		HX_STACK_LINE(8)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8)
		::CollectionTagGeneral_obj::TagGeneralStructAdvVoid(tmp1);
		HX_STACK_LINE(9)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(9)
		::CollectionTagGeneral_obj::TagGeneralStructNounAliveAbstractVoid(tmp2);
		HX_STACK_LINE(10)
		::CollectionGlobal tmp3 = _collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(10)
		::CollectionTagGeneral_obj::TagGeneralStructNounAliveConcreteVoid(tmp3);
		HX_STACK_LINE(11)
		::CollectionGlobal tmp4 = _collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(11)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimateHoldAbstractVoid(tmp4);
		HX_STACK_LINE(12)
		::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(12)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimateHoldConcreteVoid(tmp5);
		HX_STACK_LINE(13)
		::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(13)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimatePlaceAbstractVoid(tmp6);
		HX_STACK_LINE(14)
		::CollectionGlobal tmp7 = _collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(14)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid(tmp7);
		HX_STACK_LINE(15)
		::CollectionGlobal tmp8 = _collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(15)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimatePlaceConcreteOwnerVoid(tmp8);
		HX_STACK_LINE(16)
		::CollectionGlobal tmp9 = _collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(16)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimateSeeAbstractVoid(tmp9);
		HX_STACK_LINE(17)
		::CollectionGlobal tmp10 = _collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(17)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimateSeeConcreteVoid(tmp10);
		HX_STACK_LINE(18)
		::CollectionGlobal tmp11 = _collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(18)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimateTitleAbstractVoid(tmp11);
		HX_STACK_LINE(19)
		::CollectionGlobal tmp12 = _collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(19)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimateWearAbstractVoid(tmp12);
		HX_STACK_LINE(20)
		::CollectionGlobal tmp13 = _collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(20)
		::CollectionTagGeneral_obj::TagGeneralStructNounInanimateWearConcreteVoid(tmp13);
		HX_STACK_LINE(21)
		::CollectionGlobal tmp14 = _collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(21)
		::CollectionTagGeneral_obj::TagGeneralStructVerbVoidIntransitiveVoid(tmp14);
		HX_STACK_LINE(22)
		::CollectionGlobal tmp15 = _collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(22)
		::CollectionTagGeneral_obj::TagGeneralStructVerbVoidTransitiveVoid(tmp15);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructAdjVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructAdjVoid",0x841b17f6,"CollectionTagGeneral.TagGeneralStructAdjVoid","CollectionTagGeneral.hx",24,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(25)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Awful","\xe7","\xe4","\x01","\xbc"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		tmp->SetAdjectiveStringObject(HX_HCSTRING("awful","\x07","\x75","\xd4","\x28"));
		HX_STACK_LINE(26)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Bad","\xa5","\x69","\x32","\x00"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		tmp1->SetAdjectiveStringObject(HX_HCSTRING("bad","\xc5","\xb1","\x4a","\x00"));
		HX_STACK_LINE(27)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,true,HX_HCSTRING("Excellent","\x56","\xdf","\x85","\x98"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		tmp2->SetAdjectiveStringObject(HX_HCSTRING("excellent","\x76","\xff","\xb2","\xf6"));
		HX_STACK_LINE(28)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,true,HX_HCSTRING("Good","\x5d","\xc1","\x42","\x2f"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp3->SetAdjectiveStringObject(HX_HCSTRING("good","\x3d","\x95","\x69","\x44"));
		HX_STACK_LINE(29)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Soft","\x0a","\x49","\x31","\x37"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		tmp4->SetAdjectiveStringObject(HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructAdjVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructAdvVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructAdvVoid",0x6cea0e02,"CollectionTagGeneral.TagGeneralStructAdvVoid","CollectionTagGeneral.hx",31,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(32)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Desperate","\x87","\x96","\x40","\x82"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		tmp->SetAdverbStringObject(HX_HCSTRING("desperately","\xf4","\x4c","\x46","\x20"));
		HX_STACK_LINE(33)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Slow","\x21","\x0a","\x2f","\x37"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		tmp1->SetAdverbStringObject(HX_HCSTRING("bad","\xc5","\xb1","\x4a","\x00"));
		HX_STACK_LINE(34)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,true,HX_HCSTRING("Perfect","\xed","\x6c","\x27","\x48"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		tmp2->SetAdverbStringObject(HX_HCSTRING("excellent","\x76","\xff","\xb2","\xf6"));
		HX_STACK_LINE(35)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,true,HX_HCSTRING("Quick","\xcd","\xf6","\x1a","\xf1"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		tmp3->SetAdverbStringObject(HX_HCSTRING("good","\x3d","\x95","\x69","\x44"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructAdvVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounAliveAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounAliveAbstractVoid",0xc7a44aa4,"CollectionTagGeneral.TagGeneralStructNounAliveAbstractVoid","CollectionTagGeneral.hx",37,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(38)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Assasin","\xf8","\xac","\x87","\x01"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("assasin","\x18","\x85","\x36","\x34"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		::ObjectTag tmp2 = tmp1->SetNounPosStringObject(HX_HCSTRING("assasin's","\x84","\x1d","\xb4","\x92"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		::ObjectTag tmp3 = tmp2->SetNounSStringObject(HX_HCSTRING("assasins","\x5b","\xf0","\x7d","\x7b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		tmp3->SetNounSPosStringObject(HX_HCSTRING("assasins'","\x6c","\x5f","\xb4","\x92"));
		HX_STACK_LINE(39)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Boy","\xec","\x75","\x32","\x00"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(39)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("boy","\x0c","\xbe","\x4a","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		::ObjectTag tmp6 = tmp5->SetNounPosStringObject(HX_HCSTRING("boy's","\x78","\x7b","\xff","\xb6"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		::ObjectTag tmp7 = tmp6->SetNounSStringObject(HX_HCSTRING("boys","\xe7","\x8c","\x1b","\x41"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(39)
		tmp7->SetNounSPosStringObject(HX_HCSTRING("boys'","\x60","\xbd","\xff","\xb6"));
		HX_STACK_LINE(40)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Dragon","\x33","\xe6","\x5e","\x14"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("dragon","\x13","\x72","\xca","\xdf"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		::ObjectTag tmp10 = tmp9->SetNounPosStringObject(HX_HCSTRING("dragon's","\x3f","\x7f","\xd9","\x3c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		::ObjectTag tmp11 = tmp10->SetNounSStringObject(HX_HCSTRING("dragons","\x00","\x5f","\x59","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		tmp11->SetNounSPosStringObject(HX_HCSTRING("dragons'","\x27","\xc1","\xd9","\x3c"));
		HX_STACK_LINE(41)
		::ObjectTag tmp12 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Iraqi","\x10","\xa9","\xe4","\x53"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		::ObjectTag tmp13 = tmp12->SetNounStringObject(HX_HCSTRING("iraqi","\x30","\x39","\xb7","\xc0"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		::ObjectTag tmp14 = tmp13->SetNounPosStringObject(HX_HCSTRING("iraqi's","\x9c","\x07","\xdc","\xc7"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(41)
		::ObjectTag tmp15 = tmp14->SetNounSStringObject(HX_HCSTRING("iraqis","\x43","\xd1","\x9a","\xdf"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(41)
		tmp15->SetNounSPosStringObject(HX_HCSTRING("iraqis'","\x84","\x49","\xdc","\xc7"));
		HX_STACK_LINE(42)
		::ObjectTag tmp16 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Italian","\xa0","\x09","\x96","\x5e"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(42)
		::ObjectTag tmp17 = tmp16->SetNounStringObject(HX_HCSTRING("italian","\xc0","\xe1","\x44","\x91"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(42)
		::ObjectTag tmp18 = tmp17->SetNounPosStringObject(HX_HCSTRING("italian's","\x2c","\xf4","\x90","\x15"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(42)
		::ObjectTag tmp19 = tmp18->SetNounSStringObject(HX_HCSTRING("italians","\xb3","\xa6","\x00","\x8b"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(42)
		tmp19->SetNounSPosStringObject(HX_HCSTRING("italians'","\x14","\x36","\x91","\x15"));
		HX_STACK_LINE(43)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Painter","\x6b","\xdb","\x73","\x85"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(43)
		::ObjectTag tmp21 = tmp20->SetNounStringObject(HX_HCSTRING("painter","\x8b","\xb3","\x22","\xb8"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		::ObjectTag tmp22 = tmp21->SetNounPosStringObject(HX_HCSTRING("painter's","\xb7","\x0e","\xdf","\x0c"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(43)
		::ObjectTag tmp23 = tmp22->SetNounSStringObject(HX_HCSTRING("painters","\x88","\x66","\x3a","\x66"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(43)
		tmp23->SetNounSPosStringObject(HX_HCSTRING("painters'","\x9f","\x50","\xdf","\x0c"));
		HX_STACK_LINE(44)
		::ObjectTag tmp24 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Romanian","\xd9","\x1e","\xc1","\x11"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(44)
		::ObjectTag tmp25 = tmp24->SetNounStringObject(HX_HCSTRING("romanian","\xb9","\x62","\x0f","\x38"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(44)
		::ObjectTag tmp26 = tmp25->SetNounPosStringObject(HX_HCSTRING("romanian's","\x65","\x65","\xb8","\xe4"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(44)
		::ObjectTag tmp27 = tmp26->SetNounSStringObject(HX_HCSTRING("romanians","\x9a","\xff","\x66","\xd5"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(44)
		tmp27->SetNounSPosStringObject(HX_HCSTRING("romanians'","\x4d","\xa7","\xb8","\xe4"));
		HX_STACK_LINE(45)
		::ObjectTag tmp28 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Russian","\x33","\x82","\x09","\x9d"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(45)
		::ObjectTag tmp29 = tmp28->SetNounStringObject(HX_HCSTRING("russian","\x53","\x5a","\xb8","\xcf"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(45)
		::ObjectTag tmp30 = tmp29->SetNounPosStringObject(HX_HCSTRING("russian's","\x7f","\xf7","\x41","\x72"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(45)
		::ObjectTag tmp31 = tmp30->SetNounSStringObject(HX_HCSTRING("russians","\xc0","\xae","\x96","\xf1"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(45)
		tmp31->SetNounSPosStringObject(HX_HCSTRING("russians'","\x67","\x39","\x42","\x72"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounAliveAbstractVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounAliveConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounAliveConcreteVoid",0xe2569187,"CollectionTagGeneral.TagGeneralStructNounAliveConcreteVoid","CollectionTagGeneral.hx",47,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(48)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		tmp1->SetNounPosStringObject(HX_HCSTRING("Andy's","\xce","\x8c","\xbb","\x95"));
		HX_STACK_LINE(49)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Bodhisattva","\xd1","\xa6","\xa8","\x6c"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("Bodhisattva","\xd1","\xa6","\xa8","\x6c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		tmp3->SetNounPosStringObject(HX_HCSTRING("Bodhisattva's","\x7d","\xdf","\x3c","\x65"));
		HX_STACK_LINE(50)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Buddha","\xec","\x41","\xd5","\x03"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("Buddha","\xec","\x41","\xd5","\x03"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		tmp5->SetNounPosStringObject(HX_HCSTRING("Buddha's","\x58","\xb7","\x1a","\x95"));
		HX_STACK_LINE(51)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Dimitri","\x8a","\x79","\x99","\x0f"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("Dimitri","\x8a","\x79","\x99","\x0f"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		tmp7->SetNounPosStringObject(HX_HCSTRING("Dimitri's","\x76","\x92","\x12","\x44"));
		HX_STACK_LINE(52)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Julius Caesar","\xf7","\x7a","\x10","\xa6"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("Julius Caesar","\xf7","\x7a","\x10","\xa6"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		tmp9->SetNounPosStringObject(HX_HCSTRING("Julius Caesar's","\x23","\x89","\x5e","\xa7"));
		HX_STACK_LINE(53)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Maria","\xd6","\x39","\x4f","\x96"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		::ObjectTag tmp11 = tmp10->SetNounStringObject(HX_HCSTRING("Maria","\xd6","\x39","\x4f","\x96"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		tmp11->SetNounPosStringObject(HX_HCSTRING("Maria's","\xc2","\xfd","\xf1","\x33"));
		HX_STACK_LINE(54)
		::ObjectTag tmp12 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Medusa","\xd7","\xe1","\x65","\x33"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(54)
		::ObjectTag tmp13 = tmp12->SetNounStringObject(HX_HCSTRING("Medusa","\xd7","\xe1","\x65","\x33"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(54)
		tmp13->SetNounPosStringObject(HX_HCSTRING("Medusa's","\x03","\x68","\x03","\x42"));
		HX_STACK_LINE(55)
		::ObjectTag tmp14 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(55)
		::ObjectTag tmp15 = tmp14->SetNounStringObject(HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(55)
		tmp15->SetNounPosStringObject(HX_HCSTRING("Mikael's","\xa5","\x8b","\x9c","\x27"));
		HX_STACK_LINE(56)
		::ObjectTag tmp16 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Napoleon","\xea","\xa1","\x23","\x28"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(56)
		::ObjectTag tmp17 = tmp16->SetNounStringObject(HX_HCSTRING("Napoleon","\xea","\xa1","\x23","\x28"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(56)
		tmp17->SetNounPosStringObject(HX_HCSTRING("Napoleon's","\xd6","\x92","\xbf","\x31"));
		HX_STACK_LINE(57)
		::ObjectTag tmp18 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Ramses","\xa3","\xb8","\x85","\xeb"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(57)
		::ObjectTag tmp19 = tmp18->SetNounStringObject(HX_HCSTRING("Ramses","\xa3","\xb8","\x85","\xeb"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(57)
		tmp19->SetNounPosStringObject(HX_HCSTRING("Ramses'","\x24","\xd6","\x7b","\x29"));
		HX_STACK_LINE(58)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Sphinx","\xc8","\x28","\x8e","\xf1"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(58)
		::ObjectTag tmp21 = tmp20->SetNounStringObject(HX_HCSTRING("Sphinx","\xc8","\x28","\x8e","\xf1"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(58)
		tmp21->SetNounPosStringObject(HX_HCSTRING("Sphinx's","\x34","\x0d","\x00","\x10"));
		HX_STACK_LINE(59)
		::ObjectTag tmp22 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Washington","\x70","\x1b","\x23","\x73"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(59)
		::ObjectTag tmp23 = tmp22->SetNounStringObject(HX_HCSTRING("Washington","\x70","\x1b","\x23","\x73"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(59)
		tmp23->SetNounPosStringObject(HX_HCSTRING("Washington's","\xdc","\xf9","\xb4","\xd6"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounAliveConcreteVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimateHoldAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimateHoldAbstractVoid",0xbd59a592,"CollectionTagGeneral.TagGeneralStructNounInanimateHoldAbstractVoid","CollectionTagGeneral.hx",61,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(62)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Grudge","\xf8","\xf1","\xa6","\x54"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("grudge","\xd8","\x7d","\x12","\x20"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		tmp1->SetNounSStringObject(HX_HCSTRING("grudges","\x9b","\x9f","\x1b","\xf0"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimateHoldAbstractVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimateHoldConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimateHoldConcreteVoid",0xd80bec75,"CollectionTagGeneral.TagGeneralStructNounInanimateHoldConcreteVoid","CollectionTagGeneral.hx",64,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(65)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Bat","\xb5","\x69","\x32","\x00"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("bat","\xd5","\xb1","\x4a","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		tmp1->SetNounSStringObject(HX_HCSTRING("bats","\xfe","\xe8","\x10","\x41"));
		HX_STACK_LINE(66)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Gun","\x60","\x46","\x36","\x00"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("gun","\x80","\x8e","\x4e","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		tmp3->SetNounSStringObject(HX_HCSTRING("guns","\xf3","\x21","\x6e","\x44"));
		HX_STACK_LINE(67)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Hand","\x8f","\x57","\xe1","\x2f"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("hand","\x6f","\x2b","\x08","\x45"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		tmp5->SetNounSStringObject(HX_HCSTRING("hands","\x24","\xd6","\x1d","\x22"));
		HX_STACK_LINE(68)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Pencil","\xed","\x67","\x06","\x6d"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("pencil","\xcd","\xf3","\x71","\x38"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		tmp7->SetNounSStringObject(HX_HCSTRING("pencils","\x06","\x60","\x43","\x2b"));
		HX_STACK_LINE(69)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Sword","\x9d","\x27","\x3f","\x19"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("sword","\xbd","\xb7","\x11","\x86"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(69)
		tmp9->SetNounSStringObject(HX_HCSTRING("swords","\x16","\x0e","\x6f","\xc9"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimateHoldConcreteVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimatePlaceAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimatePlaceAbstractVoid",0x188105c0,"CollectionTagGeneral.TagGeneralStructNounInanimatePlaceAbstractVoid","CollectionTagGeneral.hx",71,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(72)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Mind","\xb2","\x7a","\x35","\x33"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("mind","\x92","\x4e","\x5c","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		tmp1->SetNounSStringObject(HX_HCSTRING("minds","\xa1","\x71","\x68","\x08"));
		HX_STACK_LINE(73)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Intuition","\x37","\xb8","\x0e","\x1c"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("intuition","\x57","\xd8","\x3b","\x7a"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		tmp3->SetNounSStringObject(HX_HCSTRING("intuitions","\x3c","\x74","\x21","\x7a"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimatePlaceAbstractVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid",0x3692db37,"CollectionTagGeneral.TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid","CollectionTagGeneral.hx",75,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(76)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("India","\x57","\x0e","\x42","\x51"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		tmp->SetNounStringObject(HX_HCSTRING("India","\x57","\x0e","\x42","\x51"));
		HX_STACK_LINE(77)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Italia","\x0e","\xa3","\xf8","\x3a"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		tmp1->SetNounStringObject(HX_HCSTRING("Italia","\x0e","\xa3","\xf8","\x3a"));
		HX_STACK_LINE(78)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Netherlands","\x70","\x0e","\x67","\x5f"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(78)
		tmp2->SetNounStringObject(HX_HCSTRING("Netherlands","\x70","\x0e","\x67","\x5f"));
		HX_STACK_LINE(79)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("RussiaRussia","\xf6","\x91","\xb1","\xc3"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		tmp3->SetNounStringObject(HX_HCSTRING("Russia","\xdb","\x9d","\x80","\x73"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimatePlaceConcreteOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimatePlaceConcreteOwnerVoid",0xb7a07578,"CollectionTagGeneral.TagGeneralStructNounInanimatePlaceConcreteOwnerVoid","CollectionTagGeneral.hx",81,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(82)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Country","\x36","\xe2","\xaa","\xea"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("country","\x56","\xba","\x59","\x1d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		tmp1->SetNounSStringObject(HX_HCSTRING("countries","\x34","\xb0","\xf1","\x72"));
		HX_STACK_LINE(83)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Harbor","\x6c","\x50","\x35","\xef"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("harbor","\x4c","\xdc","\xa0","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		tmp3->SetNounSStringObject(HX_HCSTRING("harbors","\xa7","\xe6","\x1f","\x92"));
		HX_STACK_LINE(84)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("House","\x80","\x9f","\x91","\xbe"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("house","\xa0","\x2f","\x64","\x2b"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		tmp5->SetNounSStringObject(HX_HCSTRING("houses","\xd3","\x7c","\x45","\xcc"));
		HX_STACK_LINE(85)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("School","\x94","\x2c","\x5d","\x75"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("school","\x74","\xb8","\xc8","\x40"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		tmp7->SetNounSStringObject(HX_HCSTRING("schools","\x7f","\xad","\xd8","\x6e"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimatePlaceConcreteOwnerVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimateSeeAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimateSeeAbstractVoid",0x672b57cc,"CollectionTagGeneral.TagGeneralStructNounInanimateSeeAbstractVoid","CollectionTagGeneral.hx",87,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(88)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Vision","\x08","\x88","\x17","\x24"),::EnumTagType_obj::NOUN_INANIMATE_SEE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		tmp->SetNounStringObject(HX_HCSTRING("vision","\xe8","\x13","\x83","\xef"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimateSeeAbstractVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimateSeeConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimateSeeConcreteVoid",0x81dd9eaf,"CollectionTagGeneral.TagGeneralStructNounInanimateSeeConcreteVoid","CollectionTagGeneral.hx",90,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(91)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Lightning","\xea","\x18","\x1d","\x79"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		tmp->SetNounStringObject(HX_HCSTRING("lightning","\x0a","\x39","\x4a","\xd7"));
		HX_STACK_LINE(92)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Moonlight","\x15","\xd0","\x88","\xb7"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		tmp1->SetNounStringObject(HX_HCSTRING("moonlight","\x35","\xf0","\xb5","\x15"));
		HX_STACK_LINE(93)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Rainbow","\x16","\x29","\x91","\xd8"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		tmp2->SetNounStringObject(HX_HCSTRING("rainbow","\x36","\x01","\x40","\x0b"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimateSeeConcreteVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimateTitleAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimateTitleAbstractVoid",0xb5849c11,"CollectionTagGeneral.TagGeneralStructNounInanimateTitleAbstractVoid","CollectionTagGeneral.hx",95,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(96)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Commendation","\x26","\x26","\xb4","\x57"),::EnumTagType_obj::NOUN_INANIMATE_TITLE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("commendation","\x06","\xda","\xa1","\x8f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		tmp1->SetNounSStringObject(HX_HCSTRING("commendations","\xad","\xeb","\xfc","\x1d"));
		HX_STACK_LINE(97)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Job","\xdd","\x87","\x38","\x00"),::EnumTagType_obj::NOUN_INANIMATE_TITLE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("job","\xfd","\xcf","\x50","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		tmp3->SetNounSStringObject(HX_HCSTRING("jobs","\xd6","\x2d","\x65","\x46"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimateTitleAbstractVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimateWearAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimateWearAbstractVoid",0x0a6c18d2,"CollectionTagGeneral.TagGeneralStructNounInanimateWearAbstractVoid","CollectionTagGeneral.hx",99,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(100)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,true,HX_HCSTRING("Pride","\x48","\xbf","\xb8","\x5b"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		tmp->SetNounStringObject(HX_HCSTRING("pride","\x68","\x4f","\x8b","\xc8"));
		HX_STACK_LINE(101)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Shame","\x64","\x50","\x4a","\x0f"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		tmp1->SetNounStringObject(HX_HCSTRING("shame","\x84","\xe0","\x1c","\x7c"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimateWearAbstractVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructNounInanimateWearConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructNounInanimateWearConcreteVoid",0x251e5fb5,"CollectionTagGeneral.TagGeneralStructNounInanimateWearConcreteVoid","CollectionTagGeneral.hx",103,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(104)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Crown","\xd7","\xd2","\x87","\xdf"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("crown","\xf7","\x62","\x5a","\x4c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(104)
		tmp1->SetNounSStringObject(HX_HCSTRING("crowns","\x9c","\x35","\xbc","\x82"));
		HX_STACK_LINE(105)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Shirt","\xd6","\x66","\x50","\x0f"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(105)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("shirt","\xf6","\xf6","\x22","\x7c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(105)
		tmp3->SetNounSStringObject(HX_HCSTRING("shirts","\xbd","\x20","\x75","\x22"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructNounInanimateWearConcreteVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructVerbVoidIntransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructVerbVoidIntransitiveVoid",0x5bf510b6,"CollectionTagGeneral.TagGeneralStructVerbVoidIntransitiveVoid","CollectionTagGeneral.hx",107,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(108)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Die","\x20","\xf5","\x33","\x00"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		::ObjectTag tmp1 = tmp->SetVerb1StringObject(HX_HCSTRING("die","\x40","\x3d","\x4c","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::ObjectTag tmp2 = tmp1->SetVerb2StringObject(HX_HCSTRING("died","\x24","\x5b","\x69","\x42"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		::ObjectTag tmp3 = tmp2->SetVerb3StringObject(HX_HCSTRING("died","\x24","\x5b","\x69","\x42"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		::ObjectTag tmp4 = tmp3->SetVerbIngStringObject(HX_HCSTRING("dying","\x6d","\xe0","\x5c","\xe4"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		tmp4->SetVerbSStringObject(HX_HCSTRING("dies","\x33","\x5b","\x69","\x42"));
		HX_STACK_LINE(109)
		::ObjectTag tmp5 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		::ObjectTag tmp6 = tmp5->SetVerb1StringObject(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		::ObjectTag tmp7 = tmp6->SetVerb2StringObject(HX_HCSTRING("jumped","\xcd","\xb4","\x17","\x08"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(109)
		::ObjectTag tmp8 = tmp7->SetVerb3StringObject(HX_HCSTRING("jumped","\xcd","\xb4","\x17","\x08"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(109)
		::ObjectTag tmp9 = tmp8->SetVerbIngStringObject(HX_HCSTRING("jumping","\xb4","\x90","\xa9","\x0c"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(109)
		tmp9->SetVerbSStringObject(HX_HCSTRING("jumps","\xc5","\x8b","\x22","\x56"));
		HX_STACK_LINE(110)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Run","\x2b","\x9f","\x3e","\x00"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(110)
		::ObjectTag tmp11 = tmp10->SetVerb1StringObject(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(110)
		::ObjectTag tmp12 = tmp11->SetVerb2StringObject(HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(110)
		::ObjectTag tmp13 = tmp12->SetVerb3StringObject(HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(110)
		::ObjectTag tmp14 = tmp13->SetVerbIngStringObject(HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(110)
		tmp14->SetVerbSStringObject(HX_HCSTRING("runs","\xc8","\x7a","\xb3","\x4b"));
		HX_STACK_LINE(111)
		::ObjectTag tmp15 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Sing","\x6f","\xc2","\x2c","\x37"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(111)
		::ObjectTag tmp16 = tmp15->SetVerb1StringObject(HX_HCSTRING("sing","\x4f","\x96","\x53","\x4c"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(111)
		::ObjectTag tmp17 = tmp16->SetVerb2StringObject(HX_HCSTRING("sang","\x47","\x84","\x4d","\x4c"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(111)
		::ObjectTag tmp18 = tmp17->SetVerb3StringObject(HX_HCSTRING("sung","\x5b","\xb1","\x5c","\x4c"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(111)
		::ObjectTag tmp19 = tmp18->SetVerbIngStringObject(HX_HCSTRING("singing","\xf3","\x11","\x16","\x44"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(111)
		tmp19->SetVerbSStringObject(HX_HCSTRING("sings","\x44","\xef","\xcf","\x7c"));
		HX_STACK_LINE(112)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Sleep","\xf7","\x2c","\xf2","\x11"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(112)
		::ObjectTag tmp21 = tmp20->SetVerb1StringObject(HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(112)
		::ObjectTag tmp22 = tmp21->SetVerb2StringObject(HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(112)
		::ObjectTag tmp23 = tmp22->SetVerb3StringObject(HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(112)
		::ObjectTag tmp24 = tmp23->SetVerbIngStringObject(HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(112)
		tmp24->SetVerbSStringObject(HX_HCSTRING("sleeps","\x7c","\xb7","\x60","\x6d"));
		HX_STACK_LINE(113)
		::ObjectTag tmp25 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Work","\xf1","\x2d","\xd6","\x39"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(113)
		::ObjectTag tmp26 = tmp25->SetVerb1StringObject(HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(113)
		::ObjectTag tmp27 = tmp26->SetVerb2StringObject(HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(113)
		::ObjectTag tmp28 = tmp27->SetVerb3StringObject(HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(113)
		::ObjectTag tmp29 = tmp28->SetVerbIngStringObject(HX_HCSTRING("working","\xb1","\x43","\xcf","\xa0"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(113)
		tmp29->SetVerbSStringObject(HX_HCSTRING("works","\x82","\x95","\x64","\xce"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructVerbVoidIntransitiveVoid,(void))

Void CollectionTagGeneral_obj::TagGeneralStructVerbVoidTransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionTagGeneral","TagGeneralStructVerbVoidTransitiveVoid",0x4e5d0011,"CollectionTagGeneral.TagGeneralStructVerbVoidTransitiveVoid","CollectionTagGeneral.hx",115,0x9b6d1a32)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(116)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Buy","\x26","\x7b","\x32","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::ObjectTag tmp1 = tmp->SetVerb1StringObject(HX_HCSTRING("buy","\x46","\xc3","\x4a","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		::ObjectTag tmp2 = tmp1->SetVerb2StringObject(HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		::ObjectTag tmp3 = tmp2->SetVerb3StringObject(HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		::ObjectTag tmp4 = tmp3->SetVerbIngStringObject(HX_HCSTRING("buying","\x5c","\x19","\x26","\xdd"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		tmp4->SetVerbSStringObject(HX_HCSTRING("buys","\x6d","\x1a","\x20","\x41"));
		HX_STACK_LINE(117)
		::ObjectTag tmp5 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Call","\xbe","\x44","\x93","\x2c"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(117)
		::ObjectTag tmp6 = tmp5->SetVerb1StringObject(HX_HCSTRING("call","\x9e","\x18","\xba","\x41"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		::ObjectTag tmp7 = tmp6->SetVerb2StringObject(HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		::ObjectTag tmp8 = tmp7->SetVerb3StringObject(HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		::ObjectTag tmp9 = tmp8->SetVerbIngStringObject(HX_HCSTRING("calling","\x04","\xab","\x64","\x54"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		tmp9->SetVerbSStringObject(HX_HCSTRING("calls","\x15","\x72","\x1b","\x41"));
		HX_STACK_LINE(118)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Desire","\xea","\xb9","\x10","\xa4"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(118)
		::ObjectTag tmp11 = tmp10->SetVerb1StringObject(HX_HCSTRING("desire","\xca","\x45","\x7c","\x6f"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(118)
		::ObjectTag tmp12 = tmp11->SetVerb2StringObject(HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(118)
		::ObjectTag tmp13 = tmp12->SetVerb3StringObject(HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(118)
		::ObjectTag tmp14 = tmp13->SetVerbIngStringObject(HX_HCSTRING("desiring","\x87","\x35","\x74","\x7b"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(118)
		tmp14->SetVerbSStringObject(HX_HCSTRING("desires","\x69","\xcb","\x40","\x1d"));
		HX_STACK_LINE(119)
		::ObjectTag tmp15 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Drink","\xf8","\xd1","\xe9","\x72"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(119)
		::ObjectTag tmp16 = tmp15->SetVerb1StringObject(HX_HCSTRING("drink","\x18","\x62","\xbc","\xdf"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(119)
		::ObjectTag tmp17 = tmp16->SetVerb2StringObject(HX_HCSTRING("drunk","\x24","\x7d","\xc5","\xdf"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(119)
		::ObjectTag tmp18 = tmp17->SetVerb3StringObject(HX_HCSTRING("drank","\x10","\x50","\xb6","\xdf"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(119)
		::ObjectTag tmp19 = tmp18->SetVerbIngStringObject(HX_HCSTRING("drinking","\xca","\x09","\xda","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(119)
		tmp19->SetVerbSStringObject(HX_HCSTRING("drinks","\x5b","\x73","\x19","\xe5"));
		HX_STACK_LINE(120)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Drive","\xea","\xd8","\xe9","\x72"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(120)
		::ObjectTag tmp21 = tmp20->SetVerb1StringObject(HX_HCSTRING("drive","\x0a","\x69","\xbc","\xdf"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(120)
		::ObjectTag tmp22 = tmp21->SetVerb2StringObject(HX_HCSTRING("drove","\x90","\xf6","\xc0","\xdf"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(120)
		::ObjectTag tmp23 = tmp22->SetVerb3StringObject(HX_HCSTRING("driven","\x24","\x80","\x1f","\xe5"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(120)
		::ObjectTag tmp24 = tmp23->SetVerbIngStringObject(HX_HCSTRING("driving","\xc7","\xa8","\x73","\x96"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(120)
		tmp24->SetVerbSStringObject(HX_HCSTRING("drives","\x29","\x80","\x1f","\xe5"));
		HX_STACK_LINE(121)
		::ObjectTag tmp25 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Eat","\x78","\xb0","\x34","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(121)
		::ObjectTag tmp26 = tmp25->SetVerb1StringObject(HX_HCSTRING("eat","\x98","\xf8","\x4c","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(121)
		::ObjectTag tmp27 = tmp26->SetVerb2StringObject(HX_HCSTRING("ate","\x12","\x00","\x4a","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(121)
		::ObjectTag tmp28 = tmp27->SetVerb3StringObject(HX_HCSTRING("eaten","\x01","\xa7","\xee","\x67"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(121)
		::ObjectTag tmp29 = tmp28->SetVerbIngStringObject(HX_HCSTRING("eating","\x4a","\x83","\xe6","\x88"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(121)
		tmp29->SetVerbSStringObject(HX_HCSTRING("eats","\xdb","\x8c","\x0c","\x43"));
		HX_STACK_LINE(122)
		::ObjectTag tmp30 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Fight","\xb0","\x85","\xc2","\x93"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(122)
		::ObjectTag tmp31 = tmp30->SetVerb1StringObject(HX_HCSTRING("fight","\xd0","\x15","\x95","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(122)
		::ObjectTag tmp32 = tmp31->SetVerb2StringObject(HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(122)
		::ObjectTag tmp33 = tmp32->SetVerb3StringObject(HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(122)
		::ObjectTag tmp34 = tmp33->SetVerbIngStringObject(HX_HCSTRING("fighting","\x12","\x79","\xd2","\x35"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(122)
		tmp34->SetVerbSStringObject(HX_HCSTRING("fights","\xa3","\x00","\xde","\x81"));
		HX_STACK_LINE(123)
		::ObjectTag tmp35 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(123)
		::ObjectTag tmp36 = tmp35->SetVerb1StringObject(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(123)
		::ObjectTag tmp37 = tmp36->SetVerb2StringObject(HX_HCSTRING("got","\x4c","\x89","\x4e","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(123)
		::ObjectTag tmp38 = tmp37->SetVerb3StringObject(HX_HCSTRING("gotten","\x11","\xac","\x41","\x65"));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(123)
		::ObjectTag tmp39 = tmp38->SetVerbIngStringObject(HX_HCSTRING("getting","\x84","\x50","\xa6","\x34"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(123)
		tmp39->SetVerbSStringObject(HX_HCSTRING("gets","\x1d","\x03","\x62","\x44"));
		HX_STACK_LINE(124)
		::ObjectTag tmp40 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,true,HX_HCSTRING("Grab","\xec","\xfb","\x44","\x2f"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(124)
		::ObjectTag tmp41 = tmp40->SetVerb1StringObject(HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(124)
		::ObjectTag tmp42 = tmp41->SetVerb2StringObject(HX_HCSTRING("grabed","\x2b","\xb3","\xd8","\x12"));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(124)
		::ObjectTag tmp43 = tmp42->SetVerb3StringObject(HX_HCSTRING("grabed","\x2b","\xb3","\xd8","\x12"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(124)
		::ObjectTag tmp44 = tmp43->SetVerbIngStringObject(HX_HCSTRING("grabbing","\x8c","\x9b","\xd4","\xfe"));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(124)
		tmp44->SetVerbSStringObject(HX_HCSTRING("grabs","\x27","\x03","\xea","\x99"));
		HX_STACK_LINE(125)
		::ObjectTag tmp45 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,true,HX_HCSTRING("Kill","\xbe","\x0b","\xe3","\x31"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(125)
		::ObjectTag tmp46 = tmp45->SetVerb1StringObject(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(125)
		::ObjectTag tmp47 = tmp46->SetVerb2StringObject(HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(125)
		::ObjectTag tmp48 = tmp47->SetVerb3StringObject(HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(125)
		::ObjectTag tmp49 = tmp48->SetVerbIngStringObject(HX_HCSTRING("killing","\x04","\x44","\xeb","\xd3"));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(125)
		tmp49->SetVerbSStringObject(HX_HCSTRING("kills","\x15","\xcb","\x99","\xe1"));
		HX_STACK_LINE(126)
		::ObjectTag tmp50 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,true,HX_HCSTRING("Love","\x92","\xd8","\x90","\x32"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(126)
		::ObjectTag tmp51 = tmp50->SetVerb1StringObject(HX_HCSTRING("love","\x72","\xac","\xb7","\x47"));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(126)
		::ObjectTag tmp52 = tmp51->SetVerb2StringObject(HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(126)
		::ObjectTag tmp53 = tmp52->SetVerb3StringObject(HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(126)
		::ObjectTag tmp54 = tmp53->SetVerbIngStringObject(HX_HCSTRING("loving","\x2f","\x96","\x54","\x66"));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(126)
		tmp54->SetVerbSStringObject(HX_HCSTRING("loves","\xc1","\x37","\xff","\x78"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionTagGeneral_obj,TagGeneralStructVerbVoidTransitiveVoid,(void))


CollectionTagGeneral_obj::CollectionTagGeneral_obj()
{
}

bool CollectionTagGeneral_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"tagObject") ) { outValue = tagObject; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"TagGeneralStructVoid") ) { outValue = TagGeneralStructVoid_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"TagGeneralStructAdjVoid") ) { outValue = TagGeneralStructAdjVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TagGeneralStructAdvVoid") ) { outValue = TagGeneralStructAdvVoid_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounAliveAbstractVoid") ) { outValue = TagGeneralStructNounAliveAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounAliveConcreteVoid") ) { outValue = TagGeneralStructNounAliveConcreteVoid_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"TagGeneralStructVerbVoidTransitiveVoid") ) { outValue = TagGeneralStructVerbVoidTransitiveVoid_dyn(); return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"TagGeneralStructVerbVoidIntransitiveVoid") ) { outValue = TagGeneralStructVerbVoidIntransitiveVoid_dyn(); return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimateSeeAbstractVoid") ) { outValue = TagGeneralStructNounInanimateSeeAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimateSeeConcreteVoid") ) { outValue = TagGeneralStructNounInanimateSeeConcreteVoid_dyn(); return true;  }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimateHoldAbstractVoid") ) { outValue = TagGeneralStructNounInanimateHoldAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimateHoldConcreteVoid") ) { outValue = TagGeneralStructNounInanimateHoldConcreteVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimateWearAbstractVoid") ) { outValue = TagGeneralStructNounInanimateWearAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimateWearConcreteVoid") ) { outValue = TagGeneralStructNounInanimateWearConcreteVoid_dyn(); return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimatePlaceAbstractVoid") ) { outValue = TagGeneralStructNounInanimatePlaceAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimateTitleAbstractVoid") ) { outValue = TagGeneralStructNounInanimateTitleAbstractVoid_dyn(); return true;  }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimatePlaceConcreteOwnerVoid") ) { outValue = TagGeneralStructNounInanimatePlaceConcreteOwnerVoid_dyn(); return true;  }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid") ) { outValue = TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::ObjectTag*/ ,(void *) &CollectionTagGeneral_obj::tagObject,HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionTagGeneral_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CollectionTagGeneral_obj::tagObject,"tagObject");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionTagGeneral_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CollectionTagGeneral_obj::tagObject,"tagObject");
};

#endif

hx::Class CollectionTagGeneral_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"),
	HX_HCSTRING("TagGeneralStructVoid","\xf7","\xf5","\xb0","\xfa"),
	HX_HCSTRING("TagGeneralStructAdjVoid","\x58","\x56","\x24","\x23"),
	HX_HCSTRING("TagGeneralStructAdvVoid","\x64","\x4c","\xf3","\x0b"),
	HX_HCSTRING("TagGeneralStructNounAliveAbstractVoid","\x86","\x30","\x71","\x3d"),
	HX_HCSTRING("TagGeneralStructNounAliveConcreteVoid","\x69","\x77","\x23","\x58"),
	HX_HCSTRING("TagGeneralStructNounInanimateHoldAbstractVoid","\x74","\x3d","\x32","\x0b"),
	HX_HCSTRING("TagGeneralStructNounInanimateHoldConcreteVoid","\x57","\x84","\xe4","\x25"),
	HX_HCSTRING("TagGeneralStructNounInanimatePlaceAbstractVoid","\x9e","\x53","\x2d","\xe8"),
	HX_HCSTRING("TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid","\x19","\x25","\x79","\xba"),
	HX_HCSTRING("TagGeneralStructNounInanimatePlaceConcreteOwnerVoid","\xda","\x22","\x77","\xd6"),
	HX_HCSTRING("TagGeneralStructNounInanimateSeeAbstractVoid","\x2a","\xd2","\x7d","\x21"),
	HX_HCSTRING("TagGeneralStructNounInanimateSeeConcreteVoid","\x0d","\x19","\x30","\x3c"),
	HX_HCSTRING("TagGeneralStructNounInanimateTitleAbstractVoid","\xef","\xe9","\x30","\x85"),
	HX_HCSTRING("TagGeneralStructNounInanimateWearAbstractVoid","\xb4","\xb0","\x44","\x58"),
	HX_HCSTRING("TagGeneralStructNounInanimateWearConcreteVoid","\x97","\xf7","\xf6","\x72"),
	HX_HCSTRING("TagGeneralStructVerbVoidIntransitiveVoid","\x14","\x84","\xe7","\x80"),
	HX_HCSTRING("TagGeneralStructVerbVoidTransitiveVoid","\xef","\x3f","\xd9","\xeb"),
	::String(null()) };

void CollectionTagGeneral_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionTagGeneral","\x0c","\xb8","\x47","\x72");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CollectionTagGeneral_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CollectionTagGeneral_obj >;
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

void CollectionTagGeneral_obj::__boot()
{
	tagObject= null();
}

