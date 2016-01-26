import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import haxe.ui.toolkit.containers.Absolute;
import haxe.ui.toolkit.containers.Accordion;
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.events.UIEvent;
class CollectionGlobal{
    private var archiveExhibitionObject:ObjectMuseum = null;
    private var exhibitionFullThresholdInt:Int = 0;
    private var exhibitionObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>();
    private var floorObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>();
    private var indexGlobalVisitorInt:Int = 0;
    private var museumUIOffsetInt:Int = 5;
    private var roomObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>();
    private var selectedMuseumObject:ObjectMuseum = null; 
    private var selectedTagObject:ObjectTag = null;
    private var selectedVisitorObject:ObjectVisitor = null; 
    private var tagGeneralObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
    private var tagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
    private var uiMainObject:IDisplayObject = null;
    private var uiMuseumAbsoluteObject:Absolute = null;
    private var visitorObjectArray:Array<ObjectVisitor> = new Array<ObjectVisitor>();
    public function new(){
        archiveExhibitionObject = new ObjectMuseum(this, "EXH_ARC", "Exhibition Archive", "XXX_XXX", new Array<ObjectTag>(), EXH);
    }
    public function DetermineExhibitionFullThresholdVoid(){
        if(exhibitionObjectArray.length >= visitorObjectArray.length){ exhibitionFullThresholdInt = Math.ceil(exhibitionObjectArray.length/visitorObjectArray.length); }
        else if(exhibitionObjectArray.length < visitorObjectArray.length){ exhibitionFullThresholdInt = Math.ceil(visitorObjectArray.length/exhibitionObjectArray.length); }
    }
    public function GetUIMuseumAbsoluteObject(){ return uiMuseumAbsoluteObject; }
    public function GetArchiveExhibitionObject(){ return archiveExhibitionObject; }
    public function GetExhibitionFullThresholdInt(){ return exhibitionFullThresholdInt; }
    public function GetExhibitionObjectArray(){ return exhibitionObjectArray; }
    public function GetFloorObjectArray(){ return floorObjectArray; }
    public function GetIndexGlobalVisitorInt(){ return indexGlobalVisitorInt; }
    public function GetMuseumUIOffsetInt(){ return museumUIOffsetInt; }
    public function GetRoomObjectArray(){ return roomObjectArray; }
    public function GetSelectedMuseumObject(){ return selectedMuseumObject; }
    public function GetSelectedTagObject(){ return selectedTagObject; }
    public function GetSelectedVisitorObject(){ return selectedVisitorObject; }
    public function GetTagGeneralObjectArray(){ return tagGeneralObjectArray; }
    public function GetTagObjectArray(){ return tagObjectArray; }
    public function GetUIMainObject(){ return uiMainObject; }
    public function GetVisitorObjectArray(){ return visitorObjectArray; }
    public function PutIndexGlobalVisitorInt(){
        var tempIndexGlobalVisitorInt:Int = indexGlobalVisitorInt;
        indexGlobalVisitorInt ++;
        return tempIndexGlobalVisitorInt;
    }
    public function SetUIMuseumAbsoluteObjectVoid(_absoluteObject:Absolute){ uiMuseumAbsoluteObject = _absoluteObject; }
    public function SetUIMainObjectVoid(_iDisplayObject:IDisplayObject){ uiMainObject = _iDisplayObject; }
    public function SetExhibitionFullThresholdInt(_exhibitionFullThresholdInt:Int){ exhibitionFullThresholdInt = _exhibitionFullThresholdInt; }
    public function SetExhibitionObjectArrayVoid(_exhibitionObjectArray:Array<ObjectMuseum>){ exhibitionObjectArray = _exhibitionObjectArray; }
    public function SetFloorObjectArrayVoid(_floorObjectArray:Array<ObjectMuseum>){ floorObjectArray = _floorObjectArray; }
    public function SetRoomObjectArrayVoid(_roomObjectArray:Array<ObjectMuseum>){ roomObjectArray = _roomObjectArray; }
    public function SetSelectedMuseumObjectVoid(_selectedMuseumObject:ObjectMuseum){ selectedMuseumObject = _selectedMuseumObject; }
    public function SetSelectedTagObjectVoid(_selectedTagObject:ObjectTag){ selectedTagObject = _selectedTagObject; }
    public function SetSelectedVisitorObjectVoid(_selectedVisitorObject:ObjectVisitor){ selectedVisitorObject = _selectedVisitorObject; }
    public function SetTagObjectArrayVoid(_tagObjectArray:Array<ObjectTag>){ tagObjectArray = _tagObjectArray; }
    public function SetVisitorObjectArrayVoid(_visitorObjectArray:Array<ObjectVisitor>){ visitorObjectArray = _visitorObjectArray; }
}