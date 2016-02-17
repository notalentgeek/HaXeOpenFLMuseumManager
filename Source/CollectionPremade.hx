import CollectionEnum;





class CollectionPremade{




    private static var explanationGenericStringArray = [
        "Explanation 1.",
        "Explanation 2.",
        "Explanation 3."
    ];
    private static var explanationGenericNewStringArray = [
        "Floor and room has no explanation."
    ];


    /*==================================================
    Constructor.*/
    public function new(){}
    /*==================================================*/





    /*==================================================
    Premade function to create all exhibition object.*/
    public static function PremadeExhibitionObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_001", "First Exhibition", "ROM_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_002", "Second Exhibition", "ROM_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_003", "Third Exhibition", "ROM_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_004", "Fourth Exhibition", "ROM_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_005", "Fifth Exhibition", "ROM_003", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_006", "Sixth Exhibition", "ROM_003", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_007", "Seventh Exhibition", "ROM_004", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_008", "Eighth Exhibition", "ROM_004", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
    }

    public static function PremadeExhibitionNewObjectVoid(_collectionGlobalObject:CollectionGlobal){

        var exhibition001ExplanationStringArray:Array<String> = [
            "Bronze cista for cosmetic items.",
            "The feet of the vessel are formed of lion's paws surmounted by crouching lions, and there was originally a chain hung from a row of discs around the middle.",
            "The scenes engraved around the vessel have not been identified with certainty."
        ];
        var exhibition001TagObjectArray:Array<ObjectTag> = [
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "chain_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "cista_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "cosmetic_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "crouch_VERB_INTRANSITIVE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "item_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "lion_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "vessel_NOUN_INANIMATE_PLACE_CONCRETE_OWNER")
        ];
        var exhibition002ExplanationStringArray:Array<String> = [
            "Clubs came in different forms and were used by a warrior in combination with a long-handled weapon, such as a spear.",
            "They could be made from bone and ivory, like these examples, wood, stone or jade.",
            "Jade clubs were highly-prized and symbols of authority.",
            "The curved wahaika was used in a slicing motion towards the head or neck, while the spatula-shaped pate was more suited to a thrusting motion.",
            "Warriors carried them in their belts, ready at hand, with a wrist-strap attached through the hole at the end."
        ];
        var exhibition002TagObjectArray:Array<ObjectTag> = [
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "belt_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "club_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "jade_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Mauri_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "spear_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "stone_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "warrior_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "weapon_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "wood_NOUN_INANIMATE_HOLD_CONCRETE")
        ];
        var exhibition003ExplanationStringArray:Array<String> = [
            "The Holy Thorn Reliquary was probably created in the 1390s in Paris for John, Duke of Berry, to house a relic of the Crown of Thorns.",
            "The reliquary was bequeathed to the British Museum in 1898 by Ferdinand de Rothschild as part of the Waddesdon Bequest.",
            "It is one of a small number of major goldsmiths' works or joyaux that survive from the extravagant world of the courts of the Valois royal family around 1400.",
            "It is made of gold, lavishly decorated with jewels and pearls, and uses the technique of enamelling en ronde bosse, or in the round, which had been recently developed when the reliquary was made, to create a total of 28 three-dimensional figures, mostly in white enamel."
        ];
        var exhibition003TagObjectArray:Array<ObjectTag> = [
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Crown of Thorn_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "extravagant_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "extravagantly_ADV"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Ferdinand de Rothschild_NOUN_ALIVE_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "gold_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "goldsmith_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "jewel_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "John, Duke of Berry_NOUN_ALIVE_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Paris_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "pearl_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "reliquary_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "The Holy Thorn Reliquary_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Valois_NOUN_INANIMATE_WEAR_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Waddesdon Bequest_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER")
        ];
        var exhibition004ExplanationStringArray:Array<String> = [
            "Pendant jewel; gold; oval; set with twenty-five square table diamonds and four rose diamonds.",
            "Contains miniature portrait of James I as a young man.",
            "Cover in open-work with diamonds on outside and enamel within.",
            "Frame of square diamonds connected by slender enamelled band; back is white enamel plate with fine gold lines and ruby enamel.",
            "Edge enamelled alternately ruby and sapphire blue."
        ];
        var exhibition004TagObjectArray:Array<ObjectTag> = [
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "gold_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "James_NOUN_ALIVE_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "jewel_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "oval_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "pendant_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "rose_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "sapphire_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "slender_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "table_NOUN_INANIMATE_PLACE_CONCRETE_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "The Lyte Jewel_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "young man_NOUN_ALIVE_ABSTRACT")
        ];
        var exhibition005ExplanationStringArray:Array<String> = [
            "On the head's left side was placed a crested and masked helmet wrapped in cloths.",
            "With its panels of tinned bronze and assembled mounts, the decoration is directly comparable to that found on helmets from the Vendel and Valsgärde cemeteries of eastern Sweden.",
            "The Sutton Hoo helmet differs from the Swedish examples in having an iron skull of a single vaulted shell and has a full face mask, a solid neck guard and deep cheekpieces.",
            "These features have suggested an English origin for the basic structure of the helmet; the deep cheekpieces have parallels in the Coppergate helmet, found in York.",
            "Although outwardly very like the Swedish examples, the Sutton Hoo helmet is a product of better craftsmanship.",
            "Helmets are extremely rare finds.",
            "No other such figural plaques were known in England, apart from a fragment from a burial at Caenby, Lincolnshire, until the 2009 discovery of the Staffordshire hoard, which contained many.",
            "The helmet rusted in the grave and was shattered into hundreds of tiny fragments when the chamber roof collapsed.",
            "Restoration of the helmet thus involved the meticulous identification, grouping and orientation of the surviving fragments before it could be reconstructed."
        ];
        var exhibition005TagObjectArray:Array<ObjectTag> = [
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Caenby_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "crest_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "England_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "helmet_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Lincolnshire_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "mask_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "masked_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Staffordshire_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Sweden_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "The Sutton Hoo_NOUN_ALIVE_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Valsgärde_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Vendel_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER")
        ];
        var exhibition006ExplanationStringArray:Array<String> = [
            "On the right of the body lay a set of spears, tips uppermost, including three barbed angons, with their heads thrust through a handle of the bronze bowl.",
            "Nearby was a wand with a small mount depicting a wolf.",
            "Closer to the body lay the sword with a gold and garnet cloisonné pommel 85 centimetres (33 in) long, its pattern-welded blade still within its scabbard, with superlative scabbard-bosses of domed cellwork and pyramidal mounts.",
            "Attached to this and lying toward the body was the sword harness and belt, fitted with a suite of gold mounts and strap-distributors of extremely intricate garnet cellwork ornament."
        ];
        var exhibition006TagObjectArray:Array<ObjectTag> = [
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "bowl_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "bronze_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "burial_NOUN_INANIMATE_PLACE_CONCRETE_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "garnet_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "ship_NOUN_INANIMATE_PLACE_CONCRETE_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "spear_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "The Sutton Hoo_NOUN_ALIVE_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "wolf_NOUN_ALIVE_ABSTRACT")
        ];
        var exhibition007ExplanationStringArray:Array<String> = [
            "Oxhide ingots are metal slabs, usually of copper but sometimes of tin, produced and widely distributed during the Mediterranean Late Bronze Age (LBA).",
            "Their shape resembles the hide of an ox with a protruding handle in each of the ingot’s four corners.",
            "Early thought was that each ingot was equivalent to the value of one ox.",
            "However, the similarity in shape is simply a coincidence.",
            "The ingots’ producers probably designed these protrusions to make the ingots easily transportable overland on the backs of pack animals.",
            "Complete or partial oxhide ingots have been discovered in Sardinia, Crete, Peloponnese, Cyprus, Cannatello in Sicily, Boğazköy in Turkey (ancient Hattusa, the Hittite capital), Qantir-Piramesse in Egypt, and Sozopol in Bulgaria.",
            "Archaeologists have recovered many oxhide ingots from two shipwrecks off the coast of Turkey (one off Uluburun and one in Cape Gelidonya)."
        ];
        var exhibition007TagObjectArray:Array<ObjectTag> = [
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "aged_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "animal_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "archaeologist_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Boğazköy_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "bronze_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Cannatello_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Cape Gelidonya_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "copper_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Crete_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Cyprus_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Egypt_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Hattusa_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Hittite_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "ingot_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Mediterranean_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "metal_ADJ"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "oxhide_NOUN_INANIMATE_WEAR_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Peloponnese_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Qantir-Piramesse_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Sicily_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Turkey_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Uluburun_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER")
        ];
        var exhibition008ExplanationStringArray:Array<String> = [
            "This female figurine resembles the plank figurines of the preceding period, but now the arms and breasts are rendered in relief.",
            "The woman holds in her arms a swaddled infant on a hooped cradleboard.",
            "These cradleboards are characteristic of a particular school of Cypriot art, although they were also produced on other isolated occasions.",
            "The infant's head is always by the mother's left breast.",
            "Her thick neck is not clearly differentiated from the head, which has a nose in relief, holes for eyes, and large ears apparently pierced for earrings.",
            "The incised lines between neck and bosom may represent necklaces, while marks behind the right shoulder perhaps suggest clothing.",
            "An identical female figure with a child in her arms adorns the shoulder of a jug from Cyprus in the Louvre collection.",
            "Both seem intended as representations of maternity."
        ];
        var exhibition008TagObjectArray:Array<ObjectTag> = [
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "cradleboard_NOUN_INANIMATE_PLACE_CONCRETE_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Cypriot_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Cyprus_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "female_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "figurine_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "infant_NOUN_ALIVE_ABSTRACT"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "Louvre_NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "statue_NOUN_INANIMATE_HOLD_CONCRETE"),
            CollectionFunction.FindTagObject(_collectionGlobalObject, false, "woman_NOUN_ALIVE_ABSTRACT")
        ];

        new ObjectMuseum(_collectionGlobalObject, exhibition001ExplanationStringArray, "EXH_001", "Cista Cosmetic Container", "ROM_001", exhibition001TagObjectArray, EXH);
        new ObjectMuseum(_collectionGlobalObject, exhibition002ExplanationStringArray, "EXH_002", "Replica Of Mauri Hand Club", "ROM_001", exhibition002TagObjectArray, EXH);
        new ObjectMuseum(_collectionGlobalObject, exhibition003ExplanationStringArray, "EXH_003", "The Holy Thorn Reliquary", "ROM_002", exhibition003TagObjectArray, EXH);
        new ObjectMuseum(_collectionGlobalObject, exhibition004ExplanationStringArray, "EXH_004", "The Lyte Jewel", "ROM_002", exhibition004TagObjectArray, EXH);
        new ObjectMuseum(_collectionGlobalObject, exhibition005ExplanationStringArray, "EXH_005", "Helmet From The Ship Burial At Sutton Hoo", "ROM_003", exhibition005TagObjectArray, EXH);
        new ObjectMuseum(_collectionGlobalObject, exhibition006ExplanationStringArray, "EXH_006", "Gold Belt Buckle From The Ship Burial At Sutton Hoo", "ROM_003", exhibition006TagObjectArray, EXH);
        new ObjectMuseum(_collectionGlobalObject, exhibition007ExplanationStringArray, "EXH_007", "Copper Ingot In The Shape Of An Oxhide", "ROM_004", exhibition007TagObjectArray, EXH);
        new ObjectMuseum(_collectionGlobalObject, exhibition008ExplanationStringArray, "EXH_008", "Red Polished Ware Figurine Cradling A Child", "ROM_004", exhibition008TagObjectArray, EXH);
    
    }
    /*==================================================*/





    /*==================================================
    Premade function to create all floor object.*/
    public static function PremadeFloorObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "FLR_001", "First Floor", "XXX_XXX", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), FLR);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "FLR_002", "Second Floor", "XXX_XXX", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), FLR);
    }

    public static function PremadeFloorNewObjectVoid(_collectionGlobalObject:CollectionGlobal){
        var tagGenericNewObjectArray:Array<ObjectTag> = [_collectionGlobalObject.GetTagObjectArray()[0]];
        new ObjectMuseum(_collectionGlobalObject, explanationGenericNewStringArray, "FLR_001", "Ground Floor", "XXX_XXX", tagGenericNewObjectArray, FLR);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericNewStringArray, "FLR_002", "Upper Floor", "XXX_XXX", tagGenericNewObjectArray, FLR);
    }
    /*==================================================*/





    /*==================================================
    Function to create all room object.*/
    public static function PremadeRoomObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "ROM_001", "First Room", "FLR_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "ROM_002", "Second Room", "FLR_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "ROM_003", "Third Room", "FLR_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "ROM_004", "Fourth Room", "FLR_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
    }

    public static function PremadeRoomNewObjectVoid(_collectionGlobalObject:CollectionGlobal){
        var tagGenericNewObjectArray:Array<ObjectTag> = [_collectionGlobalObject.GetTagObjectArray()[0]];
        new ObjectMuseum(_collectionGlobalObject, explanationGenericNewStringArray, "ROM_001", "Room 1 Enlightenment", "FLR_001", tagGenericNewObjectArray, ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericNewStringArray, "ROM_002", "Room 2A Collecting The World", "FLR_001", tagGenericNewObjectArray, ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericNewStringArray, "ROM_003", "Room 41 The Sir Paul And Lady Ruddock Gallery", "FLR_002", tagGenericNewObjectArray, ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericNewStringArray, "ROM_004", "Room 72 Ancient Cyprus", "FLR_002", tagGenericNewObjectArray, ROM);
    }
    /*==================================================*/





    /*==================================================
    Function to create all visitor object.*/
    public static function PremadeVisitorObjectVoid(_amountInt:Int, _collectionGlobalObject:CollectionGlobal){
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _amountInt){
            var visitorObject:ObjectVisitor = new ObjectVisitor(_collectionGlobalObject, _collectionGlobalObject.PutIndexGlobalVisitorInt(), "Visitor " + _collectionGlobalObject.GetIndexGlobalVisitorInt());
            loopCounter1Int ++;
        }
    }
    /*==================================================*/





}