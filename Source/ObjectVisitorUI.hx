import CollectionEnum;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import haxe.ui.toolkit.containers.Absolute;
import haxe.ui.toolkit.containers.Accordion;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.events.UIEvent;
class ObjectVisitorUI extends Sprite{
    private var buttonObject:Button = new Button();
    private var collectionGlobalObject:CollectionGlobal = null;
    private var widthInt:Int = -1;
    private var heightInt:Int = 43;
    private var indexLocalInt:Int = -1;
    private var visitorObject:ObjectVisitor = null;
    private var textString:String = "";
    private var xInt:Int = 0;
    private var yInt:Int = 0;
    public function new(
        _collectionGlobalObject:CollectionGlobal,
        _visitorObject:ObjectVisitor
    ){
        super();
        collectionGlobalObject = _collectionGlobalObject;
        visitorObject = _visitorObject;
        buttonObject.autoSize = false;
        buttonObject.id = "Button*" + visitorObject.GetNameString();
        collectionGlobalObject.GetUIMuseumAbsoluteObject().addChild(buttonObject);
    }
    public function GetButtonObject(){ return buttonObject; }
    public function UpdateVoid(){
        if(visitorObject.GetExhibitionCurrentObject() != null){
            widthInt = Math.round(visitorObject.GetExhibitionCurrentObject().GetMuseumUIObject().GetButtonObject().width);
            buttonObject.width = widthInt;
            buttonObject.height = heightInt;
            buttonObject.text = visitorObject.GetNameString();
            buttonObject.x = visitorObject.GetExhibitionCurrentObject().GetMuseumUIObject().GetButtonObject().x;
            buttonObject.y =
                visitorObject.GetExhibitionCurrentObject().GetMuseumUIObject().GetButtonObject().y +
                visitorObject.GetExhibitionCurrentObject().GetMuseumUIObject().GetButtonObject().height +
                (visitorObject.GetVisitorUIObject().GetButtonObject().height*visitorObject.GetIndexLocalInt()) +
                5 +
                (visitorObject.GetIndexLocalInt()*5);
        }
    }
}