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
    private var textString:String = "";
    private var xInt:Int = 0;
    private var yInt:Int = 0;
    public function new(_collectionGlobalObject:CollectionGlobal){
        super();
        collectionGlobalObject = _collectionGlobalObject;
        buttonObject.autoSize = false;
        collectionGlobalObject.GetUIMuseumAbsoluteObject().addChild(buttonObject);
    }
    public function GetButtonObject(){ return buttonObject; }
    public function UpdateVoid(_object:ObjectVisitor){
        widthInt = Math.round(_object.GetExhibitionCurrentObject().GetMuseumUIObject().GetButtonObject().width);
        buttonObject.width = widthInt;
        buttonObject.height = heightInt;
        buttonObject.id = _object.GetNameString();
        buttonObject.text = _object.GetNameString();
        buttonObject.x = _object.GetExhibitionCurrentObject().GetMuseumUIObject().GetButtonObject().x;
        buttonObject.y =
            _object.GetExhibitionCurrentObject().GetMuseumUIObject().GetButtonObject().y +
            _object.GetExhibitionCurrentObject().GetMuseumUIObject().GetButtonObject().height +
            (_object.GetVisitorUIObject().GetButtonObject().height*_object.GetIndexLocalInt()) +
            5 +
            (_object.GetIndexLocalInt()*5);
    }
}