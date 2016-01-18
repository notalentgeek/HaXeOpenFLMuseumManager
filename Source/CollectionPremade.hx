import CollectionEnum;
class CollectionPremade{
    public function new(){}
    public static function PremadeExhibitionObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, "EXH_001", "First Exhibition", "ROM_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_002", "Second Exhibition", "ROM_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_003", "Third Exhibition", "ROM_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_004", "Fourth Exhibition", "ROM_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_005", "Fifth Exhibition", "ROM_003", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_006", "Sixth Exhibition", "ROM_003", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_007", "Seventh Exhibition", "ROM_004", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_008", "Eighth Exhibition", "ROM_004", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_009", "Ninth Exhibition", "ROM_005", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_010", "Tenth Exhibition", "ROM_005", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_011", "Eleventh Exhibition", "ROM_006", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_012", "Twelveth Exhibition", "ROM_006", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
    }
    public static function PremadeFloorObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, "FLR_001", "First Floor", "XXX_XXX", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), FLR);
        new ObjectMuseum(_collectionGlobalObject, "FLR_002", "Second Floor", "XXX_XXX", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), FLR);
        new ObjectMuseum(_collectionGlobalObject, "FLR_003", "Third Floor", "XXX_XXX", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), FLR);
    }
    public static function PremadeRoomObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, "ROM_001", "First Room", "FLR_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, "ROM_002", "Second Room", "FLR_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, "ROM_003", "Third Room", "FLR_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, "ROM_004", "Fourth Room", "FLR_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, "ROM_005", "Fifth Room", "FLR_003", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, "ROM_006", "Sixth Room", "FLR_003", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
    }
    public static function PremadeVisitorObjectVoid(_amountInt:Int, _collectionGlobalObject:CollectionGlobal){
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _amountInt){
            var visitorObject:ObjectVisitor = new ObjectVisitor(_collectionGlobalObject, CollectionFunction.PickRandomFromArrayT(_collectionGlobalObject.GetExhibitionObjectArray()), _collectionGlobalObject.PutIndexGlobalVisitorInt(), "Visitor " + loopCounter1Int);
            loopCounter1Int ++;
        }
    }
}