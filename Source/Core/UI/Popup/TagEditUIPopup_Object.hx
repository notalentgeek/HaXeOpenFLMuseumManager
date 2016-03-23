class TagEditUIPopup_Object extends UIPopup_Object{





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
    private var selected_Tag_Object         (null, null)        :Tag_Object                 = null;
    private var tag_ListSelector            (null, null)        :ListSelector               = null;
    private var tagFeel_ListSelector        (null, null)        :ListSelector               = null;
    private var tagName_String              (null, null)        :String                     = null;
    private var tagName_TextInput           (null, null)        :TextInput                  = null;
    private var tagNamePrev_String          (null, null)        :String                     = null;
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
    public function new(
        __Global_Object     :Global_Object,
        __Root              :Root
    ):Void{

        super(
            __Global_Object,
            __Root,
            Assign_Void,
            Button_Void,
            "TagEditUIPopup_Button",
            Init_Void,
            "layout/TagEditUIPopup_Object.xml",
            "Add Tag Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){

        super.Button_Void();

    }
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
        _Button = _root.findChild("UIPopupEditTagObjectButton", Button, true);
        /*Editing a callback function of when the button is pressed.*/
        _Button.onClick = function(_e){

            /*Editing OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupEditTag_Object.xml");
            _Popup = PopupManager.instance.showCustom(iDisplayObject, "Edit Tag", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    if(selected_Tag_Object != null){

                        var feelEnum            :EnumTagFeelType    = null;
                        var feelString          :String             = tagFeel_ListSelector.text;
                        var generalBool         :Bool               = false;
                        var generalString       :String             = general_ListSelector.text;
                        if     (feelString == "POSITIVE"){ feelEnum = POSITIVE; }
                        else if(feelString == "NEUTRAL" ){ feelEnum = NEUTRAL ; }
                        else if(feelString == "NEGATIVE"){ feelEnum = NEGATIVE; }
                        if     (generalString == "Yes"){ generalBool = true ; }
                        else if(generalString == "No" ){ generalBool = false; }
                        selected_Tag_Object.SetFeelEnumObject(feelEnum);
                        selected_Tag_Object.SetGeneralTagBoolObject(generalBool);
                        selected_Tag_Object.SetNameStringObject(tagName_TextInput.text);
                        if(tagType_ListSelector.text == "ADJ"){
                            selected_Tag_Object
                                .SetAdjectiveStringObject   (adjective_TextInput        .text);
                        }
                        else if(tagType_ListSelector.text == "ADV"){
                            selected_Tag_Object
                                .SetAdverbStringObject      (adverb_TextInput        .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_ALIVE_ABSTRACT"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text)
                                .SetNounPosStringObject     (nounPos_TextInput    .text)
                                .SetNounSStringObject       (nounS_TextInput      .text)
                                .SetNounSPosStringObject    (nounSPos_TextInput   .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_ALIVE_CONCRETE"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text)
                                .SetNounPosStringObject     (nounPos_TextInput    .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text)
                                .SetNounSStringObject       (nounS_TextInput      .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_HOLD_CONCRETE"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text)
                                .SetNounSStringObject       (nounS_TextInput      .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text)
                                .SetNounSStringObject       (nounS_TextInput      .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){
                            selected_Tag_Object.SetNounStringObject(noun_TextInput.text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text)
                                .SetNounSStringObject       (nounS_TextInput      .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_ABSTRACT"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_TITLE"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text)
                                .SetNounSStringObject       (nounS_TextInput      .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text);
                        }
                        else if(tagType_ListSelector.text == "NOUN_INANIMATE_WEAR_CONCRETE"){
                            selected_Tag_Object
                                .SetNounStringObject        (noun_TextInput       .text)
                                .SetNounSStringObject       (nounS_TextInput      .text);
                        }
                        else if(tagType_ListSelector.text == "VERB_INTRANSITIVE"){
                            selected_Tag_Object
                                .SetVerb1StringObject       (verb1_TextInput      .text)
                                .SetVerb2StringObject       (verb2_TextInput      .text)
                                .SetVerb3StringObject       (verb3_TextInput      .text)
                                .SetVerbIngStringObject     (verbIng_TextInput    .text)
                                .SetVerbSStringObject       (verbS_TextInput      .text);
                        }
                        else if(tagType_ListSelector.text == "VERB_TRANSITIVE"){
                            selected_Tag_Object
                                .SetVerb1StringObject       (verb1_TextInput      .text)
                                .SetVerb2StringObject       (verb2_TextInput      .text)
                                .SetVerb3StringObject       (verb3_TextInput      .text)
                                .SetVerbIngStringObject     (verbIng_TextInput    .text)
                                .SetVerbSStringObject       (verbS_TextInput      .text);
                        }

                    }

                }

            });

            _Grid                                  = _Popup.content.findChild("UIPopupEditTag_Object_Grid"             , Grid          , true);
            tagName_TextInput                 = _Popup.content.findChild("UIPopupEditTag_Object_InputName"        , TextInput     , true);
            tagFeel_ListSelector                = _Popup.content.findChild("UIPopupEditTag_Object_SelectFeel"       , ListSelector  , true);
            tagFeel_ListSelector.method         = "default";
            general_ListSelector             = _Popup.content.findChild("UIPopupEditTag_Object_SelectGeneral"    , ListSelector  , true);
            general_ListSelector.method      = "default";
            tag_ListSelector                 = _Popup.content.findChild("UIPopupEditTag_Object_SelectTag"        , ListSelector  , true);
            tag_ListSelector.method          = "default";
            tagType_ListSelector             = _Popup.content.findChild("UIPopupEditTag_Object_SelectTagType"    , ListSelector  , true);
            tagType_ListSelector.method      = "default";

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < _Global_Object.GetTagObjectArray().length){

                tag_ListSelector.dataSource.createFromString(_Global_Object.GetTagObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;

            }

            CreateGUIObjectVoid();

        }

    }
    public function UpdateVoid(){



        if(_Popup != null){

            if(
                general_ListSelector.text            == ""   ||
                general_ListSelector.text            == " "  ||
                general_ListSelector.selectedIndex   == -1
            ){
                tag_ListSelector.disabled            = true;
                tag_ListSelector.selectedIndex       = -1;
                tag_ListSelector.text                = " ";
            }
            else{ tag_ListSelector.disabled          = false; }
            if(
                tag_ListSelector.text                == ""   ||
                tag_ListSelector.text                == " "  ||
                tag_ListSelector.selectedIndex       == -1
            ){
                tagName_TextInput.disabled            = true;
                tagFeel_ListSelector.disabled           = true;
                tagType_ListSelector.disabled        = true;
            }
            else{
                tagName_TextInput.disabled            = false;
                tagFeel_ListSelector.disabled           = false;
                tagType_ListSelector.disabled        = false;
            }

            tagName_String = tag_ListSelector.text;
            if(tagName_String != tagNamePrev_String){

                selected_Tag_Object = CollectionFunction.FindTagObject(_Global_Object, false, tagName_String);

                if(selected_Tag_Object != null){

                    tagName_TextInput.text = selected_Tag_Object.GetNameString();
                    tagFeel_ListSelector.text = Std.string(selected_Tag_Object.GetFeelEnum());
                    if     (selected_Tag_Object.GetGeneralTagBool() == true ){ general_ListSelector.text = "Yes"; }
                    else if(selected_Tag_Object.GetGeneralTagBool() == false){ general_ListSelector.text = "No" ; }
                    tagType_ListSelector.text = Std.string(selected_Tag_Object.GetTypeEnum());

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
                        adjective_TextInput.text = selected_Tag_Object.GetAdjectiveString();
                        _Grid.addChild(adjective_Text);
                        _Grid.addChild(adjective_TextInput);
                    }
                    else if(tagType_ListSelector.text == "ADV"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :adverb_Text,
                            textInputObject :adverb_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        adverb_TextInput.text = selected_Tag_Object.GetAdverbString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounPos_TextInput.text = selected_Tag_Object.GetNounPosString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
                        nounSPos_TextInput.text = selected_Tag_Object.GetNounSPosString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounPos_TextInput.text = selected_Tag_Object.GetNounPosString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        _Grid.addChild(noun_Text);
                        _Grid.addChild(noun_TextInput);
                    }
                    else if(tagType_ListSelector.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                        var textInputStruct:TextInput_Struct = {
                            textObject      :noun_Text,
                            textInputObject :noun_TextInput
                        }
                        _TextInput_Struct_Array.push(textInputStruct);
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
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
                        noun_TextInput.text = selected_Tag_Object.GetNounString();
                        nounS_TextInput.text = selected_Tag_Object.GetNounSString();
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
                        verb1_TextInput.text = selected_Tag_Object.GetVerb1String();
                        verb2_TextInput.text = selected_Tag_Object.GetVerb2String();
                        verb3_TextInput.text = selected_Tag_Object.GetVerb3String();
                        verbIng_TextInput.text = selected_Tag_Object.GetVerbIngString();
                        verbS_TextInput.text = selected_Tag_Object.GetVerbSString();
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
                        verb1_TextInput.text = selected_Tag_Object.GetVerb1String();
                        verb2_TextInput.text = selected_Tag_Object.GetVerb2String();
                        verb3_TextInput.text = selected_Tag_Object.GetVerb3String();
                        verbIng_TextInput.text = selected_Tag_Object.GetVerbIngString();
                        verbS_TextInput.text = selected_Tag_Object.GetVerbSString();
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

                    tagNamePrev_String = tagName_String;

                }

            }

        }



    }

    private function CreateGUIObjectVoid(){

        

        adjective_TextInput                     = new TextInput();
        adjective_TextInput.id                  = "UIPopupEditTag_Object_InputAdj";
        adjective_TextInput.percentWidth        = 100;
        adjective_TextInput.text                = " ";
        adjective_Text                          = new Text();
        adjective_Text.text                     = "Adjective";
        adverb_TextInput                     = new TextInput();
        adverb_TextInput.id                  = "UIPopupEditTag_Object_InputAdv";
        adverb_TextInput.percentWidth        = 100;
        adverb_TextInput.text                = " ";
        adverb_Text                          = new Text();
        adverb_Text.text                     = "Adverb";
        nounPos_TextInput                 = new TextInput();
        nounPos_TextInput.id              = "UIPopupEditTag_Object_InputNounPos";
        nounPos_TextInput.percentWidth    = 100;
        nounPos_TextInput.text            = " ";
        nounPos_Text                      = new Text();
        nounPos_Text.text                 = "Noun Possesion";
        nounSPos_TextInput                = new TextInput();
        nounSPos_TextInput.id             = "UIPopupEditTag_Object_InputNounSPos";
        nounSPos_TextInput.percentWidth   = 100;
        nounSPos_TextInput.text           = " ";
        nounSPos_Text                     = new Text();
        nounSPos_Text.text                = "Noun Plural Possesion";
        nounS_TextInput                   = new TextInput();
        nounS_TextInput.id                = "UIPopupEditTag_Object_InputNounS";
        nounS_TextInput.percentWidth      = 100;
        nounS_TextInput.text              = " ";
        nounS_Text                        = new Text();
        nounS_Text.text                   = "Noun Plural";
        noun_TextInput                    = new TextInput();
        noun_TextInput.id                 = "UIPopupEditTag_Object_InputNoun";
        noun_TextInput.percentWidth       = 100;
        noun_TextInput.text               = " ";
        noun_Text                         = new Text();
        noun_Text.text                    = "Noun";
        verb1_TextInput                   = new TextInput();
        verb1_TextInput.id                = "UIPopupEditTag_Object_InputVerb1";
        verb1_TextInput.percentWidth      = 100;
        verb1_TextInput.text              = " ";
        verb1_Text                        = new Text();
        verb1_Text.text                   = "Verb 1";
        verb2_TextInput                   = new TextInput();
        verb2_TextInput.id                = "UIPopupEditTag_Object_InputVerb2";
        verb2_TextInput.percentWidth      = 100;
        verb2_TextInput.text              = " ";
        verb2_Text                        = new Text();
        verb2_Text.text                   = "Verb 2";
        verb3_TextInput                   = new TextInput();
        verb3_TextInput.id                = "UIPopupEditTag_Object_InputVerb3";
        verb3_TextInput.percentWidth      = 100;
        verb3_TextInput.text              = " ";
        verb3_Text                        = new Text();
        verb3_Text.text                   = "Verb 3";
        verbIng_TextInput                 = new TextInput();
        verbIng_TextInput.id              = "UIPopupEditTag_Object_InputVerbIng";
        verbIng_TextInput.percentWidth    = 100;
        verbIng_TextInput.text            = " ";
        verbIng_Text                      = new Text();
        verbIng_Text.text                 = "Verb + Ing";
        verbS_TextInput                   = new TextInput();
        verbS_TextInput.id                = "UIPopupEditTag_Object_InputVerbS";
        verbS_TextInput.percentWidth      = 100;
        verbS_TextInput.text              = " ";
        verbS_Text                        = new Text();
        verbS_Text.text                   = "Verb + S";

    }



}