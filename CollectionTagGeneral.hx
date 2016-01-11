import CollectionEnum;
class CollectionTagGeneral{
    private static var tagObject:ObjectTag = null;
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
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Awful", ADJ); tagObject.SetAdjectiveStringVoid("awful");
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Bad", ADJ); tagObject.SetAdjectiveStringVoid("bad");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Excellent", ADJ); tagObject.SetAdjectiveStringVoid("excellent");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Good", ADJ); tagObject.SetAdjectiveStringVoid("good");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Soft", ADJ); tagObject.SetAdjectiveStringVoid("soft");
    }
    public static function TagGeneralStructAdvVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Desperate", ADV); tagObject.SetAdverbStringVoid("desperately");
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Slow", ADV); tagObject.SetAdverbStringVoid("bad");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Perfect", ADV); tagObject.SetAdverbStringVoid("excellent");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Quick", ADV); tagObject.SetAdverbStringVoid("good");
    }
    public static function TagGeneralStructNounAliveAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Assasin", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("assasin"); tagObject.SetNounPosStringVoid("assasin's");
            tagObject.SetNounSStringVoid("assasins"); tagObject.SetNounSPosStringVoid("assasins'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Boy", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("boy"); tagObject.SetNounPosStringVoid("boy's");
            tagObject.SetNounSStringVoid("boys"); tagObject.SetNounSPosStringVoid("boys'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Dragon", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("dragon"); tagObject.SetNounPosStringVoid("dragon's");
            tagObject.SetNounSStringVoid("dragons"); tagObject.SetNounSPosStringVoid("dragons'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Iraqi", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("iraqi"); tagObject.SetNounPosStringVoid("iraqi's");
            tagObject.SetNounSStringVoid("iraqis"); tagObject.SetNounSPosStringVoid("iraqis'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Italian", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("italian"); tagObject.SetNounPosStringVoid("italian's");
            tagObject.SetNounSStringVoid("italians"); tagObject.SetNounSPosStringVoid("italians'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Painter", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("painter"); tagObject.SetNounPosStringVoid("painter's");
            tagObject.SetNounSStringVoid("painters"); tagObject.SetNounSPosStringVoid("painters'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Romanian", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("romanian"); tagObject.SetNounPosStringVoid("romanian's");
            tagObject.SetNounSStringVoid("romanians"); tagObject.SetNounSPosStringVoid("romanians'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Russian", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("russian"); tagObject.SetNounPosStringVoid("russian's");
            tagObject.SetNounSStringVoid("russians"); tagObject.SetNounSPosStringVoid("russians'");
    }
    public static function TagGeneralStructNounAliveConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Andy", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Andy"); tagObject.SetNounPosStringVoid("Andy's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Bodhisattva", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Bodhisattva"); tagObject.SetNounPosStringVoid("Bodhisattva's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Buddha", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Buddha"); tagObject.SetNounPosStringVoid("Buddha's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Dimitri", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Dimitri"); tagObject.SetNounPosStringVoid("Dimitri's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Julius Caesar", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Julius Caesar"); tagObject.SetNounPosStringVoid("Julius Caesar's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Maria", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Maria"); tagObject.SetNounPosStringVoid("Maria's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Medusa", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Medusa"); tagObject.SetNounPosStringVoid("Medusa's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Mikael", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Mikael"); tagObject.SetNounPosStringVoid("Mikael's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Napoleon", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Napoleon"); tagObject.SetNounPosStringVoid("Napoleon's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Ramses", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Ramses"); tagObject.SetNounPosStringVoid("Ramses'");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sphinx", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Sphinx"); tagObject.SetNounPosStringVoid("Sphinx's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Washington", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Washington"); tagObject.SetNounPosStringVoid("Washington's");
    }
    public static function TagGeneralStructNounInanimateHoldAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Grudge", NOUN_INANIMATE_HOLD_ABSTRACT); tagObject.SetNounStringVoid("grudge"); tagObject.SetNounSStringVoid("grudges");
    }
    public static function TagGeneralStructNounInanimateHoldConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Bat", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("bat"); tagObject.SetNounSStringVoid("bats");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Gun", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("gun"); tagObject.SetNounSStringVoid("guns");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Hand", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("hand"); tagObject.SetNounSStringVoid("hands");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Pencil", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("pencil"); tagObject.SetNounSStringVoid("pencils");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sword", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("sword"); tagObject.SetNounSStringVoid("swords");
    }
    public static function TagGeneralStructNounInanimatePlaceAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Mind", NOUN_INANIMATE_PLACE_ABSTRACT); tagObject.SetNounStringVoid("mind"); tagObject.SetNounSStringVoid("minds");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Intuition", NOUN_INANIMATE_PLACE_ABSTRACT); tagObject.SetNounStringVoid("intuition"); tagObject.SetNounSStringVoid("intuitions");
    }
    public static function TagGeneralStructNounInanimatePlaceConcreteNoOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "India", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER); tagObject.SetNounStringVoid("India");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Italia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER); tagObject.SetNounStringVoid("Italia");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Netherlands", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER); tagObject.SetNounStringVoid("Netherlands");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "RussiaRussia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER); tagObject.SetNounStringVoid("Russia");
    }
    public static function TagGeneralStructNounInanimatePlaceConcreteOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Country", NOUN_INANIMATE_PLACE_CONCRETE_OWNER); tagObject.SetNounStringVoid("country"); tagObject.SetNounSStringVoid("countries");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Harbor", NOUN_INANIMATE_PLACE_CONCRETE_OWNER); tagObject.SetNounStringVoid("harbor"); tagObject.SetNounSStringVoid("harbors");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "House", NOUN_INANIMATE_PLACE_CONCRETE_OWNER); tagObject.SetNounStringVoid("house"); tagObject.SetNounSStringVoid("houses");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "School", NOUN_INANIMATE_PLACE_CONCRETE_OWNER); tagObject.SetNounStringVoid("school"); tagObject.SetNounSStringVoid("schools");
    }
    public static function TagGeneralStructNounInanimateSeeAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Vision", NOUN_INANIMATE_SEE_ABSTRACT); tagObject.SetNounStringVoid("vision");
    }
    public static function TagGeneralStructNounInanimateSeeConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Lightning", NOUN_INANIMATE_SEE_CONCRETE); tagObject.SetNounStringVoid("lightning");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Moonlight", NOUN_INANIMATE_SEE_CONCRETE); tagObject.SetNounStringVoid("moonlight");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Rainbow", NOUN_INANIMATE_SEE_CONCRETE); tagObject.SetNounStringVoid("rainbow");
    }
    public static function TagGeneralStructNounInanimateTitleAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Commendation", NOUN_INANIMATE_TITLE); tagObject.SetNounStringVoid("commendation"); tagObject.SetNounSStringVoid("commendations");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Job", NOUN_INANIMATE_TITLE); tagObject.SetNounStringVoid("job"); tagObject.SetNounSStringVoid("jobs");
    }
    public static function TagGeneralStructNounInanimateWearAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Pride", NOUN_INANIMATE_WEAR_ABSTRACT); tagObject.SetNounStringVoid("pride");
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Shame", NOUN_INANIMATE_WEAR_ABSTRACT); tagObject.SetNounStringVoid("shame");
    }
    public static function TagGeneralStructNounInanimateWearConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Crown", NOUN_INANIMATE_WEAR_CONCRETE); tagObject.SetNounStringVoid("crown"); tagObject.SetNounSStringVoid("crowns");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Shirt", NOUN_INANIMATE_WEAR_CONCRETE); tagObject.SetNounStringVoid("shirt"); tagObject.SetNounSStringVoid("shirts");
    }
    public static function TagGeneralStructVerbVoidIntransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Die", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("die"); tagObject.SetVerb2StringVoid("died");
            tagObject.SetVerb3StringVoid("died"); tagObject.SetVerbIngStringVoid("dying");
            tagObject.SetVerbSStringVoid("dies");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Jump", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("jump"); tagObject.SetVerb2StringVoid("jumped");
            tagObject.SetVerb3StringVoid("jumped"); tagObject.SetVerbIngStringVoid("jumping");
            tagObject.SetVerbSStringVoid("jumps");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Run", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("run"); tagObject.SetVerb2StringVoid("ran");
            tagObject.SetVerb3StringVoid("ran"); tagObject.SetVerbIngStringVoid("running");
            tagObject.SetVerbSStringVoid("runs");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sing", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("sing"); tagObject.SetVerb2StringVoid("sang");
            tagObject.SetVerb3StringVoid("sung"); tagObject.SetVerbIngStringVoid("singing");
            tagObject.SetVerbSStringVoid("sings");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Sleep", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("sleep"); tagObject.SetVerb2StringVoid("slept");
            tagObject.SetVerb3StringVoid("slept"); tagObject.SetVerbIngStringVoid("sleeping");
            tagObject.SetVerbSStringVoid("sleeps");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Work", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("work"); tagObject.SetVerb2StringVoid("worked");
            tagObject.SetVerb3StringVoid("worked"); tagObject.SetVerbIngStringVoid("working");
            tagObject.SetVerbSStringVoid("works");
    }
    public static function TagGeneralStructVerbVoidTransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Buy", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("buy"); tagObject.SetVerb2StringVoid("bought");
            tagObject.SetVerb3StringVoid("bought"); tagObject.SetVerbIngStringVoid("buying");
            tagObject.SetVerbSStringVoid("buys");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Call", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("call"); tagObject.SetVerb2StringVoid("called");
            tagObject.SetVerb3StringVoid("called"); tagObject.SetVerbIngStringVoid("calling");
            tagObject.SetVerbSStringVoid("calls");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Desire", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("desire"); tagObject.SetVerb2StringVoid("desired");
            tagObject.SetVerb3StringVoid("desired"); tagObject.SetVerbIngStringVoid("desiring");
            tagObject.SetVerbSStringVoid("desires");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Drink", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("drink"); tagObject.SetVerb2StringVoid("drunk");
            tagObject.SetVerb3StringVoid("drank"); tagObject.SetVerbIngStringVoid("drinking");
            tagObject.SetVerbSStringVoid("drinks");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Drive", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("drive"); tagObject.SetVerb2StringVoid("drove");
            tagObject.SetVerb3StringVoid("driven"); tagObject.SetVerbIngStringVoid("driving");
            tagObject.SetVerbSStringVoid("drives");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Eat", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("eat"); tagObject.SetVerb2StringVoid("ate");
            tagObject.SetVerb3StringVoid("eaten"); tagObject.SetVerbIngStringVoid("eating");
            tagObject.SetVerbSStringVoid("eats");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Fight", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("fight"); tagObject.SetVerb2StringVoid("fought");
            tagObject.SetVerb3StringVoid("fought"); tagObject.SetVerbIngStringVoid("fighting");
            tagObject.SetVerbSStringVoid("fights");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Get", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("get"); tagObject.SetVerb2StringVoid("got");
            tagObject.SetVerb3StringVoid("gotten"); tagObject.SetVerbIngStringVoid("getting");
            tagObject.SetVerbSStringVoid("gets");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, true, "Grab", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("grab"); tagObject.SetVerb2StringVoid("grabed");
            tagObject.SetVerb3StringVoid("grabed"); tagObject.SetVerbIngStringVoid("grabbing");
            tagObject.SetVerbSStringVoid("grabs");
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, true, "Kill", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("kill"); tagObject.SetVerb2StringVoid("killed");
            tagObject.SetVerb3StringVoid("killed"); tagObject.SetVerbIngStringVoid("killing");
            tagObject.SetVerbSStringVoid("kills");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, true, "Love", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("love"); tagObject.SetVerb2StringVoid("loved");
            tagObject.SetVerb3StringVoid("loved"); tagObject.SetVerbIngStringVoid("loving");
            tagObject.SetVerbSStringVoid("loves");
    }
}