import CollectionEnum;
import CollectionStruct;
class ObjectGeneratorSentence{
    public function new(){}
    private function GenerateSentenceString(_collectionGlobalObject:CollectionGlobal, _patternString:String, _visitorObject:ObjectVisitor){
        var loopCounter1Int:Int = 0;
        var patternString:String = _patternString;
        var sentenceString:String = "";
        var tagStructArray:Array<StructTag> = new Array<StructTag>();
        tagStructArray = [for(k in _visitorObject.GetTagStructMap().keys()) k];
        //trace("GENERATE.");
        while(loopCounter1Int < patternString.length){
            var codeString:String = "";
            var codeStringArray:Array<String> = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "A", "B", "C", "D", "E", "F"];
            var scan1String:String = patternString.substring(loopCounter1Int, loopCounter1Int + 1);
            if(codeStringArray.indexOf(scan1String) > -1){
                var scan2String:String = patternString.substring(loopCounter1Int + 1, loopCounter1Int + 2);
                if(codeStringArray.indexOf(scan2String) > -1){
                    //trace(scan1String + " + " + scan2String);
                    codeString = scan1String + scan2String;
                    loopCounter1Int += 2;
                }
                else{ loopCounter1Int ++; }
                //trace("TEST " + codeString);
            }
            else{ loopCounter1Int ++; }
            //trace(patternString + " " + loopCounter1Int + " " + scan1String + " " + codeString);
            /*
            if(loopCounter1Int == patternString.length - 1){
                scanString = patternString.substring(loopCounter1Int, loopCounter1Int + 1);
            }
            else{scanString = patternString.substring(loopCounter1Int, loopCounter1Int + 2); }
            */
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
                var getNegativeBool:Bool = false;
                var getPositiveBool:Bool = false;
                if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() > 0){
                    getNegativeBool = false;
                    getPositiveBool = true;
                }
                else if(_visitorObject.GetVisitCorrectExhibitionBool() == false && _visitorObject.GetScoreInt() <= 0){
                    getNegativeBool = true;
                    getPositiveBool = false;
                }
                else{
                    getNegativeBool = true;
                    getPositiveBool = true;
                }
                var _11TagStringArray:Array<String> = new Array<String>();
                var randomIndexInt:Int = 0;
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == ADJ){
                        if(getNegativeBool == true && getPositiveBool == false){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                _11TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else if(getNegativeBool == false && getPositiveBool == true){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == POSITIVE){
                                _11TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else{ _11TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString); }
                    }
                    loopCounter2Int ++;
                }
                if(_11TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == ADJ){
                            if(getNegativeBool == true && getPositiveBool == false){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                    _11TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else if(getNegativeBool == false && getPositiveBool == true){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == POSITIVE){
                                    _11TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else{ _11TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString); }
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_11TagStringArray.length);
                wordString = _11TagStringArray[randomIndexInt];
            }
            else if(codeString == "22"){
                var getNegativeBool:Bool = false;
                var getPositiveBool:Bool = false;
                if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() > 0){
                    getNegativeBool = false;
                    getPositiveBool = true;
                }
                else if(_visitorObject.GetVisitCorrectExhibitionBool() == false && _visitorObject.GetScoreInt() <= 0){
                    getNegativeBool = true;
                    getPositiveBool = false;
                }
                else{
                    getNegativeBool = true;
                    getPositiveBool = true;
                }
                var _22TagStringArray:Array<String> = new Array<String>();
                var randomIndexInt:Int = 0;
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == ADV){
                        if(getNegativeBool == true && getPositiveBool == false){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                _22TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else if(getNegativeBool == false && getPositiveBool == true){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == POSITIVE){
                                _22TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else{ _22TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString); }
                    }
                    loopCounter2Int ++;
                }
                if(_22TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == ADV){
                            if(getNegativeBool == true && getPositiveBool == false){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                    _22TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else if(getNegativeBool == false && getPositiveBool == true){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == POSITIVE){
                                    _22TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else{ _22TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString); }
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_22TagStringArray.length);
                wordString = _22TagStringArray[randomIndexInt];
            }
            else if(codeString == "43"){
                var _43TagStringArray:Array<String> = new Array<String>();
                var loopCounter2Int:Int = 0;
                var randomIndexInt:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == NOUN_ALIVE_CONCRETE){
                        _43TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                    }
                    loopCounter2Int ++;
                }
                if(_43TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == NOUN_ALIVE_CONCRETE){
                            _43TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
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
                var getNegativeBool:Bool = false;
                var getPositiveBool:Bool = false;
                if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() > 0){
                    getNegativeBool = false;
                    getPositiveBool = true;
                }
                else if(_visitorObject.GetVisitCorrectExhibitionBool() == false && _visitorObject.GetScoreInt() <= 0){
                    getNegativeBool = true;
                    getPositiveBool = false;
                }
                else{
                    getNegativeBool = true;
                    getPositiveBool = true;
                }
                var _65TagStringArray:Array<String> = new Array<String>();
                var randomIndexInt:Int = 0;
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == NOUN_INANIMATE_HOLD_CONCRETE){
                        if(getNegativeBool == true && getPositiveBool == false){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                //trace(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                                _65TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry2Struct.tagString);
                            }
                        }
                        else if(getNegativeBool == false && getPositiveBool == true){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == POSITIVE){
                                _65TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else{ _65TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString); }
                    }
                    loopCounter2Int ++;
                }
                if(_65TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == ADJ){
                            if(getNegativeBool == true && getPositiveBool == false){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                    //trace(_collectionGlobalObject.GetTagGeneralStructArray().length);
                                    //trace(loopCounter2Int);
                                    //trace(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct);
                                    //trace(_65TagStringArray.length);
                                    _65TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else if(getNegativeBool == false && getPositiveBool == true){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == POSITIVE){
                                    _65TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else{ _65TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString); }
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_65TagStringArray.length);
                wordString = _65TagStringArray[randomIndexInt];
            }
            else if(codeString == "93"){
                var getNegativeBool:Bool = false;
                var getPositiveBool:Bool = false;
                if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() > 0){
                    getNegativeBool = false;
                    getPositiveBool = true;
                }
                else if(_visitorObject.GetVisitCorrectExhibitionBool() == false && _visitorObject.GetScoreInt() <= 0){
                    getNegativeBool = true;
                    getPositiveBool = false;
                }
                else{
                    getNegativeBool = true;
                    getPositiveBool = true;
                }
                var _93TagStringArray:Array<String> = new Array<String>();
                var randomIndexInt:Int = 0;
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == NOUN_INANIMATE_PLACE_CONCRETE_OWNER){
                        if(getNegativeBool == true && getPositiveBool == false){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                _93TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else if(getNegativeBool == false && getPositiveBool == true){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == POSITIVE){
                                _93TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else{ _93TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString); }
                    }
                    loopCounter2Int ++;
                }
                if(_93TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == NOUN_INANIMATE_PLACE_CONCRETE_OWNER){
                            if(getNegativeBool == true && getPositiveBool == false){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                    _93TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                                else if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEUTRAL){
                                    _93TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else if(getNegativeBool == false && getPositiveBool == true){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == POSITIVE){
                                    _93TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                                else if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEUTRAL){
                                    _93TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else{ _93TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString); }
                        }
                        loopCounter2Int ++;
                    }
                }
                //trace(_93TagStringArray.length);
                randomIndexInt = RandomNumberGeneratorInt(_93TagStringArray.length);
                wordString = _93TagStringArray[randomIndexInt];
            }
            else if(codeString == "A3"){
                var getNegativeBool:Bool = false;
                var getPositiveBool:Bool = false;
                if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() > 0){
                    getNegativeBool = false;
                    getPositiveBool = true;
                }
                else if(_visitorObject.GetVisitCorrectExhibitionBool() == false && _visitorObject.GetScoreInt() <= 0){
                    getNegativeBool = true;
                    getPositiveBool = false;
                }
                else{
                    getNegativeBool = true;
                    getPositiveBool = true;
                }
                var _A3TagStringArray:Array<String> = new Array<String>();
                var randomIndexInt:Int = 0;
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == NOUN_INANIMATE_SEE_CONCRETE){
                        if(getNegativeBool == true && getPositiveBool == false){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                _A3TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                            else if(tagStructArray[loopCounter2Int].tagFeelEnum == NEUTRAL){
                                _A3TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else if(getNegativeBool == false && getPositiveBool == true){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == POSITIVE){
                                _A3TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                            else if(tagStructArray[loopCounter2Int].tagFeelEnum == NEUTRAL){
                                _A3TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                            }
                        }
                        else{ _A3TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry1Struct.tagString); }
                    }
                    loopCounter2Int ++;
                }
                if(_A3TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == NOUN_INANIMATE_SEE_CONCRETE){
                            if(getNegativeBool == true && getPositiveBool == false){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                    _A3TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                                else if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEUTRAL){
                                    _A3TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else if(getNegativeBool == false && getPositiveBool == true){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == POSITIVE){
                                    _A3TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                                else if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEUTRAL){
                                    _A3TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString);
                                }
                            }
                            else{ _A3TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry1Struct.tagString); }
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_A3TagStringArray.length);
                wordString = _A3TagStringArray[randomIndexInt];
            }
            else if(codeString == "E7"){
                var getNegativeBool:Bool = false;
                var getPositiveBool:Bool = false;
                if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() > 0){
                    getNegativeBool = false;
                    getPositiveBool = true;
                }
                else if(_visitorObject.GetVisitCorrectExhibitionBool() == false && _visitorObject.GetScoreInt() <= 0){
                    getNegativeBool = true;
                    getPositiveBool = false;
                }
                else{
                    getNegativeBool = true;
                    getPositiveBool = true;
                }
                var _E7TagStringArray:Array<String> = new Array<String>();
                var randomIndexInt:Int = 0;
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == VERB_INTRANSITIVE){
                        if(getNegativeBool == true && getPositiveBool == false){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                _E7TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString);
                            }
                        }
                        else if(getNegativeBool == false && getPositiveBool == true){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == POSITIVE){
                                _E7TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString);
                            }
                        }
                        else{ _E7TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString); }
                    }
                    loopCounter2Int ++;
                }
                if(_E7TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == VERB_INTRANSITIVE){
                            if(getNegativeBool == true && getPositiveBool == false){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                    _E7TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString);
                                }
                            }
                            else if(getNegativeBool == false && getPositiveBool == true){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == POSITIVE){
                                    _E7TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString);
                                }
                            }
                            else{ _E7TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString); }
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_E7TagStringArray.length);
                wordString = _E7TagStringArray[randomIndexInt];
            }
            else if(codeString == "E8"){
                var getNegativeBool:Bool = false;
                var getPositiveBool:Bool = false;
                if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() > 0){
                    getNegativeBool = false;
                    getPositiveBool = true;
                }
                else if(_visitorObject.GetVisitCorrectExhibitionBool() == false && _visitorObject.GetScoreInt() <= 0){
                    getNegativeBool = true;
                    getPositiveBool = false;
                }
                else{
                    getNegativeBool = true;
                    getPositiveBool = true;
                }
                var _E8TagStringArray:Array<String> = new Array<String>();
                var randomIndexInt:Int = 0;
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == VERB_INTRANSITIVE){
                        if(getNegativeBool == true && getPositiveBool == false){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                _E8TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString);
                            }
                        }
                        else if(getNegativeBool == false && getPositiveBool == true){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == POSITIVE){
                                _E8TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString);
                            }
                        }
                        else{ _E8TagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString); }
                    }
                    loopCounter2Int ++;
                }
                if(_E8TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == VERB_INTRANSITIVE){
                            if(getNegativeBool == true && getPositiveBool == false){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                    _E8TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString);
                                }
                            }
                            else if(getNegativeBool == false && getPositiveBool == true){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == POSITIVE){
                                    _E8TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString);
                                }
                            }
                            else{ _E8TagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString); }
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_E8TagStringArray.length);
                wordString = _E8TagStringArray[randomIndexInt];
            }
            else if(codeString == "EA"){
                var getNegativeBool:Bool = false;
                var getPositiveBool:Bool = false;
                if(_visitorObject.GetVisitCorrectExhibitionBool() == true && _visitorObject.GetScoreInt() > 0){
                    getNegativeBool = false;
                    getPositiveBool = true;
                }
                else if(_visitorObject.GetVisitCorrectExhibitionBool() == false && _visitorObject.GetScoreInt() <= 0){
                    getNegativeBool = true;
                    getPositiveBool = false;
                }
                else{
                    getNegativeBool = true;
                    getPositiveBool = true;
                }
                var _EATagStringArray:Array<String> = new Array<String>();
                var randomIndexInt:Int = 0;
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < tagStructArray.length){
                    if(tagStructArray[loopCounter2Int].tagTypeEnum == VERB_INTRANSITIVE){
                        if(getNegativeBool == true && getPositiveBool == false){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                _EATagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString);
                            }
                        }
                        else if(getNegativeBool == false && getPositiveBool == true){
                            if(tagStructArray[loopCounter2Int].tagFeelEnum == POSITIVE){
                                _EATagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString);
                            }
                        }
                        else{ _EATagStringArray.push(tagStructArray[loopCounter2Int].tagEntry5Struct.tagString); }
                    }
                    loopCounter2Int ++;
                }
                if(_EATagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < _collectionGlobalObject.GetTagGeneralStructArray().length){
                        if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagTypeEnum == VERB_INTRANSITIVE){
                            if(getNegativeBool == true && getPositiveBool == false){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == NEGATIVE){
                                    _EATagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString);
                                }
                            }
                            else if(getNegativeBool == false && getPositiveBool == true){
                                if(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagFeelEnum == POSITIVE){
                                    _EATagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString);
                                }
                            }
                            else{ _EATagStringArray.push(_collectionGlobalObject.GetTagGeneralStructArray()[loopCounter2Int].tagEntry5Struct.tagString); }
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_EATagStringArray.length);
                wordString = _EATagStringArray[randomIndexInt];
            }
            else{
                wordString = scan1String;
            }
            //trace(codeString + " " + wordString + " " + sentenceString);
            sentenceString = sentenceString + wordString;
        }
        //trace(sentenceString);
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
        //trace("FROM GENERATOR " + threeSentenceString);
        return threeSentenceString;
    }
}