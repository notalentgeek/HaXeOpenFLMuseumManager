import CollectionEnum;





class CollectionPremade{





    /*==================================================
    Some variables for floor and room.
    Because floor and room does not necessarily need explanation nor tag.
    PENDING: I need to make this more intuitive.*/
    private static var default_Tag_Object_Array             :Array<Tag_Object>  = new Array<Tag_Object>();
    private static var dafaultExplanation_String_Array      :Array<String>      = new Array<String>();
    /*==================================================*/





    /*==================================================
    Constructor.*/
    public function new():Void{}
    /*==================================================*/





    /*==================================================*/
    public static function PremadeExhibitionNewObjectVoid(__CollectionGlobal_Object:CollectionGlobal_Object):Void{

        var exhibition001Explanation_String_Array:Array<String> = [
            "Bronze cista for cosmetic items.",
            "The feet of the vessel are formed of lion's paws surmounted by crouching lions, and there was originally a chain hung from a row of discs around the middle.",
            "The scenes engraved around the vessel have not been identified with certainty."
        ];
        var exhibition001Tag_Object_Array:Array<Tag_Object> = [
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Chain_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Cista_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Cosmetic_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Crouch_VERB_INTRANSITIVE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Item_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Lion_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Vessel_NOUN_INANIMATE_PLACE_CONCRETE_OWNER")
        ];





        var exhibition002Explanation_String_Array:Array<String> = [
            "Clubs came in different forms and were used by a warrior in combination with a long-handled weapon, such as a spear.",
            "They could be made from bone and ivory, like these examples, wood, stone or jade.",
            "Jade clubs were highly-prized and symbols of authority.",
            "The curved wahaika was used in a slicing motion towards the head or neck, while the spatula-shaped pate was more suited to a thrusting motion.",
            "Warriors carried them in their belts, ready at hand, with a wrist-strap attached through the hole at the end."
        ];
        var exhibition002Tag_Object_Array:Array<Tag_Object> = [
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Belt_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Club_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Jade_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Mauri_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Spear_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Stone_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Warrior_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Weapon_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Wood_NOUN_INANIMATE_HOLD_CONCRETE")
        ];





        var exhibition003Explanation_String_Array:Array<String> = [
            "The Holy Thorn Reliquary was probably created in the 1390s in Paris for John Duke of Berry, to house a relic of the Crown of Thorns.",
            "The reliquary was bequeathed to the British Museum in 1898 by Ferdinand De Rothschild as part of the Waddesdon Bequest.",
            "It is one of a small number of major goldsmiths' works or joyaux that survive from the extravagant world of the courts of the Valois royal family around 1400.",
            "It is made of gold, lavishly decorated with jewels and pearls, and uses the technique of enamelling en ronde bosse, or in the round, which had been recently developed when the reliquary was made, to create a total of 28 three-dimensional figures, mostly in white enamel."
        ];
        var exhibition003Tag_Object_Array:Array<Tag_Object> = [
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Crown Of Thorn_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Extravagant_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Extravagantly_ADV"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Ferdinand De Rothschild_NOUN_ALIVE_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Gold_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Goldsmith_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Jewel_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "John Duke Of Berry_NOUN_ALIVE_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Paris_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Pearl_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Reliquary_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "The Holy Thorn Reliquary_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Valois_NOUN_INANIMATE_WEAR_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Waddesdon Bequest_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER")
        ];





        var exhibition004Explanation_String_Array:Array<String> = [
            "Pendant jewel, gold, oval set with twenty-five square table diamonds and four rose diamonds.",
            "Contains miniature portrait of James I as a young man.",
            "Cover in open-work with diamonds on outside and enamel within.",
            "Frame of square diamonds connected by slender enamelled band; back is white enamel plate with fine gold lines and ruby enamel.",
            "Edge enamelled alternately ruby and sapphire blue."
        ];
        var exhibition004Tag_Object_Array:Array<Tag_Object> = [
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Gold_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "James_NOUN_ALIVE_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Jewel_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Oval_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Pendant_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Rose_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Sapphire_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Slender_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Table_NOUN_INANIMATE_PLACE_CONCRETE_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "The Lyte Jewel_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Man_NOUN_ALIVE_ABSTRACT")
        ];





        var exhibition005Explanation_String_Array:Array<String> = [
            "On the head's left side was placed a crested and masked helmet wrapped in cloths.",
            "With its panels of tinned bronze and assembled mounts, the decoration is directly comparable to that found on helmets from the Vendel and Valsgärde cemeteries of eastern Sweden.",
            "The Sutton Hoo helmet differs from the Swedish examples in having an iron skull of a single vaulted shell and has a full face mask, a solid neck guard and deep cheekpieces.",
            "These features have suggested an English origin for the basic structure of the helmet, the deep cheekpieces have parallels in the Coppergate helmet, found in York.",
            "Although outwardly very like the Swedish examples, the Sutton Hoo helmet is a product of better craftsmanship.",
            "Helmets are extremely rare finds.",
            "No other such figural plaques were known in England, apart from a fragment from a burial at Caenby, Lincolnshire, until the 2009 discovery of the Staffordshire hoard, which contained many.",
            "The helmet rusted in the grave and was shattered into hundreds of tiny fragments when the chamber roof collapsed.",
            "Restoration of the helmet thus involved the meticulous identification, grouping and orientation of the surviving fragments before it could be reconstructed."
        ];
        var exhibition005Tag_Object_Array:Array<Tag_Object> = [
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Caenby_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Crest_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "England_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Helmet_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Lincolnshire_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Mask_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Masked_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Staffordshire_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Sweden_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "The Sutton Hoo_NOUN_ALIVE_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Valsgärde_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Vendel_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER")
        ];





        var exhibition006Explanation_String_Array:Array<String> = [
            "On the right of the body lay a set of spears, tips uppermost, including three barbed angons, with their heads thrust through a handle of the bronze bowl.",
            "Nearby was a wand with a small mount depicting a wolf.",
            "Closer to the body lay the sword with a gold and garnet cloisonné pommel 85 centimetres (33 in) long, its pattern-welded blade still within its scabbard, with superlative scabbard-bosses of domed cellwork and pyramidal mounts.",
            "Attached to this and lying toward the body was the sword harness and belt, fitted with a suite of gold mounts and strap-distributors of extremely intricate garnet cellwork ornament."
        ];
        var exhibition006Tag_Object_Array:Array<Tag_Object> = [
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Bowl_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Bronze_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Burial_NOUN_INANIMATE_PLACE_CONCRETE_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Garnet_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Ship_NOUN_INANIMATE_PLACE_CONCRETE_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Spear_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "The Sutton Hoo_NOUN_ALIVE_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Wolf_NOUN_ALIVE_ABSTRACT")
        ];





        var exhibition007Explanation_String_Array:Array<String> = [
            "Oxhide ingots are metal slabs, usually of copper but sometimes of tin, produced and widely distributed during the Mediterranean Late Bronze Age (LBA).",
            "Their shape resembles the hide of an ox with a protruding handle in each of the ingot’s four corners.",
            "Early thought was that each ingot was equivalent to the value of one ox.",
            "However, the similarity in shape is simply a coincidence.",
            "The ingots’ producers probably designed these protrusions to make the ingots easily transportable overland on the backs of pack animals.",
            "Complete or partial oxhide ingots have been discovered in Sardinia, Crete, Peloponnese, Cyprus, Cannatello in Sicily, Boğazköy in Turkey (ancient Hattusa, the Hittite capital), Qantir-Piramesse in Egypt, and Sozopol in Bulgaria.",
            "Archaeologists have recovered many oxhide ingots from two shipwrecks off the coast of Turkey (one off Uluburun and one in Cape Gelidonya)."
        ];
        var exhibition007Tag_Object_Array:Array<Tag_Object> = [
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Aged_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Animal_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Archaeologist_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Boğazköy_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Bronze_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Cannatello_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Cape Gelidonya_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Copper_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Crete_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Cyprus_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Egypt_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Hattusa_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Hittite_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Ingot_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Mediterranean_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Metal_ADJ"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Oxhide_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Peloponnese_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Qantir-Piramesse_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Sicily_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Turkey_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Uluburun_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER")
        ];





        var exhibition008Explanation_String_Array:Array<String> = [
            "This female figurine resembles the plank figurines of the preceding period, but now the arms and breasts are rendered in relief.",
            "The woman holds in her arms a swaddled infant on a hooped cradleboard.",
            "These cradleboards are characteristic of a particular school of Cypriot art, although they were also produced on other isolated occasions.",
            "The infant's head is always by the mother's left breast.",
            "Her thick neck is not clearly differentiated from the head, which has a nose in relief, holes for eyes, and large ears apparently pierced for earrings.",
            "The incised lines between neck and bosom may represent necklaces, while marks behind the right shoulder perhaps suggest clothing.",
            "An identical female figure with a child in her arms adorns the shoulder of a jug from Cyprus in the Louvre collection.",
            "Both seem intended as representations of maternity."
        ];
        var exhibition008Tag_Object_Array:Array<Tag_Object> = [
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Cradleboard_NOUN_INANIMATE_PLACE_CONCRETE_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Cypriot_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Cyprus_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Female_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Figurine_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Infant_NOUN_ALIVE_ABSTRACT"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Louvre_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Statue_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionStaticFunction.Find_Tag_Object(__CollectionGlobal_Object, false, "Woman_NOUN_ALIVE_ABSTRACT")
        ];





        new Museum_Object(__CollectionGlobal_Object, EXH, exhibition001Tag_Object_Array, exhibition001Explanation_String_Array, "EXH_001", "Cista Cosmetic Container"                                , CollectionStaticFunction.Find_Museum_Object("ROM_001"));
        new Museum_Object(__CollectionGlobal_Object, EXH, exhibition002Tag_Object_Array, exhibition002Explanation_String_Array, "EXH_002", "Replica Of Mauri Hand Club"                              , CollectionStaticFunction.Find_Museum_Object("ROM_001"));
        new Museum_Object(__CollectionGlobal_Object, EXH, exhibition003Tag_Object_Array, exhibition003Explanation_String_Array, "EXH_003", "The Holy Thorn Reliquary"                                , CollectionStaticFunction.Find_Museum_Object("ROM_002"));
        new Museum_Object(__CollectionGlobal_Object, EXH, exhibition004Tag_Object_Array, exhibition004Explanation_String_Array, "EXH_004", "The Lyte Jewel"                                          , CollectionStaticFunction.Find_Museum_Object("ROM_002"));
        new Museum_Object(__CollectionGlobal_Object, EXH, exhibition005Tag_Object_Array, exhibition005Explanation_String_Array, "EXH_005", "Helmet From The Ship Burial At Sutton Hoo"               , CollectionStaticFunction.Find_Museum_Object("ROM_003"));
        new Museum_Object(__CollectionGlobal_Object, EXH, exhibition006Tag_Object_Array, exhibition006Explanation_String_Array, "EXH_006", "Gold Belt Buckle From The Ship Burial At Sutton Hoo"     , CollectionStaticFunction.Find_Museum_Object("ROM_003"));
        new Museum_Object(__CollectionGlobal_Object, EXH, exhibition007Tag_Object_Array, exhibition007Explanation_String_Array, "EXH_007", "Copper Ingot In The Shape Of An Oxhide"                  , CollectionStaticFunction.Find_Museum_Object("ROM_004"));
        new Museum_Object(__CollectionGlobal_Object, EXH, exhibition008Tag_Object_Array, exhibition008Explanation_String_Array, "EXH_008", "Red Polished Ware Figurine Cradling A Child"             , CollectionStaticFunction.Find_Museum_Object("ROM_004"));

    }
    /*==================================================*/





    /*==================================================
    Function to create all floor object.*/
    public static function PremadeFloorNewObjectVoid(__CollectionGlobal_Object:CollectionGlobal_Object){

        new Museum_Object(__CollectionGlobal_Object, FLR, default_Tag_Object_Array, explanationDefault_String_Array, "FLR_001", "Ground Floor"  , null);
        new Museum_Object(__CollectionGlobal_Object, FLR, default_Tag_Object_Array, explanationDefault_String_Array, "FLR_002", "Upper Floor"   , null);

    }
    /*==================================================*/





    /*==================================================
    Function to create all room object.*/
    public static function PremadeRoomNewObjectVoid(__CollectionGlobal_Object:CollectionGlobal_Object){

        new Museum_Object(__CollectionGlobal_Object, ROM, default_Tag_Object_Array, explanationDefault_String_Array, "ROM_001", "Room 1 Enlightenment"                              , CollectionStaticFunction.Find_Museum_Object("FLR_001"));
        new Museum_Object(__CollectionGlobal_Object, ROM, default_Tag_Object_Array, explanationDefault_String_Array, "ROM_002", "Room 2A Collecting The World"                      , CollectionStaticFunction.Find_Museum_Object("FLR_001"));
        new Museum_Object(__CollectionGlobal_Object, ROM, default_Tag_Object_Array, explanationDefault_String_Array, "ROM_003", "Room 41 The Sir Paul And Lady Ruddock Gallery"     , CollectionStaticFunction.Find_Museum_Object("FLR_002"));
        new Museum_Object(__CollectionGlobal_Object, ROM, default_Tag_Object_Array, explanationDefault_String_Array, "ROM_004", "Room 72 Ancient Cyprus"                            , CollectionStaticFunction.Find_Museum_Object("FLR_002"));

    }
    /*==================================================*/





    /*==================================================
    Function to create all visitor object.*/
    public static function PremadeVisitorObjectVoid(_amountInt:Int, __CollectionGlobal_Object:CollectionGlobal_Object){

        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _amountInt){

            var visitorObject:Visitor_Object = new Visitor_Object(
                __CollectionGlobal_Object,
                __CollectionGlobal_Object.IncrementIndexGlobalVisitor_Int(),
                "Visitor " + __CollectionGlobal_Object.indexGlobalVisitor_Int
            );
            




            loopCounter1Int ++;

        }

    }
    /*==================================================*/





}
