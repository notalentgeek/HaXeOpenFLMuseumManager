import CollectionEnum;





/*Collection of object Tag for common words.
PENDING: Change this into JSON/XML file extractor.*/
class CollectionTagGeneral{





    /*==================================================*/
    public function new(){}
    public static function TagGeneralStructVoid(_collectionGlobalObject:CollectionGlobal){
        TagGeneralStructAdjVoid(_collectionGlobalObject);
        TagGeneralStructAdvVoid(_collectionGlobalObject);
        TagGeneralStructNounAliveAbstractVoid(_collectionGlobalObject);
        TagGeneralStructNounAliveConcreteVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimateHoldAbstractVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimateHoldConcreteVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimatePlaceAbstractVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimatePlaceConcreteOwnerVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimateSeeAbstractVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimateSeeConcreteVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimateTitleAbstractVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimateWearAbstractVoid(_collectionGlobalObject);
        TagGeneralStructNounInanimateWearConcreteVoid(_collectionGlobalObject);
        TagGeneralStructVerbVoidIntransitiveVoid(_collectionGlobalObject);
        TagGeneralStructVerbVoidTransitiveVoid(_collectionGlobalObject);
    }
    public static function TagGeneralStructAdjVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Awful", ADJ).SetAdjectiveStringObject("awful");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Bad", ADJ).SetAdjectiveStringObject("bad");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Excellent", ADJ).SetAdjectiveStringObject("excellent");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Good", ADJ).SetAdjectiveStringObject("good");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Soft", ADJ).SetAdjectiveStringObject("soft");
    }
    public static function TagGeneralStructAdvVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Desperate", ADV).SetAdverbStringObject("desperately");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Slow", ADV).SetAdverbStringObject("bad");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Perfect", ADV).SetAdverbStringObject("excellent");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Quick", ADV).SetAdverbStringObject("good");
    }
    public static function TagGeneralStructNounAliveAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Assasin", NOUN_ALIVE_ABSTRACT).SetNounStringObject("assasin").SetNounPosStringObject("assasin's").SetNounSStringObject("assasins").SetNounSPosStringObject("assasins'");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Boy", NOUN_ALIVE_ABSTRACT).SetNounStringObject("boy").SetNounPosStringObject("boy's").SetNounSStringObject("boys").SetNounSPosStringObject("boys'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Dragon", NOUN_ALIVE_ABSTRACT).SetNounStringObject("dragon").SetNounPosStringObject("dragon's").SetNounSStringObject("dragons").SetNounSPosStringObject("dragons'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Iraqi", NOUN_ALIVE_ABSTRACT).SetNounStringObject("iraqi").SetNounPosStringObject("iraqi's").SetNounSStringObject("iraqis").SetNounSPosStringObject("iraqis'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Italian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("italian").SetNounPosStringObject("italian's").SetNounSStringObject("italians").SetNounSPosStringObject("italians'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Painter", NOUN_ALIVE_ABSTRACT).SetNounStringObject("painter").SetNounPosStringObject("painter's").SetNounSStringObject("painters").SetNounSPosStringObject("painters'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Romanian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("romanian").SetNounPosStringObject("romanian's").SetNounSStringObject("romanians").SetNounSPosStringObject("romanians'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Russian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("russian").SetNounPosStringObject("russian's").SetNounSStringObject("russians").SetNounSPosStringObject("russians'");
    }
    public static function TagGeneralStructNounAliveConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Andy", NOUN_ALIVE_CONCRETE).SetNounStringObject("Andy").SetNounPosStringObject("Andy's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Bodhisattva", NOUN_ALIVE_CONCRETE).SetNounStringObject("Bodhisattva").SetNounPosStringObject("Bodhisattva's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Buddha", NOUN_ALIVE_CONCRETE).SetNounStringObject("Buddha").SetNounPosStringObject("Buddha's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Dimitri", NOUN_ALIVE_CONCRETE).SetNounStringObject("Dimitri").SetNounPosStringObject("Dimitri's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Julius Caesar", NOUN_ALIVE_CONCRETE).SetNounStringObject("Julius Caesar").SetNounPosStringObject("Julius Caesar's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Maria", NOUN_ALIVE_CONCRETE).SetNounStringObject("Maria").SetNounPosStringObject("Maria's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Medusa", NOUN_ALIVE_CONCRETE).SetNounStringObject("Medusa").SetNounPosStringObject("Medusa's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Mikael", NOUN_ALIVE_CONCRETE).SetNounStringObject("Mikael").SetNounPosStringObject("Mikael's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Napoleon", NOUN_ALIVE_CONCRETE).SetNounStringObject("Napoleon").SetNounPosStringObject("Napoleon's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Ramses", NOUN_ALIVE_CONCRETE).SetNounStringObject("Ramses").SetNounPosStringObject("Ramses'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sphinx", NOUN_ALIVE_CONCRETE).SetNounStringObject("Sphinx").SetNounPosStringObject("Sphinx's");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Washington", NOUN_ALIVE_CONCRETE).SetNounStringObject("Washington").SetNounPosStringObject("Washington's");
    }
    public static function TagGeneralStructNounInanimateHoldAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Grudge", NOUN_INANIMATE_HOLD_ABSTRACT).SetNounStringObject("grudge").SetNounSStringObject("grudges");
    }
    public static function TagGeneralStructNounInanimateHoldConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Bat", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("bat").SetNounSStringObject("bats");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Gun", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("gun").SetNounSStringObject("guns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Hand", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("hand").SetNounSStringObject("hands");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Pencil", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("pencil").SetNounSStringObject("pencils");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sword", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("sword").SetNounSStringObject("swords");
    }
    public static function TagGeneralStructNounInanimatePlaceAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Mind", NOUN_INANIMATE_PLACE_ABSTRACT).SetNounStringObject("mind").SetNounSStringObject("minds");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Intuition", NOUN_INANIMATE_PLACE_ABSTRACT).SetNounStringObject("intuition").SetNounSStringObject("intuitions");
    }
    public static function TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "India", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("India");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Italia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Italia");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Netherlands", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Netherlands");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "RussiaRussia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Russia");
    }
    public static function TagGeneralStructNounInanimatePlaceConcreteOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Country", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("country").SetNounSStringObject("countries");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Harbor", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("harbor").SetNounSStringObject("harbors");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "House", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("house").SetNounSStringObject("houses");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "School", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("school").SetNounSStringObject("schools");
    }
    public static function TagGeneralStructNounInanimateSeeAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Vision", NOUN_INANIMATE_SEE_ABSTRACT).SetNounStringObject("vision");
    }
    public static function TagGeneralStructNounInanimateSeeConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Lightning", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("lightning");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Moonlight", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("moonlight");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Rainbow", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("rainbow");
    }
    public static function TagGeneralStructNounInanimateTitleAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Commendation", NOUN_INANIMATE_TITLE).SetNounStringObject("commendation").SetNounSStringObject("commendations");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Job", NOUN_INANIMATE_TITLE).SetNounStringObject("job").SetNounSStringObject("jobs");
    }
    public static function TagGeneralStructNounInanimateWearAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Pride", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("pride");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Shame", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("shame");
    }
    public static function TagGeneralStructNounInanimateWearConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Crown", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("crown").SetNounSStringObject("crowns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Shirt", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("shirt").SetNounSStringObject("shirts");
    }
    public static function TagGeneralStructVerbVoidIntransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Die", VERB_INTRANSITIVE).SetVerb1StringObject("die").SetVerb2StringObject("died").SetVerb3StringObject("died").SetVerbIngStringObject("dying").SetVerbSStringObject("dies");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Jump", VERB_INTRANSITIVE).SetVerb1StringObject("jump").SetVerb2StringObject("jumped").SetVerb3StringObject("jumped").SetVerbIngStringObject("jumping").SetVerbSStringObject("jumps");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Run", VERB_INTRANSITIVE).SetVerb1StringObject("run").SetVerb2StringObject("ran").SetVerb3StringObject("ran").SetVerbIngStringObject("running").SetVerbSStringObject("runs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sing", VERB_INTRANSITIVE).SetVerb1StringObject("sing").SetVerb2StringObject("sang").SetVerb3StringObject("sung").SetVerbIngStringObject("singing").SetVerbSStringObject("sings");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sleep", VERB_INTRANSITIVE).SetVerb1StringObject("sleep").SetVerb2StringObject("slept").SetVerb3StringObject("slept").SetVerbIngStringObject("sleeping").SetVerbSStringObject("sleeps");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Work", VERB_INTRANSITIVE).SetVerb1StringObject("work").SetVerb2StringObject("worked").SetVerb3StringObject("worked").SetVerbIngStringObject("working").SetVerbSStringObject("works");
    }
    public static function TagGeneralStructVerbVoidTransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Buy", VERB_TRANSITIVE).SetVerb1StringObject("buy").SetVerb2StringObject("bought").SetVerb3StringObject("bought").SetVerbIngStringObject("buying").SetVerbSStringObject("buys");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Call", VERB_TRANSITIVE).SetVerb1StringObject("call").SetVerb2StringObject("called").SetVerb3StringObject("called").SetVerbIngStringObject("calling").SetVerbSStringObject("calls");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Desire", VERB_TRANSITIVE).SetVerb1StringObject("desire").SetVerb2StringObject("desired").SetVerb3StringObject("desired").SetVerbIngStringObject("desiring").SetVerbSStringObject("desires");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Drink", VERB_TRANSITIVE).SetVerb1StringObject("drink").SetVerb2StringObject("drunk").SetVerb3StringObject("drank").SetVerbIngStringObject("drinking").SetVerbSStringObject("drinks");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Drive", VERB_TRANSITIVE).SetVerb1StringObject("drive").SetVerb2StringObject("drove").SetVerb3StringObject("driven").SetVerbIngStringObject("driving").SetVerbSStringObject("drives");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Eat", VERB_TRANSITIVE).SetVerb1StringObject("eat").SetVerb2StringObject("ate").SetVerb3StringObject("eaten").SetVerbIngStringObject("eating").SetVerbSStringObject("eats");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Fight", VERB_TRANSITIVE).SetVerb1StringObject("fight").SetVerb2StringObject("fought").SetVerb3StringObject("fought").SetVerbIngStringObject("fighting").SetVerbSStringObject("fights");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Get", VERB_TRANSITIVE).SetVerb1StringObject("get").SetVerb2StringObject("got").SetVerb3StringObject("gotten").SetVerbIngStringObject("getting").SetVerbSStringObject("gets");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Grab", VERB_TRANSITIVE).SetVerb1StringObject("grab").SetVerb2StringObject("grabed").SetVerb3StringObject("grabed").SetVerbIngStringObject("grabbing").SetVerbSStringObject("grabs");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Kill", VERB_TRANSITIVE).SetVerb1StringObject("kill").SetVerb2StringObject("killed").SetVerb3StringObject("killed").SetVerbIngStringObject("killing").SetVerbSStringObject("kills");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Love", VERB_TRANSITIVE).SetVerb1StringObject("love").SetVerb2StringObject("loved").SetVerb3StringObject("loved").SetVerbIngStringObject("loving").SetVerbSStringObject("loves");
    }
    /*==================================================*/





}