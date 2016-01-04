import      CollectionEnum      ;
import      CollectionStruct    ;
import      CollectionFunction  ;
class       ObjectMuseum                                            {
    private var childStruct                 :StructChild            = { childMuseumObjectArray:new Array<ObjectMuseum>(), childVisitorObjectArray:new Array<ObjectVisitor>() };
    private var collectionGlobalObject      :CollectionGlobal       = null;
    private var explanationStringArray      :Array<String>          = new Array<String>();
    private var fullBool                    :Bool                   = false;
    private var indexGlobalInt              :Int                    = -1;
    private var indexLocalInt               :Int                    = -1;
    private var nameStruct                  :StructName             = { nameAltString:"", nameFullString:"" };
    private var parentObject                :ObjectMuseum           = null;
    private var siblingObjectArray          :Array<ObjectMuseum>    = new Array<ObjectMuseum>();
    private var tagObjectArray              :Array<ObjectTag>       = new Array<ObjectTag>();
    private var typeEnum                    :EnumMuseumType         = null;
    private var visitorCurrentInt           :Int                    = 0;
    private var visitorTotalInt             :Int                    = 0;
    public      function new                                        (
        _collectionGlobalObject             :CollectionGlobal,
        _nameAltString                      :String,
        _nameFullString                     :String,
        _parentNameAltString                :String,
        _typeEnum                           :EnumMuseumType
    ){
        collectionGlobalObject                                      =  _collectionGlobalObject;
        nameStruct.nameAltString                                    =  _nameAltString;
        nameStruct.nameFullString                                   =  _nameFullString;
        typeEnum                                                    =  _typeEnum;
        ChangeParentVoid                                            (  _parentNameAltString);
        AddThisToArray                                              (_typeEnum);

    }
    private     function AddChildVisitorVoid                        (_visitorObject     :ObjectVisitor  ){ childStruct.childVisitorObjectArray.push(_visitorObject); }
    private     function AddTagVoid                                 (_tagObject         :ObjectTag      ){ tagObjectArray.push(_tagObject); }
    private     function AddThisToArray                             (_typeEnum:EnumMuseumType){
             if(_typeEnum == EXH){ collectionGlobalObject.GetExhibitionObjectArray().push(this); }
        else if(_typeEnum == FLR){ collectionGlobalObject.GetFloorObjectArray()     .push(this); }
        else if(_typeEnum == ROM){ collectionGlobalObject.GetRoomObjectArray()      .push(this); }
    }
    private     function ChangeParentVoid                           (_parentNameAltString:String){
             if(parentObject    != null)                            { parentObject  .GetChildStruct().childMuseumObjectArray.remove(this); }
             if(typeEnum        == EXH )                            { parentObject  = (CollectionFunction.FindMuseumObject(collectionGlobalObject, ROM, _parentNameAltString)); } /*PENDING: Please add verification whether the program capable of finding the parent object or not.*/
        else if(typeEnum        == ROM )                            { parentObject  = (CollectionFunction.FindMuseumObject(collectionGlobalObject, FLR, _parentNameAltString)); } /*PENDING: Please add verification whether the program capable of finding the parent object or not.*/
        else                                                        { parentObject  = null; }
             if(parentObject    != null)                            {
            parentObject.DetermineChildVoid                         ();
                         DetermineSiblingVoid                       ();
        }
    }
    private     function DetermineFullVoid                          (){
             if(visitorCurrentInt >= collectionGlobalObject.GetExhibitionFullThresholdInt()){ fullBool = true ; }
        else if(visitorCurrentInt <  collectionGlobalObject.GetExhibitionFullThresholdInt()){ fullBool = false; }
    }
    private     function DetermineIndexVoid                         (){
        DetermineIndexGlobalVoid                                    ();
        DetermineIndexLocalVoid                                     ();
    }
    private     function DetermineIndexGlobalVoid                   (){
            var tempObjectArray             :Array<ObjectMuseum>    =  new Array<ObjectMuseum>();
             if (typeEnum == EXH){          tempObjectArray         =  collectionGlobalObject.GetExhibitionObjectArray   (); }
        else if (typeEnum == FLR){          tempObjectArray         =  collectionGlobalObject.GetFloorObjectArray        (); }
        else if (typeEnum == ROM){          tempObjectArray         =  collectionGlobalObject.GetRoomObjectArray         (); }
        var   loopCounter1Int                                       = 0;
        while(loopCounter1Int < tempObjectArray.length)             {
            if(nameStruct.nameAltString                             == tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString){
                indexGlobalInt                                      =  loopCounter1Int;
                break;
            }
            loopCounter1Int                                         ++;
        }
        indexGlobalInt                                              =  -1;
    }
    private     function DetermineIndexLocalVoid                    (){
             if(typeEnum == FLR){ indexLocalInt                     =  indexGlobalInt; }
        else if(typeEnum != FLR){
            var   loopCounter1Int                                   = 0;
            while(loopCounter1Int < siblingObjectArray.length)      {
                if(nameStruct.nameAltString                         == siblingObjectArray[loopCounter1Int].GetNameStruct().nameAltString){
                    indexLocalInt                                   =  loopCounter1Int;
                    break;
                }
                loopCounter1Int                                     ++;
            }
        }
        indexLocalInt                                               = -1;
    }
    private     function DetermineSiblingVoid                       (){
            var tempObjectArray             :Array<ObjectMuseum>    =  new Array<ObjectMuseum>();
             if (typeEnum == EXH){          tempObjectArray         =  collectionGlobalObject.GetExhibitionObjectArray   (); }
        else if (typeEnum == FLR){          tempObjectArray         =  collectionGlobalObject.GetFloorObjectArray        (); }
        else if (typeEnum == ROM){          tempObjectArray         =  collectionGlobalObject.GetRoomObjectArray         (); }
        var loopCounter1Int                                         = 0;
        while(loopCounter1Int < tempObjectArray.length)             {
            if(parentObject.GetNameStruct().nameAltString           == tempObjectArray[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                siblingObjectArray.push                             (  tempObjectArray[loopCounter1Int]);
            }
            loopCounter1Int                                         ++;
        }
    }
    private     function RemoveTagByNameAltVoid                     (_nameAltString     :String         ){ tagObjectArray.remove(CollectionFunction.FindTagObject(collectionGlobalObject, _nameAltString)); }
    private     function RemoveTagByObjectVoid                      (_tagObject         :ObjectTag      ){ tagObjectArray.remove(_tagObject); }
    private     function ResetVoid                                  (){
        fullBool                                                    =  false;
        visitorCurrentInt                                           =  0;
        visitorTotalInt                                             =  0;
    }
    public      function DetermineChildVoid                         (){
        CollectionFunction.ClearArray                               (childStruct.childMuseumObjectArray);
        CollectionFunction.ClearArray                               (childStruct.childVisitorObjectArray);
             if(typeEnum == EXH){
            var   loopCounter1Int                                   = 0;
            while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                if(nameStruct.nameAltString                         == collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetExhibitionCurrentObject().GetNameStruct().nameAltString){
                    childStruct.childVisitorObjectArray.push        (  collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int]);
                }
                loopCounter1Int                                     ++;
            }
        }
        else if(typeEnum == FLR){
            var   loopCounter1Int                                   = 0;
            while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
                if(nameStruct.nameAltString                         == collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                    childStruct.childMuseumObjectArray.push         (  collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int]);
                }
                loopCounter1Int                                     ++;
            }
        }
        else if(typeEnum == ROM){
            var   loopCounter1Int                                   = 0;
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                if(nameStruct.nameAltString                         == collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetParentObject().GetNameStruct().nameAltString){
                    childStruct.childMuseumObjectArray.push         (  collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int]);
                }
                loopCounter1Int                                     ++;
            }
        }
    }
    public      function GetChildStruct                             ()                          { return childStruct                ; }
    public      function GetExplanationStringArray                  ()                          { return explanationStringArray     ; }
    public      function GetFullBool                                ()                          { return fullBool                   ; }
    public      function GetNameStruct                              ()                          { return nameStruct                 ; }
    public      function GetParentObject                            ()                          { return parentObject               ; }
    public      function GetTagObjectArray                          ()                          { return tagObjectArray             ; }
    public      function GetVisitorCurrentInt                       ()                          { return visitorCurrentInt          ; }
    public      function GetVisitorTotalInt                         ()                          { return visitorTotalInt            ; }
    public      function SetVisitorCurrentInt                       (_visitorCurrentInt :Int)   { visitorCurrentInt         = _visitorCurrentInt    ; }
    public      function SetVisitorTotalInt                         (_visitorTotalInt   :Int)   { visitorTotalInt           = _visitorTotalInt      ; }
}