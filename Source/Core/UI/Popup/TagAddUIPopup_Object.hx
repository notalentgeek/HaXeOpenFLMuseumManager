class UIPopupAddObjectTag{



    /*Most variable mostly comes from the inputText and text object.*/
    private var buttonObject                        :Button                     = null;
    private var collectionGlobalObject              :CollectionGlobal           = null;
    private var gridObject                          :Grid                       = null;
    private var inputAdjTextInputObject             :TextInput                  = null;
    private var inputAdjTextObject                  :Text                       = null;
    private var inputAdvTextInputObject             :TextInput                  = null;
    private var inputAdvTextObject                  :Text                       = null;
    private var inputNounPosTextInputObject         :TextInput                  = null;
    private var inputNounPosTextObject              :Text                       = null;
    private var inputNounSPosTextInputObject        :TextInput                  = null;
    private var inputNounSPosTextObject             :Text                       = null;
    private var inputNounSTextInputObject           :TextInput                  = null;
    private var inputNounSTextObject                :Text                       = null;
    private var inputNounTextInputObject            :TextInput                  = null;
    private var inputNounTextObject                 :Text                       = null;
    private var inputTagNameTextInputObject         :TextInput                  = null;
    private var inputVerb1TextInputObject           :TextInput                  = null;
    private var inputVerb1TextObject                :Text                       = null;
    private var inputVerb2TextInputObject           :TextInput                  = null;
    private var inputVerb2TextObject                :Text                       = null;
    private var inputVerb3TextInputObject           :TextInput                  = null;
    private var inputVerb3TextObject                :Text                       = null;
    private var inputVerbIngTextInputObject         :TextInput                  = null;
    private var inputVerbIngTextObject              :Text                       = null;
    private var inputVerbSTextInputObject           :TextInput                  = null;
    private var inputVerbSTextObject                :Text                       = null;
    private var popupObject                         :Popup                      = null;
    private var selectFeelListSelectorObject        :ListSelector               = null;
    private var selectGeneralListSelectorObject     :ListSelector               = null;
    private var selectTagTypeListSelectorObject     :ListSelector               = null;
    private var selectTagTypeListSelectorPrevString :String                     = "";
    private var selectTagTypeListSelectorString     :String                     = "";
    private var textInputStructArray                :Array<StructTextInput>     = new Array<StructTextInput>();

    public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;

        /*Find the main button to actovate the popup in the main screen.*/
        buttonObject = _root.findChild("UIPopupAddTagObjectButton", Button, true);
        /*Adding a callback function of when the button is pressed.*/
        buttonObject.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupAddObjectTag.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Add Tag", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    var feelEnum            :EnumTagFeelType    = null;
                    var feelString          :String             = selectFeelListSelectorObject.text;
                    var generalBool         :Bool               = false;
                    var generalString       :String             = selectGeneralListSelectorObject.text;
                    if     (feelString == "POSITIVE"){ feelEnum = POSITIVE; }
                    else if(feelString == "NEUTRAL" ){ feelEnum = NEUTRAL ; }
                    else if(feelString == "NEGATIVE"){ feelEnum = NEGATIVE; }
                    if     (generalString == "Yes"){ generalBool = true ; }
                    else if(generalString == "No" ){ generalBool = false; }
                    var tagObject:ObjectTag = new ObjectTag(
                        collectionGlobalObject,
                        feelEnum,
                        generalBool,
                        inputTagNameTextInputObject.text,
                        Type.createEnum(
                            EnumTagType,
                            selectTagTypeListSelectorObject.text
                        )
                    );
                    if(selectTagTypeListSelectorObject.text == "ADJ"){
                        tagObject
                            .SetAdjectiveStringObject   (inputAdjTextInputObject        .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "ADV"){
                        tagObject
                            .SetAdverbStringObject      (inputAdvTextInputObject        .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_ALIVE_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text)
                            .SetNounPosStringObject     (inputNounPosTextInputObject    .text)
                            .SetNounSStringObject       (inputNounSTextInputObject      .text)
                            .SetNounSPosStringObject    (inputNounSPosTextInputObject   .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_ALIVE_CONCRETE"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text)
                            .SetNounPosStringObject     (inputNounPosTextInputObject    .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text)
                            .SetNounSStringObject       (inputNounSTextInputObject      .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_HOLD_CONCRETE"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text)
                            .SetNounSStringObject       (inputNounSTextInputObject      .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text)
                            .SetNounSStringObject       (inputNounSTextInputObject      .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){
                        tagObject.SetNounStringObject(inputNounTextInputObject.text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text)
                            .SetNounSStringObject       (inputNounSTextInputObject      .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_SEE_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_TITLE"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text)
                            .SetNounSStringObject       (inputNounSTextInputObject      .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_WEAR_CONCRETE"){
                        tagObject
                            .SetNounStringObject        (inputNounTextInputObject       .text)
                            .SetNounSStringObject       (inputNounSTextInputObject      .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "VERB_INTRANSITIVE"){
                        tagObject
                            .SetVerb1StringObject       (inputVerb1TextInputObject      .text)
                            .SetVerb2StringObject       (inputVerb2TextInputObject      .text)
                            .SetVerb3StringObject       (inputVerb3TextInputObject      .text)
                            .SetVerbIngStringObject     (inputVerbIngTextInputObject    .text)
                            .SetVerbSStringObject       (inputVerbSTextInputObject      .text);
                    }
                    else if(selectTagTypeListSelectorObject.text == "VERB_TRANSITIVE"){
                        tagObject
                            .SetVerb1StringObject       (inputVerb1TextInputObject      .text)
                            .SetVerb2StringObject       (inputVerb2TextInputObject      .text)
                            .SetVerb3StringObject       (inputVerb3TextInputObject      .text)
                            .SetVerbIngStringObject     (inputVerbIngTextInputObject    .text)
                            .SetVerbSStringObject       (inputVerbSTextInputObject      .text);
                    }

                }

            });

            gridObject                                  = popupObject.content.findChild("UIPopupAddObjectTag_Grid"              , Grid          , true);
            inputTagNameTextInputObject                 = popupObject.content.findChild("UIPopupAddObjectTag_InputName"         , TextInput     , true);
            selectFeelListSelectorObject                = popupObject.content.findChild("UIPopupAddObjectTag_SelectFeel"        , ListSelector  , true);
            selectGeneralListSelectorObject             = popupObject.content.findChild("UIPopupAddObjectTag_SelectGeneral"     , ListSelector  , true);
            selectTagTypeListSelectorObject             = popupObject.content.findChild("UIPopupAddObjectTag_SelectTagType"     , ListSelector  , true);
            selectFeelListSelectorObject.method         = "default";
            selectGeneralListSelectorObject.method      = "default";
            selectTagTypeListSelectorObject.method      = "default";

            CreateGUIObjectVoid();

        }

    }
    public function UpdateVoid(){

        if(popupObject != null){

            selectTagTypeListSelectorString = selectTagTypeListSelectorObject.text;
            if(selectTagTypeListSelectorString != selectTagTypeListSelectorPrevString){

                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < textInputStructArray.length){

                    gridObject.removeChild(textInputStructArray[loopCounter1Int].textObject);
                    gridObject.removeChild(textInputStructArray[loopCounter1Int].textInputObject);
                    loopCounter1Int ++;

                }
                CollectionFunction.ClearArray(textInputStructArray);
                CreateGUIObjectVoid();

                if(selectTagTypeListSelectorObject.text == "ADJ"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputAdjTextObject,
                        textInputObject :inputAdjTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputAdjTextObject);
                    gridObject.addChild(inputAdjTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "ADV"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputAdvTextObject,
                        textInputObject :inputAdvTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputAdvTextObject);
                    gridObject.addChild(inputAdvTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_ALIVE_ABSTRACT"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounPosTextObject,
                        textInputObject :inputNounPosTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounSTextObject,
                        textInputObject :inputNounSTextInputObject,
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounSPosTextObject,
                        textInputObject :inputNounSPosTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                    gridObject.addChild(inputNounPosTextObject);
                    gridObject.addChild(inputNounPosTextInputObject);
                    gridObject.addChild(inputNounSTextObject);
                    gridObject.addChild(inputNounSTextInputObject);
                    gridObject.addChild(inputNounSPosTextObject);
                    gridObject.addChild(inputNounSPosTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_ALIVE_CONCRETE"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounPosTextObject,
                        textInputObject :inputNounPosTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                    gridObject.addChild(inputNounPosTextObject);
                    gridObject.addChild(inputNounPosTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounSTextObject,
                        textInputObject :inputNounSTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                    gridObject.addChild(inputNounSTextObject);
                    gridObject.addChild(inputNounSTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_HOLD_CONCRETE"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounSTextObject,
                        textInputObject :inputNounSTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                    gridObject.addChild(inputNounSTextObject);
                    gridObject.addChild(inputNounSTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounSTextObject,
                        textInputObject :inputNounSTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                    gridObject.addChild(inputNounSTextObject);
                    gridObject.addChild(inputNounSTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounSTextObject,
                        textInputObject :inputNounSTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                    gridObject.addChild(inputNounSTextObject);
                    gridObject.addChild(inputNounSTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_SEE_ABSTRACT"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_TITLE"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject,
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounSTextObject,
                        textInputObject :inputNounSTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                    gridObject.addChild(inputNounSTextObject);
                    gridObject.addChild(inputNounSTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_WEAR_CONCRETE"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounTextObject,
                        textInputObject :inputNounTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputNounSTextObject,
                        textInputObject :inputNounSTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputNounTextObject);
                    gridObject.addChild(inputNounTextInputObject);
                    gridObject.addChild(inputNounSTextObject);
                    gridObject.addChild(inputNounSTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "VERB_INTRANSITIVE"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerb1TextObject,
                        textInputObject :inputVerb1TextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerb2TextObject,
                        textInputObject :inputVerb2TextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerb3TextObject,
                        textInputObject :inputVerb3TextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerbIngTextObject,
                        textInputObject :inputVerbIngTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerbSTextObject,
                        textInputObject :inputVerbSTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputVerb1TextObject);
                    gridObject.addChild(inputVerb1TextInputObject);
                    gridObject.addChild(inputVerb2TextObject);
                    gridObject.addChild(inputVerb2TextInputObject);
                    gridObject.addChild(inputVerb3TextObject);
                    gridObject.addChild(inputVerb3TextInputObject);
                    gridObject.addChild(inputVerbIngTextObject);
                    gridObject.addChild(inputVerbIngTextInputObject);
                    gridObject.addChild(inputVerbSTextObject);
                    gridObject.addChild(inputVerbSTextInputObject);
                }
                else if(selectTagTypeListSelectorObject.text == "VERB_TRANSITIVE"){
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerb1TextObject,
                        textInputObject :inputVerb1TextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerb2TextObject,
                        textInputObject :inputVerb2TextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerb3TextObject,
                        textInputObject :inputVerb3TextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerbIngTextObject,
                        textInputObject :inputVerbIngTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    var textInputStruct:StructTextInput = {
                        textObject      :inputVerbSTextObject,
                        textInputObject :inputVerbSTextInputObject
                    }
                    textInputStructArray.push(textInputStruct);
                    gridObject.addChild(inputVerb1TextObject);
                    gridObject.addChild(inputVerb1TextInputObject);
                    gridObject.addChild(inputVerb2TextObject);
                    gridObject.addChild(inputVerb2TextInputObject);
                    gridObject.addChild(inputVerb3TextObject);
                    gridObject.addChild(inputVerb3TextInputObject);
                    gridObject.addChild(inputVerbIngTextObject);
                    gridObject.addChild(inputVerbIngTextInputObject);
                    gridObject.addChild(inputVerbSTextObject);
                    gridObject.addChild(inputVerbSTextInputObject);
                }

                selectTagTypeListSelectorPrevString = selectTagTypeListSelectorString;

            }

        }



    }

    private function CreateGUIObjectVoid(){

        

        inputAdjTextInputObject                     = new TextInput();
        inputAdjTextInputObject.id                  = "UIPopupAddObjectTag_InputAdj";
        inputAdjTextInputObject.percentWidth        = 100;
        inputAdjTextInputObject.text                = " ";
        inputAdjTextObject                          = new Text();
        inputAdjTextObject.text                     = "Adjective";
        inputAdvTextInputObject                     = new TextInput();
        inputAdvTextInputObject.id                  = "UIPopupAddObjectTag_InputAdv";
        inputAdvTextInputObject.percentWidth        = 100;
        inputAdvTextInputObject.text                = " ";
        inputAdvTextObject                          = new Text();
        inputAdvTextObject.text                     = "Adverb";
        inputNounPosTextInputObject                 = new TextInput();
        inputNounPosTextInputObject.id              = "UIPopupAddObjectTag_InputNounPos";
        inputNounPosTextInputObject.percentWidth    = 100;
        inputNounPosTextInputObject.text            = " ";
        inputNounPosTextObject                      = new Text();
        inputNounPosTextObject.text                 = "Noun Possesion";
        inputNounSPosTextInputObject                = new TextInput();
        inputNounSPosTextInputObject.id             = "UIPopupAddObjectTag_InputNounSPos";
        inputNounSPosTextInputObject.percentWidth   = 100;
        inputNounSPosTextInputObject.text           = " ";
        inputNounSPosTextObject                     = new Text();
        inputNounSPosTextObject.text                = "Noun Plural Possesion";
        inputNounSTextInputObject                   = new TextInput();
        inputNounSTextInputObject.id                = "UIPopupAddObjectTag_InputNounS";
        inputNounSTextInputObject.percentWidth      = 100;
        inputNounSTextInputObject.text              = " ";
        inputNounSTextObject                        = new Text();
        inputNounSTextObject.text                   = "Noun Plural";
        inputNounTextInputObject                    = new TextInput();
        inputNounTextInputObject.id                 = "UIPopupAddObjectTag_InputNoun";
        inputNounTextInputObject.percentWidth       = 100;
        inputNounTextInputObject.text               = " ";
        inputNounTextObject                         = new Text();
        inputNounTextObject.text                    = "Noun";
        inputVerb1TextInputObject                   = new TextInput();
        inputVerb1TextInputObject.id                = "UIPopupAddObjectTag_InputVerb1";
        inputVerb1TextInputObject.percentWidth      = 100;
        inputVerb1TextInputObject.text              = " ";
        inputVerb1TextObject                        = new Text();
        inputVerb1TextObject.text                   = "Verb 1";
        inputVerb2TextInputObject                   = new TextInput();
        inputVerb2TextInputObject.id                = "UIPopupAddObjectTag_InputVerb2";
        inputVerb2TextInputObject.percentWidth      = 100;
        inputVerb2TextInputObject.text              = " ";
        inputVerb2TextObject                        = new Text();
        inputVerb2TextObject.text                   = "Verb 2";
        inputVerb3TextInputObject                   = new TextInput();
        inputVerb3TextInputObject.id                = "UIPopupAddObjectTag_InputVerb3";
        inputVerb3TextInputObject.percentWidth      = 100;
        inputVerb3TextInputObject.text              = " ";
        inputVerb3TextObject                        = new Text();
        inputVerb3TextObject.text                   = "Verb 3";
        inputVerbIngTextInputObject                 = new TextInput();
        inputVerbIngTextInputObject.id              = "UIPopupAddObjectTag_InputVerbIng";
        inputVerbIngTextInputObject.percentWidth    = 100;
        inputVerbIngTextInputObject.text            = " ";
        inputVerbIngTextObject                      = new Text();
        inputVerbIngTextObject.text                 = "Verb + Ing";
        inputVerbSTextInputObject                   = new TextInput();
        inputVerbSTextInputObject.id                = "UIPopupAddObjectTag_InputVerbS";
        inputVerbSTextInputObject.percentWidth      = 100;
        inputVerbSTextInputObject.text              = " ";
        inputVerbSTextObject                        = new Text();
        inputVerbSTextObject.text                   = "Verb + S";

    }



}