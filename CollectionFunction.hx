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
    public static   function FindMuseumObject(
        _collectionGlobalObject :CollectionGlobal,
        _enumMuseumType         :EnumMuseumType,
        _nameAlt                :String
    ){
        var tempObjectArray :Array<ObjectMuseum>                    =  new Array<ObjectMuseum>();
             if(_enumMuseumType == EXH){ tempObjectArray            =  _collectionGlobalObject.GetExhibitionObjectArray   ()  ; }
        else if(_enumMuseumType == FLR){ tempObjectArray            =  _collectionGlobalObject.GetFloorObjectArray        ()  ; }
        else if(_enumMuseumType == ROM){ tempObjectArray            =  _collectionGlobalObject.GetRoomObjectArray         ()  ; }
        var loopCounterInt      :Int                                =  0;
        while(loopCounterInt < tempObjectArray.length){
            if(_nameAlt == tempObjectArray[loopCounterInt].GetNameStruct().nameAltString){ return tempObjectArray[loopCounterInt]; break; }
            loopCounterInt  ++;
        }
        return null;
    }
    public static   function FindTagObject(
        _collectionGlobalObject :CollectionGlobal,
        _nameAlt                :String
    ){
        var loopCounterInt      :Int                                = 0;
        while(loopCounterInt    <  _collectionGlobalObject.GetTagObjectArray().length){
            if(_nameAlt         == _collectionGlobalObject.GetTagObjectArray()[loopCounterInt].GetNameStruct().nameAltString){
                return             _collectionGlobalObject.GetTagObjectArray()[loopCounterInt];
                break;
            }
            loopCounterInt  ++;
        }
        return null;
    }
    public static   function IsExistInArrayBool(_array:Array<Dynamic>, _element:Dynamic){
        var loopCounterInt      :Int                                = 0;
        while(loopCounterInt    < _array.length)                    {
            if(_array[loopCounterInt] == _element)                  { return true; }
            loopCounterInt                                          ++;
        }
        return false;
    }
}