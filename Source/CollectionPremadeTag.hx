import CollectionEnum;




/*This class is just a collection of tag that is not general tag.
Which means that these tags is supposed to be specific to certain museum and exhibitio.
PENDING: Please make JSON tag generator to generate everything premade within this program.*/
class CollectionPremadeTag{





    /*==================================================*/
    public function new(){}
    public static function PremadeTagStructVoid(_collectionGlobalObject:CollectionGlobal){

        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "aged", ADJ).SetAdjectiveStringObject("aged");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "animal", NOUN_ALIVE_ABSTRACT).SetNounStringObject("animal").SetNounPosStringObject("animal's").SetNounSStringObject("animals").SetNounSPosStringObject("animals'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "archaeologist", NOUN_ALIVE_ABSTRACT).SetNounStringObject("archaeologist").SetNounPosStringObject("archaeologist's").SetNounSStringObject("archaeologists").SetNounSPosStringObject("archaeologists'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "belt", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("belt").SetNounSStringObject("belts");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "bowl", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("bowl").SetNounSStringObject("bowls");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Boğazköy", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Boğazköy");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "bronze", ADJ).SetAdjectiveStringObject("bronze");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "burial", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("burial").SetNounSStringObject("burials");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Caenby", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Caenby");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cannatello", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cannatello");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cape Gelidonya", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cape Gelidonya");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "chain", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("chain").SetNounSStringObject("chains");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "cista", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("cista").SetNounSStringObject("cistas");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "club", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("club").SetNounSStringObject("clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "copper", ADJ).SetAdjectiveStringObject("copper");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "cosmetic", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("cosmetic").SetNounSStringObject("cosmetics");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "cradleboard", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("cradleboard").SetNounSStringObject("cradleboards");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "crest", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("crest").SetNounSStringObject("crests");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crete", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Crete");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "crouch", VERB_INTRANSITIVE).SetVerb1StringObject("crouch").SetVerb2StringObject("crouched").SetVerb3StringObject("crouched").SetVerbIngStringObject("crouching").SetVerbSStringObject("crouchs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crown of Thorn", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crown of Thorn").SetNounSStringObject("Crown of Thorns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cypriot", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cypriot");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cyprus", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cyprus");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Cyprus", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Cyprus");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Egypt", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Egypt");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "England", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("England");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "female", NOUN_ALIVE_ABSTRACT).SetNounStringObject("female").SetNounPosStringObject("female's").SetNounSStringObject("females").SetNounSPosStringObject("females'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Ferdinand de Rothschild", NOUN_ALIVE_CONCRETE).SetNounStringObject("Ferdinand de Rothschild").SetNounPosStringObject("Ferdinand de Rothschild's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "figurine", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("figurine").SetNounSStringObject("figurines");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "garnet", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("garnet").SetNounSStringObject("garnets");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "gold", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("club").SetNounSStringObject("clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "gold", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("gold").SetNounSStringObject("golds");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "goldsmith", NOUN_ALIVE_ABSTRACT).SetNounStringObject("goldsmith").SetNounPosStringObject("goldsmith's").SetNounSStringObject("goldsmiths").SetNounSPosStringObject("goldsmiths'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Hattusa", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Hattusa");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "helmet", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("helmet").SetNounSStringObject("helmets");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Hittite", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Hittite");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "infant", NOUN_ALIVE_ABSTRACT).SetNounStringObject("infant").SetNounPosStringObject("infant's").SetNounSStringObject("infants").SetNounSPosStringObject("infants'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "ingot", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("ingot").SetNounSStringObject("ingots");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "item", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("item").SetNounSStringObject("items");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "jade", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("jade").SetNounSStringObject("jades");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "James", NOUN_ALIVE_CONCRETE).SetNounStringObject("James").SetNounPosStringObject("James'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crown of Thorn", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crown of Thorn").SetNounSStringObject("Crown of Thorns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "jewel", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("jewel").SetNounSStringObject("jewels");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "John, Duke of Berry", NOUN_ALIVE_CONCRETE).SetNounStringObject("John, Duke of Berry").SetNounPosStringObject("John, Duke of Berry's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Lincolnshire", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Lincolnshire");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "lion", NOUN_ALIVE_ABSTRACT).SetNounStringObject("lion").SetNounPosStringObject("lion's").SetNounSStringObject("lions").SetNounSPosStringObject("lions'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Louvre", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Louvre");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "mask", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("mask").SetNounSStringObject("mask");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "masked", ADJ).SetAdjectiveStringObject("masked");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mauri", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Mauri").SetNounPosStringObject("Mauri's").SetNounSStringObject("Mauris").SetNounSPosStringObject("Mauris'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mediterranean", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Mediterranean");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "metal", ADJ).SetAdjectiveStringObject("metal");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "oval", ADJ).SetAdjectiveStringObject("oval");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "oxhide", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("oxhide").SetNounSStringObject("oxhides");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Paris", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Paris");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "pearl", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("pearl").SetNounSStringObject("pearls");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Peloponnese", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Peloponnese").SetNounPosStringObject("Peloponnese's").SetNounSStringObject("Peloponneses").SetNounSPosStringObject("Peloponneses'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "pendant", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crown of Thorn").SetNounSStringObject("Crown of Thorns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Qantir-Piramesse", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Qantir-Piramesse");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "reliquary", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("reliquary").SetNounSStringObject("reliquaries");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "rose", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("club").SetNounSStringObject("clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "sapphire", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("club").SetNounSStringObject("clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "ship", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("ship").SetNounSStringObject("ships");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sicily", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Sicily");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "slender", ADJ).SetAdjectiveStringObject("slender");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "spear", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("spear").SetNounSStringObject("spears");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "spear", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("spear").SetNounSStringObject("spears");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Staffordshire", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Staffordshire");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "statue", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("statue").SetNounSStringObject("statues");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "stone", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("stone").SetNounSStringObject("stones");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sweden", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Sweden");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "table", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("table").SetNounSStringObject("tables");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "The Holy Thorn Reliquary", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("The Holy Thorn Reliquary").SetNounSStringObject("The Holy Thorn Reliquaries");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "The Lyte Jewel", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("club").SetNounSStringObject("clubs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "The Sutton Hoo", NOUN_ALIVE_CONCRETE).SetNounStringObject("John, Duke of Berry").SetNounPosStringObject("John, Duke of Berry's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Turkey", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Turkey");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Uluburun", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Uluburun");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Valois", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("Valois");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Valsgärde", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Valsgärde");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Vendel", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Vendel");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "vessel", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("vessel").SetNounSStringObject("vessels");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Waddesdon Bequest", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Waddesdon Bequest");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "warrior", NOUN_ALIVE_ABSTRACT).SetNounStringObject("warrior").SetNounPosStringObject("warrior's").SetNounSStringObject("warriors").SetNounSPosStringObject("warriors'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "weapon", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("weapon").SetNounSStringObject("weapons");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "wolf", NOUN_ALIVE_ABSTRACT).SetNounStringObject("wolf").SetNounPosStringObject("wolf's").SetNounSStringObject("wolfs").SetNounSPosStringObject("wolfs'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "woman", NOUN_ALIVE_ABSTRACT).SetNounStringObject("woman").SetNounPosStringObject("woman's").SetNounSStringObject("women").SetNounSPosStringObject("women's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "wood", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("wood").SetNounSStringObject("woods");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "young man", NOUN_ALIVE_ABSTRACT).SetNounStringObject("young man").SetNounPosStringObject("young man's").SetNounSStringObject("young men").SetNounSPosStringObject("young men's");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "extravagant", ADJ).SetAdjectiveStringObject("extravagant");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "extravagantly", ADV).SetAdverbStringObject("extravagantly");
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
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Awful", ADJ).SetAdjectiveStringObject("awful");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Bad", ADJ).SetAdjectiveStringObject("bad");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Excellent", ADJ).SetAdjectiveStringObject("excellent");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Good", ADJ).SetAdjectiveStringObject("good");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Soft", ADJ).SetAdjectiveStringObject("soft");
    }
    public static function PremadeTagStructAdvVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Desperate", ADV).SetAdverbStringObject("desperately");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Slow", ADV).SetAdverbStringObject("bad");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Perfect", ADV).SetAdverbStringObject("excellent");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Quick", ADV).SetAdverbStringObject("good");
    }
    public static function PremadeTagStructNounAliveAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Assasin", NOUN_ALIVE_ABSTRACT).SetNounStringObject("assasin").SetNounPosStringObject("assasin's").SetNounSStringObject("assasins").SetNounSPosStringObject("assasins'");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Boy", NOUN_ALIVE_ABSTRACT).SetNounStringObject("boy").SetNounPosStringObject("boy's").SetNounSStringObject("boys").SetNounSPosStringObject("boys'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Dragon", NOUN_ALIVE_ABSTRACT).SetNounStringObject("dragon").SetNounPosStringObject("dragon's").SetNounSStringObject("dragons").SetNounSPosStringObject("dragons'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Iraqi", NOUN_ALIVE_ABSTRACT).SetNounStringObject("iraqi").SetNounPosStringObject("iraqi's").SetNounSStringObject("iraqis").SetNounSPosStringObject("iraqis'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Italian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("italian").SetNounPosStringObject("italian's").SetNounSStringObject("italians").SetNounSPosStringObject("italians'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Painter", NOUN_ALIVE_ABSTRACT).SetNounStringObject("painter").SetNounPosStringObject("painter's").SetNounSStringObject("painters").SetNounSPosStringObject("painters'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Romanian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("romanian").SetNounPosStringObject("romanian's").SetNounSStringObject("romanians").SetNounSPosStringObject("romanians'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Russian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("russian").SetNounPosStringObject("russian's").SetNounSStringObject("russians").SetNounSPosStringObject("russians'");
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
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Grudge", NOUN_INANIMATE_HOLD_ABSTRACT).SetNounStringObject("grudge").SetNounSStringObject("grudges");
    }
    public static function PremadeTagStructNounInanimateHoldConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Bat", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("bat").SetNounSStringObject("bats");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Gun", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("gun").SetNounSStringObject("guns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Hand", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("hand").SetNounSStringObject("hands");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Pencil", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("pencil").SetNounSStringObject("pencils");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sword", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("sword").SetNounSStringObject("swords");
    }
    public static function PremadeTagStructNounInanimatePlaceAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mind", NOUN_INANIMATE_PLACE_ABSTRACT).SetNounStringObject("mind").SetNounSStringObject("minds");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Intuition", NOUN_INANIMATE_PLACE_ABSTRACT).SetNounStringObject("intuition").SetNounSStringObject("intuitions");
    }
    public static function PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "India", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("India");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Italia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Italia");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Netherlands", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Netherlands");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "RussiaRussia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Russia");
    }
    public static function PremadeTagStructNounInanimatePlaceConcreteOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Country", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("country").SetNounSStringObject("countries");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Harbor", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("harbor").SetNounSStringObject("harbors");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "House", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("house").SetNounSStringObject("houses");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "School", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("school").SetNounSStringObject("schools");
    }
    public static function PremadeTagStructNounInanimateSeeAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Vision", NOUN_INANIMATE_SEE_ABSTRACT).SetNounStringObject("vision");
    }
    public static function PremadeTagStructNounInanimateSeeConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Lightning", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("lightning");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Moonlight", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("moonlight");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Rainbow", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("rainbow");
    }
    public static function PremadeTagStructNounInanimateTitleAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Commendation", NOUN_INANIMATE_TITLE).SetNounStringObject("commendation").SetNounSStringObject("commendations");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Job", NOUN_INANIMATE_TITLE).SetNounStringObject("job").SetNounSStringObject("jobs");
    }
    public static function PremadeTagStructNounInanimateWearAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Pride", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("pride");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Shame", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("shame");
    }
    public static function PremadeTagStructNounInanimateWearConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crown", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("crown").SetNounSStringObject("crowns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Shirt", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("shirt").SetNounSStringObject("shirts");
    }
    public static function PremadeTagStructVerbVoidIntransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Die", VERB_INTRANSITIVE).SetVerb1StringObject("die").SetVerb2StringObject("died").SetVerb3StringObject("died").SetVerbIngStringObject("dying").SetVerbSStringObject("dies");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Jump", VERB_INTRANSITIVE).SetVerb1StringObject("jump").SetVerb2StringObject("jumped").SetVerb3StringObject("jumped").SetVerbIngStringObject("jumping").SetVerbSStringObject("jumps");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Run", VERB_INTRANSITIVE).SetVerb1StringObject("run").SetVerb2StringObject("ran").SetVerb3StringObject("ran").SetVerbIngStringObject("running").SetVerbSStringObject("runs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sing", VERB_INTRANSITIVE).SetVerb1StringObject("sing").SetVerb2StringObject("sang").SetVerb3StringObject("sung").SetVerbIngStringObject("singing").SetVerbSStringObject("sings");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sleep", VERB_INTRANSITIVE).SetVerb1StringObject("sleep").SetVerb2StringObject("slept").SetVerb3StringObject("slept").SetVerbIngStringObject("sleeping").SetVerbSStringObject("sleeps");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Work", VERB_INTRANSITIVE).SetVerb1StringObject("work").SetVerb2StringObject("worked").SetVerb3StringObject("worked").SetVerbIngStringObject("working").SetVerbSStringObject("works");
    }
    public static function PremadeTagStructVerbVoidTransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Buy", VERB_TRANSITIVE).SetVerb1StringObject("buy").SetVerb2StringObject("bought").SetVerb3StringObject("bought").SetVerbIngStringObject("buying").SetVerbSStringObject("buys");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Call", VERB_TRANSITIVE).SetVerb1StringObject("call").SetVerb2StringObject("called").SetVerb3StringObject("called").SetVerbIngStringObject("calling").SetVerbSStringObject("calls");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Desire", VERB_TRANSITIVE).SetVerb1StringObject("desire").SetVerb2StringObject("desired").SetVerb3StringObject("desired").SetVerbIngStringObject("desiring").SetVerbSStringObject("desires");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Drink", VERB_TRANSITIVE).SetVerb1StringObject("drink").SetVerb2StringObject("drunk").SetVerb3StringObject("drank").SetVerbIngStringObject("drinking").SetVerbSStringObject("drinks");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Drive", VERB_TRANSITIVE).SetVerb1StringObject("drive").SetVerb2StringObject("drove").SetVerb3StringObject("driven").SetVerbIngStringObject("driving").SetVerbSStringObject("drives");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Eat", VERB_TRANSITIVE).SetVerb1StringObject("eat").SetVerb2StringObject("ate").SetVerb3StringObject("eaten").SetVerbIngStringObject("eating").SetVerbSStringObject("eats");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Fight", VERB_TRANSITIVE).SetVerb1StringObject("fight").SetVerb2StringObject("fought").SetVerb3StringObject("fought").SetVerbIngStringObject("fighting").SetVerbSStringObject("fights");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Get", VERB_TRANSITIVE).SetVerb1StringObject("get").SetVerb2StringObject("got").SetVerb3StringObject("gotten").SetVerbIngStringObject("getting").SetVerbSStringObject("gets");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Grab", VERB_TRANSITIVE).SetVerb1StringObject("grab").SetVerb2StringObject("grabed").SetVerb3StringObject("grabed").SetVerbIngStringObject("grabbing").SetVerbSStringObject("grabs");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Kill", VERB_TRANSITIVE).SetVerb1StringObject("kill").SetVerb2StringObject("killed").SetVerb3StringObject("killed").SetVerbIngStringObject("killing").SetVerbSStringObject("kills");
        new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Love", VERB_TRANSITIVE).SetVerb1StringObject("love").SetVerb2StringObject("loved").SetVerb3StringObject("loved").SetVerbIngStringObject("loving").SetVerbSStringObject("loves");
    }
    /*==================================================*/





}