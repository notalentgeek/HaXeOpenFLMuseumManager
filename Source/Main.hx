package;

import CollectionEnum;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import haxe.ui.toolkit.containers.Absolute;
import haxe.ui.toolkit.containers.Accordion;
import haxe.ui.toolkit.containers.HBox;
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.events.UIEvent;

class Main extends Sprite{
    /*Global variable database for the whole application.*/
    var collectionGlobalObject:CollectionGlobal = new CollectionGlobal();
    var loopCounterMainInt:Int = 0;
    private function new(){
        super();
        Toolkit.init();
        Toolkit.setTransitionForClass(haxe.ui.toolkit.containers.Accordion, "none");
        Toolkit.openFullscreen(function(root:Root){
            /*Init GUI object here.*/
            var uiMainObject:IDisplayObject = Toolkit.processXmlResource("layout/UIMain.xml");
            collectionGlobalObject.SetUIMainObjectVoid(uiMainObject);
            root.addChild(uiMainObject);
            var uiMuseumAbsoluteObject:Absolute = root.findChild("UIMuseumAbsolute", Absolute, true);
            collectionGlobalObject.SetUIMuseumAbsoluteObjectVoid(uiMuseumAbsoluteObject);
        });
        /*Create all the necessary object.*/
        CollectionTagGeneral.TagGeneralStructVoid(collectionGlobalObject);
        CollectionPremadeTag.PremadeTagStructVoid(collectionGlobalObject);
        CollectionPremade.PremadeFloorObjectVoid(collectionGlobalObject);
        CollectionPremade.PremadeRoomObjectVoid(collectionGlobalObject);
        CollectionPremade.PremadeExhibitionObjectVoid(collectionGlobalObject);
        CollectionPremade.PremadeVisitorObjectVoid(10, collectionGlobalObject);
        addEventListener(Event.ENTER_FRAME, Update);
    }
    private function Update(event:Event){
        /*Loop through all objects.*/
        var leastCommonMultipleFloat:Float = CollectionFunction.GenerateLeastCommonMultipleFloat(collectionGlobalObject.GetExhibitionObjectArray().length, collectionGlobalObject.GetFloorObjectArray().length);
        leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetRoomObjectArray().length);
        leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetVisitorObjectArray().length);
        var leastCommonMultipleInt:Int = Math.round(leastCommonMultipleFloat);
        if(loopCounterMainInt > leastCommonMultipleInt){ loopCounterMainInt = 0; }
        collectionGlobalObject.GetExhibitionObjectArray()[loopCounterMainInt%collectionGlobalObject.GetExhibitionObjectArray().length].Update();
        collectionGlobalObject.GetFloorObjectArray()[loopCounterMainInt%collectionGlobalObject.GetFloorObjectArray().length].Update();
        collectionGlobalObject.GetRoomObjectArray()[loopCounterMainInt%collectionGlobalObject.GetRoomObjectArray().length].Update();
        collectionGlobalObject.GetVisitorObjectArray()[loopCounterMainInt%collectionGlobalObject.GetVisitorObjectArray().length].AIAutoExhibitionChangeVoid();
        loopCounterMainInt ++;
        //trace(collectionGlobalObject.GetVisitorObjectArray()[0].GetExhibitionCurrentObject().GetNameStruct().nameAltString);
    }
}