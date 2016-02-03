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
    var widthInt:Int = -1;
    var heightInt:Int = 43;
    var textString:String = "";
    var typeEnum:EnumMuseumType = null;
    var xInt:Int = -1;
    var yInt:Int = -1;
    public function new(
        _collectionGlobalObject:CollectionGlobal,
        _typeEnum:EnumMuseumType
    ){
        super();
        collectionGlobalObject = _collectionGlobalObject;
        typeEnum = _typeEnum;
        buttonObject.autoSize = false;
    }
    public function GetButtonObject(){ return buttonObject; }
    public function UpdateVoid(
        _object:ObjectMuseum,
        _widthMaxInt:Int
    ){
        if(typeEnum == FLR){
            widthInt = Math.round(((_widthMaxInt - Lib.current.stage.stageWidth/4) - 5)/2);
            buttonObject.width = widthInt;
            buttonObject.height = heightInt;
            buttonObject.id = "Button*" + _object.GetNameStruct().nameAltString;
            buttonObject.text = _object.GetNameStruct().nameFullString;
            buttonObject.x = (buttonObject.width*_object.GetIndexLocalInt()) + (_object.GetIndexLocalInt()*5);
            buttonObject.y = 0;
            collectionGlobalObject.GetUIMuseumAbsoluteObject().addChild(buttonObject);
        }
        else if(typeEnum == EXH || typeEnum == ROM){
            widthInt = Math.round(((_object.GetParentObject().GetMuseumUIObject().GetButtonObject().width) - ((_object.GetSiblingObjectArray().length - 1)*5))/_object.GetSiblingObjectArray().length);
            buttonObject.width = widthInt;
            buttonObject.height = heightInt;
            buttonObject.id = "Button*" + _object.GetNameStruct().nameAltString;
            buttonObject.text = _object.GetNameStruct().nameFullString;
            buttonObject.x = _object.GetParentObject().GetMuseumUIObject().GetButtonObject().x + (_object.GetIndexLocalInt()*buttonObject.width) + (_object.GetIndexLocalInt()*5);
            buttonObject.y =
                _object.GetParentObject().GetMuseumUIObject().GetButtonObject().y +
                _object.GetParentObject().GetMuseumUIObject().GetButtonObject().height + 
                5;
            collectionGlobalObject.GetUIMuseumAbsoluteObject().addChild(buttonObject);
        }
    }
}