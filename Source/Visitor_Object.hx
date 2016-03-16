class Visitor_Object extends MuseumAndVisitor_Object{











    private var _GeneratorSentence_Object               (null, null)        :GeneratorSentence_Object               = null;
    private var _VisitorMode_Enum                       (null, set)         :VisitorMode_Enum                       = null;
    private var exhibitionCurrent_Museum_Object         (null, set)         :Museum_Object                          = null;
    private var floorCurrent_Museum_Object              (null, null)        :Museum_Object                          = null;
    private var roomCurrent_Museum_Object               (null, null)        :Museum_Object                          = null;



    private var _TagCounter_Struct_Array                (null, set)         :Array<TagCounter_Struct>               = new Array<TagCounter_Struct>();
    private var _VisitorVisitMuseum_Struct_Array        (null, set)         :Array<VisitorVisitMuseum_Struct>       = new Array<VisitorVisitMuseum_Struct>();
    private var _VisitorVisitExhibition_Struct_Array    (null, set)         :Array<VisitorVisitExhibition_Struct>   = new Array<VisitorVisitExhibition_Struct>();
    private var exhibitionTarget_Museum_Object_Array    (null, set)         :Array<Museum_Object>                   = new Array<Museum_Object>();
    private var exhibitionVisited_Museum_Object_Array   (null, set)         :Array<Museum_Object>                   = new Array<Museum_Object>();










    public function new(
        __CollectionGlobal_Object   :CollectionGlobal_Object,
        __global_Int                :Int,
        _name_String                :String
    ):Void{

        /*Instantiate the agnostic object.*/
        _MuseumAndVisitorAgnostic_Object = new VisitorAgnostic_Object(
            _CollectionGlobal_Object.amountOfPreviousVisitedExhibitionCheck_Int,
            _CollectionGlobal_Object.amountOfTargetExhibition_Int
        );



        super(__CollectionGlobal_Object);



        /*Assign all parameters.*/
        _MuseumAndVisitorAgnostic_Object._Index_Struct.global_Int   = __global_Int;
        _MuseumAndVisitorAgnostic_Object.name_String                = _name_String;



        /*Instantiate the sentence generator.*/
        _GeneratorSentence_Object                                   = new GeneratorSentence_Object();
        /*Set default visitor mode.*/
        _VisitorMode_Enum                                           = SOFTWARE_AUTO;



        /*Put this object into main visitor array.*/
        AddOrRemoveThisFromMain_MuseumAndVisitor_Object(true);
        /*Determine exhibition full threshold for everytime there is a new visitor goes to museum.*/
        _CollectionGlobal_Object.DetermineExhibitionFullThreshold_Void();
        GenerateExhibitionTarget_Visitor_Object(_MuseumAndVisitorAgnostic_Object.amountTargetExhibition_Int);

    }










    /*Simple artificial intelligent function to control this visitor object.*/
    private function AI_Visitor_Object():Visitor_Object{

        /*I need to make sure that this visitor is not yet finished this current museum visit.*/
        if(_MuseumAndVisitorAgnostic_Object.finished_Bool == false){

            /*Generate random chance of this visitor moving into new exhibition.*/
            var randomMoveChance_Float:Float = Math.random();
            /*For everytime this visitor is not changing exhibition, the next chance of this
                visitor would or would not change exhibition will increase.*/
            _MuseumAndVisitorAgnostic_Object.aiNextChanceChangeExhibition_Float += 0.01;



            /*This if statement is to determine whether this visitor will move into new exhibition
                or not.*/
            if(randomMoveChance_Float > (1.0 - _MuseumAndVisitorAgnostic_Object.aiNextChanceChangeExhibition_Float)){

                /*Get random index from the target exhibition object array.*/
                var randomExhibitionTargetIndex_Int:Int =
                    Math.round(Math.random()*(exhibitionTarget_Museum_Object_Array.length - 1));
                /*Then change into random target exhibition.*/
                exhibitionCurrent_Museum_Object = exhibitionTarget_Museum_Object_Array[randomExhibitionTargetIndex_Int];
                
                /*Set the random counter back to 0.*/
                _MuseumAndVisitorAgnostic_Object.aiNextChanceChangeExhibition_Float = 0;

            }

        }



        return this;

    }










    /*This function is to check whether a visitor is visiting the correct exhibition and how much
        visitor's score increase or decrease based on the recent visit.
    CAUTION: This function must be executed before executing a function to generate target
        exhibitions.*/
    private function CalculateScore_Visitor_Object():Visitor_Object{

        _MuseumAndVisitorAgnostic_Object.visitedCorrectExhibition_Bool = false;

        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < exhibitionTarget_Museum_Object_Array.length){

            /*Check if the newly visited exhibition is actually an exhibition that is listed in
                exhibition target object array.*/
            if(
                exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ==
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ||
                exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String ==
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
            ){ _MuseumAndVisitorAgnostic_Object.visitedCorrectExhibition_Bool = true; break; }
            loopCounter1_Int ++;

        }

        /*Decrease or increase the player score.*/
        if(_MuseumAndVisitorAgnostic_Object.visitedCorrectExhibition_Bool == true)
            { _MuseumAndVisitorAgnostic_Object.score_Int ++; }
        else if(_MuseumAndVisitorAgnostic_Object.visitedCorrectExhibition_Bool == false)
            { _MuseumAndVisitorAgnostic_Object.score_Int --; }

        return this;

    }










    /*Function to count how many tag a visitor get.
    This function basically calculate the preferences of a visitor toward certain topics.*/
    private function CalculateTagCounter_Visitor_Object(_amountOfPreviousVisitedExhibitionCheck_Int:Int):Visitor_Object{

        /*Tag array is a recycle array that contain tag object from current exhibition and
            previously visited exhibition.*/
        _Tag_Object_Array = CollectionStaticFunction_Object.Clear_T_Array(_Tag_Object_Array);



        /*Deal with previously visited exhibition.
        Check if there sufficient visited exhibition to have its tag objects copied
            to this visitor object.*/
        if(exhibitionVisited_Museum_Object_Array.length >= 2){

            var loopCounter1_Int:Int = 0;
            /*Iterate through tag objects within previous visited exhibition.
            _amountOfPreviousVisitedExhibitionCheck_Int is a variable to determine how many previously
                visited exhibition I want to capture.
            The more value in _amountOfPreviousVisitedExhibitionCheck_Int the more diverse sentences will
                be generated.*/
            while(loopCounter1_Int < _amountOfPreviousVisitedExhibitionCheck_Int - 1){

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
                            CollectionStaticFunction_Object.SyncPush_T_Array(
                                _Tag_Object,
                                _Tag_Object_Array,
                                _Tag_Object.name_String,
                                _MuseumAndVisitorAgnostic_Object.tagName_String_Array
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

                CollectionStaticFunction_Object.SyncPush_T_Array(
                    _Tag_Object,
                    _Tag_Object_Array,
                    _Tag_Object.name_String,
                    _MuseumAndVisitorAgnostic_Object.tagName_String_Array
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
            If it already inside then I need to increment the tag counter integer value by one.
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

                CollectionStaticFunction_Object.SyncPush_T_Array(
                    _TagCounter_Struct,
                    _TagCounter_Struct_Array,
                    _TagCounter_Struct._Int,
                    _MuseumAndVisitorAgnostic_Object.tagCounter_Int_Array,
                    _TagCounter_Struct._Tag_Object.name_String,
                    _MuseumAndVisitorAgnostic_Object.tagCounterTagName_String_Array
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



        SortTagCounter_Visitor_Object();

        return this;

    }










    /*A function to determine whether this visitor is finished visiting the museum or not
        (this visitor must visit all exhibition in order to be flagged as finished).*/
    private function DetermineFinished_Visitor_Object():Visitor_Object{

        if(exhibitionVisited_Museum_Object_Array.length >= _CollectionGlobal_Object.exhibition_Museum_Object_Array.length)
            { _MuseumAndVisitorAgnostic_Object.finished_Bool = true; }



        return this;

    }










    private function GenerateExhibitionTarget_Visitor_Object(
        _amountOfTargetExhibition_Int:Int
    ):Visitor_Object{

        /*Empty the the exhibition target object array.
        Because I have set the setter function by doing this I also sync all value in the
            agnostic string array.*/
        exhibitionTarget_Museum_Object_Array = 
            CollectionStaticFunction_Object.Clear_T_Array(exhibitionTarget_Museum_Object_Array);





        /*Sort all exhibitions level 1.
        In level 1 put every possible exhibition except the currently visited exhibition.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _CollectionGlobal_Object.exhibition_Museum_Object_Array.length){

            if(exhibitionCurrent_Museum_Object == null){

                /*Put all exhibition object into the target array.*/
                CollectionStaticFunction_Object.SyncPush_T_Array(
                    _CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int],
                    exhibitionTarget_Museum_Object_Array,
                    _CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                    _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                );

            }
            else{

                /*If the current exhibition exist then make sure that the current exhibition is not
                    included in target exhibition object array.*/
                if(_CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int] != exhibitionCurrent_Museum_Object){

                    /*Put all exhibition object into the target array, except the current
                        exhibition.*/
                    CollectionStaticFunction_Object.SyncPush_T_Array(
                        _CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int],
                        exhibitionTarget_Museum_Object_Array,
                        _CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                        _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                    );

                }

            }



            loopCounter1_Int ++;

        }





        /*Sort exhibition target level 2.
        In this level I need to remove all exhibitions that is marked for deletion.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < exhibitionTarget_Museum_Object_Array.length){

            if(exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumMode_Enum == MRK_DEL){

                CollectionStaticFunction_Object.SyncRemove_T_Array(
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int],
                    exhibitionTarget_Museum_Object_Array,
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                    _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                );



                /*This if statement below is to make sure that the tarhet exhibitions should always be
                    three.*/
                if(exhibitionTarget_Museum_Object_Array.length <= _amountOfTargetExhibition_Int)
                    { return this; }



                loopCounter1_Int --;

            }



            loopCounter1_Int ++;

        }





        /*This is sort level 3.
        In this level I remove all exhibitions that is crowded.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < exhibitionTarget_Museum_Object_Array.length){

            if(exhibitionTarget_Museum_Object_Array[loopCounter1_Int].full_Bool == true){

                CollectionStaticFunction_Object.SyncRemove_T_Array(
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int],
                    exhibitionTarget_Museum_Object_Array,
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                    _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                );



                if(exhibitionTarget_Museum_Object_Array.length <= _amountOfTargetExhibition_Int)
                    { return this; }



                loopCounter1_Int --;
                
            }



            loopCounter1_Int ++;

        }





        /*Sort level 4.
        In this sort I give chance for every exhibitions that have been visited to be visited again.
        For example if exhibition number one has been visited by this visitor it has 10% chance to
            be still listed as a target exhibition.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < exhibitionTarget_Museum_Object_Array.length){

            var loopCounter2_Int:Int = 0;
            while(loopCounter2_Int < exhibitionVisited_Museum_Object_Array.length){

                if(
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int]
                        == exhibitionVisited_Museum_Object_Array[loopCounter2_Int] ||
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String
                        == exhibitionVisited_Museum_Object_Array[loopCounter2_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ||
                    exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
                        == exhibitionVisited_Museum_Object_Array[loopCounter2_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
                ){

                    /*The visited exhibitions have chance of 10% to be visited again.*/
                    if(Math.random() > 0.9){

                        CollectionStaticFunction_Object.SyncRemove_T_Array(
                            exhibitionVisited_Museum_Object_Array[loopCounter2_Int],
                            exhibitionTarget_Museum_Object_Array,
                            exhibitionVisited_Museum_Object_Array[loopCounter2_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                            _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                        );



                        if(exhibitionTarget_Museum_Object_Array.length <= _amountOfTargetExhibition_Int)
                            { return this; }



                        /*CAUTION: I need to reduce the amount on loopCounter1_Int by one because the
                            calculation of this loop is based on the amount of elements in the
                            exhibitionTarget_Museum_Object_Array.
                        CAUTION: In the above codes one element is removed from
                            exhibitionTarget_Museum_Object_Array, hence I need to also adjust the counter
                            variable.*/
                        loopCounter1_Int --;
                        /*CAUTION: Because there is a chance that this loop get ran more than once,
                            I need to make sure that the loopCounter1_Int value should always
                            at least 0.*/
                        if(loopCounter1_Int < 0){ loopCounter1_Int = 0; }

                    }

                }



                loopCounter2_Int ++;

            }



            loopCounter1_Int ++;

        }





        /*Sort level 5 the latest sort.
        Here I sort the exhibition target based on whether the target exhibition is in the same room
            or in the same floor with the current exhibition that the visitor visit.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < exhibitionTarget_Museum_Object_Array.length){

            if(floorCurrent_Museum_Object != null && roomCurrent_Museum_Object != null){

                var sameCounter_Int             :Int            = 0;

                var roomTarget_Museum_Object    :Museum_Object  = exhibitionTarget_Museum_Object_Array[loopCounter1_Int].parent_Museum_Object;
                var floorTarget_Museum_Object   :Museum_Object  = roomTarget_Museum_Object.parent_Museum_Object;

                /*If either current floor or current room is the same with the floor and room from
                    the target exhibition then add score.*/
                if(
                    floorTarget_Museum_Object
                        == floorCurrent_Museum_Object ||
                    floorTarget_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String 
                        == floorCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ||
                    floorTarget_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String 
                        == floorCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
                ){ sameCounter_Int ++; }
                if(
                    roomTarget_Museum_Object
                        == roomCurrent_Museum_Object ||
                    roomTarget_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String  
                        == roomCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ||
                    roomTarget_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String  
                        == roomCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
                ){ sameCounter_Int ++; }

                /*Based on the score add a chance whether the target exhibition should be excluded
                    or be keep in the target exhibition array.*/
                if(sameCounter_Int == 0){

                    if(Math.random() > 0.75){

                        CollectionStaticFunction_Object.SyncRemove_T_Array(
                            exhibitionTarget_Museum_Object_Array[loopCounter1_Int],
                            exhibitionTarget_Museum_Object_Array,
                            exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                            _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                        );
                        


                        if(exhibitionTarget_Museum_Object_Array.length <= _amountOfTargetExhibition_Int)
                            { return this; }



                        loopCounter1_Int --;

                    }

                }

                if(sameCounter_Int == 1){

                    if(Math.random() > 0.5){

                        CollectionStaticFunction_Object.SyncRemove_T_Array(
                            exhibitionTarget_Museum_Object_Array[loopCounter1_Int],
                            exhibitionTarget_Museum_Object_Array,
                            exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                            _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                        );



                        if(exhibitionTarget_Museum_Object_Array.length <= _amountOfTargetExhibition_Int)
                            { return this; }



                        loopCounter1_Int --;

                    }

                }

                if(sameCounter_Int == 2){

                    if(Math.random() > 0.25){

                        CollectionStaticFunction_Object.SyncRemove_T_Array(
                            exhibitionTarget_Museum_Object_Array[loopCounter1_Int],
                            exhibitionTarget_Museum_Object_Array,
                            exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                            _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                        );



                        if(exhibitionTarget_Museum_Object_Array.length <= _amountOfTargetExhibition_Int)
                            { return this; }



                        loopCounter1_Int --;

                    }

                }



                loopCounter1_Int ++;

            }

        }






        /*Sort level 6.
        In this level 6 sort I need to make sure that the target exhibitions has atleast some
            of this visitor preferences.
        CAUTION: This is quite complicated. So I create a simple scoring system.
        CAUTION: The scoring system calculates every tags that is inputed from the possible
            exhibition targets.
        CAUTION: If a tag received has a small index in this visitor tag counter array. Then the exhibition
            that has that tag get bigger score.
        CAUTION: Small index in tag counter array mean that tag has the highest preference from this
            visitor, hence this program gives bigger value.
        First I need to iterate through the exhibition target object array.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < exhibitionTarget_Museum_Object_Array.length){

            /*The score gathered from current iteration of target exhibition.*/
            var scoreReference_Int              :Int    = 0;

            /*The variable below is for calculating the possible maximum score from a target exhibition.
            CAUTION: The formula is the adding factorial (I do not know the name, but it is like factorization
                but instead of multiplication it uses addition see this
                http://math.stackexchange.com/questions/593318/factorial-but-with-addition/593320)
            PENDING: This is not ideal number. I hope I can fix more specifically on this level of sort.*/
            var scoreReferenceTotal_Int         :Int    =
                Std.int(
                    (Math.pow(_TagCounter_Struct_Array.length, 2) + _TagCounter_Struct_Array.length)/2
                );

            /*Then I need to iterate to target exhibition tag object array.*/
            var loopCounter2_Int                :Int    = 0;
            while(loopCounter2_Int < exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._Tag_Object_Array.length){


                /*Then I need to iterate through THIS visitor tag counter.
                CAUTION: Remember! Tag counter array contain preference of this visitor.
                CAUTION: Still with me? So the first iteration is to iterate the possible target exhibition.
                CAUTION: The second iteration is for iterating the target exhibition tag.
                CAUTION: The latest iteration is for iterating THIS visitor tag counter.*/
                var loopCounter3_Int:Int = 0;
                while(loopCounter3_Int < _TagCounter_Struct_Array.length){

                    if(exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._Tag_Object_Array[loopCounter2_Int].name_String == _TagCounter_Struct_Array[loopCounter3_Int]._Tag_Object.name_String){

                        /*
                        var chanceToStayAsTargetExhibition_Float:Float =
                            ((_TagCounter_Struct_Array.length - loopCounter3_Int)/_TagCounter_Struct_Array.length) - 0.05;
                        if(chanceToStayAsTargetExhibition_Float <= 0.05){ chanceToStayAsTargetExhibition_Float = 0.05; }
                        if(Math.random() > chanceToStayAsTargetExhibition_Float){}
                        */

                        scoreReference_Int = scoreReference_Int + (_TagCounter_Struct_Array.length - loopCounter3_Int);

                    }



                    loopCounter3_Int ++;

                }



                loopCounter2_Int ++;

            }



            /*If the score if half from the possible maximum score the currently inpected target
                exhibition has 70% chance of being removed from exhibition target array.*/
            if((scoreReference_Int/scoreReferenceTotal_Int) <= 0.5){

                if(Math.random() > 0.3){

                    CollectionStaticFunction_Object.SyncRemove_T_Array(
                        exhibitionTarget_Museum_Object_Array[loopCounter1_Int],
                        exhibitionTarget_Museum_Object_Array,
                        exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                        _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
                    );



                    if(exhibitionTarget_Museum_Object_Array.length <= _amountOfTargetExhibition_Int)
                        { return this; }



                    loopCounter1_Int --;

                }

            }



            loopCounter1_Int ++;

        }




        /*"Pop" the exhibition target array until it reachs the amount of target exhibition that
            the user desired.*/
        while(exhibitionTarget_Museum_Object_Array.length <= _amountOfTargetExhibition_Int){

            CollectionStaticFunction_Object.SyncRemove_T_Array(
                exhibitionTarget_Museum_Object_Array[exhibitionTarget_Museum_Object_Array.length - 1],
                exhibitionTarget_Museum_Object_Array,
                exhibitionTarget_Museum_Object_Array[exhibitionTarget_Museum_Object_Array.length - 1]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
            );

        }





        return this;

    }










    /*Function to generate three sentences for this visitor recent museum visit.
    PENDING: Make the generate sentence adjustable, so that I can just put a number
        for how many amount of sentence I want to generate.*/
    private function GenerateSentence_Visitor_Object():Visitor_Object{

        _MuseumAndVisitorAgnostic_Object.sentenceCurrent_String =
            _GeneratorSentence_Object.GenerateSentence3String(_CollectionGlobal_Object);

        /*Only generate sentences when this visitor visit the his/her second exhibition.*/
        if(exhibitionVisited_Museum_Object_Array.length > 1){
            _MuseumAndVisitorAgnostic_Object.sentence_String_Array.push
                (_MuseumAndVisitorAgnostic_Object.sentenceCurrent_String);
        }

    }










    /*This class has these variables.
    _GeneratorSentence_Object                       NO      need to change.
    _TagCounter_Struct_Array                        CHANGE  empty array.
    _VisitorMode_Enum                               CHANGE  to SOFTWARE_MANUAL.
    _VisitorVisitExhibition_Struct_Array            CHANGE  empty array.
    _VisitorVisitMuseum_Struct_Array                CHANGE  empty array.
    exhibitionCurrent_Museum_Object                 CHANGE  to exhibition lobby.
    exhibitionTarget_Museum_Object_Array            CHANGE  empty array.
    floorCurrent_Museum_Object                      CHANGE  to null.
    roomCurrent_Museum_Object                       CHANGE  to null.
    PENDING: exhibitionVisited_Museum_Object_Array  CHANGE  empty array.*/
    private function Reset_Visitor_Object():VisitorObject(){

        super.Reset_MuseumAndVisitor_Object();

        _TagCounter_Struct_Array               = CollectionStaticFunction_Object.Clear_T_Array(_TagCounter_Struct_Array);
        _VisitorMode_Enum                      = SOFTWARE_MANUAL;
        _VisitorVisitExhibition_Struct_Array   = CollectionStaticFunction_Object.Clear_T_Array(_VisitorVisitExhibition_Struct_Array);
        _VisitorVisitMuseum_Struct_Array       = CollectionStaticFunction_Object.Clear_T_Array(_VisitorVisitMuseum_Struct_Array);
        exhibitionCurrent_Museum_Object        = CollectionStaticFunction.Find_Museum_Object("EXH_LOB");
        exhibitionTarget_Museum_Object_Array   = CollectionStaticFunction_Object.Clear_T_Array(exhibitionTarget_Museum_Object_Array);
        exhibitionVisited_Museum_Object_Array  = CollectionStaticFunction_Object.Clear_T_Array(exhibitionVisited_Museum_Object_Array);
        floorCurrent_Museum_Object             = null;
        roomCurrent_Museum_Object              = null;


    }










    /*This is a functionto add explanation into this visitor.
    The thing is that a new explanation should be unique from the previously retrieved
        explanation.
    PENDING: Add ability so that this function can add multiple explanation.*/
    private function RetrieveExplanation_Visitor_Object():Visitor_Object{

        var explanationIndex_Int_Array  :Array<Int>     = new Array<Int>();
        var loopCounter1_Int            :Int            = 0;
        /*Fill the explanation index integer array with all possible explanation index from an
            exhibition.*/
        while(loopCounter1_Int < _exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object.explanation_String_Array.length){

            explanationIndex_Int_Array.push(loopCounter1_Int);
            loopCounter1_Int ++;

        }



        /*Get random explanation index.*/
        _MuseumAndVisitorAgnostic_Object.explanationCurrentIndex_Int     = explanationIndex_Int_Array[Math.random()*(explanationIndex_Int_Array.length - 1)];
        _MuseumAndVisitorAgnostic_Object.explanationCurrent_String       =
            exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object.explanation_String_Array[_MuseumAndVisitorAgnostic_Object.explanationCurrentIndex_Int];
        /*Iterate until the newly get explanation is unique.*/
        while(
            _MuseumAndVisitorAgnostic_Object.explanation_String_Array.indexOf(_MuseumAndVisitorAgnostic_Object.explanationCurrent_String) != -1 &&
            explanationIndex_Int_Array.length > 0
        ){

            /*Remove the explanation index that this player got from previous visit to the
                current exhibition.*/
            explanationIndex_Int_Array.remove(_MuseumAndVisitorAgnostic_Object.explanationCurrentIndex_Int);
            
            /*Then I need to generate again random explanation.*/
            _MuseumAndVisitorAgnostic_Object.explanationCurrentIndex_Int     = explanationIndex_Int_Array[Math.random()*(explanationIndex_Int_Array.length - 1)];
            _MuseumAndVisitorAgnostic_Object.explanationCurrent_String       =
                exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object.explanation_String_Array[_MuseumAndVisitorAgnostic_Object.explanationCurrentIndex_Int];

        }



        /*If this if statement return true means that the current explanation is unique,
            hence put it into the explanation string array.
        If this statement return false means that the visitor already collected all explanations
            from this current exhibition.*/
        if(
            _MuseumAndVisitorAgnostic_Object.explanation_String_Array.indexOf
                (_MuseumAndVisitorAgnostic_Object.explanationCurrent_String) == -1
        ){

            _MuseumAndVisitorAgnostic_Object.explanation_String_Array.push
                (_MuseumAndVisitorAgnostic_Object.explanationCurrent_String);

        }



        return this;

    }










    private function set__TagCounter_Struct_Array(__TagCounter_Struct_Array:Array<TagCounter_Struct>):Array<TagCounter_Struct>{

        _TagCounter_Struct_Array = __TagCounter_Struct_Array;



        /*================================================
        PROCESSING TAG COUNTER INT
        ================================================*/

        /*Basically here before I refill the array I emptied it first.*/
        _MuseumAndVisitorAgnostic_Object.tagCounter_Int_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.tagCounter_Int_Array
            );

        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _TagCounter_Struct_Array.length){

            _MuseumAndVisitorAgnostic_Object.tagCounter_Int_Array.push(
                _TagCounter_Struct_Array[loopCounter1_Int]._Int
            );
            loopCounter1_Int ++;

        }

        /*================================================
        END PROCESSING TAG COUNTER INT
        ================================================*/



        /*================================================
        PROCESSING TAG COUNTER NAME STRING
        ================================================*/

        _MuseumAndVisitorAgnostic_Object.tagCounterTagName_String_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.tagCounterTagName_String_Array
            );

        loopCounter1_Int = 0;
        while(loopCounter1_Int < _TagCounter_Struct_Array.length){

            _MuseumAndVisitorAgnostic_Object.tagCounterTagName_String_Array.push(
                _TagCounter_Struct_Array[loopCounter1_Int]._Tag_Object.name_String
            );
            loopCounter1_Int ++;

        }

        /*================================================
        END PROCESSING TAG COUNTER NAME STRING
        ================================================*/



        return _TagCounter_Struct_Array;

    }










    private function set__VisitorMode_Enum(__VisitorMode_Enum:VisitorMode_Enum):VisitorMode_Enum{

        _VisitorMode_Enum = __VisitorMode_Enum;
        _MuseumAndVisitorAgnostic_Object.visitorMode_String = Std.string(_VisitorMode_Enum);
        return _VisitorMode_Enum;

    }










    private function set__VisitorVisitExhibition_Struct_Array(
        __VisitorVisitExhibition_Struct_Array:Array<VisitorVisitExhibition_Struct>
    ):Array<VisitorVisitExhibition_Struct>{

        _VisitorVisitExhibition_Struct_Array = __VisitorVisitExhibition_Struct_Array;

        _MuseumAndVisitorAgnostic_Object.visitorVisitExhibitionNameAlt_String_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.visitorVisitExhibitionNameAlt_String_Array
            );

        loopCounter1_Int = 0;
        while(loopCounter1_Int < _VisitorVisitExhibition_Struct_Array.length){

            _MuseumAndVisitorAgnostic_Object.visitorVisitExhibitionNameAlt_String_Array.push(
                _VisitorVisitExhibition_Struct_Array[loopCounter1_Int].exhibition_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String
            );
            loopCounter1_Int ++;

        }

        _MuseumAndVisitorAgnostic_Object.visitorVisitExhibitionTime_Int_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.visitorVisitExhibitionTime_Int_Array
            );

        loopCounter1_Int = 0;
        while(loopCounter1_Int < _VisitorVisitExhibition_Struct_Array.length){

            _MuseumAndVisitorAgnostic_Object.visitorVisitExhibitionTime_Int_Array.push(
                _VisitorVisitExhibition_Struct_Array[loopCounter1_Int].time_Int
            );
            loopCounter1_Int ++;

        }

        return _VisitorVisitExhibition_Struct_Array

    }










    private function set__VisitorVisitMuseum_Struct_Array(
        __VisitorVisitMuseum_Struct_Array:Array<VisitorVisitMuseum_Struct>
    ):Array<VisitorVisitMuseum_Struct>{

        _VisitorVisitMuseum_Struct_Array = __VisitorVisitMuseum_Struct_Array;

        _MuseumAndVisitorAgnostic_Object.visitorVisitMuseumTime_Int_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.visitorVisitMuseumTime_Int_Array
            );

        loopCounter1_Int = 0;
        while(loopCounter1_Int < _VisitorVisitMuseum_Struct_Array.length){

            _MuseumAndVisitorAgnostic_Object.visitorVisitMuseumTime_Int_Array.push(
                _VisitorVisitMuseum_Struct_Array[loopCounter1_Int].time_Int
            );
            loopCounter1_Int ++;

        }

        _MuseumAndVisitorAgnostic_Object.visitorVisitMuseumVisit_Int_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.visitorVisitMuseumVisit_Int_Array
            );

        loopCounter1_Int = 0;
        while(loopCounter1_Int < _VisitorVisitMuseum_Struct_Array.length){

            _MuseumAndVisitorAgnostic_Object.visitorVisitMuseumVisit_Int_Array.push(
                _VisitorVisitMuseum_Struct_Array[loopCounter1_Int].visit_Int
            );
            loopCounter1_Int ++;

        }

        return _VisitorVisitMuseum_Struct_Array

    }










    /*Setter function to set new current exhibition.
    If this function ran means that this visitor is arrived in the new exhibition.
    PENDING: Create calculation to calculate user interface layout.
    PENDING: For that I need to check the necessary height and necessary width variable in the old
        ObjectVisitor.hx.*/
    private function set_exhibitionCurrent_Museum_Object(__Museum_Object:Museum_Object):Museum_Object{

        /*If the exhibition current is the archive exhibition then...*/
        if(
            __Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String  == "EXH_ARC"                ||
            __Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String  == "Exhibition Archive"     ||
            __Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String  == "Archive Exhibition"
        ){

            /*If the newly visited exhibition is the exhibition archive then remove this visitor
                from main visitor array in collection global object.*/
            AddOrRemoveThisFromMain_MuseumAndVisitor_Object(false);

            /*Before I change the current exhibition, I need to remove this visitor from the child array
                of the parent object (exhibition object).
            Then reduce the amount of current visitor from the previous exhibition by one.
            After that I need to calculate whether the exhibition, room, and floor is crowded or not.
            And re - calculate its children local index for the exhibition object.
            This visitor just leave the exhibition into the new exhibition.*/
            SetupBeforeSetExhibitionCurrent_Visitor_Object();

            /*Change the current exhibition into archive exhibition.*/
            exhibitionCurrent_Museum_Object     = __Museum_Object;
            /*Set both variable for current floor and room to null because archive exhibition does
                not have neither room or floor.
            In the other hand archive exhibition is an imaginary exhibition.*/
            floorCurrent_Museum_Object          = null;
            roomCurrent_Museum_Object           = null;

            SetupAfterSetExhibitionCurrent_Visitor_Object(true);

        }
        /*If the visited exhibition is other than archive exhibition.*/
        else{

            /*Check this visitor whether this this visitor is in the main visitor array or not.
            If not then I need to put this visitor in the main array.
            So I need to check the existence of this object in the visitor main array first.*/
            AddOrRemoveThisFromMain_MuseumAndVisitor_Object(true);

            /*Before I change the current exhibition, I need to remove this visitor from the child array
                of the parent object (exhibition object).
            Then reduce the amount of current visitor from the previous exhibition by one.
            After that I need to calculate whether the exhibition, room, and floor is crowded or not.
            And re - calculate its children local index for the exhibition object.
            This visitor just leave the exhibition into the new exhibition.*/
            SetupBeforeSetExhibitionCurrent_Visitor_Object();

            /*Change the current new exhibition.*/
            exhibitionCurrent_Museum_Object     = __Museum_Object;
            /*Assign the current room and floor object accordingly.*/
            roomCurrent_Museum_Object           = exhibitionCurrent_Museum_Object.parent_Museum_Object;
            floorCurrent_Museum_Object          = roomCurrent_Museum_Object.parent_Museum_Object;

            SetupAfterSetExhibitionCurrent_Visitor_Object(false);

        }



        _MuseumAndVisitorAgnostic_Object.exhibitionCurrentNameAlt_String =
            exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String;



        return exhibitionCurrent_Museum_Object;

    }










    private function set_exhibitionTarget_Museum_Object_Array(
        __Museum_Object_Array:Array<Museum_Object>
    ):Array<Museum_Object>{

        exhibitionTarget_Museum_Object_Array = __Museum_Object_Array;


        /*Clear the agnostic array.*/
        _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array
            );

        /*Re - fill the agnostic array.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < exhibitionTarget_Museum_Object_Array.length){

            _MuseumAndVisitorAgnostic_Object.exhibitionTargetNameAlt_String_Array.push(
                exhibitionTarget_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String
            );
            loopCounter1_Int ++;

        }


        return exhibitionTarget_Museum_Object_Array;

    }










    private function set_exhibitionVisited_Museum_Object_Array(
        __Museum_Object_Array:Array<Museum_Object>
    ):Array<Museum_Object>{

        exhibitionVisited_Museum_Object_Array = __Museum_Object_Array;



        /*Clear the agnostic array.*/
        _MuseumAndVisitorAgnostic_Object.exhibitionVisitedNameAlt_String_Array =
            CollectionStaticFunction_Object.Clear_T_Array(
                _MuseumAndVisitorAgnostic_Object.exhibitionVisitedNameAlt_String_Array
            );

        /*Re - fill the agnostic array.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < exhibitionVisited_Museum_Object_Array.length){

            _MuseumAndVisitorAgnostic_Object.exhibitionVisitedNameAlt_String_Array.push(
                exhibitionVisited_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String
            );

            loopCounter1_Int ++;

        }



        return exhibitionVisited_Museum_Object_Array;

    }










    /*Function that is collection of operations that are neccessary to be done after a visitor
        arrive at new exhibition.*/
    private function SetupAfterSetExhibitionCurrent_Visitor_Object(
        _exhibitionArchive_Bool:Bool
    ):Visitor_Object{

        if(_exhibitionArchive_Bool == true){

            /*Push this visitor in the child object array from the new current exhibition.*/
            AddOrRemoveThisFromParent_MuseumAndVisitor_Object(
                true,
                exhibitionCurrent_Museum_Object._Child_Struct.childVisitor_Object_Array
            );

            /*Add one integer in current visitor and total visitor of the corresponding museum
                object.*/
            exhibitionCurrent_Museum_Object._VisitorCount_Struct.current_Int  ++;
            exhibitionCurrent_Museum_Object._VisitorCount_Struct.total_Int    ++;

            /*Determine whether the current museum object is full or not.
            And then calculate children local index for each visitor object.*/
            exhibitionCurrent_Museum_Object.DetermineChild_Museum_Object();

        }
        else if(_exhibitionArchive_Bool == false){

            /*Push this visitor in the child object array from the new current exhibition.*/
            AddOrRemoveThisFromParent_MuseumAndVisitor_Object(
                true,
                exhibitionCurrent_Museum_Object._Child_Struct.childVisitor_Object_Array
            );

            /*Add one integer in current visitor and total visitor of the corresponding museum
                object.*/
            exhibitionCurrent_Museum_Object._VisitorCount_Struct.current_Int  ++;
            exhibitionCurrent_Museum_Object._VisitorCount_Struct.total_Int    ++;
            floorCurrent_Museum_Object._VisitorCount_Struct.current_Int       ++;
            floorCurrent_Museum_Object._VisitorCount_Struct.total_Int         ++;
            roomCurrent_Museum_Object._VisitorCount_Struct.current_Int        ++;
            roomCurrent_Museum_Object._VisitorCount_Struct.total_Int          ++;

            /*Determine whether the current museum object is full or not.
            And then calculate children local index for each visitor object.*/
            exhibitionCurrent_Museum_Object
                .DetermineChild_Museum_Object()
                .DetermineFull_Museum_Object();
            floorCurrent_Museum_Object.DetermineFull_Museum_Object();
            roomCurrent_Museum_Object.DetermineFull_Museum_Object();

            /*Put the newly visited exhibition into the array of visited exhibition.
            And sync it with the agnostic object.*/
            CollectionStaticFunction_Object.SyncPush_T_Array(
                exhibitionCurrent_Museum_Object,
                exhibitionVisited_Museum_Object_Array,
                exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                _MuseumAndVisitorAgnostic_Object.exhibitionVisitedNameAlt_String_Array
            );

            /*Set of functions that need to be executed when this visitor visit a new exhibition.*/
            CalculateScore_Visitor_Object().
            CalculateTagCounter_Visitor_Object
                (_MuseumAndVisitorAgnostic_Object.amountOfPreviousVisitedExhibitionCheck_Int).
            DetermineFinished_Visitor_Object().
            GenerateSentence_Visitor_Object().
            RetrieveExplanation_Visitor_Object();

        }



        /*When a visitor change into archive exhibition there are only these two functions
            that is need to be ran.
        Determine index local.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < exhibitionCurrent_Museum_Object._Child_Struct.childVisitor_Object_Array.length){

            exhibitionCurrent_Museum_Object._Child_Struct.childVisitor_Object_Array[loopCounter1_Int].DetermineIndexLocal_MuseumAndVisitor_Object();

            loopCounter1_Int ++;

        }
        /*Generate exhibition target array.*/
        loopCounter1_Int = 0;
        while(loopCounter1_Int < _CollectionGlobal_Object._Visitor_Object_Array.length){

            _CollectionGlobal_Object._Visitor_Object_Array[loopCounter1_Int].
                GenerateExhibitionTarget_Visitor_Object(
                    _CollectionGlobal_Object._Visitor_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object.amountOfTargetExhibition_Int
                );

            loopCounter1_Int ++;

        }



        return this;

    }










    /*Set of operation that is necessary before changing current exhibition into new exhibition
        (this visitor is moving into new exhibition).*/
    private function SetupBeforeSetExhibitionCurrent_Visitor_Object():Visitor_Object{

        if(exhibitionCurrent_Museum_Object != null){

            AddOrRemoveThisFromParent_MuseumAndVisitor_Object(
                false,
                exhibitionCurrent_Museum_Object._Child_Struct.childVisitor_Object_Array
            );

            exhibitionCurrent_Museum_Object._VisitorCount_Struct.current_Int  --;
            exhibitionCurrent_Museum_Object
                .DetermineChild_Museum_Object()
                .DetermineFull_Museum_Object();

            if(
                floorCurrent_Museum_Object  != null &&
                roomCurrent_Museum_Object   != null
            ){

                floorCurrent_Museum_Object._VisitorCount_Struct.current_Int --;
                floorCurrent_Museum_Object.DetermineFull_Museum_Object();
                roomCurrent_Museum_Object._VisitorCount_Struct.current_Int --;
                roomCurrent_Museum_Object.DetermineFull_Museum_Object();

            }

        }



        return this;

    }










    /*Sort the tag counter array based on the integer value.
    The bigger the integer value is the bigger interest of this visitor toward any exhibitions
        that contains that tag.*/
    private function SortTagCounter_Visitor_Object():Visitor_Object{

        _TagCounter_Struct_Array.sort(
            function(
                _a_TagCounter_Struct:TagCounter_Struct,
                _b_TagCounter_Struct:TagCounter_Struct
            ){ return _b_TagCounter_Struct._Int - _a_TagCounter_Struct._Int; }
        );
        return this;

    }










}