import  CollectionEnum;
class   CollectionFunction{
    public          function new(){}
    public static   function ClearArray(_dynamicArray:Array<Dynamic>){
        #if (cpp||php)
            _dynamicArray.splice(0, _dynamicArray.length);           
        #else
            untyped _dynamicArray.length = 0;
        #end
    }
    public static   function FindMuseumNameObject(
        _collectionGlobal   :CollectionGlobal,
        _enumMuseumType     :EnumMuseumType,
        _nameAlt            :String
    ){
        var tempObjectArray :Array<ObjectMuseum>                    =  new Array<ObjectMuseum>();
             if(_enumMuseumType == EXH){ tempObjectArray            =  _collectionGlobal.GetExhibitionObjectArray   ()  ; }
        else if(_enumMuseumType == FLR){ tempObjectArray            =  _collectionGlobal.GetFloorObjectArray        ()  ; }
        else if(_enumMuseumType == ROM){ tempObjectArray            =  _collectionGlobal.GetRoomObjectArray         ()  ; }
        var loopCounterInt  :Int                                    =  0;
        while(loopCounterInt < tempObjectArray.length){
            if(tempObjectArray[loopCounterInt].GetNameStruct().nameAltString == _nameAlt){ return tempObjectArray[loopCounterInt]; break; }
            loopCounterInt  ++;
        }
        return null;
    }
}