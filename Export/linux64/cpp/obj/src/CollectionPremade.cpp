#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionPremade
#include <CollectionPremade.h>
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

Void CollectionPremade_obj::__construct()
{
HX_STACK_FRAME("CollectionPremade","new",0x52bb988c,"CollectionPremade.new","CollectionPremade.hx",24,0xd14dbc64)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CollectionPremade_obj::~CollectionPremade_obj() { }

Dynamic CollectionPremade_obj::__CreateEmpty() { return  new CollectionPremade_obj; }
hx::ObjectPtr< CollectionPremade_obj > CollectionPremade_obj::__new()
{  hx::ObjectPtr< CollectionPremade_obj > _result_ = new CollectionPremade_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionPremade_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionPremade_obj > _result_ = new CollectionPremade_obj();
	_result_->__construct();
	return _result_;}

Array< ::String > CollectionPremade_obj::explanationGenericStringArray;

Array< ::String > CollectionPremade_obj::explanationGenericNewStringArray;

Void CollectionPremade_obj::PremadeExhibitionObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeExhibitionObjectVoid",0x47c41c86,"CollectionPremade.PremadeExhibitionObjectVoid","CollectionPremade.hx",33,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(34)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_001","\x27","\x62","\x7a","\x18"),HX_HCSTRING("First Exhibition","\x7f","\x06","\xa3","\x70"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(35)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_002","\x28","\x62","\x7a","\x18"),HX_HCSTRING("Second Exhibition","\x7b","\x11","\xde","\xc5"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp1),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(36)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_003","\x29","\x62","\x7a","\x18"),HX_HCSTRING("Third Exhibition","\xa8","\x60","\x7a","\x86"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp2),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(37)
		::CollectionGlobal tmp3 = _collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_004","\x2a","\x62","\x7a","\x18"),HX_HCSTRING("Fourth Exhibition","\xd5","\xdf","\x97","\x52"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp3),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(38)
		::CollectionGlobal tmp4 = _collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_005","\x2b","\x62","\x7a","\x18"),HX_HCSTRING("Fifth Exhibition","\x18","\x78","\x4a","\x81"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp4),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(39)
		::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(39)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_006","\x2c","\x62","\x7a","\x18"),HX_HCSTRING("Sixth Exhibition","\x59","\x6b","\xec","\x4e"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp5),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(40)
		::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(40)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_007","\x2d","\x62","\x7a","\x18"),HX_HCSTRING("Seventh Exhibition","\x8e","\x96","\x66","\x3c"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp6),::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(41)
		::CollectionGlobal tmp7 = _collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(41)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("EXH_008","\x2e","\x62","\x7a","\x18"),HX_HCSTRING("Eighth Exhibition","\xd6","\x18","\xfb","\x63"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp7),::EnumMuseumType_obj::EXH);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeExhibitionObjectVoid,(void))

Void CollectionPremade_obj::PremadeExhibitionNewObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeExhibitionNewObjectVoid",0x2ab6a940,"CollectionPremade.PremadeExhibitionNewObjectVoid","CollectionPremade.hx",44,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(46)
		Array< ::String > exhibition001ExplanationStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("Bronze cista for cosmetic items.","\x3c","\x04","\xca","\xc7")).Add(HX_HCSTRING("The feet of the vessel are formed of lion's paws surmounted by crouching lions, and there was originally a chain hung from a row of discs around the middle.","\x97","\x50","\x67","\xd7")).Add(HX_HCSTRING("The scenes engraved around the vessel have not been identified with certainty.","\x01","\x2f","\x99","\x19"));		HX_STACK_VAR(exhibition001ExplanationStringArray,"exhibition001ExplanationStringArray");
		HX_STACK_LINE(52)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::ObjectTag tmp1 = ::CollectionFunction_obj::FindTagObject(tmp,false,HX_HCSTRING("Chain_NOUN_INANIMATE_HOLD_CONCRETE","\xbb","\xb2","\x2b","\x42"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		::ObjectTag tmp3 = ::CollectionFunction_obj::FindTagObject(tmp2,false,HX_HCSTRING("Cista_NOUN_INANIMATE_HOLD_CONCRETE","\x62","\x08","\xf1","\x95"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		::CollectionGlobal tmp4 = _collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(54)
		::ObjectTag tmp5 = ::CollectionFunction_obj::FindTagObject(tmp4,false,HX_HCSTRING("Cosmetic_NOUN_INANIMATE_HOLD_CONCRETE","\x6d","\x37","\xbd","\x2b"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(55)
		::ObjectTag tmp7 = ::CollectionFunction_obj::FindTagObject(tmp6,false,HX_HCSTRING("Crouch_VERB_INTRANSITIVE","\x85","\x85","\xd4","\xbc"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		::CollectionGlobal tmp8 = _collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		::ObjectTag tmp9 = ::CollectionFunction_obj::FindTagObject(tmp8,false,HX_HCSTRING("Item_NOUN_INANIMATE_HOLD_CONCRETE","\x29","\x37","\x49","\x02"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		::CollectionGlobal tmp10 = _collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		::ObjectTag tmp11 = ::CollectionFunction_obj::FindTagObject(tmp10,false,HX_HCSTRING("Lion_NOUN_ALIVE_ABSTRACT","\xf6","\xfd","\xce","\xa2"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(58)
		::CollectionGlobal tmp12 = _collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(58)
		::ObjectTag tmp13 = ::CollectionFunction_obj::FindTagObject(tmp12,false,HX_HCSTRING("Vessel_NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x30","\x95","\xd3","\xcd"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		Array< ::Dynamic > exhibition001TagObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp1).Add(tmp3).Add(tmp5).Add(tmp7).Add(tmp9).Add(tmp11).Add(tmp13);		HX_STACK_VAR(exhibition001TagObjectArray,"exhibition001TagObjectArray");
		HX_STACK_LINE(60)
		Array< ::String > exhibition002ExplanationStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("Clubs came in different forms and were used by a warrior in combination with a long-handled weapon, such as a spear.","\x54","\x84","\x17","\xf9")).Add(HX_HCSTRING("They could be made from bone and ivory, like these examples, wood, stone or jade.","\x8f","\xcf","\xbc","\xdc")).Add(HX_HCSTRING("Jade clubs were highly-prized and symbols of authority.","\x62","\x87","\x42","\x84")).Add(HX_HCSTRING("The curved wahaika was used in a slicing motion towards the head or neck, while the spatula-shaped pate was more suited to a thrusting motion.","\x7e","\x22","\x87","\xe2")).Add(HX_HCSTRING("Warriors carried them in their belts, ready at hand, with a wrist-strap attached through the hole at the end.","\xd7","\x2c","\x1f","\x49"));		HX_STACK_VAR(exhibition002ExplanationStringArray,"exhibition002ExplanationStringArray");
		HX_STACK_LINE(68)
		::CollectionGlobal tmp14 = _collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(68)
		::ObjectTag tmp15 = ::CollectionFunction_obj::FindTagObject(tmp14,false,HX_HCSTRING("Belt_NOUN_INANIMATE_WEAR_CONCRETE","\xf1","\x4a","\x88","\xc5"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(69)
		::CollectionGlobal tmp16 = _collectionGlobalObject;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(69)
		::ObjectTag tmp17 = ::CollectionFunction_obj::FindTagObject(tmp16,false,HX_HCSTRING("Club_NOUN_INANIMATE_HOLD_CONCRETE","\x26","\xf3","\x80","\x0d"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(70)
		::CollectionGlobal tmp18 = _collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(70)
		::ObjectTag tmp19 = ::CollectionFunction_obj::FindTagObject(tmp18,false,HX_HCSTRING("Jade_NOUN_INANIMATE_HOLD_CONCRETE","\x24","\xa7","\xb4","\x06"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(71)
		::CollectionGlobal tmp20 = _collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(71)
		::ObjectTag tmp21 = ::CollectionFunction_obj::FindTagObject(tmp20,false,HX_HCSTRING("Mauri_NOUN_ALIVE_ABSTRACT","\x72","\x67","\xed","\x51"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(72)
		::CollectionGlobal tmp22 = _collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(72)
		::ObjectTag tmp23 = ::CollectionFunction_obj::FindTagObject(tmp22,false,HX_HCSTRING("Spear_NOUN_INANIMATE_HOLD_CONCRETE","\xa3","\x74","\x4a","\x18"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(73)
		::CollectionGlobal tmp24 = _collectionGlobalObject;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(73)
		::ObjectTag tmp25 = ::CollectionFunction_obj::FindTagObject(tmp24,false,HX_HCSTRING("Stone_NOUN_INANIMATE_HOLD_CONCRETE","\xd7","\xe0","\x43","\x54"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(74)
		::CollectionGlobal tmp26 = _collectionGlobalObject;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(74)
		::ObjectTag tmp27 = ::CollectionFunction_obj::FindTagObject(tmp26,false,HX_HCSTRING("Warrior_NOUN_ALIVE_ABSTRACT","\x9c","\x0d","\x85","\xfc"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(75)
		::CollectionGlobal tmp28 = _collectionGlobalObject;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(75)
		::ObjectTag tmp29 = ::CollectionFunction_obj::FindTagObject(tmp28,false,HX_HCSTRING("Weapon_NOUN_INANIMATE_HOLD_CONCRETE","\xc0","\xd1","\xcd","\xeb"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(76)
		::CollectionGlobal tmp30 = _collectionGlobalObject;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(76)
		::ObjectTag tmp31 = ::CollectionFunction_obj::FindTagObject(tmp30,false,HX_HCSTRING("Wood_NOUN_INANIMATE_HOLD_CONCRETE","\xcf","\x60","\x0e","\x62"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(67)
		Array< ::Dynamic > exhibition002TagObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp15).Add(tmp17).Add(tmp19).Add(tmp21).Add(tmp23).Add(tmp25).Add(tmp27).Add(tmp29).Add(tmp31);		HX_STACK_VAR(exhibition002TagObjectArray,"exhibition002TagObjectArray");
		HX_STACK_LINE(78)
		Array< ::String > exhibition003ExplanationStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("The Holy Thorn Reliquary was probably created in the 1390s in Paris for John Duke of Berry, to house a relic of the Crown of Thorns.","\xdd","\x0a","\x70","\xca")).Add(HX_HCSTRING("The reliquary was bequeathed to the British Museum in 1898 by Ferdinand De Rothschild as part of the Waddesdon Bequest.","\xa2","\x04","\x24","\x2b")).Add(HX_HCSTRING("It is one of a small number of major goldsmiths' works or joyaux that survive from the extravagant world of the courts of the Valois royal family around 1400.","\x61","\xb4","\x99","\xe1")).Add(HX_HCSTRING("It is made of gold, lavishly decorated with jewels and pearls, and uses the technique of enamelling en ronde bosse, or in the round, which had been recently developed when the reliquary was made, to create a total of 28 three-dimensional figures, mostly in white enamel.","\xec","\x83","\xee","\x08"));		HX_STACK_VAR(exhibition003ExplanationStringArray,"exhibition003ExplanationStringArray");
		HX_STACK_LINE(85)
		::CollectionGlobal tmp32 = _collectionGlobalObject;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(85)
		::ObjectTag tmp33 = ::CollectionFunction_obj::FindTagObject(tmp32,false,HX_HCSTRING("Crown Of Thorn_NOUN_INANIMATE_WEAR_CONCRETE","\x05","\x9f","\x65","\x80"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(86)
		::CollectionGlobal tmp34 = _collectionGlobalObject;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(86)
		::ObjectTag tmp35 = ::CollectionFunction_obj::FindTagObject(tmp34,false,HX_HCSTRING("Extravagant_ADJ","\x83","\x38","\x43","\x79"));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(87)
		::CollectionGlobal tmp36 = _collectionGlobalObject;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(87)
		::ObjectTag tmp37 = ::CollectionFunction_obj::FindTagObject(tmp36,false,HX_HCSTRING("Extravagantly_ADV","\x5c","\xf6","\xca","\x3d"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(88)
		::CollectionGlobal tmp38 = _collectionGlobalObject;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(88)
		::ObjectTag tmp39 = ::CollectionFunction_obj::FindTagObject(tmp38,false,HX_HCSTRING("Ferdinand De Rothschild_NOUN_ALIVE_CONCRETE","\x57","\x80","\xe6","\x81"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(89)
		::CollectionGlobal tmp40 = _collectionGlobalObject;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(89)
		::ObjectTag tmp41 = ::CollectionFunction_obj::FindTagObject(tmp40,false,HX_HCSTRING("Gold_NOUN_INANIMATE_HOLD_CONCRETE","\x7c","\x4b","\xa3","\x92"));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(90)
		::CollectionGlobal tmp42 = _collectionGlobalObject;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(90)
		::ObjectTag tmp43 = ::CollectionFunction_obj::FindTagObject(tmp42,false,HX_HCSTRING("Goldsmith_NOUN_ALIVE_ABSTRACT","\x7d","\x59","\xd0","\xf1"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(91)
		::CollectionGlobal tmp44 = _collectionGlobalObject;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(91)
		::ObjectTag tmp45 = ::CollectionFunction_obj::FindTagObject(tmp44,false,HX_HCSTRING("Jewel_NOUN_INANIMATE_WEAR_CONCRETE","\x79","\x88","\x49","\xfb"));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(92)
		::CollectionGlobal tmp46 = _collectionGlobalObject;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(92)
		::ObjectTag tmp47 = ::CollectionFunction_obj::FindTagObject(tmp46,false,HX_HCSTRING("John Duke Of Berry_NOUN_ALIVE_CONCRETE","\x6a","\xff","\xee","\x42"));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(93)
		::CollectionGlobal tmp48 = _collectionGlobalObject;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(93)
		::ObjectTag tmp49 = ::CollectionFunction_obj::FindTagObject(tmp48,false,HX_HCSTRING("Paris_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x63","\xb2","\x0e","\x02"));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(94)
		::CollectionGlobal tmp50 = _collectionGlobalObject;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(94)
		::ObjectTag tmp51 = ::CollectionFunction_obj::FindTagObject(tmp50,false,HX_HCSTRING("Pearl_NOUN_INANIMATE_HOLD_CONCRETE","\x16","\xfb","\x70","\xb1"));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(95)
		::CollectionGlobal tmp52 = _collectionGlobalObject;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(95)
		::ObjectTag tmp53 = ::CollectionFunction_obj::FindTagObject(tmp52,false,HX_HCSTRING("Reliquary_NOUN_INANIMATE_HOLD_CONCRETE","\xc8","\x2a","\xb1","\x66"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(96)
		::CollectionGlobal tmp54 = _collectionGlobalObject;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(96)
		::ObjectTag tmp55 = ::CollectionFunction_obj::FindTagObject(tmp54,false,HX_HCSTRING("The Holy Thorn Reliquary_NOUN_INANIMATE_HOLD_CONCRETE","\x8e","\xe9","\x7b","\xd1"));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(97)
		::CollectionGlobal tmp56 = _collectionGlobalObject;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(97)
		::ObjectTag tmp57 = ::CollectionFunction_obj::FindTagObject(tmp56,false,HX_HCSTRING("Valois_NOUN_INANIMATE_WEAR_ABSTRACT","\xa1","\xb4","\xa8","\x48"));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(98)
		::CollectionGlobal tmp58 = _collectionGlobalObject;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(98)
		::ObjectTag tmp59 = ::CollectionFunction_obj::FindTagObject(tmp58,false,HX_HCSTRING("Waddesdon Bequest_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x44","\x31","\x8c","\x42"));		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(84)
		Array< ::Dynamic > exhibition003TagObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp33).Add(tmp35).Add(tmp37).Add(tmp39).Add(tmp41).Add(tmp43).Add(tmp45).Add(tmp47).Add(tmp49).Add(tmp51).Add(tmp53).Add(tmp55).Add(tmp57).Add(tmp59);		HX_STACK_VAR(exhibition003TagObjectArray,"exhibition003TagObjectArray");
		HX_STACK_LINE(100)
		Array< ::String > exhibition004ExplanationStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("Pendant jewel, gold, oval set with twenty-five square table diamonds and four rose diamonds.","\x9c","\xb7","\xbe","\x0a")).Add(HX_HCSTRING("Contains miniature portrait of James I as a young man.","\xcf","\x85","\xbf","\x94")).Add(HX_HCSTRING("Cover in open-work with diamonds on outside and enamel within.","\xbf","\xa1","\x04","\xfd")).Add(HX_HCSTRING("Frame of square diamonds connected by slender enamelled band; back is white enamel plate with fine gold lines and ruby enamel.","\x6a","\xad","\xe3","\xc2")).Add(HX_HCSTRING("Edge enamelled alternately ruby and sapphire blue.","\x78","\x46","\x56","\xfc"));		HX_STACK_VAR(exhibition004ExplanationStringArray,"exhibition004ExplanationStringArray");
		HX_STACK_LINE(108)
		::CollectionGlobal tmp60 = _collectionGlobalObject;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(108)
		::ObjectTag tmp61 = ::CollectionFunction_obj::FindTagObject(tmp60,false,HX_HCSTRING("Gold_NOUN_INANIMATE_HOLD_CONCRETE","\x7c","\x4b","\xa3","\x92"));		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(109)
		::CollectionGlobal tmp62 = _collectionGlobalObject;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(109)
		::ObjectTag tmp63 = ::CollectionFunction_obj::FindTagObject(tmp62,false,HX_HCSTRING("James_NOUN_ALIVE_CONCRETE","\x01","\x04","\x60","\x73"));		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(110)
		::CollectionGlobal tmp64 = _collectionGlobalObject;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(110)
		::ObjectTag tmp65 = ::CollectionFunction_obj::FindTagObject(tmp64,false,HX_HCSTRING("Jewel_NOUN_INANIMATE_WEAR_CONCRETE","\x79","\x88","\x49","\xfb"));		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(111)
		::CollectionGlobal tmp66 = _collectionGlobalObject;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(111)
		::ObjectTag tmp67 = ::CollectionFunction_obj::FindTagObject(tmp66,false,HX_HCSTRING("Oval_ADJ","\xfa","\x6d","\x57","\x08"));		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(112)
		::CollectionGlobal tmp68 = _collectionGlobalObject;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(112)
		::ObjectTag tmp69 = ::CollectionFunction_obj::FindTagObject(tmp68,false,HX_HCSTRING("Pendant_NOUN_INANIMATE_WEAR_CONCRETE","\x40","\xab","\xaf","\xec"));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(113)
		::CollectionGlobal tmp70 = _collectionGlobalObject;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(113)
		::ObjectTag tmp71 = ::CollectionFunction_obj::FindTagObject(tmp70,false,HX_HCSTRING("Rose_NOUN_INANIMATE_HOLD_CONCRETE","\x2d","\x35","\x5e","\x6e"));		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(114)
		::CollectionGlobal tmp72 = _collectionGlobalObject;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(114)
		::ObjectTag tmp73 = ::CollectionFunction_obj::FindTagObject(tmp72,false,HX_HCSTRING("Sapphire_NOUN_INANIMATE_HOLD_CONCRETE","\xda","\x8e","\x2e","\x58"));		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(115)
		::CollectionGlobal tmp74 = _collectionGlobalObject;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(115)
		::ObjectTag tmp75 = ::CollectionFunction_obj::FindTagObject(tmp74,false,HX_HCSTRING("Slender_ADJ","\x37","\x98","\x8b","\x37"));		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(116)
		::CollectionGlobal tmp76 = _collectionGlobalObject;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(116)
		::ObjectTag tmp77 = ::CollectionFunction_obj::FindTagObject(tmp76,false,HX_HCSTRING("Table_NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x48","\x45","\x57","\xd6"));		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(117)
		::CollectionGlobal tmp78 = _collectionGlobalObject;		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(117)
		::ObjectTag tmp79 = ::CollectionFunction_obj::FindTagObject(tmp78,false,HX_HCSTRING("The Lyte Jewel_NOUN_INANIMATE_HOLD_CONCRETE","\x6c","\xce","\x60","\x01"));		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(118)
		::CollectionGlobal tmp80 = _collectionGlobalObject;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(118)
		::ObjectTag tmp81 = ::CollectionFunction_obj::FindTagObject(tmp80,false,HX_HCSTRING("Man_NOUN_ALIVE_ABSTRACT","\x74","\x6e","\xe6","\xbe"));		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(107)
		Array< ::Dynamic > exhibition004TagObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp61).Add(tmp63).Add(tmp65).Add(tmp67).Add(tmp69).Add(tmp71).Add(tmp73).Add(tmp75).Add(tmp77).Add(tmp79).Add(tmp81);		HX_STACK_VAR(exhibition004TagObjectArray,"exhibition004TagObjectArray");
		HX_STACK_LINE(120)
		Array< ::String > exhibition005ExplanationStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("On the head's left side was placed a crested and masked helmet wrapped in cloths.","\xfd","\x87","\x03","\x7f")).Add(HX_HCSTRING("With its panels of tinned bronze and assembled mounts, the decoration is directly comparable to that found on helmets from the Vendel and Valsg\xc3""\xa4""rde cemeteries of eastern Sweden.","\x91","\xca","\xa7","\x4b")).Add(HX_HCSTRING("The Sutton Hoo helmet differs from the Swedish examples in having an iron skull of a single vaulted shell and has a full face mask, a solid neck guard and deep cheekpieces.","\xb4","\x0e","\xc1","\x3f")).Add(HX_HCSTRING("These features have suggested an English origin for the basic structure of the helmet, the deep cheekpieces have parallels in the Coppergate helmet, found in York.","\x15","\x6c","\x91","\x75")).Add(HX_HCSTRING("Although outwardly very like the Swedish examples, the Sutton Hoo helmet is a product of better craftsmanship.","\xfa","\xc4","\xf5","\xb5")).Add(HX_HCSTRING("Helmets are extremely rare finds.","\x85","\xdf","\xe1","\x81")).Add(HX_HCSTRING("No other such figural plaques were known in England, apart from a fragment from a burial at Caenby, Lincolnshire, until the 2009 discovery of the Staffordshire hoard, which contained many.","\x80","\x7c","\xa2","\x05")).Add(HX_HCSTRING("The helmet rusted in the grave and was shattered into hundreds of tiny fragments when the chamber roof collapsed.","\x4f","\xe0","\x0f","\xbe")).Add(HX_HCSTRING("Restoration of the helmet thus involved the meticulous identification, grouping and orientation of the surviving fragments before it could be reconstructed.","\x7a","\xc9","\x59","\x2f"));		HX_STACK_VAR(exhibition005ExplanationStringArray,"exhibition005ExplanationStringArray");
		HX_STACK_LINE(132)
		::CollectionGlobal tmp82 = _collectionGlobalObject;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(132)
		::ObjectTag tmp83 = ::CollectionFunction_obj::FindTagObject(tmp82,false,HX_HCSTRING("Caenby_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xf0","\xc1","\xdf","\xc0"));		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(133)
		::CollectionGlobal tmp84 = _collectionGlobalObject;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(133)
		::ObjectTag tmp85 = ::CollectionFunction_obj::FindTagObject(tmp84,false,HX_HCSTRING("Crest_NOUN_INANIMATE_WEAR_CONCRETE","\xc5","\x75","\x56","\x04"));		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(134)
		::CollectionGlobal tmp86 = _collectionGlobalObject;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(134)
		::ObjectTag tmp87 = ::CollectionFunction_obj::FindTagObject(tmp86,false,HX_HCSTRING("England_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xe5","\x3c","\x7f","\x53"));		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(135)
		::CollectionGlobal tmp88 = _collectionGlobalObject;		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(135)
		::ObjectTag tmp89 = ::CollectionFunction_obj::FindTagObject(tmp88,false,HX_HCSTRING("Helmet_NOUN_INANIMATE_WEAR_CONCRETE","\x0f","\x36","\xa4","\x11"));		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(136)
		::CollectionGlobal tmp90 = _collectionGlobalObject;		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(136)
		::ObjectTag tmp91 = ::CollectionFunction_obj::FindTagObject(tmp90,false,HX_HCSTRING("Lincolnshire_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xc6","\xc4","\xd6","\x69"));		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(137)
		::CollectionGlobal tmp92 = _collectionGlobalObject;		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(137)
		::ObjectTag tmp93 = ::CollectionFunction_obj::FindTagObject(tmp92,false,HX_HCSTRING("Mask_NOUN_INANIMATE_WEAR_CONCRETE","\x70","\x4a","\x72","\x2d"));		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(138)
		::CollectionGlobal tmp94 = _collectionGlobalObject;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(138)
		::ObjectTag tmp95 = ::CollectionFunction_obj::FindTagObject(tmp94,false,HX_HCSTRING("Masked_ADJ","\xf3","\x04","\x1b","\x0c"));		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(139)
		::CollectionGlobal tmp96 = _collectionGlobalObject;		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(139)
		::ObjectTag tmp97 = ::CollectionFunction_obj::FindTagObject(tmp96,false,HX_HCSTRING("Staffordshire_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x08","\x18","\x2d","\x77"));		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(140)
		::CollectionGlobal tmp98 = _collectionGlobalObject;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(140)
		::ObjectTag tmp99 = ::CollectionFunction_obj::FindTagObject(tmp98,false,HX_HCSTRING("Sweden_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xa2","\xb2","\x13","\x17"));		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(141)
		::CollectionGlobal tmp100 = _collectionGlobalObject;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(141)
		::ObjectTag tmp101 = ::CollectionFunction_obj::FindTagObject(tmp100,false,HX_HCSTRING("The Sutton Hoo_NOUN_ALIVE_CONCRETE","\xf5","\x9b","\x9a","\xdf"));		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(142)
		::CollectionGlobal tmp102 = _collectionGlobalObject;		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(142)
		::ObjectTag tmp103 = ::CollectionFunction_obj::FindTagObject(tmp102,false,HX_HCSTRING("Valsg\xc3""\xa4""rde_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x31","\x29","\x3e","\x21"));		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(143)
		::CollectionGlobal tmp104 = _collectionGlobalObject;		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(143)
		::ObjectTag tmp105 = ::CollectionFunction_obj::FindTagObject(tmp104,false,HX_HCSTRING("Vendel_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x02","\xd7","\xb9","\x83"));		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(131)
		Array< ::Dynamic > exhibition005TagObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp83).Add(tmp85).Add(tmp87).Add(tmp89).Add(tmp91).Add(tmp93).Add(tmp95).Add(tmp97).Add(tmp99).Add(tmp101).Add(tmp103).Add(tmp105);		HX_STACK_VAR(exhibition005TagObjectArray,"exhibition005TagObjectArray");
		HX_STACK_LINE(145)
		Array< ::String > exhibition006ExplanationStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("On the right of the body lay a set of spears, tips uppermost, including three barbed angons, with their heads thrust through a handle of the bronze bowl.","\xc9","\xad","\x53","\x87")).Add(HX_HCSTRING("Nearby was a wand with a small mount depicting a wolf.","\xc4","\x21","\xd8","\xdf")).Add(HX_HCSTRING("Closer to the body lay the sword with a gold and garnet cloisonn\xc3""\xa9"" pommel 85 centimetres (33 in) long, its pattern-welded blade still within its scabbard, with superlative scabbard-bosses of domed cellwork and pyramidal mounts.","\x74","\x24","\x2d","\x26")).Add(HX_HCSTRING("Attached to this and lying toward the body was the sword harness and belt, fitted with a suite of gold mounts and strap-distributors of extremely intricate garnet cellwork ornament.","\xf3","\x63","\x74","\xdb"));		HX_STACK_VAR(exhibition006ExplanationStringArray,"exhibition006ExplanationStringArray");
		HX_STACK_LINE(152)
		::CollectionGlobal tmp106 = _collectionGlobalObject;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(152)
		::ObjectTag tmp107 = ::CollectionFunction_obj::FindTagObject(tmp106,false,HX_HCSTRING("Bowl_NOUN_INANIMATE_HOLD_CONCRETE","\xba","\x85","\x43","\x5c"));		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(153)
		::CollectionGlobal tmp108 = _collectionGlobalObject;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(153)
		::ObjectTag tmp109 = ::CollectionFunction_obj::FindTagObject(tmp108,false,HX_HCSTRING("Bronze_ADJ","\x82","\x9b","\xcb","\x5b"));		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(154)
		::CollectionGlobal tmp110 = _collectionGlobalObject;		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(154)
		::ObjectTag tmp111 = ::CollectionFunction_obj::FindTagObject(tmp110,false,HX_HCSTRING("Burial_NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\xaf","\x9c","\xd4","\x5a"));		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(155)
		::CollectionGlobal tmp112 = _collectionGlobalObject;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(155)
		::ObjectTag tmp113 = ::CollectionFunction_obj::FindTagObject(tmp112,false,HX_HCSTRING("Garnet_NOUN_INANIMATE_HOLD_CONCRETE","\xb7","\xc6","\x44","\xbb"));		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(156)
		::CollectionGlobal tmp114 = _collectionGlobalObject;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(156)
		::ObjectTag tmp115 = ::CollectionFunction_obj::FindTagObject(tmp114,false,HX_HCSTRING("Ship_NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x36","\x20","\x90","\x13"));		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(157)
		::CollectionGlobal tmp116 = _collectionGlobalObject;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(157)
		::ObjectTag tmp117 = ::CollectionFunction_obj::FindTagObject(tmp116,false,HX_HCSTRING("Spear_NOUN_INANIMATE_HOLD_CONCRETE","\xa3","\x74","\x4a","\x18"));		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(158)
		::CollectionGlobal tmp118 = _collectionGlobalObject;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(158)
		::ObjectTag tmp119 = ::CollectionFunction_obj::FindTagObject(tmp118,false,HX_HCSTRING("The Sutton Hoo_NOUN_ALIVE_CONCRETE","\xf5","\x9b","\x9a","\xdf"));		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(159)
		::CollectionGlobal tmp120 = _collectionGlobalObject;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(159)
		::ObjectTag tmp121 = ::CollectionFunction_obj::FindTagObject(tmp120,false,HX_HCSTRING("Wolf_NOUN_ALIVE_ABSTRACT","\xac","\x40","\x57","\xb0"));		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(151)
		Array< ::Dynamic > exhibition006TagObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp107).Add(tmp109).Add(tmp111).Add(tmp113).Add(tmp115).Add(tmp117).Add(tmp119).Add(tmp121);		HX_STACK_VAR(exhibition006TagObjectArray,"exhibition006TagObjectArray");
		HX_STACK_LINE(161)
		Array< ::String > exhibition007ExplanationStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("Oxhide ingots are metal slabs, usually of copper but sometimes of tin, produced and widely distributed during the Mediterranean Late Bronze Age (LBA).","\xcb","\xd6","\x7b","\x9d")).Add(HX_HCSTRING("Their shape resembles the hide of an ox with a protruding handle in each of the ingot\xe2""\x80""\x99""s four corners.","\x6b","\x6b","\xb9","\xd4")).Add(HX_HCSTRING("Early thought was that each ingot was equivalent to the value of one ox.","\x20","\xaf","\xcf","\x26")).Add(HX_HCSTRING("However, the similarity in shape is simply a coincidence.","\x27","\xc2","\x55","\xc2")).Add(HX_HCSTRING("The ingots\xe2""\x80""\x99"" producers probably designed these protrusions to make the ingots easily transportable overland on the backs of pack animals.","\xcc","\x5a","\x0d","\x20")).Add(HX_HCSTRING("Complete or partial oxhide ingots have been discovered in Sardinia, Crete, Peloponnese, Cyprus, Cannatello in Sicily, Bo\xc4""\x9f""azk\xc3""\xb6""y in Turkey (ancient Hattusa, the Hittite capital), Qantir-Piramesse in Egypt, and Sozopol in Bulgaria.","\xac","\x70","\xb8","\x7c")).Add(HX_HCSTRING("Archaeologists have recovered many oxhide ingots from two shipwrecks off the coast of Turkey (one off Uluburun and one in Cape Gelidonya).","\x4e","\x77","\x94","\x2f"));		HX_STACK_VAR(exhibition007ExplanationStringArray,"exhibition007ExplanationStringArray");
		HX_STACK_LINE(171)
		::CollectionGlobal tmp122 = _collectionGlobalObject;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(171)
		::ObjectTag tmp123 = ::CollectionFunction_obj::FindTagObject(tmp122,false,HX_HCSTRING("Aged_ADJ","\x6d","\x08","\x0c","\x76"));		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(172)
		::CollectionGlobal tmp124 = _collectionGlobalObject;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(172)
		::ObjectTag tmp125 = ::CollectionFunction_obj::FindTagObject(tmp124,false,HX_HCSTRING("Animal_NOUN_ALIVE_ABSTRACT","\x56","\xde","\x61","\x18"));		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(173)
		::CollectionGlobal tmp126 = _collectionGlobalObject;		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(173)
		::ObjectTag tmp127 = ::CollectionFunction_obj::FindTagObject(tmp126,false,HX_HCSTRING("Archaeologist_NOUN_ALIVE_ABSTRACT","\x55","\x92","\xad","\x05"));		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(174)
		::CollectionGlobal tmp128 = _collectionGlobalObject;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(174)
		::ObjectTag tmp129 = ::CollectionFunction_obj::FindTagObject(tmp128,false,HX_HCSTRING("Bo\xc4""\x9f""azk\xc3""\xb6""y_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xf2","\x48","\x05","\x0b"));		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(175)
		::CollectionGlobal tmp130 = _collectionGlobalObject;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(175)
		::ObjectTag tmp131 = ::CollectionFunction_obj::FindTagObject(tmp130,false,HX_HCSTRING("Bronze_ADJ","\x82","\x9b","\xcb","\x5b"));		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(176)
		::CollectionGlobal tmp132 = _collectionGlobalObject;		HX_STACK_VAR(tmp132,"tmp132");
		HX_STACK_LINE(176)
		::ObjectTag tmp133 = ::CollectionFunction_obj::FindTagObject(tmp132,false,HX_HCSTRING("Cannatello_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xb3","\x3d","\x06","\x85"));		HX_STACK_VAR(tmp133,"tmp133");
		HX_STACK_LINE(177)
		::CollectionGlobal tmp134 = _collectionGlobalObject;		HX_STACK_VAR(tmp134,"tmp134");
		HX_STACK_LINE(177)
		::ObjectTag tmp135 = ::CollectionFunction_obj::FindTagObject(tmp134,false,HX_HCSTRING("Cape Gelidonya_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x0b","\x0e","\x50","\x4f"));		HX_STACK_VAR(tmp135,"tmp135");
		HX_STACK_LINE(178)
		::CollectionGlobal tmp136 = _collectionGlobalObject;		HX_STACK_VAR(tmp136,"tmp136");
		HX_STACK_LINE(178)
		::ObjectTag tmp137 = ::CollectionFunction_obj::FindTagObject(tmp136,false,HX_HCSTRING("Copper_ADJ","\xc1","\x2e","\x56","\x46"));		HX_STACK_VAR(tmp137,"tmp137");
		HX_STACK_LINE(179)
		::CollectionGlobal tmp138 = _collectionGlobalObject;		HX_STACK_VAR(tmp138,"tmp138");
		HX_STACK_LINE(179)
		::ObjectTag tmp139 = ::CollectionFunction_obj::FindTagObject(tmp138,false,HX_HCSTRING("Crete_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xa7","\xff","\x9b","\xc5"));		HX_STACK_VAR(tmp139,"tmp139");
		HX_STACK_LINE(180)
		::CollectionGlobal tmp140 = _collectionGlobalObject;		HX_STACK_VAR(tmp140,"tmp140");
		HX_STACK_LINE(180)
		::ObjectTag tmp141 = ::CollectionFunction_obj::FindTagObject(tmp140,false,HX_HCSTRING("Cyprus_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x78","\xc2","\xf5","\x54"));		HX_STACK_VAR(tmp141,"tmp141");
		HX_STACK_LINE(181)
		::CollectionGlobal tmp142 = _collectionGlobalObject;		HX_STACK_VAR(tmp142,"tmp142");
		HX_STACK_LINE(181)
		::ObjectTag tmp143 = ::CollectionFunction_obj::FindTagObject(tmp142,false,HX_HCSTRING("Egypt_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x53","\xd8","\x7e","\x7c"));		HX_STACK_VAR(tmp143,"tmp143");
		HX_STACK_LINE(182)
		::CollectionGlobal tmp144 = _collectionGlobalObject;		HX_STACK_VAR(tmp144,"tmp144");
		HX_STACK_LINE(182)
		::ObjectTag tmp145 = ::CollectionFunction_obj::FindTagObject(tmp144,false,HX_HCSTRING("Hattusa_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xa4","\x32","\xf1","\x76"));		HX_STACK_VAR(tmp145,"tmp145");
		HX_STACK_LINE(183)
		::CollectionGlobal tmp146 = _collectionGlobalObject;		HX_STACK_VAR(tmp146,"tmp146");
		HX_STACK_LINE(183)
		::ObjectTag tmp147 = ::CollectionFunction_obj::FindTagObject(tmp146,false,HX_HCSTRING("Hittite_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xb5","\x95","\x74","\xe4"));		HX_STACK_VAR(tmp147,"tmp147");
		HX_STACK_LINE(184)
		::CollectionGlobal tmp148 = _collectionGlobalObject;		HX_STACK_VAR(tmp148,"tmp148");
		HX_STACK_LINE(184)
		::ObjectTag tmp149 = ::CollectionFunction_obj::FindTagObject(tmp148,false,HX_HCSTRING("Ingot_NOUN_INANIMATE_HOLD_CONCRETE","\x75","\x75","\x33","\xca"));		HX_STACK_VAR(tmp149,"tmp149");
		HX_STACK_LINE(185)
		::CollectionGlobal tmp150 = _collectionGlobalObject;		HX_STACK_VAR(tmp150,"tmp150");
		HX_STACK_LINE(185)
		::ObjectTag tmp151 = ::CollectionFunction_obj::FindTagObject(tmp150,false,HX_HCSTRING("Mediterranean_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x37","\x43","\x5d","\x8a"));		HX_STACK_VAR(tmp151,"tmp151");
		HX_STACK_LINE(186)
		::CollectionGlobal tmp152 = _collectionGlobalObject;		HX_STACK_VAR(tmp152,"tmp152");
		HX_STACK_LINE(186)
		::ObjectTag tmp153 = ::CollectionFunction_obj::FindTagObject(tmp152,false,HX_HCSTRING("Metal_ADJ","\x6f","\xe4","\x1e","\x12"));		HX_STACK_VAR(tmp153,"tmp153");
		HX_STACK_LINE(187)
		::CollectionGlobal tmp154 = _collectionGlobalObject;		HX_STACK_VAR(tmp154,"tmp154");
		HX_STACK_LINE(187)
		::ObjectTag tmp155 = ::CollectionFunction_obj::FindTagObject(tmp154,false,HX_HCSTRING("Oxhide_NOUN_INANIMATE_WEAR_CONCRETE","\x91","\xb3","\x89","\x5d"));		HX_STACK_VAR(tmp155,"tmp155");
		HX_STACK_LINE(188)
		::CollectionGlobal tmp156 = _collectionGlobalObject;		HX_STACK_VAR(tmp156,"tmp156");
		HX_STACK_LINE(188)
		::ObjectTag tmp157 = ::CollectionFunction_obj::FindTagObject(tmp156,false,HX_HCSTRING("Peloponnese_NOUN_ALIVE_ABSTRACT","\xba","\x9b","\xf2","\x09"));		HX_STACK_VAR(tmp157,"tmp157");
		HX_STACK_LINE(189)
		::CollectionGlobal tmp158 = _collectionGlobalObject;		HX_STACK_VAR(tmp158,"tmp158");
		HX_STACK_LINE(189)
		::ObjectTag tmp159 = ::CollectionFunction_obj::FindTagObject(tmp158,false,HX_HCSTRING("Qantir-Piramesse_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x57","\x6b","\x7c","\xb5"));		HX_STACK_VAR(tmp159,"tmp159");
		HX_STACK_LINE(190)
		::CollectionGlobal tmp160 = _collectionGlobalObject;		HX_STACK_VAR(tmp160,"tmp160");
		HX_STACK_LINE(190)
		::ObjectTag tmp161 = ::CollectionFunction_obj::FindTagObject(tmp160,false,HX_HCSTRING("Sicily_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x25","\xe7","\x8c","\x7e"));		HX_STACK_VAR(tmp161,"tmp161");
		HX_STACK_LINE(191)
		::CollectionGlobal tmp162 = _collectionGlobalObject;		HX_STACK_VAR(tmp162,"tmp162");
		HX_STACK_LINE(191)
		::ObjectTag tmp163 = ::CollectionFunction_obj::FindTagObject(tmp162,false,HX_HCSTRING("Turkey_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xa0","\xad","\x69","\x6f"));		HX_STACK_VAR(tmp163,"tmp163");
		HX_STACK_LINE(192)
		::CollectionGlobal tmp164 = _collectionGlobalObject;		HX_STACK_VAR(tmp164,"tmp164");
		HX_STACK_LINE(192)
		::ObjectTag tmp165 = ::CollectionFunction_obj::FindTagObject(tmp164,false,HX_HCSTRING("Uluburun_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x34","\xf1","\x26","\xc7"));		HX_STACK_VAR(tmp165,"tmp165");
		HX_STACK_LINE(170)
		Array< ::Dynamic > exhibition007TagObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp123).Add(tmp125).Add(tmp127).Add(tmp129).Add(tmp131).Add(tmp133).Add(tmp135).Add(tmp137).Add(tmp139).Add(tmp141).Add(tmp143).Add(tmp145).Add(tmp147).Add(tmp149).Add(tmp151).Add(tmp153).Add(tmp155).Add(tmp157).Add(tmp159).Add(tmp161).Add(tmp163).Add(tmp165);		HX_STACK_VAR(exhibition007TagObjectArray,"exhibition007TagObjectArray");
		HX_STACK_LINE(194)
		Array< ::String > exhibition008ExplanationStringArray = Array_obj< ::String >::__new().Add(HX_HCSTRING("This female figurine resembles the plank figurines of the preceding period, but now the arms and breasts are rendered in relief.","\x8f","\x28","\x45","\x61")).Add(HX_HCSTRING("The woman holds in her arms a swaddled infant on a hooped cradleboard.","\xef","\xe1","\xc7","\xbb")).Add(HX_HCSTRING("These cradleboards are characteristic of a particular school of Cypriot art, although they were also produced on other isolated occasions.","\xdd","\xb7","\x66","\xb2")).Add(HX_HCSTRING("The infant's head is always by the mother's left breast.","\xdd","\x3b","\x76","\xa1")).Add(HX_HCSTRING("Her thick neck is not clearly differentiated from the head, which has a nose in relief, holes for eyes, and large ears apparently pierced for earrings.","\x1b","\xa8","\x8a","\x9b")).Add(HX_HCSTRING("The incised lines between neck and bosom may represent necklaces, while marks behind the right shoulder perhaps suggest clothing.","\xfa","\x76","\xbe","\x9b")).Add(HX_HCSTRING("An identical female figure with a child in her arms adorns the shoulder of a jug from Cyprus in the Louvre collection.","\x67","\x4b","\xa8","\x57")).Add(HX_HCSTRING("Both seem intended as representations of maternity.","\xf0","\xde","\xd5","\x73"));		HX_STACK_VAR(exhibition008ExplanationStringArray,"exhibition008ExplanationStringArray");
		HX_STACK_LINE(205)
		::CollectionGlobal tmp166 = _collectionGlobalObject;		HX_STACK_VAR(tmp166,"tmp166");
		HX_STACK_LINE(205)
		::ObjectTag tmp167 = ::CollectionFunction_obj::FindTagObject(tmp166,false,HX_HCSTRING("Cradleboard_NOUN_INANIMATE_PLACE_CONCRETE_OWNER","\x35","\x0e","\x23","\xc7"));		HX_STACK_VAR(tmp167,"tmp167");
		HX_STACK_LINE(206)
		::CollectionGlobal tmp168 = _collectionGlobalObject;		HX_STACK_VAR(tmp168,"tmp168");
		HX_STACK_LINE(206)
		::ObjectTag tmp169 = ::CollectionFunction_obj::FindTagObject(tmp168,false,HX_HCSTRING("Cypriot_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xb8","\xce","\x73","\x80"));		HX_STACK_VAR(tmp169,"tmp169");
		HX_STACK_LINE(207)
		::CollectionGlobal tmp170 = _collectionGlobalObject;		HX_STACK_VAR(tmp170,"tmp170");
		HX_STACK_LINE(207)
		::ObjectTag tmp171 = ::CollectionFunction_obj::FindTagObject(tmp170,false,HX_HCSTRING("Cyprus_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\x78","\xc2","\xf5","\x54"));		HX_STACK_VAR(tmp171,"tmp171");
		HX_STACK_LINE(208)
		::CollectionGlobal tmp172 = _collectionGlobalObject;		HX_STACK_VAR(tmp172,"tmp172");
		HX_STACK_LINE(208)
		::ObjectTag tmp173 = ::CollectionFunction_obj::FindTagObject(tmp172,false,HX_HCSTRING("Female_NOUN_ALIVE_ABSTRACT","\xa6","\x44","\xde","\x5b"));		HX_STACK_VAR(tmp173,"tmp173");
		HX_STACK_LINE(209)
		::CollectionGlobal tmp174 = _collectionGlobalObject;		HX_STACK_VAR(tmp174,"tmp174");
		HX_STACK_LINE(209)
		::ObjectTag tmp175 = ::CollectionFunction_obj::FindTagObject(tmp174,false,HX_HCSTRING("Figurine_NOUN_INANIMATE_HOLD_CONCRETE","\x5d","\x9e","\xfb","\xa4"));		HX_STACK_VAR(tmp175,"tmp175");
		HX_STACK_LINE(210)
		::CollectionGlobal tmp176 = _collectionGlobalObject;		HX_STACK_VAR(tmp176,"tmp176");
		HX_STACK_LINE(210)
		::ObjectTag tmp177 = ::CollectionFunction_obj::FindTagObject(tmp176,false,HX_HCSTRING("Infant_NOUN_ALIVE_ABSTRACT","\xc0","\xfe","\x01","\x01"));		HX_STACK_VAR(tmp177,"tmp177");
		HX_STACK_LINE(211)
		::CollectionGlobal tmp178 = _collectionGlobalObject;		HX_STACK_VAR(tmp178,"tmp178");
		HX_STACK_LINE(211)
		::ObjectTag tmp179 = ::CollectionFunction_obj::FindTagObject(tmp178,false,HX_HCSTRING("Louvre_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER","\xd7","\x3e","\xdd","\x4f"));		HX_STACK_VAR(tmp179,"tmp179");
		HX_STACK_LINE(212)
		::CollectionGlobal tmp180 = _collectionGlobalObject;		HX_STACK_VAR(tmp180,"tmp180");
		HX_STACK_LINE(212)
		::ObjectTag tmp181 = ::CollectionFunction_obj::FindTagObject(tmp180,false,HX_HCSTRING("Statue_NOUN_INANIMATE_HOLD_CONCRETE","\x78","\xe4","\x25","\xa9"));		HX_STACK_VAR(tmp181,"tmp181");
		HX_STACK_LINE(213)
		::CollectionGlobal tmp182 = _collectionGlobalObject;		HX_STACK_VAR(tmp182,"tmp182");
		HX_STACK_LINE(213)
		::ObjectTag tmp183 = ::CollectionFunction_obj::FindTagObject(tmp182,false,HX_HCSTRING("Woman_NOUN_ALIVE_ABSTRACT","\x5c","\xc1","\x19","\x85"));		HX_STACK_VAR(tmp183,"tmp183");
		HX_STACK_LINE(204)
		Array< ::Dynamic > exhibition008TagObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp167).Add(tmp169).Add(tmp171).Add(tmp173).Add(tmp175).Add(tmp177).Add(tmp179).Add(tmp181).Add(tmp183);		HX_STACK_VAR(exhibition008TagObjectArray,"exhibition008TagObjectArray");
		HX_STACK_LINE(216)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,exhibition001ExplanationStringArray,HX_HCSTRING("EXH_001","\x27","\x62","\x7a","\x18"),HX_HCSTRING("Cista Cosmetic Container","\xf6","\x57","\xba","\x6a"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),exhibition001TagObjectArray,::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(217)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,exhibition002ExplanationStringArray,HX_HCSTRING("EXH_002","\x28","\x62","\x7a","\x18"),HX_HCSTRING("Replica Of Mauri Hand Club","\xfe","\x1d","\x04","\x5d"),HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),exhibition002TagObjectArray,::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(218)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,exhibition003ExplanationStringArray,HX_HCSTRING("EXH_003","\x29","\x62","\x7a","\x18"),HX_HCSTRING("The Holy Thorn Reliquary","\xee","\x3f","\x8b","\x39"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),exhibition003TagObjectArray,::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(219)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,exhibition004ExplanationStringArray,HX_HCSTRING("EXH_004","\x2a","\x62","\x7a","\x18"),HX_HCSTRING("The Lyte Jewel","\xd0","\x71","\x9f","\x0a"),HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),exhibition004TagObjectArray,::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(220)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,exhibition005ExplanationStringArray,HX_HCSTRING("EXH_005","\x2b","\x62","\x7a","\x18"),HX_HCSTRING("Helmet From The Ship Burial At Sutton Hoo","\x1d","\x8b","\x5d","\x58"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),exhibition005TagObjectArray,::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(221)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,exhibition006ExplanationStringArray,HX_HCSTRING("EXH_006","\x2c","\x62","\x7a","\x18"),HX_HCSTRING("Gold Belt Buckle From The Ship Burial At Sutton Hoo","\xe1","\x65","\x2a","\x25"),HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),exhibition006TagObjectArray,::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(222)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,exhibition007ExplanationStringArray,HX_HCSTRING("EXH_007","\x2d","\x62","\x7a","\x18"),HX_HCSTRING("Copper Ingot In The Shape Of An Oxhide","\xde","\xe6","\x03","\x78"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),exhibition007TagObjectArray,::EnumMuseumType_obj::EXH);
		HX_STACK_LINE(223)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,exhibition008ExplanationStringArray,HX_HCSTRING("EXH_008","\x2e","\x62","\x7a","\x18"),HX_HCSTRING("Red Polished Ware Figurine Cradling A Child","\x84","\x03","\x63","\xc3"),HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),exhibition008TagObjectArray,::EnumMuseumType_obj::EXH);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeExhibitionNewObjectVoid,(void))

Void CollectionPremade_obj::PremadeFloorObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeFloorObjectVoid",0xe4bb8b7b,"CollectionPremade.PremadeFloorObjectVoid","CollectionPremade.hx",234,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(235)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),HX_HCSTRING("First Floor","\x9c","\x21","\x70","\xf5"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp),::EnumMuseumType_obj::FLR);
		HX_STACK_LINE(236)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),HX_HCSTRING("Second Floor","\x20","\xf8","\x88","\x2f"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp1),::EnumMuseumType_obj::FLR);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeFloorObjectVoid,(void))

Void CollectionPremade_obj::PremadeFloorNewObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeFloorNewObjectVoid",0x1989416b,"CollectionPremade.PremadeFloorNewObjectVoid","CollectionPremade.hx",239,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(240)
		::ObjectTag tmp = _collectionGlobalObject->GetTagObjectArray()->__get((int)0).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		Array< ::Dynamic > tagGenericNewObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp);		HX_STACK_VAR(tagGenericNewObjectArray,"tagGenericNewObjectArray");
		HX_STACK_LINE(241)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericNewStringArray,HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),HX_HCSTRING("Ground Floor","\x73","\x5b","\x01","\x9b"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),tagGenericNewObjectArray,::EnumMuseumType_obj::FLR);
		HX_STACK_LINE(242)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericNewStringArray,HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),HX_HCSTRING("Upper Floor","\x4e","\xb4","\xb1","\xaa"),HX_HCSTRING("XXX_XXX","\xb1","\xf7","\x19","\x65"),tagGenericNewObjectArray,::EnumMuseumType_obj::FLR);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeFloorNewObjectVoid,(void))

Void CollectionPremade_obj::PremadeRoomObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeRoomObjectVoid",0xf5b58652,"CollectionPremade.PremadeRoomObjectVoid","CollectionPremade.hx",252,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(253)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),HX_HCSTRING("First Room","\x4b","\x88","\xbc","\x44"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp),::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(254)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(254)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),HX_HCSTRING("Second Room","\x47","\xee","\xfc","\x82"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp1),::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(255)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),HX_HCSTRING("Third Room","\xb4","\x6d","\xcc","\x63"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp2),::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(256)
		::CollectionGlobal tmp3 = _collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(256)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),HX_HCSTRING("Fourth Room","\x21","\x1d","\x19","\x8e"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),::CollectionFunction_obj::PickRandomTagObjectArray(tmp3),::EnumMuseumType_obj::ROM);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeRoomObjectVoid,(void))

Void CollectionPremade_obj::PremadeRoomNewObjectVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeRoomNewObjectVoid",0xf7a466f4,"CollectionPremade.PremadeRoomNewObjectVoid","CollectionPremade.hx",259,0xd14dbc64)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(260)
		::ObjectTag tmp = _collectionGlobalObject->GetTagObjectArray()->__get((int)0).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		Array< ::Dynamic > tagGenericNewObjectArray = Array_obj< ::Dynamic >::__new().Add(tmp);		HX_STACK_VAR(tagGenericNewObjectArray,"tagGenericNewObjectArray");
		HX_STACK_LINE(261)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericNewStringArray,HX_HCSTRING("ROM_001","\x22","\x11","\xdc","\x7c"),HX_HCSTRING("Room 1 Enlightenment","\xe0","\xed","\x3b","\xb5"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),tagGenericNewObjectArray,::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(262)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericNewStringArray,HX_HCSTRING("ROM_002","\x23","\x11","\xdc","\x7c"),HX_HCSTRING("Room 2A Collecting The World","\xa7","\x97","\x91","\xad"),HX_HCSTRING("FLR_001","\x7e","\x51","\xc9","\x37"),tagGenericNewObjectArray,::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(263)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericNewStringArray,HX_HCSTRING("ROM_003","\x24","\x11","\xdc","\x7c"),HX_HCSTRING("Room 41 The Sir Paul And Lady Ruddock Gallery","\xa0","\xaa","\xe5","\xf7"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),tagGenericNewObjectArray,::EnumMuseumType_obj::ROM);
		HX_STACK_LINE(264)
		::ObjectMuseum_obj::__new(_collectionGlobalObject,::CollectionPremade_obj::explanationGenericNewStringArray,HX_HCSTRING("ROM_004","\x25","\x11","\xdc","\x7c"),HX_HCSTRING("Room 72 Ancient Cyprus","\x3e","\xdc","\xba","\xf9"),HX_HCSTRING("FLR_002","\x7f","\x51","\xc9","\x37"),tagGenericNewObjectArray,::EnumMuseumType_obj::ROM);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremade_obj,PremadeRoomNewObjectVoid,(void))

Void CollectionPremade_obj::PremadeVisitorObjectVoid( int _amountInt,::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremade","PremadeVisitorObjectVoid",0x0940badd,"CollectionPremade.PremadeVisitorObjectVoid","CollectionPremade.hx",274,0xd14dbc64)
		HX_STACK_ARG(_amountInt,"_amountInt")
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(275)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(276)
		while((true)){
			HX_STACK_LINE(276)
			bool tmp = (loopCounter1Int < _amountInt);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(276)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(276)
			if ((tmp1)){
				HX_STACK_LINE(276)
				break;
			}
			HX_STACK_LINE(277)
			::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			int tmp3 = _collectionGlobalObject->PutIndexGlobalVisitorInt();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			int tmp4 = _collectionGlobalObject->GetIndexGlobalVisitorInt();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(277)
			::String tmp5 = (HX_HCSTRING("Visitor ","\xd2","\xd0","\x5e","\x02") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(277)
			::ObjectVisitor tmp6 = ::ObjectVisitor_obj::__new(tmp2,tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			::ObjectVisitor visitorObject = tmp6;		HX_STACK_VAR(visitorObject,"visitorObject");
			HX_STACK_LINE(278)
			(loopCounter1Int)++;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CollectionPremade_obj,PremadeVisitorObjectVoid,(void))


CollectionPremade_obj::CollectionPremade_obj()
{
}

bool CollectionPremade_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"PremadeRoomObjectVoid") ) { outValue = PremadeRoomObjectVoid_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"PremadeFloorObjectVoid") ) { outValue = PremadeFloorObjectVoid_dyn(); return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"PremadeRoomNewObjectVoid") ) { outValue = PremadeRoomNewObjectVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeVisitorObjectVoid") ) { outValue = PremadeVisitorObjectVoid_dyn(); return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"PremadeFloorNewObjectVoid") ) { outValue = PremadeFloorNewObjectVoid_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"PremadeExhibitionObjectVoid") ) { outValue = PremadeExhibitionObjectVoid_dyn(); return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"explanationGenericStringArray") ) { outValue = explanationGenericStringArray; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"PremadeExhibitionNewObjectVoid") ) { outValue = PremadeExhibitionNewObjectVoid_dyn(); return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"explanationGenericNewStringArray") ) { outValue = explanationGenericNewStringArray; return true;  }
	}
	return false;
}

bool CollectionPremade_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 29:
		if (HX_FIELD_EQ(inName,"explanationGenericStringArray") ) { explanationGenericStringArray=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"explanationGenericNewStringArray") ) { explanationGenericNewStringArray=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &CollectionPremade_obj::explanationGenericStringArray,HX_HCSTRING("explanationGenericStringArray","\xea","\x25","\xf3","\xde")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &CollectionPremade_obj::explanationGenericNewStringArray,HX_HCSTRING("explanationGenericNewStringArray","\xe6","\xf4","\x14","\x21")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionPremade_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CollectionPremade_obj::explanationGenericStringArray,"explanationGenericStringArray");
	HX_MARK_MEMBER_NAME(CollectionPremade_obj::explanationGenericNewStringArray,"explanationGenericNewStringArray");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionPremade_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CollectionPremade_obj::explanationGenericStringArray,"explanationGenericStringArray");
	HX_VISIT_MEMBER_NAME(CollectionPremade_obj::explanationGenericNewStringArray,"explanationGenericNewStringArray");
};

#endif

hx::Class CollectionPremade_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("explanationGenericStringArray","\xea","\x25","\xf3","\xde"),
	HX_HCSTRING("explanationGenericNewStringArray","\xe6","\xf4","\x14","\x21"),
	HX_HCSTRING("PremadeExhibitionObjectVoid","\x5a","\x30","\x06","\x05"),
	HX_HCSTRING("PremadeExhibitionNewObjectVoid","\xec","\xb1","\xe3","\xbd"),
	HX_HCSTRING("PremadeFloorObjectVoid","\x27","\x08","\xda","\x80"),
	HX_HCSTRING("PremadeFloorNewObjectVoid","\x3f","\xf8","\x50","\xcc"),
	HX_HCSTRING("PremadeRoomObjectVoid","\x26","\x43","\x7c","\xe7"),
	HX_HCSTRING("PremadeRoomNewObjectVoid","\xa0","\x66","\xdc","\xb5"),
	HX_HCSTRING("PremadeVisitorObjectVoid","\x89","\xba","\x78","\xc7"),
	::String(null()) };

void CollectionPremade_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionPremade","\x9a","\xa2","\xd1","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CollectionPremade_obj::__GetStatic;
	__mClass->mSetStaticField = &CollectionPremade_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CollectionPremade_obj >;
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

void CollectionPremade_obj::__boot()
{
	explanationGenericStringArray= Array_obj< ::String >::__new().Add(HX_HCSTRING("Explanation 1.","\x64","\x4b","\x12","\x7e")).Add(HX_HCSTRING("Explanation 2.","\x43","\x4c","\x12","\x7e")).Add(HX_HCSTRING("Explanation 3.","\x22","\x4d","\x12","\x7e"));
	explanationGenericNewStringArray= Array_obj< ::String >::__new().Add(HX_HCSTRING("Floor and room has no explanation.","\x06","\x88","\x49","\xa9"));
}

