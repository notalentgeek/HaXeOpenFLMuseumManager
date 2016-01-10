import CollectionEnum;
class CollectionPremade{
    public function new(){}
    public static function PremadeExhibitionObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, "EXH_001", "First Exhibition", "ROM_001", _collectionGlobalObject.GetTagStructArray(), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_002", "Second Exhibition", "ROM_001", _collectionGlobalObject.GetTagStructArray(), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_003", "Third Exhibition", "ROM_002", _collectionGlobalObject.GetTagStructArray(), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_004", "Fourth Exhibition", "ROM_002", _collectionGlobalObject.GetTagStructArray(), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_005", "Fifth Exhibition", "ROM_003", _collectionGlobalObject.GetTagStructArray(), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_006", "Sixth Exhibition", "ROM_003", _collectionGlobalObject.GetTagStructArray(), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_007", "Seventh Exhibition", "ROM_004", _collectionGlobalObject.GetTagStructArray(), EXH);
        new ObjectMuseum(_collectionGlobalObject, "EXH_008", "Eighth Exhibition", "ROM_004", _collectionGlobalObject.GetTagStructArray(), EXH);
    }
    public static function PremadeFloorObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, "FLR_001", "First Floor", "XXX_XXX", _collectionGlobalObject.GetTagStructArray(), FLR);
        new ObjectMuseum(_collectionGlobalObject, "FLR_002", "Second Floor", "XXX_XXX", _collectionGlobalObject.GetTagStructArray(), FLR);
    }
    public static function PremadeRoomObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, "ROM_001", "First Room", "FLR_001", _collectionGlobalObject.GetTagStructArray(), ROM);
        new ObjectMuseum(_collectionGlobalObject, "ROM_002", "Second Room", "FLR_001", _collectionGlobalObject.GetTagStructArray(), ROM);
        new ObjectMuseum(_collectionGlobalObject, "ROM_003", "Third Room", "FLR_002", _collectionGlobalObject.GetTagStructArray(), ROM);
        new ObjectMuseum(_collectionGlobalObject, "ROM_004", "Fourth Room", "FLR_002", _collectionGlobalObject.GetTagStructArray(), ROM);
    }
    public static function PremadeVisitorObjectVoid(_amountInt:Int, _collectionGlobalObject:CollectionGlobal){
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _amountInt){
            var visitorObject:ObjectVisitor = new ObjectVisitor(_collectionGlobalObject, CollectionFunction.PickRandomFromArrayT(_collectionGlobalObject.GetExhibitionObjectArray()), _collectionGlobalObject.PutIndexGlobalVisitorInt(), "Visitor " + loopCounter1Int);
            loopCounter1Int ++;
        }
    }
}