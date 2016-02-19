import CollectionEnum;




/*This class is just a collection Of tag that is not general tag.
Which means that these tags is supposed to be specific to certain museum and exhibitio.
PENDING: Please make JSON tag generator to generate everything premade within this program.*/
class CollectionPremadeTag{





    /*==================================================*/
    public function new(){}
    public static function PremadeTagStructVoid(_collectionGlobalObject:CollectionGlobal){

        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Aged", ADJ).SetAdjectiveStringObject("Aged");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Animal", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Animal").SetNounPosStringObject("Animal's").SetNounSStringObject("Animals").SetNounSPosStringObject("Animals'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Archaeologist", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Archaeologist").SetNounPosStringObject("Archaeologist's").SetNounSStringObject("Archaeologists").SetNounSPosStringObject("Archaeologists'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Belt", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Belt").SetNounSStringObject("Belts");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Bowl", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Bowl").SetNounSStringObject("Bowls");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Boğazköy", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Boğazköy");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Bronze", ADJ).SetAdjectiveStringObject("Bronze");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Burial", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Burial").SetNounSStringObject("Burials");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Caenby", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Caenby");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cannatello", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cannatello");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cape Gelidonya", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cape Gelidonya");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Chain", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Chain").SetNounSStringObject("Chains");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cista", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Cista").SetNounSStringObject("Cistas");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Club", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Club").SetNounSStringObject("Clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Copper", ADJ).SetAdjectiveStringObject("Copper");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cosmetic", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Cosmetic").SetNounSStringObject("Cosmetics");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cradleboard", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Cradleboard").SetNounSStringObject("Cradleboards");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crest", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crest").SetNounSStringObject("Crests");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crete", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Crete");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crouch", VERB_INTRANSITIVE).SetVerb1StringObject("Crouch").SetVerb2StringObject("Crouched").SetVerb3StringObject("Crouched").SetVerbIngStringObject("Crouching").SetVerbSStringObject("Crouchs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crown Of Thorn", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crown Of Thorn").SetNounSStringObject("Crown Of Thorns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cypriot", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cypriot");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cyprus", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cyprus");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cyprus", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cyprus");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Egypt", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Egypt");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "England", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("England");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Female", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Female").SetNounPosStringObject("Female's").SetNounSStringObject("Females").SetNounSPosStringObject("Females'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Ferdinand De Rothschild", NOUN_ALIVE_CONCRETE).SetNounStringObject("Ferdinand De Rothschild").SetNounPosStringObject("Ferdinand De Rothschild's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Figurine", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Figurine").SetNounSStringObject("Figurines");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Garnet", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Garnet").SetNounSStringObject("Garnets");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Gold", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Club").SetNounSStringObject("Clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Gold", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Gold").SetNounSStringObject("Golds");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Goldsmith", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Goldsmith").SetNounPosStringObject("Goldsmith's").SetNounSStringObject("Goldsmiths").SetNounSPosStringObject("Goldsmiths'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Hattusa", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Hattusa");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Helmet", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Helmet").SetNounSStringObject("Helmets");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Hittite", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Hittite");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Infant", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Infant").SetNounPosStringObject("Infant's").SetNounSStringObject("Infants").SetNounSPosStringObject("Infants'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Ingot", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Ingot").SetNounSStringObject("Ingots");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Item", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Item").SetNounSStringObject("Items");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Jade", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Jade").SetNounSStringObject("Jades");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "James", NOUN_ALIVE_CONCRETE).SetNounStringObject("James").SetNounPosStringObject("James'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crown Of Thorn", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crown Of Thorn").SetNounSStringObject("Crown Of Thorns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Jewel", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Jewel").SetNounSStringObject("Jewels");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "John, Duke Of Berry", NOUN_ALIVE_CONCRETE).SetNounStringObject("John, Duke Of Berry").SetNounPosStringObject("John, Duke Of Berry's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Lincolnshire", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Lincolnshire");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Lion", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Lion").SetNounPosStringObject("Lion's").SetNounSStringObject("Lions").SetNounSPosStringObject("Lions'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Louvre", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Louvre");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mask", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Mask").SetNounSStringObject("Mask");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Masked", ADJ).SetAdjectiveStringObject("Masked");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mauri", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Mauri").SetNounPosStringObject("Mauri's").SetNounSStringObject("Mauris").SetNounSPosStringObject("Mauris'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mediterranean", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Mediterranean");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Metal", ADJ).SetAdjectiveStringObject("Metal");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Oval", ADJ).SetAdjectiveStringObject("Oval");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Oxhide", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Oxhide").SetNounSStringObject("Oxhides");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Paris", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Paris");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Pearl", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Pearl").SetNounSStringObject("Pearls");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Peloponnese", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Peloponnese").SetNounPosStringObject("Peloponnese's").SetNounSStringObject("Peloponneses").SetNounSPosStringObject("Peloponneses'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Pendant", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crown Of Thorn").SetNounSStringObject("Crown Of Thorns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Qantir-Piramesse", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Qantir-Piramesse");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Reliquary", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Reliquary").SetNounSStringObject("Reliquaries");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Rose", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Club").SetNounSStringObject("Clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sapphire", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Club").SetNounSStringObject("Clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Ship", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Ship").SetNounSStringObject("Ships");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sicily", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Sicily");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Slender", ADJ).SetAdjectiveStringObject("Slender");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Spear", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Spear").SetNounSStringObject("Spears");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Spear", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Spear").SetNounSStringObject("Spears");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Staffordshire", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Staffordshire");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Statue", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Statue").SetNounSStringObject("Statues");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Stone", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Stone").SetNounSStringObject("Stones");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sweden", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Sweden");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Table", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Table").SetNounSStringObject("Tables");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "The Holy Thorn Reliquary", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("The Holy Thorn Reliquary").SetNounSStringObject("The Holy Thorn Reliquaries");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "The Lyte Jewel", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Club").SetNounSStringObject("Clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "The Sutton Hoo", NOUN_ALIVE_CONCRETE).SetNounStringObject("John, Duke Of Berry").SetNounPosStringObject("John, Duke Of Berry's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Turkey", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Turkey");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Uluburun", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Uluburun");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Valois", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("Valois");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Valsgärde", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Valsgärde");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Vendel", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Vendel");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Vessel", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Vessel").SetNounSStringObject("Vessels");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Waddesdon Bequest", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Waddesdon Bequest");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Warrior", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Warrior").SetNounPosStringObject("Warrior's").SetNounSStringObject("Warriors").SetNounSPosStringObject("Warriors'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Weapon", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Weapon").SetNounSStringObject("Weapons");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Wolf", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Wolf").SetNounPosStringObject("Wolf's").SetNounSStringObject("Wolfs").SetNounSPosStringObject("Wolfs'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Woman", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Woman").SetNounPosStringObject("Woman's").SetNounSStringObject("Women").SetNounSPosStringObject("Women's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Wood", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Wood").SetNounSStringObject("Woods");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Man", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Man").SetNounPosStringObject("Man's").SetNounSStringObject("Young men").SetNounSPosStringObject("Young men's");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Extravagant", ADJ).SetAdjectiveStringObject("Extravagant");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Extravagantly", ADV).SetAdverbStringObject("Extravagantly");
        /*
        PremadeTagStructAdjVoid(_collectionGlobalObject);
        PremadeTagStructAdvVoid(_collectionGlobalObject);
        PremadeTagStructNounAliveAbstractVoid(_collectionGlobalObject);
        PremadeTagStructNounAliveConcreteVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimateHoldAbstractVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimateHoldConcreteVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimatePlaceAbstractVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimatePlaceConcreteOwnerVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimateSeeAbstractVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimateSeeConcreteVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimateTitleAbstractVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimateWearAbstractVoid(_collectionGlobalObject);
        PremadeTagStructNounInanimateWearConcreteVoid(_collectionGlobalObject);
        PremadeTagStructVerbVoidIntransitiveVoid(_collectionGlobalObject);
        PremadeTagStructVerbVoidTransitiveVoid(_collectionGlobalObject);
        */
    }
    public static function PremadeTagStructAdjVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Awful", ADJ).SetAdjectiveStringObject("Awful");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Bad", ADJ).SetAdjectiveStringObject("Bad");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Excellent", ADJ).SetAdjectiveStringObject("Excellent");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Good", ADJ).SetAdjectiveStringObject("Good");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "SOft", ADJ).SetAdjectiveStringObject("SOft");
    }
    public static function PremadeTagStructAdvVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "desperate", ADV).SetAdverbStringObject("desperately");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Slow", ADV).SetAdverbStringObject("Bad");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Perfect", ADV).SetAdverbStringObject("Excellent");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Quick", ADV).SetAdverbStringObject("Good");
    }
    public static function PremadeTagStructNounAliveAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Assasin", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Assasin").SetNounPosStringObject("Assasin's").SetNounSStringObject("Assasins").SetNounSPosStringObject("Assasins'");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Boy", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Boy").SetNounPosStringObject("Boy's").SetNounSStringObject("Boys").SetNounSPosStringObject("Boys'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Dragon", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Dragon").SetNounPosStringObject("Dragon's").SetNounSStringObject("Dragons").SetNounSPosStringObject("Dragons'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Iraqi", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Iraqi").SetNounPosStringObject("Iraqi's").SetNounSStringObject("Iraqis").SetNounSPosStringObject("Iraqis'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Italian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Italian").SetNounPosStringObject("Italian's").SetNounSStringObject("Italians").SetNounSPosStringObject("Italians'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Painter", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Painter").SetNounPosStringObject("Painter's").SetNounSStringObject("Painters").SetNounSPosStringObject("Painters'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Romanian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Romanian").SetNounPosStringObject("Romanian's").SetNounSStringObject("Romanians").SetNounSPosStringObject("Romanians'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Russian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Russian").SetNounPosStringObject("Russian's").SetNounSStringObject("Russians").SetNounSPosStringObject("Russians'");
    }
    public static function PremadeTagStructNounAliveConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Andy", NOUN_ALIVE_CONCRETE).SetNounStringObject("Andy").SetNounPosStringObject("Andy's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Bodhisattva", NOUN_ALIVE_CONCRETE).SetNounStringObject("Bodhisattva").SetNounPosStringObject("Bodhisattva's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Buddha", NOUN_ALIVE_CONCRETE).SetNounStringObject("Buddha").SetNounPosStringObject("Buddha's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Dimitri", NOUN_ALIVE_CONCRETE).SetNounStringObject("Dimitri").SetNounPosStringObject("Dimitri's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Julius Caesar", NOUN_ALIVE_CONCRETE).SetNounStringObject("Julius Caesar").SetNounPosStringObject("Julius Caesar's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Maria", NOUN_ALIVE_CONCRETE).SetNounStringObject("Maria").SetNounPosStringObject("Maria's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Medusa", NOUN_ALIVE_CONCRETE).SetNounStringObject("Medusa").SetNounPosStringObject("Medusa's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mikael", NOUN_ALIVE_CONCRETE).SetNounStringObject("Mikael").SetNounPosStringObject("Mikael's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Napoleon", NOUN_ALIVE_CONCRETE).SetNounStringObject("Napoleon").SetNounPosStringObject("Napoleon's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Ramses", NOUN_ALIVE_CONCRETE).SetNounStringObject("Ramses").SetNounPosStringObject("Ramses'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sphinx", NOUN_ALIVE_CONCRETE).SetNounStringObject("Sphinx").SetNounPosStringObject("Sphinx's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Washington", NOUN_ALIVE_CONCRETE).SetNounStringObject("Washington").SetNounPosStringObject("Washington's");
    }
    public static function PremadeTagStructNounInanimateHoldAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Grudge", NOUN_INANIMATE_HOLD_ABSTRACT).SetNounStringObject("Grudge").SetNounSStringObject("Grudges");
    }
    public static function PremadeTagStructNounInanimateHoldConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Bat", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Bat").SetNounSStringObject("Bats");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Gun", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Gun").SetNounSStringObject("Guns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Hand", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Hand").SetNounSStringObject("Hands");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Pencil", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Pencil").SetNounSStringObject("Pencils");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sword", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Sword").SetNounSStringObject("Swords");
    }
    public static function PremadeTagStructNounInanimatePlaceAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mind", NOUN_INANIMATE_PLACE_ABSTRACT).SetNounStringObject("Mind").SetNounSStringObject("Minds");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Intuition", NOUN_INANIMATE_PLACE_ABSTRACT).SetNounStringObject("Intuition").SetNounSStringObject("Intuitions");
    }
    public static function PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "India", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("India");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Italia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Italia");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Netherlands", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Netherlands");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "RussiaRussia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Russia");
    }
    public static function PremadeTagStructNounInanimatePlaceConcreteOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Country", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Country").SetNounSStringObject("Countries");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Harbor", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Harbor").SetNounSStringObject("Harbors");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "House", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("House").SetNounSStringObject("Houses");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "School", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("School").SetNounSStringObject("Schools");
    }
    public static function PremadeTagStructNounInanimateSeeAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Vision", NOUN_INANIMATE_SEE_ABSTRACT).SetNounStringObject("Vision");
    }
    public static function PremadeTagStructNounInanimateSeeConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Lightning", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("Lightning");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Moonlight", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("Moonlight");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Rainbow", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("Rainbow");
    }
    public static function PremadeTagStructNounInanimateTitleAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Commendation", NOUN_INANIMATE_TITLE).SetNounStringObject("Commendation").SetNounSStringObject("Commendations");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Job", NOUN_INANIMATE_TITLE).SetNounStringObject("Job").SetNounSStringObject("Jobs");
    }
    public static function PremadeTagStructNounInanimateWearAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Pride", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("Pride");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Shame", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("Shame");
    }
    public static function PremadeTagStructNounInanimateWearConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crown", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crown").SetNounSStringObject("Crowns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Shirt", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Shirt").SetNounSStringObject("Shirts");
    }
    public static function PremadeTagStructVerbVoidIntransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Die", VERB_INTRANSITIVE).SetVerb1StringObject("Die").SetVerb2StringObject("Died").SetVerb3StringObject("Died").SetVerbIngStringObject("Dying").SetVerbSStringObject("Dies");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Jump", VERB_INTRANSITIVE).SetVerb1StringObject("Jump").SetVerb2StringObject("Jumped").SetVerb3StringObject("Jumped").SetVerbIngStringObject("Jumping").SetVerbSStringObject("Jumps");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Run", VERB_INTRANSITIVE).SetVerb1StringObject("Run").SetVerb2StringObject("Ran").SetVerb3StringObject("Ran").SetVerbIngStringObject("Running").SetVerbSStringObject("Runs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sing", VERB_INTRANSITIVE).SetVerb1StringObject("Sing").SetVerb2StringObject("Sang").SetVerb3StringObject("Sung").SetVerbIngStringObject("Singing").SetVerbSStringObject("Sings");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sleep", VERB_INTRANSITIVE).SetVerb1StringObject("Sleep").SetVerb2StringObject("Slept").SetVerb3StringObject("Slept").SetVerbIngStringObject("Sleeping").SetVerbSStringObject("Sleeps");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Work", VERB_INTRANSITIVE).SetVerb1StringObject("Work").SetVerb2StringObject("Worked").SetVerb3StringObject("Worked").SetVerbIngStringObject("Working").SetVerbSStringObject("Works");
    }
    public static function PremadeTagStructVerbVoidTransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Buy", VERB_TRANSITIVE).SetVerb1StringObject("Buy").SetVerb2StringObject("Bought").SetVerb3StringObject("Bought").SetVerbIngStringObject("Buying").SetVerbSStringObject("Buys");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Call", VERB_TRANSITIVE).SetVerb1StringObject("Call").SetVerb2StringObject("Called").SetVerb3StringObject("Called").SetVerbIngStringObject("Calling").SetVerbSStringObject("Calls");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "desire", VERB_TRANSITIVE).SetVerb1StringObject("desire").SetVerb2StringObject("desired").SetVerb3StringObject("desired").SetVerbIngStringObject("desiring").SetVerbSStringObject("desires");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Drink", VERB_TRANSITIVE).SetVerb1StringObject("Drink").SetVerb2StringObject("Drunk").SetVerb3StringObject("Drank").SetVerbIngStringObject("Drinking").SetVerbSStringObject("Drinks");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Drive", VERB_TRANSITIVE).SetVerb1StringObject("Drive").SetVerb2StringObject("Drove").SetVerb3StringObject("Driven").SetVerbIngStringObject("Driving").SetVerbSStringObject("Drives");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Eat", VERB_TRANSITIVE).SetVerb1StringObject("Eat").SetVerb2StringObject("Ate").SetVerb3StringObject("Eaten").SetVerbIngStringObject("Eating").SetVerbSStringObject("Eats");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Fight", VERB_TRANSITIVE).SetVerb1StringObject("Fight").SetVerb2StringObject("Fought").SetVerb3StringObject("Fought").SetVerbIngStringObject("Fighting").SetVerbSStringObject("Fights");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Get", VERB_TRANSITIVE).SetVerb1StringObject("Get").SetVerb2StringObject("Got").SetVerb3StringObject("Gotten").SetVerbIngStringObject("Getting").SetVerbSStringObject("Gets");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Grab", VERB_TRANSITIVE).SetVerb1StringObject("Grab").SetVerb2StringObject("Grabed").SetVerb3StringObject("Grabed").SetVerbIngStringObject("Grabbing").SetVerbSStringObject("Grabs");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Kill", VERB_TRANSITIVE).SetVerb1StringObject("Kill").SetVerb2StringObject("Killed").SetVerb3StringObject("Killed").SetVerbIngStringObject("Killing").SetVerbSStringObject("Kills");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Love", VERB_TRANSITIVE).SetVerb1StringObject("Love").SetVerb2StringObject("Loved").SetVerb3StringObject("Loved").SetVerbIngStringObject("Loving").SetVerbSStringObject("Loves");
    }
    /*==================================================*/





}
