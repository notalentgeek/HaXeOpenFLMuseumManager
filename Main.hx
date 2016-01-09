import CollectionEnum;
import CollectionStruct;
class Main{
    static function main(){
        /*Global variable database for the whole application.*/
        var collectionGlobalObject:CollectionGlobal = new CollectionGlobal();
        CollectionPremade.PremadeTagStructVoid(collectionGlobalObject);

        /*The pre - made museum object.
        PENDING: Please make these objects into separate files.
        PENDING: Do not forget to edit the tags.
        PENDING: Change the sequence of new ObjectMuseum() between argument of tagStructArray and the typeEnum.*/
        var floor1Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "FLR_001", "First Floor", "XXX_XXX", collectionGlobalObject.GetTagStructArray(), FLR);
        var floor2Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "FLR_002", "Second Floor", "XXX_XXX", collectionGlobalObject.GetTagStructArray(), FLR);
        var room1Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "ROM_001", "First Room", "FLR_001", collectionGlobalObject.GetTagStructArray(), ROM);
        var room2Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "ROM_002", "Second Room", "FLR_001", collectionGlobalObject.GetTagStructArray(), ROM);
        var room3Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "ROM_003", "Third Room", "FLR_002", collectionGlobalObject.GetTagStructArray(), ROM);
        var room4Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "ROM_004", "Fourth Room", "FLR_002", collectionGlobalObject.GetTagStructArray(), ROM);
        var exhibition1Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "EXH_001", "First Exhibition", "ROM_001", collectionGlobalObject.GetTagStructArray(), EXH);
        var exhibition2Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "EXH_002", "Second Exhibition", "ROM_001", collectionGlobalObject.GetTagStructArray(), EXH);
        var exhibition3Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "EXH_003", "Third Exhibition", "ROM_002", collectionGlobalObject.GetTagStructArray(), EXH);
        var exhibition4Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "EXH_004", "Fourth Exhibition", "ROM_002", collectionGlobalObject.GetTagStructArray(), EXH);
        var exhibition5Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "EXH_005", "Fifth Exhibition", "ROM_003", collectionGlobalObject.GetTagStructArray(), EXH);
        var exhibition6Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "EXH_006", "Sixth Exhibition", "ROM_003", collectionGlobalObject.GetTagStructArray(), EXH);
        var exhibition7Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "EXH_007", "Seventh Exhibition", "ROM_004", collectionGlobalObject.GetTagStructArray(), EXH);
        var exhibition8Object:ObjectMuseum = new ObjectMuseum(collectionGlobalObject, "EXH_008", "Eighth Exhibition", "ROM_004", collectionGlobalObject.GetTagStructArray(), EXH);

        /*Loop to create the visitor object.*/
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < 123){
            var visitorObject:ObjectVisitor = new ObjectVisitor     (collectionGlobalObject, CollectionFunction.PickRandomFromArrayT(collectionGlobalObject.GetExhibitionObjectArray()), collectionGlobalObject.PutIndexGlobalVisitorInt(), "Visitor " + loopCounter1Int);
            loopCounter1Int ++;
        }

        /*Main loop.*/
        while(true){
            /*Loop through all objects.*/
            var leastCommonMultipleFloat:Float = CollectionFunction.GenerateLeastCommonMultipleFloat(collectionGlobalObject.GetExhibitionObjectArray().length, collectionGlobalObject.GetFloorObjectArray().length);
            leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetRoomObjectArray().length);
            leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetVisitorObjectArray().length);
            var leastCommonMultipleInt:Int = Math.round(leastCommonMultipleFloat);
            loopCounter1Int = 0;
            while(loopCounter1Int < leastCommonMultipleInt){
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int%collectionGlobalObject.GetExhibitionObjectArray().length].Update();
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int%collectionGlobalObject.GetFloorObjectArray().length].Update();
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int%collectionGlobalObject.GetRoomObjectArray().length].Update();
                collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int%collectionGlobalObject.GetVisitorObjectArray().length].AIAutoExhibitionChangeVoid();
                loopCounter1Int ++;
            }
        }
    }
}