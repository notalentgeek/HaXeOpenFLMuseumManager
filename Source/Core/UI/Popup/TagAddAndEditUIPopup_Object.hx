class TagAddAndEditUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var _Tag_Object         (null, null)        :Tag_Object     = null;
    private var _TagFeel_Enum       (null, null)        :TagFeel_Enum   = null;
    private var general_Bool        (null, null)        :Bool           = false;
    private var general_String      (null, null)        :String         = general_ListSelector.text;
    private var tagFeel_String      (null, null)        :String         = tagFeel_ListSelector.text;
    /*==================================================*/





    /*==================================================*/
    public class new(
        __Global_Object         :Global_Object,
        __Root                  :Root,
        _assign_Function        :Function,
        _button_Function        :Function,
        _buttonName_String      :String,
        _init_Function          :Function,
        _layoutPath_String      :String,
        _title_String           :String
    ):Void{

        super(
            __Global_Object,
            __Root,
            _assign_Function,
            _button_Function,
            _buttonName_String,
            _init_Function,
            _layoutPath_String,
            _title_String
        );

    }
    /*==================================================*/





    /*==================================================*/
    private class Button_Void(_addAndEdit_Function:Function):Void{

        super.Button_Void();





        if(tagFeel_ListSelector != null){

            if(tagFeel_String == "POSITIVE")        { _TagFeel_Enum = POSITIVE; }
            else if(tagFeel_String == "NEUTRAL")    { _TagFeel_Enum = NEUTRAL; }
            else if(tagFeel_String == "NEGATIVE")   { _TagFeel_Enum = NEGATIVE; }

        }





        if(general_ListSelector != null){

            if(general_String == "Yes"){ general_Bool = true ; }
            else if(general_String == "No"){ general_Bool = false; }

        }





        if(
            _Global_Object          != null &&
            _TagFeel_Enum           != null &&
            general_Bool            != null &&
            (tagName_TextInput      != null && tagName_TextInput.text       != " " && tagName_TextInput.text    != "") &&
            (tagType_ListSelector   != null && tagType_ListSelector.text    != " " && tagType_ListSelector.text != "")
        ){ _addAndEdit_Function(); }





        if(tagType_ListSelector.text == "ADJ"){

            _Tag_Object
                ._TagAgnostic_Object.SetAdjective_TagAgnostic_Object(adjective_TextInput.text);

        }





        else if(tagType_ListSelector.text == "ADV"){

            _Tag_Object
                ._TagAgnostic_Object.SetAdverb_TagAgnostic_Object(adverb_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_ALIVE_ABSTRACT"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text)
                ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object(nounPos_TextInput.text)
                ._TagAgnostic_Object.SetNounS_TagAgnostic_Object(nounS_TextInput.text)
                ._TagAgnostic_Object.SetNounSPos_TagAgnostic_Object(nounSPos_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_ALIVE_CONCRETE"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text)
                ._TagAgnostic_Object.SetNounPos_TagAgnostic_Object(nounPos_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text)
                ._TagAgnostic_Object.SetNounS_TagAgnostic_Object(nounS_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_CONCRETE"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text)
                ._TagAgnostic_Object.SetNounS_TagAgnostic_Object(nounS_TextInput.text);


        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text)
                ._TagAgnostic_Object.SetNounS_TagAgnostic_Object(nounS_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text)
                ._TagAgnostic_Object.SetNounS_TagAgnostic_Object(nounS_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_ABSTRACT"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_CONCRETE"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_TITLE"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text)
                ._TagAgnostic_Object.SetNounS_TagAgnostic_Object(nounS_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text);

        }





        else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_CONCRETE"){

            _Tag_Object
                ._TagAgnostic_Object.SetNoun_TagAgnostic_Object(noun_TextInput.text)
                ._TagAgnostic_Object.SetNounS_TagAgnostic_Object(nounS_TextInput.text);

        }





        else if(tagType_ListSelector.text == "VERB_INTRANSITIVE"){

            _Tag_Object
                ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object(verb1_TextInput.text)
                ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object(verb2_TextInput.text)
                ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object(verb3_TextInput.text)
                ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object(verbIng_TextInput.text)
                ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object(verbS_TextInput.text);

        }





        else if(tagType_ListSelector.text == "VERB_TRANSITIVE"){

            _Tag_Object
                ._TagAgnostic_Object.SetVerb1_TagAgnostic_Object(verb1_TextInput.text)
                ._TagAgnostic_Object.SetVerb2_TagAgnostic_Object(verb2_TextInput.text)
                ._TagAgnostic_Object.SetVerb3_TagAgnostic_Object(verb3_TextInput.text)
                ._TagAgnostic_Object.SetVerbIng_TagAgnostic_Object(verbIng_TextInput.text)
                ._TagAgnostic_Object.SetVerbS_TagAgnostic_Object(verbS_TextInput.text);

        }

    }
    /*==================================================*/





}