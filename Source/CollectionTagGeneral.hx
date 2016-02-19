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
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Awful", ADJ).SetAdjectiveStringObject("Awful");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Bad", ADJ).SetAdjectiveStringObject("Bad");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Excellent", ADJ).SetAdjectiveStringObject("Excellent");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Good", ADJ).SetAdjectiveStringObject("Good");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Soft", ADJ).SetAdjectiveStringObject("Soft");
    }
    public static function TagGeneralStructAdvVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Bad", ADV).SetAdverbStringObject("Badly");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Desperate", ADV).SetAdverbStringObject("Desperately");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Slow", ADV).SetAdverbStringObject("Slowly");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Perfect", ADV).SetAdverbStringObject("Excellent");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Quick", ADV).SetAdverbStringObject("Good");
    }
    public static function TagGeneralStructNounAliveAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Assasin", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Assasin").SetNounPosStringObject("Assasin's").SetNounSStringObject("Assasins").SetNounSPosStringObject("Assasins'");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Boy", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Boy").SetNounPosStringObject("Boy's").SetNounSStringObject("Boys").SetNounSPosStringObject("Boys'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Dragon", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Dragon").SetNounPosStringObject("Dragon's").SetNounSStringObject("Dragons").SetNounSPosStringObject("Dragons'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Iraqi", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Iraqi").SetNounPosStringObject("Iraqi's").SetNounSStringObject("Iraqis").SetNounSPosStringObject("Iraqis'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Italian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Italian").SetNounPosStringObject("Italian's").SetNounSStringObject("Italians").SetNounSPosStringObject("Italians'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Painter", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Painter").SetNounPosStringObject("Painter's").SetNounSStringObject("Painters").SetNounSPosStringObject("Painters'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Romanian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Romanian").SetNounPosStringObject("Romanian's").SetNounSStringObject("Romanians").SetNounSPosStringObject("Romanians'");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Russian", NOUN_ALIVE_ABSTRACT).SetNounStringObject("Russian").SetNounPosStringObject("Russian's").SetNounSStringObject("Russians").SetNounSPosStringObject("Russians'");
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
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Grudge", NOUN_INANIMATE_HOLD_ABSTRACT).SetNounStringObject("Grudge").SetNounSStringObject("Grudges");
    }
    public static function TagGeneralStructNounInanimateHoldConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Bat", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Bat").SetNounSStringObject("Bats");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Gun", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Gun").SetNounSStringObject("Guns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Hand", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Hand").SetNounSStringObject("Hands");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Pencil", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Pencil").SetNounSStringObject("Pencils");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sword", NOUN_INANIMATE_HOLD_CONCRETE).SetNounStringObject("Sword").SetNounSStringObject("Swords");
    }
    public static function TagGeneralStructNounInanimatePlaceAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Mind", NOUN_INANIMATE_PLACE_ABSTRACT).SetNounStringObject("Mind").SetNounSStringObject("Minds");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Intuition", NOUN_INANIMATE_PLACE_ABSTRACT).SetNounStringObject("Intuition").SetNounSStringObject("Intuitions");
    }
    public static function TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "India", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("India");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Italia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Italia");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Netherlands", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER).SetNounStringObject("Netherlands");
    }
    public static function TagGeneralStructNounInanimatePlaceConcreteOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Country", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Country").SetNounSStringObject("Countries");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Harbor", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("Harbor").SetNounSStringObject("Harbors");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "House", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("House").SetNounSStringObject("Houses");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "School", NOUN_INANIMATE_PLACE_CONCRETE_OWNER).SetNounStringObject("School").SetNounSStringObject("Schools");
    }
    public static function TagGeneralStructNounInanimateSeeAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Vision", NOUN_INANIMATE_SEE_ABSTRACT).SetNounStringObject("Vision");
    }
    public static function TagGeneralStructNounInanimateSeeConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Lightning", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("Lightning");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Moonlight", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("Moonlight");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Rainbow", NOUN_INANIMATE_SEE_CONCRETE).SetNounStringObject("Rainbow");
    }
    public static function TagGeneralStructNounInanimateTitleAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Commendation", NOUN_INANIMATE_TITLE).SetNounStringObject("Commendation").SetNounSStringObject("Commendations");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Job", NOUN_INANIMATE_TITLE).SetNounStringObject("Job").SetNounSStringObject("Jobs");
    }
    public static function TagGeneralStructNounInanimateWearAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Pride", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("Pride");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Shame", NOUN_INANIMATE_WEAR_ABSTRACT).SetNounStringObject("Shame");
    }
    public static function TagGeneralStructNounInanimateWearConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Crown", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Crown").SetNounSStringObject("Crowns");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Shirt", NOUN_INANIMATE_WEAR_CONCRETE).SetNounStringObject("Shirt").SetNounSStringObject("Shirts");
    }
    public static function TagGeneralStructVerbVoidIntransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Die", VERB_INTRANSITIVE).SetVerb1StringObject("Die").SetVerb2StringObject("Died").SetVerb3StringObject("Died").SetVerbIngStringObject("Dying").SetVerbSStringObject("Dies");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Jump", VERB_INTRANSITIVE).SetVerb1StringObject("Jump").SetVerb2StringObject("Jumped").SetVerb3StringObject("Jumped").SetVerbIngStringObject("Jumping").SetVerbSStringObject("Jumps");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Run", VERB_INTRANSITIVE).SetVerb1StringObject("Run").SetVerb2StringObject("Ran").SetVerb3StringObject("Ran").SetVerbIngStringObject("Running").SetVerbSStringObject("Runs");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sing", VERB_INTRANSITIVE).SetVerb1StringObject("Sing").SetVerb2StringObject("Sang").SetVerb3StringObject("Sung").SetVerbIngStringObject("Singing").SetVerbSStringObject("Sings");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sleep", VERB_INTRANSITIVE).SetVerb1StringObject("Sleep").SetVerb2StringObject("Slept").SetVerb3StringObject("Slept").SetVerbIngStringObject("Sleeping").SetVerbSStringObject("Sleeps");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Work", VERB_INTRANSITIVE).SetVerb1StringObject("Work").SetVerb2StringObject("Worked").SetVerb3StringObject("Worked").SetVerbIngStringObject("Working").SetVerbSStringObject("Works");
    }
    public static function TagGeneralStructVerbVoidTransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Buy", VERB_TRANSITIVE).SetVerb1StringObject("Buy").SetVerb2StringObject("Bought").SetVerb3StringObject("Bought").SetVerbIngStringObject("Buying").SetVerbSStringObject("Buys");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Call", VERB_TRANSITIVE).SetVerb1StringObject("Call").SetVerb2StringObject("Called").SetVerb3StringObject("Called").SetVerbIngStringObject("Calling").SetVerbSStringObject("Calls");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Desire", VERB_TRANSITIVE).SetVerb1StringObject("Desire").SetVerb2StringObject("Desired").SetVerb3StringObject("Desired").SetVerbIngStringObject("Desiring").SetVerbSStringObject("Desires");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Drink", VERB_TRANSITIVE).SetVerb1StringObject("Drink").SetVerb2StringObject("Drunk").SetVerb3StringObject("Drank").SetVerbIngStringObject("Drinking").SetVerbSStringObject("Drinks");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Drive", VERB_TRANSITIVE).SetVerb1StringObject("Drive").SetVerb2StringObject("Drove").SetVerb3StringObject("Driven").SetVerbIngStringObject("Driving").SetVerbSStringObject("Drives");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Eat", VERB_TRANSITIVE).SetVerb1StringObject("Eat").SetVerb2StringObject("Ate").SetVerb3StringObject("Eaten").SetVerbIngStringObject("Eating").SetVerbSStringObject("Eats");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Fight", VERB_TRANSITIVE).SetVerb1StringObject("Fight").SetVerb2StringObject("Fought").SetVerb3StringObject("Fought").SetVerbIngStringObject("Fighting").SetVerbSStringObject("Fights");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Get", VERB_TRANSITIVE).SetVerb1StringObject("Get").SetVerb2StringObject("Got").SetVerb3StringObject("Gotten").SetVerbIngStringObject("Getting").SetVerbSStringObject("Gets");
        new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Grab", VERB_TRANSITIVE).SetVerb1StringObject("Grab").SetVerb2StringObject("Grabed").SetVerb3StringObject("Grabed").SetVerbIngStringObject("Grabbing").SetVerbSStringObject("Grabs");
        new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Kill", VERB_TRANSITIVE).SetVerb1StringObject("Kill").SetVerb2StringObject("Killed").SetVerb3StringObject("Killed").SetVerbIngStringObject("Killing").SetVerbSStringObject("Kills");
        new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Love", VERB_TRANSITIVE).SetVerb1StringObject("Love").SetVerb2StringObject("Loved").SetVerb3StringObject("Loved").SetVerbIngStringObject("Loving").SetVerbSStringObject("Loves");
    }
    /*==================================================*/





}
