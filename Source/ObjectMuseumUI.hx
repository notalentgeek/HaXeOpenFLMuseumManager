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
class ObjectMuseumUI extends Sprite{
    var buttonObject:Button = new Button();
    var collectionGlobalObject:CollectionGlobal = null;
    var widthMaxInt:Int = -1;
    var widthInt:Int = -1;
    var heightInt:Int = 50;
    var indexLocalInt:Int = -1;
    var textString:String = "";
    var typeEnum:EnumMuseumType = null;
    var xInt:Int = -1;
    var yInt:Int = -1;
    public function new(
        _collectionGlobalObject:CollectionGlobal,
        _textString:String,
        _typeEnum:EnumMuseumType
    ){
        super();
        collectionGlobalObject = _collectionGlobalObject;
        textString = _textString;
        typeEnum = _typeEnum;
        buttonObject.autoSize = false;
    }
    public function GetButtonObject(){ return buttonObject; }
    public function Update(
        _indexLocalInt:Int,
        _object:ObjectMuseum,
        _widthMaxInt:Int
    ){
        widthMaxInt = _widthMaxInt;
        indexLocalInt = _indexLocalInt;
        if(typeEnum == FLR){
            /*PENDING: Change the (Lib.current.stage.stageWidth/4) to match the width of the side menu.
            PENDING: Change (collectionGlobalObject.GetFloorObjectArray().length) into the siblingObjectArray.length of the current object.*/
            widthInt = Math.round((widthMaxInt - Lib.current.stage.stageWidth/4)/collectionGlobalObject.GetFloorObjectArray().length);
            buttonObject.width = widthInt;
            buttonObject.height = heightInt;
            buttonObject.id = textString;
            buttonObject.text = textString;
            buttonObject.x = (buttonObject.width*indexLocalInt);
            buttonObject.y = 0;
            collectionGlobalObject.GetUIMuseumAbsoluteObject().addChild(buttonObject);
        }
        else if(typeEnum == EXH || typeEnum == ROM){
            /*PENDING: Please add width, height, x, y, id, text, and do not forget to add the button object into the child of absolute layout container.*/
            if(typeEnum == EXH){ widthInt = Math.round(_object.GetParentObject().GetMuseumUIObject().GetButtonObject().width/_object.GetSiblingObjectArray().length); }
            if(typeEnum == ROM){ widthInt = Math.round(_object.GetParentObject().GetMuseumUIObject().GetButtonObject().width/_object.GetSiblingObjectArray().length); }
            buttonObject.width = widthInt;
            buttonObject.height = heightInt;
            buttonObject.id = textString;
            buttonObject.text = textString;
            //buttonObject.x = 100;
            //buttonObject.y = 100;
            buttonObject.x = _object.GetParentObject().GetMuseumUIObject().GetButtonObject().x + (_object.GetIndexLocalInt()*buttonObject.width);
            buttonObject.y = _object.GetParentObject().GetMuseumUIObject().GetButtonObject().y + _object.GetParentObject().GetMuseumUIObject().GetButtonObject().height;
            trace(buttonObject.x + " " + buttonObject.y);
            collectionGlobalObject.GetUIMuseumAbsoluteObject().addChild(buttonObject);
        }
    }
}