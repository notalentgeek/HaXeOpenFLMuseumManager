import CollectionEnum;
import CollectionStruct;





class CollectionFunction{





    /*==================================================
    Construtor.*/
    public function new(){}
    /*==================================================*/





    /*==================================================
    A function to clear array.*/
    public static function ClearArray(_dynamicArray:Array<Dynamic>){

        #if(cpp||php)
            _dynamicArray.splice(0, _dynamicArray.length);
        #else
            untyped _dynamicArray.length = 0;
        #end

    }
    /*==================================================*/





    /*==================================================
    A function to find museum object based alternate name string or
        full name string.*/
    public static function FindMuseumObject(
        _collectionGlobalObject     :CollectionGlobal   ,
        _enumMuseumType             :EnumMuseumType     ,
        _nameString                 :String
    ){

        /*Put array of museum object type into temporary array.*/
        var tempObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>();
        if (_enumMuseumType == EXH){
            tempObjectArray =
                _collectionGlobalObject.GetExhibitionObjectArray();
        }
        else if(_enumMuseumType == FLR){
            tempObjectArray =
                _collectionGlobalObject.GetFloorObjectArray();
        }
        else if(_enumMuseumType == ROM){
            tempObjectArray =
                _collectionGlobalObject.GetRoomObjectArray();
        }

        /*Loop through the corresponding array to find the object.
        For each loop compare the target alternate name string and full
            name string with the corresponding loop object museum.*/
        var loopCounter1Int:Int =  0;
        while(loopCounter1Int < tempObjectArray.length){

            if(_nameString == tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString){
                return tempObjectArray[loopCounter1Int];
            }
            if(_nameString == tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString){
                return tempObjectArray[loopCounter1Int];
            }

            loopCounter1Int ++;

        }

        /*Returns null if the target alternate name and full name string is
            not found within the array.*/
        return null;

    }
    /*==================================================*/





    /*==================================================
    Find tag object based on the name and whether it is a general tag or
        not.*/
    public static function FindTagObject(
        _collectionGlobalObject     :CollectionGlobal   ,
        _isGeneral                  :Bool               ,
        _nameString                 :String
    ){

        /*General tags are tag words that are contain common words
            and not specifically toward an exhibition.*/
        if(_isGeneral == true ){

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < _collectionGlobalObject.GetTagGeneralObjectArray().length){
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetNameString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetAdjectiveString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetAdverbString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetNounPosString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetNounSPosString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetNounSString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetNounString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetVerb1String()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetVerb2String()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetVerb3String()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetVerbIngString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int].GetVerbSString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                loopCounter1Int ++;
            }

        }
        else if(_isGeneral == false){

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < _collectionGlobalObject.GetTagObjectArray().length){
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString()){ return _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetAdjectiveString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetAdverbString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNounPosString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNounSPosString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNounSString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNounString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetVerb1String()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetVerb2String()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetVerb3String()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetVerbIngString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                if(_nameString == _collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetVerbSString()){ return _collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter1Int]; }
                loopCounter1Int ++;
            }

        }

        /*If this function cannot find the corresponding tag object then
            returns null.*/
        return null;

    }
    /*==================================================*/





    /*==================================================
    A function to find visitor object from the main object array of
        visitor.*/
    public static function FindVisitorObject(
        _collectionGlobalObject     :CollectionGlobal,
        _nameString                 :String
    ){

        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _collectionGlobalObject.GetVisitorObjectArray().length){
            if(_nameString == _collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetNameString()){
                return _collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int];
            }
            loopCounter1Int ++;
        }
        return null;

    }
    /*==================================================*/





    /*==================================================
    A function to check whether an element is exist in an array or not.*/
    public static function IsExistInArrayBool(
        _dynamicArray       :Array<Dynamic>,
        _dynamicElement     :Dynamic
    ){

        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _dynamicArray.length){
            if(_dynamicArray[loopCounter1Int] == _dynamicElement){ return true; }
            loopCounter1Int ++;
        }
        return false;

    }
    /*==================================================*/





    /*==================================================
    Generic function to pick a random element from an array*/
    public static function PickRandomFromArrayT<T>(_tArray:Array<T>){

        var     randomInt   :Int    = Math.round(Math.random()*(_tArray.length - 1));
        var     elementT    :T      = _tArray[randomInt];
        return  elementT;

    }
    /*==================================================*/





    /*==================================================
    Pick some elements in the tag main array.
    The chance of element get added is diminished as more element put
        into the new array.*/
    public static function PickRandomTagObjectArray(_collectionGlobalObject:CollectionGlobal){

        /*Temporary array.*/
        var tempTagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
        /*Initial chance so that at least one element shuold be in the
            temporary array.*/
        var chanceFloat:Float = 1.0;

        while(chanceFloat > Math.random()){

            var randomIndexInt :Int = Math.round(Math.random()*(_collectionGlobalObject.GetTagObjectArray().length - 1));
            while(tempTagObjectArray.indexOf(_collectionGlobalObject.GetTagObjectArray()[randomIndexInt]) > -1){
                randomIndexInt = Math.round(Math.random()*(_collectionGlobalObject.GetTagObjectArray().length - 1));
            }
            tempTagObjectArray.push(_collectionGlobalObject.GetTagObjectArray()[randomIndexInt]);

            /*Everytime an element added to the temporary array then the
                chance of another element added to the temporary array is
                diminished.*/
            chanceFloat -= 0.05;

        }

        return tempTagObjectArray;

    }
    /*==================================================*/





    /*==================================================
    A function to generate greater common divisor.
    Indonesian of FPB (Faktor Persekutuan Besar)*/
    public static function GenerateGreatestCommonDivisorFloat(
        _number1Float:Float,
        _number2Float:Float
    ){

        if(_number2Float == 0){ return _number1Float; }
        else{

            return GenerateGreatestCommonDivisorFloat(
                _number2Float, _number1Float%_number2Float
            );

        }

    }
    /*==================================================*/





    /*==================================================
    A function to generate least common multiple.
    Indonesian of KPK (Kelipatan Persekutuan Kecil)*/
    public static function GenerateLeastCommonMultipleFloat(
        _number1Float:Float,
        _number2Float:Float
    ){

        return (_number1Float*_number2Float)/GenerateGreatestCommonDivisorFloat(_number1Float, _number2Float);

    }
    /*==================================================*/





}
