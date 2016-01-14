import CollectionEnum;
import CollectionStruct;
import CollectionFunction;
class ObjectMuseum{
    private var childStruct:StructChild = { childMuseumObjectArray:new Array<ObjectMuseum>(), childVisitorObjectArray:new Array<ObjectVisitor>() };
    private var collectionGlobalObject:CollectionGlobal = null;
    private var explanationStringArray:Array<String> = new Array<String>();
    private var fullBool:Bool = false;
    private var indexGlobalInt:Int = -1;
    private var indexLocalInt:Int = -1;
    private var museumModeEnum:EnumMuseumMode = null;
    private var museumUIObject:ObjectMuseumUI = null;
    private var nameStruct:StructName = { nameAltString:"", nameFullString:"" };
    private var parentObject:ObjectMuseum = null;
    private var siblingObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>(); /*For floor, the sibling object will be the global variable of collectionGlobalObject.GetFloorObjectArray().*/
    private var tagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
    private var typeEnum:EnumMuseumType = null;
    private var visitorCurrentInt:Int = 0;
    private var visitorTotalInt:Int = 0;
    public function new(
        _collectionGlobalObject:CollectionGlobal,
        _nameAltString:String,
        _nameFullString:String,
        _parentNameAltString:String,
        _tagObjectArray:Array<ObjectTag>,
        _typeEnum:EnumMuseumType
    ){
        collectionGlobalObject = _collectionGlobalObject;
        nameStruct.nameAltString = _nameAltString;
        nameStruct.nameFullString = _nameFullString;
        typeEnum = _typeEnum;
        ChangeParentVoid(_parentNameAltString);
        tagObjectArray = _tagObjectArray;
        if(nameStruct.nameAltString != "EXH_ARC"){ AddThisToArray(_typeEnum); }

        /*Create the UI.*/
        /*
        museumUIObject = new ObjectMuseumUI(
            200,
            200,
        );
        */
    }
    private function AddChildVisitorVoid(_visitorObject:ObjectVisitor){ childStruct.childVisitorObjectArray.push(_visitorObject); }
    private function AddTagVoid(_tagObject:ObjectTag){ tagObjectArray.push(_tagObject); }
    private function AddThisToArray(_typeEnum:EnumMuseumType){
        if(_typeEnum == EXH){ collectionGlobalObject.GetExhibitionObjectArray().push(this); }
        else if(_typeEnum == FLR){ collectionGlobalObject.GetFloorObjectArray().push(this); }
        else if(_typeEnum == ROM){ collectionGlobalObject.GetRoomObjectArray().push(this); }
    }
    private function ChangeParentVoid(_parentNameAltString:String){
        /*Remove this object from current parent object child object array.*/
        if(parentObject != null){ parentObject.GetChildStruct().childMuseumObjectArray.remove(this); }
        if(typeEnum == EXH && nameStruct.nameAltString != "EXH_ARC"){ parentObject = (CollectionFunction.FindMuseumObject(collectionGlobalObject, ROM, _parentNameAltString)); }
        else if(typeEnum == FLR){ parentObject = null; }
        else if(typeEnum == ROM){ parentObject = (CollectionFunction.FindMuseumObject(collectionGlobalObject, FLR, _parentNameAltString)); }
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetFloorObjectArray().length){
            //trace("2 " + nameStruct.nameAltString);
            if(nameStruct.nameAltString != collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetNameStruct().nameAltString){
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].DetermineSiblingVoid();
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].DetermineIndexVoid();
            }
            loopCounter1Int ++;
        }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
            //trace("3 " + nameStruct.nameAltString);
            if(nameStruct.nameAltString != collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetNameStruct().nameAltString){
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetParentObject().DetermineChildVoid();
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].DetermineSiblingVoid();
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].DetermineIndexVoid();
            }
            loopCounter1Int ++;
        }
        loopCounter1Int = 0;
        if(nameStruct.nameAltString != "EXH_ARC"){
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                //trace("1 " + nameStruct.nameAltString);
                //trace(collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetNameStruct().nameAltString);
                if(nameStruct.nameAltString != collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetNameStruct().nameAltString){
                    //trace(loopCounter1Int + " " + collectionGlobalObject.GetExhibitionObjectArray().length);
                    collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetParentObject().DetermineChildVoid();
                    collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].DetermineSiblingVoid();
                    collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].DetermineIndexVoid();
                }
                loopCounter1Int ++;
            }
        }
    }
    private function RemoveTagByNameAltVoid(_nameString:String){ tagObjectArray.remove(CollectionFunction.FindTagObject(collectionGlobalObject, _nameString)); }
    private function RemoveTagByObjectVoid(_tagObject:ObjectTag){ tagObjectArray.remove(_tagObject); }
    private function ResetVoid(){
        fullBool = false;
        visitorCurrentInt = 0;
        visitorTotalInt = 0;
    }
    public function DetermineChildVoid(){
        CollectionFunction.ClearArray(childStruct.childMuseumObjectArray);
        CollectionFunction.ClearArray(childStruct.childVisitorObjectArray);
        if(typeEnum == EXH){
            var loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                if(nameStruct.nameAltString == collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetExhibitionCurrentObject().GetNameStruct().nameAltString){
                    childStruct.childVisitorObjectArray.push(  collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int]);
                }
                loopCounter1Int ++;
            }
        }
        else if(typeEnum == FLR){
            var loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
                if(nameStruct.nameAltString == collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                    childStruct.childMuseumObjectArray.push(  collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int]);
                }
                loopCounter1Int ++;
            }
        }
        else if(typeEnum == ROM){
            var loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                if(nameStruct.nameAltString == collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                    childStruct.childMuseumObjectArray.push(  collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int]);
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
        //trace(indexGlobalInt + " " + indexLocalInt);
    }
    public function DetermineIndexGlobalVoid(){
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
    public function DetermineIndexLocalVoid(){
        var foundIndexLocalBool:Bool = false;
        if(typeEnum == FLR){ indexLocalInt = indexGlobalInt; }
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
    public function GetMuseumModeEnum(){ return museumModeEnum; }
    public function GetNameStruct(){ return nameStruct; }
    public function GetParentObject(){ return parentObject; }
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
    public function SetVisitorCurrentIntVoid(_visitorCurrentInt:Int){ visitorCurrentInt = _visitorCurrentInt; }
    public function SetVisitorTotalIntVoid(_visitorTotalInt:Int){ visitorTotalInt = _visitorTotalInt; }
    /*Update function is mainly to update all museum object in real time.*/
    public function Update(){
        if(museumModeEnum == MRK_DEL)                               {
            /*So here the museum object is already tagged to be deleted.
            I need to do another checking whether the object has any children or not.*/
            if(typeEnum == EXH){
                if(childStruct.childVisitorObjectArray.length != 0){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                        if(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetFinishedBool() == true){
                            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].ChangeExhibitionCurrentVoid(collectionGlobalObject.GetArchiveExhibitionObject());
                        }
                        loopCounter1Int ++;
                    }
                }
                else if(childStruct.childMuseumObjectArray.length == 0){ collectionGlobalObject.GetExhibitionObjectArray().remove(this); }
            }
            else if(typeEnum == FLR){
                if(childStruct.childMuseumObjectArray.length != 0){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
                        if(nameStruct.nameAltString == collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                            collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].SetMuseumModeEnumVoid(REQ_CH_PARENT);
                        }
                        loopCounter1Int ++;
                    }
                }
                else if(childStruct.childMuseumObjectArray.length == 0){ collectionGlobalObject.GetExhibitionObjectArray().remove(this); }
            }
            else if(typeEnum == ROM){
                if(childStruct.childMuseumObjectArray.length != 0){
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                        if(nameStruct.nameAltString == collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                            collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].SetMuseumModeEnumVoid(REQ_CH_PARENT);
                        }
                        loopCounter1Int ++;
                    }
                }
                else if(childStruct.childMuseumObjectArray.length == 0){ collectionGlobalObject.GetExhibitionObjectArray().remove(this); }
            }
        }
    }
}