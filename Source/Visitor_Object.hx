class Visitor_Object extends MuseumOrVisitor_Object{










    private var _VisitorAgnostic_Object                                     :VisitorAgnostic_Object             = null;



    private var _CollectionGlobal_Object                                    :CollectionGlobal_Object            = null;
    private var _GeneratorSentence_Object                                   :GeneratorSentence_Object           = null;
    private var _VisitorMode_Enum                       (null, set)         :VisitorMode_Enum                   = null;
    private var exhibitionCurrent_Museum_Object         (null, set)         :Museum_Object                      = null;
    private var floorCurrent_Museum_Object                                  :Museum_Object                      = null;
    private var roomCurrent_Museum_Object                                   :Museum_Object                      = null;



    private var _Tag_Object_Array                       (null, set)         :Array<Tag_Object>                  = new Array<Tag_Object>(); /*PENDING: Put in super class.*/
    private var _TagCounter_Struct_Array                (null, set)         :Array<TagCounter_Struct>           = new Array<TagCounter_Struct>();
    private var _VisitorVisitMuseum_Struct_Array                            :Array<VisitorVisitMuseum_Struct>   = new Array<VisitorVisitMuseum_Struct>();
    private var exhibitionTarget_Museum_Object_Array                        :Array<Museum_Object>               = new Array<Museum_Object>();
    private var exhibitionVisited_Museum_Object_Array   (null, set)         :Array<Museum_Object>               = new Array<Museum_Object>();










    /*Push object and also push the accompanying variable into the agnostic object.
    PENDING: Make this function static.*/
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










    /*Simple function to either add or remove this object from parent object.
    PENDING: Put this function into super class.*/
    private function AddOrRemoveThisFromParent_Dynamic(
        _add_Bool                   :Bool,
        _parentChild_Dynamic_Array  :Array<MuseumOrVisitor_Object>
    ):MuseumOrVisitor_Object{

        if      (_add_Bool == true ){ _parentChild_Dynamic_Array.push(this);     }
        else if (_add_Bool == false){ _parentChild_Dynamic_Array.remove(this);   }
        return this;

    }










    public function new(
        __CollectionGlobal_Object   :CollectionGlobal_Object,
        _indexGlobal_Int            :Int,
        _name_String                :String
    ):Void{

        /*Instantiate the agnostic object.*/
        _VisitorAgnostic_Object                     = new VisitorAgnostic_Object();

        /*Assign all parameters.*/
        _CollectionGlobal_Object                    = __CollectionGlobal_Object;
        _VisitorAgnostic_Object.indexGlobal_Int     = _indexGlobal_Int;
        _VisitorAgnostic_Object.name_String         = _name_String;

        /*Set default visitor mode.*/
        _VisitorMode_Enum                           = SOFTWARE_AUTO;



        /*Put this object into main visitor array.*/
        _CollectionGlobal_Object._Visitor_Object_Array.push(this);
        /*Determine exhibition full threshild for everytime there is a new visitor goes to museum.*/
        _CollectionGlobal_Object.DetermineExhibitionFullThreshold_Void();
        GenerateExhibitionTarget_Void();

    }










    /*Function to count how many tag a visitor get.
    This function basically calculate the preferences of a visitor toward certain topics.*/
    private function CalculateTagCounter_Visitor_Object(_amountOfPreviousVisitedExhibition_Int:Int):Visitor_Object{

        /*Tag array is a recycle array that contain tag object from current exhibition and
            previously visited exhibition.*/
        _Tag_Object_Array = CollectionStaticFunction.Clear_Dynamic_Array(_Tag_Object_Array);



        /*Deal with previously visited exhibition.
        Check if there sufficient visited exhibition to have its tag objects copied
            to this visitor object.*/
        if(exhibitionVisited_Museum_Object_Array.length >= 2){

            var loopCounter1_Int:Int = 0;
            /*Iterate through tag objects within previous visited exhibition.
            _amountOfPreviousVisitedExhibition_Int is a variable to determine how many previously
                visited exhibition I want to capture.
            The more value in _amountOfPreviousVisitedExhibition_Int the more diverse sentences will
                be generated.*/
            while(loopCounter1_Int < _amountOfPreviousVisitedExhibition_Int - 1){

                var exhibitionPrevious_Museum_Object:Museum_Object =
                    exhibitionVisited_Museum_Object_Array[exhibitionVisited_Museum_Object_Array.length - (loopCounter1_Int + 2)];

                /*Check if the previously visited exhibition is exist (not null).*/
                if(exhibitionPrevious_Museum_Object != null){

                    var loopCounter2_Int:Int = 0;
                    while(loopCounter2_Int < exhibitionPrevious_Museum_Object._Tag_Object_Array.length){

                        /*================================================
                        PROCESSING TAG ARRAY
                        ================================================*/

                        var _Tag_Object     :Tag_Object     = exhibitionPrevious_Museum_Object._Tag_Object_Array[loopCounter2_Int];
                        var tagIndex_Int    :Int            = _Tag_Object_Array.indexOf(_Tag_Object);
                        /*Check if the tag is already in the tag array.
                        If not then put the tag object into the array.*/
                        if(tagIndex_Int == -1){

                            /*Sync with the agnostic object.*/
                            CollectionStaticFunction.SyncPush_T_Array(
                                _Tag_Object,
                                _Tag_Object_Array,
                                _Tag_Object.name_String,
                                _VisitorAgnostic_Object.tagName_String_Array
                            );

                        }

                        /*================================================
                        END PROCESSING TAG ARRAY
                        ================================================*/



                        loopCounter2_Int ++;

                    }

                }



                loopCounter1_Int ++;

            }

        }



        /*Now I need to deal with the currently visited exhibition.*/
        var loopCounter3_Int:Int = 0;
        while(loopCounter3_Int < exhibitionCurrent_Museum_Object._Tag_Object_Array.length){

            /*================================================
            PROCESSING TAG ARRAY
            ================================================*/

            /*Same thing like above put tag object that is not yet in the tag array from the
                current exhibition.*/
            var _Tag_Object     :Tag_Object     = exhibitionCurrent_Museum_Object._Tag_Object_Array[loopCounter3_Int];
            var tagIndex_Int    :Int            = _Tag_Object_Array.indexOf(_Tag_Object);

            if(tagIndex_Int == -1){

                CollectionStaticFunction.SyncPush_T_Array(
                    _Tag_Object,
                    _Tag_Object_Array,
                    _Tag_Object.name_String,
                    _VisitorAgnostic_Object.tagName_String_Array
                );

            }

            /*================================================
            END PROCESSING TAG ARRAY
            ================================================*/



            /*================================================
            PROCESSING TAG COUNTER ARRAY
            ================================================*/

            /*Now I need to deal with tag counter array.
            Tag counter array is calculate how many times same tag is received to whit visitor.
            Tag counter array is the variable that is responsible to gather visitor preferences.
            Tag array is just to record recent tag so that it can be processed into haiku, poem
                sentences, story, etc.*/
            var new_Bool                :Bool   = true;
            var tagCounterIndex_Int     :Int    = -1;
            var tagName_String          :String = _Tag_Object.name_String;

            var tagCounterIndex_Int     :Int    = 0;
            /*This loop is for cheking whether the tag object is inside the tag counter array.
            If it already inside then we need to increment the tag counter integer value by one.
            Otherwise set the tag counter integer value to one and add the tag counter struct
                into the tag counter array.*/
            while(tagCounterIndex_Int < _TagCounter_Struct_Array.length){

                if(tagName_String == _TagCounter_Struct_Array[tagCounterIndex_Int]._Tag_Object.name_String)
                    { new_Bool = false; break; }
                tagCounterIndex_Int ++:

            }
            /*If the tag object is new to tag counter.*/
            if(new_Bool == true){

                var _TagCounter_Struct:TagCounter_Struct = {

                    _Tag_Object     :_Tag_Object,
                    _Int            :1

                }

                CollectionStaticFunction.SyncPush_T_Array(
                    _TagCounter_Struct,
                    _TagCounter_Struct_Array,
                    _TagCounter_Struct._Int,
                    _VisitorAgnostic_Object.tagCounter_Int_Array,
                    _TagCounter_Struct._Tag_Object.name_String,
                    _VisitorAgnostic_Object.tagCounterTagName_String_Array
                );

            }
            /*If the tag object is already inside the tag counter I just need to increment the
                integer value by one.*/
            else if(new_Bool == false)
                { _TagCounter_Struct_Array[tagCounterIndex_Int]._Int ++; }

            /*================================================
            END PROCESSING TAG COUNTER ARRAY
            ================================================*/



            loopCounter3_Int ++;

        }



        SortTagCounterArray_Visitor_Object();

        return this;

    }










    private set__TagCounter_Struct_Array(__TagCounter_Struct_Array:Array<TagCounter_Struct>):Array<TagCounter_Struct>{

        _TagCounter_Struct_Array = __TagCounter_Struct_Array;



        /*Basically here before I refill the array I emptied it first.*/
        _VisitorAgnostic_Object.tagCounter_Int_Array =
            CollectionStaticFunction.Clear_Dynamic_Array(
                _VisitorAgnostic_Object.tagCounter_Int_Array
            );

        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _TagCounter_Struct_Array.length){

            _VisitorAgnostic_Object.tagCounter_Int_Array.push(
                _TagCounter_Struct_Array[loopCounter1_Int]._Int
            );
            loopCounter1_Int ++;

        }



        _VisitorAgnostic_Object.tagCounterTagName_String_Array =
            CollectionStaticFunction.Clear_Dynamic_Array(
                _VisitorAgnostic_Object.tagCounterTagName_String_Array
            );

        loopCounter1_Int = 0;
        while(loopCounter1_Int < _TagCounter_Struct_Array.length){

            _VisitorAgnostic_Object.tagCounterTagName_String_Array.push(
                _TagCounter_Struct_Array[loopCounter1_Int]._Tag_Object.name_String
            );
            loopCounter1_Int ++;

        }



        return _TagCounter_Struct_Array;

    }










    private set__Tag_Object_Array(__Tag_Object_Array:Array<Tag_Object>):Array<Tag_Object>{

        _Tag_Object_Array = __Tag_Object_Array;



        /*When I set tag array in this visitor object,
            I need to clean the name tag array in the agnostic object.*/
        _VisitorAgnostic_Object.tagName_String_Array =
            CollectionStaticFunction.Clear_Dynamic_Array(
                _VisitorAgnostic_Object.tagName_String_Array
            );



        /*After emptying the tag name array in the agnostic object,
            I fill it back with new tag array from this object.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Tag_Object_Array.length){

            _VisitorAgnostic_Object.tagName_String_Array.push(
                _Tag_Object_Array[loopCounter1_Int].name_String
            );
            loopCounter1_Int ++;

        }



        return _Tag_Object_Array;

    }










    private set__VisitorMode_Enum(__VisitorMode_Enum:VisitorMode_Enum):VisitorMode_Enum{

        _VisitorMode_Enum = __VisitorMode_Enum;
        _VisitorAgnostic_Object.visitorMode_String = Std.string(_VisitorMode_Enum);
        return _VisitorMode_Enum;

    }










    private set_exhibitionCurrent_Museum_Object(__Museum_Object:Museum_Object):Museum_Object{

        exhibitionCurrent_Museum_Object = __Museum_Object;
        _VisitorAgnostic_Object.exhibitionCurrentNameAlt_String =
            exhibitionCurrent_Museum_Object._Name_Struct.nameAlt_String;
        return exhibitionCurrent_Museum_Object;

    }










}