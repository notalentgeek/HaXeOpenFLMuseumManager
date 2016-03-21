/*PENDING: Change this class file name into Function_Collection.hx but do this after the program runs.*/





class CollectionStaticFunction{





    /*==================================================
    Construtor.*/
    public function new(){}
    /*==================================================*/





    /*==================================================
    A function to clear array.*/
    public static function Clear_T_Array<T>(__T_Array:Array<T>):Array<T>{

        #if(cpp||php)

            __T_Array.splice(0, __T_Array.length);

        #else

            untyped __T_Array.length = 0;

        #end

    }
    /*==================================================*/





    /*==================================================
    A function to find museum object based alternate name string or
        full name string.
    PENDING: Change file name of CollectionGlobalObject.hx into Global_Object.*/
    public static function Find_Museum_Object(
        __CollectionGlobal_Object   :CollectionGlobal,
        __MuseumType_Enum           :MuseumType_Enum,
        _name_String                :String
    ):Museum_Object{

        /*Put array of museum object type into temporary array.*/
        var main_Museum_Object_Array:Array<ObjectMuseum> = new Array<ObjectMuseum>();
        if(__MuseumType_Enum == EXH)
            { main_Museum_Object_Array = __CollectionGlobal_Object.exhibition_Museum_Object_Array; }
        else if(__MuseumType_Enum == FLR)
            { main_Museum_Object_Array = __CollectionGlobal_Object.floor_Museum_Object_Array; }
        else if(__MuseumType_Enum == ROM)
            { main_Museum_Object_Array = __CollectionGlobal_Object.room_Museum_Object_Array; }





        /*Loop through the corresponding array to find the object.
        For each loop compare the target alternate name string and full
            name string with the corresponding loop object museum.*/
        var loopCounter1_Int:Int =  0;
        while(loopCounter1_Int < main_Museum_Object_Array.length){

            /*Search based on alternative name,*/
            if(_name_String ==
                main_Museum_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorAgnostic_Object
                    ._Name_Struct.alt_String
            ){ return main_Museum_Object_Array[loopCounter1_Int]; }





            /*Search based on full name.*/
            if(_name_String ==
                    main_Museum_Object_Array[loopCounter1_Int]
                        ._MuseumAndVisitorAgnostic_Object
                        ._Name_Struct.full_String
            ){ return main_Museum_Object_Array[loopCounter1_Int]; }





            loopCounter1_Int ++;

        }





        /*If this function returns a null then the object this program wants to search is not
            available.*/
        return null;

    }
    /*==================================================*/





    /*==================================================
    Find tag object based on the name and whether it is a general tag or
        not.*/
    public static function Find_Tag_Object(
        __CollectionGlobal_Object       :CollectionGlobal,
        _general_Bool                   :Bool,
        _name_String                    :String
    ):Tag_Object{

        /*General tags are tag words that are contain common words
            and not specifically toward an exhibition.*/
        if(_general_Bool == true ){

            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < __CollectionGlobal_Object.general_Tag_Object_Array.length){

                if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .name_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .adjective_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .adverb_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .nounPos_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .nounSPos_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .nounS_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .noun_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verb1_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verb2_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verb3_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verbIng_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                else if(_name_String ==
                        __CollectionGlobal_Object
                            .general_Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verbS_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                loopCounter1_Int ++;

            }

        }





        else if(_general_Bool == false){

            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < __CollectionGlobal_Object._Tag_Object_Array.length){

                if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .name_String
                ){ return __CollectionGlobal_Object._Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .adjective_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .adverb_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .nounPos_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .nounSPos_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            .nounS_String)
                { return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .noun_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verb1_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verb2_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verb3_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verbIng_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }





                else if(_name_String == 
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[loopCounter1_Int]
                            ._TagAgnostic_Object
                            .verbS_String
                ){ return __CollectionGlobal_Object.general_Tag_Object_Array[loopCounter1_Int]; }
                




                loopCounter1_Int ++;

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
    public static function Find_Visitor_Object(
        __CollectionGlobal_Object     :CollectionGlobal,
        _name_String                 :String
    ):Visitor_Object{

        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < __CollectionGlobal_Object._Visitor_Object_Array.length){

            if(_name_String ==
                __CollectionGlobal_Object
                    ._Visitor_Object_Array[loopCounter1_Int]
                    ._MuseumAndVisitorAgnostic_Object.name_String
            ){ return __CollectionGlobal_Object._Visitor_Object_Array[loopCounter1_Int]; }





            loopCounter1_Int ++;

        }





        return null;

    }
    /*==================================================*/





    /*==================================================
    A function to generate greater common divisor.
    Indonesian of FPB (Faktor Persekutuan Besar)*/
    public static function GenerateGreatestCommonDivisor_Float(
        _number1_Float:Float,
        _number2_Float:Float
    ):Float{

        if(_number2_Float == 0){ return _number1_Float; }
        else{

            return GenerateGreatestCommonDivisor_Float(
                _number2_Float, _number1_Float%_number2_Float
            );

        }

    }
    /*==================================================*/





    /*==================================================
    A function to generate least common multiple.
    Indonesian of KPK (Kelipatan Persekutuan Kecil)*/
    public static function GenerateLeastCommonMultiple_Float(
        _number1_Float:Float,
        _number2_Float:Float
    ):Float{

        return (_number1_Float*_number2_Float)/GenerateGreatestCommonDivisor_Float(_number1_Float, _number2_Float);

    }
    /*==================================================*/





    /*==================================================
    Generic function to pick a random element from an array*/
    public static function PickRandomTFrom_Array_T<T>(__T_Array:Array<T>):Array<T>{

        var     random_Int  :Int    = Math.round(Math.random()*(__T_Array.length - 1));
        var     element_T   :T      = __T_Array[random_Int];
        return  element_T;

    }
    /*==================================================*/





    /*==================================================
    Pick some elements in the tag main array.
    The chance of element get added is diminished as more element put
        into the new array.*/
    public static function PickRandomTagFrom_Tag_Object_Array(
        __CollectionGlobal_Object:CollectionGlobal
    ):Array<Tag_Object>{

        /*Temporary array.*/
        var temp_Tag_Object_Array:Array<Tag_Object> = new Array<Tag_Object>();
        /*Initial chance so that at least one element shuold be in the
            temporary array.*/
        var chance_Float:Float = 1.0;





        while(chance_Float > Math.random()){

            var randomIndex_Int:Int = Math.round(
                Math.random()*(__CollectionGlobal_Object._Tag_Object_Array.length - 1)
            );
            while(
                temp_Tag_Object_Array
                    .indexOf(
                        __CollectionGlobal_Object
                            ._Tag_Object_Array[randomIndex_Int]
                    ) >
                -1
            ){

                randomIndex_Int = Math.round(
                    Math.random()*(__CollectionGlobal_Object._Tag_Object_Array.length - 1)
                );

            }





            temp_Tag_Object_Array.push(
                __CollectionGlobal_Object._Tag_Object_Array[randomIndex_Int]
            );





            /*Everytime an element added to the temporary array then the
                chance of another element added to the temporary array is
                diminished.*/
            chance_Float -= 0.05;

        }





        return temp_Tag_Object_Array;

    }
    /*==================================================*/





    /*==================================================
    Push object and also push the accompanying variable into the agnostic object.*/
    public static function SyncPush_T_Array<T, U, V, W, X, Y>(
        _elementNonAgnostic_T   :T,
        _nonAgnostic_T_Array    :Array<T>,
        _elementAgnostic_U      :U,
        _agnostic_U_Array       :Array<U>,
        ?_elementAgnostic_V     :V,
        ?_agnostic_V_Array      :Array<V>,
        ?_elementAgnostic_W     :W,
        ?_agnostic_W_Array      :Array<W>,
        ?_elementAgnostic_X     :X,
        ?_agnostic_X_Array      :Array<X>,
        ?_elementAgnostic_Y     :Y,
        ?_agnostic_Y_Array      :Array<Y>
    ):Array<T>{

        _nonAgnostic_T_Array    .push(_elementNonAgnostic_T);
        _agnostic_U_Array       .push(_elementAgnostic_U);





        if(_elementAgnostic_V != null && _agnostic_V_Array != null)
            { _agnostic_V_Array.push(_elementAgnostic_V); }
        if(_elementAgnostic_W != null && _agnostic_W_Array != null)
            { _agnostic_W_Array.push(_elementAgnostic_W); }
        if(_elementAgnostic_X != null && _agnostic_X_Array != null)
            { _agnostic_X_Array.push(_elementAgnostic_X); }
        if(_elementAgnostic_Y != null && _agnostic_Y_Array != null)
            { _agnostic_Y_Array.push(_elementAgnostic_Y); }





        return _nonAgnostic_T_Array;

    }
    /*==================================================*/





    /*==================================================
    Sync function to remove an element from an array within agnostic and non - agnostic arrays.*/
    public static function SyncRemove_T_Array<T, U, V, W, X, Y>(
        _elementNonAgnostic_T   :T,
        _nonAgnostic_T_Array    :Array<T>,
        _elementAgnostic_U      :U,
        _agnostic_U_Array       :Array<U>,
        ?_elementAgnostic_V     :V,
        ?_agnostic_V_Array      :Array<V>,
        ?_elementAgnostic_W     :W,
        ?_agnostic_W_Array      :Array<W>,
        ?_elementAgnostic_X     :X,
        ?_agnostic_X_Array      :Array<X>,
        ?_elementAgnostic_Y     :Y,
        ?_agnostic_Y_Array      :Array<Y>
    ):Array<T>{

        _nonAgnostic_T_Array    .remove(_elementNonAgnostic_T);
        _agnostic_U_Array       .remove(_elementAgnostic_U);





        if(_elementAgnostic_V != null && _agnostic_V_Array != null)
            { _agnostic_V_Array.remove(_elementAgnostic_V); }
        if(_elementAgnostic_W != null && _agnostic_W_Array != null)
            { _agnostic_W_Array.remove(_elementAgnostic_W); }
        if(_elementAgnostic_X != null && _agnostic_X_Array != null)
            { _agnostic_X_Array.remove(_elementAgnostic_X); }
        if(_elementAgnostic_Y != null && _agnostic_Y_Array != null)
            { _agnostic_Y_Array.remove(_elementAgnostic_Y); }





        return _nonAgnostic_T_Array;

    }
    /*==================================================*/





    /*==================================================
    Sync function to remove all elements from an array within agnostic and non - agnostic arrays.*/
    public static function SyncRemoveAll_T_Array<T, U, V, W, X, Y>(
        _nonAgnostic_T_Array    :Array<T>,
        _agnostic_U_Array       :Array<U>,
        ?_agnostic_V_Array      :Array<V>,
        ?_agnostic_W_Array      :Array<W>,
        ?_agnostic_X_Array      :Array<X>,
        ?_agnostic_Y_Array      :Array<Y>
    ):Array<T>{

        while(_nonAgnostic_T_Array.length > 0){ _nonAgnostic_T_Array.pop(); }
        while(_agnostic_U_Array.length > 0){ _agnostic_U_Array.pop(); }





        if(_agnostic_V_Array != null){ while(_agnostic_V_Array.length > 0){ _agnostic_U_Array.pop(); } }
        if(_agnostic_W_Array != null){ while(_agnostic_W_Array.length > 0){ _agnostic_U_Array.pop(); } }
        if(_agnostic_X_Array != null){ while(_agnostic_X_Array.length > 0){ _agnostic_U_Array.pop(); } }
        if(_agnostic_Y_Array != null){ while(_agnostic_Y_Array.length > 0){ _agnostic_U_Array.pop(); } }





        return _nonAgnostic_T_Array;

    }
    /*==================================================*/





    /*==================================================
    Set function to sync two values.*/
    public static function SyncSet_T<T, U, V, W, X, Y>(
        _valueNonAgnostic_T :T,
        _nonAgnostic_T      :T,
        _valueAgnostic_U    :U,
        _agnostic_U         :U,
        ?_valueAgnostic_V   :V,
        ?_agnostic_V        :V,
        ?_valueAgnostic_W   :W,
        ?_agnostic_W        :W,
        ?_valueAgnostic_X   :X,
        ?_agnostic_X        :X,
        ?_valueAgnostic_Y   :Y,
        ?_agnostic_Y        :Y
    ){

        _nonAgnostic_T  = _valueNonAgnostic_T;
        _agnostic_U     = _valueAgnostic_U;





        if(_valueAgnostic_V != null && _agnostic_V != null){ _agnostic_V = _valueAgnostic_V; }
        if(_valueAgnostic_W != null && _agnostic_W != null){ _agnostic_W = _valueAgnostic_W; }
        if(_valueAgnostic_X != null && _agnostic_X != null){ _agnostic_X = _valueAgnostic_X; }
        if(_valueAgnostic_Y != null && _agnostic_Y != null){ _agnostic_Y = _valueAgnostic_Y; }





        return _nonAgnostic_T

    }
    /*==================================================*/





}
