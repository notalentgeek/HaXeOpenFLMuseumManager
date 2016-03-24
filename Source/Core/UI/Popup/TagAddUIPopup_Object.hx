class TagAddUIPopup_Object extends TagAddAndEditUIPopup_Object{





    /*==================================================*/
    private var _TextInput_Struct_Array     (null, null)        :Array<TextInput_Struct>    = new Array<TextInput_Struct>();
    private var adjective_Text              (null, null)        :Text                       = null;
    private var adjective_TextInput         (null, null)        :TextInput                  = null;
    private var adverb_Text                 (null, null)        :Text                       = null;
    private var adverb_TextInput            (null, null)        :TextInput                  = null;
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
    private var tagName_TextInput           (null, null)        :TextInput                  = null;
    private var tagType_ListSelector        (null, null)        :ListSelector               = null;
    private var tagType_String              (null, null)        :String                     = null;
    private var tagTypePrev_String          (null, null)        :String                     = null;
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
    public function new(
        __Global_Object     :Global_Object,
        __Root              :Root
    ):Void{

        super(
            __Global_Object,
            __Root,
            Assign_Void,
            Button_Void,
            "TagAddUIPopup_Button",
            Init_Void,
            "layout/TagAddUIPopup_Object.xml",
            "Add Tag Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    private function Add_Void():Void{

        _Tag_Object:Tag_Object = new Tag_Object(
            _Global_Object,
            _TagFeel_Enum,
            Type.createEnum(
                TagType_Enum,
                tagType_ListSelector.text
            ),
            general_Bool,
            tagName_TextInput.text
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){ super.Button_Void(Add_Void); }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/





    public function new(__Global_Object:Global_Object, _root:Root){

        _Global_Object = __Global_Object;

        /*Find the main button to actovate the popup in the main screen.*/
        _Button = _root.findChild("UIPopupAddTagObjectButton", Button, true);
        /*Adding a callback function of when the button is pressed.*/
        _Button.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectTag.xml");
            _Popup = PopupManager.instance.showCustom(iDisplayObject, "Add Tag", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    var feelEnum            :EnumTagFeelType    = null;
                    var feelString          :String             = tagFeel_ListSelector.text;
                    var generalBool         :Bool               = false;
                    var generalString       :String             = general_ListSelector.text;
                    if     (feelString == "POSITIVE"){ feelEnum = POSITIVE; }
                    else if(feelString == "NEUTRAL" ){ feelEnum = NEUTRAL ; }
                    else if(feelString == "NEGATIVE"){ feelEnum = NEGATIVE; }
                    if     (generalString == "Yes"){ generalBool = true ; }
                    else if(generalString == "No" ){ generalBool = false; }
                    var tagObject:ObjectTag = new ObjectTag(
                        _Global_Object,
                        feelEnum,
                        generalBool,
                        tagName_TextInput.text,
                        Type.createEnum(
                            EnumTagType,
                            tagType_ListSelector.text
                        )
                    );
                    if(tagType_ListSelector.text == "ADJ"){
                        tagObject
                            .SetAdjectiveStringObject   (adjective_TextInput        .text);
                    }
                    else if(tagType_ListSelector.text == "ADV"){
                        tagObject
                            .SetAdverbStringObject      (adverb_TextInput        .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_ALIVE_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text)
                            .SetNounPosStringObject     (nounPos_TextInput    .text)
                            .SetNounSStringObject       (nounS_TextInput      .text)
                            .SetNounSPosStringObject    (nounSPos_TextInput   .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_ALIVE_CONCRETE"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text)
                            .SetNounPosStringObject     (nounPos_TextInput    .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text)
                            .SetNounSStringObject       (nounS_TextInput      .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_CONCRETE"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text)
                            .SetNounSStringObject       (nounS_TextInput      .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text)
                            .SetNounSStringObject       (nounS_TextInput      .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){
                        tagObject.SetNounStringObject(noun_TextInput.text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text)
                            .SetNounSStringObject       (nounS_TextInput      .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_TITLE"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text)
                            .SetNounSStringObject       (nounS_TextInput      .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_CONCRETE"){
                        tagObject
                            .SetNounStringObject        (noun_TextInput       .text)
                            .SetNounSStringObject       (nounS_TextInput      .text);
                    }
                    else if(tagType_ListSelector.text == "VERB_INTRANSITIVE"){
                        tagObject
                            .SetVerb1StringObject       (verb1_TextInput      .text)
                            .SetVerb2StringObject       (verb2_TextInput      .text)
                            .SetVerb3StringObject       (verb3_TextInput      .text)
                            .SetVerbIngStringObject     (verbIng_TextInput    .text)
                            .SetVerbSStringObject       (verbS_TextInput      .text);
                    }
                    else if(tagType_ListSelector.text == "VERB_TRANSITIVE"){
                        tagObject
                            .SetVerb1StringObject       (verb1_TextInput      .text)
                            .SetVerb2StringObject       (verb2_TextInput      .text)
                            .SetVerb3StringObject       (verb3_TextInput      .text)
                            .SetVerbIngStringObject     (verbIng_TextInput    .text)
                            .SetVerbSStringObject       (verbS_TextInput      .text);
                    }

                }

            });

            _Grid                                  = _Popup.content.findChild("UIPopupAddObjectTag_Grid"              , Grid          , true);
            tagName_TextInput                 = _Popup.content.findChild("UIPopupAddObjectTag_InputName"         , TextInput     , true);
            tagFeel_ListSelector                = _Popup.content.findChild("UIPopupAddObjectTag_SelectFeel"        , ListSelector  , true);
            general_ListSelector             = _Popup.content.findChild("UIPopupAddObjectTag_SelectGeneral"     , ListSelector  , true);
            tagType_ListSelector             = _Popup.content.findChild("UIPopupAddObjectTag_SelectTagType"     , ListSelector  , true);
            tagFeel_ListSelector.method         = "default";
            general_ListSelector.method      = "default";
            tagType_ListSelector.method      = "default";

            CreateGUIObjectVoid();

        }

    }
    public function UpdateVoid(){

        if(_Popup != null){

            tagType_String = tagType_ListSelector.text;
            if(tagType_String != tagTypePrev_String){

                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < _TextInput_Struct_Array.length){

                    _Grid.removeChild(_TextInput_Struct_Array[loopCounter1Int].textObject);
                    _Grid.removeChild(_TextInput_Struct_Array[loopCounter1Int].textInputObject);
                    loopCounter1Int ++;

                }
                CollectionFunction.ClearArray(_TextInput_Struct_Array);
                CreateGUIObjectVoid();

                if(tagType_ListSelector.text == "ADJ"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :adjective_Text,
                        textInputObject :adjective_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(adjective_Text);
                    _Grid.addChild(adjective_TextInput);
                }
                else if(tagType_ListSelector.text == "ADV"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :adverb_Text,
                        textInputObject :adverb_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(adverb_Text);
                    _Grid.addChild(adverb_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_ALIVE_ABSTRACT"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounPos_Text,
                        textInputObject :nounPos_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounS_Text,
                        textInputObject :nounS_TextInput,
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounSPos_Text,
                        textInputObject :nounSPos_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                    _Grid.addChild(nounPos_Text);
                    _Grid.addChild(nounPos_TextInput);
                    _Grid.addChild(nounS_Text);
                    _Grid.addChild(nounS_TextInput);
                    _Grid.addChild(nounSPos_Text);
                    _Grid.addChild(nounSPos_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_ALIVE_CONCRETE"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounPos_Text,
                        textInputObject :nounPos_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                    _Grid.addChild(nounPos_Text);
                    _Grid.addChild(nounPos_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounS_Text,
                        textInputObject :nounS_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                    _Grid.addChild(nounS_Text);
                    _Grid.addChild(nounS_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_CONCRETE"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounS_Text,
                        textInputObject :nounS_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                    _Grid.addChild(nounS_Text);
                    _Grid.addChild(nounS_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounS_Text,
                        textInputObject :nounS_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                    _Grid.addChild(nounS_Text);
                    _Grid.addChild(nounS_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounS_Text,
                        textInputObject :nounS_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                    _Grid.addChild(nounS_Text);
                    _Grid.addChild(nounS_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_ABSTRACT"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_TITLE"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput,
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounS_Text,
                        textInputObject :nounS_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                    _Grid.addChild(nounS_Text);
                    _Grid.addChild(nounS_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                }
                else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_CONCRETE"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :noun_Text,
                        textInputObject :noun_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :nounS_Text,
                        textInputObject :nounS_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(noun_Text);
                    _Grid.addChild(noun_TextInput);
                    _Grid.addChild(nounS_Text);
                    _Grid.addChild(nounS_TextInput);
                }
                else if(tagType_ListSelector.text == "VERB_INTRANSITIVE"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verb1_Text,
                        textInputObject :verb1_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verb2_Text,
                        textInputObject :verb2_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verb3_Text,
                        textInputObject :verb3_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verbIng_Text,
                        textInputObject :verbIng_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verbS_Text,
                        textInputObject :verbS_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(verb1_Text);
                    _Grid.addChild(verb1_TextInput);
                    _Grid.addChild(verb2_Text);
                    _Grid.addChild(verb2_TextInput);
                    _Grid.addChild(verb3_Text);
                    _Grid.addChild(verb3_TextInput);
                    _Grid.addChild(verbIng_Text);
                    _Grid.addChild(verbIng_TextInput);
                    _Grid.addChild(verbS_Text);
                    _Grid.addChild(verbS_TextInput);
                }
                else if(tagType_ListSelector.text == "VERB_TRANSITIVE"){
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verb1_Text,
                        textInputObject :verb1_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verb2_Text,
                        textInputObject :verb2_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verb3_Text,
                        textInputObject :verb3_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verbIng_Text,
                        textInputObject :verbIng_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    var textInputStruct:TextInput_Struct = {
                        textObject      :verbS_Text,
                        textInputObject :verbS_TextInput
                    }
                    _TextInput_Struct_Array.push(textInputStruct);
                    _Grid.addChild(verb1_Text);
                    _Grid.addChild(verb1_TextInput);
                    _Grid.addChild(verb2_Text);
                    _Grid.addChild(verb2_TextInput);
                    _Grid.addChild(verb3_Text);
                    _Grid.addChild(verb3_TextInput);
                    _Grid.addChild(verbIng_Text);
                    _Grid.addChild(verbIng_TextInput);
                    _Grid.addChild(verbS_Text);
                    _Grid.addChild(verbS_TextInput);
                }

                tagTypePrev_String = tagType_String;

            }

        }



    }

    private function CreateGUIObjectVoid(){

        

        adjective_TextInput                     = new TextInput();
        adjective_TextInput.id                  = "UIPopupAddObjectTag_InputAdj";
        adjective_TextInput.percentWidth        = 100;
        adjective_TextInput.text                = " ";
        adjective_Text                          = new Text();
        adjective_Text.text                     = "Adjective";
        adverb_TextInput                     = new TextInput();
        adverb_TextInput.id                  = "UIPopupAddObjectTag_InputAdv";
        adverb_TextInput.percentWidth        = 100;
        adverb_TextInput.text                = " ";
        adverb_Text                          = new Text();
        adverb_Text.text                     = "Adverb";
        nounPos_TextInput                 = new TextInput();
        nounPos_TextInput.id              = "UIPopupAddObjectTag_InputNounPos";
        nounPos_TextInput.percentWidth    = 100;
        nounPos_TextInput.text            = " ";
        nounPos_Text                      = new Text();
        nounPos_Text.text                 = "Noun Possesion";
        nounSPos_TextInput                = new TextInput();
        nounSPos_TextInput.id             = "UIPopupAddObjectTag_InputNounSPos";
        nounSPos_TextInput.percentWidth   = 100;
        nounSPos_TextInput.text           = " ";
        nounSPos_Text                     = new Text();
        nounSPos_Text.text                = "Noun Plural Possesion";
        nounS_TextInput                   = new TextInput();
        nounS_TextInput.id                = "UIPopupAddObjectTag_InputNounS";
        nounS_TextInput.percentWidth      = 100;
        nounS_TextInput.text              = " ";
        nounS_Text                        = new Text();
        nounS_Text.text                   = "Noun Plural";
        noun_TextInput                    = new TextInput();
        noun_TextInput.id                 = "UIPopupAddObjectTag_InputNoun";
        noun_TextInput.percentWidth       = 100;
        noun_TextInput.text               = " ";
        noun_Text                         = new Text();
        noun_Text.text                    = "Noun";
        verb1_TextInput                   = new TextInput();
        verb1_TextInput.id                = "UIPopupAddObjectTag_InputVerb1";
        verb1_TextInput.percentWidth      = 100;
        verb1_TextInput.text              = " ";
        verb1_Text                        = new Text();
        verb1_Text.text                   = "Verb 1";
        verb2_TextInput                   = new TextInput();
        verb2_TextInput.id                = "UIPopupAddObjectTag_InputVerb2";
        verb2_TextInput.percentWidth      = 100;
        verb2_TextInput.text              = " ";
        verb2_Text                        = new Text();
        verb2_Text.text                   = "Verb 2";
        verb3_TextInput                   = new TextInput();
        verb3_TextInput.id                = "UIPopupAddObjectTag_InputVerb3";
        verb3_TextInput.percentWidth      = 100;
        verb3_TextInput.text              = " ";
        verb3_Text                        = new Text();
        verb3_Text.text                   = "Verb 3";
        verbIng_TextInput                 = new TextInput();
        verbIng_TextInput.id              = "UIPopupAddObjectTag_InputVerbIng";
        verbIng_TextInput.percentWidth    = 100;
        verbIng_TextInput.text            = " ";
        verbIng_Text                      = new Text();
        verbIng_Text.text                 = "Verb + Ing";
        verbS_TextInput                   = new TextInput();
        verbS_TextInput.id                = "UIPopupAddObjectTag_InputVerbS";
        verbS_TextInput.percentWidth      = 100;
        verbS_TextInput.text              = " ";
        verbS_Text                        = new Text();
        verbS_Text.text                   = "Verb + S";

    }



}