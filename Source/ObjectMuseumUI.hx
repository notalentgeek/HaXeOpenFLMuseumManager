import CollectionEnum;
import flash.display.Sprite;
import flash.events.Event;
import haxe.ui.toolkit.containers.Accordion;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.events.UIEvent;
class ObjectMuseumUI extends Sprite{
    var buttonObject:Button = new Button();
    var widthInt:Int = -1;
    var heightInt:Int = -1;
    var indexGlobalInt:Int = -1;
    var indexLocalInt:Int = -1;
    var typeEnum:EnumMuseumType = null;
    var xInt:Int = -1;
    var yInt:Int = -1;
    public function new(
        _widthInt:Int,
        _heightInt:Int,
        _indexGlobalInt:Int,
        _indexLocalInt:Int,
        _typeEnum:EnumMuseumType,
        _xInt:Int,
        _yInt:Int
    ){
        super();
        widthInt = _widthInt;
        heightInt = _heightInt;
        indexLocalInt = _indexLocalInt;
        typeEnum = _typeEnum;
        xInt = _xInt;
        yInt = _yInt;
        if(_typeEnum == FLR){

        }
    }
}