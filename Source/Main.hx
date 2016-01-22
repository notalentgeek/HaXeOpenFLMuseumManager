package;



import CollectionEnum;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import haxe.ui.toolkit.containers.Absolute;
import haxe.ui.toolkit.containers.Accordion;
import haxe.ui.toolkit.containers.Grid;
import haxe.ui.toolkit.containers.HBox;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.controls.popups.CustomPopupContent;
import haxe.ui.toolkit.controls.popups.Popup;
import haxe.ui.toolkit.controls.selection.ListSelector;
import haxe.ui.toolkit.controls.Text;
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.data.DataSource;
import haxe.ui.toolkit.events.UIEvent;



class Main extends Sprite{



    /*Global variable database for the whole application.*/
    var collectionGlobalObject          :CollectionGlobal           = new CollectionGlobal();
    var loopCounterMainInt              :Int                        = 0;
    /*Popup objects.*/
    var uiPopupAddMuseumObject          :UIPopupAddObjectMuseum     = null;
    var uiPopupRemoveMuseumObject       :UIPopupRemoveObjectMuseum  = null;



    private function new(){

        super();

        Toolkit.init();
        Toolkit.setTransitionForClass(haxe.ui.toolkit.containers.Accordion, "none");
        Toolkit.openFullscreen(function(_root:Root){

            /*Init GUI object here.*/
            var uiMainObject:IDisplayObject = Toolkit.processXmlResource("layout/UIMain.xml");
            collectionGlobalObject.SetUIMainObjectVoid(uiMainObject);
            _root.addChild(uiMainObject);

            uiPopupAddMuseumObject = new UIPopupAddObjectMuseum(collectionGlobalObject, _root);
            uiPopupRemoveMuseumObject = new UIPopupRemoveObjectMuseum(collectionGlobalObject, _root);

            var uiMuseumAbsoluteObject:Absolute = _root.findChild("UIMuseumAbsolute", Absolute, true);
            collectionGlobalObject.SetUIMuseumAbsoluteObjectVoid(uiMuseumAbsoluteObject);

        });

        /*Create all the necessary object.*/
        CollectionTagGeneral    .TagGeneralStructVoid           (collectionGlobalObject);
        CollectionPremadeTag    .PremadeTagStructVoid           (collectionGlobalObject);
        CollectionPremade       .PremadeFloorObjectVoid         (collectionGlobalObject);
        CollectionPremade       .PremadeRoomObjectVoid          (collectionGlobalObject);
        CollectionPremade       .PremadeExhibitionObjectVoid    (collectionGlobalObject);
        CollectionPremade       .PremadeVisitorObjectVoid       (10, collectionGlobalObject); /*Change the number to change the initial visitor when the application starts.*/
        
        addEventListener(Event.ENTER_FRAME, Update);

    }



    private function Update(event:Event){

        UpdateFastVoid();
        uiPopupAddMuseumObject.UpdateVoid();
        uiPopupRemoveMuseumObject.UpdateVoid();
        
    }



    /*These are set of functionc to update the whole object within the application.
    The slow speed means that the objects will updated using least common multiplier, which also means that object array that is smallest will get update more often.
    The normal speed means that the objects will updated using least common multiplier but not the visitor object. This means that the visitor object will get their own loop to iterate its array.
    The fast speed is to update all the object's array in each different loop.
    These methods means that the faster the loop progress the slower (heavier) the application will be runs in a computer/device.
    CAUTION: The loop counter is reset when the user change update function process.
    CAUTION: This means there will a be a stability error (null pointer, etc) when there is change in speed when the application running.
    CAUTION: I think for testing and debugging use the fastest update speed to achieve faster result.
    CAUTION: I also personally think that the UpdateSlowVoid() is the safest update speed due to everything is updated accordingly.
    PENDING: The solution is to continue where the loop counter stop before changing the update speed.*/
    private function UpdateSlowVoid(){

        /*Loop through all objects.*/
        var leastCommonMultipleFloat:Float = CollectionFunction.GenerateLeastCommonMultipleFloat(collectionGlobalObject.GetExhibitionObjectArray().length, collectionGlobalObject.GetFloorObjectArray().length);
        leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetRoomObjectArray().length);
        leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetVisitorObjectArray().length);
        var leastCommonMultipleInt:Int = Math.round(leastCommonMultipleFloat);
        if(loopCounterMainInt > leastCommonMultipleInt){ loopCounterMainInt = 0; }
        collectionGlobalObject.GetExhibitionObjectArray()[loopCounterMainInt%collectionGlobalObject.GetExhibitionObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetFloorObjectArray()[loopCounterMainInt%collectionGlobalObject.GetFloorObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetRoomObjectArray()[loopCounterMainInt%collectionGlobalObject.GetRoomObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetVisitorObjectArray()[loopCounterMainInt%collectionGlobalObject.GetVisitorObjectArray().length].AIAutoExhibitionChangeVoid();
        loopCounterMainInt ++;

    }



    private function UpdateNormalVoid(){

        /*Loop through all objects.*/
        var leastCommonMultipleFloat:Float = CollectionFunction.GenerateLeastCommonMultipleFloat(collectionGlobalObject.GetExhibitionObjectArray().length, collectionGlobalObject.GetFloorObjectArray().length);
        leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetRoomObjectArray().length);
        var leastCommonMultipleInt:Int = Math.round(leastCommonMultipleFloat);
        if(loopCounterMainInt > leastCommonMultipleInt){ loopCounterMainInt = 0; }
        collectionGlobalObject.GetExhibitionObjectArray()[loopCounterMainInt%collectionGlobalObject.GetExhibitionObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetFloorObjectArray()[loopCounterMainInt%collectionGlobalObject.GetFloorObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetRoomObjectArray()[loopCounterMainInt%collectionGlobalObject.GetRoomObjectArray().length].UpdateVoid();
        loopCounterMainInt ++;
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].AIAutoExhibitionChangeVoid();
            loopCounter1Int ++;
        }

    }



    private function UpdateFastVoid(){

        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetFloorObjectArray().length){ collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].UpdateVoid(); loopCounter1Int ++; }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){ collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].UpdateVoid(); loopCounter1Int ++; }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){ collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].UpdateVoid(); loopCounter1Int ++; }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){ collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].AIAutoExhibitionChangeVoid(); loopCounter1Int ++; }

    }



}