import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import haxe.ui.toolkit.containers.*;
import haxe.ui.toolkit.controls.*;
import haxe.ui.toolkit.controls.popups.*;
import haxe.ui.toolkit.controls.selection.*;
import haxe.ui.toolkit.core.*;
import haxe.ui.toolkit.core.interfaces.*;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.data.*;
import haxe.ui.toolkit.events.*;



class UIPopupEditObjectVisitor{



    private var changeAllHardwareManualButtonObject             :Button                     = null;
    private var changeAllSoftwareAutoButtonObject               :Button                     = null;
    private var changeAllSoftwareManualButtonObject             :Button                     = null;
    private var collectionGlobalObject                          :CollectionGlobal           = null;
    private var displayCurrentExhibitionTextObject              :Text                       = null;
    private var displayExplanationButtonObject                  :Button                     = null;
    private var displayExplanationPopupObject                   :Popup                      = null;
    private var displayPopularTagButtonObject                   :Button                     = null;
    private var displayPopularTagPopupObject                    :Popup                      = null;
    private var displayPreviousVisitorTextObject                :Text                       = null;
    private var displaySentenceButtonObject                     :Button                     = null;
    private var displaySentencePopupObject                      :Popup                      = null;
    private var displayTargetExhibitionTextObject               :Text                       = null;
    private var displayVisitorIndexGlobalTextObject             :Text                       = null;
    private var displayVisitorIndexLocalTextObject              :Text                       = null;
    private var gridObject                                      :Grid                       = null;
    private var inputNameTextInputObject                        :TextInput                  = null;
    private var mainButtonObject                                :Button                     = null;
    private var popupObject                                     :Popup                      = null;
    private var resetAllButtonObject                            :Button                     = null;
    private var resetButtonObject                               :Button                     = null;
    private var selectCurrentExhibitionListSelectorObject       :ListSelector               = null;
    private var selectedVisitorExplanationStringArray           :Array<String>              = new Array<String>();
    private var selectedVisitorObject                           :ObjectVisitor              = null;
    private var selectedVisitorPopularTagCountIntArray          :Array<Int>                 = new Array<Int>();
    private var selectedVisitorPopularTagObjectStringArray      :Array<String>              = new Array<String>();
    private var selectedVisitorSentenceStringArray              :Array<String>              = new Array<String>();
    private var selectModeListSelectorObject                    :ListSelector               = null;
    private var selectVisitorListSelectorObject                 :ListSelector               = null;
    private var selectVisitorListSelectorPrevString             :String                     = "";
    private var selectVisitorListSelectorString                 :String                     = "";
    private var visitorButtonObjectArray                        :Array<Button>              = new Array<Button>();
    private var visitorModePrevString                           :String                     = "asd";

    public function new(
        _collectionGlobalObject     :CollectionGlobal,
        _root                       :Root
    ){

        collectionGlobalObject      = _collectionGlobalObject;
        mainButtonObject            = _root.findChild("UIPopupEditVisitorObjectButton", Button, true);
        mainButtonObject.onClick    = function(_e){

            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupEditObjectVisitor.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Edit Visitor", buttonControlInt, function(_button){

                if(_button == PopupButton.OK){
                    if(selectedVisitorObject != null){

                        selectedVisitorObject.SetNameStringVoid(inputNameTextInputObject.text, this);

                    }
                }


            });

            changeAllHardwareManualButtonObject                 = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonChangeAllHardwareManual"    , Button        , true);
            changeAllSoftwareAutoButtonObject                   = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonChangeAllSoftwareAuto"      , Button        , true);
            changeAllSoftwareManualButtonObject                 = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonChangeAllSoftwareManual"    , Button        , true);
            displayCurrentExhibitionTextObject                  = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayCurrentExhibition"         , Text          , true);
            displayExplanationButtonObject                      = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonDisplayExplanation"         , Button        , true);
            displayPopularTagButtonObject                       = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonDisplayPopularTag"          , Button        , true);
            displayPreviousVisitorTextObject                    = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayPreviousVisitor"           , Text          , true);
            displaySentenceButtonObject                         = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonDisplaySentence"            , Button        , true);
            displayTargetExhibitionTextObject                   = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayTargetExhibition"          , Text          , true);
            displayVisitorIndexGlobalTextObject                 = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayVisitorIndexGlobal"        , Text          , true);
            displayVisitorIndexLocalTextObject                  = popupObject.content.findChild("UIPopupEditObjectVisitor_DisplayVisitorIndexLocal"         , Text          , true);
            gridObject                                          = popupObject.content.findChild("UIPopupEditObjectVisitor_Grid"                             , Grid          , true);
            inputNameTextInputObject                            = popupObject.content.findChild("UIPopupEditObjectVisitor_InputName"                        , TextInput     , true);
            resetAllButtonObject                                = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonResetAll"                   , Button        , true);
            resetButtonObject                                   = popupObject.content.findChild("UIPopupEditObjectVisitor_ButtonReset"                      , Button        , true);
            selectCurrentExhibitionListSelectorObject           = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectCurrentExhibition"          , ListSelector  , true);
            selectModeListSelectorObject                        = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectMode"                       , ListSelector  , true);
            selectVisitorListSelectorObject                     = popupObject.content.findChild("UIPopupEditObjectVisitor_SelectVisitor"                    , ListSelector  , true);

            selectCurrentExhibitionListSelectorObject.method    = "default";
            selectModeListSelectorObject.method                 = "default";
            selectVisitorListSelectorObject.method              = "default";

            ResetSelectVisitorListSelectorObjectVoid();

            if(_e.component.userData != null){
                var string:String = Std.string(_e.component.userData);
                var stringArray:Array<String> = string.split("*");
                var nameString:String = stringArray[1];
                var visitorObject:ObjectVisitor = CollectionFunction.FindVisitorObject(collectionGlobalObject, nameString);

                if(visitorObject != null){

                    selectedVisitorObject = visitorObject;
                    inputNameTextInputObject.text = selectedVisitorObject.GetNameString();
                    selectCurrentExhibitionListSelectorObject.selectedIndex = 0;
                    selectVisitorListSelectorObject.selectedIndex = 0;
                    selectVisitorListSelectorObject.text = selectedVisitorObject.GetNameString();
                    selectVisitorListSelectorString = selectVisitorListSelectorObject.text;
                    selectVisitorListSelectorPrevString = selectVisitorListSelectorObject.text;

                    ResetSelectVisitorListSelectorObjectVoid();

                }
            }

            changeAllHardwareManualButtonObject.onClick = function(_e){
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                    collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].SetVisitorModeEnumVoid(HARDWARE_MANUAL);
                    selectModeListSelectorObject.text = "Hardware Manual";
                    loopCounter1Int ++;
                }
            }
            changeAllSoftwareAutoButtonObject.onClick = function(_e){
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                    collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].SetVisitorModeEnumVoid(SOFTWARE_AUTO);
                    selectModeListSelectorObject.text = "Software Auto";
                    loopCounter1Int ++;
                }
            }
            changeAllSoftwareManualButtonObject.onClick = function(_e){
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                    collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].SetVisitorModeEnumVoid(SOFTWARE_MANUAL);
                    selectModeListSelectorObject.text = "Software Manual";
                    loopCounter1Int ++;
                }
            }
            UpdateDisplayCurrentExhibitionTextObjectVoid();
            displayExplanationButtonObject.onClick = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                displayExplanationPopupObject = PopupManager.instance.showList(selectedVisitorObject.GetExplanationStringArray(), -1, "Display Explanation", buttonControlInt, function(_button){});
                Std.instance(displayExplanationPopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
                displayExplanationPopupObject.y = popupObject.y;

            }
            displayPopularTagButtonObject.onClick = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                var displayStringArray:Array<String> = new Array<String>();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < selectedVisitorObject.GetTagCounterStructArray().length){

                    var displayString:String = selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt +
                        "" +
                        selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString();
                    displayStringArray.push(displayString);
                    loopCounter1Int ++;

                }

                displayPopularTagPopupObject = PopupManager.instance.showList(displayStringArray, -1, "Display Popular Tag", buttonControlInt, function(_button){});
                Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
                displayPopularTagPopupObject.y = popupObject.y;

            }
            displaySentenceButtonObject.onClick = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                displaySentencePopupObject = PopupManager.instance.showList(selectedVisitorObject.GetSentenceStringArray(), -1, "Display Sentence", buttonControlInt, function(_button){});
                Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
                displaySentencePopupObject.y = popupObject.y;

            }
            UpdateDisplayTargetExhibitionTextObjectVoid();
            UpdateDisplayVisitorIndexGlobalTextObjectVoid();
            UpdateDisplayVisitorIndexLocalTextObjectVoid();
            resetButtonObject.onClick = function(_e){

                if(selectedVisitorObject != null){
                    selectedVisitorObject.ResetVoid();
                }

            }
            resetAllButtonObject.onClick = function(_e){

                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
                    collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].ResetVoid();
                    loopCounter1Int ++;
                }

            }
            UpdateSelectCurrentExhibitionListSelectorObjectVoid();
            ResetSelectModeListSelectorObjectVoid();

        }

    }

    public function UpdateVoid(){
        var updateVisitorButtonBool:Bool = false;
        if(visitorButtonObjectArray.length != collectionGlobalObject.GetVisitorObjectArray().length){ updateVisitorButtonBool = true; }
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
            if(visitorButtonObjectArray[loopCounter1Int] != collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject()){
                if(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().id != null){ updateVisitorButtonBool = true; }
                else if(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().id == null){ updateVisitorButtonBool = false; }
            }
            else{ updateVisitorButtonBool = false; }
            loopCounter1Int ++;
        }
        if(updateVisitorButtonBool == true){
            UpdateVisitorButtonObjectArrayVoid();
        }
        if(popupObject != null){

            selectVisitorListSelectorString = selectVisitorListSelectorObject.text;
            if(selectVisitorListSelectorString != selectVisitorListSelectorPrevString){

                selectedVisitorObject = CollectionFunction.FindVisitorObject(collectionGlobalObject, selectVisitorListSelectorString);
                if(selectCurrentExhibitionListSelectorObject != null && selectedVisitorObject != null){
                    if(selectedVisitorObject.GetExhibitionCurrentObject() == null){
                        selectCurrentExhibitionListSelectorObject.text = "In Lobby";
                    }
                    else{
                        selectCurrentExhibitionListSelectorObject.text = selectedVisitorObject.GetExhibitionCurrentObject().GetNameStruct().nameFullString;
                    }
                }
                selectVisitorListSelectorPrevString = selectVisitorListSelectorString;

                ResetDisplayCurrentExhibitionTextObjectVoid();
                ResetDisplayExplanationTextObjectVoid();
                ResetDisplayPopularTagListSelectorObjectVoid();
                ResetDisplaySentenceListViewObjectVoid();
                ResetDisplayTargetExhibitionTextObjectVoid();
                ResetDisplayVisitorIndexGlobalTextObjectVoid();
                ResetDisplayVisitorIndexLocalTextObjectVoid();
                ResetInputNameTextInputObjectVoid();
                ResetSelectCurrentExhibitionListSelectorObject();
                ResetSelectModeListSelectorObjectVoid();

                ResetSelectVisitorListSelectorObjectVoid();

            }

            if(selectedVisitorObject != null){

                displayExplanationButtonObject.disabled = false;
                displayPopularTagButtonObject.disabled = false;
                displayPopularTagButtonObject.disabled = false;
                displaySentenceButtonObject.disabled = false;
                displaySentenceButtonObject.disabled = false;
                inputNameTextInputObject.disabled = false;
                resetButtonObject.disabled = false;
                selectCurrentExhibitionListSelectorObject.disabled = false;
                selectModeListSelectorObject.disabled = false;

                UpdateDisplayCurrentExhibitionTextObjectVoid();
                UpdateDisplayExplanationTextObjectVoid();
                UpdateDisplayPopularTagListSelectorObjectVoid();
                UpdateDisplaySentenceListViewObjectVoid();
                UpdateDisplayTargetExhibitionTextObjectVoid();
                UpdateDisplayVisitorIndexGlobalTextObjectVoid();
                UpdateDisplayVisitorIndexLocalTextObjectVoid();
                UpdateSelectCurrentExhibitionListSelectorObjectVoid();
                UpdateSelectModeListSelectorObjectVoid();

            }

            if(selectVisitorListSelectorObject.selectedIndex == -1){

                displayExplanationButtonObject.disabled = true;
                displayPopularTagButtonObject.disabled = true;
                displayPopularTagButtonObject.disabled = true;
                displaySentenceButtonObject.disabled = true;
                displaySentenceButtonObject.disabled = true;
                inputNameTextInputObject.disabled = true;
                resetButtonObject.disabled = true;
                selectCurrentExhibitionListSelectorObject.disabled = true;
                selectModeListSelectorObject.disabled = true;

            }

        }

    }

    private function ResetDisplayCurrentExhibitionTextObjectVoid(){
        if(displayCurrentExhibitionTextObject != null){
            displayCurrentExhibitionTextObject.text = "";
        }
    }
    private function ResetDisplayExplanationTextObjectVoid(){
        if(displayExplanationPopupObject != null){
            Std.instance(displayExplanationPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
        }
    }
    private function ResetDisplayPopularTagListSelectorObjectVoid(){
        if(displayPopularTagPopupObject != null){
            Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
        }
    }
    private function ResetDisplaySentenceListViewObjectVoid(){
        if(displaySentencePopupObject != null){
            Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
        }
    }
    private function ResetDisplayTargetExhibitionTextObjectVoid(){
        if(displayTargetExhibitionTextObject != null){ displayTargetExhibitionTextObject.text = ""; }
    }
    private function ResetDisplayVisitorIndexGlobalTextObjectVoid(){
        if(displayVisitorIndexGlobalTextObject != null){ displayVisitorIndexGlobalTextObject.text = ""; }
    }
    private function ResetDisplayVisitorIndexLocalTextObjectVoid(){
        if(displayVisitorIndexLocalTextObject != null){ displayVisitorIndexLocalTextObject.text = ""; }
    }
    private function ResetInputNameTextInputObjectVoid(){
        if(inputNameTextInputObject != null && selectedVisitorObject != null){ inputNameTextInputObject.text = selectedVisitorObject.GetNameString(); }
    }
    private function ResetSelectCurrentExhibitionListSelectorObject(){
        if(selectCurrentExhibitionListSelectorObject != null && selectedVisitorObject != null){
            selectCurrentExhibitionListSelectorObject.selectedIndex = -1;
            if(selectedVisitorObject.GetExhibitionCurrentObject() != null){
                selectCurrentExhibitionListSelectorObject.text = selectedVisitorObject.GetExhibitionCurrentObject().GetNameStruct().nameFullString;
            }
            else{
                selectCurrentExhibitionListSelectorObject.text = "In Lobby";
            }

        }
    }
    private function ResetSelectModeListSelectorObjectVoid(){
        if(selectModeListSelectorObject != null && selectedVisitorObject != null){
            if(selectedVisitorObject.GetVisitorModeEnum() == HARDWARE_MANUAL){ selectModeListSelectorObject.text = "Hardware Manual"; }
            else if(selectedVisitorObject.GetVisitorModeEnum() == SOFTWARE_AUTO){ selectModeListSelectorObject.text = "Software Auto"; }
            else if(selectedVisitorObject.GetVisitorModeEnum() == SOFTWARE_MANUAL){ selectModeListSelectorObject.text = "Software Manual"; }
        }
    }

    private function ResetSelectVisitorListSelectorObjectVoid(){

        selectVisitorListSelectorObject.dataSource.removeAll();
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){

            selectVisitorListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
            loopCounter1Int ++;

        }

    }

    private function UpdateDisplayCurrentExhibitionTextObjectVoid(){
        if(selectedVisitorObject != null){
            if(selectedVisitorObject.GetExhibitionCurrentObject() == null){
                displayCurrentExhibitionTextObject.text = "In Lobby";
            }
            else{
                displayCurrentExhibitionTextObject.text = selectedVisitorObject.GetExhibitionCurrentObject().GetNameStruct().nameFullString;
            }
        }
    }
    private function UpdateDisplayExplanationTextObjectVoid(){
        if(displayExplanationPopupObject != null){
            Std.instance(displayExplanationPopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            displayExplanationPopupObject.y = popupObject.y;
            var updateExplanationBool:Bool = false;
            var loopCounter1Int:Int = 0;
            if(selectedVisitorExplanationStringArray.length != selectedVisitorObject.GetExplanationStringArray().length){ updateExplanationBool = true; }
            while(loopCounter1Int < selectedVisitorObject.GetExplanationStringArray().length){
                if(updateExplanationBool == true){ break; }
                if(selectedVisitorExplanationStringArray[loopCounter1Int] != selectedVisitorObject.GetExplanationStringArray()[loopCounter1Int]){
                    updateExplanationBool = true;
                    break;
                }
                loopCounter1Int ++;
            }
            if(updateExplanationBool == true){
                CollectionFunction.ClearArray(selectedVisitorExplanationStringArray);
                Std.instance(displayExplanationPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < selectedVisitorObject.GetExplanationStringArray().length){
                    selectedVisitorExplanationStringArray.push(selectedVisitorObject.GetExplanationStringArray()[loopCounter2Int]);
                    Std.instance(displayExplanationPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(selectedVisitorObject.GetExplanationStringArray()[loopCounter2Int]);
                    loopCounter2Int ++;
                }
            }
        }
    }

    private function UpdateDisplayPopularTagListSelectorObjectVoid(){
        if(displayPopularTagPopupObject != null){
            Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            displayPopularTagPopupObject.y = popupObject.y;
            var updateTagBool:Bool = false;
            var loopCounter1Int:Int = 0;
            if(
                selectedVisitorPopularTagCountIntArray.length       != selectedVisitorObject.GetTagCounterStructArray().length ||
                selectedVisitorPopularTagObjectStringArray.length   != selectedVisitorObject.GetTagCounterStructArray().length
            ){ updateTagBool = true; }
            while(loopCounter1Int < selectedVisitorObject.GetTagCounterStructArray().length){
                if(updateTagBool == true){ break; }
                if(selectedVisitorPopularTagCountIntArray[loopCounter1Int] != selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt){ updateTagBool = true; break; }
                if(selectedVisitorPopularTagObjectStringArray[loopCounter1Int] != selectedVisitorObject.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString()){ updateTagBool = true; break; }
                loopCounter1Int ++;
            }
            if(updateTagBool == true){
                CollectionFunction.ClearArray(selectedVisitorPopularTagCountIntArray);
                CollectionFunction.ClearArray(selectedVisitorPopularTagObjectStringArray);
                Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < selectedVisitorObject.GetTagCounterStructArray().length){

                    selectedVisitorPopularTagCountIntArray.push(selectedVisitorObject.GetTagCounterStructArray()[loopCounter2Int].tagCounterInt);
                    selectedVisitorPopularTagObjectStringArray.push(selectedVisitorObject.GetTagCounterStructArray()[loopCounter2Int].tagObject.GetNameString());

                    Std.instance(displayPopularTagPopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(
                        selectedVisitorObject.GetTagCounterStructArray()[loopCounter2Int].tagCounterInt +
                        " " +
                        selectedVisitorObject.GetTagCounterStructArray()[loopCounter2Int].tagObject.GetNameString()
                    );
                    loopCounter2Int ++;
                }
            }
        }
    }

    private function UpdateDisplaySentenceListViewObjectVoid(){
        if(displaySentencePopupObject != null){
            Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            displaySentencePopupObject.y = popupObject.y;
            var updateSentenceBool:Bool = false;
            var loopCounter1Int:Int = 0;
            if(selectedVisitorSentenceStringArray.length != selectedVisitorObject.GetSentenceStringArray().length){ updateSentenceBool = true; }
            while(loopCounter1Int < selectedVisitorObject.GetSentenceStringArray().length){
                if(updateSentenceBool == true){ break; }
                if(selectedVisitorSentenceStringArray[loopCounter1Int] != selectedVisitorObject.GetSentenceStringArray()[loopCounter1Int]){
                    updateSentenceBool = true;
                    break;
                }
                loopCounter1Int ++;
            }
            if(updateSentenceBool == true){
                CollectionFunction.ClearArray(selectedVisitorSentenceStringArray);
                Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < selectedVisitorObject.GetSentenceStringArray().length){
                    if(selectedVisitorObject.GetNameString() == "Visitor 1"){ trace(selectedVisitorObject.GetSentenceStringArray()[loopCounter2Int]); }
                    selectedVisitorSentenceStringArray.push(selectedVisitorObject.GetSentenceStringArray()[loopCounter2Int]);
                    Std.instance(displaySentencePopupObject.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(selectedVisitorSentenceStringArray[selectedVisitorSentenceStringArray.length - 1]);

                    loopCounter2Int ++;
                }
            }
        }
    }

    private function UpdateDisplayTargetExhibitionTextObjectVoid(){
        if(selectedVisitorObject != null){
            var targetExhibitionNameFullString:String = "";
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < selectedVisitorObject.GetExhibitionTargetObjectArray().length){
                if(loopCounter1Int == selectedVisitorObject.GetExhibitionTargetObjectArray().length - 1){
                    targetExhibitionNameFullString = targetExhibitionNameFullString + selectedVisitorObject.GetExhibitionTargetObjectArray()[loopCounter1Int].GetNameStruct().nameFullString;
                }
                else{
                    targetExhibitionNameFullString = targetExhibitionNameFullString + selectedVisitorObject.GetExhibitionTargetObjectArray()[loopCounter1Int].GetNameStruct().nameFullString + "\n";
                }
                loopCounter1Int ++;
            }
            displayTargetExhibitionTextObject.text = targetExhibitionNameFullString;
        }
    }

    private function UpdateDisplayVisitorIndexGlobalTextObjectVoid(){
        if(selectedVisitorObject != null){ displayVisitorIndexGlobalTextObject.text = Std.string(selectedVisitorObject.GetIndexGlobalInt()); }
    }

    private function UpdateDisplayVisitorIndexLocalTextObjectVoid(){
        if(selectedVisitorObject != null){ displayVisitorIndexLocalTextObject.text = Std.string(selectedVisitorObject.GetIndexLocalInt()); }
    }

    private function UpdateSelectCurrentExhibitionListSelectorObjectVoid(){
        if(selectedVisitorObject != null){
            if(selectModeListSelectorObject.text != "Software Manual"){
                selectCurrentExhibitionListSelectorObject.disabled = true;
                ResetSelectCurrentExhibitionListSelectorObject();
                selectCurrentExhibitionListSelectorObject.text = "Please change to Software Manual.";
            }
            else{
                selectCurrentExhibitionListSelectorObject.disabled = false;
                if(selectCurrentExhibitionListSelectorObject.dataSource.size() != collectionGlobalObject.GetExhibitionObjectArray().length){
                    selectCurrentExhibitionListSelectorObject.dataSource.removeAll();
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                        selectCurrentExhibitionListSelectorObject.dataSource.createFromString(collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetNameStruct().nameFullString);
                        selectCurrentExhibitionListSelectorObject.selectedIndex = -1;
                        if(selectedVisitorObject.GetExhibitionCurrentObject() == null){
                            selectCurrentExhibitionListSelectorObject.text = "In Lobby";
                        }
                        else{
                            selectCurrentExhibitionListSelectorObject.text = selectedVisitorObject.GetExhibitionCurrentObject().GetNameStruct().nameFullString;
                        }
                        loopCounter1Int ++;
                    }
                }
                if(selectedVisitorObject.GetExhibitionCurrentObject() != null){
                    if(selectCurrentExhibitionListSelectorObject.text != selectedVisitorObject.GetExhibitionCurrentObject().GetNameStruct().nameFullString){
                        if(selectCurrentExhibitionListSelectorObject.text != "Please change to Software Manual."){
                            selectedVisitorObject.ChangeExhibitionCurrentVoid(CollectionFunction.FindMuseumObject(collectionGlobalObject, EXH, selectCurrentExhibitionListSelectorObject.text));
                        }
                    }
                }
                else{
                    if(selectCurrentExhibitionListSelectorObject.selectedIndex != -1){
                       selectedVisitorObject.ChangeExhibitionCurrentVoid(CollectionFunction.FindMuseumObject(collectionGlobalObject, EXH, selectCurrentExhibitionListSelectorObject.text));
                    }
                }
            }
        }
    }

    private function UpdateSelectModeListSelectorObjectVoid(){
        if(selectedVisitorObject != null){
            if(selectModeListSelectorObject.text == "Hardware Manual"){ selectedVisitorObject.SetVisitorModeEnumVoid(HARDWARE_MANUAL); }
            else if(selectModeListSelectorObject.text == "Software Auto"){ selectedVisitorObject.SetVisitorModeEnumVoid(SOFTWARE_AUTO); }
            else if(selectModeListSelectorObject.text == "Software Manual"){ selectedVisitorObject.SetVisitorModeEnumVoid(SOFTWARE_MANUAL); }
        }
    }

    public function UpdateVisitorButtonObjectArrayVoid(){
        CollectionFunction.ClearArray(visitorButtonObjectArray);
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().userData
                = collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().id;
            visitorButtonObjectArray.push(collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject());
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().onClick = mainButtonObject.onClick;
            loopCounter1Int ++;
        }
    }

}
