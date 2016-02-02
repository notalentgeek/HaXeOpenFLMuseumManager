import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import haxe.ui.toolkit.containers.Absolute;
import haxe.ui.toolkit.containers.Accordion;
import haxe.ui.toolkit.containers.Grid;
import haxe.ui.toolkit.containers.HBox;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.controls.popups.CustomPopupContent;
import haxe.ui.toolkit.controls.popups.Popup;
import haxe.ui.toolkit.controls.selection.ListSelector;
import haxe.ui.toolkit.controls.Text;
import haxe.ui.toolkit.controls.TextInput;
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.data.DataSource;
import haxe.ui.toolkit.events.UIEvent;



class UIPopupEditObjectTag{


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
    private var selectedTagObject                   :ObjectTag                  = null;
    private var selectFeelListSelectorObject        :ListSelector               = null;
    private var selectGeneralListSelectorObject     :ListSelector               = null;
    private var selectTagListSelectorObject         :ListSelector               = null;
    private var selectTagNameListSelectorPrevString :String                     = "";
    private var selectTagNameListSelectorString     :String                     = "";
    private var selectTagTypeListSelectorObject     :ListSelector               = null;
    private var textInputStructArray                :Array<StructTextInputTag>  = new Array<StructTextInputTag>();

    public function new(_collectionGlobalObject:CollectionGlobal, _root:Root){

        collectionGlobalObject = _collectionGlobalObject;

        /*Find the main button to actovate the popup in the main screen.*/
        buttonObject = _root.findChild("UIPopupEditTagObjectButton", Button, true);
        /*Editing a callback function of when the button is pressed.*/
        buttonObject.onClick = function(_e){

            /*Editing OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupEditObjectTag.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Edit Tag", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){

                    if(selectedTagObject != null){

                        var feelEnum            :EnumTagFeelType    = null;
                        var feelString          :String             = selectFeelListSelectorObject.text;
                        var generalBool         :Bool               = false;
                        var generalString       :String             = selectGeneralListSelectorObject.text;
                        if     (feelString == "POSITIVE"){ feelEnum = POSITIVE; }
                        else if(feelString == "NEUTRAL" ){ feelEnum = NEUTRAL ; }
                        else if(feelString == "NEGATIVE"){ feelEnum = NEGATIVE; }
                        if     (generalString == "Yes"){ generalBool = true ; }
                        else if(generalString == "No" ){ generalBool = false; }
                        selectedTagObject.SetFeelEnumObject(feelEnum);
                        selectedTagObject.SetGeneralTagBoolObject(generalBool);
                        selectedTagObject.SetNameStringObject(inputTagNameTextInputObject.text);
                        if(selectTagTypeListSelectorObject.text == "ADJ"){
                            selectedTagObject
                                .SetAdjectiveStringObject   (inputAdjTextInputObject        .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "ADV"){
                            selectedTagObject
                                .SetAdverbStringObject      (inputAdvTextInputObject        .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_ALIVE_ABSTRACT"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text)
                                .SetNounPosStringObject     (inputNounPosTextInputObject    .text)
                                .SetNounSStringObject       (inputNounSTextInputObject      .text)
                                .SetNounSPosStringObject    (inputNounSPosTextInputObject   .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_ALIVE_CONCRETE"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text)
                                .SetNounPosStringObject     (inputNounPosTextInputObject    .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text)
                                .SetNounSStringObject       (inputNounSTextInputObject      .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_HOLD_CONCRETE"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text)
                                .SetNounSStringObject       (inputNounSTextInputObject      .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text)
                                .SetNounSStringObject       (inputNounSTextInputObject      .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){
                            selectedTagObject.SetNounStringObject(inputNounTextInputObject.text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text)
                                .SetNounSStringObject       (inputNounSTextInputObject      .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_SEE_ABSTRACT"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_TITLE"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text)
                                .SetNounSStringObject       (inputNounSTextInputObject      .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_WEAR_CONCRETE"){
                            selectedTagObject
                                .SetNounStringObject        (inputNounTextInputObject       .text)
                                .SetNounSStringObject       (inputNounSTextInputObject      .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "VERB_INTRANSITIVE"){
                            selectedTagObject
                                .SetVerb1StringObject       (inputVerb1TextInputObject      .text)
                                .SetVerb2StringObject       (inputVerb2TextInputObject      .text)
                                .SetVerb3StringObject       (inputVerb3TextInputObject      .text)
                                .SetVerbIngStringObject     (inputVerbIngTextInputObject    .text)
                                .SetVerbSStringObject       (inputVerbSTextInputObject      .text);
                        }
                        else if(selectTagTypeListSelectorObject.text == "VERB_TRANSITIVE"){
                            selectedTagObject
                                .SetVerb1StringObject       (inputVerb1TextInputObject      .text)
                                .SetVerb2StringObject       (inputVerb2TextInputObject      .text)
                                .SetVerb3StringObject       (inputVerb3TextInputObject      .text)
                                .SetVerbIngStringObject     (inputVerbIngTextInputObject    .text)
                                .SetVerbSStringObject       (inputVerbSTextInputObject      .text);
                        }

                    }

                }

            });

            gridObject                                  = popupObject.content.findChild("UIPopupEditObjectTag_Grid"             , Grid          , true);
            inputTagNameTextInputObject                 = popupObject.content.findChild("UIPopupEditObjectTag_InputName"        , TextInput     , true);
            selectFeelListSelectorObject                = popupObject.content.findChild("UIPopupEditObjectTag_SelectFeel"       , ListSelector  , true);
            selectFeelListSelectorObject.method         = "default";
            selectGeneralListSelectorObject             = popupObject.content.findChild("UIPopupEditObjectTag_SelectGeneral"    , ListSelector  , true);
            selectGeneralListSelectorObject.method      = "default";
            selectTagListSelectorObject                 = popupObject.content.findChild("UIPopupEditObjectTag_SelectTag"        , ListSelector  , true);
            selectTagListSelectorObject.method          = "default";
            selectTagTypeListSelectorObject             = popupObject.content.findChild("UIPopupEditObjectTag_SelectTagType"    , ListSelector  , true);
            selectTagTypeListSelectorObject.method      = "default";

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){

                selectTagListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;

            }

            CreateGUIObjectVoid();

        }

    }
    public function UpdateVoid(){



        if(popupObject != null){

            if(
                selectGeneralListSelectorObject.text            == ""   ||
                selectGeneralListSelectorObject.text            == " "  ||
                selectGeneralListSelectorObject.selectedIndex   == -1
            ){
                selectTagListSelectorObject.disabled            = true;
                selectTagListSelectorObject.selectedIndex       = -1;
                selectTagListSelectorObject.text                = " ";
            }
            else{ selectTagListSelectorObject.disabled          = false; }
            if(
                selectTagListSelectorObject.text                == ""   ||
                selectTagListSelectorObject.text                == " "  ||
                selectTagListSelectorObject.selectedIndex       == -1
            ){
                inputTagNameTextInputObject.disabled            = true;
                selectFeelListSelectorObject.disabled           = true;
                selectTagTypeListSelectorObject.disabled        = true;
            }
            else{
                inputTagNameTextInputObject.disabled            = false;
                selectFeelListSelectorObject.disabled           = false;
                selectTagTypeListSelectorObject.disabled        = false;
            }

            selectTagNameListSelectorString = selectTagListSelectorObject.text;
            if(selectTagNameListSelectorString != selectTagNameListSelectorPrevString){

                selectedTagObject = CollectionFunction.FindTagObject(collectionGlobalObject, false, selectTagNameListSelectorString);

                if(selectedTagObject != null){

                    inputTagNameTextInputObject.text = selectedTagObject.GetNameString();
                    selectFeelListSelectorObject.text = Std.string(selectedTagObject.GetFeelEnum());
                    if     (selectedTagObject.GetGeneralTagBool() == true ){ selectGeneralListSelectorObject.text = "Yes"; }
                    else if(selectedTagObject.GetGeneralTagBool() == false){ selectGeneralListSelectorObject.text = "No" ; }
                    selectTagTypeListSelectorObject.text = Std.string(selectedTagObject.GetTypeEnum());

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < textInputStructArray.length){

                        gridObject.removeChild(textInputStructArray[loopCounter1Int].textObject);
                        gridObject.removeChild(textInputStructArray[loopCounter1Int].textInputObject);
                        loopCounter1Int ++;

                    }
                    CollectionFunction.ClearArray(textInputStructArray);
                    CreateGUIObjectVoid();

                    if(selectTagTypeListSelectorObject.text == "ADJ"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputAdjTextObject,
                            textInputObject :inputAdjTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputAdjTextInputObject.text = selectedTagObject.GetAdjectiveString();
                        gridObject.addChild(inputAdjTextObject);
                        gridObject.addChild(inputAdjTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "ADV"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputAdvTextObject,
                            textInputObject :inputAdvTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputAdvTextInputObject.text = selectedTagObject.GetAdverbString();
                        gridObject.addChild(inputAdvTextObject);
                        gridObject.addChild(inputAdvTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_ALIVE_ABSTRACT"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounPosTextObject,
                            textInputObject :inputNounPosTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounSTextObject,
                            textInputObject :inputNounSTextInputObject,
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounSPosTextObject,
                            textInputObject :inputNounSPosTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        inputNounPosTextInputObject.text = selectedTagObject.GetNounPosString();
                        inputNounSTextInputObject.text = selectedTagObject.GetNounSString();
                        inputNounSPosTextInputObject.text = selectedTagObject.GetNounSPosString();
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
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounPosTextObject,
                            textInputObject :inputNounPosTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        inputNounPosTextInputObject.text = selectedTagObject.GetNounPosString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                        gridObject.addChild(inputNounPosTextObject);
                        gridObject.addChild(inputNounPosTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_HOLD_ABSTRACT"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounSTextObject,
                            textInputObject :inputNounSTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        inputNounSTextInputObject.text = selectedTagObject.GetNounSString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                        gridObject.addChild(inputNounSTextObject);
                        gridObject.addChild(inputNounSTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_HOLD_CONCRETE"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounSTextObject,
                            textInputObject :inputNounSTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        inputNounSTextInputObject.text = selectedTagObject.GetNounSString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                        gridObject.addChild(inputNounSTextObject);
                        gridObject.addChild(inputNounSTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_ABSTRACT"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounSTextObject,
                            textInputObject :inputNounSTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        inputNounSTextInputObject.text = selectedTagObject.GetNounSString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                        gridObject.addChild(inputNounSTextObject);
                        gridObject.addChild(inputNounSTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_PLACE_CONCRETE_OWNER"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounSTextObject,
                            textInputObject :inputNounSTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        inputNounSTextInputObject.text = selectedTagObject.GetNounSString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                        gridObject.addChild(inputNounSTextObject);
                        gridObject.addChild(inputNounSTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_SEE_ABSTRACT"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_SEE_CONCRETE"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_TITLE"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject,
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounSTextObject,
                            textInputObject :inputNounSTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        inputNounSTextInputObject.text = selectedTagObject.GetNounSString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                        gridObject.addChild(inputNounSTextObject);
                        gridObject.addChild(inputNounSTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_WEAR_ABSTRACT"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "NOUN_INANIMATE_WEAR_CONCRETE"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounTextObject,
                            textInputObject :inputNounTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputNounSTextObject,
                            textInputObject :inputNounSTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputNounTextInputObject.text = selectedTagObject.GetNounString();
                        inputNounSTextInputObject.text = selectedTagObject.GetNounSString();
                        gridObject.addChild(inputNounTextObject);
                        gridObject.addChild(inputNounTextInputObject);
                        gridObject.addChild(inputNounSTextObject);
                        gridObject.addChild(inputNounSTextInputObject);
                    }
                    else if(selectTagTypeListSelectorObject.text == "VERB_INTRANSITIVE"){
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerb1TextObject,
                            textInputObject :inputVerb1TextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerb2TextObject,
                            textInputObject :inputVerb2TextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerb3TextObject,
                            textInputObject :inputVerb3TextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerbIngTextObject,
                            textInputObject :inputVerbIngTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerbSTextObject,
                            textInputObject :inputVerbSTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputVerb1TextInputObject.text = selectedTagObject.GetVerb1String();
                        inputVerb2TextInputObject.text = selectedTagObject.GetVerb2String();
                        inputVerb3TextInputObject.text = selectedTagObject.GetVerb3String();
                        inputVerbIngTextInputObject.text = selectedTagObject.GetVerbIngString();
                        inputVerbSTextInputObject.text = selectedTagObject.GetVerbSString();
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
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerb1TextObject,
                            textInputObject :inputVerb1TextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerb2TextObject,
                            textInputObject :inputVerb2TextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerb3TextObject,
                            textInputObject :inputVerb3TextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerbIngTextObject,
                            textInputObject :inputVerbIngTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        var textInputStruct:StructTextInputTag = {
                            textObject      :inputVerbSTextObject,
                            textInputObject :inputVerbSTextInputObject
                        }
                        textInputStructArray.push(textInputStruct);
                        inputVerb1TextInputObject.text = selectedTagObject.GetVerb1String();
                        inputVerb2TextInputObject.text = selectedTagObject.GetVerb2String();
                        inputVerb3TextInputObject.text = selectedTagObject.GetVerb3String();
                        inputVerbIngTextInputObject.text = selectedTagObject.GetVerbIngString();
                        inputVerbSTextInputObject.text = selectedTagObject.GetVerbSString();
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

                    selectTagNameListSelectorPrevString = selectTagNameListSelectorString;

                }

            }

        }



    }

    private function CreateGUIObjectVoid(){

        

        inputAdjTextInputObject                     = new TextInput();
        inputAdjTextInputObject.id                  = "UIPopupEditObjectTag_InputAdj";
        inputAdjTextInputObject.percentWidth        = 100;
        inputAdjTextInputObject.text                = " ";
        inputAdjTextObject                          = new Text();
        inputAdjTextObject.text                     = "Adjective";
        inputAdvTextInputObject                     = new TextInput();
        inputAdvTextInputObject.id                  = "UIPopupEditObjectTag_InputAdv";
        inputAdvTextInputObject.percentWidth        = 100;
        inputAdvTextInputObject.text                = " ";
        inputAdvTextObject                          = new Text();
        inputAdvTextObject.text                     = "Adverb";
        inputNounPosTextInputObject                 = new TextInput();
        inputNounPosTextInputObject.id              = "UIPopupEditObjectTag_InputNounPos";
        inputNounPosTextInputObject.percentWidth    = 100;
        inputNounPosTextInputObject.text            = " ";
        inputNounPosTextObject                      = new Text();
        inputNounPosTextObject.text                 = "Noun Possesion";
        inputNounSPosTextInputObject                = new TextInput();
        inputNounSPosTextInputObject.id             = "UIPopupEditObjectTag_InputNounSPos";
        inputNounSPosTextInputObject.percentWidth   = 100;
        inputNounSPosTextInputObject.text           = " ";
        inputNounSPosTextObject                     = new Text();
        inputNounSPosTextObject.text                = "Noun Plural Possesion";
        inputNounSTextInputObject                   = new TextInput();
        inputNounSTextInputObject.id                = "UIPopupEditObjectTag_InputNounS";
        inputNounSTextInputObject.percentWidth      = 100;
        inputNounSTextInputObject.text              = " ";
        inputNounSTextObject                        = new Text();
        inputNounSTextObject.text                   = "Noun Plural";
        inputNounTextInputObject                    = new TextInput();
        inputNounTextInputObject.id                 = "UIPopupEditObjectTag_InputNoun";
        inputNounTextInputObject.percentWidth       = 100;
        inputNounTextInputObject.text               = " ";
        inputNounTextObject                         = new Text();
        inputNounTextObject.text                    = "Noun";
        inputVerb1TextInputObject                   = new TextInput();
        inputVerb1TextInputObject.id                = "UIPopupEditObjectTag_InputVerb1";
        inputVerb1TextInputObject.percentWidth      = 100;
        inputVerb1TextInputObject.text              = " ";
        inputVerb1TextObject                        = new Text();
        inputVerb1TextObject.text                   = "Verb 1";
        inputVerb2TextInputObject                   = new TextInput();
        inputVerb2TextInputObject.id                = "UIPopupEditObjectTag_InputVerb2";
        inputVerb2TextInputObject.percentWidth      = 100;
        inputVerb2TextInputObject.text              = " ";
        inputVerb2TextObject                        = new Text();
        inputVerb2TextObject.text                   = "Verb 2";
        inputVerb3TextInputObject                   = new TextInput();
        inputVerb3TextInputObject.id                = "UIPopupEditObjectTag_InputVerb3";
        inputVerb3TextInputObject.percentWidth      = 100;
        inputVerb3TextInputObject.text              = " ";
        inputVerb3TextObject                        = new Text();
        inputVerb3TextObject.text                   = "Verb 3";
        inputVerbIngTextInputObject                 = new TextInput();
        inputVerbIngTextInputObject.id              = "UIPopupEditObjectTag_InputVerbIng";
        inputVerbIngTextInputObject.percentWidth    = 100;
        inputVerbIngTextInputObject.text            = " ";
        inputVerbIngTextObject                      = new Text();
        inputVerbIngTextObject.text                 = "Verb + Ing";
        inputVerbSTextInputObject                   = new TextInput();
        inputVerbSTextInputObject.id                = "UIPopupEditObjectTag_InputVerbS";
        inputVerbSTextInputObject.percentWidth      = 100;
        inputVerbSTextInputObject.text              = " ";
        inputVerbSTextObject                        = new Text();
        inputVerbSTextObject.text                   = "Verb + S";

    }



}