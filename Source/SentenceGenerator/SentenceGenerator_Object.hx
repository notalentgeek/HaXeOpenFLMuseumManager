import Enum_Collection;
import Struct_Collection;





class SentenceGenerator_Object{





    /*==================================================*/
    private var _Global_Object      :Global_Object      = null;
    private var _Visitor_Object     :Visitor_Object     = null;
    /*==================================================*/





    /*==================================================*/
    public function new(
        __Global_Object:Global_Object,
        __Visitor_Object:Visitor_Object
    ){

        _Global_Object      = __Global_Object;
        _Visitor_Object     = __Visitor_Object;

    }
    /*==================================================*/





    /*==================================================
    This function is used to return a word from pattern.
    For example pattern can request a verb1 word.
    So verb1 is the tag sub type
    While, the main tag type is verb.*/
    private function GenerateWord_String(
        __TagType_Enum      :TagType_Enum,
        __TagTypeSub_Enum   :TagTypeSub_Enum
    ){

        /*These variables are to determine what kind of word that is requested from the pattern.*/
        var negative_Bool   :Bool = false;
        var neutral_Bool    :Bool = false;
        var positive_Bool   :Bool = false;





        if(
            _Visitor_Object._MuseumAndVisitorAgnostic_Object.visitedCorrectExhibition_Bool  == true &&
            _Visitor_Object._MuseumAndVisitorAgnostic_Object.score_Int                      >= 0
        ){

            negative_Bool   = false;
            neutral_Bool    = true;
            positive_Bool   = true;

        }
        else if(
            _Visitor_Object._MuseumAndVisitorAgnostic_Object.visitedCorrectExhibition_Bool == false ||
            _Visitor_Object._MuseumAndVisitorAgnostic_Object.score_Int < 0
        ){

            negative_Bool   = true;
            neutral_Bool    = true;
            positive_Bool   = false;

        }
        else{

            negative_Bool   = true;
            neutral_Bool    = true;
            positive_Bool   = true;

        }





        var general_Bool            :Bool               = false;
        var randomIndex_Int         :Int                = -1;
        var tag_String_Array        :Array<String>      = new Array<String>();





        /*First we need to search over the private tag collection (tag object within the visitor object).
        PENDING: Tag that is inside an exhibition should also include tag from general tag array.
        PENDING: So, I need to change the a bit (add) some tag from general tag array.
        PENDING: The scheme for this class is supposed to be better. Check below.





        PENDING: Here it is now.
        PENDING: This program check all tag in the tag array of a certain visitor.
        PENDING: Then, this program check whether a specific word that requested by the pattern is available or not.
        PENDING: If not, then the specific word will be taken from the general tag object array.
        PENDING: For example the pattern requested for an adjective word. However, the visitor has no adjective word in
            his/her tag array. Hence the adjective word will be taken randomly from tag general array.





        PENDING: Here it is supposed to be.
        PENDING: The first thing I need to do is to check whether a tag object in player is a general or non - general
            tag object.
        PENDING: Then, regardless whether it is general or non - general tag I need to assign it into the tag_String_Array.
        PENDING: If by the end of this method tag_String_Array is still completemy empty then this program should take random array
            from tag general array. This is not good enough, later I need to make so that the tag that a certain visitor has
            determine the best pattern that this sentence generator object should use.

        */
        var loopCounter2_Int:Int = 0;
        while(loopCounter2_Int < _Visitor_Object._Tag_Object_Array.length){

            if(_Visitor_Object._Tag_Object_Array[loopCounter2_Int]._TagType_Enum == __TagType_Enum){

                /*The Reflect.callMethod() is a function to call a function within an object.
                Within this Reflect.callMethod() I can call a specific function from an object,
                    without writting so many if statements.*/
                if(
                    _Visitor_Object._Tag_Object_Array[loopCounter2_Int]._TagFeel_Enum == NEGATIVE &&
                    negative_Bool == true
                ){

                    tag_String_Array.push(
                        Reflect.callMethod(
                            _Visitor_Object._Tag_Object_Array[loopCounter2_Int],
                            DetermineTag_String(
                                __TagTypeSub_Enum,
                                _Visitor_Object._Tag_Object_Array[loopCounter2_Int]
                            ),
                            new Array<Dynamic>()
                        )
                    );

                }





                if(
                    _Visitor_Object._Tag_Object_Array[loopCounter2_Int]._TagFeel_Enum == NEUTRAL &&
                    neutral_Bool == true
                ){

                    tag_String_Array.push(
                        Reflect.callMethod(_Visitor_Object._Tag_Object_Array[loopCounter2_Int],
                            DetermineTag_String(
                                __TagTypeSub_Enum,
                                _Visitor_Object._Tag_Object_Array[loopCounter2_Int]
                            ),
                            new Array<Dynamic>()
                        )
                    );

                }





                if(
                    _Visitor_Object._Tag_Object_Array[loopCounter2_Int]._TagFeel_Enum == POSITIVE &&
                    positive_Bool == true
                ){

                    tag_String_Array.push(
                        Reflect.callMethod(_Visitor_Object._Tag_Object_Array[loopCounter2_Int],
                            DetermineTag_String(
                                __TagTypeSub_Enum,
                                _Visitor_Object._Tag_Object_Array[loopCounter2_Int]
                            ),
                            new Array<Dynamic>()
                        )
                    );

                }

            }





            loopCounter2_Int ++;

        }





        /*If the while loop returns zero element being added to the string array then get the tag from general tag library.*/
        if(tag_String_Array.length == 0){

            general_Bool = true;
            loopCounter2_Int = 0;

            while(loopCounter2_Int < _Global_Object.general_Tag_Object_Array.length){

                if(_Global_Object.general_Tag_Object_Array[loopCounter2_Int]._TagType_Enum == __TagType_Enum){

                    if(
                        _Global_Object.general_Tag_Object_Array[loopCounter2_Int]._TagFeel_Enum == NEGATIVE &&
                        negative_Bool == true
                    ){

                        tag_String_Array.push(
                            Reflect.callMethod(_Global_Object.general_Tag_Object_Array[loopCounter2_Int],
                                DetermineTag_String(
                                    __TagTypeSub_Enum,
                                    _Global_Object.general_Tag_Object_Array[loopCounter2_Int]
                                ),
                                new Array<Dynamic>()
                            )
                        );

                    }





                    if(
                        _Global_Object.general_Tag_Object_Array[loopCounter2_Int]._TagFeel_Enum == NEUTRAL &&
                        neutral_Bool == true
                    ){

                        tag_String_Array.push(
                            Reflect.callMethod(_Global_Object.general_Tag_Object_Array[loopCounter2_Int],
                                DetermineTag_String(
                                    __TagTypeSub_Enum,
                                    _Global_Object.general_Tag_Object_Array[loopCounter2_Int]
                                ),
                                new Array<Dynamic>()
                            )
                        );

                    }





                    if(
                        _Global_Object.general_Tag_Object_Array[loopCounter2_Int]._TagFeel_Enum == POSITIVE &&
                        positive_Bool == true
                    ){

                        tag_String_Array.push(
                            Reflect.callMethod(_Global_Object.general_Tag_Object_Array[loopCounter2_Int],
                                DetermineTag_String(
                                    __TagTypeSub_Enum,
                                    _Global_Object.general_Tag_Object_Array[loopCounter2_Int]
                                ),
                                new Array<Dynamic>()
                            )
                        );

                    }

                }





                loopCounter2_Int ++;

            }

        }





        /*These codes below is for generating company words.
        Company word is taken from the tag object itself when first time it created (taken from the Wordnik dictionary).
        So in the ned of this method the string returned will be a word with additional company word.
        So mostly the result will be two or more words (phrase). Unless the word is unknown to Wordnik dictionary.*/
        randomIndex_Int                     = RandomNumberGenerator_Int(tag_String_Array.length);
        /*Get random tag string from the tag string array. I guess this is the most important part.
        After this I only need to deal with this one tag object.
        return_String itself is already sufficient but adding company words will make the sentence generated even better.
        PENDING: Add tag feel into the company words. At this moment the company words do not have "feel" yet.*/
        var return_String   :String         = tag_String_Array[randomIndex_Int];
        /*Get the tag object from the tag string I received earlier.*/
        var _Tag_Object     :Tag_Object     = StaticFunction_Collection.Find_Tag_Object(_Global_Object, general_Bool, return_String);





        /*Only take company word if the requested word in none other than adjective, adverb, and verb.*/
        if(
            __TagType_Enum != ADJ                   &&
            __TagType_Enum != ADV                   &&
            __TagType_Enum != VERB_INTRANSITIVE     &&
            __TagType_Enum != VERB_TRANSITIVE
        ){

            if(_Tag_Object != null){

                if(_Tag_Object._CompanyWord_Struct_Array.length > 0){

                    /*Take one random struct in the tag object.*/
                    var _CompanyWord_Struct         :CompanyWord_Struct     = _Tag_Object._CompanyWord_Struct_Array[Math.floor(Math.random()*_Tag_Object._CompanyWord_Struct_Array.length)];
                    /*The companyWord_String_Array is an array that contain one or more elements.
                    For every space in the random company word it will generate another array.*/
                    var companyWord_String_Array    :Array<String>          = _CompanyWord_Struct.companyWord_String.split(" ");
                    var companyWord_String          :String                 = "";
                    var loopCounter2_Int            :Int                    = 0;





                    /*This while loop is to fix the company word capital letter.*/
                    while(loopCounter2_Int < companyWord_String_Array.length){

                        /*Change the first letter of the company word into capital letter.*/
                        companyWord_String_Array[loopCounter2_Int] =
                            companyWord_String_Array[loopCounter2_Int].substring(0, 1).toUpperCase() +
                            companyWord_String_Array[loopCounter2_Int].substring(1, companyWord_String_Array[loopCounter2_Int].length).toLowerCase();





                        /*For the first word in the company word I should not put a space in between it.*/
                        if(loopCounter2_Int == 0){ companyWord_String = companyWord_String + companyWord_String_Array[loopCounter2_Int]; }
                        /*However, for the other than first company words need to have space in between.
                        Hence, in the of this method I will have a good fully baked English phrase.*/
                        else{ companyWord_String = companyWord_String + " " + companyWord_String_Array[loopCounter2_Int]; }

                        loopCounter2_Int ++;

                    }





                    if(_CompanyWord_Struct._CompanyWord_Enum == PRE){ return_String = companyWord_String + " " + return_String; }
                    else if(_CompanyWord_Struct._CompanyWord_Enum == SUF){ return_String = return_String + " " + companyWord_String; }

                }

            }

        }





        return return_String;

    }
    /*==================================================*/





    /*==================================================
    A function to return a sub type String of the tag.*/
    private function DetermineTag_String(__TagTypeSub_Enum:TagTypeSub_Enum, __Tag_Object:Tag_Object){

        if(__TagTypeSub_Enum == ADJ)                { return __Tag_Object._TagAgnostic_Object.adjective_String; }
        else if(__TagTypeSub_Enum == ADV)           { return __Tag_Object._TagAgnostic_Object.adverb_String; }
        else if(__TagTypeSub_Enum == NOUN)          { return __Tag_Object._TagAgnostic_Object.noun_String; }
        else if(__TagTypeSub_Enum == NOUN_POS)      { return __Tag_Object._TagAgnostic_Object.nounPos_String; }
        else if(__TagTypeSub_Enum == NOUN_S)        { return __Tag_Object._TagAgnostic_Object.nounS_String; }
        else if(__TagTypeSub_Enum == NOUN_S_POS)    { return __Tag_Object._TagAgnostic_Object.nounSPos_String; }
        else if(__TagTypeSub_Enum == VERB_1)        { return __Tag_Object._TagAgnostic_Object.verb1_String; }
        else if(__TagTypeSub_Enum == VERB_2)        { return __Tag_Object._TagAgnostic_Object.verb2_String; }
        else if(__TagTypeSub_Enum == VERB_3)        { return __Tag_Object._TagAgnostic_Object.verb3_String; }
        else if(__TagTypeSub_Enum == VERB_ING)      { return __Tag_Object._TagAgnostic_Object.verbIng_String; }
        else if(__TagTypeSub_Enum == VERB_S)        { return __Tag_Object._TagAgnostic_Object.verbS_String; }





        return null;

    }
    /*==================================================*/





    /*==================================================
    This function is used to generate a sentence.
    So there is a function to generate word, phrase, and then there is this function to generate a sentence.*/
    private function GenerateSentence_String(_pattern_String:String){

        /*A variable to store the used pattern.*/
        var pattern_String:String = _pattern_String;
        /*A variable to store the sentence, this is the variable that will be returned
            from this function.*/
        var sentence_String:String = "";





        /*Loop through all letter in the pattern string.
        I need to be careful here.
        The code for converting symbol in pattern into a sentence is two letter.
        So the increment if the next letter is actually a convertable symbol is two.
        While if the next letter is not belong to any symbol the counter for this loop below is one.*/
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < pattern_String.length){

            /*A variable to store the code (if the letter is actually a code.)*/
            var code_String:String = "";
            /*Here are letters and numbers that is used for symbol.*/
            var code_String_Array:Array<String> = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "A", "B", "C", "D", "E", "F"];





            /*There are two letter for a symbol hence I need to check for each letter.
            I use scan variables below to check whether or not the next two letters from the pattern
                is a convertable symbol.
            If the second letter that is in the scan variable number two is one from code_String_Array then
                the the first and the second letter combined is a convertable symbol.*/
            var scan1_String:String = pattern_String.substring(loopCounter1_Int, loopCounter1_Int + 1);
            if(code_String_Array.indexOf(scan1_String) > -1){

                var scan2_String:String = pattern_String.substring(loopCounter1_Int + 1, loopCounter1_Int + 2);
                if(code_String_Array.indexOf(scan2_String) > -1){
                    code_String = scan1_String + scan2_String;
                    loopCounter1_Int += 2;
                }
                else{ loopCounter1_Int ++; }

            }
            else{ loopCounter1_Int ++; }





            /*word_String is used to contain either the word itself if the current letter in the
                patter is not a symbol.
            Or the word from GenerateWord_String if the the two current letter is a symbol.*/
            var word_String:String = "";





            /*Example symbol code.
            For example 11 will result in this method to request an adjective tag and adjective String.
            Another example, 34 will result in this method to request a noun alive abstract and the
                possesion word of the noun. The example word will be man's or girl's.





            ADJ 1
            ADV 2
            NOUN_ALIVE_ABSTRACT 3
            NOUN_ALIVE_CONCRETE 4
            NOUN_INANIMATE_HOLD_ABSTRACT 5
            NOUN_INANIMATE_HOLD_CONCRETE 6
            NOUN_INANIMATE_PLACE_ABSTRACT 7
            NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER 8
            NOUN_INANIMATE_PLACE_CONCRETE_OWNER 9
            NOUN_INANIMATE_SEE_ABSTRACT 0
            NOUN_INANIMATE_SEE_CONCRETE A
            NOUN_INANIMATE_TITLE B
            NOUN_INANIMATE_WEAR_ABSTRACT C
            NOUN_INANIMATE_WEAR_CONCRETE D
            VERB_INTRANSITIVE E
            VERB_TRANSITIVE F





            ADJ 1
            ADV 2
            NOUN 3
            NOUN_POS 4
            NOUN_S 5
            NOUN_S_POS 6
            VERB_1 7
            VERB_2 8
            VERB_3 9
            VERB_ING 0
            VERB_S A*/





            /*PENDING: Create all if statements for the rest of the possible combinations.*/
            if(code_String == "11"){ word_String = GenerateWord_String(ADJ, ADJ); }
            else if(code_String == "22"){ word_String = GenerateWord_String(ADV, ADV); }
            else if(code_String == "33"){ word_String = GenerateWord_String(NOUN_ALIVE_ABSTRACT, NOUN); }
            /*This if statement is for noun alive concrete like human name, Andy, Tony, Mira, etc.
            This if statement is the only if statement that is not using GenerateWord_String() method.*/
            else if(code_String == "43"){

                var _43Tag_String_Array:Array<String> = new Array<String>();
                var randomIndex_Int:Int = 0;





                var loopCounter2_Int:Int = 0;
                while(loopCounter2_Int < _Visitor_Object._Tag_Object_Array.length){

                    if(_Visitor_Object._Tag_Object_Array[loopCounter2_Int]._TagType_Enum == NOUN_ALIVE_CONCRETE)
                        { _43Tag_String_Array.push(_Visitor_Object._Tag_Object_Array[loopCounter2_Int]._TagAgnostic_Object.noun_String); }





                    loopCounter2_Int ++;

                }





                /*If the _43Tag_String_Array length is still zero then the specific tag is not in the visitor tag array.
                Hence, search it from general tag array.*/
                if(_43Tag_String_Array.length == 0){

                    loopCounter2_Int = 0;
                    while(loopCounter2_Int < _Global_Object.general_Tag_Object_Array.length){

                        if(_Global_Object.general_Tag_Object_Array[loopCounter2_Int]._TagType_Enum == NOUN_ALIVE_CONCRETE)
                            { _43Tag_String_Array.push(_Global_Object.general_Tag_Object_Array[loopCounter2_Int]._TagAgnostic_Object.noun_String); }





                        loopCounter2_Int ++;

                    }

                }





                /*Take random name from the array.*/
                randomIndex_Int = RandomNumberGenerator_Int(_43Tag_String_Array.length);





                /*If this visitor object has no name then use the word from the _43Tag_String_Array.*/
                if(
                    _Visitor_Object._MuseumAndVisitorAgnostic_Object.name_String == ""      ||
                    _Visitor_Object._MuseumAndVisitorAgnostic_Object.name_String == " "     ||
                    _Visitor_Object._MuseumAndVisitorAgnostic_Object.name_String == null
                ){ word_String = _43Tag_String_Array[randomIndex_Int]; }
                /*If this visitor object has name.
                The sentence generator has 50% chance to either use the name of the visitor or use the
                    word from _43Tag_String_Array/*/
                else if(_Visitor_Object._MuseumAndVisitorAgnostic_Object.name_String != ""){

                    if(Math.random() > 0.5){ word_String = _Visitor_Object._MuseumAndVisitorAgnostic_Object.name_String; }
                    else{ word_String = _43Tag_String_Array[randomIndex_Int]; }

                }

            }
            else if(code_String == "65"){ word_String = GenerateWord_String(NOUN_INANIMATE_HOLD_CONCRETE, NOUN_S); }
            else if(code_String == "93"){ word_String = GenerateWord_String(NOUN_INANIMATE_PLACE_CONCRETE_OWNER, NOUN); }
            else if(code_String == "A3"){ word_String = GenerateWord_String(NOUN_INANIMATE_SEE_CONCRETE, NOUN); }
            else if(code_String == "E7"){ word_String = GenerateWord_String(VERB_INTRANSITIVE, VERB_1); }
            else if(code_String == "E8"){ word_String = GenerateWord_String(VERB_INTRANSITIVE, VERB_2); }
            else if(code_String == "EA"){ word_String = GenerateWord_String(VERB_INTRANSITIVE, VERB_S); }
            /*If the code_String is not listed here then it is either the if function is not made yet or
            it is not a code symbol hence return the letter as the first scan variable.*/
            else { word_String = scan1_String; }





            /*Add the word up until the pattern has nothing to scan.
            At this point this program is building the sentence.*/
            sentence_String = sentence_String + word_String;

        }





        return sentence_String;

    }
    /*==================================================*/





    /*==================================================
    Function to generate random number based on a length of something (usually array).
    PENDING: Put this method into the static function collection file.*/
    private function RandomNumberGenerator_Int(_randomNumberInt:Int){ return Math.round(Math.random()*(_randomNumberInt - 1)); }
    /*==================================================*/





    /*==================================================
    A function to fix capital lettering.
    Basically this function is just to make things look nice.*/
    private function WordFixString(_fixString:String){

        var fix1_String:String = _fixString.substring(0, 1).toUpperCase();
        var fix2_String:String = _fixString.substring(1, _fixString.length);
        var fix3_String:String = fix1_String + fix2_String;

        return fix3_String;
    }
    /*==================================================*/





    /*==================================================
    A function to generate three sentences.*/
    public function GenerateSentence3String(_Global_Object:Global_Object){



        var pattern_String_Array_2D:Array<Array<String>> = new Array<Array<String>>();
        /*Here are some pattern to generate the sentence.*/
        pattern_String_Array_2D = [
            [
                /*An old silent pond...
                A frog jumps into the pond,
                splash! Silence again.*/
                "43 Owns 93...",
                "43 EA On The 93.",
                "The 33 EA Again."
            ],
            [
                /*Autumn moonlight—
                a worm digs silently
                into the chestnut.*/
                "A3.",
                "43 EA 22.",
                "Into The 93."
            ],
            [
                /*Lightning flash—
                what I thought were faces
                are plumes of pampas grass.*/
                "A3 EA 22.",
                "What I E8 Were 33...",
                "Are 65 Of 93."
            ]
        ];





        /*Take random pattern.*/
        var patternIndex_Int            :Int                = RandomNumberGenerator_Int(pattern_String_Array_2D.length);
        /*Take and array from the two dimensional array.*/
        var patternIndex_String_Array   :Array<String>      = pattern_String_Array_2D[patternIndex_Int];
        /*The result.*/
        var threeSentence_String        :String             = "";





        /*Generate the sentence per lines.*/
        var loopCounter2_Int:Int = 0;
        while(loopCounter2_Int < patternIndex_String_Array.length){

            var sentence_String:String = GenerateSentence_String(patternIndex_String_Array[loopCounter2_Int]);
            /*Add line break in the end of every lines.*/
            if(loopCounter2_Int != (patternIndex_String_Array.length - 1))
                { threeSentence_String = Std.string(threeSentence_String + sentence_String + "\n"); }





            loopCounter2_Int ++;

        }





        return threeSentence_String;
    }
    /*==================================================*/






}
