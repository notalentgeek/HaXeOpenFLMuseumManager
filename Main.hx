import CollectionEnum;
import CollectionStruct;
class Main{
    static function main(){
        var collectionGlobalObject  :CollectionGlobal   = new CollectionGlobal  ();

        /*Adding tons of tag into the application.
        concat() does not seems to working.*/
        /*
        collectionGlobalObject.GetTagStructArray().concat([

            {tagTypeEnum:NOUN_ALIVE_CONCRETE, tagEntry1Struct:{tagTypeSubEnum:NOUN, tagString:"Mikael"}, tagEntry2Struct:{tagTypeSubEnum:NOUN_POS, tagString:"Mikael's"}},
            {tagTypeEnum:NOUN_ALIVE_CONCRETE, tagEntry1Struct:{tagTypeSubEnum:NOUN, tagString:"Andy"}, tagEntry2Struct:{tagTypeSubEnum:NOUN_POS, tagString:"Andy's"}}

        ]);
        */
        collectionGlobalObject.GetTagStructArray().push({tagTypeEnum:NOUN_ALIVE_CONCRETE, tagEntry1Struct:{tagTypeSubEnum:NOUN, tagString:"Mikael"}, tagEntry2Struct:{tagTypeSubEnum:NOUN_POS, tagString:"Mikael's"}});
        collectionGlobalObject.GetTagStructArray().push({tagTypeEnum:NOUN_ALIVE_CONCRETE, tagEntry1Struct:{tagTypeSubEnum:NOUN, tagString:"Andy"}, tagEntry2Struct:{tagTypeSubEnum:NOUN_POS, tagString:"Andy's"}});
        trace(collectionGlobalObject.GetTagStructArray().length);
        var floor1Object            :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "FLR_001", "First Floor"           , "XXX_XXX", FLR, collectionGlobalObject.GetTagStructArray());
        var floor2Object            :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "FLR_002", "Second Floor"          , "XXX_XXX", FLR, collectionGlobalObject.GetTagStructArray());
        var room1Object             :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "ROM_001", "First Room"            , "FLR_001", ROM, collectionGlobalObject.GetTagStructArray());
        var room2Object             :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "ROM_002", "Second Room"           , "FLR_001", ROM, collectionGlobalObject.GetTagStructArray());
        var room3Object             :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "ROM_003", "Third Room"            , "FLR_002", ROM, collectionGlobalObject.GetTagStructArray());
        var room4Object             :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "ROM_004", "Fourth Room"           , "FLR_002", ROM, collectionGlobalObject.GetTagStructArray());
        var exhibition1Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_001", "First Exhibition"      , "ROM_001", EXH, collectionGlobalObject.GetTagStructArray());
        var exhibition2Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_002", "Second Exhibition"     , "ROM_001", EXH, collectionGlobalObject.GetTagStructArray());
        var exhibition3Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_003", "Third Exhibition"      , "ROM_002", EXH, collectionGlobalObject.GetTagStructArray());
        var exhibition4Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_004", "Fourth Exhibition"     , "ROM_002", EXH, collectionGlobalObject.GetTagStructArray());
        var exhibition5Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_005", "Fifth Exhibition"      , "ROM_003", EXH, collectionGlobalObject.GetTagStructArray());
        var exhibition6Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_006", "Sixth Exhibition"      , "ROM_003", EXH, collectionGlobalObject.GetTagStructArray());
        var exhibition7Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_007", "Seventh Exhibition"    , "ROM_004", EXH, collectionGlobalObject.GetTagStructArray());
        var exhibition8Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_008", "Eighth Exhibition"     , "ROM_004", EXH, collectionGlobalObject.GetTagStructArray());
        var loopCounter1Int         :Int                = 0;
        while(loopCounter1Int < 1){
            var visitorObject       :ObjectVisitor      = new ObjectVisitor     (collectionGlobalObject, CollectionFunction.PickRandomFromArrayT(collectionGlobalObject.GetExhibitionObjectArray()), collectionGlobalObject.PutIndexGlobalVisitorInt(), "Visitor " + loopCounter1Int);
            loopCounter1Int                             ++;
        }
        while(true){
            /*PENDING: Make this into one continous loop instead of all object updated in separate loop.*/
            loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].Update();
                loopCounter1Int ++;
            }
            loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetFloorObjectArray().length){
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].Update();
                loopCounter1Int ++;
            }
            loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].Update();
                loopCounter1Int ++;
            }
            loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].AIAutoExhibitionChangeVoid();
                loopCounter1Int ++;
            }
            /*Try to trace the first tagStructArray of the first player in the index.*/
            //trace(collectionGlobalObject.GetVisitorObjectArray()[0].GetTagCounterStructArray()[0].tagStruct.tagEntry1Struct.tagString);
            trace(collectionGlobalObject.GetVisitorObjectArray()[0].GetTagStructMap().toString());
        }
    }
}