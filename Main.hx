class Main{
    static function main(){
        var collectionGlobalObject  :CollectionGlobal   = new CollectionGlobal  ();
        var floor1Object            :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "FLR_001", "First Floor"           , "XXX_XXX", FLR);
        var floor2Object            :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "FLR_002", "Second Floor"          , "XXX_XXX", FLR);
        var room1Object             :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "ROM_001", "First Room"            , "FLR_001", ROM);
        var room2Object             :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "ROM_002", "Second Room"           , "FLR_001", ROM);
        var room3Object             :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "ROM_003", "Third Room"            , "FLR_002", ROM);
        var room4Object             :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "ROM_004", "Fourth Room"           , "FLR_002", ROM);
        var exhibition1Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_001", "First Exhibition"      , "ROM_001", EXH);
        var exhibition2Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_002", "Second Exhibition"     , "ROM_001", EXH);
        var exhibition3Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_003", "Third Exhibition"      , "ROM_002", EXH);
        var exhibition4Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_004", "Fourth Exhibition"     , "ROM_002", EXH);
        var exhibition5Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_005", "Fifth Exhibition"      , "ROM_003", EXH);
        var exhibition6Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_006", "Sixth Exhibition"      , "ROM_003", EXH);
        var exhibition7Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_007", "Seventh Exhibition"    , "ROM_004", EXH);
        var exhibition8Object       :ObjectMuseum       = new ObjectMuseum      (collectionGlobalObject, "EXH_008", "Eighth Exhibition"     , "ROM_004", EXH);
        var loopCounter1Int         :Int                = 0;
        while(loopCounter1Int < 1000){
            var visitorObject       :ObjectVisitor      = new ObjectVisitor     (collectionGlobalObject, CollectionFunction.PickRandomFromArrayT(collectionGlobalObject.GetExhibitionObjectArray()), collectionGlobalObject.PutIndexGlobalVisitorInt(), "Visitor " + loopCounter1Int);
            loopCounter1Int                             ++;
        }
        while(true){
            loopCounter1Int                             = 0;
            while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].AIAutoExhibitionChangeVoid();
                loopCounter1Int                         ++;
            }
            loopCounter1Int                             = 0;
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].Update();
                loopCounter1Int                         ++;
            }
            loopCounter1Int                             = 0;
            while(loopCounter1Int < collectionGlobalObject.GetFloorObjectArray().length){
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].Update();
                loopCounter1Int                         ++;
            }
            loopCounter1Int                             = 0;
            while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].Update();
                loopCounter1Int                         ++;
            }
        }
    }
}