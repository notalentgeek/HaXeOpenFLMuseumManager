class VisitorEditUIPopup_Object{





    /*==================================================*/
    private var _Button                                         (null, null)        :Button             = null;
    private var _Global_Object                                  (null, null)        :CollectionGlobal   = null;
    private var _Grid                                           (null, null)        :Grid               = null;
    private var _Popup                                          (null, null)        :Popup              = null;
    private var allHardwareManual_Button                        (null, null)        :Button             = null;
    private var allSoftwareAuto_Button                          (null, null)        :Button             = null;
    private var allSoftwareManual_Button                        (null, null)        :Button             = null;
    private var currentExhibition_ListSelector                  (null, null)        :ListSelector       = null;
    private var exhibitionCurrent_Text                          (null, null)        :Text               = null;
    private var exhibitionTarget_Text                           (null, null)        :Text               = null;
    private var explanation_Button                              (null, null)        :Button             = null;
    private var explanation_Popup                               (null, null)        :Popup              = null;
    private var indexGlobal_Text                                (null, null)        :Text               = null;
    private var indexLocal_Text                                 (null, null)        :Text               = null;
    private var name_TextInput                                  (null, null)        :TextInput          = null;
    private var reset_Button                                    (null, null)        :Button             = null;
    private var resetAll_Button                                 (null, null)        :Button             = null;
    private var selected_Visitor_Object                         (null, null)        :ObjectVisitor      = null;
    private var selectedVisitorExplanation_String_Array         (null, null)        :Array<String>      = new Array<String>();
    private var selectedVisitorSentence_String_Array            (null, null)        :Array<String>      = new Array<String>();
    private var selectedVisitorTagPopularCount_Int_Array        (null, null)        :Array<Int>         = new Array<Int>();
    private var selectedVisitorTagPopularName_String_Array      (null, null)        :Array<String>      = new Array<String>();
    private var sentence_Button                                 (null, null)        :Button             = null;
    private var sentence_Popup                                  (null, null)        :Popup              = null;
    private var tagPopular_Button                               (null, null)        :Button             = null;
    private var tagPopular_Popup                                (null, null)        :Popup              = null;
    private var visitor_Button_Array                            (null, null)        :Array<Button>      = new Array<Button>();
    private var visitor_ListSelector                            (null, null)        :ListSelector       = null;
    private var visitorMode_ListSelector                        (null, null)        :ListSelector       = null;
    private var visitorModePrev_String                          (null, null)        :String             = null;
    private var visitorName_String                              (null, null)        :String             = null;
    private var visitorNamePrev_String                          (null, null)        :String             = null;
    private var visitorPrevious_Text                            (null, null)        :Text               = null;
    /*==================================================*/





    public function new(
        __Global_Object     :CollectionGlobal,
        _root                       :Root
    ){

        _Global_Object      = __Global_Object;
        _Button            = _root.findChild("UIPopupEditVisitorObjectButton", Button, true);
        _Button.onClick    = function(_e){

            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupEditObjectVisitor.xml");
            _Popup = PopupManager.instance.showCustom(iDisplayObject, "Edit Visitor", buttonControlInt, function(_button){

                if(_button == PopupButton.OK){
                    if(selected_Visitor_Object != null){

                        selected_Visitor_Object.SetNameStringVoid(name_TextInput.text, this);

                    }
                }


            });

            allHardwareManual_Button                 = _Popup.content.findChild("UIPopupEditObjectVisitor_ButtonChangeAllHardwareManual"    , Button        , true);
            allSoftwareAuto_Button                   = _Popup.content.findChild("UIPopupEditObjectVisitor_ButtonChangeAllSoftwareAuto"      , Button        , true);
            allSoftwareManual_Button                 = _Popup.content.findChild("UIPopupEditObjectVisitor_ButtonChangeAllSoftwareManual"    , Button        , true);
            exhibitionCurrent_Text                  = _Popup.content.findChild("UIPopupEditObjectVisitor_DisplayCurrentExhibition"         , Text          , true);
            explanation_Button                      = _Popup.content.findChild("UIPopupEditObjectVisitor_ButtonDisplayExplanation"         , Button        , true);
            tagPopular_Button                       = _Popup.content.findChild("UIPopupEditObjectVisitor_ButtonDisplayPopularTag"          , Button        , true);
            visitorPrevious_Text                    = _Popup.content.findChild("UIPopupEditObjectVisitor_DisplayPreviousVisitor"           , Text          , true);
            sentence_Button                         = _Popup.content.findChild("UIPopupEditObjectVisitor_ButtonDisplaySentence"            , Button        , true);
            exhibitionTarget_Text                   = _Popup.content.findChild("UIPopupEditObjectVisitor_DisplayTargetExhibition"          , Text          , true);
            indexGlobal_Text                 = _Popup.content.findChild("UIPopupEditObjectVisitor_DisplayVisitorIndexGlobal"        , Text          , true);
            indexLocal_Text                  = _Popup.content.findChild("UIPopupEditObjectVisitor_DisplayVisitorIndexLocal"         , Text          , true);
            _Grid                                          = _Popup.content.findChild("UIPopupEditObjectVisitor_Grid"                             , Grid          , true);
            name_TextInput                            = _Popup.content.findChild("UIPopupEditObjectVisitor_InputName"                        , TextInput     , true);
            resetAll_Button                                = _Popup.content.findChild("UIPopupEditObjectVisitor_ButtonResetAll"                   , Button        , true);
            reset_Button                                   = _Popup.content.findChild("UIPopupEditObjectVisitor_ButtonReset"                      , Button        , true);
            currentExhibition_ListSelector           = _Popup.content.findChild("UIPopupEditObjectVisitor_SelectCurrentExhibition"          , ListSelector  , true);
            visitorMode_ListSelector                        = _Popup.content.findChild("UIPopupEditObjectVisitor_SelectMode"                       , ListSelector  , true);
            visitor_ListSelector                     = _Popup.content.findChild("UIPopupEditObjectVisitor_SelectVisitor"                    , ListSelector  , true);

            currentExhibition_ListSelector.method    = "default";
            visitorMode_ListSelector.method                 = "default";
            visitor_ListSelector.method              = "default";

            ResetSelectVisitorListSelectorObjectVoid();

            if(_e.component.userData != null){
                var string:String = Std.string(_e.component.userData);
                var stringArray:Array<String> = string.split("*");
                var nameString:String = stringArray[1];
                var visitorObject:ObjectVisitor = CollectionFunction.FindVisitorObject(_Global_Object, nameString);

                if(visitorObject != null){

                    selected_Visitor_Object = visitorObject;
                    name_TextInput.text = selected_Visitor_Object.GetNameString();
                    currentExhibition_ListSelector.selectedIndex = 0;
                    visitor_ListSelector.selectedIndex = 0;
                    visitor_ListSelector.text = selected_Visitor_Object.GetNameString();
                    visitorName_String = visitor_ListSelector.text;
                    visitorNamePrev_String = visitor_ListSelector.text;

                    ResetSelectVisitorListSelectorObjectVoid();

                }
            }

            allHardwareManual_Button.onClick = function(_e){
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){
                    _Global_Object.GetVisitorObjectArray()[loopCounter1Int].SetVisitorModeEnumVoid(HARDWARE_MANUAL);
                    visitorMode_ListSelector.text = "Hardware Manual";
                    loopCounter1Int ++;
                }
            }
            allSoftwareAuto_Button.onClick = function(_e){
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){
                    _Global_Object.GetVisitorObjectArray()[loopCounter1Int].SetVisitorModeEnumVoid(SOFTWARE_AUTO);
                    visitorMode_ListSelector.text = "Software Auto";
                    loopCounter1Int ++;
                }
            }
            allSoftwareManual_Button.onClick = function(_e){
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){
                    _Global_Object.GetVisitorObjectArray()[loopCounter1Int].SetVisitorModeEnumVoid(SOFTWARE_MANUAL);
                    visitorMode_ListSelector.text = "Software Manual";
                    loopCounter1Int ++;
                }
            }
            UpdateDisplayCurrentExhibitionTextObjectVoid();
            explanation_Button.onClick = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                explanation_Popup = PopupManager.instance.showList(selected_Visitor_Object.GetExplanationStringArray(), -1, "Display Explanation", buttonControlInt, function(_button){});
                Std.instance(explanation_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
                explanation_Popup.y = _Popup.y;

            }
            tagPopular_Button.onClick = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                var displayStringArray:Array<String> = new Array<String>();
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < selected_Visitor_Object.GetTagCounterStructArray().length){

                    var displayString:String = selected_Visitor_Object.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt +
                        "" +
                        selected_Visitor_Object.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString();
                    displayStringArray.push(displayString);
                    loopCounter1Int ++;

                }

                tagPopular_Popup = PopupManager.instance.showList(displayStringArray, -1, "Display Popular Tag", buttonControlInt, function(_button){});
                Std.instance(tagPopular_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
                tagPopular_Popup.y = _Popup.y;

            }
            sentence_Button.onClick = function(_e){

                var buttonControlInt:Int = 0;
                buttonControlInt |= PopupButton.OK;

                sentence_Popup = PopupManager.instance.showList(selected_Visitor_Object.GetSentenceStringArray(), -1, "Display Sentence", buttonControlInt, function(_button){});
                Std.instance(sentence_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
                sentence_Popup.y = _Popup.y;

            }
            UpdateDisplayTargetExhibitionTextObjectVoid();
            UpdateDisplayVisitorIndexGlobalTextObjectVoid();
            UpdateDisplayVisitorIndexLocalTextObjectVoid();
            reset_Button.onClick = function(_e){

                if(selected_Visitor_Object != null){
                    selected_Visitor_Object.ResetVoid();
                }

            }
            resetAll_Button.onClick = function(_e){

                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){
                    _Global_Object.GetVisitorObjectArray()[loopCounter1Int].ResetVoid();
                    loopCounter1Int ++;
                }

            }
            UpdateSelectCurrentExhibitionListSelectorObjectVoid();
            ResetSelectModeListSelectorObjectVoid();

        }

    }

    public function UpdateVoid(){
        var updateVisitorButtonBool:Bool = false;
        if(visitor_Button_Array.length != _Global_Object.GetVisitorObjectArray().length){ updateVisitorButtonBool = true; }
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){
            if(visitor_Button_Array[loopCounter1Int] != _Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject()){
                if(_Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().id != null){ updateVisitorButtonBool = true; }
                else if(_Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().id == null){ updateVisitorButtonBool = false; }
            }
            else{ updateVisitorButtonBool = false; }
            loopCounter1Int ++;
        }
        if(updateVisitorButtonBool == true){
            UpdateVisitorButtonObjectArrayVoid();
        }
        if(_Popup != null){

            visitorName_String = visitor_ListSelector.text;
            if(visitorName_String != visitorNamePrev_String){

                selected_Visitor_Object = CollectionFunction.FindVisitorObject(_Global_Object, visitorName_String);
                if(currentExhibition_ListSelector != null && selected_Visitor_Object != null){
                    if(selected_Visitor_Object.GetExhibitionCurrentObject() == null){
                        currentExhibition_ListSelector.text = "In Lobby";
                    }
                    else{
                        currentExhibition_ListSelector.text = selected_Visitor_Object.GetExhibitionCurrentObject().GetNameStruct().nameFullString;
                    }
                }
                visitorNamePrev_String = visitorName_String;

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

            if(selected_Visitor_Object != null){

                explanation_Button.disabled = false;
                tagPopular_Button.disabled = false;
                tagPopular_Button.disabled = false;
                sentence_Button.disabled = false;
                sentence_Button.disabled = false;
                name_TextInput.disabled = false;
                reset_Button.disabled = false;
                currentExhibition_ListSelector.disabled = false;
                visitorMode_ListSelector.disabled = false;

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

            if(visitor_ListSelector.selectedIndex == -1){

                explanation_Button.disabled = true;
                tagPopular_Button.disabled = true;
                tagPopular_Button.disabled = true;
                sentence_Button.disabled = true;
                sentence_Button.disabled = true;
                name_TextInput.disabled = true;
                reset_Button.disabled = true;
                currentExhibition_ListSelector.disabled = true;
                visitorMode_ListSelector.disabled = true;

            }

        }

    }

    private function ResetDisplayCurrentExhibitionTextObjectVoid(){
        if(exhibitionCurrent_Text != null){
            exhibitionCurrent_Text.text = "";
        }
    }
    private function ResetDisplayExplanationTextObjectVoid(){
        if(explanation_Popup != null){
            Std.instance(explanation_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
        }
    }
    private function ResetDisplayPopularTagListSelectorObjectVoid(){
        if(tagPopular_Popup != null){
            Std.instance(tagPopular_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
        }
    }
    private function ResetDisplaySentenceListViewObjectVoid(){
        if(sentence_Popup != null){
            Std.instance(sentence_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
        }
    }
    private function ResetDisplayTargetExhibitionTextObjectVoid(){
        if(exhibitionTarget_Text != null){ exhibitionTarget_Text.text = ""; }
    }
    private function ResetDisplayVisitorIndexGlobalTextObjectVoid(){
        if(indexGlobal_Text != null){ indexGlobal_Text.text = ""; }
    }
    private function ResetDisplayVisitorIndexLocalTextObjectVoid(){
        if(indexLocal_Text != null){ indexLocal_Text.text = ""; }
    }
    private function ResetInputNameTextInputObjectVoid(){
        if(name_TextInput != null && selected_Visitor_Object != null){ name_TextInput.text = selected_Visitor_Object.GetNameString(); }
    }
    private function ResetSelectCurrentExhibitionListSelectorObject(){
        if(currentExhibition_ListSelector != null && selected_Visitor_Object != null){
            currentExhibition_ListSelector.selectedIndex = -1;
            if(selected_Visitor_Object.GetExhibitionCurrentObject() != null){
                currentExhibition_ListSelector.text = selected_Visitor_Object.GetExhibitionCurrentObject().GetNameStruct().nameFullString;
            }
            else{
                currentExhibition_ListSelector.text = "In Lobby";
            }

        }
    }
    private function ResetSelectModeListSelectorObjectVoid(){
        if(visitorMode_ListSelector != null && selected_Visitor_Object != null){
            if(selected_Visitor_Object.GetVisitorModeEnum() == HARDWARE_MANUAL){ visitorMode_ListSelector.text = "Hardware Manual"; }
            else if(selected_Visitor_Object.GetVisitorModeEnum() == SOFTWARE_AUTO){ visitorMode_ListSelector.text = "Software Auto"; }
            else if(selected_Visitor_Object.GetVisitorModeEnum() == SOFTWARE_MANUAL){ visitorMode_ListSelector.text = "Software Manual"; }
        }
    }

    private function ResetSelectVisitorListSelectorObjectVoid(){

        visitor_ListSelector.dataSource.removeAll();
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){

            visitor_ListSelector.dataSource.createFromString(_Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
            loopCounter1Int ++;

        }

    }

    private function UpdateDisplayCurrentExhibitionTextObjectVoid(){
        if(selected_Visitor_Object != null){
            if(selected_Visitor_Object.GetExhibitionCurrentObject() == null){
                exhibitionCurrent_Text.text = "In Lobby";
            }
            else{
                exhibitionCurrent_Text.text = selected_Visitor_Object.GetExhibitionCurrentObject().GetNameStruct().nameFullString;
            }
        }
    }
    private function UpdateDisplayExplanationTextObjectVoid(){
        if(explanation_Popup != null){
            Std.instance(explanation_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            explanation_Popup.y = _Popup.y;
            var updateExplanationBool:Bool = false;
            var loopCounter1Int:Int = 0;
            if(selectedVisitorExplanation_String_Array.length != selected_Visitor_Object.GetExplanationStringArray().length){ updateExplanationBool = true; }
            while(loopCounter1Int < selected_Visitor_Object.GetExplanationStringArray().length){
                if(updateExplanationBool == true){ break; }
                if(selectedVisitorExplanation_String_Array[loopCounter1Int] != selected_Visitor_Object.GetExplanationStringArray()[loopCounter1Int]){
                    updateExplanationBool = true;
                    break;
                }
                loopCounter1Int ++;
            }
            if(updateExplanationBool == true){
                CollectionFunction.ClearArray(selectedVisitorExplanation_String_Array);
                Std.instance(explanation_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < selected_Visitor_Object.GetExplanationStringArray().length){
                    selectedVisitorExplanation_String_Array.push(selected_Visitor_Object.GetExplanationStringArray()[loopCounter2Int]);
                    Std.instance(explanation_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(selected_Visitor_Object.GetExplanationStringArray()[loopCounter2Int]);
                    loopCounter2Int ++;
                }
            }
        }
    }

    private function UpdateDisplayPopularTagListSelectorObjectVoid(){
        if(tagPopular_Popup != null){
            Std.instance(tagPopular_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            tagPopular_Popup.y = _Popup.y;
            var updateTagBool:Bool = false;
            var loopCounter1Int:Int = 0;
            if(
                selectedVisitorTagPopularCount_Int_Array.length       != selected_Visitor_Object.GetTagCounterStructArray().length ||
                selectedVisitorTagPopularName_String_Array.length   != selected_Visitor_Object.GetTagCounterStructArray().length
            ){ updateTagBool = true; }
            while(loopCounter1Int < selected_Visitor_Object.GetTagCounterStructArray().length){
                if(updateTagBool == true){ break; }
                if(selectedVisitorTagPopularCount_Int_Array[loopCounter1Int] != selected_Visitor_Object.GetTagCounterStructArray()[loopCounter1Int].tagCounterInt){ updateTagBool = true; break; }
                if(selectedVisitorTagPopularName_String_Array[loopCounter1Int] != selected_Visitor_Object.GetTagCounterStructArray()[loopCounter1Int].tagObject.GetNameString()){ updateTagBool = true; break; }
                loopCounter1Int ++;
            }
            if(updateTagBool == true){
                CollectionFunction.ClearArray(selectedVisitorTagPopularCount_Int_Array);
                CollectionFunction.ClearArray(selectedVisitorTagPopularName_String_Array);
                Std.instance(tagPopular_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < selected_Visitor_Object.GetTagCounterStructArray().length){

                    selectedVisitorTagPopularCount_Int_Array.push(selected_Visitor_Object.GetTagCounterStructArray()[loopCounter2Int].tagCounterInt);
                    selectedVisitorTagPopularName_String_Array.push(selected_Visitor_Object.GetTagCounterStructArray()[loopCounter2Int].tagObject.GetNameString());

                    Std.instance(tagPopular_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(
                        selected_Visitor_Object.GetTagCounterStructArray()[loopCounter2Int].tagCounterInt +
                        " " +
                        selected_Visitor_Object.GetTagCounterStructArray()[loopCounter2Int].tagObject.GetNameString()
                    );
                    loopCounter2Int ++;
                }
            }
        }
    }

    private function UpdateDisplaySentenceListViewObjectVoid(){
        if(sentence_Popup != null){
            Std.instance(sentence_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            sentence_Popup.y = _Popup.y;
            var updateSentenceBool:Bool = false;
            var loopCounter1Int:Int = 0;
            if(selectedVisitorSentence_String_Array.length != selected_Visitor_Object.GetSentenceStringArray().length){ updateSentenceBool = true; }
            while(loopCounter1Int < selected_Visitor_Object.GetSentenceStringArray().length){
                if(updateSentenceBool == true){ break; }
                if(selectedVisitorSentence_String_Array[loopCounter1Int] != selected_Visitor_Object.GetSentenceStringArray()[loopCounter1Int]){
                    updateSentenceBool = true;
                    break;
                }
                loopCounter1Int ++;
            }
            if(updateSentenceBool == true){
                CollectionFunction.ClearArray(selectedVisitorSentence_String_Array);
                Std.instance(sentence_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < selected_Visitor_Object.GetSentenceStringArray().length){
                    if(selected_Visitor_Object.GetNameString() == "Visitor 1"){ trace(selected_Visitor_Object.GetSentenceStringArray()[loopCounter2Int]); }
                    selectedVisitorSentence_String_Array.push(selected_Visitor_Object.GetSentenceStringArray()[loopCounter2Int]);
                    Std.instance(sentence_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(selectedVisitorSentence_String_Array[selectedVisitorSentence_String_Array.length - 1]);

                    loopCounter2Int ++;
                }
            }
        }
    }

    private function UpdateDisplayTargetExhibitionTextObjectVoid(){
        if(selected_Visitor_Object != null){
            var targetExhibitionNameFullString:String = "";
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < selected_Visitor_Object.GetExhibitionTargetObjectArray().length){
                if(loopCounter1Int == selected_Visitor_Object.GetExhibitionTargetObjectArray().length - 1){
                    targetExhibitionNameFullString = targetExhibitionNameFullString + selected_Visitor_Object.GetExhibitionTargetObjectArray()[loopCounter1Int].GetNameStruct().nameFullString;
                }
                else{
                    targetExhibitionNameFullString = targetExhibitionNameFullString + selected_Visitor_Object.GetExhibitionTargetObjectArray()[loopCounter1Int].GetNameStruct().nameFullString + "\n";
                }
                loopCounter1Int ++;
            }
            exhibitionTarget_Text.text = targetExhibitionNameFullString;
        }
    }

    private function UpdateDisplayVisitorIndexGlobalTextObjectVoid(){
        if(selected_Visitor_Object != null){ indexGlobal_Text.text = Std.string(selected_Visitor_Object.GetIndexGlobalInt()); }
    }

    private function UpdateDisplayVisitorIndexLocalTextObjectVoid(){
        if(selected_Visitor_Object != null){ indexLocal_Text.text = Std.string(selected_Visitor_Object.GetIndexLocalInt()); }
    }

    private function UpdateSelectCurrentExhibitionListSelectorObjectVoid(){
        if(selected_Visitor_Object != null){
            if(visitorMode_ListSelector.text != "Software Manual"){
                currentExhibition_ListSelector.disabled = true;
                ResetSelectCurrentExhibitionListSelectorObject();
                currentExhibition_ListSelector.text = "Please change to Software Manual.";
            }
            else{
                currentExhibition_ListSelector.disabled = false;
                if(currentExhibition_ListSelector.dataSource.size() != _Global_Object.GetExhibitionObjectArray().length){
                    currentExhibition_ListSelector.dataSource.removeAll();
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < _Global_Object.GetExhibitionObjectArray().length){
                        currentExhibition_ListSelector.dataSource.createFromString(_Global_Object.GetExhibitionObjectArray()[loopCounter1Int].GetNameStruct().nameFullString);
                        currentExhibition_ListSelector.selectedIndex = -1;
                        if(selected_Visitor_Object.GetExhibitionCurrentObject() == null){
                            currentExhibition_ListSelector.text = "In Lobby";
                        }
                        else{
                            currentExhibition_ListSelector.text = selected_Visitor_Object.GetExhibitionCurrentObject().GetNameStruct().nameFullString;
                        }
                        loopCounter1Int ++;
                    }
                }
                if(selected_Visitor_Object.GetExhibitionCurrentObject() != null){
                    if(currentExhibition_ListSelector.text != selected_Visitor_Object.GetExhibitionCurrentObject().GetNameStruct().nameFullString){
                        if(currentExhibition_ListSelector.text != "Please change to Software Manual."){
                            selected_Visitor_Object.ChangeExhibitionCurrentVoid(CollectionFunction.FindMuseumObject(_Global_Object, EXH, currentExhibition_ListSelector.text));
                        }
                    }
                }
                else{
                    if(currentExhibition_ListSelector.selectedIndex != -1){
                       selected_Visitor_Object.ChangeExhibitionCurrentVoid(CollectionFunction.FindMuseumObject(_Global_Object, EXH, currentExhibition_ListSelector.text));
                    }
                }
            }
        }
    }

    private function UpdateSelectModeListSelectorObjectVoid(){
        if(selected_Visitor_Object != null){
            if(visitorMode_ListSelector.text == "Hardware Manual"){ selected_Visitor_Object.SetVisitorModeEnumVoid(HARDWARE_MANUAL); }
            else if(visitorMode_ListSelector.text == "Software Auto"){ selected_Visitor_Object.SetVisitorModeEnumVoid(SOFTWARE_AUTO); }
            else if(visitorMode_ListSelector.text == "Software Manual"){ selected_Visitor_Object.SetVisitorModeEnumVoid(SOFTWARE_MANUAL); }
        }
    }

    public function UpdateVisitorButtonObjectArrayVoid(){
        CollectionFunction.ClearArray(visitor_Button_Array);
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){
            _Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().userData
                = _Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().id;
            visitor_Button_Array.push(_Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject());
            _Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetVisitorUIObject().GetButtonObject().onClick = _Button.onClick;
            loopCounter1Int ++;
        }
    }

}
