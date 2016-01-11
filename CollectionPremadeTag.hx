import CollectionEnum;
class CollectionPremadeTag{
    private static var tagObject:ObjectTag = null;
    public function new(){}
    public static function PremadeTagStructVoid(_collectionGlobalObject:CollectionGlobal){
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
    }
    public static function PremadeTagStructAdjVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Awful", ADJ); tagObject.SetAdjectiveStringVoid("awful");
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Bad", ADJ); tagObject.SetAdjectiveStringVoid("bad");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Excellent", ADJ); tagObject.SetAdjectiveStringVoid("excellent");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Good", ADJ); tagObject.SetAdjectiveStringVoid("good");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Soft", ADJ); tagObject.SetAdjectiveStringVoid("soft");
    }
    public static function PremadeTagStructAdvVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Desperate", ADV); tagObject.SetAdverbStringVoid("desperately");
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Slow", ADV); tagObject.SetAdverbStringVoid("bad");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Perfect", ADV); tagObject.SetAdverbStringVoid("excellent");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Quick", ADV); tagObject.SetAdverbStringVoid("good");
    }
    public static function PremadeTagStructNounAliveAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Assasin", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("assasin"); tagObject.SetNounPosStringVoid("assasin's");
            tagObject.SetNounSStringVoid("assasins"); tagObject.SetNounSPosStringVoid("assasins'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Boy", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("boy"); tagObject.SetNounPosStringVoid("boy's");
            tagObject.SetNounSStringVoid("boys"); tagObject.SetNounSPosStringVoid("boys'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Dragon", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("dragon"); tagObject.SetNounPosStringVoid("dragon's");
            tagObject.SetNounSStringVoid("dragons"); tagObject.SetNounSPosStringVoid("dragons'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Iraqi", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("iraqi"); tagObject.SetNounPosStringVoid("iraqi's");
            tagObject.SetNounSStringVoid("iraqis"); tagObject.SetNounSPosStringVoid("iraqis'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Italian", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("italian"); tagObject.SetNounPosStringVoid("italian's");
            tagObject.SetNounSStringVoid("italians"); tagObject.SetNounSPosStringVoid("italians'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Painter", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("painter"); tagObject.SetNounPosStringVoid("painter's");
            tagObject.SetNounSStringVoid("painters"); tagObject.SetNounSPosStringVoid("painters'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Romanian", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("romanian"); tagObject.SetNounPosStringVoid("romanian's");
            tagObject.SetNounSStringVoid("romanians"); tagObject.SetNounSPosStringVoid("romanians'");

        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Russian", NOUN_ALIVE_ABSTRACT);
            tagObject.SetNounStringVoid("russian"); tagObject.SetNounPosStringVoid("russian's");
            tagObject.SetNounSStringVoid("russians"); tagObject.SetNounSPosStringVoid("russians'");
    }
    public static function PremadeTagStructNounAliveConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Andy", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Andy"); tagObject.SetNounPosStringVoid("Andy's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Bodhisattva", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Bodhisattva"); tagObject.SetNounPosStringVoid("Bodhisattva's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Buddha", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Buddha"); tagObject.SetNounPosStringVoid("Buddha's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Dimitri", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Dimitri"); tagObject.SetNounPosStringVoid("Dimitri's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Julius Caesar", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Julius Caesar"); tagObject.SetNounPosStringVoid("Julius Caesar's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Maria", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Maria"); tagObject.SetNounPosStringVoid("Maria's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Medusa", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Medusa"); tagObject.SetNounPosStringVoid("Medusa's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mikael", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Mikael"); tagObject.SetNounPosStringVoid("Mikael's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Napoleon", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Napoleon"); tagObject.SetNounPosStringVoid("Napoleon's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Ramses", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Ramses"); tagObject.SetNounPosStringVoid("Ramses'");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sphinx", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Sphinx"); tagObject.SetNounPosStringVoid("Sphinx's");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Washington", NOUN_ALIVE_CONCRETE);
            tagObject.SetNounStringVoid("Washington"); tagObject.SetNounPosStringVoid("Washington's");
    }
    public static function PremadeTagStructNounInanimateHoldAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Grudge", NOUN_INANIMATE_HOLD_ABSTRACT); tagObject.SetNounStringVoid("grudge"); tagObject.SetNounSStringVoid("grudges");
    }
    public static function PremadeTagStructNounInanimateHoldConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Bat", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("bat"); tagObject.SetNounSStringVoid("bats");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Gun", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("gun"); tagObject.SetNounSStringVoid("guns");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Hand", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("hand"); tagObject.SetNounSStringVoid("hands");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Pencil", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("pencil"); tagObject.SetNounSStringVoid("pencils");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sword", NOUN_INANIMATE_HOLD_CONCRETE); tagObject.SetNounStringVoid("sword"); tagObject.SetNounSStringVoid("swords");
    }
    public static function PremadeTagStructNounInanimatePlaceAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Mind", NOUN_INANIMATE_PLACE_ABSTRACT); tagObject.SetNounStringVoid("mind"); tagObject.SetNounSStringVoid("minds");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Intuition", NOUN_INANIMATE_PLACE_ABSTRACT); tagObject.SetNounStringVoid("intuition"); tagObject.SetNounSStringVoid("intuitions");
    }
    public static function PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "India", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER); tagObject.SetNounStringVoid("India");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Italia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER); tagObject.SetNounStringVoid("Italia");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Netherlands", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER); tagObject.SetNounStringVoid("Netherlands");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "RussiaRussia", NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER); tagObject.SetNounStringVoid("Russia");
    }
    public static function PremadeTagStructNounInanimatePlaceConcreteOwnerVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Country", NOUN_INANIMATE_PLACE_CONCRETE_OWNER); tagObject.SetNounStringVoid("country"); tagObject.SetNounSStringVoid("countries");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Harbor", NOUN_INANIMATE_PLACE_CONCRETE_OWNER); tagObject.SetNounStringVoid("harbor"); tagObject.SetNounSStringVoid("harbors");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "House", NOUN_INANIMATE_PLACE_CONCRETE_OWNER); tagObject.SetNounStringVoid("house"); tagObject.SetNounSStringVoid("houses");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "School", NOUN_INANIMATE_PLACE_CONCRETE_OWNER); tagObject.SetNounStringVoid("school"); tagObject.SetNounSStringVoid("schools");
    }
    public static function PremadeTagStructNounInanimateSeeAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Vision", NOUN_INANIMATE_SEE_ABSTRACT); tagObject.SetNounStringVoid("vision");
    }
    public static function PremadeTagStructNounInanimateSeeConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Lightning", NOUN_INANIMATE_SEE_CONCRETE); tagObject.SetNounStringVoid("lightning");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Moonlight", NOUN_INANIMATE_SEE_CONCRETE); tagObject.SetNounStringVoid("moonlight");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Rainbow", NOUN_INANIMATE_SEE_CONCRETE); tagObject.SetNounStringVoid("rainbow");
    }
    public static function PremadeTagStructNounInanimateTitleAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Commendation", NOUN_INANIMATE_TITLE); tagObject.SetNounStringVoid("commendation"); tagObject.SetNounSStringVoid("commendations");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Job", NOUN_INANIMATE_TITLE); tagObject.SetNounStringVoid("job"); tagObject.SetNounSStringVoid("jobs");
    }
    public static function PremadeTagStructNounInanimateWearAbstractVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Pride", NOUN_INANIMATE_WEAR_ABSTRACT); tagObject.SetNounStringVoid("pride");
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Shame", NOUN_INANIMATE_WEAR_ABSTRACT); tagObject.SetNounStringVoid("shame");
    }
    public static function PremadeTagStructNounInanimateWearConcreteVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Crown", NOUN_INANIMATE_WEAR_CONCRETE); tagObject.SetNounStringVoid("crown"); tagObject.SetNounSStringVoid("crowns");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Shirt", NOUN_INANIMATE_WEAR_CONCRETE); tagObject.SetNounStringVoid("shirt"); tagObject.SetNounSStringVoid("shirts");
    }
    public static function PremadeTagStructVerbVoidIntransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Die", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("die"); tagObject.SetVerb2StringVoid("died");
            tagObject.SetVerb3StringVoid("died"); tagObject.SetVerbIngStringVoid("dying");
            tagObject.SetVerbSStringVoid("dies");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Jump", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("jump"); tagObject.SetVerb2StringVoid("jumped");
            tagObject.SetVerb3StringVoid("jumped"); tagObject.SetVerbIngStringVoid("jumping");
            tagObject.SetVerbSStringVoid("jumps");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Run", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("run"); tagObject.SetVerb2StringVoid("ran");
            tagObject.SetVerb3StringVoid("ran"); tagObject.SetVerbIngStringVoid("running");
            tagObject.SetVerbSStringVoid("runs");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sing", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("sing"); tagObject.SetVerb2StringVoid("sang");
            tagObject.SetVerb3StringVoid("sung"); tagObject.SetVerbIngStringVoid("singing");
            tagObject.SetVerbSStringVoid("sings");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Sleep", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("sleep"); tagObject.SetVerb2StringVoid("slept");
            tagObject.SetVerb3StringVoid("slept"); tagObject.SetVerbIngStringVoid("sleeping");
            tagObject.SetVerbSStringVoid("sleeps");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Work", VERB_INTRANSITIVE);
            tagObject.SetVerb1StringVoid("work"); tagObject.SetVerb2StringVoid("worked");
            tagObject.SetVerb3StringVoid("worked"); tagObject.SetVerbIngStringVoid("working");
            tagObject.SetVerbSStringVoid("works");
    }
    public static function PremadeTagStructVerbVoidTransitiveVoid(_collectionGlobalObject:CollectionGlobal){
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Buy", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("buy"); tagObject.SetVerb2StringVoid("bought");
            tagObject.SetVerb3StringVoid("bought"); tagObject.SetVerbIngStringVoid("buying");
            tagObject.SetVerbSStringVoid("buys");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Call", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("call"); tagObject.SetVerb2StringVoid("called");
            tagObject.SetVerb3StringVoid("called"); tagObject.SetVerbIngStringVoid("calling");
            tagObject.SetVerbSStringVoid("calls");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Desire", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("desire"); tagObject.SetVerb2StringVoid("desired");
            tagObject.SetVerb3StringVoid("desired"); tagObject.SetVerbIngStringVoid("desiring");
            tagObject.SetVerbSStringVoid("desires");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Drink", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("drink"); tagObject.SetVerb2StringVoid("drunk");
            tagObject.SetVerb3StringVoid("drank"); tagObject.SetVerbIngStringVoid("drinking");
            tagObject.SetVerbSStringVoid("drinks");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Drive", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("drive"); tagObject.SetVerb2StringVoid("drove");
            tagObject.SetVerb3StringVoid("driven"); tagObject.SetVerbIngStringVoid("driving");
            tagObject.SetVerbSStringVoid("drives");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Eat", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("eat"); tagObject.SetVerb2StringVoid("ate");
            tagObject.SetVerb3StringVoid("eaten"); tagObject.SetVerbIngStringVoid("eating");
            tagObject.SetVerbSStringVoid("eats");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Fight", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("fight"); tagObject.SetVerb2StringVoid("fought");
            tagObject.SetVerb3StringVoid("fought"); tagObject.SetVerbIngStringVoid("fighting");
            tagObject.SetVerbSStringVoid("fights");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Get", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("get"); tagObject.SetVerb2StringVoid("got");
            tagObject.SetVerb3StringVoid("gotten"); tagObject.SetVerbIngStringVoid("getting");
            tagObject.SetVerbSStringVoid("gets");
        tagObject = new ObjectTag(_collectionGlobalObject, NEUTRAL, false, "Grab", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("grab"); tagObject.SetVerb2StringVoid("grabed");
            tagObject.SetVerb3StringVoid("grabed"); tagObject.SetVerbIngStringVoid("grabbing");
            tagObject.SetVerbSStringVoid("grabs");
        tagObject = new ObjectTag(_collectionGlobalObject, NEGATIVE, false, "Kill", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("kill"); tagObject.SetVerb2StringVoid("killed");
            tagObject.SetVerb3StringVoid("killed"); tagObject.SetVerbIngStringVoid("killing");
            tagObject.SetVerbSStringVoid("kills");
        tagObject = new ObjectTag(_collectionGlobalObject, POSITIVE, false, "Love", VERB_TRANSITIVE);
            tagObject.SetVerb1StringVoid("love"); tagObject.SetVerb2StringVoid("loved");
            tagObject.SetVerb3StringVoid("loved"); tagObject.SetVerbIngStringVoid("loving");
            tagObject.SetVerbSStringVoid("loves");
    }
}