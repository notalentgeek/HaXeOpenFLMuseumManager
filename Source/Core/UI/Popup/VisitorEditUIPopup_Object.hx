class VisitorEditUIPopup_Object extends UIPopup_Object{





    /*==================================================*/
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
            "VisitorEditUIPopup_Button",
            Init_Void,
            "layout/VisitorEditUIPopup_Object.xml",
            "Add Museum Object"
        );

    }
    /*==================================================*/





    /*==================================================*/
    public function Assign_Void():Void(){

        super.Assign_Void();




        _Grid                               = _Popup.content.findChild("VisitorEditUIPopup_Object__Grid"                            , Grid          , true);
        allHardwareManual_Button            = _Popup.content.findChild("VisitorEditUIPopup_Object_allHardwareManual_Button"         , Button        , true);
        allSoftwareAuto_Button              = _Popup.content.findChild("VisitorEditUIPopup_Object_allSoftwareAuto_Button"           , Button        , true);
        allSoftwareManual_Button            = _Popup.content.findChild("VisitorEditUIPopup_Object_allSoftwareManual_Button"         , Button        , true);
        currentExhibition_ListSelector      = _Popup.content.findChild("VisitorEditUIPopup_Object_currentExhibition_ListSelector"   , ListSelector  , true);
        exhibitionCurrent_Text              = _Popup.content.findChild("VisitorEditUIPopup_Object_exhibitionCurrent_Text"           , Text          , true);
        exhibitionTarget_Text               = _Popup.content.findChild("VisitorEditUIPopup_Object_exhibitionTarget_Text"            , Text          , true);
        explanation_Button                  = _Popup.content.findChild("VisitorEditUIPopup_Object_explanation_Button"               , Button        , true);
        indexGlobal_Text                    = _Popup.content.findChild("VisitorEditUIPopup_Object_indexGlobal_Text"                 , Text          , true);
        indexLocal_Text                     = _Popup.content.findChild("VisitorEditUIPopup_Object_indexLocal_Text"                  , Text          , true);
        name_TextInput                      = _Popup.content.findChild("VisitorEditUIPopup_Object_name_TextInput"                   , TextInput     , true);
        reset_Button                        = _Popup.content.findChild("VisitorEditUIPopup_Object_reset_Button"                     , Button        , true);
        resetAll_Button                     = _Popup.content.findChild("VisitorEditUIPopup_Object_resetAll_Button"                  , Button        , true);
        sentence_Button                     = _Popup.content.findChild("VisitorEditUIPopup_Object_sentence_Button"                  , Button        , true);
        tagPopular_Button                   = _Popup.content.findChild("VisitorEditUIPopup_Object_tagPopular_Button"                , Button        , true);
        visitor_ListSelector                = _Popup.content.findChild("VisitorEditUIPopup_Object_visitor_ListSelector"             , ListSelector  , true);
        visitorMode_ListSelector            = _Popup.content.findChild("VisitorEditUIPopup_Object_visitorMode_ListSelector"         , ListSelector  , true);
        visitorPrevious_Text                = _Popup.content.findChild("VisitorEditUIPopup_Object_visitorPrevious_Text"             , Text          , true);

    }
    /*==================================================*/





    /*==================================================*/
    public function Button_Void():Void(){

        super.Button_Void();





        if(selected_Visitor_Object != null)
            { selected_Visitor_Object._VisitorAgnostic_Object.name_String = name_TextInput.text; }

    }
    /*==================================================*/





    /*==================================================
    This is a function to assign selected visitor data straight from the visitor button.
    For example when the user select visitor from the button and not from the list
        selector (drop down menu), this function will be triggered.*/
    private function CallbackEachVisitor_Void():Void{

        if(_Event:Event.component.userData != null){

            var userData_String         :String             = Std.userData_String(_Event:Event.component.userData);
            var userData_String_Array   :Array<String>      = userData_String.split("*");
            var name_String             :String             = userData_String_Array[1];
            var _Visitor_Object         :Visitor_Object     =
                StaticFunction_Collection.Find_Visitor_Object(_Global_Object, name_String);





            if(_Visitor_Object != null){

                selected_Visitor_Object                             = _Visitor_Object;
                currentExhibition_ListSelector.selectedIndex        = 0;
                name_TextInput.text                                 = selected_Visitor_Object._MuseumAndVisitorAgnostic_Object.name_String;
                visitor_ListSelector.selectedIndex                  = 0;
                visitor_ListSelector.text                           = selected_Visitor_Object._MuseumAndVisitorAgnostic_Object.name_String;
                visitorName_String                                  = visitor_ListSelector.text;
                visitorNamePrev_String                              = visitor_ListSelector.text;

            }

        }

    }
    /*==================================================*/





    /*==================================================*/
    public function Init_Void():Void(){

        super.Init_Void();


        InitVisitorListSelector_Void();
        InitVisitorModeListSelector_Void();
        UpdateCurrentExhibitionListSelector_Void();
        UpdateExhibitionCurrentText_Void();
        UpdateExhibitionTargetText_Void();
        UpdateIndexGlobalText_Void();
        UpdateIndexLocalText_Void();


        allHardwareManual_Button.onClick = function(_Event:Event){

            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){

                _Global_Object._Visitor_Object_Array[loopCounter1_Int]._VisitorMode_Enum = HARDWARE_MANUAL;
                visitorMode_ListSelector.text = "Hardware Manual";





                loopCounter1_Int ++;

            }

        }





        allSoftwareAuto_Button.onClick = function(_Event:Event){

            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){

                _Global_Object._Visitor_Object_Array[loopCounter1_Int]._VisitorMode_Enum = SOFTWARE_AUTO;
                visitorMode_ListSelector.text = "Software Auto";





                loopCounter1_Int ++;

            }

        }





        allSoftwareManual_Button.onClick = function(_Event:Event){

            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){

                _Global_Object._Visitor_Object_Array[loopCounter1_Int]._VisitorMode_Enum = SOFTWARE_MANUAL;
                visitorMode_ListSelector.text = "Software Manual";





                loopCounter1_Int ++;

            }

        }





        explanation_Button.onClick = function(_Event:Event){

            var buttonControl_Int:Int = 0;
            buttonControl_Int |= PopupButton.OK;






            explanation_Popup =
                PopupManager.instance.showList(
                    selected_Visitor_Object
                        ._MuseumAndVisitorAgostic_Object
                        .explanation_String_Array,
                    -1,
                    "Display Explanation",
                    buttonControl_Int,
                    function(_button){}
                );





            /*PENDING: Change the internal function name from the HaxeUI.
            PENDING: Change the 205 height value into a variable.*/
            Std.instance(explanation_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            explanation_Popup.y = _Popup.y;

        }





        sentence_Button.onClick = function(_Event:Event){

            var buttonControl_Int:Int = 0;
            buttonControl_Int |= PopupButton.OK;





            sentence_Popup =
                PopupManager.instance.showList(
                    selected_Visitor_Object
                        ._MuseumAndVisitorAgnostic_Object
                        .sentence_String_Array,
                    -1,
                    "Display Sentence",
                    buttonControl_Int,
                    function(_button){}
                );





            Std.instance(sentence_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            sentence_Popup.y = _Popup.y;

        }





        reset_Button.onClick = function(_Event:Event)
            { if(selected_Visitor_Object != null){ selected_Visitor_Object.Reset_Void(); } }





        resetAll_Button.onClick = function(_Event:Event){

            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){

                _Global_Object._Visitor_Object_Array[loopCounter1_Int].Reset_Void();





                loopCounter1_Int ++;

            }

        }





        tagPopular_Button.onClick = function(_Event:Event){

            var buttonControl_Int:Int = 0;
            buttonControl_Int |= PopupButton.OK;





            var tagPopular_String_Array:Array<String> = new Array<String>();
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < selected_Visitor_Object._TagCounter_Struct_Array.length){

                var displayString:String = selected_Visitor_Object._TagCounter_Struct_Array[loopCounter1_Int].tagCounterInt +
                    " " +
                    selected_Visitor_Object
                        ._TagCounter_Struct_Array[loopCounter1_Int]
                        ._Tag_Object
                        ._TagAgnostic_Object
                        .name_String;
                tagPopular_String_Array.push(displayString);





                loopCounter1_Int ++;

            }





            tagPopular_Popup =
                PopupManager.instance.showList(
                    tagPopular_String_Array,
                    -1,
                    "Display Popular Tag",
                    buttonControl_Int,
                    function(_button){}
                );





            Std.instance(tagPopular_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            tagPopular_Popup.y = _Popup.y;

        }





        CallbackEachVisitor_Void();





    }
    /*==================================================*/





    /*==================================================*/
    private function InitVisitorListSelector_Void():Void{

        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){

            visitor_ListSelector
                .dataSource
                .createFromString(
                    _Global_Object
                        ._Visitor_Object_Array[loopCounter1_Int]
                        ._MuseumAndVisitorAgnostic_Object
                        .name_String
                );





            loopCounter1_Int ++;

        }

    }
    /*==================================================*/





    /*==================================================*/
    private function InitVisitorModeListSelector_Void():Void{

        if(
            visitorMode_ListSelector    != null &&
            selected_Visitor_Object     != null
        ){

            if(selected_Visitor_Object.VisitorMode_Enum         == HARDWARE_MANUAL)     { visitorMode_ListSelector.text = "Hardware Manual"; }
            else if(selected_Visitor_Object.VisitorMode_Enum    == SOFTWARE_AUTO)       { visitorMode_ListSelector.text = "Software Auto"; }
            else if(selected_Visitor_Object.VisitorMode_Enum    == SOFTWARE_MANUAL)     { visitorMode_ListSelector.text = "Software Manual"; }

        }

    }
    /*==================================================*/





    /*==================================================*/
    public function Update_Void():Void(){

        super.Update_Void();

    }
    /*==================================================*/




    /*==================================================*/
    private function UpdateCurrentExhibitionListSelector_Void():Void{

        if(selected_Visitor_Object != null){

            if(visitorMode_ListSelector.text != "Software Manual"){

                currentExhibition_ListSelector.disabled     = true;
                currentExhibition_ListSelector.text         = "Please change to Software Manual.";





                InitExhibitionCurrentListSelector_Void();

            }
            else{

                currentExhibition_ListSelector.disabled = false;





                if(currentExhibition_ListSelector.dataSource.size() != _Global_Object.exhibition_Museum_Object_Array.length){

                    currentExhibition_ListSelector.dataSource.removeAll();





                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < _Global_Object.exhibition_Museum_Object_Array.length){

                        currentExhibition_ListSelector.dataSource.createFromString(
                            _Global_Object
                                .exhibition_Museum_Object_Array[loopCounter1_Int]
                                ._MuseumAndVisitorAgnostic_Object
                                ._Name_Struct
                                .full_String
                        );
                        currentExhibition_ListSelector.selectedIndex = -1;





                        if(
                            selected_Visitor_Object.exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    == "EXH_LOB" &&
                            selected_Visitor_Object.exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   == "Exhibition Lobby"
                        ){ currentExhibition_ListSelector.text = "In Lobby"; }
                        else{

                            currentExhibition_ListSelector.text =
                                selected_Visitor_Object
                                    .exhibitionCurrent_Museum_Object
                                    ._MuseumAndVIsitorAgnostic_Object
                                    ._Name_Struct
                                    .full_String;

                        }





                        loopCounter1_Int ++;

                    }

                }





                if(selected_Visitor_Object.exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String != null){

                    if(
                        currentExhibition_ListSelector.text !=
                            selected_Visitor_Object
                                .exhibitionCurrent_Museum_Object
                                ._MuseumAndVIsitorAgnostic_Object
                                ._Name_Struct
                                .full_String
                    ){

                        if(currentExhibition_ListSelector.text != "Please change to Software Manual."){

                            selected_Visitor_Object.exhibitionCurrent_Museum_Object =
                                StaticFunction_Collection.Find_Museum_Object(
                                    _Global_Object,
                                    EXH,
                                    currentExhibition_ListSelector.text
                                );

                        }

                    }

                }
                else{

                    if(currentExhibition_ListSelector.selectedIndex != -1){

                       selected_Visitor_Object.exhibitionCurrent_Museum_Object =
                            StaticFunction_Collection.Find_Museum_Object(
                                _Global_Object,
                                EXH,
                                currentExhibition_ListSelector.text
                            );

                    }

                }

            }

        }

    }
    /*==================================================*/





    /*==================================================*/
    private function UpdateExhibitionCurrentText_Void():Void{

        if(selected_Visitor_Object != null){

            if(selected_Visitor_Object.exhibitionCurrent_Museum_Object == null)
                { exhibitionCurrent_Text.text = "In Lobby"; }
            else{

                exhibitionCurrent_Text.text =
                    selected_Visitor_Object
                        .exhibitionCurrent_Museum_Object
                        ._MuseumAndVisitorAgnostic_Object
                        .name_Struct
                        .full_String
                        .nameFullString;

            }

        }

    }
    /*==================================================*/





    /*==================================================
    This function is for updating the exhibition target.
    So as soon the target exhibitions are modified then the displayed text
        is also changed accordingly.*/
    private function UpdateExhibitionTargetText_Void():Void{

        if(selected_Visitor_Object != null){

            var exhibitionTargetNameFull_String:String = null;





            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < selected_Visitor_Object.exhibitionTarget_Museum_Object_Array.length){

                if(loopCounter1_Int == selected_Visitor_Object.exhibitionTarget_Museum_Object_Array.length - 1){

                    exhibitionTargetNameFull_String =
                        exhibitionTargetNameFull_String +
                        selected_Visitor_Object
                            .exhibitionTarget_Museum_Object_Array[loopCounter1_Int]
                            ._MuseumAndVisitorAgnostic_Object
                            ._Name_Struct
                            .full_String;

                }
                else{

                    exhibitionTargetNameFull_String =
                        exhibitionTargetNameFull_String +
                            selected_Visitor_Object
                                .exhibitionTarget_Museum_Object_Array[loopCounter1_Int]
                                ._MuseumAndVisitorAgnostic_Object
                                ._Name_Struct.full_String +
                        "\n";

                }





                loopCounter1_Int ++;

            }





            exhibitionTarget_Text.text = exhibitionTargetNameFull_String;

        }

    }
    /*==================================================*/





    /*==================================================*/
    private function UpdateIndexGlobalText_Void():Void{

        if(selected_Visitor_Object != null){

            indexGlobal_Text.text =
                Std.string(
                    selected_Visitor_Object
                        ._MuseumAndVisitorAgnostic_Object
                        ._Index_Struct
                        .global_Int
                );

        }

    }
    /*==================================================*/





    /*==================================================*/
    private function UpdateIndexLocalText_Void():Void{

        if(selected_Visitor_Object != null){

            indexLocal_Text.text =
                Std.string(
                    selected_Visitor_Object
                        ._MuseumAndVisitorAgnostic_Object
                        ._Index_Struct
                        .local_Int
                );

        }

    }
    /*==================================================*/




    public function UpdateVoid(){
        var updateVisitorButtonBool:Bool = false;
        if(visitor_Button_Array.length != _Global_Object._Visitor_Object_Array.length){ updateVisitorButtonBool = true; }
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){
            if(visitor_Button_Array[loopCounter1_Int] != _Global_Object._Visitor_Object_Array[loopCounter1_Int].GetVisitorUIObject().GetButtonObject()){
                if(_Global_Object._Visitor_Object_Array[loopCounter1_Int].GetVisitorUIObject().GetButtonObject().id != null){ updateVisitorButtonBool = true; }
                else if(_Global_Object._Visitor_Object_Array[loopCounter1_Int].GetVisitorUIObject().GetButtonObject().id == null){ updateVisitorButtonBool = false; }
            }
            else{ updateVisitorButtonBool = false; }
            loopCounter1_Int ++;
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
                InitVisitorModeListSelector_Void();

                InitVisitorListSelector_Void();

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

                UpdateExhibitionCurrentText_Void();
                UpdateDisplayExplanationTextObjectVoid();
                UpdateDisplayPopularTagListSelectorObjectVoid();
                UpdateDisplaySentenceListViewObjectVoid();
                UpdateExhibitionTargetText_Void();
                UpdateIndexGlobalText_Void();
                UpdateIndexLocalText_Void();
                UpdateCurrentExhibitionListSelector_Void();
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
        if(name_TextInput != null && selected_Visitor_Object != null){ name_TextInput.text = selected_Visitor_Object._MuseumAndVisitorAgnostic_Object.nameString; }
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
    private function UpdateDisplayExplanationTextObjectVoid(){
        if(explanation_Popup != null){
            Std.instance(explanation_Popup.GetContentObject(), ListPopupContent).GetListObject().height = 205;
            explanation_Popup.y = _Popup.y;
            var updateExplanationBool:Bool = false;
            var loopCounter1_Int:Int = 0;
            if(selectedVisitorExplanation_String_Array.length != selected_Visitor_Object.GetExplanationStringArray().length){ updateExplanationBool = true; }
            while(loopCounter1_Int < selected_Visitor_Object.GetExplanationStringArray().length){
                if(updateExplanationBool == true){ break; }
                if(selectedVisitorExplanation_String_Array[loopCounter1_Int] != selected_Visitor_Object.GetExplanationStringArray()[loopCounter1_Int]){
                    updateExplanationBool = true;
                    break;
                }
                loopCounter1_Int ++;
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
            var loopCounter1_Int:Int = 0;
            if(
                selectedVisitorTagPopularCount_Int_Array.length       != selected_Visitor_Object.GetTagCounterStructArray().length ||
                selectedVisitorTagPopularName_String_Array.length   != selected_Visitor_Object.GetTagCounterStructArray().length
            ){ updateTagBool = true; }
            while(loopCounter1_Int < selected_Visitor_Object.GetTagCounterStructArray().length){
                if(updateTagBool == true){ break; }
                if(selectedVisitorTagPopularCount_Int_Array[loopCounter1_Int] != selected_Visitor_Object.GetTagCounterStructArray()[loopCounter1_Int].tagCounterInt){ updateTagBool = true; break; }
                if(selectedVisitorTagPopularName_String_Array[loopCounter1_Int] != selected_Visitor_Object.GetTagCounterStructArray()[loopCounter1_Int].tagObject._MuseumAndVisitorAgnostic_Object.nameString){ updateTagBool = true; break; }
                loopCounter1_Int ++;
            }
            if(updateTagBool == true){
                CollectionFunction.ClearArray(selectedVisitorTagPopularCount_Int_Array);
                CollectionFunction.ClearArray(selectedVisitorTagPopularName_String_Array);
                Std.instance(tagPopular_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < selected_Visitor_Object.GetTagCounterStructArray().length){

                    selectedVisitorTagPopularCount_Int_Array.push(selected_Visitor_Object.GetTagCounterStructArray()[loopCounter2Int].tagCounterInt);
                    selectedVisitorTagPopularName_String_Array.push(selected_Visitor_Object.GetTagCounterStructArray()[loopCounter2Int].tagObject._MuseumAndVisitorAgnostic_Object.nameString);

                    Std.instance(tagPopular_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(
                        selected_Visitor_Object.GetTagCounterStructArray()[loopCounter2Int].tagCounterInt +
                        " " +
                        selected_Visitor_Object.GetTagCounterStructArray()[loopCounter2Int].tagObject._MuseumAndVisitorAgnostic_Object.nameString
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
            var loopCounter1_Int:Int = 0;
            if(selectedVisitorSentence_String_Array.length != selected_Visitor_Object.GetSentenceStringArray().length){ updateSentenceBool = true; }
            while(loopCounter1_Int < selected_Visitor_Object.GetSentenceStringArray().length){
                if(updateSentenceBool == true){ break; }
                if(selectedVisitorSentence_String_Array[loopCounter1_Int] != selected_Visitor_Object.GetSentenceStringArray()[loopCounter1_Int]){
                    updateSentenceBool = true;
                    break;
                }
                loopCounter1_Int ++;
            }
            if(updateSentenceBool == true){
                CollectionFunction.ClearArray(selectedVisitorSentence_String_Array);
                Std.instance(sentence_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.removeAll();
                var loopCounter2Int:Int = 0;
                while(loopCounter2Int < selected_Visitor_Object.GetSentenceStringArray().length){
                    if(selected_Visitor_Object._MuseumAndVisitorAgnostic_Object.nameString == "Visitor 1"){ trace(selected_Visitor_Object.GetSentenceStringArray()[loopCounter2Int]); }
                    selectedVisitorSentence_String_Array.push(selected_Visitor_Object.GetSentenceStringArray()[loopCounter2Int]);
                    Std.instance(sentence_Popup.GetContentObject(), ListPopupContent).GetListObject().dataSource.createFromString(selectedVisitorSentence_String_Array[selectedVisitorSentence_String_Array.length - 1]);

                    loopCounter2Int ++;
                }
            }
        }
    }

    private function UpdateIndexGlobalText_Void(){
        if(selected_Visitor_Object != null){ indexGlobal_Text.text = Std.string(selected_Visitor_Object.GetIndexGlobalInt()); }
    }

    private function UpdateIndexLocalText_Void(){
        if(selected_Visitor_Object != null){ indexLocal_Text.text = Std.string(selected_Visitor_Object.GetIndexLocalInt()); }
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
        var loopCounter1_Int:Int = 0;
        while(loopCounter1_Int < _Global_Object._Visitor_Object_Array.length){
            _Global_Object._Visitor_Object_Array[loopCounter1_Int].GetVisitorUIObject().GetButtonObject().userData
                = _Global_Object._Visitor_Object_Array[loopCounter1_Int].GetVisitorUIObject().GetButtonObject().id;
            visitor_Button_Array.push(_Global_Object._Visitor_Object_Array[loopCounter1_Int].GetVisitorUIObject().GetButtonObject());
            _Global_Object._Visitor_Object_Array[loopCounter1_Int].GetVisitorUIObject().GetButtonObject().onClick = _Button.onClick;
            loopCounter1_Int ++;
        }
    }

}
