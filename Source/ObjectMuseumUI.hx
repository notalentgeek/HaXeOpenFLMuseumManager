import CollectionEnum;
import flash.display.Sprite;
import flash.events.Event;
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
    }
    public function Update(
        _widthMaxInt:Int,
        _indexLocalInt:Int
    ){
        widthMaxInt = _widthMaxInt;
        indexLocalInt = _indexLocalInt;
        if(typeEnum == FLR){
            widthInt = Math.round(widthMaxInt/collectionGlobalObject.GetFloorObjectArray().length);
            buttonObject.autoSize = false;
            buttonObject.width = widthInt;
            buttonObject.height = heightInt;
            buttonObject.id = textString;
            buttonObject.text = textString;
            buttonObject.x = 0 + (buttonObject.width*indexLocalInt);
            buttonObject.y = 0;
            collectionGlobalObject.GetUIMuseumAbsoluteObject().addChild(buttonObject);
        }
    }
}