import CollectionEnum;
import CollectionStruct;
class CollectionFunction{
    public function new(){}
    public static function ClearArray(_dynamicArray:Array<Dynamic>){
        #if (cpp||php)
            _dynamicArray.splice(0, _dynamicArray.length);           
        #else
            untyped _dynamicArray.length = 0;
        #end
    }
    public static function FindMuseumObject(
        _collectionGlobalObject:CollectionGlobal,
        _enumMuseumType:EnumMuseumType,
        _nameAlt:String
    ){
        var tempObjectArray:Array<ObjectMuseum> =  new Array<ObjectMuseum>();
             if(_enumMuseumType == EXH){ tempObjectArray =  _collectionGlobalObject.GetExhibitionObjectArray(); }
        else if(_enumMuseumType == FLR){ tempObjectArray =  _collectionGlobalObject.GetFloorObjectArray(); }
        else if(_enumMuseumType == ROM){ tempObjectArray =  _collectionGlobalObject.GetRoomObjectArray(); }
        var loopCounter1Int:Int =  0;
        while(loopCounter1Int < tempObjectArray.length){
            if(_nameAlt == tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString){ return tempObjectArray[loopCounter1Int]; break; }
            loopCounter1Int ++;
        }
        return null;
    }
    public static function FindTagObject(
        _collectionGlobalObject:CollectionGlobal,
        _nameString:String
    ){
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int <  _collectionGlobalObject.GetTagObjectArray().length){
            if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString()){
                return _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int];
                break;
            }
            loopCounter1Int ++;
        }
        return null;
    }
    public static function IsExistInArrayBool(_dynamicArray:Array<Dynamic>, _dynamicElement:Dynamic){
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _dynamicArray.length){
            if(_dynamicArray[loopCounter1Int] == _dynamicElement){ return true; }
            loopCounter1Int ++;
        }
        return false;
    }
    public static function PickRandomFromArrayT<T>(_tArray:Array<T>){
        var randomInt:Int = Math.round(Math.random()*(_tArray.length - 1));
        var elementT:T = _tArray[randomInt];
        return elementT;
    }
    public static function PickRandomTagObjectArray(_collectionGlobalObject:CollectionGlobal){
        var tempTagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
        var chanceFloat:Float = 1.0;
        while(chanceFloat > Math.random()){
            var randomIndexInt:Int = Math.round(Math.random()*(_collectionGlobalObject.GetTagObjectArray().length - 1));
            while(tempTagObjectArray.indexOf(_collectionGlobalObject.GetTagObjectArray()[randomIndexInt]) > -1){
                randomIndexInt = Math.round(Math.random()*(_collectionGlobalObject.GetTagObjectArray().length - 1));
            }
            tempTagObjectArray.push(_collectionGlobalObject.GetTagObjectArray()[randomIndexInt]);
            chanceFloat -= 0.05;
        }
        return tempTagObjectArray;
    }
    public static function GenerateGreatestCommonDivisorFloat(_number1Float:Float, _number2Float:Float){
        if(_number2Float == 0){ return _number1Float; }
        else{ return GenerateGreatestCommonDivisorFloat(_number2Float, _number1Float%_number2Float); }
    }
    public static function GenerateLeastCommonMultipleFloat(_number1Float:Float, _number2Float:Float){
        return (_number1Float*_number2Float)/GenerateGreatestCommonDivisorFloat(_number1Float, _number2Float);
    }
}