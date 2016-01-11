import CollectionEnum;
import CollectionStruct;
class ObjectGeneratorSentence{
    public function new(){}
    private function AddWordString(
        _collectionGlobalObject:CollectionGlobal,
        _tagGetFunction:haxe.Constraints.Function,
        _tagTypeEnum:EnumTagType,
        _visitorObject:ObjectVisitor
    ){
        var getNegativeBool:Bool = false;
        var getNeutralBool:Bool = false;
        var getPositiveBool:Bool = false;
        if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() >= 0){
            getNegativeBool = false;
            getNeutralBool = true;
            getPositiveBool = true;
        }
        else if(_visitorObject.GetVisitCorrectExhibitionBool() == false || _visitorObject.GetScoreInt() < 0){
            getNegativeBool = true;
            getNeutralBool = true;
            getPositiveBool = false;
        }
        else{
            getNegativeBool = true;
            getNeutralBool = true;
            getPositiveBool = true;
        }
        //trace("getNegativeBool " + getNegativeBool);
        //trace("getNeutralBool " + getNeutralBool);
        //trace("getPositiveBool " + getPositiveBool);
        var tagStringArray:Array<String> = new Array<String>();
        var randomIndexInt:Int = -1;
        var loopCounterPrivate1Int:Int = 0;
        /*First we need to search over the private tag collection (tag object within the visitor object).*/
        while(loopCounterPrivate1Int < _visitorObject.GetTagObjectArray().length){
            //trace(loopCounterPrivate1Int);
            //trace(_tagTypeEnum);
            //trace(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetNameString() + " " + _visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetFeelEnum());
            //if(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetTypeEnum() != VERB_TRANSITIVE)trace(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetTypeEnum());
            
            if(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetTypeEnum() == _tagTypeEnum){
                trace("TEST1.");
                if(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == NEGATIVE && getNegativeBool == true){
                    tagStringArray.push(Reflect.callMethod(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int], _tagGetFunction, new Array<Dynamic>()));
                }
                if(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == NEUTRAL && getNeutralBool == true){
                    tagStringArray.push(Reflect.callMethod(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int], _tagGetFunction, new Array<Dynamic>()));
                }
                if(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == POSITIVE && getPositiveBool == true){
                    tagStringArray.push(Reflect.callMethod(_visitorObject.GetTagObjectArray()[loopCounterPrivate1Int], _tagGetFunction, new Array<Dynamic>()));
                }
            }
            loopCounterPrivate1Int ++;
        }
        /*If the while loop returns zero element being added to the string array then get the tag from general tag library.*/
        if(tagStringArray.length == 0){
            loopCounterPrivate1Int = 0;
            while(loopCounterPrivate1Int < _collectionGlobalObject.GetTagGeneralObjectArray().length){
                //trace("TEST2.");
                //trace(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetFeelEnum());
                trace(loopCounterPrivate1Int);
                trace(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetNameString());
                if(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetTypeEnum() != VERB_TRANSITIVE)trace(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetTypeEnum() + " " +  _tagTypeEnum);
                if(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetTypeEnum() == _tagTypeEnum){
                    trace("TEST3.");
                    if(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == NEGATIVE && getNegativeBool == true){
                        tagStringArray.push(Reflect.callMethod(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int], _tagGetFunction, new Array<Dynamic>()));
                    }
                    if(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == NEUTRAL && getNeutralBool == true){
                        trace("TEST4.");
                        tagStringArray.push(Reflect.callMethod(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int], _tagGetFunction, new Array<Dynamic>()));
                    }
                    if(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == POSITIVE && getPositiveBool == true){
                        trace("TEST5.");
                        tagStringArray.push(Reflect.callMethod(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int], _tagGetFunction, new Array<Dynamic>()));
                    }
                }
                loopCounterPrivate1Int ++;
            }
        }
        randomIndexInt = RandomNumberGeneratorInt(tagStringArray.length);
        var returnString:String = tagStringArray[randomIndexInt];
        //trace(tagStringArray.length);
        return returnString;
    }
    private function GenerateSentenceString(_collectionGlobalObject:CollectionGlobal, _patternString:String, _visitorObject:ObjectVisitor){
        var loopCounter1Int:Int = 0;
        var patternString:String = _patternString;
        var sentenceString:String = "";
        while(loopCounter1Int < patternString.length){
            var codeString:String = "";
            var codeStringArray:Array<String> = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "A", "B", "C", "D", "E", "F"];
            var scan1String:String = patternString.substring(loopCounter1Int, loopCounter1Int + 1);
            if(codeStringArray.indexOf(scan1String) > -1){
                var scan2String:String = patternString.substring(loopCounter1Int + 1, loopCounter1Int + 2);
                if(codeStringArray.indexOf(scan2String) > -1){
                    codeString = scan1String + scan2String;
                    loopCounter1Int += 2;
                }
                else{ loopCounter1Int ++; }
            }
            else{ loopCounter1Int ++; }
            var wordString:String = "";

            /*
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
            VERB_S A
            */

            if(codeString == "11"){
                wordString = AddWordString(_collectionGlobalObject, ObjectTag.GetAdjectiveString, ADJ, _visitorObject);
            }
            else if(codeString == "22"){
                wordString = AddWordString(_collectionGlobalObject, ObjectTag.GetAdverbString, ADV, _visitorObject);
            }
            else if(codeString == "43"){
                var _43TagStringArray:Array<String> = new Array<String>();
                var loopCounter2Int:Int = 0;
                var randomIndexInt:Int = 0;
                while(loopCounter2Int < _visitorObject.GetTagObjectArray().length){
                    if(_visitorObject.GetTagObjectArray()[loopCounter2Int].GetTypeEnum() == NOUN_ALIVE_CONCRETE){
                        _43TagStringArray.push(_visitorObject.GetTagObjectArray()[loopCounter2Int].GetNameString());
                    }
                    loopCounter2Int ++;
                }
                if(_43TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralObjectArray().length){
                        if(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter2Int].GetTypeEnum() == NOUN_ALIVE_CONCRETE){
                            _43TagStringArray.push(_collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter2Int].GetNameString());
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_43TagStringArray.length);
                if(_visitorObject.GetNameString() == ""){
                    wordString = _43TagStringArray[randomIndexInt];
                }
                else if(_visitorObject.GetNameString() != ""){
                    if(Math.random() > 0.5){
                        wordString = _visitorObject.GetNameString();
                    }
                    else{ wordString = _43TagStringArray[randomIndexInt]; }
                }
            }
            else if(codeString == "65"){
                wordString = AddWordString(_collectionGlobalObject, ObjectTag.GetNounSString, NOUN_INANIMATE_HOLD_CONCRETE, _visitorObject);
            }
            else if(codeString == "93"){
                wordString = AddWordString(_collectionGlobalObject, ObjectTag.GetNounString, NOUN_INANIMATE_PLACE_CONCRETE_OWNER, _visitorObject);
            }
            else if(codeString == "A3"){
                wordString = AddWordString(_collectionGlobalObject, ObjectTag.GetNounString, NOUN_INANIMATE_SEE_CONCRETE, _visitorObject);
            }
            else if(codeString == "E7"){
                wordString = AddWordString(_collectionGlobalObject, ObjectTag.GetVerb1String, VERB_INTRANSITIVE, _visitorObject);
            }
            else if(codeString == "E8"){
                wordString = AddWordString(_collectionGlobalObject, ObjectTag.GetVerb2String, VERB_INTRANSITIVE, _visitorObject);
            }
            else if(codeString == "EA"){
                wordString = AddWordString(_collectionGlobalObject, ObjectTag.GetVerbSString, VERB_INTRANSITIVE, _visitorObject);
            }
            else{
                wordString = scan1String;
            }
            sentenceString = sentenceString + wordString;
        }
        return sentenceString;
    }
    private function RandomNumberGeneratorInt(_randomNumberInt:Int){ return Math.round(Math.random()*(_randomNumberInt - 1)); }
    private function WordFixString(_fixString:String){ return _fixString.substring(0, 1).toUpperCase() + _fixString.substring(1, _fixString.length); }
    public function GenerateSentence3String(_collectionGlobalObject:CollectionGlobal, _visitorObject:ObjectVisitor){
        var patternStringArray2D:Array<Array<String>> = new Array<Array<String>>();
        patternStringArray2D = [

            [

                /*
                An old silent pond...
                A frog jumps into the pond,
                splash! Silence again.
                */
                "11 93...",
                "43 EA on the 93.",
                "E7 again."

            ],
            [

                /*
                Autumn moonlight—
                a worm digs silently
                into the chestnut.
                */
                "11 A3.",
                "43 EA 22.",
                "Into the 93."

            ],
            [

                /*
                Lightning flash—
                what I thought were faces
                are plumes of pampas grass.
                */
                "A3 EA.",
                "What I E8 were A3...",
                "Are 65 of 93."

            ]

        ];
        var stringPatternIndexInt:Int = RandomNumberGeneratorInt(patternStringArray2D.length);
        var stringPatternIndexString:Array<String> = patternStringArray2D[stringPatternIndexInt];
        var threeSentenceString:String = "";
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < 3){
            if(loopCounter1Int == 0){ threeSentenceString = GenerateSentenceString(_collectionGlobalObject, stringPatternIndexString[loopCounter1Int], _visitorObject); }
            else{ threeSentenceString = threeSentenceString + "\n" + GenerateSentenceString(_collectionGlobalObject, stringPatternIndexString[loopCounter1Int], _visitorObject); }
            loopCounter1Int ++;
        }
        return threeSentenceString;
    }
}