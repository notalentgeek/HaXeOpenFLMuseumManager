import Enum_Collection;





/*Collection of object Tag for common words.
PENDING: Change this into JSON/XML file extractor.*/
class CollectionTagGeneral{





    /*==================================================*/
    public function new():Void{}
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneral_Void(__Global_Object:Global_Object):Void{

        TagGeneralAdj_Void                                    (__Global_Object);
        TagGeneralAdv_Void                                    (__Global_Object);
        TagGeneralNounAliveAbstract_Void                      (__Global_Object);
        TagGeneralNounAliveConcrete_Void                      (__Global_Object);
        TagGeneralNounInanimateHoldAbstract_Void              (__Global_Object);
        TagGeneralNounInanimateHoldConcrete_Void              (__Global_Object);
        TagGeneralNounInanimatePlaceAbstract_Void             (__Global_Object);
        TagGeneralNounInanimatePlaceConcreteNoOwner_Void      (__Global_Object);
        TagGeneralNounInanimatePlaceConcreteOwner_Void        (__Global_Object);
        TagGeneralNounInanimateSeeAbstract_Void               (__Global_Object);
        TagGeneralNounInanimateSeeConcrete_Void               (__Global_Object);
        TagGeneralNounInanimateTitleAbstract_Void             (__Global_Object);
        TagGeneralNounInanimateWearAbstract_Void              (__Global_Object);
        TagGeneralNounInanimateWearConcrete_Void              (__Global_Object);
        TagGeneralVerbVoidIntransitive_Void                   (__Global_Object);
        TagGeneralVerbVoidTransitive_Void                     (__Global_Object);

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralAdj_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEGATIVE    , ADJ, true, "Awful")           ._TagAgnostic_Object.SetAdjective_TagAgnostic_Object("Awful");
        new Tag_Object(__Global_Object, NEGATIVE    , ADJ, true, "Bad")             ._TagAgnostic_Object.SetAdjective_TagAgnostic_Object("Bad");
        new Tag_Object(__Global_Object, NEUTRAL     , ADJ, true, "Soft")            ._TagAgnostic_Object.SetAdjective_TagAgnostic_Object("Soft");
        new Tag_Object(__Global_Object, POSITIVE    , ADJ, true, "Excellent")       ._TagAgnostic_Object.SetAdjective_TagAgnostic_Object("Excellent");
        new Tag_Object(__Global_Object, POSITIVE    , ADJ, true, "Good")            ._TagAgnostic_Object.SetAdjective_TagAgnostic_Object("Good");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralAdv_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEGATIVE, ADV, true, "Bad")         ._TagAgnostic_Object.SetAdverb_TagAgnostic_Object("Badly");
        new Tag_Object(__Global_Object, NEGATIVE, ADV, true, "Desperate")   ._TagAgnostic_Object.SetAdverb_TagAgnostic_Object("Desperately");
        new Tag_Object(__Global_Object, NEGATIVE, ADV, true, "Slow")        ._TagAgnostic_Object.SetAdverb_TagAgnostic_Object("Slowly");
        new Tag_Object(__Global_Object, POSITIVE, ADV, true, "Perfect")     ._TagAgnostic_Object.SetAdverb_TagAgnostic_Object("Excellent");
        new Tag_Object(__Global_Object, POSITIVE, ADV, true, "Quick")       ._TagAgnostic_Object.SetAdverb_TagAgnostic_Object("Quick");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounAliveAbstract_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEGATIVE    , NOUN_ALIVE_ABSTRACT, true, "Assasin")     ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Assasin")     ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Assasin's")    ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Assasins")   ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object("Assasins'");
        new Tag_Object(__Global_Object, NEGATIVE    , NOUN_ALIVE_ABSTRACT, true, "Boy")         ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Boy")         ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Boy's")        ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Boys")       ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object("Boys'");
        new Tag_Object(__Global_Object, NEUTRAL     , NOUN_ALIVE_ABSTRACT, true, "Dragon")      ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Dragon")      ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Dragon's")     ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Dragons")    ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object("Dragons'");
        new Tag_Object(__Global_Object, NEUTRAL     , NOUN_ALIVE_ABSTRACT, true, "Iraqi")       ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Iraqi")       ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Iraqi's")      ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Iraqis")     ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object("Iraqis'");
        new Tag_Object(__Global_Object, NEUTRAL     , NOUN_ALIVE_ABSTRACT, true, "Italian")     ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Italian")     ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Italian's")    ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Italians")   ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object("Italians'");
        new Tag_Object(__Global_Object, NEUTRAL     , NOUN_ALIVE_ABSTRACT, true, "Painter")     ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Painter")     ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Painter's")    ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Painters")   ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object("Painters'");
        new Tag_Object(__Global_Object, NEUTRAL     , NOUN_ALIVE_ABSTRACT, true, "Romanian")    ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Romanian")    ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Romanian's")   ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Romanians")  ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object("Romanians'");
        new Tag_Object(__Global_Object, NEUTRAL     , NOUN_ALIVE_ABSTRACT, true, "Russian")     ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Russian")     ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Russian's")    ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Russians")   ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object("Russians'");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounAliveConcrete_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Andy")             ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Andy")            ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Andy's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Bodhisattva")      ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Bodhisattva")     ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Bodhisattva's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Buddha")           ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Buddha")          ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Buddha's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Dimitri")          ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Dimitri")         ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Dimitri's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Julius Caesar")    ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Julius Caesar")   ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Julius Caesar's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Maria")            ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Maria")           ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Maria's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Medusa")           ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Medusa")          ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Medusa's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Mikael")           ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Mikael")          ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Mikael's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Napoleon")         ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Napoleon")        ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Napoleon's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Ramses")           ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Ramses")          ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Ramses'");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Sphinx")           ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Sphinx")          ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Sphinx's");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_ALIVE_CONCRETE, true, "Washington")       ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Washington")      ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object("Washington's");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimateHoldAbstract_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEGATIVE, NOUN_INANIMATE_HOLD_ABSTRACT, true, "Grudge")._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Grudge")._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Grudges");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimateHoldConcrete_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_HOLD_CONCRETE, true, "Bat")     ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Bat")     ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Bats");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_HOLD_CONCRETE, true, "Gun")     ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Gun")     ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Guns");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_HOLD_CONCRETE, true, "Hand")    ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Hand")    ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Hands");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_HOLD_CONCRETE, true, "Pencil")  ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Pencil")  ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Pencils");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_HOLD_CONCRETE, true, "Sword")   ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Sword")   ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Swords");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimatePlaceAbstract_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_ABSTRACT, true, "Mind")       ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Mind")        ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Minds");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_ABSTRACT, true, "Intuition")  ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Intuition")   ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Intuitions");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimatePlaceConcreteNoOwner_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER, true, "India")         ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("India");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER, true, "Italia")        ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Italia");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER, true, "Netherlands")   ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Netherlands");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimatePlaceConcreteOwner_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_CONCRETE_OWNER, true, "Country")  ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Country")     ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Countries");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_CONCRETE_OWNER, true, "Harbor")   ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Harbor")      ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Harbors");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_CONCRETE_OWNER, true, "House")    ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("House")       ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Houses");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_PLACE_CONCRETE_OWNER, true, "School")   ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("School")      ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Schools");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimateSeeAbstract_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_SEE_ABSTRACT, true, "Vision")._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Vision");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimateSeeConcrete_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_SEE_CONCRETE, true, "Lightning")    ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Lightning");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_SEE_CONCRETE, true, "Moonlight")    ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Moonlight");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_SEE_CONCRETE, true, "Rainbow")      ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Rainbow");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimateTitleAbstract_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_TITLE, true, "Commendation")    ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Commendation")._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Commendations");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_TITLE, true, "Job")             ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Job")._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Jobs");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimateWearAbstract_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, POSITIVE, NOUN_INANIMATE_WEAR_ABSTRACT, true, "Pride")      ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Pride");
        new Tag_Object(__Global_Object, NEGATIVE, NOUN_INANIMATE_WEAR_ABSTRACT, true, "Shame")      ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Shame");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralNounInanimateWearConcrete_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_WEAR_CONCRETE, true, "Crown")   ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Crown")   ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Crowns");
        new Tag_Object(__Global_Object, NEUTRAL, NOUN_INANIMATE_WEAR_CONCRETE, true, "Shirt")   ._TagAgnostic_Object.SetNoun_TagAgnostic_Object("Shirt")   ._TagAgnostic_Object.SetNounS_TagAgnostic_Object("Shirts");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralVerbVoidIntransitive_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEGATIVE    , VERB_INTRANSITIVE, true, "Die")       ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Die")        ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Died")       ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Died")       ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Dying")        ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Dies");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_INTRANSITIVE, true, "Jump")      ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Jump")       ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Jumped")     ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Jumped")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Jumping")      ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Jumps");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_INTRANSITIVE, true, "Run")       ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Run")        ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Ran")        ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Ran")        ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Running")      ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Runs");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_INTRANSITIVE, true, "Sing")      ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Sing")       ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Sang")       ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Sung")       ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Singing")      ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Sings");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_INTRANSITIVE, true, "Sleep")     ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Sleep")      ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Slept")      ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Slept")      ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Sleeping")     ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Sleeps");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_INTRANSITIVE, true, "Work")      ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Work")       ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Worked")     ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Worked")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Working")      ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Works");

    }
    /*==================================================*/





    /*==================================================*/
    public static function TagGeneralVerbVoidTransitive_Void(__Global_Object:Global_Object):Void{

        new Tag_Object(__Global_Object, NEGATIVE    , VERB_TRANSITIVE, true, "Kill")    ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Kill")       ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Killed")     ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Killed")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Killing")      ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Kills");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Buy")     ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Buy")        ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Bought")     ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Bought")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Buying")       ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Buys");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Call")    ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Call")       ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Called")     ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Called")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Calling")      ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Calls");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Desire")  ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Desire")     ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Desired")    ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Desired")    ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Desiring")     ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Desires");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Drink")   ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Drink")      ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Drunk")      ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Drank")      ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Drinking")     ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Drinks");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Drive")   ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Drive")      ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Drove")      ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Driven")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Driving")      ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Drives");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Eat")     ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Eat")        ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Ate")        ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Eaten")      ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Eating")       ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Eats");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Fight")   ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Fight")      ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Fought")     ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Fought")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Fighting")     ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Fights");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Get")     ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Get")        ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Got")        ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Gotten")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Getting")      ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Gets");
        new Tag_Object(__Global_Object, NEUTRAL     , VERB_TRANSITIVE, true, "Grab")    ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Grab")       ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Grabed")     ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Grabed")     ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Grabbing")     ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Grabs");
        new Tag_Object(__Global_Object, POSITIVE    , VERB_TRANSITIVE, true, "Love")    ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object("Love")       ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object("Loved")      ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object("Loved")      ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object("Loving")       ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object("Loves");

    }
    /*==================================================*/





}
