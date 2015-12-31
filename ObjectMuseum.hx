import      CollectionEnum      ;
import      CollectionStruct    ;
import      CollectionFunction  ;
class       ObjectMuseum                                            {
    private var childObjectArray            :Array<ObjectMuseum>    = new Array<ObjectMuseum>();
    private var collectionGlobalObject      :CollectionGlobal       = null;
    private var fullBool                    :Bool                   = false;
    private var indexGlobalInt              :Int                    = 0;
    private var indexLocalInt               :Int                    = 0;
    private var nameStruct                  :StructName             = { nameAltString:"", nameFullString:"" };
    private var parentObject                :ObjectMuseum           = null;
    private var siblingObjectArray          :Array<ObjectMuseum>    = new Array<ObjectMuseum>();
    private var tagObjectArray              :Array<ObjectTag>       = new Array<ObjectTag>();
    private var typeEnum                    :EnumMuseumType         = null;
    private var visitorCurrentInt           :Int                    = 0;
    private var visitorObjectArray          :Array<ObjectVisitor>   = new Array<ObjectVisitor>();
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
    }
    private     function ChangeParentVoid                           (_parentNameAltString:String){
             if(typeEnum == EXH)                                    { parentObject = (CollectionFunction.FindMuseumNameObject(collectionGlobalObject, ROM, _parentNameAltString)); } /*PENDING: Please add verification whether the program capable of finding the parent object or not.*/
        else if(typeEnum == ROM)                                    { parentObject = (CollectionFunction.FindMuseumNameObject(collectionGlobalObject, FLR, _parentNameAltString)); } /*PENDING: Please add verification whether the program capable of finding the parent object or not.*/
        else                                                        { parentObject = null; }
    }
    private     function DetermineChildVoid                         (){
        CollectionFunction.ClearArray                               (childObjectArray);
             if (typeEnum == FLR){
            var loopCounterInt = 0;
            while(loopCounterInt < collectionGlobalObject.GetRoomObjectArray().length){
                if(nameStruct.nameAltString                         == collectionGlobalObject.GetRoomObjectArray()[loopCounterInt].GetParentObject().GetNameStruct().nameAltString){
                    childObjectArray.push                           (  collectionGlobalObject.GetRoomObjectArray()[loopCounterInt]);
                }
                loopCounterInt ++;
            }
        }
        else if (typeEnum == ROM){
            var loopCounterInt = 0;
            while(loopCounterInt < collectionGlobalObject.GetExhibitionObjectArray().length){
                if(nameStruct.nameAltString                         == collectionGlobalObject.GetExhibitionObjectArray()[loopCounterInt].GetParentObject().GetNameStruct().nameAltString){
                    childObjectArray.push                           (  collectionGlobalObject.GetExhibitionObjectArray()[loopCounterInt]);
                }
                loopCounterInt ++;
            }
        }
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
        var loopCounterInt = 0;
        while(loopCounterInt < tempObjectArray.length)              {
            if(nameStruct.nameAltString                             == tempObjectArray[loopCounterInt].GetNameStruct().nameAltString){
                indexGlobalInt                                      =  loopCounterInt;
                break;
            }
            loopCounterInt ++;
        }
        indexGlobalInt                                              =  -1;
    }
    private     function DetermineIndexLocalVoid                    (){
             if(typeEnum == FLR){ indexLocalInt                     =  indexGlobalInt; }
        else if(typeEnum != FLR){
            var loopCounterInt = 0;
            while(loopCounterInt < siblingObjectArray.length)       {
                if(nameStruct.nameAltString                         == siblingObjectArray[loopCounterInt].GetNameStruct().nameAltString){
                    indexLocalInt                                   =  loopCounterInt;
                    break;
                }
                loopCounterInt ++;
            }
        }
        indexLocalInt                                               = -1;
    }
    private     function DetermineSiblingVoid                       (){
            var tempObjectArray             :Array<ObjectMuseum>    =  new Array<ObjectMuseum>();
             if (typeEnum == EXH){          tempObjectArray         =  collectionGlobalObject.GetExhibitionObjectArray   (); }
        else if (typeEnum == FLR){          tempObjectArray         =  collectionGlobalObject.GetFloorObjectArray        (); }
        else if (typeEnum == ROM){          tempObjectArray         =  collectionGlobalObject.GetRoomObjectArray         (); }
        var loopCounterInt = 0;
        while(loopCounterInt < tempObjectArray.length)              {
            if(parentObject.GetNameStruct().nameAltString           == tempObjectArray[loopCounterInt].GetParentObject().GetNameStruct().nameAltString){
                siblingObjectArray.push                             (  tempObjectArray[loopCounterInt]);
            }
            loopCounterInt ++;
        }
    }
    private     function ResetVoid                                  (){
        fullBool                                                    =  false;
        visitorCurrentInt                                           =  0;
        visitorTotalInt                                             =  0;
    }
    public      function GetNameStruct                              (){ return nameStruct       ; }
    public      function GetParentObject                            (){ return parentObject     ; }
}