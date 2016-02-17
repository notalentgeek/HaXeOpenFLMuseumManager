#include <hxcpp.h>

#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionPremadeTag
#include <CollectionPremadeTag.h>
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

Void CollectionPremadeTag_obj::__construct()
{
HX_STACK_FRAME("CollectionPremadeTag","new",0x99899cd2,"CollectionPremadeTag.new","CollectionPremadeTag.hx",16,0xe1b162de)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CollectionPremadeTag_obj::~CollectionPremadeTag_obj() { }

Dynamic CollectionPremadeTag_obj::__CreateEmpty() { return  new CollectionPremadeTag_obj; }
hx::ObjectPtr< CollectionPremadeTag_obj > CollectionPremadeTag_obj::__new()
{  hx::ObjectPtr< CollectionPremadeTag_obj > _result_ = new CollectionPremadeTag_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionPremadeTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionPremadeTag_obj > _result_ = new CollectionPremadeTag_obj();
	_result_->__construct();
	return _result_;}

Void CollectionPremadeTag_obj::PremadeTagStructVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVoid",0xf0ef6e19,"CollectionPremadeTag.PremadeTagStructVoid","CollectionPremadeTag.hx",17,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(19)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("aged","\xc5","\x32","\x6c","\x40"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		tmp->SetAdjectiveStringObject(HX_HCSTRING("aged","\xc5","\x32","\x6c","\x40"));
		HX_STACK_LINE(20)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("animal","\x3c","\x41","\x6c","\x64"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(20)
		::ObjectTag tmp2 = tmp1->SetNounStringObject(HX_HCSTRING("animal","\x3c","\x41","\x6c","\x64"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		::ObjectTag tmp3 = tmp2->SetNounPosStringObject(HX_HCSTRING("animal's","\xa8","\x2a","\xec","\x88"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(20)
		::ObjectTag tmp4 = tmp3->SetNounSStringObject(HX_HCSTRING("animals","\xb7","\xd3","\x4c","\x7a"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(20)
		tmp4->SetNounSPosStringObject(HX_HCSTRING("animals'","\x90","\x6c","\xec","\x88"));
		HX_STACK_LINE(21)
		::ObjectTag tmp5 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("archaeologist","\xfb","\x3f","\x0b","\x8c"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(21)
		::ObjectTag tmp6 = tmp5->SetNounStringObject(HX_HCSTRING("archaeologist","\xfb","\x3f","\x0b","\x8c"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(21)
		::ObjectTag tmp7 = tmp6->SetNounPosStringObject(HX_HCSTRING("archaeologist's","\x27","\x97","\x57","\x15"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(21)
		::ObjectTag tmp8 = tmp7->SetNounSStringObject(HX_HCSTRING("archaeologists","\x18","\xbc","\xcc","\xfd"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(21)
		tmp8->SetNounSPosStringObject(HX_HCSTRING("archaeologists'","\x0f","\xd9","\x57","\x15"));
		HX_STACK_LINE(22)
		::ObjectTag tmp9 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("belt","\x0b","\xeb","\x13","\x41"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		::ObjectTag tmp10 = tmp9->SetNounStringObject(HX_HCSTRING("belt","\x0b","\xeb","\x13","\x41"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		tmp10->SetNounSStringObject(HX_HCSTRING("belts","\x08","\xbf","\x59","\xb0"));
		HX_STACK_LINE(23)
		::ObjectTag tmp11 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("bowl","\x22","\x8b","\x1b","\x41"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(23)
		::ObjectTag tmp12 = tmp11->SetNounStringObject(HX_HCSTRING("bowl","\x22","\x8b","\x1b","\x41"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(23)
		tmp12->SetNounSStringObject(HX_HCSTRING("bowls","\x11","\x33","\xfe","\xb6"));
		HX_STACK_LINE(24)
		::ObjectTag tmp13 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Bo\xc4""\x9f""azk\xc3""\xb6""y","\xfc","\xc0","\x22","\xf7"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(24)
		tmp13->SetNounStringObject(HX_HCSTRING("Bo\xc4""\x9f""azk\xc3""\xb6""y","\xfc","\xc0","\x22","\xf7"));
		HX_STACK_LINE(25)
		::ObjectTag tmp14 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("bronze","\x5a","\x0f","\x5a","\x1c"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(25)
		tmp14->SetAdjectiveStringObject(HX_HCSTRING("bronze","\x5a","\x0f","\x5a","\x1c"));
		HX_STACK_LINE(26)
		::ObjectTag tmp15 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("burial","\xb5","\x8f","\x85","\xd8"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(26)
		::ObjectTag tmp16 = tmp15->SetNounStringObject(HX_HCSTRING("burial","\xb5","\x8f","\x85","\xd8"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(26)
		tmp16->SetNounSStringObject(HX_HCSTRING("burials","\x1e","\x2f","\x58","\x9c"));
		HX_STACK_LINE(27)
		::ObjectTag tmp17 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Caenby","\x3e","\xcc","\xdd","\xe6"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(27)
		tmp17->SetNounStringObject(HX_HCSTRING("Caenby","\x3e","\xcc","\xdd","\xe6"));
		HX_STACK_LINE(28)
		::ObjectTag tmp18 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Cannatello","\x1b","\x62","\x0a","\x89"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(28)
		tmp18->SetNounStringObject(HX_HCSTRING("Cannatello","\x1b","\x62","\x0a","\x89"));
		HX_STACK_LINE(29)
		::ObjectTag tmp19 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Cape Gelidonya","\xc3","\x56","\x42","\x7c"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(29)
		tmp19->SetNounStringObject(HX_HCSTRING("Cape Gelidonya","\xc3","\x56","\x42","\x7c"));
		HX_STACK_LINE(30)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("chain","\x01","\x95","\xb3","\x45"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(30)
		::ObjectTag tmp21 = tmp20->SetNounStringObject(HX_HCSTRING("chain","\x01","\x95","\xb3","\x45"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(30)
		tmp21->SetNounSStringObject(HX_HCSTRING("chains","\x52","\xcc","\x6e","\xb7"));
		HX_STACK_LINE(31)
		::ObjectTag tmp22 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("cista","\xba","\x7d","\x6a","\x46"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(31)
		::ObjectTag tmp23 = tmp22->SetNounStringObject(HX_HCSTRING("cista","\xba","\x7d","\x6a","\x46"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(31)
		tmp23->SetNounSStringObject(HX_HCSTRING("cistas","\x79","\x85","\xc3","\x56"));
		HX_STACK_LINE(32)
		::ObjectTag tmp24 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("club","\x36","\x79","\xc2","\x41"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(32)
		::ObjectTag tmp25 = tmp24->SetNounStringObject(HX_HCSTRING("club","\x36","\x79","\xc2","\x41"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(32)
		tmp25->SetNounSStringObject(HX_HCSTRING("clubs","\x7d","\x96","\x67","\x48"));
		HX_STACK_LINE(33)
		::ObjectTag tmp26 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("copper","\x19","\x57","\x2c","\xc9"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(33)
		tmp26->SetAdjectiveStringObject(HX_HCSTRING("copper","\x19","\x57","\x2c","\xc9"));
		HX_STACK_LINE(34)
		::ObjectTag tmp27 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("cosmetic","\x4f","\x47","\x23","\x27"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(34)
		::ObjectTag tmp28 = tmp27->SetNounStringObject(HX_HCSTRING("cosmetic","\x4f","\x47","\x23","\x27"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(34)
		tmp28->SetNounSStringObject(HX_HCSTRING("cosmetics","\x44","\x1e","\xbb","\x17"));
		HX_STACK_LINE(35)
		::ObjectTag tmp29 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("cradleboard","\x7b","\x4a","\x61","\x60"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(35)
		::ObjectTag tmp30 = tmp29->SetNounStringObject(HX_HCSTRING("cradleboard","\x7b","\x4a","\x61","\x60"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(35)
		tmp30->SetNounSStringObject(HX_HCSTRING("cradleboards","\x98","\xe1","\xbf","\xf4"));
		HX_STACK_LINE(36)
		::ObjectTag tmp31 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("crest","\xf7","\xc8","\x52","\x4c"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(36)
		::ObjectTag tmp32 = tmp31->SetNounStringObject(HX_HCSTRING("crest","\xf7","\xc8","\x52","\x4c"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(36)
		tmp32->SetNounSStringObject(HX_HCSTRING("crests","\x9c","\x0f","\x1d","\x7c"));
		HX_STACK_LINE(37)
		::ObjectTag tmp33 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Crete","\xa7","\x39","\x80","\xdf"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(37)
		tmp33->SetNounStringObject(HX_HCSTRING("Crete","\xa7","\x39","\x80","\xdf"));
		HX_STACK_LINE(38)
		::ObjectTag tmp34 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("crouch","\x7a","\xa7","\xba","\x82"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(38)
		::ObjectTag tmp35 = tmp34->SetVerb1StringObject(HX_HCSTRING("crouch","\x7a","\xa7","\xba","\x82"));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(38)
		::ObjectTag tmp36 = tmp35->SetVerb2StringObject(HX_HCSTRING("crouched","\x59","\x52","\x4f","\xa4"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(38)
		::ObjectTag tmp37 = tmp36->SetVerb3StringObject(HX_HCSTRING("crouched","\x59","\x52","\x4f","\xa4"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(38)
		::ObjectTag tmp38 = tmp37->SetVerbIngStringObject(HX_HCSTRING("crouching","\xa8","\xcd","\x1b","\x21"));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(38)
		tmp38->SetVerbSStringObject(HX_HCSTRING("crouchs","\xb9","\xe3","\x97","\xe0"));
		HX_STACK_LINE(39)
		::ObjectTag tmp39 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Crown of Thorn","\x77","\x9b","\x39","\x37"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(39)
		::ObjectTag tmp40 = tmp39->SetNounStringObject(HX_HCSTRING("Crown of Thorn","\x77","\x9b","\x39","\x37"));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(39)
		tmp40->SetNounSStringObject(HX_HCSTRING("Crown of Thorns","\x1c","\x6d","\x2e","\x1b"));
		HX_STACK_LINE(40)
		::ObjectTag tmp41 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Cypriot","\x76","\x16","\xd8","\x0b"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(40)
		tmp41->SetNounStringObject(HX_HCSTRING("Cypriot","\x76","\x16","\xd8","\x0b"));
		HX_STACK_LINE(41)
		::ObjectTag tmp42 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Cyprus","\xb6","\x2a","\xc4","\xbf"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(41)
		tmp42->SetNounStringObject(HX_HCSTRING("Cyprus","\xb6","\x2a","\xc4","\xbf"));
		HX_STACK_LINE(42)
		::ObjectTag tmp43 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Cyprus","\xb6","\x2a","\xc4","\xbf"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(42)
		tmp43->SetNounStringObject(HX_HCSTRING("Cyprus","\xb6","\x2a","\xc4","\xbf"));
		HX_STACK_LINE(43)
		::ObjectTag tmp44 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Egypt","\x7b","\x33","\x17","\xff"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(43)
		tmp44->SetNounStringObject(HX_HCSTRING("Egypt","\x7b","\x33","\x17","\xff"));
		HX_STACK_LINE(44)
		::ObjectTag tmp45 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("England","\xa9","\x78","\x7d","\xc6"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(44)
		tmp45->SetNounStringObject(HX_HCSTRING("England","\xa9","\x78","\x7d","\xc6"));
		HX_STACK_LINE(45)
		::ObjectTag tmp46 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("female","\x8c","\x9f","\x35","\x38"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(45)
		::ObjectTag tmp47 = tmp46->SetNounStringObject(HX_HCSTRING("female","\x8c","\x9f","\x35","\x38"));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(45)
		::ObjectTag tmp48 = tmp47->SetNounPosStringObject(HX_HCSTRING("female's","\xf8","\xbc","\x85","\xe8"));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(45)
		::ObjectTag tmp49 = tmp48->SetNounSStringObject(HX_HCSTRING("females","\x67","\xfb","\xb5","\xf6"));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(45)
		tmp49->SetNounSPosStringObject(HX_HCSTRING("females'","\xe0","\xfe","\x85","\xe8"));
		HX_STACK_LINE(46)
		::ObjectTag tmp50 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Ferdinand de Rothschild","\x1a","\xeb","\x24","\x3f"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(46)
		::ObjectTag tmp51 = tmp50->SetNounStringObject(HX_HCSTRING("Ferdinand de Rothschild","\x1a","\xeb","\x24","\x3f"));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(46)
		tmp51->SetNounPosStringObject(HX_HCSTRING("Ferdinand de Rothschild's","\x06","\x88","\x89","\x02"));
		HX_STACK_LINE(47)
		::ObjectTag tmp52 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("figurine","\x5f","\x96","\xb5","\xb0"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(47)
		::ObjectTag tmp53 = tmp52->SetNounStringObject(HX_HCSTRING("figurine","\x5f","\x96","\xb5","\xb0"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(47)
		tmp53->SetNounSStringObject(HX_HCSTRING("figurines","\x34","\xfd","\x2d","\xee"));
		HX_STACK_LINE(48)
		::ObjectTag tmp54 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("garnet","\x45","\x92","\x4e","\x54"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(48)
		::ObjectTag tmp55 = tmp54->SetNounStringObject(HX_HCSTRING("garnet","\x45","\x92","\x4e","\x54"));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(48)
		tmp55->SetNounSStringObject(HX_HCSTRING("garnets","\x8e","\x6a","\x71","\x70"));
		HX_STACK_LINE(49)
		::ObjectTag tmp56 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("gold","\xa0","\x92","\x69","\x44"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(49)
		::ObjectTag tmp57 = tmp56->SetNounStringObject(HX_HCSTRING("club","\x36","\x79","\xc2","\x41"));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(49)
		tmp57->SetNounSStringObject(HX_HCSTRING("clubs","\x7d","\x96","\x67","\x48"));
		HX_STACK_LINE(50)
		::ObjectTag tmp58 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("gold","\xa0","\x92","\x69","\x44"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(50)
		::ObjectTag tmp59 = tmp58->SetNounStringObject(HX_HCSTRING("gold","\xa0","\x92","\x69","\x44"));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(50)
		tmp59->SetNounSStringObject(HX_HCSTRING("golds","\xd3","\xb9","\xf6","\x97"));
		HX_STACK_LINE(51)
		::ObjectTag tmp60 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("goldsmith","\x23","\xf3","\x2f","\xb2"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(51)
		::ObjectTag tmp61 = tmp60->SetNounStringObject(HX_HCSTRING("goldsmith","\x23","\xf3","\x2f","\xb2"));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(51)
		::ObjectTag tmp62 = tmp61->SetNounPosStringObject(HX_HCSTRING("goldsmith's","\x4f","\x64","\x6d","\x94"));		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(51)
		::ObjectTag tmp63 = tmp62->SetNounSStringObject(HX_HCSTRING("goldsmiths","\xf0","\xcb","\xc4","\x37"));		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(51)
		tmp63->SetNounSPosStringObject(HX_HCSTRING("goldsmiths'","\x37","\xa6","\x6d","\x94"));
		HX_STACK_LINE(52)
		::ObjectTag tmp64 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Hattusa","\x0a","\x9d","\x28","\x92"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(52)
		tmp64->SetNounStringObject(HX_HCSTRING("Hattusa","\x0a","\x9d","\x28","\x92"));
		HX_STACK_LINE(53)
		::ObjectTag tmp65 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("helmet","\xad","\x36","\x4c","\x04"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(53)
		::ObjectTag tmp66 = tmp65->SetNounStringObject(HX_HCSTRING("helmet","\xad","\x36","\x4c","\x04"));		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(53)
		tmp66->SetNounSStringObject(HX_HCSTRING("helmets","\x26","\xa1","\x63","\xbe"));
		HX_STACK_LINE(54)
		::ObjectTag tmp67 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Hittite","\xd9","\x65","\xfa","\xc4"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(54)
		tmp67->SetNounStringObject(HX_HCSTRING("Hittite","\xd9","\x65","\xfa","\xc4"));
		HX_STACK_LINE(55)
		::ObjectTag tmp68 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("infant","\xa6","\x70","\x42","\x95"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(55)
		::ObjectTag tmp69 = tmp68->SetNounStringObject(HX_HCSTRING("infant","\xa6","\x70","\x42","\x95"));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(55)
		::ObjectTag tmp70 = tmp69->SetNounPosStringObject(HX_HCSTRING("infant's","\x92","\x88","\x3c","\x3f"));		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(55)
		::ObjectTag tmp71 = tmp70->SetNounSStringObject(HX_HCSTRING("infants","\x0d","\x21","\xe0","\x04"));		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(55)
		tmp71->SetNounSPosStringObject(HX_HCSTRING("infants'","\x7a","\xca","\x3c","\x3f"));
		HX_STACK_LINE(56)
		::ObjectTag tmp72 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("ingot","\x87","\xea","\x16","\xbe"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(56)
		::ObjectTag tmp73 = tmp72->SetNounStringObject(HX_HCSTRING("ingot","\x87","\xea","\x16","\xbe"));		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(56)
		tmp73->SetNounSStringObject(HX_HCSTRING("ingots","\x0c","\x4c","\xf6","\x95"));
		HX_STACK_LINE(57)
		::ObjectTag tmp74 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("item","\x13","\xc5","\xbf","\x45"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(57)
		::ObjectTag tmp75 = tmp74->SetNounStringObject(HX_HCSTRING("item","\x13","\xc5","\xbf","\x45"));		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(57)
		tmp75->SetNounSStringObject(HX_HCSTRING("items","\x00","\xac","\x0c","\xc2"));
		HX_STACK_LINE(58)
		::ObjectTag tmp76 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("jade","\xf8","\x8f","\x5a","\x46"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(58)
		::ObjectTag tmp77 = tmp76->SetNounStringObject(HX_HCSTRING("jade","\xf8","\x8f","\x5a","\x46"));		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(58)
		tmp77->SetNounSStringObject(HX_HCSTRING("jades","\x7b","\x69","\xe3","\x48"));
		HX_STACK_LINE(59)
		::ObjectTag tmp78 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("James","\xa4","\xad","\x17","\xdc"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(59)
		::ObjectTag tmp79 = tmp78->SetNounStringObject(HX_HCSTRING("James","\xa4","\xad","\x17","\xdc"));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(59)
		tmp79->SetNounPosStringObject(HX_HCSTRING("James'","\x03","\x42","\xa0","\xb8"));
		HX_STACK_LINE(60)
		::ObjectTag tmp80 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Crown of Thorn","\x77","\x9b","\x39","\x37"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(60)
		::ObjectTag tmp81 = tmp80->SetNounStringObject(HX_HCSTRING("Crown of Thorn","\x77","\x9b","\x39","\x37"));		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(60)
		tmp81->SetNounSStringObject(HX_HCSTRING("Crown of Thorns","\x1c","\x6d","\x2e","\x1b"));
		HX_STACK_LINE(61)
		::ObjectTag tmp82 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("jewel","\xc3","\xae","\x96","\x4b"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(61)
		::ObjectTag tmp83 = tmp82->SetNounStringObject(HX_HCSTRING("jewel","\xc3","\xae","\x96","\x4b"));		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(61)
		tmp83->SetNounSStringObject(HX_HCSTRING("jewels","\x50","\x3c","\x42","\xd8"));
		HX_STACK_LINE(62)
		::ObjectTag tmp84 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("John, Duke of Berry","\x63","\x0c","\x4d","\x43"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(62)
		::ObjectTag tmp85 = tmp84->SetNounStringObject(HX_HCSTRING("John, Duke of Berry","\x63","\x0c","\x4d","\x43"));		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(62)
		tmp85->SetNounPosStringObject(HX_HCSTRING("John, Duke of Berry's","\x8f","\x4d","\xf3","\x79"));
		HX_STACK_LINE(63)
		::ObjectTag tmp86 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Lincolnshire","\xa8","\xe2","\xbb","\x62"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(63)
		tmp86->SetNounStringObject(HX_HCSTRING("Lincolnshire","\xa8","\xe2","\xbb","\x62"));
		HX_STACK_LINE(64)
		::ObjectTag tmp87 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("lion","\xdc","\x18","\xb3","\x47"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(64)
		::ObjectTag tmp88 = tmp87->SetNounStringObject(HX_HCSTRING("lion","\xdc","\x18","\xb3","\x47"));		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(64)
		::ObjectTag tmp89 = tmp88->SetNounPosStringObject(HX_HCSTRING("lion's","\x48","\x2a","\x50","\xed"));		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(64)
		::ObjectTag tmp90 = tmp89->SetNounSStringObject(HX_HCSTRING("lions","\x17","\xa8","\x02","\x75"));		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(64)
		tmp90->SetNounSPosStringObject(HX_HCSTRING("lions'","\x30","\x6c","\x50","\xed"));
		HX_STACK_LINE(65)
		::ObjectTag tmp91 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Louvre","\x77","\xb4","\x49","\x9a"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(65)
		tmp91->SetNounStringObject(HX_HCSTRING("Louvre","\x77","\xb4","\x49","\x9a"));
		HX_STACK_LINE(66)
		::ObjectTag tmp92 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(66)
		::ObjectTag tmp93 = tmp92->SetNounStringObject(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(66)
		tmp93->SetNounSStringObject(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
		HX_STACK_LINE(67)
		::ObjectTag tmp94 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("masked","\x4b","\xac","\x19","\xbb"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(67)
		tmp94->SetAdjectiveStringObject(HX_HCSTRING("masked","\x4b","\xac","\x19","\xbb"));
		HX_STACK_LINE(68)
		::ObjectTag tmp95 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Mauri","\x78","\x88","\x51","\x96"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(68)
		::ObjectTag tmp96 = tmp95->SetNounStringObject(HX_HCSTRING("Mauri","\x78","\x88","\x51","\x96"));		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(68)
		::ObjectTag tmp97 = tmp96->SetNounPosStringObject(HX_HCSTRING("Mauri's","\xe4","\xb8","\x1e","\xf4"));		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(68)
		::ObjectTag tmp98 = tmp97->SetNounSStringObject(HX_HCSTRING("Mauris","\xfb","\xe0","\x05","\xf1"));		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(68)
		tmp98->SetNounSPosStringObject(HX_HCSTRING("Mauris'","\xcc","\xfa","\x1e","\xf4"));
		HX_STACK_LINE(69)
		::ObjectTag tmp99 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Mediterranean","\x17","\x64","\x42","\x83"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(69)
		tmp99->SetNounStringObject(HX_HCSTRING("Mediterranean","\x17","\x64","\x42","\x83"));
		HX_STACK_LINE(70)
		::ObjectTag tmp100 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("metal","\x07","\x22","\xc8","\x05"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(70)
		tmp100->SetAdjectiveStringObject(HX_HCSTRING("metal","\x07","\x22","\xc8","\x05"));
		HX_STACK_LINE(71)
		::ObjectTag tmp101 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("oval","\xd2","\x8d","\xb8","\x49"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(71)
		tmp101->SetAdjectiveStringObject(HX_HCSTRING("oval","\xd2","\x8d","\xb8","\x49"));
		HX_STACK_LINE(72)
		::ObjectTag tmp102 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("oxhide","\x6b","\xde","\xc0","\xbe"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(72)
		::ObjectTag tmp103 = tmp102->SetNounStringObject(HX_HCSTRING("oxhide","\x6b","\xde","\xc0","\xbe"));		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(72)
		tmp103->SetNounSStringObject(HX_HCSTRING("oxhides","\xa8","\xbf","\x01","\x2a"));
		HX_STACK_LINE(73)
		::ObjectTag tmp104 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Paris","\x6b","\xf7","\x82","\x50"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(73)
		tmp104->SetNounStringObject(HX_HCSTRING("Paris","\x6b","\xf7","\x82","\x50"));
		HX_STACK_LINE(74)
		::ObjectTag tmp105 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("pearl","\x86","\x83","\xed","\xbf"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(74)
		::ObjectTag tmp106 = tmp105->SetNounStringObject(HX_HCSTRING("pearl","\x86","\x83","\xed","\xbf"));		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(74)
		tmp106->SetNounSStringObject(HX_HCSTRING("pearls","\x2d","\x92","\xe5","\x2f"));
		HX_STACK_LINE(75)
		::ObjectTag tmp107 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Peloponnese","\xc0","\xe8","\xb1","\x1f"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(75)
		::ObjectTag tmp108 = tmp107->SetNounStringObject(HX_HCSTRING("Peloponnese","\xc0","\xe8","\xb1","\x1f"));		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(75)
		::ObjectTag tmp109 = tmp108->SetNounPosStringObject(HX_HCSTRING("Peloponnese's","\x2c","\xbb","\x8d","\xde"));		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(75)
		::ObjectTag tmp110 = tmp109->SetNounSStringObject(HX_HCSTRING("Peloponneses","\xb3","\xbf","\xf9","\x9b"));		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(75)
		tmp110->SetNounSPosStringObject(HX_HCSTRING("Peloponneses'","\x14","\xfd","\x8d","\xde"));
		HX_STACK_LINE(76)
		::ObjectTag tmp111 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("pendant","\x5c","\x86","\xe6","\x2b"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(76)
		::ObjectTag tmp112 = tmp111->SetNounStringObject(HX_HCSTRING("Crown of Thorn","\x77","\x9b","\x39","\x37"));		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(76)
		tmp112->SetNounSStringObject(HX_HCSTRING("Crown of Thorns","\x1c","\x6d","\x2e","\x1b"));
		HX_STACK_LINE(77)
		::ObjectTag tmp113 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Qantir-Piramesse","\xf7","\xf7","\x03","\x97"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(77)
		tmp113->SetNounStringObject(HX_HCSTRING("Qantir-Piramesse","\xf7","\xf7","\x03","\x97"));
		HX_STACK_LINE(78)
		::ObjectTag tmp114 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("reliquary","\x14","\x47","\xd6","\x64"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(78)
		::ObjectTag tmp115 = tmp114->SetNounStringObject(HX_HCSTRING("reliquary","\x14","\x47","\xd6","\x64"));		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(78)
		tmp115->SetNounSStringObject(HX_HCSTRING("reliquaries","\x72","\x68","\x39","\xfc"));
		HX_STACK_LINE(79)
		::ObjectTag tmp116 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("rose","\x8f","\xf1","\xae","\x4b"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(79)
		::ObjectTag tmp117 = tmp116->SetNounStringObject(HX_HCSTRING("club","\x36","\x79","\xc2","\x41"));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(79)
		tmp117->SetNounSStringObject(HX_HCSTRING("clubs","\x7d","\x96","\x67","\x48"));
		HX_STACK_LINE(80)
		::ObjectTag tmp118 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("sapphire","\x02","\xe6","\x32","\xfd"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(80)
		::ObjectTag tmp119 = tmp118->SetNounStringObject(HX_HCSTRING("club","\x36","\x79","\xc2","\x41"));		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(80)
		tmp119->SetNounSStringObject(HX_HCSTRING("clubs","\x7d","\x96","\x67","\x48"));
		HX_STACK_LINE(81)
		::ObjectTag tmp120 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("ship","\xbc","\xcf","\x52","\x4c"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(81)
		::ObjectTag tmp121 = tmp120->SetNounStringObject(HX_HCSTRING("ship","\xbc","\xcf","\x52","\x4c"));		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(81)
		tmp121->SetNounSStringObject(HX_HCSTRING("ships","\x37","\xf5","\x22","\x7c"));
		HX_STACK_LINE(82)
		::ObjectTag tmp122 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sicily","\x69","\x06","\x72","\xe6"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(82)
		tmp122->SetNounStringObject(HX_HCSTRING("Sicily","\x69","\x06","\x72","\xe6"));
		HX_STACK_LINE(83)
		::ObjectTag tmp123 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("slender","\xcf","\x99","\x29","\x4d"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(83)
		tmp123->SetAdjectiveStringObject(HX_HCSTRING("slender","\xcf","\x99","\x29","\x4d"));
		HX_STACK_LINE(84)
		::ObjectTag tmp124 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("spear","\x19","\x94","\x69","\x81"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(84)
		::ObjectTag tmp125 = tmp124->SetNounStringObject(HX_HCSTRING("spear","\x19","\x94","\x69","\x81"));		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(84)
		tmp125->SetNounSStringObject(HX_HCSTRING("spears","\x3a","\x02","\xf8","\xba"));
		HX_STACK_LINE(85)
		::ObjectTag tmp126 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("spear","\x19","\x94","\x69","\x81"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(85)
		::ObjectTag tmp127 = tmp126->SetNounStringObject(HX_HCSTRING("spear","\x19","\x94","\x69","\x81"));		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(85)
		tmp127->SetNounSStringObject(HX_HCSTRING("spears","\x3a","\x02","\xf8","\xba"));
		HX_STACK_LINE(86)
		::ObjectTag tmp128 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Staffordshire","\x26","\x03","\x8a","\xaf"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(86)
		tmp128->SetNounStringObject(HX_HCSTRING("Staffordshire","\x26","\x03","\x8a","\xaf"));
		HX_STACK_LINE(87)
		::ObjectTag tmp129 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("statue","\x24","\xe7","\xfb","\x05"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(87)
		::ObjectTag tmp130 = tmp129->SetNounStringObject(HX_HCSTRING("statue","\x24","\xe7","\xfb","\x05"));		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(87)
		tmp130->SetNounSStringObject(HX_HCSTRING("statues","\xcf","\x58","\x6e","\x36"));
		HX_STACK_LINE(88)
		::ObjectTag tmp131 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("stone","\x65","\x10","\x16","\x84"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(88)
		::ObjectTag tmp132 = tmp131->SetNounStringObject(HX_HCSTRING("stone","\x65","\x10","\x16","\x84"));		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(88)
		tmp132->SetNounSStringObject(HX_HCSTRING("stones","\x6e","\x48","\x38","\x0f"));
		HX_STACK_LINE(89)
		::ObjectTag tmp133 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sweden","\x4c","\xc1","\x5c","\xf7"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(89)
		tmp133->SetNounStringObject(HX_HCSTRING("Sweden","\x4c","\xc1","\x5c","\xf7"));
		HX_STACK_LINE(90)
		::ObjectTag tmp134 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(90)
		::ObjectTag tmp135 = tmp134->SetNounStringObject(HX_HCSTRING("table","\x0e","\xb8","\xe3","\x0a"));		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(90)
		tmp135->SetNounSStringObject(HX_HCSTRING("tables","\xa5","\x54","\x5d","\x7c"));
		HX_STACK_LINE(91)
		::ObjectTag tmp136 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("The Holy Thorn Reliquary","\xee","\x3f","\x8b","\x39"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(91)
		::ObjectTag tmp137 = tmp136->SetNounStringObject(HX_HCSTRING("The Holy Thorn Reliquary","\xee","\x3f","\x8b","\x39"));		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(91)
		tmp137->SetNounSStringObject(HX_HCSTRING("The Holy Thorn Reliquaries","\xcc","\xcb","\xc1","\x22"));
		HX_STACK_LINE(92)
		::ObjectTag tmp138 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("The Lyte Jewel","\xd0","\x71","\x9f","\x0a"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(92)
		::ObjectTag tmp139 = tmp138->SetNounStringObject(HX_HCSTRING("club","\x36","\x79","\xc2","\x41"));		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(92)
		tmp139->SetNounSStringObject(HX_HCSTRING("clubs","\x7d","\x96","\x67","\x48"));
		HX_STACK_LINE(93)
		::ObjectTag tmp140 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("The Sutton Hoo","\x98","\x13","\x84","\x93"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(93)
		::ObjectTag tmp141 = tmp140->SetNounStringObject(HX_HCSTRING("John, Duke of Berry","\x63","\x0c","\x4d","\x43"));		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(93)
		tmp141->SetNounPosStringObject(HX_HCSTRING("John, Duke of Berry's","\x8f","\x4d","\xf3","\x79"));
		HX_STACK_LINE(94)
		::ObjectTag tmp142 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Turkey","\x8e","\x0a","\x88","\x3f"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(94)
		tmp142->SetNounStringObject(HX_HCSTRING("Turkey","\x8e","\x0a","\x88","\x3f"));
		HX_STACK_LINE(95)
		::ObjectTag tmp143 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Uluburun","\x7a","\xec","\x80","\x0b"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(95)
		tmp143->SetNounStringObject(HX_HCSTRING("Uluburun","\x7a","\xec","\x80","\x0b"));
		HX_STACK_LINE(96)
		::ObjectTag tmp144 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Valois","\xf8","\xed","\x46","\x84"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT);		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(96)
		tmp144->SetNounStringObject(HX_HCSTRING("Valois","\xf8","\xed","\x46","\x84"));
		HX_STACK_LINE(97)
		::ObjectTag tmp145 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Valsg\xc3""\xa4""rde","\xdd","\xaa","\x8c","\x38"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(97)
		tmp145->SetNounStringObject(HX_HCSTRING("Valsg\xc3""\xa4""rde","\xdd","\xaa","\x8c","\x38"));
		HX_STACK_LINE(98)
		::ObjectTag tmp146 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Vendel","\xec","\x50","\x2b","\xd3"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(98)
		tmp146->SetNounStringObject(HX_HCSTRING("Vendel","\xec","\x50","\x2b","\xd3"));
		HX_STACK_LINE(99)
		::ObjectTag tmp147 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("vessel","\xb6","\x4f","\xf0","\xa1"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(99)
		::ObjectTag tmp148 = tmp147->SetNounStringObject(HX_HCSTRING("vessel","\xb6","\x4f","\xf0","\xa1"));		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(99)
		tmp148->SetNounSStringObject(HX_HCSTRING("vessels","\xfd","\x6f","\x55","\x10"));
		HX_STACK_LINE(100)
		::ObjectTag tmp149 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Waddesdon Bequest","\x6a","\x8a","\xbe","\x3f"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(100)
		tmp149->SetNounStringObject(HX_HCSTRING("Waddesdon Bequest","\x6a","\x8a","\xbe","\x3f"));
		HX_STACK_LINE(101)
		::ObjectTag tmp150 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("warrior","\xc2","\xb5","\x70","\x0c"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(101)
		::ObjectTag tmp151 = tmp150->SetNounStringObject(HX_HCSTRING("warrior","\xc2","\xb5","\x70","\x0c"));		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(101)
		::ObjectTag tmp152 = tmp151->SetNounPosStringObject(HX_HCSTRING("warrior's","\xae","\x4c","\x5b","\x92"));		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(101)
		::ObjectTag tmp153 = tmp152->SetNounSStringObject(HX_HCSTRING("warriors","\x71","\x54","\x2e","\xd6"));		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(101)
		tmp153->SetNounSPosStringObject(HX_HCSTRING("warriors'","\x96","\x8e","\x5b","\x92"));
		HX_STACK_LINE(102)
		::ObjectTag tmp154 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(102)
		::ObjectTag tmp155 = tmp154->SetNounStringObject(HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc"));		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(102)
		tmp155->SetNounSStringObject(HX_HCSTRING("weapons","\x17","\x6a","\xc0","\xda"));
		HX_STACK_LINE(103)
		::ObjectTag tmp156 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("wolf","\x92","\xfc","\xfc","\x4e"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(103)
		::ObjectTag tmp157 = tmp156->SetNounStringObject(HX_HCSTRING("wolf","\x92","\xfc","\xfc","\x4e"));		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(103)
		::ObjectTag tmp158 = tmp157->SetNounPosStringObject(HX_HCSTRING("wolf's","\x7e","\xe7","\xa2","\xc5"));		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(103)
		::ObjectTag tmp159 = tmp158->SetNounSStringObject(HX_HCSTRING("wolfs","\xa1","\x03","\x60","\xce"));		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(103)
		tmp159->SetNounSPosStringObject(HX_HCSTRING("wolfs'","\x66","\x29","\xa3","\xc5"));
		HX_STACK_LINE(104)
		::ObjectTag tmp160 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("woman","\x82","\xc1","\x60","\xce"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(104)
		::ObjectTag tmp161 = tmp160->SetNounStringObject(HX_HCSTRING("woman","\x82","\xc1","\x60","\xce"));		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(104)
		::ObjectTag tmp162 = tmp161->SetNounPosStringObject(HX_HCSTRING("woman's","\x6e","\xc8","\x35","\xb9"));		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(104)
		::ObjectTag tmp163 = tmp162->SetNounSStringObject(HX_HCSTRING("women","\xfe","\xc4","\x60","\xce"));		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(104)
		tmp163->SetNounSPosStringObject(HX_HCSTRING("women's","\xea","\xa2","\xda","\xbb"));
		HX_STACK_LINE(105)
		::ObjectTag tmp164 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("wood","\x2d","\xff","\xfc","\x4e"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(105)
		::ObjectTag tmp165 = tmp164->SetNounStringObject(HX_HCSTRING("wood","\x2d","\xff","\xfc","\x4e"));		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(105)
		tmp165->SetNounSStringObject(HX_HCSTRING("woods","\xa6","\x48","\x62","\xce"));
		HX_STACK_LINE(106)
		::ObjectTag tmp166 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("young man","\x52","\xb2","\x4a","\xe1"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(106)
		::ObjectTag tmp167 = tmp166->SetNounStringObject(HX_HCSTRING("young man","\x52","\xb2","\x4a","\xe1"));		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(106)
		::ObjectTag tmp168 = tmp167->SetNounPosStringObject(HX_HCSTRING("young man's","\x3e","\x8d","\x19","\xcf"));		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(106)
		::ObjectTag tmp169 = tmp168->SetNounSStringObject(HX_HCSTRING("young men","\xce","\xb5","\x4a","\xe1"));		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(106)
		tmp169->SetNounSPosStringObject(HX_HCSTRING("young men's","\xba","\x67","\xbe","\xd1"));
		HX_STACK_LINE(107)
		::ObjectTag tmp170 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("extravagant","\x1b","\xb4","\x7e","\x16"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(107)
		tmp170->SetAdjectiveStringObject(HX_HCSTRING("extravagant","\x1b","\xb4","\x7e","\x16"));
		HX_STACK_LINE(108)
		::ObjectTag tmp171 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("extravagantly","\x68","\x8f","\xa8","\xba"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(108)
		tmp171->SetAdverbStringObject(HX_HCSTRING("extravagantly","\x68","\x8f","\xa8","\xba"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructAdjVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructAdjVoid",0x8fba1f76,"CollectionPremadeTag.PremadeTagStructAdjVoid","CollectionPremadeTag.hx",128,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(129)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Awful","\xe7","\xe4","\x01","\xbc"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		tmp->SetAdjectiveStringObject(HX_HCSTRING("awful","\x07","\x75","\xd4","\x28"));
		HX_STACK_LINE(130)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Bad","\xa5","\x69","\x32","\x00"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(130)
		tmp1->SetAdjectiveStringObject(HX_HCSTRING("bad","\xc5","\xb1","\x4a","\x00"));
		HX_STACK_LINE(131)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Excellent","\x56","\xdf","\x85","\x98"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		tmp2->SetAdjectiveStringObject(HX_HCSTRING("excellent","\x76","\xff","\xb2","\xf6"));
		HX_STACK_LINE(132)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Good","\x5d","\xc1","\x42","\x2f"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		tmp3->SetAdjectiveStringObject(HX_HCSTRING("good","\x3d","\x95","\x69","\x44"));
		HX_STACK_LINE(133)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Soft","\x0a","\x49","\x31","\x37"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(133)
		tmp4->SetAdjectiveStringObject(HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructAdjVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructAdvVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructAdvVoid",0x78891582,"CollectionPremadeTag.PremadeTagStructAdvVoid","CollectionPremadeTag.hx",135,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(136)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Desperate","\x87","\x96","\x40","\x82"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		tmp->SetAdverbStringObject(HX_HCSTRING("desperately","\xf4","\x4c","\x46","\x20"));
		HX_STACK_LINE(137)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Slow","\x21","\x0a","\x2f","\x37"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		tmp1->SetAdverbStringObject(HX_HCSTRING("bad","\xc5","\xb1","\x4a","\x00"));
		HX_STACK_LINE(138)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Perfect","\xed","\x6c","\x27","\x48"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		tmp2->SetAdverbStringObject(HX_HCSTRING("excellent","\x76","\xff","\xb2","\xf6"));
		HX_STACK_LINE(139)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Quick","\xcd","\xf6","\x1a","\xf1"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		tmp3->SetAdverbStringObject(HX_HCSTRING("good","\x3d","\x95","\x69","\x44"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructAdvVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounAliveAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounAliveAbstractVoid",0xaab17224,"CollectionPremadeTag.PremadeTagStructNounAliveAbstractVoid","CollectionPremadeTag.hx",141,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(142)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Assasin","\xf8","\xac","\x87","\x01"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("assasin","\x18","\x85","\x36","\x34"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		::ObjectTag tmp2 = tmp1->SetNounPosStringObject(HX_HCSTRING("assasin's","\x84","\x1d","\xb4","\x92"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		::ObjectTag tmp3 = tmp2->SetNounSStringObject(HX_HCSTRING("assasins","\x5b","\xf0","\x7d","\x7b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		tmp3->SetNounSPosStringObject(HX_HCSTRING("assasins'","\x6c","\x5f","\xb4","\x92"));
		HX_STACK_LINE(143)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Boy","\xec","\x75","\x32","\x00"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(143)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("boy","\x0c","\xbe","\x4a","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(143)
		::ObjectTag tmp6 = tmp5->SetNounPosStringObject(HX_HCSTRING("boy's","\x78","\x7b","\xff","\xb6"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		::ObjectTag tmp7 = tmp6->SetNounSStringObject(HX_HCSTRING("boys","\xe7","\x8c","\x1b","\x41"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		tmp7->SetNounSPosStringObject(HX_HCSTRING("boys'","\x60","\xbd","\xff","\xb6"));
		HX_STACK_LINE(144)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Dragon","\x33","\xe6","\x5e","\x14"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("dragon","\x13","\x72","\xca","\xdf"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(144)
		::ObjectTag tmp10 = tmp9->SetNounPosStringObject(HX_HCSTRING("dragon's","\x3f","\x7f","\xd9","\x3c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(144)
		::ObjectTag tmp11 = tmp10->SetNounSStringObject(HX_HCSTRING("dragons","\x00","\x5f","\x59","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(144)
		tmp11->SetNounSPosStringObject(HX_HCSTRING("dragons'","\x27","\xc1","\xd9","\x3c"));
		HX_STACK_LINE(145)
		::ObjectTag tmp12 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Iraqi","\x10","\xa9","\xe4","\x53"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(145)
		::ObjectTag tmp13 = tmp12->SetNounStringObject(HX_HCSTRING("iraqi","\x30","\x39","\xb7","\xc0"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(145)
		::ObjectTag tmp14 = tmp13->SetNounPosStringObject(HX_HCSTRING("iraqi's","\x9c","\x07","\xdc","\xc7"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(145)
		::ObjectTag tmp15 = tmp14->SetNounSStringObject(HX_HCSTRING("iraqis","\x43","\xd1","\x9a","\xdf"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(145)
		tmp15->SetNounSPosStringObject(HX_HCSTRING("iraqis'","\x84","\x49","\xdc","\xc7"));
		HX_STACK_LINE(146)
		::ObjectTag tmp16 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Italian","\xa0","\x09","\x96","\x5e"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(146)
		::ObjectTag tmp17 = tmp16->SetNounStringObject(HX_HCSTRING("italian","\xc0","\xe1","\x44","\x91"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(146)
		::ObjectTag tmp18 = tmp17->SetNounPosStringObject(HX_HCSTRING("italian's","\x2c","\xf4","\x90","\x15"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(146)
		::ObjectTag tmp19 = tmp18->SetNounSStringObject(HX_HCSTRING("italians","\xb3","\xa6","\x00","\x8b"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(146)
		tmp19->SetNounSPosStringObject(HX_HCSTRING("italians'","\x14","\x36","\x91","\x15"));
		HX_STACK_LINE(147)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Painter","\x6b","\xdb","\x73","\x85"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(147)
		::ObjectTag tmp21 = tmp20->SetNounStringObject(HX_HCSTRING("painter","\x8b","\xb3","\x22","\xb8"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(147)
		::ObjectTag tmp22 = tmp21->SetNounPosStringObject(HX_HCSTRING("painter's","\xb7","\x0e","\xdf","\x0c"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(147)
		::ObjectTag tmp23 = tmp22->SetNounSStringObject(HX_HCSTRING("painters","\x88","\x66","\x3a","\x66"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(147)
		tmp23->SetNounSPosStringObject(HX_HCSTRING("painters'","\x9f","\x50","\xdf","\x0c"));
		HX_STACK_LINE(148)
		::ObjectTag tmp24 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Romanian","\xd9","\x1e","\xc1","\x11"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(148)
		::ObjectTag tmp25 = tmp24->SetNounStringObject(HX_HCSTRING("romanian","\xb9","\x62","\x0f","\x38"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(148)
		::ObjectTag tmp26 = tmp25->SetNounPosStringObject(HX_HCSTRING("romanian's","\x65","\x65","\xb8","\xe4"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(148)
		::ObjectTag tmp27 = tmp26->SetNounSStringObject(HX_HCSTRING("romanians","\x9a","\xff","\x66","\xd5"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(148)
		tmp27->SetNounSPosStringObject(HX_HCSTRING("romanians'","\x4d","\xa7","\xb8","\xe4"));
		HX_STACK_LINE(149)
		::ObjectTag tmp28 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Russian","\x33","\x82","\x09","\x9d"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(149)
		::ObjectTag tmp29 = tmp28->SetNounStringObject(HX_HCSTRING("russian","\x53","\x5a","\xb8","\xcf"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(149)
		::ObjectTag tmp30 = tmp29->SetNounPosStringObject(HX_HCSTRING("russian's","\x7f","\xf7","\x41","\x72"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(149)
		::ObjectTag tmp31 = tmp30->SetNounSStringObject(HX_HCSTRING("russians","\xc0","\xae","\x96","\xf1"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(149)
		tmp31->SetNounSPosStringObject(HX_HCSTRING("russians'","\x67","\x39","\x42","\x72"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounAliveAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounAliveConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounAliveConcreteVoid",0xc563b907,"CollectionPremadeTag.PremadeTagStructNounAliveConcreteVoid","CollectionPremadeTag.hx",151,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(152)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(152)
		tmp1->SetNounPosStringObject(HX_HCSTRING("Andy's","\xce","\x8c","\xbb","\x95"));
		HX_STACK_LINE(153)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Bodhisattva","\xd1","\xa6","\xa8","\x6c"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("Bodhisattva","\xd1","\xa6","\xa8","\x6c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		tmp3->SetNounPosStringObject(HX_HCSTRING("Bodhisattva's","\x7d","\xdf","\x3c","\x65"));
		HX_STACK_LINE(154)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Buddha","\xec","\x41","\xd5","\x03"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("Buddha","\xec","\x41","\xd5","\x03"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		tmp5->SetNounPosStringObject(HX_HCSTRING("Buddha's","\x58","\xb7","\x1a","\x95"));
		HX_STACK_LINE(155)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Dimitri","\x8a","\x79","\x99","\x0f"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("Dimitri","\x8a","\x79","\x99","\x0f"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		tmp7->SetNounPosStringObject(HX_HCSTRING("Dimitri's","\x76","\x92","\x12","\x44"));
		HX_STACK_LINE(156)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Julius Caesar","\xf7","\x7a","\x10","\xa6"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("Julius Caesar","\xf7","\x7a","\x10","\xa6"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		tmp9->SetNounPosStringObject(HX_HCSTRING("Julius Caesar's","\x23","\x89","\x5e","\xa7"));
		HX_STACK_LINE(157)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Maria","\xd6","\x39","\x4f","\x96"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(157)
		::ObjectTag tmp11 = tmp10->SetNounStringObject(HX_HCSTRING("Maria","\xd6","\x39","\x4f","\x96"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(157)
		tmp11->SetNounPosStringObject(HX_HCSTRING("Maria's","\xc2","\xfd","\xf1","\x33"));
		HX_STACK_LINE(158)
		::ObjectTag tmp12 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Medusa","\xd7","\xe1","\x65","\x33"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(158)
		::ObjectTag tmp13 = tmp12->SetNounStringObject(HX_HCSTRING("Medusa","\xd7","\xe1","\x65","\x33"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(158)
		tmp13->SetNounPosStringObject(HX_HCSTRING("Medusa's","\x03","\x68","\x03","\x42"));
		HX_STACK_LINE(159)
		::ObjectTag tmp14 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(159)
		::ObjectTag tmp15 = tmp14->SetNounStringObject(HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(159)
		tmp15->SetNounPosStringObject(HX_HCSTRING("Mikael's","\xa5","\x8b","\x9c","\x27"));
		HX_STACK_LINE(160)
		::ObjectTag tmp16 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Napoleon","\xea","\xa1","\x23","\x28"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(160)
		::ObjectTag tmp17 = tmp16->SetNounStringObject(HX_HCSTRING("Napoleon","\xea","\xa1","\x23","\x28"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(160)
		tmp17->SetNounPosStringObject(HX_HCSTRING("Napoleon's","\xd6","\x92","\xbf","\x31"));
		HX_STACK_LINE(161)
		::ObjectTag tmp18 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Ramses","\xa3","\xb8","\x85","\xeb"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(161)
		::ObjectTag tmp19 = tmp18->SetNounStringObject(HX_HCSTRING("Ramses","\xa3","\xb8","\x85","\xeb"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(161)
		tmp19->SetNounPosStringObject(HX_HCSTRING("Ramses'","\x24","\xd6","\x7b","\x29"));
		HX_STACK_LINE(162)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sphinx","\xc8","\x28","\x8e","\xf1"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(162)
		::ObjectTag tmp21 = tmp20->SetNounStringObject(HX_HCSTRING("Sphinx","\xc8","\x28","\x8e","\xf1"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(162)
		tmp21->SetNounPosStringObject(HX_HCSTRING("Sphinx's","\x34","\x0d","\x00","\x10"));
		HX_STACK_LINE(163)
		::ObjectTag tmp22 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Washington","\x70","\x1b","\x23","\x73"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(163)
		::ObjectTag tmp23 = tmp22->SetNounStringObject(HX_HCSTRING("Washington","\x70","\x1b","\x23","\x73"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(163)
		tmp23->SetNounPosStringObject(HX_HCSTRING("Washington's","\xdc","\xf9","\xb4","\xd6"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounAliveConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateHoldAbstractVoid",0x351a4d12,"CollectionPremadeTag.PremadeTagStructNounInanimateHoldAbstractVoid","CollectionPremadeTag.hx",165,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(166)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Grudge","\xf8","\xf1","\xa6","\x54"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("grudge","\xd8","\x7d","\x12","\x20"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(166)
		tmp1->SetNounSStringObject(HX_HCSTRING("grudges","\x9b","\x9f","\x1b","\xf0"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateHoldAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateHoldConcreteVoid",0x4fcc93f5,"CollectionPremadeTag.PremadeTagStructNounInanimateHoldConcreteVoid","CollectionPremadeTag.hx",168,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(169)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Bat","\xb5","\x69","\x32","\x00"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("bat","\xd5","\xb1","\x4a","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		tmp1->SetNounSStringObject(HX_HCSTRING("bats","\xfe","\xe8","\x10","\x41"));
		HX_STACK_LINE(170)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Gun","\x60","\x46","\x36","\x00"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(170)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("gun","\x80","\x8e","\x4e","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		tmp3->SetNounSStringObject(HX_HCSTRING("guns","\xf3","\x21","\x6e","\x44"));
		HX_STACK_LINE(171)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Hand","\x8f","\x57","\xe1","\x2f"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("hand","\x6f","\x2b","\x08","\x45"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		tmp5->SetNounSStringObject(HX_HCSTRING("hands","\x24","\xd6","\x1d","\x22"));
		HX_STACK_LINE(172)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Pencil","\xed","\x67","\x06","\x6d"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(172)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("pencil","\xcd","\xf3","\x71","\x38"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(172)
		tmp7->SetNounSStringObject(HX_HCSTRING("pencils","\x06","\x60","\x43","\x2b"));
		HX_STACK_LINE(173)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sword","\x9d","\x27","\x3f","\x19"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("sword","\xbd","\xb7","\x11","\x86"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		tmp9->SetNounSStringObject(HX_HCSTRING("swords","\x16","\x0e","\x6f","\xc9"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateHoldConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceAbstractVoid",0x6952ee40,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceAbstractVoid","CollectionPremadeTag.hx",175,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(176)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Mind","\xb2","\x7a","\x35","\x33"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("mind","\x92","\x4e","\x5c","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		tmp1->SetNounSStringObject(HX_HCSTRING("minds","\xa1","\x71","\x68","\x08"));
		HX_STACK_LINE(177)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Intuition","\x37","\xb8","\x0e","\x1c"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("intuition","\x57","\xd8","\x3b","\x7a"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		tmp3->SetNounSStringObject(HX_HCSTRING("intuitions","\x3c","\x74","\x21","\x7a"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid",0x628702b7,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid","CollectionPremadeTag.hx",179,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(180)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("India","\x57","\x0e","\x42","\x51"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		tmp->SetNounStringObject(HX_HCSTRING("India","\x57","\x0e","\x42","\x51"));
		HX_STACK_LINE(181)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Italia","\x0e","\xa3","\xf8","\x3a"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(181)
		tmp1->SetNounStringObject(HX_HCSTRING("Italia","\x0e","\xa3","\xf8","\x3a"));
		HX_STACK_LINE(182)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Netherlands","\x70","\x0e","\x67","\x5f"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		tmp2->SetNounStringObject(HX_HCSTRING("Netherlands","\x70","\x0e","\x67","\x5f"));
		HX_STACK_LINE(183)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("RussiaRussia","\xf6","\x91","\xb1","\xc3"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		tmp3->SetNounStringObject(HX_HCSTRING("Russia","\xdb","\x9d","\x80","\x73"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceConcreteOwnerVoid",0xca93bcf8,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceConcreteOwnerVoid","CollectionPremadeTag.hx",185,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(186)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Country","\x36","\xe2","\xaa","\xea"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("country","\x56","\xba","\x59","\x1d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		tmp1->SetNounSStringObject(HX_HCSTRING("countries","\x34","\xb0","\xf1","\x72"));
		HX_STACK_LINE(187)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Harbor","\x6c","\x50","\x35","\xef"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(187)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("harbor","\x4c","\xdc","\xa0","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(187)
		tmp3->SetNounSStringObject(HX_HCSTRING("harbors","\xa7","\xe6","\x1f","\x92"));
		HX_STACK_LINE(188)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("House","\x80","\x9f","\x91","\xbe"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(188)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("house","\xa0","\x2f","\x64","\x2b"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(188)
		tmp5->SetNounSStringObject(HX_HCSTRING("houses","\xd3","\x7c","\x45","\xcc"));
		HX_STACK_LINE(189)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("School","\x94","\x2c","\x5d","\x75"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(189)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("school","\x74","\xb8","\xc8","\x40"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(189)
		tmp7->SetNounSStringObject(HX_HCSTRING("schools","\x7f","\xad","\xd8","\x6e"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceConcreteOwnerVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateSeeAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateSeeAbstractVoid",0xf85a204c,"CollectionPremadeTag.PremadeTagStructNounInanimateSeeAbstractVoid","CollectionPremadeTag.hx",191,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(192)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Vision","\x08","\x88","\x17","\x24"),::EnumTagType_obj::NOUN_INANIMATE_SEE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		tmp->SetNounStringObject(HX_HCSTRING("vision","\xe8","\x13","\x83","\xef"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateSeeAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateSeeConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateSeeConcreteVoid",0x130c672f,"CollectionPremadeTag.PremadeTagStructNounInanimateSeeConcreteVoid","CollectionPremadeTag.hx",194,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(195)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Lightning","\xea","\x18","\x1d","\x79"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		tmp->SetNounStringObject(HX_HCSTRING("lightning","\x0a","\x39","\x4a","\xd7"));
		HX_STACK_LINE(196)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Moonlight","\x15","\xd0","\x88","\xb7"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(196)
		tmp1->SetNounStringObject(HX_HCSTRING("moonlight","\x35","\xf0","\xb5","\x15"));
		HX_STACK_LINE(197)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Rainbow","\x16","\x29","\x91","\xd8"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(197)
		tmp2->SetNounStringObject(HX_HCSTRING("rainbow","\x36","\x01","\x40","\x0b"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateSeeConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateTitleAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateTitleAbstractVoid",0x06568491,"CollectionPremadeTag.PremadeTagStructNounInanimateTitleAbstractVoid","CollectionPremadeTag.hx",199,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(200)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Commendation","\x26","\x26","\xb4","\x57"),::EnumTagType_obj::NOUN_INANIMATE_TITLE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("commendation","\x06","\xda","\xa1","\x8f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		tmp1->SetNounSStringObject(HX_HCSTRING("commendations","\xad","\xeb","\xfc","\x1d"));
		HX_STACK_LINE(201)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Job","\xdd","\x87","\x38","\x00"),::EnumTagType_obj::NOUN_INANIMATE_TITLE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(201)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("job","\xfd","\xcf","\x50","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		tmp3->SetNounSStringObject(HX_HCSTRING("jobs","\xd6","\x2d","\x65","\x46"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateTitleAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateWearAbstractVoid",0x822cc052,"CollectionPremadeTag.PremadeTagStructNounInanimateWearAbstractVoid","CollectionPremadeTag.hx",203,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(204)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Pride","\x48","\xbf","\xb8","\x5b"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		tmp->SetNounStringObject(HX_HCSTRING("pride","\x68","\x4f","\x8b","\xc8"));
		HX_STACK_LINE(205)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Shame","\x64","\x50","\x4a","\x0f"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		tmp1->SetNounStringObject(HX_HCSTRING("shame","\x84","\xe0","\x1c","\x7c"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateWearAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateWearConcreteVoid",0x9cdf0735,"CollectionPremadeTag.PremadeTagStructNounInanimateWearConcreteVoid","CollectionPremadeTag.hx",207,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(208)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Crown","\xd7","\xd2","\x87","\xdf"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(208)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("crown","\xf7","\x62","\x5a","\x4c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(208)
		tmp1->SetNounSStringObject(HX_HCSTRING("crowns","\x9c","\x35","\xbc","\x82"));
		HX_STACK_LINE(209)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Shirt","\xd6","\x66","\x50","\x0f"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("shirt","\xf6","\xf6","\x22","\x7c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		tmp3->SetNounSStringObject(HX_HCSTRING("shirts","\xbd","\x20","\x75","\x22"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateWearConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructVerbVoidIntransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVerbVoidIntransitiveVoid",0x3af59936,"CollectionPremadeTag.PremadeTagStructVerbVoidIntransitiveVoid","CollectionPremadeTag.hx",211,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(212)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Die","\x20","\xf5","\x33","\x00"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		::ObjectTag tmp1 = tmp->SetVerb1StringObject(HX_HCSTRING("die","\x40","\x3d","\x4c","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		::ObjectTag tmp2 = tmp1->SetVerb2StringObject(HX_HCSTRING("died","\x24","\x5b","\x69","\x42"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		::ObjectTag tmp3 = tmp2->SetVerb3StringObject(HX_HCSTRING("died","\x24","\x5b","\x69","\x42"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(212)
		::ObjectTag tmp4 = tmp3->SetVerbIngStringObject(HX_HCSTRING("dying","\x6d","\xe0","\x5c","\xe4"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		tmp4->SetVerbSStringObject(HX_HCSTRING("dies","\x33","\x5b","\x69","\x42"));
		HX_STACK_LINE(213)
		::ObjectTag tmp5 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		::ObjectTag tmp6 = tmp5->SetVerb1StringObject(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		::ObjectTag tmp7 = tmp6->SetVerb2StringObject(HX_HCSTRING("jumped","\xcd","\xb4","\x17","\x08"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(213)
		::ObjectTag tmp8 = tmp7->SetVerb3StringObject(HX_HCSTRING("jumped","\xcd","\xb4","\x17","\x08"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(213)
		::ObjectTag tmp9 = tmp8->SetVerbIngStringObject(HX_HCSTRING("jumping","\xb4","\x90","\xa9","\x0c"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(213)
		tmp9->SetVerbSStringObject(HX_HCSTRING("jumps","\xc5","\x8b","\x22","\x56"));
		HX_STACK_LINE(214)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Run","\x2b","\x9f","\x3e","\x00"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(214)
		::ObjectTag tmp11 = tmp10->SetVerb1StringObject(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(214)
		::ObjectTag tmp12 = tmp11->SetVerb2StringObject(HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(214)
		::ObjectTag tmp13 = tmp12->SetVerb3StringObject(HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(214)
		::ObjectTag tmp14 = tmp13->SetVerbIngStringObject(HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(214)
		tmp14->SetVerbSStringObject(HX_HCSTRING("runs","\xc8","\x7a","\xb3","\x4b"));
		HX_STACK_LINE(215)
		::ObjectTag tmp15 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sing","\x6f","\xc2","\x2c","\x37"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(215)
		::ObjectTag tmp16 = tmp15->SetVerb1StringObject(HX_HCSTRING("sing","\x4f","\x96","\x53","\x4c"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(215)
		::ObjectTag tmp17 = tmp16->SetVerb2StringObject(HX_HCSTRING("sang","\x47","\x84","\x4d","\x4c"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(215)
		::ObjectTag tmp18 = tmp17->SetVerb3StringObject(HX_HCSTRING("sung","\x5b","\xb1","\x5c","\x4c"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(215)
		::ObjectTag tmp19 = tmp18->SetVerbIngStringObject(HX_HCSTRING("singing","\xf3","\x11","\x16","\x44"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(215)
		tmp19->SetVerbSStringObject(HX_HCSTRING("sings","\x44","\xef","\xcf","\x7c"));
		HX_STACK_LINE(216)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sleep","\xf7","\x2c","\xf2","\x11"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(216)
		::ObjectTag tmp21 = tmp20->SetVerb1StringObject(HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(216)
		::ObjectTag tmp22 = tmp21->SetVerb2StringObject(HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(216)
		::ObjectTag tmp23 = tmp22->SetVerb3StringObject(HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(216)
		::ObjectTag tmp24 = tmp23->SetVerbIngStringObject(HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(216)
		tmp24->SetVerbSStringObject(HX_HCSTRING("sleeps","\x7c","\xb7","\x60","\x6d"));
		HX_STACK_LINE(217)
		::ObjectTag tmp25 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Work","\xf1","\x2d","\xd6","\x39"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(217)
		::ObjectTag tmp26 = tmp25->SetVerb1StringObject(HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(217)
		::ObjectTag tmp27 = tmp26->SetVerb2StringObject(HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(217)
		::ObjectTag tmp28 = tmp27->SetVerb3StringObject(HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(217)
		::ObjectTag tmp29 = tmp28->SetVerbIngStringObject(HX_HCSTRING("working","\xb1","\x43","\xcf","\xa0"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(217)
		tmp29->SetVerbSStringObject(HX_HCSTRING("works","\x82","\x95","\x64","\xce"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVerbVoidIntransitiveVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructVerbVoidTransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVerbVoidTransitiveVoid",0x16d26891,"CollectionPremadeTag.PremadeTagStructVerbVoidTransitiveVoid","CollectionPremadeTag.hx",219,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(220)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Buy","\x26","\x7b","\x32","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		::ObjectTag tmp1 = tmp->SetVerb1StringObject(HX_HCSTRING("buy","\x46","\xc3","\x4a","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		::ObjectTag tmp2 = tmp1->SetVerb2StringObject(HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		::ObjectTag tmp3 = tmp2->SetVerb3StringObject(HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		::ObjectTag tmp4 = tmp3->SetVerbIngStringObject(HX_HCSTRING("buying","\x5c","\x19","\x26","\xdd"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		tmp4->SetVerbSStringObject(HX_HCSTRING("buys","\x6d","\x1a","\x20","\x41"));
		HX_STACK_LINE(221)
		::ObjectTag tmp5 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Call","\xbe","\x44","\x93","\x2c"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(221)
		::ObjectTag tmp6 = tmp5->SetVerb1StringObject(HX_HCSTRING("call","\x9e","\x18","\xba","\x41"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		::ObjectTag tmp7 = tmp6->SetVerb2StringObject(HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		::ObjectTag tmp8 = tmp7->SetVerb3StringObject(HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		::ObjectTag tmp9 = tmp8->SetVerbIngStringObject(HX_HCSTRING("calling","\x04","\xab","\x64","\x54"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(221)
		tmp9->SetVerbSStringObject(HX_HCSTRING("calls","\x15","\x72","\x1b","\x41"));
		HX_STACK_LINE(222)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Desire","\xea","\xb9","\x10","\xa4"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		::ObjectTag tmp11 = tmp10->SetVerb1StringObject(HX_HCSTRING("desire","\xca","\x45","\x7c","\x6f"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		::ObjectTag tmp12 = tmp11->SetVerb2StringObject(HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(222)
		::ObjectTag tmp13 = tmp12->SetVerb3StringObject(HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(222)
		::ObjectTag tmp14 = tmp13->SetVerbIngStringObject(HX_HCSTRING("desiring","\x87","\x35","\x74","\x7b"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(222)
		tmp14->SetVerbSStringObject(HX_HCSTRING("desires","\x69","\xcb","\x40","\x1d"));
		HX_STACK_LINE(223)
		::ObjectTag tmp15 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Drink","\xf8","\xd1","\xe9","\x72"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(223)
		::ObjectTag tmp16 = tmp15->SetVerb1StringObject(HX_HCSTRING("drink","\x18","\x62","\xbc","\xdf"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(223)
		::ObjectTag tmp17 = tmp16->SetVerb2StringObject(HX_HCSTRING("drunk","\x24","\x7d","\xc5","\xdf"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(223)
		::ObjectTag tmp18 = tmp17->SetVerb3StringObject(HX_HCSTRING("drank","\x10","\x50","\xb6","\xdf"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(223)
		::ObjectTag tmp19 = tmp18->SetVerbIngStringObject(HX_HCSTRING("drinking","\xca","\x09","\xda","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(223)
		tmp19->SetVerbSStringObject(HX_HCSTRING("drinks","\x5b","\x73","\x19","\xe5"));
		HX_STACK_LINE(224)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Drive","\xea","\xd8","\xe9","\x72"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(224)
		::ObjectTag tmp21 = tmp20->SetVerb1StringObject(HX_HCSTRING("drive","\x0a","\x69","\xbc","\xdf"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(224)
		::ObjectTag tmp22 = tmp21->SetVerb2StringObject(HX_HCSTRING("drove","\x90","\xf6","\xc0","\xdf"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(224)
		::ObjectTag tmp23 = tmp22->SetVerb3StringObject(HX_HCSTRING("driven","\x24","\x80","\x1f","\xe5"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(224)
		::ObjectTag tmp24 = tmp23->SetVerbIngStringObject(HX_HCSTRING("driving","\xc7","\xa8","\x73","\x96"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(224)
		tmp24->SetVerbSStringObject(HX_HCSTRING("drives","\x29","\x80","\x1f","\xe5"));
		HX_STACK_LINE(225)
		::ObjectTag tmp25 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Eat","\x78","\xb0","\x34","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(225)
		::ObjectTag tmp26 = tmp25->SetVerb1StringObject(HX_HCSTRING("eat","\x98","\xf8","\x4c","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(225)
		::ObjectTag tmp27 = tmp26->SetVerb2StringObject(HX_HCSTRING("ate","\x12","\x00","\x4a","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(225)
		::ObjectTag tmp28 = tmp27->SetVerb3StringObject(HX_HCSTRING("eaten","\x01","\xa7","\xee","\x67"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(225)
		::ObjectTag tmp29 = tmp28->SetVerbIngStringObject(HX_HCSTRING("eating","\x4a","\x83","\xe6","\x88"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(225)
		tmp29->SetVerbSStringObject(HX_HCSTRING("eats","\xdb","\x8c","\x0c","\x43"));
		HX_STACK_LINE(226)
		::ObjectTag tmp30 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Fight","\xb0","\x85","\xc2","\x93"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(226)
		::ObjectTag tmp31 = tmp30->SetVerb1StringObject(HX_HCSTRING("fight","\xd0","\x15","\x95","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(226)
		::ObjectTag tmp32 = tmp31->SetVerb2StringObject(HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(226)
		::ObjectTag tmp33 = tmp32->SetVerb3StringObject(HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(226)
		::ObjectTag tmp34 = tmp33->SetVerbIngStringObject(HX_HCSTRING("fighting","\x12","\x79","\xd2","\x35"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(226)
		tmp34->SetVerbSStringObject(HX_HCSTRING("fights","\xa3","\x00","\xde","\x81"));
		HX_STACK_LINE(227)
		::ObjectTag tmp35 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(227)
		::ObjectTag tmp36 = tmp35->SetVerb1StringObject(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(227)
		::ObjectTag tmp37 = tmp36->SetVerb2StringObject(HX_HCSTRING("got","\x4c","\x89","\x4e","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(227)
		::ObjectTag tmp38 = tmp37->SetVerb3StringObject(HX_HCSTRING("gotten","\x11","\xac","\x41","\x65"));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(227)
		::ObjectTag tmp39 = tmp38->SetVerbIngStringObject(HX_HCSTRING("getting","\x84","\x50","\xa6","\x34"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(227)
		tmp39->SetVerbSStringObject(HX_HCSTRING("gets","\x1d","\x03","\x62","\x44"));
		HX_STACK_LINE(228)
		::ObjectTag tmp40 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Grab","\xec","\xfb","\x44","\x2f"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(228)
		::ObjectTag tmp41 = tmp40->SetVerb1StringObject(HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(228)
		::ObjectTag tmp42 = tmp41->SetVerb2StringObject(HX_HCSTRING("grabed","\x2b","\xb3","\xd8","\x12"));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(228)
		::ObjectTag tmp43 = tmp42->SetVerb3StringObject(HX_HCSTRING("grabed","\x2b","\xb3","\xd8","\x12"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(228)
		::ObjectTag tmp44 = tmp43->SetVerbIngStringObject(HX_HCSTRING("grabbing","\x8c","\x9b","\xd4","\xfe"));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(228)
		tmp44->SetVerbSStringObject(HX_HCSTRING("grabs","\x27","\x03","\xea","\x99"));
		HX_STACK_LINE(229)
		::ObjectTag tmp45 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Kill","\xbe","\x0b","\xe3","\x31"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(229)
		::ObjectTag tmp46 = tmp45->SetVerb1StringObject(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(229)
		::ObjectTag tmp47 = tmp46->SetVerb2StringObject(HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(229)
		::ObjectTag tmp48 = tmp47->SetVerb3StringObject(HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(229)
		::ObjectTag tmp49 = tmp48->SetVerbIngStringObject(HX_HCSTRING("killing","\x04","\x44","\xeb","\xd3"));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(229)
		tmp49->SetVerbSStringObject(HX_HCSTRING("kills","\x15","\xcb","\x99","\xe1"));
		HX_STACK_LINE(230)
		::ObjectTag tmp50 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Love","\x92","\xd8","\x90","\x32"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(230)
		::ObjectTag tmp51 = tmp50->SetVerb1StringObject(HX_HCSTRING("love","\x72","\xac","\xb7","\x47"));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(230)
		::ObjectTag tmp52 = tmp51->SetVerb2StringObject(HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(230)
		::ObjectTag tmp53 = tmp52->SetVerb3StringObject(HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(230)
		::ObjectTag tmp54 = tmp53->SetVerbIngStringObject(HX_HCSTRING("loving","\x2f","\x96","\x54","\x66"));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(230)
		tmp54->SetVerbSStringObject(HX_HCSTRING("loves","\xc1","\x37","\xff","\x78"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVerbVoidTransitiveVoid,(void))


CollectionPremadeTag_obj::CollectionPremadeTag_obj()
{
}

bool CollectionPremadeTag_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVoid") ) { outValue = PremadeTagStructVoid_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PremadeTagStructAdjVoid") ) { outValue = PremadeTagStructAdjVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructAdvVoid") ) { outValue = PremadeTagStructAdvVoid_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounAliveAbstractVoid") ) { outValue = PremadeTagStructNounAliveAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounAliveConcreteVoid") ) { outValue = PremadeTagStructNounAliveConcreteVoid_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVerbVoidTransitiveVoid") ) { outValue = PremadeTagStructVerbVoidTransitiveVoid_dyn(); return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVerbVoidIntransitiveVoid") ) { outValue = PremadeTagStructVerbVoidIntransitiveVoid_dyn(); return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateSeeAbstractVoid") ) { outValue = PremadeTagStructNounInanimateSeeAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateSeeConcreteVoid") ) { outValue = PremadeTagStructNounInanimateSeeConcreteVoid_dyn(); return true;  }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateHoldAbstractVoid") ) { outValue = PremadeTagStructNounInanimateHoldAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateHoldConcreteVoid") ) { outValue = PremadeTagStructNounInanimateHoldConcreteVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateWearAbstractVoid") ) { outValue = PremadeTagStructNounInanimateWearAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateWearConcreteVoid") ) { outValue = PremadeTagStructNounInanimateWearConcreteVoid_dyn(); return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceAbstractVoid") ) { outValue = PremadeTagStructNounInanimatePlaceAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateTitleAbstractVoid") ) { outValue = PremadeTagStructNounInanimateTitleAbstractVoid_dyn(); return true;  }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceConcreteOwnerVoid") ) { outValue = PremadeTagStructNounInanimatePlaceConcreteOwnerVoid_dyn(); return true;  }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid") ) { outValue = PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionPremadeTag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionPremadeTag_obj::__mClass,"__mClass");
};

#endif

hx::Class CollectionPremadeTag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PremadeTagStructVoid","\xcb","\x5a","\xea","\x62"),
	HX_HCSTRING("PremadeTagStructAdjVoid","\x04","\xae","\x02","\x8a"),
	HX_HCSTRING("PremadeTagStructAdvVoid","\x10","\xa4","\xd1","\x72"),
	HX_HCSTRING("PremadeTagStructNounAliveAbstractVoid","\x32","\x1d","\x29","\x49"),
	HX_HCSTRING("PremadeTagStructNounAliveConcreteVoid","\x15","\x64","\xdb","\x63"),
	HX_HCSTRING("PremadeTagStructNounInanimateHoldAbstractVoid","\x20","\xb6","\xe8","\x6c"),
	HX_HCSTRING("PremadeTagStructNounInanimateHoldConcreteVoid","\x03","\xfd","\x9a","\x87"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceAbstractVoid","\x72","\x71","\x20","\x06"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid","\xc5","\x29","\x9a","\xa5"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceConcreteOwnerVoid","\x86","\x64","\xc3","\x64"),
	HX_HCSTRING("PremadeTagStructNounInanimateSeeAbstractVoid","\xfe","\x12","\xc0","\xf9"),
	HX_HCSTRING("PremadeTagStructNounInanimateSeeConcreteVoid","\xe1","\x59","\x72","\x14"),
	HX_HCSTRING("PremadeTagStructNounInanimateTitleAbstractVoid","\xc3","\x07","\x24","\xa3"),
	HX_HCSTRING("PremadeTagStructNounInanimateWearAbstractVoid","\x60","\x29","\xfb","\xb9"),
	HX_HCSTRING("PremadeTagStructNounInanimateWearConcreteVoid","\x43","\x70","\xad","\xd4"),
	HX_HCSTRING("PremadeTagStructVerbVoidIntransitiveVoid","\xe8","\xca","\x9b","\xd1"),
	HX_HCSTRING("PremadeTagStructVerbVoidTransitiveVoid","\xc3","\x69","\x10","\x21"),
	::String(null()) };

void CollectionPremadeTag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionPremadeTag","\xe0","\x8b","\x6a","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CollectionPremadeTag_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CollectionPremadeTag_obj >;
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

