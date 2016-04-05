class TagAddAndEditUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
    private var _TextInput_Struct_Array     (null, null)        :Array<TextInput_Struct>    = new Array<TextInput_Struct>();
    private var _Tag_Object                 (null, null)        :Tag_Object                 = null;
    private var _TagFeel_Enum               (null, null)        :TagFeel_Enum               = null;
    private var adjective_Text              (null, null)        :Text                       = null;
    private var adjective_TextInput         (null, null)        :TextInput                  = null;
    private var adverb_Text                 (null, null)        :Text                       = null;
    private var adverb_TextInput            (null, null)        :TextInput                  = null;
    private var general_Bool                (null, null)        :Bool                       = false;
    private var general_ListSelector        (null, null)        :ListSelector               = null;
    private var noun_Text                   (null, null)        :Text                       = null;
    private var noun_TextInput              (null, null)        :TextInput                  = null;
    private var nounPos_Text                (null, null)        :Text                       = null;
    private var nounPos_TextInput           (null, null)        :TextInput                  = null;
    private var nounS_Text                  (null, null)        :Text                       = null;
    private var nounS_TextInput             (null, null)        :TextInput                  = null;
    private var nounSPos_Text               (null, null)        :Text                       = null;
    private var nounSPos_TextInput          (null, null)        :TextInput                  = null;
    private var tagFeel_ListSelector        (null, null)        :ListSelector               = null;
    private var tagName_String              (null, null)        :String                     = null;
    private var tagType_ListSelector        (null, null)        :ListSelector               = null;
    private var verb1_Text                  (null, null)        :Text                       = null;
    private var verb1_TextInput             (null, null)        :TextInput                  = null;
    private var verb2_Text                  (null, null)        :Text                       = null;
    private var verb2_TextInput             (null, null)        :TextInput                  = null;
    private var verb3_Text                  (null, null)        :Text                       = null;
    private var verb3_TextInput             (null, null)        :TextInput                  = null;
    private var verbIng_Text                (null, null)        :Text                       = null;
    private var verbIng_TextInput           (null, null)        :TextInput                  = null;
    private var verbS_Text                  (null, null)        :Text                       = null;
    private var verbS_TextInput             (null, null)        :TextInput                  = null;
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
    private function Assign_Void():Void{

        super.Assign_Void();





        _Grid                   = _Popup.content.findChild("TagAddUIPopup_Object__Grid"                     , Grid          , true);
        general_ListSelector    = _Popup.content.findChild("TagAddUIPopup_Object_general_ListSelector"      , ListSelector  , true);
        tagFeel_ListSelector    = _Popup.content.findChild("TagAddUIPopup_Object_tagFeel_ListSelector"      , ListSelector  , true);
        tagName_TextInput       = _Popup.content.findChild("TagAddUIPopup_Object_tagName_TextInput"         , TextInput     , true);
        tagType_ListSelector    = _Popup.content.findChild("TagAddUIPopup_Object_tagType_ListSelector"      , ListSelector  , true);

        adjective_Text          = new Text();
        adjective_TextInput     = new TextInput();
        adverb_Text             = new Text();
        adverb_TextInput        = new TextInput();
        noun_Text               = new Text();
        noun_TextInput          = new TextInput();
        nounPos_Text            = new Text();
        nounPos_TextInput       = new TextInput();
        nounS_Text              = new Text();
        nounS_TextInput         = new TextInput();
        nounSPos_Text           = new Text();
        nounSPos_TextInput      = new TextInput();
        verb1_Text              = new Text();
        verb1_TextInput         = new TextInput();
        verb2_Text              = new Text();
        verb2_TextInput         = new TextInput();
        verb3_Text              = new Text();
        verb3_TextInput         = new TextInput();
        verbIng_Text            = new Text();
        verbIng_TextInput       = new TextInput();
        verbS_Text              = new Text();
        verbS_TextInput         = new TextInput();

    }
    /*==================================================*/





    /*==================================================*/
    private function Button_Void(_addAndEdit_Function:Function):Void{

        super.Button_Void();





        if(tagFeel_ListSelector != null){

            if(tagFeel_ListSelector.text        == "POSITIVE")  { _TagFeel_Enum = POSITIVE; }
            else if(tagFeel_ListSelector.text   == "NEUTRAL")   { _TagFeel_Enum = NEUTRAL; }
            else if(tagFeel_ListSelector.text   == "NEGATIVE")  { _TagFeel_Enum = NEGATIVE; }

        }





        if(general_ListSelector != null){

            if(general_ListSelector.text == "Yes"){ general_Bool = true ; }
            else if(general_ListSelector.text == "No"){ general_Bool = false; }

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





    /*==================================================*/
    private function Init_Void():Void{

        super.Init_Void();





        general_ListSelector.method = "default";
        tagFeel_ListSelector.method = "default";
        tagType_ListSelector.method = "default";





        adjective_Text.text                 = "Adjective";
        adjective_TextInput.id              = "UIPopupAddObjectTag_InputAdj";
        adjective_TextInput.percentWidth    = 100;
        adjective_TextInput.text            = " ";
        adverb_Text.text                    = "Adverb";
        adverb_TextInput.id                 = "UIPopupAddObjectTag_InputAdv";
        adverb_TextInput.percentWidth       = 100;
        adverb_TextInput.text               = " ";
        noun_Text.text                      = "Noun";
        noun_TextInput.id                   = "UIPopupAddObjectTag_InputNoun";
        noun_TextInput.percentWidth         = 100;
        noun_TextInput.text                 = " ";
        nounPos_Text.text                   = "Noun Possesion";
        nounPos_TextInput.id                = "UIPopupAddObjectTag_InputNounPos";
        nounPos_TextInput.percentWidth      = 100;
        nounPos_TextInput.text              = " ";
        nounS_Text.text                     = "Noun Plural";
        nounS_TextInput.id                  = "UIPopupAddObjectTag_InputNounS";
        nounS_TextInput.percentWidth        = 100;
        nounS_TextInput.text                = " ";
        nounSPos_Text.text                  = "Noun Plural Possesion";
        nounSPos_TextInput.id               = "UIPopupAddObjectTag_InputNounSPos";
        nounSPos_TextInput.percentWidth     = 100;
        nounSPos_TextInput.text             = " ";
        verb1_Text.text                     = "Verb 1";
        verb1_TextInput.id                  = "UIPopupAddObjectTag_InputVerb1";
        verb1_TextInput.percentWidth        = 100;
        verb1_TextInput.text                = " ";
        verb2_Text.text                     = "Verb 2";
        verb2_TextInput.id                  = "UIPopupAddObjectTag_InputVerb2";
        verb2_TextInput.percentWidth        = 100;
        verb2_TextInput.text                = " ";
        verb3_Text.text                     = "Verb 3";
        verb3_TextInput.id                  = "UIPopupAddObjectTag_InputVerb3";
        verb3_TextInput.percentWidth        = 100;
        verb3_TextInput.text                = " ";
        verbIng_Text.text                   = "Verb + Ing";
        verbIng_TextInput.id                = "UIPopupAddObjectTag_InputVerbIng";
        verbIng_TextInput.percentWidth      = 100;
        verbIng_TextInput.text              = " ";
        verbS_Text.text                     = "Verb + S";
        verbS_TextInput.id                  = "UIPopupAddObjectTag_InputVerbS";
        verbS_TextInput.percentWidth        = 100;
        verbS_TextInput.text                = " ";

    }
    /*==================================================*/





}