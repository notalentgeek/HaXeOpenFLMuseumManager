import CollectionEnum;
import CollectionStruct;
class Main{
    static function main(){
        /*Global variable database for the whole application.*/
        var collectionGlobalObject:CollectionGlobal = new CollectionGlobal();
        /*Create all the necessary object.*/
        CollectionTagGeneral.TagGeneralStructVoid(collectionGlobalObject);
        CollectionPremadeTag.PremadeTagStructVoid(collectionGlobalObject);
        CollectionPremade.PremadeFloorObjectVoid(collectionGlobalObject);
        CollectionPremade.PremadeRoomObjectVoid(collectionGlobalObject);
        CollectionPremade.PremadeExhibitionObjectVoid(collectionGlobalObject);
        CollectionPremade.PremadeVisitorObjectVoid(100, collectionGlobalObject);
        /*Main loop.*/
        while(true){
            /*Loop through all objects.*/
            var leastCommonMultipleFloat:Float = CollectionFunction.GenerateLeastCommonMultipleFloat(collectionGlobalObject.GetExhibitionObjectArray().length, collectionGlobalObject.GetFloorObjectArray().length);
            leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetRoomObjectArray().length);
            leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetVisitorObjectArray().length);
            var leastCommonMultipleInt:Int = Math.round(leastCommonMultipleFloat);
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < leastCommonMultipleInt){
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int%collectionGlobalObject.GetExhibitionObjectArray().length].Update();
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int%collectionGlobalObject.GetFloorObjectArray().length].Update();
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int%collectionGlobalObject.GetRoomObjectArray().length].Update();
                collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int%collectionGlobalObject.GetVisitorObjectArray().length].AIAutoExhibitionChangeVoid();
                loopCounter1Int ++;

                var debugString:String = "";
                for(_key in collectionGlobalObject.GetVisitorObjectArray()[0].GetTagStructMap().keys()){
                    debugString = debugString + " " + _key.tagEntry1Struct.tagString;
                }
                if(
                    collectionGlobalObject.GetVisitorObjectArray()[0].GetFinishedBool() == false &&
                    collectionGlobalObject.GetVisitorObjectArray()[0].GetJustChangeExhibitionBool() == true
                ){ collectionGlobalObject.GetVisitorObjectArray()[0].SetJustChangeExhibitionBoolVoid(false); trace(debugString); }
            }
        }
    }
}