import CollectionEnum;
import CollectionStruct;
import CollectionFunction;
import flash.Lib;
class ObjectMuseum{



    /*A struct that contains two arrays.
    For example the floor and room will have another ObjectMuseum as their children.
    While, exhibition will have ObjectVisitor as their children.*/
    private var childStruct                 :StructChild                            = {
        childMuseumObjectArray              :new Array          <ObjectMuseum>      (),
        childVisitorObjectArray             :new Array          <ObjectVisitor>     ()
    };
    /*An object that have all important global variables.
    PENDING: I might change this into fully static object in the future.*/
    private var collectionGlobalObject      :CollectionGlobal                       = null;
    private var explanationStringArray      :Array              <String>            = new Array<String>();                          /*Explanation that this object has that will be "recorded" into ObjectVisitor.*/
    private var fullBool                    :Bool                                   = false;                                        /*Whether or not this object is full of visitor or not.*/
    private var indexGlobalInt              :Int                                    = -1;                                           /*The position index of this object in the CollectionGlobal class variable.*/
    private var indexLocalInt               :Int                                    = -1;                                           /*The position index of this object in its parent object compared to other similat object.*/
    private var museumModeEnum              :EnumMuseumMode                         = null;                                         /*PENDING: The current state of the museum.*/
    private var museumUIObject              :ObjectMuseumUI                         = null;                                         /*The museum UI object.*/
    /*Struct that contain the name of the museum.
    For coding I use the nameAltString because it is shorter than the nameFullString.
    For display like UI or somthing, I use the nameFullString because it shows the necessary information to the user.*/
    private var nameStruct                  :StructName                             = { nameAltString:"", nameFullString:"" };
    /*The parent object of this object.
    For example exihibition object will have floor as its parent.*/
    private var parentObject                :ObjectMuseum                           = null;
    private var siblingObjectArray          :Array              <ObjectMuseum>      = new Array<ObjectMuseum>();                    /*For floor, the sibling object will be the global variable of collectionGlobalObject.GetFloorObjectArray().*/
    private var tagObjectArray              :Array              <ObjectTag>         = new Array<ObjectTag>();                       /*All of object tags that this object has.*/
    private var typeEnum                    :EnumMuseumType                         = null;                                         /*Type of this museum object, whether it is exhibition, floor, or room.*/
    private var visitorCurrentInt           :Int                                    = 0;
    private var visitorTotalInt             :Int                                    = 0;



    public function new(
        _collectionGlobalObject:CollectionGlobal,
        _nameAltString:String,
        _nameFullString:String,
        _parentNameString:String,
        _tagObjectArray:Array<ObjectTag>,
        _typeEnum:EnumMuseumType
    ){
        collectionGlobalObject = _collectionGlobalObject;
        nameStruct.nameAltString = _nameAltString;
        nameStruct.nameFullString = _nameFullString;
        typeEnum = _typeEnum;
        tagObjectArray = _tagObjectArray;
        if(nameStruct.nameAltString != "EXH_ARC"){ AddThisToArray(_typeEnum); }
        /*Create the UI.*/
        museumUIObject = new ObjectMuseumUI(
            collectionGlobalObject,
            typeEnum
        );
        ChangeParentObject(_parentNameString);
        collectionGlobalObject.DetermineExhibitionFullThresholdVoid();

        /*Dummy explanation.*/
        explanationStringArray.push("Explanation 1.");
        explanationStringArray.push("Explanation 2.");
        explanationStringArray.push("Explanation 3.");
        explanationStringArray.push("Explanation 4.");
    }
    private function AddChildVisitorVoid(_visitorObject:ObjectVisitor){ childStruct.childVisitorObjectArray.push(_visitorObject); }
    private function AddTagVoid(_tagObject:ObjectTag){ tagObjectArray.push(_tagObject); }
    private function AddThisToArray(_typeEnum:EnumMuseumType){
        if(_typeEnum == EXH){ collectionGlobalObject.GetExhibitionObjectArray().push(this); }
        else if(_typeEnum == FLR){ collectionGlobalObject.GetFloorObjectArray().push(this); }
        else if(_typeEnum == ROM){ collectionGlobalObject.GetRoomObjectArray().push(this); }
    }
    private function DetermineIndexGlobalVoid(){
        var foundIndexGlobalBool:Bool = false;
        var tempObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>();
        if (typeEnum == EXH){ tempObjectArray = collectionGlobalObject.GetExhibitionObjectArray(); }
        else if (typeEnum == FLR){ tempObjectArray = collectionGlobalObject.GetFloorObjectArray(); }
        else if (typeEnum == ROM){ tempObjectArray = collectionGlobalObject.GetRoomObjectArray(); }
        var loopCounter1Int = 0;
        while(loopCounter1Int < tempObjectArray.length){
            if(nameStruct.nameAltString == tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString){
                foundIndexGlobalBool = true;
                indexGlobalInt = loopCounter1Int;
                break;
            }
            loopCounter1Int ++;
        }
        if(foundIndexGlobalBool == false){ indexGlobalInt = -1; }
    }
    private function DetermineIndexLocalVoid(){
        var foundIndexLocalBool:Bool = false;
        if(typeEnum == FLR){
            foundIndexLocalBool = true;
            indexLocalInt = indexGlobalInt;
        }
        else if(typeEnum != FLR){
            var loopCounter1Int = 0;
            while(loopCounter1Int < siblingObjectArray.length){
                if(nameStruct.nameAltString == siblingObjectArray[loopCounter1Int].GetNameStruct().nameAltString){
                    foundIndexLocalBool = true;
                    indexLocalInt = loopCounter1Int;
                    break;
                }
                loopCounter1Int ++;
            }
        }
        if(foundIndexLocalBool == false){ indexLocalInt = -1; }
    }
    private function ResetVoid(){
        fullBool = false;
        visitorCurrentInt = 0;
        visitorTotalInt = 0;
    }
    private  function UpdateHeavyVoid(){
        var loopCounter1Int:Int = 0;
        var necessaryWidthInt:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetFloorObjectArray().length){
            collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].DetermineSiblingVoid();
            collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].DetermineIndexVoid();
            collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().UpdateVoid(
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int],
                Lib.current.stage.stageWidth
            );
            if(necessaryWidthInt < Math.round(collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().x + collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().width)){
                necessaryWidthInt = Math.round(collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().x + collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().width);
            }
            loopCounter1Int ++;
        }
        if(nameStruct.nameAltString != "EXH_ARC"){ collectionGlobalObject.GetUIMuseumAbsoluteObject().width = necessaryWidthInt; }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
            collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetParentObject().DetermineChildVoid();
            collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].DetermineSiblingVoid();
            collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].DetermineIndexVoid();
            collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().UpdateVoid(
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int],
                Lib.current.stage.stageWidth
            );
            loopCounter1Int ++;
        }
        loopCounter1Int = 0;
        if(nameStruct.nameAltString != "EXH_ARC"){
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetParentObject().DetermineChildVoid();
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].DetermineSiblingVoid();
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].DetermineIndexVoid();
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().UpdateVoid(
                    collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int],
                    Lib.current.stage.stageWidth
                );
                loopCounter1Int ++;
            }
        }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].DetermineIndexLocalVoid();
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GenerateExhibitionTargetVoid(loopCounter1Int);
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().UpdateVoid();
            loopCounter1Int ++;
        }
    }
    public function ChangeParentObject(_parentNameString:String){
        /*Remove this object from current parent object child object array.*/
        if(parentObject != null){ parentObject.GetChildStruct().childMuseumObjectArray.remove(this); }
        if(typeEnum == EXH && nameStruct.nameAltString != "EXH_ARC"){ parentObject = (CollectionFunction.FindMuseumObject(collectionGlobalObject, ROM, _parentNameString)); }
        else if(typeEnum == FLR){ parentObject = null; }
        else if(typeEnum == ROM){ parentObject = (CollectionFunction.FindMuseumObject(collectionGlobalObject, FLR, _parentNameString)); }
        UpdateHeavyVoid();
        return parentObject;
    }
    public function DetermineChildVoid(){
        CollectionFunction.ClearArray(childStruct.childMuseumObjectArray);
        CollectionFunction.ClearArray(childStruct.childVisitorObjectArray);
        if(typeEnum == EXH){
            var loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                if(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetExhibitionCurrentObject() != null){
                    if(nameStruct.nameAltString == collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetExhibitionCurrentObject().GetNameStruct().nameAltString){
                        childStruct.childVisitorObjectArray.push(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int]);
                    }
                }
                loopCounter1Int ++;
            }
        }
        else if(typeEnum == FLR){
            var loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
                if(nameStruct.nameAltString == collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                    childStruct.childMuseumObjectArray.push(collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int]);
                }
                loopCounter1Int ++;
            }
        }
        else if(typeEnum == ROM){
            var loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                if(nameStruct.nameAltString == collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                    childStruct.childMuseumObjectArray.push(collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int]);
                }
                loopCounter1Int ++;
            }
        }
    }
    public function DetermineFullVoid(){
        if(visitorCurrentInt >= collectionGlobalObject.GetExhibitionFullThresholdInt()){ fullBool = true ; }
        else if(visitorCurrentInt < collectionGlobalObject.GetExhibitionFullThresholdInt()){ fullBool = false; }
    }
    public function DetermineIndexVoid(){
        DetermineIndexGlobalVoid();
        DetermineIndexLocalVoid();
    }
    public function DetermineSiblingVoid(){
        CollectionFunction.ClearArray(siblingObjectArray);
        var tempObjectArray:Array<ObjectMuseum> =  new Array<ObjectMuseum>();
        if (typeEnum == EXH){ tempObjectArray = collectionGlobalObject.GetExhibitionObjectArray(); }
        else if (typeEnum == ROM){ tempObjectArray = collectionGlobalObject.GetRoomObjectArray(); }
        var loopCounter1Int = 0;
        if(typeEnum != FLR){
            while(loopCounter1Int < tempObjectArray.length){
                if(parentObject.GetNameStruct().nameAltString == tempObjectArray[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                    siblingObjectArray.push(tempObjectArray[loopCounter1Int]);
                }
                loopCounter1Int ++;
            }
        }
    }
    public function GetChildStruct(){ return childStruct; }
    public function GetExplanationStringArray(){ return explanationStringArray; }
    public function GetFullBool(){ return fullBool; }
    public function GetIndexGlobalInt(){ return indexGlobalInt; }
    public function GetIndexLocalInt(){ return indexLocalInt; }
    public function GetMuseumUIObject(){ return museumUIObject; }
    public function GetMuseumModeEnum(){ return museumModeEnum; }
    public function GetNameStruct(){ return nameStruct; }
    public function GetParentObject(){ return parentObject; }
    public function GetSiblingObjectArray(){ return siblingObjectArray; }
    public function GetTagObjectArray(){ return tagObjectArray; }
    public function GetTypeEnum(){ return typeEnum; }
    public function GetVisitorCurrentInt(){ return visitorCurrentInt; }
    public function GetVisitorTotalInt(){ return visitorTotalInt; }
    public function Reset(){
            fullBool = false;
            museumModeEnum = null;
            visitorCurrentInt = 0;
            visitorTotalInt = 0;
    }
    public function SetNameAltStringVoid(_nameAltString:String){ nameStruct.nameAltString = _nameAltString; }
    public function SetNameFullStringVoid(_nameFullString:String){ nameStruct.nameFullString = _nameFullString; }
    public function SetMuseumModeEnumVoid(_museumModeEnum:EnumMuseumMode){ museumModeEnum = _museumModeEnum; }
    public function SetParentObjectVoid(_parentObject:ObjectMuseum){ parentObject = _parentObject; }
    public function SetTagObjectArrayVoid(_tagObjectArray:Array<ObjectTag>){
        CollectionFunction.ClearArray(tagObjectArray);
        tagObjectArray = _tagObjectArray;
    }
    public function SetVisitorCurrentIntVoid(_visitorCurrentInt:Int){ visitorCurrentInt = _visitorCurrentInt; }
    public function SetVisitorTotalIntVoid(_visitorTotalInt:Int){ visitorTotalInt = _visitorTotalInt; }
    /*Update function is mainly to update all museum object in real time.*/
    public function UpdateVoid(){
        if(museumModeEnum == MRK_DEL){
            /*So here the museum object is already tagged to be deleted.
            I need to do another checking whether the object has any children or not.*/
            if(typeEnum == EXH){
                if(childStruct.childVisitorObjectArray.length != 0){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < childStruct.childVisitorObjectArray.length){
                        if(childStruct.childVisitorObjectArray[loopCounter1Int].GetFinishedBool() == true){
                            childStruct.childVisitorObjectArray[loopCounter1Int].ChangeExhibitionCurrentVoid(collectionGlobalObject.GetArchiveExhibitionObject());
                            UpdateHeavyVoid();
                        }
                        loopCounter1Int ++;
                    }
                }
                else if(childStruct.childMuseumObjectArray.length == 0){
                    collectionGlobalObject.GetUIMuseumAbsoluteObject().removeChild(museumUIObject.GetButtonObject());
                    collectionGlobalObject.GetExhibitionObjectArray().remove(this);
                    museumUIObject = null;
                    UpdateHeavyVoid();
                }
            }
            else if(typeEnum == FLR){
                if(childStruct.childMuseumObjectArray.length != 0){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
                        if(nameStruct.nameAltString == collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                            collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].SetMuseumModeEnumVoid(REQ_CH_PARENT);
                            UpdateHeavyVoid();
                        }
                        loopCounter1Int ++;
                    }
                }
                else if(childStruct.childMuseumObjectArray.length == 0){
                    collectionGlobalObject.GetUIMuseumAbsoluteObject().removeChild(museumUIObject.GetButtonObject());
                    collectionGlobalObject.GetFloorObjectArray().remove(this);
                    museumUIObject = null;
                    UpdateHeavyVoid();
                }
            }
            else if(typeEnum == ROM){
                if(childStruct.childMuseumObjectArray.length != 0){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                        if(nameStruct.nameAltString == collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                            collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].SetMuseumModeEnumVoid(REQ_CH_PARENT);
                            UpdateHeavyVoid();
                        }
                        loopCounter1Int ++;
                    }
                }
                else if(childStruct.childMuseumObjectArray.length == 0){
                    collectionGlobalObject.GetUIMuseumAbsoluteObject().removeChild(museumUIObject.GetButtonObject());
                    collectionGlobalObject.GetRoomObjectArray().remove(this);
                    museumUIObject = null;
                    UpdateHeavyVoid();
                }
            }
        }
    }
}